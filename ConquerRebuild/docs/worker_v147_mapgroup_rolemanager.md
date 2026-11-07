# v147 — the CMapGroup accessor table (named), 224 = the home-upgrade furniture gate,
#        and a decisive finding: the map TERRAIN DATA DOES NOT EXIST in this workspace

## 1. The CMapGroup member accessors, with the assert literal each one prints
Each accessor is the same 0x41-byte shape: `cmp QWORD PTR [rcx+OFF],0` -> on NULL it logs
`CHECKF <name>  ...\mapgroupkernel\mapgroup.h, <line>` and returns 0, else returns `[rcx+OFF]`.
Every name below is the literal actually passed in `lea r8`, i.e. the original's own field name.

| accessor | mapgroup offset | literal | mapgroup.h line |
|---|---|---|---|
| `0x1400875f0` | **+0x88** | `m_pRoleManager` (0x1406f3b00) | 0x12f = 303 |
| `0x140087650` | **+0x90** | `m_pUserManager` (0x1406f3b10) | 0x130 = 304 |
| `0x1400876b0` | **+0x98** | `m_pMapManager` (0x1406f3b20) | 0x131 = 305 |
| `0x140087710` | **+0xa8** | `m_pGameAction` (0x1406f3b30) | 0x137 = 311 |
| `0x140087790` | **+0x230** | `m_pNpcPathTaskMgr` (0x1406f3b40) | 0x143 = 323 |
| (next in the cluster) | ? | `m_pMagicManager` (0x1406f3b58) | 0x144 = 324 |
| (next) | ? | `m_pTexasMgr` (0x1406f3b68) | 0x145 = 325 |
| (next) | ? | `m_pInstanceMgr` (0x1406f3b78) | 0x148 = 328 |
The three "?" offsets were not read this wave (their `cmp` lines fall outside the range dumped);
the names are certain because the literals are the ones those accessors pass.
`0x140008520` (already recorded in v145) is the container: `&g_mapGroups[process]`, stride 0x850.

## 2. Action 224 (7 rows) — the home-upgrade "close your furniture" gate
Decompiled `MsgServer.c` **case 0xe0** (line 219061), i.e. this is the old-engine switch on the raw
type; 224 is NOT in the 1001+ table engine.
```c
local_7f0 = 0; local_800[0] = 0;
iVar9 = sscanf(param, "%u %d %d", &local_7f0, &local_808low, &local_800[0]);
if (iVar9 < 2) { log_InlineLogDBERROR(0x14070c010); return false; }
mgr   = FUN_1400875f0(FUN_140008520(ctx->[0x48]));          // m_pRoleManager
iVar9 = mgr->vt[0xa8](mgr, local_7f0, local_808low);        // (arg1, arg2) -> int
if (local_800[0] == 0) return (0 < iVar9);                  // no 3rd field: "count > 0"
return (local_800[0] <= iVar9);                             // else "count >= threshold"
```
All 7 rows: `param = "%user_home_id 25"`, `data = 0`. With the template substituted the two arguments are
**the player's home map id and the constant 25**.
The shipped chain proves the meaning: `id_next` = action 105
`"Please~close~your~furniture~before~the~house~upgrade~begins!"`, and `id_nextfail` leads to
`1001 money += -3000000` (a duplicate pair of rows costs -4000000). So
**224 = "your home still has roles of class 25 on it (furniture)" -> block the upgrade**; the fail
branch is the upgrade that charges the money.
**BLOCKED**: `CRoleManager::vt[0xa8](mapId, classId)` is not decoded (it returns a count of "roles" on a
map for a class). Note what *is* nailed: the gate is a count-vs-threshold comparison on the value the
RoleManager returns, with the threshold taken from the optional 3rd field.

## 3. DECISIVE: there is no map terrain data in this workspace
`0x1402c3cc0(map,x,y)` (walkable) reads `[map+0x60]->vt[0x18](x,y) == 0`, i.e. the terrain cell of the
map document. `cq_map.mapdoc` is an **integer id** (1002, 1036, ...) that the original resolves to a map
document file on disk; this workspace contains **no** `.map` / `.Map` / map-pack file at all:
`find . -maxdepth 4 -iname '*.map'` = empty, `conquer_source/` has only `Source`, `AccountServer`,
`cq.sql`, `patch`, `Conquer_v6137.exe`, and the two archives. `cq_map` itself holds 415 rows of metadata
(no cell blobs).
Consequences (recorded so nobody burns another wave on it):
- **403 (93 rows)** and **1509 (9 rows)** are blocked *permanently* until the map documents exist;
  1107 (FlyMap) cannot be made faithful either (it only checks `map_exists` today).
- The fix is data, not code: the client's/servers' map documents (the `GameMap`/`map` data the v6159
  server loads, e.g. the `.Map` files or the client's map pack) must be supplied, then a cell loader can
  be written and 403 + 1509 both become portable.
