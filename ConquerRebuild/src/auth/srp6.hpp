#pragma once
// SRP6 account authentication - port of the original 2015 AccountServer
// (decompiled C#: Ciphers/SRP6.cs + BigInt.cs, MsgSrpRequest.cs 1542,
// MsgSrpChallenge.cs 1213, MsgLoginProof.cs 1214, MsgLoginReply.cs 1055,
// MsgConnect.cs 1052). Client side VERIFIED: client factory creates
// CMsgSrpRequest for 0x606 (Conquer.c:387313), CMsgLoginChallengeS for
// 0x4BD (682011), CMsgLoginProofC sends 0x4BE; challenge parser reads
// B len at wire+4 (data +5) and S len at wire+391 (data +392).
//
// Byte-order semantics replicated exactly from the C# wrapper:
//   BigInt.FromMemoryBytes(b) == big-endian value of b
//   BigInt.GetBytes()         == minimal big-endian bytes (MSB first,
//                               high zero bytes trimmed)
//   FromHexString(hs)        == little-endian value of the hex pairs
//   FromMemoryHS(hs)         == big-endian value of the hex string
#include "protocol/packet.hpp"
#include "protocol/ids.hpp"
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <array>

namespace conquer {

// ---------------- SHA-1 / MD-5 (self-contained) ----------------
inline void sha1(const uint8_t* data, size_t len, uint8_t out[20]) {
    uint32_t h[5] = {0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0};
    std::vector<uint8_t> m(data, data + len);
    m.push_back(0x80);
    while (m.size() % 64 != 56) m.push_back(0);
    uint64_t bits = (uint64_t)len * 8;
    for (int i = 7; i >= 0; i--) m.push_back((uint8_t)(bits >> (i * 8)));
    for (size_t off = 0; off < m.size(); off += 64) {
        uint32_t w[80];
        for (int i = 0; i < 16; i++)
            w[i] = (m[off+i*4]<<24)|(m[off+i*4+1]<<16)|(m[off+i*4+2]<<8)|m[off+i*4+3];
        for (int i = 16; i < 80; i++) {
            uint32_t v = w[i-3]^w[i-8]^w[i-14]^w[i-16];
            w[i] = (v<<1)|(v>>31);
        }
        uint32_t a=h[0],b=h[1],c=h[2],d=h[3],e=h[4];
        for (int i = 0; i < 80; i++) {
            uint32_t f, k;
            if (i<20)      { f=(b&c)|((~b)&d);            k=0x5A827999; }
            else if (i<40) { f=b^c^d;                    k=0x6ED9EBA1; }
            else if (i<60) { f=(b&c)|(b&d)|(c&d);         k=0x8F1BBCDC; }
            else           { f=b^c^d;                    k=0xCA62C1D6; }
            uint32_t t = ((a<<5)|(a>>27)) + f + e + k + w[i];
            e=d; d=c; c=(b<<30)|(b>>2); b=a; a=t;
        }
        h[0]+=a; h[1]+=b; h[2]+=c; h[3]+=d; h[4]+=e;
    }
    for (int i = 0; i < 5; i++) {
        out[i*4]   = (uint8_t)(h[i]>>24);
        out[i*4+1] = (uint8_t)(h[i]>>16);
        out[i*4+2] = (uint8_t)(h[i]>>8);
        out[i*4+3] = (uint8_t)(h[i]);
    }
}

inline void md5(const uint8_t* data, size_t len, uint8_t out[16]) {
    struct MD5 { uint32_t a,b,c,d; } st{0x67452301,0xEFCDAB89,0x98BADCFE,0x10325476};
    auto F=[](uint32_t x,uint32_t y,uint32_t z){return (x&y)|(~x&z);};
    auto G=[](uint32_t x,uint32_t y,uint32_t z){return (x&z)|(y&~z);};
    auto H=[](uint32_t x,uint32_t y,uint32_t z){return x^y^z;};
    auto I=[](uint32_t x,uint32_t y,uint32_t z){return y^(x|~z);};
    static const uint32_t K[64] = {
        0xD76AA478,0xE8C7B756,0x242070DB,0xC1BDCEEE,0xF57C0FAF,0x4787C62A,0xA8304613,0xFD469501,
        0x698098D8,0x8B44F7AF,0xFFFF5BB1,0x895CD7BE,0x6B901122,0xFD987193,0xA679438E,0x49B40821,
        0xF61E2562,0xC040B340,0x265E5A51,0xE9B6C7AA,0xD62F105D,0x02441453,0xD8A1E681,0xE7D3FBC8,
        0x21E1CDE6,0xC33707D6,0xF4D50D87,0x455A14ED,0xA9E3E905,0xFCEFA3F8,0x676F02D9,0x8D2A4C8A,
        0xFFFA3942,0x8771F681,0x6D9D6122,0xFDE5380C,0xA4BEEA44,0x4BDECFA9,0xF6BB4B60,0xBEBFBC70,
        0x289B7EC6,0xEAA127FA,0xD4EF3085,0x04881D05,0xD9D4D039,0xE6DB99E5,0x1FA27CF8,0xC4AC5665,
        0xF4292244,0x432AFF97,0xAB9423A7,0xFC93A039,0x655B59C3,0x8F0CCC92,0xFFEFF47D,0x85845DD1,
        0x6FA87E4F,0xFE2CE6E0,0xA3014314,0x4E0811A1,0xF7537E82,0xBD3AF235,0x2AD7D2BB,0xEB86D391};
    std::vector<uint8_t> m(data, data + len);
    m.push_back(0x80);
    while (m.size() % 64 != 56) m.push_back(0);
    uint64_t bits = (uint64_t)len * 8;
    for (int i = 0; i < 8; i++) m.push_back((uint8_t)(bits >> (i * 8)));  // LE
    for (size_t off = 0; off < m.size(); off += 64) {
        uint32_t X[16];
        for (int i = 0; i < 16; i++)
            X[i] = m[off+i*4]|(m[off+i*4+1]<<8)|(m[off+i*4+2]<<16)|(m[off+i*4+3]<<24);
        uint32_t a=st.a,b=st.b,c=st.c,d=st.d;
        for (int i = 0; i < 64; i++) {
            uint32_t f; int g;
            if (i<16)      { f=F(b,c,d);  g=i; }
            else if (i<32) { f=G(b,c,d);  g=(5*i+1)%16; }
            else if (i<48) { f=H(b,c,d);  g=(3*i+5)%16; }
            else           { f=I(b,c,d);  g=(7*i)%16; }
            uint32_t tmp=d; d=c; c=b;
            uint32_t r=(f+a+K[i]+X[g]); // rotate amount table
            static const uint8_t R[64]={7,12,17,22,7,12,17,22,7,12,17,22,7,12,17,22,
                5,9,14,20,5,9,14,20,5,9,14,20,5,9,14,20,4,11,16,23,4,11,16,23,4,11,16,23,4,11,16,23,
                6,10,15,21,6,10,15,21,6,10,15,21,6,10,15,21};
            b = b + (((r)<<(R[i]))|((r)>>(32-R[i])));
            a = tmp;
        }
        st.a+=a; st.b+=b; st.c+=c; st.d+=d;
    }
    uint32_t hs[4] = {st.a, st.b, st.c, st.d};
    for (int i = 0; i < 4; i++) {
        out[i*4]   = (uint8_t)(hs[i]);
        out[i*4+1] = (uint8_t)(hs[i]>>8);
        out[i*4+2] = (uint8_t)(hs[i]>>16);
        out[i*4+3] = (uint8_t)(hs[i]>>24);
    }
}

// ---------------- Minimal BigInt (LE uint32 limbs, arbitrary size) ----
struct BigInt {
    std::vector<uint32_t> l;  // little-endian limbs, no trailing zero limbs

