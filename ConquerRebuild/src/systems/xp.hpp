#pragma once
// XP / level-up system (v18).
//
// Ported from the original decompile:
//   CUser::AwardExp     = FUN_1401a80a0 (level-up loop over cq_levexp,
//                         +3 attribute points per level via PowerLost(10),
//                         full heal on level-up, exp clamped at cap)
//   CMsgUserAttrib append (wire keys): FUN_14039e700/e9a0
//                         - entries are 0x1C bytes on the wire
//                         - exp (key 5) is 64-bit: lo at entry+0x14,
//                           hi at entry+0x18 (client Conquer.c case 5)
//                         - attribute points = key 10 (client case 10)
//                         - life/maxlife = keys 0/1 (client case 0/1)
//   Kill exp amount: the exact battle-record share of the original
//   (CMonster slot 0x2b0 attack record -> AwardExp per damager) was not
//   fully extracted yet; until then the amount uses the monstertype
//   columns: (life + level*level) * extra_exp/100 / 10 (>= 1). The
//   extra_exp column is 100 for ~all monsters in the real DB.
#include <cstdint>
#include <map>
#include <mutex>
#include <vector>

#include "core/database.hpp"
#include "protocol/ids.hpp"
#include "systems/combat.hpp"
#include "systems/monsters.hpp"
#include "systems/world.hpp"

