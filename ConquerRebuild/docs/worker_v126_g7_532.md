# Worker v126 g7 — action types 532 and 802

Status: IN PROGRESS (appended per type). Every claim below is address- or line-backed.
Sources: `conquer_source/Source/MsgServer.exe` (ImageBase 0x140000000),
`decompiled/MsgServer.c`, `mysql -uroot cq`.

> **Read this first — the headline result.** Type **532 is NOT dispatched by
> `CGameAction::ProcessAction` in this build.** Its slot in the 501-598 jump table points at the
> shared "unhandled type" stub. Type 532 *is* implemented, but as a **sub-action of the equipment
> quench subsystem** (`ProcessActionItemQuench`), reached only from the equip-quench flow, never
> from the action ladder. Any port that puts 532 in the action dispatcher is porting the wrong
> call site.

---

# 1. Type 532 (0x214) — ITEM QUENCH

## 1.1 Ladder resolution — 532 maps to the unhandled-type stub (VERIFIED)

Range 501-598 -> `FUN_140123590` (`decompiled/MsgServer.c:213576`; called from the ladder at
`MsgServer.c:223647`).

Dispatch header, raw bytes at file 0x122a81 (VA **0x140123681**), read directly:

| addr | bytes | instruction |
|---|---|---|
| 0x140123681 | `48 05 0b fe ff ff` | `add rax, -0x1F5` (= type - 501) |
| 0x140123687 | `83 f8 31` | `cmp eax, 0x31` (49 -> types 501..550) |
| 0x14012368A | `0f 87 40 33 00 00` | `ja 0x1401269D0` (**default / unsupported**) |
| 0x140123690 | `48 98` | `cdqe` |
| 0x140123692 | `48 8d 15 67 c9 ed ff` | `lea rdx, [rip-0x123699]` -> **rdx = 0x140000000** |
| 0x140123699 | `8b 8c 82 3c 6a 12 00` | `mov ecx, [rdx + rax*4 + 0x126A3C]` -> **table VA 0x140126A3C** |
| 0x1401236A0 | `48 03 ca` | `add rcx, rdx` (base-relative int32) |
| 0x1401236A3 | `ff e1` | `jmp rcx` |

Indexing is `type - 501`, as `docs/worker_v123_512.md` states. Cross-checks read from the table:

| type | index | entry (int32) | target |
|---|---|---|---|
| 501 | 0 | 0x124C71 | 0x140124C71 |
| 512 | 11 | 0x1240D7 | 0x1401240D7 (matches the documented 512 `"%d %d"` body) |
| 516 | 15 | 0x1236A5 | 0x1401236A5 (= the instruction immediately after `jmp rcx`) |
| **532** | **31** | **0x1269D0** | **0x1401269D0** |
| 541 | 40 | 0x125F81 | 0x140125F81 |

`0x1401269D0` is simultaneously (a) the `ja` overflow target and (b) the table slot for
**521-527, 531-539, 547-549** — i.e. exactly the types this handler has no case body for.
532 sits inside the 531-539 hole. This is structural confirmation, not inference.

### The stub at 0x1401269D0 (VERIFIED)
`pAction->fields[3]` (the type) is fetched via `[pAction]+0x10` / `[..]+0x48`, the action id via
`[pAction]+0x20` / `[..]+0x40`, then `log_InlineLogDBERROR` is called through IAT **0x6D7600**
with format pointer **0x14070B540** and args (id, type), and the function returns **0**
(`xor al,al` -> shared epilogue at 0x140126A18). Adjacent peer message
`0x14070D7D0` = `"table:cq_action/cq_newaction, \u9519\u8bef\u7684Action Type"` ("bad Action Type").
No DB read, no packet, no state write. **ProcessAction cannot execute 532.**

## 1.2 Where 532 actually lives — ProcessActionItemQuench (VERIFIED)

`FUN_14011b910` (`decompiled/MsgServer.c:208592`), named by its own DBERROR string:
`"CGameAction::ProcessActionItemQuench() ActionID=%u, ActionType=%u at %s, %d"`
(line 208611, format `0x14070B9A0`-neighbourhood).

Its body tests the type explicitly (line 213498-equivalent, `MsgServer.c:208658-208660`):
```
iVar3 = pAction->fields[3] -> int            /* action type */
if (iVar3 == 0x214) { ...quench body... }    /* 0x214 = 532 */
else { DBERROR(0x14070D7D0 = "bad Action Type"); return 0; }
```