    BigInt() {}
    explicit BigInt(uint32_t v) : l(1, v) { trim(); }
    void trim() { while (!l.empty() && l.back() == 0) l.pop_back(); }
    bool zero() const { return l.empty(); }

    // big-endian bytes, minimal (high zero bytes trimmed) == C# GetBytes()
    std::vector<uint8_t> be_bytes() const {
        std::vector<uint8_t> out;
        for (size_t i = l.size(); i-- > 0;) {
            uint32_t v = l[i];
            out.push_back((uint8_t)(v>>24)); out.push_back((uint8_t)(v>>16));
            out.push_back((uint8_t)(v>>8));  out.push_back((uint8_t)(v));
        }
        size_t nz = 0;
        while (nz < out.size() && out[nz] == 0) nz++;
        out.erase(out.begin(), out.begin() + nz);
        return out;
    }
    // big-endian bytes -> value == C# FromMemoryBytes
    static BigInt from_be(const uint8_t* b, size_t n) {
        BigInt r;
        // build LE limbs from BE bytes
        std::vector<uint8_t> be(b, b + n);
        while (be.size() % 4) be.insert(be.begin(), 0);
        // limbs pushed LE: i=be.size() group is the LEAST significant limb,
        // and it lands in l[0] - already the little-endian limb convention.
        for (size_t i = be.size(); i >= 4; i -= 4)
            r.l.push_back((be[i-4]<<24)|(be[i-3]<<16)|(be[i-2]<<8)|be[i-1]);
        r.trim();
        return r;
    }
    // hex string pairs, consumed little-endian == C# FromHexString
    static BigInt from_hex_le(const std::string& hs) {
        std::vector<uint8_t> bytes;
        for (size_t i = 0; i + 1 < hs.size(); i += 2) {
            auto hv = [](char c){ return (uint8_t)(c<='9'? c-'0' : (c|0x20)-'a'+10); };
            bytes.push_back((uint8_t)((hv(hs[i])<<4) | hv(hs[i+1])));
        }
        BigInt r;
        for (size_t i = 0; i < bytes.size(); i += 4) {
            uint32_t v = bytes[i];
            if (i+1 < bytes.size()) v |= (uint32_t)bytes[i+1]<<8;
            if (i+2 < bytes.size()) v |= (uint32_t)bytes[i+2]<<16;
            if (i+3 < bytes.size()) v |= (uint32_t)bytes[i+3]<<24;
            r.l.push_back(v);
        }
        r.trim();
        return r;
    }

