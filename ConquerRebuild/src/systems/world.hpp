#pragma once
// World / map / screen-broadcast system.
// Architecture ported from MsgServer concepts found in the decompile:
// CUser::EnterMap (map enter steps), CMonster::EnterMapGroup, screen-range
// broadcast (the original sends role packets only to players in the same
// screen range on the map).
#include "core/database.hpp"
#include "systems/combat.hpp"
#include "systems/monsters.hpp"
#include "systems/drops.hpp"
#include "systems/uservars.hpp"
#include "net/net.hpp"
#include <unordered_set>
#include <mutex>
#include <cstdint>
#include <list>
#include <string>
#include <unordered_map>
#include <vector>

namespace conquer {

constexpr int SCREEN_RANGE = 18; // tiles: classic conquer screen distance

struct Position { uint16_t x = 0, y = 0; };

struct Player {
    ClientSession* session = nullptr;
    uint32_t id = 0;
    std::string name;
    uint32_t level = 1;
    uint32_t map_id = 0;
    Position pos;
    bool in_world = false;
    uint32_t hp = 1000, max_hp = 1000;   // combat (attrib 0 = life, 1 = max life)
    uint32_t mana = 0, max_mana = 0;    // v40: cq_user.mana (attrib 2)
    uint64_t exp = 0;                    // cq_user.exp (attrib 5 = 64-bit)
    uint64_t money = 0;                  // cq_user.money (attrib 4 = 64-bit)
    bool alive = true;                   // death state (10010 action 94 flow)
    uint32_t last_npc_id = 0;            // npc of the open dialog (2032 ctx)
    uint32_t last_dyna_id = 0;            // v33: last dyna npc created via 301
    uint32_t next_task_id = 0;            // v103: 401 stores its 1st field at the
                                          // original's user+0xa34
    // v104: 1071 pushes {id, now, num, str} into the original's user+0x330
    // container (FUN_1401a9b00 -> FUN_1401a4740 vector push).
    struct ActionRecord { uint32_t id = 0; uint32_t timestamp = 0;
                          int32_t num = 0; std::string str; };
    std::vector<ActionRecord> action_records;
    // v110: cq_achievement row. cells[1] = point, cells[2..14] = achieve1..13
    // (the original's 1-based cell numbering in CAchInfo).
    uint32_t ach[15] = {0};
    bool ach_dirty = false;
    uint32_t script_guild_id = 0;         // v79: 721 stores the guild id here
                                          // (the original's actor +0x14d)
    uint32_t guild_id = 0;                // v81: cq_synattr.syn_id (the
                                          // original's actor +0x170 getter)
    uint32_t guild_rank = 0;              // v81: cq_synattr.rank
    uint32_t team_id = 0;                 // v98: TeamManager team id (0 = none)
    // v42: dialog menu-task list (original CUser obj+0x13a vector, cap
    // 20): 102/103/104/120 dialogs put the array INDEX in the 2032
    // u2 reply-id slot; the client echoes it back and we map it to the
    // real cq_action id (handles ids > 65535, FUN_14039d300).
    std::vector<uint32_t> menu_ids;
    uint32_t profession = 0;             // cq_user.profession (v29 task checks)
    uint32_t lookface = 100003;           // cq_user.lookface (v36: 1005)
    uint32_t hair = 0;                    // cq_user.hair (v85: GetUserInt key 1004)
    // v94: remaining pinned GetUserInt keys backed by cq_user columns
    uint32_t virtue = 0;                  // 1010 Virtue
    uint32_t meto = 0;                    // 1011 Metempsychosis (rebirth)
    // v120: the CUserData stat block (user+0xed8..+0xee2). Proven column map:
    // docs/worker_cuserdata.md (FUN_1403744b0 fills it from the cq_user row).
    uint32_t strength = 0;               // cq_user.strength        (user+0xed8)
    uint32_t speed    = 0;               // cq_user.Speed           (user+0xedc)
    uint32_t health   = 0;               // cq_user.health          (user+0xede)
    uint32_t soul     = 0;               // cq_user.soul            (user+0xee0)
    uint32_t add_point = 0;              // cq_user.additional_point(user+0xee2)
    // v121 (1095): the two profession history bytes the magic grant reads.
    uint32_t old_prof = 0;                // cq_user.old_prof   (user+0xedb)
    uint32_t first_prof = 0;              // cq_user.first_prof (user+0xeda)
    // v121 (1048): attribute-timer state the original keeps at
    // user+0xb74/+0xb78/+0xb7c (key, seconds, time(NULL)/1000).
    uint32_t attr_timer_id = 0, attr_timer_secs = 0, attr_timer_start = 0;
    // v124 (3701): the +0x130..+0x140 "stamp" block FUN_140164e30 clears.
    // Cleared per call; the values the sibling actions write are UNKNOWN.
    // v125b: the 32-bit user flag word at CUser+0xf24 (action 1028 "chk/add/clr"
    // uses `bt idx,[user+0xf24]` with idx <= 0x1F; larger indices hit a CHECKF).
    uint32_t user_flags = 0;
    uint8_t stamp_a130 = 0;
    int32_t stamp_i134 = 0, stamp_i138 = 0, stamp_i13c = 0;
    std::string stamp_s140;
    uint32_t home_id = 0;                 // 1014 HomeID
    uint32_t account_id = 0;              // 1015 AccountId
    uint32_t nobility = 0;                // 1045 Peerage
    uint32_t business = 0;                // 1046 Business state
    int32_t  pk = 0;                     // cq_user.pk (v29 task checks)
    uint64_t last_talk_ms = 0;          // chat 2001 flood guard (original
                                        // FUN_1401765e0: 500ms repeat gate)
    uint32_t record_map = 0;             // cq_user record position (reborn point)
    Position record_pos;
    CombatActorStats combat;             // equipped-item stats (real DB)
    // ---- v24: weapon skill (proficiency) state -----------------------
    // CUserWeaponSkill per weapon type (cq_weapon_skill rows); loaded at
    // login, dirty rows saved on disconnect
    struct WeaponSkillState {
        uint32_t type = 0;
        uint8_t  level = 0;
        uint32_t exp = 0;
        bool    dirty = false;
    };
    std::unordered_map<uint32_t, WeaponSkillState> weapon_skills;
    // v37: cq_magic rows (spells learned; type -> state)
    struct MagicSkillState {
        uint16_t level = 0; uint32_t exp = 0; bool dirty = false;
    };
    std::unordered_map<uint32_t, MagicSkillState> magics;
    // monster ids this client has been told about (the original client
    // errors if it receives a CMsgPlayer spawn for a role id it already
    // has - Conquer.c FUN_008093fe - so we only send newly-visible ones)
    mutable std::mutex known_mtx;   // guards known_monsters/known_ground
                                // (tick thread inserts, session threads
                                // erase -> must be locked; a race here
                                // corrupted the set and crashed the
                                // server under gdb: _Hashtable _M_erase)
    std::unordered_set<uint32_t> known_monsters;
    // ground item ids already visible to this client (1101 spawns are
    // also rejected client-side on duplicates)
    std::unordered_set<uint32_t> known_ground;
    // v27: script vars (stc counters, dataN, var(N)) — see uservars.hpp
    UserVars vars;
};

class GameMap {
public:
    int weather = 0;   // v36: action 311 map weather state
    explicit GameMap(uint32_t id, std::string name, uint16_t w, uint16_t h)
        : id_(id), name_(std::move(name)), width_(w), height_(h) {}
    uint16_t width() const { return width_; }     // v87: ChgMap bounds check
    uint16_t height() const { return height_; }
    uint32_t id() const { return id_; }
    const std::string& name() const { return name_; }
    // v52 / action 2011 (0x7db): rename a live map at runtime
    void set_name(std::string n) { name_ = std::move(n); }
    std::list<Player*>& players() { return players_; }
    MonsterManager& monsters() { return monsters_; }
    // v34 / action 306 (case 0x132 ~219390): named int attributes on
    // the map record (synid, res_lev, portal0_x, mapdoc, status, type...
    // 613 rows, mostly %user_home_id home maps). In-memory for now:
    // the original persists dyna map records, our cq_map maps are
    // static and attrib writes stay runtime-only.
    std::map<std::string, int64_t> attribs;
    GroundItemManager& ground() { return ground_; }
private:
    uint32_t id_;
    std::string name_;
    uint16_t width_, height_;
    std::list<Player*> players_;
    MonsterManager monsters_;
    GroundItemManager ground_;
};

class World {
public:
    static World& instance() { static World w; return w; }
    auto& maps() { return maps_; }

