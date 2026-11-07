# The action router's SECOND text parameter (v133)

## What the binary does (verified)
`FUN_140145f60` is the dialog/action entry that hosts the type router. Its stack argument is
loaded into **`r12`** (`0x140145fb3: mov 0x1168(%rsp),%r12`) and forwarded to the router, where the
action cases see it in **`%rbx`**. The dialog family consumes it:

- **1651** parses it with `"%u"` (exactly one conversion) as the **selected entity id**, then
  dispatches on `id4 = ctx->vt[0x10](4)+0x48` (the action's `data` column):
  `1` = compare `%s` (the FIRST text param) against the **0x1040 (NPC)** name,
  `2` = compare a value against the **0x1002** object, `3` = against the **0x1001** object.

The DB has a single `param` column, and `cq_action` rows for 1651 only carry that one string (the
value being compared), so the entity id cannot come from static data: it arrives with the
traffic.

## The dialog state machine around it
- **1650** opens: gate `state == 0`, sends CMsgAction **171**, then `state=1`,
  `+0x96c = data`, `+0x970 = 0`, `+0x974 = 0`.
- **the select step**: the ONLY write of `state = 2` anywhere in the binary is `0x140367333`
  (`movb $0x2,[user+0x968]`, then `%r15d` into both `+0x970` and `+0x974`), inside a packet
  handler. 1651 gates on `state == 2` and reads neither of those fields for its gate (it
  overwrites both on a match), so the select step's payload is not load-bearing for 1651.
- **1651** (this wave) matches and writes `state=3, +0x96c=0, +0x970=selected id, +0x974=id4`;
  on a mismatch it writes `state=1` and re-sends CMsgAction **175**.
- **1652** closes: sends CMsgAction **174**, and only on a successful send resets the state block.

## ENGINE MAPPING (this rebuild) — documented, not proven from the binary
`ActionRow::param2` exists but is **never filled from the DB**. The NPC-click handler
(`MSG_NPC_CLICK` 2031) copies the packet's third dword (`wire+0x0C`, the selected element id) into
`Player::chain_param2`, and when that value is non-zero while `dlg_state == 1` it performs the
select step (`state = 2`, target and kind = that id).

Rationale: the click's `wire+0x0C` is the only entity-selection value the client sends with a
click, and it is exactly what 1651 needs (`"%u"` = an entity id). The card-carrying fact is that
the id must come from traffic, not from `cq_action`; which message field carries it in the
original is **still UNKNOWN**, so this is flagged as a mapping rather than a port fact.
