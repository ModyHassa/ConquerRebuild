// CMsgUserEffect — packet 1015 (0x3F7), ACTION_USER_EFFECT (cq_action 1027)
// "self <effect> [add|del]".
//
// Sources (v6159, Oct 2026):
//   server: FUN_1404f1e90 (Effect engine: _stricmp(szObj,"self"), mode
//           10 when szOpt=="add", 0x18 when szOpt=="del") →
//           CMsgUserEffect::Create FUN_14037e0a0 (type 0x3f7, len =
//           0xB + packersize, buf: tick@+0 / id@+4 / mode@+8, packer
//           ONE string = effect name) → user SendPacket.
//   client: factory case 0x3f7 (Conquer.c ~682080) + Create
//           FUN_007e8a57: wire len@+0 (=0xF + packersize incl. a
//           trailing empty string on the send path), type 0x3f7@+2,
//           tick@+4, id@+8, mode@+0xC, packer@+0xD.
//   lua:    PublicFunc FuncPlayer.lua line ~291: Effect(userId, "self",
//           szEffect, "add"/"del"), ACTION_USER_EFFECT = 1027;
//           szObj supports self/couple/team (we implement self).
//
// Server wire (len = 4-byte header + 0xB + packersize, i.e.
// [len:2][type:2][tick:4][id:4][mode:1][1][nlen:1][name]):
#pragma once
#include "protocol/packet.hpp"
#include <cstdint>
#include <string>

namespace conquer {

constexpr uint16_t MSG_USER_EFFECT = 1015;
constexpr uint8_t  EFFECT_ADD     = 10;   // FUN_1404f1e90 "add" (default)
constexpr uint8_t  EFFECT_DEL     = 24;   // 0x18 "del"

inline Packet build_user_effect_1015(uint32_t player_id, uint8_t mode,
                                     const std::string& effect_name) {
    Packet p(MSG_USER_EFFECT);
    p.write<uint32_t>(0);            // wire+0x04 tick (cosmetic)
    p.write<uint32_t>(player_id);    // wire+0x08 target id
    p.write<uint8_t>(mode);          // wire+0x0C add(10)/del(24)
    // wire+0x0D string packer: exactly ONE string (effect name)
    std::vector<uint8_t> name(effect_name.begin(), effect_name.end());
    p.write<uint8_t>(1);             // packer count
    p.write<uint8_t>((uint8_t)name.size());
    for (uint8_t b : name) p.write<uint8_t>(b);
    p.finalize();                    // len = 4 + 0xD + 2 + namelen
    return p;
}

} // namespace conquer
