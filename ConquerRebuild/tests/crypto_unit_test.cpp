// ConquerRebuild — transport crypto unit test (wave M-A)
// Verifies the three pieces the key-exchange receiver FUN_140505bc0
// composes: CAST-128 (CFB64) via the same OpenSSL API the original's
// libeay32.dll import uses, the FUN_140503c00 token chain, and the
// dh.pem loader (FUN_140505380).
#include <cstdio>
#include <cstring>
#include <string>

#include "../src/crypto/cast128.hpp"
#include "../src/crypto/msg_token.hpp"
#include "../src/crypto/dh_params.hpp"

using namespace conquer::crypto;

static int failures = 0;
static void check(bool ok, const char* what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) ++failures;
}

static std::string to_hex(const unsigned char* p, int n) {
    static const char* hx = "0123456789abcdef";
    std::string s;
    for (int i = 0; i < n; ++i) {
        s.push_back(hx[p[i] >> 4]);
        s.push_back(hx[p[i] & 0xF]);
    }
    return s;
}

int main() {
    // 1) CAST-128 ECB block, the cast5 vector both openssl (legacy
    //    provider) and RFC 2144 agree on:
    //    key 0123456712345678234567893456789A, pt 0123456789ABCDEF
    //    -> 238b4fe5847e44b2
    {
        unsigned char key[16] = {0x01, 0x23, 0x45, 0x67, 0x12, 0x34,
                                 0x56, 0x78, 0x23, 0x45, 0x67, 0x89,
                                 0x34, 0x56, 0x78, 0x9A};
        unsigned char pt[8] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xAB,
                               0xCD, 0xEF};
        CastCipher c;
        c.set_key(key, 16);
        // CAST_encrypt works on two host-order CAST_LONG words, and the
        // cipher treats them as a big-endian block (the RFC vector is
        // quoted as bytes) -> load BE words, store BE words back.
        auto be32 = [](const unsigned char* b) -> CAST_LONG {
            return (static_cast<CAST_LONG>(b[0]) << 24) | (static_cast<CAST_LONG>(b[1]) << 16) |
                   (static_cast<CAST_LONG>(b[2]) << 8) | static_cast<CAST_LONG>(b[3]);
        };
        auto put32 = [](unsigned char* b, CAST_LONG v) {
            b[0] = (unsigned char)(v >> 24);
            b[1] = (unsigned char)(v >> 16);
            b[2] = (unsigned char)(v >> 8);
            b[3] = (unsigned char)v;
        };
        CAST_LONG w[2] = {be32(pt), be32(pt + 4)};
        CAST_encrypt(w, &c.key_);
        unsigned char ct[8];
        put32(ct, w[0]);
        put32(ct + 4, w[1]);
        check(to_hex(ct, 8) == "238b4fe5847e44b2",
              "CAST-128 ECB vector (openssl cast5)");
        CAST_decrypt(w, &c.key_);
        unsigned char back[8];
        put32(back, w[0]);
        put32(back + 4, w[1]);
        check(to_hex(back, 8) == to_hex(pt, 8), "CAST block decrypt back");
    }

    // 2) CFB64 stream: encrypt then decrypt with the same ivec/num
    //    must round-trip (the session cipher's per-connection state).
    {
        unsigned char key[16] = {0};
        CastCipher c;
        c.set_key(key, 16);
        const char* msg = "hello conquer transport 1234567890";
        int len = (int)std::strlen(msg);
        unsigned char iv1[8] = {0}, iv2[8] = {0};
        int n1 = 0, n2 = 0;
        unsigned char enc[64], dec[64];
        c.cfb64(reinterpret_cast<const unsigned char*>(msg), enc, len,
                iv1, &n1, 1);
        c.cfb64(enc, dec, len, iv2, &n2, 0);
        check(std::memcmp(dec, msg, len) == 0,
              "CAST CFB64 encrypt/decrypt round-trip");
        check(std::memcmp(enc, msg, len) != 0, "CFB64 actually scrambled");
    }

    // 3) The token chain FUN_140503c00: md5 hex anchors from hashlib.
    {
        check(md5_hex("test", 4) == "098f6bcd4621d373cade4e832627b4f6",
              "md5_hex('test') anchor");
        std::string t = build_cast_token("test", 4);
        check(t.size() == 64, "token is 64 chars");
        // hex1 = md5('test'), hex2 = md5(hex1+hex1)
        std::string hex1 = md5_hex("test", 4);
        std::string hex2 = md5_hex(hex1 + hex1);
        check(t == hex1 + hex2, "token == hex1 + md5(hex1+hex1)");
        std::printf("     token(" "test" ") = %s\n", t.c_str());
    }

    // 4) dh.pem loads (the file ships next to the original exe).
    {
        DhParams p;
        bool ok = p.load("../conquer_source/Source/dh.pem");
        if (!ok) ok = p.load("../../conquer_source/Source/dh.pem");
        check(ok, "dh.pem params loaded");
        if (ok) check(DH_bits(p.dh) >= 512, "dh.pem has sane bit size");
    }

    std::printf("RESULT: %d FAILURES\n", failures);
    return failures ? 1 : 0;
}
