# HOME subsystem decode — action types 223 (0xdf) and 224 (0xe0)

Status: IN PROGRESS — facts appended as verified.
Every claim below carries a file:line citation. Anything unverified is marked UNKNOWN or BLOCKED.

## 0. Prior proven facts (copied, to be re-verified)

- 224 = case 0xe0 at decompiled/MsgServer.c:219061
- 223 = case 0xdf at decompiled/MsgServer.c:218844
- `%user_home_id` -> `*(uint32_t*)(user+0xf2c)`, string at VA 0x14070b4b8, load at 0x14012128c
- no cq_house table; home state is `cq_user.home_id`

