# v127 — CMsgAction helper `FUN_140362620`: definitive argument → body-offset map

Binary `../conquer_source/Source/MsgServer.exe`, imagebase 0x140000000. All bytes below were
disassembled in this pass. Wire offset = **4 + body offset**. `UNKNOWN` = not proven.

> v2 note: the first draft of §1 had the *wire* columns right but two caller-frame slot labels
> wrong ([rsp+0x28]… instead of [rsp+0x20]…). Corrected and re-proven in §1.1/§1.2 below.

---

## 1. The helper, instruction by instruction (0x140362620..0x1403626F5)

### 1.1 Frame — exact arithmetic

```
0x140362620  mov [rsp+8],rbx      ; home slots, rsp NOT moved
0x140362625  mov [rsp+0x10],rbp
0x14036262A  mov [rsp+0x18],rsi
0x14036262F  push rdi             ; -8
0x140362630  sub rsp,0x20         ; -0x20
```
Let `R` = caller rsp at the `call`. Sequence: `call` pushes retaddr (R-8) → `push rdi` (R-0x10)
→ `sub 0x20` → **callee rsp = R-0x30**, i.e. `callee[X] = caller[X-0x20]`. Confirmed by the
epilogue, which restores from `callee[0x30]`, `[0x38]`, `[0x40]` = `R`, `R+8`, `R+0x10` = exactly
rbx/rbp/rsi home slots (0x1403626E1-0x1403626EF).

| callee read | = caller slot | = argument |
|---|---|---|
| `[rsp+0x50]` (0x1403626A7) | `[rsp+0x20]` | **arg5** |
| `[rsp+0x58]` (0x1403626CC) | `[rsp+0x28]` | **arg6** |
| `[rsp+0x60]` (0x1403626B7) | `[rsp+0x30]` | **arg7** |
| `[rsp+0x68]` (0x1403626C5) | `[rsp+0x38]` | **arg8** |

Signature: `FUN_140362620(msg /rcx, id /edx, w /r8d, w /r9d, arg5 /[rsp+0x20],
arg6 /[rsp+0x28], arg7 /[rsp+0x30] dword, arg8 /[rsp+0x38] dword)` = 8 parameters.

### 1.2 Prologue / ctor

| addr | bytes | effect |
|---|---|---|
| 0x140362634 | `mov esi,r9d` | esi = arg4 |
| 0x140362637 | `mov ebp,r8d` | ebp = arg3 |
| 0x14036263A | `mov ebx,edx` | ebx = arg2 |
| 0x14036263C | `mov rdi,rcx` | rdi = msg |
| 0x14036263F-45 | `test edx,edx / jne / xor eax,eax` | **id == 0 → return 0**, body untouched (0x140362645) |
| 0x14036264A | `call 0x1402b5600` | base msg ctor |
| 0x140362651 | `mov dword [rdi+0xc],0x26` | msg+0x0C = 38 (declared body size) |
| 0x140362658 | `mov dword [rdi+8],0x271a` | msg+0x08 = 10010 |

The body buffer **is** `msg+0x10`: ctor `0x1403625A1 lea rdx,[rdi+0x10]` / `0x1403625A5 mov
[rdi+0x428],rdx`. `msg+0x428` is only a cached pointer, so every `[rcx+nn]` below is literally the
wire payload byte.

### 1.3 Timestamp pair + id

| addr | write |
|---|---|
| 0x14036265F `call [rip+0x375ceb]` → 0x140362665-6C | **+0x00 u32** = time import (which import: UNKNOWN) |
| 0x140362670 `call [rip+0x375cda]` → 0x140362676-7D | **+0x10 u32** = second time import |
| 0x140362680-687 `mov [rax+4],ebx` | **+0x04 u32 = arg2 (id)** |

Note +0x10 is the *same slot* that arg8 overwrites later (0x1403626C9), so when arg8 is used the
second timestamp is lost — the two builders in fact always pass an explicit arg8 (see §2-§5).

### 1.4 The five payload writes

| addr | instruction | destination | source |
|---|---|---|---|
| 0x140362691 | `mov word [rax+0x18],bp` | **+0x18 u16** | arg3 (r8d) |
| 0x14036269C | `mov word [rax+0x1a],si` | **+0x1A u16** | arg4 (r9d) |
| 0x1403626AC | `mov word [rcx+0x16],ax` ← `movzx eax,word [rsp+0x50]` (0x1403626A7) | **+0x16 u16** | **arg5** `[rsp+0x20]` |
| 0x1403626BB | `mov [rcx+8],eax` ← `mov eax,[rsp+0x60]` (0x1403626B7) | **+0x08 u32** | **arg7** `[rsp+0x30]` |
| 0x1403626C9 | `mov [rcx+0x10],eax` ← `mov eax,[rsp+0x68]` (0x1403626C5) | **+0x10 u32** | **arg8** `[rsp+0x38]` |
| 0x1403626D8 | `mov word [rcx+0x14],ax` ← `movzx eax,word [rsp+0x58]` (0x1403626CC) | **+0x14 u16** | **arg6** `[rsp+0x28]` |
| 0x1403626DC | `mov eax,1` | return 1 | |

