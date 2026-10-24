#pragma once
// ============================================================================
// DROP SYSTEM v19 - ported from MsgServer.exe decompile
// ----------------------------------------------------------------------------
// Death-drop chain (extracted from the original binary, see docs):
//
//  CMsgInteract 1022 kill path ->
//    FUN_14038dc80  CMonster money dispatcher (level-bracket roll, per-stack
//                   amounts from cq_monstertype.drop_money; each stack is
//                   routed 40% to FUN_14038aab0 (equipment-if-big) or 60%
//                   to FUN_14038a560 (money pile))
//    FUN_14038afc0  pill drop: 3% chance, 1-8 pills of cq_monstertype
//                   .drop_hp / .drop_mp (real cq_itemtype ids, e.g. 1000000
//                   Stancher) via FUN_14038a790 (DropItemByType)
//    FUN_14037cf50  CMapItem money-pile init: tier itemtype by amount
//                   (<11->0x10a1d0, <100->0x10a1da, <1000->0x10a1e4,
//                    <2001->0x10a5b8, <5000->0x10a5c2, else 0x10a5cc),
//                   lifetime = min(amount/25+30, 180) secs
//    FUN_14037c190  spawn broadcast = CMsgMapItem packet 1101 action 1
//    FUN_1403a5de0  1101 wire layout (payload coords, header is [len:2]
//                   [type:2], payload starts at wire+4):
//                     +0  time(4)         wire+4
//                     +4  ground id(4)    wire+8   (pickup target id)
//                     +8  itemtype(4)     wire+0xC (tier itemtype for money)
//                     +0xC x(2)           wire+0x10
//                     +0xE y(2)           wire+0x12
//                     +10 color(2)        wire+0x14
//                     +12 action(1)      wire+0x16 (1=spawn, 3=remove/pick)
//                     +13 flag(1)         wire+0x17
//                     +18 dropper(4)      wire+0x1C
//                   total packet len 0x41 = 65 (client CMsgMapItem parser
//                   Conquer.c FUN_007f6fa0 verified the same offsets; the
//                   client pickup sender FUN_007f6dad sends action 3 with
//                   the ground id at wire+8).
// ============================================================================
#include "core/database.hpp"
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include "systems/monsters.hpp"
#include <ctime>
#include <random>
#include <map>
#include <mutex>
#include <vector>

