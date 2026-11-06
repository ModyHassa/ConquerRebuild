# Action 1082 — helper decode (worker v123)

Scope: helpers reachable from the case-0x48 body `0x14012f025..0x14012f4a2`
(sub-branch decode continued to the body end 0x14012f792 for the team path).
Prior: `worker_v122_1082.md` (sscanf / token ladder). Everything below is from
`objdump -d -M intel ../conquer_source/Source/MsgServer.exe`.
Rule: **UNKNOWN** = not proven by the bytes. No guessing.

## 0. Complete call inventory of the body (VERIFIED)

Every `call` in 0x14012f025..0x14012f792 resolves to exactly these targets:

| target | identity |
|---|---|
| 0x140512630 | buffer clear helper (`buf[0]=0; memset(buf+1,0,0xff)`) |
| [0x1406d8ab0] | **MSVCR90.dll `sscanf`** (import resolved) |
| [0x1406d8ae0] | **MSVCR90.dll `_stricmp`** (import resolved) |
| [0x1406d8a70] | MSVCR90.dll `_invalid_parameter_noinfo` |
| [0x1406d8200] | CQBase.dll `log_InlineLogDBERROR` |
| [0x1406d8348] | CQBase.dll `log_InlineLogERROR` |
| 0x1400bb7e0 | log prefix/format helper (arg r15 = router param, returns `%d` for log) |
| 0x1401181a0 | cached component getter, id **20** (§1) |
| 0x140008520 | global table indexer, stride 0x850 (§2) |
| 0x140087650 | field getter `[map+0x90]` (§3) |
| 0x140118320 | cached component getter, id **0x1e = 30** (§5.1) |
| 0x140035210 / 0x140033360 / 0x1400333a0 / 0x1400344f0 | team id-container ctor / begin-deref / ++ / dtor (§5.3-5.4) |

**KEY NEGATIVE (VERIFIED by completeness of the list):** the body contains **no
socket/packet-send call, no DB API call, and no id-allocation call**. All
persistent effects go through virtual calls on objects obtained at runtime.

## 1. `0x1401181a0` — cached component getter, id 20 (VERIFIED extent 0x1401181a0..0x14011821d)

- Args: **none**. `sub rsp,0x48`; guard dword at `0x140975d10` bit0 (one-time init).
- Init: `call [0x1406d8df0]` (= **Root.dll** IAT slot; exported symbol name
  unresolved from the thunk bytes -> **UNKNOWN name**), then
  `edx=0x14` (20), `call [rax+0x20]` -> factory/singleton lookup by component id.
  Result stored in `0x140975d08`.
- Return: `[0x140975d08]`; if NULL it logs `log_InlineLogERROR` with line `0x3f6`
  and still returns the (NULL) pointer.
- Side effects: writes `0x140975d10` (init flag) and `0x140975d08` (cache) once per process.
- Player-object slot touched: **none** — it is process-global, not per player.
- Component 20's class / vtable is created inside Root.dll, so its slot meanings
  are **UNKNOWN** beyond what the call sites prove (§5).

## 2. `0x140008520` — global record-table indexer, stride 0x850 (VERIFIED extent 0x140008520..0x1400085b1)

```
140008520  mov ebx,ecx            ; arg = u32 index
140008528  call 0x1400084e0       ; range predicate
14000852d  test eax,eax / jne 0x140008563
140008531..140008555             ; log_InlineLogERROR(...,"…",0x379)  ; line 0x379
14000855b  xor eax,eax / ret      ; -> NULL
140008563  rcx=[0x140975c28] ; r8=[0x140975c20]
140008571  count = (rcx-r8)/0x850        ; magic 0x7b301ecc07b301ed, sar 0xa
14000858f  cmp rbx,rdx / jb ok
140008594  call _invalid_parameter_noinfo
1400085a1  imul rbx,rbx,0x850
1400085a8  lea rax,[r8+rbx] / ret          ; -> base + i*0x850
```
- Predicate `0x1400084e0`: `return (index >= 0xe) && (index < (0x140975c28-0x140975c20)/0x850);`
  i.e. **indices 0..13 are permanently invalid** (14 reserved slots).
