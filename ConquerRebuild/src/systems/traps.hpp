#pragma once
// Map traps — CMapTrap (mapgroupkernel/maptrap.cpp) and the
// MSGMAPITEM 1101 broadcast that shows one to the client.
//
// Original sites:
//   FUN_1403ab040  CMapTrap::CreateNew(actor_id, info*, extra)  ~661817
//   FUN_1403a91f0  CMapTrap ctor (CMyHeap "CMapTrap", 200 bytes)
//   FUN_1403a5a30  the 1101 packet builder                      ~661690
//   FUN_1403a7180  trap delete (used by action 2102)
//
// CreateNew: allocates the trap, stores the actor id at +0x20, resolves
// cq_traptype through g_setTrapType with the info's first u16
// (`(*(*(g_setTrapType) + 0x40))(set, info->u16[2])`) and logs
// "table:cq_traptype, CMapTrap::CreateNew(), cann't find trap_id[%d]"
// when it misses, then memcpy's the 0x48-byte info to trap+0x24 and fixes
// the lookface:
//     low  = info->look % 10
//     look = (traptype.look / 10 - low / 10) * 10 + low
// i.e. the tens come from cq_traptype.look and the ones digit from the
// action param. A failed placement (FUN_1403aabd0) destroys the trap.
//
// The 1101 payload (0x41 bytes, `*(obj+8) = 0x44d`, `*(obj+0xc) = 0x41`)
// is NOT the item layout: with the action byte 10 the client reads the
// coordinates from +8/+0xC instead of x/y after the u4 itemtype:
//   +0x00 u4 time          +0x04 u4 trap id
//   +0x08 u2 x             +0x0A u2 pad
//   +0x0C u2 y             +0x0E u2 reserved
//   +0x10 u2 lookface      +0x12 u1 10 (MAPITEM_CAST_TRAP)
//   +0x13 u4 owner id      +0x17 u1 trap kind
//   +0x18 u4 owner player  +0x1C u4 (extra)
//   +0x20 u1 (extra)       +0x21 u4 (extra)
//   +0x25 u4 (extra)       +0x31 char[15] traptype name
// kind 0xd instead writes a packed localtime into +0x29.

#include <cstdint>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"

constexpr uint8_t MAPITEM_CAST_TRAP = 10;   // CMapTrap::CreateNew uses 10

struct Trap {
    uint32_t id        = 0;   // ground-wide trap id (packet +0x04)
    uint32_t trap_id   = 0;   // cq_traptype.id
    uint32_t map_id    = 0;
    uint32_t owner     = 0;   // cq_user id that placed it
    uint16_t x = 0, y  = 0;
    uint16_t look      = 0;   // computed lookface
    uint8_t  kind      = 0;   // trap kind byte (+0x17)
    uint8_t  atk_mode  = 1;
    uint32_t life_max  = 0;
    std::string name;         // cq_traptype.name, max 15 bytes
    time_t   born_at   = 0;
};

// In-memory registry, mirroring the original's per-map-group trap vector.
class TrapSystem {
public:
    static TrapSystem& instance() {
        static TrapSystem s;
        return s;
    }
    Trap& add(const Trap& t) { traps_.push_back(t); return traps_.back(); }
    bool remove(uint32_t id) {
        for (size_t i = 0; i < traps_.size(); ++i)
            if (traps_[i].id == id) { traps_.erase(traps_.begin() + i); return true; }
        return false;
    }
    const std::vector<Trap>& all() const { return traps_; }
    std::vector<Trap> on_map(uint32_t map_id) const {
        std::vector<Trap> out;
        for (const auto& t : traps_) if (t.map_id == map_id) out.push_back(t);
        return out;
    }
    void clear() { traps_.clear(); }
    static uint32_t next_id() {
        static uint32_t n = 0x70000000u;
        return ++n;
    }

private:
    std::vector<Trap> traps_;
};

// the original lookface fix-up from CMapTrap::CreateNew
inline uint16_t trap_look(uint32_t traptype_look, uint32_t info_look) {
    uint32_t low = info_look % 10;
    return (uint16_t)(((traptype_look / 10) - (low / 10)) * 10 + low);
}

inline conquer::Packet build_trap_1101(const Trap& t, uint8_t kind_override = 0xFF) {
    uint8_t buf[0x41];
    std::memset(buf, 0, sizeof(buf));
    uint8_t kind = (kind_override == 0xFF) ? t.kind : kind_override;

    auto w4 = [&](size_t off, uint32_t v) {
        std::memcpy(buf + off, &v, 4);
    };
    auto w2 = [&](size_t off, uint16_t v) {
        std::memcpy(buf + off, &v, 2);
    };
    w4(0x00, (uint32_t)::time(nullptr));
    w4(0x04, t.id);
    w2(0x08, t.x);            // trap layout: x sits where an item has itemtype
    w2(0x0C, t.y);
    w2(0x10, t.look);
    buf[0x12] = MAPITEM_CAST_TRAP;
    w4(0x13, t.owner);        // packed: u4 at 0x13 (unaligned, as the original)
    buf[0x17] = kind;
    w4(0x18, t.owner);        // the +0x2b0 sub-object id, when present
    w4(0x1C, 0);
    buf[0x20] = 0;
    w4(0x21, 0);
    w4(0x25, 0);
    std::strncpy((char*)buf + 0x31, t.name.c_str(), 15);
    conquer::Packet p(conquer::MSG_MAP_ITEM_1101);
    for (size_t i = 0; i < sizeof(buf); ++i) p.write<uint8_t>(buf[i]);
    p.finalize();
    return p;
}
