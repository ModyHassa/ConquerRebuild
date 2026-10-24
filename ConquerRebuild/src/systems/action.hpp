#pragma once
// Action system - CMsgAction 10010 (0x271A).
//
// Wire layout VERIFIED from both ends:
//   client builders FUN_0078b19e / FUN_0078b4cc / FUN_0078b571 (Conquer.c)
//   server process  FUN_140362d80 (MsgServer.c CMsgAction::Process,
//     server buf == wire+4: action @srv+0x14 == wire+0x18 etc.)
//   [len:2 =0x2A][type:2 =0x271A][timestamp:4 @+4]
//   [+0x08 actor id u4][+0x0C u2 data1 | u4 target][+0x0E u2 data2]
//   [+0x10 u4 srv-time][+0x14 timestamp2 u4][+0x18 action u2]
//   [+0x1A dir u2][+0x1C x u2][+0x1E y u2][+0x20 u4 ext][+0x24 u4 target2]
// Jump (0x89): landing coords x2,y2 go in data1/data2 (+0xC/+0xE), dir +0x1A,
// current x,y at +0x1C/+0x1E (client FUN_0078b571: param_6/param_7 =
// player[0x99]/[0x9a] = landing cell, server jump branch reads srv+8/srv+10).
//
// Server relay set (broadcast to screen as-is) extracted from
// FUN_140362d80: actions {0x5b,0x5d,0x66,0x6a,0x73,0x75,0x78,0x7b,0x7f,
// 0x81,0x83,0x85,0x88,0x8a,0x8b,0x8d,0x8e,0x90,0x94,0x95,0x96,0xa1,
// 0xcd,0xce} and >= 0x1ba. 0x89=jump, 0x91=stand, 0x92=synchro handled
// separately; 0x19a/0x1a4/0x1ae are NOT relayed.
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"

#include <cstdint>
#include <ctime>

namespace conquer {

struct ActionMsg {
    uint32_t actor_id = 0;
    uint32_t data = 0;       // u4 @+0x0C (target id / packed x2,y2)
    uint32_t ext = 0;        // u4 @+0x20
    int32_t  target2 = -1;   // u4 @+0x24
    uint16_t action = 0;     // @+0x18
    uint16_t dir = 0;        // @+0x1A
    uint16_t x = 0, y = 0;   // @+0x1C/+0x1E
    uint16_t x2 = 0, y2 = 0; // unpacked from data for jump-style actions
};

inline ActionMsg parse_action_10010(const uint8_t* payload, size_t len) {
    // payload starts at wire+4
    ActionMsg a;
    if (len < 0x28) return a;
    a.actor_id = *reinterpret_cast<const uint32_t*>(payload + 4);  // wire+0x08
    a.data     = *reinterpret_cast<const uint32_t*>(payload + 8);  // wire+0x0C
    a.action   = *reinterpret_cast<const uint16_t*>(payload + 0x14); // wire+0x18
    a.dir      = *reinterpret_cast<const uint16_t*>(payload + 0x16); // wire+0x1A
    a.x        = *reinterpret_cast<const uint16_t*>(payload + 0x18); // wire+0x1C
    a.y        = *reinterpret_cast<const uint16_t*>(payload + 0x1A); // wire+0x1E
    if (len >= 0x24) a.ext = *reinterpret_cast<const uint32_t*>(payload + 0x1C); // wire+0x20
    if (len >= 0x28) a.target2 = static_cast<int32_t>(*reinterpret_cast<const uint32_t*>(payload + 0x20)); // wire+0x24
    a.x2 = a.data & 0xFFFF;        // low u2 = data1 (landing x for jump)
    a.y2 = (a.data >> 16) & 0xFFFF; // high u2 = data2 (landing y)
    return a;
}

// Rebuild a 10010 packet (server->client broadcast) with the exact wire layout.
inline Packet build_action_10010(uint32_t actor_id, uint32_t data,
                                uint16_t action, uint16_t dir,
                                uint16_t x, uint16_t y, uint32_t ext = 0,
                                int32_t target2 = -1) {
    Packet p(MSG_ACTION_10010);
    p.write<uint32_t>(static_cast<uint32_t>(::time(nullptr))); // wire+0x04 ts
    p.write<uint32_t>(actor_id);   // wire+0x08
    p.write<uint32_t>(data);       // wire+0x0C
    p.write<uint32_t>(0);          // wire+0x10 (server-side time slot)
    p.write<uint32_t>(static_cast<uint32_t>(::time(nullptr))); // wire+0x14 ts2
    p.write<uint16_t>(action);     // wire+0x18
    p.write<uint16_t>(dir);        // wire+0x1A
    p.write<uint16_t>(x);          // wire+0x1C
    p.write<uint16_t>(y);          // wire+0x1E
    p.write<uint32_t>(ext);        // wire+0x20
    p.write<int32_t>(target2);     // wire+0x24
    p.finalize();
    return p;
}

constexpr uint16_t ACTION_JUMP    = 0x89;
constexpr uint16_t ACTION_STAND   = 0x91;
constexpr uint16_t ACTION_SYNCHRO = 0x92;

// Actions the original server relays to the screen verbatim
// (FUN_140362d80 relay set).
inline bool action_is_relayed(uint16_t action) {
    switch (action) {
        case 0x5b: case 0x5d: case 0x66: case 0x6a: case 0x73:
        case 0x75: case 0x78: case 0x7b: case 0x7f: case 0x81:
        case 0x83: case 0x85: case 0x88: case 0x8a: case 0x8b:
        case 0x8d: case 0x8e: case 0x90: case 0x94: case 0x95:
        case 0x96: case 0xa1: case 0xcd: case 0xce:
            return true;
        default:
            return action >= 0x1ba;
    }
}

} // namespace conquer