- Args: `ecx` = index only. Return: pointer to a 0x850-byte record, or **NULL**.
- Side effects: `log_InlineLogERROR` line `0x379` when out of range.
- Player-object slot: **none** — global array at `0x140975c20`, element 0x850.
- The index at every 1082 call site is `[r12+0x48]` (`param_1[9]` in the decomp):
  0x14012f1fa, 0x14012f32f, 0x14012f5cc, 0x14012f5d1 — a dword in the
  action-packet/session object, i.e. an **instance/channel selector, not a player
  slot**. What the array holds is **UNKNOWN** (only proven: 0x850-byte records
  whose `+0x90` is another object, §3).
- **Risk note:** the NULL return is not tested at any 1082 call site
  (0x14012f204 / 0x14012f339 / 0x14012f5d6 load it straight into rcx for
  §3). An invalid `[r12+0x48]` therefore dereferences NULL.

## 3. `0x140087650` — lazy field getter `[record+0x90]` (VERIFIED extent 0x140087650..0x1400876a6)

```
140087656  cmp QWORD PTR [rcx+0x90],0x0
140087661  jne 0x14008769a          ; non-null -> straight return
140087663..140087687               ; log_InlineLogERROR(...,"…",0x130)  ; line 0x130
14008768d  mov rax,[rbx+0x90] / ret ; returns the (NULL) field anyway
14008769a  mov rax,[rcx+0x90] / ret
```
- Args: `rcx` = the 0x850 record from §2. Return: `*(void**)(record+0x90)`.
- Side effects: log line `0x130` (text: the standard `log_InlineLogERROR`
  "%s(%d): …" wrapper) when the field is still NULL. **No lazy construction** —
  it is a plain field read with an assert-style log, despite the name pattern.
- Player-object slot: **`record+0x90`** of the 0x850 record. In 1082 this object
  is the **relationship container**: its `[+0x98]` vtable slot is used to look a
  player up by an integer key (§4), and it is the same object for the `mate`,
  `couple` and `team` branches.
- Sibling getter `0x1400876b0` reads `[record+0x98]` with log line `0x131`
  (VERIFIED by the bytes immediately after; not used by 1082) — proves the
  0x850 record has a pair of object pointers at +0x90/+0x98.

## 4. The player-object virtual calls (slot offsets are per class)

Receiver rule (VERIFIED): the object the router passes (`param_4`, held in `r13`)
is a **wrapper**; the interface used for checking/updating is the **embedded
sub-object at `obj+0x10`**. `lea rcx,[r13+0x10]` at 0x14012f190 / 0x14012f45c /
`add r13,0x10` at 0x14012f1a9 / `lea rcx,[rbx+0x10]` at 0x14012f2c6 /
0x14012f479 / 0x14012f6a1.

### 4.1 `*vtable+0x8` — two different methods, same offset
- **(a) on the player object (0-arg getter).** Sites 0x14012f127 (`r13`),
  0x14012f25d (`rbx` = looked-up partner), 0x14012f38e (`r13`), 0x14012f3f3
  (`rbx`), 0x14012f53f (`r13`), 0x14012f63b (`rbx` = team member).
  `rcx = obj`, no other args, returns **u32 in eax**. This u32 is always consumed
  as the *subject key* handed to component 20. Name/meaning of the key
  (uid vs char id) **UNKNOWN**; it is distinct from the `+0x48` getter (§4.3).
- **(b) on component 20 (7-arg writer).** Sites 0x14012f16f, 0x14012f2a5,
  0x14012f3d6 (caller), 0x14012f43b (partner), 0x14012f683 (team member).
  `rcx=component, edx=key(=K8), r8d=v1(%u), r9d=v2(%d), [rsp+0x20]=v3(%d#5),
  [rsp+0x28]=v4(%d#6)`, followed by **five further zero-initialised argument
  slots** at 0x14012f12c-0x14012f141: `[rsp+0x30]`d, `[rsp+0x38]`d,
  `[rsp+0x40]`b, `[rsp+0x48]`w, `[rsp+0x50]`d. So the callee contract is
  `(key, v1, v2, v3, v4, 0, 0, 0, 0, 0)`. Return `eax` is **ignored** (the next
  instruction is a `jmp`).
  Side effect: whatever component 20 does with (key, v1..v4) — persistence is
  **UNKNOWN** (implementation is in Root.dll, not in MsgServer.exe).

