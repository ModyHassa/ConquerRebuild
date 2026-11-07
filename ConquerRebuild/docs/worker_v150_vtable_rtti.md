# v150 — a working vtable -> RTTI -> class-name technique, and the terrain classes it proves

## 1. The technique (this supersedes the v148 ctor scan)
Reading a PE32+ vtable's class name needs three steps with **different address kinds** - getting any of
them wrong silently returns nothing (which is what happened in v145/v148):
```
vtable[-8]        -> RTTICompleteObjectLocator   (a full VA, i.e. image_base + RVA)
u32(COL + 0x0C)   -> TypeDescriptor              (**an RVA, not a VA** - x64 MSVC stores it image-relative)
TD + 0x10         -> the class name INLINE        (it is a char[] in the descriptor, NOT a pointer)
```
The vtable itself is found by scanning a section for >=4 consecutive qwords that all land inside the code
section. Run against **MsgServer.exe** this resolves **218 classes** in one pass (e.g. the whole CMap* family);
the identical scan against **Team.dll** resolves 0, so its vtables are reached some other way (the v148 ctor
scan found 12 candidates there).
Note the bug that cost two waves: bounding the code-pointer test to `image_base+0x400000` rejects almost all
of MsgServer's .text (the file is 10.6 MB), and widening it to `+0x1000000` over-accepts; the test must use
the actual section extent.

## 2. What this proves about terrain (all quoted from the binary's own RTTI, `strings` output)
```
.?AVCMapData@@            .?AVCMapStaticData@@        .?AVCTerrainObj@@
.?AVCTerrainObjPart@@     .?AVCMapObj@@               .?AVCMapTrap@@
.?AVCMapManager@@         .?AVCMapList@@              .?AVCMsgLoadMap@world_kernel@@
```
plus `std::tr1::_Ref_count<CMapStaticData>`, `std::tr1::_Ref_count<CTerrainObj>`,
`std::tr1::_Ref_count<CTerrainObjPart>` - i.e. the three map-data classes are **reference-counted and
server-side**, so the mapgroup really does hold cell/terrain data in memory.

## 3. Leads that are now CLOSED (so nobody repeats them)
- **No file-name strings**: `MsgServer.exe` contains no `.DMap` / `.pul` / `map\` literal, and no DLL in
  `conquer_source/Source/` contains one either. The map document is not opened by a literal path.
- **`0x1400651f0` is NOT the GameMap ctor.** Its `[this+0x58]` / `[this+0x60]` stores look like the pattern
  we need, but the function asserts `m_idProcess == MSGPORT_WORLD` and the string
  `...\msgserver\worldkernel\worldkernel.cpp` line `0x9f`, and both fields are kernel objects built by
  `0x140072430` / `0x140074450`. It is `CWorldKernel`'s initialiser.
- The `[map+0x58]` / `[map+0x60]` pair we actually need is on the **GameMap** object reached from a user as
  `*(user+0x10)->vt[0x160]()`; `[map+0x58]->vt[0x10](5)` is the map-record attribute accessor (403's owner
  check) and `[map+0x60]->vt[0x18](x,y)` is the walkability probe.

## 4. Next probe (precise, no guessing)
1. Get the **vtable of `[map+0x60]`** at runtime-free time: disassemble `0x1402c3cc0` (walkability) far
   enough to see whether it calls `vt[0x18]` directly on `[map+0x60]` (already read: it does) and then find
   the `GameMap` ctor by searching the decompiled source for a function that stores BOTH `+0x58` and `+0x60`
   and additionally calls a **CMapData/CTerrainObj** allocation (`FUN_xxx(0xNN)` + ctor). The class name of
   that allocation, resolved with the §1 technique, identifies the terrain class and its loader.
2. Only then decide the on-disk format (the archive's 187 `.DMap` files may or may not be the server format;
   their measured header is in `docs/worker_v149_mapdata_found.md` and they embed CLIENT `.pul` paths, which
   is evidence AGAINST them being the server format).
Until step 1 lands, 403 (93 rows) and 1509 (9 rows) stay **BLOCKED** — implementing a cell parser now would
be inventing the original's behaviour, which the project forbids.
