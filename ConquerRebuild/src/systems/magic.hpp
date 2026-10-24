// ============================================================================
// magic.hpp - v40: spell casting (CMsgInteract 1022 action 24 + CMsgMagicEffect)
//
// Sources (MsgServer.exe decompile):
//   - CMsgInteract::Process case 0x18 (24 = magic attack), file
//     /tmp/interact_process.c dump of FUN_14035f9c0 region:
//     * anti-cheat OBFUSCATED types {1000,1001,1002,1030,1125,1150,1160,
//       1165}: mode2 u16@wire+0x1E ^= 0x6279, then ((mode2>>8)^0x37) must
//       equal the low byte of the timestamp @wire+4, then
//       mode2 = (mode2 ^ 0x21) & 0xff (checked, semantically unused);
//       magictype = rol16(mt ^ uid ^ 0x915d,3) + 0x14be;
//       target    = (rol32(t ^ uid ^ 0x5f2d2463,19)) + 0x8b90b51a;
//       x         = rol16(x ^ uid ^ 0x2ed6,1) + 0xdd12;
//       y         = rol16(y ^ uid ^ 0xb99b,5) + 0x76de
//       (uid = the RESOLVED sender id at wire+0xC).
//     * gates: alive, target null allowed for 0x18 (ground cast),
//       no-magic map flag, then CUser::LaunchMagic via the kernel.
//   - CMsgMagicEffect = packet 1105 (0x451) - NOT 0x454 (that is
//     CMsgItemInfoEx). Factory case 0x451 -> ctor FUN_140386780.
//     Builders FUN_140386800/8f0/a50/bd0 (len 0x34 base, +0x20 per
//     target), client parser Conquer.c FUN_0081e7a3 (reads u8@wire+0x14,
//     u16@+0xC, u32@+4, u16@+0xE, count u8@+0x13, entries u32@+0x18
//     stride 0x20: id/damage/hp, +0x1C field checked != -1).
//     Wire: [caster u4@+4][target u4@+8][type u2@+0xC][level u2@+0xE]
//           [u2@+0x10][u1@+0x12][count u1@+0x13][u1@+0x14][pad 3]
//           then count x 0x20-byte entries at +0x18:
//           {id u4, damage u4, hp u4, 0 u4, pad 12, extra u4}
//     len = 0x34 + count*0x20 (base payload 0x30 with 0x1C slack).
//   - cq_magictype: sort 1 = direct damage (Thunder/Fire/Tornado),
//     sort 2 = heal (Cure/SpiritHealing); use_mp = mana cost,
//     power/percent = damage (APPROXIMATE formula until the kernel
//     rand-stage is extracted: base = power*percent/100, dmg = 1 +
//     tq::RandGet(base)), delay_ms = cooldown, need_exp = exp to reach
//     the next level row.
//   - magic exp: +1 per successful cast (approximation of the kernel
//     exp stage); level-up when exp >= need_exp and the (type,level+1)
//     row exists; CMsgMagicInfo 1103 broadcast (v37 wire).
// ============================================================================
#pragma once
#include "world.hpp"
#include "../core/database.hpp"
#include "combat.hpp"
#include "monsters.hpp"
#include "drops.hpp"
#include "xp.hpp"
#include "magicskills.hpp"
#include <unordered_map>
#include <mutex>
#include <ctime>

namespace conquer {

constexpr uint16_t INTERACT_MAGIC_ATTACK = 24;   // case 0x18
constexpr uint32_t ATTRIB_MANA           = 2;     // 10017 code 2 = mana

// ---------------------------------------------------------------------------
// MagicTypeTable - cq_magictype rows indexed by (type, level)
// ---------------------------------------------------------------------------
class MagicTypeTable {
public:
    struct Row {
        uint32_t type = 0, sort = 0, level = 0;
        uint32_t use_mp = 0, power = 0, percent = 100;
        uint32_t delay_ms = 0, need_exp = 0, distance = 0, crime = 0;
    };
    static MagicTypeTable& instance() { static MagicTypeTable t; return t; }

