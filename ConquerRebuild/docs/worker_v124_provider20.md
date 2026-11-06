# Worker v124 — WHO registers provider id 0x14 (20) in Root.dll's CGame

Continuation of `worker_v123_component20.md` (facts 1–6 there stand). All addresses are VAs
(image bases: root.dll 0x141670000, Family.dll 0x140d30000, Status.dll 0x1416b0000).
Tools: capstone 6.0.0 + manual PE section mapping.

## Fact 1 — the registration slot is CGame vtable **+0x18 (slot 3) = 0x141677e20**
CGame primary vtable 0x141681bd8, slots 0..5 (v123 fact 3):
```
+0x00 -> 0x141671760                    +0x18 -> 0x141677e20   <== REGISTER PROVIDER
+0x08 -> 0x14167b260 (list loader)      +0x20 -> 0x141676e70   (the GETTER of v123 fact 3)
+0x10 -> 0x14167b530 (list loader)      +0x28 -> 0x141677e70   (thunk -> 0x141677e20, 2nd iface)
```
0x14167b260 / 0x14167b530 walk their own container at `CGame+0x88` / `CGame+0x118` and are file
list loaders, **not** the provider registrar. Both registration entry points (0x141677e20 primary,
0x141677e70 thunk) converge on the same routine.

`CGame::RegisterProvider` @0x141677e20 (0x141677e20..0x141677e6f):
```
141677e2f: mov %r8,%rdi             ; rdi = arg3  = provider object
141677e32: mov %edx,%ebx            ; ebx = arg2  = provider id
141677e34: mov %edx,[rsp+0x20]      ; pair.first  = id
141677e38: mov %r8,[rsp+0x28]       ; pair.second = object
141677e40: lea 0x30(%rsp),%rdx      ; &out iterator
141677e45: lea 0x20(%rsp),%r8       ; &pair
141677e4a: add $0x18,%rcx           ; *** map object is at CGame+0x18 ***
141677e4e: call 0x1416770f0         ; std::_Tree::insert_unique
141677e53: mov $1,%al
141677e55: test %ebx,%ebx ; jne 0x141677e60
141677e59: mov %rdi,0x1e8(%rsi)     ; if (id == 0) m_pDefaultProvider = object
141677e60..6f: epilogue, ret        ; returns true (1) always
```
=> `bool CGame::RegisterProvider(unsigned int id /*edx*/, void* pProvider /*r8*/)`, `this` in rcx.

## Fact 2 — refinement of v123 fact 3: map object base is **CGame+0x18**, `_Myhead` value at **CGame+0x48**
Both accessors touch the same head node field:
- getter 0x141676e84: `mov 0x48(%rcx),%rbx`  (rcx = CGame)  -> tree head
- inserter 0x1416770f0: `mov 0x30(%rcx),%rdi`(rcx = CGame+0x18) -> CGame+0x48, same head
So the container is one and the same `std::map<unsigned int,void*>`: **map at CGame+0x18**, its
`_Myhead` (tree header node) stored at map+0x30 = CGame+0x48 (i.e. a map with debug/iterator
proxy members in front). Node layout used by both: key `+0x18` (u32), value `+0x20` (ptr),
left `+0x0`, right `+0x10`, colour `+0x29` — MSVC `std::_Tree` node.
=> v123 fact 3's "map at CGame+0x48" is only the head pointer; the map starts at CGame+0x18.
Insert is `insert_unique` (0x1416770f0 compares keys with `setb`), so re-registering an id is a
no-op (first registration wins).

## Fact 3 — `mov edx,0x14` + `call [reg+0x18]` occurs in exactly ONE DLL: **Status.dll**
Two independent scans over every `.dll` in `../conquer_source/Source/`:
1. raw byte scan for `BA 14 00 00 00` followed within 24 bytes by `FF /2 18` (call [r+0x18]) on all
   34 module DLLs incl. Family, Trade, Storage, Booth, Title, Relation, Wanted, Guide;
2. linear capstone disassembly of each `.text`, tracking the last `mov edx,imm` before every
   `call qword ptr [reg+0x18]`.
Both return one and only one `0x14` site: **`Status.dll` @0x1416b1217**. (Trade=0x17, Booth=0x1b,
Family=0x8, Guide=0x10, Title=0xe, Relation=0x20, Wanted=0x1f, Storage=0x12 — none is 0x14.)

