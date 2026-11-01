// ConquerRebuild — transport (wave M-B) unit test
// Simulates the v6159 client handshake exactly as decoded from
// Conquer.c (FUN_008062a8 append, FUN_008064c9 sender) and drives the
// ported receiver (FUN_140505bc0) + the encrypted send path
// (FUN_140500670) against it.
#include <openssl/bn.h>
#include <openssl/dh.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "../src/crypto/cast128.hpp"
#include "../src/crypto/dh_params.hpp"
#include "../src/crypto/msg_token.hpp"
#include "../src/net/transport.hpp"

using namespace conquer;
using namespace conquer::crypto;
using namespace conquer::net;

static int failures = 0;
static void check(bool ok, const char* what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++failures;
}

static void wr32(std::vector<unsigned char>& v, uint32_t x) {
    v.push_back((unsigned char)x);
    v.push_back((unsigned char)(x >> 8));
    v.push_back((unsigned char)(x >> 16));
    v.push_back((unsigned char)(x >> 24));
}

int main() {
    // ---- server side: dh.pem params + a generated key pair
    //      (FUN_140505380 leaves the DH ready with a key) ----
    DhParams server_dh;
    bool have_dh = server_dh.load("../conquer_source/Source/dh.pem");
    if (!have_dh) have_dh = server_dh.load("../../conquer_source/Source/dh.pem");
    check(have_dh, "server dh.pem loaded");
    if (!have_dh) { std::printf("RESULT: %d FAILURES\n", failures); return 1; }
    DH_generate_key(server_dh.dh);

    // ---- client side: its own DH key pair from the same params ----
    const BIGNUM* sp = nullptr; const BIGNUM* sq = nullptr;
    const BIGNUM* sg = nullptr;
    DH_get0_pqg(server_dh.dh, &sp, &sq, &sg);
    DH* cli = DH_new();
    DH_set0_pqg(cli, BN_dup(sp), sq ? BN_dup(sq) : nullptr, BN_dup(sg));
    check(DH_generate_key(cli) == 1, "client DH key pair generated");
    const BIGNUM* cpub = nullptr; const BIGNUM* cpriv = nullptr;
    DH_get0_key(cli, &cpub, &cpriv);
    char* pub_hex = BN_bn2hex(cpub);   // FUN_00866100 hex form

    // ---- the client's key-exchange payload (FUN_008064c9) ----
    // [u32 total][u32 L1][blob][u32 L2][hex pub][TQClient]
    std::vector<unsigned char> blob(17);
    for (size_t i = 0; i < blob.size(); ++i) blob[i] = (unsigned char)(i * 7 + 3);
    std::string srv_str = pub_hex;
    uint32_t total = 4 + (4 + (uint32_t)blob.size()) + (4 + (uint32_t)srv_str.size()) + 8;

    std::vector<unsigned char> payload;
    wr32(payload, total);                       // buf[0] = total
    wr32(payload, (uint32_t)blob.size());       // L1
    payload.insert(payload.end(), blob.begin(), blob.end());
    wr32(payload, (uint32_t)srv_str.size());    // L2
    payload.insert(payload.end(), srv_str.begin(), srv_str.end());
    payload.insert(payload.end(), kClientMagic, kClientMagic + 8);

    // ---- encrypt [7 random prefix][payload] with the handshake key
    std::vector<unsigned char> stream;
    for (int i = 0; i < 7; ++i) stream.push_back((unsigned char)(0x40 + i));
    stream.insert(stream.end(), payload.begin(), payload.end());
    {
        CastCipher hs;
        hs.set_key(kHandshakePass, 16);
        unsigned char iv[8] = {0};
        int num = 0;
        std::vector<unsigned char> enc(stream.size());
        hs.cfb64(stream.data(), enc.data(), (int)stream.size(), iv, &num, 1);
        stream.swap(enc);
    }
    // the original's socket buffer supplies 4 bytes beyond the packet
    // (the receiver's second cfb64 pass reads len bytes from wire+0xb)
    std::vector<unsigned char> wire = stream;
    for (int i = 0; i < 4; ++i) wire.push_back(0);

    // ---- server HELLO -> client parse (FUN_00806995 model) ----
    {
        std::vector<unsigned char> hello;
        check(net::build_server_hello(server_dh.dh, hello),
              "server hello built");
        crypto::CastCipher hk; hk.set_key("C238xs65pjy7HU9Q", 16);
        unsigned char hiv[8] = {0}; int hnum = 0;
        std::vector<unsigned char> hd(hello.size());
        hk.cfb64(hello.data(), hd.data(), (int)hello.size(), hiv, &hnum, 0);
        uint32_t cur = 0;
        std::memcpy(&cur, hd.data() + 11, 4);
        check(hd.size() >= 15u + cur, "hello length field fits the wire");
        check(std::memcmp(hd.data() + hd.size() - 8, "TQServer", 8) == 0,
              "hello tail magic is TQServer");
        size_t off = 15;
        std::vector<std::string> els;
        while (off + 4 <= hd.size() - 8) {
            uint32_t L = 0;
            std::memcpy(&L, hd.data() + off, 4);
            off += 4;
            if (L > hd.size() - 8 - off) break;
            els.emplace_back((const char*)hd.data() + off, L);
            off += L;
        }
        check(els.size() >= 3, "hello carries p/g/pub TLVs");
        if (els.size() >= 3) {
            BIGNUM* cp = nullptr; BN_hex2bn(&cp, els[0].c_str());
            BIGNUM* cg = nullptr; BN_hex2bn(&cg, els[1].c_str());
            BIGNUM* spub = nullptr; BN_hex2bn(&spub, els[2].c_str());
            const BIGNUM* dp = nullptr; const BIGNUM* dg = nullptr;
            DH_get0_pqg(server_dh.dh, &dp, nullptr, &dg);
            const BIGNUM* dpub = nullptr;
            DH_get0_key(server_dh.dh, &dpub, nullptr);
            check(cp && dp && BN_cmp(cp, dp) == 0, "hello p == dh.pem p");
            check(cg && dg && BN_cmp(cg, dg) == 0, "hello g == dh.pem g");
            check(spub && dpub && BN_cmp(spub, dpub) == 0,
                  "hello pub == server pub");
            BN_free(cp); BN_free(cg); BN_free(spub);
        }
    }

    // ---- drive the ported receiver ----
    TransportSession sess;
    int used = receive_key_exchange(sess, server_dh.dh, wire.data(),
                                    (int)wire.size());
    check(used == (int)(7 + total), "receiver consumes len+7 (stream)");
    check(sess.handshaken && sess.encrypt_on, "session armed after exchange");

    // ---- both sides derive the same CAST session key ----
    int dsize = DH_size(server_dh.dh);
    std::vector<unsigned char> csecret((size_t)dsize + 1, 0);
    const BIGNUM* spub = nullptr;
    DH_get0_key(server_dh.dh, &spub, nullptr);
    int cslen = DH_compute_key(csecret.data(), spub, cli);
    std::string ctoken = build_cast_token(csecret.data(), (size_t)cslen);
    check(ctoken.size() == 64, "client token is 64 chars");

    // ---- server -> client encrypted packet (FUN_140500670) ----
    const char msg[] = "S2C hello transport";
    std::vector<unsigned char> outb = build_outbound(sess, msg,
                                                     (int)sizeof(msg) - 1);
    check(outb.size() == sizeof(msg) - 1 + 8, "TQServer magic appended");
    check(std::memcmp(outb.data() + outb.size() - 8, kServerMagic, 8) == 0,
          "trailing magic is TQServer");
    {
        CastCipher cc;
        cc.set_key(ctoken.data(), 0x40);
        unsigned char iv[8] = {0};
        int num = 0;
        std::vector<unsigned char> dec(outb.size() - 8);
        cc.cfb64(outb.data(), dec.data(), (int)dec.size(), iv, &num, 0);
        check(std::memcmp(dec.data(), msg, sizeof(msg) - 1) == 0,
              "client decrypts the server packet with its token");
    }

    // ---- negative paths ----
    {
        TransportSession s2;
        std::vector<unsigned char> bad = wire;
        // corrupt one byte of the TQClient magic itself
        // (wire = [7 prefix][payload], magic at payload+total-0xc)
        bad[7 + total - 0xc] ^= 0xFF;
        int r = receive_key_exchange(s2, server_dh.dh, bad.data(),
                                     (int)bad.size());
        check(r <= 0, "corrupted exchange rejected");
        TransportSession s3;
        check(receive_key_exchange(s3, server_dh.dh, wire.data(), 5) == 0,
              "short packet wants more bytes (0)");
        check(receive_key_exchange(s3, nullptr, wire.data(),
                                   (int)wire.size()) == -1,
              "missing DH -> -1");
    }

    DH_free(cli);   // owns its duplicated p/g and the key pair
    OPENSSL_free(pub_hex);

    std::printf("RESULT: %d FAILURES\n", failures);
    return failures ? 1 : 0;
}
