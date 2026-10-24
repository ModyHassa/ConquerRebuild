#pragma once
// ============================================================
//  Monster system - port of the CMonster spawn/attack path from
//  the v6159 MsgServer decompile.
//
//  SPAWN CHAIN (verified, MsgServer.c):
//    CMonster::EnterMapGroup  FUN_14038b420
//      -> FUN_1402c90f0 (map add role)
//      -> FUN_140387840  CMonster::EnterMap: builds CMsgPlayer (10014)
//         with FUN_14039ed70 ctor + FUN_14039eef0 Create (the SAME
//         builder used for player spawns; the monster id range makes
//         it take the monster branch: lookface -> buf+0x63, hair 0,
//         packer = [name, "", "", ""]), broadcast via mapgroup
//         vtbl+0x348 SendMsg.
//      -> then CMsgAction (10010) action 134 (0x86) with monster id,
//         dir, x, y (FUN_140362620 builder), unless
//         FUN_140388010(monster,2) says the monster is invisible-type.
//    Monster role ids: 0xAAE61 (699489) + n, checked all over the
//    original with `id - 0xaae61U < 99999`.
//    Client side: role id < 1000000 AND not a known player id ->
//    monster rendering path (Conquer.c FUN_008093fe branch), monster
//    lookface from wire+0x67.
//
//  DEATH/REMOVAL:
//    FUN_1403878e0 (one-shot flag + kill-record notify) broadcasts
//    CMsgAction action 135 (0x87) carrying the monster id.
//
//  DATA: cq_monstertype (823 kinds) + cq_generator per-map spawn
//  points (map 1002 has 127 rows, 1202 total maxnpc).
// ============================================================
#include "core/database.hpp"
#include "protocol/ids.hpp"
#include "protocol/spawn_10014.hpp"
#include "systems/action.hpp"
#include "systems/combat.hpp"
#include <cstdint>
#include <cstdio>
#include <ctime>
#include <map>
#include <string>
#include <vector>

namespace conquer {

// Original fixed monster id range (MsgServer: id - 0xaae61U < 99999).
constexpr uint32_t MONSTER_ID_BASE   = 0xAAE61; // 699489
constexpr uint32_t MONSTER_ID_COUNT  = 99999;

// CMsgAction monster codes from the original spawn chain.
constexpr uint16_t ACTION_MONSTER_APPEAR = 134; // 0x86 (EnterMapGroup)
constexpr uint16_t ACTION_MONSTER_DIE    = 135; // 0x87 (FUN_1403878e0)

// CMsgMonsterJump (FUN_14044f680 builder + CMonster::JumpPos
// FUN_140388a40): the server moves a monster with this packet.
// Original stores size 0xC which, like CMsgAction's 0x26, counts
// everything except the 2-byte len prefix -> wire len 14:
//   [len:2=14][type:2=0x4E22][id:4][x:2][y:2][dir:2]
constexpr uint16_t MSG_MONSTER_JUMP_20002 = 0x4E22;

// aggro leash in tiles (chase give-up distance; view_range only gates
// fresh target acquisition in the original AI)
constexpr int MONSTER_LEASH = 40;

inline bool is_monster_id(uint32_t id) {
    return id - MONSTER_ID_BASE < MONSTER_ID_COUNT;
}

struct Monster {
    uint32_t id = 0;          // role id (MONSTER_ID_BASE + seq)
    uint32_t type_id = 0;     // cq_monstertype.id
    uint32_t gen_id = 0;      // cq_generator.id (v49: 2008 gen_id mode)
    std::string name;         // cq_monstertype.name
    uint32_t lookface = 0;    // cq_monstertype.lookface
    uint32_t level = 1;
    uint16_t x = 0, y = 0;
    uint8_t dir = 0;
    uint32_t hp = 1, max_hp = 1;
    CombatActorStats combat;  // monstertype stats for the damage pipeline
    // AI state (CMonster::OnTimer loop, FUN_1403929b0/140394680):
    uint32_t target_id = 0;        // aggro target (0 = passive)
    time_t next_attack_at = 0;     // attack_speed cooldown
    time_t next_move_at = 0;       // move_speed cooldown (chase steps)
    bool alive = false;
    time_t respawn_at = 0;   // 0 = waiting for first spawn / ready
    uint32_t rest_secs = 3;   // cq_generator.rest_secs
    uint32_t extra_exp = 100;  // cq_monstertype.extra_exp (kill exp percent)
    // AI tuning from cq_monstertype
    uint32_t attack_secs = 1;      // attack_speed / 1000
    uint32_t view_range = 6;       // view_range
    uint32_t attack_range = 1;     // attack_range
    uint32_t move_secs = 1;        // move_speed / 1000 (>=1s in our tick)