## Fact 4 — the Status.dll registration site (control-flow proven)
`Status.dll ModuleCreate` @0x1416b1490:
```
mov %edx,%ebx (module id) ; mov %rcx,%rdi (CGame*) ; mov $0x840,%ecx ; call operator new
call 0x1416b13f0        ; CStatusModule::CStatusModule(this, CGame* rdx, int id r8d)
                        ;   0x1416b1430: mov %rbx,0x420(%rdi)  => [this+0x420] = CGame*
call 0x1416b1190        ; CStatusModule::Init(this)  <-- registration happens inside Init
```
`CStatusModule::Init` @0x1416b1190:
```
1416b1199: call 0x1416c1c80          ; factory: operator new(0x98) + CStatusMgr ctor 0x1416c0ed0
1416b119e: mov %rax,0x428(%rbx)      ; m_pStatusMgr = new CStatusMgr
1416b11a5: test %rax,%rax ; jne 1416b11dc
           CHECKF(m_pStatusMgr): msg "m_pStatusMgr" (0x1416d8468), file
           f:\version\cqserver-78.0.11-1204\modules\status\src\module.cpp (0x1416d83d0),
           macro "CHECKF", line 0x35 = 53
1416b11dc: rcx=[rbx+0x420] (CGame*) ; edx=0x3ea (1002) ; r8=rbx ; call [rax+8]
1416b11f1: rcx=[rbx+0x420]          ; edx=0x816 (2070) ; r8=rbx ; call [rax+8]
1416b1206: mov 0x420(%rbx),%rcx      ; rcx = CGame*
1416b120d: mov 0x428(%rbx),%r8       ; r8  = m_pStatusMgr
1416b1214: mov (%rcx),%rax           ; rax = CGame vtable
1416b1217: mov $0x14,%edx            ; edx = 20
1416b121c: call *0x18(%rax)          ; CGame::RegisterProvider(20, m_pStatusMgr)
1416b121f: mov $1,%al ; ret          ; Init succeeded
```
=> **`Status.dll` is the module that registers provider id 0x14 (20); the registered object is its
`CStatusMgr` instance.**

## Fact 5 — the registered class is `status::CStatusMgr`
RTTI of the object built by the factory 0x1416c1c80 -> ctor `CStatusMgr::CStatusMgr` 0x1416c0ed0:
- vftable written at 0x1416c0ef0 (`lea rax,[rip+0x19201]` = 0x1416da0f8),
- vftable **0x1416da0f8**, COL **0x1416dc098** (signature=1, offset=0, cdOffset=0,
  TypeDescriptor RVA 0x37198 = VA 0x1416e7198),
- TypeDescriptor name = **`.?AVCStatusMgr@status@@`** ⇒ `class status::CStatusMgr`.
- ctor also inits two sub-objects at +0x10 and +0x50 and a pointer at +0x90; size 0x98.
Corroborating strings: `m_pStatusMgr`, `m_pStatusMgr->Init(pConsumer)`,
`CStatusMgr::OnRoleLogout`, `CStatusMgr::ClearFlowerSuitStatus`,
`f:\...\modules\status\src\statusmgr.cpp`.

WHAT IT IS: the status/buff manager of the Status module — the module-local singleton that owns the
per-user status (buff/debuff/SuitStatus) data and timers (`CStatus::UpdateStatusRemainTime`,
`CStatus::OnTimer`, `CUserStatus::AppendOSUserStatus`, `CStatus::QueryStatusByType`) and dispatches
the status messages (`Status::CMsgLogIn::Process`, `Status::CMsgSuitStatus::Process`). It is
published as provider 20 so other modules and the mapgroup kernel (`mapgroup.h:1014`, v123 fact 1)
can query buffs without linking Status.dll.

## Fact 6 — provider-id ↔ module table (linear disassembly, immediate before `call [r+0x18]`)
```
0x05 Competion     0x140b63bad      0x15 Totem         0x14199134c
0x08 Family        0x140d5c1a1      0x16 Syndicate     0x14177ea82
0x0a Lottery       0x141530444      0x17 Trade         0x1419c1217
0x0b Peerage       0x141551288      0x18 FactionMatch  0x140d11ab7
0x0c Pigeon        0x1415712e5      0x19 ElitePKArenic 0x140cc1d23
0x0d TaskDetail    0x1418b137b      0x1a Sponsor       0x141697c6e
0x0e Title         0x141971301      0x1b Booth         0x140acb571
0x0f Training      0x1419e12c3      0x1c VexillumArenic 0x1419f12c5
0x10 Guide         0x140e1689f      0x1d LeaveWord     0x140e5ca31
0x11 Rank          0x141602cde      0x1e Team          0x1418e13fb
0x12 Storage       0x1416f12e9      0x1f Wanted        0x141a412a7
0x13 DetainEquip   0x140c6e3c4      0x21 ClanPKArenic  0x140b124ff
0x14 STATUS        0x1416b1217      0x22 TeamArenic    0x141911613
                                   0x23 AntiCheat     0x140a5a351
                                   0x24 PopPKArenic   0x1415915af
                                   0x25 FrontierFlagWar 0x140dc925e
```
Missing from the linear pass (id still UNKNOWN by that method): Flower (0x9 per byte scan
0x140d9101b but not reached linearly), Relation (0x20 per byte scan 0x14163101b), FamilyArenic
(0x17?), i.e. those sites are in code the linear sweep did not reach — for id 0x14 this does not
matter: Status.dll is the only candidate from both methods.
Duplicate-id note: `FactionMatch` also uses 0x18 — ids are per-DLL constants, last writer wins in
`insert_unique` only if the first insert failed, i.e. first registration is kept.

## UNKNOWN / not proven
- meaning of the two `call [rax+8]` (slot 1) calls in Init with ids 0x3ea / 0x816 — payload of
  slot 1 is a message/file-list registration, not provider registration (v124 fact 1).
- no per-id symbol names inside root.dll (stripped); ids above come only from module call sites.
