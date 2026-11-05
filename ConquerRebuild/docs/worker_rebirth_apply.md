# Rebirth APPLY decode — FUN_1401c3180 (action 1040)

Scope: wire-accurate C++ port of the Rebirth action (type 1040).
Sources of truth:
- decompiled/MsgServer.c (1,361,879 lines) — function FUN_1401c3180 starts at line 307912.
- conquer_source/Source/MsgServer.exe — disassembly via objdump when a decompile is ambiguous.
- Live DB `cq` (READ-ONLY): `mysql -h 127.0.0.1 -u test -ptest cq`.

Already proven upstream (not re-derived):
- action type 1040 = Rebirth; new-engine case 0x22 at decompiled/msgserver_gameaction.c:14384-14411.
- sscanf "%d %d %d" needs >= 2 tokens; v1, v2, v3 (default 1).
- Requirement row = FUN_140163c90(user, v1, v3) scanning cq_rebirth (DAT_140975ba8, loaded by
  'SELECT * FROM cq_rebirth' at MsgServer.c:146708-146721). Match: GetCell(row,2)==v1,
  GetCell(row,5)==v3, (u8)GetCell(row,1)==*(u8*)(user+0xeee), (level < v3 || 2 < level),
  GetCell(row,3) <= rebirthcount(user).
- FUN_1401c3180(user, row, v3, v2) applies it. param_1 = user, param_2 = row, param_3 = v3,
  param_4 = v2.

---

## 0. Signature (proven)

`undefined8 FUN_1401c3180(longlong *param_1, longlong *param_2, int param_3, int param_4)`
(MsgServer.c:307912)

- param_1 = user object pointer
- param_2 = cq_rebirth DB row object (GetCell via vtable slot +0x10)
- param_3 = v3 (rebirth "level"/tier from the action string, 3rd token)
- param_4 = v2 (2nd token of the action string)
- param_4 is copied to local_8c4 at entry.

## 1. Entry / locals (MsgServer.c:307939-307953; asm 1401c31b8-1401c31c9)

- `local_8c4 = param_4` (v2) at 307941 / asm `mov [rsp+0x44],r9d` @1401c31b8.
- `r15d = param_3` (v3) sign-extended @1401c31bd (`movsxd r15,r8d`) — v3 is used as a 64-bit value later
  in the metempsychosis record call.
- param_2 == NULL → `local_8e8 = 0x4641` (error code 17985) + `log_InlineLogERROR(&DAT_1406d9c10)`, return 0.
  (307942-307945, asm 1401c31cb)
- `uVar9 = FUN_140008520(param_1[0x246])` → **FUN_140008520 = CMapGroup/game-world manager lookup by id**
  at user+0x1230 (asm `mov ecx,[rbp+0x1230]` @1401c3918). Returns the world manager object.
- `local_8c8 = FUN_14008ac00(mgr)` = `*(u8*)(mgr + 0x6a2)` (MsgServer.c:101504-101507) → a **server config
  flag byte** deciding the rebirth path (see §2 condex). Value semantics UNKNOWN (no writer found in the
  decompile yet); the code branch it selects is fully documented below as "flag OFF" / "flag ON".
- Early reject (307950-307952): if flag != 0 AND `(GetCell(row,2) % 1000) / 10 != (u8)user[0xeee] / 10`
  → `return 0` **silently** (no packet, no log). asm 1401c3674-1401c3690.

## 2. Helper table (each verified in its own definition)

| helper | def line | proven meaning |
|---|---|---|
| FUN_140161610(user, which) | 243734 | Flush a pending 10017 attrib delta. which=0 → `user[0x237]` (u64 slot, "money" class) sent as attrib idx 0; which=1 → `user[0x238]` sent with attrib idx = `which`(=1). In both cases the stored field is zeroed after sending. Only runs while `(*(user[2]+0x70))() < DAT_14094da38` (level gate). asm: called with edx=1 then edx=0 @1401c3620-ish. |
| FUN_140354ed0(user, a=0, b=1) | 603705 | Broadcast/reset helper (calls FUN_1402f28d0(worldDB,id,0), then FUN_140167b70 gate, message 7 via FUN_14036ef90, and a loop over 1..9 doing per-slot work when param_3!=0). Net effect for rebirth: re-publish the user's on-screen state. |
| FUN_140087d40() | 99281 | Getter for the **item-template manager** global `DAT_140975b60` (returns 0 + log if null). Its vtable +0x60 = `GetItemTemplate(typeId)`. |
| FUN_140337820(user, slot) | 587550 | **Equip-slot → item-type-id getter**: walks the std::map at `user+0xd28` keyed by slot, returns the u32 stored at node+0x1c (0 if absent / slot out of range). |
| FUN_14034ec60(user, slot, sendEquipPkt, ...) | 600157 | **Unequip + move item to inventory** (returns 1 on success, 0 if slot invalid/no item/container full). Rejects slot not in 1..0x13 and 0x15..0x1d early (`if ((param_2<1||0x13<param_2) && (8 < param_2-0x15U)) return 0;`). Sends CMsgItemInfo(1008) equip-remove + container update and FUN_140194840/… ; on `sendEquipPkt!=0` also broadcasts the 1008/… to the map. |
| FUN_1400fed80(item) | 188680 | **Item type-id getter**: `(GetItemType(item) % 1000000) / 1000` — the mid 3 digits of the 1e6-based type id, i.e. the "item kind" used below (0x266/0x268/0x26c). |
| FUN_1400ff680 / FUN_1400fda10 / FUN_1400ff9e0 | — | other type-id digit extractors used inside FUN_14034ec60 only. |
| FUN_140163e10(user, [unused]) | 245527 | **Unequip-all-except** helper: loops slots 1..0x13, skips slots 10, 11 and 0x13, and calls FUN_140332590(user,slot) (= unequip slot) for every slot that has an item. |
| FUN_1401b9d70 / FUN_1401abab0 | 302281 / 294696 | the two rebirth "apply core" variants (flag OFF / flag ON) — §3. |
| FUN_140372a10(u+0x1cf, v, 1) | 622610 | set **mete_lev** = v (field at `user+0x1cf*8+0x144` = user+0x1013… see §4) and persist to column `mete_lev`. |
| FUN_140373bd0 / FUN_140373be0(u+0x1cf,…) | 623615 / 623624 | get / set **mete_lev2** (column `mete_lev2`). |
| FUN_140372dd0 / FUN_140372e50 | 622788 / 622817 | get `online_god_exptime` / `battle_god_exptime` (NOT called by rebirth — 0x1cf block only in this function). |
| FUN_14008a880(mgr, id, type, value) | 101269 | write the persisted per-user "rebirth/metempsychosis" record slot `type` = value. |
| FUN_1400d4fa0(obj, user) | 159599 | if `user->GetMetempsychosis() < 3` → FUN_1400d40c0 + FUN_1400d2eb0 (object = `*(mgr+0x1c8)`). |
| FUN_14039e680/700/6d0 | 652816/652840/652829 | **CMsgUserAttrib = 10017 (0x2721)**, size field 0x28, entry = {u4 idx, u8 value} stride 0x1c. |
| FUN_14036fe70 / FUN_1403702e0 | 620579 / 620721 | **CMsgUserQuality = 1040 (0x410)**, size 0x88, filled by FUN_14036ff20. |
