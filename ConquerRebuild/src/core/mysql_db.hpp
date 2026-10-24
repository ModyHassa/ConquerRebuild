#pragma once
// MySQL persistence layer (libmariadb C API). Mirrors the original
// server's queries against the "cq" database:
//   auth:  SELECT id,name,password,banned,type FROM accounts WHERE name=? LIMIT 1
//   game:  SELECT id,account_id,name,recordmap_id,recordx,recordy,level,gm
//          FROM cq_user WHERE account_id=? LIMIT 1
//   uin:   UPDATE cq_user SET uin=? WHERE id=? LIMIT 1
//   save:  UPDATE cq_user SET recordmap_id=?,recordx=?,recordy=?,level=?
//          WHERE id=? LIMIT 1  (subset of the original full-row UPDATE;
//          original also persists lookface/hair/life/mana/money/...)
#include "core/database.hpp"
#include <mariadb/mysql.h>
#include <mutex>

namespace conquer {

class MySQLDatabase : public IDatabase {
public:
    MySQLDatabase(const std::string& host, unsigned port,
                  const std::string& user, const std::string& pass,
                  const std::string& dbname);
    ~MySQLDatabase() override;

    bool connected() const { return conn_ != nullptr; }

    UserRecord load_user(uint32_t account_id) override;
    CombatStats load_combat_stats(uint32_t user_id) override;
    void update_uin(uint32_t id, uint64_t uin) override;
    void save_user(const UserRecord& r) override;
    AccountRecord load_account(const std::string& name) override;
    std::vector<MonsterTypeRecord> load_monster_types() override;
    std::vector<GeneratorRecord> load_generators(uint32_t map_id) override;
    std::map<uint32_t, uint64_t> load_levexp() override;
    void save_exp_level(uint32_t user_id, uint64_t exp, uint32_t level) override;
    std::map<std::string, int64_t> load_user_vars(uint32_t player_id) override;
    void save_user_vars(uint32_t player_id,
                        const std::map<std::string, int64_t>& vars) override;
    std::vector<PlayerItemRecord> load_player_items(uint32_t player_id) override;
    bool map_exists(uint32_t map_id) override;
    std::vector<ActionRow> load_actions() override;
    std::vector<NpcRecord> load_npcs() override;
    // v29
    std::vector<TaskRow> load_tasks() override;
    std::vector<std::pair<uint32_t, std::string>> load_itemtype_names() override;
    std::vector<EquipTypeRecord> load_equip_types() override;
    uint32_t insert_item(uint32_t player_id, uint32_t type, uint32_t amount) override;
    bool delete_item(uint32_t item_id) override;
    bool execute_sql(const std::string& sql) override;
    bool query_string(const std::string& sql,
                      std::string& out) override;
    std::vector<DynaNpcRecord> load_dynanpcs() override;
    uint32_t insert_dynanpc(const DynaNpcRecord& r) override;
    void update_dynanpc(const DynaNpcRecord& r) override;
    bool update_item(uint32_t item_id, uint32_t type,
                     uint32_t amount) override;
    uint32_t itemtype_amount(uint32_t itemtype) override;
    void update_user_lookface(uint32_t player_id, uint32_t lookface) override;
    bool add_money(uint32_t user_id, int64_t delta) override;
    // ---- v24: weapon skill (proficiency) ----
    std::vector<WeaponSkillUpRecord> load_weapon_skill_up() override;
    std::vector<MagicTypeRecord> load_magictypes() override;
    std::vector<WeaponSkillRecord> load_weapon_skills(uint32_t player_id) override;
    void save_weapon_skill(uint32_t player_id,
                           const WeaponSkillRecord& r) override;
    std::vector<MagicRecord> load_player_magics(uint32_t player_id) override;
    void save_magic(uint32_t player_id, const MagicRecord& r) override;
    void delete_magic(uint32_t player_id, uint32_t type) override;

private:
    bool exec(const char* sql);   // no-result statements
    MYSQL* conn_ = nullptr;
    // libmariadb connections are NOT thread-safe; the server runs one
    // thread per client, so all database access is serialized.
    std::mutex mtx_;
};

} // namespace conquer
