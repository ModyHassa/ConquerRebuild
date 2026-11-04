# Action types 2201 (0x899) and 2205 (0x89d) — decode

Status: IN PROGRESS — findings appended below as verified.

Source of truth: `decompiled/MsgServer.c` (Ghidra decompile, 1,361,879 lines).
Caller: `FUN_14015b5d0`. 2201 = `case 0x899`, 2205 = `case 0x89d`.

## 0. Known / given (restated, to be re-verified line-by-line)

- 2201 = case 0x899 at MsgServer.c:240688
- 2205 = case 0x89d at MsgServer.c:240772
- both inside FUN_14015b5d0
- common prefix: FUN_140008520(*(param_1 + 0x410)) -> FUN_140087650(mapid) -> vtable +0x88(userId) -> tq::TalkStrCheck(<buffer>,1), STR_INVALID_CHARACTER on failure
- 2205 additionally: FUN_14015b1f0(mapid) then FUN_14010b370(that, userId, &local_ac8, <parsed string>)
- DB rows: 2201 params `target_bonus == 0`, `hunter_bonus > 0`; 2205 params `target`, `hunter`

## 1. CORRECTION to the "KNOWN" block — the dispatch site in the brief is the WRONG switch

The brief says 2201/2205 are `case 0x899` / `case 0x89d` inside `FUN_14015b5d0`. That switch
**does** contain those labels, but it is the **chat/msgtalk message** switch, not the
`cq_action` switch:

- `FUN_14015b5d0` is at MsgServer.c:239863; cases 0x899/0x89d at MsgServer.c:240688 / 240772.
  Its failure path raises `STR_INVALID_CHARACTER` and its success path appends the text to a
  `CMessageBoard` (see §3). The only file literal in the enclosing switch is
  `...\msgserver\mapgroupkernel\network\msgtalk.cpp` (MsgServer.c:240796-240799, case 0x89e).
- The **`cq_action`** handler for types 0x899..0x89d is a different function:
  `FUN_140141c80` at MsgServer.c:221583, whose own log literals name it:
  `"table:cq_action/cq_newaction, CGameAction::ProcessActionPkBonus() at %s, %d"`
  (MsgServer.c:221620) and `"...ActionID=%u ActionType=%u at %s, %d"` (MsgServer.c:221627).
- Proof this is the right one: it switches on the action type read from
  `(**param_2)->vtable[0x10](param_2, 3)` i.e. **column 3 of cq_action** (MsgServer.c:221629-221630)
  and its branches `_stricmp` the param against exactly the literals in our DB rows:
  `"target_bonus"` (221632), `"hunter_bonus"` (221674), `"target"` (221847), `"hunter"` (221858).

The numeric collision (0x899..0x89e) between the client chat sub-types and the cq_action
types is a coincidence of numbering; the two switches read different inputs (chat string vs
cq_action.param) and produce different effects (message-board post vs DB/instance predicate).

### Consequence for the port
The known-common prefix in the brief (`FUN_140008520 -> FUN_140087650 -> vtable+0x88 ->
tq::TalkStrCheck -> STR_INVALID_CHARACTER -> FUN_14015b1f0 -> FUN_14010b370`) is the
**chat** path and must NOT be implemented for action types 2201/2205. Porting it would post
the action param as a public chat message.
