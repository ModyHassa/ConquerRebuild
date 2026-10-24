#pragma once
// v23: REAL cq_action chain engine (the classic Conquer NPC dialog
// system). 192,895 rows drive every NPC talk in the original database.
//
// Chain semantics (verified against cq_action rows, e.g. CaptainLi
// npc 43 chain 15100..15124):
//   type 101  NPC say-text: param is the line (~ = space, the CLIENT
//             converts 0x7E->0x20 itself, so we ship param verbatim).
//             Follow id_next.
//   type 102  dialog option: param = "Text ActionId". All consecutive
//             102 rows (chained via id_next) become the option list of
//             ONE dialog. The client answers 2032 with face 0x66 and
//             the chosen ActionId at wire+8; 0 = dialog closed.
//   type 1001 script line: "money += -1000" = effect (follow id_next);
//             "pk < 30" = condition (true -> id_next, false ->
//             id_nextfail).
//   type 1003 map teleport: param "map x y".
//   anything else: stop the walk (unhandled type, v23 scope), send
//             whatever text/options accumulated.
#include "../core/database.hpp"
#include "world.hpp"
#include "chat.hpp"
#include "usereffect.hpp"
#include <sstream>\n#include <cstring>
#include "npc.hpp"
#include "action.hpp"
#include "combat.hpp"
#include "drops.hpp"
#include "../protocol/spawn_10014.hpp"
#include "dynanpc.hpp"
#include "weaponskills.hpp"
#include "magicskills.hpp"
#include "magic.hpp"
#include "../protocol/ids.hpp"
#include <cstdio>
#include <cstdlib>
#include <string>
#include <unordered_map>
#include <vector>

namespace conquer {

class ActionTable {
public:
    static ActionTable& instance() { static ActionTable t; return t; }
    void load(IDatabase* db) {
        if (!db || loaded_) return;
        for (const ActionRow& a : db->load_actions())
            rows_[a.id] = a;
        loaded_ = true;
        std::printf("[action] %zu cq_action rows loaded\n", rows_.size());
    }
    const ActionRow* find(uint32_t id) const {
        auto it = rows_.find(id);
        return it == rows_.end() ? nullptr : &it->second;
    }
private:
    bool loaded_ = false;
    std::unordered_map<uint32_t, ActionRow> rows_;
};

// ---- 1001 script line evaluation -----------------------------------------
static bool is_space(char c) { return c == ' ' || c == '	'; }
static std::string trim(const std::string& s) {
    size_t b = 0, e = s.size();
    while (b < e && is_space(s[b])) ++b;
    while (e > b && is_space(s[e-1])) --e;
    return s.substr(b, e - b);
}

// evaluate "lhs op rhs" against the player; returns false if unknown var
static bool eval_condition(Player& p, const std::string& lhs,
                           const std::string& op, const std::string& rhs) {
    long long lv = 0;
    if (lhs == "money") lv = (long long)p.money;
    else if (lhs == "level") lv = (long long)p.level;
    else if (lhs == "life" || lhs == "hp") lv = (long long)p.hp;
    else if (lhs == "pk") lv = 0;            // v23: pk system not ported yet
    else return false;
    long long rv = atoll(rhs.c_str());
    if (op == ">=") return lv >= rv;
    if (op == "<=") return lv <= rv;
    if (op == ">")  return lv > rv;
    if (op == "<")  return lv < rv;
    if (op == "==" || op == "=") return lv == rv;
    if (op == "!=") return lv != rv;
    return false;
}

// v23/v28: evaluate a fully %-substituted numeric expression
// ("1961 < 1999" style rows of type 2003). lhs op rhs, all numeric
// after template substitution.
static bool eval_substituted_expr(const std::string& s) {
    size_t pos; std::string op;
    if (!find_op(s, pos, op)) return false;
    std::string lhs = s.substr(0, pos);
    std::string rhs = s.substr(pos + op.size());
    int64_t lv = 0, rv = 0;
    to_i64(lhs, lv);
    to_i64(rhs, rv);
    if (op == "==") return lv == rv;
    if (op == "!=") return lv != rv;
    if (op == ">=") return lv >= rv;
    if (op == "<=") return lv <= rv;
    if (op == ">")  return lv >  rv;
    if (op == "<")  return lv <  rv;
    return false;
}

// apply "money += -1000"; returns true if handled
static bool apply_effect(Player& p, IDatabase* db, const std::string& lhs,
                         long long delta) {
    if (lhs == "money") {
        if (delta < 0 && p.money < (uint64_t)(-delta))
            p.money = 0;                     // never below zero
        else
            p.money = (uint64_t)((long long)p.money + delta);
        if (db) db->add_money(p.id, delta);
        if (p.session) {
            Packet mp = build_user_attrib_10017_u64(p.id,
                {{4 /* ATTRIB_MONEY */, p.money}});
            p.session->send(mp);
        }
        return true;
    }
    if (lhs == "life" || lhs == "hp") {
        long long nh = (long long)p.hp + delta;
        if (nh < 0) nh = 0;
        if (nh > (long long)p.max_hp) nh = p.max_hp;
        p.hp = (uint32_t)nh;
        if (p.session) {
            Packet hp = build_user_attrib_10017(p.id,
                {{ATTRIB_LIFE, p.hp}});
            p.session->send(hp);
        }
        return true;
    }
    return false;
}

