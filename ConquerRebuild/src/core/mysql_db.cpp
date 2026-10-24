// MySQL persistence layer implementation (libmariadb C API).
#include "core/mysql_db.hpp"
#include <cstdio>

namespace conquer {

MySQLDatabase::MySQLDatabase(const std::string& host, unsigned port,
                             const std::string& user, const std::string& pass,
                             const std::string& dbname) {
    conn_ = mysql_init(nullptr);
    if (!conn_) return;
    bool reconnect = true;
    mysql_options(conn_, MYSQL_OPT_RECONNECT, &reconnect);
    // original character set handling is latin1
    mysql_options(conn_, MYSQL_SET_CHARSET_NAME, "utf8mb4");
    if (!mysql_real_connect(conn_, host.c_str(), user.c_str(), pass.c_str(),
                            dbname.c_str(), port, nullptr, 0)) {
        std::printf("[db] MySQL connect failed: %s\n", mysql_error(conn_));
        mysql_close(conn_);
        conn_ = nullptr;
        return;
    }
    std::printf("[db] MySQL connected: %s@%s/%s\n",
                user.c_str(), host.c_str(), dbname.c_str());
}

MySQLDatabase::~MySQLDatabase() {
    if (conn_) mysql_close(conn_);
}

bool MySQLDatabase::exec(const char* sql) {
    if (!conn_) return false;
    if (mysql_query(conn_, sql) != 0) {
        std::printf("[db] SQL error: %s [%s]\n", mysql_error(conn_), sql);
        return false;
    }
    return true;
}

AccountRecord MySQLDatabase::load_account(const std::string& name) {
    AccountRecord out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    // SELECT id FROM accounts WHERE name = ? LIMIT 1
    // NOTE: real cq.sql defines `banned` as bit(1); binding bit columns
    // truncates, so cast to a plain number first.
    MYSQL_STMT* stmt = mysql_stmt_init(conn_);
    const char* sql =
        "SELECT id,name,password,banned+0,type FROM accounts WHERE name=? LIMIT 1";
    mysql_stmt_prepare(stmt, sql, (unsigned long)std::string(sql).size());
    MYSQL_BIND pb{}; char nb[64]; unsigned long nl = (unsigned long)name.size();
    pb.buffer_type = MYSQL_TYPE_STRING; pb.buffer = (void*)name.c_str();
    pb.length = &nl; pb.buffer_length = (unsigned)nl;
    mysql_stmt_bind_param(stmt, &pb);
    if (mysql_stmt_execute(stmt) != 0) { mysql_stmt_close(stmt); return out; }

    unsigned long lens[5] = {};
    MYSQL_BIND rb[5]{};
    long long idv = 0, bannedv = 0, typev = 0;
    my_bool nullv[5] = {};
    char nameb[64] = {}, passb[128] = {};
    rb[0].buffer_type = MYSQL_TYPE_LONGLONG; rb[0].buffer = &idv;
    rb[0].is_null = &nullv[0]; rb[0].is_unsigned = (my_bool)0;
    rb[1].buffer_type = MYSQL_TYPE_STRING; rb[1].buffer = nameb;
    rb[1].buffer_length = sizeof(nameb); rb[1].length = &lens[1];
    rb[1].is_null = &nullv[1];
    rb[2].buffer_type = MYSQL_TYPE_STRING; rb[2].buffer = passb;
    rb[2].buffer_length = sizeof(passb); rb[2].length = &lens[2];
    rb[2].is_null = &nullv[2];
    rb[3].buffer_type = MYSQL_TYPE_LONGLONG; rb[3].buffer = &bannedv;
    rb[3].is_null = &nullv[3];
    rb[4].buffer_type = MYSQL_TYPE_LONGLONG; rb[4].buffer = &typev;
    rb[4].is_null = &nullv[4];
    mysql_stmt_bind_result(stmt, rb);
    int fr = mysql_stmt_fetch(stmt);
    // 0 = row, 101 = MYSQL_DATA_TRUNCATED (row still delivered)
    if (fr == 0 || fr == 101) {
        out.id      = (uint32_t)idv;
        out.banned  = (int)bannedv;
        out.type    = (int)typev;
        if (!nullv[1] && lens[1]) out.name.assign(nameb, lens[1]);
        if (!nullv[2] && lens[2]) out.password.assign(passb, lens[2]);
    }
    mysql_stmt_close(stmt);
    return out;
}

UserRecord MySQLDatabase::load_user(uint32_t account_id) {
    UserRecord out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    // original: SELECT id,name,account_id,uin,recordmap_id,level FROM
    // cq_user WHERE account_id='%u' (first character of the account)
    char sql[512];
    // real cq.sql schema has no gm column on cq_user; GM authorization is
    // account-level (AccountServer: World.GMOnly && AccountType==0 reject),
    // so join accounts.type as the gm flag.
    std::snprintf(sql, sizeof(sql),
        "SELECT u.id,u.account_id,u.name,u.recordmap_id,u.recordx,u.recordy,"
        "u.level,(a.type=1),u.life,u.mana,u.exp,u.money,u.profession,u.pk,u.lookface "
        "FROM cq_user u LEFT JOIN accounts a "
        "ON a.id=u.account_id WHERE u.account_id=%u LIMIT 1", account_id);
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row = mysql_fetch_row(res);
    if (row && row[0]) {
        out.id          = (uint32_t)std::strtoul(row[0], nullptr, 10);
        out.account_id  = (uint32_t)std::strtoul(row[1], nullptr, 10);
        out.name        = row[2] ? row[2] : "";
        out.recordmap_id= (uint32_t)std::strtoul(row[3], nullptr, 10);
        out.recordx     = (uint32_t)std::strtoul(row[4], nullptr, 10);
        out.recordy     = (uint32_t)std::strtoul(row[5], nullptr, 10);
        out.level       = (uint32_t)std::strtoul(row[6], nullptr, 10);
        out.gm_flags    = (uint32_t)std::strtoul(row[7], nullptr, 10);
        if (row[8]) out.life = (uint32_t)std::strtoul(row[8], nullptr, 10);
        if (row[9]) out.mana = (uint32_t)std::strtoul(row[9], nullptr, 10);
        if (out.life == 0) out.life = 1000;
        if (row[10]) out.exp = std::strtoull(row[10], nullptr, 10);
        if (row[11]) out.money = std::strtoull(row[11], nullptr, 10);
        if (row[12]) out.profession = strtoul(row[12], nullptr, 10);
        if (row[13]) out.pk = (int32_t)strtol(row[13], nullptr, 10);
        if (row[14]) out.lookface = strtoul(row[14], nullptr, 10);
    }
    mysql_free_result(res);
    return out;
}

CombatStats MySQLDatabase::load_combat_stats(uint32_t user_id) {
    CombatStats out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    // equipped items joined with their itemtype stats. positions in the
    // original layout: 1 helm, 2 necklace, 3 armor, 4 weaponR, 5 weaponL,
    // 6 ring, 8 boots. cq_item.amount holds durability; worn gear rows
    // have position>0.
    char sql[512];
    std::snprintf(sql, sizeof(sql),
        "SELECT i.position,t.attack_min,t.attack_max,t.defense,t.dodge,t.id "
        "FROM cq_item i JOIN cq_itemtype t ON t.id=i.type "
        "WHERE i.player_id=%u AND i.position IN (1,2,3,4,5,6,8)", user_id);
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        uint32_t pos = (uint32_t)std::strtoul(row[0], nullptr, 10);
        uint32_t amin = row[1] ? (uint32_t)std::strtoul(row[1], nullptr, 10) : 0;
        uint32_t amax = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        uint32_t def  = row[3] ? (uint32_t)std::strtoul(row[3], nullptr, 10) : 0;
        uint32_t dod  = row[4] ? (uint32_t)std::strtoul(row[4], nullptr, 10) : 0;
        uint32_t itid = row[5] ? (uint32_t)std::strtoul(row[5], nullptr, 10) : 0;
        if (pos == 4 || pos == 5) {
            // dual wield: the original rolls per weapon; v1 uses the best
            if (amax > out.atk_max) {
                out.atk_max = amax; out.atk_min = amin;
                // weapon family for the proficiency system
                // (cq_itemtype.id / 1000, e.g. 613129 -> 613)
                out.weapon_type = itid / 1000;
            }
        } else if (pos == 6) {
            // rings carry attack in cq_itemtype (e.g. 150269 1300-1949)
            out.atk_min += amin; out.atk_max += amax;
        } else {
            out.defense += def;
            out.dodge   += dod;
        }
    }
    mysql_free_result(res);
    out.extra = out.atk_max > out.atk_min ? out.atk_max - out.atk_min : 0;
    return out;
}


