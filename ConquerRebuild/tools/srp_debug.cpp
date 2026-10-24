// Debug tool: print server-side SRP6 intermediates for a given A.
// Usage: srp_debug <username> <password> <A-hex>
#include "auth/srp6.hpp"
#include <iostream>
using namespace conquer;

static std::string hex(const std::vector<uint8_t>& b) {
    std::string s;
    char buf[4];
    for (auto x : b) { std::snprintf(buf, 4, "%02X", x); s += buf; }
    return s;
}

int main(int argc, char** argv) {
    if (argc < 4) { std::fprintf(stderr, "usage: srp_debug user pass A-hex\n"); return 1; }
    SRP6Session st;
    st.init(argv[1], argv[2]);
    std::vector<uint8_t> A;
    std::string ah = argv[3];
    for (size_t i = 0; i + 1 < ah.size(); i += 2)
        A.push_back((uint8_t)std::stoul(ah.substr(i, 2), nullptr, 16));
    std::vector<uint8_t> B, S;
    st.outgoing(B, S);
    std::cout << "s=" << hex(S) << "\n";
    std::cout << "B=" << hex(B) << "\n";
    std::cout << "A=" << hex(A) << "\n";
    // replicate challenge() with prints
    BigInt Ab = BigInt::from_be(A.data(), A.size());
    auto u = BigInt::from_be(sha1_cat({Ab.be_bytes(), st.B.be_bytes()}).data(), 20);
    {   // replicate Compute_p for debugging
        const uint8_t MAGIC[15] = {163,172,161,163,102,100,106,102,44,106,107,103,102,107,108};
        std::vector<uint8_t> pw((const uint8_t*)"test123", (const uint8_t*)"test123"+7);
        pw.insert(pw.end(), MAGIC, MAGIC+15);
        uint8_t dg[16]; md5(pw.data(), pw.size(), dg);
        char hb[33]; for (int i=0;i<16;i++) std::snprintf(hb+i*2,3,"%02X",dg[i]);
        auto pp = SRP6Session::from_memory_hs(std::string("00000000")+hb);
        std::cout << "p=" << hex(pp.be_bytes()) << "\n";
    }
    std::cout << "x=" << hex(st.x.be_bytes()) << "\n";
    std::cout << "v=" << hex(st.v.be_bytes()) << "\n";
    std::cout << "gb=" << hex(BigInt::modpow(st.g, st.b, st.N).be_bytes()) << "\n";
    std::cout << "u=" << hex(u.be_bytes()) << "\n";
    BigInt vu = BigInt::modpow(st.v, u, st.N);
    BigInt Sb = BigInt::modpow(BigInt::mul(vu, Ab), st.b, st.N);
    auto sb = Sb.be_bytes();
    size_t half = sb.size() / 2;
    std::vector<uint8_t> evens, odds;
    for (size_t i = 0; i < half; i++) { evens.push_back(sb[i*2]); odds.push_back(sb[i*2+1]); }
    uint8_t h1[20], h2[20];
    sha1(evens.data(), evens.size(), h1);
    sha1(odds.data(), odds.size(), h2);
    std::vector<uint8_t> kb(40);
    for (int i = 0; i < 20; i++) { kb[i*2] = h1[i]; kb[i*2+1] = h2[i]; }
    std::cout << "S=" << hex(sb) << " (len " << sb.size() << ")\n";
    std::cout << "K=" << hex(kb) << "\n";
    auto hn = sha1_cat({st.N.be_bytes()}), hg = sha1_cat({st.g.be_bytes()});
    std::vector<uint8_t> xng(20);
    for (int i = 0; i < 20; i++) xng[i] = hn[i] ^ hg[i];
    auto expected = sha1_cat({xng, sha1_cat({st.I.be_bytes()}), st.s.be_bytes(),
                               Ab.be_bytes(), st.B.be_bytes(),
                               BigInt::from_be(kb.data(), 40).be_bytes()});
    std::cout << "M=" << hex(expected) << "\n";
    return 0;
}
