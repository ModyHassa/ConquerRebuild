# Worker v125 — CStatusMgr (provider 0x14) slots behind 1043 / 1096 / 1098

Bases: **Status.dll ImageBase 0x1416b0000** (PE optional header, verified), **MsgServer.exe 0x140000000**.
`.text` RVA 0x1000, size 0x2639e. RVA = VA − ImageBase. Every fact below is disassembly-backed;
anything not proven is marked **UNKNOWN**. v124 facts 1–6 stand (registration 0x1416b1217,
vftable 0x1416da0f8, class `status::CStatusMgr`).

## Fact 1 — CStatusMgr vtable, Status.dll VA 0x1416da0f8 (RVA 0x2a0f8)
```
+0x00 0x1416bfa80   +0x50 0x1416bdd80   +0xa0 0x1416bf7f0   +0xf0 0x1416bf0c0
+0x08 0x1416be020*  +0x58 0x1416bdf80   +0xa8 0x1416bf940   +0xf8 0x1416b7330
+0x10 0x1416be330*  +0x60 0x1416be580   +0xb0 0x1416bee40   +0x100 0x1416c0f80
+0x18 0x1416be450   +0x68 0x1416bf740   +0xb8 0x1416bef80   +0x108 0x1416bdf20
+0x20 0x1416be890   +0x70 0x1416be6d0   +0xc0 0x1416bf390   +0x110 0x1416bfd30
+0x28 0x1416be9c0*  +0x78 0x1416be7e0   +0xc8 0x1416b7390   +0x118 0x1416bfb70
+0x30 0x1416beaf0   +0x80 0x1416bed80   +0xd0 0x1416b73b0
+0x38 0x1416beba0   +0x88 0x1416bf520   +0xd8 0x1416b73e0*  (* = requested slot)
+0x40 0x1416becd0*  +0x90 0x1416bf5e0   +0xe0 0x1416bf220
+0x48 0x1416bdd10   +0x98 0x1416bf690   +0xe8 0x1416bf450
```
Small slots (+0xc8..+0xf8) are in the 0x1416b73xx page — the same page as the registration site,
i.e. the cheap "interface" methods that MsgServer uses.

## Fact 2 — object layout (ctor 0x1416c0ed0, RVA 0x10ed0)
```
+0x00 vftable 0x1416da0f8            (lea rax,[rip+0x19201])
+0x08 0                                (pointer to a consumer/provider, tested in +0x8)
+0x10 sub-object #1, ctor 0x1416c0d50  std::map<key=int, value=CStatusData-ish>  (node key +0x18, value +0x20)
+0x50 sub-object #2, ctor 0x1416c0dd0  std::map<key=int(nType), value=ptr>       (used by +0x8)
+0x90 map<OBJID, CUserStatus*>          built by the factory 0x1416c1c80 (size 0x98)
```
Corroborating strings in Status.dll .rdata: `pUserStatus` (VA 0x1416d9e98), `it != m_mapUserStatus.end()`
(0x1416d9ea8), `szStatus` (0x1416d9ec8), `pStatus` (0x1416da368), `CStatusMgr::OnRoleLogout` (0x1416d9d98),
`CStatusMgr::ClearFlowerSuitStatus` (0x1416d9e68) — all under `modules\status\src\statusmgr.cpp`.

## Fact 3 — slot **+0xd8** = 0x1416b73e0 (RVA 0x73e0): "has status, state == 3" test
```
1416b73e0 sub rsp,0x28
1416b73e4 cmp edx,-1      ; arg id
1416b73e7 jle  -> return false
1416b73e9 mov rcx,[rcx+0x90]      ; m_mapUserStatus (this+0x90)
1416b73f0 call 0x1416c2e20        ; find CUserStatus whose GetID()==id (assoc_lookup: node key
                                  ;   at +0x20, compares (*[node+8])->vtbl+0x10 -> (*obj)->vtbl+0x48)
1416b73f5 test rax,rax ; je -> false
1416b73fa mov rcx,rax
1416b7401 jmp 0x1416c1ed0         ; tail call
0x1416c1ed0: rcx=[rax+8]; rax=[rcx]; call [rax+0x10](rcx,2)
             rax=obj; rdx=[rax]; call [rdx+0x48](); return (eax == 3)
```
⇒ `bool CStatusMgr::HasStatus(OBJID id)` — **bool**, no side effects, **no DB**.
Semantics proven as: record exists **and** the record's inner note (`[CUserStatus+0x8]` chain, slot
+0x48) returns **exactly 3**. What value 3 means (an enum, e.g. "applied/active") is **UNKNOWN**;
the callers use it purely as the "already has it" predicate.

