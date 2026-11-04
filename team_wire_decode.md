# TEAM MODULE WIRE DECODE — Team.dll (registry index 0x1e)

Source of truth: `decompiled/Team.c` (Ghidra 12.1.4, program `Team.dll`, image base
`0x1418e0000`, 1051 functions). Cross-refs: `decompiled/MsgServer.c`.
Rule: every claim cites `file:line`. Nothing unproven is promoted; gaps are UNKNOWN
with the missing artifact named.

## 0. CARRIED-FORWARD PROVEN FACTS (re-verified in this pass)

| # | Fact | Evidence |
|---|---|---|
| 0.1 | Registry index **0x1e (30)** = Team.dll (`team::CModule`) | `MsgServer.c:206496-206510` `FUN_140118320`: `CurrentInstanceGet()` vtbl+0x20 = `GetModule(0x1e)`, cached in `DAT_140975d38`. Independent repeat in Team.c: `FUN_1418e11b0` does `(**(code**)(**(longlong**)(param_1+0x830)+0x30))(*(longlong**)(param_1+0x830),0x1e)` (Team.c:114) |
| 0.2 | Team manager singleton = **`FUN_140118320`** | `MsgServer.c:206496`; consumers load `*plVar9` as vtable |
| 0.3 | Manager vtable **+0x28** = `LookupUserTeam(id)` -> 32-bit team handle (0 = no team) | `MsgServer.c:870859-870871` |
| 0.4 | Manager vtable **+0x50** = `GetMemberCount(mgr, team, extra)` | `MsgServer.c:870859-870871` |
| 0.5 | Team.c message router dispatches wire types **0x3ea, 0x3eb, 0x3ff, 0x7fd** to handler objects at module **+0x10 / +0x420 / +0x840** | Team.c:138-166 `FUN_1418e1290` (see §2) |
| 0.6 | `FUN_1418e1320` (Team.c:174-192) registers exactly those four types | Team.c:184,185,186,187 + intercepts at 188,189 + `AddModule(0x1e,...)` at 190 |
| 0.7 | Team objects come from named heap tag `"CTeam"` | `CMyHeap::CMyHeap(...,"CTeam")` at Team.c:865, 879, 896, 913, 2096, 2143 |
| 0.8 | Source file is `modules/team/src/team.cpp` | Team.c:2107 assert string `f:\version\cqserver-78.0.11-1204\modules\team\src\team.cpp` |

### 0.9 Router, quoted verbatim (Team.c:138-166)

```c
longlong * FUN_1418e1290(longlong param_1,ushort *param_2,ushort param_3)   /* 138 */
{
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {      /* len sanity */
    uVar1 = param_2[1];                    /* +0x02: wire type */
    if (uVar1 < 0x3ea) return 0;
    if (uVar1 < 0x3ec) plVar3 = (longlong *)(param_1 + 0x10);     /* 0x3ea,0x3eb */
    else if (uVar1 == 0x3ff) plVar3 = (longlong *)(param_1 + 0x420);
    else { if (uVar1 != 0x7fd) return 0; plVar3 = (longlong *)(param_1 + 0x840); }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);  /* vtbl+8 = Parse */
    ...
```
- Confirms the generic packet prologue: `u16 size` at +0x00 (compared against the
  passed buffer length `param_3`), `u16 type` at +0x02, payload from +0x04.
- Handler objects are reached through a **vtable at object offset 0**, and the parser
  is **vtable slot +8**, signature `bool Parse(this, u16* buf, u16 len)`.

### 0.10 Module handler dispatch (Team.c:1430-1462, 15132-15152)
```c
undefined8 * FUN_1418e1430(undefined8 *param_1,undefined8 param_2,undefined4 param_3)  /* 1430 module ctor */
{
  *param_1 = gs::IModule::vftable;
  *param_1 = team::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;      /* +0x08  module id (0x1e) */
  FUN_1418f36f0((CMsg *)(param_1 + 2));        /* +0x10  CMsgLog      (0x3ea/0x3eb) */
  FUN_1418f3880((CMsg *)(param_1 + 0x84));     /* +0x420 CMsgTeam     (0x3ff)       */
  param_1[0x106] = param_2;                    /* +0x830 owner/IModuleHost          */
  FUN_1418f3440((CMsg *)(param_1 + 0x108));    /* +0x840 CMsgAutoGroup(0x7fd)       */
  param_1[0x107] = 0;                          /* +0x838 cached CTeamMgr*           */
```
(undefined8* arithmetic: `param_1+2` = byte +0x10, `+0x84` = +0x420, `+0x108` = +0x840.)
- Handler objects are *embedded message objects*, each 0x410 bytes apart (0x410 = 1040 = the
  `CMsg local_448 [1040]` stack objects at Team.c:7035, 6870), so 0x420-0x10 = 0x410 and
  0x840-0x420 = 0x420 (CMsgAutoGroup object is 0x410 + 0x10 pad).
