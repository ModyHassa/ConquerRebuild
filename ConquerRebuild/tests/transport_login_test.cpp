// ConquerRebuild — wave M-E: encrypted-session login round trip.
// Models the v6159 client against the LIVE server (started with
// CQ_TRANSPORT_HELLO=1 on CQ_TEST_PORT):
//   server hello (FUN_00806995 parse) -> client DH from the hello's p/g
//   -> CAST token (FUN_00806399 chain) -> client handshake (FUN_008064c9)
//   -> encrypted 1008 login frame with the trailing "TQClient" magic
//   -> decrypt the server's "TQServer"-framed replies.
#include "../src/crypto/cast128.hpp"
#include "../src/crypto/msg_token.hpp"
#include "../src/crypto/dh_params.hpp"
#include "../src/net/transport.hpp"

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

using namespace conquer;

static int g_fail = 0;
static void check(bool ok, const char* what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++g_fail;
}

static int connect_to(int port) {
    int fd = ::socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in a{};
    a.sin_family = AF_INET;
    a.sin_port = htons((uint16_t)port);
    a.sin_addr.s_addr = inet_addr("127.0.0.1");
    struct timeval tv{};
    tv.tv_sec = 4;   // never block the suite on a missing reply
    ::setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));
    if (::connect(fd, reinterpret_cast<sockaddr*>(&a), sizeof(a)) != 0) {
        ::close(fd);
        return -1;
    }
    return fd;
}

static bool recv_all(int fd, std::vector<unsigned char>& out, size_t want) {
    out.resize(want);
    size_t got = 0;
    while (got < want) {
        ssize_t n = ::recv(fd, out.data() + got, want - got, 0);
        if (n <= 0) return false;
        got += (size_t)n;
    }
    return true;
}