    static int cmp(const BigInt& a, const BigInt& b) {
        if (a.l.size() != b.l.size()) return a.l.size() < b.l.size() ? -1 : 1;
        for (size_t i = a.l.size(); i-- > 0;)
            if (a.l[i] != b.l[i]) return a.l[i] < b.l[i] ? -1 : 1;
        return 0;
    }
    static BigInt add(const BigInt& a, const BigInt& b) {
        BigInt r; uint64_t carry = 0;
        size_t n = std::max(a.l.size(), b.l.size());
        for (size_t i = 0; i < n; i++) {
            uint64_t s = carry;
            if (i < a.l.size()) s += a.l[i];
            if (i < b.l.size()) s += b.l[i];
            r.l.push_back((uint32_t)s);
            carry = s >> 32;
        }
        if (carry) r.l.push_back((uint32_t)carry);
        r.trim(); return r;
    }
    static BigInt sub(const BigInt& a, const BigInt& b) { // a >= b
        BigInt r; int64_t borrow = 0;
        for (size_t i = 0; i < a.l.size(); i++) {
            int64_t d = (int64_t)a.l[i] - borrow - (i < b.l.size() ? (int64_t)b.l[i] : 0);
            if (d < 0) { d += ((int64_t)1<<32); borrow = 1; } else borrow = 0;
            r.l.push_back((uint32_t)d);
        }
        r.trim(); return r;
    }
    static BigInt mul(const BigInt& a, const BigInt& b) {
        BigInt r; r.l.assign(a.l.size() + b.l.size(), 0);
        for (size_t i = 0; i < a.l.size(); i++) {
            uint64_t carry = 0;
            for (size_t j = 0; j < b.l.size(); j++) {
                uint64_t cur = (uint64_t)a.l[i]*b.l[j] + r.l[i+j] + carry;
                r.l[i+j] = (uint32_t)cur;
                carry = cur >> 32;
            }
            size_t k = i + b.l.size();
            while (carry) {
                if (k == r.l.size()) r.l.push_back(0);
                uint64_t cur = (uint64_t)r.l[k] + carry;
                r.l[k]=(uint32_t)cur; carry = cur>>32; k++;
            }
        }
        r.trim(); return r;
    }
    static BigInt mod(const BigInt& a, const BigInt& n) {
        // shift-subtract reduction (bit-at-a-time over a's bits, MSB first)
        BigInt r;
        auto ab = a.be_bytes();  // MSB first
        for (uint8_t byte : ab) {
            for (int bit = 7; bit >= 0; bit--) {
                // r = r << 1 | bit
                uint32_t carry = 0;
                for (size_t i = 0; i < r.l.size(); i++) {
                    uint32_t nc = r.l[i] >> 31;
                    r.l[i] = (r.l[i] << 1) | carry;
                    carry = nc;
                }
                if (carry) r.l.push_back(carry);
                if ((byte >> bit) & 1) {
                    if (r.l.empty()) r.l.push_back(1);
                    else { uint32_t c = 1; for (size_t i=0;i<r.l.size();i++){uint64_t s=(uint64_t)r.l[i]+c;r.l[i]=(uint32_t)s;c=s>>32;} if(c)r.l.push_back(c);}
                }
                r.trim();
                if (cmp(r, n) >= 0) r = sub(r, n);
            }
        }
        r.trim(); return r;
    }
    static BigInt modpow(const BigInt& base, const BigInt& exp, const BigInt& n) {
        // canonical MSB-first square-and-multiply: result=result^2; if bit: *=base
        BigInt result(1);
        BigInt b2 = mod(base, n);
        auto eb = exp.be_bytes();
        for (uint8_t byte : eb) {
            for (int bit = 7; bit >= 0; bit--) {
                result = mod(mul(result, result), n);
                if ((byte >> bit) & 1) result = mod(mul(result, b2), n);
            }
        }
        return result;
    }
};

// ---------------- SRP6 (verbatim port of SRP6.cs) ----------------
inline std::vector<uint8_t> sha1_cat(const std::vector<std::vector<uint8_t>>& parts) {
    std::vector<uint8_t> all;
    for (auto& p : parts) all.insert(all.end(), p.begin(), p.end());
    uint8_t h[20];
    sha1(all.data(), all.size(), h);
    return std::vector<uint8_t>(h, h + 20);
}

struct SRP6Session {
    static const uint8_t SALT[32];
    BigInt N, g, k, s, b, x, v, B, I;