- `FUN_1418e14e0` (Team.c:213-226) is the module's **Process** entry: it resolves the handler
  and calls handler-vtable **+0x10** with `(handler, idActor, mgr)`:
```c
plVar2 = FUN_1418e1290(param_1,param_3,param_4);          /* route by type */
if (plVar2 != 0) { (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x838)); }
```
- So every handler vtable is: `+0x00 dtor`, `+0x08 Parse(this,u16* buf,u16 len)`,
  `+0x10 Process(this,u32 idActor,CTeamMgr* mgr)`.

## 1. CMsgTeam — wire type **0x3ff (1023)** — `team::CMsgTeam`

### 1.1 Class identity
| Item | Evidence |
|---|---|
| ctor `FUN_1418f3880` sets `team::CMsgTeam::vftable`, `m_pBuf(+0x408) = this+8` | Team.c:14285-14292 |
| Parse `FUN_1418f3970`: `tq::CMsg::Create(this,buf,len)` then `*(short*)(this+10) == 0x3ff` | Team.c:14327-14334 |
| Serialiser/builder `FUN_1418f3900` | Team.c:14342-14356 |
| dtor `FUN_1418f38d0` / deleting dtor `FUN_1418f3a10` | Team.c:14301-14306, 14359-14367 |
| The `this+10` test proves `this+0x08` is the wire buffer and `buf+0x02` is the type field | Team.c:14333 |

### 1.2 Builder, verbatim (Team.c:14342-14356)
```c
undefined8 FUN_1418f3900(CMsg *param_1,undefined4 param_2,undefined2 param_3)
{
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xc;                                  /* +0x00 size = 12  */
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3ff;              /* +0x02 type       */
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;            /* +0x08 arg0 (u32) */
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_3;                                     /* +0x04 sub-command*/
  return 1;
}
```

### 1.3 PROVEN LAYOUT (client->server, 0x3ff)
| Off | Size | Field | Proof |
|---|---|---|---|
| +0x00 | u16 | total packet size = **0x0c (12)** for the base form | Team.c:14347 |
| +0x02 | u16 | wire type = **0x3ff** | Team.c:14348, 14333 |
| +0x04 | u16 | **sub-command** (switch discriminant) | written Team.c:14355; switched on Team.c:7074 |
| +0x06 | u16 | pad / never written | builder writes only +0,+2,+4,+8 |
| +0x08 | u32 | **argument 0** — meaning depends on sub-command (team id, user id, or leader id) | Team.c:14349, read at 7082/7175/7234/7311/7410/7443/7454 |
| +0x0a | u16 | tail of arg0 (no separate field) | size 12 |
- **No string is packed by 0x3ff.** The only builder is `FUN_1418f3900`, which writes exactly
  the four fields above; every reader in the switch touches only `buf+4` (u16) and `buf+8`
  (u32). STRING PACKING: none — UNKNOWN/NOT PRESENT for this type (see §2.6 for the type
  that *does* carry strings).
- Total size is **fixed 12 bytes**; there is no variable-length tail.

## 2. The sub-command switch — `CTeamService::ProcessMsg` (Team.c:7012-7517)