        // v51 (0x7dc ACTION_EVENT_MAPUSER_CHGMAP): teleport an arbitrary
// player across maps — same wire behavior as the 1003 self-teleport
// (74 leave broadcast, list re-registration, 10014 spawn, screen refresh).
static void teleport_player(World& w, Player& pl, uint32_t map,
                            int tx, int ty) {
    GameMap& oldm = w.get_or_create_map(pl.map_id);
    Packet leave = build_action_10010(pl.id, pl.id, 74, 0,
                                     pl.pos.x, pl.pos.y);
    w.broadcast_to_screen(oldm, pl.pos, leave, pl.session);
    oldm.players().remove(&pl);
    { std::lock_guard<std::mutex> lk(pl.known_mtx);
      pl.known_monsters.clear();
      pl.known_ground.clear(); }
    pl.map_id = map;
    pl.pos = Position{(uint16_t)tx, (uint16_t)ty};
    GameMap& newm = w.get_or_create_map(pl.map_id);
    newm.players().push_back(&pl);
    SpawnInfo si; si.id = pl.id; si.name = pl.name;
    si.x = pl.pos.x; si.y = pl.pos.y;
    Packet sp = build_spawn_10014(si);
    w.broadcast_to_screen(newm, pl.pos, sp, pl.session);
    if (pl.session) pl.session->send(sp);
    w.send_monsters_in_screen(pl, newm);
    std::printf("[action] %u teleported to map %u (%u,%u)\n",
                pl.id, pl.map_id, pl.pos.x, pl.pos.y);
}

// ---- the chain walker ------------------------------------------------------
// Runs the chain from action_id, sending the resulting dialog over the
// session. Returns the action id the walk stopped at (0 = clean end).
inline uint32_t run_action_chain(World& w, Player& p, uint32_t npc_id,
                                 uint32_t action_id) {
    ActionTable& tbl = ActionTable::instance();
    uint32_t cur = action_id;
    p.menu_ids.clear();   // v42: fresh menu per chain
    auto send_line = [&](uint8_t mode, uint8_t face, uint32_t aid,
                         uint16_t p1, uint16_t p2,
                         const std::string& t, bool remap = false) {
        if (!p.session) return;
        // v42 menu remapper (FUN_14039d300): ONLY the button/input/pic
        // rows (102/103/104) push a menu entry; 101 text lines and the
        // 105 msgbox (which uses the lookup-only FUN_14039d1a0) send
        // their raw id, truncated to u2.
        uint32_t wire_id = aid;
        if (remap) {
            wire_id = 0xFFFF;
            if (p.menu_ids.size() < 20) {
                p.menu_ids.push_back(aid);
                wire_id = (uint32_t)p.menu_ids.size() - 1;
            } else {
                std::printf("[action] %u menu task size overflow id %u\n",
                            p.id, aid);
            }
        }
        p.session->send(build_dialog_line_2032(mode, face, wire_id,
                                               p1, p2, t));
    };
    int guard = 0;
    // npc dialog context for %-templates (%npc_x/%npc_y)
    uint32_t npc_x = 0, npc_y = 0;
    if (const NpcDef* nd = NpcSystem::instance().find(npc_id)) {
        npc_x = nd->x; npc_y = nd->y;
    }

    while (cur != 0 && guard++ < 100) {
        const ActionRow* a = tbl.find(cur);
        if (!a) {
            std::printf("[action] %u: action id %u not found\n",
                        p.id, cur);
            break;
        }
        switch (a->type) {
        case 101:  // say text — VERIFIED: EACH 101/102/103/104/105
            // builds its OWN CMsgDialog 2032 line and sends it
            // immediately (server FUN_140142db0 cases 0x65..0x69 call
            // FUN_1403a6400 per row; the client accumulates lines,
            // parser FUN_007d8432 reads ONE packer string per packet).
            send_line(1, 0, 0, 0, 0, a->param);
            cur = a->id_next;
            break;
        case 102: {  // option "Text ActionId" — mode 2 button line, the
            // reply action id rides at wire+0xC (converted by
            // FUN_14039d300 in the original; raw ids here).
            uint32_t opt_aid = 0;
            {
                size_t sp = a->param.rfind(' ');
                if (sp != std::string::npos)
                    opt_aid = (uint32_t)strtoul(
                        a->param.c_str() + sp + 1, nullptr, 10);
            }
            send_line(2, 0, opt_aid, 0, 0, a->param, /*remap=*/true);
            cur = a->id_next;
            break;
        }
        case 103: {  // input dialog "face aid <text> [flag]" — VERIFIED
            // case 0x67: sscanf "%d %u %s %d" -> face, reply action id,
            // text token, flag; flag != 0 adds 0x100 to the face (the u1
            // face slot truncates, matching the original byte store);
            // mode 3 edit-box line, chain continues at id_next.
            int32_t face = 0; uint32_t aid = 0;
            char txt[256] = {0}; int32_t flag = 0;
            int n = std::sscanf(a->param.c_str(), "%d %u %255s %d",
                                &face, &aid, txt, &flag);
            if (n > 1) {
                send_line(3, (uint8_t)(face & 0xff), aid, 0, 0, txt, /*remap=*/true);
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 103 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 104: {  // pic dialog "pic1 pic2 aid" — VERIFIED case 0x68:
            // sscanf "%d %d %u %u" -> pics at wire+8/+0xA (mode 4), 3rd
            // field = reply action id; client shows the picture dialog
            // and the button answers with that action id.
            int32_t p1 = 0, p2 = 0; uint32_t aid = 0, extra = 0;
            int n = std::sscanf(a->param.c_str(), "%d %d %u %u",
                               &p1, &p2, &aid, &extra);
            if (n > 2) {
                send_line(4, 0, aid, (uint16_t)p1, (uint16_t)p2, "", /*remap=*/true);
                cur = a->id_next;
            } else {
                cur = a->id_nextfail;
            }
            break;
        }

        case 1001: {  // script line: condition or effect
            std::string s = trim(a->param);
            size_t pl = s.find("+=");
            if (pl != std::string::npos) {
                std::string lhs = trim(s.substr(0, pl));
                std::string rhs = trim(s.substr(pl + 2));
                if (!apply_effect(p, active_db(), lhs, atoll(rhs.c_str())))
                    { cur = 0; break; }
                cur = a->id_next;
            } else {
                // condition: "lhs op rhs"
                static const char* OPS[] = {">=", "<=", "==", "!=", ">", "<"};
                std::string op; size_t pos = std::string::npos;
                for (const char* cand : OPS) {
                    pos = s.find(cand);
                    if (pos != std::string::npos) { op = cand; break; }
                }
                if (pos == std::string::npos) { cur = 0; break; }
                std::string lhs = trim(s.substr(0, pos));
                std::string rhs = trim(s.substr(pos + op.size()));
                bool ok = eval_condition(p, lhs, op, rhs);
                std::printf("[action] %u condition '%s' -> %s\n",
                            p.id, s.c_str(), ok ? "true" : "false");
                cur = ok ? a->id_next : a->id_nextfail;
            }
            break;
        }
        case 1005: {  // hairdresser (new engine gameaction case 4):
            // "style N" / "color N". Original reads the user lookface,
            // rewrites the low digits (style = look%100,
            // color = (look%1000)/100) and SetAttrib(0x1a, new, 1) with
            // broadcast. Unparseable param (the classic no-op row id 2)
            // continues the chain.
            char kind[16] = {0}; uint32_t val = 0;
            if (std::sscanf(a->param.c_str(), "%15s %u",
                            kind, &val) == 2) {
                uint32_t look = p.lookface;
                if (strcasecmp(kind, "color") == 0) {
                    uint32_t nlook = look + (val % 10 - (look % 1000) / 100) * 100;
                    p.lookface = nlook;
                } else if (strcasecmp(kind, "style") == 0) {
                    uint32_t nlook = (look / 100) * 100 + val % 100;
                    if (nlook < 100) nlook += 300;
                    p.lookface = nlook;
                }
                active_db()->update_user_lookface(p.id, p.lookface);
                std::printf("[action] %u 1005 %s %u: lookface %u -> %u\n",
                            p.id, kind, val, look, p.lookface);
                // appearance broadcast: re-spawn 10014 to the screen
                GameMap& m = w.get_or_create_map(p.map_id);
                SpawnInfo si; si.id = p.id; si.name = p.name;
                si.x = p.pos.x; si.y = p.pos.y;
                si.lookface = p.lookface;
                Packet sp = build_spawn_10014(si);
                w.broadcast_to_screen(m, p.pos, sp, p.session);
            } else {
                std::printf("[action] %u 1005 no-op continue\n", p.id);
            }
            cur = a->id_next;
            break;
        }
        case 1020: {  // ACTION_USER_MAGIC (new-engine case 0xe):
            // "%s %d %d" - check/learn/uplevel/addexp/addlevtime/del on
            // cq_magic records (CPlayerMagic). sscanf < 2 fields -> chain
            // fail (LAB_14013a784).
            char cmd[16] = {0}; int v1 = 0, v2 = 0;
            int got = std::sscanf(a->param.c_str(), "%15s %d %d",
                                  cmd, &v1, &v2);
            auto has = [&](uint32_t t, int lev) -> bool {
                auto it = p.magics.find(t);
                return it != p.magics.end() &&
                       (lev < 0 || (int)it->second.level >= lev);
            };
            auto send1103 = [&](uint32_t t) {
                if (!p.session) return;
                auto it = p.magics.find(t);
                if (it == p.magics.end()) return;
                p.session->send(build_magic_1103(p.id, t,
                                                 it->second.level,
                                                 it->second.exp));
            };
            bool ok = false;
            if (got >= 2) {
                if (!strcasecmp(cmd, "check") && got >= 2) {
                    ok = has((uint32_t)v1, got >= 3 ? v2 : -1);
                } else if (!strcasecmp(cmd, "learn") && got >= 2) {
                    // LearnMagic: false if already known, else create
                    // (level 0) + 1103 + mark dirty (INSERT on save)
                    auto it = p.magics.find((uint32_t)v1);
                    if (it == p.magics.end()) {
                        Player::MagicSkillState ms;
                        ms.level = 0; ms.dirty = false;
                        p.magics[(uint32_t)v1] = ms;
                        IDatabase::MagicRecord mr;
                        mr.type = (uint32_t)v1; mr.level = 0; mr.exp = 0;
                        active_db()->save_magic(p.id, mr);
                        send1103((uint32_t)v1);
                        ok = true;
                    }
                } else if (!strcasecmp(cmd, "uplevel") && got >= 2) {
                    auto it = p.magics.find((uint32_t)v1);
                    if (it != p.magics.end()) {
                        if (it->second.level < 0xFFFF) ++it->second.level;
                        IDatabase::MagicRecord mr;
                        mr.type = (uint32_t)v1;
                        mr.level = it->second.level; mr.exp = it->second.exp;
                        active_db()->save_magic(p.id, mr);
                        send1103((uint32_t)v1);
                        ok = true;
                    }
                } else if (!strcasecmp(cmd, "addexp") && got >= 3) {
                    auto it = p.magics.find((uint32_t)v1);
                    if (it != p.magics.end()) {
                        it->second.exp += (uint32_t)v2;
                        IDatabase::MagicRecord mr;
                        mr.type = (uint32_t)v1;
                        mr.level = it->second.level; mr.exp = it->second.exp;
                        active_db()->save_magic(p.id, mr);
                        send1103((uint32_t)v1);
                        ok = true;
                    }
                } else if (!strcasecmp(cmd, "addlevtime") && got >= 2) {
                    // original: FUN_1402f3080 award on req_uplevtime;
                    // levtime gate deferred -> continue chain
                    std::printf("[action] %u 1020 addlevtime %d "
                                "(defer)\n", p.id, v1);
                    ok = true;
                } else if (!strcasecmp(cmd, "del") && got >= 2) {
                    // del(2) = FUN_140482c80 full remove
                    if (p.magics.erase((uint32_t)v1) > 0) {
                        active_db()->delete_magic(p.id, (uint32_t)v1);
                        ok = true;
                    }
                }
            }
            std::printf("[action] %u 1020 '%s' -> %s\n", p.id,
                        a->param.c_str(), ok ? "true" : "false");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1021: {  // ACTION_USER_WEAPONSKILL (case 0xf):
            // "%s %d %u" on the cq_weapon_skill system (v24):
            // check (level >= V), learn (create at level V), addexp,
            // addlevtime (defer). sscanf != 3 -> chain fail.
            char cmd[16] = {0}; int t = 0; unsigned lv = 0;
            if (std::sscanf(a->param.c_str(), "%15s %d %u",
                            cmd, &t, &lv) != 3) { cur = a->id_nextfail; break; }
            bool ok = false;
            if (!strcasecmp(cmd, "check")) {
                auto it = p.weapon_skills.find((uint32_t)t);
                ok = it != p.weapon_skills.end() &&
                     it->second.level >= (uint8_t)(lv & 0xff);
            } else if (!strcasecmp(cmd, "learn")) {
                auto it = p.weapon_skills.find((uint32_t)t);
                if (it == p.weapon_skills.end()) {
                    Player::WeaponSkillState ws;
                    ws.type = (uint32_t)t; ws.level = (uint8_t)lv;
                    ws.exp = 0; ws.dirty = true;
                    p.weapon_skills[(uint32_t)t] = ws;
                    ok = true;
                } else if (it->second.level < (uint8_t)(lv & 0xff)) {
                    it->second.level = (uint8_t)lv;
                    it->second.dirty = true;
                    ok = true;
                }
                if (ok && p.session) {
                    WeaponSkillTable& tbl = WeaponSkillTable::instance();
                    p.session->send(build_weapon_skill_1025(
                        (uint32_t)t, (uint8_t)lv, 0,
                        tbl.req_exp((uint32_t)t, (uint8_t)(lv + 1))));
                }
                if (ok) {   // persist at once; flush must not duplicate
                    auto it2 = p.weapon_skills.find((uint32_t)t);
                    if (it2 != p.weapon_skills.end()) {
                        WeaponSkillRecord r2;
                        r2.type = it2->second.type;
                        r2.level = it2->second.level;
                        r2.exp = it2->second.exp;
                        active_db()->save_weapon_skill(p.id, r2);
                        it2->second.dirty = false;
                    }
                }
            } else if (!strcasecmp(cmd, "addexp")) {
                // CUser::AddWeaponSkillExp (v24 port) - sends 1025/1104
                auto it = p.weapon_skills.find((uint32_t)t);
                if (it != p.weapon_skills.end()) {
                    award_weapon_skill_exp_raw(p, (uint32_t)t, lv);
                    WeaponSkillRecord r2;
                    r2.type = it->second.type;
                    r2.level = it->second.level;
                    r2.exp = it->second.exp;
                    active_db()->save_weapon_skill(p.id, r2);
                    it->second.dirty = false;
                    ok = true;
                }
            } else if (!strcasecmp(cmd, "addlevtime")) {
                std::printf("[action] %u 1021 addlevtime %d (defer)\n",
                            p.id, t);
                ok = true;
            }
            std::printf("[action] %u 1021 '%s' -> %s\n", p.id,
                        a->param.c_str(), ok ? "true" : "false");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1022: {  // ACTION_LOG (case 0x10):
            // tq::MyLogSave("gmlog/action", param) then continue.
            std::printf("[gmlog/action] %u: %s\n", p.id,
                        a->param.c_str());
            cur = a->id_next;
            break;
        }
        case 1003: {  // teleport "map x y"
            int map = 0, tx = 0, ty = 0;
            if (sscanf(a->param.c_str(), "%d %d %d", &map, &tx, &ty) == 3) {
                // leave the old map: broadcast removal (CMsgAction 74)
                // AND unregister from the map player list + forget the
                // old screen ids (a stale list pointer after a teleport
                // disconnected = dangling Player* on the old map, which
                // crashed the next kill broadcast on that map)
                GameMap& oldm = w.get_or_create_map(p.map_id);
                Packet leave = build_action_10010(p.id, p.id, 74, 0,
                                                 p.pos.x, p.pos.y);
                w.broadcast_to_screen(oldm, p.pos, leave, p.session);
                oldm.players().remove(&p);
                { std::lock_guard<std::mutex> lk(p.known_mtx);
                  p.known_monsters.clear();
                  p.known_ground.clear(); }
                p.map_id = (uint32_t)map;
                p.pos = Position{(uint16_t)tx, (uint16_t)ty};
                GameMap& newm = w.get_or_create_map(p.map_id);
                newm.players().push_back(&p);
                SpawnInfo si; si.id = p.id; si.name = p.name;
                si.x = p.pos.x; si.y = p.pos.y;
                Packet sp = build_spawn_10014(si);
                w.broadcast_to_screen(newm, p.pos, sp, p.session);
                if (p.session) p.session->send(sp);
                w.send_monsters_in_screen(p, newm);
                std::printf("[action] %u teleported to map %u (%u,%u)\n",
                            p.id, p.map_id, p.pos.x, p.pos.y);
            }
            cur = a->id_next;
            break;
        }
case 121: {  // random check (ProcessAction case 0x79:
            // tq::RandGet(range) < threshold). param = "threshold range"
            // (DB VERIFIED: "1 2"=50%, "1 5"=20%, "312 10000"=3.12%).
            int thresh = 0, range = 0;
            if (std::sscanf(a->param.c_str(), "%d %d",
                            &thresh, &range) == 2 && range > 0) {
                bool ok = (int)(tq_rand((uint32_t)range)) < thresh;
                std::printf("[action] %u random %d/%d -> %s\n",
                            p.id, thresh, range, ok ? "true" : "false");
                cur = ok ? a->id_next : a->id_nextfail;
            } else {
                std::printf("[action] %u bad 121 param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 122: {  // random jump (case 0x7a): 8 action ids, run the
            // one at index RandGet(8) (original FUN_140145f60 recursion)
            uint32_t ids[8] = {0};
            if (std::sscanf(a->param.c_str(),
                            "%u %u %u %u %u %u %u %u",
                            &ids[0], &ids[1], &ids[2], &ids[3],
                            &ids[4], &ids[5], &ids[6], &ids[7]) == 8) {
                uint32_t pick = ids[tq_rand(8)];
                std::printf("[action] %u random jump -> %u\n",
                             p.id, pick);
                cur = pick;
            } else {
                std::printf("[action] %u bad 122 param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 123: {  // CheckDateTime (case 0x7b, FUN_140088a30):
            // DATA column selects the window mode; pass (id_next) when
            // now is INSIDE [start,end] INCLUSIVE, else id_nextfail.
            // 0: "Y-M-D H:M Y-M-D H:M"   1: "M-D H:M M-D H:M" (this yr)
            // 2/3: "W H:M W H:M" weekly  4: "H:M H:M" daily
            // 5: "M M" minute-of-hour
            bool ok = false;
            const char* sp = a->param.c_str();
            time_t nowt = ::time(nullptr);
            struct tm lt = *::localtime(&nowt);
            int v[10] = {0};
            switch (a->data) {
            case 0:
                if (std::sscanf(sp, "%d-%d-%d %d:%d %d-%d-%d %d:%d",
                                &v[0],&v[1],&v[2],&v[3],&v[4],
                                &v[5],&v[6],&v[7],&v[8],&v[9]) == 10) {
                    struct tm t1 = {}, t2 = {};
                    t1.tm_year = v[0]-1900; t1.tm_mon = v[1]-1; t1.tm_mday = v[2];
                    t1.tm_hour = v[3]; t1.tm_min = v[4];
                    t2.tm_year = v[5]-1900; t2.tm_mon = v[6]-1; t2.tm_mday = v[7];
                    t2.tm_hour = v[8]; t2.tm_min = v[9];
                    time_t s1 = ::mktime(&t1), s2 = ::mktime(&t2);
                    ok = (nowt >= s1) && (nowt <= s2);
                }
                break;
            case 1:
                if (std::sscanf(sp, "%d-%d %d:%d %d-%d %d:%d",
                                &v[0],&v[1],&v[2],&v[3],
                                &v[4],&v[5],&v[6],&v[7]) == 8) {
                    struct tm t1 = lt, t2 = lt;
                    t1.tm_mon = v[0]-1; t1.tm_mday = v[1]; t1.tm_hour = v[2]; t1.tm_min = v[3]; t1.tm_sec = 0;
                    t2.tm_mon = v[4]-1; t2.tm_mday = v[5]; t2.tm_hour = v[6]; t2.tm_min = v[7]; t2.tm_sec = 0;
                    time_t s1 = ::mktime(&t1), s2 = ::mktime(&t2);
                    ok = (nowt >= s1) && (nowt <= s2);
                }
                break;
            case 2:  // weekly window (minutes-of-week)
            case 3:
                if (std::sscanf(sp, "%d %d:%d %d %d:%d",
                                &v[0],&v[1],&v[2],&v[3],&v[4],&v[5]) == 6) {
                    // original mode 3: (hour + wday*24)*60 + min
                    int nowm = (lt.tm_hour + lt.tm_wday * 24) * 60 + lt.tm_min;
                    int s1 = (v[1] + v[0] * 24) * 60 + v[2];
                    int s2 = (v[4] + v[3] * 24) * 60 + v[5];
                    ok = (nowm >= s1) && (nowm <= s2);
                }
                break;
            case 4:
                if (std::sscanf(sp, "%d:%d %d:%d",
                                &v[0],&v[1],&v[2],&v[3]) == 4) {
                    int nowm = lt.tm_hour * 60 + lt.tm_min;
                    int s1 = v[0] * 60 + v[1], s2 = v[2] * 60 + v[3];
                    ok = (nowm >= s1) && (nowm <= s2);
                }
                break;
            case 5:
                if (std::sscanf(sp, "%d %d", &v[0], &v[1]) == 2)
                    ok = (lt.tm_min >= v[0]) && (lt.tm_min <= v[1]);
                break;
            }
            std::printf("[action] %u datetime(data=%d) '%s' -> %s\n",
                        p.id, a->data, a->param.c_str(), ok ? "true" : "false");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 125: {  // SYSTEM/ALLUSERS broadcast (case 0x7d): the
            // original builds CMsgTalk("SYSTEM","ALLUSERS",param) and
            // hands it to the mapgroup broadcast; channel 2001
            // display, white color.
            Packet sys = build_talk_1004("SYSTEM", "ALLUSERS", a->param,
                                         "", 0xFFFFFF, 2001, 0, 0, 0, 0);
            for (auto& [mid, m] : w.maps()) {
                (void)mid;
                for (Player* other : m.players())
                    if (other->session) other->session->send(sys);
            }
            std::printf("[action] %u system broadcast: %s\n",
                        p.id, a->param.c_str());
            cur = a->id_next;
            break;
        }
        case 105: {  // message box — VERIFIED case 0x69 (FUN_140142db0
            // ~222470): CUser clears the open dialog (FUN_14039c590)
            // then a mode-6 CMsgDialog line is sent; the action-id slot
            // carries converted id_next (the client's "Confirm" reply
            // re-enters the chain there, client FUN_007d8432 mode 6 ->
            // FUN_0060354f(0xe13, id, "Confirm", text)); face = DATA.
            send_line(6, (uint8_t)a->data, a->id_next, 0, 0, a->param);
            std::printf("[action] %u msgbox: '%s'\n", p.id,
                        a->param.c_str());
            cur = a->id_next;
            break;
        }
        case 507: {  // amount check in itemtype range (case 0x1fb,
            // FUN_140338940 VERIFIED = accumulate item amounts whose
            // type lies in [min,max] until >= count). param "min max
            // count", e.g. "1088000 1088000 2" = needs 2x type 1088000;
            // "1072050 1072059 1" = any one in range.
            uint32_t lo = 0, hi = 0; int need = 0;
            if (std::sscanf(a->param.c_str(), "%u %u %d",
                            &lo, &hi, &need) >= 2) {
                if (need < 1) need = 1;
                int total = 0;
                for (const auto& it :
                     active_db()->load_player_items(p.id)) {
                    if (it.type >= lo && it.type <= hi)
                        total += (it.amount > 0 ? (int)it.amount : 1);
                }
                bool ok = total >= need;
                std::printf("[action] %u amount %u..%u need %d have %d"
                            " -> %s\n", p.id, lo, hi, need, total,
                            ok ? "true" : "false");
                cur = ok ? a->id_next : a->id_nextfail;
            } else {
                cur = a->id_nextfail;
            }
            break;
        }
        case 508: {  // inventory-space check (ProcessActionItem case
            // 0x1fc, VERbatim port): data = number of slots needed;
            // pass when data < 1 or current_count + data < 0x29 (41).
            // Original counts the user item-pointer array; we count
            // cq_item inventory rows (position 0).
            uint32_t count = 0;
            for (const auto& it : active_db()->load_player_items(p.id))
                if (it.position == 0) ++count;
            bool ok = (a->data < 1) ||
                      ((uint64_t)count + a->data < 0x29);
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1056: {  // "isexit" item-exists check (data = itemtype);
            // newer-engine twin of 503 (3,415 rows param='isexit')
            bool has = false;
            for (const auto& it : active_db()->load_player_items(p.id))
                if (it.type == (uint32_t)a->data) { has = true; break; }
            cur = has ? a->id_next : a->id_nextfail;
            break;
        }
        case 1027: {  // ACTION_USER_EFFECT: "self <effect> [add|del]"
            // (3,379 rows: angelwing/eidolon/relive1/recovery/Aegis...).
            // Original: lua Effect(id, szObj, szEffect, szOpt) ->
            // FUN_1404f1e90; only "self" targets this player; couple/
            // team targets log + continue. Sends CMsgUserEffect 1015
            // (mode 10 add / 24 del) with the effect NAME — the
            // client owns the named effect definitions.
            std::istringstream is(a->param);
            std::string obj, effect, opt;
            is >> obj >> effect >> opt;
            if (opt.empty()) opt = "add";   // FUN_1404f1e90 default
            if (obj == "self" && p.session) {
                uint8_t mode = (opt == "del") ? EFFECT_DEL : EFFECT_ADD;
                p.session->send(build_user_effect_1015(p.id, mode, effect));
                std::printf("[action] %u user effect '%s' %s\n",
                            p.id, effect.c_str(), opt.c_str());
            } else if (obj != "self") {
                std::printf("[action] %u 1027 target '%s' not ported\n",
                            p.id, obj.c_str());
            }
            cur = a->id_next;
            break;
        }
        case 801: {  // effector command (4,130 rows; 95% "dropitem
            // <id>", rest "dropmoney <n>" — GM-style commands run by
            // the action engine). Unknown commands: log + continue.
            std::istringstream is(a->param);
            std::string cmd; is >> cmd;
            GameMap& m = w.get_or_create_map(p.map_id);
            GroundItemManager& mgr = m.ground();
            auto broadcast_drop = [&](GroundItem* g) {
                if (!g) return;
                Packet pkt = build_map_item_1101(*g, MAPITEM_SPAWN);
                w.broadcast_to_screen(m, p.pos, pkt, nullptr);
                // everyone newly in range tracks the item id
                for (Player* other : m.players()) {
                    if (!other->session) continue;
                    std::lock_guard<std::mutex> lk(other->known_mtx);
                    other->known_ground.insert(g->id);
                }
            };
            if (cmd == "dropitem") {
                uint32_t it = 0; is >> it;
                broadcast_drop(mgr.spawn_item(it, 1, p.pos.x, p.pos.y, p.id));
                std::printf("[action] %u dropitem %u at %u,%u\n",
                            p.id, it, p.pos.x, p.pos.y);
            } else if (cmd == "dropmoney") {
                uint32_t amt = 0; is >> amt;
                broadcast_drop(mgr.spawn_money(amt, p.pos.x, p.pos.y, p.id));
                std::printf("[action] %u dropmoney %u at %u,%u\n",
                            p.id, amt, p.pos.x, p.pos.y);
            } else {
                std::printf("[action] %u 801 cmd '%s' not ported\n",
                            p.id, a->param.c_str());
            }
            cur = a->id_next;
            break;
        }
        case 518: {  // award item variant (case 0x206): data column =
            // itemtype; param field 2 = COUNT (FUN_14011cf20 award loop:
            // count==0 -> one copy, count>0 -> that many copies). Other
            // 17 fields are item props we award defaults for (as 501).
            int count = 0;
            {
                int f1 = 0;
                std::sscanf(a->param.c_str(), "%d %d", &f1, &count);
            }
            if (count < 1) count = 1;
            bool all_ok = true;
            for (int i = 0; i < count && all_ok; ++i) {
                uint32_t new_id =
                    active_db()->insert_item(p.id, (uint32_t)a->data, 1);
                if (new_id != 0 && p.session) {
                    p.session->send(build_item_info_1008(
                        new_id, (uint32_t)a->data, 1, 0, 1));
                    p.session->send(build_item_status_2077(
                        new_id, 8, 0, 1, 1));
                } else {
                    all_ok = false;
                }
            }
            std::printf("[action] %u award518 type %u x%d -> %s\n",
                        p.id, (uint32_t)a->data, count,
                        all_ok ? "true" : "false");
            cur = all_ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 205: {  // map-empty check (case 0xcd ~218053):
            // original: iterate the mapgroup role list; return true iff
            // NO other alive user on the actor's map (mining/arena-room
            // "must be alone" guard). Clean check -> next/nextfail.
            bool others = false;
            for (auto& mkv : w.maps()) {
                for (Player* q : mkv.second.players())
                    if (q != &p && q->in_world && q->alive &&
                        q->map_id == p.map_id) { others = true; break; }
                if (others) break;
            }
            std::printf("[action] %u 205 alone-on-map -> %s\n",
                        p.id, others ? "false" : "true");
            cur = others ? a->id_nextfail : a->id_next;
            break;
        }
        case 207: {  // NPC-owner room gate (case 0xcf ~218099, 1 row):
            // original queries the NPC's linked role (QueryObj 0x1040)
            // and checks its owner's map (10=guild / 46=house room). Our
            // static NPCs have no linked role -> context fetch fails ->
            // return false -> chain aborts (matches original error path).
            std::printf("[action] %u 207 npc-owner gate: no linked "
                        "role -> abort\n", p.id);
            cur = 0;
            break;
        }
        case 208: {  // return-teleport (case 0xd0 ~218105, 4 rows):
            // "%u %u %d %d" = code(815-818), mapid, x, y. Teleports the
            // user (FUN_1400872b0/portal machinery skipped); %user_map_
            // templates were substituted to the saved position at accept
            // time in the original - here literal coords teleport, same
            // 1003-style map move.
            uint32_t code = 0, mapid = 0; int tx = 0, ty = 0;
            if (std::sscanf(a->param.c_str(), "%u %u %d %d",
                            &code, &mapid, &tx, &ty) != 4) { cur = 0; break; }
            GameMap& oldm = w.get_or_create_map(p.map_id);
            Packet leave = build_action_10010(p.id, p.id, 74, 0,
                                             p.pos.x, p.pos.y);
            w.broadcast_to_screen(oldm, p.pos, leave, p.session);
            oldm.players().remove(&p);
            { std::lock_guard<std::mutex> lk(p.known_mtx);
              p.known_monsters.clear();
              p.known_ground.clear(); }
            p.map_id = mapid;
            p.pos = Position{(uint16_t)tx, (uint16_t)ty};
            GameMap& newm = w.get_or_create_map(p.map_id);
            newm.players().push_back(&p);
            SpawnInfo si; si.id = p.id; si.name = p.name;
            si.x = p.pos.x; si.y = p.pos.y; si.lookface = p.lookface;
            Packet sp = build_spawn_10014(si);
            w.broadcast_to_screen(newm, p.pos, sp, p.session);
            if (p.session) p.session->send(sp);
            w.send_monsters_in_screen(p, newm);
            std::printf("[action] %u 208 code %u teleport -> map %u "
                        "(%u,%u)\n", p.id, code, p.map_id, p.pos.x, p.pos.y);
            cur = a->id_next;
            break;
        }
        case 307: {  // region monster count (case 0x133 ~219885):
            // "%u %d %d %d %d %u %s %d" = mapid(0=current), x0, y0, w,
            // h, monstertype(0=any), op, val. Original walks the map
            // monster list (alive flag, x0<=x<x0+w, y0<=y<y0+h, type)
            // then compares the count (== / < / <= / > / >=).
            uint32_t mapid = 0, mt = 0; int x0 = 0, y0 = 0, ww = 0, hh = 0;
            char op[8] = {0}; int val = 0;
            if (std::sscanf(a->param.c_str(), "%u %d %d %d %d %u %7s %d",
                            &mapid, &x0, &y0, &ww, &hh, &mt, op,
                            &val) != 8) { cur = 0; break; }
            auto mit = w.maps().find(mapid ? mapid : p.map_id);
            if (mit == w.maps().end()) { cur = 0; break; }
            size_t n = mit->second.monsters().count_region(
                mt, x0, y0, ww, hh);
            bool cond = (!std::strcmp(op,"==") && n == (size_t)val) ||
                        (!std::strcmp(op,"<")  && n <  (size_t)val) ||
                        (!std::strcmp(op,"<=") && n <= (size_t)val) ||
                        (!std::strcmp(op,">")  && n >  (size_t)val) ||
                        (!std::strcmp(op,">=") && n >= (size_t)val);
            std::printf("[action] %u 307 count region (%d,%d %dx%d) "
                        "type %u = %zu %s %d -> %s\n", p.id, x0, y0, ww,
                        hh, mt, n, op, val, cond ? "true" : "false");
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 308: {  // spawn monster wave (case 0x134 ~219918):
            // "%u %u %d %d %d %d %d %d" = type, mapid, x0, y0, w, h,
            // count, extra(3600, unused here). Up to count*2 tries at
            // random cells in the rect (original tq::RandGet + valid-
            // cell checks).
            uint32_t type_id = 0, mapid = 0; int x0=0, y0=0, ww=0, hh=0;
            int count = 0, extra = 0;
            if (std::sscanf(a->param.c_str(), "%u %u %d %d %d %d %d %d",
                            &type_id, &mapid, &x0, &y0, &ww, &hh,
                            &count, &extra) != 8) { cur = 0; break; }
            GameMap& m = w.get_or_create_map(mapid);
            int spawned = 0;
            for (int i = 0; i < count * 2 && spawned < count; ++i) {
                int nx = x0 + (int)tq_rand((uint32_t)ww);
                int ny = y0 + (int)tq_rand((uint32_t)hh);
                Monster* mo = m.monsters().spawn_one(
                    type_id, (uint16_t)nx, (uint16_t)ny);
                if (!mo) continue;
                ++spawned;
                std::vector<Packet> outs;
                m.monsters().build_spawn_packets(*mo, outs);
                for (Player* other : m.players())
                    if (other->session)
                        for (Packet& op2 : outs) other->session->send(op2);
            }
            std::printf("[action] %u 308 wave type %u map %u: %d/%d "
                        "spawned\n", p.id, type_id, mapid, spawned, count);
            cur = a->id_next;
            break;
        }
        case 311: {  // map weather set (case 0x137 ~220000, 7 rows):
            // "%u %u" = mapid, weather. Original stores the value in the
            // CMap field (+0x10) and broadcasts a map message; we store
            // the runtime weather field (broadcast approximation noted).
            uint32_t mapid = 0, wv = 0;
            if (std::sscanf(a->param.c_str(), "%u %u", &mapid, &wv) != 2) {
                cur = 0; break;
            }
            auto mit = w.maps().find(mapid);
            if (mit == w.maps().end()) { cur = 0; break; }
            mit->second.weather = (int)wv;
            std::printf("[action] %u 311 weather map %u = %u\n",
                        p.id, mapid, wv);
            cur = a->id_next;
            break;
        }
        case 314: {  // user popup (case 0x13a ~220020, 2 rows):
            // original builds a message for the user id (FUN_1400f8490,
            // type 0x1a/255) via CUser slot +0x348 with broadcast flag 1;
            // packet class unidentified - logged and chain continues.
            std::printf("[action] %u 314 popup (approx: continue)\n",
                        p.id);
            cur = a->id_next;
            break;
        }
        case 312: {  // CMsgName broadcast (case 0x138 ~220007):
            // "%u %d %d %s" = mapid,x,y,name. Original: FUN_14037dfb0
            // ctor + FUN_14037e140(msg, 9, name, x) -> CMsgName type
            // 0x3F7 = 1015 wire [tick u4][x u2][y u2][kind u1=9]
            // [string packer], then map vtbl+0x28(x, y, msg) = send to
            // everyone in range (screen effects like 'lottery').
            uint32_t mid = 0; int fx = 0, fy = 0; char nm[64] = {0};
            if (std::sscanf(a->param.c_str(), "%u %d %d %63s",
                            &mid, &fx, &fy, nm) != 4) { cur = 0; break; }
            auto mit = w.maps().find(mid);
            if (mit == w.maps().end()) { cur = 0; break; }
            Packet fxp(1015);
            fxp.write<uint32_t>((uint32_t)std::time(nullptr));
            fxp.write<uint16_t>((uint16_t)fx);
            fxp.write<uint16_t>((uint16_t)fy);
            fxp.write<uint8_t>(9);
            std::string name = nm;
            fxp.write<uint8_t>(1);
            fxp.write<uint8_t>((uint8_t)name.size());
            for (char c : name) fxp.write<uint8_t>((uint8_t)c);
            fxp.finalize();
            w.broadcast_to_screen(mit->second,
                                Position{(uint16_t)fx, (uint16_t)fy},
                                fxp, p.session);
            std::printf("[action] %u 312 msgname 9 '%s' map %u\n",
                        p.id, nm, mid);
            cur = a->id_next;
            break;
        }
        case 509: {  // item upgrade ops (case 0x1fd ~213966):
            // "<op> <position>" — down_lev / down_one_lev / recover_dur
            // on the item at cq_item.position. Level/quality live in
            // the type digits (level=(type%1000)/10, quality=type%10,
            // getters FUN_1400fee00/FUN_1401011d0). Unknown op (the DB
            // also has up_quality/up_lev rows this engine does NOT
            // handle — they log DBERROR) aborts the chain.
            char op[32] = {0}; int pos = 0;
            if (std::sscanf(a->param.c_str(), "%31s %d", op, &pos) != 2) {
                cur = 0; break;
            }
            IDatabase* db = active_db();
            auto items = db->load_player_items(p.id);
            IDatabase::PlayerItemRecord* it = nullptr;
            for (auto& r : items)
                if (r.position == (uint16_t)pos) { it = &r; break; }
            if (!it) { cur = 0; break; }
            bool ok = false;
            uint32_t new_type = it->type, new_amount = it->amount;
            if (!std::strcmp(op, "down_one_lev")) {
                if ((it->type % 1000) / 10 > 0) {
                    new_type = it->type - 10; ok = true;
                } else ok = true;  // already level 0
            } else if (!std::strcmp(op, "down_lev")) {
                new_type = it->type - ((it->type % 1000) / 10) * 10;
                ok = true;
            } else if (!std::strcmp(op, "recover_dur")) {
                // original FUN_14032c310 restores to the itemtype
                // durability limit (cost path skipped)
                new_amount = db->itemtype_amount(it->type);
                ok = true;
            }
            if (!ok) { cur = 0; break; }
            db->update_item(it->id, new_type, new_amount);
            Packet info = build_item_info_1008(it->id, new_type,
                                               new_amount, it->position, 3);
            if (p.session) p.session->send(info);
            std::printf("[action] %u 509 %s pos %d: type %u -> %u\n",
                        p.id, op, pos, it->type, new_type);
            cur = a->id_next;
            break;
        }
        case 510: {  // item attrib check (case 0x1fe ~214014):
            // "<pos> <level|quality|durability|max_dur> <==|<=>|>=> <val>"
            int pos = 0; char attrib[32] = {0}, op[8] = {0};
            int val = 0;
            if (std::sscanf(a->param.c_str(), "%d %31s %7s %d",
                            &pos, attrib, op, &val) != 4) {
                cur = a->id_nextfail; break;
            }
            auto items = active_db()->load_player_items(p.id);
            IDatabase::PlayerItemRecord* it = nullptr;
            for (auto& r : items)
                if (r.position == (uint16_t)pos) { it = &r; break; }
            if (!it) { cur = a->id_nextfail; break; }
            uint32_t max_dur = active_db()->itemtype_amount(it->type);
            uint32_t v;
            if (!std::strcmp(attrib, "level"))
                v = (it->type % 1000) / 10;
            else if (!std::strcmp(attrib, "quality"))
                v = it->type % 10;
            else if (!std::strcmp(attrib, "durability"))
                v = it->amount / 100;
            else if (!std::strcmp(attrib, "max_dur"))
                v = max_dur / 100;
            else { cur = a->id_nextfail; break; }
            bool cond = (!std::strcmp(op,"==") && v == (uint32_t)val) ||
                        (!std::strcmp(op,"<=") && v <= (uint32_t)val) ||
                        (!std::strcmp(op,">=") && v >= (uint32_t)val);
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 506: {  // take N item copies (case 0x1fa ~213915):
            // "<t1> <t2> <num> [sync] [flag]": erase num copies of item
            // type t1 (t2 fallback; real rows always t1==t2) from the
            // inventory. Original FUN_140350360(user,t1,t2,num,...):
            // num<1 logs DBERROR; erase result gates id_next/fail.
            uint32_t t1 = 0, t2 = 0; int num = 0;
            if (std::sscanf(a->param.c_str(), "%u %u %d",
                            &t1, &t2, &num) < 3 || num < 1) {
                cur = 0; break;   // DBERROR path
            }
            auto items = active_db()->load_player_items(p.id);
            int have = 0;
            for (auto& r : items)
                if (r.type == t1 || r.type == t2) ++have;
            bool ok = false;
            if (have >= num) {
                ok = true; int left = num;
                for (auto& r : items) {
                    if (left <= 0) break;
                    if (r.type != t1 && r.type != t2) continue;
                    if (active_db()->delete_item(r.id)) {
                        --left;
                        if (p.session)
                            p.session->send(build_item_status_2077(
                                r.id, 7, r.position, r.amount, r.amount));
                    }
                }
            }
            std::printf("[action] %u 506 take %dx type %u: %s\n",
                        p.id, num, t1, ok ? "taken" : "missing");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 511: {  // equipped weapon check (case 0x1ff ~214092):
            // param empty in all 206 rows: TRUE when a weapon sits in
            // equipment slot 4 (original resolves the item + itemtype).
            auto items = active_db()->load_player_items(p.id);
            bool has = false;
            for (auto& r : items)
                if (r.position == 4) { has = true; break; }
            cur = has ? a->id_next : a->id_nextfail;
            break;
        }
        case 513: {  // transform (case 0x201 ~214137):
            // "<src> <lvl> <dst> <dur>": broadcast CMsgMagicEffect 1105
            // with 0 targets (type=src, level=lvl), then
            // FUN_140172eb0(user,dst,dur,"ACTION:transform!") swaps the
            // lookface to dst. Timed revert not ported (approximation:
            // transform persists until relog).
            int src = 0, lvl = 0, dst = 0, dur = 0;
            if (std::sscanf(a->param.c_str(), "%d %d %d %d",
                            &src, &lvl, &dst, &dur) != 4) {
                cur = 0; break;
            }
            Packet ep = build_magic_effect_1105(p.id, p.id,
                                                (uint16_t)src,
                                                (uint16_t)lvl, {});
            GameMap& m = w.get_or_create_map(p.map_id);
            w.broadcast_to_screen(m, p.pos, ep, nullptr);
            p.lookface = (uint32_t)dst;
            GameMap& m2 = w.get_or_create_map(p.map_id);
            SpawnInfo si; si.id = p.id; si.name = p.name;
            si.x = p.pos.x; si.y = p.pos.y;
            si.lookface = p.lookface;
            Packet sp = build_spawn_10014(si);
            w.broadcast_to_screen(m2, p.pos, sp, nullptr);  // incl self
            std::printf("[action] %u 513 transform lookface %u -> %u\n",
                        p.id, (uint32_t)src, p.lookface);
            cur = a->id_next;
            break;
        }
        case 516: {  // read item field into var (case 0x204 ~214287):
            // "<var> <field> <op> <val> to <x>": var[clamped 0..7] =
            // FUN_14033ea80(user,field,val,op); -1 -> fail. All 128 DB
            // rows are "0 14 == 0 to 7" (gem probe on the equipped
            // weapon); unknown fields read 0 in our item model, stored
            // via the stc(item_id, field) sidecar.
            int vidx = 0; uint32_t field = 0;
            char op[16] = {0}; int val = 0;
            if (std::sscanf(a->param.c_str(), "%d %u %15s %d",
                            &vidx, &field, op, &val) != 4) {
                cur = 0; break;
            }
            if (vidx < 0) vidx = 0; if (vidx > 7) vidx = 7;
            auto items = active_db()->load_player_items(p.id);
            IDatabase::PlayerItemRecord* it = nullptr;
            for (auto& r : items)
                if (r.position == 4) { it = &r; break; }
            if (!it) { cur = a->id_nextfail; break; }
            int64_t v = p.vars.get_stc(it->id, field);
            bool match = (!std::strcmp(op,"==") && v == val) ||
                         (!std::strcmp(op,">")  && v >  val) ||
                         (!std::strcmp(op,">=") && v >= val) ||
                         (!std::strcmp(op,"<")  && v <  val) ||
                         (!std::strcmp(op,"<=") && v <= val);
            if (!match) { cur = a->id_nextfail; break; }
            p.vars.var[vidx] = v;
            cur = a->id_next;
            break;
        }
        case 517: {  // item field ops by type (case 0x205 ~214377):
            // "<type> <field> <set|+=|==|>=> <val> [sync]": find the
            // carried item by TYPE, then set/+=/==/>= on a generic
            // field slot (19 = lock status in the original, gm-logged).
            // Field values live in the stc(item_id, field) sidecar;
            // sync=1 re-broadcasts the item info.
            uint32_t type = 0; int field = 0; int val = 0, sync = 0;
            char op[16] = {0};
            if (std::sscanf(a->param.c_str(), "%u %d %15s %d %d",
                            &type, &field, op, &val, &sync) < 4) {
                cur = 0; break;
            }
            auto items = active_db()->load_player_items(p.id);
            IDatabase::PlayerItemRecord* it = nullptr;
            for (auto& r : items)
                if (r.type == type) { it = &r; break; }
            if (!it) { cur = a->id_nextfail; break; }
            if (!std::strcmp(op, "set")) {
                p.vars.set_stc(it->id, (uint32_t)field, val);
                if (sync && p.session)
                    p.session->send(build_item_info_1008(
                        it->id, it->type, it->amount, it->position, 3));
                std::printf("[action] %u 517 field %u of item %u = %d\n",
                            p.id, (uint32_t)field, it->id, val);
                cur = a->id_next;
            } else if (!std::strcmp(op, "+=")) {
                int64_t nv = p.vars.get_stc(it->id, (uint32_t)field) + val;
                p.vars.set_stc(it->id, (uint32_t)field, nv);
                if (sync && p.session)
                    p.session->send(build_item_info_1008(
                        it->id, it->type, it->amount, it->position, 3));
                std::printf("[action] %u 517 field %u of item %u += %d -> %lld\n",
                            p.id, (uint32_t)field, it->id, val,
                            (long long)nv);
                cur = a->id_next;
            } else if (!std::strcmp(op, "==") || !std::strcmp(op, ">=")) {
                int64_t v = p.vars.get_stc(it->id, (uint32_t)field);
                bool m = !std::strcmp(op,"==") ? v == val : val <= v;
                std::printf("[action] %u 517 field %u of item %u: %lld %s %d -> %d\n",
                            p.id, (uint32_t)field, it->id,
                            (long long)v, op, val, (int)m);
                cur = m ? a->id_next : a->id_nextfail;
            } else {
                cur = 0; break;   // DBERROR path
            }
            break;
        }
        case 120: {  // dialog ack (case 0x78 ~222703):
            // "<action id>" (243 of 259 rows EMPTY): remap the id into
            // the menu list (FUN_14039d300, param 0 also gets an
            // entry), then CMsgDialog 2032 with pic1=pic2=reply=0,
            // face=INDEX, mode=100, EMPTY packer (FUN_1403a65f0:
            // payload 0xF bytes, size = packer 0 + 0xF).
            uint32_t mid = 0;
            std::sscanf(a->param.c_str(), "%u", &mid);
            if (p.session) {
                uint32_t wire_id = 0xFFFF;
                if (p.menu_ids.size() < 20) {
                    p.menu_ids.push_back(mid);
                    wire_id = (uint32_t)p.menu_ids.size() - 1;
                } else {
                    std::printf("[action] %u menu task size overflow id %u\n",
                                p.id, mid);
                }
                Packet pk(MSG_TASK_DIALOG_2032);
                pk.write<uint32_t>((uint32_t)::time(nullptr));
                pk.write<uint16_t>(0);            // pic1
                pk.write<uint16_t>(0);            // pic2
                pk.write<uint16_t>(0);            // reply id
                pk.write<uint8_t>((uint8_t)wire_id); // face = menu index
                pk.write<uint8_t>(100);           // mode
                pk.payload.push_back(0);         // packer: 0 strings
                pk.finalize();
                p.session->send(pk);
            }
            std::printf("[action] %u 120 ack dialog menu slot %u -> %u\n",
                        p.id, (unsigned)(p.menu_ids.size() - 1), mid);
            cur = a->id_next;
            break;
        }
        case 150: {  // DynaNpc data ops (old-engine case 0x96,
            // MsgServer.c ~225870): "<idx> <attr> <op> <val>" on the
            // chain-context dyna record. All 132 DB rows use "data".
            // attr data: == < <= > >= += set on dataN (FUN_1400b4230);
            // datastr: ==/set/resetall (0 rows); time/day ops (0 rows)
            // log + fail. Writes persist immediately.
            char attr[16]={0}, op[16]={0}, val[64]={0};
            int idx = 0;
            int toks = std::sscanf(a->param.c_str(),
                                   "%d %15s %15s %63s",
                                   &idx, attr, op, val);
            if (toks < 4) { cur = a->id_nextfail; break; }
            uint32_t nid = p.last_dyna_id ? p.last_dyna_id
                                          : p.last_npc_id;
            auto* r = DynaNpcSystem::instance().find(nid);
            if (!r || idx < 0 || idx > 3) {
                std::printf("[action] %u 150 no dyna %u / bad idx %d\n",
                            p.id, nid, idx);
                cur = a->id_nextfail; break;
            }
            int32_t* slot = idx == 0 ? &r->data0
                        : idx == 1 ? &r->data1
                        : idx == 2 ? &r->data2 : &r->data3;
            bool cond = false;
            bool ok = true;
            if (!strcasecmp(attr, "data")) {
                int64_t v = std::atoll(val);
                if      (!std::strcmp(op,"==")) cond = *slot == v;
                else if (!std::strcmp(op,"<"))  cond = *slot <  v;
                else if (!std::strcmp(op,"<=")) cond = *slot <= v;
                else if (!std::strcmp(op,">"))  cond = *slot >  v;
                else if (!std::strcmp(op,">=")) cond = *slot >= v;
                else if (!std::strcmp(op,"+=")) { *slot = (int32_t)(*slot + v); }
                else if (!std::strcmp(op,"set")){ *slot = (int32_t)v; }
                else { std::printf("[action] %u 150 bad op %s\n", p.id, op); ok = false; }
            } else if (!strcasecmp(attr, "datastr")) {
                if (idx != 0) { ok = false; }
                else if (!std::strcmp(op,"==")) { cond = !strcasecmp(r->datastr.c_str(), val); }
                else if (!std::strcmp(op,"set")) { r->datastr = val; }
                else if (!std::strcmp(op,"resetall")) { r->datastr.clear(); }
                else ok = false;
            } else {
                std::printf("[action] %u 150 unsupported attr %s\n",
                            p.id, attr);
                ok = false;
            }
            if (!ok) { cur = a->id_nextfail; break; }
            bool is_write = !std::strcmp(op,"+=") || !std::strcmp(op,"set") ||
                            !std::strcmp(op,"resetall");
            if (is_write) {
                DynaNpcSystem::instance().save(*active_db(), *r);
                cur = a->id_next;
            } else {
                cur = cond ? a->id_next : a->id_nextfail;
            }
            break;
        }
        case 201: {  // DynaNpc var ops (case 0xc9 ~218033):
            // "<var> <op> <value> <npcid> [flag]"; npcid 0 = chain
            // context. vars: data0..data3, datastr ("null"=empty),
            // ownerid, ownertype. Writes persist to cq_dynanpc
            // immediately (original keeps dirty flags + save timer).
            std::string ps = subst_templates(a->param, p.id, p.name,
                                             p.map_id, p.pos.x, p.pos.y,
                                             p.level, npc_id, npc_x, npc_y);
            char var[64]={0}, op[16]={0}, val[256]={0};
            uint32_t nid = 0;
            int toks = std::sscanf(ps.c_str(), "%63s %15s %255s %u",
                                   var, op, val, &nid);
            if (toks < 3) { cur = a->id_nextfail; break; }
            if (nid == 0) nid = p.last_dyna_id ? p.last_dyna_id
                                               : p.last_npc_id;
            auto* r = DynaNpcSystem::instance().find(nid);
            if (!r) {
                std::printf("[action] %u 201 can't find npc %u\n",
                            p.id, nid);
                cur = a->id_nextfail; break;
            }
            bool is_str = !std::strcmp(var, "datastr");
            std::string sval = val;
            if (sval == "null") sval.clear();
            auto int_slot = [&]() -> int32_t* {
                if (!std::strcmp(var,"data0")) return &r->data0;
                if (!std::strcmp(var,"data1")) return &r->data1;
                if (!std::strcmp(var,"data2")) return &r->data2;
                if (!std::strcmp(var,"data3")) return &r->data3;
                if (!std::strcmp(var,"ownerid"))
                    return (int32_t*)&r->ownerid;
                if (!std::strcmp(var,"ownertype"))
                    return (int32_t*)&r->ownertype;
                return nullptr;
            };
            bool ok = false, cond = false;
            if (is_str) {
                if (!std::strcmp(op,"=")) { r->datastr = sval; ok = true; }
                else if (!std::strcmp(op,"==")) { cond = !strcasecmp(r->datastr.c_str(), sval.c_str()); ok = true; }
            } else {
                int32_t* slot = int_slot();
                if (slot) {
                    int64_t v = std::atoll(val);
                    if (!std::strcmp(op,"="))  { *slot = (int32_t)v; ok = true; }
                    else if (!std::strcmp(op,"==")) { cond = *slot == v; ok = true; }
                    else if (!std::strcmp(op,"!=")) { cond = *slot != v; ok = true; }
                    else if (!std::strcmp(op,"+=")) { *slot = (int32_t)(*slot + v); ok = true; }
                    else if (!std::strcmp(op,"-=")) { *slot = (int32_t)(*slot - v); ok = true; }
                    else if (!std::strcmp(op,">=")) { cond = *slot >= v; ok = true; }
                    else if (!std::strcmp(op,"<=")) { cond = *slot <= v; ok = true; }
                    else if (!std::strcmp(op,">"))  { cond = *slot >  v; ok = true; }
                    else if (!std::strcmp(op,"<"))  { cond = *slot <  v; ok = true; }
                }
            }
            if (!ok) { cur = a->id_nextfail; break; }
            if (!std::strcmp(op,"=") || !std::strcmp(op,"+=") ||
                !std::strcmp(op,"-=")) {
                DynaNpcSystem::instance().save(*active_db(), *r);
                cur = a->id_next;
            } else {
                cur = cond ? a->id_next : a->id_nextfail;
            }
            break;
        }
        case 301: {  // convert context NPC into a DynaNpc
            // (case 0x12d ~219199): "%u %d %d" = lookface,x,y.
            // Original converts the action's npc object and broadcasts
            // CMsgPlayer 10014 to the map (FUN_1402bda30).
            uint32_t lookface = 0; int dx = 0, dy = 0;
            if (std::sscanf(a->param.c_str(), "%u %d %d",
                            &lookface, &dx, &dy) != 3) {
                cur = a->id_nextfail; break;
            }
            const NpcDef* npc = NpcSystem::instance().find(p.last_npc_id);
            if (!npc) { cur = a->id_nextfail; break; }
            IDatabase::DynaNpcRecord r;
            r.ownerid = p.id; r.ownertype = 1;
            r.name = npc->name; r.lookface = lookface;
            r.mapid = p.map_id; r.cellx = (uint16_t)dx; r.celly = (uint16_t)dy;
            r.task0=npc->task0; r.task1=npc->task1; r.task2=npc->task2;
            r.task3=npc->task3; r.task4=npc->task4; r.task5=npc->task5;
            r.task6=npc->task6; r.task7=npc->task7;
            uint32_t nid = DynaNpcSystem::instance().create(*active_db(), r);
            std::printf("[action] %u 301 dyna create id=%u lf=%u\n",
                        p.id, nid, lookface);
            if (!nid) { cur = a->id_nextfail; break; }
            p.last_dyna_id = nid;
            Packet sp = DynaNpcSystem::instance().spawn_packet(
                *DynaNpcSystem::instance().find(nid));
            GameMap& m = w.get_or_create_map(p.map_id);
            for (Player* other : m.players())
                if (other->session) other->session->send(sp);
            cur = a->id_next;
            break;
        }
        case 303: {  // SYSTEM/ALLUSERS broadcast, channel 2005 white
            // (case 0x12f ~219326: CMsgTalk ctor FUN_14015b240,
            // Create("SYSTEM","ALLUSERS",param) -> mapgroup broadcast;
            // local_848=0x7d5=2005 channel, local_850=0xffffff color)
            std::string msg = subst_templates(a->param, p.id, p.name,
                                             p.map_id, p.pos.x, p.pos.y,
                                             p.level, npc_id, npc_x, npc_y);
            Packet sys = build_talk_1004("SYSTEM", "ALLUSERS", msg,
                                         "", 0xFFFFFF, 2005, 0, 0, 0, 0);
            for (auto& [mid, m] : w.maps()) {
                (void)mid;
                for (Player* other : m.players())
                    if (other->session) other->session->send(sys);
            }
            std::printf("[action] %u 303 broadcast: %s\n",
                        p.id, msg.c_str());
            cur = a->id_next;
            break;
        }
        case 304: {  // runtime monster spawn (case 0x130 ~219345):
            // "%u %u %d %d" = monstertype, mapid, x, y. Original looks
            // up the map record, spawns a CMonster at the cell and adds
            // it to the map group; failure aborts the chain (no
            // id_nextfail branch in the decompile).
            uint32_t type_id = 0, map_id = 0; int sx = 0, sy = 0;
            if (std::sscanf(a->param.c_str(), "%u %u %d %d",
                            &type_id, &map_id, &sx, &sy) != 4) {
                cur = 0; break;
            }
            GameMap& m = w.get_or_create_map(map_id);
            Monster* mo = m.monsters().spawn_one(type_id,
                                                 (uint16_t)sx, (uint16_t)sy);
            if (!mo) { cur = 0; break; }
            std::printf("[action] %u 304 spawn type %u id %u at "
                        "(%u,%u) map %u\n", p.id, type_id, mo->id,
                        mo->x, mo->y, map_id);
            // original monster enter-screen pair: 10014 + 10010/134
            std::vector<Packet> outs;
            m.monsters().build_spawn_packets(*mo, outs);
            for (Player* other : m.players())
                if (other->session)
                    for (Packet& op : outs) other->session->send(op);
            cur = a->id_next;
            break;
        }
        case 306: {  // MAP_ATTRIB ops (case 0x132 ~219390):
            // "<var> <op> <value> <mapid>"; mapid 0/missing = current
            // map. Generic named int attrib on the map record
            // (synid/res_lev/portal0_x/mapdoc/status/type...); the
            // original resolves the map record and reads/writes the
            // attrib by name, e.g. "synid = x" and "synid == v".
            char var[64]={0}, op[16]={0};
            int64_t val = 0; uint32_t mid = 0;
            int toks = std::sscanf(a->param.c_str(), "%63s %15s %lld %u",
                                   var, op, &val, &mid);
            if (toks < 3) { cur = 0; break; }
            if (mid == 0) mid = p.map_id;
            GameMap& m = w.get_or_create_map(mid);
            bool cond = false, is_set = false;
            if (!std::strcmp(var, "mapuser")) {
                int64_t n = (int64_t)m.players().size();
                if (!std::strcmp(op,"==")) cond = n == val;
                else if (!std::strcmp(op,"<=")) cond = n <= val;
                else if (!std::strcmp(op,">=")) cond = n >= val;
            } else {
                auto it = m.attribs.find(var);
                int64_t cur_v = it != m.attribs.end() ? it->second : 0;
                if (!std::strcmp(op,"=")) { m.attribs[var] = val; is_set = true; }
                else if (!std::strcmp(op,"==")) cond = cur_v == val;
                else if (!std::strcmp(op,"!=")) cond = cur_v != val;
                else if (!std::strcmp(op,">=")) cond = cur_v >= val;
                else if (!std::strcmp(op,"<=")) cond = cur_v <= val;
                else if (!std::strcmp(op,">"))  cond = cur_v >  val;
                else if (!std::strcmp(op,"<"))  cond = cur_v <  val;
            }
            cur = is_set ? a->id_next
                         : (cond ? a->id_next : a->id_nextfail);
            break;
        }
        case 302: {  // "map_user|alive_user <op> <count>" (case 0x12e
            // ~219235: iterates map users comparing vtbl+0x168 map id)
            std::string ps = a->param;
            char var[32]={0}, op[8]={0}; long long cnt = 0;
            if (std::sscanf(ps.c_str(), "%31s %7s %lld",
                            var, op, &cnt) != 3) {
                cur = a->id_nextfail; break;
            }
            GameMap& m = w.get_or_create_map(p.map_id);
            long long n = 0;
            for (Player* other : m.players()) {
                if (!std::strcmp(var,"alive_user") && other->hp <= 0)
                    continue;
                ++n;
            }
            bool cond = (!std::strcmp(op,"==") && n == cnt) ||
                        (!std::strcmp(op,"<=") && n <= cnt) ||
                        (!std::strcmp(op,">=") && n >= cnt);
            std::printf("[action] %u 302 %s %lld (have %lld)\n",
                        p.id, var, cnt, n);
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 127: {  // raw SQL execute (case 0x7f verified: the
            // param string goes straight to InstanceGet()->ExecuteSQL;
            // bad SQL -> DBERROR log "ACTION %u: bad SQL" + fail branch.
            // DB rows are log INSERTs ("INSERT INTO cq_log set user_id=...")
            bool ok = active_db()->execute_sql(a->param);
            std::printf("[action] %u sql127 '%s' -> %s\n", p.id,
                        a->param.c_str(), ok ? "ok" : "fail");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1080: {  // "timestamp(%u,%u) %s %d" (780 rows, ALL set) —
            // VERIFIED new-engine case 0x46 (gameaction.c ~15660): ops
            // "+=" stored+=V | "set" stored=V (V==0 -> NOW) | ">="
            // (V|now) <= stored | ">" (V|now) < stored | "==" stored ==
            // (V|now); sscanf != 4 or unknown op -> DBERROR + fail.
            uint32_t ta = 0, tb = 0;
            char op[16] = {0};
            int32_t vv = 0;
            int n = std::sscanf(a->param.c_str(),
                                "timestamp(%u,%u) %15s %d",
                                &ta, &tb, op, &vv);
            bool ok = false;
            if (n == 4) {
                int64_t key = UserVars::stc_key(ta, tb);
                int64_t cmp = vv ? (int64_t)vv
                                 : (int64_t)::time(nullptr);
                auto it = p.vars.timestamps.find(key);
                int64_t stored = (it != p.vars.timestamps.end())
                    ? it->second : 0;
                if (std::strcmp(op, "+=") == 0) {
                    p.vars.timestamps[key] = stored + vv; ok = true;
                } else if (std::strcmp(op, "set") == 0) {
                    p.vars.timestamps[key] = cmp; ok = true;
                } else if (std::strcmp(op, ">=") == 0) {
                    ok = cmp <= stored;
                } else if (std::strcmp(op, ">") == 0) {
                    ok = cmp < stored;
                } else if (std::strcmp(op, "==") == 0) {
                    ok = stored == cmp;
                }
            }
            std::printf("[action] %u timestamp(%u,%u) %s %d -> %s\n",
                        p.id, ta, tb, op, vv, ok ? "true" : "false");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1026: {  // lookface "status digit" gate (new-engine case
            // 0x14, gameaction.c): vtable+0x50 = FUN_1401bf470 =
            // (lookface % 10000) / 1000 on user field +0xeac (lookface,
            // cross-verified by 244906/255307 merge math). Pass iff == 1.
            int digit = (p.lookface % 10000u) / 1000u;
            std::printf("[action] %u 1026 look-digit %d\n", p.id, digit);
            cur = (digit == 1) ? a->id_next : a->id_nextfail;
            break;
        }
        case 1064: {  // "var(%d) <op> <int64>" arithmetic (new-engine case
            // 0x37): ops += -= *= /= mod= &= |= ^= on the SAME var[0..7]
            // store as 1060/1061 (FUN_1401644d0 get / FUN_140164520 set,
            // user+0x2f0+idx*8, idx>7 logged+no-op). Bad parse/unknown op
            // -> shared DBERROR path (LAB_14013a784) = fail branch.
            int idx = 0; char op[16] = {0}; long long vv = 0;
            int n = std::sscanf(a->param.c_str(),
                                "var(%d) %15s %lld", &idx, op, &vv);
            bool ok = (n == 3);
            if (ok && idx >= 0 && idx < 8) {
                int64_t old = p.vars.var[idx];
                if      (!std::strcmp(op,"+="))  p.vars.var[idx] = old + vv;
                else if (!std::strcmp(op,"-="))  p.vars.var[idx] = old - vv;
                else if (!std::strcmp(op,"*="))  p.vars.var[idx] = old * vv;
                else if (!std::strcmp(op,"/="))  p.vars.var[idx] = vv ? old / vv : old;
                else if (!std::strcmp(op,"mod="))p.vars.var[idx] = vv ? old % vv : old;
                else if (!std::strcmp(op,"&="))  p.vars.var[idx] = old & vv;
                else if (!std::strcmp(op,"|="))  p.vars.var[idx] = old | vv;
                else if (!std::strcmp(op,"^="))  p.vars.var[idx] = old ^ vv;
                else ok = false;  // unknown op -> fail
            } else if (n == 3) {
                // idx out of range: original FUNs log + no-op, case still
                // returns 1 -> id_next
            }
            std::printf("[action] %u 1064 var(%d) %s %lld -> %s (now %lld)\n",
                        p.id, idx, op, vv, ok ? "true" : "false",
                        (idx >= 0 && idx < 8) ? (long long)p.vars.var[idx] : -99LL);
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1081: {  // "interval(%u,%u,%u) <op> <int>" (new-engine case
            // 0x47): reads stc(N,M) (SAME store as 1073/1074; getter
            // FUN_1403863f0 -> map user+0xb0 for N<3 / +0x40 else) as a
            // TIMESTAMP; 0 -> fail. K!=0 -> DAY mode: both sides
            // (t + TZ offset)/86400 (matches original Bias*-60 math);
            // ops >= > == only; sscanf != 5 -> DBERROR + fail.
            uint32_t ta = 0, tb = 0, mode = 0;
            char op[16] = {0}; int32_t vv = 0;
            int n = std::sscanf(a->param.c_str(),
                                "interval(%u,%u,%u) %15s %d",
                                &ta, &tb, &mode, op, &vv);
            bool ok = false;
            if (n == 5) {
                int64_t ts = p.vars.get_stc(ta, tb);
                if (ts != 0) {
                    int64_t now = (int64_t)::time(nullptr);
                    if (mode != 0) {
                        auto lday = [](int64_t t) -> int64_t {
                            std::tm lt{};
                            time_t tt = (time_t)t;
                            localtime_r(&tt, &lt);
                            return (t + lt.tm_gmtoff) / 86400;
                        };
                        int64_t ts_d = lday(ts), now_d = lday(now);
                        if      (!std::strcmp(op,">=")) ok = ts_d + vv <= now_d;
                        else if (!std::strcmp(op,">"))  ok = ts_d + vv <  now_d;
                        else if (!std::strcmp(op,"==")) ok = now_d == ts_d + vv;
                    } else {
                        if      (!std::strcmp(op,">=")) ok = ts + vv <= now;
                        else if (!std::strcmp(op,">"))  ok = ts + vv <  now;
                        else if (!std::strcmp(op,"==")) ok = now == ts + vv;
                    }
                }
            }
            std::printf("[action] %u 1081 interval(%u,%u,%u) %s %d -> %s\n",
                        p.id, ta, tb, mode, op, vv, ok ? "true" : "false");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 1004: {  // SetRecordPos (new engine case 0x03,
            // FUN_14012a6e0 line ~13391): "%u %d %d" -> map,x,y sets
            // the recall/record point (original CUser::SetRecordPos
            // FUN_1401732e0 validates the map through the map-group
            // manager and the cell, then stores user+0xe78; we persist
            // to cq_user recordmap_id/recordx/recordy). 88 rows, many
            // with %user_map_id templates.
            std::string ps = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            uint32_t map = 0; int32_t x = 0, y = 0;
            bool ok = std::sscanf(ps.c_str(), "%u %d %d",
                                  &map, &x, &y) == 3;
            IDatabase* db = active_db();
            if (ok) ok = (!db || db->map_exists(map));
            if (ok) {
                p.record_map = map;
                p.record_pos = Position{(uint32_t)x, (uint32_t)y};
                if (db) {
                    UserRecord r;
                    r.id = p.id; r.name = p.name; r.level = p.level;
                    r.recordmap_id = map; r.recordx = (uint32_t)x;
                    r.recordy = (uint32_t)y;
                    db->save_user(r);
                }
                std::printf("[action] %u 1004 record pos -> map %u (%d,%d)\n",
                            p.id, map, x, y);
            }
            cur = ok ? a->id_next : a->id_nextfail;
        } break;
        case 1070: {  // Relive / FlyMap (new engine case 0x3c,
            // FUN_1401ba200 = CUser::Relive core): "%u %d %d" ->
            // map,x,y. Original clears transform/bless states, leaves
            // the old screen, re-enters at the target, calls the SAME
            // SetRecordPos core (FUN_1401732e0) and resends the item
            // snapshot (FUN_1401b93b0(user,3)). 68 rows (city revive
            // spots). Red-name item-drop tail skipped (subset).
            std::string ps = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            uint32_t map = 0; int32_t x = 0, y = 0;
            bool ok = std::sscanf(ps.c_str(), "%u %d %d",
                                  &map, &x, &y) == 3;
            IDatabase* db = active_db();
            if (ok) ok = (!db || db->map_exists(map));
            if (ok) {
                // leave the old map's player list, join the new one
                // (the original broadcast would MISS the mover without
                // this re-registration)
                if (p.map_id != map) {
                    auto oldit = w.maps().find(p.map_id);
                    if (oldit != w.maps().end())
                        oldit->second.players().remove(&p);
                }
                GameMap& nm = w.get_or_create_map(map);
                nm.players().remove(&p);          // no double-add
                nm.players().push_back(&p);
                p.map_id = map;
                p.pos = Position{(uint32_t)x, (uint32_t)y};
                p.alive = true;
                p.record_map = map;
                p.record_pos = p.pos;
                if (db) {
                    UserRecord r;
                    r.id = p.id; r.name = p.name; r.level = p.level;
                    r.recordmap_id = map; r.recordx = (uint32_t)x;
                    r.recordy = (uint32_t)y;
                    db->save_user(r);
                }
                // respawn broadcast (including self) + fresh monsters
                SpawnInfo si;
                si.id = p.id; si.name = p.name;
                si.x = p.pos.x; si.y = p.pos.y;
                w.broadcast_to_screen(nm, p.pos,
                    build_spawn_10014(si), nullptr);
                w.send_monsters_in_screen(p, nm);
                // item snapshot resend (original mode 3)
                if (p.session && db) {
                    for (const auto& it : db->load_player_items(p.id)) {
                        p.session->send(build_item_info_1008(
                            it.id, it.type, it.amount, it.position, 1));
                    }
                }
                std::printf("[action] %u 1070 relive -> map %u (%d,%d)\n",
                            p.id, map, x, y);
            }
            cur = ok ? a->id_next : a->id_nextfail;
        } break;
        case 1073: {  // stc condition: "stc(41,12) == 112" (5,460 rows)
            std::string s = a->param;
            bool daily = s.rfind("stc_daily(", 0) == 0;
            uint32_t sa = 0, sb = 0;
            size_t open = s.find('(');
            std::sscanf(s.c_str() + (open == std::string::npos ? 0 : open),
                        "(%u,%u", &sa, &sb);
            size_t pos; std::string op;
            int64_t rhs = 0;
            bool ok = find_op(s, pos, op);
            if (ok) to_i64(s.substr(pos + op.size()), rhs);
            int64_t val = daily ? (p.vars.stc_daily.count(UserVars::stc_key(sa, sb))
                                  ? p.vars.stc_daily[UserVars::stc_key(sa, sb)] : 0)
                                : p.vars.get_stc(sa, sb);
            bool cond = ok && ((op == "==" && val == rhs) ||
                              (op == "!=" && val != rhs) ||
                              (op == ">=" && val >= rhs) ||
                              (op == "<=" && val <= rhs) ||
                              (op == ">"  && val >  rhs) ||
                              (op == "<"  && val <  rhs));
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 1074: {  // stc effect: "stc(19,0) += 1 1" (2,996 rows);
            // first number after the operator is the operand, the
            // trailing flag is ignored (persist hint in the original).
            std::string s = a->param;
            bool daily = s.rfind("stc_daily(", 0) == 0;
            uint32_t sa = 0, sb = 0;
            size_t open = s.find('(');
            std::sscanf(s.c_str() + (open == std::string::npos ? 0 : open),
                        "(%u,%u", &sa, &sb);
            size_t pplus = s.find("+=");
            size_t pminus = s.find("-=");
            size_t peq = s.find("=");
            int64_t val = 0;
            int64_t& slot = daily
                ? p.vars.stc_daily[UserVars::stc_key(sa, sb)]
                : p.vars.stc[UserVars::stc_key(sa, sb)];
            if (pplus != std::string::npos) {
                to_i64(s.substr(pplus + 2), val); slot += val;
            } else if (pminus != std::string::npos && pminus < peq) {
                to_i64(s.substr(pminus + 2), val); slot -= val;
            } else if (peq != std::string::npos &&
                       (peq == 0 || s[peq-1] != '<' && s[peq-1] != '>')) {
                to_i64(s.substr(peq + 1), val); slot = val;
            }
            std::printf("[action] %u stc(%u,%u)%s -> %lld\n", p.id, sa, sb,
                        daily ? "_daily" : "", (long long)slot);
            cur = a->id_next;
            break;
        }
        case 1057: {  // PER-TASK record op (4,747 rows): "complete set 2"
                     // / "data1 += 1" / "data1 == 1" — data column =
                     // cq_task id. Original: task-module record
                     // (complete u16 / data1..7 / overtime) gated by an
                     // existence check; a compare on a missing record
                     // fails. Deviation: set/+= auto-vivify the record so
                     // standalone chains work without the (not yet
                     // ported) task-accept flow.
            std::istringstream is(a->param);
            std::string name, op, val;
            is >> name >> op >> val;
            val = subst_templates(val, p.id, p.name, p.map_id, p.pos.x,
                                  p.pos.y, p.level, npc_id, npc_x, npc_y);
            int64_t v = 0; to_i64(val, v);
            const uint32_t task_id = a->data;
            bool have_field = (name == "complete" || name == "overtime")
                || (name.size() > 4 && name.compare(0, 4, "data") == 0);
            if (!have_field) { cur = a->id_nextfail; break; }
            if (op == "set" || op == "+=" || op == "-=") {
                TaskRecord* tr = p.vars.task(task_id);
                int idx = name.size() > 4 ? std::atoi(name.c_str() + 4) : 0;
                int32_t dv = (op == "-=") ? (int32_t)-v : (int32_t)v;
                if (name == "complete") tr->complete = (uint16_t)v;
                else if (name == "overtime") tr->overtime = (uint32_t)v;
                else if (op == "set") tr->set_data(idx, (int32_t)v);
                else tr->add_data(idx, dv);
                cur = a->id_next;          // effects follow id_next
            } else {                        // condition on the record
                const TaskRecord* tr = p.vars.task_if_exists(task_id);
                if (!tr) { cur = a->id_nextfail; break; }
                int64_t lhs = 0;
                if (name == "complete") lhs = tr->complete;   // u16 mask
                else if (name == "overtime") lhs = tr->overtime;
                else lhs = tr->get_data(std::atoi(name.c_str() + 4));
                bool cond = (op == "==" && lhs == v) || (op == "!=" && lhs != v)
                         || (op == ">=" && lhs >= v) || (op == "<=" && lhs <= v)
                         || (op == ">"  && lhs >  v) || (op == "<"  && lhs <  v);
                cur = cond ? a->id_next : a->id_nextfail;
            }
            break;
        }
        case 1058: {  // task TIME ops (227 rows); data column = cq_task
                     // id; field data7 = accept time (unix secs).
                     // Original 1058 handler: "time set 0" -> data7=now
                     // (vtbl+0x40); "time >= v" -> now-v <= accept_time
                     // (accepted within the last v secs); "interval(0)
                     // op v" -> elapsed = now - data7 compared directly.
                     // interval(1) approximated as interval(0).
            std::istringstream is(a->param);
            std::string name, op, val;
            is >> name >> op >> val;
            int64_t v = 0; to_i64(val, v);
            const uint32_t task_id = a->data;
            int64_t now = (int64_t)std::time(nullptr);
            if (name == "time" && op == "set") {
                TaskRecord* tr = p.vars.task(task_id);
                tr->touch_accept();
                cur = a->id_next;
                break;
            }
            const TaskRecord* tr = p.vars.task_if_exists(task_id);
            if (!tr) { cur = a->id_nextfail; break; }
            bool cond = false;
            if (name == "time") {
                int64_t at = tr->accept_time();
                cond = (op == ">=" && now - v <= at)
                    || (op == "<=" && at <= now - v)
                    || (op == "==" && at == now - v)
                    || (op == ">"  && now - v < at)
                    || (op == "<"  && at < now - v);
            } else if (name == "interval(0)" || name == "interval(1)") {
                int64_t elapsed = now - tr->accept_time();
                cond = (op == ">=" && elapsed >= v) || (op == ">" && elapsed > v)
                    || (op == "==" && elapsed == v) || (op == "<" && elapsed < v);
            }
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 1060: {  // int64 var condition: "var(N) > V" (ops in the
                     // original: > >= ==; FUN_1401644d0 getter)
            int idx = -1; char op[8] = {0}; int64_t v = 0;
            std::sscanf(a->param.c_str(), "var(%d) %7s %lld",
                        &idx, op, &v);
            int64_t cur_v = (idx >= 0 && idx < 8) ? p.vars.var[idx] : 0;
            bool cond = (idx >= 0 && idx < 8)
                && ((op[0] == '>' && (op[1] == 0 ? cur_v > v : cur_v >= v))
                    || (std::strcmp(op, "==") == 0 && cur_v == v));
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 1061: {  // int64 var set: "var(5) set 0" (2,328 rows; value
                     // may be a substituted template like %user_map_x).
                     // Original 1061 = FUN_140164520 SetVar(idx<=7).
            std::string s = subst_templates(a->param, p.id, p.name, p.map_id,
                                            p.pos.x, p.pos.y, p.level,
                                            npc_id, npc_x, npc_y);
            int idx = -1; char op[8] = {0}; int64_t v = 0;
            std::sscanf(s.c_str(), "var(%d) %7s %lld", &idx, op, &v);
            if (idx >= 0 && idx < 8 && std::strcmp(op, "set") == 0)
                p.vars.var[idx] = v;
            cur = a->id_next;
            break;
        }
        case 1062: {  // string var compare: "var(N) == <token>"
                     // (original: stricmp vs svar, FUN_140164570)
            int idx = -1; char op[8] = {0}; char tok[128] = {0};
            std::sscanf(a->param.c_str(), "var(%d) %7s %127s",
                        &idx, op, tok);
            bool cond = idx >= 0 && idx < 8 && std::strcmp(op, "==") == 0
                && !p.vars.svar[idx].empty()
                && p.vars.svar[idx].size() == strlen(tok)
                && ::strncasecmp(p.vars.svar[idx].c_str(), tok,
                                    strlen(tok)) == 0;
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 1063: {  // string var set: "var(N) set <token>" (token may
                     // be a substituted template; FUN_1401645e0 setter)
            std::string s = subst_templates(a->param, p.id, p.name, p.map_id,
                                            p.pos.x, p.pos.y, p.level,
                                            npc_id, npc_x, npc_y);
            int idx = -1; char op[8] = {0}; char tok[128] = {0};
            std::sscanf(s.c_str(), "var(%d) %7s %127s", &idx, op, tok);
            if (idx >= 0 && idx < 8 && std::strcmp(op, "set") == 0)
                p.vars.svar[idx] = tok;
            cur = a->id_next;
            break;
        }
        case 1065: {  // equipped-item check: "P S" (1,175 rows) — item
                     // at position P has sort S (sort = itemtype/1000
                     // % 1000, FUN_1400fed80 on the original item record)
            int pos = 0, sort = 0;
            std::sscanf(a->param.c_str(), "%d %d", &pos, &sort);
            bool cond = false;
            for (const auto& it : active_db()->load_player_items(p.id)) {
                if (it.position == (uint16_t)pos) {
                    cond = ((int64_t)(it.type % 1000000) / 1000) == sort;
                    break;
                }
            }
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 1002: {  // full restore: "life"/"mana" -> max (original
                     // 1002 handler: SetAttrib(0/2, GetMax, 1))
            if (!strncasecmp(a->param.c_str(), "life", 4)) {
                p.hp = p.max_hp;
                if (p.session) {
                    Packet hp = build_user_attrib_10017(p.id,
                        {{ATTRIB_LIFE, p.hp}});
                    p.session->send(hp);
                }
            }   // "mana": no mana tracker yet — no-op success
            cur = a->id_next;
            break;
        }
        case 2004:  // (falls through, alias of 2003)
        case 2003: {  // fully %-substituted condition: "%user_map_id < 1961"
                     // (3,995 rows)
            std::string s = subst_templates(a->param, p.id, p.name, p.map_id,
                                            p.pos.x, p.pos.y, p.level,
                                            npc_id, npc_x, npc_y);
            bool cond = eval_substituted_expr(s);
            cur = cond ? a->id_next : a->id_nextfail;
            break;
        }
        case 2008: {  // 0x7d8: named-entity count check (guild-war
            // family). sscanf "%u %s %s %s %d" — (mapid, mode, name,
            // op, n). mode "name": alive monsters named X on the map;
            // mode "gen_id": alive monsters of generator id X. The
            // original supports ONLY "<" and "==" comparisons; any
            // other mode string returns false outright.
            std::string prm = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            unsigned mapid = 0; char mode[16]={0}, name[256]={0}, op[8]={0};
            int n = 0;
            bool ok = false;
            if (sscanf(prm.c_str(), "%u %15s %255s %7s %d",
                       &mapid, mode, name, op, &n) == 5) {
                if (strcasecmp(mode, "name") == 0 ||
                    strcasecmp(mode, "gen_id") == 0) {
                    uint32_t gid = (strcasecmp(mode,"gen_id")==0)
                                   ? strtoul(name, nullptr, 10) : 0;
                    long cnt = -1;
                    for (auto& [mid, mp] : w.maps()) {
                        if (mid != mapid) continue;
                        cnt = (long)mp.monsters().count_named(name, gid);
                        break;
                    }
                    if (cnt >= 0) {
                        if (strcasecmp(op, "<") == 0) ok = cnt < n;
                        else if (strcasecmp(op, "==") == 0) ok = cnt == n;
                    }
                    std::printf("[action] %u entity count map=%u %s "
                                "'%s' cnt=%ld %s %d -> %s\n", p.id,
                                mapid, mode, name, cnt, op, n,
                                ok ? "true" : "false");
                }
            }
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 2013: {  // 0x7dd (CORRECTED v51): award an item to the
            // users of a map. sscanf "%u %u %d" = (mapid, itemtype,
            // count); count -1 means ALL users (0xffff). v50 first
            // read this as ground-item removal — WRONG: the iterator
            // (FUN_140087650/1402ac340) walks USERS (proved by 2012's
            // "ACTION_EVENT_MAPUSER_CHGMAP" user log + the mail-
            // attachment award FUN_140145f60 call site), match is the
            // USER's map id, and FUN_140145f60(item_sys, itemtype,
            // user, 0) awards one item per user, count-limited.
            // Returns FALSE only when sscanf != 3 (matches original).
            std::string prm = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            unsigned mapid = 0, itype = 0; int cnt = 0;
            bool ok = sscanf(prm.c_str(), "%u %u %d",
                            &mapid, &itype, &cnt) == 3;
            int awarded = 0;
            if (ok) {
                if (cnt == -1) cnt = 0xffff;
                for (auto& [mid, mp] : w.maps()) {
                    if (mid != mapid) continue;
                    std::vector<Player*> targets;
                    for (Player* u : mp.players())
                        if (awarded + (int)targets.size() < cnt)
                            targets.push_back(u);
                    for (Player* u : targets) {
                        uint32_t nid = active_db()->insert_item(
                            u->id, itype, 1);
                        if (nid != 0 && u->session) {
                            u->session->send(build_item_info_1008(
                                nid, itype, 1, 0, 1));
                            u->session->send(build_item_status_2077(
                                nid, 8, 0, 1, 1));
                        }
                        ++awarded;
                    }
                    break;
                }
                std::printf("[action] %u award type=%u on map %u: "
                            "%d users\n", p.id, itype, mapid, awarded);
            }
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
                case 2012: {  // 0x7dc ACTION_EVENT_MAPUSER_CHGMAP: mass
            // teleport. sscanf "%u %u %d %d" = (srcmap, destmap, x, y):
            // every user on srcmap flies to destmap at (x,y). Returns
            // FALSE only on malformed param; a missing src map is a
            // no-op TRUE (original returns 1 at empty iteration).
            std::string prm = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            unsigned src = 0, dest = 0; int tx = 0, ty = 0;
            bool ok = sscanf(prm.c_str(), "%u %u %d %d",
                            &src, &dest, &tx, &ty) == 4;
            int moved = 0;
            if (ok) {
                for (auto& [mid, mp] : w.maps()) {
                    if (mid != src) continue;
                    std::vector<Player*> targets;
                    for (Player* u : mp.players()) targets.push_back(u);
                    for (Player* u : targets) {
                        teleport_player(w, *u, dest, tx, ty);
                        ++moved;
                    }
                    break;
                }
                std::printf("[action] %u chgmap %u -> %u (%d,%d): "
                            "%d users\n", p.id, src, dest, tx, ty, moved);
            }
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
                                case 2009: {  // 0x7d9: arm a LIVE monster as an event monster
            // sscanf "%u %u %d %s" = (mapid, monstertype id, t3, name).
            // Original (224372-451 + tail 224874-224900): searches the
            // monster system's live list for the first monster with
            // (vtbl+8)==t1 [map] && (vtbl+0x50)==t2 [type] && (t3==0 ||
            // FUN_1401178a0()==t3 [UNKNOWN getter, 0 rows use it]);
            // name token empty -> use it directly; else the monster's
            // name must equal the token (strcmp at 224874). Found and
            // field@0x154 == 0 -> FUN_14038e270(m,1) + return TRUE
            // (chain id_next); not found / name mismatch / already
            // armed -> FALSE (id_nextfail). sscanf < 2 -> DBERROR.
            // No client packet — pure server-side state + branch.
            unsigned t1 = 0, t2 = 0; int t3 = 0; char nm[128] = {0};
            int n = sscanf(a->param.c_str(), "%u %u %d %127s",
                           &t1, &t2, &t3, nm);
            bool ok = false;
            if (n >= 2 && t3 == 0) {
                GameMap& mp = w.get_or_create_map(t1);
                Monster* m = mp.monsters().find_event_target(t2, nm);
                if (m && m->event_flag == 0) {
                    m->event_flag = 1;   // FUN_14038e270(m, 1)
                    std::printf("[action] %u armed event monster %u "
                                "(%s) on map %u\n",
                                p.id, m->id, m->name.c_str(), t1);
                    ok = true;
                }
            } else if (n >= 2 && t3 != 0) {
                std::printf("[action] %u: 2009 t3!=0 filter "
                            "(FUN_1401178a0 unknown) -> fail\n", p.id);
            } else {
                std::printf("[action] %u: 2009 DBERROR (param '%s')\n",
                            p.id, a->param.c_str());
            }
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
                case 2010: {  // 0x7da: system talk broadcast to EVERYONE.
            // Original: FUN_14010b370(sys, 0, "SYSTEM", param); return 1
            // — one CMsgTalk from "SYSTEM" to all online players, no
            // fail branch. 0 rows in this DB but engine-complete.
            std::string text = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            if (!text.empty()) {
                uint16_t channel = a->data ? (uint16_t)a->data : 2000;
                Packet sys = build_talk_1004("SYSTEM", p.name, text,
                    "", 0xFFFFFF, channel, 0, 0, 0, 0);
                for (auto& [mid, mp] : w.maps())
                    for (Player* u : mp.players())
                        if (u->session) u->session->send(sys);
                std::printf("[action] %u broadcast 2010 to all\n", p.id);
            }
            cur = a->id_next;
            break;
        }
        case 2011: {  // 0x7db: set a live map attribute.
            // sscanf "%u %s %s" = (mapid, key, value). Keys: "id" ->
            // map object id (FUN_1402cbdc0), "name" -> map name
            // (FUN_1402cbbb0), "type" -> map type flag (FUN_1402cb9e0).
            // 15 rows, all "type" (guild-war map switching). Returns
            // FALSE only on sscanf < 3. "id" is stored in attribs —
            // re-keying the live maps_ container is unsafe (documented
            // simplification); "type" follows the 306 attrib pattern.
            std::string prm = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            unsigned mapid = 0; char key[64] = {0}, val[128] = {0};
            bool ok = sscanf(prm.c_str(), "%u %63s %127s",
                            &mapid, key, val) == 3;
            if (ok) {
                GameMap& mp = w.get_or_create_map(mapid);
                if (!strcasecmp(key, "type")) {
                    mp.attribs["type"] = strtoul(val, nullptr, 10);
                    std::printf("[action] %u set map %u type=%s\n",
                                p.id, mapid, val);
                } else if (!strcasecmp(key, "name")) {
                    mp.set_name(val);
                    std::printf("[action] %u set map %u name=%s\n",
                                p.id, mapid, val);
                } else if (!strcasecmp(key, "id")) {
                    mp.attribs["id"] = strtoul(val, nullptr, 10);
                    std::printf("[action] %u set map %u id=%s (attrib)\n",
                                p.id, mapid, val);
                }
            }
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
                case 1010: {  // system message to the player (12,378 rows).
                     // Original 1010 (both engines): CUser::SendMsg
                     // (vtbl+0x150) with channel = data column
                     // (2005/2007 in the DB), default 2000, words =
                     // "%s"-formatted param — a CMsgTalk on that
                     // channel, NOT a dialog. We substitute templates
                     // and send a 1004 talk to the player only.
            std::string text = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            if (!text.empty() && p.session) {
                uint16_t channel = a->data ? (uint16_t)a->data : 2000;
                p.session->send(build_talk_1004("SYSTEM", p.name, text,
                    "", 0xFFFFFF, channel, 0, 0, 0, 0));
            }
            cur = a->id_next;
            break;
        }
        case 1085: {  // gmlog: server-side log line with %-templates
            // (%user_id, %user_name, %a...). The original appends to the
            // GM log file; we log to stdout and continue (no game effect).
            std::printf("[gmlog] user %u %s: %s\n",
                        p.id, p.name.c_str(), a->param.c_str());
            cur = a->id_next;
            break;
        }
        case 1075: {  // "send <action> <data>" (89 rows) — VERIFIED
            // new-engine case 0x41 (disasm 0x14012c33f): builds a
            // CMsgAction 10010 with action=num2, data=num3 at the
            // actor's position; cmd=="send" -> packet to SELF only
            // (session vtbl +0x350), any other cmd -> broadcast
            // (+0x348, flag 1); sscanf != 3 -> DBERROR + fail branch.
            char cmd[16] = {0};
            int32_t num2 = 0, num3 = 0;
            int n = std::sscanf(a->param.c_str(), "%15s %d %d",
                                cmd, &num2, &num3);
            if (n == 3) {
                Packet act = build_action_10010(p.id, (uint32_t)num3,
                    (uint16_t)num2, 0, p.pos.x, p.pos.y);
                if (std::strcmp(cmd, "send") == 0) {
                    if (p.session) p.session->send(act);
                } else {
                    GameMap& m = w.get_or_create_map(p.map_id);
                    w.broadcast_to_screen(m, p.pos, act, p.session);
                }
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 1075 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 1077: {  // raw SQL -> svar (1 row) — VERIFIED new-engine
            // case 0x43: param (templates substituted) is executed as a
            // SELECT; the FIRST column of the first row is stored in
            // svar[data] (FUN_1401645e0, idx < 8); empty/failed result
            // -> fail branch.
            std::string sql = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level,
                npc_id, npc_x, npc_y);
            std::string val;
            bool ok = a->data < 8
                && active_db()->query_string(sql, val);
            if (ok) p.vars.svar[a->data] = val;
            std::printf("[action] %u: 1077 sql -> %s\n", p.id,
                        ok ? val.c_str() : "fail");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 501: {  // award item (ProcessActionItem case 0x1f5):
            // itemtype = the DATA column (row getter slot 4); the original
            // parses a 19-field param (count/quality/gems/...) but 15k/21k
            // rows have an EMPTY param and the rest are "0 0 ..." -> award
            // exactly ONE copy (documented simplification)
            uint32_t new_id =
                active_db()->insert_item(p.id, (uint32_t)a->data, 1);
            if (new_id != 0 && p.session) {
                p.session->send(build_item_info_1008(
                    new_id, (uint32_t)a->data, 1, 0, 1));
                p.session->send(build_item_status_2077(
                    new_id, 8, 0, 1, 1));
            }
            std::printf("[action] %u award item type=%u -> id %u\n",
                        p.id, (uint32_t)a->data, new_id);
            // single-award path returns the award result (FUN_1401188e0)
            cur = (new_id != 0) ? a->id_next : a->id_nextfail;
            break;
        }
        case 503: {  // check the player HAS an item (0x1f7, no erase)
            bool has = false;
            for (const auto& it : active_db()->load_player_items(p.id))
                if (it.type == (uint32_t)a->data) { has = true; break; }
            std::printf("[action] %u item check type=%u -> %s\n",
                        p.id, (uint32_t)a->data, has ? "true" : "false");
            cur = has ? a->id_next : a->id_nextfail;
            break;
        }
        case 502: {  // take an item away (0x1f6: lookup + erase one copy)
            bool taken = false;
            for (const auto& it : active_db()->load_player_items(p.id)) {
                if (it.type != (uint32_t)a->data) continue;
                if (active_db()->delete_item(it.id)) {
                    taken = true;
                    // client-side removal: CMsgItemStatus 2077 mode 7
                    // (the erase-notify wire used by timed removals)
                    if (p.session)
                        p.session->send(build_item_status_2077(
                            it.id, 7, it.position, it.amount, it.amount));
                }
                break;   // one copy only
            }
            std::printf("[action] %u take item type=%u -> %s\n",
                        p.id, (uint32_t)a->data, taken ? "taken" : "missing");
            cur = taken ? a->id_next : a->id_nextfail;
            break;
        }
        case 543: {  // consume one DATA item (0x21f: ItemSystem
            // lookup by DATA itemtype; found AND ident cell (0x17,
            // cq_itemtype.ident) == 0 -> erase ONE copy
            // (FUN_140340190) -> true; unknown itemtype or player
            // lacks the item -> fail branch. All 76 real DB rows are
            // Pack items with ident=0.
            bool consumed = false;
            if (a->data != 0 && !active_db()->itemtype_ident(a->data)) {
                for (const auto& it : active_db()->load_player_items(p.id)) {
                    if (it.type != (uint32_t)a->data) continue;
                    if (active_db()->delete_item(it.id)) {
                        consumed = true;
                        // erase-notify, same wire as the 502 erase
                        if (p.session)
                            p.session->send(build_item_status_2077(
                                it.id, 7, it.position, it.amount, it.amount));
                    }
                    break;   // one copy only
                }
            }
            std::printf("[action] %u consume item type=%u -> %s\n",
                        p.id, (uint32_t)a->data, consumed ? "ok" : "fail");
            cur = consumed ? a->id_next : a->id_nextfail;
            break;
        }
        case 9001: {  // ProcessActionOS case 0x2329 (FUN_140167b70):
            // special/dev-account gate — player id must exceed the
            // 0xee69a15e threshold AND a user flag at +0x12fc must be
            // set (flag semantics unknown; id test is decisive for
            // every normal player). Only 1 row in the real DB.
            cur = (p.id > 0xee69a15eu) ? a->id_next : a->id_nextfail;
            break;
        }
        case 218: case 219:          // family name ops (old switch
        case 3501: case 3510:        // 0xda/0xdb): clan rank/star_tower/
        case 3521: case 3523:        // money attribute exprs (family
        case 3524: {                 // processor cases 0xdad+)
            // FAMILY (clan) module actions. The original gates the
            // whole processor on the Family module being loaded
            // ("Family module is not loaded!" log) and follows
            // id_nextfail when it is absent. Our rebuild has no clan
            // system yet, so we take the absent-module branch.
            std::printf("[action] %u: type %u needs the family module "
                        "(not loaded) -> id_nextfail\n", p.id, a->type);
            cur = a->id_nextfail;
            break;
        }
        case 3001: case 3002: case 3003: case 3004:
        case 3005: case 3006: case 3007: case 3008:
        case 3010: case 498:
        case 20001: case 20002: {
            // VERIFIED: no case exists for these types in ANY of the
            // original's action processors (old switch, new engine,
            // item/family/OS processors) -> default DBERROR + false.
            std::printf("[action] %u: type %u has no case in the "
                        "original -> id_nextfail\n", p.id, a->type);
            cur = a->id_nextfail;
            break;
        }
        case 512: {  // case 0x200 (ProcessActionItem):
            // sscanf "%d %d" = (equipment position, socket index).
            // Looks the item up at that position; item missing ->
            // return false; then class gate FUN_140106cf0: the
            // item's class must be 1/3/6 and socket in 2..9 (class
            // 3) or 3..6 (classes 1/6); pass -> CMsgItemInfoEx 1116
            // broadcast to screen (+0x348 flag 1), return true.
            int pos = 0, sock = 0;
            if (sscanf(a->param.c_str(), "%d %d", &pos, &sock) == 2) {
                uint32_t fid = 0, ftype = 0;
                bool has = false;
                for (const auto& it : active_db()->load_player_items(p.id))
                    if ((int)it.position == pos) { fid = it.id;
                                                   ftype = it.type;
                                                   has = true; break; }
                if (!has) { cur = a->id_nextfail; break; } // return false
                int cls = item_class(ftype);
                bool gate = (cls == 1 || cls == 3 || cls == 6) &&
                           (cls == 3 ? (sock >= 2 && sock <= 9)
                                     : (sock >= 3 && sock <= 6));
                if (gate) {
                    w.broadcast_to_screen(w.get_or_create_map(p.map_id),
                        p.pos,
                        build_item_info_ex_1116(fid, p.id,
                                                ftype), nullptr);
                    cur = a->id_next;
                } else {
                    cur = a->id_nextfail;
                }
            } else {
                cur = a->id_nextfail;
            }
            break;
        }
        case 112: {  // patch-news dialog: CMsgDialog mode 112,
            // reply id = DATA column, text = param (case 0x70,
            // FUN_1403a6400 with mode 0x70 — NO remapper call)
            send_line(112, 0, a->data, 0, 0, a->param);
            cur = a->id_next;
            break;
        }
        case 124: {  // case 0x7c: CMsgAction 10010 to SELF with
            // action 0x74 (116) and data = DATA column (magic type
            // cutscene "show magic effect")
            if (p.session) {
                // dir: Player does not track facing (the original
                // passes CUser::GetDir()); we send 0
                p.session->send(build_action_10010(p.id, a->data, 0x74,
                                                   0, p.pos.x,
                                                   p.pos.y));
            }
            cur = a->id_next;
            break;
        }
        case 126: {  // case 0x7e: sscanf "%u %u %hu" — records a
            // world event (FUN_1400b8090 pushes {id,ts,action} into
            // the world event list); when the 3rd field != 0 also
            // sends CMsgAction 10010 action 0x9f data=p2 to self.
            unsigned v1 = 0, v2 = 0; unsigned short v3 = 0;
            if (sscanf(a->param.c_str(), "%u %u %hu",
                       &v1, &v2, &v3) == 3) {
                if (v3 && p.session) {
                    p.session->send(build_action_10010(p.id, v2, 0x9f,
                                                       0, 0, 0));
                }
                cur = a->id_next;
            } else {
                cur = a->id_nextfail;
            }
            break;
        }
        case 2002: {  // case 0x7d2 "delmonsternow": walks the whole
            // monster pool deleting matches (field+0x164 == DATA).
            // All 5 real rows carry DATA=0 — semantics ambiguous and
            // a blind delete could nuke live spawns; deferred.
            std::printf("[action] %u: type 2002 delmonsternow deferred\n",
                        p.id);
            cur = a->id_nextfail;
            break;
        }
        case 2005: {  // case 0x7d5: sscanf "%u %u %d %d %d %d %d" —
            // 7 fields = monster id + coords for an on-monster op.
            // The only real DB row carries a plain TEXT param (bad
            // row) -> the original logs DBERROR and breaks to the
            // fail branch.
            {
                unsigned t[7];
                int n = sscanf(a->param.c_str(),
                               "%u %u %d %d %d %d %d",
                               &t[0], &t[1], (int*)&t[2], (int*)&t[3],
                               (int*)&t[4], (int*)&t[5], (int*)&t[6]);
                if (n == 7) {
                    std::printf("[action] %u: 2005 monster op unimpl\n",
                                p.id);
                    cur = a->id_nextfail;
                } else {
                    cur = a->id_nextfail;
                }
            }
            break;
        }
        default:
            // unhandled action type — VERIFIED: the original logs a
            // DBERROR and returns false, so the chain follows
            // id_nextfail (usually 0 = stop).
            std::printf("[action] %u: unhandled type %u at %u\n",
                        p.id, a->type, cur);
            cur = a->id_nextfail;
            break;
        }
    }
    (void)npc_id;
    return cur;
}

} // namespace conquer
