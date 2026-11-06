# 1083 (case 0x49) — branch table and the god-time helpers (decoded, still BLOCKED)

Body `0x14012becb..0x14012bff0`:

```
sscanf(rsi, "%s %d", buf[0x100], &u) ; cmp eax,2 ; jne -> DBERROR(0x1400bb7e0 / line 0x257d??)
  buf "<"   -> return (int)0x140382960(user, 2, 0) <  (int)u      (setl, 0x14012bf41)
  buf "=="  -> return (int)0x140382960(user, 2, 0) == (int)u      (sete, 0x14012bf77)
  buf "+="  -> 0x140382b00(user, u) ; return 1                    (0x14012bfa8)
  buf "chk" -> u == 0 ? 0x140383750(user) : 0x140382350(user)     (0x14012bfd9 / 0x14012bfe6)
  else      -> DBERROR path -> return 0
```
String addresses read out of .rdata: 0x14070be94 = `"<"`, 0x14070be90 = `"=="`,
0x14070d54c = `"+="`, 0x14070f390 = `"chk"`, 0x1406ed6c4 = `"%s %d"`.
(The first branch really passes `edx = eax = 2`, the sscanf result, so both `<` and `==` call the
getter with mode 2; the third argument (`r8d`) is 0 in every branch.)

## The value being tested: CUser+0xF38
* `0x140382850`: `edi = *(u32*)(user+0xf38)`; `0` -> return 0; else `time(0)` + `localtime(...)`
  (0x1406d8a90 / 0x1406d8a48), a 36-byte struct tm copy (9 dwords) and a second-based difference.
* The **only** writer is the login loader `0x14016812b` (`mov %eax,0xf38(%rdi)`), which copies a
  record struct into CUser:
  `record+0xc4 -> user+0xf24`, `+0xc8 -> +0xf28`, `+0xcc -> +0xf2c`, `+0xd0 -> +0xf30`,
  **`+0xd8 -> +0xf38`**, `+0xdc -> +0xf3c`.
* `0x140382960(user, mode, flag)` = "remaining time": reads the same value, `now = time(0)`,
  early-outs when the stored value is 0 or `< now`, then divides by units
  (`mode 1`: `(v + 0x1e * flag) / 60` via the 0x88888889 magic, `mode 0`: raw seconds, ...).
* `0x140382b00(user, hours)` = "add hours": `v = 0x140382850(user)`; when the stored value is
  absent/expired it re-bases on `now` (`(now + 0xe0f)/0xe10*0xe10`, i.e. the start of the current
  hour: 0xe10 = 3600, 0xe0f = 3600-1) then adds `hours * 0xe10`.
* `0x140382350` / `0x140383750` are the two `chk` predicates (the second is the "at least one
  second of privilege left" test per `docs/decode_remaining_subsystems.md`).

## What blocks the port
1. **Which DB column feeds `record+0xd8`** — not identified, so the rebuild has nowhere to store
   the packed expiry. The neighbouring record fields (+0xc4..+0xd0, +0xdc) share the same gap.
2. The exact semantics of `0x140382350` (the `chk` non-zero-u branch) were not read past its head.

Everything above is VERIFIED from the disassembly; nothing here is inferred. Porting 1083 needs
the cq_user column for the god-time expiry (a candidate to test: import a row, set a value there,
log in, and read `user+0xf38` from the loader's own trace) plus the two predicates.
