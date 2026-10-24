#pragma once
// ============================================================================
// WEAPON SKILL (proficiency) SYSTEM - v24 port of the original v6159 logic.
//
// Sources (MsgServer.c / Conquer.c):
//   - CUser::Attack tail (FUN_1401b0500): after a successful hit on a
//     monster, exp = MulDiv(capped_damage, rate+100, 100) with rate from
//     FUN_140180e80 (default 0 -> exp = damage); team members get 20%.
//     Awarded for the equipped weapon type (FUN_14032d440) and half exp
//     for the offhand (FUN_14032d450).
//   - CUser::AddWeaponSkillExp (FUN_140183e30): looks up the skill in the
//     user's list; level>12 -> exp scaled by max(10,(17-level)*20)% then
//     halved (level-up slowdown); exp += gain capped at 0xFFFFFFFF;
//     level-up loop while exp >= req_exp(type, level+1) and level+1 <=
//     max_level (from cq_weapon_skill_up); types 50/619 never gain.
//   - CMsgWeaponSkill 1025 builder FUN_1403b4080: payload
//     [type u4][level u2][exp u4][next_req u4]; sent on skill creation and
//     on level-up. Client parser FUN_008202cf reads wire+4/+8/+0xC/+0x10
//     and refreshes the prof window (FUN_00691ef8(0x3ff,0)).
//   - cq_weapon_skill row: owner_id, type, level, exp, old_level, unlearn.
//     Persisted on save like cq_user (we save dirty rows on disconnect).
//
// Simplifications (documented): the old_level "training time" gate
// (req_uplevtime) and the STR_WEAPON_SKILL_UP talk message are deferred;
// DB save happens at disconnect (original flushes via record pool).
// ============================================================================
#include <cstdint>
#include <cstdio>
#include <unordered_map>
#include <vector>
#include "protocol/packet.hpp"
#include "core/database.hpp"
#include "world.hpp"

namespace conquer {

// ---- CWeaponSkillUp: cq_weapon_skill_up loaded once at startup ---------
class WeaponSkillTable {
public:
    struct UpRow { uint32_t type; uint32_t level; uint32_t req_exp; };

    static WeaponSkillTable& instance() { static WeaponSkillTable t; return t; }

    // Original: CWeaponSkillUp loads "SELECT * FROM cq_weapon_skill_up
    // order by weapontype, level" (FUN_1404c8440 region) plus
    // "SELECT weapontype, max(level) ... group by weapontype".
    void load(IDatabase* db) {
        rows_.clear(); max_.clear();
        if (!db) return;
        for (const auto& r : db->load_weapon_skill_up()) {
            rows_[{r.type, r.level}] = r.req_exp;
            if (r.level > max_[r.type]) max_[r.type] = r.level;
        }
        std::printf("[weaponskill] %zu cq_weapon_skill_up rows loaded\n",
                    rows_.size());
    }

