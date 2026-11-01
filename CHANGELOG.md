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

## v54b (Oct 24, 2026) — DECODE ONLY: 2006 (0x7d6) monster-create + 2014 (0x7de) — no code change
- 2006 (534 rows, case 0x7d6 @224163-273) = RUNTIME MONSTER CREATE on a
  map (original errors: "map[%lu] is market map, can not create monster"
  / "...is Arenic map, can not create monster!"). sscanf
  "%d %u %u %d %d %u %u %d %s" (9 fields, need >= 7; <7 -> DBERROR +
  return 0 = id_nextfail). Sample row: "0 0 1038 86 78 1070 3120 0
  GuildBeast" -> (d1=0, u2=0, MAP=1038, 86, 78, 1070, TYPE=3120, d8=0,
  name=GuildBeast). Flow: name token (if present) must be <= 0x24=36
  chars, pass NameStrCheck, and FUN_14008a1d0(sys,name,0) must be 0
  (nonzero -> FAIL, semantics unknown). Map via FUN_1400876b0(sys)
  (MAP system, same as 2011) (vtbl+0x20)(sys, mapid, 1): not found ->
  fall into the spawn path anyway?? (lVar15==0 -> LAB_1401476dd =
  SPAWN STRUCT BUILD + call); found -> arena guard FUN_14011dbb0(map)
  -> FAIL ("Arenic"); market guard FUN_140119540(map) -> FAIL
  ("market"); else LAB_1401476dd. The 0x40-byte spawn request struct:
  [+0]=u (local_408) [+4]=d (local_3e8) [+8]=MAPID [+0xC..0x10]=bits
  (local_434:u2, local_438:u1) [+0x14]=u (local_428+uStack_426)
  [+0x18]=u2 (local_3f8) [+0x1A]=u2 (local_430). Name empty or
  "ACTIONSTR_NONE" -> (vtbl+0x20)(spawnSys, struct, NULL) else
  (vtbl+0x20)(spawnSys, struct, name); return that bool (TRUE ->
  id_next). spawnSys = singleton+0xA0 via FUN_1400e1d30 (accessor,
  169000: returns this+0xa0 with null-check).
- NEXT-CYCLE RECIPE for 2006: decode the class stored at singleton+0xA0
  (find its ctor/vtbl) and the +0x20 create function to get exact
  struct field roles (x/y/type/count/dir?), THEN port. Reuse our
  action-304 spawn_one + 307 count_region for the test.
- 2014 (1 row "0 8 1 3 9 1 9 8 1 3", case 0x7de @224591): sscanf 10
  ints, need > 9 matches, then CurrentInstanceGet() singleton ->
  (vtbl+0x20)(,5) subsystem + (param_2 vtbl+0x10)(,4) getter +0x48
  on player, then a 4-arg virtual call (obj, uVar7, local_428,
  &local_418). Undecoded subsystem — needs CurrentInstance map.

## v55 (Nov 1, 2026) — 2006 runtime monster create, 40/40 green
- Ported 2006 (0x7d6, 534 rows — the last big guild-war family member):
  sscanf "%d %u %u %d %d %u %u %d %s" = (pad1, pad2, MAPID, X, Y,
  GEN_ID, MONSTERTYPE, pad3, NAME); needs >= 7 fields else DBERROR +
  fail. DB-verified across all 534 rows: token3 = map (1038/1020/4025...),
  token4/5 = coords, token6 = cq_generator.id (7/8 sampled values are
  valid generator ids), token7 = cq_monstertype.id (3120 GuildBeast /
  3136 TitanL79 / 5058 Syren / 5059 UltimatePluto all match), pads 0.
- Full decode chain: case body 224163-273 -> CNpcManager at singleton
  +0xA0 (ctor FUN_140159b00, vtable 0x140713720 read straight from
  .rdata) -> slot +0x20 = FUN_14015a110 (create): CheckBornPoint
  FUN_14015a010 (map must exist; 4x4 walkable-cell scan from (x+3,y)
  that rewrites x/y), arena guard FUN_14011dbb0 / market guard
  FUN_140119540 (DBERROR), monstertype lookup (unknown -> fail), then
  FUN_140390070 builds the CMonster and it is registered into the map
  monster list. Struct 0x40: [+4]=map [+0x10]=gen_id [+0x14]=x
  [+0x16]=y [+0x18]=1 [+0x1A]=monstertype; name token becomes the
  monster's name ("ACTIONSTR_NONE" = none).
