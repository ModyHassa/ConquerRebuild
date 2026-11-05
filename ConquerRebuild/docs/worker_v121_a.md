# v121 Worker A — Action Types 1043 / 1048 / 1072

Binary: `/app/conversations/6ad7881a9883f31f19595f39/conquer_source/Source/MsgServer.exe`
Router: FUN_14012a6e0, `switch((&DAT_14013aa9c)[type-1001])`, jump table VA 0x14013a7ac.
Resolution used: `target = 0x14013a7ac + (u32 @ (0x14013a7ac + case*4))`

Status: IN PROGRESS (written incrementally).

---

## TYPE 1043

(pending)

---

## TYPE 1048

(pending)

---

## TYPE 1072

(pending)
# Worker v121_a — Decode cq_action types 1043, 1048, 1072 (MsgServer.exe, x86-64)

Dispatch convention (VERIFIED, given): router FUN_14012a6e0; case = byte_map[0x13aa9c + (type-1001)];
body = 0x140000000 + u32[0x13a7ac + case*4]; bodies live inside router span 0x14012a6e0..0x14013b000,
entered via `jmp *%rcx`, fall through to shared exit at end of function.

Assigned bodies: 1043 -> 0x140135433 ; 1048 -> 0x14012eb6e ; 1072 -> 0x14012d507

## Type 1043 (body 0x140135433)

### 0. Independent verification of the dispatch table (evidence, not taken on faith)
Parsed PE headers (ImageBase 0x140000000, sections .text/.rdata/.data/.pdata/.rsrc) and read the tables myself:
- byte_map at VA 0x14013aa9c, entry table at VA 0x14013a7ac (RVA 0x13a7ac -> file offset 0x1382ac).
- 1043 -> case 37 -> 0x140135433  (matches assignment)
- 1048 -> case 42 -> 0x14012eb6e  (matches)
- 1072 -> case 62 -> 0x14012d507  (matches)
- 1075 -> case 65 -> 0x14012c33f  (reproduces the given anchor -> table read is correct)
Note: the decompiler output in decompiled/MsgServer.c does NOT contain the router FUN_14012a6e0 (only the call site at line 223665),
so all router/case-body analysis in this document is from objdump, not from the .c file.

### 0b. Router ABI (from prologue 0x14012a6e0..0x14012a7ef, verified)
  FUN_14012a6e0(rcx=pThis(CUser*), rdx=r15=pAction, r8=rsi=pDataStr, r9=r13=pUser)
     (5th/6th args arrive on the stack at rsp+0xa460 / rsp+0xa470)
  r13 = pUser (CUser*), r15 = pAction, rsi = data string (cq_action.data), r12 = pThis.
  All three case bodies end by `jmp 0x14013a786` (shared tail) with %al = bool result:
     0x14013a784: xor %al,%al   (fail path, shared: falls into tail)
     0x14013a786: stack-cookie check, add $0xa400,%rsp, pops, ret  -> returns bool in AL
  So every body RETURNS a bool to its caller; the caller (line 223665 of the .c) is:
       cVar1 = FUN_14012a6e0(param_1, puVar10, &local_c38, *(undefined8 *)(param_1 + 8));
  which is the standard CGameAction::ProcessAction branch: return value decides
  id_next (true) vs id_nextfail (false).
  Shared fail path 0x14013a784 is also reached by `je 0x14013a784` from bodies that bail out early.