    // req_exp for reaching 'level' (0xFFFFFFFF = not found, matches the
    // original sentinel FUN_1404c7e30)
    uint32_t req_exp(uint32_t type, uint8_t level) const {
        auto it = rows_.find({type, level});
        return it == rows_.end() ? 0xFFFFFFFFu : it->second;
    }
    uint32_t max_level(uint32_t type) const {
        auto it = max_.find(type);
        return it == max_.end() ? 0 : it->second;
    }

private:
    struct Key { uint32_t type; uint32_t level;
        bool operator==(const Key& o) const { return type == o.type && level == o.level; } };
    struct KeyHash { size_t operator()(const Key& k) const {
        return (size_t)k.type * 1000u + k.level; } };
    std::unordered_map<Key, uint32_t, KeyHash> rows_;
    std::unordered_map<uint32_t, uint32_t> max_;
};

// ---- CMsgWeaponSkill 1025 ----------------------------------------------
// Wire: [len:2][type:2=0x401][skillType:4][level:2][pad:2][exp:4][nextReq:4]
// (server builder FUN_1403b4080: payload u4@+0, u2@+4, u4@+8, u4@+0xC;
//  client FUN_008202cf reads wire+4/+8/+0xC/+0x10 -> payload 16 bytes).
inline Packet build_weapon_skill_1025(uint32_t type, uint8_t level,
                                      uint32_t exp, uint32_t next_req) {
    Packet p(1025);
    p.write<uint32_t>(type);       // wire+0x04
    p.write<uint16_t>(level);      // wire+0x08
    p.write<uint16_t>(0);          // wire+0x0A pad (client skips 2 bytes)
    p.write<uint32_t>(exp);        // wire+0x0C
    p.write<uint32_t>(next_req);   // wire+0x10
    p.finalize();
    return p;
}

// ---- CMsgWeaponSkillExp 1104 (0x450) ------------------------------------
// Sent when exp changes WITHOUT a level-up so the client prof bar stays
// live (server builder FUN_1403f0020, client parser FUN_0081f9aa).
// Wire: [len:2][type:2=0x450][exp:4][nextReq:4][skillType:2][flag:1]
//  - flag 0: update the one skill given by skillType
inline Packet build_weapon_exp_1104(uint32_t type, uint32_t exp,
                                    uint32_t next_req) {
    Packet p(1104);
    p.write<uint32_t>(exp);        // wire+0x04
    p.write<uint32_t>(next_req);   // wire+0x08
    p.write<uint16_t>((uint16_t)type); // wire+0x0C
    p.write<uint8_t>(0);           // wire+0x0E flag 0 (single skill)
    p.finalize();
    return p;
}

// ---- award after a monster hit (CUser::Attack tail + AddWeaponSkillExp) -
// damage = the capped damage actually dealt (original uses the
// never-overkill value iVar7).
// v37: fixed-amount variant for action 1021 "addexp T E" (the original
// AddWeaponSkillExp path FUN_140183e30(pUser, type, exp, flag) - no
// weapon-equipping assumptions, type straight from the action row).
inline void award_weapon_skill_exp_raw(Player& p, uint32_t wtype,
                                      uint32_t amount) {
    if (amount == 0) return;
    WeaponSkillTable& tbl = WeaponSkillTable::instance();
    if (wtype == 50 || wtype == 619) return;
    if (tbl.max_level(wtype) == 0) return;
    uint32_t gain = amount;
    auto it = p.weapon_skills.find(wtype);
    Player::WeaponSkillState* sk;
    bool created = false;
    if (it == p.weapon_skills.end()) {
        sk = &p.weapon_skills[wtype];
        sk->type = wtype; sk->level = 0; sk->exp = 0; sk->dirty = true;
        created = true;
    } else {
        sk = &it->second;
    }
    if (sk->level > 12) {
        int pct = (int)(17 - sk->level) * 20;
        if (pct < 10) pct = 10;
        gain = (uint32_t)(((uint64_t)gain * (uint64_t)pct) / 100);
        gain /= 2;
    }
    uint64_t newexp = (uint64_t)sk->exp + gain;
    sk->exp = newexp > 0xFFFFFFFFull ? 0xFFFFFFFFu : (uint32_t)newexp;
    sk->dirty = true;
    bool leveled = false;
    while (sk->level < tbl.max_level(wtype)) {
        uint32_t req = tbl.req_exp(wtype, (uint8_t)(sk->level + 1));
        if (req == 0xFFFFFFFFu || sk->exp < req) break;
        sk->exp -= req;
        sk->level++;
        leveled = true;
    }
    uint32_t next = tbl.req_exp(wtype, (uint8_t)(sk->level + 1));
    if ((created || leveled) && p.session) {
        p.session->send(build_weapon_skill_1025(
            wtype, sk->level, sk->exp, next == 0xFFFFFFFFu ? 0u : next));
    } else if (next != 0xFFFFFFFFu && p.session) {
        p.session->send(build_weapon_exp_1104(wtype, sk->exp, next));
    }
    std::printf("[weaponskill] %u raw exp +%u type %u -> level %u exp %u\n",
                p.id, amount, wtype, sk->level, sk->exp);
}

inline void award_weapon_skill_exp(Player& p, uint32_t damage) {
    if (damage == 0) return;
    WeaponSkillTable& tbl = WeaponSkillTable::instance();
    uint32_t wtype = p.combat.weapon_type;   // 0 = boxing (bare hands)
    if (wtype == 50 || wtype == 619) return;  // excluded in FUN_140183e30
    if (tbl.max_level(wtype) == 0) return;   // no proficiency table rows

    // exp = MulDiv(damage, rate+100, 100); rate (FUN_140180e80) is 0 here
    uint32_t gain = damage;

    auto it = p.weapon_skills.find(wtype);
    Player::WeaponSkillState* sk;
    bool created = false;
    if (it == p.weapon_skills.end()) {
        // original creates the CUserWeaponSkill (DB row on first save);
        // level starts at 0
        sk = &p.weapon_skills[wtype];
        sk->type = wtype; sk->level = 0; sk->exp = 0; sk->dirty = true;
        created = true;
    } else {
        sk = &it->second;
    }

    // level-up slowdown (level > 12): scale by max(10,(17-level)*20)%
    // then halve
    if (sk->level > 12) {
        int pct = (int)(17 - sk->level) * 20;
        if (pct < 10) pct = 10;
        gain = (uint32_t)(((uint64_t)gain * (uint64_t)pct) / 100);
        gain /= 2;
    }
    // exp += gain, cap 0xFFFFFFFF
    uint64_t newexp = (uint64_t)sk->exp + gain;
    sk->exp = newexp > 0xFFFFFFFFull ? 0xFFFFFFFFu : (uint32_t)newexp;
    sk->dirty = true;

    // level-up loop: while exp >= req(type, level+1) && level+1 <= max
    bool leveled = false;
    while (sk->level < tbl.max_level(wtype)) {
        uint32_t req = tbl.req_exp(wtype, (uint8_t)(sk->level + 1));
        if (req == 0xFFFFFFFFu || sk->exp < req) break;
        sk->exp -= req;
        sk->level++;
        leveled = true;
        std::printf("[weaponskill] %u %s prof %u -> level %u (exp %u)\n",
                    p.id, p.name.c_str(), wtype, sk->level, sk->exp);
    }

    // client update (FUN_140183e30): creation/level-up -> 1025; plain
    // exp gain -> 1104 with the next-level requirement
    uint32_t next = tbl.req_exp(wtype, (uint8_t)(sk->level + 1));
    if (created || leveled) {
        if (p.session)
            p.session->send(build_weapon_skill_1025(
                wtype, sk->level, sk->exp,
                next == 0xFFFFFFFFu ? 0u : next));
        // original also sends the STR_WEAPON_SKILL_UP talk via the
        // string manager; deferred until the string table is ported
    } else if (next != 0xFFFFFFFFu) {
        if (p.session)
            p.session->send(build_weapon_exp_1104(wtype, sk->exp, next));
    }
}

// ---- login snapshot (CMsgAction 77 flow -> FUN_140162400) ---------------
// One 1025 per prof whose level != the type max; next_req = the cost of
// the next level. Maxed profs are skipped (original guard: send only when
// row.level != table->max_level(type)); missing req rows are skipped too.
inline void send_weapon_skill_snapshot(Player& p) {
    WeaponSkillTable& tbl = WeaponSkillTable::instance();
    for (const auto& [wtype, ws] : p.weapon_skills) {
        if (ws.level == tbl.max_level(wtype)) continue;
        uint32_t next = tbl.req_exp(wtype, (uint8_t)(ws.level + 1));
        if (next == 0xFFFFFFFFu) continue;
        if (p.session)
            p.session->send(build_weapon_skill_1025(wtype, ws.level,
                                                    ws.exp, next));
    }
}

} // namespace conquer
