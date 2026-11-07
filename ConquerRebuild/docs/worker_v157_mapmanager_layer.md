# v157 — the second half of the terrain stack: `mapmanager`, and what the IMapData registry is

## 1. A second module, named by its own source paths (NpcServer.exe)
```
f:\version\cqserver-78.0.11-1204\npcserver\npckernel\mapmanager.h
f:\version\cqserver-78.0.11-1204\npcserver\npckernel\mapmanager.cpp
```
So the terrain stack is two modules, and v154-v156 only covered the first:

| module | source | role |
|---|---|---|
| `mapdata` | `mapdata\i_mapdata.h`, `mapdata\source\mapdata.cpp` | `IMapData` + `CMapData`: **the map document** (cells, layers, per-owner items) - ported in v155 |
| `mapmanager` | `npcserver\pckernel\mapmanager.h` + `.cpp` | `CGameMap`: **the live map** that owns users/monsters and *asks* `IMapData` for a document |

## 2. `mapmanager`'s function surface, from its own log strings
```
CGameMap::AddTerrainObj GetTerrainNpcFileName failed, item type:%u at %s, %d.
CGameMap::LeaveMap. Flag[%d] User[%u][%u, %d, %d] MapID[%u][%d, %d]
CGameMap::EnterMap. Npc[%u] Flag[%d] User[%u][%u, %d, %d] MapID[%u][%d, %d]
CGameMap::ChangeMapDoc. DelMonster[%u]
CGameMap::ChangeMapDoc. DelUser[%u]
CUser::Create.  NotStandEnable User[%u][%d, %d], MapID[%u][%d, %d], MapDoc[%d]
CUser::FlyMap.  NotStandEnable User[%u][%d, %d], MapID[%u][%d, %d], MapDoc[%d]
CUser::MoveForward. User[%u][%d, %d] NewPos[%d, %d], MapID[%u][%d, %d], MapDoc[%d]
CUser::JumpPos. NotStandEnable User[%u][%d, %d], MapID[%u][%d, %d], MapDoc[%d]
```
Two facts fall out of these, and they are the reason actions 403/1509 need a *document* and not just a map id:
1. **`MapDoc[%d]` is a distinct id from `MapID`** - every movement/stand check logs both. `CGameMap::ChangeMapDoc`
   can swap the document under a live map (deleting monsters and users that no longer fit).
2. **`AddTerrainObj` needs `GetTerrainNpcFileName`** - terrain objects (action 403's furniture) resolve a *file
   name* per item type, i.e. the same file-name theme as v154's map document.

## 3. The IMapData registry is a plain global `std::map`, and its init is verified
`0x1400bbd40` is the static initialiser of the registry tree at `0x140104630`:
```
b9 08 00 00 00        mov  ecx, 8                 ; sentinel node size
e8 ...                call 0x140072596            ; allocate sentinel
lea  rcx,[0x140104630]                             ; header
mov  [rax], rcx      / mov [rax+8],rax / mov [rax+0x10],rax   ; head/left/right point at itself
mov  qword [0x140104618], 0                        ; element count = 0
jmp  0x140072cb4                                   ; register a static destructor
```
So at start-up the registry is **empty**, and its lookups are the ones traced in v156:
`0x1400516dd` (find) and the create path at `0x140051842`: key in `ecx`, `rdx = &record+0x20` (document path),
`r8d = [record+0x1c]` (gridsize), miss -> `"IMapData cannot find map %d"`.

## 4. Still BLOCKED, and the single remaining seam (not guessed)
The registry starts empty, so **something inserts** records of shape `{ ... ; gridsize @+0x1c ; path @+0x20 }`.
That writer has not been read yet, therefore:
- 403 (93 rows) and 1509 (9 rows) stay **BLOCKED** - no document, no terrain,
- and nothing here is inferred: the two source modules, all nine log strings, the empty-registry init, the
  exact argument mapping and the miss-log are read from the binaries.

Next probe (deterministic, one item): find the writer of `node+0x1c` / `node+0x20`, i.e. the `CTree::insert`
call whose pair holds `(int mapdoc, MAPINFO{..., int gridsize, std::string path})`. That call site names the
directory and extension, and `cq_map.mapdoc` (a column we DO have) then keys it.