Call chain (both links are single-caller, so this is closed):
- `MsgServer.c:213502` — `FUN_140122f90` -> `FUN_14011b910(...)`, guarded by
  `if (iVar6 == 0x214)` at `MsgServer.c:213498`.
  `FUN_140122f90` = `CGameAction::ProcessEqpQuenchAction` (`MsgServer.c:213366`; its own
  DBERROR at 213488 reads `"...ProcessEqpQuenchAction Error: game action %u not found."`).
- `MsgServer.c:259364` — the **only** caller of `FUN_140122f90`, inside `FUN_140177f10`
  (`MsgServer.c:259313`), an NPC equipment-quench routine that also fires
  `FUN_140170e90(param_1, 0x28bf)` and `FUN_140261810(..., 0xd)` afterwards.

So: **532 is driven by the NPC quench path, not by `ProcessAction`.** A faithful port must place
it there.

## 1.3 532 parse format (VERIFIED)

`MsgServer.c:208680-208690`:
```
local_d8[0] = local_d8[1] = local_d8[2] = 0;
locals bound as sscanf targets:  &local_bc, local_d8+2, local_d8+1, local_d8,
                                 &local_c8, &local_c0, &local_c4, &local_b8
iVar3 = sscanf(param_3, "%d %d %d %d %d %d %d %d");
if (6 < iVar3) { ...proceed... }
else { DBERROR(0x14070C010 = "ACTION %u: \u9519\u8bef\u7684\u53c2\u6570\u6570\u91cf"); }
```
- **8 `%d` conversions, and the gate is `> 6`, i.e. at least 7 integers must parse.**
- Failure path: DBERROR `0x14070C010` (`"wrong parameter count"`) and return 0.

### Cross-check against the real DB rows (VERIFIED)
```
SELECT data,param,COUNT(*) FROM cq_action WHERE type=532 GROUP BY data,param ...
```
All **252** rows carry **exactly 7 space-separated integers** — measured, not sampled:
`SELECT LENGTH(param)-LENGTH(REPLACE(param,' ',''))+1, COUNT(*) GROUP BY 1` -> `7, 252`.
So `sscanf` returns 7, the `>6` gate passes, and the 8th target stays 0. The DB shape and the
parse format agree exactly.

Examples (verbatim): `307 | 2 3 0 604800 610 611 612`, `310 | 3 7 0 604800 613 614 616`,
`301 | 3 1000 0 604800 11 14 123`, `311 | 4 16 0 604800 13 0 0`.

## 1.4 Pre-parse gates (VERIFIED)

Before parsing, two item templates are resolved from the in-memory template manager
(`FUN_140087d40()` -> vtable `+0x60` = `GetItemTemplate(id)`), from call args 5 and 6:
```
plVar8 = GetItemTemplate(param_5);   /* line 208661 */
plVar9 = GetItemTemplate(param_6);   /* line 208663 */
if (plVar8 == 0 || plVar9 == 0)           -> return 0            (line 208664)
if (!FUN_1400ff940(FUN_1400fda10(plVar8,1,1))) -> return 0       /* class gate  */
if ( FUN_1400ffc20(plVar9))                    -> return 0       /* exclude gate */
```
- `FUN_1400fda10(tmpl, 1, 1)` = template column **1** = the item **type id**.
- `FUN_1400ff940` (line 189275) allows item classes **1..8, 12, 13, 14, 21, 22** only.
- `FUN_1400ffc20` (line 189417) = "template column 0x12 != 0"; a non-zero value **rejects**.

## 1.5 How the 7 DB integers map onto the parsed fields

**f1, f2, f3 -> `local_d8[0..2]` — category-digit filter. (VERIFIED as behaviour)**
Lines 208690-208720, loop `for (lVar12 = 0; lVar12 < 0xC; lVar12 += 4)`:
```
uVar5 = FUN_1400fda10(plVar8,1,1);          /* item TYPE ID of param_5's template */
for each of the three dwords d = local_d8[i]:
    if (d == 0)                       local_e8[i] = 0xFFFFFFFF;
    else { _itoa(d, buf, 10); strlen(buf) -> n;
           n==2 -> e8 = uVar5/100000;  n==3 -> e8 = uVar5/10000;  n==4 -> e8 = uVar5/1000;
           otherwise e8 = 0xFFFFFFFF; }
```
i.e. `local_e8[i]` is the **leading decimal digit of the item type id**, and the digit count of
`local_d8[i]` selects the divisor. Then (line 208721):
```
if (d8[0]==e8[0] || d8[1]==e8[1] || d8[2]==e8[2] || (d8[0]==0 && d8[1]==0 && d8[2]==0))
    -> proceed;   else -> return 0
```
Read literally: f1..f3 are **item-category digits** matched against the leading digit of the
quench item's type id (so `2 3 0` accepts type ids beginning with 2 or 3, and `0 0 0` is a
wildcard). DB values f1 = 2..5, f2 = 3..16, f3 = 0..1000 confirm a small-magnitude digit/range
family, consistent with this reading.

