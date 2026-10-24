#pragma once
// v33: DynaNpc system — runtime records for cq_dynanpc (1,863 rows in
// the real DB: stakes, awarders, mines, dyna quest NPCs).
//
// Original evidence (MsgServer.c):
//  - action 201 (case 0xc9, ~218033): sscanf(param,"%s %s %s %u %d") =
//    "<var> <op> <value> <npcid> [flag]". npc id 0 = the npc context of
//    the running chain; lookup fails -> "Can't find npc_id[%u]" DBERROR.
//    Records flagged non-dyna -> "NPC(%u) RecordID(%u) is not DynaNpc".
//    Vars: data0..data3, datastr (null = empty), ownerid, ownertype.
//  - action 301 (case 0x12d, ~219199): sscanf "%u %d %d" = lookface,x,y.
//    The context NPC is converted into a DynaNpc at the new coords
//    (FUN_1402bf7a0: +0x20=x, +0x24=y, lookface from param); broadcast
//    via CMsgPlayer 10014 (FUN_1402bda30 -> FUN_14039eef0) — dyna npcs
//    are player-like world objects in this engine.
//  - action 302 (case 0x12e, ~219235): "map_user|alive_user <op> <n>"
//    counts users on the current map (vtable +0x168 = map id compare).
#include <map>
#include <functional>
#include <string>
#include <cstdint>
#include <cstdio>
#include "../core/database.hpp"
#include "npc.hpp"
#include "protocol/spawn_10014.hpp"

namespace conquer {

class DynaNpcSystem {
public:
    static DynaNpcSystem& instance() {
        static DynaNpcSystem d; return d;
    }

    // startup load; registers clickable records into NpcSystem when the
    // id is not already used by a static cq_npc row.
    void load(IDatabase& db) {
        for (auto& r : db.load_dynanpcs()) {
            recs_[r.id] = r;
            if (!NpcSystem::instance().find(r.id) && r.task0) {
                NpcDef d;
                d.id = r.id; d.name = r.name;
                d.map_id = r.mapid; d.x = r.cellx; d.y = r.celly;
                d.task0 = r.task0; d.task1 = r.task1;
                d.task2 = r.task2; d.task3 = r.task3;
                d.task4 = r.task4; d.task5 = r.task5;
                d.task6 = r.task6; d.task7 = r.task7;
                NpcSystem::instance().register_npc(std::move(d));
            }
        }
        std::printf("[dynanpc] loaded %zu records\n", recs_.size());
    }

    IDatabase::DynaNpcRecord* find(uint32_t id) {
        auto it = recs_.find(id);
        return it == recs_.end() ? nullptr : &it->second;
    }

    // 301: create a new dyna record (DB insert) and store it.
    // Returns the new id, or 0 on failure.
    uint32_t create(IDatabase& db, const IDatabase::DynaNpcRecord& r) {
        IDatabase::DynaNpcRecord rec = r;
        rec.id = db.insert_dynanpc(rec);
        if (!rec.id) return 0;
        recs_[rec.id] = rec;
        if (rec.task0 && !NpcSystem::instance().find(rec.id)) {
            NpcDef d;
            d.id = rec.id; d.name = rec.name;
            d.map_id = rec.mapid; d.x = rec.cellx; d.y = rec.celly;
            d.task0 = rec.task0;
            NpcSystem::instance().register_npc(std::move(d));
        }
        return rec.id;
    }

    // 201 write-through: any slot change is persisted immediately.
    void save(IDatabase& db, const IDatabase::DynaNpcRecord& r) {
        db.update_dynanpc(r);
    }

    // 10014 spawn packet for a dyna record (player-like object).
    Packet spawn_packet(const IDatabase::DynaNpcRecord& r) {
        SpawnInfo s;
        s.id = r.id; s.name = r.name;
        s.lookface = r.lookface;
        s.x = static_cast<uint16_t>(r.cellx);
        s.y = static_cast<uint16_t>(r.celly);
        return build_spawn_10014(s);
    }

    // dyna records on a map, for login-range sync
    void for_map(uint32_t map_id,
                 const std::function<void(const IDatabase::DynaNpcRecord&)>& fn) {
        for (auto& [id, r] : recs_) {
            (void)id;
            if (r.mapid == map_id) fn(r);
        }
    }

private:
    DynaNpcSystem() = default;
    std::map<uint32_t, IDatabase::DynaNpcRecord> recs_;
};

} // namespace conquer
