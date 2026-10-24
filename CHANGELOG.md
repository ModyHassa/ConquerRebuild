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
