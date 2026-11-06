# Worker v124 — 0x14038E270, the spawn entry called by action 2009 (0x7D9)

Binary: ../conquer_source/Source/MsgServer.exe (PE32+, imagebase 0x140000000).
Caller: case body 0x140147CE6 (docs/worker_v123_2009.md); spawn call **0x140147FEF `mov dl,1` / 0x140147FF1 `call 0x14038E270`**,
rcx = `[rsp+0x130]` = the NPC object returned by the 0x1002 attribute query.
Callee span **0x14038E270–0x14038E4BB** (0x24B bytes; next function at 0x14038E4C0). Frame `sub rsp,0x4B0` + GS cookie.
Source: 0x14075D590 = "f:\version\cqserver-78.0.11-1204\msgserver\mapgroupkernel\ainpc.cpp"; log line 0x9CD (2477).

Method: `objdump -d -M intel` on the exact VA ranges, plus raw .rdata/.data/.idata reads (strings, import names).
Each fact carries its address. Anything not shown by an instruction/string is marked UNKNOWN.
Complete call inventory of 0x14038E270 (nothing else is called): 0x140362560 (msg ctor), 0x140362620 (10010 builder),
0x1403625E0 (msg dtor), 0x140008520 (CMapGroup::GetMapGroup), 0x14008ABF0 (byte getter `[+0x69E]`),
0x1400875F0 (m_pRoleManager accessor), 0x1403878E0 (secondary notify), CQBase log import, CQBase ordinal import, cookie.
**No 10014 / 10025 / 1101 builder and no direct user-send helper exists in this function.**

## 1. What it does to the element / the map (VERIFIED)

Prologue: 0x14038E2A2 `movzx ebx,dl` (bool arg), 0x14038E2A5 `mov rsi,rcx` (the object).

- **0x14038E2A8** `cmp dword [rcx+0x154],0` / `je 0x14038E2E0` — if `[obj+0x154] != 0` it logs and returns
  **touching nothing**: 0x14038E2B1 `[rsp+0x20]=0x9CD`, r9 = 0x14075D590 (ainpc.cpp), r8 = 0x14075E398 ("!IsDeleted()"),
  rdx = 0x1406D9CA4 ("CHECK"), rcx = 0x1406D9C10 ("¡í%s(%s)¡í in %s, %d"), `call [0x1406D8348]` = CQBase.dll
  `log_InlineLogERROR`, then 0x14038E2DB `jmp 0x14038E493` (epilogue).
  => **obj+0x154 is the "live/already spawned" stamp; spawn is not idempotent.** (Same field the caller filters at 0x140147FE2.)
- **0x14038E2E0** `mov ebp,6`; **0x14038E2E5** `cmp qword [rcx+0x80],0` / je → if `[obj+0x80]` non-null, calls its
  virtual `[vtable+0x60]` with edx = **6**, r8d = 0 (0x14038E2EF-0x14038E2FE). Slot is dynamic → callee UNKNOWN
  (some reset/notify on a child object).
- **0x14038E301** `mov edi,0xA` (default 10); **0x14038E306** `mov ecx,[rsi+0x168]` → `call 0x140008520`
  (CMapGroup::GetMapGroup — so **obj+0x168 = map group id**) → **0x14038E311/0x14038E314** `call 0x14008ABF0`,
  a 2-instruction getter `mov al,[rcx+0x69E]; ret` → `test al,al` / **0x14038E31B** `cmovne edi,ebp`
  => **state = (mapgroup->byte[+0x69E] ? 6 : 10)** (meaning of +0x69E: UNKNOWN).
- **0x14038E337** `mov [rsi+0x150],edi` => **writes obj+0x150 = 6 or 10** (state / AI-mode field).
- **0x14038E33F** `call [0x1406D8350]` (CQBase.dll ordinal import; divided by 1000 by the reciprocal multiply
  `0x10624DD3` / `shr edx,6` at 0x14038E348-0x14038E350) → **0x14038E353** `mov [rsi+0x154],edx`
  => **writes obj+0x154 = now (seconds)**, i.e. the guard/filter field, stamped *before* the packet leaves.
  (Import semantics — ms tick vs. other counter — UNKNOWN; only the /1000 is certain.)
- Out-of-range path: **0x14038E471** `mov [rsi+0x150],edi` (edi still 0xA → always **10** here) and
  **0x14038E48D** `mov [rsi+0x154],edx`. Both paths stamp 0x150 and 0x154; those are the **only** `[rsi+…]` writes.

