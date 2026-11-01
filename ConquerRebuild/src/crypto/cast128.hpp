// ConquerRebuild — real-client transport crypto (wave M-A)
// ============================================================
// The original MsgServer links libeay32.dll and calls OpenSSL's CAST /
// BIGNUM / DH directly (verified: MsgServer.exe FUN_140505bc0 does
//   CAST_set_key(ctx, 0x10, "C238xs65pjy7HU9Q");
//   CAST_cfb64_encrypt(...)
// and the CAST tables are NOT statically present in the exe — the
// library import does the work, libeay32.dll sits next to the exe in
// conquer_source/Source/). A faithful rebuild therefore talks to the
// same OpenSSL API. Every wrapper here mirrors a call site in the
// decompile; nothing is designed.
//
// CAST table provenance: the 8 S-boxes were extracted from
// libeay32.dll (.rdata @ 0xd7c44, 8192 bytes) and match RFC 2144
// (S1[0]=0x30fb40d4, S2[0]=0x1f201094) — cross-checked with the
// openssl CLI (cast5 legacy provider) vector
// key 0123456712345678234567893456789A / pt 0123456789ABCDEF
// -> 238b4fe5847e44b2.
#pragma once

#include <openssl/cast.h>
#include <cstdint>
#include <cstring>

namespace conquer {
namespace crypto {

// CAST_set_key(ctx, len, key) — key len 16 for the handshake key,
// 0x40 (the 64-char token) for the session key (FUN_140505bc0 step 13).
struct CastCipher {
    CAST_KEY key_;

    void set_key(const void* key, int len) {
        CAST_set_key(&key_, len, static_cast<const unsigned char*>(key));
    }

    // CAST_cfb64_encrypt — enc=0 decrypt (client->server stream uses the
    // connection ctx at +0x18), enc=1 encrypt (server->client).
    // ivec/num persist across calls per connection, exactly like the
    // original's per-socket state.
    void cfb64(const unsigned char* in, unsigned char* out, int len,
               unsigned char* ivec, int* num, int enc) const {
        CAST_cfb64_encrypt(in, out, len, &key_, ivec, num, enc);
    }

    void ecb_block(const unsigned char* in, unsigned char* out,
                   int enc) const {
        if (enc)
            CAST_encrypt(reinterpret_cast<CAST_LONG*>(out),
                         &key_);
        else
            CAST_decrypt(reinterpret_cast<CAST_LONG*>(out),
                         &key_);
        (void)in;
    }
};

} // namespace crypto
} // namespace conquer
