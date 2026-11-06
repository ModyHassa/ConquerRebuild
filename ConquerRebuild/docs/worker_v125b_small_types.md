# v125b — small new-engine types: 1028, 1053 (ported) and 1029 (partial)

## 1028 — user flag word at `CUser+0xf24`
Body 0x14012ef16, case 0x16.
* `sscanf(param, "%s %d")` at 0x1406ed6c4 must consume **exactly 2** tokens
  (0x14012ef5e `cmp $0x2 / jne fail`).
* Index guard: `cmp $0x1f` at 0x14039a214 → CHECKF (line 0x1e2 = 482) + false for idx > 31.
* Three ops, each a dedicated helper on the actor:
  * `chk` → **0x14039a210**: `bt idx,[rcx+0xf24]` / `setb` - the bit itself, so a clear bit takes
    the **fail** branch;
  * `add` → **0x14039a150**: set the bit, always true;
  * `clr` → **0x14039a1b0**: clear the bit, always true;
  * anything else or a bad parse → the shared DBERROR fail path.
Ported as `case 1028` with `Player::user_flags` (+7 checks green).

## 1053 — `"var(%d) <op> <int64>"` compare / accumulate
Body 0x14012e4f5, case 0x2e. Same var store as 1060/1061/1064
(get `FUN_1401644d0`, set `FUN_140164520`).
* `sscanf(param, "var(%d) %s %I64d")` (0x14070f138) must be **3**.
* Ops proven by the compare + setcc pairs:
  `>` → `setg` (0x14070c728), `>=` → `setge` (0x14070c724), fallthrough `sete` (`==`),
  and the second parse block (0x14012e61f) handles `+=` via the 0x14070d54c literal.
* Comparison result IS the action result; `+=` always true; unknown op → fail.
Ported as `case 1053`.

## 1029 — partial, NOT ported
Body 0x14012ecb0, case 0x17. `sscanf(param, "%s %s %hu %hu %u")` (0x14070f0f0) with `>= 2` tokens;
the first token is compared with the literal **"play"**. On a match it constructs a helper object
(0x14037dfb0) and calls **0x14037e0a0(obj, 0x14, name, u32)**.
UNKNOWN: what the helper object is, what id `0x14` selects and what the `%hu` pair means, so no
port. (Note the re-use of the value 0x14 here is probably unrelated to provider 0x14.)
