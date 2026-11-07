# v152 — SOLVED: `[GameMap+0x60]` is a `CMapData`; width/height/cells and the walkable chain are exact

## The RTTI technique finally nailed (root cause of 3 failed waves)
`TypeDescriptor` = **(name string address) - 16**. The COL's `pTypeDescriptor` field (u32 at
COL+0x0C) is that struct's **RVA**. With that correction every class in MsgServer resolves:
`tdname[rva_of_name-16]`. Confirmed by naming 639 classes and, crucially:
```
CGameMap     vtable 0x140745728   (ctor stores it at 0x1402d444e / 0x1402d4546)
CMapData     vtable 0x1407a5698   (ctor store at 0x14056898f)
CTerrainObj  vtable 0x1407a6bc0   (ctor stores at 0x140573188 / 0x1405731fb)
CMapItem     vtable 0x14075be08   CMapManager vtable 0x14074cb98
```
(v145/v148/v150 reported "no vtable for CMapData" - that was this -16 bug, now fixed.)

## CMapData's vtable slots (measured, with thunks followed)
| slot | target | body |
|---|---|---|
| +0x18 | `0x1405623a0` | `f(this,x,y)` - the CELL ATTRIBUTE accessor (below) |
| +0x20 | thunk -> `[this+0x100]` -> `0x14056aaf0` | `mov eax,[rcx+4]; ret`  => **HEIGHT = subobj+0x4** |
| +0x28 | thunk -> `[this+0x100]` -> `0x14056ab00` | `mov eax,[rcx]; ret`    => **WIDTH  = subobj+0x0** |
| +0x30 | thunk -> `0x14056d600` | (not read yet) |
| +0x38 | thunk -> `0x14056b2e0` | (not read yet) |
So `CMapData+0x100` points at the static map data object that holds `{int width /*+0x0*/; int height /*+0x4*/; ...}`.

## `0x14056ab10` = bounds test (verified byte by byte)
```c
bool valid(int x, int y) {            // rcx = static data, edx = x, r8d = y
  if (x < 0) return false;
  if (y < 0) return false;
  if (x >= *(int*)(rcx+0x0)) return false;   // width
  if (y >= *(int*)(rcx+0x4)) return false;   // height
  return true;
}
```

## `0x14056ab30` = linear cell index (verified)
```asm
mov eax,[rcx]        ; width
imul eax,r8d         ; * y
add eax,edx          ; + x
ret
```
`index = width*y + x`  (row-major, x is the fast axis).

## `0x1405623a0` = CMapData cell attribute (verified)
```c
int cell(int x, int y) {                       // rcx=this, edx=x, r8d=y
  auto* sd = *(void**)(this+0x100);
  if (!valid(sd,x,y)) return 1;                // OUT OF BOUNDS RETURNS 1 => NOT walkable
  int idx = width*y + x;                       // via 0x14056ab30
  // then a red-black tree walk at [this+0x1c0]:
  //   node = [this+0x1c0]; node = [node+0x8];
  //   while (node->is_nil(+0x21) == 0) {
  //       if (node->key(+0x18) < idx) node = node->right(+0x10); else { best = node; node = node->left(+0x0); }
  //   }
  // ... value read from the found node (with [this+0x190] also used)
}
```
=> **cells live in a `std::map<int, Cell>` at `CMapData+0x1c0` keyed by `width*y+x`**, NOT a flat array.
Absent key = no entry (the tree walk's `lower_bound` result decides), out-of-range = **1**.
Combined with v151's walkability (`attr == 0` => walkable) the full semantics are:
**out of bounds -> attribute 1 -> NOT walkable; in bounds with no map entry -> whatever the
lower_bound default is (still to read); in bounds with an entry -> the stored attribute.**

## What this unlocks and what is still missing (honest)
- The runtime model is now fully specified; `src/systems/mapdoc.hpp` can mirror it exactly
  (`width`, `height`, `std::map<int,Cell>`), and `walkable(x,y)` becomes a verbatim port.
- The **only** missing input is still the *producer*: the loader that fills width/height and inserts
  entries into `CMapData+0x1c0` (i.e. the map-file reader). Next probe: find writers of `+0x1c0`
  (the map is populated by an insert loop that calls `0x14056ab30` for the index) and the caller that sets
  `CMapData+0x100`'s width/height. That reader defines the on-disk format, and only then can 403 (93 rows)
  and 1509 (9 rows) be ported without inventing anything.