    // one chase step toward the target (original CMonster::JumpPos
    // moves inside CanMove-valid cells; flat maps for now -> clamp)
    void step_toward(uint16_t tx, uint16_t ty) {
        if ((int)x != (int)tx) x += (x < tx) ? 1 : -1;
        else if ((int)y != (int)ty) y += (y < ty) ? 1 : -1;
    }

    uint8_t face_dir(uint16_t tx, uint16_t ty) const {
        // 8-direction facing (3=south, 7=north on the classic pad)
        int dx = (int)tx - (int)x, dy = (int)ty - (int)y;
        if (dx > 0 && dy > 0) return 3;
        if (dx > 0 && dy < 0) return 1;
        if (dx < 0 && dy > 0) return 5;
        if (dx < 0 && dy < 0) return 7;
        if (dx > 0) return 2;
        if (dx < 0) return 6;
        if (dy > 0) return 4;
        return 0;
    }
};

// CMsgMonsterJump wire builder (see MSG_MONSTER_JUMP_20002 note).
inline Packet build_monster_jump_20002(uint32_t id, uint16_t x, uint16_t y,
                                       uint16_t dir) {
    Packet p((uint16_t)MSG_MONSTER_JUMP_20002);
    p.write<uint32_t>(id);
    p.write<uint16_t>(x);
    p.write<uint16_t>(y);
    p.write<uint16_t>(dir);
    p.finalize(); // len = 14
    return p;
}

class MonsterManager {
public:
    // Load all cq_monstertype rows (original startup behavior).
    const MonsterTypeRecord* type(uint32_t id) const {
        auto it = types_.find(id);
        return it == types_.end() ? nullptr : &it->second;
    }
    void load_types(IDatabase& db) {
        for (auto& t : db.load_monster_types())
            types_[t.id] = std::move(t);
        std::printf("[monsters] %zu types loaded\n", types_.size());
    }

    // Spawn the cq_generator rows of one map (original CMapGroup init).
    void spawn_from_generators(IDatabase& db, uint32_t map_id) {
        for (auto& g : db.load_generators(map_id)) {
            auto it = types_.find(g.npctype);
            if (it == types_.end()) {
                std::printf("[monsters] generator %u: unknown type %u\n",
                            g.id, g.npctype);
                continue;
            }
            // v1: place the point's monsters spread across the bound
            // box (original uses its RNG inside the bound box at
            // CMonster::Create; deterministic spread here keeps tests
            // reproducible while covering the whole box like the real
            // spawn pattern does).
            uint32_t span_x = g.bound_cx ? g.bound_cx : 1;
            uint32_t span_y = g.bound_cy ? g.bound_cy : 1;
            uint32_t count = g.maxnpc ? g.maxnpc : 1;
            for (uint32_t n = 0; n < g.maxnpc && next_seq_ < MONSTER_ID_COUNT; n++) {
                Monster m;
                m.id = MONSTER_ID_BASE + next_seq_++;
                m.type_id = g.npctype;
                m.gen_id = g.id;
                m.name = it->second.name;
                m.lookface = it->second.lookface;
                m.level = it->second.level;
                m.x = (uint16_t)(g.bound_x + (n * span_x) / count);
                m.y = (uint16_t)(g.bound_y + (n * span_y) / count);
                m.max_hp = m.hp = it->second.life;
                m.combat.atk_min = it->second.attack_min;
                m.combat.atk_max = it->second.attack_max;
                m.combat.defense = it->second.defence;
                m.combat.dodge = it->second.dodge;
                m.dir = 2;
                m.alive = true;
                m.rest_secs = g.rest_secs ? g.rest_secs : 3;
                m.attack_secs  = (it->second.attack_speed + 999) / 1000;
                m.view_range   = it->second.view_range;
                m.attack_range = it->second.attack_range;
                m.move_secs    = (it->second.move_speed + 999) / 1000;
                m.extra_exp    = it->second.extra_exp;
                if (m.attack_secs < 1) m.attack_secs = 1;
                if (m.move_secs < 1) m.move_secs = 1;
                monsters_.emplace(m.id, std::move(m));
            }
        }
        std::printf("[monsters] map %u: %zu alive\n", map_id, monsters_.size());
    }

    Monster* find(uint32_t id) {
        auto it = monsters_.find(id);
        return it == monsters_.end() ? nullptr : &it->second;
    }

