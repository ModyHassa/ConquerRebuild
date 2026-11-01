// ConquerRebuild — the CAST token builder (wave M-A)
// ============================================================
// ORIGINAL: MsgServer.exe FUN_140503c00 (decompile line 894245),
// called from the key-exchange receiver FUN_140505bc0 step 13.
// Verified structure (and byte-verified by the sibling
// TQServer-CPP-rebuild unit M14 against python hashlib):
//   hex1 = md5_hex(secret)              // 32 lowercase hex chars
//   buf  = hex1 + hex1                  // 64 chars (the 0x20-byte
//                                       //   copy + strcat in the body)
//   hex2 = md5_hex(buf)                 // 32 lowercase hex chars
//   token = hex1 + hex2                 // 64 chars -> CAST_set_key(
//                                       //   ctx, 0x40, token)
// The client builds the same token (Conquer.c FUN_00806399) with its
// own secret, which is how both sides derive the session CAST key from
// the DH secret.
#pragma once

#include <openssl/md5.h>
#include <cstdint>
#include <cstdio>
#include <string>

namespace conquer {
namespace crypto {

inline std::string md5_hex(const void* data, size_t len) {
    unsigned char digest[16];
    MD5(static_cast<const unsigned char*>(data), len, digest);
    static const char* hx = "0123456789abcdef";
    std::string out;
    out.reserve(32);
    for (int i = 0; i < 16; ++i) {
        out.push_back(hx[digest[i] >> 4]);
        out.push_back(hx[digest[i] & 0xF]);
    }
    return out;
}

inline std::string md5_hex(const std::string& s) {
    return md5_hex(s.data(), s.size());
}

// FUN_140503c00 — returns the 64-char token (or "" when the md5-hex
// helper did not yield 32 chars, matching the original's -0x22 guard).
inline std::string build_cast_token(const void* secret, size_t len) {
    std::string hex1 = md5_hex(secret, len);
    if (hex1.size() != 32) return std::string();
    std::string buf = hex1 + hex1;
    std::string hex2 = md5_hex(buf);
    return hex1 + hex2;
}

} // namespace crypto
} // namespace conquer
