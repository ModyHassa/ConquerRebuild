# HOME / HOUSE subsystem decode (action types 223 / 224)

Workspace: /app/conversations/6ad7881a9883f31f19595f39
Generated: 2026-11-04

## 0. KNOWN FACTS (given, accepted as proven)

- 224 (case 0xe0) at decompiled/MsgServer.c:219061: `sscanf(param,"%u %d %d")` then CMapGroup (FUN_1400875f0) slot +0xa8(a,b) returns a COUNT; when the 3rd field is absent the test is `count>0`, else `count>=c`. Its DB rows use `'%user_home_id 25'`.
- 223 (0xdf) at MsgServer.c:218844 parses `'%user_home_id 4 34 39'` with a hand-written scanner (10000 element and 64 guards).
- The template engine expands `'%user_home_id'` at decompiled/msgserver_gameaction.c:5073 (`_snprintf "%u"`), but Ghidra dropped the variadic argument so the source expression is not visible there.
- Our engine models NO homes.

## 1. TASK 1 — what '%user_home_id' expands to  =>  PINNED

**Answer: `%user_home_id` expands to `*(uint32_t *)(user + 0xf2c)` — a direct
field read, no getter call.** It is therefore identical to GetUserInt key 1014
(G_PLAYER_HomeID). Ghidra dropped the variadic argument, but the disassembly of
the original binary settles it.

Evidence chain (from conquer_source/Source/MsgServer.exe, the same file the
decompiler consumed — see decompile_queue.sh:16):

- decompiled/msgserver_gameaction.c:5073  `_strnicmp(pcVar9,"user_home_id",0xc)`
  then :5075 memset, :5076 `_snprintf(local_2458,0xff,"%u")` — argument dropped.
- The literal lives at RVA-relative file offset 0x709ab8 =
  **VA 0x14070b4b8** (PE .rdata starts VA 0x1406d8000 / raw 0x6d6600, objdump -h).
  Neighbourhood at 0x14070b4b8: `user_home_id\0` , `account_id\0` ,
  `battle_lev\0` , `last_add_item_id...`  — confirms the template name table.
- Only one code reference to 0x14070b4b8 in the whole .text:
  **0x140121252** `lea 0x5ea25f(%rip),%rdx  # 0x14070b4b8`
                 `mov $0xc,%r8d` ; `mov %r14,%rcx` ; `call *0x1406d8b70` (_strnicmp).
- Branch body after `test %eax,%eax` / `jne`:
  - 0x140121270-0x140121287: clear buffer at rsp+0x22c0, `call 0x140512630` (memset)
  - **0x14012128c: `mov 0xf2c(%r12),%r9d`   <-- the missing variadic argument**
  - 0x140121294: `lea 0x5c9b2d(%rip),%r8  # 0x1406eadc8` -> "%u" (bytes at file
    offset 0x6e93c8 read as `b'%u\x00'`)
  - 0x1401212a3 `mov $0xff,%edx` ; 0x1401212a8 `call *0x1406d8a08` (_snprintf)
  - 0x1401212ee `add $0xc,%r14` -> advance past "user_home_id" (12 chars),
    0x1401212f8 copy length into r15 (output cursor), 0x1401226bb jump.

So the X64 calling convention register r9d (4th arg = the single %u value) is
loaded straight from `[r12+0xf2c]`, where r12 is the user/player object pointer
used consistently in this function (r12 is also the arg to FUN_14018eb30 at
0x14012133a, the function the decompiler renders as `FUN_14018eb30(param_6)`
for the `battle_lev` template — i.e. r12 == param_6 == the user object).

Corroboration that +0xf2c is the home id:
- decompiled/MsgServer.c:870874-870876 `case 0x3f6:` (key 1014)
  `uVar11 = (ulonglong)*(uint *)((longlong)plVar8 + 0xf2c);` — GetUserInt(uid,1014)
  returns exactly this field. plVar8 is the CUser* resolved for the uid.
- decompiled/MsgServer.c:256366 `SELECT home_id FROM cq_user WHERE id = %u LIMIT 1`
  then :260849 `local_57c = *(undefined4 *)((longlong)param_1 + 0xf2c);` — the DB
  home_id is loaded into +0xf2c.
- decompiled/MsgServer.c:249310 `*(undefined4 *)((longlong)param_1 + 0xf2c) = param_2[0x33];`
  — same field written at login/user-load (param_2 = DB row, col index 0x33).
- Other readers: MsgServer.c:308372, 488479 (passed as a map/user id to a vtable
  +0x10 method with flag 1 — consistent with "send to home map"), 756565, 870875.

Template write path: the enclosing function of the whole expander is the
CodeView .pdata entry **0x14011f0a5 – 0x140122f33** (16014 bytes), i.e. the
function decompiled as the big `_strnicmp` chain around line 5073.

