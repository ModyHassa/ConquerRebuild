# worker_v121_c — action type 1095 (MsgServer.exe, x86-64 PE)

Binary: /app/conversations/6ad7881a9883f31f19595f39/conquer_source/Source/MsgServer.exe (10661888 bytes, PE32+ x86-64, imagebase 0x140000000)
Decompiled C: /app/conversations/6ad7881a9883f31f19595f39/decompiled/MsgServer.c
Sections: .text VA 0x1000/0x6d619c raw 0x400 ; .rdata VA 0x6d8000 raw 0x6d6600 ; .data VA 0x949000 raw 0x947400

## 1. Router verification (independent of prior waves)
FUN_14012a6e0 = action router. Dispatch:
  case   = byte_map[0x13aa9c + (type - 1001)]      (byte table, 0x13aa9c -> raw 0x1396bc)
  body   = 0x140000000 + u32[0x13a7ac + case*4]    (dword table, 0x13a7ac -> raw 0x1393cc)
Anchor check 1075 -> 0x14012c33f PASSED (recomputed: idx=1075-1001=74, case=0x3e, off=0x39c33f -> 0x14012c33f).

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
