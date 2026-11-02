#include "lua_host.hpp"

#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <sys/stat.h>
#include <dlfcn.h>

// ---------------------------------------------------------------------------
// Lua 5.2 ABI subset (declared by hand: the sandbox has the runtime but no
// headers). Pointers to these are resolved with dlsym in open().
// ---------------------------------------------------------------------------
extern "C" {
typedef struct lua_State lua_State;
typedef int (*lua_CFunction)(lua_State*);
typedef double lua_Number;
typedef long long lua_Integer;

typedef struct luaL_Reg { const char* name; lua_CFunction func; } luaL_Reg;

// from lua.h
struct lua_api {
    lua_State* (*newstate)(void);
    void       (*close)(lua_State*);
    int        (*gettop)(lua_State*);
    void       (*settop)(lua_State*, int);
    int        (*type)(lua_State*, int);
    const char*(*tolstring)(lua_State*, int, size_t*);
    lua_Integer(*tointegerx)(lua_State*, int, int*);
    void       (*pushinteger)(lua_State*, lua_Integer);
    void       (*pushnumber)(lua_State*, lua_Number);
    const char*(*pushstring)(lua_State*, const char*);
    const char*(*pushlstring)(lua_State*, const char*, size_t);
    void       (*pushcclosure)(lua_State*, lua_CFunction, int);
    void       (*createtable)(lua_State*, int, int);
    void       (*setfield)(lua_State*, int, const char*);
    void       (*getfield)(lua_State*, int, const char*);
    int        (*pcallk)(lua_State*, int, int, int, void*);
    // luaL_*
    lua_State* (*L_newstate)(void);
    void       (*L_openlibs)(lua_State*);
    int        (*L_loadfilex)(lua_State*, const char*, const char*);
    int        (*L_loadbufferx)(lua_State*, const char*, size_t, const char*,
                                const char*);
    void       (*L_requiref)(lua_State*, const char*, lua_CFunction, int);
};

static lua_api A{};
// The globals table is kept at a fixed absolute stack slot (index 1) after
// open(), obtained by running "return _G". That avoids depending on the
// version-specific registry pseudo-index (LUA_RIDX_GLOBALS needs lua_rawgeti
// plus a magic LUA_REGISTRYINDEX value, and the 5.2 getglobal/setglobal
// macros are not exported symbols).
static const int GLOBALS_SLOT = 1;
static const int LUA_OK = 0;

} // extern "C"

namespace conquer {

LuaHost& LuaHost::instance() {
    static LuaHost h;
    return h;
}

bool LuaHost::open(std::string* err) {
    if (L_) return true;
    auto fail = [&](const char* msg) {
        if (err) *err = msg;
        if (lib_) { ::dlclose(lib_); lib_ = nullptr; }
        return false;
    };
    // the sandbox ships the versioned soname only, so try both spellings
    lib_ = ::dlopen("liblua5.2.so.0", RTLD_NOW | RTLD_GLOBAL);
    if (!lib_) lib_ = ::dlopen("liblua5.2.so", RTLD_NOW | RTLD_GLOBAL);
    if (!lib_) return fail("liblua5.2 not found");

    auto sym = [&](const char* n) { return ::dlsym(lib_, n); };
    A.newstate     = (decltype(A.newstate))sym("lua_newstate");
    A.close        = (decltype(A.close))sym("lua_close");
    A.gettop       = (decltype(A.gettop))sym("lua_gettop");
    A.settop       = (decltype(A.settop))sym("lua_settop");
    A.type         = (decltype(A.type))sym("lua_type");
    A.tolstring    = (decltype(A.tolstring))sym("lua_tolstring");
    A.tointegerx   = (decltype(A.tointegerx))sym("lua_tointegerx");
    A.pushinteger  = (decltype(A.pushinteger))sym("lua_pushinteger");
    A.pushnumber   = (decltype(A.pushnumber))sym("lua_pushnumber");
    A.pushstring   = (decltype(A.pushstring))sym("lua_pushstring");
    A.pushlstring  = (decltype(A.pushlstring))sym("lua_pushlstring");
    A.pushcclosure = (decltype(A.pushcclosure))sym("lua_pushcclosure");
    A.createtable  = (decltype(A.createtable))sym("lua_createtable");
    A.setfield     = (decltype(A.setfield))sym("lua_setfield");
    A.getfield     = (decltype(A.getfield))sym("lua_getfield");
    A.pcallk       = (decltype(A.pcallk))sym("lua_pcallk");
    A.L_newstate    = (decltype(A.L_newstate))sym("luaL_newstate");
    A.L_openlibs    = (decltype(A.L_openlibs))sym("luaL_openlibs");
    A.L_loadfilex   = (decltype(A.L_loadfilex))sym("luaL_loadfilex");
    A.L_loadbufferx = (decltype(A.L_loadbufferx))sym("luaL_loadbufferx");
    if (!A.L_newstate || !A.L_openlibs || !A.L_loadfilex ||
        !A.L_loadbufferx || !A.pcallk || !A.setfield || !A.getfield ||
        !A.pushcclosure || !A.tointegerx || !A.pushstring) {
        return fail("liblua5.2 is missing a required symbol");
    }
    L_ = A.L_newstate();
    if (!L_) return fail("luaL_newstate failed");
    A.L_openlibs(L_);
    // park the globals table at slot 1
    {
        const char* g = "return _G";
        if (A.L_loadbufferx(L_, g, std::strlen(g), "globals", "t") != LUA_OK)
            return fail("cannot read _G");
        if (A.pcallk(L_, 0, 1, 0, nullptr) != LUA_OK)
            return fail("cannot read _G (call)");
        if (A.gettop(L_) != GLOBALS_SLOT)
            return fail("globals table did not land at slot 1");
    }
    // host API: host_log(msg), host_int(n) -> n + 1
    A.pushcclosure(L_, &LuaHost::host_log, 0);
    A.setfield(L_, GLOBALS_SLOT, "host_log");
    A.pushcclosure(L_, &LuaHost::host_int, 0);
    A.setfield(L_, GLOBALS_SLOT, "host_int");
    std::printf("[lua] engine ready (Lua 5.2 via liblua5.2.so.0)\n");
    return true;
}

void LuaHost::close() {
    if (L_ && A.close) A.close(L_);
    L_ = nullptr;
    if (lib_) { ::dlclose(lib_); lib_ = nullptr; }
}

bool LuaHost::do_string(const std::string& code, std::string* err) {
    if (!open(err) || !L_) return false;
    if (A.L_loadbufferx(L_, code.c_str(), code.size(), "chunk", "t") != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "compile error"; }
        A.settop(L_, GLOBALS_SLOT);
        return false;
    }
    if (A.pcallk(L_, 0, 0, 0, nullptr) != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "runtime error"; }
        A.settop(L_, GLOBALS_SLOT);
        return false;
    }
    return true;
}