    static const char* N_HEX()  { return "894B645E89E1535BBDAD5B8B290650530801B18EBFBF5E8FAB3C82872A3E9BB7"; }
    static const char* B_PRIV_HEX() { return "C34E8464C532C1CE798580792B42D8DAB39E1FF9D4CC2820673DCBF9B9F4179E"; }

    static BigInt from_memory_hs(const std::string& hs) {
        // pair-reverse then parse LE (C# FromMemoryHS -> FromHexString)
        std::string rev;
        for (size_t i = hs.size(); i >= 2; i -= 2) rev += hs.substr(i-2, 2);
        return BigInt::from_hex_le(rev);
    }

    void init(const std::string& username, const std::string& password) {
        N = BigInt::from_hex_le(N_HEX());        // little-endian pairs (C# FromHexString)
        g = BigInt::from_hex_le("07");
        k = BigInt::from_hex_le("03");
        s = BigInt::from_be(SALT, 32);           // FromMemoryBytes == BE
        b = from_memory_hs(B_PRIV_HEX());        // == BE value
        // Compute_p: md5(password || magic15) -> uppercase hex -> "00000000"+hex -> FromMemoryHS (BE)
        static const uint8_t MAGIC[15] = {163,172,161,163,102,100,106,102,44,106,107,103,102,107,108};
        std::vector<uint8_t> pw(password.begin(), password.end());
        pw.insert(pw.end(), MAGIC, MAGIC+15);
        uint8_t dg[16]; md5(pw.data(), pw.size(), dg);
        char hex[33];
        for (int i = 0; i < 16; i++) std::snprintf(hex+i*2, 3, "%02X", dg[i]);
        BigInt p = from_memory_hs(std::string("00000000") + hex);
        // x = H(s, p)
        auto sb = s.be_bytes(), pb = p.be_bytes();
        x = BigInt::from_be(sha1_cat({sb, pb}).data(), 20);
        // v = g^x mod N ; B = k*v + g^b (NO final mod - verbatim original)
        v = BigInt::modpow(g, x, N);
        BigInt gb = BigInt::modpow(g, b, N);
        B = BigInt::add(BigInt::mul(k, v), gb);
        // I = username (+ \0 when odd length; trimmed away by BE minimal encode)
        std::string idata = username + ((username.size() % 2 == 0) ? std::string() : std::string(1,'\0'));
        I = BigInt::from_be((const uint8_t*)idata.data(), idata.size());
    }

    void outgoing(std::vector<uint8_t>& outB, std::vector<uint8_t>& outS) const {
        outB = B.be_bytes();
        outS = s.be_bytes();
    }

