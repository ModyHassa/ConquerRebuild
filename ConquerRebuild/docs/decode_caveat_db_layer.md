# DECODE CAVEAT — SQL text never appears in MsgServer.exe

Discovered 2026-11-06 while checking a v124 worker's claim that action 2007 "does no INSERT".

`db.dll` (the shipped DB layer module) builds every statement dynamically:

```
INSERT INTO %s SET %s
CRecord cannot insert records without MODE_EDIT for table "%s"
CDatabase::GetLastInsertedID / DB closed / SELECT count / INSERT / SELECT
```

Consequences for every decode write-up in this repo:

1. **"No SQL string in MsgServer.exe" proves NOTHING.** A handler that writes a table simply
   calls a `CRecord`-style API; the table name lives in its arguments, not in a format string.
   Any claim of the form "no DB work because the string dump is empty" must be retracted and
   re-proved with **call-shape analysis** (does the body call into the DB layer at all, and with
   which record type?).
2. **Valid proofs of "no DB work"** are: (a) every `call` target in the body is accounted for and
   none of them is a DB/record path; (b) the body's only virtual calls are on objects whose
   class is known and has no storage role. `docs/worker_v124_3701.md` uses (a) - all of 3701's
   calls are the log IAT, `sscanf`, `CurrentInstanceGet()`, the manager vtable and the user
   vtable - so the 3701 port stands, but the *string* argument it also makes is not evidence.
3. **2007's "no INSERT" claim is UNFOUNDED.** It must be re-checked by looking for a
   `CRecord`/`CDatabase` call in the 2007 body (or in `CNpc::Create`) and, if one exists, by
   finding the record type / table name it is built from.
4. The same applies to every "zero SQL" note in `docs/worker_v12*.md`. Treat those as UNKNOWN
   unless they argued from call shape.
