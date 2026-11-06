# worker_v123 — `CUser+0x1110` container element type (action 1043)

Binary: `../conquer_source/Source/MsgServer.exe` (PE32+, imagebase 0x140000000).
Image base 0x140000000; all addresses below are VA.

## 1. The member is NAMED — `m_pUserWeaponSkillSet`

- CHECKF / catch string at **0x140715098** = `"m_pUserWeaponSkillSet"`.
- Catch handler at **0x1401cb1a0..0x1401cb1xx** → `SAFE_RELEASE(m_pUserWeaponSkillSet) @%s,%d`
  (decompiled `MsgServer.c` line 1135944), registered for the release block at
  **0x1401cbaf9** which does `set->vt[0x08](set)` then `user+0x1110 = 0`.
- Guard in the 1043 helper **0x14016265d**: `cmpq $0,0x1110(%rcx)` → CHECKF with string
  **0x140715098** = `m_pUserWeaponSkillSet`, line 0x2fa5 of `user.cpp`.

=> `CUser::m_pUserWeaponSkillSet`, a **pointer** to a heap object, not an embedded container.

## 2. ALLOCATION SITE (the answer to "what type is the element")

Function: **0x1401d0da0** (.pdata 0x1401d0da0–0x1401d1c46) = the **CUser constructor**
(vtable assembly at 0x1401d0dc7: `lea 0x14071ed48 → *(this)`, `0x14071e938 → this+0x10`,
`0x14071e8e8 → this+0x18`; it is called from 0x1401d26b0, 0x1402afb2a, 0x1402b5130).

```
1401d17e8  lea 0x40(%rax),%ecx            ; rax = 0  -> size = 0x40 (64 bytes)
1401d17ef  call 0x140511ff0               ; operator new(0x40)  (pool allocator 0x1409761b8 wrapper)
1401d1804  lea 0x140716178 ; mov %rax,(%rbx)   ; base-subobject vtable (immediately overwritten)
1401d180e  lea 0x14071bd18 ; mov %rax,(%rbx)   ; *** CGameObjSet vtable ***
1401d1818  lea 0x8(%rbx),%r12             ; r12 = &this->0x08
1401d1824  mov $0x8,%ecx ; call 0x140511ff0 ; new(8) storage descriptor node, *node = &this->0x08
1401d184d..1857  this+0x20 = this+0x28 = this+0x30 = 0   ; vector begin/end/cap = empty
1401d185c  movb $0x1,0x38(%rbx)           ; m_bOwnObjects = 1
1401d186b  mov %rbx,0x1110(%rdi)          ; *** store into CUser+0x1110 ***
```

**Container type: `CGameObjSet`** (source file `include\basecode\gameobjset.h`,
string **0x1407161b8**; class-name string **0x14071bd60** `"CGameObjSet GetObjByIndex
index oversize idx=%d, size=%u, in %s, %d"`). Size 0x40, ctor wholly inlined (no call).

Container layout:

```
CGameObjSet (0x40 bytes)
 +0x00  void** vtbl        -> 0x14071bd18
 +0x08  void*  pStorage    -> 8-byte node whose first field points back to &this->0x08
 +0x10  u64    (unused in ctor)
 +0x18  u64    (unused in ctor)
 +0x20  Elem** begin       (element-pointer array start)
 +0x28  Elem** end
 +0x30  Elem** cap
 +0x38  u8     m_bOwnObjects = 1   (if set, Take() destroys the removed object)
```

Element-pointer array: `count = (end - begin) >> 3` (8-byte pointers, not inline objects).

### The ELEMENT itself — `CUserWeaponSkill`

Allocated by **0x14039dc70** (`CUserWeaponSkill::CUserWeaponSkill(const Init&, bool)`):

```
14039dcc3  mov $0x30,%edx      ; *** element size = 0x30 (48 bytes) ***
14039dcd5  rax = operator new / pool alloc(0x1409761b8, 0x30)
14039dce2  lea 0x140760068 ; mov %rax,(%rbx)   ; element vtable (single slot: dtor)
14039dcec  +0x20 = 0 (property bag), +0x28 = 0 (flag)
14039dcf5  +0x08 = +0x0c = +0x10 = +0x14 = +0x18 = 0
14039dd31  +0x20 = bag = factory(0x1406d83a0)->Create(0x140760178 = "cq_weapon_skill")
14039dd4c  +0x28 = arg2 (persist/DBNotify flag)   ; callers pass 1
14039dd60  bag["id"]        = init+0x00  -> +0x08
14039dd80  bag["type"]      = init+0x08  -> +0x10
14039dda1  bag["level"]     = init+0x10  -> +0x18
14039ddc3  bag["exp"]       = init+0x0c  -> +0x14
14039dde4  bag["old_level"] = init+0x11  -> +0x19
14039de06  bag["owner_id"]  = init+0x04  -> +0x0c
14039de27  bag["unlearn"]   = init+0x12  -> +0x1a
```

