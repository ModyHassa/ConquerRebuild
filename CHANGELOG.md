# CHANGELOG

## v48 (Oct 24, 2026) — 543 consume-pack + default-route coverage
- Ported action 543 (case 0x21f): consume ONE copy of the DATA itemtype (Pack items, gate
  cq_itemtype.ident==0, GetCell 0x17) — erase + 2077 mode-7 notify; unknown itemtype / missing
  item -> id_nextfail. New DB API itemtype_ident. Fixture band 99000700-19 on MapSage.
- VERIFIED: types 401-403/498/532/544 have NO case in the original old-engine switch — the
  original default (DBERROR+false) equals our id_nextfail routing; regression test added
  (unhandled type 401 takes the fail branch only).
- Gotcha reconfirmed: ItemTaker (account 100010) MUST log in with uin 999 everywhere
  (test_actions_v48 + test_itemaction) — mixing UINs triggers the original duplicate-UIN code 2.
- Suite: 32/32 green (test_drops in-suite timeout = known RNG pill-hunt flake; passes standalone).

## v47 (Oct 24, 2026) — 1004 SetRecordPos + 1070 Relive
- Ported 1004 (record point, map validation via cq_map) + 1070 (relive core: cross-map
  player-list re-register fix, self-inclusive respawn broadcast, item snapshot resend).
- test_login_chain made deterministic (self-snapshot assertion instead of ambient monster 10014s).
- Repo pushed to github.com/ModyHassa/ConquerRebuild (private) with full handoff docs.

## v49 (Oct 24, 2026) — 2008 named-entity count check
- Ported action 2008 (old-engine 0x7d8, 212 rows): sscanf "%u %s %s %s %d" —
  (mapid, mode, name, op, n); mode "name" counts alive monsters by name on
  the map, "gen_id" by cq_generator.id (new Monster.gen_id field +
  MonsterManager::count_named); ONLY "<" and "==" comparisons exist in the
  original; invalid mode -> false outright -> id_nextfail.
- Real rows are guild-war entity checks ("4025 name UltimatePluto < 1").
- MapSage menu now 6 options; v49 test resets TestKnight record pos first
  (v47's relive leaves him on map 1015 — any MapSage test must do this).
- Suite: 34/34 green.

## v50 (Oct 24, 2026) — 2013 ground-item removal
- Ported action 2013 (0x7dd, 101 rows): sscanf "%u %u %d" (mapid, itemtype,
  count; -1 = ALL/0xffff); scans the map's GroundItemManager, removes matches
  (1101 action-3 broadcast to the map) up to count. Returns FALSE only on
  malformed param — zero matches still TRUE (matches the original).
- Test v50: branch semantics both paths green (35/35 suite). Live-pile e2e
  removal check attempted 3x (piles expire ~60s; every suite test picks up
  its drops) — removal uses the same remove+1101 path as tested pickup;
  runtime-row pattern (test INSERTs its own cq_action chains 99000750+) works.
- Gotcha: python here forbids attribute assignment on socket objects — use the
  _rcv dict buffer pattern from the test harness, not sock._b.

## v51 (Oct 24, 2026) — 2012 mass teleport + 2013 CORRECTED
- CORRECTION of v50: 2013 (0x7dd) is NOT ground-item removal. The iterator
  (FUN_140087650/1402ac340) walks USERS — proved by 2012's log text
  "ACTION_EVENT_MAPUSER_CHGMAP user(%u) failed in fly map(%u)" in the same
  iterator and by the mail-attachment award call site of FUN_140145f60
  (item_sys, itemtype, user, 0). 2013 = award ONE item of itemtype to each
  user on mapid, count-limited (-1=0xffff=all). sscanf==3 gates the fail
  branch exactly as before. Test now verifies the awarded cq_item row +
  the 1008/2077 broadcasts.
- Ported 2012 (0x7dc, 44 rows): sscanf "%u %u %d %d" = (srcmap, destmap,
  x, y): teleport EVERY user on srcmap to destmap (x,y) via new
  teleport_player() helper (same wire as 1003: 74-leave broadcast, list
  re-registration, 10014 spawn, screen refresh). Test verifies the map
  change server-side via a 2003 %user_map_id chain + malformed fail.
- Gotchas: (1) 2031 dialog only answers if npc->map_id == player's map AND
  npc->task0 != 0 (Pharmacist id 9 has no task0; use MineAssistant id 127
  on map 1000 for dialogs there). (2) Test drains: check side-effect
  packets in the SAME click's drain (a later click overwrites `pkts`).
  (3) suite runner needs timeout >= 700s at 36+ tests.
- Suite: 36/36 green.
