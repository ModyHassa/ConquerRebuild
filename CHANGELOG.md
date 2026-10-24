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

## v52 (Oct 24, 2026) — 2010 broadcast + 2011 map attributes, 37/37
- Ported 2010 (0x7da): one CMsgTalk from "SYSTEM" to EVERY online player
  (original FUN_14010b370(sys,0,"SYSTEM",param), no fail branch). 0 rows
  in this DB but engine-complete; test verifies BOTH sessions (sender +
  a second player) receive the 1004.
- Ported 2011 (0x7db): set a live map attribute. sscanf "%u %s %s" =
  (mapid, key, value); keys id/name/type (FUN_1402cbdc0/cbbb0/cb9e0).
  15 rows in DB, all "type" (guild-war map switching). "type" follows
  the 306 attrib pattern (GameMap::attribs), "name" via new set_name();
  "id" stored in attribs (re-keying maps_ unsafe, documented).
  Fail branch only on sscanf < 3. Test verifies the write via the
  server log printf.
- GOTCHA (major): the disconnect save PERSISTS the in-memory map of a
  teleported player into cq_user.recordmap_id — v51's chgmap left
  TestKnight spawning on map 1000, so his MapSage (1002) clicks were
  silently dropped by the npc->map_id != p.map_id guard. Fixture tests
  that teleport MUST fly back (v51 now clicks the 99000775 fly-back
  chain), and any record-pos reset must use cq_user.account_id (the
  game login id), NOT cq_user.id — TestKnight's cq_user.id is 1.
- Suite: 37/37 green (test_actions_v52 added).

## v53 (Oct 24, 2026) — 2005 test coverage, 38/38
- No engine change: added test_actions_v53 covering the EXISTING 2005
  (0x7d5) case — both the real DB row shape (plain text -> sscanf 0 ->
  DBERROR -> fail branch) and a short numeric param. Fresh decode of
  0x7d5 confirmed the old stub is wire-accurate for all DB content; a
  duplicate case attempt was reverted (duplicate case build error —
  2005 was already ported; check `grep "case 2005"` before adding).
- DECODED but deferred: 2014 (0x7de, 1 row) = 10-field sscanf then a
  CurrentInstanceGet()+system-5 call — needs that subsystem decoded.
  2009 (0x7d9) still the big remaining target.
- Suite: 38/38 green.

## v54 (Oct 24, 2026) — 2009 event-monster arming, 39/39
- Ported 2009 (0x7d9, 77 rows): arm a LIVE monster as an event/boss
  monster. sscanf "%u %u %d %s" = (mapid, monstertype id, t3, name).
  Original: search the monster system's live list for the first
  monster with map==t1 (vtbl+8), type==t2 (vtbl+0x50), name equal to
  the token when present (strcmp tail at 224874; empty token = any);
  then if field@0x154 == 0 -> FUN_14038e270(m, 1) + TRUE (id_next).
  Not found / name mismatch / already armed -> FALSE. sscanf < 2 ->
  DBERROR. t3 != 0 filter uses UNKNOWN getter FUN_1401178a0 (0 rows
  in DB use it; we log + fail those). No client packet — pure
  server-side state. Rows: "1038 3120 0 GuildBeast" etc (guild war).
- Impl: Monster.event_flag (0x154 analog), MonsterManager::
  find_event_target(type, name), case 2009 in actions.hpp.
- Test (test_actions_v54): arm Pheasant (type 1, 19 generators on
  1002) -> ok; re-arm -> fail (already armed); name mismatch -> fail;
  map w/o monsters -> fail; 1-token param -> fail; exactly ONE
  'armed event monster' line in the server log.
- Suite: 39/39 green.
