# Old-engine dispatch ladder (CGameAction::ProcessAction, MsgServer.c:223600-223760)

VERIFIED from the range ladder (`iVar8` = the action TYPE, read from packet slot 3). Each
test is `type - BASE < 0x62` (98 wide); the LAST matching range wins, so the listing order
below is the order in the original source.

| range | handler |
|---|---|
| 101 - 198 | `FUN_140142db0` |
| 201 - 298 | `FUN_14013b950` |
| 301 - 398 | `FUN_14013d790` |
| 401 - 498 | `FUN_1401199d0` (401/402/403 + 498) |
| 501 - 598 | `FUN_140123590` (ProcessActionItem) |
| 601 - 698 | `FUN_140127820` |
| 701 - 798 | `FUN_140128290` |
| 801 - 898 | `FUN_140127070` |
| 1001 - 1996 | `FUN_14012a6e0` (new engine, byte map `DAT_14013aa9c`) |
| 9001 - 9998 | `FUN_140142880` |
| 2001 - 2098 | `FUN_140146a10` |
| 2101 - 2198 | `FUN_140146a10` (same handler) |
| 2201 - 2298 | `FUN_140141c80` |
| 3001 - 3098 | `FUN_14011a7e0` |
| 3501 - 3598 | `FUN_140140380` (MsgServer.c 223697, `iVar8 - 0xdadU < 0x62`) |
| 3601 - 3698 | `FUN_14011b5e0` |
| 3701 + | `FUN_14011dcb0` then `FUN_14011bfa0` (two calls in one branch) |
| 3901 - 3998 | `FUN_14011c610` |
| 8001 - 9000 | `FUN_14011c9e0` |
| 20001 - 29999 | `FUN_14011d050` |

The new-engine byte map (`DAT_14013aa9c`, indexed by `type - 0x3E9` = type - 1001) was read
directly from the binary and cross-checked: 1040 -> 0x22, 1083 -> 0x49, 1095 -> 0x54,
1651 -> 0xA6. Every new-engine type can therefore be located with a one-byte read instead of
a search.
