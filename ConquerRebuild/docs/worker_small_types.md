# Small Action Types Decode — 112, 124, 126, 218, 219, 2002, 2005

Source of truth: `decompiled/MsgServer.c` (1,361,879 lines) + `conquer_source/Source/MsgServer.exe` (PE, image base 0x140000000).
Every claim below cites a MsgServer.c line and, where available, a disassembly address.
Unknowns are labelled **UNKNOWN** / **BLOCKED** with the exact missing dependency — nothing is guessed.

Status legend: `FOUND` = handler located + body dumped; `UNREACHABLE` = proven absent from the dispatch chain; `BLOCKED` = needs a dependency not present in the work dir.

## Dispatcher architecture (established, see ACTION_COVERAGE.md)

- Old-engine dispatcher = one large `switch` reached from `ProcessAction`. Case labels are the decimal action ids;
  Ghidra renders them as hex (`0xc9`=201, `0x191`=401, `0x192`=402, `0x12f`=303).
- New-engine router `FUN_14012a6e0` handles 1001-1729 via byte map `DAT_14013aa9c`.

---

## Section A — old-engine large switch: coverage map

(entries appended as verified)

### A.1 The real dispatch chain — `CGameAction::ProcessAction` (MsgServer.c 223426-223800)

This is the single authoritative router. It is a **range ladder**, not a `switch` (`iVar8` = action type,
taken from packet slot 3 at MsgServer.c 223611-223613: `(*(code**)(*puVar10+0x10))(puVar10,3)` then vtable `+0x48`).

| test (MsgServer.c line) | range | target |
|---|---|---|
| 223622 `iVar8 - 0x65U  < 0x62` | 101-198 | `FUN_140142db0` |
| 223628 `iVar8 - 0xc9U  < 0x62` | 201-298 | `FUN_14013b950` |
| 223634 `iVar8 - 0x12dU < 0x62` | 301-398 | `FUN_14013d790` |
| 223640 `iVar8 - 0x191U < 0x62` | 401-498 | `FUN_1401199d0` |
| 223646 `iVar8 - 0x1f5U < 0x62` | 501-598 | `FUN_140123590` |
| 223652 `iVar8 - 0x259U < 0x62` | 601-698 | `FUN_140127820` |
| 223658 `iVar8 - 0x2bdU < 0x62` | 701-798 | `FUN_140128290` |
| 223664 `iVar8 - 0x3e9U < 0x3e6` | **1001-1998** | `FUN_14012a6e0` (new engine, byte map `DAT_14013aa9c`) |
| 223670 `iVar8 - 0x7d1U < 0x62` | **2001-2098** | `FUN_140146a10` |
| 223676 `iVar8 - 0x835U < 0x62` | 2101-2198 | `FUN_140146a10` (same function) |
| 223682 `iVar8 - 0xbb9U < 0x62` | 3001-3098 | `FUN_14011a7e0` |
| 223688 `iVar8 - 0x321U < 0x62` | 801-898 | `FUN_140127070` |
| 223694 `iVar8 - 0x899U < 0x62` | 2201-2298 | `FUN_140141c80` |
| 223700 `iVar8 - 0xdadU < 0x62` | 3501-3598 | `FUN_140140380` |
| 223706 `iVar8 - 0xe11U < 0x62` | 3601-3698 | `FUN_14011b5e0` |
| 223712 `iVar8 - 0xe75U < 0x62` | 3701-3798 | `FUN_14011dcb0` (returns, never falls through) |
| 223720 `iVar8 - 0xed9U < 0x62` | 3801-3898 | `FUN_14011bfa0` |
| 223726 `iVar8 - 0xf3dU < 0x62` | 3901-3998 | `FUN_14011c610` |
| 223732 `iVar8 - 0x1f41U < 0x3e6` | 8001-8998 | `FUN_14011c9e0` |
| 223738 `iVar8 - 0x4e21U < 9999` | 20001-29999 | `FUN_14011d050` |
| 223744 `iVar8 - 0x2329U < 0x3e6` | 9001-9998 | `FUN_140142880` |
| 223750 else | — | `log_InlineLogDBERROR("...bad type %d")` 223752 |

**`< 0x62` = 98**; `< 0x3e6` = 998. So each block spans N..N+97.

### A.2 id_next / id_nextfail rule (MsgServer.c 223745-223762) — applies to EVERY type above

```c
if (cVar1 == '\0')   // handler returned FALSE = failure
    local_10d8 = packet slot 2  // -> id_nextfail
else                 // handler returned TRUE = success
    local_10d8 = packet slot 1  // -> id_next
```
- Slot indices are read via `(*(code**)(*puVar10+0x10))(puVar10, N)` then vtable `+0x48`.
- **Special case, MsgServer.c 223758-223768:** if the *current* type `iVar7 == 0x140` (=320), the engine reads slot 1 and
  if non-zero logs `"Error: %u action[%d] can not have id_next"` and **returns without chaining**.
  Type 320 must be a terminal action.
- Loop is capped: MsgServer.c 223766 `local_10cc < 0x20` (32 hops), then
  `"Error: too many game action"` + bail (223770-223772).

### A.3 Ownership of each requested type (VERIFIED, no guessing)

