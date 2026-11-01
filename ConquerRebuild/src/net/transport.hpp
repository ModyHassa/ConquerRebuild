// ConquerRebuild — the real-client transport (wave M-B)
// ============================================================
// Port of the encrypted game-socket handshake. Wire proven with the
// objdump of MsgServer.exe (0x140505bc0) + the client decompile
// (Conquer.c FUN_008064c9 / FUN_008062a8):
//
//   client -> server (all encrypted with the hardcoded handshake key
//   "C238xs65pjy7HU9Q" @ 0x14079ae58, CAST-CFB64, ivec=0, num=0):
//     [7 random bytes][u32 total][u32 L1][blob L1][u32 L2][hex L2]
//     [\"TQClient\" 8]
//   total = 4 + (4+L1) + (4+L2) + 8   (payload[0..3] = total, the
//   client writes its final cursor there — FUN_008062a8)
//
//   server (FUN_140505bc0, returns len+7 = consumed stream bytes):
//     1. guards (DH ready, wire, len) -> -1 / len<0xc -> 0
//     2. CAST_set_key("C238xs65pjy7HU9Q"), ivec=0, num=0
//     3. cfb64 decrypt 11 bytes  (disasm: in=wire, out=rsp+0x130,
//        len=0xb, enc=0)
//     4. len = u32 at out[7..10]   (disasm: movsxd rdi,[rsp+0x137])
//        need 0xb < len < 0x401 and wire_len >= len+7 else 0
//     5. cfb64 decrypt FROM WIRE+0xB (disasm: lea rcx,[rsi+0xb]),
//        len bytes, into the payload buffer (rsp+0x13b) — note this
//        starts 4 bytes into the payload because step 3 already ate
//        the u32 total
//     6. *(u64*)(payload + len - 0xC) must be "TQClient" (disasm:
//        mov rax,[rsp+rdi+0x12f] vs 0x14079ae38) else -1
//     7. BN_new; TLV walk cursor=4 ONCE:
//        L = u32 at payload[cursor-4]; L<=0 -> -1;
//        cursor += L+4; cursor > len -> -1
//     8. L2 = u32 at payload[cursor-4]; L2<=0 or cursor+4+L2 > len
//        -> -1; BN_hex2bn(hex = payload[cursor..cursor+L2]) == 0 -> -1
//     9. secret = DH_compute_key(DH_size+1 buffer, bn, DH); -1 -> -1
//    10. token = FUN_140503c00(secret); 0x40 chars -> CAST_set_key(
//        session ctx, 0x40, token) else CAST_set_key(session, DH_size,
//        secret)
//    11. return len + 7
//
//   server -> client (FUN_140500670): when conn+0x1a (encryption
//   enabled) is set, the packet is CAST-CFB64 encrypted with the
//   session key and "TQServer" (0x14079ae40) is appended after it;
//   before the handshake (conn+0x14 == 0 and +0x1a == 0) it is sent
//   plaintext.
#pragma once

#include <openssl/bn.h>
#include <openssl/dh.h>

#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

#include "../crypto/cast128.hpp"
#include "../crypto/msg_token.hpp"

namespace conquer {
namespace net {

inline constexpr const char* kHandshakePass = "C238xs65pjy7HU9Q";
inline constexpr const char* kClientMagic = "TQClient";
inline constexpr const char* kServerMagic = "TQServer";

// The per-connection security state (the original's socket security
// object at conn+0x824 with the CAST key context at +0x18).
struct TransportSession {
    // send/receive CFB64 stream state is SEPARATE (the original keeps two
    // cipher contexts: recv decrypts, send encrypts) — sharing one state
    // desyncs from the second packet onward.
    crypto::CastCipher cast;      // session cipher (set by the handshake)
    unsigned char ivec[8] = {0};     // receive CFB64 feedback state
    int num = 0;                     // receive byte position
    unsigned char ivec_tx[8] = {0};  // send CFB64 feedback state
    int num_tx = 0;                  // send byte position
    bool encrypt_on = false;      // conn+0x1a
    bool handshaken = false;      // conn+0x14 != 0 after the exchange