## Fact 4 — slot **+0x8** = 0x1416be020 (RVA 0xe020): ADD status (the big one)
Signature recovered: `bool (this, int actorId /*edx*/, int nType /*r8d*/, int p1 /*r9d*/,
int p5, int p4, int p2, int p3, char p6, short, int)` — 11 args, 7 on stack.
Structure: 1) `[rcx+0x8]` provider-capability probe; 2) `std::map::find` on **this+0x10** by key
(0x1416bc5a0, compares node key +0x18) → per-type **CStatusData** record;
3) inserts a new node if absent (0x1416bc670); 4) calls 0x1416b4990(record, nType, p1, p5, p6)
= append one CStatus entry; 5) when `[rcx+8]` is a provider it does the capability check
`(*[this+8])->vtbl+0x98(nType)` first (0x1416be1fd..0x208) and bails out with false if denied.
Id-range guards: `lea eax,[rdx-0xf4240]` (0x1416be055) keeps OBJIDs >= 1000000 (player space);
the second test (0x1416be1d9) `lea eax,[rdx-0xdbba1]; cmp eax,0x1869e; ja continue` makes ids
900001..999999 (monster/pet space) return false immediately.
**Persistence: YES in the OS-status branch.** At 0x1416be1cf it tail-calls **0x1416ce7f0 =
CUserStatus::AppendOSUserStatus(this, rec*, flag)**, whose body is:
```
1416ce851 CHECKF [rcx+0xc0]      (0x1416ce85b, line 0x8b=139)
1416ce88c CHECKF [rcx+0xb8]      (line 0x8c)
1416ce8a4 (*[rcx+0xc0])->vtbl+0x88(role, [rec+8])    ; capability probe
1416ce8e5 0x1416c2e20 (lookup CUserStatus by role)
...
1416ceea2 call DB.dll!InstanceGet   (IAT 0x1416d8060, import #0)
1416ceeab lea rdx,[rip+..28ce] = VA 0x1416db180  => "cq_status"
1416ceeb5 (*table)->vtbl+0x20(name) ; 0x1416b6760(rec, table)  = INSERT/UPDATE
```
`AppendOSUserStatus` error paths: `CUserStatus::AppendOSUserStatus statue type repeat.` (0x1416db190),
`... create record failed.` (0x1416db148), `... catch user[%d] attach statu[%d]` (0x1416db0c0).
Other DB sites in the module (all four `DB.InstanceGet` call sites):
0x1416c36ca `SELECT * FROM cq_statustype` (0x1416da468), 0x1416ca81b `cq_status`,
0x1416cba37 `SELECT * FROM cq_status WHERE owner_id=%lu` (0x1416db3c0), 0x1416ceea2 (above).
⇒ **add → table `cq_status`**; type metadata → table `cq_statustype`.

## Fact 5 — slot **+0x10** = 0x1416be330 (RVA 0xe330): per-user status by code
```
1416be330 test edx,edx ; je -> return         ; arg uid (0 ⇒ no-op, falls to epilogue)
1416be358 add rcx,0x10 ; call 0x1416bc5a0     ; find in this+0x10 map by key=uid
1416be3b0 mov rcx,[rbx+0x20]                  ; node value = per-user container
1416be3b9 mov edx,esi (r8d = code) ; call 0x1416c9220
1416c9220 -> 0x1416c9120 (find in map at [this+0x30], key node+0x18 = code)
          -> 0x1416cacd0 (record op, 0x470-byte frame; CHECKF [rcx+0xc0] line 0x1f4=500)
1416be3c2 (record absent) -> insert path, then 0x1416cacd0 likewise
```
⇒ `void CStatusMgr::ApplyUserStatusCode(uid, code)` — finds the **CUserStatus record for uid** and
applies/dereferences **code** (in 3701 code = 0x56). No `DB.InstanceGet` inside 0x1416c9220 /
0x1416cacd0 head; persistence of this path is **UNKNOWN** (reaches no DB site directly).
Note the arg check `test edx,edx; je` ⇒ uid 0 is a silent no-op.

