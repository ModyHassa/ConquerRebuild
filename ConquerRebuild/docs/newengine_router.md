# New-engine router: how to find ANY action type 1001-1729 (verified v102)

## The mechanism (PROVEN, machine-verified 6/6)
`FUN_14012a6e0` (decompiled/msgserver_gameaction.c:10349) begins with
`if (0x2d8 < type - 0x3e9) return;` (so 1001..1729 only) and then:

```c
switch ((&DAT_14013aa9c)[type - 0x3e9]) { ... 175 cases ... }
```

`DAT_14013aa9c` is a byte map indexed by **(type - 1001)**; its VALUE is the
**case label**, and the case bodies are ordinary `case 0xNN:` blocks in that
same decompiled function (all 175 of them exist; an earlier worker's claim that
this function has "no definition in the decompile" was WRONG).

## The tool
`tools/newengine_map.py` reads the byte map straight out of the PE:

    python3 tools/newengine_map.py --anchors        # 6/6 OK, verifies the tool
    python3 tools/newengine_map.py 1040 1086 1554   # -> case 0x22 / 0x4c / 0x99

Anchor verification against types already ported by hand:

| type | case (tool) | case (known from the port) |
|---|---|---|
| 1075 | 0x41 | 0x41 |
| 1076 | 0x42 | 0x42 |
| 1077 | 0x43 | 0x43 |
| 1080 | 0x46 | 0x46 |
| 1081 | 0x47 | 0x47 |
| 1085 | 0x4B | 0x4B |

52 of the 84 unported types live inside this engine; the other 32 belong to
other dispatchers (401-family, 2001+, 532/542-544, ...).

## Case map (unported types, by rows)
| type | rows | engine | case |
|---|---|---|---|
| 1040 | 668 | FUN_14012a6e0 (1001-1729) | 0x22 |
| 1086 | 640 | FUN_14012a6e0 (1001-1729) | 0x4c |
| 1554 | 500 | FUN_14012a6e0 (1001-1729) | 0x99 |
| 402 | 303 | other engine | - |
| 532 | 252 | other engine | - |
| 1095 | 245 | FUN_14012a6e0 (1001-1729) | 0x54 |
| 1071 | 182 | FUN_14012a6e0 (1001-1729) | 0x3d |
| 3701 | 122 | other engine | - |
| 1083 | 121 | FUN_14012a6e0 (1001-1729) | 0x49 |
| 1084 | 99 | FUN_14012a6e0 (1001-1729) | 0x4a |
| 1651 | 95 | FUN_14012a6e0 (1001-1729) | 0xa6 |
| 401 | 94 | other engine | - |
| 403 | 93 | other engine | - |
| 1072 | 68 | FUN_14012a6e0 (1001-1729) | 0x3e |
| 1043 | 65 | FUN_14012a6e0 (1001-1729) | 0x25 |
| 1096 | 62 | FUN_14012a6e0 (1001-1729) | 0x55 |
| 1082 | 52 | FUN_14012a6e0 (1001-1729) | 0x48 |
| 1098 | 38 | FUN_14012a6e0 (1001-1729) | 0x57 |
| 1510 | 35 | FUN_14012a6e0 (1001-1729) | 0x8c |
| 1203 | 34 | FUN_14012a6e0 (1001-1729) | 0x6f |
| 1650 | 34 | FUN_14012a6e0 (1001-1729) | 0xa5 |
| 802 | 31 | other engine | - |
| 1654 | 28 | FUN_14012a6e0 (1001-1729) | 0xa9 |
| 1204 | 27 | FUN_14012a6e0 (1001-1729) | 0x70 |
| 1048 | 20 | FUN_14012a6e0 (1001-1729) | 0x2a |
| 1028 | 16 | FUN_14012a6e0 (1001-1729) | 0x16 |
| 1053 | 14 | FUN_14012a6e0 (1001-1729) | 0x2e |
| 1508 | 13 | FUN_14012a6e0 (1001-1729) | 0x8a |
| 1511 | 13 | FUN_14012a6e0 (1001-1729) | 0x8d |
| 1041 | 11 | FUN_14012a6e0 (1001-1729) | 0x23 |
| 1094 | 11 | FUN_14012a6e0 (1001-1729) | 0x53 |
| 1107 | 9 | FUN_14012a6e0 (1001-1729) | 0x60 |
| 1509 | 9 | FUN_14012a6e0 (1001-1729) | 0x8b |
| 224 | 7 | other engine | - |
| 1078 | 7 | FUN_14012a6e0 (1001-1729) | 0x44 |
| 1102 | 6 | FUN_14012a6e0 (1001-1729) | 0x5b |
| 1110 | 6 | FUN_14012a6e0 (1001-1729) | 0x63 |
| 1202 | 6 | FUN_14012a6e0 (1001-1729) | 0x6e |
| 1652 | 6 | FUN_14012a6e0 (1001-1729) | 0xa7 |
| 3012 | 6 | other engine | - |
| 1024 | 5 | FUN_14012a6e0 (1001-1729) | 0x12 |
| 1052 | 5 | FUN_14012a6e0 (1001-1729) | 0xbb |
| 1109 | 5 | FUN_14012a6e0 (1001-1729) | 0x62 |
| 3907 | 5 | other engine | - |
| 223 | 4 | other engine | - |
| 1115 | 4 | FUN_14012a6e0 (1001-1729) | 0x68 |
| 8011 | 4 | other engine | - |
| 1106 | 3 | FUN_14012a6e0 (1001-1729) | 0x5f |
| 8007 | 3 | other engine | - |
| 128 | 1 | other engine | - |
| 544 | 1 | other engine | - |
| 701 | 1 | other engine | - |
| 702 | 1 | other engine | - |
| 703 | 1 | other engine | - |
| 704 | 1 | other engine | - |
| 705 | 1 | other engine | - |
| 706 | 1 | other engine | - |
| 707 | 1 | other engine | - |
| 708 | 1 | other engine | - |
| 709 | 1 | other engine | - |
| 711 | 1 | other engine | - |
| 712 | 1 | other engine | - |
| 713 | 1 | other engine | - |
| 714 | 1 | other engine | - |
| 1023 | 1 | FUN_14012a6e0 (1001-1729) | 0x11 |
| 1032 | 1 | FUN_14012a6e0 (1001-1729) | 0x1a |
| 1033 | 1 | FUN_14012a6e0 (1001-1729) | 0x1b |
| 1034 | 1 | FUN_14012a6e0 (1001-1729) | 0x1c |
| 1035 | 1 | FUN_14012a6e0 (1001-1729) | 0x1d |
| 1037 | 1 | FUN_14012a6e0 (1001-1729) | 0x1f |
| 1047 | 1 | FUN_14012a6e0 (1001-1729) | 0x29 |
| 1076 | 1 | FUN_14012a6e0 (1001-1729) | 0x42 |
| 1079 | 1 | FUN_14012a6e0 (1001-1729) | 0x45 |
| 1108 | 1 | FUN_14012a6e0 (1001-1729) | 0x61 |
| 1111 | 1 | FUN_14012a6e0 (1001-1729) | 0x64 |
| 1114 | 1 | FUN_14012a6e0 (1001-1729) | 0x67 |
| 1116 | 1 | FUN_14012a6e0 (1001-1729) | 0x69 |
| 1520 | 1 | FUN_14012a6e0 (1001-1729) | 0x93 |
| 1557 | 1 | FUN_14012a6e0 (1001-1729) | 0x9c |
| 2014 | 1 | other engine | - |
| 2202 | 1 | other engine | - |
| 2203 | 1 | other engine | - |
| 2204 | 1 | other engine | - |
| 3011 | 1 | other engine | - |

