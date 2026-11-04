# Lua API decode (from decompiled/MsgServer.c)

Registration block: FUN_140444dd0 @ MsgServer.c:771162 .. ~772729, pattern
`(**(code **)(*plVar1 + 0x30))(plVar1, FUN_xxx, "Name");` — 274 registrations.

Lua helper identities (needed for every arg count):
- FUN_140515720 = luaL_checkinteger (MsgServer.c:906925)
- FUN_1405154f0 = value/string getter (906803)
- FUN_140523ba0 = push boolean (916994)
- FUN_140523950 = push integer (916857)
- every wrapper ends `return 1;`

## ChgMap — PINNED
FUN_14043b810 @ 766167 -> engine FUN_1404e7080 @ 874787.
5 checkinteger args, in order: (1) userID, (2) mapID, (3) x, (4) y, (5) force.
arg1 == 0 means the current user (DAT_140975bf0 + 0x10).
Engine rules, in order: uid==0 || map==0 -> error "the idUser or idMap is 0"
(874802); user state byte bit 6 set and force==0 -> skip, return 0 (874810-814);
map lookup fails -> "map[%lu] is not exist" (874817-820); FUN_1402c3cc0(map,x,y)
standability false -> "...can not stand" (874822-824); otherwise
FUN_1401c55b0(user,map,x,y,flags) performs the change (874828) and -1 falls
back to the default/return point.

## RecordPoint — arg contract PINNED, engine UNKNOWN
FUN_14043b950 @ 766204: 4 checkinteger args (userID, mapID, x, y), uid 0 =
current, calls FUN_1404e7280 (not decoded yet), pushes boolean.

## Talk — PINNED
The anonymous registration at 771231 that the decompiler printed as
`&DAT_140779a80` is the literal "Talk" (RVA 0x779a80 -> file 0x778080, bytes
`Talk\0\0\0\0RecordPoint\0ChgMap\0`). FUN_14043ba70 @ 766239: 3 args
(userID, a, b-string) -> FUN_1404e73b0, push boolean.

## Effect — arg contract PINNED, meaning UNKNOWN
FUN_14043bb80: 4 args (userID, then 3 value/string args) -> FUN_1404f1e90,
push boolean.

## stc — NOT in this block
`stc` is not registered here. Binary strings `"stc(%u, %u)"` @ file 0x70b438 /
0x70d8e0 and `sscanf(pcVar9,"stc(%u, %u)")` @ MsgServer.c:212941 pin it as a
two-unsigned-arg store used by action 1073 (`stc(41,12)` conditions), which our
engine already models as UserVars::stc. Its Lua registration site is UNKNOWN.

## Still UNKNOWN (registration lines known)
AddUserInt 771213/FUN_1404365a0, GetUserStr 771177/FUN_1404349a0,
SetUserVarStr 771201/FUN_140434d80, GetUserVarData 771183/FUN_140434ab0,
SetUserVarData 771189/FUN_140434ba0, GetItemInt 772227/FUN_14043c910,
SetItemInt 772317/FUN_140441dc0, GetNpcInt 771603/FUN_1404351b0,
SetNpcInt 771615/FUN_1404353d0, GetTaskDetailData 772137/FUN_140438ce0,
SetTaskDetailData 772143/FUN_140438df0. There is no SetUserStr in the block.