### 4.2 `*vtable+0x10` — component-20 3-arg form (0x14012f1d5, 0x14012f30a, 0x14012f6db; player-side counterpart 0x14012f1c5/0x14012f2fa)
- Player side: called on `obj+0x10`, `rcx=obj+0x10`, **0 args, returns u32** (key).
- Component side: `rcx=component, edx=key, r8d=v1`; **v2/v3/v4 are NOT passed**
  (no stack slots are written before the call — unlike W7).
  Return ignored. Only reachable from the "other" (non `add`/`chk`) token-2 path
  and from team's non-add/non-chk path (0x14012f6ba..0x14012f6db).
- Side effect: a *reduced* update of the same component/record as §4.1(b).

### 4.3 `*vtable+0x48` — player 0-arg getter used only as a lookup key (0x14012f219, 0x14012f34e)
- `rcx = r13` (the caller object), 0 args, returns **u32**. Its result is the
  `edx` argument of the `+0x98` lookup, i.e. the **container lookup key**.
- Never called on a partner/member object; always on the acting player.
- Why it differs from `+0x8` (§4.1a): **UNKNOWN** (both are 0-arg u32 getters;
  `+0x8` supplies the *written* key, `+0x48` the *lookup* key).

### 4.4 `*vtable+0x98` — container find-by-key (0x14012f221, 0x14012f356, 0x14012f5f6)
- `rcx = container` (from §3), `edx = u32 key`; returns **object pointer or NULL**.
- No visible side effects. Mate branch treats NULL as hard failure (returns 0
  at 0x14012f22d); couple/team branches tolerate it (§6/§7).

### 4.5 `*vtable+0x2d8` — membership/flag test (0x14012f19e, 0x14012f2d4, 0x14012f46a, 0x14012f487, 0x14012f6af)
- **Receiver is always `obj+0x10`** (`lea rcx,[r13+0x10]` / `[rbx+0x10]`), never
  the raw object. `edx` = **`v1` (the `%u` token)**, nothing else.
- Returns **bool in al**; the value is returned verbatim (self/mate chk), ANDed
  across two objects (couple chk) or across all team members (team chk).
- No side effects visible; a pure predicate. What it tests is **UNKNOWN**
  (name/string of the vtable slot lives in the player class, not in this binary).

## 5. Team-path helpers (only reached with token1 == `team`)

### 5.1 `0x140118320` — cached component getter, id **0x1e = 30** (VERIFIED extent 0x140118320..0x14011839d)
Byte-for-byte the same shape as §1 but with its own cache: guard `0x140975d40`,
`edx=0x1e`, result `0x140975d38`, error line `0x451`.
- Args none, returns the singleton or NULL, logs `log_InlineLogERROR(0x451)` on NULL.
- This is the **team manager** used by 1082 (called once, 0x14012f516).
- Component 30's class lives in Root.dll → its slots are **UNKNOWN** except `+0x38`.

### 5.2 `*vtable+0x38` on component 30 — enumerate team members (0x14012f54f)
- `rcx=component30`, `edx = obj->vtable[+0x8]()` (u32 actor key), `r8 = &container`
  (`rsp+0x660`, constructed by §5.3). Returns **bool in al**.
  `false` → dtor + return **0** (0x14012f552 → 0x14012f74d → 0x14012f75c).
- Side effect: fills the caller's container with member keys.

### 5.3 `0x140035210` — container ctor (`rsp+0x660`), `0x1400344f0` — container dtor
- `0x140035210`: `rcx=&container`; allocates an **8-byte node** via `0x140511ff0`
  and stores the pointer into two of its own frame/shadow slots
  (`[rsp+0x48]`/`[rsp+0x50]` at 0x140035230/0x140035235). Read together with the
  consumer in §5.4 (which ranges the pair at `container+0x18` / `container+0x20`
  — 0x14012f565/0x14012f568 vs 0x14012f5c3), the proven facts are: a 3-qword
  begin/current/end container, node payload = one u32 key, empty state = one
  dummy node. The exact STL type and the frame offsets used by the ctor are
  **UNKNOWN** (the two stores land in the caller's shadow space, so the ctor's
  parameter convention is not proven by these bytes).