    void load(IDatabase* db) {
        rows_.clear();
        if (!db) return;
        for (const auto& r : db->load_magictypes()) {
            Row row{r.type, r.sort, r.level, r.use_mp, r.power, r.percent,
                    r.delay_ms, r.need_exp, r.distance, r.crime};
            rows_[{r.type, r.level}] = row;
        }
        std::printf("[magic] %zu cq_magictype rows loaded\n", rows_.size());
    }

    const Row* row(uint32_t type, uint32_t level) const {
        auto it = rows_.find({type, level});
        return it == rows_.end() ? nullptr : &it->second;
    }

private:
    struct Key { uint32_t type, level;
        bool operator==(const Key& o) const { return type == o.type && level == o.level; } };
    struct KeyHash { size_t operator()(const Key& k) const {
        return (size_t)k.type * 1000u + k.level; } };
    std::unordered_map<Key, Row, KeyHash> rows_;
};

// ---------------------------------------------------------------------------
// Anti-cheat decode (Process case 0x18 obfuscated branch, verbatim port)
// ---------------------------------------------------------------------------
constexpr bool is_obfuscated_magic(uint16_t type) {
    switch (type) {
    case 1000: case 1001: case 1002: case 1030:
    case 1125: case 1150: case 1160: case 1165:
        return true;
    }
    return false;
}
inline uint16_t rol16(uint16_t v, int r) { return (uint16_t)((v << r) | (v >> (16 - r))); }
inline uint16_t ror16(uint16_t v, int r) { return (uint16_t)((v >> r) | (v << (16 - r))); }
inline uint32_t rol32(uint32_t v, int r) { return (v << r) | (v >> (32 - r)); }
inline uint32_t ror32(uint32_t v, int r) { return (v >> r) | (v << (32 - r)); }

// decodes in place. ts_low = low byte of the timestamp at wire+4.
// returns false on anti-cheat mismatch (original logs + drops the msg).
inline bool decode_obfuscated_magic(uint32_t uid, uint8_t ts_low,
                                    uint16_t& magictype,
                                    uint32_t& target,
                                    uint16_t& x, uint16_t& y,
                                    uint16_t& mode2) {
    if (is_obfuscated_magic(magictype)) mode2 = (uint16_t)(mode2 ^ 0x6279);
    if ((uint16_t)((mode2 >> 8) ^ 0x37) != (uint16_t)ts_low) return false;
    mode2 = (uint16_t)((mode2 ^ 0x21) & 0xff);
    uint16_t v16 = (uint16_t)(magictype ^ uid ^ 0x915d);
    magictype = (uint16_t)(rol16(v16, 3) + 0x14be);
    uint32_t v32 = target;
    // decompile: ((v >> 0xd | v << 0x19) ^ uid ^ K) + C  = ror32(v,13)
    target = ror32(v32, 13) ^ uid ^ 0x5f2d2463u;
    target += 0x8b90b51au;
    v16 = (uint16_t)(x ^ uid ^ 0x2ed6);
    x = (uint16_t)(rol16(v16, 1) + 0xdd12);
    v16 = (uint16_t)(y ^ uid ^ 0xb99b);
    y = (uint16_t)(rol16(v16, 5) + 0x76de);
    return true;
}

// inverse of the decode, used by tests / crafted clients to produce
// valid obfuscated casts (what the real client sends)
inline void encode_obfuscated_magic(uint32_t uid, uint8_t ts_low,
                                    uint16_t magictype, uint32_t target,
                                    uint16_t x, uint16_t y,
                                    uint16_t& mode2_out,
                                    uint16_t& mt_out, uint32_t& tgt_out,
                                    uint16_t& x_out, uint16_t& y_out) {
    // magictype: server computes v = mt ^ uid ^ 0x915d; mt = rol(v,3)+0x14be
    uint16_t v = ror16((uint16_t)(magictype - 0x14be), 3);
    mt_out = (uint16_t)(v ^ uid ^ 0x915d);
    // target (client writer): z = (t + 0x746f4ae6) ^ uid ^ K; wire = rol32(z,13)
    uint32_t z = (target - 0x8b90b51au) ^ uid ^ 0x5f2d2463u;
    tgt_out = rol32(z, 13);
    // x: v = x ^ uid ^ 0x2ed6; x = rol(v,1) + 0xdd12
    v = ror16((uint16_t)(x - 0xdd12), 1);
    x_out = (uint16_t)(v ^ uid ^ 0x2ed6);
    // y: v = y ^ uid ^ 0xb99b; y = rol(v,5) + 0x76de
    v = ror16((uint16_t)(y - 0x76de), 5);
    y_out = (uint16_t)(v ^ uid ^ 0xb99b);
    // mode2 (client writer FUN_007a8aaf): m = (ts_low<<8) ^ (raw ^ 0x3721),
    // then the SAME range check as the server switch - but on the
    // ENCODED wire value (both sides compare the raw wire field, so
    // they always agree; the xor just almost never fires in practice)
    uint16_t m_chk = (uint16_t)(((uint16_t)(ts_low ^ 0x37) << 8) | 0x21);
    if (is_obfuscated_magic(mt_out)) m_chk = (uint16_t)(m_chk ^ 0x6279);
    mode2_out = m_chk;
}

// ---------------------------------------------------------------------------
// CMsgMagicEffect 1105 (0x451)
// ---------------------------------------------------------------------------
struct MagicEffectEntry {
    uint32_t id = 0;      // target role id
    uint32_t damage = 0;  // damage dealt (or heal amount)
    uint32_t hp = 0;      // target hp after the cast
    uint32_t extra = 0;   // entry+0x1C field (0; client checks != -1)
};

inline Packet build_magic_effect_1105(uint32_t caster, uint32_t target,
                                      uint16_t magic_type, uint16_t magic_level,
                                      const std::vector<MagicEffectEntry>& entries) {
    Packet p(1105);
    p.write<uint32_t>(caster);       // wire+0x04
    p.write<uint32_t>(target);       // wire+0x08
    p.write<uint16_t>(magic_type);   // wire+0x0C
    p.write<uint16_t>(magic_level);  // wire+0x0E
    p.write<uint16_t>(0);            // wire+0x10 (SetParam slot)
    p.write<uint8_t>(0);             // wire+0x12
    p.write<uint8_t>((uint8_t)entries.size()); // payload+0x0F count
    p.write<uint8_t>(0);             // payload+0x10 (param10 slot)
    // payload+0x11..0x13 zero padding (original leaves these 3 bytes)
    // entries at payload+0x14 (wire+0x18), 0x20 stride:
    // FUN_1403868f0: [id u4@+0x14+0x20i][dmg u4@+0x18][hp u4@+0x1C]
    // [0 u4@+0x20][... zeros ...][extra u4@+0x30 rel base]
    for (int i = 0; i < 3; ++i) p.write<uint8_t>(0);
    for (const auto& e : entries) {
        p.write<uint32_t>(e.id);      // entry+0x00
        p.write<uint32_t>(e.damage);  // entry+0x04
        p.write<uint32_t>(e.hp);      // entry+0x08
        p.write<uint32_t>(0);         // entry+0x0C
        for (int i = 0; i < 12; ++i) p.write<uint8_t>(0); // entry+0x10..0x1B
        p.write<uint32_t>(e.extra);   // entry+0x1C
    }
    // tail slack: the original reserves a 0x30-byte base payload
    // (len 0x34 for 0 targets): header+pad is 0x17 bytes, so slack
    // = 0x30 - 0x14 = 28 bytes AFTER the entries, +0x20 per target:
    // len = 0x34 + count*0x20
    for (int i = 0; i < 28; ++i) p.write<uint8_t>(0);
    p.finalize();
    return p;
}

// ---------------------------------------------------------------------------
// Cast cooldown registry (original: FUN_1402f3a80 kernel cooldown store)
// ---------------------------------------------------------------------------
inline std::mutex& magic_cd_mtx() { static std::mutex m; return m; }
inline std::map<std::pair<uint32_t, uint16_t>, uint64_t>& magic_cd() {
    static std::map<std::pair<uint32_t, uint16_t>, uint64_t> m; return m;
}
inline uint64_t now_ms64() {
    return (uint64_t)::time(nullptr) * 1000ull;
}

// ---------------------------------------------------------------------------
// Monster death finalize - shared by melee (1022 case 2) and magic kills
// (verbatim move of the inline v16/v18/v19/v24 death block)
// ---------------------------------------------------------------------------
inline void finalize_monster_death(World& w, GameMap& mp, Player& p, Monster* mon) {
    mon->alive = false;
    mon->target_id = 0;
    mon->respawn_at = (time_t)::time(nullptr) + mon->rest_secs;
    auto dp = mp.monsters().build_die_packet(*mon);
    w.broadcast_to_screen(mp, p.pos, dp, nullptr);
    for (Player* other : mp.players()) {
        if (!other->session) continue;
        std::lock_guard<std::mutex> lk(other->known_mtx);
        other->known_monsters.erase(mon->id);
    }
    std::printf("[combat] monster %u (%s) died, respawn in %us\n",
                mon->id, mon->name.c_str(), mon->rest_secs);
    award_kill_exp(w, p, *mon);
    if (const MonsterTypeRecord* mt = mp.monsters().type(mon->type_id)) {
        auto spawned = roll_death_drops(mp.ground(), *mon, *mt,
                                        p.id, mon->x, mon->y);
        for (GroundItem* g : spawned) {
            auto sp = build_map_item_1101(*g, MAPITEM_SPAWN);
            w.broadcast_to_screen(mp, {g->x, g->y}, sp, nullptr);
            std::printf("[drops] %s dropped %s id=%u type=%u x=%u y=%u\n",
                mon->name.c_str(), g->is_money ? "money" : "item",
                g->id, g->itemtype, g->x, g->y);
        }
    }
}

// ---------------------------------------------------------------------------
// Magic exp award (+1 per cast; level-up vs cq_magictype need_exp)
// ---------------------------------------------------------------------------
inline void award_magic_exp(Player& p, uint16_t magic_type) {
    auto it = p.magics.find(magic_type);
    if (it == p.magics.end()) return;
    auto& ms = it->second;
    const auto* row = MagicTypeTable::instance().row(magic_type, ms.level);
    if (!row) return;
    ms.exp += 1;
    ms.dirty = true;
    std::printf("[magic] %u casts %u: exp %u/%u\n",
                p.id, magic_type, ms.exp, row->need_exp);
    if (row->need_exp && ms.exp >= row->need_exp) {
        const auto* next = MagicTypeTable::instance().row(magic_type, ms.level + 1);
        if (next) {
            ms.level++;
            ms.exp = 0;
            std::printf("[magic] %u spell %u reached level %u\n",
                        p.id, magic_type, ms.level);
        }
    }
    if (p.session)
        p.session->send(build_magic_1103(p.id, magic_type, ms.level, ms.exp));
}

// ---------------------------------------------------------------------------
// The cast: resolves target, applies mana cost, damage/heal, broadcasts
// 1105 (MagicEffect) + 10017 (mana / hp) to the screen.
// Returns true when a packet was broadcast (cast accepted).
// ---------------------------------------------------------------------------
inline bool handle_magic_attack(World& w, GameMap& mp, Player& p,
                                uint16_t magictype, uint32_t target_id,
                                uint16_t x, uint16_t y) {
    // must know the spell at a defined level
    auto mit = p.magics.find(magictype);
    if (mit == p.magics.end()) {
        std::printf("[magic] %u casts unknown spell %u; ignored\n",
                    p.id, magictype);
        return false;
    }
    uint16_t level = mit->second.level;
    const auto* row = MagicTypeTable::instance().row(magictype, level);
    if (!row) {
        std::printf("[magic] spell %u level %u has no cq_magictype row\n",
                    magictype, level);
        return false;
    }
    // cooldown (original kernel cooldown store per (user, magictype))
    {
        std::lock_guard<std::mutex> lk(magic_cd_mtx());
        auto key = std::make_pair(p.id, magictype);
        auto it = magic_cd().find(key);
        uint64_t now = now_ms64();
        uint64_t cd = row->delay_ms ? row->delay_ms : 1000;
        if (it != magic_cd().end() && now - it->second < cd) {
            std::printf("[magic] %u spell %u on cooldown\n", p.id, magictype);
            return false;
        }
        magic_cd()[key] = now;
    }
    // mana cost (original: CUser::CostMana -> 10017 attrib 2 update)
    if (p.mana < row->use_mp) {
        std::printf("[magic] %u lacks %u mana for spell %u\n",
                    p.id, row->use_mp, magictype);
        return false;
    }
    p.mana -= row->use_mp;
    auto mpkt = build_user_attrib_10017(p.id, {{ATTRIB_MANA, p.mana}});
    if (p.session) p.session->send(mpkt);

    uint32_t base = (uint32_t)((uint64_t)row->power * row->percent / 100);
    std::vector<MagicEffectEntry> entries;

    // resolve the target (null target = ground cast, still animates)
    Monster* mon = is_monster_id(target_id) ? mp.monsters().find(target_id) : nullptr;
    auto pit = w.players.find(target_id);
    Player* tgt = (pit != w.players.end() && pit->second.in_world &&
                   pit->second.map_id == p.map_id && pit->second.id != p.id)
                  ? &pit->second : nullptr;

    if (row->sort == 1) {
        // direct damage (Thunder/Fire/Tornado...)
        uint32_t dmg = base ? 1 + rand_get(base) : 0;
        if (mon && mon->alive) {
            dmg = (mon->hp > dmg) ? dmg : mon->hp;   // never overkill
            mon->hp -= dmg;
            entries.push_back({mon->id, dmg, mon->hp, 0});
            std::printf("[magic] %u casts %u on monster %u for %u -> hp %u/%u\n",
                        p.id, magictype, mon->id, dmg, mon->hp, mon->max_hp);
            auto ap = build_user_attrib_10017(mon->id,
                {{ATTRIB_LIFE, mon->hp}, {ATTRIB_MAX_LIFE, mon->max_hp}});
            w.broadcast_to_screen(mp, p.pos, ap, nullptr);
            mon->target_id = p.id;                    // aggro
            if (mon->next_attack_at == 0)
                mon->next_attack_at = (time_t)::time(nullptr) + mon->attack_secs;
            mon->next_move_at = (time_t)::time(nullptr);
            if (mon->hp == 0) finalize_monster_death(w, mp, p, mon);
        } else if (tgt) {
            if (tgt->hp == 0) return false;           // already dead
            tgt->hp = (tgt->hp > dmg) ? tgt->hp - dmg : 0;
            entries.push_back({tgt->id, dmg, tgt->hp, 0});
            std::printf("[magic] %u casts %u on %u for %u -> hp %u/%u\n",
                        p.id, magictype, tgt->id, dmg, tgt->hp, tgt->max_hp);
            auto ap = build_user_attrib_10017(tgt->id,
                {{ATTRIB_LIFE, tgt->hp}, {ATTRIB_MAX_LIFE, tgt->max_hp}});
            if (tgt->session) tgt->session->send(ap);
            if (p.session && p.session->player_id != tgt->id) p.session->send(ap);
        }
        // no target: ground cast - animation only
    } else if (row->sort == 2) {
        // heal (Cure/SpiritHealing) - players only
        Player* heal = tgt;
        if (!heal && target_id == p.id) heal = &p;    // self-cast
        if (heal && heal->alive) {
            uint32_t before = heal->hp;
            heal->hp = heal->hp + base > heal->max_hp ? heal->max_hp
                                                      : heal->hp + base;
            entries.push_back({heal->id, heal->hp - before, heal->hp, 0});
            std::printf("[magic] %u heals %u (+%u) -> hp %u/%u\n",
                        p.id, heal->id, heal->hp - before, heal->hp, heal->max_hp);
            auto ap = build_user_attrib_10017(heal->id,
                {{ATTRIB_LIFE, heal->hp}, {ATTRIB_MAX_LIFE, heal->max_hp}});
            if (heal->session) heal->session->send(ap);
            if (p.session && p.session->player_id != heal->id) p.session->send(ap);
        }
    } else {
        std::printf("[magic] spell %u sort %u not implemented yet\n",
                    magictype, row->sort);
        return false;
    }

    // broadcast the effect to the screen (incl. self: original
    // BroadcastRoomToScreen vtable +0x348 flag 1)
    auto ep = build_magic_effect_1105(p.id, target_id, magictype, level, entries);
    w.broadcast_to_screen(mp, p.pos, ep, nullptr);
    // exp per cast (approximation of the kernel exp stage)
    award_magic_exp(p, magictype);
    return true;
}

} // namespace conquer
