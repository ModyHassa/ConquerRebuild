# Action type 512 (0x200) and builder FUN_1403873d0 — decode

Binary: `../conquer_source/Source/MsgServer.exe` (ImageBase 0x140000000). All addresses are VA.

## 1. Locating the case body (VERIFIED)

`FUN_140123590` = old-engine range handler for 501-598 (`docs/old_engine_dispatch_ladder.md`).
Header check at `0x140123682`: `add $0xfffffe0b,%eax` (= type - 501) / `cmp $0x31,%eax` / `ja`
-> 0..0x31 covers 501..550. Jump table read at `0x140126a3c + (type-501)*4`
(base-relative int32 added to 0x140000000, indirect `jmp *%rcx` at 0x1401236a3).

Table slot 11 (type **512**) -> `0x1401240d7`. Case bodies for neighbours confirmed in the same
sweep (501->0x140124c71, 510->0x14012425a, 511->0x140124215, 513->0x1401252f4, 516->0x1401236a5,
519->0x1401256f3), which validates the indexing.

## 2. 512 body: 0x1401240d7 - 0x140124210

Signature: `FUN_140123590(this /*rcx*/, action /*rdx*/, ?, /*r8*/, pUser /*r9 -> r14*/)`
prologue 0x1401235c2-0x1401235d3 (`r14 = r9`, `r12 = r8`, `rbp = rdx`).

| addr | what |
|---|---|
| 0x1401240d7-0x1401240e9 | `itemPos` (u32, local rsp+0xB4) and `ret/itemType` (u32, local rsp+0xBC) zeroed |
| 0x1401240ea-0x140124104 | `sscanf(action_payload /*r12*/, "%d %d", &ret, &itemPos)` via import `0x1406d8ab0`; fmt `"%d %d"` at `0x1406f3f20` |
| 0x14012410a-0x140124139 | `cmp $2,%eax` / `jne` -> log at line 0x1209 (`"IF_OK_"` @0x1406f1e60, assert text `"2 == ret"` @0x14070d530), `jmp 0x140126a16` (return FALSE) |
| 0x14012413e | `FUN_140087d40()` = item-template manager (see docs/worker_rebirth_apply.md:53); `rsi = *(mgr)` = vtable |
| 0x140124153 | `FUN_14032b4b0(mgr, ret)` = id -> index helper (`rsp+0xBC` value in rdx) |
| 0x14012415d | `call *0x60(%rsi)` on mgr = `GetItemTemplate(index)` -> `rdi` = CItem*
| 0x140124163-0x140124166 | NULL -> `jmp 0x140126a18` = return FALSE (silent) |
| 0x140124176 | `FUN_140106cf0(item, itemPos)` = equip-slot gate; FALSE -> `0x140126a16` return FALSE |
| 0x14012418b | `FUN_140387320(&pkt)` = CMsg ctor (vtable 0x14075d1f0, buffer obj+0x10, cap 0x400) |
| 0x140124191-0x14012419a | `r8d = (*pUser->vptr[0x8])(pUser)` = `CUser::GetID()` (slot +0x08 = GetID, docs/worker_v121_c.md:56) |
| 0x14012419d-0x1401241b3 | `FUN_1403873d0(&pkt, item /*rdx*/, uid /*r8*/, 0 /*r9*/, 2 /*5th arg @rsp+0x20*/)` |
| 0x1401241b8-0x1401241e6 | ret == 0 -> log line 0x1211, assert `"msg.Create(pItem, pUser->GetID(), 0, ITEMINFOEX_EQUIPMENT)"` @0x14070d4f0, `"IF_OK"` @0x1406dd3b8; **send skipped** |
| 0x1401241e8-0x140124200 | `(*(*(pUser+0x10))[0x348])(pUser+0x10, &pkt, 1)` = **map broadcast**, third arg = 1 |
| 0x140124201-0x140124209 | `FUN_140387370(&pkt)` = dtor |
| 0x14012420e | `mov $1,%al` -> return TRUE |

Return-false paths converge on `0x140126a16` (`xor %al,%al`) / `0x140126a18` (epilogue).

