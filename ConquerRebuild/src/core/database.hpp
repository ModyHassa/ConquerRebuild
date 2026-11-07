#pragma once
// Database layer. The original server talks to MySQL (database "cq",
// config in config.ini). This interface matches the calls found in the
// decompiled MsgServer (UPDATE cq_user SET uin=%u WHERE id=%u LIMIT 1,
// SELECT id,name,account_id,uin,recordmap_id,level FROM cq_user WHERE
// account_id='%u') and the decompiled 2015 AccountServer
// (SELECT password FROM accounts WHERE name=@name).
//
// active_db() is the process-wide instance chosen at startup:
// MySQLDatabase when CQ_DB_HOST is set and connects, else MemoryDB.
#include <cstdint>
#include <cstdio>
#include <map>
#include <optional>
#include <string>
#include <map>
#include <vector>

namespace conquer {

// v120: one cq_rebirth row (schema: id, need_prof, new_prof, need_level,
// new_level, metepsychosis - read 0-based by FUN_140163c90, proven).
struct RebirthRow {
    uint32_t id = 0, need_prof = 0, new_prof = 0;
    uint32_t need_level = 0, new_level = 0, meta = 0;
};

struct UserRecord {
    uint32_t id           = 0;   // cq_user.id
    uint32_t account_id   = 0;
    std::string password;       // dev only (auth uses accounts.password)
    std::string name;           // player name (max 15 chars in original)
    uint32_t recordmap_id = 0;  // last map the player was on
    uint32_t recordx      = 400;
    uint32_t recordy      = 300;
    uint32_t level        = 1;
    uint64_t exp         = 0;   // cq_user.exp (bigint)
    uint32_t life         = 1000;  // cq_user.life (current hp at login)
    uint32_t mana         = 0;    // cq_user.mana
    uint64_t money        = 0;    // cq_user.money (attrib 4 = 64-bit)
    uint64_t uin          = 0;  // session/user instance id
    uint32_t gm_flags     = 0;  // stored in cq_config (type-based) in original
    uint32_t profession   = 0;  // cq_user.profession (task qualification)
    uint32_t syn_id       = 0;  // cq_synattr.syn_id  (guild membership)
    uint32_t syn_rank     = 0;  // cq_synattr.rank    (guild rank code)
    int32_t  pk           = 0;  // cq_user.pk
    uint32_t lookface     = 0;  // cq_user.lookface (hairdresser 1005)
    uint32_t hair         = 0;  // cq_user.hair (v85: script key 1004)
    // v94: the rest of the pinned GetUserInt keys that have a real cq_user column
    uint32_t virtue       = 0;  // cq_user.virtue        (key 1010)
    uint32_t meto         = 0;  // cq_user.metempsychosis(key 1011)
    uint32_t old_prof     = 0;
    // v131: the packed YYMMDDHH date container (columns of the same name).
    uint32_t god_status     = 0;   // cq_user.god_status
    uint32_t last_logout_3  = 0;   // cq_user.last_logout_3
    uint32_t last_login     = 0;   // cq_user.last_login  // cq_user.old_prof  (CUser +0xedb, v121)
    uint32_t first_prof   = 0;  // cq_user.first_prof (CUser +0xeda, v121)
    uint32_t home_id      = 0;  // cq_user.home_id       (key 1014)
    uint32_t nobility     = 0;  // cq_user.nobility      (key 1045)
    uint32_t business     = 0;  // cq_user.business      (key 1046)
    // v120: the CUserData stat block (see docs/worker_cuserdata.md)
    uint32_t strength     = 0;  // cq_user.strength
    uint32_t speed        = 0;  // cq_user.Speed
    uint32_t health       = 0;  // cq_user.health
    uint32_t soul         = 0;  // cq_user.soul
    uint32_t add_point    = 0;  // cq_user.additional_point
};

// Combat stats derived from equipped items (cq_item joined cq_itemtype) plus
// profession-table components. The original getters resolve through vtable
// slots on CPlayer (verified from MsgServer.exe CUser ctor vtable 0x14071e938):
//   slot 0x90 GetAttackMax / 0x88 GetAttackMin (FUN_14017fcd0/fa70: transformed
//   state or prof-table + item-table sums), slot 0xa8 GetDefense, slot 0xa0 /
//   0xb8 (FUN_14016ddb0/ded0: prof_stat[n] + item_stat[n] manager sums).
// v1 port: item side from the real database; prof-table side staged later.
struct CombatStats {
    uint32_t atk_min = 1;    // weapon attack_min  (cq_itemtype.attack_min)
    uint32_t atk_max = 1;    // weapon attack_max  (cq_itemtype.attack_max)
    uint32_t extra   = 0;    // attack-range component (atk_max - atk_min)
    uint32_t defense = 0;    // armor defense sum  (cq_itemtype.defense)
    uint32_t dodge   = 0;    // armor/boots dodge sum (cq_itemtype.dodge)
    uint32_t weapon_type = 0; // cq_itemtype.id/1000 of the equipped weapon
                              // (0 = bare hands -> boxing prof, type 0)
};

// ---- v24: weapon skill (proficiency) records --------------------------
// cq_weapon_skill_up: exp required to reach 'level' for a weapon type
struct WeaponSkillUpRecord { uint32_t type; uint32_t level; uint32_t req_exp; };
// cq_weapon_skill row per player+type
struct WeaponSkillRecord { uint32_t type; uint8_t level; uint32_t exp;
                           uint8_t old_level = 0; };  // v127: cq_weapon_skill.old_level

// Auth-side account row (original: SELECT * FROM accounts WHERE id=@id).
struct AccountRecord {
    uint32_t id       = 0;
    std::string name;
    std::string password;  // plaintext, as the original accounts.password
    int banned     = 0;
    int type       = 0;    // 1 = GM account
};


// ---- Monster system records (cq_monstertype / cq_generator) --------------
// cq_monstertype: one row per monster kind (823 kinds in the real DB).
// Stats used by the ported damage pipeline (CBattleSystem::ProcAttack):
// attack_min/max -> attacker roll, defence -> target defence slot,
// dodge -> target dodge slot (Part B), life -> monster max hp.
struct MonsterTypeRecord {
    uint32_t id = 0;            // cq_monstertype.id
    std::string name;           // cq_monstertype.name (client shows it)
    uint32_t lookface = 0;      // cq_monstertype.lookface (sprite)
    uint32_t life = 1;          // cq_monstertype.life
    uint32_t attack_min = 0;    // cq_monstertype.attack_min
    uint32_t attack_max = 0;    // cq_monstertype.attack_max
    uint32_t defence = 0;       // cq_monstertype.defence
    uint32_t dodge = 0;        // cq_monstertype.dodge
    uint32_t level = 1;         // cq_monstertype.level
    uint32_t kind = 1;          // cq_monstertype.type (1 = normal)
    // AI columns (CMonster::OnTimer loop / FUN_1403929b0-140394680):
    uint32_t attack_speed = 1000; // cq_monstertype.attack_speed (ms)
    uint32_t view_range   = 6;    // cq_monstertype.view_range (tiles)
    uint32_t attack_range = 1;    // cq_monstertype.attack_range (tiles, melee=1)
    uint32_t move_speed   = 500;  // cq_monstertype.move_speed (ms per step)
    uint32_t extra_exp   = 100; // cq_monstertype.extra_exp (percent)
    // drop columns (classic cq_monstertype; verified consumed by
    // FUN_14038dc80 / FUN_14038afc0 / FUN_1401013d0 in MsgServer.exe)
    uint32_t drop_money  = 0;    // cq_monstertype.drop_money (field 22)
    uint32_t drop_itemtype = 0;   // cq_monstertype.drop_itemtype (field 23)
    uint32_t drop_hp     = 0;    // cq_monstertype.drop_hp (real itemtype id)
    uint32_t drop_mp     = 0;    // cq_monstertype.drop_mp (real itemtype id)
};

// equipment families for the drop selector (cq_itemtype ranges:
// 111-118 armet, 120-121 necklace, 130-134 armor, 150-152 ring,
// 410-699 weapon, 900-901 shield, 160-163 boots)
struct EquipTypeRecord {
    uint32_t id        = 0;   // cq_itemtype.id
    uint32_t req_level = 0;   // cq_itemtype.req_level
    uint32_t amount    = 1;   // cq_itemtype.amount (durability/stack)
    uint8_t  category  = 0;   // EquipCat in drops.hpp
};

// cq_generator: spawn points. The original CMapGroup loads these per map
// and CMonster::Create allocates ids from the fixed monster id range
// (MsgServer: 0xAAE61 .. 0xAAE61+99999, checked with
// `id - 0xaae61U < 99999` all over mapgroupkernel).
struct GeneratorRecord {
    uint32_t id = 0;            // cq_generator.id
    uint32_t mapid = 0;         // cq_generator.mapid
    uint32_t npctype = 0;       // cq_generator.npctype -> cq_monstertype.id
    uint32_t maxnpc = 0;        // cq_generator.maxnpc (max alive per point)
    uint32_t bound_x = 0;       // cq_generator.bound_x
    uint32_t bound_y = 0;       // cq_generator.bound_y
    uint32_t bound_cx = 0;      // cq_generator.bound_cx
    uint32_t bound_cy = 0;      // cq_generator.bound_cy
    uint32_t rest_secs = 0;     // cq_generator.rest_secs (respawn delay)
    uint32_t timer_begin = 0;   // cq_generator.timer_begin (minutes; 0 = always)
    uint32_t timer_end = 0;     // cq_generator.timer_end
};

struct ActionRow {
    uint32_t id = 0;
    uint32_t id_next = 0;
    uint32_t id_nextfail = 0;
    uint32_t type = 0;
    int32_t  data = 0;
    std::string param;      // raw (uses ~ as space, client converts)
    // v133: the SECOND text parameter the original action router passes alongside
    // `param`. In the dialog family (1651) it reaches %rbx and is read with "%u" as
    // the selected ENTITY id. The DB has one param column, so this is filled at
    // runtime by the caller (see Player::chain_param2).
    std::string param2;
};
struct NpcRecord {
    uint32_t id = 0;
    std::string name;
    uint32_t map_id = 0;
    uint32_t x = 0, y = 0;
    uint32_t task0 = 0;     // cq_npc.task0..task7: task list (original
    uint32_t task1 = 0, task2 = 0, task3 = 0, task4 = 0;  // loads all 8;
    uint32_t task5 = 0, task6 = 0, task7 = 0;            // FUN_140470df0)
    std::string script;     // cq_npc.datastr: the Lua script for this NPC
};

// v29: cq_task row (task menu / accept qualification engine)
struct TaskRow {
    uint32_t id = 0;
    uint32_t id_next = 0;
    uint32_t id_nextfail = 0;
    std::string itemname1, itemname2;   // required item NAMES
    uint32_t money = 0;
    int32_t  profession = 0;             // 0 = any
    int32_t  min_pk = -100000, max_pk = 100000;
    int32_t  client_active = 0;
};

class IDatabase {
public:
    virtual ~IDatabase() = default;
    // game leg
    virtual UserRecord load_user(uint32_t account_id) = 0;
    virtual void update_uin(uint32_t id, uint64_t uin) = 0;
    virtual void save_user(const UserRecord& r) = 0;   // original full-row UPDATE
    // auth leg (AccountServer: accounts table)
    virtual AccountRecord load_account(const std::string& name) = 0;
    // combat stats from equipped items (positions: 1 helm, 2 necklace,
    // 3 armor, 4/5 weapons, 6 ring, 8 boots in the original item layout)
    virtual CombatStats load_combat_stats(uint32_t user_id) = 0;
    // monster system (original: SELECT * FROM cq_monstertype at startup,
    // per-map cq_generator rows loaded by the map group)
    virtual std::vector<MonsterTypeRecord> load_monster_types() = 0;
    virtual std::vector<GeneratorRecord> load_generators(uint32_t map_id) = 0;
    // xp system (cq_levexp + cq_user.exp persistence)
    virtual std::map<uint32_t, uint64_t> load_levexp() = 0;
    // v109: cq_levexp.up_lev_time per level (type 0 rows). The original's
    // 1086 walks both columns (FUN_140382f00 reads cell 1 = exp and
    // cell 2 = up_lev_time of the same level record).
    virtual std::map<uint32_t, uint32_t> load_levexp_time() = 0;
    // v110: cq_achievement (userid PK, point, achieve1..achieve13) + the
    // cq_achievementtype point table. cells[1] = the point column,
    // cells[2..14] = achieve1..achieve13 (the original's 1-based cells).
    struct AchievementRecord {
        uint32_t cells[15] = {0};
        bool found = false;
    };
    virtual AchievementRecord load_achievement(uint32_t user_id) = 0;
    virtual void save_achievement(uint32_t user_id,
                                  const AchievementRecord& rec) = 0;
    virtual uint32_t achievement_points(uint32_t position) = 0;
    virtual void save_exp_level(uint32_t user_id, uint64_t exp, uint32_t level) = 0;
    // v27: user script vars (stc counters + dataN/var(N)); keys are
    // "stc:a:b", "stcd:a:b", or plain var names. Sidecar table
    // cq_user_script_var (original persist target not yet extracted).
    virtual std::map<std::string, int64_t> load_user_vars(uint32_t player_id) = 0;
    virtual void save_user_vars(uint32_t player_id,
                                const std::map<std::string, int64_t>& vars) = 0;
    // ---- v120: rebirth (action 1040) ----
    // FUN_140163c90 requirement scan: need_prof == profession,
    // new_prof == v1, metepsychosis == v3, need_level <= level.
    virtual bool load_rebirth(uint32_t need_prof, uint32_t new_prof,
                              uint32_t meta, RebirthRow& out) = 0;
    // FUN_14008afb0 cap read from the mapgroup config (cq_config type
    // 139494 field 2; the ctor default is 0x352 = 850, MsgServer.c:147734).
    virtual uint32_t rebirth_point_cap() = 0;
    // one row write for the whole rebirth apply (FUN_1401715d0 persists
    // the lookface on record field 5, the attrib writes persist the rest).
    virtual void save_user_rebirth(uint32_t id, uint32_t profession,
                                   uint32_t level, uint64_t exp,
                                   uint32_t strength, uint32_t speed,
                                   uint32_t health, uint32_t soul,
                                   uint32_t add_point, uint32_t life,
                                   uint32_t mana, uint32_t meta,
                                   uint32_t lookface) = 0;
    // drops system (v19)
    virtual std::vector<EquipTypeRecord> load_equip_types() = 0; // equip families
    // ---- v24: weapon skill (proficiency) system ----
    // original startup: "SELECT * FROM cq_weapon_skill_up order by
    // weapontype, level" (CWeaponSkillUp) + "SELECT weapontype,max(level)
    // ... group by weapontype"
    // ---- v37: player magic (spell) records (cq_magic) ----
    struct MagicRecord {
        uint32_t type = 0; uint16_t level = 0; uint32_t exp = 0;
    };
    virtual std::vector<WeaponSkillUpRecord> load_weapon_skill_up() = 0;
    // ---- v40: cq_magictype (per-level spell defs: sort 1 = direct
    // damage, 2 = heal; use_mp/power/percent/delay_ms/need_exp) ----
    struct MagicTypeRecord {
        uint32_t type = 0, sort = 0, level = 0;
        uint32_t use_mp = 0, power = 0, percent = 100;
        uint32_t delay_ms = 0, need_exp = 0;
        uint32_t distance = 0, crime = 0;
    };
    virtual std::vector<MagicTypeRecord> load_magictypes() = 0;
    // ---- v121: cq_magictypeop (the 1095 rebirth skill sets) ----------
    // Loader FUN_1402f0ab0 runs "SELECT * FROM cq_magictypeop" into the
    // manager's tree at +0x188 (keyed by id); the 1095 grant
    // FUN_1402f16c0 walks EVERY row and matches
    //   rebirth_time == metempsychosis (only 1 or 2 branch)
    //   profession_ago == user+0xeda when meto==1, user+0xedb when meto==2
    //   profession_now == user+0xeee (profession)
    // then acts on skill_1..skill_60 by magictype_op (0 clear, 1 learn
    // flag 0, 2 learn flag 1, anything else skips the row).
    // Column order (SELECT *): 0 id, 1 rebirth_time, 2 profession_ago,
    // 3 profession_now, 4 magictype_op, 5..64 skill_1..skill_60.
    struct MagicTypeOpRecord {
        uint32_t rebirth_time = 0, prof_ago = 0, prof_now = 0, op = 0;
        uint32_t skills[60] = {0};
    };
    virtual std::vector<MagicTypeOpRecord> load_magictypeop() = 0;
    // per player: "SELECT type,level,exp FROM cq_weapon_skill
    // WHERE owner_id=%u"
    virtual std::vector<WeaponSkillRecord> load_weapon_skills(uint32_t player_id) = 0;
    // v127 (action 1043): flip cq_weapon_skill.unlearn to 1 for one type.
    virtual void mark_weapon_skill_unlearned(uint32_t player_id,
                                             uint32_t type) = 0;
    // save on disconnect (original: record pool UPDATE; new rows INSERT)
    virtual void save_weapon_skill(uint32_t player_id,
                                   const WeaponSkillRecord& r) = 0;
    // ---- v37: cq_magic (ownerid,type,level,exp; unlearn=1 removed) ----
    // CPlayerMagic list dump at login ("SELECT type,level,exp FROM
    // cq_magic WHERE ownerid=%u" - CUser::LoadMagic FUN_14048f... flow)
    virtual std::vector<MagicRecord> load_player_magics(uint32_t player_id) = 0;
    // save (UPDATE else INSERT) - LearnMagic inserts, uplevel/addexp update
    virtual void save_magic(uint32_t player_id, const MagicRecord& r) = 0;
    // del(2) path FUN_140482c80 removes the record entirely
    virtual void delete_magic(uint32_t player_id, uint32_t type) = 0;
    // ---- v33: cq_dynanpc (DynaNpc runtime records) ------------------
    struct DynaNpcRecord {
        uint32_t id = 0;
        uint32_t ownerid = 0, ownertype = 0;
        std::string name;
        uint32_t type = 0;        // action 2007 CGameData field 4 (nType)
        uint32_t itemid = 0;      // action 2007 CGameData field 5 (itemType)
        uint32_t lookface = 0;
        uint32_t mapid = 0;
        uint16_t cellx = 0, celly = 0;
        uint32_t task0=0,task1=0,task2=0,task3=0,task4=0,task5=0,task6=0,task7=0;
        int32_t data0=0,data1=0,data2=0,data3=0;
        std::string datastr;
        uint32_t life=0, maxlife=0, sort=0;
    };