int LuaHost::check_file(const std::string& path, std::string* err) {
    if (!open(err) || !L_) return -1;
    const int rc = A.L_loadfilex(L_, path.c_str(), "t");
    if (rc != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "compile error"; }
        A.settop(L_, 0);
        return rc;
    }
    A.settop(L_, GLOBALS_SLOT);   // drop the chunk, keep the globals
    return 0;
}

bool LuaHost::do_file(const std::string& path, std::string* err) {
    if (!open(err) || !L_) return false;
    if (A.L_loadfilex(L_, path.c_str(), "t") != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "compile error"; }
        A.settop(L_, GLOBALS_SLOT);
        return false;
    }
    if (A.pcallk(L_, 0, 0, 0, nullptr) != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "runtime error"; }
        A.settop(L_, GLOBALS_SLOT);
        return false;
    }
    return true;
}

bool LuaHost::call(const std::string& fn, std::string* err) {
    if (!open(err) || !L_) return false;
    A.getfield(L_, GLOBALS_SLOT, fn.c_str());
    if (A.type && A.type(L_, -1) != 6 /* LUA_TFUNCTION */) {
        A.settop(L_, GLOBALS_SLOT);
        if (err) *err = "no such function: " + fn;
        return false;
    }
    if (A.pcallk(L_, 0, 0, 0, nullptr) != LUA_OK) {
        if (err) { const char* m = A.tolstring ? A.tolstring(L_, -1, nullptr) : nullptr;
                   *err = m ? m : "runtime error"; }
        A.settop(L_, GLOBALS_SLOT);
        return false;
    }
    return true;
}

size_t LuaHost::check_tree(const std::string& root,
                           std::vector<std::string>* failures) {
    size_t ok = 0;
    std::vector<std::string> dirs{root};
    while (!dirs.empty()) {
        std::string d = dirs.back();
        dirs.pop_back();
        DIR* dp = ::opendir(d.c_str());
        if (!dp) continue;
        struct dirent* de;
        while ((de = ::readdir(dp))) {
            std::string n = de->d_name;
            if (n == "." || n == "..") continue;
            std::string full = d + "/" + n;
            struct stat st;
            if (::stat(full.c_str(), &st) != 0) continue;
            if (S_ISDIR(st.st_mode)) { dirs.push_back(full); continue; }
            if (n.size() < 4 || n.substr(n.size() - 4) != ".lua") continue;
            std::string err;
            if (check_file(full, &err) == 0) {
                ++ok;
            } else if (failures) {
                failures->push_back(full + ": " + err);
            }
        }
        ::closedir(dp);
    }
    return ok;
}

int LuaHost::host_log(lua_State* L) {
    const char* s = A.tolstring ? A.tolstring(L, 1, nullptr) : nullptr;
    std::printf("[lua] %s\n", s ? s : "(nil)");
    return 0;
}

int LuaHost::host_int(lua_State* L) {
    int isnum = 0;
    const lua_Integer v = A.tointegerx ? A.tointegerx(L, 1, &isnum) : 0;
    if (A.pushinteger) A.pushinteger(L, isnum ? v + 1 : 0);
    return 1;
}

} // namespace conquer
