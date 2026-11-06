// Status / buff manager — the port of provider 0x14 (`status::CStatusMgr`,
// Status.dll). Evidence: docs/worker_v125_statusmgr.md.
//
// Slot map (Status.dll vftable 0x1416da0f8):
//   +0xd8 = HasStatus(id)          -> record exists AND state == 3   (no DB)
//   +0x8  = AddStatus(11 args)     -> append one CStatus entry; the OS-status
//                                     branch persists into `cq_status`
//                                     (CUserStatus::AppendOSUserStatus)
//   +0x10 = ApplyUserStatusCode(uid, code)  -> per-user code apply (memory)
//   +0x28 = GetStatusTypes(uid)    -> vector<type id> enumeration (no DB)
//   +0x40 = ClearStatusType(uid, type)      -> erase (memory only)
//
// Record layout proven from the +0x8 argument build:
//   +0x00 0            +0x04 actorId       +0x08 targetId
//   +0x0c t1           +0x10 flags byte    +0x11 (char)t4
//   +0x14 t2           +0x18 now + t3      +0x1c t5 + 1
//   +0x20 t6           +0x24 0
// so t3 is a DURATION IN SECONDS (proven by `now + t3`, 0x1416be116..0x125).
//
// STILL UNKNOWN (do not invent):
//   * what the state value 3 means (only that +0xd8 compares == 3);
//   * how the record fields map onto the `cq_status` columns, so this port
//     keeps the records in MEMORY and does not write the table yet;
//   * the wire packet for a live status mutation (the Status module pushes it
//     on login / suit-status sync, not from the action body).
#pragma once
#include <cstdint>
#include <ctime>
#include <map>
#include <utility>
#include <vector>
#include <cstdio>

namespace conquer {

struct StatusRec {
    uint32_t entry_id = 0;   // OBJID of the entry (HasStatus key)
    uint32_t actor = 0;      // who applied it   (rec+0x04)
    uint32_t target = 0;     // who carries it   (rec+0x08)
    int      t1 = 0;         // rec+0x0c  (meaning UNKNOWN)
    int      t2 = 0;         // rec+0x14
    int      t3 = 0;         // rec+0x18 duration in seconds (proven)
    int      t4 = 0;         // rec+0x11 (byte)
    int      t5 = 0;         // rec+0x1c stored as t5 + 1
    int      t6 = 0;         // rec+0x20
    time_t   end_time = 0;   // now + t3
    int      state = 3;      // 3 = "has it" per +0xd8
};

class StatusSystem {
public:
    static StatusSystem& instance() { static StatusSystem s; return s; }

    // +0xd8: record exists and its state is 3. Negative/zero ids are false
    // (`cmp edx,-1 / jle` at 0x1416b73e4).
    //
    // KEY NOTE: the original looks the id up in the per-user status map, so the
    // key space is the one the caller passes. 1096/1098 pass the action's
    // `data` column, whose DB values are small (29, 30, 31, 32 ...), while
    // AddStatus' OBJID guard rejects ids below 1000000 - so `data` cannot be the
    // entry OBJID; it is the status TYPE and the record is keyed by
    // (target, type). This port follows that reading; the exact OBJID that the
    // original's map stores is UNKNOWN (docs/worker_v125_statusmgr.md §UNKNOWN).
    bool has(int target, int type) const {
        if (type <= 0) return false;
        auto it = recs_.find(std::make_pair((uint32_t)target, (uint32_t)type));
        return it != recs_.end() && it->second.state == 3;
    }

    // +0x8: add one status entry. The original rejects ids outside the player
    // space (< 1000000) and the monster/pet window 900001..999999 outright
    // (0x1416be055 / 0x1416be1d9). Duration is relative (t3 seconds).
    bool add(int actor_id, int target_id, int t1, int t5, int t4,
             int t2, int t3, int t6, int type) {
        if (type <= 0) return false;
        StatusRec r;
        r.entry_id = (uint32_t)type;
        r.actor = (uint32_t)actor_id;
        r.target = (uint32_t)target_id;
        r.t1 = t1; r.t2 = t2; r.t3 = t3; r.t4 = t4; r.t5 = t5; r.t6 = t6;
        r.end_time = ::time(nullptr) + t3;
        r.state = 3;
        recs_[std::make_pair((uint32_t)target_id, (uint32_t)type)] = r;
        std::printf("[status] add id=%u actor=%d target=%d t1=%d t2=%d "
                    "dur=%d t4=%d t5=%d t6=%d end=+%ld\n",
                    r.entry_id, actor_id, target_id, t1, t2, t3, t4, t5, t6,
                    (long)t3);
        return true;
    }

    // +0x10: apply one status code for a user (uid 0 is a silent no-op,
    // `test edx,edx; je ret` at 0x1416be330).
    void apply_code(int uid, int code) {
        if (uid == 0) return;
        std::printf("[status] apply_code uid=%d code=%d\n", uid, code);
    }

    // +0x28: every status type the user holds (vector<int> in the original).
    std::vector<int> types_of(int uid) const {
        std::vector<int> out;
        for (auto& [key, r] : recs_)
            if (key.first == (uint32_t)uid) out.push_back((int)r.entry_id);
        return out;
    }

    // +0x40: erase one status type of one user.
    void clear(int uid, int type) {
        recs_.erase(std::make_pair((uint32_t)uid, (uint32_t)type));
    }

    void clear_for(uint32_t owner) {
        for (auto it = recs_.begin(); it != recs_.end(); )
            if (it->first.first == owner) it = recs_.erase(it); else ++it;
    }

private:
    std::map<std::pair<uint32_t,uint32_t>, StatusRec> recs_;
};

} // namespace conquer
