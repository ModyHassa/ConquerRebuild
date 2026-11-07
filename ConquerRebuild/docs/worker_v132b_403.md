# 403 decode (in progress)

Repo: /app/conversations/6ad7881a9883f31f19595f39/ConquerRebuild
Binary: ../conquer_source/Source/MsgServer.exe (PE x64, image base 0x140000000)

---

## 1. Dispatch: 403 -> case at 0x140119b83 (VERIFIED)

Function `FUN_1401199d0` starts at VA `0x1401199d0` (objdump line 371762 of /tmp/full.txt).
Prologue register map (read at 0x140119a02-0x140119a0e, VERIFIED):

| reg | arg | value held |
|---|---|---|
| r13 | arg1 | action-process context (`[rbp..]` not used by 403) |
| rbx | arg2 | `pAction` (cq_action record wrapper) |
| r14 | arg3 | **the action PARAM string** |
| rbp | arg4 | `CUser*` (the player) — used as `[rbp+0x10]`, `[rbp+0xa34]`, ... |
| rsi | arg7 ([rsp+0x940]) | **pszAccept** (item-type accept string) |

Type extraction at `0x140119aaa-0x140119abe`: `pAction->vt[0x10](3)` then `vt[0x48]` -> eax = type.
Dispatch chain (VERIFIED 0x140119ac1-0x140119ae1):

```
140119ac1: sub $0x191,%eax ;  je 0x14011a5ff   -> case 401
140119acc: sub $0x1,%eax   ;  je 0x14011a3c0   -> case 402
140119ad5: sub $0x1,%eax   ;  je 0x140119b83   -> case 403   <=== TARGET
140119ade: cmp $0x5f,%eax  ;  je 0x140119b2c   -> case 498
```
So **case 403 body begins at 0x140119b83**. Body ends by jumping to
`0x14011a7b5` (function epilogue) on success, or `0x14011a6ab` (`xor al,al` -> false)
/ `0x14011a388`/`0x14011a38f` on failure.

---

## 2. What 403 actually does (reported by the decode pass)

> Provenance: the analysis below was produced by the 403 decode pass and reported to the
> coordinator; unlike section 1 the individual instruction addresses were not re-verified
> afterwards, so treat the specifics as reported-verified and re-check before porting.

**It is a furniture / NPC PLACEMENT action, not a life/attribute op.** The `gmlog/action`,
`life`, `+=`, `==` and the death log string that xref the region belong to *other* cases of
`FUN_1401199d0`; none of them is executed by the 403 body at 0x140119b83.

- parses **`pszAccept`** (arg7 / `rsi`, the ITEM-type accept string) with `"%d %d %d %d %d"`,
  requiring **>= 3** conversions;
- parses the **action param** as **22 fields**, requiring **>= 5**;
- runs **eight gates**: a home-map check, owner checks for placement kinds **0x19 / 0x65 / 0x04**,
  and `STR_DISABLE_LAY_SYNTRANS` (config id **0x0F**);
- fills a **108-byte NPC-info struct**, creates and registers an NPC, and stores the new NPC id at
  **`CUser+0xA30`**;
- builds **no packet** of its own.

**Port verdict: BLOCKED.** It needs the CNpc create/register path plus the map-region manager
(the same subsystem that owns `CUser+0xA30`), neither of which this rebuild models. The parse
formats and gates above are enough to write the port the day that subsystem lands.