Switch head, verbatim (Team.c:7072-7075):
```c
cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(undefined8 *)(param_1 + 8),param_2);  /* "not in team" gate */
if (cVar4 == '\0') {
  lVar18 = *(longlong *)(param_3 + 0x408);
  switch(*(undefined2 *)(lVar18 + 4)) {
```
| Case | Line | Operation proven by the callee it invokes | Port meaning |
|---|---|---|---|
| **0** | 7075-7080 | if `FUN_1418e8210(mgr,actor)==0` then `FUN_1418e9340(mgr,actor)` (creates a team with actor as leader) | **create team** |
| **1** | 7081-7167 | `uVar13 = *(u32*)(buf+8)` = *target team*; refuses if self already has team; `FUN_1418e8210(mgr,uVar13)` resolves it; `FUN_1418e22b0(team) < 5` else `STR_TEAM_FULL`; `FUN_1418e19c0(team)==uVar13` else `STR_NO_CAPTAIN_CLOSE`; `FUN_1418e1a60(team)` (closed flag) else `STR_FORBIDDEN_JOIN`; then re-emits **0x3ff sub=1** with `+8 = actor` and `SendToTeam(team,msg)` (vtbl+0x68), prints `STR_JOIN_REQUEST_SENT` | **apply to join a team** (the copy forwarded to the leader carries sub=1, arg0=applicant) |
| **2** | 7168-7173 | `FUN_1418e8210(mgr,actor)` then `FUN_1418e9a90(mgr,team,actor,2)` (removes the member and broadcasts) | **leave team (self)** |
| **3** | 7174-7231 | `uVar13=*(u32*)(buf+8)`; requires self has no team; resolves team; `<5` members; `FUN_1418e22b0`; leader check `FUN_1418e19c0(team)==uVar13`; arena check; `FUN_1418e9820(mgr,targetTeam,actor)` adds the actor | **accept a join application** (arg0 = inviter/applicant id) |
| **4** | 7232-7309 | actor's own team = `FUN_1418e8210(mgr,actor)`; `FUN_1418e19c0(team)==actor` (must be leader, else `STR_NOT_CAPTAIN_ACCEPT`); `<5`; target online via vtbl+0xa8 else `STR_INVITED_NOT_FOUND`; then re-emits **0x3ff sub=4** with `+8=actor`, `SendToTeam(target's team)`, `STR_INVITE_SENT` | **invite a player** (arg0 = invitee id) |
| **5** | 7310-7387 | team of actor; leader check (`STR_NOT_CAPTAIN_INVITE`); target not already in a team; `FUN_1418e9820(mgr,ownTeam,uVar13)` | **accept an invite** (arg0 = inviter id) |
| **6** | 7388-7393 | own team, `FUN_1418e19c0(team)==actor`, then `FUN_1418e9580(mgr,team)` | **dismiss/disband team (leader only)** |
| **7** | 7394-7416 | own team, target id online, target not in instance, `actor==leader` and `actor != arg0`, then `FUN_1418e9a90(mgr,team,arg0,7)` | **kick member** (arg0 = member id, reason 7) |
| **8** | 7417-7431 | leader only; if flag `+0x47` set, build **0x7fd sub=0** (`FUN_1418f34f0(msg,0,0)`) and `SendToTeam`; then `FUN_1418e1a50(team)` → `+0x44=1`, `+0x47=0` | **close the team to applications** |
| **9** | 7432-7437 | leader only; `FUN_1418e1a40(team)` → `+0x44=0` | **re-open team** |
| **10 (0xa)** | 7438-7443 | leader only; `FUN_1418e1a80(team)` → `+0x45=1` | **set flag +0x45** |
| **11 (0xb)** | 7444-7449 | leader only; `FUN_1418e1a70(team)` → `+0x45=0` | **clear flag +0x45** |
| **12 (0xc)** | 7450-7455 | leader only; `FUN_1418e1ab0(team)` → `+0x46=1` | **set flag +0x46** |
| **13 (0xd)** | 7456-7461 | leader only; `FUN_1418e1aa0(team)` → `+0x46=0` | **clear flag +0x46** |
| **14 (0xe)** | 7462-7468 | `iVar5=*(u32*)(buf+8)` must be online; rewrites `buf+8 = actor` and `SendToTeam(iVar5, msg)` (relay only) | **relay to another team** (arg0 = destination team id) |
| >0xe | none | switch has **no default label**; unknown values do nothing | Team.c:7074-7468 |

## 3. Final worker report — extra proven facts (v98 implementation)

- **Member cap = 5**: `FUN_1418e22b0` clamps the count (`Team.c:940-945`), and four
  `< 5` gates plus the five-slot loops confirm it.
- **CTeam** (0x48 bytes from the `"CTeam"` heap): member array `+0x20`, its end
  `+0x28` (count = `(end-start)/4`), `id +0x3c`, `leader +0x40`, closed flag
  `+0x44`, and flags `+0x45` / `+0x46` / `+0x47` (clearing `+0x47` also clears
  `+0x44`).
- **Team info struct** is 0x20 bytes: `team_id, leader_id, member[5], f45, f46, f47`.
- **Outbound packets**: `0x3ff` (12 bytes), `0x7fd` (20 bytes, four builders),
  and **`0x402` CMsgTeamMember, 0x94 bytes**, which carries the team id, the
  leader and the five members and is sent to every member. 0x402 offsets are NOT
  pinned yet, so the rebuild does not emit it (no invented layout).
- **Correction to an earlier assumption**: `0x3ea` / `0x3eb` are NOT team-info
  packets - they are `CMsgLog`, variable length, and carry no id at all.
- There is **no "change leader" and no "query" sub-command** in the switch.

## 4. Port status (v98, commit for the team wave)

Implemented in `src/systems/team.hpp` + the `MSG_TEAM_1023` handler: an
in-memory `TeamManager` (lookup by user, `GetMemberCount` clamped to 5) and the
proven sub-commands 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10-13 and 14. Lua
`GetUserInt(uid, 1013)` now returns the real member count.
Documented deviations, all flagged in code:
- a LEADER leaving via sub 2 dissolves the team, because the original removes a
  member through `FUN_1418e9a90(..., 2)` and whether it reassigns leadership is
  NOT proven;
- sub 4 delivers the invitation 1023 to the invitee (the decode says
  `SendToTeam(target's team)`, but an invitee has no team by definition).
Blocks still open: `0x402` offsets, and sub 1 needs the client to learn a team
id, which only `0x402` would teach it.
