# worker_rebirth_apply2 — FINAL decode wave: action 1040 (Rebirth) config flag + apply cores

Scope: (1) every writer of mgr+0x6a2 (the flag that selects FUN_1401b9d70 vs FUN_1401abab0),
its default and which path the shipped binary takes; (2) full decode of both apply cores.
Working dir: /app/conversations/6ad7881a9883f31f19595f39/ConquerRebuild/. DB read-only, no src/ edits.

Rule: every claim below carries a MsgServer.c line and/or a disasm address. Unproven => UNKNOWN + the exact missing piece.

---

## 0. Facts appended as verified (chronological)

### F-001 | WRITER #1 of mgr+0x6a2 = the only real setter: shell.ini [91AuthServerInfo] Is91AccountServer
MsgServer.c:146499-146504 (function begins 146455, the mapgroup/kernel boot ctor; it opens
`CIniFile::CIniFile(local_828,"shell.ini","IPADPaymentsClient")` at 146480 — so the whole block
reads **shell.ini**):

```
CIniFile::SetSection(local_828,"91AuthServerInfo");          // 146499
iVar4 = CIniFile::GetInt(local_828,"Is91AccountServer");      // 146500
if (iVar4 == 1) {                                             // 146501
  *(undefined1 *)(param_1 + 0x6a2) = 1;                       // 146502  <-- WRITER
}
```

PROVEN: mgr+0x6a2 is set to 1 **iff** `shell.ini` section `[91AuthServerInfo]` key
`Is91AccountServer` parses as int 1. There is no other assignment of the value 1 anywhere
(full grep of `0x6a2` over 1,361,879 lines returns exactly 7 hits total — see F-002).
CONSEQUENCE: the flag means "this server is a **91.com account/portal server**" (91 is the Chinese
platform whose SDK also gates the `[IPADPaymentsClient]`/`[GooglePaymentsClient]` booleans that set
the sibling bytes +0x69c / +0x69d).

### F-002 | EXHAUSTIVE grep: mgr+0x6a2 has exactly 7 raw sites; ONE writer of 1, ONE explicit zero-init,
two struct copies, one getter, one composite-OR read.
`grep -n "0x6a2" decompiled/MsgServer.c` (whole 1,361,879-line file) returns exactly 7 lines:

| line | enclosing function | statement | classification |
|---|---|---|---|
| 101507 | FUN_14008ac00 (:101504) | `return *(undefined1 *)(param_1 + 0x6a2);` | GETTER (the one rebirth calls) |
| 146502 | FUN_1400c26d0 (:146448) | `if (GetInt(shell.ini,"Is91AccountServer")==1) *(u1*)(param_1+0x6a2)=1;` | **THE ONLY WRITER OF 1** |
| 146504 | FUN_1400c26d0 | `if (0x69c==0 && 0x69d==0 && 0x6a2==0) u3=0 else u3=1; *(u1*)(param_1+0x69e)=u3;` | read only (folds into the 0x69e "any payment/portal feature" byte) |
| 147713 | FUN_1400c4a90 (:147559) | `*(u1*)((longlong)param_1+0x6a2)=0;` | zero-init in the ctor |
| 179457 | FUN_1400f0820 (:179323) | `... = *(u1*)(param_2+0x6a2);` | field-by-field struct copy (src→dst) |
| 179797 | FUN_1400f1410 (:179583) | `... = *(u1*)(param_2+0x6a2);` | field-by-field struct copy (src→dst) |
| — | — | (no other occurrence anywhere) | — |

PROVEN, therefore: (a) there is no config loader that reads "cq_config"/"dynamic config"/DB and writes
this byte; (b) there is no setter function; (c) the flag is **static for the process lifetime** after
boot. The two struct copies at 179457 / 179797 cannot introduce a new value (they copy an
already-initialised byte), so they are value-preserving.

### F-003 | Disassembly-level proof (independent of the decompiler) — objdump over the whole 10.6 MB
MsgServer.exe (2,361,439 lines of asm) finds **only 5 instruction sites** that address a
`0x6a2(%reg)` field, plus one unrelated `lea -0x6a2(%rip)`:

