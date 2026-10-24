#pragma once
// ============================================================
//  CMsgPlayer / packet 10014 (0x271E) - "other player appear".
//
//  Wire layout extracted from BOTH sides of the v6159 binaries:
//
//  SERVER (builder):  MsgServer FUN_14039eef0 (466-line Create fn,
//                    dump in docs/msgplayer_10014_builder.c).
//                    Fields base B = obj+0x10 -> wire = B-4 (wire
//                    starts at obj+0xC: [len:2][type:2] there).
//  SERVER (ctor):    FUN_14039ed70: fixed struct B+0..B+0x118,
//                    tq::CStringPacker buffer at obj+0x128 (=wire+0x11C,
//                    capacity 0x2e8).
//  CLIENT (parser):  Conquer FUN_008093fe: raw copy at obj+4; reads
//                    fields at wire offsets; string packer at wire+0x11C
//                    (ctor FUN_008092f9 registers buffer obj+0x120 size
//                    0x2e4 = 0x11C-4 relative to raw copy).
//  CLIENT (strings): FUN_008beb84 GetString(idx) / FUN_008beabd count -
//                    packer = [count:1][ [len:1][bytes] ]...
//
//  Verified field map (wire offsets):
//    +0x08 = lookface  (B+4,  CUser vtbl+0x30, transform-aware getter)
//    +0x0C = player id (B+8,  CUser vtbl+0x10 GetID -> client player[0x3c];
//                         client: id < 1000000 => monster check)
//    +0x6F = X         (B+0x6b, CUser vtbl+0x40 -> this+0x10c8)
//    +0x71 = Y         (B+0x6d, CUser vtbl+0x48 -> this+0x10cc;
//                       client passes to map-add FUN_00790942)
//    +0x73 = packed u2 (B+0x6f, CUser vtbl+0x38 -> this+0xea0;
//                       client splits %1000 and /1000)
//  Remaining struct bytes are zero (original also leaves most at 0 for
//  a plain login spawn; stats/equipment arrive in later messages).
// ============================================================
#include "protocol/packet.hpp"
#include <cstdint>
#include <cstring>
#include <string>

namespace conquer {

constexpr uint16_t SPAWN_FIXED_STRUCT_SIZE = 0x118; // wire+4 .. wire+0x11C

// CUser::AppendMapData-equivalent for the string section.
// tq::CStringPacker format: [count:1][ [len:1][bytes] ]... (len <= 255)
inline void packer_add(std::vector<uint8_t>& packer, const std::string& s) {
    uint8_t n = static_cast<uint8_t>(s.size() > 255 ? 255 : s.size());
    packer.push_back(n);
    packer.insert(packer.end(), s.begin(), s.begin() + n);
}

// The 5 strings the client parser reads (GetString(0..4)); the original
// server adds: 0=name, then mate/family/guild-related (may be empty).
inline std::vector<uint8_t> build_spawn_packer(const std::string& name,
                                               const std::string& mate = "",
                                               const std::string& family = "",
                                               const std::string& guild = "",
                                               const std::string& extra = "") {
    std::vector<uint8_t> p;
    p.push_back(0); // count placeholder
    packer_add(p, name);
    packer_add(p, mate);
    packer_add(p, family);
    packer_add(p, guild);
    packer_add(p, extra);
    p[0] = 5;
    return p;
}

struct SpawnInfo {
    uint32_t id = 0;
    std::string name;
    uint32_t lookface = 100003; // classic small-male body default
    uint16_t x = 0, y = 0;
    uint16_t packed_hair = 0; // wire+0x73: hair color*100+style
    // monster spawn (CMsgPlayer::Create monster branch, MsgServer
    // FUN_14039eef0: id in [0xAAE61, 0xAAE61+99999] -> lookface goes to
    // buf+0x63 (wire+0x67) via getter +0x78, hair slot buf+0x69 stays 0,
    // packer = [name, "", "", ""] instead of the player 5-string set)
    bool is_monster = false;
    uint8_t dir = 0;
};

// Wire-accurate 10014 monster spawn (CMsgPlayer::Create monster branch).
inline Packet build_monster_spawn_10014(const SpawnInfo& s) {
    Packet p(MSG_SPAWN_10014);
    std::vector<uint8_t> fixed(SPAWN_FIXED_STRUCT_SIZE, 0);
    auto put16 = [&](size_t wire_off, uint16_t v) {
        std::memcpy(&fixed[wire_off - 4], &v, 2);
    };
    auto put32 = [&](size_t wire_off, uint32_t v) {
        std::memcpy(&fixed[wire_off - 4], &v, 4);
    };
    auto put8 = [&](size_t wire_off, uint8_t v) {
        fixed[wire_off - 4] = v;
    };
    put32(0x08, s.lookface);        // status/lookface-family (all roles)
    put32(0x0C, s.id);              // monster role id (0xAAE61 + n)
    put32(0x67, s.lookface);        // buf+0x63: monster lookface (getter +0x78)
    put16(0x6D, 0);                 // buf+0x69: hair slot - 0 for monsters
    put16(0x6F, s.x);               // buf+0x6b: X
    put16(0x71, s.y);               // buf+0x6d: Y
    put8 (0x75, s.dir);             // buf+0x71: direction
    // packer: [monster name, "", "", ""] (original monster branch adds
    // GetName + "" then two empty strings from the null equipment path)
    std::vector<uint8_t> packer;
    packer.push_back(0);
    packer_add(packer, s.name);
    packer_add(packer, "");
    packer_add(packer, "");
    packer_add(packer, "");
    packer[0] = 4;
    p.payload.insert(p.payload.end(), fixed.begin(), fixed.end());
    p.payload.insert(p.payload.end(), packer.begin(), packer.end());
    p.finalize();
    return p;
}

// Wire-accurate 10014 spawn packet.
inline Packet build_spawn_10014(const SpawnInfo& s) {
    Packet p(MSG_SPAWN_10014); // requires protocol/ids.hpp
    // fixed struct B+0..B+0x117 (wire+4..wire+0x11B), zero-filled
    std::vector<uint8_t> fixed(SPAWN_FIXED_STRUCT_SIZE, 0);
    auto put16 = [&](size_t wire_off, uint16_t v) {
        std::memcpy(&fixed[wire_off - 4], &v, 2);
    };
    auto put32 = [&](size_t wire_off, uint32_t v) {
        std::memcpy(&fixed[wire_off - 4], &v, 4);
    };
    if (s.is_monster) return build_monster_spawn_10014(s);
    put32(0x08, s.lookface);
    put32(0x0C, s.id);
    put16(0x6F, s.x);
    put16(0x71, s.y);
    put16(0x73, s.packed_hair);
    // string packer at wire+0x11C
    std::vector<uint8_t> packer = build_spawn_packer(s.name);
    p.payload.insert(p.payload.end(), fixed.begin(), fixed.end());
    p.payload.insert(p.payload.end(), packer.begin(), packer.end());
    p.finalize();
    return p;
}

} // namespace conquer
