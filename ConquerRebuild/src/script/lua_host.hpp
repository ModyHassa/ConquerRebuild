#pragma once
// ---------------------------------------------------------------------------
// Lua 5.2 scripting host (the original drives its NPC/task content through
// the 183 scripts under lua/V100). The sandbox only ships the Lua *runtime*
// (liblua5.2.so.0) with no headers, so the small API surface we need is
// declared here and resolved with dlopen at startup. When the library is
// missing the host reports unavailable and every call is a no-op, which
// keeps the server buildable on machines without Lua.
// ---------------------------------------------------------------------------
#include <string>
#include <vector>

struct lua_State;   // opaque

namespace conquer {

class LuaHost {
public:
    static LuaHost& instance();

    // dlopen + luaL_newstate + luaL_openlibs + host function registration.
    // Safe to call repeatedly; returns false when Lua is not installed.
    bool open(std::string* err = nullptr);
    bool available() const { return L_ != nullptr; }
    void close();

    lua_State* state() { return L_; }

    // Run a chunk. `err` receives the Lua message on failure.
    bool do_string(const std::string& code, std::string* err = nullptr);
    bool do_file(const std::string& path, std::string* err = nullptr);

    // Load without running (a syntax/compile check for one script file).
    // Returns 0 when the file compiles, non-zero otherwise with `err` set.
    int check_file(const std::string& path, std::string* err = nullptr);

    // Compile-check a whole tree of .lua files; returns how many compiled.
    size_t check_tree(const std::string& root,
                      std::vector<std::string>* failures = nullptr);

    // Call a global Lua function with no arguments (scripted NPC hooks).
    bool call(const std::string& fn, std::string* err = nullptr);

    // ---- host functions the scripts can call -------------------------
    // (registered as host_log / host_int; gameplay hooks plug in here)
    static int host_log(lua_State* L);
    static int host_int(lua_State* L);

private:
    LuaHost() = default;
    ~LuaHost() { close(); }
    LuaHost(const LuaHost&) = delete;
    LuaHost& operator=(const LuaHost&) = delete;

    lua_State* L_ = nullptr;
    void* lib_ = nullptr;   // dlopen handle
};

} // namespace conquer
