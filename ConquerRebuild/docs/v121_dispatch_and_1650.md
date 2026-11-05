# v121 — new-engine dispatch convention (SOLVED) + the 1650/1651/1654 state machine

## A. The case-body resolution convention — VERIFIED, replaces every earlier guess

The new-engine router `FUN_14012a6e0` dispatch sequence, read from the binary at 0x14012a815:

```
14012a818: lea    -0x12a81f(%rip),%rdx      # rdx = 0x140000000 (IMAGE BASE, not the table!)
14012a81f: movzbl 0x13aa9c(%rdx,%rax,1),%eax   # eax = byte_map[type-1001]
14012a827: mov    0x13a7ac(%rdx,%rax,4),%ecx   # ecx = u32 at table[case]
14012a82e: add    %rdx,%rcx                    # rcx = IMAGE_BASE + entry
14012a831: jmp    *%rcx
```

So the correct body address is

    body = 0x140000000 + u32[0x14013a7ac + case*4]

anchored by a known port: **1075 -> case 0x41 -> 0x14012c33f**, which is exactly the
address v38 recorded for the 1075 body ("disasm 0x14012c33f"). Earlier notes that added
the table address (0x14013a7ac) or the entry address as the addend produced "UNRESOLVED"
bodies in the 0x14026xxxx region — those were *coincidental* alignments inside unrelated
functions (verified: 0x140272ed0 begins with `movstack/lea/.../call` then `int3` padding,
i.e. the end of a different function, not a case body).

`tools/newengine_map.py` `body_of()` is fixed to this convention.

The case bodies live INSIDE the router span 0x14012a6e0..0x14013b000, are reached by
`jmp *%rcx`, and fall through the switch's tail. The shared exits are
`0x14013a786` (the function's return path: `xor %al,%al` / `mov $1,%al` before jumping =
return false / true) — so a case body returns a BOOLEAN to its caller.

Register convention at case entry (established by the ports that already work):
`r13` = the acting CUser (engine offset `+0x968/0x96c/0x970/0x974` are CUser fields),
`rsi` = the action row's **param** string (`sscanf(param, ...)`), `r12` = the cq_action
row (reads `0x48(%r12)` = the row's map column), `r15` = the per-chain context.

## B. 1650 / 1651 / 1654 — a three-step state machine on CUser+0x968

All three are gates on one byte and one id/mode pair, then call into a manager:

| type | case | body | gate |
|---|---|---|---|
| 1650 | 0xa5 | 0x140138724 | `CUser[0x968] == 0` (must be idle) |
| 1651 | 0xa6 | 0x140138889 | `CUser[0x968] == 2` |
| 1654 | 0xa9 | 0x140138ce8 | `CUser[0x968] == 3`, `CUser[0x970] != 0`, `CUser[0x974] in {1,2}` |

**1650** (34 rows): idle byte must be 0; `sscanf(param,"%u",&n)` must yield exactly 1 field
(otherwise it logs `ACTION %u: 错误的参数数量` and fails); builds a CMsgTalk via
`0x140362560` (ctor) + `0x140362620` (Create) with **string-table index 0xAB (171)** and `n`
as the format argument, three getters off the CUser sub-object at `+0x10`
(vtable +0x40, +0x48, +0x50) and `GetID()`; sends it with `vtable +0x350` (self-send) —
if that send fails the action fails. On success it writes `CUser[0x968] = 1`,
`CUser[0x96c] = (*r15->vtbl[0x10](4))->vtbl[0x48]()`, `CUser[0x970] = 0`,
`CUser[0x974] = 0`, and returns true.

**1651** (95 rows): requires the state to be **2**, parses `param` with `sscanf("%u")`
(rows carry zero-padded ids like `0009`, `0066`, `0018`), then
`0x1400875f0(0x140008520(row->map))` gives a manager, `manager->vtbl[0x20](id)` looks a
record up; a NULL record fails the action. The rest of the body reads the manager slot 4,
decrements it and dispatches on `1`/`2` (same shape as 1654, see below).

**1654** (28 rows): same manager/record lookup but keyed by `CUser[0x970]` with the
1/2 mode at `CUser[0x974]`; mode 1 calls `record->vtbl[0x298](0x1040, &out)`, rejects
`out[0x68] == 0`, then compares `out[0xb4]` and calls `0x1402bf900`.

**STATUS: 1650/1651/1654 are NOT ported.** The gates, the parse, the send and the state
writes above are read from the binary (proven), but three things are still UNKNOWN and must
not be guessed: (1) what string-table entry 171 says (which subsystem this is), (2) the
identity/semantics of the manager behind `0x1400875f0`, (3) what `0x1402bf900` does and
what record field `+0xb4`/`+0x68` mean. The 3-step 1/2/3 state machine on `CUser+0x968` and
the id/mode pair at `+0x970/+0x974` are established facts and can be implemented once the
subsystem is named. Note 1651 requires state **2** while nothing in these three bodies sets
state 2, so a fourth writer of `+0x968` exists elsewhere (a packet handler, most likely).
