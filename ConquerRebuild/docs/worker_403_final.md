# Action 403 + 532 — FINAL decode (address-backed)

Binary: `conquer_source/Source/MsgServer.exe` (PE32+ x64, image base 0x140000000,
.text RVA 0x1000 / raw 0x400, .rdata RVA 0x6d8000 / raw 0x6d6600).
Disassembly produced with capstone 6.0.0 against the real PE; every claim below
carries a VA. Decompile cross-reference: `decompiled/msgserver_gameaction.c`
(Ghidra body of `FUN_1401199d0` = CGameAction::ProcessActionItemOnly, lines 473-889)
and its duplicate in `decompiled/MsgServer.c` (~207580-207990).

Status: IN PROGRESS — appended incrementally as facts are verified.

---
