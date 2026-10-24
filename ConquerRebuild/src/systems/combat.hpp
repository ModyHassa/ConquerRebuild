#pragma once
// Combat system - CMsgInteract 1022 (0x3FE) + CMsgUserAttrib 10017 (0x2721).
//
// CMsgInteract wire layout VERIFIED from client builders
// FUN_007a8aaf/bbd/c4e/cf9 (Conquer.c) and server CMsgInteract::Process
// FUN_14035f9c0 (MsgServer.c; srv buf == wire+4: attacker srv+8 == wire+0xC,
// target srv+0xC == wire+0x10, action srv+0x14 == wire+0x18):
//   [len:2 =0x2C][type:2 =0x3FE][timestamp:4 @+4][timestamp2:4 @+8]
//   [+0x0C attacker id u4][+0x10 target id u4][+0x14 u2 data1(x)]
//   [+0x16 u2 data2(y)][+0x18 action u2][+0x1C skill/magic u4]
//   [+0x20 extra u4 (magic builder FUN_007a8cf9)][+0x2? checksum]
// Client anti-cheat checksum: (ts2 low byte *0x100 + dir) ^ 0x3721 at +0x1E
// (extra ^0x6279 for magic types 1000-1002/0x406/0x465/0x47E/0x488/0x48D).
// Interact action codes (from server Process gates + client send sites):
//   2 = physical attack, 0x18 = ride, 0x1C = dismount, 0x24 = ?, 0x2C = ?
//
// CMsgUserAttrib 10017 (0x2721) wire layout VERIFIED from client parser
// FUN_0080ad98: [len:2][type:2 =0x2721][? u4 @+4][id u4 @+8][count u4 @+0xC]
//   then count entries of stride 0x1C starting at wire+0x10:
//   { attr u4, value u4, param u4, ... } (attr at entry+0x10, value +0x14,
//   param +0x18 relative to entry base = buf + i*0x1C).
//   Attribute codes (client first-pass switch): 0 = life, 1 = max life,
//   4 = max mana-ish, 0xC = ?, 0x1D, 0x2D.
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include <cstdint>
#include <random>
#include <ctime>
#include <ctime>
#include <cstdlib>

