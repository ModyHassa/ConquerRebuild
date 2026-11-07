# v148 — Team.dll: the ctor-vtable extraction method (and where the CTeamMgr vtable is NOT)

## Why this file exists
1109 = `TeamMgr->vt[0x30](player_id) != 0` (v145, body 0x140136e35, fully decoded). The only missing
fact is the *name* of `CTeamMgr` vtable slot **+0x30**, so this wave attacked Team.dll's vtables directly.

## Method that worked (reusable)
1. `objdump -d -M intel ../conquer_source/Source/Team.dll > /tmp/team.asm`.
2. Every MSVC ctor writes its vtable with `lea rax,[rip+...]` immediately followed by
   `mov QWORD PTR [reg],rax`. Scanning back up to 6 instructions from each such `mov` and collecting the
   `# 0x...` comment of the `lea` yields the candidate vtable addresses.
3. Result: 12 distinct candidates, by hit count:
   `0x1418fb970` (19), `0x1418f9638` (12), `0x1418f9338` (6), `0x1418f96c8` (6), `0x1418f9b80` (6),
   `0x1418fba50` (5), `0x1418fbb90` (5), `0x1418fbcb0` (5), `0x1418fbdf0` (5), `0x1418f95a8` (4),
   `0x1418fa2e0` (4), `0x1418f9a48` (3). Team.dll image base = **0x1418e0000**.
4. Reading a vtable is now trivial (the earlier RTTI route was the wrong tool): `q(vt + slot)`.
   `0x1418f9338` = COL 0x1418fbef0, slots `+0x00 0x1418e10a0`, `+0x08..+0x20 0x1418f3c98` (repeated),
   `+0x28 0x1418e1060`, `+0x30 0x1418e1070`, `+0x38 0x1418e1080`, `+0x40 0x1418e1090` - a 10-slot class
   whose +0x30 is the stub `33 c0 / c3` (`xor eax,eax; ret`). **This is NOT CTeamMgr.**

## What is still open, precisely
The object 1109/1110/1102 call has slots at least up to **+0x220** (`vt[0x178]`, `vt[0x180]`, `vt[0x220]`
are all used), so `CTeamMgr`'s vtable is one of the 12 candidates **but a naive slot walk stops early**:
the table contains non-code qwords between real slots (e.g. `0x1418f9638` has `0x219930522`, `0x1cb4c`,
`0x300000000` after its third slot, because the neighbouring data is a string/pad). The walk must
tolerate gaps - scan 0x240 bytes from each candidate and keep qwords in `[image_base+0x1000,
image_base+0x2f000)`, then pick the candidate whose +0x30 target is a small predicate taking
`(this, userId)`.
Next step for whoever continues: for each of the 12 candidates read `+0x30` and disassemble it; the right
one reads a per-user team object (dereferences a map/array by the id argument) and returns `setne al`.
That single read unblocks **1109 (5 rows)** and starts the same path for 1102's `count` branch (5 rows).
