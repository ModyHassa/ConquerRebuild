#include "core/dispatcher.hpp"
#include "net/net.hpp"
#include "protocol/ids.hpp"
#include "handlers/default_handlers.cpp"
#include "core/database.hpp"
#include "core/mysql_db.hpp"
#include "systems/login.hpp"
#include "systems/actions.hpp"
#include "systems/dynanpc.hpp"
#include "systems/tasks.hpp"
#include <cstdio>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <vector>

using namespace conquer;

static uint16_t listen_port() {
    if (const char* p = std::getenv("CONQUER_PORT")) return static_cast<uint16_t>(std::atoi(p));
    return 5816; // same default as the original config.ini
}

int main() {
    net_init();
    Dispatcher dispatcher;
    register_default_handlers(dispatcher);
    // Database backend: MySQL when CQ_DB_HOST is set and reachable
    // (original: config.ini MySQL test/test, database "cq"), else the
    // in-memory dev database.
    static IDatabase* dbp = nullptr;
    if (const char* host = std::getenv("CQ_DB_HOST")) {
        unsigned port = 3306;
        if (const char* pt = std::getenv("CQ_DB_PORT")) port = (unsigned)std::atoi(pt);
        const char* user = std::getenv("CQ_DB_USER"); if (!user) user = "test";
        const char* pass = std::getenv("CQ_DB_PASS"); if (!pass) pass = "test";
        const char* name = std::getenv("CQ_DB_NAME"); if (!name) name = "cq";
        static MySQLDatabase mysqldb(host, port, user, pass, name);
        if (mysqldb.connected()) {
            dbp = &mysqldb;
        } else {
            std::printf("[db] MySQL unavailable, falling back to MemoryDB\n");
        }
    }
    if (!dbp) dbp = &MemoryDB::instance();
    active_db() = dbp;
    static MemoryDB& memdb = MemoryDB::instance(); (void)memdb;
    IDatabase& db = *dbp;
    // v23: real cq_action table + real NPCs from cq_npc
    conquer::ActionTable::instance().load(dbp);
    conquer::WeaponSkillTable::instance().load(dbp);
    conquer::MagicTypeTable::instance().load(dbp);
    // v29: cq_task task table + itemtype name map (task qualification)
    task_system::TaskTable::instance().load(dbp);
    task_system::ItemNameTable::instance().load(dbp);
    {
        auto& npcs = conquer::NpcSystem::instance();
        for (const auto& n : dbp->load_npcs())
            npcs.register_npc({n.id, n.name, n.map_id, n.x, n.y,
                               n.task0, n.task1, n.task2, n.task3,
                               n.task4, n.task5, n.task6, n.task7, ""});
        // v33: dyna npc records from cq_dynanpc
        conquer::DynaNpcSystem::instance().load(*dbp);
        std::printf("[npc] %zu NPCs loaded from cq_npc\n",
                    npcs.npcs_.size());
    }
    static LoginSystem login_system(db);
    attach_login_system(dispatcher, login_system);
    std::printf("ConquerRebuild server starting on port %u\n", listen_port());

    SocketHandle listener = ::socket(AF_INET, SOCK_STREAM, 0);
    if (listener == INVALID_SOCK) { std::perror("socket"); return 1; }
    int yes = 1;
    ::setsockopt(listener, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const char*>(&yes), sizeof(yes));

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(listen_port());
    if (::bind(listener, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) != 0) {
        std::perror("bind"); return 1;
    }
    if (::listen(listener, 64) != 0) { std::perror("listen"); return 1; }
    std::printf("Listening. Ctrl+C to stop.\n");

    // world tick: monster respawns (original: the map group timer pass;
    // cq_generator.rest_secs drives each point's respawn delay)
    std::thread([&] {
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            World::instance().tick(::time(nullptr));
        }
    }).detach();

    while (true) {
        sockaddr_in cli{};
        socklen_t cl = sizeof(cli);
        SocketHandle cs = ::accept(listener, reinterpret_cast<sockaddr*>(&cli), &cl);
        if (cs == INVALID_SOCK) continue;
        char ipbuf[64];
        inet_ntop(AF_INET, &cli.sin_addr, ipbuf, sizeof(ipbuf));
        std::thread([cs, ip = std::string(ipbuf), &dispatcher] {
            ClientSession session(cs, ip);
            std::printf("[connect] %s\n", ip.c_str());
            std::vector<uint8_t> buf;
            while (sock_recv_all(cs, buf)) {
                // Extract every complete packet in the buffer.
                while (buf.size() >= PACKET_HEADER_SIZE) {
                    uint16_t len, type;
                    std::memcpy(&len,  buf.data(),     2);
                    std::memcpy(&type, buf.data() + 2, 2);
                    if (len < PACKET_HEADER_SIZE || len > MAX_PACKET_SIZE) {
                        std::printf("[drop] bad length %u from %s\n", len, ip.c_str());
                        sock_close(cs);
                        return;
                    }
                    if (buf.size() < len) break; // wait for more data
                    PacketReader reader(buf, PACKET_HEADER_SIZE);
                    if (!dispatcher.dispatch(type, session, reader)) {
                        std::printf("[unhandled] type=%u len=%u from %s\n",
                                    type, len, ip.c_str());
                    }
                    buf.erase(buf.begin(), buf.begin() + len);
                }
            }
            std::printf("[disconnect] %s\n", ip.c_str());
            World::instance().remove_by_session(&session);
            sock_close(cs);
        }).detach();
    }
}
