# v146 — 403 (93 rows) read from the decompiled source: the whole item-only branch

Source of truth: `../decompiled/MsgServer.c` line 207577 = `FUN_1401199d0` = 
`CGameAction::ProcessActionItemOnly(longlong param_1 /*ctx*/, undefined8 *param_2 /*game*/,
char *param_3 /*the action's param*/, longlong *param_4 /*user*/,
undefined8 param_5, undefined4 param_6, char *param_7 /*pszAccept*/)`.
The 403 branch is `if (iVar4 == 0x193)` at **line 207778** (the earlier docs called this function
`FUN_1401199d0` correctly; `iVar4` is the item's ActionID).

## 0. Why 403 is reached at all
This is `ProcessActionItemOnly`, i.e. the chain an **item** runs (the action row referenced by the item),
NOT the npc/task switch. That is why 403 has no case in the 1001..1729 engine: the rebuild needs an
item-driven entry point that passes `pszAccept` (param_7 = the second text param) as well as `param_3`.

## 1. Gates, in the original order (line numbers from the decompiled file)
| # | code | meaning |
|---|---|---|
| 1 | `if (param_7 == NULL)` -> CHECKF `"pszAccept && strlen(pszAccept) > 0"` line 0x109d -> 0 | the caller must pass the second text param |
| 2 | the `do {...} while (cVar1 != 0)` length loop, `if (lVar14 != -2)` | `strlen(pszAccept) > 0` (an empty string takes the same CHECKF path) |
| 3 | `plVar8 = FUN_140087d40(); lVar14 = plVar8->vt[0x60](plVar8); if (lVar14 == 0)` -> DBERROR `ProcessActionItemOnly() ActionID=%u` (0x10a1) -> 0 | a manager lookup that must return non-zero (identity of FUN_140087d40 not yet named) |
| 4 | `memset(&info,0,0x6c)` then `sscanf(pszAccept,"%d %d %d %d %d", &cell_x,&cell_y,&v3,&v4,&v5)`; `if (ret < 3)` -> `IF_NOT_ "ret >= 3"` (0x10ac) -> 0 | **pszAccept = the target cell** (`"%d %d %d %d %d"`, first two are x,y) |
| 5 | `FUN_1402c3cc0(map, cell_x, cell_y)` must be true | the cell must be **walkable** (same routine 1509 uses; `0<=x<w && 0<=y<h && terrain(x,y)==0`) |
| 6 | `FUN_1402c8370(map, cell_x, cell_y, 0x1040)` must be **false** | no NPC of class 0x1040 already at that cell |
| 7 | `sscanf(param_3,"%s %d %d %d %d %d %d %u %u %d %d %d %d %d %d %d %d %d %d %d %d %s", ...)`; `if (ret < 5)` -> DBERROR (0x10c3) -> 0 | the **22-field** action param (only 5 required) |
| 8 | `memmove(&local_7ac,&local_258,0xf)` | the **last** `%s` field is a 15-byte string copied into the info struct |

## 2. The kind field (`local_7e4` = the 2nd param field, `%d`)
- `if (local_7e4 == 0x19 || local_7e4 == 0x65 || local_7e4 == 4)`: requires the map to be the player's
  **home** - `FUN_1401194e0(map)` must be true (else DBERROR 0x14070bfb0) - and
  `map->[0x58]->vt[0x10](5)` must equal `user->vt[8]()` (own id, else DBERROR 0x14070bf60).
  In the gate list these are exactly the two ownership checks the earlier wave identified.
- `if (local_7e4 == 0xf)` **and** `FUN_140119510(map)` (bit 6 of the map flags) -> send
  `STR_DISABLE_LAY_SYNTRANS` and return 0.
- `if (local_7e4 == 9)`: the struct fields come from user getters (`vt[0xf8]`,`[0x100]`,`[0x108]`,`[0x110]`,
  `[0x30]`,`[0x38]`) plus `GetModule(0x16)->vt[0xf8](user id) * 0x10000`, and `local_7e0 = local_844 % 10`.
- else: `local_7e0 = (local_844 % 10) % 10 + (local_7e0 / 10) * 10` (a digit-preserving tweak).

## 3. Owner selection (`local_7f4` = one of the 22 fields)
`local_7f8` (the first qword of the 0x6c info struct) is set by a 4-way switch:
`0 -> 0`, `1 -> user->vt[8]()` (own id), `2 -> map->vt[0x170]()` (the map's owner id; 0 aborts),
`3 -> CHECK log `!"OWNER_NPC"` (0x1110) and leaves it 0.

## 4. The create
```
if (local_848 != 0)  cVar1 = FUN_1402c68a0(map, local_848, cell_x, cell_y);   // must be true, else 0
plVar8 = FUN_1402c0d80();                                    // the NPC manager singleton
if (!plVar8) -> IF_OK log 0x14070bf28 -> 0
uVar6  = FUN_1400fda10(user, 1, 1);                          // the held item's type (ITEMDATA_TYPE)
cVar1  = FUN_1402c2390(plVar8, ctx->[0x48] /*m_idProcess*/, &info /*0x6c bytes*/, uVar6);  // = pNpc->Create
if (cVar1) {
    mgr = FUN_1400875f0(CMapGroup(ctx->[0x48]));            // the map group's npc manager
    mgr = mgr->vt[0x30]();
    mgr->vt[0x28](pNpc + 2);                                // register the npc in the map
    *(u32*)(user + 0x146) = pNpc->vt[8]();                  // the new npc id -> CUser+0xA30 (user+0x146 dwords)
    ctx->[0x10] = pNpc + 2;                                 // hand the object back to the action context
    return 1;
}
IF_OK log "pNpc->Create(m_idProcess, &info, pItem->GetInt(ITEMDATA_TYPE), pName)" (0x1118), destroy, 0
```
That IF_OK string is the original's own naming of the call, so `FUN_1402c2390` = `CNpc::Create`.

## 5. What is still UNKNOWN (do not guess)
1. The **0x6c-byte info struct field layout**: the 22 params are parsed into locals and only some are
   copied into the struct in the code above. Items 1-22 -> struct offsets must be read from the
   disassembly of this branch (`0x1401199d0` around the two `sscanf` sites), not from the decompiled
   variable names.
2. `FUN_140087d40()`'s identity (gate 3) and what its `vt[0x60]` returns.
3. `FUN_1402c68a0(map, local_848, x, y)`'s meaning (a fifth placement gate, only when that field != 0).
4. The kind vocabulary beyond the four proven values (4, 9, 0xf, 0x19, 0x65 seen).
5. `local_844`, `local_840`, `local_83c[0]` (pszAccept fields 3-5) - read but their roles are unnamed.

## Verdict
**Still BLOCKED for a faithful port**, but the shape is now complete: two grammars (`pszAccept` >=3 fields =
the target cell, action param >=5 of 22), five placement gates, the home-ownership pair, the 4-way owner
select, and `CNpc::Create(process, &info, itemType)` + `npcManager->vt[0x28](npc)`. The single biggest
missing piece is the 0x6c struct layout. 93 rows are waiting behind it.

## 6. The 0x6c info struct IS the local block (measured, not guessed)
`memset(&info,0,0x6c)` covers `local_7f8` down to `local_790`, and the struct is passed as `&local_7f8`
to `0x1402c2390`. Its field addresses therefore are `base - local`:
`+0x00 local_7f8` (owner id), `+0x04 local_7f4` (owner kind), `+0x08 local_7f0` (map->vt[0x168]()),
`+0x10 local_7e8`, `+0x14 local_7e4` (kind), `+0x18 local_7e0`, `+0x1c local_7dc`, `+0x20 local_7d8`,
`+0x24 local_7d4`, `+0x28 local_7d0`, `+0x2c local_7cc`, `+0x30 local_7c8`, `+0x34 local_7c4`,
`+0x38 local_7c0`, `+0x3c local_7bc`, `+0x40 local_7b8`, `+0x44 local_7b4`, `+0x48 local_7b0`,
`+0x4c local_7ac`, `+0x50 local_7a8`, `+0x54 local_7a4`, `+0x58 local_7a0`, `+0x5c local_79c`,
`+0x60 local_798`, `+0x64 local_794`, `+0x68 local_790` - 0x6c bytes exactly.
The `sscanf` table assignments (in compiled order, i.e. the 22 format fields after `%s %d`) are
`local_258, local_7b0, local_7b4, local_7b8, local_7bc, local_7c0, local_7c4, local_7c8, local_7cc,
local_7d0, local_7d4, local_7d8, local_7dc, local_79c, local_794, local_848, local_798, local_7f4,
local_7e0, local_790` - i.e. **the 22 fields are written straight into the struct**, in that order.
Not yet verified against the instruction stream: the `&`-vs-value inconsistency of the decompiler on
`local_258` (a 256-byte buffer) and `local_790`/`local_79c`/`local_794`/`local_798`.

## 7. The real blocker for both 403 and 1509: map cells
Gate 5 of 403 (`0x1402c3cc0(map,x,y)`) is the **same** walkability predicate 1509 uses, and it reads the
terrain cell (`[map+0x60]->vt[0x18](x,y) == 0`). The rebuild has no terrain/obstacle loader at all - its
1107 (FlyMap) port only checks `map_exists`, and its own source notes "our maps are flat".
So one subsystem - **map terrain cells** - blocks **403 (93 rows) + 1509 (9 rows)** and makes 1107
faithful. That makes it the highest-value subsystem in the project right now, ahead of the 0x6c struct.