### 1.5 DEFINITIVE MAP

| argument | body | **wire** | width | role at every call site (§2-§6) |
|---|---|---|---|---|
| arg2 `edx` | +0x04 | **0x08** | u32 | actor / role id |
| arg3 `r8d` | +0x18 | **0x1C** | u16 | **X** (vt[0x40] at all 4 sites) |
| arg4 `r9d` | +0x1A | **0x1E** | u16 | **Y** (vt[0x48] at all 4 sites) |
| arg5 `[rsp+0x20]` | +0x16 | **0x1A** | u16 | **direction** (vt[0x50]) |
| arg6 `[rsp+0x28]` | +0x14 | **0x18** | u16 | **ACTION id** |
| arg7 `[rsp+0x30]` | +0x08 | **0x0C** | u32 | target/`data`: index (1650), npc-sub id (1511), NType (1043), `data` cell (1046) |
| arg8 `[rsp+0x38]` | +0x10 | **0x14** | u32 | second dword: 0 / npc->GetID() / 0 / 0 |
| — `clock()` | +0x00 | 0x04 | u32 | ts1 |
| — **never written** | +0x1C, +0x1E, +0x20…+0x25 | **0x20, 0x24** | — | `ext`/`target2` **not produced by this helper** (see §7) |

### 1.6 Sibling `FUN_140362810` — same template, independent corroboration

Identical prologue/frame (0x14036281F `push rdi`, 0x140362820 `sub rsp,0x20`). Writes:
`+0x00` ts (0x14036285C), `+0x10` ts (0x14036286D), `+0x04` id (0x140362877),
`+0x18`=arg3 (0x140362881), `+0x1A`=arg4 (0x14036288C), `+0x16`=arg5 `[rsp+0x50]` (0x14036289C),
`+0x14`=arg6 `[rsp+0x58]` (0x1403628AC), `+0x08` **u16**=arg7 `[rsp+0x60]` (0x1403628BC),
`+0x0A`=arg8 `[rsp+0x68]` (0x1403628CC), `+0x1C`=arg9 `[rsp+0x70]` (0x1403628DB),
`+0x24` byte=arg10 `[rsp+0x78]` (0x1403628EA). Same fixed slots for arg3..arg6 → the template is
`+0x18/+0x1A = arg3/arg4, +0x16 = arg5, +0x14 = arg6`; only the tail (arg7+) differs in width.

---

## 2. Cross-check A — type 1650, call at 0x1401387F6

Setup 0x140138796..0x1401387EB (all callee-saved, survive the 0x140362560 ctor call):
`ebx`=vt[0x50] (0x1401387A1), `esi`=vt[0x48] (0x1401387AE), `edi`=vt[0x40] (0x1401387BB),
`edx`=vt[0x08] (0x1401387C4); `[rsp+0x38]=r14d` (0x1401387C9) = 0;
`ecx=[rsp+0x2d8]`(parsed `%u`) → `[rsp+0x30]` (0x1401387CE/7D5); `eax=0xAB` → `[rsp+0x28]`
(0x1401387D9/7DE); `[rsp+0x20]=bx` (0x1401387E3); `r9d=esi`, `r8d=edi`.

| value | argument | body | **wire** |
|---|---|---|---|
| player id (vt[0x08]) | arg2 | +0x04 | 0x08 |
| X (vt[0x40]) | arg3 | +0x18 | 0x1C |
| Y (vt[0x48]) | arg4 | +0x1A | 0x1E |
| dir (vt[0x50]) | arg5 `[rsp+0x20]` | +0x16 | **0x1A** |
| **action 0xAB = 171** | arg6 `[rsp+0x28]` | +0x14 | **0x18** |
| **parsed index u1** | arg7 `[rsp+0x30]` | +0x08 | **0x0C** |
| 0 | arg8 `[rsp+0x38]` | +0x10 | 0x14 |

---

## 3. Cross-check B — type 1511, call at 0x1401372A0