    // v34 / action 304 (case 0x130 ~219345): runtime monster spawn at
    // exact coords ("monstertype mapid x y"). Same field fills as the
    // generator path but rest_secs from type-free default (original
    // FUN_140117c30/FUN_14037c800 build a CMonster at the given cell).
    // v36: action 307 region monster count (original iterates the map
    // monster list checking map id, alive flag, x/y bounds, type)
    size_t count_region(uint32_t type_id, int x0, int y0,
                         int w, int h) const {
        size_t n = 0;
        for (const auto& kv : monsters_) {
            const Monster& m = kv.second;
            if (m.hp == 0) continue;             // alive gate
            if (type_id != 0 && m.type_id != type_id) continue;
            if ((int)m.x < x0 || (int)m.x >= x0 + w) continue;
            if ((int)m.y < y0 || (int)m.y >= y0 + h) continue;
            ++n;
        }
        return n;
    }

    // v49: 2008 (0x7d8) named-entity count on this map — mode
    // "name" counts alive monsters by name, "gen_id" by generator id
    size_t count_named(const std::string& name, uint32_t gen_id) const {
        size_t n = 0;
        for (const auto& kv : monsters_) {
            const Monster& m = kv.second;
            if (m.hp == 0) continue;
            if (gen_id != 0) { if (m.gen_id == gen_id) ++n; }
            else if (m.name == name) ++n;
        }
        return n;
    }

    Monster* spawn_one(uint32_t type_id, uint16_t x, uint16_t y) {
        auto it = types_.find(type_id);
        if (it == types_.end() || next_seq_ >= MONSTER_ID_COUNT)
            return nullptr;
        Monster m;
        m.id = MONSTER_ID_BASE + next_seq_++;
        m.type_id = type_id;
        m.name = it->second.name;
        m.lookface = it->second.lookface;
        m.level = it->second.level;
        m.x = x; m.y = y;
        m.max_hp = m.hp = it->second.life;
        m.combat.atk_min = it->second.attack_min;
        m.combat.atk_max = it->second.attack_max;
        m.combat.defense = it->second.defence;
        m.combat.dodge = it->second.dodge;
        m.dir = 2;
        m.alive = true;
        m.rest_secs = 3;
        m.attack_secs  = (it->second.attack_speed + 999) / 1000;
        m.view_range   = it->second.view_range;
        m.attack_range = it->second.attack_range;
        m.move_secs    = (it->second.move_speed + 999) / 1000;
        m.extra_exp    = it->second.extra_exp;
        if (m.attack_secs < 1) m.attack_secs = 1;
        if (m.move_secs < 1) m.move_secs = 1;
        uint32_t id = m.id;
        monsters_.emplace(id, std::move(m));
        return &monsters_[id];
    }

    std::map<uint32_t, Monster>& all() { return monsters_; }

    // Respawn pass (called from the world tick). Returns the monsters
    // that came back to life so the caller can broadcast their spawn
    // packets to the players in range.
    std::vector<Monster*> tick(time_t now) {
        std::vector<Monster*> respawned;
        for (auto& [id, m] : monsters_) {
            if (!m.alive && m.respawn_at != 0 && now >= m.respawn_at) {
                m.alive = true;
                m.hp = m.max_hp;
                m.respawn_at = 0;
                std::printf("[monsters] %u (%s) respawned at (%u,%u)\n",
                            id, m.name.c_str(), m.x, m.y);
                respawned.push_back(&m);
            }
        }
        return respawned;
    }

    // Wire-accurate spawn pair the original sends when a monster enters
    // the screen: CMsgPlayer 10014 (monster branch) + CMsgAction 134.
    void build_spawn_packets(const Monster& m, std::vector<Packet>& out) {
        SpawnInfo si;
        si.is_monster = true;
        si.id = m.id;
        si.name = m.name;
        si.lookface = m.lookface;
        si.x = m.x; si.y = m.y; si.dir = m.dir;
        out.push_back(build_monster_spawn_10014(si));
        out.push_back(build_action_10010(m.id, 0, ACTION_MONSTER_APPEAR,
                                         m.dir, m.x, m.y, 0, 0));
    }

    // Wire removal on death: CMsgAction 135 with the monster id
    // (FUN_1403878e0 shape: id, zeros).
    Packet build_die_packet(const Monster& m) {
        return build_action_10010(m.id, 0, ACTION_MONSTER_DIE, 0, 0, 0, 0, 0);
    }

private:
    std::map<uint32_t, MonsterTypeRecord> types_;
    std::map<uint32_t, Monster> monsters_;  // node-stable refs
    uint32_t next_seq_ = 0;
};

} // namespace conquer
