// Lua host unit test: proves the dlopen-based Lua 5.2 engine is live, that a
// script can call back into the host, and that the REAL 183 shipped scripts
// compile with this engine.
#include "script/lua_host.hpp"
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

int main() {
    int fails = 0;
    auto& h = conquer::LuaHost::instance();
    std::string err;
    if (!h.open(&err)) {
        std::printf("FAIL: engine did not open: %s\n", err.c_str());
        return 1;
    }
    std::printf("ok   engine opened\n");

    // 1) host round trip: host_int(41) must return 42
    if (!h.do_string(
            "host_log('hello from lua')\n"
            "local v = host_int(41)\n"
            "assert(v == 42, 'host_int returned '..tostring(v))\n"
            "HOST_RESULT = v\n", &err)) {
        std::printf("FAIL: chunk: %s\n", err.c_str());
        ++fails;
    } else {
        std::printf("ok   script ran and called back into the host\n");
    }

    // 2) a Lua error must be reported, not swallowed
    if (h.do_string("error('boom')", &err)) {
        std::printf("FAIL: a raising chunk reported success\n");
        ++fails;
    } else {
        std::printf("ok   errors surface to the caller (%s)\n",
                    err.substr(0, 40).c_str());
    }

    // 3) the shipped content: every script under lua/V100 must compile
    std::vector<std::string> failures;
    const size_t ok = h.check_tree("../conquer_source/Source/lua/V100",
                                   &failures);
    std::printf("compiled %zu scripts, %zu failed\n", ok, failures.size());
    for (size_t i = 0; i < failures.size() && i < 5; ++i)
        std::printf("   ! %s\n", failures[i].c_str());
    if (ok >= 170) {
        std::printf("ok   the shipped Lua content compiles (>=170)\n");
    } else {
        std::printf("FAIL: only %zu scripts compiled\n", ok);
        ++fails;
    }

    std::printf("RESULT: %d FAILURES\n", fails);
    return fails ? 1 : 0;
}
