# v142 — the lottery provider object, and why 1509 is NOT lottery

Binary `../conquer_source/Source/MsgServer.exe` (base 0x140000000), `../conquer_source/Source/Lottery.dll`
(base 0x141520000). Every statement cites the instruction address or the literal actually read.

## 0 — import slots resolved by name
| IAT VA | symbol |
|---|---|
| 0x1406d8df0 | `CurrentInstanceGet` (hint/name @0x140946b62) |
| 0x1406d8a58 | `strtoul` (@0x140946c74) |
| 0x1406d8348 | `?log_InlineLogERROR@@YAXPEBDZZ` (@0x140946438) |
Literals read: 0x14070e100 `pLotteryProvider`, 0x14070bbd0 `...\msgserver\mapgroupkernel\gameaction.cpp`,
0x1406dbfa0 `IF_NOT`, 0x1406f3b20 `m_pMapManager`, 0x1406dc150
`CMapGroup::IsValidMapGroupProcessID(idProcess)`, 0x1406dc180 `...\mapgroupkernel\mapgroup.h`,
0x1406daa14 `ASSERT`.

## 1 — CORRECTION: 0x140008520 is CMapGroup::GetMapGroup (stride 0x850), not a provider getter
Extent 0x140008520..0x1400085b1: `0x140008528 call 0x1400084e0` (range check, `cmp ecx,0xe` at
0x1400084e0) with CHECKF `CMapGroup::IsValidMapGroupProcessID(idProcess)` (0x1406dc150), mapgroup.h line
`0x379`=889 -> 0; `0x1400085a1 imul rbx,rbx,0x850`; `0x1400085a8 lea rax,[r8+rbx]` -> `&g_mapGroups[id]`
(table 0x140975c20..0x140975c28, **record stride 0x850**).
Consequence: the repo's `user+0x1230 -> 0x140008520 -> +0x98` chain is **map-group -> m_pMapManager**
(ASSERT at 0x1401c7c87/0x1401c7e41 prints `m_pMapManager ... mapgroup.h, 0x131`=305). The v141 note
calling 0x140008520 "the provider getter" is **wrong and superseded**.
Additional proof from 1024 (v144): the same `[player+0x1230] -> 0x140008520 -> +0x90` pair carries the
CHECKF `m_pUserManager` (0x1406f3b10, line 0x130) and `vt[0x98](player id)` looks a user up by id. So the
chain used by 1078/1079 is **mapgroup -> m_pUserManager -> GetUserById(value)**, a *lookup*, not a
balance/item delivery.

## 2 — 1508: provider identity and the single slot, fully proven
Body 0x140136e68..0x140136f04. `0x140136e68 mov ebx,0xa` = provider id **10**;
`0x140136e75 strtoul(param,NULL,10)`; `0x140136e96 CurrentInstanceGet`; `0x140136ea4 call [rdi+0x20]` =
CGame `GetProvider` (v124 fact 1). NULL -> `IF_NOT pLotteryProvider` gameaction.cpp 0x2b55=11093 -> false.
`0x140136f02 call QWORD PTR [rdi]` = provider **vtable +0x00**.
Lottery.dll registration at 0x141530400: `new(0x18)` -> ctor 0x1415308d0 (vtable **0x141539ab8**),
`mov [rbx+0x10],r8` @0x141530436, `mov edx,0xa` @0x141530444, `RegisterProvider` @0x141530449.
Provider vtable 0x141539ab8: `+0x00 = 0x141530870`, `+0x08 = 0x1415308b0` (dtor), `+0x10 = 0x1415308f0`
(deleting dtor) -> **exactly one working method**, a pure forward:
```
141530874 cmp qword [rcx+0x10],0 ; je -> xor al,al (FALSE)
141530880 mov rcx,[rcx+0x10]     ; the inner object
141530894 call [r10+0x8]         ; inner->vt[+0x8], al returned to the action
```
Args 1508 builds: `(rcx=provider, edx=user vt[+8] (player id), r8d=strtoul(param), r9d=arg2
vt[+0x10](4)->vt[+0x48], byte [rsp+0x20]=0, byte [rsp+0x28]=1)`.
Data: 13 rows, `data == param` = 1..5.
**BLOCKED on one fact**: the class of `[provider+0x10]` and its `vt[+0x8]`. Look at Lottery.dll
0x14152e710 (thunk target 0x14152ec10) and `CProvider::Init` (`pProvider->Init(pConsumer)` @0x1415398c0).

