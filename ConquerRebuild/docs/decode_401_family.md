# Old-engine family 401/402/403/532/542-544 — worker findings (v103)

Source: decode worker report (Nov 4, 2026), recorded here verbatim in substance
because the worker exceeded its tool limit before it could write its own file.
Confidence is marked per row: PROVEN = cited in the decompile; INFERRED = the
worker derived it from names/structure and it still needs confirmation.

## The dispatcher (PROVEN, MsgServer.c:223633-223666)
`ProcessAction` routes:
- 401..497 -> `FUN_1401199d0`
- 501..598 -> `FUN_140123590` (relative jump table at `0x140126a3c`, index = type-501)
Branch rule for every type: handler returns false -> `id_nextfail`, true -> `id_next`.

## 401 (94 rows) — PROVEN AND PORTED (v103)
`sscanf "%u %d %d %d %d"`; stores f1 into `player+0xa34` (int32); sends packet
**2031 (0x7EF)** with `+0`=tick, `+4`=f5, `+8`=unknown, `+0xC`=5, `+0xE`=f2.
Correction to an earlier coordinator verdict: the log tag `EVENT_LAYNPC` DOES
exist in the decompile, so rejecting 401 on "missing EVENT_LAYNPC" was wrong.
RESOLVED in v103 by disassembly of `0x14011a5ff..0x14011a7a5`:

| step | proof |
|---|---|
| `sscanf(param,"%u %d %d %d %d")` | `lea r8,[rsp+0xcc]`, `lea r9,[rsp+0xc0]`, then `[rsp+0x20]=&[rsp+0xd0]`, `[rsp+0x28]=&[rsp+0xc8]`, `[rsp+0x30]=&[rsp+0xc4]` |
| needs >= 4 tokens | `cmp eax,0x4` / `jge` |
| field 1 (v1) at user+0xa34 | `mov eax,[rsp+0xcc]; test; jne; mov [rbp+0xa34],eax` |
| v1 must be non-zero | else log `CHECKF "idNextTask != ID_NONE"` (`0x1064`) and return 0 |
| task name cleared | `FUN_140117b50(user, "")` |
| 2031 to SELF | `r8d=[rsp+0xc4]=v5`, `r9d=[rsp+0xc0]=v2`, `[rsp+0x20]=[rsp+0xc8]=v4`, `edx=5`, then `call 0x14037d520` |
| 2031 body | `FUN_14037d520`: type `0x7EF`, size `0x10`, `+4=tick`, `+4=param_3`, `+0xC=param_2`(u16), `+0xE=param_4`(u16), `+8=param_5` -> wire `+0x04 tick, +0x08 v5, +0x0C v4, +0x10 5, +0x12 v2`, len `0x14` |
| field 3 | parsed into `[rsp+0xd0]` and NEVER read |

Implemented as `case 401` in `src/systems/actions.hpp` with `Player.next_task_id`
(the original's `user+0xa34`); `tests/test_actions_v103.py` asserts the exact
2031 bytes, the ok/fail branches and that the zero-id path emits no push.

## 402 (303 rows) — pure conditional gate
No SQL, no packet. f1 = subject (all/furniture/name/type), f2 = value,
f3 = op (`==` or `<`), f4 = a constant.
Body read in v103 (`MsgServer.c:207735-207782`), so the gate is now PROVEN:

```c
sscanf(param,"%s %s %s %d", subject, name, op, value);   // must be exactly 4
mgr = *(void**)FUN_1400875f0(FUN_140008520(context+0x48));  // role manager
map = user_info->slot+0x168();                              // the map id
subject "all"       -> count = mgr->slot+0x90(map)
        "furniture" -> count = mgr->slot+0x98(map)
        "name"      -> count = mgr->slot+0xA0(map, name)
        "type"      -> count = mgr->slot+0xA8(map, strtoul(name))
        anything else -> return 0
return (op=="<"  && count <  value) ||
       (op=="==" && count == value);
```
The surrounding string `CRoleManager::CountFurnitureNpc` confirms the family.
BLOCKER (the only one left): the four CRoleManager count methods themselves -
what "all" counts (players? npcs? everything) is not established, so the type is
still not ported.

## 403 (93 rows) — format PROVEN, structure missing
A 22-field conversion plus an owner rule were recovered, but the NPC info
structure (108 bytes) is not decoded, so executing it would be a guess.
BLOCKED.

## 532 (252 rows) — NOT in the action switch at all (PROVEN)
It is triggered from item attribute `0x71` through `FUN_140122f90`. Any attempt
to run it through `case 532` is wrong by design.

## 542 (78 rows) — body present, field order open
All 115 rows have an EMPTY param. Repo history says 542 was ported in v71, so
`tools/coverage.py` counting it as unported must be re-checked before any work.

## 543 (78 rows) and 544 (1 row)
Frozen on the definition of four helper functions; nothing portable yet.
