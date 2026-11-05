# Worker: CUser data-record -> cq_user column mapping (Conquer v6159 MsgServer.exe)

Scope: map the record-object byte offsets consumed by CUser::LoadFromRecord
(decompiled/MsgServer.c:249255-249300) back to cq_user SQL columns by locating
the filler/adapter function that populates that record object from a DB row.

Method: decompiled/MsgServer.c line numbers + binary disassembly addresses
(image base 0x140000000, .text RVA 0x1000/raw 0x400). No guessing: each fact is
appended immediately with its proof. DB access read-only (cq).

## F1. LoadFromRecord identified + IMPORTANT offset correction
Proof: decompiled/MsgServer.c:249249 `void FUN_140167eb0(longlong *param_1,undefined4 *param_2)`.
param_2 is declared `undefined4 *` (32-bit element pointer), NOT a byte pointer.
Therefore `param_2 + 0x18` == byte offset 0x60, `param_2 + 0x19` == 0x64,
`param_2 + 0x1a` == 0x68, `param_2 + 0x1b` == 0x6c, etc. (index*4).
Byte-cast forms in the same function confirm: `(longlong)param_2 + 0x62`, `+ 99`(=0x63),
`+ 0x66`, `+ 0x6a`, `+ 0x76` (MsgServer.c:249287-249297).
=> The correct record byte offsets are 0x60,0x62,0x63,0x64,0x66,0x68,0x6a,0x76.
(The 0x18/0x19/0x1a "offsets" in the task brief were element indices.)

## F2. The filler function found
decompiled/MsgServer.c:624108 `undefined8 FUN_1403744b0(longlong param_1)`.
It fills a user-data struct from a DB row object held at param_1+0x230, by
  (a) vtable+0x20: GetRow/field-by-NAME -> returns column object `plVar6`
  (b) then a typed getter on that column object:
      +0x20 = u8, +0x28 = u16, +0x30 = u16(short), +0x40 = int/u32,
      +0x48 = u32, +0x50 = u32, +0x58 = int64.
Proof: MsgServer.c:624128-624140 ("coin_money" -> +0x40 -> stored at +0x50),
MsgServer.c:624154-624158 ("money" -> +0x58 -> 8-byte store at +0x40).
The stored member offsets in this filler are IDENTICAL to the offsets read by
FUN_140167eb0, so this is the adapter (column -> struct member).

## F3. PROOF that the row is cq_user.* (kills all ambiguity)
decompiled/MsgServer.c:624561 `ulonglong FUN_1403756b0(longlong param_1,undefined4 param_2,longlong *param_3)`
 - builds SQL string via _snprintf (MsgServer.c:624588-624589):
   "SELECT cq_user.*, b.name AS mate_name FROM cq_user LEFT JOIN cq_user as b
    ON cq_user.mateid = b.id WHERE cq_user.id = %u LIMIT 1"
 - executes query (vtable+0x10), takes the row (vtable+0x38) and stores it at
   `*(undefined8 *)(param_1 + 0x230)` (MsgServer.c:624605)
 - then `uVar2 = FUN_1403744b0(param_1);` (MsgServer.c:624609)
=> FUN_1403744b0's param_1+0x230 row IS the cq_user row (plus alias mate_name).
=> Every column name passed to vtable+0x20 in FUN_1403744b0 is literally a
   cq_user column name. No index arithmetic through SHOW COLUMNS is needed:
   the column names are present verbatim as string constants.

## F4. RESULT TABLE — cq_user column for each record offset
Filler: decompiled/MsgServer.c:624108 FUN_1403744b0 (= 0x1403744b0, 96 bytes lead-in
before the first store). Struct base = %rbx, row = *(rbx+0x230).