    // v97: locate an ONLINE player by id. The original reaches users through
    // the map-group user list (userlist lookup by id), so every social system
    // (team, trade, kick notices, whisper) needs this. Returns null when the
    // player is not online on any of our maps.
    Player* find_player(uint32_t id) {
        for (auto& kv : maps_)
            for (Player* pl : kv.second.players())
                if (pl && pl->id == id) return pl;
        return nullptr;
    }
    GameMap& get_or_create_map(uint32_t map_id) {
        auto it = maps_.find(map_id);
        if (it == maps_.end()) {
            // TODO: load real map data (from client ani/map files) keyed by
            //       recordmap_id like the original CUser::EnterMap does.
            auto [ins, _] = maps_.emplace(map_id,
                GameMap(map_id, "map" + std::to_string(map_id), 1024, 768));
            // Original CMapGroup init: cq_monstertype table at startup +
            // this map's cq_generator rows. Spawn them when the map first
            // materializes.
            if (IDatabase* db = active_db()) {
                ins->second.monsters().load_types(*db);
                ins->second.monsters().spawn_from_generators(*db, map_id);
            }
            it = ins;
        }
        return it->second;
    }
    // Original flow: CUser::EnterMap places the user on recordmap_id at the
    // record position, adds to the map user list, then the spawn packets go
    // to everyone in screen range.
    void spawn_player(Player& p, uint32_t map_id, Position pos);
    // v80: the world "event flag" word the original keeps at +0x2ac. It is
    // only ever written by FUN_14008aae0 from an inbound 0x15f92 message
    // (GetAttr(2)), so this build starts at 0 and nothing sets it yet.
    uint32_t script_flags = 0;