Setup 0x140137247..0x140137295, identical shape: `ebx`=vt[0x50], `esi`=vt[0x48], `edi`=vt[0x40],
`edx`=vt[0x08]; `[rsp+0x38]=r13d` = **npc->GetID()** (0x140137279); `[rsp+0x30]=r12d` =
**npc->[0x60]->GetID()** (0x14013727E); `eax=0xA0` → `[rsp+0x28]` (0x140137283/88);
`[rsp+0x20]=bx` (0x14013728D).

| value | argument | body | **wire** |
|---|---|---|---|
| **action 0xA0 = 160** | arg6 `[rsp+0x28]` | +0x14 | **0x18** |
| dir (vt[0x50]) | arg5 `[rsp+0x20]` | +0x16 | 0x1A |
| **npc->[0x60]->GetID()** | arg7 `[rsp+0x30]` | +0x08 | **0x0C** |
| **npc->GetID()** | arg8 `[rsp+0x38]` | +0x10 | **0x14** |

**Two independent proofs** that the action word is arg6 → wire 0x18 (not arg5) and that the
"target" dword is arg7 → wire 0x0C. Corollary for `worker_v126_g5_1508.md`: its sentence
"`+0x16` = action id word … `+0x08` = idNPC in 1511" is **wrong on both counts** — the action
word is at **+0x14**, and in 1511 the plain NPC id (`npc->GetID()`) lands at **+0x10 (wire 0x14)**
while wire 0x0C takes `npc->[0x60]->GetID()`. Nothing is overwritten at either site: `[rsp+0x20]`
and `[rsp+0x30]` are distinct live slots.

---

## 4. Apply to type 1043 (call at 0x1401627B0)

Setup 0x140162758..0x1401627A8: `esi`=vt[0x50] (0x140162763), `edi`=vt[0x48] (0x140162770),
`ebx`=vt[0x40] (0x14016277D), `edx`=vt[0x08] (0x140162785); **`ebp` = elem->NType()
(0x14039d760, 0x140162728/72D)**; `[rsp+0x38]=0` (0x14016278A); `[rsp+0x30]=ebp` (0x140162792);
`eax=0x6E` → `[rsp+0x28]` (0x140162796/79B); `[rsp+0x20]=si` (0x1401627A0);
`r9d=edi`, `r8d=ebx` (0x1401627A5/A8).

| value | argument | body | **wire** |
|---|---|---|---|
| player id | arg2 | +0x04 | 0x08 |
| **X** (sub-object +0x10C8) | arg3 | +0x18 | **0x1C** |
| **Y** (sub-object +0x10CC) | arg4 | +0x1A | **0x1E** |
| **dir** (sub-object +0x10D0) | arg5 | +0x16 | **0x1A** |
| **action 110 (0x6E)** | arg6 | +0x14 | **0x18** |
| **elem NType** | arg7 | +0x08 | **0x0C** |
| 0 | arg8 | +0x10 | 0x14 |

**Answer: the element NType is carried in the u32 at wire 0x0C** (= body +0x08 = arg7). It is the
only per-element value in the packet; the same packet (identical bytes) is sent once per erased
element, and only to the acting client (`user->vt[0x350]`, 0x1401627F2).

