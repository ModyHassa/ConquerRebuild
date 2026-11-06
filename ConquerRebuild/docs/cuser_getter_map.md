# CUser vtable getter map (verified from the binary)

vftable VA **0x14071ed48** (written by the CUser ctor 0x1401bed70). Each low slot is a
one-instruction thunk, which makes the field map cheap to read off:

| slot | thunk | returns |
|---|---|---|
| +0x08 | 0x1401bf430 | `*(u32*)(this+0xE80)` |
| +0x10 | 0x1401bf420 | `*(u32*)(this+0x08)` — the role id |
| +0x18 | 0x1400fd6e0 | writes `*(u32*)(this+0x08)` (the matching setter) |
| +0x30 | 0x1401bf410 | `*(void**)(this+0x1110)` — the container pointer (the 1043 source) |
| +0x38 | 0x1401bf440 | `*(u32*)(this+0xE84)` |
| +0x40 | 0x1401bf450 | `&*(this+0x1068)` (an embedded string/sub-object) |
| +0x48 | 0x1401bf460 | `*(u32*)(this+0xEA8)` |
| +0x50 | 0x1401bf470 | `*(u32*)(this+0xEAC)` — **lookface** (matches the 1026 port: `(lookface%10000)/1000`) |
| +0x58 | 0x1401bf500 | writes `*(u32*)(this+0x10EC)` |
| +0x60 | 0x1401bf510 | `*(u64*)(this+0xEB8)` |
| +0x68 | 0x1401bf520 | `*(u64*)(this+0xEC0)` |

Cross-check with the older getter notes: `+0x60`=money, `+0xA0`=exp, `+0x108`=level, `+0x80`=mana,
`+0x88`=max_mana are *different* offsets accessed through the `user+0x10` sub-object, not this table.

## Consequences for the action decodes
* **1025** (case 0x13) = `call 0x140164440` = `return CUser::vt[0x48]() != 0`, i.e. "pass iff
  `user+0xEA8 != 0`". A full-binary scan finds **exactly one** reference to `+0xEA8` - this very
  getter - so nothing in the action/game code ever writes it. It is presumably filled by a bulk
  role-record load (offset inside a copied block) and its identity is **UNKNOWN**. Not ported.
* **1024** (case 0x12) = `call 0x140173e20`, which first does `if (user->vt[0x48]() == 0) return 0`
  and then looks provider **8** up (`GetProvider(8)`); when that is NULL it logs
  `Family.dll not load. %s, %d` (0x140717468) and continues. So 1024 is family-module work gated on
  the same `+0xEA8` field. Not ported (needs the family module and `+0xEA8`).
* **1023** (case 0x11) = `call 0x140172910`: checks `[user+0xC28] > 0x28` (bag full -> message),
  builds `SELECT * FROM cq_bonus WHERE id_account = %u AND flag = 0 LIMIT 1` from `user+0xF10` and
  executes it. `cq_bonus` exists in the shipped schema (`action, id, id_account, flag, ref_id, time,
  ordernumber, bonus_in_time, number`) but has **0 rows**, and the per-row grant logic is not yet
  decoded. Not ported.