std::vector<MonsterTypeRecord> MySQLDatabase::load_monster_types() {
    // Original startup: the map group loads the whole cq_monstertype
    // table into CMonsterType records (823 kinds in the real DB).
    std::vector<MonsterTypeRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    const char* sql =
        "SELECT id,name,lookface,life,attack_min,attack_max,defence,dodge,level,type,"
        "attack_speed,view_range,attack_range,move_speed,extra_exp,drop_money,drop_itemtype,drop_hp,drop_mp FROM cq_monstertype";
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        MonsterTypeRecord t;
        t.id         = row[0] ? (uint32_t)std::strtoul(row[0], nullptr, 10) : 0;
        t.name       = row[1] ? row[1] : "";
        t.lookface   = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        t.life       = row[3] ? (uint32_t)std::strtoul(row[3], nullptr, 10) : 1;
        t.attack_min = row[4] ? (uint32_t)std::strtoul(row[4], nullptr, 10) : 0;
        t.attack_max = row[5] ? (uint32_t)std::strtoul(row[5], nullptr, 10) : 0;
        t.defence    = row[6] ? (uint32_t)std::strtoul(row[6], nullptr, 10) : 0;
        t.dodge      = row[7] ? (uint32_t)std::strtoul(row[7], nullptr, 10) : 0;
        t.level      = row[8] ? (uint32_t)std::strtoul(row[8], nullptr, 10) : 1;
        t.kind        = row[9] ? (uint32_t)std::strtoul(row[9], nullptr, 10) : 1;
        t.attack_speed= row[10] ? (uint32_t)std::strtoul(row[10], nullptr, 10) : 1000;
        t.view_range  = row[11] ? (uint32_t)std::strtoul(row[11], nullptr, 10) : 6;
        t.attack_range= row[12] ? (uint32_t)std::strtoul(row[12], nullptr, 10) : 1;
        t.move_speed  = row[13] ? (uint32_t)std::strtoul(row[13], nullptr, 10) : 500;
        t.extra_exp   = row[14] ? (uint32_t)std::strtoul(row[14], nullptr, 10) : 100;
        t.drop_money  = row[15] ? (uint32_t)std::strtoul(row[15], nullptr, 10) : 0;
        t.drop_itemtype = row[16] ? (uint32_t)std::strtoul(row[16], nullptr, 10) : 0;
        t.drop_hp     = row[17] ? (uint32_t)std::strtoul(row[17], nullptr, 10) : 0;
        t.drop_mp     = row[18] ? (uint32_t)std::strtoul(row[18], nullptr, 10) : 0;
        if (t.attack_speed < 100) t.attack_speed = 100;
        if (t.view_range < 1) t.view_range = 1;
        if (t.attack_range < 1) t.attack_range = 1;
        if (t.move_speed < 100) t.move_speed = 100;
        if (t.id) out.push_back(std::move(t));
    }
    mysql_free_result(res);
    return out;
}

