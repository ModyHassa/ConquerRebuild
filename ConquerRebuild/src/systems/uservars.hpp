#pragma once
// Per-user script variables: stc()/stc_daily() counters, per-task records
// (complete/dataN/overtime/time), var(N)/svar(N) session vars, and
// %-template substitution.
//
// Extracted semantics (MsgServer.exe gameaction.cpp ProcessAction chain,
// verified vs real cq_action rows; see notes v28):
//   type 1073 (5,460 rows): "stc(41,12) == 112" — CONDITION on CUser stat
//     counters (user+0x40 map; FUN_140385cf0 getter).
//   type 1074 (2,996 rows): "stc(19,0) += 1 1" / "stc(97,31) = 1 1" —
//     EFFECT: get+add / set counter (FUN_140385de0 setter; trailing flag
//     column pairs are a persist hint, ignored).
//   type 1057 (4,747 rows): PER-TASK record (data column = cq_task id!):
//     "complete set 2" / "data1 += 1" / "data1 == 1" — fields complete
//     (u16, task-mgr vtbl+0x58/0x60), data1..data7 (vtbl+0x38 get /
//     +0x48 add / +0x50 set), overtime (vtbl+0x68/+0x78). All ops are
//     gated by the task-record existence check (vtbl+0x20): a compare on
//     a missing record fails (id_nextfail). Original creates records in
//     the task-accept flow; we auto-vivify on set/add so standalone
//     chains still work (documented deviation).
//   type 1058 (227 rows): same record, field data7 = task ACCEPT TIME
//     (unix seconds): "time set 0" -> data7 = now (vtbl+0x40); "time >= v"
//     -> now - v <= data7 (accepted within the last v secs); "interval(0)
//     >= v" -> elapsed = now - data7 compared directly. interval(1) is
//     treated like interval(0) (approximation, 58 rows).
//   type 1060: "var(N) > V" / ">= V" / "== V" — compare int64 var
//     (CUser+0x2f0 + idx*8, FUN_1401644d0).
//   type 1061 (2,328 rows): "var(N) set V" — set int64 var (FUN_140164520).
//   type 1062: "var(N) == <string>" — compare string var (CUser+0x1b0
//     std::string array, FUN_140164570), case-insensitive.
//   type 1063: "var(N) set <string>" — set string var (FUN_1401645e0).
//     All var idx checks are 0 <= idx <= 7 (user.cpp MAX_ACTION_VAR).
//   type 1065 (1,175 rows): "P S" — equipped item at position P has sort
//     S, sort = itemtype/1000 % 1000 (FUN_1400fed80 on the item record).
//   type 2003 (3,995 rows): "%user_map_id < 1961" — fully substituted
//     condition -> id_next / id_nextfail.
// %templates actually present in the DB (grep of all 5 types):
//   user_map_x/y/id (3600+), npc_x/y (266), user_id (92), map_owner_id
//   (96, 0 stub — map ownership not ported), levelup_exp, syn_id (0),
//   user_team (0), user_home_id (0); %iter_var_dataN left unsubstituted
//   (monster-loop iteration, not ported) and evaluates to 0.
// PERSISTENCE: original stores task records in the task module (module
// 0xd) with no matching table in this DB dump; we persist to our sidecar
// tables cq_user_script_var (ints; keys task:<id>:complete|d1..d7|ot,
// var:N) on logout. String vars (svar) are session-only like the
// original's CUser std::string members that never reach a save path.
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <map>
#include <string>

namespace conquer {

struct TaskRecord {                    // original task-module record
    uint16_t complete  = 0;           // vtbl+0x58/0x60 (u16)
    uint32_t overtime  = 0;           // vtbl+0x68/0x78
    int32_t  data[8]   = {};          // vtbl+0x38/0x48/0x50 (1..7 used)
    // data[7] doubles as the accept time (1058 "time"/"interval")
    int32_t  get_data(int idx) const {          // idx 1..7
        return (idx >= 1 && idx <= 7) ? data[idx] : 0;
    }
    void set_data(int idx, int32_t v) {
        if (idx >= 1 && idx <= 7) data[idx] = v;
    }
    void add_data(int idx, int32_t v) {
        if (idx >= 1 && idx <= 7) data[idx] += v;
    }
    // "time set 0" -> accept time = now (field 7)
    void touch_accept() { data[7] = (int32_t)std::time(nullptr); }
    int32_t accept_time() const { return data[7]; }
};

struct UserVars {
    std::map<uint64_t, int64_t> stc;        // key = a*1000+b
    std::map<uint64_t, int64_t> stc_daily;  // same keys, daily counters
    std::map<uint64_t, int64_t> timestamps; // v32: 1080 timestamp(N,M),
                                             // same key space as stc
    std::map<uint32_t, TaskRecord> tasks;   // key = cq_task id (data col)
    int64_t var[8] = {};                    // 1060/1061 int64 vars
    std::string svar[8];                    // 1062/1063 string vars

    static uint64_t stc_key(uint32_t a, uint32_t b) {
        return (uint64_t)a * 1000ull + b;
    }
    int64_t get_stc(uint32_t a, uint32_t b) const {
        auto it = stc.find(stc_key(a, b));
        return it == stc.end() ? 0 : it->second;
    }
    void set_stc(uint32_t a, uint32_t b, int64_t v) {
        stc[stc_key(a, b)] = v;
    }
    TaskRecord* task(uint32_t task_id) {
        return &tasks[task_id];            // auto-vivify (set/add ops)
    }
    const TaskRecord* task_if_exists(uint32_t task_id) const {
        auto it = tasks.find(task_id);
        return it == tasks.end() ? nullptr : &it->second;
    }
};

// %-template substitution (value-based to avoid circular includes).
inline std::string subst_templates(const std::string& in,
                                   uint32_t user_id,
                                   const std::string& user_name,
                                   uint32_t map_id, uint32_t x, uint32_t y,
                                   uint32_t level,
                                   uint32_t npc_id, uint32_t npc_x,
                                   uint32_t npc_y) {
    std::string s = in;
    auto rep = [&s](const char* t, const std::string& val) {
        size_t p;
        while ((p = s.find(t)) != std::string::npos)
            s.replace(p, strlen(t), val);
    };
    char buf[32];
    auto num = [&](uint64_t v) { snprintf(buf, sizeof buf, "%llu",
        (unsigned long long)v); return std::string(buf); };
    rep("%user_id",     num(user_id));
    rep("%user_name",   user_name);
    rep("%user_map_id", num(map_id));
    rep("%user_map_x",  num(x));
    rep("%user_map_y",  num(y));
    rep("%level",       num(level));
    rep("%npc_id",      num(npc_id));
    rep("%npc_x",       num(npc_x));
    rep("%npc_y",       num(npc_y));
    // stubs (systems not ported): ownership/syndicate/team/home/iter
    rep("%map_owner_id", "0");
    rep("%syn_id", "0");
    rep("%user_team", "0");
    rep("%user_home_id", "0");
    rep("%levelup_exp", "0");
    return s;
}

// --- expression helpers ------------------------------------------------------
inline bool to_i64(const std::string& s, int64_t& out) {
    out = std::strtoll(s.c_str(), nullptr, 10);
    return !s.empty();
}

// operators, longest first
inline bool find_op(const std::string& e, size_t& pos, std::string& op) {
    static const char* ops[] = {"==", "!=", ">=", "<=", ">", "<", nullptr};
    for (int i = 0; ops[i]; ++i) {
        pos = e.find(ops[i]);
        if (pos != std::string::npos) { op = ops[i]; return true; }
    }
    return false;
}

} // namespace conquer
