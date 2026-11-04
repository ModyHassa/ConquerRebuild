# TEAM SYSTEM DECODE — Conquer Online v6159 (MsgServer)

Status: IN PROGRESS. Every fact below is appended only after being proven against decompiled/*.c with file:line citations.

## Evidence base
- decompiled/MsgServer.c
- decompiled/msgserver_gameaction.c
- docs/lua_key_table.md

## 1. KEY 1013 GETTER CHAIN (PINNED)

Evidence: decompiled/MsgServer.c:870859-870871

```c
case 0x3f5:                                  /* 1013 */
    plVar9 = (longlong *)FUN_140118320();     /* team manager singleton */
    if (plVar9 != 0) {
      lVar7 = *plVar9;                        /* manager vtable */
      uVar4 = (**(code **)(*plVar8 + 8))(plVar8);   /* user->GetID()  (user vtbl+8) */
      iVar5 = (**(code **)(lVar7 + 0x28))(plVar9, uVar4);  /* mgr vtbl+0x28 = LookupUserTeam(id) */
      if (iVar5 == 0) { uVar11 = 0; }          /* no team -> 0 */
      else {
        uVar4 = FUN_140167b40(plVar8);         /* second arg (see note) */
        uVar11 = (**(code **)(*plVar9 + 0x50))(plVar9, iVar5, uVar4);  /* mgr vtbl+0x50 = GetMemberCount */
      }
    }
    break;
```

- `*plVar8 + 8` on the user object = GetID (same slot the key-table uses for key 1001
  G_PLAYER_ID, lua_key_table.md "user vtbl+8 (C:870826)").
- Manager vtable **+0x28** takes an id and returns a non-zero team handle (truthy check
  `iVar5 == 0` -> 0 members). Its return is stored in an `int`, so the handle is a
  32-bit team id.
- Manager vtable **+0x50** takes (manager, teamhandle, extra) and returns the member
  count -> this is the slot to port for key 1013.
- Redirect target is `*plVar9` (manager vtable) and `lVar7 = *plVar9` is the same
  object, i.e. identical vtable: lookup and count both live on the team manager vtable.

### Manager singleton reach (PINNED)
Evidence: decompiled/MsgServer.c:206496-206510 (`FUN_140118320`)

```c
longlong FUN_140118320(void) {
  if ((DAT_140975d40 & 1) == 0) {            /* one-time-init guard */
    DAT_140975d40 |= 1;
    plVar1 = (longlong *)CurrentInstanceGet();
    DAT_140975d38 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1e);   /* registry index 0x1e = 30 */
  }
  if (DAT_140975d38 == 0) log_InlineLogERROR(&DAT_1406d9c10);
  return DAT_140975d38;
}
```
- Reached via the **server module registry**: `CurrentInstanceGet()` then vtable
  **+0x20** = `GetModule(index)` with **index 0x1e (30)**. Cached in `DAT_140975d38`.
- Sibling getters use the same shape with other indices, e.g. `FUN_1401183a0`
  (C:206515-206529) uses index **0x20 (32)** and caches `DAT_140975d48`.
- Same `GetModule(0x1e)` call appears in Team.c `FUN_1418e11b0`
  (`(**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),0x1e)`
  = GetModule on the owner at +0x830) — independent confirmation that 0x1e is the
  team module.
- Failure log string pointer is `DAT_1406d9c10` (shared "module not found" style
  message; literal text not recovered in the .c dump -> see BLOCKED).

### Module identity (PINNED)
- decompiled/Team.c:1 header: `Decompiled by Ghidra 12.1.4 | program: Team.dll`,
  image base **0x1418e0000**, 1051 functions. So registry index 0x1e maps to
  **Team.dll** (`team::CModule`), which owns `team::CTeamMgr` + `team::CTeamService`.
- decompiled/Team.c:2107 asserts with the original source path:
  `"f:\\version\\cqserver-78.0.11-1204\\modules\\team\\src\\team.cpp"` (line 0x23),
  and the assert expressions are `IF_NOT pTeam` (C:2107, C:2154) and `IF_NOT pInfo`
  (C:2137) -> the file is `team.cpp` of module `team`.
- Team objects are allocated from a **named heap "CTeam"**:
  `CMyHeap::CMyHeap((CMyHeap *)&DAT_141903320,"CTeam")` at Team.c:865, 879, 896, 913,
  2096, 2143. (Heap tag, not a DB table.)
- Team.c:10372 `sprintf(local_148,"Team[%lu] MemberCount[%d] Leader[%lu][%s]")` —
  a dump path that reads exactly {team id, member count, leader id, leader name};
  C:10429 `"\nMember[%lu][%s]"` iterates members. Good confirmation of our field set.
- Dispatch wrapper logs the wire message type:
  Team.c:15152 `"team::pMsg->Process(idActor), idActor:%d, MsgType:%d"`.
- Cross-server sync exists (separate concern): `CTeamService::ProcessOSSyncMsg`
  (Team.c:8170, 18089, 20201), `CTeamService::OnOSUserLogin` (C:13709),
  `OnOSUserLeave` (C:20241), `OnOSDestroyTeam` (C:12811, 19561),
  `CTeamMgr::SendOtherServer` (C:6555, 17939). Maps `m_mapOSTeam` keyed by server id.