### 512's DB / parsing usage (VERIFIED)
- No DB API call in the case body: the item is resolved from the **in-memory item-template
  manager** (`FUN_140087d40` -> vtable +0x60), keyed by the *first* sscanf integer via
  `FUN_14032b4b0` (type -> 1-based index, table at `this+0xD94`, 0x12-wide after remap).
- sscanf format is exactly two `%d` (`"%d %d"`), so a payload with != 2 integers is a hard fail.
- Second integer = **item position/equip slot**, gated by `FUN_140106cf0`: it fetches item class
  via `FUN_1400ff680(itemtype)`, allows class 3 only for pos 2..9, all other classes only for
  pos 3..9 (`lea -0x3(%rbx); cmp $0x6` at 0x140106d3e), then calls `FUN_140104a40(user, pos)`.
- No money/attribute/stat writes, no `id_next`-style value returned: this is a pure read-only
  informational push.

## 3. Builder FUN_1403873d0 = CMsgItemInfoEx::Create (VERIFIED)

Args: `rcx` = CMsg object, `rdx` = CItem*, `r8d` = uid (int), `r9` = param_4 (void*, 8 bytes),
5th arg at entry `[rsp+0x28]` = mode (int; read as byte at `0xd0(%rsp)`).

Flow:
- 0x1403873f3-0x140387424: `item == NULL` -> log line 0x27 -> return 0.
- 0x140387429: `FUN_140101cb0(item, &struct)` = `CItem::SaveInfo`; base of the source struct is
  `rsp+0x30` (0x140387429 `lea 0x30(%rsp),%rdx`). FALSE -> log line 0x29 -> return 0.
- 0x14038746b: `FUN_1402b5600(msg)` = header reset (obj+0x8 = 0, obj+0xC = 0; memset 0x400 at
  obj+0x10 at 0x1402b5615) -> therefore **every byte the builder does not write is 0**.
- 0x140387473-0x14038768d: fill `msg->buf` = `*(msg+0x428)` = `msg+0x10` (set by ctor
  FUN_140387320 at 0x140387352).
- 0x14038767f: `movl $0x454,0x8(%rbx)` = **packet type 1108**; 0x140387686:
  `movl $0x4e,0xc(%rbx)` = **body length 0x4E (78)**. Confirmed by FUN_1403873a0
  `cmpl $0x454,0x8(%rbx)` (0x1403873ba) - obj+0x8 is the type slot.
- Return 1 on success, 0 on either guard.

### Wire layout (wire = [len:2 @+0][type:2 @+2][body]; body/buf offset = wire offset - 4)

buf offset = struct offset - 4; fields are **packed/unaligned** (e.g. a dword stored at buf+0x1B).
"slotN" = `CItemData::GetValue(N)` result captured by FUN_140101cb0 at struct offset:
slot1=+0x00, slot2=+0x04, slot3=+0x08, slot4=+0x0C, slot5=+0x10, slot6=+0x14, slot7=+0x18,
slot13=+0x1C, slot8=+0x20, slot9=+0x24, slot10=+0x28, slot11=+0x2C, slot12=+0x30, slot15=+0x34,
slot22=+0x38, slot14=+0x3C, slot16=+0x40, slot18=+0x44, slot19=+0x48, slot20=+0x4A, slot21=+0x4C,
slot23=+0x50, slot24=+0x54, slot25=+0x58, slot26=+0x5C, slot27=+0x60.
(slot indices per the `mov $N,%edx` before each `call *0x48`, 0x140101d84-0x14010201e.)

