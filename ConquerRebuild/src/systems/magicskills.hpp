// ============================================================================
// magicskills.hpp - v37: player magic (spell) records + CMsgMagicInfo 1103
//
// Sources (MsgServer.exe decompile, f:\...\mapgroupkernel\gameaction.cpp):
//   - ACTION_USER_MAGIC = cq_action type 1020 (new-engine case 0x0e,
//     jump table (&DAT_14013aa9c)[type-0x3e9] at file off 0x139e9c):
//     "%s %d %d" cmds: "check T [L]" (FUN_1402f3830/60 = has magic /
//     level >= L), "learn T" (FUN_1402f38e0 -> FUN_1404939c0
//     CPlayerMagic::LearnMagic), "uplevel T" (FUN_1402f38a0),
//     "addexp T E" (FUN_1402f3040), "addlevtime T V" (FUN_1402f3080),
//     "del T" (FUN_1402f3960(sys, T, 2) -> FUN_140493f70 param_3==2
//     = FUN_140482c80 full remove). sscanf < 2 fields -> chain fail.
//   - CMsgMagicInfo builder FUN_140456fe0: wire type 0x44f (1103),
//     len 0x1C (28). Fields written at msg+0x428 (= wire):
//     +0 tick u4 (tq::TimeGet), +4 u4 (attrib 4 = owner id),
//     +8 u4 (attrib 2 = magic type), +0xC u2 (attrib 3 = level),
//     +0xE u2 (0 in learn + login-dump calls), +0x10 u1 (attrib 7),
//     +0x14 u4 (attrib 8 = exp), +0x18 u4 (attrib 10 = expire time).
//     Sent via user session slot 0x350 (learn path + the login magic
//     dump loop at MsgServer.c ~820101: one 1103 per CPlayerMagic).
//   - cq_magic columns: ownerid, type, level, exp, unlearn, old_level.
//     Magic TYPES (11140 etc.) resolve to per-level cq_magictype rows
//     via the type column; the client only needs type+level+exp here.
// ============================================================================
#pragma once
#include "world.hpp"
#include "../protocol/packet.hpp"

namespace conquer {

// CMsgMagicInfo 1103 (0x44F), wire len 28
inline Packet build_magic_1103(uint32_t player_id, uint32_t type,
                               uint16_t level, uint32_t exp) {
    // The msg ctor buffer (msg+0x428) maps to wire+4 (the send routine
    // prepends [len u2][type u2]; total wire len 0x20=32, matches the
    // client 1103 ctor FUN_007c1678 which writes len 0x20, type 0x44f,
    // tick at wire+4). Buffer stores -> wire:
    //   +0x00 tick u4 (tq::TimeGet)          = wire+0x04
    //   +0x04 owner id u4 (attrib 4)         = wire+0x08
    //   +0x08 magic type u4 (attrib 2)       = wire+0x0C
    //   +0x0C level u2 (attrib 3)            = wire+0x10
    //   +0x0E u2 (0 in learn + login dump)  = wire+0x12
    //   +0x10 u1 (attrib 7)                  = wire+0x14
    //   +0x14 exp u4 (attrib 8)              = wire+0x18
    //   +0x18 expire u4 (attrib 10)         = wire+0x1C
    Packet p(1103);
    p.write<uint32_t>((uint32_t)::time(nullptr)); // tick
    p.write<uint32_t>(player_id);   // attrib 4
    p.write<uint32_t>(type);        // attrib 2
    p.write<uint16_t>(level);       // attrib 3
    p.write<uint16_t>(0);           // display field (0)
    p.write<uint8_t>(0);            // attrib 7
    p.write<uint8_t>(0); p.write<uint8_t>(0); p.write<uint8_t>(0); // pad
    p.write<uint32_t>(exp);         // attrib 8
    p.write<uint32_t>(0);           // attrib 10 expire (0 = none)
    p.finalize();                   // length = 4 + 28 = 32 (0x20)
    return p;
}

// one 1103 per known magic at login (original: magic dump loop)
inline void send_magic_snapshot(Player& p) {
    for (const auto& [type, ms] : p.magics) {
        if (p.session)
            p.session->send(build_magic_1103(p.id, type, ms.level, ms.exp));
    }
    std::printf("[magic] %s: %zu spells dumped\n",
                p.name.c_str(), p.magics.size());
}

} // namespace conquer