    void remove_player(Player& p);
    // Remove any world player owned by a dead session (called on socket
    // disconnect; the original drops the CUser from the map user list in
    // CUser::LeaveMap / socket-close handling).
    void remove_by_session(ClientSession* s);
    void broadcast_to_screen(GameMap& m, const Position& center, const Packet& pkt,
                             ClientSession* except = nullptr);
    // Send the newly-visible monsters of a map to one player (10014
    // monster branch + CMsgAction 134), tracking known ids.
    void send_monsters_in_screen(Player& p, GameMap& m);

    // v87: move a player to another map/cell (the Lua ChgMap path). Mirrors
    // the sequence the 1070 relive port already proved: leave the old map's
    // list, join the new one, broadcast the spawn self-inclusive and resend
    // the monsters in screen. It does NOT touch alive or the record point -
    // RecordPoint is a separate operation in the original.
    void teleport(Player& p, uint32_t map_id, uint32_t x, uint32_t y);
    // Respawn + monster AI pass; called from the world tick thread.
    void tick(time_t now);
    // screen-range broadcast centered on a monster (AI pass)
    void w_ai_broadcast(GameMap& m, const Monster& mon, const Packet& pkt);
    std::unordered_map<uint32_t, Player> players; // by player id
private:
    std::unordered_map<uint32_t, GameMap> maps_;
};

} // namespace conquer