Getter identities (this wave, vtable **0x14071E938** hung off `CUser+0x10` —
**not** CUser's own vtable 0x14071ED48, so do not confuse it with the `+0xEAC` "lookface"):

| slot | fn | returns | proven role |
|---|---|---|---|
| vt+0x40 | 0x1401BF4B0 | `dword [rcx+0x10C8]` | **X** — `add [rdi+0x10c8],<X delta>` 0x1401B1B39; paired with r8d/x at 0x1401B1AEF,0x1401B1B2E |
| vt+0x48 | 0x1401BF4C0 | `dword [rcx+0x10CC]` | **Y** — `add [rdi+0x10cc],<Y delta>` 0x1401B1B3F; paired with r9d/y at 0x1401B1AE4,0x1401B1B23 |
| vt+0x50 | 0x140160F30 | `dword [rcx+0x10D0]` | **direction** — stored as `v mod 8` (sign-corrected, 0x1401B1917-0x1401B191F and 0x1401B1953-0x1401B196C), indexes the delta tables 0x140714020 (X: 0,-1,-1,-1,0,1,1,1) / 0x140714040 (Y: 1,1,0,-1,-1,-1,0,1) and the `×2` step tables 0x140714330/0x140714390 |

Writer offsets are relative to the sub-object base, so the CUser offsets are
`+0x10C8/+0x10CC/+0x10D0` **+ 0x10** = 0x10D8 / 0x10DC / 0x10E0.

---

## 5. Apply to type 1046 (call at 0x14013561E)

Setup 0x140135599..0x140135616: ctor 0x140362560; `mov edx,4 / call [rax+0x10]` (0x1401355AD/B2)
= the action's **`data` column cell 4**, then `call [rdx+0x48]` (0x1401355BB) → `r12d` = **the data
value**; `ebx`=vt[0x50] (0x1401355CC), `esi`=vt[0x48] (0x1401355D9), `edi`=vt[0x40] (0x1401355E6),
`edx`=vt[0x08] (0x1401355EF); `r14d=0` → `[rsp+0x38]` (0x1401355F4/F7);
`[rsp+0x30]=r12d` (0x1401355FC) = data; `eax=0x7E` → `[rsp+0x28]` (0x140135601/606);
`[rsp+0x20]=bx` (0x14013560B).

| value | argument | body | **wire** |
|---|---|---|---|
| player id | arg2 | +0x04 | 0x08 |
| X | arg3 | +0x18 | 0x1C |
| Y | arg4 | +0x1A | 0x1E |
| dir | arg5 | +0x16 | 0x1A |
| **action 126 (0x7E)** | arg6 | +0x14 | **0x18** |
| **data cell value** | arg7 | +0x08 | **0x0C** |
| 0 | arg8 | +0x10 | 0x14 |

**Answer: the `data` value is carried in the u32 at wire 0x0C.**
Recipient (**verified**): 0x140135653-0x140135663 = `mov rax,[r13+0x10] / lea rdx,[rsp+0x3c20] /
lea rcx,[r13+0x10] / call [rax+0x350]` — the **same** call shape as 1043's send at
0x1401627E5-0x1401627F2 (`[r14+0x10]`, `[rax+0x350]`). Both are the acting user's own
send-the-packet-to-this-client (self only); neither body contains a broadcast/room helper.

---

## 6. Compare with the rebuild builder and the argument lists to use

`build_action_10010(actor_id, data, action, dir, x, y, ext=0, target2=-1, slot14=-1)`
(`src/systems/action.hpp:58`) writes: 0x08 actor_id, 0x0C data, 0x10 0, 0x14
`slot14>=0 ? slot14 : time()`, 0x18 action, 0x1A dir, 0x1C x, 0x1E y, 0x20 ext, 0x24 target2,
0x28 0.

Slot-by-slot against §1.5: **actor_id ✓, data = arg7 ✓, action = arg6 ✓, dir = arg5 ✓,
x = arg3 ✓, y = arg4 ✓, slot14 = arg8 ✓** — the builder is already correct for this helper family.
Two deltas:

1. `slot14` must be passed **explicitly as 0** at these sites. The default (`time()`) would put a
   timestamp in wire 0x14 where the original writes arg8 = 0.
2. `ext` (0x20) and `target2` (0x24) are **never written by `FUN_140362620`** (last write is body
   +0x1A, 0x1403626D8), but they *are* inside the declared 0x26-byte body (msg+0x0C = 0x26,
   0x140362651). So the original emits whatever the ctor left there — identity of that content is
   **UNKNOWN** (the ctor 0x1403625A1-0x1403625C0 does not visibly zero the body). Keep `0`/`-1`
   as the current defensive choice and mark the two fields UNKNOWN.

**1043 port (corrected):**
```
build_action_10010(p.id, /*data=*/ ntype, /*action=*/ 110, /*dir=*/ p.dir,
                   /*x=*/ p.x, /*y=*/ p.y, /*ext=*/ 0, /*target2=*/ -1, /*slot14=*/ 0);
```
per erased element, sent to `p.session` only. (Current code passes `0,0,0` for dir/x/y — the
original sends the actor's live dir/X/Y, so those three must be filled in.)

**1046 port (corrected):**
```
build_action_10010(p.id, /*data=*/ a->data, /*action=*/ 126, /*dir=*/ p.dir,
                   /*x=*/ p.x, /*y=*/ p.y, /*ext=*/ 0, /*target2=*/ -1, /*slot14=*/ 0);
```
(Current code already puts `a->data` at wire 0x0C — correct — but leaves dir/x/y at 0.)

---

## 7. Residual UNKNOWNs

* The two time imports behind `+0x00`/`+0x10` (0x14036265F / 0x140362670) were not resolved to
  names.
* Content of body +0x1C..+0x25 (wire 0x20..0x29) — `ext`/`target2` — is not produced by the
  helper (§6.2).
* Whether `[sub+0x10D0]` (direction) is kept in sync with the `CUser+0xEAC` "lookface" field of
  the *other* vtable is UNKNOWN; the two accessors are distinct code paths.
* Width truncation: arg3/arg4/arg5/arg6 are written as **u16**, so a caller value ≥ 65536 is
  silently masked; all known call sites pass dir (0..7) and action ids, so no site is affected.
