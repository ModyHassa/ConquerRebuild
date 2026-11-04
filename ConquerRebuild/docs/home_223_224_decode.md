# HOME subsystem decode — action types 223 (0xdf) and 224 (0xe0)

Status: IN PROGRESS — facts appended as verified.
Every claim below carries a file:line citation. Anything unverified is marked UNKNOWN or BLOCKED.

## 0. Prior proven facts (copied, to be re-verified)

- 224 = case 0xe0 at decompiled/MsgServer.c:219061
- 223 = case 0xdf at decompiled/MsgServer.c:218844
- `%user_home_id` -> `*(uint32_t*)(user+0xf2c)`, string at VA 0x14070b4b8, load at 0x14012128c
- no cq_house table; home state is `cq_user.home_id`


## FINAL VERDICT (worker, v98) - 223/224 remain BLOCKED
- Param rules confirmed from the disassembly: 224 = `"%u %d %d"` (a and b
  mandatory, c optional; the answer is `count >= 1` or `count >= c`);
  223 = `"%user_home_id <n> <x> <y> [(x,y)...]"` with a 64-number cap and at
  least four numbers, and it MOVES home NPCs to those points.
- **`+0xa8` identity is BLOCKED.** The function the worker reached
  (`0x140089920`) is NOT a counter: it is a strlen plus a broadcast returning
  bool. So the "count" reading of 224 is probably wrong.
- The `kernel+0x88` split is not proven to be CMapGroup at all.
- Nothing is implemented for 223/224 in the rebuild; the earlier note that 224
  is a count test must be treated as unverified.