std::vector<GeneratorRecord> MySQLDatabase::load_generators(uint32_t map_id) {
    // Original: CMapGroup loads the cq_generator rows for the map and
    // spawns up to maxnpc monsters per point inside the bound box
    // (bound_x, bound_y, size bound_cx x bound_cy).
    std::vector<GeneratorRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[512];
    std::snprintf(sql, sizeof(sql),
        "SELECT id,mapid,npctype,maxnpc,bound_x,bound_y,bound_cx,bound_cy,"
        "rest_secs,timer_begin,timer_end FROM cq_generator WHERE mapid=%u",
        map_id);
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        GeneratorRecord g;
        auto u = [](const char* c){ return c ? (uint32_t)std::strtoul(c, nullptr, 10) : 0u; };
        g.id          = u(row[0]);
        g.mapid       = u(row[1]);
        g.npctype     = u(row[2]);
        g.maxnpc      = u(row[3]);
        g.bound_x     = u(row[4]);
        g.bound_y     = u(row[5]);
        g.bound_cx    = u(row[6]);
        g.bound_cy    = u(row[7]);
        g.rest_secs   = u(row[8]);
        g.timer_begin = u(row[9]);
        g.timer_end   = u(row[10]);
        if (g.id) out.push_back(g);
    }
    mysql_free_result(res);
    return out;
}

void MySQLDatabase::update_uin(uint32_t id, uint64_t uin) {
    std::lock_guard<std::mutex> lk(mtx_);
    // original: UPDATE cq_user SET uin=%u WHERE id=%u LIMIT 1
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_user SET uin=%llu WHERE id=%u LIMIT 1",
        (unsigned long long)uin, id);
    exec(sql);
}

void MySQLDatabase::save_user(const UserRecord& r) {
    std::lock_guard<std::mutex> lk(mtx_);
    // subset of the original full-row UPDATE on save/exit
    char sql[512];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_user SET recordmap_id=%u, recordx=%u, recordy=%u, level=%u "
        "WHERE id=%u LIMIT 1",
        r.recordmap_id, r.recordx, r.recordy, r.level, r.id);
    exec(sql);
}


// ---- xp system (v18) --------------------------------------------------
std::map<uint32_t, uint64_t> MySQLDatabase::load_levexp() {
    // original: the map group loads cq_levexp at startup and looks
    // records up by level during AwardExp (FUN_14014de60).
    std::map<uint32_t, uint64_t> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    if (!exec("SELECT level,exp FROM cq_levexp")) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0] || !row[1]) continue;
        uint32_t lvl = (uint32_t)std::strtoul(row[0], nullptr, 10);
        if (!out.count(lvl))   // first row per level wins
            out[lvl] = std::strtoull(row[1], nullptr, 10);
    }
    mysql_free_result(res);
    return out;
}