Element vtable **0x140760068** has exactly one slot: `0x14039dc10` = scalar deleting
destructor `~CUserWeaponSkill` (releases the property bag, frees 0x30).

## 3. CGameObjSet vtable (0x14071bd18) — slots used by 1043

| slot | fn | behaviour (verified) |
|---|---|---|
| +0x00 | 0x1401bea10 | destructor / adjusting thunk |
| +0x08 | 0x14019fa50 | `Release()`: `if (p) p->vt[0](1)` — used at 0x1401cbaf9 (SAFE_RELEASE) |
| +0x10 | 0x14019fdd0 | **GetSize()** = `(this+0x28 - this+0x20) >> 3`. 1043: 0x1401626a2 (loop bound) |
| +0x18 | 0x14019fde0 | **GetObjByIndex(u32 idx)**: bounds-check `idx < size`, else CHECKF "CGameObjSet GetObjByIndex index oversize" (0x14071bd60); returns `begin[idx]` or 0. 1043: 0x1401626da |
| +0x20 | 0x1401beca0 | **Add(Elem*)**: rejects key 0 (CHECKF 0xa6), calls vt+0x28(id) first, then push_back via 0x1401afb20 on `this+0x08` |
| +0x28 | 0x1401a5960 | **Take(u32 id)**: linear scan `begin..end` comparing `elem->GetId()`, on hit: if `this+0x38` → `elem->vt[0](1)` (destroy), `memmove` (0x1406d8aa8) the tail down 8 bytes, `end -= 8`, returns true; false if not found. 1043: 0x14016274a |
| +0x30 | 0x14019fac0 | UNKNOWN (used by 0x140168850 as "first element / front", returns 0 when empty) |
| +0x38 | 0x1401a5ad0 | UNKNOWN (not used by 1043) |

## 4. Element struct — field by field

| off | type | attribute name (verified in ctor + accessor) | meaning |
|---|---|---|---|
| +0x00 | `void**` | — | vtable 0x140760068 (dtor only) |
| +0x08 | `u32` | `"id"` (0x1406de8d4) | **record key** — getter 0x14039d9d0 `return *(u32*)(this+8)`; setter 0x14039d9e0; key of the set (Take() compares this) |
| +0x0c | `u32` | `"owner_id"` (0x140760088) | owning character id (getter/setter 0x14039d9f0 / 0x14039da00) |
| +0x10 | `u32` | `"type"` (0x1406de6d4) | **skill type / skill id** — the value 1043 puts in the packet (`u32 @ elem+0x10`); getter 0x14039d760, setter 0x14039d770 |
| +0x14 | `u32` | `"exp"` (0x14070eeb8) | accumulated weapon-skill experience (0x14039d860 / 0x14039d870) |
| +0x18 | `u8` | `"level"` (0x1406ef6c8) | current weapon-skill level (0x14039d7e0 / 0x14039d7f0) |
| +0x19 | `u8` | `"old_level"` (0x140760078) | level before the pending change / level to restore (0x14039d8e0 / 0x14039d960) |
| +0x1a | `u8` | `"unlearn"` (0x140760070) | unlearn/pending-drop flag (0x14039d8f0) |
| +0x1b | pad 5 | — | alignment to +0x20 |
| +0x20 | `CProperty*` | — | property bag (factory 0x1406d83a0, class name `"cq_weapon_skill"` 0x140760178); setters mirror every write into it and clear the bag's dirty slot (vt+0x38) when their arg3 != 0 |
| +0x28 | `u8` | — | flag passed to the bag release in the dtor (skip-persist / DB-delete control); set from ctor arg2, all live call sites pass 1. Exact meaning UNKNOWN |
| size | **0x30** | | |

Init struct consumed by the ctor (0x14039dc70):

```
struct CUserWeaponSkill::Init {  // arg in rcx, 0x18+ bytes
  u32 id;        // +0x00 -> elem+0x08
  u32 owner_id;  // +0x04 -> elem+0x0c
  u32 type;      // +0x08 -> elem+0x10
  u32 exp;       // +0x0c -> elem+0x14
  u8  level;     // +0x10 -> elem+0x18
  u8  old_level; // +0x11 -> elem+0x19
  u8  unlearn;   // +0x12 -> elem+0x1a
};
```

