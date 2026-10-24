// Task system - cq_task rows (21,533) + CUser::CheckTaskQualification
// port (MsgServer.c FUN_14039afd0 + FUN_14039a9c0, verified):
//   1. itemname1/itemname2 non-empty -> player must OWN an item whose
//      cq_itemtype.name matches (original FUN_14032f1a0(user, name, 1))
//   2. task.money <= player money
//   3. task.profession == 0 (any) or == player profession
//   4. min_pk <= player pk <= max_pk
//   (sex/team/marriage/metempsychosis columns are NOT checked by the
//   original qualification fn on this build - all rows are 999/any anyway)
//
// NPC click flow (FUN_140470df0 CNpc::ProcessTaskNpc): iterate the NPC's
// task list (cq_npc.task0..task7), FIRST task the player qualifies for
// -> run task.id_next as an ACTION chain (cq_action engine).
//
// Task accept (msgdialog.cpp ProcessDialog 'e' / ProcessClientTask 'f'):
// dialog option link = task id with client_active==1 -> qualification:
//   pass    -> ProcessAction(task.id_next)
//   fail    -> ProcessAction(task.id_nextfail) or STR_UNQUALIFIED talk
// client_active==0 tasks: the original sends the (not yet extracted)
// CMsgTask info packet; we keep the v23 action-chain behavior.
#pragma once

#include <cstdint>
#include <cstdio>
#include <string>
#include <unordered_map>
#include <vector>

#include "../core/database.hpp"
#include "world.hpp"

namespace conquer { namespace task_system {

struct TaskDef {
    uint32_t id = 0;
    uint32_t id_next = 0;
    uint32_t id_nextfail = 0;
    std::string itemname1, itemname2;
    uint32_t money = 0;       // player money must be >= this
    int32_t  profession = 0;  // 0 = any
    int32_t  min_pk = -100000, max_pk = 100000;
    int32_t  client_active = 0;
};

class TaskTable {
public:
    static TaskTable& instance() { static TaskTable t; return t; }

    // Load from the DB. Returns the row count.
    unsigned load(IDatabase* db) {
        rows_.clear();
        for (const TaskRow& r : db->load_tasks()) {
            TaskDef t;
            t.id = r.id;
            t.id_next = r.id_next;
            t.id_nextfail = r.id_nextfail;
            t.itemname1 = r.itemname1;
            t.itemname2 = r.itemname2;
            t.money = r.money;
            t.profession = r.profession;
            t.min_pk = r.min_pk;
            t.max_pk = r.max_pk;
            t.client_active = r.client_active;
            rows_[t.id] = t;
        }
        std::printf("[task] loaded %zu cq_task rows\n", rows_.size());
        return (unsigned)rows_.size();
    }

    const TaskDef* find(uint32_t id) const {
        auto it = rows_.find(id);
        return it == rows_.end() ? nullptr : &it->second;
    }
    size_t size() const { return rows_.size(); }

private:
    std::unordered_map<uint32_t, TaskDef> rows_;
};

// itemtype id -> name map for the by-name ownership check
class ItemNameTable {
public:
    static ItemNameTable& instance() { static ItemNameTable t; return t; }

    void load(IDatabase* db) {
        type_to_name_.clear();
        for (const auto& [id, name] : db->load_itemtype_names())
            type_to_name_[id] = name;
        std::printf("[task] loaded %zu itemtype names\n", type_to_name_.size());
    }

    // does the player own an item whose cq_itemtype.name == name?
    // (inventory + equipment; amount >= 1)
    bool player_has_item_by_name(const Player& p, const std::string& name) const {
        if (name.empty()) return true;
        for (const auto& it : active_db()->load_player_items(p.id)) {
            auto itr = type_to_name_.find(it.type);
            if (itr != type_to_name_.end() && itr->second == name && it.amount >= 1)
                return true;
        }
        return false;
    }

private:
    std::unordered_map<uint32_t, std::string> type_to_name_;
};

// CUser::CheckTaskQualification (FUN_14039afd0). Returns true when the
// player may take / be offered the task.
inline bool task_qualifies(const Player& p, const TaskDef& t) {
    const ItemNameTable& names = ItemNameTable::instance();
    // itemname1 / itemname2 ownership checks (original checks these
    // FIRST and fails the whole qualification when missing)
    if (!names.player_has_item_by_name(p, t.itemname1)) return false;
    if (!names.player_has_item_by_name(p, t.itemname2)) return false;
    // money: task.money <= player money
    if (t.money > p.money) return false;
    // profession: 0 = any
    if (t.profession != 0 && (uint32_t)t.profession != p.profession) return false;
    // pk range
    if ((int64_t)p.pk < (int64_t)t.min_pk || (int64_t)p.pk > (int64_t)t.max_pk)
        return false;
    return true;
}

}  // namespace task_system
}  // namespace conquer
