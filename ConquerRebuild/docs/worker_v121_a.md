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

