# SetUserInt / AddUserInt / attrib-setter / RecordPoint — decode

Evidence: `C:<line>` = `decompiled/MsgServer.c`; `X` = the v6159 binary strings
where cited. Rule: every claim carries file:line. Where the code does not settle
a question the entry says **UNKNOWN** or **BLOCKED** — nothing is guessed.

---

## 0. Already-proven baseline (carried in from prior passes)

- `SetUserInt` = **FUN_140436450** (registered C:763388). Four args
  (uid, key, value, flag), key guard `1001..1998`, pushes a **boolean**.
- Its setter switch is **FUN_1404e61e0**, cases C:874310-874394, covering keys
  1003, 1004, 1005, 1012, 1024, 1032, 1033, 1034, 1035, 1037, 1038, 1041,
  1042, 1043, 1046, 1048, 1054, routing through
  `FUN_1401a6420(user, attribIdx, value, size)` with attrib ids
  7, 8, 0xb, 0xd, 0xe, 0xf, 0x10, 0x1a.
- `GetUserInt` guard `key-0x3e9 < 0x3e6` (keys 1001..1998); uid 0 = current user
  (`DAT_140975bf0+0x10`); getter FUN_1404e02d0 (C:870797-871071).
- `AddUserInt` = **FUN_1404365a0** (registered C:771213) — contract UNKNOWN at
  baseline (see §3).
- `RecordPoint` = FUN_14043b950 (C:766204), 4 args (uid, map, x, y), uid 0 =
  current, calls engine **FUN_1404e7280**, pushes boolean.

---

## 1. SetUserInt wrapper — FUN_140436450 (C:763388-763421)

Verified body:

```
iVar2 = checkinteger(L,1)   // uid        C:763397
iVar3 = checkinteger(L,2)   // key        C:763398
iVar4 = checkinteger(L,3)   // value      C:763399
iVar5 = checkinteger(L,4)   // flag       C:763400
uVar1 = 0;                                  C:763401  default return = false
if (key - 0x3e9u < 0x3e6) {                 C:763402  guard -> keys 1001..1998
  if (uid == 0) uid = DAT_140975bf0+0x10;   C:763403-763411  uid 0 = current user
  uVar1 = FUN_1404e61e0(DAT_140975bf0, uid, key, value, flag != 0);  C:763419
}
push_boolean(L, uVar1); return 1;           C:763420-763421
```

Notes settled by the code:
- The `flag` argument is **not** a boolean flag to the wrapper — it is coerced
  with `iVar5 != 0` (C:763419) and passed as the 5th param of the engine.
- On guard failure the function still pushes **false** and returns 1
  (C:763401 → 763420): out-of-range keys are a silent `false`, not a Lua error.
- The user object passed is the **global current-user object**
  (`DAT_140975bf0`), and `uid` is passed as a separate scalar (C:763419). So the
  engine re-resolves "which user" from the uid, not from the object alone.

---

## 3. AddUserInt — FUN_1404365a0 (C:763424-763457)

**Answer: it has its own add path, not the setter.** The wrapper is byte-for-byte
the same shape as SetUserInt and differs in exactly one call:

| | SetUserInt | AddUserInt |
|---|---|---|
| registration | C:763388 | C:771213 |
| arg1 | checkinteger uid | checkinteger uid (C:763433) |
| arg2 | checkinteger key | checkinteger key (C:763434) |
| arg3 | checkinteger value | checkinteger value (C:763435) |
| arg4 | checkinteger flag | checkinteger flag (C:763436) |
| guard | `key-0x3e9u < 0x3e6` (C:763402) | `key-0x3e9u < 0x3e6` (C:763438) — **identical** |
| uid 0 | -> current user (C:763403-411) | -> current user (C:763439-447) — identical |
| engine call | `FUN_1404e61e0(obj,uid,key,value,flag!=0)` C:763419 | **`FUN_1404e6500(obj,uid,key,value,flag!=0)`** C:763455 |
| return | push_boolean (C:763456) | push_boolean (C:763456-line) |

So: **4 args in the order (uid, key, value, flag)**, the **same 1001..1998
guard**, the **same uid-0-means-current rule**, the same boolean push, and a
**separate engine function FUN_1404e6500**. Whether the accepted key set equals
the setter's is decided in §3b (FUN_1404e6500), not assumed.

---

## 2. Setter engine — FUN_1404e61e0 (C:874287-874403)

### 2.0 Signature / prologue

