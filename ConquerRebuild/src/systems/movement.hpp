#pragma once
// Movement system - packet 10005 (0x2715) = CMsgWalk in the 6159 client.
//
// VERIFIED in the decompiled Conquer.exe (cq2client-78.6):
//  - CMsgWalk::Create (FUN_007f851e) writes five fields into the CMsgWalkPB
//    object (has-bits at +0x20, values at +0x28..+0x38) and sets the
//    packet type to 0x2715 with length = 4 + serialized pb size.
//  - CMsgWalkPB::serialize (FUN_008bb0d0 calls) writes varint fields 1..5.
//
// Wire layout (header [len:2][type=10005:2] + protobuf):
//   field 1 (varint) = direction + 8*step       (client: iVar4 + iVar7*8)
//   field 2 (varint) = actor id
//   field 3 (varint) = mode (0 = walk, 1 = run)
//   field 4 (varint) = timestamp (timeGetTime)
//   field 5 (varint) = key / sequence
#include "systems/world.hpp"
#include <cstdint>

namespace conquer {

struct WalkMsg { // protobuf fields of CMsgWalkPB (numbers 1..5 verified)
    uint32_t direction_steps = 0; // field 1: dir = v & 7, steps = v >> 3
    uint32_t id = 0;               // field 2: actor id
    uint32_t mode = 0;             // field 3: 0 walk / 1 run
    uint32_t timestamp = 0;         // field 4
    uint32_t key = 0;              // field 5
};

// 8-direction tile delta used by the classic CO walk logic.
inline void dir_delta(uint32_t dir, int& dx, int& dy) {
    static const int DX[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    static const int DY[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    if (dir > 7) { dx = 0; dy = 0; return; }
    dx = DX[dir]; dy = DY[dir];
}

class MovementSystem {
public:
    // Client -> server walk (packet 10005). Server flow (CMsgWalk::Process
    // pattern): validate, apply the direction move, rebroadcast the same pb
    // body to everyone in screen range.
    static bool process_walk(Player& p, const std::vector<uint8_t>& payload,
                             World& world, Packet& out_relay);
};

} // namespace conquer