- `0x1400344f0`: `rcx=&container`, called on **every** team exit
  (0x14012f731, 0x14012f746, 0x14012f755) — teardown.

### 5.4 `0x140033360` — iterator deref, `0x1400333a0` — iterator increment
- `0x140033360(rcx=&container)` → returns `[container+0x8]` after range checks
  (`_invalid_parameter_noinfo` on violation). Used at 0x14012f5ec, then
  `mov edx,[rax]` (0x14012f5f1) = **first dword of the current node** = member key.
- `0x1400333a0(rcx=&container)` at 0x14012f6e6 advances; loop condition is
  `current < end` (`cmp rbx,rdi` at 0x14012f5c3 using `[rsp+0x678]` vs
  `[rsp+0x680]`), so it is an ordered-container iteration, keys ascending.
- Loop variable reloads at 0x14012f6eb-0x14012f70b then jumps back to 0x14012f5a3.

## 6. Per-token behaviour table (VERIFIED from the instruction stream)

Legend: `K8` = `obj->vtable[+0x8]()` u32; `K10` = `(obj+0x10)->vtable[+0x10]()` u32;
`K48` = `actor->vtable[+0x48]()` u32; `W7` = component20 `vtable[+0x8]`
(key,v1,v2,v3,v4,0,0,0); `W3` = component20 `vtable[+0x10]` (key,v1);
`P` = container from §3, `F` = `P->vtable[+0x98](K48)`; `T` = component30.

| token1 | token2 | address chain | actor/partner lookups | writes | returns |
|---|---|---|---|---|---|
| self | add | 0x14012f115-0x14012f172 | none (actor = r13 direct) | `W7(K8(actor))` | 1 |
| self | chk | 0x14012f190-0x14012f1a4 | none | none (predicate) | `(actor+0x10)->[+0x2d8](v1)` |
| self | other | 0x14012f1a9-0x14012f1d8 | `K10(actor+0x10)` | `W3(K10)` | 1 |
| mate | add | 0x14012f1fa-0x14012f2a8 | `F` with `key=K48(actor)`; NULL → **0** | `W7(K8(F))` | 1 |
| mate | chk | 0x14012f2c6-0x14012f2da | same `F` | none | `(F+0x10)->[+0x2d8](v1)` |
| mate | other | 0x14012f2df-0x14012f30d | same `F` | `W3(K10(F+0x10))` | 1 |
| couple | add | 0x14012f32f-0x14012f43e | `F` (NULL tolerated) | `W7(K8(actor))` **then** `W7(K8(F))` if `F != 0` (0x14012f3d9) | 1 |
| couple | chk | 0x14012f45c-0x14012f49d | `F` | none | `actor_chk AND F!=0 AND F_chk` (short-circuit, 0x14012f470/0x14012f477/0x14012f48f) |
| couple | other | **0x14012f4a2**-0x14012f4f4 | `F` | `W3(K8(F))` **then** `W3(K10(F+0x10))` | 1 |
| team | add | 0x14012f516-0x14012f686 | `T->[+0x38]` enumerate → per member `F(member)` | `W7(K8(member))` per member (self and NULL members skipped, 0x14012f602/0x14012f608) | 1 |
| team | chk | 0x14012f697-0x14012f739 | same | none | `r15b` = 1 AND-ed with `(member+0x10)->[+0x2d8](v1)` for every member |
| team | other | 0x14012f6ba-0x14012f6de | same | `W3(K8(member))` per member | 1 |
| team | (enumerate false) | 0x14012f74d-0x14012f75c | -- | none | 0 |
| team | (T == NULL) | 0x14012f521 | -- | none | 0 |
| any unknown token1 | -- | 0x14012f761 | -- | none | 1 (silent no-op) |

