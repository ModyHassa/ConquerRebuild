# worker_v132b_1654 — Dialog family types 1654 and 1651 (final decode)

Binary: `../conquer_source/Source/MsgServer.exe` (PE x64, image base 0x140000000)
Disassembly: `/tmp/full.txt`
Repo: `/app/conversations/6ad7881a9883f31f19595f39/ConquerRebuild`
DB: `cq` (MariaDB)

Scope: type **1654** (28 rows) and type **1651** (95 rows) in the packet/action map.
Everything below is appended only after being verified against the disassembly.

## Already verified (given, NOT re-derived here)
- Dialog state block: `CUser+0x968` = state, `+0x96c`, `+0x970` = target, `+0x974` = kind.
- 1650 opens the dialog (`CMsgAction` action word 171).
- 1652 closes it (`CMsgAction` action word 174).
- `FUN_140362620` builds a `CMsgAction`: action word is the 6th arg -> wire+0x18, payload dword is 7th arg -> wire+0x0C.
- 1651 body `0x140138889`: gates on `state == 2`, parses `'%u'` from the **second** text param, dispatches on context id4 = `ctx->vt[0x10](4) + 0x48`, and on match writes state=3 / target / kind.

---

## Findings (appended as verified)

## 1654 (case 0xa9) — read-only; no state writes (reported by the decode pass)

- Gates: `[user+0x968] != 3` -> return 0; `[user+0x970] == 0` -> return 0;
  `[user+0x974]` must be 1 or 2 -> else return 0.
- `+0x974 == 1`: look the object up in class **0x1040** (the NPC class, per the earlier verified
  `+0x298(0x1040)` decode - *not* a packet id, as one summary of this pass phrased it).
  `[npc+0x68] == 0` -> return 0. `[npc+0xb4] != 0` -> **return 1 with no packet and no state
  change**. Otherwise the predicate `0x1402bf900(npc)` decides: false -> 0, true -> the teardown
  pair `0x140165b50` + `0x140165a10` (close dialog with action 174 and reset the 12-byte state)
  and **return 1**.
- `+0x974 == 2`: look the object up in class **0x1002**; return 0 on a failed query; when
  `[obj+0x154] == 0` and the life getter is non-zero it calls the mutation and then the teardown
  pair; **returns 1 unconditionally** past the query.
- It reads the dialog state but never writes it, so it cannot produce `state == 3` on its own.

## 1651 (case 0xa6) — where the second text param comes from (reported)

The second text param is `FUN_140145f60`'s **argument 6** -> `r12` -> the router's **argument 7** ->
**`%rbx`** inside the case, and it is consumed as a **`%u` entity id**. The body then branches on
the action's `data` column: `1` = name comparison against class 0x1040, `2` = value comparison
against class 0x1002, `3` = value comparison against class 0x1001; on a match it writes
`state = 3`, the target id and the kind.

**Port verdict for both: BLOCKED.**
- 1651 needs that second text parameter, which `ActionRow` does not have (it carries one `param`),
  *and* which of the six call sites actually delivers the traffic is still open.
- 1654 is read-only and its only entry state (`state == 3`) is produced exclusively by 1651, so it
  stays dead code until 1651 is portable.