## Fact 6 — slot **+0x28** = 0x1416be9c0 (RVA 0xe9c0): collect status types of a user
```
1416be9c0 test edx,edx ; je ret                    ; arg uid
1416be9d5 lea eax,[rdx-0xf4240]; cmp eax,0xee5be5bf; ja -> **this+0x50** lookup (other id space)
1416be9ec <else> this+0x10 lookup (0x1416bc5a0)
1416bea48 rcx=[node+0x20]; test; je ret
1416bea64 jmp 0x1416cd560
```
0x1416cd560 (RVA 0x1d560): allocates a `std::vector<int>` (guard 0xfffffffffffffffe, begin/end/cap at
[rsp+0x68..0x78]) and walks the record's inner map (`[r13+0x30]` header, key `[node+0x18]`), applying a
**jump table by status type** (`lea r15,[rip-0x1d5dc]` = table at 0x1416b0000+0x1d8f0/0x1d8f8, range
type−5 .. 0x7d), pushing each accepted type id with `push_back` (`mov [rsi],edx`, 0x1416cd686).
⇒ `int[] CStatusMgr::GetStatusTypes(uid)` — **enumeration/collect**, returns a vector of status type ids;
no DB. (3701 is documented as using +0x10, not this slot; callers of +0x28 outside the 1xxx range UNKNOWN.)

## Fact 7 — slot **+0x40** = 0x1416becd0 (RVA 0xecd0): CLEAR one status type of one user
```
1416becd0 test edx,edx ; je ret                     ; arg uid
1416bece6 cmp (uid-0xf4240),0xee5be5bf ; ja -> ret  ; id-space guard only
1416becf6 lea rbx,[rcx+0x10] ; call 0x1416bc5a0     ; find this+0x10 by uid
1416bed5d rcx=[rbx+0x20] ; test; je ret ; call 0x1416cdcf0
0x1416cdcf0 (RVA 0x1dcf0): same vector walk, jump table at 0x1416b0000+0x1e070/0x1e078,
        range type−5 .. 0x9f, per-type handler then erase (Erase Status(%d) User(%d) Catch
        @%s,%d, VA 0x1416db248)
```
⇒ `void CStatusMgr::ClearStatusType(uid, nType)` — **clear/erase**; this is the family of
`CStatusMgr::ClearFlowerSuitStatus` (0x1416d9e68). No DB call in the body ⇒ clear is memory-only;
the persist of a clear happens elsewhere (UNKNOWN which site).

## Fact 8 — 1096, MsgServer.exe body 0x140137fa5 (RVA 0x137fa5)
Format = `"%d %d %d %d %d %d"` at 0x14070e050 (6 tokens). Stack slots (token → slot):
t1=+0x2b8 t2=+0x220 t3=+0x218 t4=+0x184 t5=+0x228 t6=+0x210.
- `if (sscanf(...) < 6) → log + fail` (0x14013802c `cmp eax,6`).
- **t2..t6 must be ≥ 0** (five `cmp [..],0 / jl fail` at 0x14013805a..0x9a). **t1 has no check.**
- `r12d = (*(*[r15]))[0x10](4)` then `(*r12)->[0x48]()` = 0x1401380a0..0xb7 → **target id**
  (a provider-object lookup by id 4 whose slot +0x48 yields the id; the provider behind id 4 is
  **UNKNOWN** here — it is *not* provider 0x14).
- `mgr = *0x1401181a0` — a cached **provider 0x14** getter: `CGame->vtbl+0x20(0x14)` cached in a
  function-local static (0x1401181c9 edx=0x14), CHECKF line 0x3f6=1014.
- `if (mgr->vtbl[0xd8](id))` → **the 'has' test (Fact 3)** → then `0x140165da0` gate, allocate a
  16-byte record {0, id, (*[r13])[8](), t4} and `0x140165e10` → result bool.
- `else` → `mgr->vtbl[0x8]( id, targetId, t1, t5, t4, t2, t3, (char)t6, 1, 0 )` at 0x1401381d0 and
  **that return value is the action result**.