// ---- user script vars (v27) -----------------------------------------------
std::map<std::string, int64_t> MySQLDatabase::load_user_vars(uint32_t player_id) {
    std::map<std::string, int64_t> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    static bool table_ready = false;
    if (!table_ready) {
        exec("CREATE TABLE IF NOT EXISTS cq_user_script_var ("
             "player_id INT UNSIGNED NOT NULL, var VARCHAR(64) NOT NULL, "
             "val BIGINT NOT NULL DEFAULT 0, PRIMARY KEY (player_id, var)"
             ") ENGINE=InnoDB DEFAULT CHARSET=utf8mb4");
        table_ready = true;
    }
    char sql[160];
    std::snprintf(sql, sizeof(sql),
        "SELECT var, val FROM cq_user_script_var WHERE player_id=%u",
        player_id);
    if (mysql_query(conn_, sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res)))
        if (row[0] && row[1]) out[row[0]] = std::strtoll(row[1], nullptr, 10);
    mysql_free_result(res);
    return out;
}

void MySQLDatabase::save_user_vars(uint32_t player_id,
                                   const std::map<std::string, int64_t>& vars) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    for (const auto& [name, val] : vars) {
        char sql[256];
        std::snprintf(sql, sizeof(sql),
            "REPLACE INTO cq_user_script_var (player_id, var, val) "
            "VALUES (%u, '%s', %lld)",
            player_id, name.c_str(), (long long)val);
        exec(sql);
    }
}

void MySQLDatabase::save_exp_level(uint32_t user_id, uint64_t exp, uint32_t level) {
    // original AwardExp path persists through the user list flush; we
    // write cq_user directly on each award (low traffic, correct state).
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[160];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_user SET exp=%llu,level=%u WHERE id=%u LIMIT 1",
        (unsigned long long)exp, level, user_id);
    if (!exec(sql))
        std::printf("[db] save_exp_level %u failed\n", user_id);
}


// ======================= drops system (v19) ================================
std::vector<EquipTypeRecord> MySQLDatabase::load_equip_types() {
    std::vector<EquipTypeRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    const char* sql =
        "SELECT id,req_level,amount FROM cq_itemtype WHERE "
        "(id BETWEEN 111000 AND 118999) OR (id BETWEEN 120000 AND 121999) OR "
        "(id BETWEEN 130000 AND 134999) OR (id BETWEEN 150000 AND 152999) OR "
        "(id BETWEEN 410000 AND 699999) OR (id BETWEEN 900000 AND 901999) OR "
        "(id BETWEEN 160000 AND 163999)";
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        EquipTypeRecord e;
        e.id        = row[0] ? (uint32_t)std::strtoul(row[0], nullptr, 10) : 0;
        e.req_level = row[1] ? (uint32_t)std::strtoul(row[1], nullptr, 10) : 0;
        e.amount    = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 1;
        uint32_t fam = e.id / 1000;
        if      (fam >= 111 && fam <= 118) e.category = 0; // armet
        else if (fam >= 120 && fam <= 121) e.category = 1; // necklace
        else if (fam >= 130 && fam <= 134) e.category = 2; // armor
        else if (fam >= 150 && fam <= 152) e.category = 3; // ring
        else if (fam >= 410 && fam <= 699) e.category = 4; // weapon
        else if (fam >= 900 && fam <= 901) e.category = 5; // shield
        else                               e.category = 6; // boots
        out.push_back(e);
    }
    mysql_free_result(res);
    return out;
}

uint32_t MySQLDatabase::insert_item(uint32_t player_id, uint32_t type, uint32_t amount) {
    if (!conn_) return 0;
    std::lock_guard<std::mutex> lk(mtx_);
    // picked-up item goes to the inventory: cq_item.position = 0
    // (verified against the real dump: every inventory row has position=0;
    // equipment uses positions 1-8). id is AUTO_INCREMENT.
    char sql[512];
    std::snprintf(sql, sizeof(sql),
        "INSERT INTO cq_item (type,owner_id,player_id,amount,position,del_time) "
        "VALUES (%u,%u,%u,%u,0,0)", type, player_id, player_id, amount);
    if (!exec(sql)) { std::printf("[db] insert_item failed: %s\n", mysql_error(conn_)); return 0; }
    // cq_item.id is AUTO_INCREMENT: return the generated row id so the
    // pickup flow can reference the item instance (CMsgItemInfo id).
    return (uint32_t)mysql_insert_id(conn_);
}

bool MySQLDatabase::delete_item(uint32_t item_id) {
    if (!conn_) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "DELETE FROM cq_item WHERE id=%u LIMIT 1", item_id);
    if (!exec(sql)) { std::printf("[db] delete_item failed: %s\n", mysql_error(conn_)); return false; }
    return mysql_affected_rows(conn_) > 0;
}

// ---- v36: hairdresser 1005 lookface persist ------------------------
void MySQLDatabase::update_user_lookface(uint32_t player_id,
                                         uint32_t lookface) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[128];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_user SET lookface=%u WHERE id=%u LIMIT 1",
        lookface, player_id);
    exec(sql);
}