| wire | buf | width | content | store addr / source |
|---|---|---|---|---|
| +0x04 | 0x00 | u32 | `CItem::GetID` (item vtbl+0x08) | 0x14038747a <- struct+0x00 (slot1) |
| +0x08 | 0x04 | u32 | uid = Create arg3; case 512 = `CUser::GetID` | 0x140387487 <- %ebp |
| +0x0C | 0x08 | 8 bytes | Create arg4 (param_4); case 512 passes 0 | 0x140387491 <- %rsi |
| +0x14 | 0x10 | u32 | slot2 | 0x1403874a0 <- 0x34(%rsp) |
| +0x18 | 0x14 | u16 | slot5 | 0x1403874af <- 0x40(%rsp) |
| +0x1A | 0x16 | u16 | slot6 | 0x1403874bf <- 0x44(%rsp) |
| +0x1C | 0x18 | u8 | **Create 5th arg = mode** (case 512 passes 2) | 0x1403874d2 <- 0xd0(%rsp) |
| +0x1D | 0x19 | u8 | slot7; **bit0 tested** by the override block | 0x1403874e1 <- 0x48(%rsp) |
| +0x1E | 0x1A | u8 | slot13 | 0x1403874f0 <- 0x4c(%rsp) |
| +0x1F | 0x1B | u32 | slot8 | 0x1403874fe <- 0x50(%rsp) |
| +0x23 | 0x1F | u8 | slot9 | 0x14038750d <- 0x54(%rsp) |
| +0x24 | 0x20 | u8 | slot10 | 0x14038751c <- 0x58(%rsp) |
| +0x25 | 0x21 | u32 | slot11 | 0x14038752a <- 0x5c(%rsp) |
| +0x29 | 0x25 | u8 | slot12 | 0x140387539 <- 0x60(%rsp) |
| +0x2A | 0x26 | u8 | slot15 | 0x140387548 <- 0x64(%rsp) |
| +0x2B | 0x27 | u8 | slot22 | 0x1403875a5 <- 0x68(%rsp) |
| +0x2C | 0x28 | u8 | slot14 | 0x1403875b4 <- 0x6c(%rsp) |
| +0x2D | 0x29 | u8 | slot16 | 0x1403875c3 <- 0x70(%rsp) |
| +0x2E | 0x2A | u32 | slot18 | 0x1403875d1 <- 0x74(%rsp) |
| +0x32 | 0x2E | u16 | slot19 | 0x1403875e0 <- 0x78(%rsp) |
| +0x34 | 0x30 | u16 | slot20 | 0x1403875f0 <- 0x7a(%rsp) |
| +0x36 | 0x32 | u16 | slot21 | 0x140387600 <- 0x7c(%rsp) |
| +0x38 | 0x34 | u32 | slot23 | 0x140387612 <- 0x80(%rsp) |
| +0x3C | 0x38 | u32 | slot24 | 0x140387623 <- 0x84(%rsp) |
| +0x40 | 0x3C | u32 | slot25 | 0x140387634 <- 0x88(%rsp) |
| +0x44 | 0x40 | u32 | slot26 | 0x140387645 <- 0x8c(%rsp) |
| +0x48 | 0x44 | u16 | slot27 | 0x140387657 <- 0x90(%rsp) |
| +0x4A | 0x46 | u32 | `FUN_140100320(item)` = `[item+0x50]->vtbl[0x30](3)`, 0 when null | 0x14038766a |
| +0x4E | 0x4A | u32 | `FUN_140100340(item)` = `[item+0x58]->vtbl[0x30](3)`, 0 when null | 0x14038767c |

Slots captured by SaveInfo but **never copied** into the packet: slot3 (struct+0x08) and
slot4 (struct+0x0C). Everything else from the 0x64-byte struct is placed as listed.

Length note: body = 0x4E bytes = buf 0x00..0x4D, wire 0x04..0x51; total frame = 0x52 bytes.
The last store (buf+0x4A, 4 bytes) ends exactly at buf+0x4D, so the buffer is **exactly filled and
never overrun** - the earlier "overflow" reading was an arithmetic slip and is retracted. Offsets
0x0D-0x13 (wire 0x11-0x17, 7 bytes) and wire 0x19 are never written and stay 0 from the reset.
Whether the send path honours `len` vs a fixed struct size: UNKNOWN, but not needed - the writes fit.

Cross-ref: 1108 (0x454) is also listed as an inbound new-engine id (docs/newengine_router.md:112);
the same id is reused for this outbound push - significance UNKNOWN.