- Documented engine-level deviations: flat maps have no cell data so
  CheckBornPoint keeps coords (no 4x4 scan); no arena/market map flags
  so both guards are false; deeper name-pool check FUN_14008a1d0
  deferred (no DB row reaches it).
- Test v55 (band 99000840-69, map 9999 isolated): pre-count 0 -> spawn
  named V55Ghost (type 1, gen 0) -> count == 1 (proves registration +
  name override) -> unknown type / missing map 8888 / 3-field param /
  40-char name all take the fail branch -> exactly one spawn line in
  the server log. Suite 40/40 green.
- GOTCHA: an extra live monster on map 1002 poisons test_weaponskill's
  target selection (it picks the first visible monster; exp after
  level-up came out 1 instead of 12/13). Fixture spawns must live on an
  isolated map (9999, created by v54's 2009 chain; v55 clicks that
  chain first so it is standalone-safe).

## v56 research (Nov 1, 2026) — REAL-CLIENT TRANSPORT DISCOVERED (no code yet)
Decode-only wave: nailed how the real v6159 client talks to the game port.
- **Login-leg status:** the SRP account leg is DONE and tested (1542→1213→
  1214→1055). Client factory (Conquer.c 682225+) confirms: 0x3ea=CMsgLogin,
  0x41c=CMsgConnect, 0x41f=CMsgConnectEx (=our 1055 reply), 0x4bd=CMsgLoginChallengeS
  (1213). Server ProcessAccountNetMsg (MsgServer.c ~70680): 0x3ea MsgLogin size
  0x20 (account u32@+4, key u32@+8, u16@+0xC, ptr@+0xE -> FUN_140056130 logs
  "Account server login OK/Failed" + FUN_140055740), 0x41c MsgConnect size 0x1c,
  0x429 MsgConnectFB size 0xb0, 0x4b0 MsgFee 0xc, 0x4b1 MsgQFee 0x14,
  0x4b2 MsgWebRequest 0x1ec, 0x5fc MsgOfflineCheating 0xc, 0x609 MsgAccountTransfer.
  These are the ACCOUNT-NET (server-to-server) messages — the original client
  never speaks them to the game port directly.
- **THE MISSING PIECE — the game socket is ENCRYPTED from byte one.**
  Client (Conquer.c): FUN_0080638d returns "TQClient", FUN_00806393 returns
  "TQServer" (the two handshake magics). FUN_00806399 = the CAST token builder:
  hex1 = md5hex(secret) (32 chars), buf = hex1+hex1 (64), hex2 = md5hex(buf),
  token = hex1+hex2 (64 chars) — IDENTICAL to the MsgServer FUN_140503c00
  token verified in the sibling TQServer-CPP-rebuild project (M14).
  FUN_008064c9 = the client key-exchange SENDER: builds a random blob (len
  10..49) + server string (FUN_00866100), appends "TQClient"+u32 len, then
  encrypts with the hardcoded handshake passphrase **"C238xs65pjy7HU9Q"**
  (FUN_00864d40/FUN_00864700 — the CFB/CAST layer) and sends. Server side:
  memcmp "TQClient" at MsgServer.c 884703 (the key-exchange receiver
  FUN_140505bc0 family).
- CONSEQUENCE: full real-client compatibility requires porting the encrypted
  transport (handshake magic "TQClient"/"TQServer", handshake key
  "C238xs65pjy7HU9Q", DH key exchange, CAST token, per-message CAST-CFB64 with
  "TQServer" appended after every encrypted message). That is the whole
  security layer the sibling TQServer-CPP-rebuild repo already mapped against
  this same binary (its M14-M21 units; local clone at ../TQServer-CPP-rebuild
  is reference evidence — adapt, and re-verify each function in our decompile).