// ---- v35: action 509/510 item attribute ops -------------------------
bool MySQLDatabase::update_item(uint32_t item_id, uint32_t type,
                                uint32_t amount) {
    if (!conn_) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_item SET type=%u, amount=%u WHERE id=%u LIMIT 1",
        type, amount, item_id);
    return exec(sql);
}

bool MySQLDatabase::itemtype_ident(uint32_t itemtype) {  // v48
    if (!conn_) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[128];
    std::snprintf(sql, sizeof(sql),
        "SELECT ident+0 FROM cq_itemtype WHERE id=%u LIMIT 1", itemtype);
    if (mysql_query(conn_, sql)) return false;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return false;
    MYSQL_ROW row = mysql_fetch_row(res);
    bool ident = (row && row[0]) ? strtoul(row[0],nullptr,10) != 0 : false;
    mysql_free_result(res);
    return ident;
}

uint32_t MySQLDatabase::itemtype_amount(uint32_t itemtype) {
    if (!conn_) return 0;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[128];
    std::snprintf(sql, sizeof(sql),
        "SELECT amount FROM cq_itemtype WHERE id=%u LIMIT 1", itemtype);
    if (mysql_query(conn_, sql)) return 0;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return 0;
    MYSQL_ROW row = mysql_fetch_row(res);
    uint32_t amt = (row && row[0]) ? (uint32_t)strtoul(row[0],nullptr,10) : 0;
    mysql_free_result(res);
    return amt;
}

// ---- v33: cq_dynanpc ------------------------------------------------
std::vector<IDatabase::DynaNpcRecord> MySQLDatabase::load_dynanpcs() {
    std::vector<DynaNpcRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    const char* q =
        "SELECT id,ownerid,ownertype,name,lookface,mapid,cellx,celly,"
        "task0,task1,task2,task3,task4,task5,task6,task7,"
        "data0,data1,data2,data3,datastr,life,maxlife,sort FROM cq_dynanpc";
    if (mysql_query(conn_, q)) { std::printf("[db] load_dynanpcs: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        DynaNpcRecord r;
        auto u32=[&](int i){ return row[i] ? (uint32_t)strtoul(row[i],nullptr,10) : 0u; };
        auto i32=[&](int i){ return row[i] ? (int32_t)strtol(row[i],nullptr,10) : 0; };
        r.id=u32(0); r.ownerid=u32(1); r.ownertype=u32(2);
        r.name=row[3]?row[3]:""; r.lookface=u32(4); r.mapid=u32(5);
        r.cellx=(uint16_t)u32(6); r.celly=(uint16_t)u32(7);
        r.task0=u32(8);r.task1=u32(9);r.task2=u32(10);r.task3=u32(11);
        r.task4=u32(12);r.task5=u32(13);r.task6=u32(14);r.task7=u32(15);
        r.data0=i32(16);r.data1=i32(17);r.data2=i32(18);r.data3=i32(19);
        r.datastr=row[20]?row[20]:"";
        r.life=u32(21); r.maxlife=u32(22); r.sort=u32(23);
        out.push_back(std::move(r));
    }
    mysql_free_result(res);
    return out;
}

uint32_t MySQLDatabase::insert_dynanpc(const DynaNpcRecord& r) {
    if (!conn_) return 0;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[1024];
    char name_esc[128], datastr_esc[512];
    mysql_real_escape_string(conn_, name_esc, r.name.c_str(), r.name.size());
    mysql_real_escape_string(conn_, datastr_esc, r.datastr.c_str(), r.datastr.size());
    std::snprintf(sql, sizeof(sql),
        "INSERT INTO cq_dynanpc (ownerid,ownertype,name,lookface,mapid,cellx,"
        "celly,task0,task1,task2,task3,task4,task5,task6,task7,data0,data1,"
        "data2,data3,datastr,life,maxlife,sort) VALUES "
        "(%u,%u,'%s',%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,'%s',%u,%u,%u)",
        r.ownerid, r.ownertype, name_esc, r.lookface, r.mapid, r.cellx, r.celly,
        r.task0,r.task1,r.task2,r.task3,r.task4,r.task5,r.task6,r.task7,
        r.data0,r.data1,r.data2,r.data3, datastr_esc, r.life, r.maxlife, r.sort);
    if (!exec(sql)) { std::printf("[db] insert_dynanpc: %s\n", mysql_error(conn_)); return 0; }
    return (uint32_t)mysql_insert_id(conn_);
}

void MySQLDatabase::update_dynanpc(const DynaNpcRecord& r) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[1024];
    char datastr_esc[512];
    mysql_real_escape_string(conn_, datastr_esc, r.datastr.c_str(), r.datastr.size());
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_dynanpc SET ownerid=%u,ownertype=%u,mapid=%u,cellx=%u,"
        "celly=%u,data0=%d,data1=%d,data2=%d,data3=%d,datastr='%s',"
        "life=%u,maxlife=%u WHERE id=%u LIMIT 1",
        r.ownerid, r.ownertype, r.mapid, r.cellx, r.celly,
        r.data0, r.data1, r.data2, r.data3, datastr_esc,
        r.life, r.maxlife, r.id);
    if (!exec(sql)) std::printf("[db] update_dynanpc: %s\n", mysql_error(conn_));
}

