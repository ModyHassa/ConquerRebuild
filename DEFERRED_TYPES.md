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

## 529 — 49 rows — CONSUME-item gate (case 0x211, line 214669) — decoded, not ported
NOT item generation. `sscanf("%d %d")` -> A,B (both must be non-zero);
`FUN_14032b450(player)` returns the player container; `resolved =
FUN_140385cf0(player,1,A)`; then for every id in the container
`item = manager->Get(id)` and it returns true on the first item with
`attr1 == actor-id && B <= resolved - attr13 && attr5 == A` after
`FUN_140340190(player, item_id, 1, 1)` succeeds (a take/remove).
So it is a "player must own A x B and they are consumed" gate. Live
content uses A=01..06 with B=200.
BLOCKER: FUN_140385cf0 resolution + whether attr1 is compared against the
actor id or the uin - both would need guessing to finish.

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

## 550 — 53 rows — PORTED in v68 (case 0x226, line 214941)
Decoded: the action `data` column is the itemtype; the 20-field sscanf
puts flags in field 1 and COUNT in field 2 (live content proves it:
data=3005822/360149/350079 with params "", "0 20", "0 0 0 0 0 0 0 1").
FUN_140102780 validates the itemtype; the valid path runs a bag-space
check when flags&1 == 0 (STR_FULLBAG_NO_MORE) and then FUN_14033fc80
adds `count` in one stack. flags&1 only selects the add helper.

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

## 519 — 27 rows — PORTED in v69 (case 0x207, line 214527)
FUN_1403408c0(player, itemtype) collects every carried item id whose
attribute 1 (type) equals the action's data column, erases each one via
FUN_14033a6a0(player, id, 1, 0, flags) and returns true iff the collected
list was non-empty -> "take ALL of this type", unlike 502 (one copy).

## 144 — 24 rows — decoded, blocked on a player field (case 0x90, line 223241)
`sscanf("%s")` must equal "=="; then FUN_14008ab60(uin, data) is called.
FUN_14008ab60 (line 101440) is a bit test: valid for bits 1..31, reading the
32-bit flag word at user+0x2AC (`word >> (bit-1) & 1`), false when the word
is <= 0. So 144 = "is player flag <data> set?". BLOCKER: our Player struct
has no +0x2AC equivalent (no status/flag word) and the flag semantics are
unknown, so storing bits without a truthful source would be invention.

## 332 — 30 rows — decoded, helper unnamed (case 0x14c, line 220472)
Returns FUN_1401196c0((param_4[2] vtbl+0x160)()) and `return true` when
there is no player. Needs the meaning of FUN_1401196c0 and of the
vtbl+0x160 sub-object before it can be ported.

## 717 — 28 rows — family/syn (guild) block (case 0x2cd, line 216466)
`sscanf("%s %s %d %u")` -> name, op, value. Requires a target from
vtbl+0x170 and `(syn manager +0x248)(target)` to succeed. Ops decoded:
 - money "+=" -> (syn +0x270)(target, value) -> true
 - money "<"  -> (syn +0x268)(target) < value -> bool
 - member_title "=" -> (syn +0x110)(target, value) -> true
 - has_domain "=="  -> (syn +0x2e8)(target) -> bool
Belongs to the guild/syn subsystem (with 2007); deferred with that system.

## 131 — 253 rows — PORTED in v69 (case 0x83, line 223015)
Not a 1004 dialog: FUN_140362620 (line 612269) stamps message id 0x271A =
10010 (CMsgAction). Payload: +0 ts, +4 actor, +8 = literal 0xa2 (162),
+0x10 = the sender's map id, +0x14/+0x16 = two 16-bit fields, +0x18/+0x1A =
the two coordinate fields from the param, total 0x26 bytes; sent to the
acting player only (param_4[2] vtbl+0x350). Live content is 253 rows of
"x y aux" with x in 195..772 and y in 205..703 (real map bounds), which is
what pins field 1 = x, field 2 = y. The 4-field form takes one extra value
that lands in the same two 16-bit slots; the 3-field form leaves them 0.

## 2101 — 103 rows — PORTED in v70 (case 0x835, line 224631)
ACTION_TRAP_CREATE. `sscanf("%hu %hu %u %u %hu %hu %d %hu %hu")` must yield 7
or 9 fields. Field 1 = cq_traptype.id, field 2 carries the lookface ONES
digit, fields 4/5/6 = map / x / y (live content "51 11 0 1036 98 200 0 0 0",
and one row uses %user_map_id/%user_map_x/%user_map_y). CMapTrap::CreateNew
(FUN_1403ab040, line 661817) resolves the type through g_setTrapType
(`(set+0x40)(info->u16[2])`), logs
"table:cq_traptype, CMapTrap::CreateNew(), cann't find trap_id[%d]" on a miss,
memcpy's the 0x48-byte info to trap+0x24 and fixes the lookface to
`(traptype.look/10 - low/10)*10 + low` with `low = info.look % 10`, i.e. the
TENS come from cq_traptype and the ones digit from the param. The trap is then
shown with MSGMAPITEM 1101 built by FUN_1403a5a30 (line 661690):
`*(obj+8) = 0x44d`, `*(obj+0xc) = 0x41` (65-byte payload)
 +0x00 u4 time, +0x04 u4 trap id, +0x08 u2 x, +0x0C u2 y, +0x0E u2 reserved,
 +0x10 u2 lookface, +0x12 u1 = 10 (MAPITEM_CAST_TRAP), +0x13 u4 owner id,
 +0x17 u1 trap kind, +0x18 u4 owner player, +0x1C/+0x21/+0x25 u4 extras,
 +0x20 u1 extra, +0x31 char[15] cq_traptype.name.
NOTE the trap layout DIFFERS from the item layout: with action 10 the
coordinates sit at +8/+0xC (where an item has its u4 itemtype), not at
+0xC/+0xE. kind 0xd instead writes a packed localtime into +0x29.

## 2102 — 12 rows — decoded, needs the trap-trigger path (case 0x836, 224661)
All 12 rows have an EMPTY param. The body requires param_5 (the usable object
the player stepped on) and calls `(*(*param_5 + 0x298))(param_5, 0x1400,
&out)`; only when that attribute query succeeds does it call FUN_1403a7180 to
destroy the trap. Without the "player stepped on a trap" trigger path there is
no param_5 to query, so the port would have to invent one.
