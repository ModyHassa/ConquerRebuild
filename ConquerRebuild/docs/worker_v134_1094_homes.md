# v134 decode notes: 1094, and the HOME model's real shape

## 1094 (11 rows) — case body 0x140137f06, verified instruction by instruction

```
140137f0d  if (user->vt[0x108]() < 2) return FALSE          ; "< 2" gate on a user getter
140137f2a  esi = id4 (ctx slot 4 -> +0x48, i.e. the action's `data` column)
140137f38  ecx = *(u8*)(user+0xEEE)
140137f40  edi = (ecx / 10) * 10                            ; the TENS BUCKET of that byte
140137f4f  if (esi != 0 && esi != edi) return FALSE         ; data must equal the bucket
140137f61  eax = (0x140165580(user) / 10) * 10              ; = *(u8*)(user+0xEDB) bucket
140137f77  if (edi != eax) return FALSE
           ... then 0x140165570(user) = *(u8*)(user+0xEDA), same tens-bucket compare
```
So 1094 = **"three tier bytes must agree"**: `+0xEEE`, `+0xEDB` and `+0xEDA` are u8 fields whose
tens digit (0,10,...,250) must be equal, and the action's `data` either 0 or equal to that bucket.
`0x140165580` = `movzbl 0xedb(%rcx)` and `0x140165570` = `movzbl 0xeda(%rcx)` (both read directly).

**Port verdict: BLOCKED** - the rebuild has no such tier bytes. Which CUser stats they are
(a 0-255 "tier/grade" trio) is not identified yet; naming them is the only thing missing.

## The HOME model is much simpler than assumed: `cq_map.owner_id`

`DESCRIBE cq_map`:

| column | type |
|---|---|
| id | int unsigned PK |
| name | varchar(35) |
| describe_text | varchar(127) |
| mapdoc | int unsigned |
| **type** | bigint(4) unsigned (a bitmask - Desert = 70368744185856, OfflineTG = 2254017091403854, LotteryMap = 852558) |
| **owner_id** | int unsigned NULL |
| mapgroup | int unsigned |

- A home map is therefore **a `cq_map` row with `owner_id` set**, and the player's own home is
  `cq_user.home_id` (the field the date container maps at `CUser+0xB4`). Exactly 1 row in the real
  dump has `home_id <> 0`, which matches a mostly-unused test DB.
- That is enough to implement 403's two ownership gates **without guessing**: gate 3 = "the current
  map id equals `cq_user.home_id`" and gate 4 = "`cq_map.owner_id` of that map equals the player id".
- What 403 still lacks is the other two thirds: the **item-driven** entry point (it is
  `CGameAction::ProcessActionItemOnly`, fed by the accept string of the furniture item the player is
  using) and the **CNpc::Create(m_idProcess, &info, ITEMDATA_TYPE, pName)** with the 108-byte struct.

**Recommendation for the remaining credits:** build the home model (`cq_map.owner_id` +
`cq_user.home_id` + a furniture item path) and port 403 in the same wave - 93 rows, and it is now
evidence-based from the schema rather than a guess.
