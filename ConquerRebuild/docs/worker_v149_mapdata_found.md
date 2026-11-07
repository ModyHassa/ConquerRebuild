# v149 — the map data EXISTS in Conquer_Online_Source_v6159.7z (owner supplied the file)

## 1. What is in the archive (verified by listing/extracting `Source/map/*`)
`7z x -y -o/tmp/mapsrc Conquer_Online_Source_v6159.7z "Source/map/*"` yields:
- **187 `.DMap`** documents, **395 MB** total, at `Source/map/map/` (e.g. `newplain.DMap`,
  `desert.DMap`, `mine.DMap`, `market.DMap`, `arena.DMap`, `canyon.DMap`, `task01..11.DMap`,
  `icecrypt-lev1..6.DMap`, `house.DMap`, `prison.DMap`, `sky*.DMap`).
- **267 `.7z`** packed siblings in the same folder (per-map packs), plus `Source/map/data/map/mapobj/...`
  with `.dds` textures (`1-newplain/altar/altar18.dds`, `wall/wall25.dds`, ...).
Before this wave the rebuild had **no** map data at all (v147 recorded it as absent - the extraction of
`conquer_source/Source` had skipped `Source/map/`).

## 2. Measured `.DMap` header (three format variants, from the first u32)
| first u32 | meaning seen | files |
|---|---|---|
| `1004` | puzzle/event set (`map\puzzle\<Name>.pul`) | 113 |
| `1003` | mine/woods/task set (`map\...`) | 51 |
| ASCII (`0x50617262`-class = the filename's own first bytes) | older variant with **no** header | 23 |
Example (`09Christmas02.DMap`, 408,872 bytes):
```
+0x00 u32 1004          ; variant tag
+0x04 u32 0
+0x08 char[] "map\puzzle\09Christmas02.pul" + NUL   (ends at +0x24)
+0x24 .. zeros (at least 40 bytes measured)
...   cell data (not yet parsed)
```
The embedded path is the CLIENT asset (`<Name>.pul`), i.e. these `.DMap` files are client map documents.

## 3. The server never names a map file - so the loader must be located, not guessed
`strings -a MsgServer.exe` has **no** `.DMap`/`.pul`/`map\` literal (only `mapdoc` and two
`CInstanceMgr::OnChgPosReborn cq_map.mapdoc[%lu] ...` log strings), and **no DLL** in
`conquer_source/Source/` contains `.DMap`/`.pul`/`map\` either. The only binary that mentions `.pul` is
the client (`conquer_source/patch/Conquer.exe`).
Consequences (do not skip):
1. The server's terrain comes from an object reachable as `[GameMap+0x60]->vt[0x18](x,y)` (the walkability
   probe used by 403 and 1509), so the **`cmapdoc`/`CMapDoc` loader** must be found through that vtable and
   its `Load` method - the file name/format is built at runtime (a `mapdoc` id -> path mapping we have not
   located yet; `cq_map.mapdoc` is a plain int, 415 maps, e.g. 1002 for CentralPlain, and there is no
   `cq_mapdoc` table - only `cq_map`, `cq_dynamap`, `cq_pk_mapgroup` exist).
2. `cq_map.name` and the `.DMap` filenames do **not** match 1:1 (`CentralPlain` vs `newplain.DMap`,
   `MineCave` vs `mine.DMap`, `Arena` vs `arena.DMap`), so the id->file mapping is real data we still
   must find (likely a `.pul`/`.dmap` index or a `map\...` path built from the map's `mapdoc` value).

## 4. Next concrete steps (in order, all cheap)
1. Read `[GameMap+0x60]`'s vtable in MsgServer.exe (the `+0x18(x,y)` walkability slot is already known from
   `0x1402c3cc0`), then find the loader that populates it and the strings it builds the path from.
2. If the server format turns out to be the client `.DMap`, parse the cell block from the header offset
   measured above (variant tag + NUL-terminated path + zero pad) and write
   `src/systems/mapdoc.hpp` exposing `bool walkable(x,y)`.
3. Then port **1509** (9 rows, dispatch already fully resolved in v146) and **403** (93 rows, gates and the
   0x6c struct already measured in v146), and make **1107** honour walkability.
Extraction command for whoever continues (the archive stays in the conversation workspace):
`7z x -y -o/tmp/mapsrc Conquer_Online_Source_v6159.7z "Source/map/*"`
