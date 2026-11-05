# worker_v121_c — action type 1095 (MsgServer.exe, x86-64 PE)

Binary: /app/conversations/6ad7881a9883f31f19595f39/conquer_source/Source/MsgServer.exe (10661888 bytes, PE32+ x86-64, imagebase 0x140000000)
Decompiled C: /app/conversations/6ad7881a9883f31f19595f39/decompiled/MsgServer.c
Sections: .text VA 0x1000/0x6d619c raw 0x400 ; .rdata VA 0x6d8000 raw 0x6d6600 ; .data VA 0x949000 raw 0x947400

## 1. Router verification (independent of prior waves)
FUN_14012a6e0 = action router. Dispatch:
  case   = byte_map[0x13aa9c + (type - 1001)]      (byte table, 0x13aa9c -> raw 0x1396bc)
  body   = 0x140000000 + u32[0x13a7ac + case*4]    (dword table, 0x13a7ac -> raw 0x1393cc)
Anchor check 1075 -> 0x14012c33f PASSED (recomputed: idx=1075-1001=74,
case=**0x41**, off=0x39c33f -> 0x14012c33f). CORRECTED 2026-11-05: this line
originally read case=0x3e, which is 1072's label - the body VA was right, the
label in the narrative was not. `tools/router_audit.py` now recomputes both and
fails the wave on any such slip.

