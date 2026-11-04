# cq_action Type Decode Sweep

Verification pass over remaining unported small/medium types. Every claim cites decompiled/MsgServer.c or decompiled/msgserver_gameaction.c as file:line.


## FINAL VERDICT (worker, v98)
| Type | Verdict |
|---|---|
| 112 | IMPLEMENTABLE NOW - 0x7f0 dialog, the text is `data5` |
| 401 | IMPLEMENTABLE NOW - stores into `user+0xa34` and sends `EVENT_LAYNPC` |
| 2002 | IMPLEMENTABLE NOW - kills every monster of a type on the map |
| 124, 126, 218, 219, 2005 | NEEDS one function each (not yet read) |
| 403 | handler body not read |
| 2009 | NEEDS two labels |
| 3701 | NEEDS `FUN_140164e30` and the meaning of condition `0x56` |
| 1071, 1059 | NOT action types - members of a getter switch |
| 1075/1076/1077 | NOT FOUND in the decompile, but our v38 ports came from the disassembly, so the conflict is logged, not resolved |

**Structural finding**: the range function for types 1001-1998
(`FUN_14012a6e0`) has NO definition in the decompile, which explains the
"NOT FOUND" verdicts.