    bool challenge(const std::vector<uint8_t>& A_bytes, const std::vector<uint8_t>& M_bytes) {
        BigInt A = BigInt::from_be(A_bytes.data(), A_bytes.size());
        BigInt u = BigInt::from_be(sha1_cat({A.be_bytes(), B.be_bytes()}).data(), 20);
        // S = ((v^u mod N) * A)^b mod N
        BigInt vu = BigInt::modpow(v, u, N);
        BigInt S = BigInt::modpow(BigInt::mul(vu, A), b, N);
        // ShaInterleave
        auto sbytes = S.be_bytes();
        size_t half = sbytes.size() / 2;
        std::vector<uint8_t> evens, odds;
        for (size_t i = 0; i < half; i++) { evens.push_back(sbytes[i*2]); odds.push_back(sbytes[i*2+1]); }
        uint8_t h1[20], h2[20];
        sha1(evens.data(), evens.size(), h1);
        sha1(odds.data(),  odds.size(),  h2);
        std::vector<uint8_t> kb(40);
        for (int i = 0; i < 20; i++) { kb[i*2] = h1[i]; kb[i*2+1] = h2[i]; }
        BigInt K = BigInt::from_be(kb.data(), 40);
        // XorNgHashes: H(N) ^ H(g)
        auto nbe = N.be_bytes(), gbe = g.be_bytes();
        auto hn = sha1_cat({nbe}), hg = sha1_cat({gbe});
        std::vector<uint8_t> xng(20);
        for (int i = 0; i < 20; i++) xng[i] = hn[i] ^ hg[i];
        // M = H(xng, H(I), s, A, B, K)
        auto expected = sha1_cat({xng, sha1_cat({I.be_bytes()}), s.be_bytes(),
                                   A.be_bytes(), B.be_bytes(), K.be_bytes()});
        if (expected.size() != M_bytes.size()) return false;
        for (size_t i = 0; i < expected.size(); i++)
            if (expected[i] != M_bytes[i]) return false;
        return true;
    }
};

const uint8_t SRP6Session::SALT[32] = {55,177,232,60,185,177,108,135,223,198,105,1,
    32,225,72,11,238,206,217,24,121,51,91,33,112,57,65,36,111,144,3,236};

// ---------------- Wire packets (verified layouts) ----------------
// MsgSrpChallenge 1213: [len:2][type:2][Blen:1 @+4][B][pad][Slen:1 @+391][S]
inline Packet build_srp_challenge_1213(const std::vector<uint8_t>& B,
                                       const std::vector<uint8_t>& S) {
    Packet p(MSG_LOGIN_CHALLENGE_1213);
    p.payload.assign(391 - 4, 0);           // room for B region (B written after)
    p.payload.insert(p.payload.begin() + 0, 0); // placeholder, fixed below
    // simpler: build manually
    p.payload.clear();
    p.write<uint8_t>((uint8_t)B.size());
    for (auto b : B) p.write<uint8_t>(b);
    if (p.payload.size() > 391 - 4) return Packet(); // B too large (never: <0x80)
    p.payload.resize(391 - 4, 0);
    p.write<uint8_t>((uint8_t)S.size());
    for (auto b : S) p.write<uint8_t>(b);
    p.finalize();
    return p;
}

// MsgLoginReply 1055: [AccountId i4 @+4][Key i4 @+8][Port u4 @+12][0 u4 @+16][IP @+20 len 20]
inline Packet build_login_reply_1055(uint32_t account_id, uint32_t key,
                                     const std::string& ip, uint32_t port) {
    Packet p(MSG_CONNECT_EX_1055);
    p.write<uint32_t>(account_id);
    p.write<uint32_t>(key);
    p.write<uint32_t>(port);
    p.write<uint32_t>(0);
    std::string ipf = ip.substr(0, 20);
    p.write_str(ipf, 20);
    p.finalize();
    return p;
}

// MsgConnect 1052 (error path): [AccountId i4 @+4][dwData i4 @+8][Info cstr16 @+12]
inline Packet build_connect_error_1052(uint32_t account_id, uint32_t code,
                                       const char* info) {
    Packet p(MSG_CONNECT_1052);
    p.write<uint32_t>(account_id);
    p.write<uint32_t>(code);
    p.write_str(std::string(info ? info : ""), 16);
    p.finalize();
    return p;
}

} // namespace conquer
