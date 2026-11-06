# CMsgAction 10010 — the builder `FUN_140362620` parameter map (VERIFIED)

Read instruction by instruction from `0x140362620..0x1403626f5`. The body buffer pointer is
`msg+0x428`; a `[len][type]` 4-byte header is prepended at send, so **wire offset = body offset + 4**.

| body | wire | source |
|---|---|---|
| +0x00 | **+0x04** | `GetTime()` tick (0x14036266c) |
| +0x04 | **+0x08** | `edx` = param 2, the **actor id** (0x140362687); `edx == 0` makes the whole builder return 0 (0x14036263f) |
| +0x08 | **+0x0C** | **7th argument** (dword, `[rsp+0x38]` of the caller) (0x1403626bb) |
| +0x10 | **+0x14** | **8th argument** (dword, `[rsp+0x40]`) (0x1403626c9) - it OVERWRITES the second tick that 0x14036267d wrote |
| +0x14 | **+0x18** | **6th argument** (word, `[rsp+0x30]`) = **the action id** (0x1403626d8) |
| +0x16 | **+0x1A** | **5th argument** (word, `[rsp+0x28]`) (0x1403626ac) |
| +0x18 | **+0x1C** | `r8d` low word (0x140362691) |
| +0x1A | **+0x1E** | `r9d` low word (0x14036269c) |

Type/size stores of the same function: `msg+0x08 = 0x271A` (10010) and `msg+0x0C = 0x26` (38),
0x140362651/0x140362658.

## Cross-checks against known call sites
* **1650** (0x140138790) passes the parsed index as the word at `[rsp+0x30]` while the action word
  `0xAB` (171) sits at `[rsp+0x28]`? No - the mov order there puts **0xAB into the 6th slot**, so
  action 171 lands at **wire+0x18**, the parsed index (5th) at **wire+0x1A**, and the "idNPC" dword
  (7th) at **wire+0x0C**. This matches the v39 finding that a CMsgAction's action word is at
  wire+0x18, and it means the field the earlier notes called "field 38 / +0x14" is in fact
  **wire+0x1A**.
* **1043** (0x1401627b0): `eax = 0x6e` (110) into the 6th slot → **wire+0x18**, `ebp = elem NType`
  into the 7th slot → **wire+0x0C**, `[rsp+0x38] = 0` into the 8th → **wire+0x14**.
* **1046** (0x14013561e): `eax = 0x7e` (126) → wire+0x18, the action's `data` cell in the 7th slot
  → **wire+0x0C**.

## Rebuild mapping
`build_action_10010(actor_id, data, action, dir, x, y, ext, target2, slot14)` writes
actor@+0x08, data@+0x0C, +0x10, slot14@+0x14, action@+0x18, dir@+0x1A, x@+0x1C, y@+0x1E,
ext@+0x20, target2@+0x24 - so `data` = the builder's 7th argument and `action` = its 6th, exactly
as above. The original never writes +0x20/+0x24 for this helper (body size 0x26).