namespace conquer {

constexpr uint16_t INTERACT_ATTACK = 2;

constexpr uint32_t ATTRIB_LIFE     = 0;   // current hp
constexpr uint32_t ATTRIB_MAX_LIFE = 1;   // maximum hp

// ---------------------------------------------------------------------------
// Physical damage pipeline - port of CBattleSystem::ProcAttack
// (MsgServer.exe FUN_1403ec0a0 + parts A/B):
//   Part A  FUN_1403e98e0: dmgA = tq::RandGet(atk_max - atk_min) + atk_min
//           [+ weapon-prof % bonus + gem bonus], then subtract the target's
//           processed defense (slots 0xa8 -> 0x310/0x318), floor 0.
//   Part B  FUN_1403e9e30: dmgB = attacker slot0xa0 (prof+item attack
//           component) - target slot0xb8 (dodge), floor 0.
//   Assemble FUN_1403ec0a0: total = dmgA + dmgB [+ armor absorb <= 50%,
//           flying x2, +50% prof>209, (attack - defense) bonus term],
//           final floor: if (total < 2) return 1  (minimum damage is 1).
//   Apply  FUN_1401b0500: cap at target life (never overkill), then
//           target->PowerLost(0, -dmg, 1, 0).
// v1 ports the core chain with real DB stats; status/gem/prof refinement
// stages activate as those systems land (statuses 0x6c/0x9f x2/x3 etc).
// ---------------------------------------------------------------------------
inline uint32_t rand_get(uint32_t n) {  // tq::RandGet: 0..n-1
    if (!n) return 0;
    static thread_local std::mt19937 rng([]{
        std::random_device rd;
        return rd() ^ (std::mt19937::result_type)std::time(nullptr);
    }());
    return (uint32_t)(rng() % n);
}

struct CombatActorStats {
    uint32_t atk_min = 1, atk_max = 1, extra = 0, defense = 0, dodge = 0;
    uint32_t weapon_type = 0;   // equipped weapon family (cq_itemtype.id/1000;
                                // 0 = bare hands -> boxing prof, type 0)
};

inline uint32_t calc_physical_damage(const CombatActorStats& att,
                                     const CombatActorStats& tgt) {
    // Part A: weapon roll minus target defense
    int32_t dmg_a = (int32_t)rand_get(att.atk_max - att.atk_min) + (int32_t)att.atk_min;
    dmg_a -= (int32_t)tgt.defense;
    if (dmg_a < 0) dmg_a = 0;
    // Part B: attack component minus target dodge
    int32_t dmg_b = (int32_t)att.extra - (int32_t)tgt.dodge;
    if (dmg_b < 1) dmg_b = 0;
    // Assemble + minimum-damage floor (original: if (res < 2) res = 1)
    int32_t total = dmg_a + dmg_b;
    if (total < 2) total = 1;
    return (uint32_t)total;
}

struct InteractMsg {
    uint32_t attacker_id = 0;  // wire+0x0C
    uint32_t target_id = 0;    // wire+0x10
    uint16_t data1 = 0;        // wire+0x14
    uint16_t data2 = 0;        // wire+0x16
    uint16_t action = 0;       // wire+0x18
    uint16_t checksum = 0;     // wire+0x1E
    uint32_t skill = 0;        // wire+0x1C
    uint32_t extra = 0;        // wire+0x20
};

inline InteractMsg parse_interact_1022(const uint8_t* payload, size_t len) {
    // payload = wire+4
    InteractMsg m;
    if (len < 0x1C) return m;
    m.attacker_id = *reinterpret_cast<const uint32_t*>(payload + 8);   // +0x0C
    m.target_id   = *reinterpret_cast<const uint32_t*>(payload + 0xC); // +0x10
    m.data1       = *reinterpret_cast<const uint16_t*>(payload + 0x10); // +0x14
    m.data2       = *reinterpret_cast<const uint16_t*>(payload + 0x12); // +0x16
    m.action      = *reinterpret_cast<const uint16_t*>(payload + 0x14); // +0x18
    m.skill       = *reinterpret_cast<const uint32_t*>(payload + 0x18); // +0x1C
    if (len >= 0x20) m.extra = *reinterpret_cast<const uint32_t*>(payload + 0x1C); // +0x20
    return m;
}

inline Packet build_interact_1022(uint32_t attacker, uint32_t target,
                                 uint16_t action, uint16_t data1, uint16_t data2,
                                 uint32_t skill = 0, uint32_t extra = 0) {
    Packet p(MSG_INTERACT_1022);
    uint32_t ts  = static_cast<uint32_t>(::time(nullptr));
    uint32_t ts2 = ts;
    p.write<uint32_t>(ts);        // wire+0x04
    p.write<uint32_t>(ts2);       // wire+0x08
    p.write<uint32_t>(attacker);  // wire+0x0C
    p.write<uint32_t>(target);    // wire+0x10
    p.write<uint16_t>(data1);     // wire+0x14
    p.write<uint16_t>(data2);     // wire+0x16
    p.write<uint16_t>(action);    // wire+0x18
    p.write<uint32_t>(skill);     // wire+0x1C
    p.write<uint32_t>(extra);     // wire+0x20
    p.finalize();                 // len = 0x24
    return p;
}

// CMsgUserAttrib: attr pairs appended at wire+0x10, stride 0x1C.
inline Packet build_user_attrib_10017(uint32_t id,
                                      const std::vector<std::pair<uint32_t, uint32_t>>& attrs) {
    Packet p(MSG_USER_ATTRIB_10017);
    p.write<uint32_t>(0);                        // wire+0x04
    p.write<uint32_t>(id);                       // wire+0x08 player id
    p.write<uint32_t>(static_cast<uint32_t>(attrs.size())); // wire+0x0C count
    for (auto& [attr, value] : attrs) {
        p.write<uint32_t>(attr);                 // entry+0x10
        p.write<uint32_t>(value);                // entry+0x14
        p.write<uint32_t>(0);                    // entry+0x18 param
        p.write<uint32_t>(0);                    // entry+0x1C pad
        p.write<uint32_t>(0);                    // entry+0x20 pad
        p.write<uint32_t>(0);                    // entry+0x24 pad
        p.write<uint32_t>(0);                    // entry+0x28 pad
    }
    p.finalize();
    return p;
}


// CMsgUserAttrib with 64-bit values (FUN_14039e9a0 Append pattern):
// [len:2][type:2][id:4][count:4] then 0x1C-byte entries
// [attr:4][value_lo:4][value_hi:4][pad:16]. The client reads key 5
// (exp) as 64-bit lo+hi (Conquer.c 10017 case 5).
inline Packet build_user_attrib_10017_u64(
        uint32_t id, const std::vector<std::pair<uint32_t, uint64_t>>& attrs) {
    Packet p(MSG_USER_ATTRIB_10017);
    p.write<uint32_t>(0);
    p.write<uint32_t>(id);
    p.write<uint32_t>(static_cast<uint32_t>(attrs.size()));
    for (auto& [attr, value] : attrs) {
        p.write<uint32_t>(attr);
        p.write<uint32_t>(static_cast<uint32_t>(value & 0xffffffffu)); // lo
        p.write<uint32_t>(static_cast<uint32_t>(value >> 32));          // hi
        for (int pad = 0; pad < 4; pad++) p.write<uint32_t>(0);
    }
    p.finalize();
    return p;
}

} // namespace conquer