    // ---- v23: cq_action / cq_npc (chain engine records) -------------
struct PlayerItemRecord { uint32_t id; uint32_t type; uint32_t amount;
                              uint16_t position; };
    // all carried items (inventory position 0 + equipment 1-8) of a player,
    // used for the login inventory dump (CMsgItemInfo 1008 family)
    virtual std::vector<PlayerItemRecord> load_player_items(uint32_t player_id) = 0;
    // v47: does the id exist in cq_map (original validates the map
    // through the map-group manager before a record-pos/relive move)
    virtual bool map_exists(uint32_t map_id) { (void)map_id; return true; }
    // ---- v23: cq_action chain engine + real NPCs (cq_npc) ----
    virtual std::vector<ActionRow> load_actions() = 0;
    virtual std::vector<NpcRecord> load_npcs() = 0;
    // v33 dyna npc records
    virtual std::vector<DynaNpcRecord> load_dynanpcs() = 0;
    virtual uint32_t insert_dynanpc(const DynaNpcRecord& r) = 0;
    virtual void update_dynanpc(const DynaNpcRecord& r) = 0;
    // v29: cq_task rows + cq_itemtype (id,name) for by-name item checks
    virtual std::vector<TaskRow> load_tasks() = 0;
    virtual std::vector<std::pair<uint32_t, std::string>> load_itemtype_names() = 0;
    virtual uint32_t insert_item(uint32_t player_id, uint32_t type, uint32_t amount) = 0;
    // v67: ITEMTYPEDATA attribute set for generated items (action 528/529).
    // Field indices follow the item attribute table decoded from the
    // binary (FUN_140104140 is a generic SetInt(idx<100); the column order
    // of cq_item matches it, and 17 = chk_sum is the value the original
    // recomputes whenever an attribute changes).
    struct ItemAttrs {
        uint32_t amount_limit = 0;   // attr 5
        uint32_t gem1 = 0, gem2 = 0; // attrs 8, 9
        uint32_t magic1 = 0, magic2 = 0, magic3 = 0;  // attrs 10, 11, 12
        int32_t data = 0;            // attr 13 (cq_item.data is int(4);
                                     // the original resolves it from
                                     // field 2 via FUN_140385cf0)
    };
    virtual uint32_t insert_item_attrs(uint32_t player_id, uint32_t type,
                                       uint32_t amount, const ItemAttrs& at) {
        (void)at;
        return insert_item(player_id, type, amount);
    }