Correction to earlier project note: src/systems/drops.hpp:157 says wire+0x14 is "the itemtype
record's first numeric column (record field 1)". The store at 0x1403874a0 copies struct+0x04 =
the value read with index 2, i.e. **slot2**, not slot1. Slot1 (the item id) is wire+0x04. Low
practical impact (build_item_info_ex_1116 writes itemtype at +0x10 payload = wire+0x14), but the
column index in the note is off by one.

### Conditional override block (0x140387552-0x140387595)
If `buf[0x19] & 1` (wire+0x1D bit0, = slot7 bit0) is set then (0x140387558-0x140387595):
slot9 (struct+0x24) != 0 -> buf[0x1F] = 0xFF; slot10 (struct+0x28) != 0 -> buf[0x20] = 0xFF; buf dword @0x21 (wire+0x25) = 0; buf[0x25] = 0;
buf[0x26] = 0. Column semantics: **UNKNOWN** (CItemData column table is outside MsgServer.exe;
see docs note in src/systems/drops.hpp:152).

### Record-value provenance (VERIFIED)
Each "record value" is `CItemData::GetValue(n)`: `[item+0x10]->vtbl[0x10](n)` then
`->vtbl[0x48]()` (pattern at 0x140101d8f-0x140101d9e). The n values read in FUN_140101cb0 are
1,2,3,4,5,6,7,8,9,0xA,0xB,0xC,0xD,0xE,0xF,0x10,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A.
Slots 3 (struct+0x08) and 4 (struct+0x0C) are the only ones never copied into the packet.

## 4. Who receives it (VERIFIED slot, doc-based semantics)

`0x1401241e8-0x1401241fa`:
```
lea 0x10(%r14),%rcx      ; sub-object at pUser+0x10
mov (%rcx),%rax          ; vtbl
mov $1,%r8b              ; flag = 1
lea 0x160(%rsp),%rdx     ; &pkt (CMsg base, 0x400 body buffer)
call *0x348(%rax)        ; slot +0x348
```
Slot semantics (project docs, cross-checked in three files):
- `+0x350` = send to **this one client** (self-send) - docs/DEFERRED_TYPES.md:178,
  docs/setuserint_decode.md:191, docs/worker_small_types.md:134-135.
- `+0x348` = **broadcast on the map** with an extra flag argument - docs/setuserint_decode.md:192,
  docs/worker_rebirth_apply2.md:150-151, docs/decode_remaining_subsystems.md:15.

Case 512 uses **+0x348 with flag 1**, i.e. the ItemInfoEx snapshot is broadcast to every user on
the requesting player's map, not unicast back to the requester. (Compare docs/v121_dispatch_and_1650.md:52
where a sibling type uses +0x350 self-send.)

## 5. id_next vs id_nextfail

The 501-598 handler returns a bool (`al`), not a chain verdict, and the 512 case emits no
`id_next`/`id_nextfail` marker of its own. Outcomes:

| path | addr | return | sends? |
|---|---|---|---|
| sscanf != 2 items | 0x14012410d -> 0x140126a16 | FALSE | no |
| item template NULL | 0x140124166 -> 0x140126a18 (epilogue; %al = 0 from the NULL pointer) | FALSE | no |
| slot gate FUN_140106cf0 FALSE | 0x14012417d -> 0x140126a16 | FALSE | no |
| Create FUN_1403873d0 == 0 | 0x1401241ba-0x1401241e6 | continues | **no** (log 0x1211) |
| success | 0x14012420e | TRUE | yes, broadcast |

So the effective outcome mapping is: all four guards -> **id_nextfail** (nothing reaches the wire);
success -> **id_next**. The Create-failure branch is notable: it does *not* return early, it logs
and still returns TRUE - a reimplementation must drop the packet but keep the chain result TRUE.

### Reimplementation checklist
- parse `%d %d`; <2 ints = fail.
- resolve itemtype -> template via item-template manager; NULL = fail.
- slot 3..9 (item class 3 also allows 2), else fail.
- build 1108 with type 0x454, len 0x4E per the table above (uid = player id, mode = 2, param_4 = 0),
  broadcast to the map with flag 1, only if Create returned 1.
