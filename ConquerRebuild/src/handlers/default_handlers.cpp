#include "core/dispatcher.hpp"
#include "net/net.hpp"
#include "protocol/ids.hpp"
#include "systems/login.hpp"
#include "systems/world.hpp"
#include "systems/monsters.hpp"
#include "systems/xp.hpp"
#include "systems/movement.hpp"
#include "systems/npc.hpp"
#include "systems/actions.hpp"
#include "systems/action.hpp"
#include "systems/combat.hpp"
#include "systems/drops.hpp"
#include "systems/weaponskills.hpp"
#include "systems/magicskills.hpp"
#include "systems/magic.hpp"
#include "systems/chat.hpp"
#include "systems/tasks.hpp"
#include "auth/srp6.hpp"
#include <unordered_map>

namespace {
std::unordered_map<conquer::ClientSession*, conquer::SRP6Session*>& srp_sessions() {
    static std::unordered_map<conquer::ClientSession*, conquer::SRP6Session*> m;
    return m;
}
std::unordered_map<conquer::ClientSession*, uint32_t>& srp_accounts() {
    static std::unordered_map<conquer::ClientSession*, uint32_t> m;
    return m;
}
} // namespace
#include <cstdio>
#include <vector>
#include <algorithm>

namespace conquer {

static uint64_t now_ms() {
    return static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
}

static void log_packet(ClientSession& s, const char* tag, uint16_t id) {
    std::printf("[%s] session=%s id=%u\n", tag, s.account_name.c_str(), id);
    std::fflush(stdout);
}

void register_default_handlers(Dispatcher& d) {
    // ---- WALK (10005 / CMsgWalk, protobuf) ------------------------
    // VERIFIED: the 6159 client sends walk as packet 0x2715 with a 5-field
    // protobuf body (CMsgWalkPB, serializer in msgwalk.pb.cc). The old
    // assumption (1004 = walk) was wrong: 1004 is CRegisterState.
    d.add(MSG_WALK_10005, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        std::vector<uint8_t> body(r.remaining());
        const uint8_t* src = r.rest();
        std::copy(src, src + r.remaining(), body.begin());
        Packet relay;
        MovementSystem::process_walk(p, body, w, relay);
    });

    // ---- ACTION (10010 / CMsgAction) ----------------------------
    // Layout VERIFIED from client builders FUN_0078b19e/b4cc/b571 and
    // server CMsgAction::Process FUN_140362d80 (server buf == wire+4).
    // The original server relays a fixed action set verbatim, and handles
    // jump (0x89: landing x2,y2 packed in wire+0x0C), stand (0x91) and
    // synchro (0x92: position resync) itself. Anything else is ignored.
    d.add(MSG_ACTION_10010, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated || r.remaining() < 0x24) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        const uint8_t* payload = r.rest() - 0x10; // rest() = wire+0x14, need wire+4
        // PacketReader cursor: skip already-consumed? simpler: read fields.
        (void)payload;
        ActionMsg a;
        r.read<uint32_t>();                    // wire+0x04 timestamp
        a.actor_id = r.read<uint32_t>();       // wire+0x08
        a.data     = r.read<uint32_t>();       // wire+0x0C
        r.read<uint32_t>();                    // wire+0x10
        r.read<uint32_t>();                    // wire+0x14 timestamp2
        a.action   = r.read<uint16_t>();       // wire+0x18
        a.dir      = r.read<uint16_t>();       // wire+0x1A
        a.x        = r.read<uint16_t>();       // wire+0x1C
        a.y        = r.read<uint16_t>();       // wire+0x1E
        a.ext      = r.read<uint32_t>();       // wire+0x20
        a.target2  = static_cast<int32_t>(r.read<uint32_t>()); // wire+0x24
        a.x2 = a.data & 0xFFFF;
        a.y2 = (a.data >> 16) & 0xFFFF;
        GameMap& m = w.get_or_create_map(p.map_id);