Writers into the set: **0x140168850** `AddOrUpdateWeaponSkill(user, owner?, id, type, exp,
level, old_level, unlearn)` (builds the Init, `FUN_14039dc70(&init,1)` then `set->vt[0x20]`,
or updates the existing element) and **0x14044c9e0** (bulk add from a list, via
`FUN_14039e180`). Loader/DB path: 0x14039e180 → 0x14039dc70.

## 5. Action 1043, re-verified end to end

Body 0x140135433 = first instruction of one case inside the master router
**0x14012a6e0** (.pdata 0x14012a6e0–0x14013ad75). It immediately tail-calls
**0x140162620** (.pdata 0x140162620–0x14016284a) — that is the real worker.

```
0x14016265d  if (!user->m_pUserWeaponSkillSet) CHECKF "m_pUserWeaponSkillSet" (user.cpp:0x2fa5)
0x140162698  set = user+0x1110 ; r15 = set->vt[0x10]()          ; size
0x1401626a8  i = size - 1 ; if (i >= size) done                  ; REVERSE iteration (count-1 .. 0)
loop:
0x1401626da  e = set->vt[0x18](i)                                ; GetObjByIndex
0x1401626e9  if (e->old_level < e->level)                        ; 0x14039d8e0 vs 0x14039d7e0
0x140162711      e->set_old_level(e->level, 0)                   ; elem+0x19 = max(+0x19,+0x18)
0x140162720  e->set_unlearn(1)                                   ; elem+0x1a = 1
0x140162728  type = e->GetType()                                 ; elem+0x10  (saved in a register)
0x14016273c  id   = e->GetId()                                   ; elem+0x08
0x14016274a  set->vt[0x28](id)                                   ; *** Take(id): destroys + erases ***
0x140162752  0x140362560(&msg)                                   ; CMsgAction ctor
0x140162758..78a  GetID(), GetX(), GetY(), GetDir()              ; user vt +8 / +0x40 / +0x48 / +0x50
0x1401627a0  args: dir(u16), 0x006e(u16)=110, data=type(u32), 0
0x1401627b0  msg.Create(...)  == 0x140362620                      ; action **110 (0x6e)**, data = type
0x1401627bc  CHECKF "IF_OK" (0x1406dd3b8) on builder failure
0x1401627e5  user->vt[0x350](&msg)                               ; single-session send (player only)
0x1401627fe  0x1403625e0(&msg)                                   ; dtor
0x140162803  --i ; jmp loop
return 1 (always)
```

Source line recovered verbatim from the trace string at **0x140715150**:

```
msg.Create(this->GetID(), this->GetPosX(), this->GetPosY(), this->GetDir(),
           actionDropSkill, nType)
```

=> 1043 = **drop / reset every weapon skill of the user** (rebirth or profession change):
mark each row unlearned, remember its level in `old_level`, delete the row, and tell the
client S→C `CMsgAction (10010) action 110 (actionDropSkill)` once per skill.

### CORRECTIONS to `docs/worker_v122_1072_1043.md`
- The element is **not** an anonymous struct: it is `CUserWeaponSkill`, 0x30 bytes,
  allocated by 0x14039dc70 (not by the container).
- The container is **not** an STL-like object of inline elements: `CGameObjSet` holds
  **pointers** (`count = (end-begin)/8`), and the key is `elem+0x08`, not `elem+0x0c`.
- The erase happens **before** the send, in the same iteration, and it **destroys** the
  element (`m_bOwnObjects` = 1 → dtor call), i.e. the data is gone, not merely detached.
- "max(+0x19,+0x18)" is exactly `if (old_level < level) old_level = level` (u8 compare);
  `+0x19` is the attribute `old_level`, `+0x1a` is `unlearn`.
- Iteration is **descending** index order, not ascending.
- `GetId()` (0x14039d9d0) returns `elem+0x08` = `"id"`, the set key.

## 6. Still UNKNOWN
- Container vtable +0x30 (0x14019fac0) and +0x38 (0x1401a5ad0) semantics.
- Exact meaning of `elem+0x28` (bag release flag) and of `elem+0x00..0x07` layout beyond vptr.
- Whether `CProperty` (elem+0x20) class 0x140760178 has more attributes than the 7 mapped.
- Who calls 1043 (chain authors) — not resolved here.