    // delete one cq_item row by id (action 502 "take item"); true if a
    // row was actually removed
    virtual bool delete_item(uint32_t item_id) = 0;
    // v120: rebirth unequips every slot (FUN_140163e10 moves the item to the
    // inventory container, i.e. cq_item.position = 0)
    virtual bool update_item_position(uint32_t item_id, uint16_t position) = 0;
    // v35: action 509/510 item attribute ops
    virtual bool update_item(uint32_t item_id, uint32_t type,
                             uint32_t amount) = 0;
    // v131: flush the packed god_status (0x140372710's keyed-store flush).
    virtual void update_user_god_status(uint32_t player_id, uint32_t value) = 0;
    virtual void update_user_lookface(uint32_t player_id,
                                     uint32_t lookface) = 0;
    virtual void update_user_hair(uint32_t player_id, uint32_t hair) = 0;
    virtual void update_user_profession(uint32_t player_id,
                                        uint32_t profession) = 0;
    virtual uint32_t itemtype_amount(uint32_t itemtype) = 0;
    // v48: cq_itemtype.ident (GetCell 0x17) — 543 consume gate
    virtual bool itemtype_ident(uint32_t itemtype) = 0;
    // v32: raw SQL execute (action 127 — original runs the param
    // string straight through InstanceGet()->ExecuteSQL, case 0x7f)
    virtual bool execute_sql(const std::string& sql) = 0;
    // 1077: run a SELECT, return the first column of the first row
    // v72: guild fund / title / domain access (action 717)
    virtual int64_t syndicate_money(uint32_t) { return 0; }
    virtual void update_syndicate_money(uint32_t, int64_t) {}
    virtual void set_syndicate_member_title(uint32_t, uint8_t) {}
    virtual bool syndicate_has_domain(uint32_t) { return false; }
    virtual bool query_string(const std::string& sql, std::string& out) = 0;
    virtual bool add_money(uint32_t user_id, int64_t delta) = 0;
};

// Process-wide active database (set once at startup in main()).
inline IDatabase*& active_db() { static IDatabase* p = nullptr; return p; }

// In-memory dev/test implementation.
class MemoryDB : public IDatabase {
public:
    static MemoryDB& instance() { static MemoryDB db; return db; }
    UserRecord load_user(uint32_t account_id) override {
        for (auto& u : users_) if (u.account_id == account_id) return u;
        return {};
    }
    CombatStats load_combat_stats(uint32_t user_id) override {
        (void)user_id;  // dev impl: barehand base stats
        return CombatStats{};
    }
    std::vector<MonsterTypeRecord> load_monster_types() override {
        return monster_types_;
    }
    std::vector<ActionRow> load_actions() override { return {}; }
    std::vector<NpcRecord> load_npcs() override { return {}; }
    std::vector<DynaNpcRecord> load_dynanpcs() override { return {}; }
    uint32_t insert_dynanpc(const DynaNpcRecord&) override { return 0; }
    void update_dynanpc(const DynaNpcRecord&) override {}
    std::vector<TaskRow> load_tasks() override { return {}; }
    std::vector<std::pair<uint32_t, std::string>> load_itemtype_names() override { return {}; }
    std::vector<GeneratorRecord> load_generators(uint32_t map_id) override {
        std::vector<GeneratorRecord> out;
        for (auto& g : generators_) if (g.mapid == map_id) out.push_back(g);
        return out;
    }
    std::map<uint32_t, uint64_t> load_levexp() override {
        // dev subset mirroring the real cq_levexp head rows
        return {{1,120},{2,180},{3,250},{4,320},{5,400},{6,550},{7,700}};
    }
    std::map<uint32_t, uint32_t> load_levexp_time() override {
        return {{1,2},{2,4},{3,6},{4,8},{5,10},{6,12},{7,14}};
    }
    AchievementRecord load_achievement(uint32_t) override { return {}; }
    void save_achievement(uint32_t, const AchievementRecord&) override {}
    uint32_t achievement_points(uint32_t position) override {
        return position == 20101 ? 25 : 0;   // dev mirror of the seed row
    }
    void save_exp_level(uint32_t, uint64_t, uint32_t) override {}
    std::map<std::string, int64_t> load_user_vars(uint32_t pid) override {
        return script_vars_[pid];
    }
    void save_user_vars(uint32_t pid,
                       const std::map<std::string, int64_t>& vars) override {
        script_vars_[pid] = vars;
    }
    bool load_rebirth(uint32_t need_prof, uint32_t new_prof,
                      uint32_t meta, RebirthRow& out) override {
        for (const auto& r : rebirth_rows_) {
            if (r.need_prof == need_prof && r.new_prof == new_prof &&
                r.meta == meta) { out = r; return true; }
        }
        return false;
    }
    uint32_t rebirth_point_cap() override { return 850; }
    void save_user_rebirth(uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                           uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                           uint32_t, uint32_t, uint32_t) override {}
    std::vector<RebirthRow> rebirth_rows_;
    std::map<uint32_t, std::map<std::string, int64_t>> script_vars_;
    std::vector<EquipTypeRecord> load_equip_types() override { return {}; }
    std::vector<WeaponSkillUpRecord> load_weapon_skill_up() override { return {}; }
    std::vector<MagicTypeRecord> load_magictypes() override { return {}; }
    std::vector<MagicTypeOpRecord> load_magictypeop() override { return {}; }
    std::vector<WeaponSkillRecord> load_weapon_skills(uint32_t) override { return {}; }
    void mark_weapon_skill_unlearned(uint32_t, uint32_t) override {}
    void save_weapon_skill(uint32_t, const WeaponSkillRecord&) override {}
    std::vector<MagicRecord> load_player_magics(uint32_t) override { return {}; }
    void save_magic(uint32_t, const MagicRecord&) override {}
    void delete_magic(uint32_t, uint32_t) override {}
    std::vector<PlayerItemRecord> load_player_items(uint32_t) override { return {}; }
    uint32_t insert_item(uint32_t, uint32_t, uint32_t) override { return 0; }
    uint32_t insert_item_attrs(uint32_t, uint32_t, uint32_t,
                               const ItemAttrs&) override { return 0; }
    bool delete_item(uint32_t) override { return false; }
    bool update_item(uint32_t, uint32_t, uint32_t) override { return false; }
    bool update_item_position(uint32_t, uint16_t) override { return false; }
    void update_user_lookface(uint32_t, uint32_t) override {}
    void update_user_god_status(uint32_t, uint32_t) override {}
    void update_user_hair(uint32_t, uint32_t) override {}
    void update_user_profession(uint32_t, uint32_t) override {}
    uint32_t itemtype_amount(uint32_t) override { return 0; }
    bool itemtype_ident(uint32_t) override { return false; }
    bool execute_sql(const std::string&) override { return true; }
    bool query_string(const std::string&, std::string&) override {
        return false;
    }
    bool add_money(uint32_t, int64_t) override { return true; }
    std::vector<MonsterTypeRecord> monster_types_ = {
        {1, "Pheasant", 104, 33, 2, 3, 0, 36, 1, 1},
        {2, "Turtledove", 304, 81, 5, 6, 0, 37, 7, 1},
    };
    // dev generators (rest_secs misused as map id above; dev only)
    std::vector<GeneratorRecord> generators_ = {
        {1, 1002, 1, 3, 395, 295, 10, 10, 3, 0, 0},
        {2, 1002, 2, 2, 405, 305, 10, 10, 3, 0, 0},
    };
    void update_uin(uint32_t id, uint64_t uin) override {
        // Mirrors the original: UPDATE cq_user SET uin=%u WHERE id=%u LIMIT 1
        std::printf("[db] UPDATE cq_user SET uin=%llu WHERE id=%u LIMIT 1\n",
                    (unsigned long long)uin, id);
        for (auto& u : users_) if (u.id == id) u.uin = uin;
    }
    void save_user(const UserRecord& r) override {
        for (auto& u : users_) if (u.id == r.id) {
            u.recordmap_id = r.recordmap_id; u.recordx = r.recordx;
            u.recordy = r.recordy; u.level = r.level;
        }
    }
    AccountRecord load_account(const std::string& name) override {
        for (auto& a : accounts_) if (a.name == name) return a;
        // dev fallback: allow the seeded cq_user names too
        for (auto& u : users_) if (u.name == name) {
            AccountRecord a; a.id = u.account_id; a.name = u.name;
            a.password = u.password; return a;
        }
        return {};
    }
    UserRecord load_user_by_name(const std::string& nm) {
        for (auto& u : users_) if (u.name == nm) return u;
        return {};
    }
    std::vector<AccountRecord> accounts_ = {
        {100001, "TestKnight", "test123", 0, 0},
        {100002, "GmDragon",   "test123", 0, 1},
    };
    std::vector<UserRecord> users_ = {
        // order: id, account_id, password, name, map, level, uin, gm
        {1, 100001, "test123", "TestKnight", 1002, 400, 300, 130, 0, 0},
        {2, 100002, "test123", "GmDragon",   1002, 410, 310, 140, 0, 1},
    };
};

} // namespace conquer
