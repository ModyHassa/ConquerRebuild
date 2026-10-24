#include "systems/dynanpc.hpp"
#include "systems/world.hpp"
#include "core/database.hpp"
#include "protocol/ids.hpp"
#include "protocol/spawn_10014.hpp"
#include <cmath>
#include <cstdio>
#include <ctime>

namespace conquer {

void World::spawn_player(Player& p, uint32_t map_id, Position pos) {
    GameMap& m = get_or_create_map(map_id);
    p.map_id = map_id;
    p.pos = pos;
    p.in_world = true;
    m.players().push_back(&p);

    std::printf("[world] %s enters map %u at (%u,%u)\n",
                p.name.c_str(), map_id, pos.x, pos.y);

    // Spawn packets:
    // 1) tell everyone already in range about the new player (action/spawn
    //    family), 2) tell the new player about everyone in range.
    // Wire-accurate spawn (CMsgPlayer 10014) - layout extracted from the
    // v6159 binaries (see protocol/spawn_10014.hpp for the field evidence).
    // The old dev packet (1004) is kept only behind this build flag.
#ifdef CONQUER_DEV_SPAWN_1004
    Packet spawn(MSG_1004);
    spawn.write<uint32_t>(p.id);
    spawn.write_str(p.name, 16);
    spawn.write<uint32_t>(p.level);
    spawn.write<uint16_t>(p.pos.x);
    spawn.write<uint16_t>(p.pos.y);
    spawn.finalize();
#else
    SpawnInfo si;
    si.id = p.id;
    si.name = p.name;
    si.x = p.pos.x;
    si.y = p.pos.y;
    si.lookface = p.lookface;
    Packet spawn = build_spawn_10014(si);
#endif
    broadcast_to_screen(m, p.pos, spawn, p.session);

    // v33: tell the new player about dyna npcs on the map
    auto& dyna = DynaNpcSystem::instance();
    dyna.for_map(map_id, [&](const IDatabase::DynaNpcRecord& r) {
        float ddx = std::abs((int)r.cellx - (int)p.pos.x);
        float ddy = std::abs((int)r.celly - (int)p.pos.y);
        if (ddx > SCREEN_RANGE || ddy > SCREEN_RANGE) return;
        Packet dsp = dyna.spawn_packet(r);
        if (p.session) p.session->send(dsp);
    });

    for (Player* other : m.players()) {
        if (other == &p) continue;
        float dx = std::abs((int)other->pos.x - (int)p.pos.x);
        float dy = std::abs((int)other->pos.y - (int)p.pos.y);
        if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
        Packet other_pkt =
#ifdef CONQUER_DEV_SPAWN_1004
            [&]{ Packet q(MSG_1004);
                 q.write<uint32_t>(other->id); q.write_str(other->name, 16);
                 q.write<uint32_t>(other->level);
                 q.write<uint16_t>(other->pos.x); q.write<uint16_t>(other->pos.y);
                 q.finalize(); return q; }();
#else
            [&]{ SpawnInfo s;
                 s.id = other->id; s.name = other->name;
                 s.x = other->pos.x; s.y = other->pos.y;
                 return build_spawn_10014(s); }();
#endif
        if (p.session) p.session->send(other_pkt);
    }

    // tell the new player about every alive monster in screen range
    // (original CMonster::EnterMapGroup fires when the roles enter each
    // other's screen; we push the current set on map entry)
    send_monsters_in_screen(p, m);

    // login inventory/equipment dump: full CMsgItemInfo 1008 per item
    // (action 1 = create; position 0 -> client auto-slots inventory,
    // 1-8 = equipment) then one batched CMsgItemStatus 2077 with every
    // entry (mode 3 equipped / 8 inventory), mirroring the original
    // query-reply flow (full info first, then the status entries)
    if (active_db()) {
        auto items = active_db()->load_player_items(p.id);
        std::vector<ItemStatusEntry> entries;
        for (const auto& r : items) {
            if (p.session)
                p.session->send(build_item_info_1008(
                    r.id, r.type, r.amount, r.position, 1));
            ItemStatusEntry e;
            e.id = r.id;
            e.mode = (r.position != 0) ? 3 : 8;
            e.position = r.position;
            e.amount = r.amount;
            e.max_dur = r.amount;
            entries.push_back(e);
        }
        if (!entries.empty() && p.session)
            p.session->send(build_item_status_2077_batch(entries));
    }
}

void World::send_monsters_in_screen(Player& p, GameMap& m) {
    if (!p.session) return;
    for (auto& [id, mon] : m.monsters().all()) {
        if (!mon.alive) continue;
        float dx = std::abs((int)mon.x - (int)p.pos.x);
        float dy = std::abs((int)mon.y - (int)p.pos.y);
        if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
        bool fresh = false;
        { std::lock_guard<std::mutex> lk(p.known_mtx);
          if (!p.known_monsters.count(id)) {
              p.known_monsters.insert(id);
              fresh = true;
          } }
        if (!fresh) continue;
        std::vector<Packet> pkts;
        m.monsters().build_spawn_packets(mon, pkts);
        for (auto& pkt : pkts) p.session->send(pkt);
    }
    // ground items already lying in screen range (1101 action 1;
    // the original CMapItem::Appear runs on map entry per item)
    for (auto& [gid, g] : m.ground().all()) {
        int dx = std::abs((int)g.x - (int)p.pos.x);
        int dy = std::abs((int)g.y - (int)p.pos.y);
        if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
        bool fresh = false;
        { std::lock_guard<std::mutex> lk(p.known_mtx);
          if (!p.known_ground.count(gid)) {
              p.known_ground.insert(gid);
              fresh = true;
          } }
        if (!fresh) continue;
        p.session->send(build_map_item_1101(g, MAPITEM_SPAWN));
    }
}

void World::tick(time_t now) {
    for (auto& [map_id, m] : maps_) {
        auto& mgr = m.monsters();
        // ---- GROUND ITEM EXPIRY (CMapItem lifetime sweep) --------
        for (auto& g : m.ground().sweep(now)) {
            auto rp = build_map_item_1101(g, MAPITEM_REMOVE);
            for (Player* other : m.players()) {
                if (!other->session) continue;
                int dx = std::abs((int)other->pos.x - (int)g.x);
                int dy = std::abs((int)other->pos.y - (int)g.y);
                if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
                other->session->send(rp);
                { std::lock_guard<std::mutex> lk(other->known_mtx);
                  other->known_ground.erase(g.id); }
            }
        }
        for (Monster* mon : mgr.tick(now)) {
            // broadcast the respawn to every player in screen range
            // (the original re-runs CMonster::EnterMapGroup into the
            // map group broadcast)
            std::vector<Packet> pkts;
            mgr.build_spawn_packets(*mon, pkts);
            for (Player* other : m.players()) {
                if (!other->session) continue;
                float dx = std::abs((int)other->pos.x - (int)mon->x);
                float dy = std::abs((int)other->pos.y - (int)mon->y);
                if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
                for (auto& pkt : pkts) other->session->send(pkt);
                { std::lock_guard<std::mutex> lk(other->known_mtx);
                  other->known_monsters.insert(mon->id); }
            }
        }

        // ---- MONSTER AI PASS -----------------------------------
        // (original CMonster::OnTimer loop: FUN_1403929b0 picks the
        // target, FUN_140394680 drives move/attack with the
        // attack_speed/move_speed cooldowns; CMonster::JumpPos
        // FUN_140388a40 broadcasts CMsgMonsterJump 20002 per step)
        for (auto& [id, mon] : mgr.all()) {
            if (!mon.alive || mon.target_id == 0) continue;
            auto it = players.find(mon.target_id);
            if (it == players.end() || !it->second.in_world ||
                it->second.map_id != map_id ||
                it->second.hp == 0 || !it->second.alive) {
                mon.target_id = 0;   // target gone: drop aggro
                continue;
            }
            Player& tgt = it->second;
            int dx = std::abs((int)tgt.pos.x - (int)mon.x);
            int dy = std::abs((int)tgt.pos.y - (int)mon.y);
            // the original chases its aggro target well beyond
            // view_range (CMonster::JumpPos loop); drop only past a
            // generous leash so a monster never runs across the map
            // forever
            if (dx > MONSTER_LEASH || dy > MONSTER_LEASH) {
                mon.target_id = 0;   // leashed: give up
                continue;
            }
            if (dx <= (int)mon.attack_range && dy <= (int)mon.attack_range) {
                // in melee range: attack on the attack_speed cooldown
                if (now < mon.next_attack_at) continue;
                mon.next_attack_at = now + mon.attack_secs;
                uint32_t dmg = calc_physical_damage(mon.combat, tgt.combat);
                if (dmg > tgt.hp) dmg = tgt.hp;    // never overkill
                tgt.hp -= dmg;
                auto ip = build_interact_1022(mon.id, tgt.id,
                                              INTERACT_ATTACK, mon.x, mon.y);
                w_ai_broadcast(m, mon, ip);
                auto ap = build_user_attrib_10017(tgt.id,
                    {{ATTRIB_LIFE, tgt.hp}, {ATTRIB_MAX_LIFE, tgt.max_hp}});
                w_ai_broadcast(m, mon, ap);
                std::printf("[ai] monster %u (%s) hits %u for %u -> hp %u/%u\n",
                            mon.id, mon.name.c_str(), tgt.id, dmg,
                            tgt.hp, tgt.max_hp);
                if (tgt.hp == 0 && tgt.alive) {
                    tgt.alive = false;
                    mon.target_id = 0;  // target down
                    // Original: the killing blow leaves the corpse on
                    // screen (the fall animation is client-side from the
                    // 10017 hp=0 update); the victim's client is told to
                    // open the revive UI with CMsgAction action 94
                    // (0x5E) data 3 (Conquer.c case 94: data==3 ->
                    // FUN_004c3af1 death dialog; the ghost client
                    // answers with action 94 data 0..2 = revive choice).
                    auto rv = build_action_10010(tgt.id, 3, 94, 0,
                                                tgt.pos.x, tgt.pos.y);
                    if (tgt.session) tgt.session->send(rv);
                    std::printf("[ai] %u died to monster %u; revive UI sent\n",
                                tgt.id, mon.id);
                }
            } else if (now >= mon.next_move_at) {
                // chase one step (CMonster::JumpPos + CMsgMonsterJump)
                mon.next_move_at = now + mon.move_secs;
                mon.step_toward(tgt.pos.x, tgt.pos.y);
                auto jp = build_monster_jump_20002(
                    mon.id, mon.x, mon.y, mon.face_dir(tgt.pos.x, tgt.pos.y));
                w_ai_broadcast(m, mon, jp);
            }
        }
    }
}

// AI-pass broadcast helper: screen range around a monster.
void World::w_ai_broadcast(GameMap& m, const Monster& mon, const Packet& pkt) {
    for (Player* other : m.players()) {
        if (!other->session) continue;
        float dx = std::abs((int)other->pos.x - (int)mon.x);
        float dy = std::abs((int)other->pos.y - (int)mon.y);
        if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
        other->session->send(pkt);
    }
}

void World::remove_player(Player& p) {
    if (!p.in_world) return;
    auto it = maps_.find(p.map_id);
    if (it != maps_.end()) it->second.players().remove(&p);
    p.in_world = false;
    std::printf("[world] %s leaves map %u\n", p.name.c_str(), p.map_id);
    // persist the last position (original saves the full cq_user row on
    // exit; subset here: map + record position + level)
    if (IDatabase* db = active_db()) {
        UserRecord r;
        r.id = p.id; r.name = p.name; r.level = p.level;
        r.recordmap_id = p.map_id; r.recordx = p.pos.x; r.recordy = p.pos.y;
        db->save_user(r);
        // v27: persist user script vars (sidecar table)
        {
            std::map<std::string, int64_t> raw;
            for (const auto& [k, v] : p.vars.stc) {
                char key[40];
                std::snprintf(key, sizeof key, "stc:%u:%u",
                    (uint32_t)(k / 1000), (uint32_t)(k % 1000));
                raw[key] = v;
            }
            for (const auto& [k, v] : p.vars.stc_daily) {
                char key[40];
                std::snprintf(key, sizeof key, "stcd:%u:%u",
                    (uint32_t)(k / 1000), (uint32_t)(k % 1000));
                raw[key] = v;
            }
            // v28: task records (task:<id>:complete|d1..d7|ot) and
            // int64 var array (var:N), original semantics ported
            for (const auto& [tid, tr] : p.vars.tasks) {
                char key[48];
                std::snprintf(key, sizeof key, "task:%u:complete", tid);
                raw[key] = tr.complete;
                std::snprintf(key, sizeof key, "task:%u:ot", tid);
                raw[key] = tr.overtime;
                for (int i = 1; i <= 7; ++i) {
                    std::snprintf(key, sizeof key, "task:%u:d%d", tid, i);
                    raw[key] = tr.data[i];
                }
            }
            for (int i = 0; i < 8; ++i) {
                char key[16];
                std::snprintf(key, sizeof key, "var:%d", i);
                raw[key] = p.vars.var[i];
            }
            db->save_user_vars(p.id, raw);
        }
        // v24: flush dirty weapon-skill (proficiency) rows
        for (const auto& [wtype, ws] : p.weapon_skills) {
            if (!ws.dirty) continue;
            WeaponSkillRecord r2;
            r2.type = ws.type; r2.level = ws.level; r2.exp = ws.exp;
            db->save_weapon_skill(p.id, r2);
        }
        // v37: flush dirty magic (spell) rows
        for (const auto& [mtype, ms] : p.magics) {
            if (!ms.dirty) continue;
            IDatabase::MagicRecord mr;
            mr.type = mtype; mr.level = ms.level; mr.exp = ms.exp;
            db->save_magic(p.id, mr);
        }
    }
}

void World::remove_by_session(ClientSession* s) {
    std::vector<uint32_t> gone;
    for (auto& [id, p] : players) if (p.session == s) gone.push_back(id);
    for (uint32_t id : gone) {
        Player& p = players[id];
        remove_player(p);
        players.erase(id);
    }
}

void World::broadcast_to_screen(GameMap& m, const Position& center,
                                 const Packet& pkt, ClientSession* except) {
    for (Player* other : m.players()) {
        if (!other->session || other->session == except) continue;
        float dx = std::abs((int)other->pos.x - (int)center.x);
        float dy = std::abs((int)other->pos.y - (int)center.y);
        if (dx > SCREEN_RANGE || dy > SCREEN_RANGE) continue;
        other->session->send(pkt);
    }
}

} // namespace conquer