```
14008ac00: 8a 81 a2 06 00 00        mov    0x6a2(%rcx),%al        <- GETTER FUN_14008ac00
1400c2806: 88 83 a2 06 00 00        mov    %al,0x6a2(%rbx)         <- THE setter (config)
1400c281e: 80 bb a2 06 00 00 00     cmpb   $0x0,0x6a2(%rbx)       <- read into the 0x69e OR
1400c4dfa: c6 87 a2 06 00 00 00     movb   $0x0,0x6a2(%rdi)       <- explicit zero init in ctor
1400f0f74: 0f b6 83 a2 06 00 00     movzbl 0x6a2(%rbx),%eax        }
1400f0f7b: 88 87 a2 06 00 00        mov    %al,0x6a2(%rdi)         } struct copy A
1400f1e2a: 0f b6 87 a2 06 00 00     movzbl 0x6a2(%rdi),%eax        }
1400f1e31: 88 83 a2 06 00 00        mov    %al,0x6a2(%rbx)         } struct copy B
```
(exact command: `objdump -d conquer_source/Source/MsgServer.exe > /tmp/msgsrv.asm; grep -n "0x6a2(" /tmp/msgsrv.asm`)
=> No hidden writer, no DB-driven writer, no reload path.

### F-004 | The setter in asm, with the string operands resolved
```
1400c27dd: lea  0x62b50c(%rip),%rdx   # 0x1406edcf0  = "91AuthServerInfo"
1400c27e4: lea  0x40(%rsp),%rcx
1400c27e9: call *0x615a09(%rip)       # 0x1406d81f8  = CIniFile::SetSection
1400c27ef: lea  0x62b4e2(%rip),%rdx   # 0x1406edcd8  = "Is91AccountServer"
1400c27fb: call *0x615b77(%rip)       # 0x1406d8378  = CIniFile::GetInt
1400c2801: cmp  $0x1,%eax
1400c2804: jne  0x1400c280c
1400c2806: mov  %al,0x6a2(%rbx)      <-- 0x6a2 = (GetInt(...) == 1)
```
(Verified string values by mapping the RVA to file offsets: .rdata VA 0x1406d8000 -> raw 0x6d6600;
0x1406edcf0 -> "91AuthServerInfo", 0x1406edcd8 -> "Is91AccountServer".)
So the value written is exactly 1 or the byte is left untouched.

### F-005 | DEFAULT VALUE = 0, and the SHIPPED server takes the flag-OFF path (FUN_1401b9d70)
Three independent reasons, all proven:

1. **Explicit zero-init**: the enclosing object ctor FUN_1400c4a90 (:147559) writes
   `*(undefined1 *)((longlong)param_1 + 0x6a2) = 0;` at **:147713**, asm
   `1400c4dfa: c6 87 a2 06 00 00 00  movb $0x0,0x6a2(%rdi)`.
2. **CIniFile::GetInt is fail-closed**: def `decompiled/CQBase.c:17680-17695` —
   `bVar1 = GetString(this,local_218,param_1,0x200); if (bVar1) return strtoul(...); return 0;`
   A missing section/key returns **0**, it never errors out.
3. **The shipped shell.ini has no such section**: `conquer_source/Source/shell.ini` (the ini that
   ships in the source drop, next to MsgServer.exe) contains sections `[System] [Database]
   [AccountServer] [InternetPort] [Language] [CheatingMonitor] [CrossClient] [ChangeServerClient]`
   — **no `[91AuthServerInfo]`, no `[IPADPaymentsClient]`, no `[GooglePaymentsClient]`**. Therefore
   GetInt("Is91AccountServer") == 0 → the `cmp $0x1,%eax / jne` at 1400c2804 skips the store at
   1400c2806 → **0x6a2 stays 0**.
   (`strtoul` also means even a present-but-non-numeric value yields 0, and `= 0` matches the
   `cmp $1` test only for the literal 1.)

=> **The shipped v6159 MsgServer runs the rebirth apply core FUN_1401b9d70 (flag OFF).**
FUN_1401abab0 (flag ON) is dead code in any deployment that does not set
`shell.ini:[91AuthServerInfo] Is91AccountServer=1` — i.e. it is the **91.com portal build variant**.
The flag is process-lifetime-static (only writer is this one boot-time load; no reload call site
exists — F-002/F-003), so a single port can keep the OFF core and treat the ON core as an
optional variant.

## G. APPLY CORE TAIL — coordinator read it directly (MsgServer.c:302281-302454, 173 lines)

`FUN_1401b9d70(user, v2, v3, param_4, param_5, param_6, param_7)` is the OFF core the
shipped server always runs (proven above). Structure:

1. Snapshots old values: `user+0x1db/+0x1dc` (u2 pair), `user+0xedc`, `user+0xede`,
   `user+0xeee`; `FUN_140371e60(user+0x1cf)` = the metempsychosis record.
