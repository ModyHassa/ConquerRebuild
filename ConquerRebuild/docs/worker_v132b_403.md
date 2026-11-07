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

---

## 3. The gate machinery is the MAP-REGION subsystem (verified this wave)

Read at `0x140119ca3..0x140119d08`:

```
140119cab  x = [rsp+0x11c], y = [rsp+0x120]      ; from the pszAccept parse
140119cc3  call 0x1402c3cc0(regionMgr, x, y)     ; region query #1
140119cc8  test al ; je -> FALSE                 ; must succeed
140119d03  call 0x1402c8370(regionMgr, x, y, 0x1040, &out)  ; NPC-class occupancy
140119d08  test al ; jne -> FALSE                ; must find NOTHING at the spot
```
So the two gates before the 22-field param parse are **CMapRegion** queries: "is this cell placeable"
and "is there already an NPC (class 0x1040) there". The rebuild models maps and NPC defs but has no
MapRegion object model at all, which is why this action cannot be ported yet even though the
`cq_dynanpc` create/register path it needs (`DynaNpc::create`) already exists in
`src/systems/dynanpc.hpp` and is used by action 301.

**Verdict unchanged: BLOCKED - on the MapRegion subsystem (`0x1402c3cc0`, `0x1402c8370`), not on
the NPC creation path.**

---

## 4. The full parse and the create call (verified this wave) — it is FURNITURE in a PLAYER HOME

### Parses
- **pszAccept** with `"%d %d %d %d %d"` (`.rdata` 0x14070c0b8), assert string `'ret >= 3'`
  (0x14070c0a8) and the failure log `ACTION %u: <bad parameter count>` (0x14070c010,
  InlineLogDBERROR 0x10ac).
- **the action param** with **22 fields** (0x14070c060):

```
"%s %d %d %d %d %d %d %u %u %d %d %d %d %d %d %d %d %d %d %d %d %s"
  ^name/script         ^six ints        ^two unsigned      ^eleven ints       ^last string
```
  The mistake log for this one is the `CGameAction::ProcessActionItemOnly() ActionID=%u`
  (0x14070c0d0, code 0x10a1) - i.e. 403 is an **item-only** action: it is driven by the ITEM the
  player is holding (`pszAccept` = that item's accept string).

### Gates (in order, with the strings that prove what they mean)
| # | gate | proof |
|---|---|---|
| 1 | cell bounds: `x >= 0 && x < mgr->vt[0x28]()` and `y >= 0 && y < mgr->vt[0x20]()` (`0x1402c3cc0`) | body at 0x1402c3cc0 |
| 2 | no NPC already at the cell: `0x1402c8370(mgr, x, y, 0x1040, &out)` must find nothing | 0x140119d03 |
| 3 | **must be the player's HOME map** | log 0x14070bfb0 = `[%s] attempts to place furniture on a non-home map` |
| 4 | **must be the player's OWN home** | log 0x14070bf60 = `[%s] attempts to place furniture in someone else's home` |
| 5 | `STR_DISABLE_LAY_SYNTRANS` (config 0x0F) | 0x14070bf40 |
| 6 | `0x1402c68a0` + `cmp $0x1` on the placement kind | 0x14011a1fe / 0x14011a235 |
| 7 | `0x1402c0d80` / `0x1402fda10` / `0x1402c2390` region/building queries | 0x14011a2a0 / 0x1402e4 / 0x14011a300 |
| 8 | asserts `!"OWNER_NPC"` and `pNpc` | 0x14070bf30 / 0x14070bf28 |

### The create
```
pNpc->Create(m_idProcess, &info, pItem->GetInt(ITEMDATA_TYPE), pName)   ; 0x14070bee0
```
with the zeroed **108-byte info struct** filled from the 22 parsed fields, and the new NPC's id
stored at **`CUser+0xA30`**.

**Verdict (corrected): BLOCKED on the HOME + FURNITURE subsystem**, not merely MapRegion. The two
region queries are actually simple (a bounds check and an "is there an NPC at (x,y)" lookup, both
directly expressible on our `GameMap`/`NpcSystem`), but the action is a *player-home furniture
placement*: it needs home-map ownership, the furniture item model (`ITEMDATA_TYPE`) and a CNpc
`Create` that takes the 108-byte info struct. None of those three exist in the rebuild, so the 93
rows are not reachable until homes are modelled.
