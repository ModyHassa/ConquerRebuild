# Deferred action types — decoded skeletons (no invention)

Every entry below was read in the decompiled `MsgServer.exe` output. The
`case` line numbers refer to `decompiled/MsgServer.c`. The rule for this
file: a type is only ported when its wire output or state change is fully
determined. Where a helper's semantics are still unknown, it is listed
here with the exact address so the next wave starts from evidence.

## 131 — 253 rows — styled/system talk (case 0x83, ~line 223015)
Builder: `FUN_140362620` (a THIRD 1004 variant, distinct from the verified
`build_talk_1004`). It writes, into the msg buffer:
`+0x00` tick u4, `+0x04` id u4, `+0x08` style/const u4 (0xA2 = 162),
`+0x10` lookface u4, `+0x14`/`+0x16`/`+0x18`/`+0x1A` four u2 values,
size `0x26`, **no string packer at all**.
Case inputs: `sscanf("%d %d %u %u")` -> four numbers; the two largest go
to `+0x18`/`+0x1A`, the others to `+0x16`/`+0x14`.
BLOCKER: the client side rendering of those four u2 slots is unidentified
(the client `CMsgTalk` ctor `FUN_007ddf49` only stores the raw buffer, and
its renderer was not located). Porting it onto our existing 1004 layout
would emit bytes the original never sends.

## 542 — 113 rows — item generation, 17 fields (case 0x21e, line 214781)
`sscanf("%d %d %d %d %d %d %d %d %u %u %u %u %u %d %d %d %d")` with 17
pointers, of which Ghidra exposes 15 stack slots - the two register-passed
pointers are not recovered, so the field->slot mapping is ambiguous.
Flow: `FUN_14034a8d0(player, uin, mode, 1)` creates the item, then
`FUN_140104140(item, slot, value)` writes slots
4,5,8,9,10,0xB,0xC,0xE,0xF,0x10,0x14,0xD,0x15,0x18, then
`FUN_140117670(item, cond, 0)`, optional `FUN_14032daf0(player, item)`
(give), then the manager broadcast `vtbl+0x130(player, item, 3)`.
BLOCKER: the slot-id enum for `FUN_140104140` (item attribute ids) is not
recovered, and the sscanf pointer order is incomplete.

## 528 — 49 rows — item generation, 9 fields (case 0x210, line 214599)
`sscanf("%d %d %d %d %d %d %d %d %d")`, requires all 9. Creates the item
with `FUN_14034a8d0(player, uin, 0, 1)`, writes slots 4,5,8,9,10,0xB,0xC
plus slot `0xD = FUN_140385cf0(player, 1, value)`, finalises with
`FUN_140117670(item, value != 0, 1)`, then the same manager broadcast.
Also calls `FUN_140118320()` at the top and, if the looked-up entry is
non-zero, `vtbl+0x88` on it.
BLOCKER: same slot enum as 542.

## 529 — 49 rows — item generation, 2 fields (case 0x211, line 214669)
`sscanf("%d %d")`, both must be non-zero, then `FUN_14032b450(player)`
and `FUN_140385cf0(player, 1, first)`; the rest walks a container.
BLOCKER: same slot/string-resolution semantics.

## 519 — 27 rows — inventory lookup (case 0x207, line 214527)
```
plVar10 = user; uVar5 = user->id (vtbl+0x48);
if (FUN_1403408c0(player, uVar5) != 0) return true;   // chain continues
break;                                                 // else default
```
`FUN_1403408c0(player, value)` (line 592903) iterates the player's item-id
vector (`player+0xC20..+0xC28`), resolves each item through the item
manager (`vtbl+0x60`), keeps those whose attribute 1 equals `value`, then
calls `FUN_14033a6a0(player, item_id, 1, 0, flags)` per match and returns
1 if at least one matched, 0 otherwise.
BLOCKER: `FUN_14033a6a0` (what is done to each matched item) and whether
attribute 1 is the item type id.

## 332 — 30 rows (case 0x14c, line 220472)
`if (player) { sub = (*(player[2]+0x160))(player+2); return sub ? FUN_1401196c0(sub) : true; }`
BLOCKER: identify the `+0x160` sub-object and `FUN_1401196c0`.

## 550 — 53 rows (case 0x226, line 214941)
Multi-field `sscanf` over ~10 locals; not decoded yet.

## 144 — 24 rows (case 0x90, line 223241)
`sscanf("%s")` then `_strnicmp(param, "==", 0x100)` — a string-compare
condition action; the comparison table after the prefix test is not read yet.

## 717 — 28 rows (case 0x2cd, line 216466)
`sscanf("%s %s %d %u")`, at least 3 fields, first two are strings.
Not decoded yet.

## 2007 — 54 rows — guild (case 0x7d7)
Needs the guild system first (cq_syndicate tables); not started.

## 2101 — 103 rows (case 0x835, line 224631)
Large structured case (`memset(local_3a8,0,0x48)` + several slot pointers);
not decoded yet. Note 2101 is outside the classic 1-2014 range, so it is
part of the newer action family.

## Queue after these
129 (36), 519 done above, 332 above; then everything under 24 rows.