| record off | LoadFromRecord (read side, line) | user field | cq_user COLUMN | filler mov addr | col-name lea addr | getter |
|---|---|---|---|---|---|---|
| 0x60 | :249284 `*(u16*)(param_2+0x18)` | user+0xed8 | **strength**         | 0x1403749dd | 0x1403749b6 (`0x14070edf8`) | +0x30 u16 |
| 0x62 | :249285 `*(u8*)(param_2+0x62)`  | user+0xeda | **first_prof**       | 0x140374abc | 0x140374a9c (`0x14070ec38`) | +0x20 u8  |
| 0x63 | :249286 `*(u8*)(param_2+99)`    | user+0xedb | **old_prof**         | 0x140374ae3 | 0x140374ac2 (`0x14070ec28`) | +0x20 u8  |
| 0x64 | :249287 `*(u16*)(param_2+0x19)` | user+0xedc | **speed** (DDL: `Speed`) | 0x140374b24 | 0x140374afc (`0x14070edec`) | +0x30 u16 |
| 0x66 | :249288 `*(u16*)(param_2+0x66)` | user+0xede | **health**           | 0x1403749fe | 0x1403749d6 (`0x14070ede4`) | +0x30 u16 |
| 0x68 | :249289 `*(u16*)(param_2+0x1a)` | user+0xee0 | **soul**             | 0x140374b03 | 0x140374adc (`0x14070eddc`) | +0x30 u16 |
| 0x6a | :249290 `*(u16*)(param_2+0x6a)` | user+0xee2 | **additional_point** | 0x14037499c | 0x140374978 (`0x14075a3d0`) | +0x30 u16 |
| 0x76 | :249294 `*(u8*)(param_2+0x76)`  | user+0xeee | **profession**       | 0x140374aa3 | 0x140374a7c (`0x14070ee10`) | +0x20 u8  |
| 0x6c | :249291 `*(u8*)(param_2+0x1b)`  | user+0xee4 | **auto_allot** (extra, in range) | 0x1403749bd | 0x140374995 (`0x14075a3c0`) | +0x20 u8 |

## F5. How column names were proven (no index arithmetic needed)
The filler looks columns up BY NAME. Disassembly (objdump of file offset 0x3738b0,
adjust-vma 0x1403744b0) shows for each field the sequence
  mov 0x230(%rbx),%rcx / lea <rip>,#0x14070eXXX (name) / call *0x20(%rax)
and the store immediately AFTER the previous field's getter call belongs to the
name just loaded. E.g. the strength store at 0x1403749dd is preceded by
`lea 0x39a43b(%rip),%rdx # 0x14070edf8` = "strength" at 0x1403749b6.
Cross-check: decompiled names at MsgServer.c:624247 (strength), :624268 (first_prof),
:624271 (old_prof), :624277 (speed), :624250 (health), :624274 (soul=0x14070eddc),
:624241 (additional_point), :624265 (profession), :624244 (auto_allot).
Because the names are literal string constants, NO mapping through
SHOW COLUMNS field index was required. DDL ordinals are recorded only as a
redundant check: strength=10, old_prof=11, health=13, soul=14,
additional_point=15, profession=19, first_prof=66 (110 columns total).

## F6. Uniqueness / no competing filler
- Only FUN_1403744b0 in the whole decompile writes BOTH +0x60 and +0x76 in one
  function (scripted scan of `(param_1 + 0x60) =` / `(param_1 + 0x76) =`).
- Other 0x76 stores are setters that write a single field and push it to the DB
  (`*(char*)(param_1+0x76)` + column "profession", MsgServer.c:622335
  FUN_140372400); 0x62/0x63 stores at :622341/:622357 are likewise solo setters
  (FUN_140372390 "first_prof", FUN_140372320 "old_prof"). Not fillers.
- :554553 is FUN_14030aa50, a constructor-like init (writes whole arrays, no row).

## F7. Verified consumer (type consistency)
user+0xedc/0xede/0xee0/0xed8/0xee2 are summed as unsigned shorts at
MsgServer.c:255280 and :256560, matching the u16 sources
(speed/health/soul/strength/additional_point) => mapping is type-consistent.

## F8. CORRECTION to F6 line numbers (verified)
The solo setter store lines are:
 - `*(u8*)(param_1 + 99)` (=old_prof) at MsgServer.c:622300, in FUN_140372320 (:622295)
 - `*(u8*)(param_1 + 0x62)` (first_prof) at MsgServer.c:622320, in FUN_140372390 (:622315)
 - `*(char*)(param_1 + 0x76)` (profession) at MsgServer.c:622341, in FUN_140372400 (:622335)
(F6's ":622341/:622357" attribution was mis-typed; the substance is unchanged:
these are single-field setters, not the row filler.)
All three are called from MsgServer.c:289136, :289369, :289377 with
`param_1 + 0x1cf` — note 0x1cf*8 = 0xe78, NOT the 0xede region, i.e. they target a
different embedded user object than the one FUN_140167eb0 fills, further confirming
they are not the adapter for record offsets 0x60-0x76.

## F9. STATUS: COMPLETE
All 8 requested offsets mapped with line number + disassembly address.
No UNKNOWNs remaining. Nothing in src/ modified, no build, no tests, no git,
DB accessed read-only (SHOW COLUMNS / information_schema only).