**No container/list insertion occurs inside 0x14038E270** — no link, prev/next or bucket-store instruction. Map/role work is
delegated: **0x14038E3FE** `call [mapgroup vtable+0x30]` (with edx=0, r8=&10010) and **0x14038E469**
`call [roleMgr vtable+0xC0]` with edx = obj type id (roleMgr = `0x1400875F0(mapgroup)` = `CMapGroup+0x88`); both slots are
resolved at runtime (no .data qword equals 0x1400875F0, so vtable identity is runtime-assigned) → slot semantics UNKNOWN.
So the port-visible effect of the spawn is: **stamp 0x150/0x154 + emit 10010 action 135 + delegate to mapgroup/roleMgr slots.**

## 2. What the bool arg (dl = 1) selects (VERIFIED)

**0x14038E43E** `test bl,bl` / `je 0x14038E471` — the only read of the bool, and it happens **after** the type-range test.

Type test (on every path): **0x14038E31E-0x14038E324** `call [obj vtable+0x8]` (object type id) →
**0x14038E327** `add eax,0xFFF5519F` (== `type − 0x9EAE`) / **0x14038E32C** `cmp eax,0x1869E` / `ja`
=> accepted range **type ∈ [0x9EAE, 0x9EAE+0x1869E] = [40622, 140620]**. Same test inlined at 0x14038E35F, 0x14038E386,
0x14038E417 (and 0x14038798B in the notify callee). This `[vtable+0x8]` id is exactly what the caller compares with token 1
(0x140147F37) and what goes into the 10010 as the actor (§3).

| | **dl = 1 (what action 2009 passes)** | dl = 0 |
|---|---|---|
| type in [0x9EAE, +0x1869E] | 0x14038E40F `jne 0x14038E434` → **0x14038E437 `call 0x1403878E0`** (secondary notify, §3 packet B) | 0x14038E411-0x14038E432: only if `[obj+0x148]==2` → 0x14038E437; otherwise straight to epilogue 0x14038E493 (**no packet**) |
| type outside range | 0x14038E442-0x14038E469: GetMapGroup([obj+0x168]) → 0x1400875F0 → `roleMgr->[0xC0](type)`; **no packet** | 0x14038E471: 0x150=10, 0x154=now_s; **no packet** |

=> **dl is not spawn-vs-despawn; it is "announce vs silent".** dl=1 = real spawn from the action system: accepted types get
the client message (+ packet B), out-of-range types get role-manager registration only. dl=0 = silent/passive registration
(no action message; only `[obj+0x148]==2` still calls 0x1403878E0). For a 2009 port only the **dl=1** column matters.

Independent branch on `[obj+0x148]` (read here, never written): 0x14038E36E-0x14038E37A `==1` → `jne 0x14038E40D`
**skips packet A**; 0x14038E395-0x14038E3A1 `==2` → also 0x14038E40D. => packet A is emitted only when
`[obj+0x148] ∉ {1,2}`.

## 3. Packets the client sees (VERIFIED)

**Packet A — 10010 (CMsgAction), action 135 (0x87), sent through the map group.** Emitted at 0x14038E3A3-0x14038E402.
- 0x14038E3A8 `call 0x140362560` = ctor of a ~0x430-byte CMsgAction at `[rsp+0x50]` (vptr 0x140757BF8; payload ptr
  `[msg+0x428]`). Dtor `0x1403625E0` at 0x14038E408.
- Args: 0x14038E3AE `mov edi,0x87` → 0x14038E3C8 `mov word [rsp+0x28],0x87` (**action = 135**); 0x14038E3CD
  `mov word [rsp+0x20],0`; 0x14038E3C0/0x14038E3C4 `dword [rsp+0x38]=0`, `[rsp+0x30]=0`; 0x14038E3B5-0x14038E3BE
  `edx = obj->[vtable+0x8]` (**object type/id → 10010 actor**); r8d = r9d = 0 (0x14038E3D2/D5).
- 0x14038E3DD `call 0x140362620` = builder: size field `0x26` (0x140362651), id `0x271A` = **10010** (0x140362658),
  actor u32 → payload+0x4 (0x140362687), u16 args → +0x18/+0x1A (0x140362691/0x140362695), **action word 0x87 = 135 →
  payload+0x16** (0x1403626A7), +0x14 (0x1403626D8), +0x8 (0x1403626BB), +0x10 (0x1403626C9), tick (0x140362665/…670).
  (Repo cross-check: CHANGELOG.md:496 / :1368 already identify FUN_140362620 as the 10010 builder.)
- Delivery: 0x14038E3E2 `test eax,eax; je 0x14038E403` → **0x14038E3E6** GetMapGroup([obj+0x168]) → `r9=[mapgroup]`,
  0x14038E3F4 r8=&msg, 0x14038E3F9 `xor edx,edx` → **0x14038E3FE `call [r9+0x30]`** = CMapGroup slot +0x30 with
  (mapgroup, 0, &msg). Argument shape says group-wide dispatch, but slot +0x30 is runtime-resolved → **"broadcast to all
  users in the map group" is INFERRED, not proven.** No per-user/self channel is used here.