| type | hex | owning function | dispatcher block | case line |
|---:|---|---|---|---|
| 112 | 0x70 | `FUN_140142db0` @0x140142db0 | 101-198 | MsgServer.c **222645** |
| 124 | 0x7c | `FUN_140142db0` | 101-198 | MsgServer.c **222762** |
| 126 | 0x7e | `FUN_140142db0` | 101-198 | MsgServer.c **222805** |
| 218 | 0xda | `FUN_14013b950` @0x14013b950 | 201-298 | MsgServer.c **218768** |
| 219 | 0xdb | `FUN_14013b950` | 201-298 | MsgServer.c **218792** |
| 2002 | 0x7d2 | `FUN_140146a10` @0x140146a10 | 2001-2098 | MsgServer.c **223942** |
| 2005 | 0x7d5 | `FUN_140146a10` | 2001-2098 | MsgServer.c **224125** |

All five earlier "could not find handler" reports were wrong: the handlers exist. They were missed because
the old-engine dispatcher is **not** one switch (it is the ladder in A.1) and the per-block bodies are ordinary
`switch`es in *separate* functions, so grepping `case 112:` / `case 0x70:` only lands if you know which
function to look in. Types 218/219 sit inside `FUN_14013b950` (201-block), NOT the 2001-block —
that is the trap that made them look absent.

---

## Section B — per-type case bodies

### B.1 type 112 (0x70) — FOUND — NPC dialog page, action id 112

**Handler:** `FUN_140142db0` (0x140142db0-0x140145f58, 12712 bytes = the 101-198 block).
**Case address: 0x140143fd1** (jump table `0x140145e90`, index `type-101`, table verified with capstone:
`140142e53: add eax,-0x65 / 140142e56: cmp eax,0x31 / 140142e59: ja ` → 0..49 only, `140142e68: mov edx,[rcx+rax*4+0x145e90] / 140142e72: jmp rdx`).
Body: MsgServer.c **222645-222670**.

#### Token/format
- **`sscanf` format: NONE.** Type 112 does **not** parse `param_3`. Zero tokens. Everything comes from the
  action-record row (packet slots), not from the text parameter.

#### Fields read (disassembly 0x140144007-0x140144037)
```
14014400d  mov edx,4                 ; slot index 4
140144012  call [rax+0x10]           ; puVar10->GetField(4)
14014401b  call [rdx+0x48]           ; -> u4  => ^4 = NPCMONSTER id   (mov ebx,eax)
140144026  mov edx,5                 ; slot index 5
14014402b  call [rax+0x10]           ; puVar10->GetField(5)
140144034  call [rdx+0x78]           ; -> text/ptr => ^5 = dialog TEXT (mov rdi,rax)
```
- `^4` (`slot 4`), read via vtable `+0x48` → stored in `ebx` → passed as **param_5** (`r9d`) of the builder
  = **u2 wire field `+8`** = dialogue/target id.
- `^5` (`slot 5`), read via vtable **`+0x78`** (pointer/string getter, *not* the numeric `+0x48`) → dialog text.

#### Packet
- id **2032 (0x7F0)** — `FUN_1403a6400` (defined MsgServer.c **657813**) writes `*(param_1+8) = 0x7f0`
  (MsgServer.c 657836) and length `*(param_1+0xc) = packer.GetSize()+0xf` (657838).
- Builder call args (disassembly 0x140144048-0x140144063):
  `FUN_1403a6400(buf, edx=0x70 /*112*/, r8=slot5 text, r9d=(u1)slot4, [rsp+0x20]=0)`.
  Decompiled: `FUN_1403a6400(local_1058, 0x70, uVar16, uVar4)` (MsgServer.c 222653).
- Struct writes in the builder (core-relative, MsgServer.c 657820-657837):
  | core off | value | source |
  |---|---|---|
  | `+0x00` | `TimeGet()` u8 | tick |
  | `+0x04` | u2 `0` | fixed |
  | `+0x06` | u2 `0` | fixed |
  | `+0x08` | u2 **slot4** | param_5 |
  | `+0x0a` | u1 **slot4 truncated** | param_4 |
  | `+0x0b` | u1 **0x70 = 112** (hard-coded) | param_2 |
  | packer | `AddString(slot5 text)` | param_3 |
  Note `+0x0b = 112` is baked into this case — the client sees dialog *action = the action type*.
  Limit: `if (0x400 < size) return false` (MsgServer.c 657839-657840) → **text+15 bytes must be ≤ 1024**.

#### Writes / send
- `(**(code**)(param_4[2] + 0x350))(param_4 + 2, local_1058)` (MsgServer.c 222654; disasm 0x1401440ab region)
  — user-object **vtable slot +0x350 = "send packet to this client"**, payload = built CMsgDialog.
  `param_4` = user object (`*(param_1+8)`, MsgServer.c 223623/223626).

#### return / id_next
- success → `return true` (MsgServer.c 222656) → engine takes **slot 1 = id_next**.
- `FUN_1403a6400 == 0` → logs `0x819` source line, `FUN_1403a63c0` (dtor), `return false`
  (MsgServer.c 222657-222660) → **slot 2 = id_nextfail**.
- `param_4 == NULL` (no user) → logs `0x813`, `return false` (MsgServer.c 222646-222650).
