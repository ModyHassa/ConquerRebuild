# Deferred action types — decoded skeletons (no invention)

Every entry below was read in the decompiled `MsgServer.exe` output. The
`case` line numbers refer to `decompiled/MsgServer.c`. The rule for this
file: a type is only ported when its wire output or state change is fully
determined. Where a helper's semantics are still unknown, it is listed
here with the exact address so the next wave starts from evidence.

## RESOLVED helper: FUN_140104140 = generic item SetInt (line 192582)
This is the function every item-generation action calls, and it is now
decoded:

    FUN_140104140(item, idx, value, flag)
      if (idx > 99) { log CHECK "idx < ITEMTYPEDATA_OFFSET"
                      (item.cpp) ; return; }
      if (idx == 0x13 /*19*/ && item->id != 0) { GM log
                      "gmlog/EquipmentLockStatus" }      // 19 = LOCK
      item->attrs[idx]->SetInt(value)      // vtbl+0xB0

So `idx` is simply the index into the item's ITEMTYPEDATA attribute
array (< 100 slots), NOT a bespoke enum. 19 is confirmed as the
equipment-LOCK attribute by the GM log it triggers.

Attribute propagation inside the same call:
  - setting 0, 3, 10, 11, 14, 15 or 16 also recomputes attribute 0x11 (17)
  - setting 1, 8, 9 or 12 additionally recomputes 3 and 0x11 (17)
  => 17 is a derived/total value, 3 is derived from the type-ish group.

Consequence for 542 / 528 / 529 (211 rows): the remaining work is no
longer "find the enum" but "map the ITEMTYPEDATA indices onto our
ItemInfo fields". Strongly implied by the callers:
  4  = amount / durability      (528 sets it from the 1st guarded field)
  5  = max durability           (528 sets it with no explicit value)
  8,9,10,11,12 = the gem/magic/data group (528 maps sscanf fields here)
  13 = resolved through FUN_140385cf0(player,1,value) -> a reference id
  17 = derived total (never set directly by content)
  20, 21, 24 = set only by 542 (quality/bless/expire family)
Our server keeps a flat ItemInfo instead of a 100-slot array, so the port
must translate these indices at write time.

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

## 528 — 49 rows — PORTED in v67 (was: item generation, 9 fields (case 0x210, line 214599))
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

## v67 outcome for 528
Ported and verified live. The stack-slot order of the sscanf pointers gives
the full mapping, and the DB row proves it:
  field1 -> attr 4 amount | field2 -> attr 5 amount_limit
  field3 -> unused        | field4 -> attr 12 magic3
  field5 -> attr 11 magic2| field6 -> attr 10 magic1
  field7 -> attr 9 gem2   | field8 -> attr 8 gem1
  field9 -> FUN_140117670(item, !=0, 1)  (still un-named -> logged only)
`cq_item.data` (attr 13) is int(4) in the real dump, so the original's
FUN_140385cf0(player,1,field2) resolution is the last missing piece; we
insert 0 there and log the field rather than guess a resolved value.
529 is the 2-field sibling of the same generator and is next.
