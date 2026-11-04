// ---------------------------------------------------------------------------
// The gameplay API the scripted content calls. The original registers ~50
// names (GetUserInt/SetUserInt/stc/ChgMap/Effect/...) against numeric keys in
// the 1001..1998 range; this file starts with the read-only surface a dialog
// script needs plus say(), and is the place further keys land.
// ---------------------------------------------------------------------------
#include "script/lua_host.hpp"
#include "systems/world.hpp"
#include "systems/chat.hpp"

#include <cstdio>
#include <cstring>

namespace conquer {
namespace {

Player* ctx_player() {
    return static_cast<Player*>(LuaHost::instance().context());
}

// say(text): the dialog line the player sees (the server's SYSTEM talk 1004,
// the same builder the action chains use).
int api_say(lua_State* L) {
    Player* p = ctx_player();
    const std::string text = lua_arg_str(L, 1);
    if (!p || !p->session) return 0;
    std::printf("[lua] %s says: %s\n", p->name.c_str(), text.c_str());
    p->session->send(build_talk_1004("SYSTEM", p->name, text, "",
                                       0x00FFFFFFu /* color */,
                                       2001 /* CHANNEL_SYSTEM */,
                                       0 /* style */, 0 /* lookface */,
                                       0 /* official */, 0 /* sex */));
    return 0;
}

// read-only attribute accessors (our documented mapping of the original keys)
int api_get_level(lua_State* L)  { Player* p = ctx_player(); lua_push_int(L, p ? p->level : 0); return 1; }
int api_get_money(lua_State* L)  { Player* p = ctx_player(); lua_push_int(L, p ? p->money : 0); return 1; }
int api_get_exp(lua_State* L)    { Player* p = ctx_player(); lua_push_int(L, p ? p->exp : 0); return 1; }
int api_get_hp(lua_State* L)     { Player* p = ctx_player(); lua_push_int(L, p ? p->hp : 0); return 1; }
int api_get_mp(lua_State* L)     { Player* p = ctx_player(); lua_push_int(L, p ? p->mana : 0); return 1; }
int api_get_map(lua_State* L)    { Player* p = ctx_player(); lua_push_int(L, p ? (long long)p->map_id : 0); return 1; }
int api_get_x(lua_State* L)      { Player* p = ctx_player(); lua_push_int(L, p ? (long long)p->pos.x : 0); return 1; }
int api_get_y(lua_State* L)      { Player* p = ctx_player(); lua_push_int(L, p ? (long long)p->pos.y : 0); return 1; }

int api_get_name(lua_State* L) {
    Player* p = ctx_player();
    lua_push_str(L, p ? p->name : std::string());
    return 1;
}

// add_money(n): the classic reward path, clamped like the original's purse
int api_add_money(lua_State* L) {
    Player* p = ctx_player();
    const long long n = lua_arg_int(L, 1);
    if (!p) return 0;
    if (n >= 0) p->money += (uint32_t)n;
    else p->money = (p->money > (uint32_t)(-n)) ? p->money - (uint32_t)(-n) : 0;
    std::printf("[lua] %s money -> %u\n", p->name.c_str(), p->money);
    return 0;
}

// ---- original-named attribute API -------------------------------------
// The key space is the original's own interface enum, shipped with the
// content at BasicData/[Conquer][BasicData]ProgramInterfaceConstant.lua
// (G_PLAYER_BEGIN 1000 .. G_PLAYER_LAST 1999, keys 1001..1072 defined), and
// every value below was traced to FUN_1404e02d0's switch case for that key
// (decompiled/MsgServer.c:870826-871061). Keys the getter does not implement
// answer -1, which is exactly what the original returns for them - notably
// 1003 (LookFace): the enum says "get set" but the getter has no case, only
// the setter does.
//   PINNED here: 1001 ID, 1004 Hair, 1005 Profession, 1006 Level, 1007 MapID,
//   1008 PosX, 1009 PosY, 1019 Life, 1020 MaxLife, 1021 Mana, 1022 MaxMana,
//   1025 Money, 1029 Exp, 1036 GuildRank (sub vtable+0x170 -> guild manager
//   +0xf8), 1056 SynId.  1037 is NOT the guild rank (it is the task
//   iterator, user+0xa68) - that mix-up is fixed here.
Player* resolve_user(long long uid) {
    Player* ctx = ctx_player();
    if (uid == 0) return ctx;
    if (ctx && (long long)ctx->id == uid) return ctx;
    return nullptr;   // cross-user lookups need the world map (not wired yet)
}

int api_get_user_int(lua_State* L) {
    const long long uid = lua_arg_int(L, 1);
    const long long key = lua_arg_int(L, 2);
    Player* p = resolve_user(uid);
    long long v = -1;
    if (p && key >= 1001 && key <= 1998) {
        switch (key) {
        case 1001: v = (long long)p->id;          break;
        case 1004: v = (long long)p->hair;        break;
        case 1005: v = (long long)p->profession;  break;
        case 1006: v = (long long)p->level;       break;
        case 1007: v = (long long)p->map_id;      break;
        case 1008: v = (long long)p->pos.x;       break;
        case 1009: v = (long long)p->pos.y;       break;
        case 1019: v = (long long)p->hp;          break;
        case 1020: v = (long long)p->max_hp;      break;
        case 1021: v = (long long)p->mana;        break;
        case 1022: v = (long long)p->max_mana;    break;
        case 1025: v = (long long)p->money;       break;
        case 1029: v = (long long)p->exp;         break;
        case 1036: v = (long long)p->guild_rank;  break;
        case 1056: v = (long long)p->guild_id;    break;
        default:   v = -1; break;   // no getter case in the original
        }
    }
    lua_push_int(L, v);
    return 1;
}

// SetUserInt(uid, key, value, flag) - PINNED from FUN_140436450
// (MsgServer.c:763388): FOUR checkinteger args, uid 0 = current user, the key
// guarded to 1001..1998, and the result pushed as a BOOLEAN.
// The setter engine FUN_1404e61e0 (C:874287-874403) has NO default case: any
// in-range key that has no case falls through to `return 1` at C:874400-874402,
// so SetUserInt reports TRUE for keys it ignores. It only answers false when
// there is no user to resolve (C:874296-874299 uid==0 reaching the engine,
// C:874309-874311 the lookup failing). The wrapper's 4th arg (`flag`) is
// coerced with `flag != 0` (C:763419) and the engine signature has no 5th
// parameter, so for the setter that argument is dead - stated here rather than
// silently "used".
// The setter's case list is 1003,1004,1005,1012,1024,1032,1033,1034,1035,
// 1037,1038,1041,1042,1043,1046,1048,1054 (C:874310-874394). This build wires
// the two that map onto real columns (1003 lookface, 1004 hair); the rest fall
// through exactly like the original's missing cases, i.e. true + no write.
int api_set_user_int(lua_State* L) {
    const long long uid   = lua_arg_int(L, 1);
    const long long key   = lua_arg_int(L, 2);
    const long long v     = lua_arg_int(L, 3);
    const long long flag  = lua_arg_int(L, 4);
    (void)flag;   // dead for the setter, see above
    Player* p = resolve_user(uid);
    if (!p || key < 1001 || key > 1998) {
        lua_push_bool(L, false);   // guard failure == silent false (C:763401)
        return 1;
    }
    switch (key) {
    case 1003:
        p->lookface = (uint32_t)v;
        if (IDatabase* db = active_db())
            db->update_user_lookface(p->id, (uint32_t)v);
        break;
    case 1004:
        p->hair = (uint32_t)v;
        if (IDatabase* db = active_db())
            db->update_user_hair(p->id, (uint32_t)v);
        break;
    default:
        // in range, no case wired: the original returns 1 here too
        break;
    }
    lua_push_bool(L, true);   // C:874400-874402 fallthrough behaviour
    return 1;
}

// GetUserStr(uid, key) - PINNED from FUN_1404e0940 (MsgServer.c:871073): the
// string getter implements ONLY key 1002 (player name, sub-object vtbl+0x18),
// 1017 (mate name, user vtbl+0x40) and 1064 (a god-bless expiry string).
// This build has no mate or god-bless state, so 1002 answers the name and
// everything else answers nil, which is what an unimplemented string key
// yields in the original.
int api_get_user_str(lua_State* L) {
    const long long uid = lua_arg_int(L, 1);
    const long long key = lua_arg_int(L, 2);
    Player* p = resolve_user(uid);
    if (p && key == 1002) {
        lua_push_str(L, p->name);
        return 1;
    }
    // The wrapper always returns exactly one value (every registration ends
    // `return 1`), so an unimplemented key must still push something. The
    // exact default of FUN_1404e0940 was NOT decoded: an empty string is the
    // type-correct stand-in for a string getter (UNKNOWN, documented).
    lua_push_str(L, std::string());
    return 1;
}

// RecordPoint(uid, map, x, y) - PINNED arg contract from FUN_14043b950
// (MsgServer.c:766204: four checkinteger args, uid 0 = current user) and it
// pushes a boolean. Its engine body FUN_1404e7280 was not decoded, but the
// action 1004 port (CUser::SetRecordPos, already verified end to end) is the
// same operation: validate the map exists, store the record map/cell and
// persist it to cq_user. That is what is implemented here.
int api_record_point(lua_State* L) {
    const long long uid   = lua_arg_int(L, 1);
    const long long mapid = lua_arg_int(L, 2);
    const long long x     = lua_arg_int(L, 3);
    const long long y     = lua_arg_int(L, 4);
    Player* p = resolve_user(uid);
    if (!p || mapid <= 0 || x < 0 || y < 0) { lua_push_bool(L, false); return 1; }
    IDatabase* db = active_db();
    if (!db || !db->map_exists((uint32_t)mapid)) {
        std::printf("[lua] RecordPoint: map %lld does not exist\n", mapid);
        lua_push_bool(L, false);
        return 1;
    }
    p->record_map = (uint32_t)mapid;
    p->record_pos = Position{(uint16_t)x, (uint16_t)y};
    UserRecord r;
    r.id = p->id; r.name = p->name; r.level = p->level;
    r.recordmap_id = (uint32_t)mapid;
    r.recordx = (uint32_t)x; r.recordy = (uint32_t)y;
    db->save_user(r);
    std::printf("[lua] RecordPoint: %s -> map %lld (%lld,%lld)\n",
                p->name.c_str(), mapid, x, y);
    lua_push_bool(L, true);
    return 1;
}

// ChgMap(uid, map, x, y, force) - PINNED from the original: FUN_14043b810
// pops five checkinteger args (userID, mapID, x, y, force) and calls
// FUN_1404e7080. uid 0 means the current user. That function rejects uid==0
// or map==0, skips when the user's state byte has bit 6 set and force is 0,
// rejects a map that does not exist, rejects a cell that cannot be stood on,
// then performs the change and returns true.
// Our adaptation, stated plainly: the state-byte gate is not modelled (we
// have no such flag), the standability check is a bounds check against the
// map's dimensions (our maps are flat), and only the current user can be
// moved (cross-user lookups are not wired, same as the attribute API).
int api_chg_map(lua_State* L) {
    const long long uid   = lua_arg_int(L, 1);
    const long long mapid = lua_arg_int(L, 2);
    const long long x     = lua_arg_int(L, 3);
    const long long y     = lua_arg_int(L, 4);
    const long long force = lua_arg_int(L, 5);
    (void)force;   // no state-byte gate in this build
    Player* p = resolve_user(uid);
    if (!p || !p->session) { lua_push_bool(L, false); return 1; }
    if (mapid <= 0 || x < 0 || y < 0) {
        std::printf("[lua] ChgMap: bad args uid=%lld map=%lld (%lld,%lld)\n",
                    uid, mapid, x, y);
        lua_push_bool(L, false);
        return 1;
    }
    IDatabase* db = active_db();
    if (!db || !db->map_exists((uint32_t)mapid)) {
        std::printf("[lua] ChgMap: map %lld does not exist\n", mapid);
        lua_push_bool(L, false);
        return 1;
    }
    GameMap& m = World::instance().get_or_create_map((uint32_t)mapid);
    if (x >= m.width() || y >= m.height()) {
        std::printf("[lua] ChgMap: (%lld,%lld) outside map %lld\n",
                    x, y, mapid);
        lua_push_bool(L, false);
        return 1;
    }
    World::instance().teleport(*p, (uint32_t)mapid, (uint32_t)x, (uint32_t)y);
    lua_push_bool(L, true); return 1;
}

} // namespace

void lua_api_init() {
    auto& h = LuaHost::instance();
    if (!h.available()) return;
    h.register_fn("say", api_say);
    h.register_fn("get_level", api_get_level);
    h.register_fn("get_money", api_get_money);
    h.register_fn("get_exp", api_get_exp);
    h.register_fn("get_hp", api_get_hp);
    h.register_fn("get_mp", api_get_mp);
    h.register_fn("get_map", api_get_map);
    h.register_fn("get_x", api_get_x);
    h.register_fn("get_y", api_get_y);
    h.register_fn("get_name", api_get_name);
    h.register_fn("add_money", api_add_money);
    h.register_fn("GetUserInt", api_get_user_int);
    h.register_fn("SetUserInt", api_set_user_int);
    h.register_fn("ChgMap", api_chg_map);
    h.register_fn("GetUserStr", api_get_user_str);
    h.register_fn("RecordPoint", api_record_point);
    std::printf("[lua] gameplay api registered (say, get_*, add_money,"
                " GetUserInt, SetUserInt)\n");
}

} // namespace conquer
