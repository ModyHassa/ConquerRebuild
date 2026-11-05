# Worker: CUser data-record -> cq_user column mapping (Conquer v6159 MsgServer.exe)

Scope: map the record-object byte offsets consumed by CUser::LoadFromRecord
(decompiled/MsgServer.c:249255-249300) back to cq_user SQL columns by locating
the filler/adapter function that populates that record object from a DB row.

Method: decompiled/MsgServer.c line numbers + binary disassembly addresses
(image base 0x140000000, .text RVA 0x1000/raw 0x400). No guessing: each fact is
appended immediately with its proof. DB access read-only (cq).