Notes proven by the encodings:
- `couple/other` is **not** a mirror of `self/other`: it performs the `W3` write
  **twice, both on the partner** (first with the raw partner's `K8`, then with the
  partner sub-object's `K10`) — 0x14012f4ad vs 0x14012f4e1. Nothing is written
  for the actor in that branch.
- `mate/other` and `self/other` add `0x10` **before** taking the key
  (`add rbx/r13,0x10` at 0x14012f2df / 0x14012f1a9), so both use `K10`.
- The `je` right after each `add reg,0x10` (0x14012f1ad, 0x14012f2e3,
  0x14012f4ca) can only fire if the object were `-0x10`; in practice it is the
  compiler's `if (obj+0x10) != 0` idiom and the following write always executes.
- There is **no DB column name, no table name and no packet id anywhere in the
  body**. The `W7`/`W3` targets are virtual; their persistence layer lives
  outside MsgServer.exe → the concrete DB column written by `add` and the flag
  tested by `+0x2d8` are **UNKNOWN** (see §8).

## 7. `id_next` vs `id_nextfail` mapping

The router (`FUN_14012a6e0`) hands the case's `al` back as `cVar1`; the queue
driver at `decompiled/MsgServer.c:223778` does:
`if (cVar1 == 0) id = item(…,2) else id = item(…,1)` → non-zero = **id_next**,
zero = **id_nextfail** (and `cmp iVar7,0x140` at C:223770 shows type 0x140 has a
hard "can not have id_next" guard — 0x140 is action 320, unrelated to 1082 but it
confirms the polarity).

| branch | return | chain |
|---|---|---|
| sscanf < 6 (0x14012f78e) | 0 | **id_nextfail** (+ DBERROR line 0x20d6) |
| self/add (0x14012f761) | 1 | id_next |
| self/chk (0x14012f1a4) | bool of `+0x2d8` | id_next if the flag is set, **id_nextfail** otherwise |
| self/other (0x14012f761) | 1 | id_next |
| mate/add with `F == NULL` (0x14012f22d) | 0 | **id_nextfail** |
| mate/add ok, mate/chk | 1 / bool | id_next / conditional |
| mate/other | 1 | id_next |
| couple/add, couple/other | 1 | id_next |
| couple/chk (0x14012f49d) | `actor && F && F.chk` | id_nextfail if either side false |
| team/add, team/other | 1 | id_next |
| team/chk (0x14012f739) | `r15b` | id_nextfail if any member's `+0x2d8` is false (or the actor's `+0x8` key was not enumerable → 0) |
| team, component30 NULL (0x14012f521) | 0 | **id_nextfail** |
| unknown token1 | 1 | id_next (silent success) |

## 8. Open items / risks (explicit UNKNOWN)

1. **Semantics of the payload.** `v1..v4` are passed to component 20 keyed by a
   player id, but no table/column is named in this binary. The DB column read by
   `chk` and written by `add` is **UNKNOWN** from MsgServer.exe alone; it must be
   resolved in Root.dll (component 20's class) or from `cq_*` schema evidence.
2. **`K8` vs `K48`.** Two different 0-arg u32 getters exist on the same object;
   `K8` keys writes, `K48` keys the container lookup. Which one is the
   `user_id`/char-id is **UNKNOWN**; they are *proven different slots*.
3. **Team enumeration key** comes from the first dword of the container node
   (0x14012f5f1), i.e. the same value space as `K8` (component 30 was queried with
   `K8(actor)`); mixing with `+0x98` lookups implies team ids and container keys
   share a space — plausible but **not proven**.
4. **NULL `0x140008520` result is unchecked** at all three 1082 call sites
   (0x14012f204, 0x14012f339, 0x14012f5d6): an out-of-range `[r12+0x48]`
   dereferences NULL in the original (crash), so a faithful reimplementation
   should treat `[r12+0x48]` outside `14 .. count-1` as a hard error rather than
   a soft fail.
5. **No socket write occurs in 1082.** Unlike most actions, this one emits no
   response packet from the case body itself; any client-visible effect must be
   produced by component 20 inside Root.dll → **UNKNOWN**, and a reimplementation
   that sends nothing is byte-faithful at this layer.
6. Correction to `worker_v122_1082.md` §1: `couple/other` lands at **0x14012f4a2**
   (not 0x14012f4f4 — that is only its final `jmp`), and it issues two writes to
   the partner, not a single mirrored write.
