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

---

## 1654 — verified branch table from the body itself (case 0xa9, body 0x140138ce8..0x140138e44)

Read instruction by instruction this wave; every address below was dumped.

```
140138ce8  cmpb $0x3,0x968(%r13) ; jne -> 0x140138e42 (xor al,al -> FALSE)
140138cf6  cmpl $0x0,0x970(%r13) ; je  -> FALSE            ; target must be non-zero
140138d04  eax = 0x974(%r13) ; ==1 -> kind1 ; ==2 -> kind2 ; else FALSE
140138d1c  object manager = 0x1400875f0(0x140008520([r12+0x48]))
           obj = mgr->vt[0x20](target) ; NULL -> FALSE
140138d51  if kind != 1 goto kind2
--- kind 1 (NPC) ---
140138d6c  if (!obj->vt[0x298](0x1040, &npc)) -> FALSE        ; QueryInterface(NPC)
140138d87  cmp %r14b(=0),0x68(%rcx): jne ok ; je -> FALSE     ; **[npc+0x68] must be non-zero**
140138d94  cmp %r14d(=0),0xb4(%rcx): jne -> 0x140138dc4      ; **[npc+0xb4] != 0 -> return TRUE**
140138d9d  call 0x1402bf900(npc) ; je -> FALSE               ; the dialog predicate
140138da9  0x140165b50(user)   ; close: CMsgAction 174, returns send success
140138db1  0x140165a10(user)   ; reset: +0x968=0, +0x970=0, +0x974=0
140138db6  return TRUE
--- kind 2 ---
140138dea  if (!obj->vt[0x298](0x1002, &o)) -> FALSE
140138e05  cmp 0x154(%rcx),0: jne -> 0x140138e3b (return TRUE, NO side effects)
140138e0e  rcx = o+0x10 ; if (!(*(rcx))->vt[0x78]()) -> return TRUE       ; "life" getter
140138e26  0x14038e270(o, dl=1)     ; **UNKNOWN effect**
140138e2e  0x140165b50(user) ; 0x140165a10(user)                         ; close + reset
140138e3b  return TRUE
140138e42  FALSE
```

**Port verdict: BLOCKED (three concrete unknowns, nothing inferred):**
1. `[npc+0x68]` — a u8 that must be non-zero for the NPC branch to continue.
2. `[npc+0xb4]` — a u32 that, when non-zero, makes the action return TRUE **without closing**.
3. `0x14038e270(obj, 1)` in kind 2 — the flagged mutation, not yet identified.
The gate structure itself is complete, so the port is three facts away.

## 0x1402bf900 (the kind-1 predicate) — head only
```
1402bf908  cmpb $0x0,0x68(%rcx) ; jne 0x1402bf917
1402bf911  cmpb $0x0,0x69(%rcx) ; je  0x1402bf924
1402bf917  cmpl $0x0,0xb4(%rcx) ; je  0x1402bfa5c
1402bf924  cmpl $0x0,0xb4(%rcx)
```
It re-tests the same two fields, so the whole branch hinges on the same two UNKNOWNs.