// v32: action 127 raw SQL (original case 0x7f: ExecuteSQL on the
// param string; failure -> "bad SQL" DBERROR log + false)
bool MySQLDatabase::query_string(const std::string& sql,
                                 std::string& out) {
    // 1077 (case 0x43): SELECT -> first column of the first row
    if (!conn_) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    if (!exec(sql.c_str())) {
        std::printf("[action1077] bad SQL: \"%s\" (%s)\n",
                    sql.c_str(), mysql_error(conn_));
        return false;
    }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res || mysql_num_fields(res) < 1) {
        if (res) mysql_free_result(res);
        return false;
    }
    MYSQL_ROW row = mysql_fetch_row(res);
    bool ok = false;
    if (row && row[0]) {
        out.assign(row[0]);
        ok = true;
    }
    mysql_free_result(res);
    return ok;
}

bool MySQLDatabase::execute_sql(const std::string& sql) {
    if (!conn_) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    if (!exec(sql.c_str())) {
        std::printf("[action127] bad SQL: \"%s\" (%s)\n",
                    sql.c_str(), mysql_error(conn_));
        return false;
    }
    // drain any result set so the next query on this conn is clean
    MYSQL_RES* res = mysql_store_result(conn_);
    if (res) mysql_free_result(res);
    return true;
}

bool MySQLDatabase::map_exists(uint32_t map_id) {
    if (!conn_) return true;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[96];
    std::snprintf(sql, sizeof(sql),
        "SELECT id FROM cq_map WHERE id=%u LIMIT 1", map_id);
    if (!exec(sql)) return false;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return false;
    bool ok = mysql_fetch_row(res) != nullptr;
    mysql_free_result(res);
    return ok;
}

std::vector<IDatabase::PlayerItemRecord> MySQLDatabase::load_player_items(uint32_t player_id) {
    std::vector<PlayerItemRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "SELECT id,type,amount,position FROM cq_item "
        "WHERE player_id=%u AND del_time=0 AND position<=8 ORDER BY id",
        player_id);
    if (mysql_query(conn_, sql)) { std::printf("[db] load_player_items: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0] || !row[1] || !row[2] || !row[3]) continue;
        PlayerItemRecord r;
        r.id       = (uint32_t)std::strtoul(row[0], nullptr, 10);
        r.type     = (uint32_t)std::strtoul(row[1], nullptr, 10);
        r.amount   = (uint32_t)std::strtoul(row[2], nullptr, 10);
        r.position = (uint16_t)std::strtoul(row[3], nullptr, 10);
        out.push_back(r);
    }
    mysql_free_result(res);
    return out;
}

bool MySQLDatabase::add_money(uint32_t user_id, int64_t delta) {
    if (!conn_ || delta == 0) return false;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_user SET money = money + %lld WHERE id = %u",
        (long long)delta, user_id);
    if (!exec(sql)) { std::printf("[db] add_money failed: %s\n", mysql_error(conn_)); return false; }
    return true;
}


