// ConquerRebuild — packet framing (wave M-C)
// ============================================================
// ORIGINAL frame layout (MsgServer.exe FUN_1404f6c90 / FUN_1404f6d30):
//   [len u16][type u16][payload len-4][magic 8, plaintext] ...
// - len includes the 4-byte header; FUN_1404f6c90 rejects len < 4 and
//   len > 0x400 (disasm: cmp edi,0x400 / cmp edi,0xc region), wants
//   avail >= len + (magic?8:0), returns len with *payload = buf+4 and
//   *payload_len = len-4; when the magic flag is set it compares the
//   RAW bytes at buf+len against "TQClient" (the magic rides OUTSIDE
//   the encrypted part).
// - FUN_1404f6d30 builds [len][type][payload] (len = payload+4).
// - FUN_1404f6dc0 builds [len][type][u32 extra][payload] (len = payload+8).
#pragma once

#include <cstdint>
#include <cstring>
#include <vector>

namespace conquer {
namespace net {

inline constexpr uint16_t kFrameMinLen = 4;
inline constexpr uint16_t kFrameMaxLen = 0x400;

enum FrameParse {
    kFrameNeedMore = 0,   // 0 — wait for more bytes (FUN returns 0)
    kFrameBad = -1,       // -1 — malformed / bad magic
};

// FUN_1404f6c90 — returns the frame length when complete, 0 to wait,
// -1 on a bad frame. `magic` = check the trailing 8-byte "TQClient".
inline int parse_frame(const uint8_t* buf, int avail, uint16_t* out_type,
                       const uint8_t** out_payload, int* out_payload_len,
                       bool magic) {
    if (avail <= 4) return kFrameNeedMore;
    uint16_t len;
    std::memcpy(&len, buf, 2);
    if (len < kFrameMinLen || len > kFrameMaxLen) return kFrameBad;
    const int extra = magic ? 8 : 0;
    if ((int)len + extra > avail) return kFrameNeedMore;
    std::memcpy(out_type, buf + 2, 2);
    *out_payload = buf + 4;
    *out_payload_len = len - 4;
    if (magic && std::memcmp(buf + len, "TQClient", 8) != 0)
        return kFrameBad;
    return len;
}

// FUN_1404f6d30 — [len][type][payload]
inline void build_frame(uint16_t type, const void* payload, int len,
                        std::vector<uint8_t>& out) {
    out.resize((size_t)len + 4);
    uint16_t total = (uint16_t)(len + 4);
    std::memcpy(out.data(), &total, 2);
    std::memcpy(out.data() + 2, &type, 2);
    if (len > 0) std::memcpy(out.data() + 4, payload, (size_t)len);
}

// FUN_1404f6dc0 — [len][type][u32 extra][payload]
inline void build_frame_ex(uint16_t type, uint32_t extra,
                           const void* payload, int len,
                           std::vector<uint8_t>& out) {
    out.resize((size_t)len + 8);
    uint16_t total = (uint16_t)(len + 8);
    std::memcpy(out.data(), &total, 2);
    std::memcpy(out.data() + 2, &type, 2);
    std::memcpy(out.data() + 4, &extra, 4);
    if (len > 0) std::memcpy(out.data() + 8, payload, (size_t)len);
}

} // namespace net
} // namespace conquer
