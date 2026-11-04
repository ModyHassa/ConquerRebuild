# Remaining action types — structural findings (partial decode)

## The premise was wrong about where these live
FUN_14012a6e0 (decompiled/msgserver_gameaction.c:10349,
CGameAction::ProcessActionUser) handles types 1001..1729 only:
line 10941 `if (0x2d8 < iVar14 - 0x3e9U)` and line 10948-10949
`switch((&DAT_14013aa9c)[iVar14 - 0x3e9U])` — the byte map is indexed by
type-1001 and the case labels are MAP VALUES, not action types.
So 715/720/223/224/2201/2205 are NOT in it.

Real homes:
| type | dec/hex | function | line |
|---|---|---|---|
| 715 | 0x2cb | FUN_140128290 (CGameAction::ProcessActionSyn, logs ~8975; `switch(iVar7)` at 8979 switches on the type directly) | msgserver_gameaction.c:9239 |
| 720 | 0x2d0 | same | 9469 |
| 223 | 0xdf | FUN_14013b950 (MsgServer.c:217966-219088, cases 0xc9..0xe0) | MsgServer.c:218844 |
| 224 | 0xe0 | same | 219061 |
| 2201 | 0x899 | FUN_14015b5d0 (MsgServer.c:239863-240802, cases 0x7d1..0x89e) | 240688 |
| 2205 | 0x89d | same | 240772 |

## 715 — condition PROVEN, one slot open
msgserver_gameaction.c:9239-9266: param non-null, `strlen(param) < 0x24`,
byte-compare against the actor's own name (vtable +0x18) -> false on equality,
else `FUN_140087ed0()` then slot **+0x118(actor_id, param)** -> bool.
Slot +0x118 semantics UNPROVEN. Manager FUN_140087ed0 is a registry lookup by
index 0x16 (MsgServer.c:99361-99372), cached in DAT_140975c50.

## 720 — shape proven, slot open
msgserver_gameaction.c:9470-9471: `FUN_140087ed0()` then slot
**+0x260(param_4 + 0x14d)** — note param_4 is `longlong*`, so that is byte
offset 0xA68 of the action context, not 0x14d.

## Manager slot map so far (same manager)
+0x110 set member_title, +0x118 ?, +0x1b0 (case 0x2ca), +0x248, +0x260 ?,
+0x268 get money, +0x270 add money, +0x2e8 has_domain — the money/title slots
are corroborated by case 0x2cd's _stricmp against "money"/"member_title"/
"has_domain" (msgserver_gameaction.c:9441-9468).

## 223 / 224 / 2201 / 2205 — BLOCKED in this pass
Only prologues were read (223: a hand-written scanner with a 10000 element
counter and a 64 counter guard, MsgServer.c:218844+; 224/2201/2205 located but
their bodies not read). Next commands:
`sed -n '219061,219300p' decompiled/MsgServer.c`,
`sed -n '240688,240802p' decompiled/MsgServer.c`,
`grep -n -B3 -A15 "+ 0x260))(" decompiled/MsgServer.c` and the same for
`+ 0x118))(` (hits 208141, 246246, 270463, 1009435, 1027544 print the
neighbouring DBERROR literals that name the slots).