// ---- v23: cq_action + cq_npc loaders -----------------------------------
std::vector<ActionRow> MySQLDatabase::load_actions() {
    std::vector<ActionRow> out;
    std::string q =
        "SELECT id, id_next, id_nextfail, type, data, CAST(param AS CHAR) "
        "FROM cq_action";
    if (mysql_query(conn_, q.c_str())) { std::printf("[db] load_actions: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        ActionRow a;
        a.id        = strtoul(row[0], nullptr, 10);
        a.id_next   = row[1] ? strtoul(row[1], nullptr, 10) : 0;
        a.id_nextfail = row[2] ? strtoul(row[2], nullptr, 10) : 0;
        a.type      = row[3] ? strtoul(row[3], nullptr, 10) : 0;
        a.data      = row[4] ? (int32_t)strtol(row[4], nullptr, 10) : 0;
        a.param     = row[5] ? std::string(row[5]) : "";
        out.push_back(std::move(a));
    }
    mysql_free_result(res);
    return out;
}

std::vector<NpcRecord> MySQLDatabase::load_npcs() {
    std::vector<NpcRecord> out;
    std::string q =
        "SELECT id, name, mapid, cellx, celly, task0, task1, task2, task3,"
        " task4, task5, task6, task7 FROM cq_npc";
    if (mysql_query(conn_, q.c_str())) { std::printf("[db] load_npcs: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        NpcRecord n;
        n.id      = strtoul(row[0], nullptr, 10);
        n.name    = row[1] ? std::string(row[1]) : "";
        n.map_id  = row[2] ? strtoul(row[2], nullptr, 10) : 0;
        n.x       = row[3] ? strtoul(row[3], nullptr, 10) : 0;
        n.y       = row[4] ? strtoul(row[4], nullptr, 10) : 0;
        n.task0   = row[5] ? strtoul(row[5], nullptr, 10) : 0;
        n.task1   = row[6] ? strtoul(row[6], nullptr, 10) : 0;
        n.task2   = row[7] ? strtoul(row[7], nullptr, 10) : 0;
        n.task3   = row[8] ? strtoul(row[8], nullptr, 10) : 0;
        n.task4   = row[9] ? strtoul(row[9], nullptr, 10) : 0;
        n.task5   = row[10] ? strtoul(row[10], nullptr, 10) : 0;
        n.task6   = row[11] ? strtoul(row[11], nullptr, 10) : 0;
        n.task7   = row[12] ? strtoul(row[12], nullptr, 10) : 0;
        out.push_back(std::move(n));
    }
    mysql_free_result(res);
    return out;
}

std::vector<TaskRow> MySQLDatabase::load_tasks() {
    std::vector<TaskRow> out;
    std::string q =
        "SELECT id, id_next, id_nextfail, itemname1, itemname2, money,"
        " profession, min_pk, max_pk, client_active FROM cq_task";
    if (mysql_query(conn_, q.c_str())) { std::printf("[db] load_tasks: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        TaskRow t;
        t.id          = strtoul(row[0], nullptr, 10);
        t.id_next     = row[1] ? strtoul(row[1], nullptr, 10) : 0;
        t.id_nextfail = row[2] ? strtoul(row[2], nullptr, 10) : 0;
        t.itemname1   = row[3] ? std::string(row[3]) : "";
        t.itemname2   = row[4] ? std::string(row[4]) : "";
        t.money       = row[5] ? strtoul(row[5], nullptr, 10) : 0;
        t.profession  = row[6] ? (int32_t)strtol(row[6], nullptr, 10) : 0;
        t.min_pk      = row[7] ? (int32_t)strtol(row[7], nullptr, 10) : -100000;
        t.max_pk      = row[8] ? (int32_t)strtol(row[8], nullptr, 10) : 100000;
        t.client_active = row[9] ? (int32_t)strtol(row[9], nullptr, 10) : 0;
        out.push_back(std::move(t));
    }
    mysql_free_result(res);
    return out;
}

std::vector<std::pair<uint32_t, std::string>> MySQLDatabase::load_itemtype_names() {
    std::vector<std::pair<uint32_t, std::string>> out;
    std::string q = "SELECT id, name FROM cq_itemtype";
    if (mysql_query(conn_, q.c_str())) { std::printf("[db] load_itemtype_names: %s\n", mysql_error(conn_)); return out; }
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        out.emplace_back(strtoul(row[0], nullptr, 10),
                         row[1] ? std::string(row[1]) : "");
    }
    mysql_free_result(res);
    return out;
}

// ---- v24: weapon skill (proficiency) system ----------------------------
// Sources: CUserWeaponSkill record pool (cq_weapon_skill) and the
// CWeaponSkillUp startup load (FUN_1404c8440 region). Save mirrors the
// original record UPDATE; a missing row INSERTs (FUN_14039de70 creation).
std::vector<WeaponSkillUpRecord> MySQLDatabase::load_weapon_skill_up() {
    std::vector<WeaponSkillUpRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    const char* sql =
        "SELECT weapontype,level,req_exp FROM cq_weapon_skill_up "
        "ORDER BY weapontype,level";
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0] || !row[1]) continue;
        WeaponSkillUpRecord r;
        r.type    = (uint32_t)std::strtoul(row[0], nullptr, 10);
        r.level   = (uint32_t)std::strtoul(row[1], nullptr, 10);
        r.req_exp = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        out.push_back(r);
    }
    mysql_free_result(res);
    return out;
}


// ---- v40: cq_magictype (per-level spell definitions) ----------------
// Original: CMagicType record pool ("SELECT * FROM cq_magictype" at
// mapgroup startup); sort 1 = direct damage, 2 = heal.
std::vector<IDatabase::MagicTypeRecord> MySQLDatabase::load_magictypes() {
    std::vector<IDatabase::MagicTypeRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    const char* sql =
        "SELECT type,sort,level,use_mp,power,percent,delay_ms,need_exp,"
        "`distance`,crime FROM cq_magictype";
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        IDatabase::MagicTypeRecord r;
        r.type    = (uint32_t)std::strtoul(row[0], nullptr, 10);
        r.sort    = row[1] ? (uint32_t)std::strtoul(row[1], nullptr, 10) : 0;
        r.level   = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        r.use_mp  = row[3] ? (uint32_t)std::strtoul(row[3], nullptr, 10) : 0;
        r.power   = row[4] ? (uint32_t)std::strtoul(row[4], nullptr, 10) : 0;
        r.percent = row[5] ? (uint32_t)std::strtoul(row[5], nullptr, 10) : 100;
        r.delay_ms= row[6] ? (uint32_t)std::strtoul(row[6], nullptr, 10) : 0;
        r.need_exp= row[7] ? (uint32_t)std::strtoul(row[7], nullptr, 10) : 0;
        r.distance= row[8] ? (uint32_t)std::strtoul(row[8], nullptr, 10) : 0;
        r.crime   = row[9] ? (uint32_t)std::strtoul(row[9], nullptr, 10) : 0;
        out.push_back(r);
    }
    mysql_free_result(res);
    return out;
}

