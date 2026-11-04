
## v103b (Nov 4, 2026) — 1071 fully decoded (not ported), 402 gate closed
- 1071 (182 rows): the notification half is now PROVEN. `FUN_140362620` is a
  10010 CMsgAction builder (size field 0x26, type 0x271A) and case 0x3D calls it
  as `(msg, uid, 0, 0)` with the stack slots it pre-set, so the wire is
  `+0x0C = field1`, `+0x14 = field3`, `+0x18 = 0x9F (action 159)`, plus the
  record `{field1, now, field2, ""}` pushed into the `user+0x330` container when
  `field2 != 0`. Deliberately NOT ported: the container has no known consumer,
  action 159 is not in the client's handled-action list, and the original's size
  field 0x26 (wire 38 bytes) does not match our 10010 builder (40 bytes). The
  size convention must be settled first - that is the only open question.
- 402's gate is fully decoded (subject keyword -> one of four CRoleManager counts,
  then `<`/`==` against the 4th field). The remaining unknown is what each
  CRoleManager count counts; the vtable slot hunt for `CountFurnitureNpc`
  (its log string sits in FUN_1405d4590) found no vtable pointer to that address
  in .rdata/.data, so the slot identity needs a different route (call-site
  analysis) next wave.
