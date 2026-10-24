#include "systems/npc.hpp"
#include "protocol/ids.hpp"
#include <cstdio>

namespace conquer {

// TODO(wire-accuracy): the exact 613 field layout must be read from the
// client handler (FUN_0056e8c8 chain in decompiled Conquer.c) and the
// original NpcServer; the placeholder below returns a dialog with a
// text option list which mirrors the original dialog model.
Packet build_dialog(const NpcDef& npc) {
    Packet pkt(MSG_613); // dev dialog (real id: 2032 CMsgTaskDialog, layout TODO)
    pkt.write<uint32_t>(npc.id);
    pkt.write_str(npc.name, 32);
    pkt.write<uint8_t>(1);               // option count
    pkt.write_str("I am " + npc.name, 64); // dialog face text
    pkt.write_str("Talk", 32);           // option text
    pkt.finalize();
    return pkt;
}

} // namespace conquer
