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

## 402 (303 rows) — PROVEN AND PORTED (v105)
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
The four counters are NAMED BY THE BINARY ITSELF: the catch handlers at
`MsgServer.c:1230575+` are `Catch_1406691d0` = "CRoleManager::CountAllNpc",
`Catch_140669210` = "CRoleManager::CountFurnitureNpc", `Catch_140669250` =
"CRoleManager::CountNpcByName", and the next thunk = "CountNpcByType" - exactly
matching the four subject keywords, in the same order as the vtable slots.

Shipped content uses only two of them:

| subject | rows | example |
|---|---|---|
| `type` | 297 | `type 25 < 8` |
| `name` | 6 | `name ItemBox < 3`, `name Princess == 1`, `name %syn_name == 1` |
| `all` / `furniture` | 0 | never used by any row |

IMPLEMENTED: `type` and `name` count NPCs on the actor's map over `cq_npc` plus
`cq_dynanpc` (the two NPC sources this rebuild models), then apply the proven
gate `<` / `==`. `all` and `furniture` have zero rows and their furniture
predicate is still UNKNOWN, so they log and take `id_nextfail` - they are never
guessed. The `%syn_name` rows (guild NPC names) stay literal because the guild
NPC is not modelled yet.

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

## 112 (18 rows) — WIRE CORRECTION (v107)
Type 112 was already implemented, but with the two fields SWAPPED. Re-verified
2026-11-05 from the builder body `FUN_1403a6400` (MsgServer.c:657813-657841) and
the call site disassembly at `0x140144007-0x14014406x`:

```
GetField(4) via vtbl +0x48 -> ebx  = the DATA column (numeric)
GetField(5) via vtbl +0x78 -> rdi  = the PARAM column (text)
call FUN_1403a6400(buf, edx=0x70 /*mode*/, r8=text, r9d=ebx /*param_4*/,
                   [rsp+0x20]=0 /*param_5*/)
```
The builder writes `payload+0x08 = param_5` and `payload+0x0A = param_4`, and the
payload base is `obj+0x428` = wire+4, therefore:

| wire | value |
|---|---|
| +0x08 | 0 (pic1) |
| +0x0A | 0 (pic2) |
| +0x0C | **0** — reply id (= param_5) |
| +0x0E | **(u8)DATA** — the FACE (= param_4) |
| +0x0F | **112** — mode (= param_2) |
| +0x10 | string packer with the PARAM text |

The old port sent `send_line(112, face=0, aid=DATA, ...)`, i.e. it put DATA in the
reply-id slot and left the face at zero. Fixed to
`send_line(112, (uint8_t)a->data, 0, 0, 0, a->param)`; `tests/test_actions_v44.py`
and `tests/test_actions_v62.py` enshrined the wrong expectation and were corrected
to assert reply-id 0 and face = DATA. New `tests/test_actions_v106.py` proves the
three slots directly from the wire.

## 1083 / 1084 / 1086 — the "god exp time" family (v111-v112 findings)

`user+0xf38` holds a **packed date `YYMMDDhh`** (2-digit year), decoded by
`FUN_140382850` (MsgServer.c:633939-633978): hour = `v%100`, day = digit pair 2,
month = digit pair 4 minus 1, year = digit pair 6 plus 100, minutes/seconds 0,
then `_mktime32`.

`FUN_140382960(user, unit, roundUp)` (633979) is the remaining-time getter:
`t = FUN_140382850(user)`; `t == 0 || t < now` -> 0; else `rem = t - now` and
unit 0 = seconds, 1 = `(rem + 30*roundUp)/60`, 2 = `(rem + 1800*roundUp)/3600`,
3 = `(rem + 43200*roundUp)/86400`.

`FUN_140382b00(user, hours)` (634044) adds time: when the current value is 0 or in
the past it first aligns to the next hour (`((now+0xE0F)/0xE10)*0xE10`, keeping the
offset `iVar7 = aligned - now`) and calls `FUN_140164ef0(user)`; then it writes the
persisted per-user record field **0x1c** with `hours*3600 + iVar7`.

1083 = case 0x49: `sscanf "%s %d"` (exactly 2 tokens), then
`"<"` -> branch on `FUN_140382960(user,2,0) < v`; `"=="` -> branch on
`FUN_140382960(user,2) == v`; `"+="` -> `FUN_140382b00(user,v)` and continue;
`"chk"` -> `v != 0 ? FUN_140382350(user) : FUN_140383750(user)`, where
`FUN_140382350` = user-object flag query for index **0x1b** and `FUN_140383750`
= flag **0x1c** OR (remaining seconds >= 1). BLOCKED on: the semantics of user
flags 0x1b/0x1c (vtable slot +0x2D8 with an index) and the DB column behind the
persisted record field 0x1c.

1084 = case 0x4A (PORTED v111) and 1086 = case 0x4C (PORTED v109).