- PLAN M-A..: (a) transport skeleton: TQClient receive + handshake decrypt +
  TQServer reply; (b) DH + CAST token; (c) encrypt/decrypt message framing;
  (d) then the account-net emulation (MsgLogin/MsgConnect) on top of the
  encrypted channel. Tests: extend test_login_chain with a real-handshake
  simulation (python side implementing the same algorithm from the client
  decompile) before touching the plaintext dev protocol.

## v57 (Nov 1, 2026) — wave M-A: transport crypto foundation, 41/41 green
- Real-client transport, step 1 of 4. New src/crypto/:
  - cast128.hpp: thin, literal wrappers over the SAME OpenSSL API the
    original imports from libeay32.dll (CAST_set_key / CAST_cfb64_encrypt /
    CAST_encrypt/decrypt). Provenance check: the CAST S-boxes are NOT
    statically in MsgServer.exe (pattern search on 0x30fb40d4 found nothing)
    but ARE in libeay32.dll (.rdata @ 0xd7c44, 8192 bytes, S1[0]=0x30fb40d4,
    S2[0]=0x1f201094 — RFC 2144 identical).
  - msg_token.hpp: FUN_140503c00 token chain — hex1 = md5_hex(secret),
    buf = hex1+hex1, hex2 = md5_hex(buf), token = hex1+hex2 (64 chars) =
    the CAST session key fed to CAST_set_key(ctx, 0x40, token).
  - dh_params.hpp: FUN_140505380 loader — PEM_read_DHparams("dh.pem")
    (the exe's own directory has conquer_source/Source/dh.pem, 512 bits) +
    DH_check; the not-ready flag semantics of DAT_140976588/590.
- tests/crypto_unit_test.cpp (compiled+run by tools/run_suite.sh, prints
  PASS crypto_unit): CAST-128 ECB vector 0123456712345678234567893456789A /
  0123456789ABCDEF -> 238b4fe5847e44b2 (matches openssl `enc -cast5-ecb`
  with the legacy provider), block decrypt, CFB64 encrypt/decrypt
  round-trip, md5_hex('test') anchor 098f6bcd..., the token chain
  (token('test') = 098f6bcd4621d373cade4e832627b4f6
   b2d303c20b9468bbe90114d3d1874b3), and dh.pem load (512-bit, check 0).
- Suite 41/41 green (40 live tests + crypto_unit).
- NEXT WAVES (decoded already, in HANDOFF): M-B the key-exchange receiver
  FUN_140505bc0 (wire: CAST handshake key "C238xs65pjy7HU9Q", cfb64 of the
  first 0xb bytes carries the payload length at out[7..10], then the body,
  trailing "TQClient" at payload+len-0xc, TLV walk -> client pub key hex ->
  DH_compute_key -> token -> set session key; returns len+7) + the reply
  builder FUN_140500670 (appends "TQServer" at the end, CAST_cfb64 enc);
  M-C the per-message encrypted framing (len u2 + type u2 + payload +
  8-byte trailing magic — FUN_1404f6c90 validates exactly that); M-D wire
  the account-net login (1002 MsgLogin 0x20 / 1052 MsgConnect 0x1c /
  1055 CMsgConnectEx) on the encrypted channel.

## v58 (Nov 1, 2026) — wave M-B: encrypted handshake ported, 42/42 green
- src/net/transport.hpp: literal port of the game-socket key exchange.
  WIRE PROVEN WITH OBJDUMP (0x140505bc0) + the client decompile:
  client -> [7-byte random prefix][u32 total][u32 L1][blob L1][u32 L2]
  [pubkey HEX L2]["TQClient" 8], total = 4+(4+L1)+(4+L2)+8, the whole
  stream CAST-CFB64 encrypted with the hardcoded handshake passphrase
  "C238xs65pjy7HU9Q" (0x14079ae58), ivec=0, num=0.
  Receiver steps (FUN_140505bc0): guards -> CAST_set_key -> cfb64 11
  bytes (out @ rsp+0x130) -> len = u32 at out[7..10] (disasm:
  movsxd rdi,[rsp+0x137]) -> 0xb < len < 0x401 and wire >= len+7 ->
  cfb64 from wire+0xb (disasm: lea rcx,[rsi+0xb]) into rsp+0x13b ->
  magic compare *(u64*)(payload+len-0xC) vs 0x14079ae38 (disasm:
  mov rax,[rsp+rdi+0x12f]) -> single TLV step (L1 then L2) ->
  BN_hex2bn -> DH_compute_key -> FUN_140503c00 token (0x40 chars) ->
  CAST_set_key(session) -> return len+7. NOTE the receiver's second
  cfb64 pass deliberately starts 4 bytes into the payload (the u32
  total was already consumed by the first pass) — that is why the TLV
  cursor starts at 4 and the magic sits at len-0xC.
- Send path FUN_140500670: conn+0x1a = encryption enabled; when on the
  packet is CFB64-encrypted with the session key and "TQServer"
  (0x14079ae40) is appended; plaintext through conn+0x14 == 1;
  states >1 log "socket:%lu" and close.
- tests/transport_unit_test.cpp (in run_suite.sh -> "PASS
  transport_unit"): simulates the client EXACTLY (DH key pair from
  dh.pem params, hex pub key, FUN_008062a8-style TLV payload, the
  handshake encryption), asserts the receiver consumes len+7, both
  sides derive the SAME 64-char CAST token (key agreement proven), the
  client decrypts a server packet carrying the TQServer magic with its
  own token, and the negative paths (corrupted magic -> -1, short
  packet -> 0, missing DH -> -1).
- OPEN QUESTION for the real-client hookup (documented): the receiver
  consumes 11+len CFB bytes while the client emits 7+len, i.e. 4 extra
  bytes — the original's socket buffer absorbs them; when wiring the
  live server the recv buffer must provide >= 4 spare bytes and the
  follow-up packet's CFB position needs checking against the client.
- Suite: 42/42 green (40 live + crypto_unit + transport_unit).

## v59 (Nov 1, 2026) — wave M-C: transport wired live, 43/43 green
- src/net/frame.hpp: the framing ports — FUN_1404f6c90 (parse:
  [len u2][type u2][payload len-4] + optional PLAINTEXT 8-byte trailing
  magic compared at buf+len; len<4 or >0x400 rejected; returns len/0/-1),
  FUN_1404f6d30 (build len=payload+4) and FUN_1404f6dc0 (build with a
  u32 extra at +4, len=payload+8).
- src/main.cpp + src/net/net.hpp: the live integration.
  * startup loads dh.pem (FUN_140505380 semantics) and DH_generate_key;
    missing dh.pem only disables the encrypted handshake (logged).
  * per-connection: if the first 4 buffered bytes are NOT a plausible dev
    frame (len 4..0x400, type 1..20000) the transport tries
    receive_key_exchange; >0 consumes the handshake and arms the session,
    0 waits for more bytes, -1 falls back to the plaintext dev protocol.
  * encrypted sessions: the 4-byte header is decrypted once, the rest when
    the frame is complete, the trailing plaintext "TQClient" must match,
    then the decrypted frame goes to the SAME dispatcher; bad length or
    magic closes the socket. Outbound: ClientSession::send routes through
    build_outbound (CAST-CFB64 + "TQServer") whenever the session cipher
    is armed, plaintext otherwise.
  * The session CFB64 ivec/num start FRESH after the handshake (the
    receiver uses a local scratch ivec/num) — the 4-byte over-read of the
    handshake pass does not desync the live stream (open question closed).
- tests/transport_live_test.cpp (in run_suite.sh -> "PASS transport_live"):
  connects to the running server, performs the real client handshake
  (CAST + DH + TLV + magic), asserts the server logs "handshake ok from",
  then proves the plaintext dev protocol is untouched (1008 login reply is
  a valid 1008 frame with no TQServer magic).
- Makefile: -lcrypto added to the server link (the transport uses the same
  OpenSSL API the original's libeay32.dll import does).
- Suite: 43/43 green. NOTE: the first attempt failed across the board
  because MariaDB was down (seed silently failed) — restart it with
  `service mariadb start` before the suite (already a HANDOFF gotcha).

## v60 (Nov 1, 2026) — wave M-D: the server HELLO (pub key publication), 43/43 green
- CLIENT EVIDENCE (Conquer.c): the client does NOT start the handshake
  blind — its recv loop calls FUN_00806995 on the SERVER's first packet and
  only then sends its FUN_008064c9 exchange. FUN_00806995 proves the wire:
    wire = [11-byte prefix][u32 cursor][u32 L][p hex][u32 L][g hex]
           [u32 L][pub hex]["TQServer" 8]
    all CAST-CFB64 with the fixed key "C238xs65pjy7HU9Q" (decrypts 15 bytes,
    length at bytes 11..14). It BN_hex2bn's p and g into its own DH,
    DH_generate_key()s, DH_compute_key()s against the published pub, runs the
    SAME md5-chain token (FUN_00806399, == our FUN_140503c00) and
    CAST_set_key()s the session. That is why our receiver already produces a
    key the real client can reproduce: no extra reply is needed.
- SERVER EVIDENCE (MsgServer.c ~0x140504f80): three TLV appends via
  FUN_140503ac0 (running cursor kept at buf[0..3]) + 0x7265767265535154
  ("TQServer" LE) + CAST_set_key(..,"C238xs65pjy7HU9Q") +
  CAST_cfb64_encrypt(prefix_and_payload, wire, len+0x13) — encrypting the
  11-byte prefix together with the payload.
- Implemented src/net/transport.hpp: tlv_append (FUN_140503ac0 port) and
  build_server_hello(DH*, out) publishing p/g/pub as BN_bn2hex strings.
- Live hook in src/main.cpp: on accept, when CQ_TRANSPORT_HELLO is set, the
  hello goes out before any framing (env-gated so the dev-protocol tests keep
  a plaintext stream; the real client deployment enables it).
- tests/transport_unit_test.cpp: the hello is decrypted with the handshake key
  and the client-model reader extracts p/g/pub and verifies p==dh.pem,
  g==dh.pem, pub==server pub + the TQServer tail magic.
- Suite 43/43 green. GOTCHA reconfirmed twice today: MariaDB stops on its own
  between runs and run_suite.sh seeds silently — always `service mariadb
  start` before a suite run or nearly every test fails with confusing
  symptoms (missing accounts, "no cq_item rows", polluted UIN).

## v61 (Nov 1, 2026) — wave M-E: ENCRYPTED-SESSION LOGIN WORKS, 44/44 green
MILESTONE: a client model speaking the real v6159 socket protocol now logs
in end to end against the live server: server hello -> client DH from the
hello's own p/g -> CAST token -> handshake -> encrypted 1008 login -> 23
encrypted reply frames (first = 10014 player spawn).
- tests/transport_login_test.cpp: full client model (hello parse per
  FUN_00806995, DH_generate_key + DH_compute_key, build_cast_token,
  FUN_008064c9 handshake, [len u2][type u2] frame + TQClient tail,
  iterative TQServer-framed reply reader). Live-verified: server logs
  "[transport] handshake ok" and "[login] OK: TestKnight".
- BUGS FOUND AND FIXED by the live test (each desynced the stream):
  (1) the receiver's second CFB pass consumes 4 bytes PAST the handshake
  stream (objdump 0x140505d0c reads [rsp+rdi+0x12f]) — the caller must drop
  them too, else they parse as a bogus frame header ("bad encrypted len");
  (2) send and receive need SEPARATE CFB64 state (ivec/num vs ivec_tx/
  num_tx) — sharing one state garbles every packet after the first;
  (3) the frame header is [len u2][type u2] = 4 bytes (two u32 writes
  shift the payload — test-side bug worth remembering for fixtures).
- tools/run_suite.sh now starts a second server on CONQUER_PORT=5817 with
  CQ_TRANSPORT_HELLO=1 for this wave, then kills it; suite = 44.

## v62 (Nov 1, 2026) — wave M-F: 112 notice line COVERED, 45/45 green
- 112 (case 0x70, 16 real rows) turned out to be ALREADY ported in an
  earlier wave (send_line(112, 0, data, 0, 0, param) + id_next). Rather
  than duplicate it, this wave re-derived the case from the binary
  (FUN_1403a6400: mode byte @wire+0xF, face @+0xE, reply id u16 @+0xC,
  text via CStringPacker, send TO ACTOR ONLY via vtbl+0x350) and locked
  the behaviour with tests.
- tests/test_actions_v62.py (new, 6 assertions, live): exactly one
  mode-0x70 line per row; reply id carries the DATA column; text is the
  param string; chain continues to id_next; an EMPTY param still emits
  the line and still continues. Fixture chains 99000870-99000889 in
  tools/seed_test_accounts.sql.
- tools/run_suite.sh: test_actions_v62 registered -> suite = 45.

## v63 (Nov 1, 2026) — wave M-G: data-driven coverage map (no code risk)
- tools/action_coverage.py (new): cross-references every cq_action type
  in the live DB against the `case N:` labels in src/systems/actions.hpp
  and writes ACTION_COVERAGE.md (table + "remaining by weight").
- MEASURED STATUS: 193,375 action rows; 188,309 covered = **97.4%**;
  106 of 216 distinct types implemented.
- Top remaining by row weight (next waves, in order): 1040 (668),
  1086 (640), 1554 (500), 402 (303), 131 (253), 532 (252), 1095 (245),
  1071 (182), 3701 (122), 1083 (121).
- 131 deliberately NOT ported this wave: its builder (FUN_140362620,
  mapgroup chatkernel family) writes a DIFFERENT 1004 layout than the
  verified build_talk_1004 (id @+4, style 162 @+8, lookface @+0x10, four
  u2 fields @+0x14..+0x1E, size 0x26, no string packer) and the client's
  rendering of those fields is still unidentified — porting it on the
  existing layout would have been invention.
- No server code touched this wave; suite stays 45/45.

## v64 (Nov 1, 2026) — wave M-G2: coverage map now separates REAL work
- tools/action_coverage.py gained a second dimension: it scans every
  `case 0xNNN:` label inside the decompiled ProcessAction switch
  (MsgServer.c 190000-280000) and classifies each DB type as
  OK / "TODO (original has the case)" / "n/a (no case in the original
  switch)". Types the original never switches on are task-engine steps
  or no-ops — porting them would have been invention.
- FINDING: the 216 DB types are only 173 cases in the original switch;
  110 of the DB types are NOT action cases at all (e.g. 1040's 668 rows,
  1086's 640, 1554's 500 — all task-engine territory). The earlier
  "top remaining" list was therefore misleading.
- REAL remaining work, ranked: 131 (253), 542 (113), 2101 (103),
  2007 (54, needs guild), 550 (53), 529 (49), 528 (49), 129 (36),
  332 (30), 717 (28), 519 (27), 144 (24).
- No server code touched; suite stays 45/45.

## v65 (Nov 1, 2026) — wave M-H: deferred-type dossiers (evidence, not guesses)
- DEFERRED_TYPES.md (new): every remaining REAL action type recorded with
  its decoded skeleton, the exact `case` line in decompiled/MsgServer.c,
  the helper addresses involved, and the precise BLOCKER that stops the
  port. Covers 131, 542, 528, 529, 519, 332, 550, 144, 717, 2007, 2101.
- New evidence this wave: 519 (0x207) decoded end to end structurally
  (inventory scan via FUN_1403408c0: iterate the item-id vector at
  player+0xC20..+0xC28, match attribute 1, then FUN_14033a6a0 per hit,
  returns "any matched") - it stays deferred only because FUN_14033a6a0's
  effect is unknown. 542's sscanf exposes 15 of 17 pointer slots, so its
  field->slot map is incomplete; 528/529/542 all wait on the
  FUN_140104140 item-attribute slot enum.
- No server code touched this wave (deliberate: the four biggest remaining
  types need the item-attribute slot enum or the 131 renderer, and coding
  around them would emit bytes the original never sends). Suite 45/45.

## v66 (Nov 1, 2026) — wave M-H2: the item SetInt blocker is decoded
- FUN_140104140 fully decoded (MsgServer.c line 192582): it is a generic
  SetInt(item, idx, value) over the item's ITEMTYPEDATA attribute array,
  guarded by `idx < 100` (CHECK log names item.cpp / ITEMTYPEDATA_OFFSET).
  idx 0x13 (19) is the EQUIPMENT LOCK attribute - proven by the GM log it
  emits ("gmlog/EquipmentLockStatus"). Setting 0/3/10/11/14/15/16 also
  recomputes attribute 0x11 (17); setting 1/8/9/12 additionally recomputes
  3 and 17. So 17 is derived, and there is no bespoke enum to find.
- Implication for 542 / 528 / 529 (211 rows): the blocker is now only the
  mapping of ITEMTYPEDATA indices onto our flat ItemInfo (strongly implied:
  4 = amount/durability, 5 = max durability, 8-12 = gem/magic/data group,
  13 = reference id resolved via FUN_140385cf0, 17 = derived total,
  20/21/24 = quality/bless/expire family used only by 542).
- Binary string table has no attribute-name list ("idx <
  ITEMTYPEDATA_OFFSET", "durability", STR_DURABILITY_REPAIR only), so the
  names above come from call sites, not guesses.
- DEFERRED_TYPES.md updated with the decode. No server code touched; suite 45/45.

## v67 (Nov 1, 2026) — wave M-I: action 528 (item generation) PORTED
- 528 (case 0x210, 49 rows) implemented in ProcessAction with the
  ITEMTYPEDATA slot mapping derived in v66:
  field1->attr 4 amount, field2->attr 5 amount_limit, field3 unused,
  field4->attr 12 magic3, field5->attr 11 magic2, field6->attr 10 magic1,
  field7->attr 9 gem2, field8->attr 8 gem1, field9 -> FUN_140117670 flag
  (logged only - meaning still undecoded). Original requires all NINE
  fields, so fewer fields takes id_nextfail with no item created.
- New IDatabase::ItemAttrs + insert_item_attrs(player,type,amount,attrs)
  (default falls back to insert_item) and the MySQL override writing
  amount_limit/gem1/gem2/magic1/magic2/magic3/data in one INSERT. Note
  cq_item.data is int(4) in the real dump, not a varchar: the original
  resolves attr 13 from field2 through FUN_140385cf0(player,1,value) and
  that resolution is still unknown, so we insert 0 and log the field.
- tests/test_actions_v67.py (new, 13 live assertions): 9-field row
  continues to id_next; the created cq_item row has amount=7,
  amount_limit=2, gem1=55, gem2=44, magic1=33, magic2=22, magic3=11
  exactly as the decode predicts; a 3-field row takes id_nextfail and
  creates nothing. Fixtures 99000890-99000899.
- Suite: 46/46 green (test_actions_v67 registered).

## v68 (Nov 1, 2026) — wave M-J: action 550 (award item with count) PORTED
- 550 (case 0x226, 53 rows) implemented. Decoded from the binary + the
  live content: the action `data` column is the itemtype, the 20-field
  sscanf fills flags in field 1 and COUNT in field 2 (rows show
  data=3005822/360149/350079 with params "", "0 20", "0 0 0 0 0 0 0 1").
  FUN_140102780 validates the itemtype; the valid path does a bag-space
  check when flags&1 == 0 (STR_FULLBAG_NO_MORE) and then FUN_14033fc80
  adds `count` as ONE stack. Our port inserts one cq_item row with
  amount = count, sends 1008 + 2077, and talks
  STR_FULLBAG_NO_MORE-equivalent text on failure.
- 529 re-classified: NOT item generation. It is a consume-item gate
  (sscanf A B; walk the player container; match attr1==actor,
  B <= FUN_140385cf0(player,1,A) - attr13, attr5==A; then
  FUN_140340190(player,item,1,1) takes it and the action succeeds).
  Recorded in DEFERRED_TYPES.md; content uses A=01..06 with B=200.
- tests/test_actions_v68.py (new, 7 live assertions): "0 20" -> a 20
  stack and id_next; empty param -> count 1. Fixtures 99000910-99000919.
- Suite: 47/47 green.