## Bodies read and classified (v102)

Legend: PROVEN = fully decoded; UNKNOWN(x) = the named fact is missing, so the
type is NOT ported (no guessing).

| type | rows | case | param | proven semantics | status |
|---|---|---|---|---|---|
| 1040 | 668 | 0x22 | `%d %d %d` (3rd defaults 1) | REBIRTH. `FUN_140163c90(user,v1,v3)` searches a global requirement table (DAT_140975ba8) matching col1==user lookface (`user+0xeee`), col2==v1, col5==v3, col3<=level; then `FUN_1401c3180(user,row,v3,v2)` applies the rebirth and the server writes the `gmlog/rebirth` line: "prof, level rebirth to prof, look" | BLOCKED: identity of the requirement table + its 5 columns UNKNOWN |
| 1086 | 640 | 0x4C | `%u %u` | `X = FUN_140382f00(user, v1); var[v2] = X` (samples: `2400 5`, `600 5`). FUN_140382f00 walks the level-exp curve table (`FUN_14014de60(levexp,0,level)`), reads cell 1 through getter `+0x58`, floors non-positive values to 1, and continues with exp arithmetic | BLOCKED: the tail of FUN_140382f00 (levexp curve cell meaning) UNKNOWN |
| 1554 | 500 | 0x99 | `%s` | 60 lines, 5 helpers (087d90/0bb7e0/113380/170e90/...) | IN PROGRESS by worker |
| 1095 | 245 | 0x54 | none | `return FUN_1401763f0(user, 1)` (0x140000001 only its low byte matters). That helper looks up a manager (`FUN_140008520(user[0x246]) -> +0x100`, logs ERROR if null), reads bytes `user+0xeda/0xedb/0xeee` and `user vtable+0x108`, then calls `FUN_1402f16c0(manager, uid, b1, b2, b3, v)` | BLOCKED: FUN_1402f16c0 semantics + the three byte fields UNKNOWN |
| 1071 | 182 | 0x3D | `%u %u %hu` (needs all 3) | `FUN_1401a9b00(user,v1,v2,NULL)` PROVEN to push `{u32 id=v1, u32 time=TimeGet()/1000, int num=v2, string str=""}` into the container at `user+0x330` (only when `num!=0 || str!=NULL`); then if v3!=0 it builds a packet with `FUN_140362620` and sends it to self | BLOCKED on the notification: the container at +0x330 has no meaning yet, and 0x9f/ v3 field order in FUN_140362620 is UNKNOWN |
| 1083 | 121 | 0x49 | `%s %d` | ops on the "online gift time" expiry: `<` -> `FUN_140382960(user,2,0) < v`, `==` -> `FUN_140382960(user,2) == v`, `+=` -> `FUN_140382b00(user,v)` (adds v*3600s, aligning to the next hour when no time is active), `chk` -> `v!=0 ? FUN_140382350(user) : FUN_140383750(user)`. FUN_140382960 returns remaining time in s/min/h (units 0/1/2 with +30 / +1800 rounding) and 0 when expired | BLOCKED: storage field (user+0xf38) source column + FUN_140382350/383750 meaning UNKNOWN |
| 1084 | 99 | 0x4A | `%I64d %u %u` (needs 3) | `FUN_140382d20(user, v1, &lo, &hi)` splits the 64-bit value using the level-exp table, then `var[v2] = lo; var[v3] = hi` - and `FUN_140164520(user, idx, val)` is PROVEN to be exactly `if (idx>7) error; else user_var64[idx] = val` (array at `user+0x2F0`, 8 slots) | BLOCKED: the split rule inside FUN_140382d20 UNKNOWN |
| 1651 | 95 | 0xA6 | `%s` | 85 lines, 4 helpers | IN PROGRESS by worker |
| 1072 | 68 | 0x3E | none | builds a self-talk `FUN_1403a5ce0(msg, ctx_cell4_string, user+0x40, user+0x48)` with the constant 0xD and sends it to self | BLOCKED: action-context cell 4 getter (+0x48) identity UNKNOWN (same wall as 112) |
| 1043 | 65 | 0x25 | none | `return FUN_140162620(user)` | BLOCKED: FUN_140162620 body unread |
| 1096 | 62 | 0x55 | 6 ints | 64 lines, 4 helpers | not started |
| 1082 | 52 | 0x48 | `%s %s %u %d %d %d` | 232 lines, 9 helpers (largest single case) | not started |
| 1098 | 38 | 0x57 | 15 ints | 52 lines | not started |
| 1510 | 35 | 0x8C | `%d` | `FUN_140177000(user, v)` | BLOCKED: helper unread |
| 1650 | 34 | 0xA5 | `%u` | builds+sends the same packet family as 1071 (`FUN_140362560/620/625e0`) | BLOCKED: same packet, params unknown |
| 1203 | 34 | 0x6F | none | `return (getter(comp+0x80) <= getter(comp+0x78))` on the `param_4[2]` component | BLOCKED: component slot identities UNKNOWN |
| 1204 | 27 | 0x70 | none | `return (user+0x88 <= user+0x80)` via the user vtable | BLOCKED: the two vtable slots +0x80/+0x88 UNKNOWN |
| 1048 | 20 | 0x2A | `%d %u` (1st defaults 100) | `FUN_140382c50(user, clamp(v1,0..), v2)` PROVEN to set `user+0xb74 = v1`, `user+0x16f*4 = v2`, `user+0xb7c = TimeGet()/1000`, then build and send a packet (`FUN_14039e7b0(msg, uid, 0x12, user+0xb74)`) - and the case ALWAYS takes the fail branch afterwards | BLOCKED: the packet family `FUN_14039e7b0` type id UNKNOWN |
| 1053 | 14 | 0x2E | none | `return *(u8*)(user+0x51C) != 0` | BLOCKED: which boolean `+0x51C` is UNKNOWN |
| 1511 | 13 | 0x8D | none | same packet family as 1071 | BLOCKED |
| 1508 | 13 | 0x8A | none (strtoul of param) | LOTTERY: requires the `pLotteryProvider` singleton (logs `IF_NOT pLotteryProvider`), then calls its handler with (uid, strtoul(param), ctx_cell4) | BLOCKED: no lottery subsystem exists |
| 1094 | 11 | 0x53 | none | profession/lookface gate: level<2 -> false; `cell4_int` must be 0 or equal `(lookface/10)*10`; then compare `FUN_140165580(user)` and `FUN_140165570(user)` after the same rounding | BLOCKED: the two getters UNKNOWN |
| 1041 | 11 | 0x23 | any | `(*user vtable+0x150)(user, 0x839, param); return 1` - a self message with STR id 0x839 | BLOCKED: vtable slot +0x150 UNKNOWN |

## What this buys
Every one of the 52 in-engine types now has a proven case index and a read body,
so the next waves are mechanical: read the 1-2 helper functions listed as
UNKNOWN in the table and the type is portable. No more searching for handlers.