**f4..f7 -> `local_c8, local_c4, local_c0, local_bc, local_b8` — packet payload only.**
These locals are never branched on; they are copied straight into the item-status request built
for `FUN_140102a10` (lines 208730-208744):
```
local_88 = 0;
local_84 = plVar8->vtbl[8](plVar8);       /* item id            */
local_80 = param_4->vtbl[8](param_4);     /* item id            */
local_7c = pAction->fields[4];            /* action column 4    */
local_78 = local_b8;  local_74 = local_c4; local_70 = local_bc;
local_68 = local_c0;  local_6c = local_c8;
```
- In every DB row f4 = **604800** (= 7 days in seconds) -> a duration, consistent with riding the
  status timer that `local_94` computes (see below). **UNKNOWN**: which of `c8/c4/c0/bc/b8` f4
  lands in — the sscanf pointer array is built from stack slots and Ghidra does not order them.
- f5..f7 are small integers in the 11..900 range (`610 611 612`, `613 614 616`, `11 14 123`,
  `44 45 46`, `152`, `160`, `500`, `900`, `120 121`) -> item type ids / counts. Exact per-field
  meaning **UNKNOWN**.
- `data` column (301..317, 11 distinct values; max 317) is **not read by this code** as a
  category — it is read as `pAction->fields[4]` (`local_7c`) and forwarded verbatim. Treat `data`
  as an opaque action payload.

## 1.6 What 532 reads/writes (VERIFIED)

When the category gate passes (line 208725 onward):
1. `FUN_140340190(param_4, plVar9->vtbl[8](plVar9), 1, 1)` — consumption/possession gate on the
   material item. Fails -> fall through, **return 0**, nothing written.
2. `FUN_140100070(plVar8)` -> optional per-item **extra-status object**; if non-NULL,
   `bVar1 = true` and a snapshot of its fields is taken:
   `local_ac = obj->vtbl[0]()`, `local_a8 = mapid`, `local_a4 = obj->vtbl[0x30](3)`,
   `local_a0 = obj->vtbl[0x30](4)`, `local_9c = obj->vtbl[0x10]()`,
   `local_98 = obj->vtbl[0x18]()`, `local_90 = obj->vtbl[0x30](8)`,
   `local_94 = obj->vtbl[0x30](7) - time(NULL)` (remaining seconds; `0` if column 7 == 0, and
   `bVar1 = false` if the remainder is exactly 0).
3. `FUN_1401ad8d0(param_4, plVar8->vtbl[8](plVar8))` then `FUN_140100090(plVar8, 0)` — clears the
   old status on the item.
4. `FUN_140102a10(plVar8, &local_88, FUN_1401649c0(param_4), 0)` — writes the **new** item status.
   - success -> `FUN_140166590(param_4, itemid, local_7c)` then one of two log records:
     - `bVar1 == false` -> `tq::MyLogSave("gmlog/QuenchItem", "%s(%u) Add Temp ItemStatu[itemid=%u, itemstatu=%u]")`, **return 1**
     - `bVar1 == true`  -> `tq::MyLogSave("gmlog/QuenchItem", "%s(%u) Erase Temp Item Statu [id=%u, type=%u]")`, **return 1**
   - failure -> if `bVar1`, restore the old status (`FUN_140102a10(plVar8,&local_b0,0,0)` +
     `FUN_140166590(param_4, itemid, local_a4)`), then **return 0**.

**Net effect:** 532 attaches (or refreshes) a timed *quench status* on an item, keyed by a
category digit and gated on a material item; the numeric fields are the status payload. It is a
**state-writing** type (unlike 512, which is read-only) and it emits **no network packet of its
own** — all user-visible feedback goes through the quench caller's follow-up calls.

## 1.7 532 branch outcome summary

| condition | result |
|---|---|
| reached via `ProcessAction` ladder | **never** — slot 31 = stub 0x1401269D0, logs bad-type, returns 0 |
| `param_2`/`param_4` NULL in quench path | ERROR 0x1406D9C10, return 0 |
| action type != 0x214 | DBERROR `0x14070D7D0`, return 0 |
| template(param_5) or template(param_6) NULL | silent return 0 |
| template(param_5) class not in {1-8,12,13,14,21,22} | silent return 0 |
| template(param_6) column 0x12 != 0 | silent return 0 |
| `sscanf` result <= 6 | DBERROR `0x14070C010`, return 0 |
| category digits do not match | silent return 0 |
| consumption gate fails | silent return 0 |
| status write ok | return **1**, gmlog `QuenchItem` line |
