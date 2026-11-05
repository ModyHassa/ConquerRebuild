# The remaining unported types and the subsystem each one needs

All facts below are address/line backed. Nothing here is guessed; each "needs" line names
the exact missing piece.

## 3701 (122 rows) - ProcessActionEspecial (FUN_14011dcb0, MsgServer.c:209901-210039)
Dispatcher: the `iVar8 - 0xE75U < 0x62` branch at MsgServer.c:223710-223714 covers
3701-3798 and calls `FUN_14011dcb0` then `FUN_14011bfa0` (`ProcessActionFactionMatch`, which
itself only handles 0xED9-0xEDD = 3801-3805 and 0xEDE = 3806).
For type `0xE75` = 3701 the body is:
1. `(*actor_vtbl+0xA8)(actor, buf)` -> status byte; bit 0 set = dead -> send `STR_DIE` and fail.
2. `sscanf(param, "%d %s %d")` must return 3; first value < 1 -> fail.
3. `manager(uid, 0x56)` (twice, plus `0x56, 0xF`), `FUN_140164e30(user, ...)` twice.
4. Reads row cells 2 and 1, builds a CMsgAction-family packet with **action 0xA4 (164)** via
   `FUN_140362560`/`FUN_140362700` and broadcasts it on the map (`+0x348`).
5. Returns 1 (id_next).
NEEDS: `FUN_140164e30` semantics and the `0x56` manager notification meaning before the
packet fields can be reproduced faithfully.

## 1043 (65 rows) - case 0x25, one line: `return FUN_140162620(user);`
`FUN_140162620` (MsgServer.c:244573-244654) iterates the container at `user[0x222]`
(offset 0x1110); for every element it clamps with `FUN_14039d8e0`/`FUN_14039d7e0`, sets a
flag with `FUN_14039d8f0(el,1)`, removes it from the container (`vtbl+0x28`), and sends a
**0x6E packet** (`FUN_140362560`, constant `0x6E` at local_4b0) carrying the element's
`FUN_14039d9d0` value plus the actor's map/pos getters (`+0x50/+0x48/+0x40`).
NEEDS: the `user+0x1110` container's owner type (the accessor set
FUN_14039d760/d7e0/d8e0/d8f0/d9d0) before the packet layout can be reproduced.

## 1651 (95 rows) - case 0xA6 (index 650 of the byte map = 0xA6)
Gate: `(char)user[0x12D] != 2` -> fail. Then `sscanf(param_7,"%u")` = an object id, fetched
through the world manager's `+0x20` getter; the row's DATA column selects a sub-operation
(1 = name compare against the object's `0x1040` property via `strncmp(...,0x40)`), otherwise
it sets `user[0x12D] = 1`, calls `FUN_140165a30(user)` and fails.
NEEDS: the faction/state subsystem behind `user+0x12D` (and the `0x1040` property).

## 1072 (68 rows) - case 0x3E
`FUN_1403a5840` (packet ctor) + `FUN_1403a5ce0(buf, row_DATA, a, b)` with the constant `0xD`
in the 6th slot, then a send-to-self (`+0x350`) when it succeeds. The two other arguments
come from the actor's `+0x10` sub-object getters `+0x48`/`+0x40`.
NEEDS: the `FUN_1403a5840`/`FUN_1403a5ce0` packet family layout.

## Status of the rest
* 1040 (668) - apply core decoded; needs the five base stats (user+0xED8..0xEE2) modelled.
* 1083 (121) - needs user flags 0x1B/0x1C (`vtable+0x2D8`).
* 403 (93) - parses the ITEM accept string; body still being decoded.
* 532 (252) - not in the old dispatch ladder; dispatched from the item-attribute path.
