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
    // v42: dialog menu-task list (original CUser obj+0x13a vector, cap
    // 20): 102/103/104/120 dialogs put the array INDEX in the 2032
    // u2 reply-id slot; the client echoes it back and we map it to the
    // real cq_action id (handles ids > 65535, FUN_14039d300).
    std::vector<uint32_t> menu_ids;
    uint32_t profession = 0;             // cq_user.profession (v29 task checks)
    uint32_t lookface = 100003;           // cq_user.lookface (v36: 1005)
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
    uint32_t id() const { return id_; }
    const std::string& name() const { return name_; }
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
    // Respawn + monster AI pass; called from the world tick thread.
    void tick(time_t now);
    // screen-range broadcast centered on a monster (AI pass)
    void w_ai_broadcast(GameMap& m, const Monster& mon, const Packet& pkt);
    std::unordered_map<uint32_t, Player> players; // by player id
private:
    std::unordered_map<uint32_t, GameMap> maps_;
};

} // namespace conquer
