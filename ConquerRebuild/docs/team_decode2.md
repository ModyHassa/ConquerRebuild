# TEAM MODULE FULL DECODE — Team.dll (registry index 0x1e)
Source: decompiled/Team.c (Ghidra 12.1.4, image base 0x1418e0000, 1051 functions)
Rule: every claim cites file:line. No guess is promoted to fact; unknown => UNKNOWN.

## 0. ALREADY-PROVEN FACTS (carried forward, re-verified)

| Fact | Evidence |
|---|---|
| Registry index **0x1e (30)** = Team.dll module | `FUN_140118320` (MsgServer.c:206496-206510) calls `CurrentInstanceGet()` vtable+0x20 = GetModule(0x1e), caches `DAT_140975d38`; Team.c `FUN_1418e11b0` also does `GetModule(...,0x1e)` |
| Manager singleton = `FUN_140118320` | Team.c consumers call `FUN_140118320()` then `*plVar9` = vtable |
| Manager vtable **+0x28** = `LookupUserTeam(id)` -> team handle (32-bit) | MsgServer.c:870859-870871; return stored in int, `== 0` means no team |
| Manager vtable **+0x50** = `GetMemberCount(mgr, team, extra)` | MsgServer.c:870859-870871 |
| Team.c:145-165 dispatches wire types **0x3ea, 0x3eb, 0x3ff, 0x7fd** | handler objects at module +0x10 / +0x420 / +0x840 |
| Team object heap tag `"CTeam"` | `CMyHeap::CMyHeap(...,"CTeam")` at Team.c:865, 879, 896, 913, 2096, 2143 |
| Source is `modules/team/src/team.cpp` | Team.c:2107 assert path `f:\version\cqserver-78.0.11-1204\modules\team\src\team.cpp` |
| Dump format proves field set {team id, member count, leader id, leader name} | Team.c:10372 `"Team[%lu] MemberCount[%d] Leader[%lu][%s]"`; C:10429 `"\nMember[%lu][%s]"` |

