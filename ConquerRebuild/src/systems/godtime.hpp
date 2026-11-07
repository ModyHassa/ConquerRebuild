// v131: the CUser date container at user+0xE78 and its packed YYMMDDHH values.
//
// The container's setters (0x140372710 / 0x140372770 / 0x140373960 ...) each
// write one dword field and mirror it into a keyed store at container+0x230
// under the field's **DB column name**. The keys read out of .rdata give the
// whole map; the ones this rebuild uses:
//     +0xC0 = user+0xF38 = "god_status"      (1083)
//     +0x1B0 = user+0x1028 = "last_logout_3" (1557 primary)
//     +0x0A8 = user+0xF20  = "last_login"    (1557 fallback)
//
// Value format (VERIFIED from 0x140382850 / 0x1403823e0): `YYMMDDHH` packed as
// a decimal integer, e.g. the real row god_status = 26052409 is 2026-05-24 09:00.
//   0x140382850: hour = v % 100, mday = (v/100) % 100, mon = (v/10000) % 100 - 1,
//                year = (v/1000000) % 100 + 100 (tm_year, i.e. 20YY), sec = min = 0,
//                wday = yday = 0, then mktime() -> time_t (0 when v == 0).
//   0x1403823e0: localtime(ts) -> (prefix + tm_year - 100) * 100 + (tm_mon + 1) ... etc,
//                where prefix = (old / 10^8) * 100 keeps a leading century digit.
#pragma once

#include <cstdint>
#include <ctime>

namespace conquer {

// 0x1403823e0's packing tail, minus the DB flush.
inline uint32_t god_pack(uint32_t old_value, std::time_t ts) {
    std::tm tmv{};
#if defined(_WIN32)
    localtime_s(&tmv, &ts);
#else
    localtime_r(&ts, &tmv);
#endif
    uint32_t prefix = (old_value / 100000000u) * 100u;
    uint32_t mid = prefix + (uint32_t)tmv.tm_year - 100u;   // YY
    mid = mid * 100u + (uint32_t)(tmv.tm_mon + 1);          // + MM
    mid = mid * 100u + (uint32_t)tmv.tm_mday;               // + DD
    mid = mid * 100u + (uint32_t)tmv.tm_hour;               // + HH
    return mid;
}

// 0x140382850: packed value -> time_t (0 when the value is 0).
inline std::time_t god_unpack(uint32_t v) {
    if (v == 0) return 0;
    std::tm tmv{};
    tmv.tm_hour = (int)(v % 100u);
    tmv.tm_mday = (int)((v / 100u) % 100u);
    tmv.tm_mon  = (int)((v / 10000u) % 100u) - 1;
    tmv.tm_year = (int)((v / 1000000u) % 100u) + 100;
    tmv.tm_sec  = 0;
    tmv.tm_min  = 0;
    tmv.tm_wday = 0;
    tmv.tm_yday = 0;
    tmv.tm_isdst = 0;   // the original leaves isdst untouched (stack zero)
    return std::mktime(&tmv);
}

// 0x140382960(user, mode, flag) with mode 2 / flag 0 = whole hours left.
// mode 0 = seconds, 1 = minutes (flag adds 30 s), 2 = hours (flag adds 1800 s),
// any other = days (flag adds 43200 s). Expired or absent -> 0.
inline int64_t god_remaining(uint32_t v, std::time_t now, int mode = 2, bool round = false) {
    std::time_t ts = god_unpack(v);
    if (ts == 0 || ts < now) return 0;
    int64_t left = (int64_t)ts - (int64_t)now;
    switch (mode) {
        case 0: return left;
        case 1: return (left + (round ? 30 : 0)) / 60;
        case 2: return (left + (round ? 1800 : 0)) / 3600;
        default: return (left + (round ? 43200 : 0)) / 86400;
    }
}

// 0x140382b00: add `hours` to the god expiry. When the stored value is absent or
// already expired the base is the **NEXT hour boundary** ((now + 0xE0F) / 0xE10 * 0xE10,
// i.e. ceil-to-hour: at 10:38 the base is 11:00), otherwise the stored timestamp
// is the base. So `+= 5` at 10:38 yields 16:00, not 15:00.
inline uint32_t god_add_hours(uint32_t v, int hours, std::time_t now) {
    std::time_t base = god_unpack(v);
    if (base <= 0 || base < now) base = ((now + 3599) / 3600) * 3600;
    std::time_t next = base + (std::time_t)hours * 3600;
    if (next < 0) return v;                 // 0x140382b78: negative -> no write
    return god_pack(v, next);
}

// Day ordinals for the `tq::DateStamp` / `tq::DateStampDiff` imports used by 1557
// (0x1406d... IAT slots). The original's exact epoch is UNKNOWN; only ordering and
// the day DIFFERENCE are ever consumed, so the rebuild uses whole days since the
// Unix epoch (UTC), which preserves both.
inline int64_t god_day_stamp(uint32_t packed) {
    std::time_t ts = god_unpack(packed);
    return ts == 0 ? 0 : (int64_t)(ts / 86400);
}

inline int64_t god_today(std::time_t now) { return (int64_t)(now / 86400); }

} // namespace conquer
