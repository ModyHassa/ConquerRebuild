#pragma once
// NPC dialog system - wire-accurate CMsgNpc (2031) / CMsgTaskDialog (2032).
//
// Layouts extracted from the v6159 client parsers (docs/protocol_map_6159.md):
//   CMsgTaskDialog 2032 (server->client dialog):
//     wire+0x04 u2 reserved | +0x08 u2 npc id | +0x0A u2 option count
//     wire+0x0C u2 task id  | +0x0E u1 mode (0=normal,2=special)
//     wire+0x0F u1 face/type (0..5; 5 = link/input dialog)
//     wire+0x10 string packer [count:1][ [len:1][text] ]...:
//       string0 = dialog text, strings 1..n = option texts
//     (client parser FUN_007d8432; ctor FUN_007d82b2 packer obj+0x14)
//   CMsgNpc 2031 (both directions):
//     wire+0x04 u4 | +0x08 u4 npc id | +0x0C u4 task id
//     wire+0x10 u2 action (3 = open npc view) | +0x12 u2 subtype
//     (client parser FUN_007e0264)
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include <cstdint>
#include <ctime>
#include <string>
#include <unordered_map>
#include <vector>

namespace conquer {

struct NpcDef {
    uint32_t id = 0;
    std::string name;
    uint32_t map_id = 0;
    uint32_t x = 0, y = 0;
    uint32_t task0 = 0;      // cq_npc.task0..task7: the NPC task list
    uint32_t task1 = 0, task2 = 0, task3 = 0, task4 = 0;
    uint32_t task5 = 0, task6 = 0, task7 = 0;
    std::string task_script; // lua script name in the original pack
};

struct DialogOption {
    std::string text;
    int32_t action = 0; // option id echoed back by the client
};

class NpcSystem {
public:
    static NpcSystem& instance() { static NpcSystem n; return n; }
    void register_npc(NpcDef def) { npcs_[def.id] = std::move(def); }
    const NpcDef* find(uint32_t id) const {
        auto it = npcs_.find(id);
        return it == npcs_.end() ? nullptr : &it->second;
    }
    std::unordered_map<uint32_t, NpcDef> npcs_;
};

// --- wire helpers -----------------------------------------------------------
// Payload offsets (payload starts at wire+4):
//   wire+0x08 -> payload[4]  npc id (u2/u4)
//   wire+0x0A -> payload[6]  option count (u2)
//   wire+0x0C -> payload[8]  task id (u2/u4)
//   wire+0x0E -> payload[10] mode (u1)
//   wire+0x0F -> payload[11] face/type (u1)
//   wire+0x10 -> payload[12] packer start
inline void packer_put(std::vector<uint8_t>& p, const std::string& s) {
    uint8_t n = static_cast<uint8_t>(s.size() > 255 ? 255 : s.size());
    p.push_back(n);
    p.insert(p.end(), s.begin(), s.begin() + n);
}

// CMsgTaskDialog (2032): NPC dialog with text + option buttons.
inline Packet build_task_dialog_2032(uint32_t npc_id, uint32_t task_id,
                                     uint8_t face,
                                     const std::string& text,
                                     const std::vector<DialogOption>& opts) {
    Packet p(MSG_TASK_DIALOG_2032);
    p.write<uint16_t>(0);                    // wire+0x04 reserved
    p.write<uint16_t>(0);                    // wire+0x06 reserved (parser skips)
    p.write<uint16_t>(static_cast<uint16_t>(npc_id)); // +0x08 npc id
    p.write<uint16_t>(static_cast<uint16_t>(opts.size())); // +0x0A count
    p.write<uint16_t>(static_cast<uint16_t>(task_id));  // +0x0C task id
    p.write<uint8_t>(0);                     // +0x0E mode = normal
    p.write<uint8_t>(face);                  // +0x0F face/type
    // +0x10 string packer
    std::vector<uint8_t> pk;
    pk.push_back(0); // count placeholder
    packer_put(pk, text);
    for (const auto& o : opts) packer_put(pk, o.text);
    pk[0] = static_cast<uint8_t>(1 + opts.size());
    p.payload.insert(p.payload.end(), pk.begin(), pk.end());
    p.finalize();
    return p;
}

// CMsgDialog line (2032) — VERIFIED vs server FUN_1403a6400/6510
// (msgdialog.cpp) + client parse FUN_007d8432: ONE line per packet, the
// client accumulates. Wire: +4 tick u4, +8 u2 pic1, +0xA u2 pic2,
// +0xC u2 reply-action id, +0xE u1 face, +0xF u1 mode (1 text, 2 button,
// 3 input, 4 pic, 6 message-box), +0x10 packer [1 string].
inline Packet build_dialog_line_2032(uint8_t mode, uint8_t face,
                                      uint32_t action_id,
                                      uint16_t pic1, uint16_t pic2,
                                      const std::string& text) {
    Packet p(MSG_TASK_DIALOG_2032);
    p.write<uint32_t>(static_cast<uint32_t>(::time(nullptr))); // tick
    p.write<uint16_t>(pic1);                 // +0x08
    p.write<uint16_t>(pic2);                 // +0x0A
    p.write<uint16_t>(static_cast<uint16_t>(action_id)); // +0x0C
    p.write<uint8_t>(face);                  // +0x0E
    p.write<uint8_t>(mode);                  // +0x0F
    std::vector<uint8_t> pk;                 // +0x10 packer
    pk.push_back(1);
    pk.push_back(static_cast<uint8_t>(text.size()));
    pk.insert(pk.end(), text.begin(), text.end());
    p.payload.insert(p.payload.end(), pk.begin(), pk.end());
    p.finalize();
    return p;
}

// CMsgNpc (2031): task status / npc action towards the client.
inline Packet build_npc_2031(uint32_t npc_id, uint32_t task_id,
                             uint16_t action, uint16_t subtype) {
    Packet p(MSG_NPC_INFO_2031);
    p.write<uint32_t>(0);            // wire+0x04
    p.write<uint32_t>(npc_id);       // wire+0x08 npc id
    p.write<uint32_t>(task_id);      // wire+0x0C task id
    p.write<uint16_t>(action);       // wire+0x10 action (3 = npc view)
    p.write<uint16_t>(subtype);      // wire+0x12 subtype
    p.finalize();
    return p;
}

// Dev-era 613 dialog (kept for the legacy test path).
Packet build_dialog(const NpcDef& npc);

} // namespace conquer
