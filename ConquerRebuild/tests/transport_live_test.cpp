// ConquerRebuild — live transport integration test (wave M-C)
// Proves the running server (1) accepts the v6159 encrypted key
// exchange on a fresh connection and (2) still serves the plaintext
// dev protocol (no regression for the existing suite).
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <openssl/dh.h>
#include <openssl/bn.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "../src/crypto/cast128.hpp"
#include "../src/crypto/dh_params.hpp"
#include "../src/crypto/msg_token.hpp"
#include "../src/net/frame.hpp"
#include "../src/net/transport.hpp"

using namespace conquer;
using namespace conquer::crypto;
using namespace conquer::net;

static int failures = 0;
static void check(bool ok, const char* what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++failures;
}

static int connect_to_server() {
    int fd = ::socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in a{};
    a.sin_family = AF_INET;
    a.sin_port = htons(5816);
    inet_pton(AF_INET, "127.0.0.1", &a.sin_addr);
    if (::connect(fd, (sockaddr*)&a, sizeof(a)) != 0) {
        ::close(fd);
        return -1;
    }
    return fd;
}

static void wr32(std::vector<unsigned char>& v, uint32_t x) {
    v.push_back((unsigned char)x);
    v.push_back((unsigned char)(x >> 8));
    v.push_back((unsigned char)(x >> 16));
    v.push_back((unsigned char)(x >> 24));
}

int main() {
    // ---- part 1: the encrypted key exchange is accepted ----
    DhParams dh;
    bool have = dh.load("../conquer_source/Source/dh.pem");
    if (!have) have = dh.load("../../conquer_source/Source/dh.pem");
    check(have, "dh.pem params for the client leg");

    if (have) {
        const BIGNUM* p = nullptr; const BIGNUM* q = nullptr;
        const BIGNUM* g = nullptr;
        DH_get0_pqg(dh.dh, &p, &q, &g);
        DH* cli = DH_new();
        DH_set0_pqg(cli, BN_dup(p), q ? BN_dup(q) : nullptr, BN_dup(g));
        DH_generate_key(cli);
        const BIGNUM* cpub = nullptr;
        DH_get0_key(cli, &cpub, nullptr);
        char* pub_hex = BN_bn2hex(cpub);

        std::vector<unsigned char> blob(17);
        for (size_t i = 0; i < blob.size(); ++i)
            blob[i] = (unsigned char)(i * 11 + 5);
        std::string srv = pub_hex;
        uint32_t total = 4 + (4 + (uint32_t)blob.size()) +
                         (4 + (uint32_t)srv.size()) + 8;
        std::vector<unsigned char> payload;
        wr32(payload, total);
        wr32(payload, (uint32_t)blob.size());
        payload.insert(payload.end(), blob.begin(), blob.end());
        wr32(payload, (uint32_t)srv.size());
        payload.insert(payload.end(), srv.begin(), srv.end());
        payload.insert(payload.end(), kClientMagic, kClientMagic + 8);

        std::vector<unsigned char> stream;
        for (int i = 0; i < 7; ++i) stream.push_back((unsigned char)(0x50 + i));
        stream.insert(stream.end(), payload.begin(), payload.end());
        CastCipher hs;
        hs.set_key(kHandshakePass, 16);
        unsigned char iv[8] = {0};
        int num = 0;
        std::vector<unsigned char> enc(stream.size());
        hs.cfb64(stream.data(), enc.data(), (int)stream.size(), iv, &num, 1);
        for (int i = 0; i < 4; ++i) enc.push_back(0);  // socket spare

        int fd = connect_to_server();
        check(fd >= 0, "connected for the handshake");
        if (fd >= 0) {
            ssize_t sent = ::send(fd, enc.data(), enc.size(), 0);
            check(sent == (ssize_t)enc.size(), "handshake bytes sent");
            ::usleep(400000);
            ::close(fd);
            ::usleep(200000);
            bool arm_logged = false;
            if (FILE* f = std::fopen("/tmp/conquer_mysql.log", "r")) {
                char line[512];
                while (std::fgets(line, sizeof(line), f))
                    if (std::strstr(line, "handshake ok from"))
                        arm_logged = true;
                std::fclose(f);
            }
            check(arm_logged, "server logged the accepted handshake");
        }

        DH_free(cli);
        OPENSSL_free(pub_hex);
    }

    // ---- part 2: the plaintext dev protocol still works ----
    {
        int fd = connect_to_server();
        check(fd >= 0, "connected for the dev login");
        if (fd >= 0) {
            std::vector<unsigned char> frame;
            uint8_t body[8] = {0};
            uint32_t acct = 100001, uin = 777;
            std::memcpy(body, &acct, 4);
            std::memcpy(body + 4, &uin, 4);
            build_frame(1008, body, 8, frame);
            ::send(fd, frame.data(), frame.size(), 0);
            unsigned char rbuf[512];
            ssize_t n = ::recv(fd, rbuf, sizeof(rbuf), 0);
            check(n >= 4, "dev login answered");
            if (n >= 4) {
                uint16_t len = 0, type = 0;
                std::memcpy(&len, rbuf, 2);
                std::memcpy(&type, rbuf + 2, 2);
                check(len >= 4 && len <= 0x400, "reply is a valid frame");
                check(type == 1008, "reply type is the 1008 login result");
                check(n < 8 || std::memcmp(rbuf + n - 8, "TQServer", 8) != 0,
                      "plaintext reply carries no TQServer magic");
            }
            ::close(fd);
        }
    }

    std::printf("RESULT: %d FAILURES\n", failures);
    return failures ? 1 : 0;
}