namespace conquer {

// 10017 wire keys (verified against client Conquer.c 10017 Process switch)
constexpr uint32_t ATTRIB_EXP    = 5;    // 64-bit value (lo+hi)
constexpr uint32_t ATTRIB_POINTS = 10;   // training/attribute points
constexpr uint32_t MAX_LEVEL_CAP = 140;  // original DAT_14094da38 era cap

// cq_levexp cache: level -> exp needed to advance from that level.
inline std::map<uint32_t, uint64_t>& levexp_table() {
    static std::map<uint32_t, uint64_t> tbl;
    static std::once_flag once;
    std::call_once(once, [] {
        if (active_db()) tbl = active_db()->load_levexp();
        std::printf("[xp] levexp table: %zu levels loaded\n", tbl.size());
    });
    return tbl;
}

// v109: cq_levexp.up_lev_time cache (cell 2 of the same type-0 records).
inline std::map<uint32_t, uint32_t>& levexp_time_table() {
    static std::map<uint32_t, uint32_t> tbl;
    static std::once_flag once;
    std::call_once(once, [] {
        if (active_db()) tbl = active_db()->load_levexp_time();
        std::printf("[xp] levexp up_lev_time: %zu levels loaded\n", tbl.size());
    });
    return tbl;
}

// PORT of FUN_140382f00 (MsgServer.c:634202-634276) — the "exp equivalent of
// N minutes of play" calculation used by action 1086:
//   need = exp(level) clamped to >= 1;  up = up_lev_time(level)
//   rem  = minutes + (int)((float)up * ((float)exp_now / (float)need))
//   walk levels from `level` upward while level < cap:
//     cost = up_lev_time(level);
//     if ((int)rem < cost) { acc += (long long)((float)exp(level) *
//                                              ((float)rem / (float)max(cost,1)));
//                            break; }
//     rem -= cost; acc += exp(level); ++level;
//   if (acc < exp_now) acc = exp_now;
//   result = acc - exp_now
// All intermediate math is single-precision float exactly as in the original
// (the casts are part of the semantics, not an optimisation).
inline int64_t exp_from_minutes(const Player& p, uint32_t minutes) {
    auto& et = levexp_table();
    auto& tt = levexp_time_table();
    int32_t lvl = (int32_t)p.level;
    int64_t cur_exp = (int64_t)p.exp;
    auto e0 = et.find((uint32_t)lvl);
    if (e0 == et.end()) return 0;              // null record -> helper returns 0
    int64_t need = (int64_t)e0->second;
    if (need < 1) need = 1;
    int32_t up = 0;
    auto t0 = tt.find((uint32_t)lvl);
    if (t0 != tt.end()) up = (int32_t)t0->second;
    uint32_t rem = (uint32_t)((int32_t)minutes +
        (int32_t)(int64_t)((float)up * ((float)cur_exp / (float)need)));
    int64_t acc = 0;
    while (lvl < (int32_t)MAX_LEVEL_CAP) {
        auto e = et.find((uint32_t)lvl);
        if (e == et.end()) break;
        int32_t cost = 0;
        auto t = tt.find((uint32_t)lvl);
        if (t != tt.end()) cost = (int32_t)t->second;
        if ((int32_t)rem < cost) {
            int32_t den = cost < 1 ? 1 : cost;
            int64_t gain = (int64_t)e->second;
            acc += (int64_t)((float)gain * ((float)rem / (float)den));
            break;
        }
        rem = rem - (uint32_t)cost;
        acc += (int64_t)e->second;
        ++lvl;
    }
    if (acc < cur_exp) acc = cur_exp;
    return acc - cur_exp;
}

// PORT of FUN_140382d20 (MsgServer.c:634133-634200) — "given an exp amount,
// what level does the player reach and how far into it": used by action 1084.
//   total = amount + current exp
//   walk the type-0 cq_levexp rows from the current level:
//     need = exp(level); if (total < need) break;
//     total -= need; ++level; ++gained;
//   level_out = current_level + gained        (ABSOLUTE new level)
//   pct_out   = (int)((double)total * 100.0 / (double)max(last_need, 1))
// NOTE the percentage uses DOUBLE math here (not the float32 used by 1086);
// the truncation is part of the original behaviour.
inline void exp_split(const Player& p, int64_t amount,
                      int& level_out, int& pct_out) {
    auto& et = levexp_table();
    int32_t start_lvl = (int32_t)p.level;
    auto first = et.find((uint32_t)start_lvl);
    if (first == et.end()) {            // null record -> both outputs are 0
        level_out = 0; pct_out = 0;
        return;
    }
    int64_t total = amount + (int64_t)p.exp;
    int32_t cur = start_lvl;
    uint32_t gained = 0;
    int64_t last_need = (int64_t)first->second;
    while (cur < (int32_t)MAX_LEVEL_CAP) {
        auto e = et.find((uint32_t)cur);
        if (e == et.end()) break;       // missing row keeps the previous need
        last_need = (int64_t)e->second;
        if (total < last_need) break;
        total -= last_need;
        ++cur;
        ++gained;
    }
    level_out = (int)(gained + (uint32_t)start_lvl);
    int64_t den = last_need > 0 ? last_need : 1;
    pct_out = (int)(((double)total * 100.0) / (double)den);
}

// exp granted for one monster kill (approximation documented above)
inline uint64_t kill_exp(const Monster& m) {
    uint64_t base = (uint64_t)m.max_hp + (uint64_t)m.level * m.level;
    uint64_t e = base * (m.extra_exp ? m.extra_exp : 100) / 100 / 10;
    return e < 1 ? 1 : e;
}

// CUser::AwardExp core: accumulate exp, run the level-up loop,
// send the 10017 updates, persist. Returns levels gained.
inline uint32_t award_exp(World& w, Player& p, uint64_t amount) {
    (void)w;
    p.exp += amount;
    auto& tbl = levexp_table();
    uint32_t gained = 0;
    for (;;) {
        auto it = tbl.find(p.level);
        if (it == tbl.end() || p.exp < it->second) break;
        if (p.level >= MAX_LEVEL_CAP) { p.exp = it->second; break; }
        p.exp -= it->second;
        p.level++;
        gained++;
    }
    // exp update (key 5, 64-bit) - always to the killer only
    std::vector<std::pair<uint32_t, uint64_t>> attrs = {{ATTRIB_EXP, p.exp}};
    if (gained > 0) {
        // level-up (original FUN_1401a80a0 tail):
        //  - +3 attribute points per level (PowerLost(10, gained*3))
        //  - full heal (attrib 0 = new max life)
        p.max_hp += gained * 24;      // simple growth until the cq_statistic port
        p.hp = p.max_hp;
        attrs.push_back({ATTRIB_POINTS, (uint64_t)gained * 3});
        attrs.push_back({ATTRIB_LIFE, p.hp});
        attrs.push_back({ATTRIB_MAX_LIFE, p.max_hp});
    }
    if (p.session) {
        Packet ep = build_user_attrib_10017_u64(p.id, attrs);
        p.session->send(ep);
    }
    if (active_db()) active_db()->save_exp_level(p.id, p.exp, p.level);
    return gained;
}

inline uint32_t award_kill_exp(World& w, Player& p, const Monster& m) {
    uint64_t e = kill_exp(m);
    uint32_t gained = award_exp(w, p, e);
    std::printf("[xp] %s killed %s (+%llu exp -> %llu, level %u%s)\n",
                p.name.c_str(), m.name.c_str(),
                (unsigned long long)e, (unsigned long long)p.exp,
                p.level, gained ? " LEVEL UP!" : "");
    return gained;
}

} // namespace conquer
