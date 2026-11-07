# The 1000-ladder's "single call" actions (v133d)

Several unported types in the 1001-1729 router have a body that is **one call on the CUser** and
nothing else. Their whole behaviour is the callee, so they must be ported by identifying the
function, not by reading the case.

| type | body | the single call | what the callee is (verified) |
|---|---|---|---|
| 1023 | `0x14012fd4a` | `0x140172910(user)` | **claim a `cq_bonus` row**: `SELECT * FROM cq_bonus WHERE id_account = %u AND flag = 0 LIMIT 1`, with `STR_BAG_FULL` (0x140700ba0) as the failure message - i.e. it grants an item from the account's bonus row |
| 1078 | `0x14012c01b` | `0x1401ac210(user, a->data)` | **redeem an `emoney_card`** (see docs/worker_v133_1078.md) |
| 1079 | `0x14012c04b` | `0x1401ac720(user)` | the second card operation: same `ref_id`/`time_stamp`/`chk_sum` keys and another SQL pair (`0x140714528`, `0x140717688`) |

Two further bodies follow 1078's in memory and are also parameterless calls
(`0x1401acc30`, `0x1401ad0f0`, at bodies `0x14012c062` and `0x14012c079`) - very likely more of the
same family, so identifying them should be done in the same pass.

## Recommended order for the remaining credits
1. **1078 + 1079 + the two siblings** in one pass: decode `0x1401742b0` (the grant reached with the
   card `price`; the google checkout log's `nItemCount` says it grants ITEMS) and `0x140164640` (the
   checksum, which builds a string then hashes it - port it verbatim). That is 4 types in one build.
2. **1023**: needs `cq_bonus` (table exists, 0 rows in this dump) + the item grant; small but clean.
3. **1654** (28 rows) is still the biggest single prize that is not subsystem-blocked, but its three
   facts (`[npc+0x68]`, `[npc+0xb4]`, `0x14038e270`) are CNpc-internal and need the CNpc
   constructor at `0x14010d435` read properly (it allocates `0x70` bytes and sets `+0x68`/`+0x69`,
   so it is the right place to name them).