## 3 — 1509: the router is portable but this is MAP/TELEPORT code, not lottery
Body 0x140136f09..0x140137052. `sscanf "%u %d %d %d %d %d"` (fmt 0x14070e0e8) into
`[rsp+0x27c] [0x2b0] [0x2ac] [0x3c4] [0x36c] [0x2a8]` (order proven by the lea block
0x140136f3c..0x140136f87). Router: sscanf<=0 -> `0x1401c7e10(user,0)`; if the 6th value != 0 ->
map-flag gate `0x140119510(map)` true -> return 0; first value == 1 -> `0x1401c7e10(user,u1)`;
selector 5 or 6 -> `0x1401c7c60(user,u1,d2,d3,d5,d4)` (note the d4/d5 swap); else DBERROR line 0x2b83.
`0x140119510` = bit extractor: `[[map+0x58]+0x8 -> vt[+0x10](4)] -> vt[+0x58]()`, then `shr 6; and 1`
(0x140119530/34); siblings 0x140119540 bit 4, 0x140119570 bit 20.
`0x1401c7e10(user,n)`: n==0 -> `user[0x10]->vt[0x168]()`; `CMapGroup(user+0x1230)` -> ASSERT
`m_pMapManager` -> `[mgr+0x98]->vt[+0x10](n,1)`; NULL -> 0; gate `0x1401a4030(user,n)` else
`0x140179040(user,n)`+0; then <=**1000** attempts of `x=rand(w+1), y=rand(h+1)` (bounds
`[obj+0x60]->vt[+0x28]()/vt[+0x20]()`, RNG import 0x1406d82c0), walkability `0x1402c3cc0(obj,x,y)`;
on success `0x1401c55b0(user,n,x,y,0)` and returns `(result==0)`.
`0x1401c7c60(user,n,a,b,s1,s2)` = the same with an offset rectangle (`a..a+s1`, `b..b+s2`), clamped to the
map bounds, rejecting when the clamp does not advance (0x1401c7d50/0x1401c7d59).
`0x1402c3cc0(obj,x,y)` = `0<=x<w && 0<=y<h && [obj+0x60]->vt[+0x18](x,y)==0` (`sete` @0x1402c3d0c).
`0x1401c55b0` = map-enter/teleport (guard `[user+0x1100]`, `cmp n, user[0x10]->vt[0x168]()`,
`0x1401a4030`, `0x1400876b0(CMapGroup(user+0x1230))->vt[+0x20](n,1)`).
Data (9 rows): `1002 263 265 3 3` x2, `1036 210 210 5 5` x2, and single-number `1011`, `3029` x2, `1028`.
**NOT PORTED**: the mapping of the six sscanf destinations to the router's three comparisons is not
proven field-by-field (the destinations are known, the *format order* is not: the 5-field rows would take
the "selector 5/6" branch under one order and the DBERROR branch under another). Reclassify 1509 as a
random-cell teleport action, not lottery; do not port it into a lottery module.

## 4 — 223 is not lottery either
All 4 rows (6044704, 6000941, 6000881, 6000960) have `param` starting with `%user_home_id`
(`%user_home_id 4 95 97 102 97`, `%user_home_id 4 55 50 55 47`, `%user_home_id 4 34 39`), i.e. the `%var`
home grammar; `docs/home_223_224_decode.md:9` places 223 at decompiled `MsgServer.c:218844` in the home
subsystem. Its body was not disassembled -> **UNKNOWN**, not "same family as 1508".