**Packet B — second 10010 action 135 from 0x1403878E0** (dl=1 and accepted range only; 0x14038E437).
- 0x140387911/0x140387918 guard `[obj+0x158]` (non-zero → return 1, nothing sent); 0x14038791E `[obj+0x158]=1`;
  0x14038792D ctor; 0x140387933 `mov ebx,0x87` → 0x14038794D `word [rsp+0x28]=0x87` (**10010 action 135** again);
  0x140387962 `call 0x140362620` (edx = obj->[vtable+0x8]).
- **0x140387977/0x14038797B `call [obj+0x10]->[vtable+0x348]`** with rcx = obj+0x10, rdx = &msg, r8b = 1 → first send.
- 0x140387987-0x140387995 type-range test; if accepted: 0x14038799F `call [obj+0x10]->[vtable+0x2B0]` → if non-null,
  0x1403879B2-0x1403879C4 `[[ret+0x10] vtable+0x350]` (rdx = &msg) → forwarded copy. Return value is always 1
  (0x1403879D5 / 0x1403879D9).
- Both destinations are dynamic slots → **the transport of packet B is UNKNOWN**; what is proven is that it is a second,
  independent 10010 action 135 built with the same actor/args, sent via obj+0x10 slot +0x348 (and forwarded to +0x350).
- Note: 0x14038E2E5 and this function both key off `[obj+0x158]`/`[obj+0x80]`; 0x158 is written **only** in 0x1403878E0
  (0x14038791E) inside this path set → **0x158 = "already announced" latch, so packet B fires at most once per object.**

## 4. Exact caller filter order to reproduce in a port (VERIFIED, case body 0x140147CE6)

Container: the CMapGroup's role-manager tree (`CMapGroup+0x88`, accessor 0x1400875F0); begin/end via
`roleTable->[+0x30]` then `[+0x10]`/`[+0x18]` (0x140147DAA-0x140147DD7); loop `it != end`, inlined _Tree successor
(0x140147DEB-0x140147ED1). **No early exit on a hit**; `sil` = "at least one spawned", returned at 0x140147FFE/…8001.

Per element, strictly in this order (any failure → `jne 0x140147DC1` = next element):
1. **0x140147ED3/0x140147E5C** element pointer non-null (`test rdi,rdi; je`).
2. **0x140147EEC/E0EEF** `[elem vtable+0x298](elem, 0x1002, &out@rsp+0x130)` must return true → object must expose
   attribute **0x1002 (4100)**; `out` is the NPC object used from here on.
3. **0x140147F05/0x140147F0D** `out->[0x10]->[vtable+0x78]()` != 0 (alive/valid).
4. **0x140147F28-F37** `out->[0x10]->[vtable+0x160]()` → `->[vtable+0x8]()` **== token 1 (`%u`)**: type id.
5. **0x140147F4F-F52** `out->[vtable+0x50]()` **== token 2 (`%u`)**.
6. **0x140147F67 / 0x140147F76** only if token 3 (`%d`) != 0: `0x1401178A0(out)` (asserts `[out+0x80]`, then
   `[out+0x80]->[vtable+0x10](0xB)`; file line 0xFD = 253) **== token 3**.
7. **0x140147F83-0x140147FD4** only if the `%s` buffer is non-empty (`repne scasb` strlen+1 != 1): inline `strcmp(token4,
   out->[0x10]->[vtable+0x18]())` must be 0 (element name at the sub-object's vtable slot +0x18).
8. **0x140147FDE-FE9** `out->[0x154] == 0` (not already live).
9. **0x140147FEF/0x140147FF1** `0x14038E270(out, 1)`; **0x140147FF6** `sil = 1`; continue the loop.

Parse failure (<2 tokens) → 0x140147D59 error/return path via 0x140148AA6. Success → 1, else 0.

## UNKNOWN (not provable from this function)
- Meaning of obj+0x150 = 6/10 and of mapgroup byte +0x69E.
- Semantics of mapgroup vtable +0x30, role-manager vtable +0xC0, obj+0x10 slots +0x348/+0x2B0/+0x350 (all dynamic).
- Exact names/enums for attribute 0x1002 and for `[obj+0x148]` values 1 and 2; meaning of obj+0x168 vs map id beyond
  being passed to GetMapGroup.
- Whether the CQBase ordinal at 0x1406D8350 is a millisecond tick (only the /1000 is certain).
