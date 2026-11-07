# v151 — the exact walkability algorithm, read instruction by instruction (no guessing)

## 1. `0x1402c3cc0` = the walkable test, fully disassembled
```asm
1402c3cc0  bool walkable(GameMap* m /*rcx*/, int x /*edx*/, int y /*r8d*/)
  test edx,edx          / js  -> return false          ; x < 0 -> false
  rcx = [m+0x60] ; rax = [rcx] ; call [rax+0x28]       ; WIDTH  (vt[0x28]())
  cmp edi,eax   / jge -> return false                   ; x >= width  -> false
  test ebx,ebx  / js  -> return false                   ; y < 0 -> false
  rcx = [m+0x60] ; rax = [rcx] ; call [rax+0x20]       ; HEIGHT (vt[0x20]())
  cmp ebx,eax   / jge -> return false                   ; y >= height -> false
  rcx = [m+0x60] ; r8d=y ; edx=x ; rax=[rcx] ; call [rax+0x18]   ; CELL ATTRIBUTE (vt[0x18](x,y))
  test eax,eax  / sete al                               ; return (attr == 0)
```
So, verbatim: **walkable(x,y) = 0<=x<width && 0<=y<height && cell_attr(x,y)==0**, and
`[GameMap+0x60]` is the object that owns width (+0x28), height (+0x20) and cells (+0x18).
Note the width/height slots are **swapped relative to intuition** (+0x28 = width, +0x20 = height).

## 2. Who calls it (5 sites - walkability is not just 403/1509)
`grep -n FUN_1402c3cc0 decompiled/MsgServer.c`:
`207813` (action **403**, the furniture placement gate), `218998`, `219831`, `238847`, `256418`.
The last three are in other subsystems, so this function is a shared primitive and worth porting for its
own sake once the cell data exists.

## 3. The two map-data classes have NO vtable in MsgServer.exe (measured)
Scanning every 4-byte-aligned offset for an RTTICompleteObjectLocator
(`u32 signature in {0,1}` and `u32@+0x0C == TypeDescriptor RVA`) around the TypeDescriptors
`CMapData` (TD rva 0x970d30) and `CTerrainObj` (TD rva 0x970eb0) finds **no COL at all**, and
`CMapStaticData` has **no TD string** in this binary. Both names exist only as TypeDescriptors (used by
`typeid`), so they are **non-polymorphic structs** - they cannot be the object stored at `[GameMap+0x60]`.
Therefore `[GameMap+0x60]`'s class is a *third* class (its vtable has the three cell slots above) and it is
still unidentified. Also: only `MsgServer.exe` and `NpcServer.exe` contain these RTTI names; no DLL does.

## 4. Client `.DMap` measurements (why they are still NOT proven to be the server format)
All 187 files start with `[u32 variant][u32 0][NUL-terminated "map\...\<Name>.pul"][zeros...]`, and the first
non-zero byte after the path sits at a **path-length-dependent** offset: `0xea` (task01), `0xf6`
(09christmas01), `0xf7` (arena), `0xfe` (newplain, mine). Remaining byte counts do **not** factor as
`width*height` for 1/2/4-byte cells (e.g. mine.DMap 68,160 bytes -> 67,906 remaining, 09christmas01 284,272
-> 284,026, newplain 6,577,748 -> 6,577,494), so no cell geometry can be derived from them without the
loader's reader. In addition every one of them embeds a **client** `.pul` path.
=> Writing a `.DMap` parser now would be inventing the format. It stays BLOCKED.

## 5. The single next probe
Identify `[GameMap+0x60]`'s class by scanning MsgServer's vtables for the signature
**slot 0x18 = `f(this,int x,int y)` returning an int, slot 0x20 = `f(this)` returning a small int,
slot 0x28 = `f(this)` returning a small int** (name it with the v150 RTTI chain), then read that class's
`Load`. That gives both the class name and the real on-disk source, after which
`walkable()` (already fully specified above) ports verbatim and 403 + 1509 + the other three call sites open.
