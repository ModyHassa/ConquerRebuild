# worker_rebirth_final — action 1040 (Rebirth) closing wave: argument mapping, base stats, persist targets

Builds on `worker_rebirth_apply2.md` (sections 0-K, all proven; NOT re-derived here).
Target: Conquer v6159, `conquer_source/Source/MsgServer.exe`, image base 0x140000000,
decompile `decompiled/MsgServer.c` (1,361,879 lines).

PE map used for every address in this file (`pe.py` section table):
```
.text   VirtualAddress 0x1000    VirtualSize 0x6D5C1C   PointerToRawData 0x400    RawSize 0x6D5C40
.rdata  VirtualAddress 0x6D8000  VirtualSize 0x270AAE   PointerToRawData 0x6D6600
.data   VirtualAddress 0x949000  VirtualSize 0x30918    PointerToRawData 0x947000
.pdata  VirtualAddress 0x979000  VirtualSize 0xB6484    PointerToRawData 0x973000
```
file_offset = RVA - VirtualAddress + PointerToRawData  (delta for .text = -0xC00).

Rule: every claim carries a MsgServer.c line and/or a disassembly address. Unproven => UNKNOWN.

---
## 1. FACTS (verified, appended as found)

### V-001 | FUN_1401c3180 bounds and its FUN_1401b9d70 call site
(`.pdata` RUNTIME_FUNCTION table lookup): FUN_1401c3180 = **0x1401c3180 .. 0x1401c2abc**, i.e.
2364 bytes, inside `.text`. FUN_1401b9d70 = 0x1401b9d70 .. 0x1401b9fae.
