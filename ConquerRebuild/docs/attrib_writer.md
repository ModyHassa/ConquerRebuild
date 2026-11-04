# FUN_1401a2660 — the real per-attrib writer (verified)

Evidence: `C:<line>` = decompiled/MsgServer.c. The function starts at C:289018
and switches on the attrib id that FUN_1401a6420 (the thin dispatcher,
C:291699-291768) forwards. Each case writes the field and then emits a refresh
via FUN_14039e9a0(track, attrib, value).

| attrib | used by SetUserInt key | write | refresh value | C:line |
|---|---|---|---|---|
| 7 | 1005 Profession | FUN_140372400(user+0x1cf*8, value, 1) | byte user+0xeee | 289135 |
| 8 | 1042 ep | `*(short*)(user+0xf92) = value` | value & 0xffff | 289143 |
| 10 (0xa) | 1043 attribute points | FUN_140171510(user, value) | FUN_140371e60(user+0x1cf) | 289151 |
| 11 (0xb) | 1003 LookFace | FUN_1403721b0(user+0x1cf, value, 1), guarded by a value%1000 vs current%1000 < 5 face/hair workaround | value | 289164 |
| 13 (0xd) | 1035 Spirit | FUN_140199e70(user, value) | (short)user[0x1dc] | 289220 |
| 14 (0xe) | 1034 Vitality | FUN_140199f50(user, value) | *(u16*)(user+0xede) | 289232 |
| 15 (0xf) | 1032 Strength | FUN_140199cb0(user, value) | (short)user[0x1db] | 289244 |
| 16 (0x10) | 1033 Agility | FUN_140199d90(user, value) | *(u16*)(user+0xedc) | 289256 |
| 26 (0x1a) | 1004 Hair | FUN_1403722b0(user+0x1cf, value, 1) | (int)user[0x1d6] | 289314 |

Notes settled by the code:
- No case validates or clamps the value except the `(int)value < 0 -> 0` guard
  inside cases 10/0xd/0xe/0xf/0x10 (C:289152, 289222, 289234, 289246, 289258).
- The four base attributes (strength/agility/vitality/spirit) are written through
  FUN_140199cb0/140199d90/140199f50/140199e70, i.e. a recompute path, not a raw
  store; our engine does not model those attributes, so keys 1032-1035 stay
  unwired (they still answer true, matching the engine's fallthrough).
- Profession (1005) is the one writable key beyond 1003/1004 that maps onto a
  real column we already load (cq_user.profession).