int main() {
    const int port = 5817;   // dedicated transport server (suite starts it)
    int fd = connect_to(port);
    check(fd >= 0, "connected to the transport server");
    if (fd < 0) return 1;

    // ---- 1) server hello: 15-byte header then the payload ----
    std::vector<unsigned char> hdr;
    check(recv_all(fd, hdr, 15), "hello header received");
    crypto::CastCipher hk;
    hk.set_key("C238xs65pjy7HU9Q", 16);
    unsigned char hiv[8] = {0};
    int hnum = 0;
    unsigned char hdr_plain[15];
    hk.cfb64(hdr.data(), hdr_plain, 15, hiv, &hnum, 0);
    uint32_t hlen = 0;
    std::memcpy(&hlen, hdr_plain + 11, 4);
    check(hlen > 0xb && hlen < 0x401, "hello payload length sane");
    if (!(hlen > 0xb && hlen < 0x401)) { ::close(fd); return 1; }
    // the wire is [15 header][hlen payload][8 magic]: read it all, then
    // decrypt as one CFB64 stream (the client decrypts incrementally with
    // the same ctx, num/ivec carried across the calls).
    std::vector<unsigned char> rest;
    check(recv_all(fd, rest, (size_t)hlen + 4), "hello payload received");
    std::vector<unsigned char> full(hdr.begin(), hdr.end());
    full.insert(full.end(), rest.begin(), rest.end());
    std::vector<unsigned char> plain(full.size());
    // fresh stream state: the full buffer starts at wire offset 0
    unsigned char fiv[8] = {0};
    int fnum = 0;
    hk.cfb64(full.data(), plain.data(), (int)full.size(), fiv, &fnum, 0);
    check(std::memcmp(plain.data() + plain.size() - 8, "TQServer", 8) == 0,
          "hello tail magic is TQServer");

    // ---- 2) TLVs live after the 15-byte header: p, g, server pub ----
    std::string els[8];
    int n = 0;
    size_t cursor_el = 15;
    while (n < 8 && cursor_el + 4 <= plain.size() - 8) {
        uint32_t L = 0;
        std::memcpy(&L, plain.data() + cursor_el, 4);
        if (L == 0 || cursor_el + 4 + L > plain.size() - 8) break;
        els[n++].assign(reinterpret_cast<char*>(plain.data()) + cursor_el + 4, L);
        cursor_el += 4 + L;
    }
    check(n >= 3, "hello TLVs parsed (p, g, pub)");
    if (n < 3) { ::close(fd); return 1; }

    // ---- 3) client DH from the hello's own p/g (FUN_00806995) ----
    BIGNUM* p = nullptr; BN_hex2bn(&p, els[0].c_str());
    BIGNUM* g = nullptr; BN_hex2bn(&g, els[1].c_str());
    BIGNUM* spub = nullptr; BN_hex2bn(&spub, els[2].c_str());
    DH* cli = DH_new();
    DH_set0_pqg(cli, p, nullptr, g);
    check(DH_generate_key(cli) == 1, "client DH key pair from hello p/g");
    const BIGNUM* cpub = nullptr; const BIGNUM* cpriv = nullptr;
    DH_get0_key(cli, &cpub, &cpriv);
    unsigned char secret[256];
    int slen = DH_compute_key(secret, spub, cli);
    check(slen > 0, "client computes the shared secret");
    std::string token = crypto::build_cast_token(secret, slen);
    check(token.size() == 64, "client token is 64 chars");
    std::printf("     client token %s\n", token.c_str());

    // ---- 4) client handshake (FUN_008064c9) ----
    char* pub_hex = BN_bn2hex(cpub);
    std::string hex(pub_hex);
    OPENSSL_free(pub_hex);
    auto put32 = [](std::vector<unsigned char>& v, uint32_t x) {
        v.push_back((unsigned char)x);       v.push_back((unsigned char)(x >> 8));
        v.push_back((unsigned char)(x >> 16)); v.push_back((unsigned char)(x >> 24));
    };
    std::vector<unsigned char> tlvs;
    put32(tlvs, 17); tlvs.insert(tlvs.end(), 17, 0x5a);          // L1 + blob
    put32(tlvs, (uint32_t)hex.size());
    tlvs.insert(tlvs.end(), hex.begin(), hex.end());             // L2 + pub
    uint32_t total = 4 + (uint32_t)tlvs.size() + 8;
    std::vector<unsigned char> payload;
    put32(payload, total);
    payload.insert(payload.end(), tlvs.begin(), tlvs.end());
    const char* magic = "TQClient";
    payload.insert(payload.end(), magic, magic + 8);

    // client wire = [7-byte random prefix][payload][4 filler bytes]: the
    // receiver's second CFB pass consumes len bytes from offset 11, i.e.
    // 4 bytes past the stream (original sockets always have them buffered).
    std::vector<unsigned char> stream(7 + payload.size() + 4, 0);
    std::memcpy(stream.data() + 7, payload.data(), payload.size());
    crypto::CastCipher hs;
    hs.set_key("C238xs65pjy7HU9Q", 16);
    unsigned char hiv2[8] = {0};
    int hnum2 = 0;
    std::vector<unsigned char> wire(stream.size());
    hs.cfb64(stream.data(), wire.data(), (int)stream.size(), hiv2, &hnum2, 1);
    ::send(fd, wire.data(), wire.size(), 0);
    ::usleep(300000);

    // ---- 5) encrypted 1008 login with a fresh session cipher ----
    crypto::CastCipher sess;
    sess.set_key(token.data(), 64);
    unsigned char siv[8] = {0};
    int snum = 0;
    auto put16 = [](std::vector<unsigned char>& v, uint16_t x) {
        v.push_back((unsigned char)x); v.push_back((unsigned char)(x >> 8));
    };
    // header is [len u2][type u2] = 4 bytes, then the 8-byte login body
    std::vector<unsigned char> frame;
    put16(frame, 12); put16(frame, 1008);
    put32(frame, 100001); put32(frame, 777);
    std::vector<unsigned char> enc(frame.size());
    sess.cfb64(frame.data(), enc.data(), (int)frame.size(), siv, &snum, 1);
    enc.insert(enc.end(), magic, magic + 8);
    ::send(fd, enc.data(), enc.size(), 0);

    // ---- 6) decrypt the server's reply stream (TQServer framed) ----
    ::usleep(500000);
    std::vector<unsigned char> raw;
    unsigned char tmp[4096];
    ssize_t r = ::recv(fd, tmp, sizeof(tmp), 0);
    if (r > 0) raw.assign(tmp, tmp + r);
    check(!raw.empty(), "server replied on the encrypted channel");
    bool saw_magic = false, saw_login = false;
    if (!raw.empty()) {
        // the server encrypts each packet then appends a PLAINTEXT magic:
        // walk the stream frame by frame, consuming only the encrypted part.
        unsigned char div[8] = {0};
        int dnum = 0;
        size_t off = 0;
        int frames = 0;
        uint16_t flen = 0, ftype = 0;
        while (off + 4 <= raw.size()) {
            unsigned char h[4];
            sess.cfb64(raw.data() + off, h, 4, div, &dnum, 0);
            uint16_t L = 0, T = 0;
            std::memcpy(&L, h, 2); std::memcpy(&T, h + 2, 2);
            if (L < 4 || L > 0x400 || off + L + 8 > raw.size()) break;
            std::vector<unsigned char> body(L);
            std::memcpy(body.data(), h, 4);
            if (L > 4) sess.cfb64(raw.data() + off + 4, body.data() + 4,
                                   L - 4, div, &dnum, 0);
            if (frames == 0) { flen = L; ftype = T; }
            if (std::memcmp(raw.data() + off + L, "TQServer", 8) == 0)
                saw_magic = true;
            if (T == 1008) saw_login = true;
            ++frames;
            off += L + 8;
        }
        std::printf("     reply %zu bytes, %d frames, first len=%u type=%u\n",
                    raw.size(), frames, flen, ftype);
    }
    check(saw_magic, "server replies carry the TQServer magic");
    check(saw_login, "server replied with the 1008 login frame");

    DH_free(cli);
    ::close(fd);
    std::printf("RESULT: %d FAILURES\n", g_fail);
    return g_fail ? 1 : 0;
}
