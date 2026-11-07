# Worker v132b — Action Type 1082 Decode

Repo: `/app/conversations/6ad7881a9883f31f19595f39/ConquerRebuild`
Binary: `../conquer_source/Source/MsgServer.exe` (PE x64, image base `0x140000000`)
Disassembly: `/tmp/full.txt` (objdump -d style)
Case body start: `0x14012f025`
DB: `cq` (mariadb)

All facts below are appended only after being verified against the disassembly
and/or the DB schema. Anything not resolved is marked **UNKNOWN + address**.

---

**No findings were produced for this type** (the decode pass ran out of budget before recording
anything). What is known from the coordinator's own reads, all verified:

- case body starts at `0x14012f025`;
- it clears two 256-byte buffers, then `sscanf`s the action param with fmt `0x14070f080`
  requiring **>= 6** conversions into `(buf1, buf2, u32, int, int, int)`;
- it compares `buf1` with the literal at `0x14070f078` and `buf2` with the literal at
  `0x14070f2d0`;
- it then calls `0x1401181a0` (a manager singleton) and invokes a manager method through a vtable
  slot with a long argument list.

**Still UNKNOWN:** the two literal strings, the `(buf1,buf2)` -> behaviour table, the manager
class and the argument order of its call. **Port verdict: BLOCKED on the decode itself.**