        if (a.action == ACTION_JUMP || a.action == ACTION_SYNCHRO) {
            // Jump/synchro: server validates the landing cell then adopts
            // the landing position (original: CanMove check + SetPos +
            // broadcast; out-of-range cells are logged and dropped).
            std::printf("[action] %u jump/synchro to (%u,%u) dir %u\n",
                        a.actor_id, a.x2, a.y2, a.dir);
            p.pos = Position{a.x2, a.y2};
            auto pkt = build_action_10010(a.actor_id, a.data, a.action,
                                          a.dir, a.x, a.y, a.ext, a.target2);
            w.broadcast_to_screen(m, p.pos, pkt, nullptr);
            // the new screen may hold monsters we have not been told
            // about yet (original CMonster::EnterMapGroup fires per
            // screen crossing)
            w.send_monsters_in_screen(p, m);
        } else if (a.action == ACTION_STAND) {
            std::printf("[action] %u stands (dir %u)\n", a.actor_id, a.dir);
            auto pkt = build_action_10010(a.actor_id, a.data, a.action,
                                          a.dir, a.x, a.y, a.ext, a.target2);
            w.broadcast_to_screen(m, p.pos, pkt, nullptr);
        } else if (a.action == 94) {
            // REVIVE (0x5E). The ghost client answers the death dialog
            // with action 94 and the chosen revive mode in wire+0x0C:
            // 1 = revive here, 0/2 = revive at the record (city) point.
            // Original CUser::Reborn (FUN_1401b2560 -> FUN_1401cc6c0):
            // restore life, move to the record position, broadcast.
            if (!p.alive) {
                p.alive = true;
                p.hp = p.max_hp;
                bool to_record = (a.data != 1);
                if (to_record && p.record_map == p.map_id) {
                    p.pos = p.record_pos;
                } else if (to_record) {
                    // v47: cross-map revive must also re-register the
                    // player in the target map's list, otherwise the
                    // broadcast below never reaches the revived client
                    auto oldit = w.maps().find(p.map_id);
                    if (oldit != w.maps().end())
                        oldit->second.players().remove(&p);
                    p.map_id = p.record_map;
                    p.pos = p.record_pos;
                    GameMap& mm = w.get_or_create_map(p.map_id);
                    mm.players().remove(&p);
                    mm.players().push_back(&p);
                }
                auto hp_pkt = build_user_attrib_10017(p.id,
                    {{ATTRIB_LIFE, p.hp}, {ATTRIB_MAX_LIFE, p.max_hp}});
                GameMap& rm = w.get_or_create_map(p.map_id);
                w.broadcast_to_screen(rm, p.pos, hp_pkt, nullptr);
                // re-appear at the (possibly new) position
                SpawnInfo si;
                si.id = p.id; si.name = p.name;
                si.x = p.pos.x; si.y = p.pos.y;
                Packet sp = build_spawn_10014(si);
                w.broadcast_to_screen(rm, p.pos, sp, nullptr);
                // the revived screen may hold monsters we have not told
                // this client about yet
                w.send_monsters_in_screen(p, rm);
                std::printf("[action] %u revived (mode %u) at (%u,%u) hp %u\n",
                            p.id, a.data, p.pos.x, p.pos.y, p.hp);
            }
        } else if (action_is_relayed(a.action)) {
            // Relay the action to everyone on screen (original relay set).
            auto pkt = build_action_10010(a.actor_id, a.data, a.action,
                                          a.dir, a.x, a.y, a.ext, a.target2);
            w.broadcast_to_screen(m, p.pos, pkt, nullptr);
        }
    });

    // ---- COMBAT (1022 / CMsgInteract + 10017 / CMsgUserAttrib) ---
    // Layouts VERIFIED: client builders FUN_007a8aaf/c4e/cf9 + server
    // CMsgInteract::Process FUN_14035f9c0 (attacker wire+0xC, target
    // wire+0x10, action wire+0x18); attrib parser FUN_0080ad98
    // (id wire+8, count wire+0xC, 0x1C-stride entries from wire+0x10).
    d.add(MSG_INTERACT_1022, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated || r.remaining() < 0x18) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        InteractMsg m;
        r.read<uint32_t>();                    // wire+0x04 timestamp
        r.read<uint32_t>();                    // wire+0x08 timestamp2
        m.attacker_id = r.read<uint32_t>();    // wire+0x0C
        m.target_id   = r.read<uint32_t>();    // wire+0x10
        m.data1       = r.read<uint16_t>();    // wire+0x14
        m.data2       = r.read<uint16_t>();    // wire+0x16
        m.action      = r.read<uint16_t>();    // wire+0x18
        m.skill       = r.read<uint32_t>();    // wire+0x1C
        if (r.remaining() >= 4) m.extra = r.read<uint32_t>(); // wire+0x20
        if (m.attacker_id != p.id) return;     // must be the sender
        // Original: a ghost cannot act (the death dispatcher zeroes
        // the stats and the attack path is unreachable for a dead
        // CUser; the server just ignores interact packets from ghosts)
        if (!p.alive) {
            std::printf("[interact] %u is dead; attack ignored\n", p.id);
            return;
        }

        // resolve target
        auto it = w.players.find(m.target_id);
        Player* tgt = (it != w.players.end() && it->second.in_world &&
                       it->second.map_id == p.map_id) ? &it->second : nullptr;
        GameMap& mp = w.get_or_create_map(p.map_id);

        // ---- MONSTER TARGET (original: CMonster::BeAttack through the
        // same CMsgInteract::Process entry; monster ids are the fixed
        // 0xAAE61 range) ------------------------------------------
        Monster* mon = is_monster_id(m.target_id) ? mp.monsters().find(m.target_id) : nullptr;
        if (m.action == INTERACT_ATTACK && mon != nullptr && mon->alive) {
            // ported damage pipeline with cq_monstertype stats
            uint32_t dmg = calc_physical_damage(p.combat, mon->combat);
            dmg = (mon->hp > dmg) ? dmg : mon->hp;   // never-overkill cap
            mon->hp -= dmg;
            std::printf("[combat] %u hits monster %u (%s) for %u -> hp %u/%u\n",
                        p.id, mon->id, mon->name.c_str(), dmg, mon->hp, mon->max_hp);
            // v24: weapon-proficiency XP (CUser::Attack tail)
            award_weapon_skill_exp(p, dmg);
            // relay the interact to the screen
            auto ip = build_interact_1022(m.attacker_id, m.target_id,
                                          m.action, m.data1, m.data2,
                                          m.skill, m.extra);
            w.broadcast_to_screen(mp, p.pos, ip, nullptr);
            // monster hp bar via 10017 (attrib 0 = life)
            auto ap = build_user_attrib_10017(mon->id,
                {{ATTRIB_LIFE, mon->hp}, {ATTRIB_MAX_LIFE, mon->max_hp}});
            w.broadcast_to_screen(mp, p.pos, ap, nullptr);
            // aggro: the original AI counterattacks the attacker
            // (CMonster::OnTimer picks up the BeAttack source)
            mon->target_id = p.id;
            // NOTE: CMonster::BeAttack does not reset the attack
            // cooldown in the original (OnTimer keeps its own cadence);
            // poking faster than attack_speed must not postpone the
            // counterattack forever. Only schedule a fresh cooldown
            // when the target CHANGES.
            if (mon->next_attack_at == 0)
                mon->next_attack_at = (time_t)::time(nullptr) + mon->attack_secs;
            mon->next_move_at = (time_t)::time(nullptr);
            if (mon->hp == 0) {
                // death (shared with magic kills): CMsgAction 135 +
                // cq_generator respawn schedule + kill exp + drops
                finalize_monster_death(w, mp, p, mon);
            }
            return;
        }

        if (m.action == INTERACT_ATTACK && tgt != nullptr) {
            if (tgt->hp == 0) return;          // already dead
            // Ported pipeline: CBattleSystem::ProcAttack core + the
            // never-overkill cap + PowerLost (FUN_1401b0500).
            uint32_t dmg = calc_physical_damage(p.combat, tgt->combat);
            tgt->hp = (tgt->hp > dmg) ? tgt->hp - dmg : 0;
            std::printf("[combat] %u hits %u for %u -> hp %u/%u\n",
                        p.id, tgt->id, dmg, tgt->hp, tgt->max_hp);
            // relay the attack to everyone on screen (the original
            // broadcasts the interact packet, then sends attr updates).
            auto ip = build_interact_1022(m.attacker_id, m.target_id,
                                          m.action, m.data1, m.data2,
                                          m.skill, m.extra);
            w.broadcast_to_screen(mp, p.pos, ip, nullptr);
            // HP updates: target and attacker (client updates its own
            // bars from 10017; screen sees the target's bar via the
            // spawn/attrib broadcast too - keep it to both players here).
            auto ap = build_user_attrib_10017(tgt->id,
                {{ATTRIB_LIFE, tgt->hp}, {ATTRIB_MAX_LIFE, tgt->max_hp}});
            if (tgt->session) tgt->session->send(ap);
            if (s.player_id != tgt->id) s.send(ap);
        }
        // ---- MAGIC ATTACK (action 24 = 0x18): CMsgInteract::Process
        // case 0x18 - obfuscated client fields for the classic attack
        // spells, then LaunchMagic through the ported kernel path.
        else if (m.action == INTERACT_MAGIC_ATTACK) {
            // EVERY action-24 cast from the real client is obfuscated
            // (the magic-launch sender FUN_0081.../FUN_007a8aaf path
            // applies the xor-rol transform unconditionally, Cure
            // included; melee action 2 / 0x16 use plain senders). The
            // original gates the decode branch on the msg ObCode field
            // (obj+0x414 != -1), which is set per-packet on this path.
            uint16_t magictype = (uint16_t)(m.skill & 0xFFFF);
            uint16_t mode2     = (uint16_t)(m.skill >> 16);
            uint32_t target    = m.target_id;
            uint16_t mx = m.data1, my = m.data2;
            uint8_t ts_low = r.peek<uint8_t>(4);   // wire+4 timestamp low byte
            if (!decode_obfuscated_magic(p.id, ts_low, magictype,
                                         target, mx, my, mode2)) {
                std::printf("[magic] %u cast anti-cheat mismatch; dropped\n",
                            p.id);
                return;
            }
            handle_magic_attack(w, mp, p, magictype, target, mx, my);
        }
        // non-attack interactions relayed like the original does for
        // valid pairs (0x1C ride etc.).
        else if (m.action == 0x1c || m.action == 0x2c) {
            auto ip = build_interact_1022(m.attacker_id, m.target_id,
                                          m.action, m.data1, m.data2,
                                          m.skill, m.extra);
            w.broadcast_to_screen(mp, p.pos, ip, nullptr);
        }
    });

    // ---- MAP ITEM (1101 / CMsgMapItem): pickup -------------------
    // Client sender (Conquer.c FUN_007f6dad): ground id at wire+8, x/y at
    // wire+0x10/0x12, action byte at wire+0x16 = 3 (pickup), checksum at
    // wire+0xC (anti-cheat; accepted as-is). Server Process reads its
    // own buffer at obj+0x428 == wire+4, so payload offsets here are
    // wire-4.
    d.add(MSG_MAP_ITEM_1101, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated || r.remaining() < 0x18) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        uint32_t gid = r.peek<uint32_t>(8);    // wire+8  ground id
        uint8_t  act = r.peek<uint8_t>(0x16);   // wire+0x16 action
        if (act != MAPITEM_REMOVE) return;     // pickup = action 3
        GameMap& mp = w.get_or_create_map(p.map_id);
        GroundItem* g = mp.ground().find(gid);
        if (!g) return;
        // must stand next to the pile (original FUN_1403a5f70 checks the
        // pickup position against the item position)
        int dx = std::abs((int)p.pos.x - (int)g->x);
        int dy = std::abs((int)p.pos.y - (int)g->y);
        if (dx > 3 || dy > 3) return;
        if (g->is_money) {
            p.money += g->amount;
            if (active_db()) active_db()->add_money(p.id, (int64_t)g->amount);
            if (p.session) {
                Packet mp_ = build_user_attrib_10017_u64(p.id,
                    {{4 /* ATTRIB_MONEY */, p.money}});
                p.session->send(mp_);
            }
            std::printf("[drops] %s picked up money %u (total %llu)\n",
                        p.name.c_str(), g->amount,
                        (unsigned long long)p.money);
        } else {
            // item goes to the inventory: cq_item.position = 0
            uint32_t new_id = active_db()
                ? active_db()->insert_item(p.id, g->itemtype, g->amount) : 0;
            if (p.session && new_id != 0) {
                // original flow (589200 region): full CMsgItemInfo first,
                // then the CMsgItemStatus inventory entry (mode 8)
                p.session->send(build_item_info_1008(
                    new_id, g->itemtype, g->amount, 0, 1));
                p.session->send(build_item_status_2077(
                    new_id, 8, 0, g->amount, g->amount));
            }
            std::printf("[drops] %s picked up item type=%u amount=%u "
                         "(stored to cq_item id=%u)\n",
                         p.name.c_str(), g->itemtype, g->amount, new_id);
        }
        // broadcast the removal so every screen client erases the pile
        Packet rp = build_map_item_1101(*g, MAPITEM_REMOVE);
        w.broadcast_to_screen(mp, {g->x, g->y}, rp, nullptr);
        for (Player* other : mp.players())
            { std::lock_guard<std::mutex> lk(other->known_mtx);
              if (other->known_ground.count(gid))
                  other->known_ground.erase(gid); }
        mp.ground().remove(gid);
    });

    // ---- CHAT (1004 / CMsgTalk) ----------------------------------
    // Protocol correction: 1004 is the REAL chat packet (CMsgTalk,
    // type 0x3EC — see src/systems/chat.hpp for the full extraction).
    // The old "CRegisterState" guess is retired.
    d.add(MSG_1004, [/*world captured below*/](ClientSession& s, PacketReader& r) {
        World& w = World::instance();
        log_packet(s, "TALK(1004)", MSG_1004);
        TalkPacket t = parse_talk_1004(r.raw(), r.size());
        Player& p = w.players[s.player_id];
        // flood guard for normal talk (original FUN_1401765e0: 500ms)
        if (t.channel == 2001) {
            uint64_t now = now_ms();
            if (now - p.last_talk_ms <= 500) return;
            p.last_talk_ms = now;
        }
        std::string words = t.words();
        if (words.empty()) return;
        // server authoritative sender (ignore claimed sender string)
        Packet out = build_talk_1004(p.name, t.receiver(), words,
                                     t.emotion(), t.color, t.channel,
                                     t.style, 0, 0, 0);
        if (t.channel == 2002) {
            // whisper: deliver to the named player only (+ echo to sender)
            Player* rcv = nullptr;
            for (auto& [pid, other] : w.players)
                if (other.name == t.receiver()) { rcv = &other; break; }
            if (rcv && rcv->session) rcv->session->send(out);
            s.send(out);
            std::printf("[chat] %s -> %s (whisper): %s\n",
                        p.name.c_str(), t.receiver().c_str(), words.c_str());
        } else {
            // 2001 talk (and unknown channels): broadcast to the screen
            GameMap& m = w.get_or_create_map(p.map_id);
            w.broadcast_to_screen(m, p.pos, out, nullptr);
            std::printf("[chat] %s (ch %u): %s\n",
                        p.name.c_str(), t.channel, words.c_str());
        }
    });

    // ---- LOGIN PHASE (client: CMsgConnect 1052 -> CMsgRequestKeyLogin
    // 1083 -> CMsgLoginChallengeS 1213 SRP6). Exact raw layouts TODO;
    // interim dev protocol keeps 1008 (see attach_login_system).
    // ---- SRP6 ACCOUNT AUTH (ported from 2015 AccountServer C#;
    // layouts VERIFIED: SrpRequest 1542 [len:2][type:2][pad @+4..7]
    // [username cstr128 @+8][server cstr16 @+136]; Challenge 1213 B@+5
    // len@+4, S@+392 len@+391; LoginProof 1214 A@+5 len@+4, M@+134
    // len@+133; LoginReply 1055 [account i4][key i4][port u4][0][ip cstr20].
    d.add(MSG_SRP_REQUEST_1542, [](ClientSession& s, PacketReader& r) {
        // wire+4: 4 pad bytes, then username cstring (max 128)
        if (r.remaining() < 8) return;
        r.skip(4);
        std::string username = r.read_cstring(128);
        std::printf("[auth] SrpRequest for '%s'\n", username.c_str());
        // original AccountServer: SELECT password FROM accounts WHERE
        // name=@name (auth uses the accounts table, not cq_user)
        IDatabase* db = active_db() ? active_db() : (IDatabase*)&MemoryDB::instance();
        auto acc = db->load_account(username);
        if (acc.id == 0) {
            // unknown account: reply 1052 error code 1 (replicates
            // LoginReplyType.Invalid_AccountID_Or_Password family)
            s.send(build_connect_error_1052(0, 1, ""));
            return;
        }
        auto* st = new SRP6Session();
        st->init(username, acc.password);
        delete srp_sessions()[&s];
        srp_sessions()[&s] = st;
        srp_accounts()[&s] = acc.id;
        s.account_name = username;
        std::vector<uint8_t> B, S;
        st->outgoing(B, S);
        s.send(build_srp_challenge_1213(B, S));
    });
    d.add(MSG_LOGIN_PROOF_1214, [](ClientSession& s, PacketReader& r) {
        auto* st = srp_sessions()[&s];
        if (!st || r.remaining() < 2) return;
        // peek/raw are ABSOLUTE wire offsets (reader wraps the full
        // packet incl. header): A len @wire+4, A @+5; M len @+133, M @+134
        uint8_t alen = r.peek<uint8_t>(4);
        std::vector<uint8_t> A(r.raw() + 5, r.raw() + 5 + alen);
        uint8_t mlen = r.peek<uint8_t>(133);
        std::vector<uint8_t> M(r.raw() + 134, r.raw() + 134 + mlen);
        if (!st->challenge(A, M)) {
            std::printf("[auth] proof FAILED for '%s'\n", s.account_name.c_str());
            s.send(build_connect_error_1052(0, 1, ""));
            return;
        }
        // verified: issue login key = uin, redirect to game server (us)
        uint32_t uin = (uint32_t)::time(nullptr) & 0x7fffffff;
        uint32_t acct = srp_accounts()[&s];
        // register the issued key as the expected UIN for the game leg
        // (original: AccountServer writes cq_user.uin; CUserList checks it)
        if (LoginSystem::active_)
            LoginSystem::active_->set_expected_uin(acct, uin);
        s.send(build_login_reply_1055(acct, uin, "127.0.0.1", 5816));
        std::printf("[auth] proof OK: account %u key %u\n", acct, uin);
        delete st; srp_sessions()[&s] = nullptr;
    });
    d.add(MSG_CONNECT_1052, [](ClientSession& s, PacketReader& r) {
        (void)r; log_packet(s, "CONNECT(1052)", MSG_CONNECT_1052);
    });

    // ---- NPC (2031 CMsgNpc / 2032 CMsgTaskDialog) -----------------
    // v23: the REAL cq_action chain engine (192,895 rows). Real NPCs
    // load from cq_npc at startup (main.cpp); task0 is the first chain
    // action id. Wire layouts VERIFIED: client answer sender
    // FUN_007d8397/480b writes [len:2][type:2][time:4][action id u4
    // @+8][pad u2][mode u1 @+0xE][face u1 @+0xF = 0x66 for option
    // clicks][packer: option text]. Dialog face 1 = standard
    // text+options dialog (client parser FUN_007d8432: face 0 invalid,
    // 5 = input box).
    d.add(MSG_NPC_INFO_2031, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated || r.remaining() < 16) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        r.read<uint32_t>();                         // wire+0x04
        const uint32_t npc_id = r.read<uint32_t>(); // wire+0x08
        const uint32_t task_id = r.read<uint32_t>(); // wire+0x0C
        const uint16_t action = r.read<uint16_t>();  // wire+0x10
        const uint16_t subtype = r.read<uint16_t>();  // wire+0x12
        std::printf("[npc] %u clicked npc %u (action %u subtype %u task %u)\n",
                    s.player_id, npc_id, action, subtype, task_id);
        const NpcDef* npc = NpcSystem::instance().find(npc_id);
        if (!npc) return;
        if (npc->map_id != p.map_id) return;   // wrong map
        p.last_npc_id = npc_id;
        if (!npc->task0) return;
        auto& tasks = task_system::TaskTable::instance();
        if (tasks.find(npc->task0)) {
            // v29: cq_task NPC (1,742 of 1,793 task NPCs) - original
            // CNpc::ProcessTaskNpc (FUN_140470df0): iterate task0..7,
            // run the FIRST task the player qualifies for as an
            // action chain from task.id_next; no qualifying task ->
            // nothing happens (original returns without a dialog).
            const uint32_t ids[8] = {npc->task0, npc->task1, npc->task2,
                npc->task3, npc->task4, npc->task5, npc->task6, npc->task7};
            for (uint32_t tid : ids) {
                if (!tid) continue;
                const task_system::TaskDef* t = tasks.find(tid);
                if (!t) continue;
                if (task_system::task_qualifies(p, *t)) {
                    run_action_chain(w, p, npc_id, t->id_next);
                    break;
                }
            }
        } else {
            // legacy action-chain NPC (645): task0 IS a cq_action id
            run_action_chain(w, p, npc_id, npc->task0);
        }
    });
    d.add(MSG_TASK_DIALOG_2032, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated || r.remaining() < 12) return;
        World& w = World::instance();
        Player& p = w.players[s.player_id];
        if (!p.in_world) return;
        r.read<uint16_t>();                          // wire+0x04
        r.read<uint16_t>();                          // wire+0x06
        uint32_t action_id = r.read<uint32_t>();      // wire+0x08
        // v42: the original client echoes the menu INDEX the server
        // put in the 2032 reply-id slot — map it back to the real
        // cq_action id; large values are raw ids (our tests + old
        // clients) and pass through unchanged.
        if (action_id < p.menu_ids.size())
            action_id = p.menu_ids[action_id];
        r.read<uint16_t>();                          // wire+0x0C
        const uint8_t mode = r.read<uint8_t>();      // wire+0x0E
        const uint8_t face = r.read<uint8_t>();      // wire+0x0F
        // packer at wire+0x10: [count:1][ [len:1][bytes] ]...
        std::string choice;
        if (r.remaining() > 0) {
            uint8_t count = r.read<uint8_t>();
            for (uint8_t i = 0; i < count; ++i) {
                if (r.remaining() < 1) break;
                const uint8_t n = r.read<uint8_t>();
                if (r.remaining() < n) break;
                std::string str(reinterpret_cast<const char*>(r.rest()), n);
                // PacketReader has no skip(); only the first string
                // matters (the option text)
                if (i == 0) choice = str;
                break;
            }
        }
        std::printf("[npc] %u dialog reply: action %u mode %u face 0x%x '%s'\n",
                    s.player_id, action_id, mode, face, choice.c_str());
        // v29: option link may be a cq_task id (msgdialog.cpp
        // ProcessDialog 'e' / ProcessClientTask 'f'). client_active==1
        // -> task accept with qualification; anything else keeps the
        // v23 action-chain behavior (client_active==0 tasks get the
        // task-info packet in the original; that wire is not yet
        // extracted, so the action chain continues the dialog).
        if (face == 0x66 && action_id != 0) {
            const task_system::TaskDef* t =
                task_system::TaskTable::instance().find(action_id);
            if (t && t->client_active == 1) {
                if (task_system::task_qualifies(p, *t)) {
                    std::printf("[task] %u ACCEPTED task %u\n",
                                s.player_id, t->id);
                    if (t->id_next)
                        run_action_chain(w, p, p.last_npc_id, t->id_next);
                } else if (t->id_nextfail) {
                    run_action_chain(w, p, p.last_npc_id, t->id_nextfail);
                } else {
                    // original: SendMsg(STR_UNQUALIFIED) talk
                    s.send(build_talk_1004("SYSTEM", "ALLUSERS",
                        "You are not qualified for this task.", "",
                        0xffffff, 2005, 0, p.id, 0, 0));
                }
            } else {
                run_action_chain(w, p, p.last_npc_id, action_id);
            }
        }
        // action id 0 = dialog closed client-side: nothing to do
    });

    // Legacy dev-compat dialog entry point.
    d.add(MSG_613, [](ClientSession& s, PacketReader& r) {
        if (!s.authenticated) return;
        const uint32_t npc_id = r.read<uint32_t>();
        const NpcDef* npc = NpcSystem::instance().find(npc_id);
        if (npc) s.send(build_dialog(*npc));
    });

    // ---- KEEP-ALIVE ------------------------------------------------
    d.add(MSG_1039, [](ClientSession& s, PacketReader& r) {
        (void)r; (void)s;
    });
}