2. Computes a look/profile tuple from `param_4` (the 4th arg): if `param_4 == 0` it becomes
   `0x14` (20); if `param_4 < 100` it is divided by 10 and then a 4-way switch on
   4/5/6/7 sets `iVar7,iVar9,iVar11,iVar8` (the body/head/weapon look parts);
   the `else` branch (>=100) sets `iVar8=5, iVar7=3, iVar11=2, iVar9=0`.
   `local_4b4 = (iVar8 + iVar7*8 + iVar11 + iVar9) * 3` -> **max life**
   `local_49c = iVar8 * 5` -> **max mana**
3. `FUN_140173790(user, v2, v3, param_5)` -> `local_4a4` (a computed level/tier value);
   `FUN_1401715d0(user, param_6)`; `FUN_140371e90(user+0x1cf, 0, 1)` (reset the mete record).
4. Skill bookkeeping by `param_7`: `==1` -> `FUN_1401a6420(user, 0x33, v2, 1)`;
   `==2` -> `(user, 0x32, v2, 1)`; `>2` -> `(user, 0x33, *(u8*)(user+0xedb), 1)` then
   `(user, 0x32, v2, 1)`.
5. `FUN_1401abdf0(user, iVar9, iVar11, iVar7)` = the stat/distribution step.
6. `FUN_1401a6420(user, 0xb, <user vtbl+0x30 value>, 2)`  (flag **2**, not 1)
   `(user, 7, local_4c4, 1)`, `(user, 0xc, param_5, 1)`, `(user, 5, 0)`,
   `(user, 0, local_4b4, 1)` = max-life class value, `(user, 2, local_49c, 1)`,
   `(user, 0x16, param_7, 1)`.
7. `(*user[2] + 0x338)()` = the "respawn/refresh self" call.
8. If `local_4c8 != param_5`: build `CMsgUserAttrib 10017` (FUN_14039e680/700/6d0) with
   `idx 0xc = param_5` and broadcast it on the map (`user[2] + 0x348`, flag 0).
9. `tq::MyLogSave("gmlog/rebirth", "...rebirth to %d metepsychosis from lev(%d), pro(%d),
   stength(%d), speed(%d), health(%d), soul(%d) addpoint(%d) to lev(%d), pro(%d), force(%d),
   speed(%d), health(%d), soul(%d) addpoint(%d)")`.

### STILL OPEN (blocking a faithful 1040 port)
- `FUN_1401a6420(user, attrib_id, value, flag)` — the attribute setter. Need its attrib-id ->
  CUser field map and what `flag` 1 vs 2 means.
- `FUN_1401abdf0(user, a, b, c)` — the stat/distribution step.
- `FUN_140173790` / `FUN_1401715d0` — the level/tier computations feeding 0xb/0x16.
- Which attrib ids map to our Player fields (0=life?, 2=mana?, 5=exp=0 -> reset, 7=?, 0xc=?,
  0x16=?, 0x32/0x33=profession pair?).

## H. THE ATTRIBUTE SETTER CHAIN — decoded (coordinator)

`FUN_1401a6420(user, attrib_id, value, send)` (MsgServer.c:291699-291776):
- `send` semantics PROVEN: `1` -> send to SELF (`user[2]+0x350`), `2` -> broadcast
  (`user[2]+0x348`, arg 1). Both build `CMsgUserAttrib 10017`.
- attrib `5` (experience): GM accounts short-circuit and send nothing
  (`id > 0xee69a15e && *(int*)(user+0x12fc)`).
- attrib `0` (life): if the user owns a mount/pet object (`user[0x220]`), the value is
  applied to BOTH the user and the pet and a 10017 goes to each side.
- anything else -> `FUN_1401a2660(user, id, value, send)`.

`FUN_1401a2660(user, attrib_id, value, send)` (MsgServer.c:289018-289406, ~390 lines) is the
real CUser::SetData: it opens one 10017 packet (`FUN_14039e680/700`), switches on the attrib
id, clamps/writes the field and appends the entry (`FUN_14039e9a0`), then dispatches the packet.
Case `0` (life) PROVEN: clamp to `(*user[2]+0x80)()` = max life, floor at 0, then
`FUN_140198760(user, value, 0)` writes it.

### Remaining work for a faithful 1040 (precise list)
1. Extract cases `2, 5, 7, 0xb, 0xc, 0x16, 0x32, 0x33` from `FUN_1401a2660` (the ids the rebirth
   core writes) and map each to a Player field/column.
2. Decode `FUN_1401abdf0(user, a, b, c)` = the stat/distribution step.
3. Decode `FUN_140173790` / `FUN_1401715d0` (the level/tier values written to attribs 0xb/0x16).
4. Then: `cq_rebirth` lookup (already proven, 0-based columns) + the writes above + 10017 sends.