`undefined8 FUN_1404e61e0(longlong param_1, int param_2, undefined4 param_3, ulonglong param_4)`
(C:874287) — **four** parameters, though the wrapper calls it with five
(C:763418). **`param_5` (the Lua `flag`) does not exist in the callee and is
never read**: SetUserInt's `flag` argument is **dead** for the setter. (Contrast
§3b, where AddUserInt's engine does take a 5th `char param_5`.)

- `param_1` = the global current-user object `DAT_140975bf0` (C:763419).
- `param_2` = uid.
- `param_3` = key.
- `param_4` = value (truncated as `& 0xffffffff` at every use site).

Body order:
1. `param_2 == 0` -> `log_InlineLogLuaERROR("%s %d, the idUser is 0, idx:%d.")`,
   **return 0** (C:874296-874299). So `uid==0` reaching here is a hard failure —
   the wrapper already rewrote uid 0 to the current user id, so this fires only
   when there is no current user.
2. `lVar2 = FUN_140008520(*(undefined4*)(param_1+0x118))` (C:874301) — global
   lookup from the field at `+0x118`.
3. `lVar2+0x90` is dereferenced as the user manager (vtable call
   `vtable+0x98(userMgr, uid)`), C:874303-874307. NULL -> **return 0**
   (C:874309-874311). This is the user-by-id resolve, returning `plVar3` = the
   **target user object** (not necessarily the caller of the Lua script).
4. `switch(param_3)` (C:874312).
5. Fallthrough / unhandled key -> `return 1` (C:874400-874402).

**Consequence (verified, important):** the switch has **no `default:` and no
error path inside it**. Any key in 1001..1998 that has no case returns **1
(true)** while doing nothing. SetUserInt therefore reports success for keys it
ignores. There is no per-key value validation and no clamping anywhere in this
function — values are written straight through.

### 2.1 Per-key table (C:874312-874398)

`FUN_1401a6420(user, attribIdx, value, size)` is the common path; `size` is the
`uVar6` immediate (1 or 2) and is **not** a byte count in the C sense — see §4.

| key | dec | case | attribIdx | size | value handling / validation | return | C:line |
|---|---|---|---|---|---|---|---|
| 1003 | 0x3eb | `0x3eb` | 0xb (11) | 2 | none; raw `param_4` | 1 | 874313-874316 |
| 1004 | 0x3ec | `0x3ec` | 0x1a (26) | 1 | none | 1 | 874317-874319 |
| 1005 | 0x3ed | `0x3ed` | **7** | 2 | **two-step**: `FUN_140372400(user+0x1cf*8, value, 1)` then attrib 7 | 1 | 874320-874324 |
| 1012 | 0x3f4 | `0x3f4` | — | — | `FUN_1401a6670(user, value)` (dedicated func, §2.2) | 1 | 874325-874327 |
| 1024 | 0x400 | `0x400` | — | — | **guarded**: only acts when `value == 0`; two sub-branches | 1 | 874328-874340 |
| 1032 | 0x408 | `0x408` | 0xf (15) | 1 | none | 1 | 874341-874343 |
| 1033 | 0x409 | `0x409` | 0x10 (16) | 1 | none | 1 | 874344-874346 |
| 1034 | 0x40a | `0x40a` | 0xe (14) | 1 | none | 1 | 874347-874349 |
| 1035 | 0x40b | `0x40b` | 0xd (13) | 1 | none | 1 | 874350-874352 |
| 1037 | 0x40d | `0x40d` | — | — | `*(int*)(user + 0x14d*8) = value` — direct store, no func | 1 | 874353-874355 |
| 1038 | 0x40e | `0x40e` | 0xf (indirect) | — | **guarded**: `value==0` -> clear/no-op path; else `FUN_1401ab480(user,1,0xf)` | 1 | 874356-874369 |
| 1041 | 0x411 | `0x411` | — | — | `FUN_1401a9e70(user, value)` (§2.2) | 1 | 874370-874372 |
| 1042 | 0x412 | `0x412` | 8 | 1 | none | 1 | 874373-874375 |
| 1043 | 0x413 | `0x413` | **0xa (10)** | 1 | none | 1 | 874376-874379 |
| 1046 | 0x416 | `0x416` | — | — | **guarded**: `value==0` -> logout/kick teardown; else `FUN_1401651a0(user)` | 1 | 874380-874391 |
| 1048 | 0x418 | `0x418` | — | — | `FUN_140175990(user, value)` | 1 | 874392-874394 |
| 1054 | 0x41e | `0x41e` | — | — | `FUN_140373dd0(user+0x1cf*8, value, 0)` | 1 | 874395-874397 |