⇒ 1096 = "grant status": if the target already has it, take the check/apply path (0x140165e10),
otherwise **add** it via +0x8 with the six parsed ints as buff parameters and return the add's bool.
**The six ints are for the +0x8 add call only** — and t3 is the *duration*: in +0x8 the record field
[rsp+0x60] is computed as `_time64(0) + arg8(t3)` (0x1416be116..0x125), i.e. an absolute expiry
timestamp. Field map of the record +0x8 builds at [rsp+0x48] (args: arg2=edx=actorId, arg3=r8d=targetId,
arg4=r9d=t1, arg5=t5, arg6=t4, arg7=t2, arg8=t3, arg9=t6, arg10=(short)1, arg11=0):
`rec+0x00=0, +0x04=actorId, +0x08=targetId, +0x0c=t1, +0x10=computed flags byte,
+0x11=(char)t4, +0x14=t2, +0x18=now+t3, +0x1c=t5+1, +0x20=t6, +0x24=0` (base [rsp+0x48],
arg5 at [rsp+0xc0] . . . arg11 at [rsp+0xf0], i.e. 11 args). Exact game meaning of t1/t2/t4/t5/t6 = **UNKNOWN** (t5+1 looks like a
stack count, t3 a seconds duration — both proven by the arithmetic, not by names).

## Fact 9 — 1098, MsgServer.exe body 0x140138322 (RVA 0x138322)
Format = `"%d %d ... %d"`, **15 ints**, at 0x14070e020; parsed into a contiguous int array at
rsp+0x4c0 (first slot also used as the count scratch). `lea ecx,[rax-1]; cmp ecx,0xe; ja fail`
⇒ 1..15 tokens accepted. `memset(rsp+0x4c4, 0, 0x38)` first (0x140138333).
- `edi` = **the action's `data` column** = mode: `(*(*[r15]))[0x10](4)->[0x48]()` (0x140138340..356),
  same lookup as 1096.
- `rbx = count`, `edx = ids[k] = [rsp+r14*4+0x4c0]`.
- mode == 0 (0x14013849e): `for k: if ((*[r13+0x10])->vtbl[0x2d8](ids[k])) return true;` → **OR
  reduction, first hit wins**, else false. The **has-test here is slot +0x2d8 of the actor's
  sub-object [r13+0x10]**, *not* CStatusMgr+0xd8.
- mode == 1 (0x140138443): `for k: if (has(ids[k])) { mgr2->vtbl[0x10]( actorId, ids[k] ); }` where
  `actorId = (*[r13])[8]()` and `mgr2 = provider 0x14` (0x1401181a0) — the loop **does not break**:
  every listed id that the has-test accepts gets +0x10 applied; the function then returns **true**
  unconditionally (0x140138497 `mov al,1`). (v122's "first existing entry and records it" is
  superseded: no early exit in the disassembly.)
- mode ≥ 2 (0x140138437 `cmp edi,1 / je`; other values) → returns false (0x14013843c).
⇒ 1098 = "does the actor hold any of these status types" (mode 0, stateless probe) or "revoke/refresh
every held one of these types" (mode 1, via +0x10) — the *client* only sees the deny/allow result
(mode 0) or the generic result (mode 1); 1098 sends nothing itself.

## Fact 10 — what the client sees
Neither body writes a packet. The effect reaches the client only through the CStatusMgr operations:
+0x8 ends in `CStatusData`/`CUserStatus` record mutation and (OS-status branch) the `cq_status` row;
+0x10 mutates the per-user record. The status push to the client is done by the Status module's own
bundle (`Status::CMsgLogIn::Process` 0x1416d7178 / `Status::CMsgSuitStatus::Process` 0x1416d722e,
CMsgAction family), i.e. on the next login/suit-status sync — the exact wire packet for a live
mutation is **UNKNOWN** from these two bodies.

## UNKNOWN list
- meaning of the value 3 compared in +0xd8 (Fact 3);
- provider id 4 object used to obtain the target id in 1096/1098 (0x1401380a6 / 0x140138346);
- which vtable slot of `[actor+0x10]` is +0x2d8 (1098 has-test) and its owner class;
- persistence of +0x10 (code apply) and +0x40 (clear) — no `DB.InstanceGet` in their bodies;
- game meaning of 1096 tokens t1, t2, t4, t5, t6 (t3 = duration in seconds is proven by `now + t3`).
