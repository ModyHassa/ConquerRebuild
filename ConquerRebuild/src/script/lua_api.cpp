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
// GetUserInt(uid, key) / SetUserInt(uid, key, value). The key space is the
// original's (1001..1998, guard key-0x3e9 < 0x3e6). The keys pinned by the
// shipped content (PublicFunc/FuncGetValue.lua) are:
//   1003 Get_UserLookFace, 1004 Get_UserHair,
//   1037 Get_UserGuildRank, 1046 Get_UserPeerage, 1048 Get_UserVip
// plus 1001 = the user id (FUN_1404e02d0 case 0x3e9 resolves GetID). Peerage
// and VIP have no Player column yet, so those still answer -1 like an
// unmapped key in the original.
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
    if (p) {
        switch (key) {
        case 1001: v = (long long)p->id; break;
        case 1003: v = (long long)p->lookface;  break;
        case 1004: v = (long long)p->hair;      break;
        case 1037: v = (long long)p->guild_rank; break;
        default:   v = -1; break;   // not mapped yet (peerage 1046/vip 1048)
        }
    }
    lua_push_int(L, v);
    return 1;
}

int api_set_user_int(lua_State* L) {
    const long long uid = lua_arg_int(L, 1);
    const long long key = lua_arg_int(L, 2);
    const long long v   = lua_arg_int(L, 3);
    Player* p = resolve_user(uid);
    if (!p) { lua_push_int(L, -1); return 1; }
    bool ok = true;
    switch (key) {
    case 1003: p->lookface = (uint32_t)v;
               if (IDatabase* db = active_db())
                   db->update_user_lookface(p->id, (uint32_t)v);
               break;
    case 1004: p->hair = (uint32_t)v;
               if (IDatabase* db = active_db())
                   db->update_user_hair(p->id, (uint32_t)v);
               break;
    default:   ok = false; break;   // read-only or unmapped key
    }
    lua_push_int(L, ok ? 0 : -1);
    return 1;
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
    std::printf("[lua] gameplay api registered (say, get_*, add_money,"
                " GetUserInt, SetUserInt)\n");
}

} // namespace conquer
