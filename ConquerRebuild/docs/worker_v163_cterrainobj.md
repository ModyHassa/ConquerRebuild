# v163 — the "layer source" NAMED: `CTerrainObj` (parts = `CTerrainObjPart`)

## 1. The function that opens the terrain file is `CTerrainObj`'s loader
`0x1405733c0` (the routine v162 found doing `fopen(path,"rb")`) logs, on its own failure paths:
```
0x1407a6c98   "CTerrainObj cannot open file %s"
0x1407a6c70   "CTerrainObj cannot create terrain data"
```
Both literals are referenced from inside that same function (`lea rcx,[0x1407a6c98]` at
`0x140573413` and `lea rcx,[0x1407a6c70]` at `0x1405734a6`). So:

**`0x1405733c0` = `CTerrainObj` file loader** — it `fopen(path,"rb")`, allocates and builds the
terrain data, and returns it as the refcounted object that v162 saw being passed to
`source->vt[0x8](dwordA, dwordB)` and then into the composer `0x14056f380`.

## 2. Therefore the whole stack is now named end to end
| object | role | evidence |
|---|---|---|
| `IMapData` / `CMapData` | the map document (cells, layers, per-owner items) | RTTI names + `mapdata.cpp` strings (v156) |
| `CMapStaticData` | the document's static cell store: `width`@+0x0, `height`@+0x4, cells@+0x10 (4 bytes) | v152/v154 |
| **`CTerrainObj`** | **the terrain object read from a file; the "source" the composer consumes** | this wave: `cannot open file %s` / `cannot create terrain data` inside its loader |
| **`CTerrainObjPart`** | **one part/layer inside a `CTerrainObj`** (the vector of 0x10-byte entries from v160) | RTTI name + v160 vector stride |
| `CGameMap` (`mapmanager.cpp`) | the live map: users/monsters, `AddTerrainObj`, `ChangeMapDoc` | v157 |
| `CUser::AddTerrainObj`-side file names | `GetTerrainNpcFileName` resolves a file per item type | v157 |

So the "layer" in v159/v160 is a **`CTerrainObjPart`**, and the vector of 16-byte entries at
`source+0x38..+0x40` is a vector of **parts**. That is why the flat `A*(6A+4)` law of v154 could
never match a `.DMap`: the file is a **terrain object made of parts**, each part carrying its own
width (+0x0C) and height (+0x10) (v160), not one flat grid.

## 3. What `CMapData::AddTerrainObj` now means
v156 recorded three `CMapData::AddTerrainObj` failure strings (cannot create layer data / cannot
create item from file %s for owner %u / file name is null, owner:%u). With `CTerrainObj` named, they
read as: **adding a terrain object to a document allocates its part grid ("layer data") and loads
per-owner items from a file name resolved by `GetTerrainNpcFileName`** — the same code path action
**403** drives when it places furniture. This is consistent, but the per-owner item file format is
still unread.

## 4. Remaining probes (ordered, all deterministic)
1. `0x1405733c0` full body (0x1405733c0..ret): its read sequence is the **`.DMap` / terrain-object
   file format** — the parts, their dims, and the meaning of the two header dwords `A`,`B` that
   v162 saw passed to `vt[0x8]`.
2. `CTerrainObj` vtable (`0x1407a6bc0`, v152) slot `+0x8` = the "load with (A,B)" method.
3. `0x14056f73d..0x14056f9ba` (v159) = apply ranges/`AddTerrainObj` during composition.

Nothing executable changed this wave. 403 (93 rows) and 1509 (9 rows) stay **BLOCKED** until (1) is
read; no parser was invented. Suite remains 102/102.