CONFIRMED: type 1095 -> case 0x54 -> body VA **0x140137ef7**.
CONFIRMED: next case body 0x140137fa5 belongs to type 1096 (bound for 1095's extent).

## 2. 1095 body — 3 instructions, extent 0x140137ef7..0x140137f01 (10 bytes)
```
140137ef7: b2 01                 mov  dl,1              ; 2nd arg (bool) = TRUE
140137ef9: 49 8b cd              mov  rcx,r13           ; 1st arg = r13 = player object (4th arg of router)
140137efc: e8 ef e4 03 00        call 0x1401763f0        ; FUN_1401763f0(player, true)
140137f01: e9 80 28 00 00        jmp  0x14013a786        ; common epilogue (ret path)
```
CONFIRMED: the whole handler is ONE call. No SQL, no sscanf, no format string, no packet
construction in the body itself — everything is inside FUN_1401763f0 and the two
sub-functions it selects. The body does NOT read cq_action data/param and does NOT
branch on id_next/id_nextfail (see section 6).
Note: `0x140137f06` (the code that follows) is the NEXT case body (not 1095): it starts
`mov rax,[r13]; call [rax+0x108]; cmp eax,2; jb -> return false`, i.e. a different action.

## 3. FUN_1401763f0 — the real handler (decompiled lines 258228-258260)
```c
ulonglong FUN_1401763f0(longlong *param_1 /*player*/, char param_2 /*bool bMode*/)
{
  lVar6 = FUN_140008520((int)param_1[0x246]);   // param_1[0x246] = dword at +0x1230 = user db id
  lVar6 = *(longlong *)(lVar6 + 0x100);          // +0x100 = m_pMagicManager (CMagicManager*)
  if (lVar6 == 0) { log_InlineLogERROR(...); return 0; }   // CHECKF(...,"m_pMagicManager") !assert
  uVar1 = *(u8*)((longlong)param_1 + 0xeda);   // profession-stage-1 (first prof / "prof_ago")
  uVar2 = *(u8*)((longlong)param_1 + 0xedb);   // profession-stage-2 (second prof / "prof_now")
  uVar3 = *(u8*)((longlong)param_1 + 0xeee);   // profession now (current, live)
  uVar4 = (*(code**)(*param_1 + 0x108))(param_1);   // vfunc +0x108 = GetLevel()
  if (param_2 == 0) {                            // 1095 passes param_2 = 1, so NOT taken
     uVar4 = (*(code**)(*param_1 + 8))(param_1);        // vfunc +8 = GetID()
     uVar7 = FUN_1402f47a0(lVar6, uVar4, uVar1, uVar2, uVar3);   // RESET/RECALC path
  } else {                                       // <<< 1095 TAKES THIS BRANCH
     uVar5 = (*(code**)(*param_1 + 8))(param_1);        // GetID()
     uVar7 = FUN_1402f16c0(lVar6, uVar5, uVar1, uVar2, uVar3, uVar4);  // GRANT path (mode=level)
  }
  return uVar7;
}
```
CONFIRMED offsets on the CUser object: +0x1230 = db user id (u32), +0xeda = u8 prof#1, +0xedb = u8 prof#2,
+0xeee = u8 current profession. Vtable slots: +0x08 = GetID, +0x108 = GetLevel.
CONFIRMED: FUN_1401763f0 is also called with param_2=0 from decompiled line 783304 (`FUN_1401763f0(plVar7,0)`) — a second
caller (UNKNOWN which action/logic that is, not part of 1095).
CONFIRMED: the manager (CMagicManager) pointer lives at userObject+0x100 (checked with CHECKF "m_pMagicManager",
__FILE__ "mapgroupkernel\mapgroup.h", line 0x144 = 324).

## 4. Record-field index convention (PROVEN, needed for the table data)
DB record objects expose columns 0-based in `SELECT *` order via vfunc +0x10(index)->field, +0x48 = as int, +0x58 = as longlong.
Proof: cq_magictype loader FUN_1402f04a0 builds its map key as `(field(1)<<32)|field(8)`. cq_magictype column order is
id(0),type(1),sort(2),name(3),...,level(8) -> key = (type<<32)|level == the magic "type,level" pair. CONFIRMED.

Therefore for **cq_magictypeop** (columns: id,rebirth_time,profession_ago,profession_now,magictype_op,skill_1..skill_60):
  field 0 = id, 1 = rebirth_time, 2 = profession_ago, 3 = profession_now, 4 = magictype_op, 5..64 = skill_1..skill_60

## 5. THE DATA SOURCE — CONFIRMED: DB table cq_magictypeop (NOT a static table, NOT Lua)
Loaders (all inside CMagicManager::Create / member init, caller FUN_1402f1c50 at 0x1402f1c50):
  FUN_1402f04a0(mgr)  : "SELECT * FROM cq_magictype"                    -> mgr+0x200 tree (key=(type<<32)|level)  [type/level master]
  FUN_1402f06c0(mgr)  : "SELECT * FROM cq_magictype_ex"                 -> mgr+0x108 tree (key=type)
  FUN_1402f08b0(mgr)  : "SELECT * FROM cq_magictype WHERE auto_learn!=0"-> mgr+0x148 set (key=type)
  FUN_1402f0ab0(mgr)  : "SELECT * FROM cq_magictypeop"                  -> mgr+0x188 tree (key=id)  <<< THE 1095 DATA SOURCE
(mgr+0x1c8 = "server/db instance id" passed to FUN_140008520 before each load; the SQL goes through InstanceGet()->vfunc+0x10,
i.e. the shared DB layer, NOT a per-user query.)
SQL text VAs (verified): 0x140749370 "SELECT * FROM cq_magictype", 0x140749390 "...auto_learn!=0",
0x1407493c0 "SELECT * FROM cq_magictypeop", 0x1407493e0 "SELECT * FROM cq_magictype_ex"; code refs at
0x1402f04dd / 0x1402f08ed / 0x1402f0aed / 0x1402f06fd. All four live in magicmanager.cpp (0x1407498c0).
Ruled out: no static magic-id table exists in .rdata/.data for this path; the only magic SQL in the binary that touches a
per-player table is "SELECT * FROM cq_magic WHERE ownerid=%u" (0x1406db028) and "INSERT cq_magic SET ownerid=%u, type=%u"
(0x1406f0a18) — used by player-magic loading/creation, not by the 1095 action.