**Correction to the carried-in baseline:** the attrib-id set routed through
FUN_1401a6420 is **{7, 8, 0xa, 0xb, 0xd, 0xe, 0xf, 0x10, 0x1a}** — the baseline
list omitted **0xa**, which comes from key **1043** (`case 0x413: uVar5 = 10;`
C:874376-874377). Nine ids, not eight. Keys 1032-1035 and 1042-1043 use
`size = 1`, 1003 and 1005 use `size = 2`; 1004 uses `size = 1` with attrib 0x1a.

### 2.2 The three dedicated (non-attrib) key bodies

- **1012** `FUN_1401a6670(user, value)` (C:874326): no guard, no clamp.
  Meaning of the target field is decided inside that function — see §2.3.
- **1024** (C:874328-874340) is the only key with real control flow:
  ```
  if (value == 0) {
      if (user[0x151] == 0) {                     // user+0xa88
          if ((int)user[0x153] != -1) FUN_140173130(user);   // user+0xa98
      } else {
          FUN_140173030(user);
      }
  }                                                   // value != 0 -> NOTHING
  ```
  So 1024 **only reacts to value 0** (an un-set / revert action); a non-zero
  value is silently accepted and dropped. Return is still 1.
- **1046** (C:874380-874391): `value==0` runs the full teardown
  `FUN_140165190(user,0)`, `FUN_140164cf0(user,0)`, `vtable[user+0x10]+0x18`
  (sub-object destructor), `vtable[user]+8` (user destructor) and logs
  `"UserID:%u\tName:%s\tBusinessState:%u"` — i.e. **1046 = 0 destroys the user
  object** (logout/kick). Any non-zero value -> `FUN_1401651a0(user)` (set
  business state).
- **1038** (C:874356-874369): `value==0` clones the sub-object into the
  broadcast/observer list (`FUN_1401181a0()` -> manager, `vtable+0x10(manager,
  subObjId, 1)`); non-zero -> `FUN_1401ab480(user, 1, 0xf)` (attrib 0xf force).
  **No clamping.**

### 2.3 What is still UNKNOWN in the setter
- The exact field names behind `FUN_1401a6670` (1012), `FUN_1401a9e70` (1041),
  `FUN_140175990` (1048), `FUN_1401651a0` (1046) and `FUN_1401ab480` (1038) are
  decoded in §2.4/§4 where the code supports it; anything the code does not
  settle stays **UNKNOWN** below rather than being inferred from the enum name.

---

## 4. Attrib setter — FUN_1401a6420 (C:291699-291768)

`void FUN_1401a6420(longlong *param_1, int param_2, undefined8 param_3, int param_4)`
— returns **void** (no return value to propagate; the setter's `return 1` is
independent of it).

- `param_1` = user object.
- `param_2` = **attribIdx**.
- `param_3` = value.
- `param_4` = the `uVar6` from §2.1 — **this is a notify/refresh MODE (1 or 2),
  NOT a value size.** Proof: its only uses are as a vtable selector —
  `param_4 == 1` -> `vtable+0x350(subObj, buf)` (C:291737, 291758) and
  `param_4 == 2` -> `vtable+0x348(subObj, buf, 1)` (C:291741, 291762). Describing
  it as "size" in the baseline was misleading; **size is not communicated to the
  writer at all**, so there is no width-based truncation here.

### 4.1 What it actually does

Two **special-case pre-passes**, then the unconditional tail call:

1. **`param_2 == 5` early-out** (C:291718-291722): `uVar1 = vtable+8(user)` (the
   object id); if `id > 0xee69a15e` **and** `*(int*)(user+0x12fc) != 0` ->
   `return` **without writing anything**. Attrib 5 is not in our key set, so
   this is a footnote, not a blocker.
2. **`param_2 == 0` mirror-to-mate** (C:291723-291767): when the user has a mate
   (`user[0x220] != 0` = `user+0x1100`) and the mate's `vtable+0x58` capability
   has bit 22 (`uVar5 >> 0x16 & 1`) set, the value is written to **both** the
   user and the mate (`FUN_14016e430(user)` resolves the mate object,
   C:291729), and the refresh packets are emitted for both. Attrib 0 is not in
   our key set either.
3. **Everything else falls to the single real write:**
   `FUN_1401a2660(param_1, param_2, param_3, param_4)` (C:291766). This is the
   actual per-attrib field writer — decoded in §4.2.

So `FUN_1401a6420` is a **thin dispatcher**: for attribs 7/8/0xa/0xb/0xd/0xe/0xf/
0x10/0x1a (all keys in our set) it does no validation, no clamping and no
special-casing — it forwards straight to `FUN_1401a2660`.

---

## 4.2 FUN_1401a2660 — the real per-attrib writer

MUST-FILL

---