namespace conquer {

constexpr uint8_t  MAPITEM_SPAWN    = 1;    // ITEMFALL (FUN_1403a5de0 action)
constexpr uint8_t  MAPITEM_REMOVE   = 3;    // pickup / despawn (client case 3)

// money-pile visual tier (FUN_14037cf50 exact chain)
inline uint32_t money_tier_itemtype(uint32_t amount) {
    if (amount < 11)    return 0x10a1d0; // 1089480
    if (amount < 100)   return 0x10a1da; // 1089498
    if (amount < 1000)  return 0x10a1e4; // 1089572
    if (amount < 2001)  return 0x10a5b8; // 1091000
    if (amount < 5000)  return 0x10a5c2; // 1091010
    return 0x10a5cc;                              // 1091012 (dropMoney.wav)
}

// equipment families (cq_itemtype id ranges, verified against the real DB)
enum EquipCat : uint8_t {
    EQ_ARMET = 0, EQ_NECKLACE, EQ_ARMOR, EQ_RING, EQ_WEAPON, EQ_SHIELD, EQ_SHOES
};
// ground object living on a map (CMapItem, FUN_14037c6e0 = new 0xe8 bytes)
struct GroundItem {
    uint32_t id        = 0;    // unique ground id (pickup target)
    uint32_t itemtype  = 0;    // real itemtype, or money tier for piles
    uint16_t x = 0, y = 0;
    uint32_t amount    = 1;    // money amount / item stack amount
    bool     is_money  = false;
    uint32_t dropper   = 0;    // killing player id (0 = anyone may pick)
    time_t   expire_at = 0;
    time_t   born_at   = 0;    // owner-lock window (original ~30s)
};

// ---- 1101 builders ---------------------------------------------------------
// payload offsets are wire offsets minus 4 (the packet header).
inline Packet build_map_item_1101(const GroundItem& g, uint8_t action) {
    Packet p(MSG_MAP_ITEM_1101);
    p.write<uint32_t>((uint32_t)::time(nullptr));  // +0  time
    p.write<uint32_t>(g.id);                        // +4  ground id
    p.write<uint32_t>(g.itemtype);                  // +8  itemtype / tier
    p.write<uint16_t>(g.x);                          // +0xC x
    p.write<uint16_t>(g.y);                          // +0xE y
    p.write<uint16_t>((uint16_t)0);                  // +0x10 color display
    p.write<uint8_t>(action);                        // +0x12 action
    p.write<uint8_t>((uint8_t)0);                    // +0x13 sort display flag
    p.write<uint8_t>(0); p.write<uint8_t>(0);         // +0x14..0x17 pad
    p.write<uint8_t>(0);
    p.write<uint32_t>(g.dropper);                   // +0x18 dropper id
    // pad to the original 0x41 total (payload 61 bytes)
    for (size_t i = 32; i < 61; i++) p.write<uint8_t>(0);
    p.finalize();
    return p;
}

// ---- CMsgItemInfo 1008 (0x3F0): full item info -----------------------------
// Server builder FUN_1404587d0 + CItem::SaveInfo FUN_140101cb0, VERIFIED
// against the client parser FUN_00820fb7 (client buffer = wire; case 1 =
// create a new item object, position 0 -> client auto-assigns an inventory
// slot). Wire total len 0x44 = header 4 + payload 64.
//   wire+0x04 id, +0x08 itemtype, +0x0C position u2, +0x0E window u2,
//   +0x10 action u1 (1 = add item), +0x11 flag u1, +0x12 sort u1,
//   +0x14 amount u4 (stack count / durability),
//   +0x18 gem1 u1, +0x19 gem2 u1, +0x1C magic3 u4,
//   +0x22/+0x24 bytes, +0x28 u4 (client item+0x1E8),
//   +0x2C/+0x30 u2s, +0x34/+0x38/+0x3C/+0x40 u4s, +0x46 kind u2.
inline Packet build_item_info_1008(uint32_t id, uint32_t itemtype,
                                   uint32_t amount, uint16_t position,
                                   uint8_t action) {
    Packet p(1008);
    p.write<uint32_t>(id);        // +0  (wire+0x04)
    p.write<uint32_t>(itemtype);  // +4  (wire+0x08)
    p.write<uint16_t>(position);  // +8  (wire+0x0C)
    p.write<uint16_t>(0);         // +0xA (wire+0x0E) window
    p.write<uint8_t>(action);     // +0xC (wire+0x10)
    p.write<uint8_t>(0);          // +0xD (wire+0x11) flag
    p.write<uint8_t>(0);          // +0xE (wire+0x12) sort (0 -> inventory UI)
    p.write<uint8_t>(0);          // +0xF pad
    p.write<uint32_t>(amount);    // +0x10 (wire+0x14) amount
    // gems / magic3 / unverified detail fields stay zero (plain drop)
    for (size_t i = 0x14; i < 64; i++) p.write<uint8_t>(0);
    p.finalize();
    return p;
}


// ---- CMsgItemInfoEx 1116 (0x454) ------------------------------------------
// Builder = FUN_1403873d0 (CMsgItemInfoEx::Create, MsgServer.c 637418):
// type 0x454, len 0x4E. VERIFIED fields: wire+0x04 = item id
// (CItem::GetInfo struct[0]), wire+0x08 = CUser::GetID (Create param_3),
// wire+0x0C = Create param_4 (u1, callers pass 0), wire+0x14 = the
// itemtype record's first numeric column (GetInfo struct[1] = record
// field 1; we write the itemtype id here - PARTIALLY VERIFIED, the
// CItemData field->cq_itemtype column map lives in DB.dll),
// wire+0x1C = Create param_5 (u1), wire+0x46/+0x4A = FUN_140100320/
// 140100340(item). Remaining detail fields (gems/sockets) are read
// from the itemtype record and stay zero here.
inline Packet build_item_info_ex_1116(uint32_t item_id, uint32_t uid,
                                      uint32_t itemtype) {
    Packet p(1116);
    p.write<uint32_t>(item_id);   // +0  (wire+0x04) CItem::GetID
    p.write<uint32_t>(uid);       // +4  (wire+0x08) player id
    p.write<uint8_t>(0);          // +8  (wire+0x0C) Create param_4
    p.write<uint8_t>(0); p.write<uint8_t>(0); p.write<uint8_t>(0); // pad
    p.write<uint32_t>(0);         // +0xC (wire+0x10) GetInfo struct[?]
    p.write<uint32_t>(itemtype);  // +0x10 (wire+0x14) type record col 1
    p.write<uint32_t>(0);         // +0x14 (wire+0x18) param_5 / cols
    p.write<uint32_t>(0);         // +0x18 (wire+0x1C)
    p.write<uint32_t>(0);         // +0x1C (wire+0x20)
    for (size_t i = 0x20; i < 0x46; i++) p.write<uint8_t>(0); // detail
    p.write<uint32_t>(0);         // +0x46 (wire+0x4A) FUN_140100320
    p.write<uint32_t>(0);         // +0x4A (wire+0x4E) FUN_140100340
    p.finalize();
    return p;
}

// ---- FUN_1400ff680 (MsgServer.c 189175): item CLASS from itemtype ------
// Used by action 512's socket gate (FUN_140106cf0) and weapon checks.
// Classes: 1/2/3/7/8/11 = 1x-type gear, 12/13/21/22 = 2x-type gear,
// 16/15/18/19 = 3x-type gear, 4 = 4x/6x, 5 = 5x, 9 = 7x, 6 = 9x,
// 0 = 10x, 10 = 20x-29x, 14 = "300"-type multiples of 10.
inline int item_class(uint32_t t) {
    int i = (int)((t % 10000000u) / 1000u);
    if (i == 123) return 1;
    if (i == 300 && t == (t / 10) * 10) return 14;
    switch ((t % 10000000u) / 100000u) {
    case 1:
        switch ((t % 1000000u) / 10000u) {
        case 11: case 14: return 1;
        case 12: return 2;
        case 13: return 3;
        case 15: return 7;
        case 16: return 8;
        case 18: case 19: return 11;
        default: return -1;
        }
    case 2:
        switch ((t % 100000u) / 1000u) {
        case 0: return 20;
        case 1: return 12;
        case 2: return 13;
        case 3: return 21;
        case 4: return 22;
        default: return -1;
        }
    case 3:
        switch ((t % 100000u) / 1000u) {
        case 50: return 16;
        case 60: return 15;
        case 70: return 18;
        case 80: return 19;
        default: return -1;
        }
    case 4: case 6: return 4;
    case 5: return 5;
    case 7: return 9;
    case 9: return 6;
    case 10: return 0;
    case 20: case 21: case 22: case 23: case 24: case 25:
    case 26: case 27: case 28: case 29: return 10;
    default: return -1;
    }
}

// ---- CMsgItemStatus 2077 (0x81D): item status update -----------------------
// Builder FUN_1403b6200; client parser Conquer.c ~819930 (VERIFIED):
// [count:4]@wire+4, entries from wire+8, stride 0x20 (8 dwords):
//   [id][mode(1)+3pad][position][amount][max_dur][time_left][d6][d7]
// mode 8 = inventory item (position 0, no timer). Wire len = 4 + 4 + 32*n.
inline Packet build_item_status_2077(uint32_t id, uint8_t mode,
                                    uint16_t position, uint32_t amount,
                                    uint32_t max_dur) {
    Packet p(2077);
    p.write<uint32_t>(1);         // +0  entry count (wire+4)
    p.write<uint32_t>(id);        // +4  entry+0
    p.write<uint8_t>(mode);       // +8  entry+4 mode
    p.write<uint8_t>(0); p.write<uint8_t>(0); p.write<uint8_t>(0);
    p.write<uint32_t>(position);  // +0xC entry+8
    p.write<uint32_t>(amount);    // +0x10 entry+0xC
    p.write<uint32_t>(max_dur);   // +0x14 entry+0x10
    p.write<uint32_t>(0);         // +0x18 entry+0x14 time_left
    p.write<uint32_t>(0);         // +0x1C entry+0x18
    p.write<uint32_t>(0);         // +0x20 entry+0x1C
    p.finalize();
    return p;
}

// batched CMsgItemStatus 2077 (login inventory/equipment dump: the
// original CUser::SendItemInfo FUN_14019a030 loops items appending
// entries to ONE packet before sending)
struct ItemStatusEntry { uint32_t id; uint8_t mode; uint16_t position;
                         uint32_t amount; uint32_t max_dur; };
inline Packet build_item_status_2077_batch(
        const std::vector<ItemStatusEntry>& entries) {
    Packet p(2077);
    p.write<uint32_t>((uint32_t)entries.size());
    for (const auto& e : entries) {
        p.write<uint32_t>(e.id);
        p.write<uint8_t>(e.mode);
        p.write<uint8_t>(0); p.write<uint8_t>(0); p.write<uint8_t>(0);
        p.write<uint32_t>(e.position);
        p.write<uint32_t>(e.amount);
        p.write<uint32_t>(e.max_dur);
        p.write<uint32_t>(0); p.write<uint32_t>(0); p.write<uint32_t>(0);
    }
    p.finalize();
    return p;
}

// ---- per-map container ------------------------------------------------------
class GroundItemManager {
public:
    GroundItem* spawn_money(uint32_t amount, uint16_t x, uint16_t y,
                            uint32_t dropper) {
        if (amount == 0 || amount >= 10000000) return nullptr; // FUN_14037cf50 guard
        GroundItem g;
        g.id        = next_id_++;
        g.itemtype  = money_tier_itemtype(amount);
        g.x = x; g.y = y;
        g.amount    = amount;
        g.is_money  = true;
        g.dropper   = dropper;
        g.born_at   = ::time(nullptr);
        g.expire_at = g.born_at + (amount / 25 + 30 < 180 ? amount / 25 + 30 : 180);
        auto [it, ok] = items_.emplace(g.id, g);
        return ok ? &it->second : nullptr;
    }
    GroundItem* spawn_item(uint32_t itemtype, uint32_t amount,
                           uint16_t x, uint16_t y, uint32_t dropper) {
        if (itemtype == 0) return nullptr;
        GroundItem g;
        g.id        = next_id_++;
        g.itemtype  = itemtype;
        g.x = x; g.y = y;
        g.amount    = amount ? amount : 1;
        g.is_money  = false;
        g.dropper   = dropper;
        g.born_at   = ::time(nullptr);
        g.expire_at = g.born_at + 60;   // approx of FUN_14037c000 config item
        auto [it, ok] = items_.emplace(g.id, g);
        return ok ? &it->second : nullptr;
    }
    GroundItem* find(uint32_t id) {
        auto it = items_.find(id);
        return it == items_.end() ? nullptr : &it->second;
    }
    void remove(uint32_t id) { items_.erase(id); }
    const std::map<uint32_t, GroundItem>& all() const { return items_; }
    // expire sweep; returns ids whose 1101-remove must be broadcast
    std::vector<GroundItem> sweep(time_t now) {
        std::vector<GroundItem> gone;
        for (auto it = items_.begin(); it != items_.end();) {
            if (now >= it->second.expire_at) {
                gone.push_back(it->second);
                it = items_.erase(it);
            } else ++it;
        }
        return gone;
    }
private:
    std::map<uint32_t, GroundItem> items_;
    uint32_t next_id_ = 0x3B9ACAC0; // distinct from player/monster id spaces
};

// ---- equipment selector (scoped port of FUN_1401013d0 / GetEquipTypeByLev) --
// Loads the cq_itemtype equipment families once per process.
inline std::vector<EquipTypeRecord>& equip_table() {
    static std::vector<EquipTypeRecord> tbl;
    static std::once_flag once;
    std::call_once(once, [] {
        if (active_db()) {
            tbl = active_db()->load_equip_types();
            std::printf("[drops] equip table: %zu itemtypes\n", tbl.size());
        }
    });
    return tbl;
}

inline uint32_t tq_rand(int n) { // stand-in for tq::RandGet (n > 0)
    if (n <= 1) return 0;
    // seeded mt19937 (std::rand() without srand() replays the SAME
    // deterministic sequence every process -> 3% pill drops became
    // reproducibly luck-dependent on test ordering)
    static thread_local std::mt19937 rng([]{
        std::random_device rd;
        return rd() ^ (std::mt19937::result_type)std::time(nullptr);
    }());
    return (uint32_t)(rng() % (uint32_t)n);
}

// roll the 7 classic cq_monstertype category columns (drop_armet .. drop_shoes,
// "1 in N" chance each) and pick a random itemtype of the winning category
// whose req_level is closest to (but not far above) the monster level.
inline uint32_t pick_equipment(uint32_t level) {
    int best_cat = -1;
    for (int i = 0; i < 7; i++)
        if (tq_rand(100) < 4) { best_cat = i; break; } // 4% per category try
    if (best_cat < 0) return 0;
    const auto& tbl = equip_table();
    std::vector<const EquipTypeRecord*> cand;
    for (const auto& e : tbl) {
        if (e.category != (uint8_t)best_cat) continue;
        uint32_t want_lo = level > 3 ? level - 3 : 1;
        if (e.req_level >= want_lo && e.req_level <= level + 3)
            cand.push_back(&e);
    }
    if (cand.empty()) return 0;
    return cand[tq_rand((int)cand.size())]->id;
}

// ---- death-drop orchestration ----------------------------------------------
// call with the map's GroundItemManager right after the kill broadcast.
// Returns the ground objects that were spawned (caller broadcasts them).
inline std::vector<GroundItem*> roll_death_drops(GroundItemManager& mgr,
                                                 const Monster& mon,
                                                 const class MonsterTypeRecord& mt,
                                                 uint32_t killer_id,
                                                 uint16_t x, uint16_t y) {
    std::vector<GroundItem*> out;
    // ---- money dispatcher (FUN_14038dc80) ----
    // stack multipliers per level bracket: <61: 4000/480, >=61: 2640/360
    uint32_t drop_money = mt.drop_money;
    for (int pass = 0; pass < 2; pass++) {
        int roll = (int)tq_rand(100);
        int mult = 0, stacks = 0;
        if (mon.level < 61) {
            if (pass == 0 ? roll >= 2 : roll >= 0x1b) continue; // 2% / 25%
            mult = (pass == 0) ? 4000 : 480;
            stacks = pass == 0
                ? (int)(5 + tq_rand(4))                       // 5..8 piles
                : (int)(tq_rand(100) < 10 ? 3 : 1 + tq_rand(1)); // 3 / 1-2
        } else {
            if (pass == 0 ? roll >= 3 : roll >= 0x23) continue; // 3% / 32%
            mult = (pass == 0) ? 2640 : 360;
            stacks = pass == 0
                ? (int)(5 + tq_rand(4))
                : (int)(tq_rand(100) < 10 ? 3 : 1 + tq_rand(1));
        }
        for (int s = 0; s < stacks; s++) {
            // amount = 0.8 * (RandGet(drop_money)*mult/100) / stacks
            uint64_t base = (uint64_t)tq_rand((int)(drop_money + 1)) * mult / 100;
            uint32_t amount = (uint32_t)(base * 8 / 10 / (uint64_t)stacks);
            if (amount == 0) continue;
            if (tq_rand(100) < 0x28) { // 40% branch -> FUN_14038aab0
                if (amount >= 100) {   // treated as level*100: equipment
                    uint32_t it = pick_equipment(amount / 100);
                    if (it != 0) {
                        GroundItem* g = mgr.spawn_item(it, 1, x, y, killer_id);
                        if (g) out.push_back(g);
                        continue;
                    }
                }
                // amount < 100 -> falls through to the money pile
            }
            if (amount <= 10 && mon.level >= 80) continue; // FUN_14038a560 guard
            GroundItem* g = mgr.spawn_money(amount, x, y, killer_id);
            if (g) out.push_back(g);
        }
    }
    // ---- pills (FUN_14038afc0): 3% chance, 1-8 pills of drop_hp/drop_mp ----
    if ((int)tq_rand(100) < 3) {
        int r = (int)tq_rand(100);
        int n = r < 2 ? 8 : r < 3 ? 6 : r < 5 ? 5 : r < 8 ? 4 : r < 10 ? 3
                     : (r < 25 ? 2 : 1);
        for (int i = 0; i < n; i++) {
            uint32_t it = (tq_rand(2) == 1) ? mt.drop_hp : mt.drop_mp;
            if (it == 0) it = mt.drop_hp ? mt.drop_hp : mt.drop_mp;
            if (it == 0) break;
            GroundItem* g = mgr.spawn_item(it, 1, x, y, killer_id);
            if (g) out.push_back(g);
        }
    }
    return out;
}

} // namespace conquer
