# v135 notes — the TRUNK (warehouse) model, and a WARNING about the case-byte jumptable

## The trunk is `cq_item.position >= 9` (evidence, not inference)
`SELECT position, COUNT(*) FROM cq_item GROUP BY position`:

| position | rows | meaning |
|---|---|---|
| 0 | 5475 | inventory (our `load_player_items` only takes this) |
| 1..8 | 8,6,17,20,14,18,2,6 | equipment slots |
| **9..24+** | 7,5,5,7,...,1,2 | **trunk / warehouse slots** |

So a "trunk" item check is `cq_item WHERE player_id = ? AND type = ? AND position >= 9`. The
rebuild currently ignores those rows entirely (`load_player_items` is position<=8).

## 1202 (6 rows) = ACTION_USER_CHECK_ITEM_IN_TRUNCK
Body `0x1401329bf`: `sscanf(param, "%d")` -> one itemtype, then two helper calls
`0x140167070(user, type)` and `0x1401787e0(user, ...)`, and the failure log is literally
`ACTION_USER_CHECK_ITEM_IN_TRUNCK fail, UserId[%u], Action[%u], Hom...` (0x14070c010).

Helper literals read this wave:
- `0x140167070` -> only key **`lastentertime`** (0x140715c20) in range: this is the keyed-store
  getter of `CUser+0x12c0` (the same field action 802 uses), so this helper is NOT the trunk query.
- `0x1401787e0` -> `iduser` (0x140717e68), **`cq_vipminetime`** (0x140717e70), `crossuser`
  (0x140717ea8), `Enter Cross Server OK: user:%s(%u)` (0x140717eb8) - a cross-server entry path, also
  not the trunk query.

**Status: BLOCKED for now** - the two calls in the body do not explain the trunk check, so the trunk
lookup must happen inside `0x140167070` through the keyed store (position keys) or in a helper whose
range I did not read. Do NOT port 1202 by assuming a plain `position >= 9` query until that call is
read in full; the position evidence above only tells us what the STORAGE looks like.

## WARNING — the new-engine case-byte jump table
`DAT_14013aa9c` is indexed by `type - 1001` and its bytes were verified against known cases
(1040->0x22, 1083->0x49, 1095->0x54, 1203->0x6F, 1204->0x70, 1510->0x8C, 1651->0xA6).
**But** computing the case target as `0x14013a7ac + byte*4 + rel32` gives `0x1402698f1` for 1082,
while 1082's real body is `0x14012f025`. So the jumptable at `0x14013a7ac` is either not the one this
router uses or its entries are relative to a different base. **Do not trust any type grouping derived
that way** (a run of it produced a bogus "shared body" list). Use `tools/body_probe.py`, which
resolves bodies from the code, or read the router's own `switch` at `FUN_14012a6e0`.

## 1102 (6 rows) — grammar decoded, manager still unnamed
Body `0x1401357d2`:
- `sscanf(param, "%s %s %I64d")` (fmt 0x14070e340) -> two tokens + one 64-bit number;
- token 1 is compared against **`count`** (0x14070e334), token 2 against **`<`** (0x14070be94), so the
  rows read like `count < N`. A bad token count logs the shared
  `ACTION %u: <bad parameter count>` (0x14070c010) and fails.
- then `0x140118320()` (a singleton getter: instance slot **0x1e = 30**) and `0x140118800(id)`, which
  is a thin wrapper around that singleton's **`vt[0x30]`** call, returning an int.
- `0x14070be94` being `'<'` means the comparison operator itself is data (an `<`, and by the same
  template probably `==`), like the `stc`/`var` families.

**Still UNKNOWN:** which singleton instance slot 30 is (and therefore what `count` counts). Until that
is named, 1102 stays BLOCKED. It is the same "count over a manager" shape as 1202, so both will
probably be solved together.