    // Session-side CFB64 over one packet (enc=1 send / enc=0 recv).
    void stream_crypt(const unsigned char* in, unsigned char* out,
                      int len, int enc) {
        cast.cfb64(in, out, len, enc ? ivec_tx : ivec,
                   enc ? &num_tx : &num, enc);
    }
};

inline uint32_t rd_u32le(const unsigned char* p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

// FUN_140505bc0 — returns the consumed stream length (len+7) on
// success, 0 when the packet is not (yet) a complete key exchange,
// and -1 on a malformed / unauthentic exchange.
// Port of the server HELLO (builder around 0x140504f80). The client parses it
// in FUN_00806995 (Conquer.c 803355):
//   wire = [11-byte prefix][u32 cursor][u32 L][p hex][u32 L][g hex]
//          [u32 L][pub hex]["TQServer" 8]
// everything CAST-CFB64 encrypted with the fixed handshake key
// "C238xs65pjy7HU9Q". The client BN_hex2bn's p and g, DH_generate_key()s its
// own pair, DH_compute_key()s against the published pub and derives the same
// md5-chain token (FUN_00806399) that it then feeds to CAST_set_key.
// tlv_append mirrors FUN_140503ac0 (running cursor kept at buf[0..3]).
inline void tlv_append(std::vector<unsigned char>& buf, const char* str) {
    uint32_t n = (uint32_t)std::strlen(str);
    buf.insert(buf.end(), (const unsigned char*)&n,
               (const unsigned char*)&n + 4);
    buf.insert(buf.end(), (const unsigned char*)str,
               (const unsigned char*)str + n);
    uint32_t c = (uint32_t)buf.size();       // cursor back into the header
    std::memcpy(buf.data(), &c, 4);
}

inline bool build_server_hello(DH* dh, std::vector<unsigned char>& out) {
    if (!dh) return false;
    const BIGNUM* p = nullptr; const BIGNUM* q = nullptr;
    const BIGNUM* g = nullptr; const BIGNUM* pub = nullptr;
    DH_get0_pqg(dh, &p, &q, &g);
    DH_get0_key(dh, &pub, nullptr);
    if (!p || !g || !pub) return false;
    char* p_hex = BN_bn2hex(p);
    char* g_hex = BN_bn2hex(g);
    char* pub_hex = BN_bn2hex(pub);
    if (!p_hex || !g_hex || !pub_hex) {
        OPENSSL_free(p_hex); OPENSSL_free(g_hex); OPENSSL_free(pub_hex);
        return false;
    }
    std::vector<unsigned char> payload(4, 0);   // header dword = cursor
    tlv_append(payload, p_hex);
    tlv_append(payload, g_hex);
    tlv_append(payload, pub_hex);
    const unsigned char magic[8] = {'T','Q','S','e','r','v','e','r'};
    std::vector<unsigned char> stream(11, 0);   // 11-byte prefix
    stream.insert(stream.end(), payload.begin(), payload.end());
    stream.insert(stream.end(), magic, magic + 8);
    crypto::CastCipher hk; hk.set_key("C238xs65pjy7HU9Q", 16);
    unsigned char ivec[8] = {0}; int num = 0;
    out.assign(stream.size(), 0);
    hk.cfb64(stream.data(), out.data(), (int)stream.size(), ivec, &num, 1);
    OPENSSL_free(p_hex); OPENSSL_free(g_hex); OPENSSL_free(pub_hex);
    return true;
}

inline int receive_key_exchange(TransportSession& s, DH* dh,
                                const unsigned char* wire, int wire_len) {
    if (!dh || !wire || wire_len < 0) return -1;
    if (wire_len < 0xc) return 0;

    // step 2: the hardcoded handshake key, fresh CFB64 state
    crypto::CastCipher hs;
    hs.set_key(kHandshakePass, 16);
    unsigned char hiv[8] = {0};
    int hnum = 0;

    // step 3
    unsigned char head[11];
    hs.cfb64(wire, head, 11, hiv, &hnum, 0);

    // step 4
    int len = (int)rd_u32le(head + 7);
    if (!(len < 0x401 && len > 0xb)) return 0;
    if (wire_len < len + 7) return 0;

    // step 5 — the payload buffer starts 4 bytes into the payload
    std::vector<unsigned char> buf((size_t)len + 8, 0);
    hs.cfb64(wire + 0xb, buf.data(), len, hiv, &hnum, 0);

    // step 6
    if (std::memcmp(buf.data() + len - 0xc, kClientMagic, 8) != 0)
        return -1;

    // step 7 — the single TLV step
    int cursor = 4;
    int l1 = (int)rd_u32le(buf.data() + cursor - 4);
    if (l1 <= 0) return -1;
    cursor += l1 + 4;
    if (len < cursor) return -1;

    // step 8
    int l2 = (int)rd_u32le(buf.data() + cursor - 4);
    if (l2 <= 0 || cursor + 4 + l2 > len) return -1;
    std::string hex((const char*)buf.data() + cursor, (size_t)l2);

    // step 9 — the client public key is HEX
    BIGNUM* pub = nullptr;
    if (BN_hex2bn(&pub, hex.c_str()) == 0) {
        if (pub) BN_free(pub);
        return -1;
    }

    // step 9b — the shared secret
    int dsize = DH_size(dh);
    std::vector<unsigned char> secret((size_t)dsize + 1, 0);
    int slen = DH_compute_key(secret.data(), pub, dh);
    BN_free(pub);
    if (slen == -1) return -1;

    // step 10 — the CAST session key
    std::string token = crypto::build_cast_token(secret.data(),
                                                 (size_t)slen);
    if (std::getenv("CQ_TRANSPORT_DEBUG")) {
        std::printf("[transport] secret %d bytes, token %s\n", slen,
                    token.c_str());
    }
    if (token.size() == 0x40) {
        s.cast.set_key(token.data(), 0x40);
    } else {
        s.cast.set_key(secret.data(), dsize);
    }
    std::memset(s.ivec, 0, sizeof(s.ivec));
    s.num = 0;
    s.encrypt_on = true;
    s.handshaken = true;
    return len + 7;
}

// FUN_140500670 — one outbound packet. When encryption is on the
// packet is CFB64-encrypted and "TQServer" is appended (the client
// strips and validates it); otherwise it goes out plaintext.
inline std::vector<unsigned char> build_outbound(TransportSession& s,
                                                 const void* data,
                                                 int len) {
    std::vector<unsigned char> out;
    if (!s.encrypt_on) {
        out.assign((const unsigned char*)data,
                   (const unsigned char*)data + len);
        return out;
    }
    out.resize((size_t)len + 8);
    s.stream_crypt((const unsigned char*)data, out.data(), len, 1);
    std::memcpy(out.data() + len, kServerMagic, 8);
    return out;
}

// Client-side receive: validate + strip the trailing magic, decrypt.
inline bool receive_inbound(TransportSession& s,
                            const unsigned char* in, int len,
                            std::vector<unsigned char>& out) {
    if (len < 8) return false;
    if (std::memcmp(in + len - 8, kServerMagic, 8) != 0) return false;
    int body = len - 8;
    out.resize((size_t)body);
    s.stream_crypt(in, out.data(), body, 0);
    return true;
}

} // namespace net
} // namespace conquer