std::vector<WeaponSkillRecord> MySQLDatabase::load_weapon_skills(uint32_t player_id) {
    std::vector<WeaponSkillRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    std::snprintf(sql, sizeof(sql),
        "SELECT type,level,exp FROM cq_weapon_skill "
        "WHERE owner_id=%u AND unlearn=0", player_id);
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        WeaponSkillRecord r;
        r.type  = (uint32_t)std::strtoul(row[0], nullptr, 10);
        r.level = row[1] ? (uint8_t)std::strtoul(row[1], nullptr, 10) : 0;
        r.exp   = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        out.push_back(r);
    }
    mysql_free_result(res);
    return out;
}

void MySQLDatabase::save_weapon_skill(uint32_t player_id,
                                      const WeaponSkillRecord& r) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[256];
    // original: record pool UPDATE of the existing cq_weapon_skill row
    std::snprintf(sql, sizeof(sql),
        "UPDATE cq_weapon_skill SET level=%u,exp=%u "
        "WHERE owner_id=%u AND type=%u",
        (unsigned)r.level, r.exp, player_id, r.type);
    if (exec(sql) && mysql_affected_rows(conn_) > 0) return;
    // no row yet: INSERT (FUN_14039de70 creates the record on first save;
    // old_level = level at creation time)
    std::snprintf(sql, sizeof(sql),
        "INSERT INTO cq_weapon_skill (type,level,exp,old_level,owner_id,unlearn) "
        "VALUES (%u,%u,%u,%u,%u,0)",
        r.type, (unsigned)r.level, r.exp, (unsigned)r.level, player_id);
    exec(sql);
}

// ---- v37: cq_magic --------------------------------------------------
std::vector<IDatabase::MagicRecord> MySQLDatabase::load_player_magics(uint32_t player_id) {
    std::vector<MagicRecord> out;
    if (!conn_) return out;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[160];
    std::snprintf(sql, sizeof(sql),
        "SELECT type,level,exp FROM cq_magic WHERE ownerid=%u AND unlearn=0",
        player_id);
    if (!exec(sql)) return out;
    MYSQL_RES* res = mysql_store_result(conn_);
    if (!res) return out;
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res))) {
        if (!row[0]) continue;
        MagicRecord r;
        r.type  = (uint32_t)std::strtoul(row[0], nullptr, 10);
        r.level = row[1] ? (uint16_t)std::strtoul(row[1], nullptr, 10) : 0;
        r.exp   = row[2] ? (uint32_t)std::strtoul(row[2], nullptr, 10) : 0;
        out.push_back(r);
    }
    mysql_free_result(res);
    return out;
}

void MySQLDatabase::save_magic(uint32_t player_id, const MagicRecord& r) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[192];
    // existence probe (UPDATE with unchanged values reports affected=0)
    std::snprintf(sql, sizeof(sql),
        "SELECT 1 FROM cq_magic WHERE ownerid=%u AND type=%u LIMIT 1",
        player_id, r.type);
    if (exec(sql)) {
        MYSQL_RES* res = mysql_store_result(conn_);
        bool exists = res && mysql_fetch_row(res) != nullptr;
        if (res) mysql_free_result(res);
        if (exists) {
            std::snprintf(sql, sizeof(sql),
                "UPDATE cq_magic SET level=%u,exp=%u WHERE ownerid=%u AND type=%u",
                (unsigned)r.level, r.exp, player_id, r.type);
            exec(sql);
            return;
        }
    }
    std::snprintf(sql, sizeof(sql),
        "INSERT INTO cq_magic (ownerid,type,level,exp,old_level,unlearn) "
        "VALUES (%u,%u,%u,%u,%u,0)",
        player_id, r.type, (unsigned)r.level, r.exp, (unsigned)r.level);
    exec(sql);
}

void MySQLDatabase::delete_magic(uint32_t player_id, uint32_t type) {
    if (!conn_) return;
    std::lock_guard<std::mutex> lk(mtx_);
    char sql[160];
    std::snprintf(sql, sizeof(sql),
        "DELETE FROM cq_magic WHERE ownerid=%u AND type=%u LIMIT 1",
        player_id, type);
    exec(sql);
}
} // namespace conquer
