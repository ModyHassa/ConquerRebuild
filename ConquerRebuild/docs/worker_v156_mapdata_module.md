# v156 — the `mapdata` module identified, and the live caller found (in NpcServer, not MsgServer)

## 1. The module's own identity, straight from the binaries
Both `MsgServer.exe` and `NpcServer.exe` carry the module's source paths and RTTI names:
```
f:\version\cqserver-78.0.11-1204\mapdata\i_mapdata.h
f:\version\cqserver-78.0.11-1204\mapdata\source\mapdata.cpp
.?AVIMapData@@     .?AVCMapData@@
```
So the terrain code we ported in v154/v155 is the **`mapdata` module**: an interface `IMapData`
plus the implementation `CMapData`, written in `mapdata.cpp`. Two classes, one source file.

## 2. The module's full function surface (taken from its own log strings)
These strings are a ready-made to-port checklist - each one is a function that exists in `mapdata.cpp`:

| string | function |
|---|---|
| `Bad call to IMapData::CreateNew()` | `IMapData::CreateNew` guard |
| `IMapData cannot create map %d from file %s, gridsize=%d` | `IMapData::Create` |
| `IMapData cannot find map %d` | `IMapData` registry lookup |
| `IMapData cannot open file %s` | `IMapData` file open |
| `CMapData cannot load map %d from file %s, gridsize=%d` | `CMapData::Load` (ported, v154/v155) |
| `CMapData cannot create layer data` | **layer allocation** (not ported yet) |
| `CMapData cannot create item from file %s for owner %u` | **per-owner item load from file** (not ported) |
| `CMapData cannot find item %d, key %s, field %s` | **item lookup by id+key+field** (not ported) |
| `CMapData::AddTerrainObj cannot create layer data` | `AddTerrainObj` -> layers |
| `CMapData::AddTerrainObj cannot create item from file %s for owner %u` | `AddTerrainObj` -> items |
| `CMapData::AddTerrainObj file name is null, owner:%u.` | `AddTerrainObj` null guard |
| `CMapData cannot create item ... owner %u` + `... layer data` | explains v153's **`gridsize`**: the map is a grid of **layer** data, and items are stored per owner inside it |

`AddTerrainObj` is the same entry that action **403** (furniture/terrain objects) needs, and the layer
concept explains why the reader wants a square `dim` plus a per-row 4-byte trailer.

## 3. Verified live call chain (NpcServer.exe) - the map-info record supplies path + gridsize
```
140051842  mov  r8d, [rsi+0x1c]      ; gridsize  <- record+0x1C
140051846  lea  rdx, [rsi+0x20]      ; file path <- record+0x20 (embedded string)
14005184a  mov  ecx, ebp             ; mapId
14005184c  call 0x14008ba00          ; IMapData/CMapData factory  -> returns the map object
           if null -> log "IMapData cannot find map %d" (0x1400c8230)
```
`rsi` comes from a `std::map` walk over the **IMapData registry** (tree header at `0x140104630`), so a map's
document path and gridsize are **properties of the map-info record**, not literals. That closes the question
v153 left open ("where does `%s` come from") for the NpcServer path.

## 4. Negative result that matters (recorded so nobody hunts it again)
In **MsgServer.exe** the `CMapData` factory at `0x140568d50` has **no caller at all**:
- no `call` and no `jmp` targets it anywhere in the image,
- none of the 639 COL-resolved vtables has it in any of its first 0x200 slots,
- no 8-byte function-pointer reference to it exists in the file,
- and no 4-byte relative jump-table entry resolves to it (every 4-byte word in every section was tested).
So in MsgServer that creation path is dead/stripped; **the reachable map-doc creation lives in
NpcServer.exe**. MsgServer only links the same module (it has the strings, and the reader/accessors we ported).

## 5. Still BLOCKED, and the precise next probe
The path still has to come from an `IMapData` record, and the record table is populated somewhere at startup.
Next probe (deterministic): find the writer of the registry node fields `+0x1c` (gridsize) / `+0x20` (path), i.e.
the `IMapData` insert path fed by `mapdata.cpp`'s config reader. Only that reader names the directory, extension
and per-map gridsize. Until it is read, **403 (93 rows) and 1509 (9 rows) stay BLOCKED** and no map document is
invented.