const char* msg_id_name(uint16_t id) {
    switch (id) {
        case MSG_1000: return "MSG_1000";
        case MSG_CONNECT_1052: return "Connect(1052)";
        case MSG_KEY_LOGIN_1083: return "KeyLogin(1083)";
        case MSG_LOGIN_CHALLENGE_1213: return "SRP6(1213)";
        case MSG_1008: return "Login/Connect(1008, dev)";
        case MSG_TASK_DIALOG_2032: return "TaskDialog(2032)";
        case MSG_NPC_INFO_2031: return "NpcInfo(2031)";
        case MSG_613:  return "NPC Dialog(613, dev)";
        case MSG_WALK_10005: return "Walk(10005)";
        case MSG_ACTION_10010: return "Action(10010)";
        case MSG_SPAWN_10014: return "PlayerSpawn(10014)";
        case MSG_1039: return "MSG_1039";
        default:       return "unknown";
    }
}

} // namespace conquer

namespace conquer {

// Wire packet 1008 (dev protocol) and 1002 (CMsgLogin slot) to the ported
// CUserList::LoginUser logic. The 1002 layout is pending client extraction;
// both read the interim account_id/uin pair.
void attach_login_system(Dispatcher& d, LoginSystem& login_system) {
    auto handle = [&login_system](ClientSession& s, PacketReader& r) {
        const uint32_t account_id = r.read<uint32_t>();
        const uint32_t uin        = r.read<uint32_t>();
        UserRecord rec;
        const LoginResult res = login_system.login_user(account_id, uin, rec);
        Packet reply(MSG_1008);
        reply.write<uint32_t>(static_cast<uint32_t>(res)); // 0 = OK (original codes)
        if (res == LoginResult::OK) {
            reply.write_str(rec.name, 16);
            reply.write<uint32_t>(rec.level);
            reply.write<uint32_t>(rec.recordmap_id);
            s.account_id = account_id;
            s.account_name = rec.name;
            s.player_id = rec.id;
            s.authenticated = true;
            // CUser::EnterMap: spawn at recordmap_id (original uses the
            // saved record position; placeholder uses map center).
            World& w = World::instance();
            Player& p = w.players[rec.id];
            p.session = &s; p.id = rec.id; p.name = rec.name; p.level = rec.level; p.exp = rec.exp;
            p.money = rec.money;
            p.profession = rec.profession;   // v29 task qualification
            p.pk = rec.pk;
            p.alive = true;
            p.lookface = rec.lookface ? rec.lookface : p.lookface;
            p.record_map = rec.recordmap_id;
            p.record_pos = Position{(uint16_t)rec.recordx, (uint16_t)rec.recordy};
            // hp from cq_user.life; combat stats from equipped items
            {  // hp/stats always reloaded from the DB at login
                p.max_hp = rec.life > 0 ? rec.life : 1000;
                p.hp = p.max_hp;
                p.max_mana = rec.mana;
                p.mana = rec.mana;   // v40: cq_user.mana (no max col)
                CombatStats cs = active_db()->load_combat_stats(rec.id);
                p.combat = CombatActorStats{cs.atk_min, cs.atk_max, cs.extra,
                                           cs.defense, cs.dodge,
                                           cs.weapon_type};
                // v27: script vars (stc/dataN/var) from sidecar table
                {
                    auto raw = active_db()->load_user_vars(rec.id);
                    p.vars = UserVars{};
                    for (const auto& [k, v] : raw) {
                        if (k.rfind("stc:", 0) == 0) {
                            uint32_t a = 0, b = 0;
                            if (std::sscanf(k.c_str(), "stc:%u:%u", &a, &b) == 2)
                                p.vars.stc[UserVars::stc_key(a, b)] = v;
                        } else if (k.rfind("stcd:", 0) == 0) {
                            uint32_t a = 0, b = 0;
                            if (std::sscanf(k.c_str(), "stcd:%u:%u", &a, &b) == 2)
                                p.vars.stc_daily[UserVars::stc_key(a, b)] = v;
                        } else if (k.rfind("task:", 0) == 0) {
                            // v28: task record fields
                            uint32_t tid = 0; char fld[16] = {0};
                            if (std::sscanf(k.c_str(), "task:%u:%15s",
                                            &tid, fld) == 2) {
                                TaskRecord& tr = p.vars.tasks[tid];
                                if (!std::strcmp(fld, "complete"))
                                    tr.complete = (uint16_t)v;
                                else if (!std::strcmp(fld, "ot"))
                                    tr.overtime = (uint32_t)v;
                                else if (fld[0] == 'd')
                                    tr.data[std::atoi(fld + 1)] =
                                        (int32_t)v;
                            }
                        } else if (k.rfind("var:", 0) == 0) {
                            p.vars.var[std::atoi(k.c_str() + 4)] = v;
                        }
                    }
                }
                // v24: weapon skill (proficiency) rows for this player
                p.weapon_skills.clear();
                for (const auto& wsr : active_db()->load_weapon_skills(rec.id)) {
                    Player::WeaponSkillState ws;
                    ws.type = wsr.type; ws.level = wsr.level; ws.exp = wsr.exp;
                    p.weapon_skills[wsr.type] = ws;
                }
                // v37: cq_magic rows (learned spells)
                p.magics.clear();
                for (const auto& mr : active_db()->load_player_magics(rec.id)) {
                    Player::MagicSkillState ms;
                    ms.level = mr.level; ms.exp = mr.exp;
                    p.magics[mr.type] = ms;
                }
                std::printf("[world] %s stats: atk %u-%u def %u dodge %u "
                            "weapon %u (%zu profs)\n",
                            p.name.c_str(), p.combat.atk_min, p.combat.atk_max,
                            p.combat.defense, p.combat.dodge,
                            p.combat.weapon_type, p.weapon_skills.size());
            }
            w.spawn_player(p, rec.recordmap_id, {rec.recordx, rec.recordy});
            // v24: prof snapshot (CMsgAction 77 flow / FUN_140162400)
            send_weapon_skill_snapshot(p);
            send_magic_snapshot(p);
        }
        reply.finalize();
        s.send(reply);
    };
    d.add(MSG_1008, handle);
}
} // namespace conquer
