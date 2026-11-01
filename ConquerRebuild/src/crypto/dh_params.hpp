// ConquerRebuild — DH parameters loader (wave M-A)
// ============================================================
// ORIGINAL: MsgServer.exe FUN_140505380 (the DH initialiser read by the
// key-exchange receiver FUN_140505bc0, which only runs when the init
// flag DAT_140976588 and the DH* DAT_140976590 are non-null).
// Flow (cross-verified in the sibling TQServer-CPP-rebuild unit M15
// against this same binary): the config key gives the PEM file name,
// a failed ini read is NOT fatal and the default "dh.pem" is used,
// PEM_read_DHparams loads the params, DH_check validates them, and the
// ready-flag is set once. The exe's own directory carries dh.pem
// (conquer_source/Source/dh.pem).
#pragma once

#include <openssl/dh.h>
#include <openssl/pem.h>
#include <cstdio>
#include <string>

namespace conquer {
namespace crypto {

struct DhParams {
    DH* dh = nullptr;
    bool loaded = false;

    // FUN_140505380 — returns true when the parameters are ready.
    bool load(const char* path = "dh.pem") {
        if (dh) {
            loaded = true;
            return true;
        }
        FILE* f = std::fopen(path, "r");
        if (!f) {
            std::printf("[dh] can not open %s\n", path);
            return false;
        }
        dh = PEM_read_DHparams(f, nullptr, nullptr, nullptr);
        std::fclose(f);
        if (!dh) {
            std::printf("[dh] PEM_read_DHparams failed for %s\n", path);
            return false;
        }
        int codes = 0;
        DH_check(dh, &codes);
        // the original logs but continues when DH_check complains
        // (the sibling's M15 note: DH_check/Generate are called and the
        // ready flag is set regardless of the code bits)
        loaded = true;
        std::printf("[dh] loaded %s (%d bits, check codes %d)\n", path,
                    DH_bits(dh), codes);
        return true;
    }

    ~DhParams() {
        if (dh) DH_free(dh);
    }
};

} // namespace crypto
} // namespace conquer
