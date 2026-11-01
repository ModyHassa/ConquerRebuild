#include "core/dispatcher.hpp"
#include "net/net.hpp"
#include "net/frame.hpp"
#include "crypto/dh_params.hpp"
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

// Wave M-D: the game-socket DH instance (dh.pem params + generated key pair).
static crypto::DhParams server_dh;

static uint16_t listen_port() {
    if (const char* p = std::getenv("CONQUER_PORT")) return static_cast<uint16_t>(std::atoi(p));
    return 5816; // same default as the original config.ini
}

int main() {
    net_init();
    Dispatcher dispatcher;
    register_default_handlers(dispatcher);

    // v59: the game-socket key exchange needs the dh.pem parameters
    // (FUN_140505380 loads them and leaves DH ready with a key pair).
    if (server_dh.load("dh.pem")) {
        DH_generate_key(server_dh.dh);
    } else if (server_dh.load("../conquer_source/Source/dh.pem")) {
        DH_generate_key(server_dh.dh);
    } else {
        std::printf("[transport] dh.pem missing - encrypted handshake off\n");
    }
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
            // Wave M-D: publish the DH hello the real client waits for
            // (FUN_00806995). Gated so the dev-protocol tests keep their
            // plaintext stream.
            if (server_dh.dh && std::getenv("CQ_TRANSPORT_HELLO")) {
                std::vector<unsigned char> hello;
                if (net::build_server_hello(server_dh.dh, hello)) {
                    sock_send_all(cs, hello.data(), hello.size());
                    std::printf("[transport] hello published to %s\n",
                                ip.c_str());
                }
            }
            std::printf("[connect] %s\n", ip.c_str());
            std::vector<uint8_t> buf;
            bool handshake_tried = false;
            bool have_hdr = false;
            uint16_t elen = 0, etype = 0;
            while (sock_recv_all(cs, buf)) {
                // v59: first bytes that are NOT a valid dev frame may be
                // the encrypted key exchange (client magic "TQClient",
                // handshake passphrase "C238xs65pjy7HU9Q").
                if (!session.transport.encrypt_on && !handshake_tried &&
                    buf.size() >= 4) {
                    uint16_t dl = 0, dt = 0;
                    std::memcpy(&dl, buf.data(), 2);
                    std::memcpy(&dt, buf.data() + 2, 2);
                    const bool dev_ok = dl >= PACKET_HEADER_SIZE &&
                                        dl <= MAX_PACKET_SIZE &&
                                        dt >= 1 && dt <= 20000;
                    if (!dev_ok) {
                        if (!server_dh.dh) { handshake_tried = true; }
                        else if (buf.size() >= 11) {
                            int used = net::receive_key_exchange(
                                session.transport, server_dh.dh,
                                buf.data(), (int)buf.size());
                            if (used > 0) {
                                // the receiver returns len+7 but its second
                                // CFB pass already consumed 4 bytes past the
                                // stream (objdump 0x140505d0c reads
                                // [rsp+rdi+0x12f]) -> drop them too, else
                                // they are re-parsed as a frame header.
                                size_t drop = (size_t)used +
                                    (buf.size() >= (size_t)used + 4 ? 4 : 0);
                                if (drop > buf.size()) drop = buf.size();
                                buf.erase(buf.begin(), buf.begin() + drop);
                                std::printf("[transport] handshake ok "
                                            "from %s\n", ip.c_str());
                                continue;
                            }
                            if (used == 0) break;  // need more bytes
                            handshake_tried = true;
                        } else {
                            break;  // wait for the rest
                        }
                    }
                }
                // encrypted sessions: decrypt, then validate the
                // trailing plaintext "TQClient" magic (FUN_1404f6c90)
                if (session.transport.encrypt_on) {
                    if (!have_hdr) {
                        if (buf.size() < 4) break;
                        uint8_t h[4];
                        session.transport.stream_crypt(buf.data(), h, 4, 0);
                        std::memcpy(&elen, h, 2);
                        std::memcpy(&etype, h + 2, 2);
                        if (elen < net::kFrameMinLen ||
                            elen > net::kFrameMaxLen) {
                            std::printf("[transport] bad encrypted len "
                                        "%u from %s\n", elen, ip.c_str());
                            sock_close(cs);
                            return;
                        }
                        have_hdr = true;
                    }
                    if (buf.size() < (size_t)elen + 8) break;
                    std::vector<uint8_t> plain(elen);
                    std::memcpy(plain.data(), buf.data(), 4);
                    if (elen > 4)
                        session.transport.stream_crypt(buf.data() + 4,
                                                       plain.data() + 4,
                                                       elen - 4, 0);
                    if (std::memcmp(buf.data() + elen, "TQClient", 8) != 0) {
                        std::printf("[transport] bad magic from %s "
                                    "(elen %u elen+8 %u buf %zu) bytes:",
                                    ip.c_str(), elen, elen + 8,
                                    buf.size());
                        for (size_t k = 0; k < buf.size() && k < 24; ++k)
                            std::printf(" %02x", buf[k]);
                        std::printf("\n");
                        sock_close(cs);
                        return;
                    }
                    PacketReader ereader(plain, PACKET_HEADER_SIZE);
                    if (!dispatcher.dispatch(etype, session, ereader))
                        std::printf("[unhandled] enc type=%u len=%u\n",
                                    etype, elen);
                    buf.erase(buf.begin(), buf.begin() + elen + 8);
                    have_hdr = false;
                    continue;
                }
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
