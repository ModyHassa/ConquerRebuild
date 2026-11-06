#pragma once
#include <ctime>
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
#include <sstream>
#include <cstring>
#include <strings.h>
#include "npc.hpp"
#include "action.hpp"
#include "combat.hpp"
#include "drops.hpp"
#include "statuses.hpp"
#include "xp.hpp"
#include "../protocol/spawn_10014.hpp"
#include "dynanpc.hpp"
#include "weaponskills.hpp"
#include "magicskills.hpp"
#include "pet.hpp"
#include "magic.hpp"
#include "traps.hpp"
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
        case 528: {  // item generation with ITEMTYPEDATA attributes
            // (case 0x210, MsgServer.c ~214599). Original: sscanf of NINE
            // ints (all required), creates the item (FUN_14034a8d0), then
            // writes attribute slots through the generic SetInt
            // FUN_140104140 (idx < 100 = the item attribute table; cq_item's
            // column order matches it and slot 17 = chk_sum is the value the
            // original recomputes on every change). Slot mapping read off the
            // stack slot order of the sscanf pointers:
            //   field 1 -> slot 4  = amount
            //   field 2 -> slot 5  = amount_limit, and slot 0xD (data) is
            //              resolved through FUN_140385cf0(player,1,field2)
            //   field 3 -> unused
            //   field 4 -> slot 0xC = magic3
            //   field 5 -> slot 0xB = magic2
            //   field 6 -> slot 0x10 is magic1 (attr 10)
            //   field 7 -> slot 9   = gem2
            //   field 8 -> slot 8   = gem1
            //   field 9 -> FUN_140117670(item, field9 != 0, 1) (flag whose
            //              meaning is not decoded -> logged, not invented)
            // Finally the manager broadcasts the new item (vtbl+0x130).
            int f[9] = {0};
            int n = std::sscanf(a->param.c_str(),
                                "%d %d %d %d %d %d %d %d %d",
                                &f[0], &f[1], &f[2], &f[3], &f[4],
                                &f[5], &f[6], &f[7], &f[8]);
            if (n != 9) {
                std::printf("[action] %u 528 needs 9 fields, got %d\n",
                            p.id, n);
                cur = a->id_nextfail;
                break;
            }
            IDatabase::ItemAttrs at;
            at.amount_limit = f[1] > 0 ? (uint32_t)f[1] : 0;
            at.magic3 = f[3] > 0 ? (uint32_t)f[3] : 0;
            at.magic2 = f[4] > 0 ? (uint32_t)f[4] : 0;
            at.magic1 = f[5] > 0 ? (uint32_t)f[5] : 0;
            at.gem2   = f[6] > 0 ? (uint32_t)f[6] : 0;
            at.gem1   = f[7] > 0 ? (uint32_t)f[7] : 0;
            uint32_t amount = f[0] > 0 ? (uint32_t)f[0] : 1;
            uint32_t new_id = active_db()->insert_item_attrs(
                p.id, (uint32_t)a->data, amount, at);
            if (new_id != 0 && p.session) {
                p.session->send(build_item_info_1008(
                    new_id, (uint32_t)a->data, amount, 0, 1));
                p.session->send(build_item_status_2077(new_id, 8, 0, 1, 1));
            }
            std::printf("[action] %u 528 gen type %u amount %u "
                        "limit %u g1 %u g2 %u m1 %u m2 %u m3 %u "
                        "unused3 %d flag9 %d -> %s\n",
                        p.id, (uint32_t)a->data, amount, at.amount_limit,
                        at.gem1, at.gem2, at.magic1, at.magic2, at.magic3,
                        f[2], f[8], new_id ? "true" : "false");
            cur = new_id ? a->id_next : a->id_nextfail;
            break;
        }
        case 550: {  // award item with a COUNT (case 0x226, ~214941).
            // Original: local_708 holds the action's data column (itemtype),
            // then sscanf("%d %d ...") fills 20 slots of which the two
            // register-passed ones are flags (field 1) and count (field 2).
            // Verified against the live content: data=3005822/360149/350079
            // (real itemtypes) with params "0 20", "0 0 0 0 0 0 0 1" or
            // empty -> so field 1 = flags, field 2 = count (default 1).
            // Flow: FUN_140102780(itemtype) validates the type; when valid
            // and flags&1 == 0 the original runs a bag-space check first
            // (STR_FULLBAG_NO_MORE on failure), then FUN_14033fc80 adds
            // `count` at once. flags&1 only selects which add helper runs.
            int flags = 0, count = 0;
            std::sscanf(a->param.c_str(), "%d %d", &flags, &count);
            if (count <= 0) count = 1;
            uint32_t new_id = active_db()->insert_item(
                p.id, (uint32_t)a->data, (uint32_t)count);
            if (new_id != 0 && p.session) {
                p.session->send(build_item_info_1008(
                    new_id, (uint32_t)a->data, (uint32_t)count, 0, 1));
                p.session->send(build_item_status_2077(
                    new_id, 8, 0, 1, 1));
            } else if (p.session) {
                // original: STR_FULLBAG_NO_MORE then false
                p.session->send(build_talk_1004(
                    "SYSTEM", p.name,
                    "Not enough space in your inventory.", "",
                    0xFFFFFF, 2011, 0, 0, 0, 0));
            }
            std::printf("[action] %u 550 award type %u x%d flags %d -> %s\n",
                        p.id, (uint32_t)a->data, count, flags,
                        new_id ? "true" : "false");
            cur = new_id ? a->id_next : a->id_nextfail;
            break;
        }
        case 529: {  // weapon consumption gate (case 0x211, ~214669)
            // sscanf("%d %d") must give exactly 2 NON-ZERO values. The body
            // walks the player's item container and consumes the first item
            // that is the SAME TYPE as the worn weapon
            // ((player vtbl+0x10)(player,4) then (item vtbl+0x48)), whose
            // attribute 5 (amount_limit) equals field 1, and for which
            // field2 <= d - attribute13(data), where
            // d = FUN_140385cf0(player, 1, field1) -> FUN_140385160
            // (player, 1, field1) = the user variable store keyed (1, field1)
            // (a std::map at player+0xb0, the same store 1073/1074/1081 use).
            // Live params are "7 100" / "57 800" / "56 300" with data=750000
            // (the data column is not read by this case).
            int f1 = 0, f2 = 0;
            int n = std::sscanf(a->param.c_str(), "%d %d", &f1, &f2);
            if (n != 2 || f1 == 0 || f2 == 0) {
                std::printf("[action] %u 529 needs 2 non-zero fields, got %d\n",
                            p.id, n);
                cur = a->id_nextfail;
                break;
            }
            std::string wt;
            if (!active_db()->query_string(
                    "SELECT type FROM cq_item WHERE player_id=" +
                    std::to_string(p.id) + " AND position=4 LIMIT 1", wt) ||
                wt.empty()) {
                std::printf("[action] %u 529 needs an equipped weapon\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            const uint32_t wtype = (uint32_t)std::strtoul(wt.c_str(), nullptr, 10);
            const int64_t d = p.vars.get_stc(1u, (uint32_t)f1);
            bool consumed = false;
            for (const auto& it : active_db()->load_player_items(p.id)) {
                if (it.type != wtype) continue;
                std::string al;
                // query_string returns the first column of the first row only,
                // so amount_limit and data are read one at a time
                active_db()->query_string(
                    "SELECT amount_limit FROM cq_item WHERE id=" +
                    std::to_string(it.id) + " LIMIT 1", al);
                const long long amount_limit = std::strtoll(al.c_str(), nullptr, 10);
                if (amount_limit != f1) continue;
                std::string dt2;
                active_db()->query_string(
                    "SELECT data FROM cq_item WHERE id=" +
                    std::to_string(it.id) + " LIMIT 1", dt2);
                const long long item_data = std::strtoll(dt2.c_str(), nullptr, 10);
                if ((int64_t)f2 > d - item_data) continue;
                if (active_db()->delete_item(it.id)) {
                    consumed = true;
                    if (p.session)
                        p.session->send(build_item_status_2077(
                            it.id, 7, it.position, it.amount, it.amount));
                }
                break;   // the original returns on the first erase attempt
            }
            std::printf("[action] %u 529 consume type=%u f1=%d f2=%d d=%lld -> %s\n",
                        p.id, wtype, f1, f2, (long long)d,
                        consumed ? "ok" : "fail");
            cur = consumed ? a->id_next : a->id_nextfail;
            break;
        }
        case 130: {  // pet object update (case 0x82, 222961)
            // sscanf("%u %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d
            //         %u %u %u %d") must fill MORE than 0x14 (21) fields;
            // field 3 is forced to 600 when it parses as 0, then the object
            // is looked up by the first field: a hit applies the template
            // through FUN_140380620 and commits with FUN_1403816d0 and the
            // step passes, a miss fails. The 21 values are kept verbatim on
            // the descriptor, in parse order.
            int v[21] = {0};
            unsigned pid = 0;
            int n = std::sscanf(a->param.c_str(),
                "%u %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d "
                "%u %u %u %d",
                &pid, &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6],
                &v[7], &v[8], &v[9], &v[10], &v[11], &v[12], &v[13],
                &v[14], &v[15],
                (unsigned*)&v[16], (unsigned*)&v[17], (unsigned*)&v[18],
                &v[19]);
            if (n <= 0x14) {
                std::printf("[action] %u 130 needs 21 fields, got %d\n",
                            p.id, n);
                cur = a->id_nextfail;
                break;
            }
            if (v[2] == 0) v[2] = 600;      // local_193c default
            PetDescriptor* d = PetRegistry::instance().find(pid);
            if (!d) {
                std::printf("[action] %u 130 update %u: no object "
                            "-> id_nextfail\n", p.id, pid);
                cur = a->id_nextfail;
                break;
            }
            d->values.assign(v, v + 20);
            std::printf("[action] %u 130 updated object %u "
                        "(first value %d, field3 %d)\n",
                        p.id, pid, v[0], v[2]);
            cur = a->id_next;
            break;
        }
        case 129: {  // pet condition descriptor (case 0x81, 222882)
            // The branch selector is the row's own data field: the executor
            // reads GetAttr(4) (index 3 is the action type, see the iVar8
            // range checks at the call site) and compares it with 1.
            //   data != 1: sscanf("%u" + six (field, op, value) triples);
            //              the id must NOT already exist, then the descriptor
            //              is inserted -> pass, otherwise fail.
            //   data == 1: sscanf("%u") is an id that must exist; when its
            //              in-use flag is clear the descriptor is released
            //              from the container -> pass, otherwise fail.
            auto& pr = PetRegistry::instance();
            unsigned pid = 0;
            if (a->data == 1) {
                if (std::sscanf(a->param.c_str(), "%u", &pid) <= 0) {
                    std::printf("[action] %u 129 release needs an id\n", p.id);
                    cur = a->id_nextfail;
                    break;
                }
                PetDescriptor* d = pr.find(pid);
                if (!d) {
                    std::printf("[action] %u 129 release %u: no descriptor "
                                "-> id_nextfail\n", p.id, pid);
                    cur = a->id_nextfail;
                    break;
                }
                if (d->in_use) {   // FUN_140380900: pet+0x90 != 0 -> false
                    std::printf("[action] %u 129 release %u: in use "
                                "-> id_nextfail\n", p.id, pid);
                    cur = a->id_nextfail;
                    break;
                }
                pr.remove(pid);
                std::printf("[action] %u 129 released descriptor %u\n",
                            p.id, pid);
                cur = a->id_next;
                break;
            }
            char fld[6][32] = {{0}}, op[6][8] = {{0}};
            int  val[6] = {0};
            int n = std::sscanf(a->param.c_str(),
                "%u %31s %7s %d %31s %7s %d %31s %7s %d %31s %7s %d "
                "%31s %7s %d %31s %7s %d",
                &pid,
                fld[0], op[0], &val[0], fld[1], op[1], &val[1],
                fld[2], op[2], &val[2], fld[3], op[3], &val[3],
                fld[4], op[4], &val[4], fld[5], op[5], &val[5]);
            if (n <= 0) {
                std::printf("[action] %u 129 define: empty param\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            if (pr.find(pid)) {
                std::printf("[action] %u 129 define %u: id exists "
                            "-> id_nextfail\n", p.id, pid);
                cur = a->id_nextfail;
                break;
            }
            PetDescriptor d;
            d.id = pid;
            for (int i = 0; i < 6; ++i) {
                if (!fld[i][0]) break;
                PetCond c; c.field = fld[i]; c.op = op[i]; c.value = val[i];
                d.conds.push_back(c);
            }
            pr.add(d);
            std::printf("[action] %u 129 defined descriptor %u with %zu "
                        "condition(s)\n", p.id, pid, d.conds.size());
            cur = a->id_next;
            break;
        }
        case 2102: {  // ACTION_TRAP_DELETE (case 0x836, 224661)
            // The context asks its owner for the trap object it stands on
            // ((vtbl+0x298)(ctx, 0x1400, &out)); a null context logs ERROR
            // 0x3304. FUN_1403a7180 then builds one MSGMAPITEM with action
            // byte 0xc through the same trap builder and broadcasts it to the
            // map, sets the trap's removed flag (+0x74) and returns 1; a
            // second call on the same trap returns 0 (the already-removed
            // check) and the script takes id_nextfail. Our script context is
            // the acting player, so the trap is resolved at the player's
            // cell on the player's map.
            Trap* tr = TrapSystem::instance().find_at(p.map_id,
                                                      (uint16_t)p.pos.x,
                                                      (uint16_t)p.pos.y);
            if (!tr) {
                std::printf("[action] %u 2102 no trap at %u:(%u,%u) "
                            "-> id_nextfail\n", p.id, p.map_id,
                            (unsigned)p.pos.x, (unsigned)p.pos.y);
                cur = a->id_nextfail;
                break;
            }
            Packet dp = build_trap_1101(*tr, 0xFF, 12);  // 0xc = trap remove
            const uint32_t dead_id = tr->id;
            auto& dm = w.get_or_create_map(tr->map_id);
            Position dc; dc.x = tr->x; dc.y = tr->y;
            TrapSystem::instance().remove(dead_id);
            w.broadcast_to_screen(dm, dc, dp, nullptr);
            if (p.session) p.session->send(dp);
            std::printf("[action] %u 2102 removed trap %u at %u:(%u,%u)\n",
                        p.id, dead_id, p.map_id, tr->x, tr->y);
            cur = a->id_next;
            break;
        }
        case 717: {  // guild fund / title / domain script (case 0x2cd, 216466)
            // sscanf("%s %s %d %u") must give at least 3 fields, else the
            // original writes a DBERROR log and falls to the shared fail
            // path. cmd/op are compared case-insensitively:
            //   money         +=  -> guild manager +0x270(gid, amount)
            //   money          <  -> +0x268(gid) < amount, no write
            //   member_title   =  -> +0x110(gid, (unsigned char)amount)
            //   has_domain    ==  -> +0x2e8(gid) as a boolean
            // The guild id is field 4 when it parses; otherwise the acting
            // object's guild getter (param_4[2]+0x170) is used and a zero
            // result is logged and failed. This database has no player ->
            // guild link at all (cq_user has no guild column and there is
            // no member table), so the fallback always yields 0 here and
            // the faithful outcome is the fail branch.
            char cmd[256] = {0}, op[256] = {0};
            int amount = 0;
            unsigned gid = 0;
            const int n = std::sscanf(a->param.c_str(), "%255s %255s %d %u",
                                      cmd, op, &amount, &gid);
            if (n < 3) {
                std::printf("[action] %u 717 DBERROR param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            if (gid == 0) {
                // (param_4[2]+0x170)() = the acting object's guild id; the
                // membership now comes from cq_synattr (Player.guild_id).
                gid = p.guild_id;
            }
            if (gid == 0) {
                std::printf("[action] %u 717 '%s %s %d' has no guild id "
                            "and the actor has no guild\n",
                            p.id, cmd, op, amount);
                cur = a->id_nextfail;
                break;
            }
            std::string exists;
            if (!active_db()->query_string("SELECT id FROM cq_syndicate WHERE id=" +
                                           std::to_string(gid) + " LIMIT 1", exists) ||
                exists.empty()) {
                std::printf("[action] %u 717 guild %u not found\n", p.id, gid);
                cur = a->id_nextfail;
                break;
            }
            bool ok = false;
            if (!strcasecmp(cmd, "money")) {
                if (!std::strcmp(op, "+=")) {
                    active_db()->update_syndicate_money(gid, amount);
                    ok = true;
                } else if (!std::strcmp(op, "<")) {
                    ok = active_db()->syndicate_money(gid) < amount;
                }
            } else if (!strcasecmp(cmd, "member_title")) {
                if (!std::strcmp(op, "=")) {
                    // +0x110(guild, (unsigned char)amount)
                    active_db()->set_syndicate_member_title(gid,
                                                            (uint8_t)amount);
                    ok = true;
                }
            } else if (!strcasecmp(cmd, "has_domain")) {
                if (!std::strcmp(op, "==")) {
                    // +0x2e8(guild) - cq_syndomain is keyed by the guild id
                    ok = active_db()->syndicate_has_domain(gid);
                }
            }
            std::printf("[action] %u 717 %s %s %d guild=%u -> %s\n",
                        p.id, cmd, op, amount, gid, ok ? "ok" : "fail");
            cur = ok ? a->id_next : a->id_nextfail;
            break;
        }
        case 542: {  // weapon copy with custom attributes (case 0x21e, ~214781)
            // sscanf("%d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d")
            // reads up to 17 values (live content uses 14, and 90 of the 113
            // rows are EMPTY). The itemtype is NOT in the param: it is the
            // WORN WEAPON's type — (player vtbl+0x10)(player, 4) resolves
            // equipment slot 4, then (item vtbl+0x48) yields its itemtype, and
            // FUN_14034a8d0 is CUser::AwardItem(user, itemtype, u16, 1, ...)
            // which logs "CUser::AwardItem, user(%s,%u) itemtype(%u)" and
            // returns 0 when the type does not resolve. Attribute writes are
            // FUN_140104140 = SetInt(item, idx, value) onto the cq_item column
            // order: f17->4 amount, f16->5 amount_limit, f14->8 gem1,
            // f13->9 gem2, f12->10 magic1, f11->11 magic2, f10->12 magic3,
            // f9->14 reduce_dmg, f8->15 add_life, f7->16 anti_monster,
            // f4->13 data, f6->20 color (initialised to 3 before the sscanf,
            // so an absent field means color 3), f3->21 Addlevel_exp only
            // when > 0, f15 -> FUN_140117670(item, f15 != 0, 0), f2 > 0 ->
            // expiry attr 0x18, f1 == 1 -> FUN_14032daf0 extra notify.
            int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 3, f7 = 0, f8 = 0;
            int f9 = 0, f10 = 0, f11 = 0, f12 = 0, f13 = 0, f14 = 0;
            int f15 = 0, f16 = 0, f17 = 0;
            std::sscanf(a->param.c_str(),
                        "%d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d",
                        &f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8,
                        &f9, (unsigned*)&f10, (unsigned*)&f11,
                        (unsigned*)&f12, (unsigned*)&f13, &f14,
                        &f15, &f16, &f17);
            std::string wt;
            if (!active_db()->query_string(
                    "SELECT type FROM cq_item WHERE player_id=" +
                    std::to_string(p.id) + " AND position=4 LIMIT 1", wt) ||
                wt.empty()) {
                // no weapon in slot 4 -> itemtype 0 -> AwardItem fails
                std::printf("[action] %u 542 needs an equipped weapon "
                            "-> id_nextfail\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            uint32_t itype = (uint32_t)std::strtoul(wt.c_str(), nullptr, 10);
            uint32_t amount = (f17 != 0) ? (uint32_t)f17 : 1u;
            uint32_t nid = active_db()->insert_item(p.id, itype, amount);
            if (nid == 0) {
                std::printf("[action] %u 542 award itemtype %u failed\n",
                            p.id, itype);
                cur = a->id_nextfail;
                break;
            }
            // cq_item's columns are narrow (tinyint for gem1/gem2/magic2/
            // magic3/reduce_dmg/add_life/anti_monster/color, smallint for
            // amount/amount_limit, int for magic1/data/Addlevel_exp), while
            // the original keeps the whole attribute array at 32 bits, so a
            // value that does not fit is reported instead of being silently
            // truncated by MySQL.
            std::string set;
            auto add = [&](const char* col, long long v, long long hi) {
                if (v < 0 || v > hi) {
                    std::printf("[action] %u 542 attr %s=%lld exceeds the "
                                "cq_item column range (%lld) - skipped\n",
                                p.id, col, v, hi);
                    return;
                }
                if (!set.empty()) set += ", ";
                set += std::string(col) + "=" + std::to_string(v);
            };
            if (f16 != 0) add("amount_limit", f16, 65535);
            if (f14 != 0) add("gem1", f14, 255);
            if (f13 != 0) add("gem2", f13, 255);
            if (f12 != 0) add("magic1", f12, 4294967295LL);
            if (f11 != 0) add("magic2", f11, 255);
            if (f10 != 0) add("magic3", f10, 255);
            if (f9  != 0) add("reduce_dmg", f9, 255);
            if (f8  != 0) add("add_life", f8, 255);
            if (f7  != 0) add("anti_monster", f7, 255);
            if (f4  != 0) add("data", f4, 2147483647LL);
            add("color", f6, 255);                  // always written
            if (f3 > 0) add("Addlevel_exp", f3, 2147483647LL);
            active_db()->execute_sql("UPDATE cq_item SET " + set +
                                     " WHERE id=" + std::to_string(nid));
            if (p.session) {
                p.session->send(build_item_info_1008(nid, itype, amount, 0, 1));
                p.session->send(build_item_status_2077(nid, 8, 0, amount, amount));
            }
            std::printf("[action] %u 542 weapon copy type=%u id=%u "
                        "amount=%u color=%d\n",
                        p.id, itype, nid, amount, f6);
            (void)f1; (void)f2; (void)f5; (void)f15;
            cur = a->id_next;
            break;
        }
        case 2101: {  // ACTION_TRAP_CREATE (case 0x835, ~224631)
            // sscanf("%hu %hu %u %u %hu %hu %d %hu %hu") must yield 7 or 9
            // fields. Field 1 is the cq_traptype id, field 2 carries the
            // lookface ones digit, fields 4/5/6 are the map and the x/y the
            // trap is placed at (live content: "51 11 0 1036 98 200 0 0 0",
            // and one row uses %user_map_id/%user_map_x/%user_map_y).
            // CMapTrap::CreateNew resolves the type through g_setTrapType and
            // logs DBERROR when it misses; the lookface becomes
            // (traptype.look/10)*10 + (field2 % 10).
            unsigned f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0;
            unsigned f7 = 0, f8 = 0, f9 = 0;
            int n = std::sscanf(a->param.c_str(),
                                "%u %u %u %u %u %u %u %u %u",
                                &f1, &f2, &f3, &f4, &f5, &f6, &f7, &f8, &f9);
            if (n != 7 && n != 9) {
                std::printf("[action] %u 2101 needs 7 or 9 fields, got %d\n",
                            p.id, n);
                cur = a->id_nextfail;
                break;
            }
            std::string look_s, name_s;
            active_db()->query_string(
                "SELECT look FROM cq_traptype WHERE id=" +
                std::to_string(f1) + " LIMIT 1", look_s);
            if (look_s.empty()) {
                // original: log_InlineLogDBERROR("table:cq_traptype,
                // CMapTrap::CreateNew(), cann't find trap_id[%d]")
                std::printf("[action] %u 2101 unknown trap type %u "
                            "-> id_nextfail\n", p.id, f1);
                cur = a->id_nextfail;
                break;
            }
            Trap t;
            t.id      = TrapSystem::next_id();
            t.trap_id = f1;
            t.map_id  = f4;
            t.x       = (uint16_t)f5;
            t.y       = (uint16_t)f6;
            t.owner   = p.id;
            t.look    = trap_look((uint32_t)std::strtoul(look_s.c_str(), nullptr, 10), f2);
            active_db()->query_string(
                "SELECT name FROM cq_traptype WHERE id=" +
                std::to_string(f1) + " LIMIT 1", name_s);
            t.name    = name_s;
            t.born_at = ::time(nullptr);
            if (t.look >= 10000) t.look = (uint16_t)(t.look % 10000);
            TrapSystem::instance().add(t);
            // broadcast: the original calls (mapgroup +0x28)(trap+0x10),
            // the map-group add that shows the object to everyone in range.
            Packet tp = build_trap_1101(t);
            auto& tm = w.get_or_create_map(t.map_id);
            Position c; c.x = t.x; c.y = t.y;
            w.broadcast_to_screen(tm, c, tp, nullptr);
            if (p.session) p.session->send(tp);
            std::printf("[action] %u 2101 trap %u type=%u at %u(%u,%u) look=%u\n",
                        p.id, t.id, t.trap_id, t.map_id, t.x, t.y, t.look);
            cur = a->id_next;
            break;
        }
        case 131: {  // action/animation packet 10010 at (x,y) (case 0x83,
            // ~223015). Original: sscanf("%d %d %u %u") (4 fields) or
            // "%d %d %u" (3 fields), then FUN_140362620 builds CMsgAction
            // 10010 (message id 0x271A) with the actor id in +4, the two
            // coordinate fields in +0x18/+0x1A and the literal 0xa2 (162)
            // in the +8 data slot, and the whole thing is sent to the actor
            // only (param_4[2] vtbl+0x350). Live content is 253 rows of
            // "x y aux" with x/y inside real map bounds (195..772 /
            // 205..703), which is what pins field 1 = x and field 2 = y.
            int fx = 0, fy = 0;
            unsigned aux = 0;
            int n = std::sscanf(a->param.c_str(), "%d %d %u",
                                &fx, &fy, &aux);
            if (n < 3) {
                std::printf("[action] %u 131 needs 3 fields, got %d\n",
                            p.id, n);
                cur = a->id_nextfail;
                break;
            }
            if (p.session) {
                p.session->send(build_action_10010(
                    p.id, 162u, 0, 0,
                    (uint16_t)fx, (uint16_t)fy, (uint32_t)aux));
            }
            std::printf("[action] %u 131 action 10010 at (%d,%d) aux %u\n",
                        p.id, fx, fy, aux);
            cur = a->id_next;
            break;
        }
        case 519: {  // remove EVERY carried item of type <data> (0x207,
            // ~214527). FUN_1403408c0(player, itemtype) walks the carried
            // item-id vector, collects all ids whose attribute 1 (type)
            // equals the action data column, erases each one through
            // FUN_14033a6a0 and returns true iff the list was non-empty.
            // So this is "take all of this type", unlike 502 which takes one.
            int removed = 0;
            for (const auto& it : active_db()->load_player_items(p.id)) {
                if (it.type != (uint32_t)a->data) continue;
                if (active_db()->delete_item(it.id)) {
                    ++removed;
                    // same erase-notify wire the 502/543 paths use
                    if (p.session)
                        p.session->send(build_item_status_2077(
                            it.id, 7, it.position, it.amount, it.amount));
                }
            }
            std::printf("[action] %u 519 remove-all type=%u -> %d\n",
                        p.id, (uint32_t)a->data, removed);
            cur = removed ? a->id_next : a->id_nextfail;
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
        case 401: {  // EVENT_LAYNPC push (case 0x191, MsgServer.c ~207682).
            // VERIFIED to the instruction level (disasm 0x14011a5ff):
            // sscanf "%u %d %d %d %d" and `cmp eax,4` -> needs >= 4 tokens.
            // v1 (1st) is the next task id, must be non-zero (CHECKF
            // "idNextTask != ID_NONE", epilogue 0x1064) and lands at
            // user+0xa34. The original then clears the user's task name
            // (FUN_140117b50(user, "")) and sends a 2031 CMsgNpc to SELF
            // through FUN_14037d520(msg, 5, v5, v2, v4), whose body writes
            //   +0x04 tick, +0x08 v5, +0x0C v4, +0x10 5, +0x12 v2
            // (size field 0x10 -> wire len 0x14). The 3rd field is parsed
            // but never read by the original.
            unsigned int v1 = 0; int v2 = 0, v3 = 0, v4 = 0, v5 = 0;
            int n = std::sscanf(a->param.c_str(), "%u %d %d %d %d",
                                &v1, &v2, &v3, &v4, &v5);
            (void)v3;
            if (n < 4) {
                std::printf("[action] %u: 401 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            } else if (v1 == 0) {
                std::printf("[action] %u: 401 idNextTask == ID_NONE\n", p.id);
                cur = a->id_nextfail;
            } else {
                p.next_task_id = v1;
                Packet npc(MSG_NPC_INFO_2031);
                npc.write<uint32_t>((uint32_t)(std::time(nullptr) * 1000ULL));
                npc.write<uint32_t>((uint32_t)v5);     // +0x08
                npc.write<uint32_t>((uint32_t)v4);     // +0x0C
                npc.write<uint16_t>(5);                // +0x10 constant
                npc.write<uint16_t>((uint16_t)v2);     // +0x12
                npc.finalize();
                if (p.session) p.session->send(npc);
                cur = a->id_next;
            }
            break;
        }
        case 1071: {  // record push + optional CMsgAction 159 (case 0x3D, ~15416).
            // VERIFIED: sscanf "%u %u %hu" needs all three tokens.
            // FUN_1401a9b00(user,v1,v2,NULL) pushes {id=v1, time=TimeGet()/1000,
            // num=v2, str=""} into the container at user+0x330, and only when
            // num != 0 (the helper's own guard). When v3 != 0 the case builds
            // FUN_140362620(msg, uid, 0, 0) - a 10010 CMsgAction whose payload is
            // +0 tick, +4 uid, +8 v1, +0x10 v3, +0x14 0x9F, +0x16/18/1A zero,
            // size 0x26 - and sends it to SELF. The container's consumer in the
            // original is still UNKNOWN, so it is stored and never read.
            unsigned int v1 = 0, v2 = 0; unsigned short v3 = 0;
            int n = std::sscanf(a->param.c_str(), "%u %u %hu", &v1, &v2, &v3);
            if (n == 3) {
                if (v2 != 0) {
                    Player::ActionRecord r;
                    r.id = v1;
                    r.timestamp = (uint32_t)std::time(nullptr);
                    r.num = (int32_t)v2;
                    p.action_records.push_back(r);
                }
                if (v3 != 0) {
                    Packet act = build_action_10010(p.id, v1, 0x9F, 0, 0, 0,
                                                    0, 0, (int64_t)v3);
                    if (p.session) p.session->send(act);
                }
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 1071 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 402: {  // npc-count gate (old-engine case 0x192, MsgServer.c:207733).
            // PROVEN: sscanf "%s %s %s %d" must yield exactly 4 tokens; the first
            // token picks a CRoleManager counter - the binary's own catch
            // handlers (Catch_1406691d0/210/250/290, MsgServer.c:1230575+) name
            // them CountAllNpc / CountFurnitureNpc / CountNpcByName /
            // CountNpcByType - and the gate is
            //   op "<"  && count <  value -> id_next
            //   op "==" && count == value -> id_next
            //   anything else             -> id_nextfail
            // Shipped content only uses "type" (297 rows, e.g. "type 25 < 8")
            // and "name" (6 rows, e.g. "name ItemBox < 3", "name Prince == 1").
            // NPCs are counted over cq_npc + cq_dynanpc on the actor's map, the
            // two NPC sources this rebuild models.
            // "all" and "furniture" have ZERO rows in the shipped DB and the
            // furniture predicate is still UNKNOWN, so they log and fail -
            // never invent them.
            char subj[64] = {0}, nm[128] = {0}, op[8] = {0};
            int val = 0;
            int n = std::sscanf(a->param.c_str(), "%63s %127s %7s %d",
                                subj, nm, op, &val);
            if (n != 4) {
                std::printf("[action] %u: 402 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            std::string sql;
            if (strcasecmp(subj, "type") == 0) {
                unsigned t = (unsigned)std::strtoul(nm, nullptr, 10);
                sql = "SELECT COUNT(*) FROM cq_npc WHERE mapid=" +
                      std::to_string(p.map_id) + " AND type=" + std::to_string(t);
            } else if (strcasecmp(subj, "name") == 0) {
                std::string esc;
                for (const char* q = nm; *q; ++q) {
                    if (*q == '\'') esc += "''"; else esc += *q;
                }
                sql = "SELECT COUNT(*) FROM cq_npc WHERE mapid=" +
                      std::to_string(p.map_id) + " AND name='" + esc + "'";
            } else {
                std::printf("[action] %u: 402 subject '%s' UNKNOWN (no content "
                            "uses it)\n", p.id, subj);
                cur = a->id_nextfail;
                break;
            }
            int count = 0;
            std::string out;
            auto db = active_db();
            if (db && db->query_string(sql, out)) count = std::atoi(out.c_str());
            // dyna NPCs (301) live in their own table; the role manager counts
            // them as NPC roles on the map too.
            std::string dsql = sql;
            dsql.replace(dsql.find("cq_npc"), 6, "cq_dynanpc");
            std::string dout;
            if (db && db->query_string(dsql, dout)) count += std::atoi(dout.c_str());
            bool pass = (strcasecmp(op, "<") == 0 && count < val) ||
                        (strcasecmp(op, "==") == 0 && count == val);
            std::printf("[action] %u: 402 %s %s %s %d -> count %d %s\n",
                        p.id, subj, nm, op, val, count, pass ? "pass" : "fail");
            cur = pass ? a->id_next : a->id_nextfail;
            break;
        }
        case 1086: {  // "minutes var" -> exp equivalent into var[idx]
            // (new-engine case 0x4C, msgserver_gameaction.c:16114).
            // VERIFIED: sscanf "%u %u" needs exactly 2 tokens;
            //   v39 = FUN_140382f00(user, minutes)   (ported as exp_from_minutes)
            //   FUN_140164520(user, idx, v39)        = var64[idx] = v39, idx > 7
            //                                          logs and writes nothing
            // The case returns 1 either way once both tokens parsed, so the
            // chain always continues at id_next on success.
            unsigned int minutes = 0, idx = 0;
            int n = std::sscanf(a->param.c_str(), "%u %u", &minutes, &idx);
            if (n == 2) {
                int64_t v = exp_from_minutes(p, minutes);
                if (idx < 8) {
                    p.vars.var[idx] = v;
                } else {
                    std::printf("[action] %u: 1086 var index %u > 7 "
                                "(logged, no write)\n", p.id, idx);
                }
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 1086 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 1554: {  // achievement chk/add/clr (new-engine case 0x99,
            // msgserver_gameaction.c:19025-19085). VERIFIED:
            //   sscanf "%s" (>= 1 token); the DATA column is the achievement
            //   POSITION (cq_achievementtype.position), encoding
            //   field = (data/100)%100 + 1 and bit = data%100 (1-based bit).
            //   "chk" -> FUN_140171090: data==0 passes; invalid position logs
            //            and fails; otherwise bit test of cell `field`;
            //            returns that as the branch (id_next / id_nextfail).
            //   "add" -> FUN_140170e90 -> FUN_1403772a0: only when the bit is
            //            clear, set it and add cq_achievementtype.point of the
            //            position to cell 1 (the point column); always id_next.
            //   "clr" -> FUN_140113380 -> FUN_140377690: only when the bit is
            //            set, clear it and subtract the same points; id_next.
            //   any other command -> id_nextfail. The achievement system is
            //   gated by a server config byte (mgr+0x51); this rebuild has it
            //   enabled, which is the behaviour every shipped row expects.
            // Cell map (cq_achievement): 1 = point, 2..14 = achieve1..13.
            char cmd[32] = {0};
            int n = std::sscanf(a->param.c_str(), "%31s", cmd);
            if (n < 1) {
                std::printf("[action] %u: 1554 empty param\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            uint32_t data = a->data;
            uint32_t field = (data / 100) % 100 + 1;
            uint32_t bit = data % 100;
            bool valid = (data != 0 && field < 15 && bit < 33);
            if (!std::strcmp(cmd, "chk")) {
                bool ok;
                if (data == 0) ok = true;      // FUN_140376830: data 0 passes
                else if (!valid) {
                    std::printf("[action] %u: 1554 chk position %u out of "
                                "range\n", p.id, data);
                    ok = false;
                } else {
                    ok = ((p.ach[field] >> ((bit - 1) & 31)) & 1) != 0;
                }
                cur = ok ? a->id_next : a->id_nextfail;
            } else if (!std::strcmp(cmd, "add")) {
                if (valid) {
                    uint32_t mask = 1u << ((bit - 1) & 31);
                    if ((p.ach[field] & mask) == 0) {
                        p.ach[field] |= mask;
                        if (active_db())
                            p.ach[1] += active_db()->achievement_points(data);
                        p.ach_dirty = true;
                    }
                }
                cur = a->id_next;
            } else if (!std::strcmp(cmd, "clr")) {
                if (valid) {
                    uint32_t mask = 1u << ((bit - 1) & 31);
                    if (p.ach[field] & mask) {
                        p.ach[field] &= ~mask;
                        uint32_t pts = active_db()
                            ? active_db()->achievement_points(data) : 0;
                        p.ach[1] = (p.ach[1] > pts) ? p.ach[1] - pts : 0;
                        p.ach_dirty = true;
                    }
                }
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 1554 unknown cmd '%s'\n", p.id, cmd);
                cur = a->id_nextfail;
            }
            break;
        }
        case 1084: {  // "amount varA varB" -> var[A] = new level, var[B] = percent
            // (new-engine case 0x4A, msgserver_gameaction.c:16076-16088).
            // VERIFIED: sscanf "%I64d %u %u" needs EXACTLY 3 tokens;
            //   FUN_140382d20(user, amount, &lv, &pct)   -> exp_split()
            //   FUN_140164520(user, varA, lv)            -> var64[varA] = lv
            //   FUN_140164520(user, varB, pct)           -> var64[varB] = pct
            // var indices above 7 log and write nothing; the case then
            // returns 1, so a well-formed row always continues at id_next.
            long long amount = 0;
            unsigned int va = 0, vb = 0;
            int n = std::sscanf(a->param.c_str(), "%lld %u %u",
                                &amount, &va, &vb);
            if (n == 3) {
                int lv = 0, pct = 0;
                exp_split(p, (int64_t)amount, lv, pct);
                if (va < 8) p.vars.var[va] = lv;
                else std::printf("[action] %u: 1084 var %u > 7 (no write)\n",
                                 p.id, va);
                if (vb < 8) p.vars.var[vb] = pct;
                else std::printf("[action] %u: 1084 var %u > 7 (no write)\n",
                                 p.id, vb);
                cur = a->id_next;
            } else {
                std::printf("[action] %u: 1084 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 1040: {  // Rebirth (new-engine case 0x22 -> FUN_1401c3180 ->
            // FUN_1401b9d70). Full address-backed recipe:
            // docs/worker_rebirth_apply2.md section N + docs/worker_cuserdata.md.
            int v1 = 0, v2 = 0, v3 = 1;
            int ntok = std::sscanf(a->param.c_str(), "%d %d %d", &v1, &v2, &v3);
            if (ntok < 2) {
                std::printf("[action] %u: 1040 needs >= 2 numbers, got '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail; break;
            }
            RebirthRow row;
            bool have_row = active_db()->load_rebirth(p.profession,
                                                     (uint32_t)v1,
                                                     (uint32_t)v3, row);
            // FUN_140163c90 gates: (level < v3 || 2 < level) and need_level <= level
            bool level_gate = ((int)p.level < v3) || (p.level > 2u);
            if (!have_row || !level_gate || row.need_level > p.level) {
                std::printf("[action] %u: 1040 no cq_rebirth row (prof %u -> %d, "
                            "meta %d) or gate failed (level %u, need %u)\n",
                            p.id, p.profession, v1, v3, p.level, row.need_level);
                cur = a->id_nextfail; break;
            }
            const uint32_t old_prof = p.profession, old_level = p.level;
            const uint32_t new_prof = row.new_prof, new_level = row.new_level;
            const int tier = v3;

            // step 1 - FUN_140163e10: unequip every slot except 10, 11, 0x13
            {
                uint32_t moved = 0;
                for (const auto& it : active_db()->load_player_items(p.id)) {
                    uint16_t sl = it.position;
                    if (sl < 1 || sl == 10 || sl == 11 || sl == 0x13) continue;
                    if (!active_db()->update_item_position(it.id, 0)) continue;
                    ++moved;
                    if (p.session)
                        p.session->send(build_item_info_1008(it.id, it.type,
                                                            it.amount, 0, 1));
                }
                if (moved) {
                    CombatStats cs = active_db()->load_combat_stats(p.id);
                    p.combat = CombatActorStats{cs.atk_min, cs.atk_max, cs.extra,
                                                cs.defense, cs.dodge,
                                                cs.weapon_type};
                }
            }
            // step 2 - the look tuple (FUN_1401b9d70 head)
            uint32_t lp = new_prof;
            if (lp == 0) lp = 0x14;
            int i9 = 5, i7 = 3, i8 = 0, i10 = 2, i11 = 2;
            if (lp < 100) {
                switch (lp / 10) {
                    case 4: i7 = 1; i11 = 7; i9 = i10; break;
                    case 5: i7 = 1; i11 = 8; i9 = 1; break;
                    case 6: i7 = 4; i11 = 1; i9 = 3; i8 = i10; break;
                    case 7: i9 = 4; i11 = 3; break;
                    default: break;   // 1/2/3/8/9 keep the entry defaults
                }
            } else { i9 = i8; i7 = 3; i8 = 5; i11 = i10; }
            const uint32_t life_calc = (uint32_t)(i8 + i7 * 8 + i11 + i9) * 3u;
            const uint32_t mana_calc = (uint32_t)i8 * 5u;

            // step 3 - point budget (FUN_140173790(user, old_prof, old_level,
            // new_level, v2)): mode 1 = level formula, otherwise the stat sum
            // minus 3*old_level-7 plus 3*new_level-3 (mode 2 adds the 11-band
            // table), finally capped at rebirth_point_cap()-10.
            long long pts;
            if (v2 == 1) {
                long long lv = (old_level < 0x83u) ? (long long)old_level : 0x82;
                if (old_prof == 0x87) {
                    long long k = (lv - 0x6e) / 2;
                    pts = ((k + 1) * k) / 2 + 0x48;
                } else {
                    pts = ((lv - 0x78) * (lv - 0x77)) / 2 + 0x48;
                }
            } else {
                pts = (long long)p.add_point + p.soul + p.health + p.speed +
                      p.strength - 3LL * (long long)old_level - 7LL;
                if (pts < 0) pts = 0;
                if (v2 == 2) {
                    static const int band[11] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
                    long long d = (long long)old_level - 0x78;
                    int idx = d < 0 ? 0 : (d > 10 ? 10 : (int)d);
                    pts += band[idx] + 3LL * (long long)new_level - 3LL;
                } else {
                    pts += 3LL * (long long)new_level - 3LL;
                }
            }
            {
                long long capv = (long long)active_db()->rebirth_point_cap() - 10;
                if (pts > capv) pts = capv;
            }
            if (pts < 0) pts = 0;
            const uint32_t points = (uint32_t)pts;

            // step 4 - FUN_1401715d0(user, v2): lookface rewrite
            const uint32_t new_look = (uint32_t)(
                ((long long)p.lookface / 1000 - (long long)v2 / 1000) * 1000 + v2);

            // step 5 - the state writes the attrib calls perform
            p.profession = new_prof;
            p.level      = new_level;
            p.exp        = 0;
            p.strength   = (uint32_t)i8;
            p.speed      = (uint32_t)i7;
            p.health     = (uint32_t)i9;
            p.soul       = (uint32_t)i11;
            p.add_point  = points;
            p.hp = p.max_hp = life_calc;
            p.mana = p.max_mana = mana_calc;
            p.meto       = (uint32_t)tier;
            p.lookface   = new_look;
            active_db()->save_user_rebirth(p.id, p.profession, p.level, p.exp,
                                           p.strength, p.speed, p.health,
                                           p.soul, p.add_point, p.hp, p.mana,
                                           p.meto, p.lookface);

            // step 6 - attrib report (order from FUN_1401b9d70)
            if (p.session) {
                Packet at = build_user_attrib_10017(p.id, {
                    {ATTRIB_LIFE, p.hp}, {2, p.mana}, {7, new_prof},
                    {0xC, new_level}, {0xD, p.strength}, {0xE, p.speed},
                    {0xF, p.health}, {0x10, p.soul}, {10, points},
                    {0x16, (uint32_t)tier}});
                p.session->send(at);
                p.session->send(build_user_attrib_10017_u64(p.id, {{5, 0}}));
                if (tier == 1) {
                    p.session->send(build_user_attrib_10017(p.id, {{0x33, old_prof}}));
                } else if (tier == 2) {
                    p.session->send(build_user_attrib_10017(p.id, {{0x32, old_prof}}));
                } else {
                    std::printf("[action] %u: 1040 tier %d writes attrib 0x33 "
                                "from cq_user.old_prof (not modelled) - "
                                "0x32=%u only\n", p.id, tier, old_prof);
                    p.session->send(build_user_attrib_10017(p.id, {{0x32, old_prof}}));
                }
                // refresh + broadcast the new level attrib 0xc (the apply does
                // this when old_level != new_level)
                GameMap& m = w.get_or_create_map(p.map_id);
                SpawnInfo si; si.id = p.id; si.name = p.name;
                si.x = p.pos.x; si.y = p.pos.y; si.lookface = p.lookface;
                w.broadcast_to_screen(m, p.pos, build_spawn_10014(si), nullptr);
                if (old_level != new_level) {
                    w.broadcast_to_screen(m, p.pos,
                        build_user_attrib_10017(p.id, {{0xC, new_level}}), nullptr);
                }
            }
            std::printf("[action] %u 1040 rebirth prof %u -> %u, level %u -> %u, "
                        "stats %d/%d/%d/%d, points %u, life %u, look %u\n",
                        p.id, old_prof, new_prof, old_level, new_level,
                        i8, i7, i9, i11, points, life_calc, new_look);
            cur = a->id_next;
            break;
        }
        case 1203: {  // life comparison (new-engine case 0x6F).
            // VERIFIED (msgserver_gameaction.c:17661-17665):
            //   a = user[2] getter +0x78 (current life)
            //   b = user[2] getter +0x80 (max life)
            //   return (b <= a)  -> branch on "life is at full"
            bool full = (p.max_hp <= p.hp);
            cur = full ? a->id_next : a->id_nextfail;
            break;
        }
        case 1095: {  // v121: rebirth skill set from cq_magictypeop (case 0x54)
            // Body 0x140137ef7 is exactly one call: FUN_1401763f0(user, true)
            // -> FUN_1402f16c0(mgr, userid, +0xeda, +0xedb, +0xeee, meto).
            // That helper walks the whole cq_magictypeop tree and, for every
            // row with  rebirth_time == metempsychosis (only 1 and 2 reach the
            // comparisons, 0x1402f17d7-0x1402f17ed)
            //   && profession_ago == (+0xeda when meto==1, else +0xedb)
            //   && profession_now == +0xeee (profession)
            // runs the 60 skill slots through FUN_140493f70 with
            // magictype_op 0 -> flag 2 (FUN_140482c80 = full remove),
            // 1 -> flag 0, 2 -> flag 1. Any other op value is skipped
            // (0x1402f1835: test/sub 2/cmp 1 chain, else -> next row).
            // FUN_1402f16c0 returns true once the walk finishes, and the case
            // body returns that value, so the chain takes id_next.
            static std::vector<IDatabase::MagicTypeOpRecord> s_ops;
            static bool s_loaded = false;
            if (!s_loaded) {
                s_ops = active_db()->load_magictypeop();
                s_loaded = true;
                std::printf("[action] cq_magictypeop rows: %zu\n", s_ops.size());
            }
            const uint32_t prof_ago_arg = (p.meto == 2) ? p.old_prof : p.first_prof;
            int granted = 0, cleared = 0, skipped = 0;
            for (const auto& row : s_ops) {
                if (row.rebirth_time != p.meto) continue;
                if (row.prof_ago != prof_ago_arg) continue;
                if (row.prof_now != p.profession) continue;
                int flag = (row.op == 0) ? 2 : (row.op == 1) ? 0
                                                    : (row.op == 2) ? 1 : -1;
                if (flag < 0) { ++skipped; continue; }
                for (int i = 0; i < 60; ++i) {
                    uint32_t sk = row.skills[i];
                    if (!sk) continue;
                    if (flag == 2) {  // FUN_140482c80: drop the magic entirely
                        if (p.magics.erase(sk) > 0) {
                            active_db()->delete_magic(p.id, sk);
                            ++cleared;
                        }
                        continue;
                    }
                    // flag 0/1 both learn; the original then reconciles the
                    // level from cq_magictype inside FUN_140493f70 (fields
                    // 3/6 compare at 0x140493fcc) - our 1020-ported "learn"
                    // semantics are reused (create at level 0 if unknown).
                    if (p.magics.find(sk) != p.magics.end()) continue;
                    Player::MagicSkillState ms;
                    ms.level = 0; ms.exp = 0; ms.dirty = false;
                    p.magics[sk] = ms;
                    IDatabase::MagicRecord mr;
                    mr.type = sk; mr.level = 0; mr.exp = 0;
                    active_db()->save_magic(p.id, mr);
                    if (p.session) p.session->send(build_magic_1103(p.id, sk, 0, 0));
                    ++granted;
                }
            }
            std::printf("[action] %u 1095 meto=%u prof=%u ago=%u -> "
                        "granted %d cleared %d skipop %d\n",
                        p.id, p.meto, p.profession, prof_ago_arg,
                        granted, cleared, skipped);
            cur = a->id_next;
            break;
        }
        case 1072: {  // v122: 1101 marker on the player's own cell (case 0x48? no: 0x14012d507)
            // Body 0x14012d507. Identity = the action's `data` column
            // (pAction->vt[0x10](4)); SetInfo() returns false for id 0, in
            // which case nothing is sent. Coordinates are the player's own
            // (CUser vt +0x40 = X, +0x48 = Y), the packet is CMsgMapItem 1101
            // with action 0x0D, data/ext zeroed, and it goes to the executing
            // player only (vt +0x350). The body returns true -> id_next.
            uint32_t gid = (uint32_t)a->data;
            if (gid != 0 && p.session) {
                p.session->send(
                    build_map_item_1101_1072(gid, p.pos.x, p.pos.y));
            }
            std::printf("[action] %u 1072 data=%u at (%u,%u)\n",
                        p.id, gid, p.pos.x, p.pos.y);
            cur = a->id_next;
            break;
        }
        case 1048: {  // v121: attribute timer (20 rows, new-engine case 0x2a)
            // 0x14012eb6e: sscanf(param, "%d %u", &v1, &v2) must return
            // exactly 2 (cmp $2 at 0x14012eba4, else the shared fail
            // epilogue). Then FUN_140382c50(user, v1, v2): v1 clamped at 0
            // (cmovs), stored at user+0xb74, v2 at user+0xb78, and
            // user+0xb7c = time(NULL)/1000 (0x10624dd3>>6). It then builds
            // one CMsgUserAttrib 10017 whose key is user+0xb74 and whose
            // value is v2. The case then jumps to the FAIL epilogue
            // (0x14012ebc4 -> 0x14013a784), so the chain ALWAYS takes
            // id_nextfail.
            int v1 = 0; unsigned v2 = 0;
            int got = std::sscanf(a->param.c_str(), "%d %u", &v1, &v2);
            if (got == 2) {
                if (v1 < 0) v1 = 0;
                p.attr_timer_id    = (uint32_t)v1;
                p.attr_timer_secs  = v2;
                p.attr_timer_start = (uint32_t)(std::time(nullptr) / 1000);
                if (p.session)
                    p.session->send(
                        build_user_attrib_10017(p.id, {{(uint32_t)v1, v2}}));
            }
            std::printf("[action] %u 1048 '%s' -> fail branch\n",
                        p.id, a->param.c_str());
            cur = a->id_nextfail;
            break;
        }
        case 1510: {  // "percent" life drain (new-engine case 0x8C).
            // VERIFIED (msgserver_gameaction.c:18350-18386):
            //   sscanf "%d" (>= 1 token); v <= 0 -> id_nextfail (falls through)
            //   DATA column selects the base: 0 = max life, 1 = current life
            //   x = base * v / 100;  if (life < x) x = life;
            //   FUN_140177000(user, x): only while alive, life = life - x via the
            //   +0x2E0 "add life (-x)" call, and a death flow when it reaches 0.
            // Our engine models life/max_life and the 10017 life update; the
            // player-death flow does not exist anywhere in this rebuild yet, so
            // reaching 0 only clamps the value (documented global gap).
            int v = 0;
            int n = std::sscanf(a->param.c_str(), "%d", &v);
            if (n > 0 && v > 0) {
                uint32_t base = 0;
                if (a->data == 0) base = p.max_hp;
                else if (a->data == 1) base = p.hp;
                if (a->data <= 1) {
                    uint32_t x = (uint32_t)((uint64_t)base * (uint32_t)v / 100u);
                    if (p.hp < x) x = p.hp;
                    if (p.hp > x) p.hp -= x; else p.hp = 0;
                    if (p.session) {
                        Packet hp = build_user_attrib_10017(p.id,
                            {{ATTRIB_LIFE, p.hp}});
                        p.session->send(hp);
                    }
                    cur = a->id_next;
                } else {
                    std::printf("[action] %u: 1510 data %u has no branch\n",
                                p.id, a->data);
                    cur = a->id_nextfail;
                }
            } else {
                std::printf("[action] %u: 1510 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
            }
            break;
        }
        case 1204: {  // mana comparison (new-engine case 0x70).
            // VERIFIED (msgserver_gameaction.c:17666-17670):
            //   a = user getter +0x80 (current mana)
            //   b = user getter +0x88 (max mana)
            //   return (b <= a)  -> branch on "mana is at full"
            // The slots are pinned by FUN_1401a2660 case 2 (mana), which clamps
            // against +0x88 and reads +0x80 for the 10017 entry - the same pair
            // 1203 uses for life on the +0x10 sub-object.
            bool full = (p.max_mana <= p.mana);
            cur = full ? a->id_next : a->id_nextfail;
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
                std::printf("[action] %u 516 bad param '%s'\n",
                            p.id, a->param.c_str());
                cur = 0; break;
            }
            if (vidx < 0) vidx = 0; if (vidx > 7) vidx = 7;
            auto items = active_db()->load_player_items(p.id);
            IDatabase::PlayerItemRecord* it = nullptr;
            for (auto& r : items)
                if (r.position == 4) { it = &r; break; }
            if (!it) {
                std::printf("[action] %u 516 no slot-4 item (items=%zu)\n",
                            p.id, items.size());
                cur = a->id_nextfail; break;
            }
            int64_t v = p.vars.get_stc(it->id, field);
            bool match = (!std::strcmp(op,"==") && v == val) ||
                         (!std::strcmp(op,">")  && v >  val) ||
                         (!std::strcmp(op,">=") && v >= val) ||
                         (!std::strcmp(op,"<")  && v <  val) ||
                         (!std::strcmp(op,"<=") && v <= val);
            std::printf("[action] %u 516 probe item=%u field=%u v=%lld "
                        "op=%s val=%d -> %s\n",
                        p.id, it->id, field, (long long)v, op, val,
                        match ? "pass" : "fail");
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
        case 144: {  // 0x90: world event-flag bit test
            // sscanf("%s") is compared case-insensitively with "==" (the
            // original's _strnicmp against 0x100), then GetAttr(4) = data is
            // handed to FUN_14008ab60(flagword, data):
            //   data-1 < 0x1f && flagword > 0 -> bit (data-1) of the flagword
            //   otherwise                     -> ((data-1) >> 8) << 8 as bool
            // so data 1..31 with no flags set is false, while data 0 or any
            // data >= 257 is true. The flagword is only written from an
            // inbound 0x15f92 message (FUN_14008aae0), which this build never
            // receives, so it stays 0.
            char op[64] = {0};
            if (std::sscanf(a->param.c_str(), "%63s", op) < 1) {
                std::printf("[action] %u 144 DBERROR empty param\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            if (::strncasecmp(op, "==", 0x100) == 0) {   // _strnicmp twin
                const uint32_t bits = World::instance().script_flags;
                const uint32_t idx = (uint32_t)a->data;
                bool pass;
                if (idx - 1u < 0x1f && (int32_t)bits > 0) {
                    pass = ((bits >> ((idx - 1u) & 0x1f)) & 1u) != 0;
                } else {
                    pass = (((idx - 1u) >> 8) << 8) != 0;
                }
                std::printf("[action] %u 144 flag %u (bits=0x%x) -> %s\n",
                            p.id, idx, bits, pass ? "id_next" : "id_nextfail");
                cur = pass ? a->id_next : a->id_nextfail;
                break;
            }
            std::printf("[action] %u 144 unknown op '%s'\n", p.id, op);
            cur = a->id_nextfail;
            break;
        }
        case 332: {  // 0x14c: bit 8 of the running action's data
            // The original guards on a null actor or a null map (neither can
            // happen here), then reads GetAttr(4) of the running action
            // through the map's script context and returns
            // FUN_1401196c0 = (value >> 8) & 1; the sibling FUN_1401196f0
            // tests bit 13. Every live row carries data=0, so they take the
            // fail branch exactly like the previous default routing did.
            const bool pass = (((uint32_t)a->data) >> 8) & 1;
            if (!pass) {
                std::printf("[action] %u 332 data=%d bit8 clear -> id_nextfail\n",
                            p.id, a->data);
                cur = a->id_nextfail;
                break;
            }
            cur = a->id_next;
            break;
        }
        case 715: {  // 0x2cb: kick a guild member by NAME
            // msgserver_gameaction.c:9239-9266: param must be non-null and
            // shorter than 0x24, a byte compare against the actor's own name
            // rejects self, then manager slot +0x118(actor_id, param) does the
            // kick. That slot is PROVEN = KickOutMember By Name:
            // Syndicate.c:113481 FUN_1417b6770 resolves the member by name,
            // requires the SAME guild id (FUN_141785ea0 on both), gates on rank
            // (actor rank == 1000, i.e. leader, OR actor rank > 0x397 while the
            // member rank < 0x2b3), logs "User[%lu] KickOutMember By Name"
            // (C:113560) and runs FUN_1417aebb0 to remove the member.
            std::string kname = a->param;
            while (!kname.empty() && (kname.back() == ' ' || kname.back() == '\t'))
                kname.pop_back();
            size_t k0 = kname.find_first_not_of(" \t");
            if (k0) kname.erase(0, k0 == std::string::npos ? kname.size() : k0);
            if (kname.empty() || kname.size() >= 0x24 || !p.guild_id) {
                std::printf("[action] %u 715 kick '%s' rejected (name/guild)\n",
                            p.id, kname.c_str());
                cur = a->id_nextfail;
                break;
            }
            std::string ksql =
                "SELECT s.id,s.rank FROM cq_user u JOIN cq_synattr s ON s.id=u.id"
                " WHERE u.name='" + kname + "' AND s.syn_id=" +
                std::to_string(p.guild_id) + " LIMIT 1";
            std::string krow;
            if (!active_db()->query_string(ksql, krow) || krow.empty()) {
                std::printf("[action] %u 715 '%s' is not in guild %u -> "
                            "id_nextfail\n", p.id, kname.c_str(), p.guild_id);
                cur = a->id_nextfail;
                break;
            }
            uint32_t kuid = (uint32_t)std::strtoul(krow.c_str(), nullptr, 10);
            const char* kbar = std::strchr(krow.c_str(), ',');
            uint32_t krank = kbar ? (uint32_t)std::strtoul(kbar + 1, nullptr, 10) : 0;
            if (kuid == p.id) {   // the original's self name compare
                std::printf("[action] %u 715 cannot kick self\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            const bool kleader = (p.guild_rank == 1000);
            const bool ksenior = (p.guild_rank > 0x397 && krank < 0x2b3);
            if (!kleader && !ksenior) {
                std::printf("[action] %u 715 rank %u may not kick rank %u\n",
                            p.id, p.guild_rank, krank);
                cur = a->id_nextfail;
                break;
            }
            active_db()->execute_sql(
                "DELETE FROM cq_synattr WHERE id=" + std::to_string(kuid));
            // v97: if the member is online, clear their guild in memory now
            // (World::find_player walks the map user lists, the same reach the
            // original takes through the user-list lookup). The DB row is gone,
            // so a later login stays clean either way.
            if (Player* kp = w.find_player(kuid)) {
                kp->guild_id = 0;
                kp->guild_rank = 0;
                std::printf("[action] %u 715 cleared guild state of online %u\n",
                            p.id, kuid);
            }
            std::printf("[action] %u 715 kicked %s (%u) from guild %u\n",
                        p.id, kname.c_str(), kuid, p.guild_id);
            cur = a->id_next;
            break;
        }
        case 720: {  // 0x2d0: resolve the guild id held in the action context
            // msgserver_gameaction.c:9470-9471 calls manager slot +0x260 with
            // the uint at ctx+0xA68 (param_4 + 0x14d as a pointer) and returns
            // its bool. That slot is PROVEN = FUN_1417abc20 (Syndicate.c:106047)
            // which runs FUN_1417cade0(manager, id) - a lookup of the guild by
            // id in the manager map (C:127766) - overwrites the slot with the
            // resolved id and passes only when the lookup found it. Our context
            // slot is Player.script_guild_id, filled by 721.
            if (!p.script_guild_id) {
                std::printf("[action] %u 720 no guild id in context -> "
                            "id_nextfail\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            std::string rsql = "SELECT id FROM cq_syndicate WHERE id=" +
                               std::to_string(p.script_guild_id) + " LIMIT 1";
            std::string rid;
            if (active_db()->query_string(rsql, rid) && !rid.empty()) {
                p.script_guild_id = (uint32_t)std::strtoul(rid.c_str(), nullptr, 10);
                std::printf("[action] %u 720 guild %u resolved\n",
                            p.id, p.script_guild_id);
                cur = a->id_next;
                break;
            }
            std::printf("[action] %u 720 guild %u not found -> id_nextfail\n",
                        p.id, p.script_guild_id);
            p.script_guild_id = 0;
            cur = a->id_nextfail;
            break;
        }
        case 2201: {  // ProcessActionPkBonus: a cq_pk_bonus predicate
            // FUN_140141c80 = CGameAction::ProcessActionPkBonus()
            // (MsgServer.c:221620). The param is "<var> <op> <value>" where var
            // is target_bonus or hunter_bonus and op is "==" or ">" (any other
            // var/op takes the shared DBERROR + false path, C:221626-221628).
            // Proven SQL (C:221652, 221677, 221680, 221712):
            //   SELECT count(*) FROM cq_pk_bonus WHERE target=<actor> AND bonus<op><v>
            //   SELECT count(*) FROM cq_pk_bonus WHERE hunter=<actor> AND bonus<op><v>
            // and the actor id substituted into the first %d is the player's
            // (param_4 vtable+8 = GetID). Pass when the count is non-zero.
            std::string var, op, val;
            {
                std::istringstream ps(a->param);
                ps >> var >> op >> val;
            }
            const bool tgt = (var == "target_bonus");
            const bool hun = (var == "hunter_bonus");
            if ((!tgt && !hun) || (op != "==" && op != ">") || val.empty()) {
                std::printf("[action] %u 2201 bad spec '%s' -> id_nextfail\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            std::string ps1 =
                "SELECT count(*) FROM cq_pk_bonus WHERE " +
                std::string(tgt ? "target" : "hunter") + "=" +
                std::to_string(p.id) + " AND bonus" +
                (op == "==" ? "=" : ">") + val;
            std::string cnt;
            const bool okc = active_db()->query_string(ps1, cnt) &&
                             !cnt.empty() &&
                             std::strtoull(cnt.c_str(), nullptr, 10) != 0;
            std::printf("[action] %u 2201 %s %s %s -> %s (%s)\n", p.id,
                        var.c_str(), op.c_str(), val.c_str(),
                        okc ? "pass" : "fail", cnt.c_str());
            cur = okc ? a->id_next : a->id_nextfail;
            break;
        }
        case 2205: {  // ProcessActionPkBonus: is the actor a target / hunter?
            // Same function: param "target" (MsgServer.c:221847) tests manager
            // registry module 0x13 slot +0x18(actor) and param "hunter"
            // (C:221858) tests slot +0x10(actor); both are booleans.
            // APPROXIMATION, NOT A PIN: module 0x13 is not modelled here, so the
            // test is answered from cq_pk_bonus, the only store the module's own
            // SQL touches. For an empty table - our data - the answer is false,
            // which is exactly what the original module returns with no rows.
            std::string what = a->param;
            while (!what.empty() && (what.back() == ' ' || what.back() == '\t'))
                what.pop_back();
            if (what != "target" && what != "hunter") {
                std::printf("[action] %u 2205 bad spec '%s' -> id_nextfail\n",
                            p.id, what.c_str());
                cur = a->id_nextfail;
                break;
            }
            std::string ms = "SELECT count(*) FROM cq_pk_bonus WHERE " +
                             std::string(what == "target" ? "Target" : "Hunter") +
                             "=" + std::to_string(p.id);
            std::string mc;
            const bool mok = active_db()->query_string(ms, mc) && !mc.empty() &&
                             std::strtoull(mc.c_str(), nullptr, 10) != 0;
            std::printf("[action] %u 2205 %s -> %s\n", p.id, what.c_str(),
                        mok ? "pass" : "fail");
            cur = mok ? a->id_next : a->id_nextfail;
            break;
        }
        case 721: {  // 0x2d1: resolve a guild id by name into the actor
            // param_7 (a string shorter than 0x10 = the 15-char guild name
            // limit) is handed to the manager slot +0x250, the returned id is
            // stored at actor+0x14d and the step passes when it is non-zero.
            std::string gn = a->param;
            if (gn.empty() || gn.size() >= 0x10) {
                std::printf("[action] %u 721 bad guild name '%s'\n",
                            p.id, gn.c_str());
                cur = a->id_nextfail;
                break;
            }
            char esc[64];
            active_db()->execute_sql("SELECT 1");   // keep the conn clean
            std::string gid;
            std::string sql = "SELECT id FROM cq_syndicate WHERE name='" +
                              gn + "' LIMIT 1";
            if (active_db()->query_string(sql, gid) && !gid.empty()) {
                p.script_guild_id = (uint32_t)std::strtoul(gid.c_str(), nullptr, 10);
                std::printf("[action] %u 721 guild '%s' -> id %u\n",
                            p.id, gn.c_str(), p.script_guild_id);
                cur = a->id_next;
                break;
            }
            std::printf("[action] %u 721 guild '%s' not found -> id_nextfail\n",
                        p.id, gn.c_str());
            (void)esc;
            cur = a->id_nextfail;
            break;
        }
        case 722: {  // 0x2d2: the actor's guild must resolve
            // The original takes the actor's guild id (the +0x170 getter),
            // fails when it is 0, and otherwise resolves the guild through
            // FUN_140087650's slot +0xb8, whose result decides.
            // Our membership comes from cq_synattr (load_user fills
            // Player.guild_id), so a guild-less character fails exactly like
            // the original and a member passes when the guild row exists.
            if (!p.guild_id) {
                std::printf("[action] %u 722 actor has no guild -> id_nextfail\n",
                            p.id);
                cur = a->id_nextfail;
                break;
            }
            std::string gid;
            std::string gsql = "SELECT id FROM cq_syndicate WHERE id=" +
                               std::to_string(p.guild_id) + " LIMIT 1";
            if (active_db()->query_string(gsql, gid) && !gid.empty()) {
                std::printf("[action] %u 722 guild %u resolved (rank %u)\n",
                            p.id, p.guild_id, p.guild_rank);
                cur = a->id_next;
                break;
            }
            std::printf("[action] %u 722 guild %u missing -> id_nextfail\n",
                        p.id, p.guild_id);
            cur = a->id_nextfail;
            break;
        }
        case 1041: {  // v130: one talk line to self on channel 2105
            // Case 0x23 body 0x14013556b..0x140135585 is four instructions plus the
            // return: `mov (%r13),%rax ; mov %rsi,%r8 ; mov $0x839,%edx ;
            // mov %r13,%rcx ; call *0x150(%rax)` then `return 1`.
            // vt+0x150 is the CUser text-send method: the same slot is called with
            // 2000/2003/2005 at 0x14011aadc, 0x14013577e, 0x140163274, so edx is
            // the **CMsgTalk channel/attribute word** and r8 the text. 0x839 = 2105.
            // No parse, no gate, no state: rsi (the action param) is the text.
            std::string text = subst_templates(a->param, p.id, p.name,
                p.map_id, p.pos.x, p.pos.y, p.level, npc_id, npc_x, npc_y);
            if (p.session) {
                p.session->send(build_talk_1004("SYSTEM", p.name, text, "",
                                               0xFFFFFF, 2105, 0, 0, 0, 0));
            }
            std::printf("[action] %u 1041 talk 2105 \"%s\" -> id_next\n",
                        p.id, text.c_str());
            cur = a->id_next;
            break;
        }
        case 802: {  // v129: the "lastentertime" cooldown gate
            // Case 0x6e body 0x1401329bf (gameaction.cpp, literal
            // "ACTION_USER_CHECK_ITEM_IN_TRUNCK fail" is only the shared log
            // string): sscanf "%d" (>=1 conversions else DBERROR 0x257c),
            // edi = 0x140167070(user) = the keyed stamp "lastentertime" out of the
            // store at CUser+0x12c0 (its ONLY reader; the only writers are inside
            // 0x1401787e0), then
            //     ecx = GetTickCount() - edi;  cmp parsed,ecx ; jge pass
            //                                  test edi,edi    ; je  pass
            //     fail -> 0
            // and on pass 0x1401787e0(user, now) stores now. No packet, no text.
            int v = 0;
            if (std::sscanf(a->param.c_str(), "%d", &v) < 1) {
                std::printf("[action] %u 802: param \"%s\" is not %%d "
                            "(DBERROR 0x257c) -> id_nextfail\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            const uint32_t now = (uint32_t)now_ms64();
            const uint32_t last = p.last_enter_time;
            const uint32_t elapsed = now - last;   // u32 wrap like GetTickCount
            if (last != 0 && (int32_t)elapsed < v) {
                std::printf("[action] %u 802: elapsed %d < %d -> id_nextfail\n",
                            p.id, (int)elapsed, v);
                cur = a->id_nextfail;
                break;
            }
            p.last_enter_time = now;
            std::printf("[action] %u 802: elapsed %d >= %d, stamp refreshed "
                        "-> id_next\n", p.id, (int)elapsed, v);
            cur = a->id_next;
            break;
        }
        case 1511: {  // v129: CMsgAction 160 ("LinkDialog") to self, ids only
            // Case 0x8d body 0x140137177: pRole == NULL -> CHECKF 0x2bb4 -> 0;
            // pRole->QueryObj(OBJ_NPC, IPP_OF(pNpc)) fails -> CHECKF 0x2bb5 -> 0;
            // r13d = npc->GetID(), r12d = npc->[0x60]->GetID(); then FUN_140362620
            // with action 0xa0 (160) at wire+0x18, r12d as the 7th argument
            // (wire+0x0C) and r13d as the 8th (wire+0x14). Sent to the user only
            // (vt+0x350) and it returns 1 even when the Create CHECKF fires.
            // The npc[0x60] sub-object class is UNKNOWN, so that slot is 0.
            const uint32_t npc_id = p.last_npc_id;
            if (npc_id == 0) {
                std::printf("[action] %u 1511: no NPC context (CHECKF 0x2bb4) "
                            "-> id_nextfail\n", p.id);
                cur = a->id_nextfail;
                break;
            }
            if (!p.session) { cur = a->id_nextfail; break; }
            p.session->send(build_action_10010(p.id, 0, 160, (uint16_t)p.dir,
                                               (uint16_t)p.pos.x, (uint16_t)p.pos.y,
                                               /*ext=*/0, /*target2=*/-1,
                                               /*slot14=*/npc_id));
            std::printf("[action] %u 1511: action 160 sent for npc %u -> id_next\n",
                        p.id, npc_id);
            cur = a->id_next;
            break;
        }
        case 1650: {  // v128: open a dialog - CMsgAction 171 + state 0 -> 1
            // Body 0x140138724 (docs/worker_v126_g5_1508.md, packet mapping
            // re-verified in docs/cmsgaction_10010_map.md): gate `[user+0x968] == 0`,
            // sscanf "%u" (>=1 conversions accepted, else log 0x2dcc), then ONE
            // CMsgAction built by FUN_140362620 with `mov $0xab` = **action 171**
            // at wire+0x18, the parsed index as the 7th argument -> wire+0x0C,
            // x/y = the user's position and dir = the user's direction. On send
            // success only: +0x968=1, +0x96c = the action's `data` column (the
            // `ctx->vt[0x10](4)+0x48` idiom), +0x970=0, +0x974=0 -> return 1.
            if (p.dlg_state != 0) {
                std::printf("[action] %u 1650: dialog state %u != 0 -> id_nextfail\n",
                            p.id, (unsigned)p.dlg_state);
                cur = a->id_nextfail;
                break;
            }
            unsigned idx = 0;
            if (std::sscanf(a->param.c_str(), "%u", &idx) < 1) {
                std::printf("[action] %u 1650: param \"%s\" is not %%u "
                            "(original logs 0x2dcc) -> id_nextfail\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            if (!p.session) { cur = a->id_nextfail; break; }
            p.session->send(build_action_10010(p.id, idx, 171, (uint16_t)p.dir,
                                               (uint16_t)p.pos.x,
                                               (uint16_t)p.pos.y));
            p.dlg_state  = 1;
            p.dlg_id     = (uint32_t)a->data;
            p.dlg_target = 0;
            p.dlg_kind   = 0;
            std::printf("[action] %u 1650: dialog index %u sent (action 171), "
                        "state -> 1 -> id_next\n", p.id, idx);
            cur = a->id_next;
            break;
        }
        case 1652: {  // v128: close the dialog - CMsgAction 174, then reset state
            // Body 0x140138e49: `0x140165b50(user)` builds the same CMsgAction with
            // `mov r13d,0xae` = **action 174** and returns the send result; only a
            // successful send runs `0x140165a10` = `+0x968=0; +0x970=0; +0x974=0`.
            // There is NO state gate on this type.
            if (!p.session) { cur = a->id_nextfail; break; }
            p.session->send(build_action_10010(p.id, 0, 174, (uint16_t)p.dir,
                                               (uint16_t)p.pos.x,
                                               (uint16_t)p.pos.y));
            p.dlg_state  = 0;
            p.dlg_target = 0;
            p.dlg_kind   = 0;
            std::printf("[action] %u 1652: close sent (action 174), state reset "
                        "-> id_next\n", p.id);
            cur = a->id_next;
            break;
        }
        case 1043: {  // v127: reset the player's weapon-skill unlearn flags
            // Case 0x25 body 0x140135433 is a TAIL CALL into 0x140162620; every
            // fact below was read there (docs/worker_v126_1043_1041_1046.md):
            //   per element (reverse walk of the CUser+0x1110 CGameObjSet of
            //   CUserWeaponSkill):  old = elem+0x19, level = elem+0x18;
            //   ONLY when level < old  -> SetOldLevel(level)  (0x14039d960,
            //   first store `mov %dl,0x19(%rcx)`); then unconditionally
            //   0x14039d8f0(elem,1) (the byte flag at +0x1a); read nType
            //   (0x14039d760 over +0x10) and id (0x14039d9d0 over +0x08);
            //   erase via container->vt[0x28](id); then ONE CMsgAction:
            //   action 110 (`mov $0x6e`) at wire+0x18 with the element nType in
            //   the dword7 slot (wire+0x0C) and the remaining helper slots 0.
            // The packet's arg->offset map was re-derived from FUN_140362620
            // this wave: body+0x04=edx(id) wire+0x08, body+0x08=7th arg
            // wire+0x0C, body+0x14=6th arg wire+0x18 (the action word),
            // body+0x16=5th arg wire+0x1A, body+0x18=r8d wire+0x1C,
            // body+0x1A=r9d wire+0x1E.
            // The container is walked in REVERSE, so collect the types first.
            std::vector<uint32_t> order;
            for (const auto& kv : p.weapon_skills) order.push_back(kv.first);
            std::reverse(order.begin(), order.end());
            int reset = 0;
            for (uint32_t wt : order) {
                auto it = p.weapon_skills.find(wt);
                if (it == p.weapon_skills.end()) continue;
                Player::WeaponSkillState& sk = it->second;
                if (sk.level < sk.old_level) sk.old_level = sk.level;  // only then
                const bool was_unlearn = (sk.old_level != 0);          // +0x1a flag
                (void)was_unlearn;
                active_db()->mark_weapon_skill_unlearned(p.id, wt);    // unlearn=1
                // wire+0x1C/+0x1E (r8d/r9d) and wire+0x1A (5th arg) are NOT
                // resolved at the call site, so they are written 0 rather than
                // filled with a guess.
                Packet pk = build_action_10010(p.id, wt, 110, 0, 0, 0);
                if (p.session) p.session->send(pk);
                std::printf("[action] %u 1043 skill %u level %u old %u -> "
                            "erase + 10010 action 110\n",
                            p.id, wt, (unsigned)sk.level, (unsigned)sk.old_level);
                p.weapon_skills.erase(it);
                ++reset;
            }
            std::printf("[action] %u 1043 reset %d weapon skill(s) -> id_next\n",
                        p.id, reset);
            cur = a->id_next;
            break;
        }
        case 1046: {  // v127: CMsgAction 126 to self carrying the `data` column
            // Body 0x140135599: 0x140362560 ctor, `call *0x10(%rax)` with edx=4
            // (the action's data cell - the same idiom as 1096), then
            // `mov $0x7e,%eax` (0x140135601) = action 126 into FUN_140362620, and
            // the data value lands in the dword7 slot = wire+0x0C.
            Packet pk = build_action_10010(p.id, a->data, 126, 0, 0, 0);
            if (p.session) p.session->send(pk);
            std::printf("[action] %u 1046 10010 action 126 data %u -> id_next\n",
                        p.id, a->data);
            cur = a->id_next;
            break;
        }
        case 1052: {  // v126: the original router sends this type to DEFAULT
            // PROVEN: byte_map[0x13aa9c + (1052-1001)] = 0xbb, and case 0xbb's body
            // is 0x14013a751 = the switch default (the same body 1059 resolves to).
            // The default logs "unsupported" and returns false, i.e. id_nextfail -
            // exactly what the generic default below does. Declared explicitly so
            // the coverage report can tell "no case in the original" from "not yet
            // ported" without re-deriving the table.
            std::printf("[action] %u: type 1052 is DEFAULT-routed in the original "
                        "-> id_nextfail\n", p.id);
            cur = a->id_nextfail;
            break;
        }
        case 1028: {  // v125b: user flag word bitset (chk / add / clr)
            // Body 0x14012ef16. sscanf(" %s %d") must be EXACTLY 2 tokens; the
            // index must be <= 0x1F (0x14039a214 `cmp $0x1f` -> CHECKF + false).
            //   "chk" -> 0x14039a210: `bt idx,[user+0xf24]` -> the bit, and a
            //            clear bit takes the fail branch;
            //   "add" -> 0x14039a150: set the bit, always true;
            //   "clr" -> 0x14039a1b0: clear the bit, always true;
            //   anything else / parse != 2 -> shared DBERROR fail path.
            char op[64] = {0};
            int idx = 0;
            int n = std::sscanf(a->param.c_str(), "%63s %d", op, &idx);
            if (n != 2 || idx < 0 || idx > 0x1F) {
                std::printf("[action] %u 1028 bad param '%s' (n=%d, idx=%d)"
                            " -> id_nextfail\n", p.id, a->param.c_str(), n, idx);
                cur = a->id_nextfail;
                break;
            }
            const uint32_t bit = 1u << idx;
            if (!std::strcmp(op, "chk")) {
                bool set = (p.user_flags & bit) != 0;
                std::printf("[action] %u 1028 chk %d -> %s\n", p.id, idx,
                            set ? "true" : "false");
                cur = set ? a->id_next : a->id_nextfail;
            } else if (!std::strcmp(op, "add")) {
                p.user_flags |= bit;
                std::printf("[action] %u 1028 add %d -> flags %#x\n",
                            p.id, idx, p.user_flags);
                cur = a->id_next;
            } else if (!std::strcmp(op, "clr")) {
                p.user_flags &= ~bit;
                std::printf("[action] %u 1028 clr %d -> flags %#x\n",
                            p.id, idx, p.user_flags);
                cur = a->id_next;
            } else {
                std::printf("[action] %u 1028 unknown op '%s' -> id_nextfail\n",
                            p.id, op);
                cur = a->id_nextfail;
            }
            break;
        }
        case 1053: {  // v125b: "var(%d) <op> <int64>" compare/accumulate
            // Body 0x14012e4f5. sscanf("var(%d) %s %I64d") == 3, same var store
            // as 1060/1061/1064 (get FUN_1401644d0, set FUN_140164520).
            // Ops proven by the compare+setcc pairs at 0x14012e57b..0x14012e5ec:
            //   ">"  -> setg  (var >  v)
            //   ">=" -> setge (var >= v)
            //   fallthrough -> sete (var == v)
            // and the second parse block (0x14012e61f) handles "+=" via the
            // 0x14070d54c literal: var = var + v.
            int idx = 0; char op[16] = {0}; long long vv = 0;
            int n = std::sscanf(a->param.c_str(), "var(%d) %15s %lld",
                                &idx, op, &vv);
            if (n != 3 || idx < 0 || idx >= 8) {
                std::printf("[action] %u 1053 bad param '%s' (n=%d, idx=%d) "
                            "-> id_nextfail\n", p.id, a->param.c_str(), n, idx);
                cur = a->id_nextfail;
                break;
            }
            int64_t old = p.vars.var[idx];
            bool res = false;
            if (!std::strcmp(op, ">"))       res = old >  vv;
            else if (!std::strcmp(op, ">=")) res = old >= vv;
            else if (!std::strcmp(op, "==")) res = old == vv;
            else if (!std::strcmp(op, "+=")) { p.vars.var[idx] = old + vv; res = true; }
            else {
                std::printf("[action] %u 1053 unknown op '%s' -> id_nextfail\n",
                            p.id, op);
                cur = a->id_nextfail;
                break;
            }
            std::printf("[action] %u 1053 var(%d) %s %lld : %lld -> %s\n",
                        p.id, idx, op, vv, (long long)old, res ? "true" : "false");
            cur = res ? a->id_next : a->id_nextfail;
            break;
        }
        case 1096: {  // v125: grant a status (provider 0x14 = status::CStatusMgr)
            // Body 0x140137fa5. sscanf(param,"%d %d %d %d %d %d") must consume
            // SIX tokens; tokens 2..6 must be >= 0 (token 1 is unchecked).
            // The status id is the action's `data` column. Then:
            //   if (mgr->HasStatus(id))  -> the check/apply path (0x140165e10)
            //   else mgr->AddStatus(id, target, t1, t5, t4, t2, t3,(char)t6,1,0)
            // and the ADD's return value is the action result.
            // t3 is the duration in seconds (proven: end = now + t3).
            int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;
            int n = std::sscanf(a->param.c_str(), "%d %d %d %d %d %d",
                                &t1, &t2, &t3, &t4, &t5, &t6);
            if (n < 6 || t2 < 0 || t3 < 0 || t4 < 0 || t5 < 0 || t6 < 0) {
                std::printf("[action] %u 1096 bad param '%s' (n=%d) -> "
                            "id_nextfail\n", p.id, a->param.c_str(), n);
                cur = a->id_nextfail;
                break;
            }
            const int sid = (int)a->data;
            auto& sm = StatusSystem::instance();
            if (sm.has((int)p.id, sid)) {
                // already held -> the check/apply path, result true
                std::printf("[action] %u 1096 status %d already held -> "
                            "apply path\n", p.id, sid);
                cur = a->id_next;
                break;
            }
            if (!sm.add((int)p.id, (int)p.id, t1, t5, t4, t2, t3, t6, sid)) {
                std::printf("[action] %u 1096 add status %d rejected -> "
                            "id_nextfail\n", p.id, sid);
                cur = a->id_nextfail;
                break;
            }
            cur = a->id_next;
            break;
        }
        case 1098: {  // v125: status probe (mode 0) / revoke-refresh (mode 1)
            // Body 0x140138322. 1..15 ints; the action's `data` column is the
            // MODE. mode 0 = OR reduction ("holds any of these") -> true as
            // soon as one matches; mode 1 = apply status code (+0x10) for
            // EVERY listed id the user holds, NO early exit, always true;
            // mode >= 2 -> false.
            int ids[15] = {0};
            int cnt = 0;
            {
                const char* q = a->param.c_str();
                while (cnt < 15) {
                    int v = 0, used = 0;
                    if (std::sscanf(q, "%d%n", &v, &used) != 1) break;
                    ids[cnt++] = v;
                    q += used;
                }
            }
            if (cnt < 1) {
                std::printf("[action] %u 1098 no ids in '%s' -> id_nextfail\n",
                            p.id, a->param.c_str());
                cur = a->id_nextfail;
                break;
            }
            const int mode = (int)a->data;
            auto& sm = StatusSystem::instance();
            if (mode == 0) {
                bool any = false;
                for (int i = 0; i < cnt; i++) if (sm.has((int)p.id, ids[i])) { any = true; break; }
                std::printf("[action] %u 1098 mode0 (%d ids) -> %s\n",
                            p.id, cnt, any ? "true" : "false");
                cur = any ? a->id_next : a->id_nextfail;
                break;
            }
            if (mode == 1) {
                int applied = 0;
                for (int i = 0; i < cnt; i++)
                    if (sm.has((int)p.id, ids[i])) { sm.apply_code((int)p.id, ids[i]); ++applied; }
                std::printf("[action] %u 1098 mode1 applied %d of %d -> true\n",
                            p.id, applied, cnt);
                cur = a->id_next;   // the original returns true unconditionally
                break;
            }
            std::printf("[action] %u 1098 mode %d unsupported -> id_nextfail\n",
                        p.id, mode);
            cur = a->id_nextfail;
            break;
        }
        case 3701: {  // v124: user state stamp + CMsgAction 10010 action 0xA4
            // Handler FUN_14011dcb0 (ProcessActionEspecial), 3701..3798 branch
            // (MsgServer.c:223710 `iVar8 - 0xe75U < 0x62`). PARSE:
            // sscanf(param, "%d %s %d") must consume exactly 3; int A <= 0 ->
            // nothing happens. Alive gate: user status bit0 = dead -> the
            // STR_DIE text is sent through user+0x10 vt+0x358 and the handler
            // returns 0. Otherwise FUN_140164e30(user,0,...) clears the
            // +0x130..+0x140 stamp block, the manager gets (uid, 0x56)
            // (provider 0x14 = status::CStatusMgr, i.e. a status refresh
            // request), and ONE CMsgAction 10010 is broadcast to the whole map
            // (user+0x10 vt+0x348, flag 1) with action 0xA4, dir 1, x=y=0,
            // ext 0, +0x08 = int B, +0x24 = int A, +0x14 = now, and an EMPTY
            // packed string (the original passes local_148, not the parsed %s
            // - see docs/worker_v124_3701.md 6.4).
            // CRITICAL: the dispatcher DISCARDS this handler's return value and
            // unconditionally returns 1 (MsgServer.c:223714), so every type in
            // 3701..3798 takes id_next no matter what happens inside.
            int va = 0, vb = 0;
            char vs[256] = {0};
            int got = std::sscanf(a->param.c_str(), "%d %255s %d", &va, vs, &vb);
            if (got != 3 || va <= 0) {
                std::printf("[action] %u 3701 bad param '%s' (n=%d) -> id_next\n",
                            p.id, a->param.c_str(), got);
                cur = a->id_next;   // return value is discarded by the dispatcher
                break;
            }
            if (!p.alive) {
                // user status bit0 (dead) -> STR_DIE notice, no broadcast
                send_line(6, 0, 0, 0, 0, "STR_DIE");
                cur = a->id_next;
                break;
            }
            // FUN_140164e30(user,0,...): clear the stamp block at +0x130..+0x140
            p.stamp_a130 = 0;      // +0x130 char
            p.stamp_i134 = 0;      // +0x134 int
            p.stamp_i138 = 0;      // +0x138 int
            p.stamp_i13c = 0;      // +0x13C int
            p.stamp_s140.clear();  // +0x140 std::string
            // manager notification (uid, 0x56): status refresh via provider 0x14
            std::printf("[action] %u 3701 status refresh (uid %u, 0x56)\n",
                        p.id, p.id);
            Packet pkt = build_action_10010(
                p.id, (uint32_t)vb, 0xA4, 1, 0, 0, 0, (int32_t)va,
                (int64_t)::time(nullptr));
            GameMap& gm = w.get_or_create_map(p.map_id);
            size_t sent = 0;
            for (Player* pl : gm.players())
                if (pl->session) { pl->session->send(pkt); ++sent; }
            std::printf("[action] %u 3701 A=%d B=%d -> 10010 0xA4 to %zu/%zu\n",
                        p.id, va, vb, sent, gm.players().size());
            cur = a->id_next;
            break;
        }
        case 2007: {  // 0x7d7: generator / runtime NPC create (54 rows)
            // sscanf("%s %d %d %d %d %u %u %d %d %d %u %u %d %d %d %d %d
            //         %d %d %d %d %d %d %d %s") over 25 fields; fewer than 9
            // -> ERROR 0x324a + DBERROR and the fail branch.
            // The struct handed to FUN_1402c2390 sits at rsp+0x170 and its
            // parsed slots map to the format by offset:
            //   map = field 7, x = field 8, y = field 9, name = field 1
            // (FUN_1402c2390 does the map lookup with the 3rd struct dword,
            // and the CNpc is placed on the map with x/y from the 4th/5th,
            // while param_5 carries the name buffer). Live row:
            //   "Close~left~gate 26 21 241 2 %map_owner_id 1038 163 210
            //    20000000 24 5030100 5030101 0 ..."  -> map 1038, x 163,
            //   y 210.
            // The remaining CGameData fields are still unresolved (which one
            // is the NPC type/lookface), so no generator row is written and
            // no spawn is broadcast yet; the control flow matches the
            // original: the map must exist, otherwise the original logs
            // "CNpc::Create(), Create Npc(Type:%u, Name:%s) can't find
            // map(%u)" and fails.
            char name[256] = {0}, extra[256] = {0};
            int f2 = 0, f3 = 0, f4 = 0, f5 = 0, f8 = 0, f9 = 0, f10 = 0;
            int f13 = 0, f14 = 0, f15 = 0, f16 = 0, f17 = 0, f18 = 0;
            int f19 = 0, f20 = 0, f21 = 0, f22 = 0, f23 = 0, f24 = 0;
            unsigned f6 = 0, f7 = 0, f11 = 0, f12 = 0;
            int n = std::sscanf(a->param.c_str(),
                "%255s %d %d %d %d %u %u %d %d %d %u %u %d %d %d %d %d %d "
                "%d %d %d %d %d %d %255s",
                name, &f2, &f3, &f4, &f5, &f6, &f7, &f8, &f9, &f10,
                &f11, &f12, &f13, &f14, &f15, &f16, &f17, &f18,
                &f19, &f20, &f21, &f22, &f23, &f24, extra);
            if (n < 9) {
                std::printf("[action] %u 2007 DBERROR param '%s' (n=%d)\n",
                            p.id, a->param.c_str(), n);
                cur = a->id_nextfail;
                break;
            }
            const unsigned gmap = f7, gx = (unsigned)f8, gy = (unsigned)f9;
            if (!active_db()->map_exists(gmap)) {
                std::printf("[action] %u 2007 CNpc::Create() can't find "
                            "map(%u) for '%s' -> id_nextfail\n",
                            p.id, gmap, name);
                cur = a->id_nextfail;
                break;
            }
            // Build the runtime NPC from the fields the original labels:
            // field 1 = idOwner, field 3 = name, field 5 = itemType (used as
            // the lookface), fields 7/8/9 = map/x/y. DynaNpcSystem::create
            // inserts the cq_dynanpc row and registers the clickable record,
            // then the spawn is broadcast with the monster-style layout the
            // dyna loader uses.
            IDatabase::DynaNpcRecord rec;
            rec.ownerid  = f6;              // field 1 (idOwner)
            rec.type     = (uint32_t)f2;    // field 4 (nType)
            rec.itemid   = (uint32_t)f4;    // field 5 (itemType)
            rec.name     = name;            // field 3
            rec.lookface = (uint32_t)f4;    // itemType doubles as the look
            rec.mapid    = gmap;
            rec.cellx    = (uint16_t)gx;
            rec.celly    = (uint16_t)gy;
            const uint32_t nid =
                DynaNpcSystem::instance().create(*active_db(), rec);
            if (!nid) {
                std::printf("[action] %u 2007 generator '%s': dyna insert "
                            "failed -> id_nextfail\n", p.id, name);
                cur = a->id_nextfail;
                break;
            }
            SpawnInfo nsi;
            nsi.id = nid; nsi.name = rec.name;
            nsi.lookface = rec.lookface;
            nsi.x = rec.cellx; nsi.y = rec.celly;
            nsi.is_monster = true;      // dyna NPCs use the monster packer
            {
                auto& gm = w.get_or_create_map(gmap);
                Position gp; gp.x = rec.cellx; gp.y = rec.celly;
                Packet spn = build_spawn_10014(nsi);
                w.broadcast_to_screen(gm, gp, spn, nullptr);
                if (p.session) p.session->send(spn);
            }
            std::printf("[action] %u 2007 generator '%s' id=%u map=%u "
                        "(%u,%u) owner=%u lookface=%u\n",
                        p.id, name, nid, gmap, gx, gy, f6, rec.lookface);
            (void)f2; (void)f3; (void)f4; (void)f5; (void)f10; (void)f11;
            (void)f12; (void)f13; (void)f14; (void)f15; (void)f16; (void)f17;
            (void)f18; (void)f19; (void)f20; (void)f21; (void)f22; (void)f23;
            (void)f24;
            cur = a->id_next;
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
                                        case 2006: {  // 0x7d6: RUNTIME MONSTER CREATE (534 rows —
            // guild-war spawns). Original case body 224163-273:
            // sscanf "%d %u %u %d %d %u %u %d %s" = (pad1, pad2, MAPID,
            // X, Y, GEN_ID, MONSTERTYPE, pad3, NAME); needs >= 7
            // fields else DBERROR + FALSE (id_nextfail).
            // Row shape (DB-verified, all 534 rows): "0 0 1038 86 78
            // 1070 3120 0 GuildBeast" — map 1038, (86,78), gen 1070,
            // monstertype 3120=GuildBeast (token7 == cq_monstertype.id
            // for GuildBeast/TitanL79/Syren/UltimatePluto, token6 is a
            // valid cq_generator.id), pads always 0.
            // Flow: name token (when present) must be <= 0x24 chars
            // (NameStrCheck + FUN_14008a1d0 deeper pool check are
            // deferred — no DB row triggers them), then the map record
            // is resolved (arena guard FUN_14011dbb0 / market head
            // guard FUN_140119540 -> DBERROR + FALSE; our map model has
            // no arena/market flags, documented deviation: guards are
            // false), then a 0x40 create struct is handed to
            // CNpcManager::Create FUN_14015a110 (vtable slot +0x20 of
            // the CNpcManager at singleton+0xA0, vtable 0x140713720):
            // struct [+4]=map [+8]/[+0xC]=pads [+0x10]=gen_id
            // [+0x14]=x [+0x16]=y [+0x18]=1(set) [+0x1A]=monstertype
            // [+0x1C]=pad. Create runs CheckBornPoint FUN_14015a010
            // (map must exist; scans a 4x4 block from (x+3,y) downward
            // for a walkable cell and rewrites x/y — our maps are flat
            // with no cell data, so coords are kept as-is, documented),
            // looks up the monstertype record (unknown -> FALSE), then
            // FUN_140390070 creates the CMonster and it is registered
            // into the map monster list (+ broadcast via the normal
            // entry packets). Name token (when set and not
            // "ACTIONSTR_NONE") becomes the monster's name.
            int pad1 = 0, pad3 = 0; unsigned pad2 = 0, mapid = 0,
                genid = 0, mtype = 0; int sx = 0, sy = 0;
            char nm[128] = {0};
            int n = std::sscanf(a->param.c_str(),
                                "%d %u %u %d %d %u %u %d %127s",
                                &pad1, &pad2, &mapid, &sx, &sy, &genid,
                                &mtype, &pad3, nm);
            bool ok = false;
            if (n < 7) {
                std::printf("[action] %u: 2006 DBERROR (param '%s')\n",
                            p.id, a->param.c_str());
            } else if (nm[0] && std::strlen(nm) > 0x24) {
                std::printf("[action] %u: 2006 name > 0x24 chars\n",
                            p.id);
            } else {
                // CheckBornPoint: the map record must exist (the
                // original logs "can not find map(%u)" and fails)
                GameMap* mp = nullptr;
                for (auto& [mid, m] : w.maps())
                    if (mid == mapid) { mp = &m; break; }
                if (!mp) {
                    std::printf("[action] %u: 2006 can not find map(%u)\n",
                                p.id, mapid);
                } else {
                    Monster* mo = mp->monsters().spawn_one(
                        mtype, (uint16_t)sx, (uint16_t)sy);
                    if (!mo) {
                        std::printf("[action] %u: 2006 unknown "
                                    "monstertype %u\n", p.id, mtype);
                    } else {
                        mo->gen_id = genid;
                        if (nm[0] && strcasecmp(nm,
                                                     "ACTIONSTR_NONE") != 0)
                            mo->name = nm;
                        std::printf("[action] %u: 2006 spawn type %u "
                                    "id %u '%s' at (%u,%u) map %u "
                                    "gen %u\n", p.id, mtype, mo->id,
                                    mo->name.c_str(), mo->x, mo->y,
                                    mapid, genid);
                        std::vector<Packet> outs;
                        mp->monsters().build_spawn_packets(*mo, outs);
                        for (Player* other : mp->players())
                            if (other->session)
                                for (Packet& op : outs)
                                    other->session->send(op);
                        ok = true;
                    }
                }
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
            // 3) or 3..6 (classes 1/6); pass -> CMsgItemInfoEx 1108 (0x454)
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
                        build_item_info_ex_1108(fid, p.id,
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
        case 112: {  // NPC dialog page, mode 112 (case 0x70, MsgServer.c
            // 222645-222670; verified 2026-11-05 against the builder body
            // FUN_1403a6400 at MsgServer.c:657813 and the call site disassembly
            // at 0x140144007-0x14014406x):
            //   GetField(4) via vtbl +0x48 -> the DATA column (numeric)
            //   GetField(5) via vtbl +0x78 -> the PARAM column (text)
            //   call: FUN_1403a6400(buf, 0x70 /*mode*/, text, (u1)data, 0)
            // The builder writes payload+0x0A = param_4 (=> wire+0x0E = FACE =
            // (u1)data) and payload+0x08 = param_5 (=> wire+0x0C = reply id = 0).
            // The earlier port had face and reply-id swapped: it put data in the
            // reply slot and left the face at 0.
            send_line(112, (uint8_t)a->data, 0, 0, 0, a->param);
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
            if (a->type >= 3701 && a->type <= 3798) {
                // v124: the 3701..3798 branch of the ProcessAction ladder
                // discards the handler's return value and returns 1
                // (MsgServer.c:223714), so an unsupported sibling type
                // (3702..3798 - "unsupported ACTION type" DBERROR inside
                // FUN_14011dcb0) still advances the chain.
                std::printf("[action] %u: 3701-family type %u unsupported "
                            "-> id_next\n", p.id, a->type);
                cur = a->id_next;
                break;
            }
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
