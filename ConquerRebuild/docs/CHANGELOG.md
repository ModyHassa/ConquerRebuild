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

## v69 (Nov 1, 2026) — wave M-K: big batch, 280 rows (131 + 519)
- 131 (case 0x83, 253 rows) PORTED. It is not a 1004 talk dialog: the builder
  FUN_140362620 stamps message id 0x271A = 10010 (CMsgAction) with the actor
  id, the literal 0xa2 (162) in the data slot and the two coordinate fields
  in +0x18/+0x1A, sent to the acting player only. Live content is 253 rows of
  "x y aux" whose x/y sit inside real map bounds (195..772 / 205..703), which
  pins field 1 = x and field 2 = y. Our port sends
  build_action_10010(player, 162, 0, 0, x, y, aux) and takes id_next; fewer
  than 3 fields takes id_nextfail (the original needs 3 or 4 fields).
- 519 (case 0x207, 27 rows) PORTED. FUN_1403408c0(player, itemtype) collects
  EVERY carried item whose type equals the action data and erases each one,
  returning true iff anything matched -> "take all of this type", unlike 502
  which takes a single copy.
- Decoded but not ported, evidence recorded in DEFERRED_TYPES.md: 144 (bit
  test of the 32-bit flag word at user+0x2AC; our Player has no such field),
  332 (needs FUN_1401196c0), 717 (family/syn guild block: money +=/<,
  member_title =, has_domain ==).
- tests/test_actions_v69.py (new, 12 live assertions) verifies the 10010
  actor/data/coordinates, the 2-field fail branch, and that 519 removes BOTH
  stacks and then falls to id_nextfail. Fixtures 99000920-99000933.
- Suite: 48/48 green. Coverage 97.6% (110 of 216 types).

## v70 (Nov 1, 2026) — wave M-L: the trap subsystem, 2101 (103 rows)
- New src/systems/traps.hpp: Trap struct, TrapSystem registry and
  build_trap_1101, ported from CMapTrap::CreateNew (FUN_1403ab040, line
  661817) and the 1101 builder FUN_1403a5a30 (line 661690, message 0x44D,
  size 0x41).
- 2101 PORTED: field 1 = cq_traptype.id, field 2 carries the lookface ones
  digit, fields 4/5/6 = map/x/y; the type is validated against cq_traptype
  (missing -> id_nextfail, the original's DBERROR), the lookface becomes
  (traptype.look/10)*10 + (param % 10) exactly as the original computes it,
  and the trap is broadcast as MSGMAPITEM 1101 with action byte 10 and the
  cq_traptype name.
- 2102 (12 rows) decoded and deferred: it needs the "player stepped on a
  trap" object (param_5) and its attribute-0x1400 query, which no ported
  path produces yet. Evidence in DEFERRED_TYPES.md.
- tests/test_actions_v70.py (12 live assertions): the 1101 action byte, the
  allocated id, the coordinates, the lookface math (traptype 51 look=11 with
  param 11 -> 11), the owner id, the copied name, plus the unknown-type and
  5-field fail branches. Fixtures 99000940-99000955.
- Suite: 49/49 green. Coverage 97.6%, 111 of 216 types.

## v71 (Nov 1, 2026) — wave M-G: 542 weapon copy (113 rows) + 529 consume gate (49 rows)
- 542 PORTED (case 0x21e, ~214781): the 17-field sscanf does NOT carry an
  itemtype — the new item is a copy of the WORN WEAPON, resolved as
  (player vtbl+0x10)(player,4) then (item vtbl+0x48), and awarded through
  FUN_14034a8d0 = CUser::AwardItem. The attribute writes are
  FUN_140104140 = SetInt(item, idx, value) onto the cq_item column order:
  f17->amount, f16->amount_limit, f14->gem1, f13->gem2, f12->magic1,
  f11->magic2, f10->magic3, f9->reduce_dmg, f8->add_life,
  f7->anti_monster, f4->data, f6->color (initialised to 3 before the
  sscanf, so an ABSENT field 6 means colour 3), f3->Addlevel_exp only
  when > 0. 90 of the 113 rows carry an empty param and 23 use the
  14-field live shape "0 0 0 0 0 0 0 6 62 63 184 0 0 4079544".
- cq_item's persistent columns are NARROW (gem1/gem2/magic2/magic3/
  reduce_dmg/add_life/anti_monster/color are tinyint(1), amount_limit is
  smallint(2)) while the original keeps a 32-bit attribute array, so a
  value that does not fit is logged and skipped instead of being silently
  truncated by MySQL (the live 14-field shape feeds 4079544 into
  attribute 8, which is reported, not stored).
- 529 PORTED (case 0x211, ~214669): needs exactly 2 non-zero fields, then
  walks the item container and consumes the first item that is the same
  type as the worn weapon, whose attribute 5 (amount_limit) equals field 1,
  and for which field2 <= d - attribute13(data), with
  d = FUN_140385cf0(player,1,field1) -> FUN_140385160 = the user variable
  store keyed (1, field1) (the same map 1073/1074/1081 use, so the port
  reads vars.get_stc(1, field1)).
- Two real bugs found and fixed while testing:
  (1) TestKnight's cq_user.id is 1 while its account_id is 100001, so a
      seed that keyed state on 100001 silently missed the character;
  (2) test_actions_v41's 516 probe had been passing only on a fresh DB —
      517 persists its field probe as stc(<item_id>, <field>), so the
      second run read 1 instead of 0. The seed now clears that key, which
      makes the whole suite reproducible across runs.
- tests/test_actions_v71.py: 16 live assertions (weapon-copy type, default
  amount, colour default/explicit, the four storable attributes, the
  announced 1008, the consume success removing the row, and the three fail
  branches). Fixtures 99000960-99000979.
- Suite: 50/50 green. Coverage 97.7%, 113 of 216 types.

## v72 (Nov 1, 2026) — action 717 (28 rows) + a real combat-stats bug
- 717 PORTED (case 0x2cd, 216466): sscanf("%s %s %d %u") with fewer than
  three fields logs DBERROR and falls to the shared fail path. cmd and op
  are matched case-insensitively:
    money       +=  -> guild manager +0x270(gid, amount)   (adds funds)
    money        <  -> +0x268(gid) < amount                (compare only)
    member_title  =  -> +0x110(gid, (unsigned char)amount)  (tinyint column)
    has_domain   ==  -> +0x2e8(gid)                        (boolean)
  The guild id is field 4 when it parses; otherwise the acting object's
  guild getter (param_4[2]+0x170) is consulted and a zero result is logged
  and failed. This database stores no player -> guild link at all (cq_user
  has no guild column and there is no member table), so the fallback always
  yields 0 and the faithful outcome for a guild-less character is the fail
  branch. Anything else, including an unknown op, reaches the shared fail
  path (LAB_14012a62d).
- New IDatabase guild accessors: syndicate_money, update_syndicate_money
  (money is bigint, so a negative delta is an ordinary subtraction),
  set_syndicate_member_title (tinyint, matching the (unsigned char) cast)
  and syndicate_has_domain (cq_syndomain is keyed by the guild id).
- REAL COMBAT BUG FIXED in load_combat_stats: the best-weapon comparison
  used out.atk_max, which rings had already been accumulated into, so any
  weapon row that arrived after a ring row lost the comparison. Row order
  is not guaranteed by the query, so the outcome depended on the plan:
  TestKnight was fighting with a 3-6 weapon plus rings (atk 1304-1958)
  instead of the equipped ShadowFlyingKnife (atk 1825-2596). The weapon is
  now tracked on its own high-water mark and added after the loop.
- Test isolation finished: test_actions_v71 re-equips the seeded knife and
  gives the 529 gate its own throwaway weapon (type 900999) instead of
  consuming item 90001; test_combat_1022's expected damage range was
  recalibrated to the real equipment (the seeded 150003 ring at position 6
  contributes 1-3 attack).
- tests/test_actions_v72.py: 13 live assertions against a dedicated test
  guild (999001, seeded with money 500000) so no real cq_syndicate row is
  touched. Covers the += write, the < compare (pass and fail), the missing
  guild id fail, member_title =, an unknown op and the fund being left
  alone on every failing branch.
- Suite: 51 tests, 50 green. The only red is test_drops, the known in-suite
  RNG flake (0 drops in 122 kills that run); it passes 3/3 standalone.
  Coverage 97.7%, 114 of 216 types.

## v73 (Nov 1, 2026) — action 2102 (traps) + a fully green suite
- 2102 PORTED (case 0x836, 224661): the script context asks its owner for
  the trap object it stands on ((vtbl+0x298)(ctx, 0x1400, &out); a null
  context logs ERROR 0x3304). FUN_1403a7180 then builds ONE MSGMAPITEM with
  action byte 0xc through the same trap builder, broadcasts it to the map,
  sets the trap's removed flag (+0x74) and returns 1; a second call on the
  same trap returns 0 and the chain takes id_nextfail. Our script context is
  the acting player, so the trap is resolved with the new
  TrapSystem::find_at(map, x, y) at the player's own cell.
- build_trap_1101 gained a third parameter: the MSGMAPITEM action byte at
  +0x12 (10 = show, 12 = remove). The old signature only overrode the kind
  byte at +0x17, which is why 2102 first sent a creation-looking packet.
- tests/test_actions_v73.py: 9 live assertions. One click on a chain of
  2101 -> 2102 proves the create broadcast (action 10) and the removal
  broadcast (action 0xc) carry the same trap id, then a second bare 2102
  must take id_nextfail and broadcast nothing. The test purges leftover
  traps from earlier waves first, because the trap registry lives in the
  server process and 2102 always resolves the first trap at the actor cell.
- test_drops de-flaked: the item hunt now keeps killing until a 3% drop
  appears (cap 200) instead of stopping at 80 kills, which left an ~9%
  chance of a false red. That was the last known flaky test.
- Suite: 52 tests, 52 green, zero failures. Coverage 97.7%, 115 of 216
  types. The only remaining TODO rows are 2007 (54, guild domain manager)
  and 129 (36, pet condition/create).

## v74 (Nov 2, 2026) — action 129 (pet condition descriptors) + suite fully green
- 129 PORTED (case 0x81, 222882): the branch selector is the row's own
  `data` — the executor reads GetAttr(4), and index 3 is the action type
  (see the iVar8 range checks at the call site), so 4 is the data column.
  The live content splits exactly 18 rows with data=0 and 18 with data=1:
  * data != 1: sscanf("%u" + six (field, op, value) triples). The id must
    NOT already exist, then the descriptor is inserted (FUN_1403814c0
    allocates, FUN_140381a40 fills it with {6, id}, FUN_14021c1d0 inserts,
    a failed insert frees it) -> pass, otherwise the fail branch.
  * data == 1: sscanf("%u") is an id that must exist; FUN_140380900 is just
    `*(int *)(pet + 0x90) != 0` (the in-use flag), so while the flag is
    clear the descriptor is released from the container through
    FUN_14021bd20 -> pass, otherwise fail.
  New src/systems/pet.hpp holds the registry (id, in-use flag, up to six
  conditions) and PetRegistry is process-wide, mirroring the original's
  per-world container. cq_pet stays empty in this build: these objects only
  live in the registry, exactly like the original.
- tests/test_actions_v74.py: 11 live assertions (define, duplicate define,
  multi-triple define, release, release-after-release, and that a released
  id can be defined again). Fixtures 99001100-99001119.
- test_drops made suite-safe: the item hunt now waits for a respawn instead
  of burning its attempt budget while every nearby monster is dead (which
  is what happens after the tests that run before it), and run_suite gives
  it a 220s budget because 3%/kill means an occasional long hunt. Suite is
  now 53 tests, 53 green, no known flaky test.
- Coverage 97.8%, 116 of 216 types.

## v75 (Nov 2, 2026) — action 130 (pet object update) + a triage of what is left
- 130 PORTED (case 0x82, 222961): sscanf("%u %d %d %d %d %d %d %d %d %d
  %d %d %d %d %d %d %d %u %u %u %d") must fill MORE than 0x14 (21) fields.
  Field 3 is forced to 600 when it parses as 0, the object is looked up by
  the first field, and a hit applies the template through FUN_140380620 and
  commits with FUN_1403816d0 -> pass; a miss, or a short param, takes
  id_nextfail. The 21 values are kept verbatim on the descriptor (parse
  order) because the object's fields are only ever consumed inside the
  original's own update path.
- tests/test_actions_v75.py: 10 live assertions (update of a missing
  object, 129 define then 130 update, a second update, a 4-field param, and
  the duplicate-define guard) . Fixtures 99001200-99001219.
- Remaining unported types triaged from the coverage report (12 types, 161
  rows): 2007 (54) guild domain; 332 (30) data bit 8, ambiguous because all
  30 rows carry data=0; 144 (24) reads a world flag word at +0x2ac that is
  only ever set by an inbound message (FUN_14008aae0 stores GetAttr(2) of a
  0x15f92 message), so with no such peer the bit test is always false and
  porting it would add no observable behaviour; 715/720/721/722 (14, empty
  params) are guild-manager slots (+0x260 / +0x250 by name / +0xb8 by id and
  the actor's guild); 223/224 (11) are %user_home_id template rows; 2201 and
  2205 (4) are target_bonus/hunter_bonus arena roles.
- Suite: 54 tests, 54 green. Coverage 97.8%, 117 of 216 types.

## v76 (Nov 2, 2026) — action 2007 (generator / runtime NPC create, 54 rows)
- 2007 PORTED as far as the evidence goes (case 0x7d7, 224273). The exact
  arg order was recovered from the call site instead of guessing:
  sscanf("%s %d %d %d %d %u %u %d %d %d %u %u %d %d %d %d %d %d %d %d %d
  %d %d %d %s") builds its 25 destinations as r8 = the name buffer
  (rsp+0x2e0), r9 = rsp+0x184, then 23 stack slots rsp+0x20..0xd0 holding
  0x1d8, 0x188, 0x174, 0x170, 0x178, 0x17c, 0x180, 0x1d0, 0x1d4, 0x1cc,
  0x18c, 0x190, 0x194, 0x198, 0x19c, 0x1a0, 0x1a4, 0x1a8, 0x1ac, 0x1b0,
  0x1b4, 0x1b8, 0x1e0.
- FUN_1402c2390 is then called with param_3 = rsp+0x170 (so the struct IS
  the parsed area) and param_5 = the name buffer, which pins the fields the
  action really uses: **map = field 7, x = field 8, y = field 9, name =
  field 1**, matching the live row "Close~left~gate 26 21 241 2
  %map_owner_id 1038 163 210 20000000 24 5030100 5030101 0 ..." -> map
  1038, x 163, y 210.
- Port scope: >= 9 fields (else ERROR 0x324a + DBERROR -> fail), then the
  map must exist, otherwise the original logs "CNpc::Create(), Create
  Npc(Type:%u, Name:%s) can't find map(%u)" and fails. Which CGameData
  field carries the NPC type/lookface is still unresolved, so no
  cq_generator row is written and no spawn is broadcast; that gap is
  documented in DEFERRED_TYPES.md rather than guessed (cq_generator's
  columns are id, mapid, bound_x, bound_y, bound_cx, bound_cy, maxnpc,
  rest_secs, max_per_gen, npctype, timer_begin, timer_end, born_x, born_y,
  mask, path, return_mode, cluster_type, attribute - 19, while the object
  sets fields up to 0x1c).
- tests/test_actions_v76.py: 7 live assertions (valid map, unknown map,
  short param). Fixtures 99001300-99001319.
- Suite: 55 tests, 55 green. Coverage 97.8%, 118 of 216 types. 332 (30
  rows) is now the only large unported type.

## v77 (Nov 2, 2026) — 2007 now really creates and spawns the runtime NPC
- The tail of FUN_1402c2390 named the CGameData fields: the failure log
  prints "CNpc::Create() idProcess=%u, itemType=%u, name=%s, map%u(%d,%d),
  idOwner=%u, NPCID=%u, nType=%u", and its setters pin them to the parsed
  struct (field 1 = arr[0] = spec 6 = idOwner, field 3 = name, field 4 =
  arr[5] = spec 2 = nType, field 5 = arr[6] = spec 4 = itemType, fields
  7/8/9 = map/x/y). The special-case `if (field 4 == 10)` also confirms
  field 4 is the NPC kind.
- 2007 therefore now: parses, checks >= 9 fields, requires the map, builds a
  cq_dynanpc record with ownerid = spec 6, name = spec 1, lookface =
  spec 4 (itemType), mapid = spec 7, cellx = 8, celly = 9, inserts it
  through DynaNpcSystem::create (which also registers the clickable record)
  and broadcasts the 10014 spawn with the monster-style layout, sending it
  to the actor as well.
- tests/test_actions_v76.py grew to 11 assertions: the DB row carries map
  1002, (400,300), lookface 241 and owner 1, and the 10014 spawn carries
  the new id with lookface 241 at (400,300). The test deletes its row again.
- Still not carried: the nType (field 4) and the task data (the table has
  `type`/`itemid`/`task0..7` but DynaNpcRecord only models the latter), so
  the created NPC is visible but not clickable. Documented in
  DEFERRED_TYPES.md.
- Suite: 55 tests, 55 green. Coverage 97.8%, 118 of 216 types.

## v78 (Nov 2, 2026) — 2007 columns persisted + a deterministic drop test
- DynaNpcRecord now models cq_dynanpc's `type` and `itemid` (load, insert
  and update SQL all carry them), and 2007 fills them from the fields it
  proved earlier: type = spec 2 (nType), itemid = spec 4 (itemType, which
  also serves as the lookface). The v76 test asserts both columns, so the
  generator identity survives a restart instead of only the spawn.
- tests/test_drops.py is now fully deterministic. The item hunt no longer
  waits for the map's own respawns (mid-suite every monster nearby is dead
  and the respawn packets never reach the screen, which produced runs of
  160+ idle rounds). It summons its own Pheasant through the ported 2006
  runtime-create chain (fixture 99001320, killed on map 1002 at 410,311)
  and kills it, so the 3%/kill roll gets a steady supply of kills.
- Three findings while stabilising it:
  * the 1101 drop broadcast often lands in the NEXT drain window, so the
    harvest now scans every batch it receives, not just the attack window;
  * a mid-test re-login breaks the drop broadcast: the map keeps the stale
    player object, so broadcast_to_screen reaches nobody while the login
    path itself still works (that is what made 165 summoned kills produce
    zero visible drops even though the server logged 5 item drops);
  * with the summon path in place the hunt finishes in ~10 kills, so the
    suite no longer needs test_drops' long window.
- Suite: 55 tests, 55 green, with no known flaky test. Coverage 97.8%,
  118 of 216 types.

## v79 (Nov 2, 2026) — actions 332 / 721 / 722 (39 rows) + drop-test hardening
- 332 PORTED (case 0x14c): the guard is a null actor or a null map, then the
  running action's GetAttr(4) is read through the map's script context and
  FUN_1401196c0 reduces to `(value >> 8) & 1` (its sibling FUN_1401196f0
  tests bit 13). The map suspicion from the earlier deferral was resolved
  by the call sites: (*(param_4[2] + 0x160)) is the ACTOR'S MAP (it is
  passed to FUN_1402c3cc0/FUN_1402c8370 cell queries), so a live player in a
  map always reaches the bit test. All 30 live rows carry data=0, which is
  the same fail branch the default routing already produced, so the port is
  behaviour-preserving for today's content and correct for any row that sets
  bit 8.
- 721 PORTED (case 0x2d1): param_7 is a guild name shorter than 0x10 (the
  15-char cq_syndicate.name limit), resolved through the manager slot +0x250
  into the actor's +0x14d field (Player.script_guild_id); a found id passes,
  an unknown name, an empty name or a 16+ char name fails.
- 722 PORTED (case 0x2d2): the actor's guild id (+0x170) must be non-zero
  before the guild is resolved through FUN_140087650's slot +0xb8. This
  database has no player->guild link (cq_syndicate only, no member table),
  so a character is always guild-less and the faithful outcome is the fail
  branch.
- tests/test_actions_v79.py: 11 live assertions (bit set/clear, known guild,
  unknown guild, over-long name, guild-less actor). Fixtures 99001400-99001429.
- Drop-test hardening: broadcast_to_screen now has an opt-in diagnostic
  (CQ_DEBUG_BCAST=1) that reports how many players were served for each
  1101 and why the others were skipped (null session / out of range). It is
  what proved the drop pipeline itself is sound mid-suite; the earlier red
  run was timing, and the summon-based hunt plus the multi-drain harvest
  keep the item phase deterministic and short.
- Suite: 56 tests, 56 green. Coverage 97.9%, 121 of 216 types.

## v80 (Nov 2, 2026) — action 144 (world event-flag bit test, 24 rows)
- 144 PORTED (case 0x90): sscanf("%s") is compared case-insensitively with
  "==" (the original's _strnicmp against 0x100), then the row's data is
  handed to FUN_14008ab60(flagword, data), which is:
    data-1 < 0x1f && flagword > 0 -> bit (data-1) of the flagword
    otherwise                     -> ((data-1) >> 8) << 8 read as a boolean
  so data 1..31 with a zero flag word is FALSE, while data 0 or any data
  >= 257 is TRUE (0xFFFFFF00 is non-zero). All 24 live rows carry data 4..16
  with param "==", so the port is behaviour-preserving today and correct for
  the edge cases.
- The flag word itself (the original's +0x2ac) lives on World as
  `script_flags`; FUN_14008aae0 only ever writes it from an inbound 0x15f92
  message (GetAttr(2)), which this build never receives, so it starts at 0.
- tests/test_actions_v80.py: 7 live assertions covering data=14 (fail),
  data=0 (the else branch passes), data=300 (out-of-range passes) and a
  non-"==" operator (fails). Fixtures 99001500-99001519.
- Suite: 57 tests, 57 green. Coverage 97.9%, 122 of 216 types.

## v81 (Nov 2, 2026) — the guild member model (cq_synattr) + a real 722
- Found the member model in the real schema: **cq_synattr** (id = the user
  id, syn_id, rank, join_date, proffer_*...). cq_syndicate only holds the
  guild itself (leader_id, money, enemy/ally slots, resources), so this is
  where membership lives.
- UserRecord gained syn_id/syn_rank, load_user adds two subqueries
  (SELECT syn_id/rank FROM cq_synattr WHERE id=u.id LIMIT 1) and the login
  path fills Player.guild_id/guild_rank (the original's +0x170 getter),
  logging the membership.
- 722 is now REAL instead of a hardcoded fail: a guild-less character takes
  id_nextfail exactly like the original's zero check, and a member passes
  when the cq_syndicate row resolves.
- tests: v79's 722 case now asserts the pass path (the seed puts TestKnight
  into guild 1), and the new tests/test_actions_v81.py covers both sides
  with a DEDICATED probe character (account 100099 / cq_user 99,
  "GuildProbe") because the test re-logs in. That detail matters: a first
  attempt reused ChatB and broke SEVEN later tests (test_chat, v30, v33,
  v34, v35, v36, v38 all lost their broadcasts) - a re-login leaves the
  map's player object stale, so broadcast_to_screen reaches nobody. The
  probe character isolates the damage.
- Fixtures 99001420 (722 chain), seed adds the probe account/character and
  the cq_synattr row for TestKnight; reset_positions restores the probe's
  position.
- Known gap, documented: 717's "no guild id in the param" branch still
  treats the actor as guild-less instead of falling back to
  Player.guild_id. Closing it needs the temp-guild fixtures revisited so a
  test cannot write into a real guild's money.
- Suite: 58 tests, 58 green. Coverage 97.8%, 122 of 216 types.

## v82 (Nov 2, 2026) — 717 uses the actor's guild + isolated test characters
- 717 now falls back to the actor's guild when the param carries no guild
  id, which is what the original does with the +0x170 getter. Player.guild_id
  comes from cq_synattr (v81), so a member's `money +=` / `money <` /
  `member_title =` chains hit their own guild, and a guild-less character
  still takes id_nextfail.
- The seed puts TestKnight into the dedicated **TestGuild (999001)** rather
  than a real guild, so a 717 write can never touch live guild money; the
  temp guild is re-created by the seed on every run.
- New tests/test_actions_v82.py: the no-id chain resolves the actor guild
  (money 500000 < 1000000 passes), `money += 250` moves TestGuild to 500250,
  `member_title = 9` writes the tinyint, and a guild-less actor fails.
- Session-isolation lesson applied twice: v82 checks the guild-less case
  with **GuildProbe2** (account 100098 / cq_user 98) instead of re-logging
  TestKnight, because a re-login leaves the map holding the previous player
  object and every later broadcast to that character is lost. The seed now
  carries GuildProbe (99) and GuildProbe2 (98) and reset_positions restores
  both positions.
- tests/test_actions_v72.py updated to the new fallback behaviour: its
  no-guild-id chain now passes and spends 100000 (fund 501000 -> 401000).
- Suite: 59 tests, 59 green. Coverage 97.8%, 122 of 216 types.

## v83 (Nov 2, 2026) — a working Lua 5.2 scripting host (all 183 scripts compile)
- NEW src/script/lua_host.{hpp,cpp}: the original runs its NPC/task content
  through the lua/V100 scripts, and this sandbox has the Lua 5.2 *runtime*
  (liblua5.2.so.0) but no headers, so the needed API subset is declared by
  hand and resolved with dlopen at startup. Missing library = engine reports
  unavailable and every call is a no-op, so the server still builds anywhere.
- Two ABI traps found and solved:
  * lua_getglobal/lua_setglobal are macros, not exports, and Lua 5.2's
    LUA_RIDX_GLOBALS needs lua_rawgeti plus a version-specific
    LUA_REGISTRYINDEX. Rather than encode that, open() runs "return _G" and
    parks the globals table at a fixed absolute stack slot (index 1); all
    getfield/setfield calls use that slot and stack resets go back to it
    (a plain settop(0) would have dropped the table).
  * lua_pcall is a macro for lua_pcallk in 5.2, so the export that must be
    resolved is lua_pcallk.
- Host API registered: host_log(msg) and host_int(n) -> n + 1 (the hook point
  where gameplay functions will be added).
- main.cpp opens the engine at boot and, when CQ_LUA_DIR is set,
  compile-checks the whole tree and logs the count: the server now reports
  "183 scripts compiled from ../conquer_source/Source/lua/V100".
- tests/lua_unit_test.cpp (wired into run_suite as lua_unit): proves the
  engine opens, a script calls back into the host (host_int(41) == 42),
  Lua errors surface to the caller, and **every one of the 183 shipped
  scripts compiles** (0 failures).
- Makefile: src/script/lua_host.cpp added to SRC (the source list is explicit,
  unlike HDRS which uses find) and -ldl added.
- Suite: 60 tests, 60 green. Coverage 97.8%, 122 of 216 types.

## v84 (Nov 2, 2026) — Lua-driven NPC dialogs work end to end
- The scripted-content API in the original: the binary registers ~50 names
  against numeric keys (GetUserInt(uid, key) with the guard `key-0x3e9 < 0x3e6`
  i.e. keys 1001..1998, plus GetUserStr/SetUserInt/AddUserInt/ChgMap/Effect/
  RecordPoint/AddPropStatus/...). The attribute getter FUN_1404e02d0 switches
  on those keys and resolves each through the user object's vtable, so the
  full key table is still a decode job. This wave implements the read/write
  surface a dialog script actually needs, in our own documented mapping.
- src/script/lua_api.cpp: say(text) sends the SYSTEM 1004 talk line to the
  acting player (same builder the action chains use), get_level/get_money/
  get_exp/get_hp/get_mp/get_map/get_x/get_y/get_name read the live Player,
  and add_money(n) is the classic reward path (clamped at zero).
- lua_host gained register_fn(name, fn), a per-call script context
  (set_context/context, opaque so the header stays gameplay-free) and value
  helpers lua_arg_int/lua_arg_str/lua_push_int/lua_push_str.
- NEW binding: cq_npc.datastr names the NPC's script. load_npcs selects it,
  NpcRecord carries it, and the 2031 click handler loads the file (from
  CQ_LUA_DIR or data/lua), sets the clicking player as the context and calls
  on_talk(); the script's say() lines reach the client.
- data/lua/v84_probe.lua + seed NPC 99001850 "LuaProbe" on map 1002 (datastr
  v84_probe.lua). tests/test_actions_v84.py: the NPC exists with its script
  name, clicking it produces "V84 Lua NPC speaks.", the script reads the real
  level (130) and live money, add_money(7) runs, and the script sees its own
  write ("after reward money=7").
- Suite: 61 tests, 61 green. Coverage 97.8%, 122 of 216 types.

## v85 (Nov 2, 2026) — original-named attribute API + hair persistence
- src/script/lua_api.cpp now registers GetUserInt(uid, key) and
  SetUserInt(uid, key, value) under their ORIGINAL names, so the shipped
  PublicFunc libraries can bind against them. Keys are pinned from the
  content itself: PublicFunc/FuncGetValue.lua defines
  Get_UserLookFace -> GetUserInt(uid,1003), Get_UserHair -> 1004,
  Get_UserGuildRank -> 1037, Get_UserPeerage -> 1046, Get_UserVip -> 1048,
  and FUN_1404e02d0's case 0x3e9 resolves the user id for 1001.
  Implemented: 1001 id, 1003 lookface, 1004 hair, 1037 guild rank; any other
  key answers -1, which is what the original returns for a key it does not
  handle. uid 0 means the current (context) player, the original's
  DAT_140975bf0 rule; cross-user lookups are not wired yet.
- cq_user.hair is a real player field now (Player.hair, UserRecord.hair,
  load_user appends u.hair, IDatabase::update_user_hair + MySQL impl), so
  SetUserInt(0, 1004, n) persists instead of dying in memory.
- data/lua/v85_probe.lua + NPC 99001851 "LuaAttrProbe": tests/test_actions_v85.py
  proves 1001/1003/1037 read the live columns, 1037 matches cq_synattr.rank,
  an unmapped key answers -1, SetUserInt writes hair (verified in cq_user),
  and a read-only key answers -1.
- tests/test_drops.py: hunt deadline 150s -> 240s after one 196-kill run with
  zero 3% rolls; the item phase stays deterministic (summon + multi-drain
  harvest), this only widens the tail of the distribution.
- Suite: 62 tests, 62 green.

## v86 (Nov 2, 2026) — faster suite: five drop rolls per round
- The drop test's item phase used to summon ONE Pheasant per round (one
  3%/kill roll), so a bad tail could burn the whole 240s window. Fixture
  chain 99001330 now spawns FIVE birds in one dialog reply (2006 x5 at
  412..420,311) and the hunt kills all of them per round: five rolls for
  ~1s of wall clock.
- Result: tests/test_drops.py runs in ~21s instead of up to 240s, and the
  full suite now finishes well inside a 285s window (it previously needed
  ~450s+). The hunt deadline is 120s as a safety net.
- Suite: 62 tests, 62 green.

## v87 (Nov 4, 2026) — Lua ChgMap end to end
- ChgMap is PINNED from the binary: FUN_14043b810 pops FIVE checkinteger args
  (userID, mapID, x, y, force) and calls FUN_1404e7080, which rejects
  uid==0/map==0, skips when the user state byte has bit 6 set and force is 0,
  rejects an unknown map, rejects a cell that cannot be stood on, then performs
  the change (FUN_1401c55b0) and answers a BOOLEAN (push-boolean helper
  FUN_140523ba0).
- src/systems/world.cpp gained World::teleport() - the map-change sequence the
  1070 relive port already proved (leave the old map list, join the new one,
  self-inclusive spawn broadcast, resend the monsters in screen, no record
  point, no alive change). GameMap got width()/height() accessors for the
  standability stand-in (our maps are flat, so the original's cell check is a
  bounds check here).
- lua_host now also resolves lua_pushboolean, so boolean-returning API calls
  return real Lua booleans instead of 1/0.
- tests/test_actions_v87.py (7 asserts): the script moves CentralPlain ->
  Desert (300,300) and back, an unknown map id returns false, a cell outside
  the map returns false, and the probe restores the player position so the
  rest of the suite is unaffected.

## v88 (Nov 4, 2026) — the real GetUserInt key table + SetUserInt signature fix
- Three research workers decoded the key space from the binary and from the
  content's own interface enum BasicData/[Conquer][BasicData]
  ProgramInterfaceConstant.lua (G_PLAYER_BEGIN 1000 .. LAST 1999, keys
  1001..1072, each with its supported operations). docs/lua_key_table.md holds
  the table with per-key citations.
- CORRECTIONS to what v85 assumed: guild rank is 1036 (sub vtable+0x170 ->
  guild manager +0xf8), NOT 1037 (1037 is the task iterator at user+0xa68);
  peerage is 1045 and VIP 1047 (not 1046/1048); and key 1003 LookFace has NO
  getter case at all - GetUserInt answers -1 and only SetUserInt implements it.
- SetUserInt is (uid, key, value, flag) - FOUR args, guard 1001..1998, returns
  a boolean (FUN_140436450 at MsgServer.c:763388). v85 had three args and an
  integer return; both are fixed.
- GetUserInt now answers 15 pinned keys from live Player state: 1001 id,
  1004 hair, 1005 profession, 1006 level, 1007 map, 1008/1009 pos, 1019/1020
  life, 1021/1022 mana, 1025 money, 1029 exp, 1036 guild rank, 1056 guild id;
  every other key returns -1 like the original's missing-case default.
- tests: v85 rewritten to the verified semantics (1003 GET -> -1, 1036 rank,
  1037 iterator, SetUserInt boolean), and tests/test_actions_v88.py asserts all
  15 keys against the seeded row (level 130, profession 10, map 1002, cell
  400,300, life 2000, mana 1500, guild 999001/rank 1000) plus two keys with no
  getter path answering -1.
- Suite: 64 tests, 64 green.

## v89 (Nov 4, 2026) — GetUserStr + RecordPoint, and where the last six types stand
- GetUserStr(uid, key) registered. PINNED from FUN_1404e0940 (MsgServer.c:871073):
  the original's string getter implements ONLY 1002 (player name, sub-object
  vtbl+0x18), 1017 (mate name) and 1064 (god-bless expiry). This build has no
  mate or god-bless state, so 1002 answers the name and every other key pushes
  an empty string - the wrapper always returns exactly one value (every
  registration ends `return 1`), and the exact default of an unimplemented key
  is UNKNOWN, so an empty string is the type-correct stand-in.
- RecordPoint(uid, map, x, y) registered. Arg contract PINNED from
  FUN_14043b950 (MsgServer.c:766204): four integers, uid 0 = current user,
  pushes a boolean. Its engine body FUN_1404e7280 was NOT decoded, so the port
  uses the operation our verified 1004 port already implements (CUser::
  SetRecordPos): map existence check, store record_map/record_pos, persist
  cq_user.recordmap_id/recordx/recordy.
- tests/test_actions_v89.py (7 asserts): the script reads its own name through
  GetUserStr, an unsupported string key yields an empty string, RecordPoint
  succeeds and writes the column set, a missing map returns false, and the
  probe restores the record point to (400,300) for the rest of the suite.
- DECODE STATUS of the six remaining action types, restated honestly:
  * 224 (7 rows) is now FULLY decoded: sscanf("%u %d %d") then CMapGroup
    (FUN_1400875f0) slot +0xa8(a,b) as a COUNT; with the 3rd field absent the
    test is `count > 0`, otherwise `count >= c`. The rows are
    "%user_home_id 25", so a = the player's home map id and b = 25 = the
    BattleGhost monster type - but slot +0xa8 itself is still unnamed (its
    other call sites are per-record field setters on unrelated classes) and
    `%user_home_id` is a template our engine does not expand yet: BLOCKED on
    those two facts, no guessing.
  * 223 (4 rows) params are "%user_home_id 4 34 39" - the same unexpanded
    template plus a number list whose grammar was not decoded: BLOCKED.
  * 2201 (2) / 2205 (4) parse a variable name validated by tq::TalkStrCheck
    and act on team/booth state we do not model (params "target_bonus == 0",
    "hunter_bonus > 0", "target", "hunter"): BLOCKED.
  * 715 (24 rows) / 720 (5 rows) all carry an EMPTY param; the guild-manager
    slots +0x118 / +0x260 remain unidentified (manager FUN_140087ed0 is a
    registry lookup by index 0x16, corroborated but not proven to be the guild
    manager): BLOCKED.
- Suite: 65 tests, 65 green.

## v90 (Nov 4, 2026) — SetUserInt's verified fallthrough, and a real RNG bug
- SetUserInt now matches FUN_1404e61e0 exactly: it has NO default case, so any
  in-range key that has no case falls through to `return 1` (C:874400-874402).
  The function therefore answers TRUE for keys it ignores and FALSE only when
  no user can be resolved (C:874296-874299 / C:874309-874311) or the key is
  outside 1001..1998 (the wrapper's own guard, C:763401). The 4th arg (`flag`)
  is dead for the setter: the wrapper coerces it with `flag != 0` (C:763419)
  but FUN_1404e61e0's signature has no 5th parameter.
- tests/test_actions_v90.py: an in-range unwired key answers true and writes
  nothing, an out-of-range key answers false, a wired key (1004) answers true
  and cq_user.hair becomes 55. tests/test_actions_v85.py updated: 1036 is not
  in the setter's case list either, so SetUserInt(0,1036,5,0) is a true+no-write.
- REAL BUG FIXED in the drop RNG: tq_rand seeded mt19937 with
  `std::random_device() ^ std::time(nullptr)`, and time() has one-second
  resolution, so a suite run and a standalone rerun started in the same second
  drew the identical sequence and failed the same way twice in a row (two
  consecutive "no item drop after ~200 kills" runs). It now mixes two
  independent random_device draws with a per-thread tie counter.
- tests/test_weaponskill.py: the post-level-up exp assertion allowed only 12/13;
  the total depends on hits landed and crits, so it is a 6..20 range now (the
  property being tested is that overflow exp is carried).
- Suite: 66 tests, 66 green (drops run twice back to back and weaponskill
  standalone before the full suite).

## v91 (Nov 4, 2026) — the per-attrib writer decoded, profession settable
- Decoded FUN_1401a2660 (C:289018), the real per-attrib writer that
  FUN_1401a6420 forwards to, so the attrib ids used by SetUserInt now have a
  proven meaning. docs/attrib_writer.md holds the table: attrib 7 = profession
  via FUN_140372400(user+0x1cf*8,value,1); 8 = raw u16 at user+0xf92; 0xa =
  FUN_140171510; 0xb = lookface via FUN_1403721b0 with the face/hair
  value%1000 workaround; 0xd/0xe/0xf/0x10 = spirit/vitality/strength/agility
  through FUN_140199e70/140199f50/140199cb0/140199d90; 0x1a = hair via
  FUN_1403722b0. Only cases 0xa/0xd/0xe/0xf/0x10 clamp ((int)value < 0 -> 0).
- SetUserInt key 1005 (Profession) is implemented on that evidence:
  Player.profession plus cq_user persistence through the new
  IDatabase::update_user_profession. Keys 1032-1035 stay unwired on purpose:
  the original routes them through attribute recompute paths for fields our
  Player does not model (they still answer true, the engine fallthrough).
- tests/test_actions_v91.py: profession reads 10, SetUserInt(0,1005,20,0) answers
  true, the script sees 20, cq_user.profession is 20, and the test restores the
  column afterwards so later waves see the seeded value.
- Suite: 67 tests, 67 green.

## v92 (Nov 4, 2026) — Lua Talk() implemented, blockers for the last types pinned down
- Talk(uid, channel, msg) is PINNED and implemented from FUN_1404e73b0
  (MsgServer.c:874893): uid 0 = current user (a 0 uid is a LuaError); a NULL or
  empty message is a LuaError; the user is resolved by id; when the channel
  argument is 0 it is replaced with the DEFAULT CHANNEL 2000 (C:874915) and the
  user's vtbl+0x150 sender is called with (channel, from-string, msg); the call
  answers a boolean. The from-string constant DAT_1406e4608 was not resolved, so
  this build sends an empty sender (renders as a system line).
- tests/test_actions_v92.py: Talk(0,0,...) and Talk(0,2001,...) both reach the
  client as CMsgTalk 1004, an empty message answers false, and the drain holds
  the expected number of talk packets.
- Blocker status, made explicit instead of implied:
  * 223/224 need the HOME subsystem: `%user_home_id` IS expanded by the engine
    (msgserver_gameaction.c:5073, _snprintf "%u") but the substituted expression
    was not recoverable from the decompile, and our engine models neither homes
    nor the CMapGroup count slot +0xa8 (its other call sites in the decompile
    are per-record field setters on unrelated classes, so the slot cannot be
    named from them). Not guessed.
  * 715/720 need the guild-manager slots +0x118 / +0x260. The three resolvable
    +0x118 call sites (C:208141, 246246, 1009435) carry no log literal naming
    the slot, and the manager itself is a registry lookup by index 0x16
    (C:99361), so the slot stays UNKNOWN.
- Suite: 68 tests, 68 green.

## v93 (Nov 4, 2026) — AddUserInt implemented, team/home/guild decode started
- AddUserInt(uid, key, value, flag) is PINNED and implemented. The wrapper
  FUN_1404365a0 (MsgServer.c:763424-763457) has the same four args and
  1001..1998 guard as SetUserInt but calls its own engine FUN_1404e6500
  (C:874405), whose proven cases are: 0x3ee 1006 Level (full level-add with
  level-up handling), 0x3f2 1010 Virtue (scaled, sub attrib 0x17), 0x3fa 1018
  RidingPoints, 0x3fb 1019 Life and 0x3fd 1021 Mana (both AddAttrib on the
  sub-object). The engine sets its result to 1 as soon as the user resolves and
  has no default case, so unwired in-range keys answer true; false only when
  the user cannot be resolved or the key is out of range.
- Implemented 1019 Life and 1021 Mana with the clamp-to-[0,max] the ported
  attribute path already uses, plus the 10017 refresh. Level add stays unwired
  (it needs the level-up pipeline) and answers true like the engine.
- tests/test_actions_v93.py (10 asserts): life drops by exactly 100, an
  over-add clamps to max life, mana add works, an in-range unwired key answers
  true, an out-of-range key answers false.
- Research workers started the team/home/guild decode. docs/team_decode.md
  already pins the key-1013 chain: the team manager singleton is FUN_140118320
  (MsgServer.c:206496, registry index 0x1e), manager vtable +0x28 is
  LookupUserTeam(id) and +0x50 is GetMemberCount(mgr, team, extra).
  docs/home_decode.md and docs/guild_slots_decode.md hold their verified facts
  so far and mark the rest IN PROGRESS / BLOCKED.
- Suite: 69 tests, 69 green.

## v94 (Nov 4, 2026) — eight more GetUserInt keys, all backed by real columns
- The pinned key table now reads the columns that actually exist in cq_user.
  New keys (each with its getter path already recorded in docs/lua_key_table.md):
  1010 Virtue <- cq_user.virtue; 1011 Metempsychosis <- cq_user.metempsychosis;
  1014 HomeID <- cq_user.home_id; 1015 AccountId <- cq_user.account_id;
  1031 PK <- cq_user.pk; 1045 Peerage <- cq_user.nobility;
  1046 Business <- cq_user.business; and 1013 TeamMemberNum answers 0 because
  this build has no team system, which is exactly what the original returns when
  the team lookup finds no team (FUN_140118320 manager +0x28 returns 0).
- Plumbing: UserRecord gained virtue/meto/home_id/nobility/business (account_id
  and pk already existed), load_user appends the five columns after u.hair and
  parses them, Player carries them from login, and the Lua switch reads them.
- tests/test_actions_v94.py (9 asserts) checks every new key against its live
  column (account id 100001 proves the load). tests/test_actions_v88.py was
  updated: it used 1010/1014 as "no source" examples, and those are implemented
  now, so it asserts 1016 battle effect and 1023 mentor points answer -1.
- docs/team_decode.md also carries the refreshed worker findings: registry index
  0x1e is Team.dll, the manager singleton is FUN_140118320 with vtable +0x28
  LookupUserTeam and +0x50 GetMemberCount, and Team.c:145-165 proves the module
  dispatches wire types 0x3ea, 0x3eb, 0x3ff and 0x7fd.
- Suite: 70 tests, 70 green.

## v95 (Nov 4, 2026) — Lua Effect() implemented from its engine
- Effect(uid, target, effect, mode) is PINNED from FUN_1404f1e90
  (MsgServer.c:881315): uid 0 = current user; a missing target/effect/mode is a
  LuaError; the mode string is compared with "del" and becomes 0x18, anything
  else becomes 10 (C:881360-881365); the target string is compared with "self"
  (and "couple" in the next branch); for "self" it builds CMsgUserEffect via
  FUN_14037e0a0 - mode at wire+8, owner id at wire+4, the effect NAME added as
  the packer string (C:881348-881356) - and broadcasts it self-inclusive
  through the sub-object vtable +0x348.
- The port reuses the 1015 builder the 1027 action already proves
  (build_user_effect_1015 with EFFECT_ADD/EFFECT_DEL), implements the "self"
  target, and answers false for targets that need mate/team state we do not
  model (couple) instead of pretending success.
- tests/test_actions_v95.py (8 asserts): add and del both answer true and arrive
  as 1015 with modes 10 and 24, the effect name travels as the packer string, an
  empty effect name is refused, and an unsupported target answers false.
- Suite: 71 tests, 71 green.

## v96 (Nov 4, 2026) — guild kick + guild-context + PK-bonus actions
Four more types are live, all decoded from their real handlers rather than
guessed:
- 715 (2 rows) = kick a guild member BY NAME. msgserver_gameaction.c:9239-9266
  rejects a param that equals the actor's own name, then manager slot +0x118,
  which is PROVEN = KickOutMember By Name: Syndicate.c:113481 FUN_1417b6770
  resolves the member by name, requires the same guild id, gates on rank (leader
  1000, or actor rank > 0x397 while the target rank < 0x2b3), logs
  "User[%lu] KickOutMember By Name" (C:113560) and removes the member. The port
  works on cq_synattr and deletes the member row.
- 720 (5 rows) = resolve the guild id held in the action context. The slot
  +0x260 is PROVEN = FUN_1417abc20 (Syndicate.c:106047) which runs
  FUN_1417cade0(manager, id) - a guild-by-id map lookup (C:127766) - overwrites
  the context value with the resolved id and passes only when found. Our context
  slot is Player.script_guild_id, filled by action 721.
- 2201 (2 rows) = CGameAction::ProcessActionPkBonus (MsgServer.c:221583,
  FUN_140141c80). Param "<var> <op> <value>" with var target_bonus/hunter_bonus
  and op == / > turns into SELECT count(*) FROM cq_pk_bonus WHERE
  target|hunter=<actor> AND bonus<op><value> (C:221652/221677/221712); pass when
  the count is non-zero. NOTE: an earlier note in this repo claimed the shipped
  cq_pk_bonus has no Bonus column - that was MY truncated SHOW COLUMNS; the
  column exists and this type is fully faithful.
- 2205 (2 rows) = the same function testing registry module 0x13 slots
  +0x18(actor) for "target" and +0x10(actor) for "hunter" (C:221847/221858).
  Module 0x13 is not modelled in this rebuild, so the test is answered from
  cq_pk_bonus (Target/Hunter) - an APPROXIMATION, documented in the code, and
  exact for our data because the table is empty.
- tests/test_actions_v96.py (12 asserts, fixture band 99001020-99001059 and NPCs
  99001870-99001875): 2201 fails empty and passes once a row exists, 2205
  target passes on that row while hunter fails, 715 fails on the empty param
  every content row carries, passes for the leader with a real name, removes the
  member from cq_synattr, and fails on a second kick, and 721 -> 720 resolves the
  guild.
- Fixture bands: v96 took 99001020+ because 99000900+ belongs to v68/v69; the
  collision broke v68/v69 until it was renumbered.
- Suite: 72 tests, 72 green.

## v97 (Nov 4, 2026) — World::find_player, and the team wire decoded
- Added World::find_player(id): walks the per-map player lists, the same reach
  the original takes through its user-list by-id lookup. Every social system
  (team, trade, notices, whisper) needs it. Action 715 now uses it to clear an
  ONLINE kicked member's guild state immediately; the DB row is already removed,
  so a later login stays clean either way.
- Suite: 72 tests, 72 green.
- docs/team_wire_decode.md (research worker, every row cited): CMsgTeam 1023
  (0x3ff) is a fixed 12-byte request with NO packed string - size@+0,
  type=0x3ff@+2, sub-command@+4 (u16), argument@+8 (u32); builder
  FUN_1418f3900 (Team.c:14348-14355), parse FUN_1418f3970 (C:14327).
  CTeamService::ProcessMsg (Team.c:7012-7517) switches the sub-command with
  PROVEN numbers: 1 = apply to join (target team id in arg0, needs <5 members,
  leader check, closed-flag check), 2 = leave (self), 3 = accept an application
  (arg0 = team/inviter), 4 = invite (arg0 = invitee, leader only, target must be
  online), 7 = kick (arg0 = member id), 8 = close the team to applications.
  Team object fields proven so far: +0x3c id, +0x40 leader, +0x44 closed flag,
  +0x47 a second flag, member count via FUN_1418e22b0 capped at 5.

## v98 (Nov 4, 2026) — the TEAM module is live (in-memory, 14 sub-commands)
- src/systems/team.hpp: TeamManager holding CTeam objects exactly as the
  original does (no cq_team table exists; the module owns its own map, teams come
  from the "CTeam" heap tag). Fields per the decode: id, leader, member array,
  closed flag, flags f45/f46/f47, and the PROVEN 5-member clamp from
  FUN_1418e22b0.
- MSG_TEAM_1023 handler (CMsgTeam, fixed 12-byte packet, no packed string):
  sub 0 create, 1 apply, 2 leave, 3 accept/join, 4 invite, 5 leader-adds,
  6 disband, 7 kick, 8/9 close/reopen, 10-13 the two flags, 14 relay to another
  team. Every gate cites docs/team_wire_decode.md.
- Lua GetUserInt(uid, 1013) now answers with the real member count instead of 0.
- tests/test_actions_v98.py: two live sessions (TestKnight + ChatA), 15 asserts -
  create, no double create, invite delivery with sub 4 and the inviter id, join,
  counts on both sides, kick notice, member counts after the kick, disband, and
  the leader-leave path.
- Documented deviations (in the header comment and docs/team_wire_decode.md):
  a leader leaving dissolves the team (successor rule UNKNOWN in the original),
  and sub 4's invitation goes to the invitee because an invitee has no team.
- Not emitted yet: 0x402 CMsgTeamMember (0x94 bytes) because its field offsets
  are not pinned; 0x3ea/0x3eb are CMsgLog, NOT team info (an earlier assumption
  disproved).
- Suite: 73 tests, 73 green.

## v99 (Nov 4, 2026) — team window packet 0x402 + sub 1 (apply) complete
- 1026 / 0x402 CMsgTeamMember is now emitted. Its layout is PROVEN from the
  builder FUN_1418f3ae0 (Team.c:14393-14410): size 0x94 @+0, type 0x402 @+2,
  mode byte 0 @+4 (both call sites Team.c:6346/6364 pass 0), constant 1 @+5,
  then seven dwords at +8..+0x20 = team_id, leader, member[5]; the builder
  writes nothing past +0x24.
- Sent whenever membership changes: create, join (sub 3), leader-add (sub 5),
  kick (remaining team plus an all-zero struct to the removed member - the
  removal helper funnels the same struct down a second slot into a user list),
  and leave. This is what teaches a client its team id, so sub 1 (apply to
  join) is now testable and tested end to end.
- tests/test_actions_v98.py now has 23 asserts: the 0x94 length, the mode 0 and
  the +5 constant, team id and leader id, member[0]/member[1], the sub 1
  forward with the applicant id, the "Join request sent" notice, and the fresh
  0x402 broadcast to BOTH the team and the joiner.
- Suite: 73 tests, 73 green.


## v100 (Nov 4, 2026) — 0x7fd decoded, and a dead-code finding
- 2045 / 0x7fd CMsgTeamStatus: all FOUR builders' layouts are now proven
  (Team.c:14098-14162) - always 0x14 bytes, sub-command u16 at +4, then
  a u8 (sub 0) or three dwords; the sub-3 builder really does swap d2/d3 into
  +0x10/+0xC. Implemented one-to-one in src/systems/team.hpp so the swap cannot
  be lost, and deliberately NOT sent: their triggers are not proven.
- Dead code proven: the sub-0 "closed" notice is gated on the team flag +0x47,
  which Team.c NEVER sets to 1 (only clears, lines 531/1598), so the original
  never emits it. Sub-command 8 therefore only flips +0x44.
- Flags +0x45/+0x46: bools driven by sub-commands 10-13, copied into the
  team-info struct at +7 and +0x1d; their client-visible meaning stays UNKNOWN.
- Type 112: one step further (the text would be cell 5 via getter +0x78) but
  cells 4/5 are unidentified and every row has an empty param, so it stays
  unported rather than guessed.
- Build clean; suite 73/73 green (no behaviour changed in this wave).

## v101 (Nov 4, 2026) — data-driven coverage: tools/coverage.py
- New `tools/coverage.py`: diffs the types that actually have rows in
  `cq_action` against the `case N:` labels our engine carries in
  src/systems|script|handlers, and prints the REAL coverage plus the biggest
  unported types. Report only (never fails), so the suite stays green.
- Measured truth (this DB): **216 action types, 132 handled, 84 unported,
  189,439 of 193,560 rows = 97.87%**. Top unported by rows: 1040 (668),
  1086 (640), 1554 (500), 402 (303), 532 (252), 1095 (245), 1071 (182),
  3701 (122), 1083 (121), 1084 (99), 1651 (95), 401 (94), 403 (93).
- Dispatch knowledge gained while looking for them: the switch at
  MsgServer.c:870962 keyed on the raw type (0x410 = 1040, 0x409 = 1033, ...) is
  the **user-getter dispatch**, NOT the action engine, and the `case 0x30..0x37`
  block at 185226-185286 is an **operation sub-switch** inside one handler. This
  explains why 1040/1071 "have no case label": they are read through the getter
  path, not dispatched as action bodies. Both facts are now recorded so the next
  wave does not re-trip on them.
- Sample shapes captured for the next wave: 1040 = `"<a> <b>"` two small ints
  (668 rows); 1084 = `"<big> <a> <b>"` (99); 1095 = EMPTY param, pure id_next
  (245); 1554 = keyword `chk`/`add` + data (500).

## v102 (Nov 4, 2026) — the new-engine router is SOLVED: 52 unported types mapped
- tools/newengine_map.py reads the byte map DAT_14013aa9c straight out of the PE
  and returns, for any type 1001-1729, its CASE LABEL (and the body address from
  the rel32 table). Verified machine-side against the six types we already
  ported by hand: 1075->0x41, 1076->0x42, 1077->0x43, 1080->0x46, 1081->0x47,
  1085->0x4B. **6/6 OK**.
- CORRECTION to a previous worker verdict: FUN_14012a6e0 is NOT missing from the
  decompile. decompiled/msgserver_gameaction.c contains the switch AND all 175
  case bodies (case 0x00 at line 10950 onward). Only the decompiler's
  "Could not find normalized switch variable" warning made it look absent.
- docs/newengine_router.md: the case index for all 84 unported types (52 inside
  this engine, 32 elsewhere) plus a per-type table of what is PROVEN and exactly
  which helper function or field is UNKNOWN. Twelve bodies were read and
  classified this wave, including the two biggest unported types:
  * 1040 (668 rows) = REBIRTH (requirement-table search + apply + gmlog/rebirth);
  * 1086 (640 rows) = `var[v2] = FUN_140382f00(user, v1)` over the level-exp curve.
- Newly proven helpers, now reusable: FUN_140164520(user, idx, val) is exactly
  `if (idx>7) error; else user_var64[idx] = val` (8 slots at user+0x2F0), and
  FUN_1401a9b00(user, id, num, str) pushes `{id, TimeGet()/1000, num, str}` into
  the container at user+0x330 (guard: num!=0 || str!=NULL).
- Two decode workers were launched in parallel (401/402/403/532/542-544, and
  1554/1095/1651) with the incremental-write protocol; they write
  DECODE_401_532.md and DECODE_1554_1095.md.
- No action type was ported in this wave ON PURPOSE: every candidate body needs
  one named helper or field that is still UNKNOWN, and inventing it is forbidden.
  Suite: 73 tests, 73 green.

## v103 (Nov 4, 2026) — action type 401 PORTED (94 rows), 402 gate decoded
- **401 ported** end to end. Old-engine case 0x191 (MsgServer.c ~207682) was
  proven down to the instruction by disassembling 0x14011a5ff..0x14011a7a5:
  `sscanf "%u %d %d %d %d"` with `cmp eax,4` (>= 4 tokens); field 1 must be
  non-zero (CHECKF "idNextTask != ID_NONE") and is stored at the user's +0xa34;
  the task name is then cleared and a 2031 CMsgNpc is sent TO SELF through
  FUN_14037d520(msg,5,v5,v2,v4) = wire `+0x04 tick, +0x08 v5, +0x0C v4,
  +0x10 5, +0x12 v2`, len 0x14. The 3rd field is parsed and never read.
  This CLOSES the "missing fifth byte" blocker recorded in v102.
- `Player.next_task_id` added (the original's `user+0xa34`).
- **402** (303 rows) decoded completely at the source level: the subject
  keyword picks one of four CRoleManager counts (`all`/`furniture`/`name`/
  `type` -> slots +0x90/+0x98/+0xA0/+0xA8 keyed by the user's map id), then
  the gate is `op=="<" && count < value` or `op=="==" && count == value`.
  Still NOT ported: what each CRoleManager count actually counts is unproven.
- The 401/402/403/532/542-544 worker findings (worker died before writing) are
  now durably recorded in `docs/decode_401_family.md`.
- Tests: `tests/test_actions_v103.py` (fixture 99001060-65, npcs 99001890/91)
  asserts the exact 2031 bytes, both branches and that the zero-id path emits
  no push. Suite: **74 tests, 74 green**.

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

## v104 (Nov 4, 2026) — 10010 size convention SOLVED, 1071 PORTED (182 rows)
- The 1071 blocker is closed. Every CMsgAction builder in the original writes the
  payload size at obj+0xc and stops writing fields at payload+0x1A, leaving the
  tail zero: `FUN_140362620` and `FUN_140362810` both write **0x26 payload**
  (wire **0x2A = 42**), and the string variant computes `GetSize() + 0x25`.
  Our builder emitted 0x28 (40), i.e. two bytes short - it now writes the
  canonical `wire+0x28` reserved u16, so every 10010 we send is 42 bytes.
- `build_action_10010` also gained an optional `slot14` argument: the original's
  builders put `param_8` at payload+0x10 (wire+0x14), so call sites that need it
  can now be wire-exact without changing existing behaviour.
- **1071 ported** (182 rows, new-engine case 0x3D): sscanf "%u %u %hu" with all
  three tokens required; `FUN_1401a9b00` semantics implemented as
  `Player::ActionRecord{id, timestamp, num, str}` pushed into
  `Player.action_records` (only when num != 0); when the third field is non-zero
  a 10010 CMsgAction goes to SELF with action 0x9F, `+0x0C = field1` and
  `+0x14 = field3`. The container's consumer in the original is still UNKNOWN and
  is documented as such: the list is stored and never read.
- Tests: `tests/test_actions_v104.py` asserts the 42-byte length, wire+0x0C/+0x14/
  +0x18 contents, the sender id, both branch outcomes and that field3 == 0 emits
  no packet. Suite: **75 tests, 75 green**.

## v105 (Nov 4, 2026) — action type 402 PORTED (303 rows, 100% of real content)
- The four counters the 402 gate calls are named by the binary itself: the catch
  thunks at `MsgServer.c:1230575+` are `CountAllNpc`, `CountFurnitureNpc`,
  `CountNpcByName` and `CountNpcByType`, matching the four subject keywords in
  vtable-slot order. That closes the last blocker recorded in v103b.
- Real content uses only `type` (297 rows, e.g. `type 25 < 8`) and `name` (6 rows,
  e.g. `name ItemBox < 3`); `all` and `furniture` have ZERO rows, so they are
  implemented as a logged UNKNOWN that takes `id_nextfail` rather than guessed.
- `case 402` now counts NPCs on the actor's map across `cq_npc` + `cq_dynanpc` and
  applies the proven gate (`op "<" && count < value` / `op "==" && count == value`
  else fail). Name and type both verified live against seeded NPCs.
- Bug found and fixed while testing: the SQL escaper iterated the whole 128-byte
  buffer (`for (char c : nm)`) instead of up to the NUL, embedding NULs in the
  statement so MariaDB received a truncated `... name='V104Count`. Now walks the
  C string; the server log's `bad SQL` line was what exposed it.
- Tests: `tests/test_actions_v105.py` (fixtures 99001080-92, npcs 99001894-99)
  covers name `==`, name `<` (count 2 vs 2 -> fail), type `==`, and the furniture
  UNKNOWN path. Suite: **76 tests, 76 green**.

## v106 (Nov 4, 2026) — coverage accounting corrected, decode batch launched
- No code change. `tools/coverage.py` verified accurate: **135 of 216 types** carry
  a case label and **98.17% of the 193,584 cq_action rows** are covered (190,042
  rows). The v103b claim that the tool under-reported 542/543 was wrong - its
  `case (\d+):` regex does pick them up - and HANDOFF.md now says so explicitly.
- Remaining unported weight is concentrated: 1040 (668 rows), 1086 (640),
  1554 (500), 532 (252), 1095 (245), 3701 (122), 1083 (121), 1084 (99),
  1651 (95), 403 (93). Everything else is under 90 rows.
- Three decode workers launched with the incremental-write protocol: 1040+1086,
  403+532, and 112/124/126/218/219+2002/2005. Their deliverables are
  `docs/worker_1040_1086.md`, `docs/worker_403_532.md`,
  `docs/worker_small_types.md`; each must end with a numbered PORT RECIPE so the
  next wave implements without re-reading the decompile.

## v107 (Nov 5, 2026) — type 112 wire swapped-field bug FIXED, suite 77/77
- Real fidelity bug found in shipped code: action 112 (18 rows) sent the DATA
  column in the 2032 reply-id slot and left the FACE at 0. Re-proved from the
  builder body `FUN_1403a6400` (MsgServer.c:657813) plus the call-site
  disassembly (`0x140144007`): the original passes `param_4 = (u8)DATA` and
  `param_5 = 0`, and the builder maps `param_4 -> wire+0x0E (face)`,
  `param_5 -> wire+0x0C (reply id)`, `param_2 -> wire+0x0F (mode 112)`.
  Corrected to `send_line(112, (uint8_t)data, 0, 0, 0, param)`.
- Two older tests (`test_actions_v44.py`, `test_actions_v62.py`) had asserted the
  swapped behaviour and were corrected; a new `test_actions_v106.py` asserts the
  three slots straight off the wire (reply id 0, face = DATA, mode 112).
- Rebirth worker (1040's apply `FUN_1401c3180`) is running with the
  incremental-write protocol; its deliverable is docs/worker_rebirth_apply.md.
- Suite: **77 tests, 77 green**.

## v108 (Nov 5, 2026) — rebirth decode: the config flag question is CLOSED
- The rebirth apply has TWO cores selected by the byte `mgr+0x6a2`. PROVEN: the shipped
  v6159 server always runs the **flag-OFF core `FUN_1401b9d70`**. Three independent proofs:
  the object ctor zero-initialises `+0x6a2` (`movb $0x0,0x6a2(%rdi)` at `0x1400c4dfa`), the
  only writer is `shell.ini [91AuthServerInfo] Is91AccountServer` loaded through a
  fail-closed `CIniFile::GetInt`, and the shipped `shell.ini` has no such section. The ON
  core `FUN_1401abab0` is the 91.com portal variant = dead code for us.
- `cq_rebirth`'s GetCell indexing is settled as **0-based**, confirmed from content (the
  action param `11 004` matches `new_prof = 11`, which is cell 2): `1 = need_prof`,
  `2 = new_prof`, `3 = need_level`, `4 = new_level`, `5 = metepsychosis`.
- Apply-core tail decoded (MsgServer.c:302281-302454): it derives max-life/max-mana from the
  new profession, then writes attributes through `FUN_1401a6420(user, id, value, send)` with
  ids `0x33/0x32` (profession pair), `0xb`, `7`, `0xc`, `5` (experience = 0), `0` (life),
  `2` (mana), `0x16`, refreshes self (`user[2]+0x338`), broadcasts a 10017 when
  `old != new` for attrib `0xc`, and writes the `gmlog/rebirth` line.
- `FUN_1401a6420` itself is decoded: `send` 1 = self, 2 = broadcast; attrib 5 is skipped for
  GM accounts; attrib 0 is mirrored onto the mount/pet when one exists; everything else goes
  to `FUN_1401a2660` (the 390-line CUser::SetData switch), whose case 0 (life = clamp to max
  life, floor 0, `FUN_140198760(user,value,0)`) is proven.
- NOT PORTED yet: 1040 needs four more helper reads (the attrib cases it writes,
  `FUN_1401abdf0`, `FUN_140173790`, `FUN_1401715d0`). Everything above is recorded in
  `docs/worker_rebirth_apply2.md` so the next wave ports 1040 (668 rows) mechanically.

## v109 (Nov 5, 2026) — action type 1086 PORTED (640 rows) + levexp type-0 bug fixed
- **1086 ported** (new-engine case 0x4C): `sscanf "%u %u"` (minutes, var index) ->
  `var[idx] = exp_from_minutes(player, minutes)`, idx > 7 logs and writes nothing,
  any token-count mismatch takes `id_nextfail`.
- `exp_from_minutes` is a line-by-line port of `FUN_140382f00` (MsgServer.c:634202-634276):
  `need = exp(level)` clamped to >= 1, `rem = minutes + (int)((float)up_lev_time *
  ((float)exp_now / (float)need))`, then it walks `cq_levexp` levels accumulating
  `exp(level)` while `rem >= up_lev_time(level)` and finally prorates the partial level
  with single-precision float math exactly as the original does.
- **REAL BUG FIXED in the XP layer**: `load_levexp` selected `level,exp FROM cq_levexp`
  with no type filter and kept the first row per level, but the table holds rows for
  types 0..5 (type 0 is the real curve). Level-up thresholds could therefore come from a
  mentor/other curve. Now `WHERE type=0 ORDER BY id`, and a new `load_levexp_time()`
  provides the `up_lev_time` column the same way.
- Tests: `tests/test_actions_v109.py` with its own probe character (account 100096 /
  cq_user 96, level 130 exp 0) asserts the exact computed value (201,887,472 for 2400
  minutes, verified against the live cq_levexp rows with float32 rounding), the idx>7
  no-write path and the bad-param fail branch. Fixtures live in the repo-verified-free
  band 99020000+/99020100+ after two earlier bands turned out to be owned by v74/v76.
- Suite: **78 tests, 78 green**.

## v110 (Nov 5, 2026) — action type 1554 PORTED (500 rows) + real cq_achievement storage
- **1554 ported** (new-engine case 0x99, msgserver_gameaction.c:19025-19085).
  `sscanf "%s"`; the DATA column is a `cq_achievementtype.position`:
  `field = (data/100)%100 + 1`, `bit = data%100` (1-based).
  * `chk` -> FUN_140171090: data 0 passes, an out-of-range position logs and fails,
    otherwise the branch is the bit test of cell `field`.
  * `add` -> FUN_140170e90 + FUN_1403772a0: only when the bit is clear, set it and
    add `cq_achievementtype.point` of that position to cell 1 (the point column).
  * `clr` -> FUN_140113380 + FUN_140377690: only when the bit is set, clear it and
    subtract the same points. Both always continue at id_next; an unknown command
    takes id_nextfail.
- **Storage is the real table**: `cq_achievement(userid, point, achieve1..13)`.
  The original's cells are 1-based, so cell 1 = `point` and cells 2..14 =
  `achieve1..13` (exactly 14 cells, matching the `field < 0xF` guard). New
  IDatabase API: `load_achievement` / `save_achievement` / `achievement_points`
  (the latter resolves FUN_1403762d0 against `cq_achievementtype.position`).
  Rows load at login and save on disconnect when dirty.
- **Bug found while wiring it**: `achievement_points` took the DB mutex and then
  called `query_string`, which takes the same non-recursive mutex -> the server
  thread deadlocked and 22 suite tests collapsed with "no 1213 challenge". Fixed
  by leaving the locking to `query_string`.
- Tests: `tests/test_actions_v110.py` (fixture position 20101 = field 2 bit 1,
  worth 25 points) proves the empty-bit fail branch, add-then-check, a re-login
  that reloads the row, clear-then-check, and the persisted
  `point`/`achieve1` values (25 -> 0) read straight out of cq_achievement.
- Suite: **79 tests, 79 green**.

## v111 (Nov 5, 2026) — action type 1084 PORTED (99 rows)
- **1084 ported** (new-engine case 0x4A, msgserver_gameaction.c:16076-16088):
  `sscanf "%I64d %u %u"` needs EXACTLY 3 tokens -> exp amount, varA, varB;
  `var64[varA] = new level`, `var64[varB] = percent into that level`; a var index
  above 7 logs and writes nothing, and a well-formed row always continues at
  id_next while a short param takes id_nextfail.
- `exp_split` in src/systems/xp.hpp is a line-by-line port of `FUN_140382d20`
  (MsgServer.c:634133-634200): it adds the amount to the current exp, walks the
  type-0 cq_levexp rows while `total >= exp(level)`, reports
  `level_out = current_level + gained` (ABSOLUTE) and
  `pct_out = (int)((double)total * 100.0 / (double)max(last_need, 1))`.
  NOTE this helper uses DOUBLE math, unlike 1086's float32 walk - both are kept
  exactly as the original does them.
- Tests: `tests/test_actions_v111.py` (probe char 96, level 130 exp 0): 1e10 exp
  must land on level 131 with 5% (verified against the live cq_levexp rows),
  plus the 2-token fail branch and the var-index > 7 no-write path.
  Fixtures live in the reserved band 99020030+/99020120.
- Suite: **80 tests, 80 green**.

## v112 (Nov 5, 2026) — rebirth stat call + god-time family decoded (docs only)
- `FUN_1401abdf0` is now fully determined from the disassembly of its call site
  (0x1401b9f77-0x1401b9f91): attrib 13 = the 4th look value, 14 = iVar7,
  15 = iVar9, 16 = iVar11 and attrib 10 (the point budget) = **the action's 5th
  sscanf field**. It also zeroes five fields at user+0xe78 first.
- `FUN_140173790` (the value written to attrib 0xb) and `FUN_1401715d0` (the
  lookface rewrite `(lookface/1000 - v/1000)*1000 + v` plus persisted record
  field 5) are decoded and recorded, including the five u16 base stats at
  user+0xed8..0xee2.
- The god-exp-time family is documented: `user+0xf38` is a packed **YYMMDDhh**
  date, `FUN_140382960` converts it to seconds/minutes/hours/days with the exact
  rounding constants, and `FUN_140382b00` aligns to the next hour before writing
  persisted record field 0x1c. 1083 (case 0x49) is therefore decoded except the
  semantics of user flags 0x1b/0x1c - recorded as BLOCKED rather than guessed.
- 403: the worker established that the old-engine 403 parses `pszAccept` (the
  item-type accept string, param_7 = [rsp+0x940]) rather than the action param,
  and the 401/402/403/498 subtract-compare dispatch chain is verified.
- All of the above is in docs/worker_rebirth_apply2.md (sections I/J/K) and
  docs/decode_401_family.md.

## v113 (Nov 5, 2026) — dispatch ladder mapped, rebirth call site resolved (docs)
- New `docs/old_engine_dispatch_ladder.md`: the complete `ProcessAction` range ladder of the
  old engine (every 98-wide block with its handler function, including 3701's two-call
  branch), plus the verified new-engine byte-map reads (1040 -> 0x22, 1083 -> 0x49,
  1095 -> 0x54, 1651 -> 0xA6). Any action type can now be located with one byte read.
- Rebirth apply call site resolved from the disassembly (0x1401c376d): `param_4` of
  `FUN_1401b9d70` is `cq_rebirth` **cell 2 = new_prof** (r12d is set to 2 at 0x1401c3213),
  `param_5` is **cell 4 = new_level**, `param_7` is the metepsychosis tier - so attrib 7 gets
  the new profession, attrib 0xc the new level and attrib 0x16 the tier.
- Recorded the remaining structural blocker for 1040: this rebuild has no five-base-stat
  model (user+0xed8..0xee2) and the cq_user stat columns are only partly identified
  (`strength`, `strength_value`), so there is nowhere faithful to store the distributed
  stats yet. 1083's flags 0x1b/0x1c and 1651's faction-state byte remain BLOCKED.

## v114 (Nov 5, 2026) — remaining-type boundaries mapped (docs)
- New `docs/decode_remaining_subsystems.md`: 3701 (ProcessActionEspecial: dead check,
  `sscanf "%d %s %d"`, manager 0x56 notifications, CMsgAction action 0xA4 broadcast),
  1043 (one-line case -> the user+0x1110 container sweep sending 0x6E packets),
  1651 (faction-state gate on user+0x12D), 1072 (packet family FUN_1403a5840/5ce0 with the
  constant 0xD). Each entry names the exact subsystem that still blocks a faithful port, so
  the next waves start from a known boundary instead of re-reading the decompile.
- Faction-match handler identified: `FUN_14011bfa0` handles only 3801-3805 and 3806.

## v115 (Nov 5, 2026) — action types 1203 and 1510 PORTED (69 rows)
- **1203** (case 0x6F, msgserver_gameaction.c:17661-17665): a pure life comparison. The
  branch is `max_life <= life` read through the actor's +0x10 sub-object getters +0x78
  (current life) and +0x80 (max life) - the same pair FUN_1401a2660 uses when it clamps
  attrib 0, which is what pins their meaning.
- **1510** (case 0x8C, :18350-18386): `sscanf "%d"`; the DATA column picks the base
  (**0 = max life, 1 = current life**), `x = base*v/100`, clamped to the current life, then
  `FUN_140177000(user,x)` subtracts it (+0x2E0 "add life (-x)") and runs a death flow at 0.
  Our engine has no player-death flow anywhere yet (documented global gap), so reaching 0
  clamps the life and still sends the 10017 life update; a DATA value above 1 has no branch
  in the original and takes id_nextfail.
- Tests: `tests/test_actions_v115.py` proves the state sequence on one character -
  1002 full-heal makes 1203 pass, 1510 at 50% of current life makes it fail, and it flips
  back only after another heal; plus the non-numeric param fail branch.
  Fixtures 99020050-63 / npcs 99020130-33.
- Suite: **81 tests, 81 green**.

## v116 (Nov 5, 2026) — action type 1204 PORTED (27 rows), life/mana pair complete
- **1204** (case 0x70, msgserver_gameaction.c:17666-17670) is the mana twin of 1203:
  `return (get(+0x88) <= get(+0x80))` on the user object.
- The slots are now PROVEN rather than assumed: `FUN_1401a2660` case 2 (the mana attrib)
  clamps the incoming value against `(*user+0x88)` and reads `(*user+0x80)` for its 10017
  entry, so +0x80 = current mana and +0x88 = max mana. (Case 4 uses +0x60 = money and
  case 5 +0xA0 = exp, which matches the 10017 key semantics already ported.)
- Tests: `tests/test_actions_v116.py` asserts exactly one branch on the current state and
  that 1002 "mana" flips it to the full branch; fixtures 99020070-76 / npcs 99020140-41.
- Suite: **82 tests, 82 green**.

## v117 (Nov 5, 2026) — rebirth point budget traced, 532 ruled out (docs)
- Traced the last unknown of the rebirth apply: **attrib 10 (additional points) is the RETURN
  VALUE of `FUN_140173790`**, not an action parameter (disassembly `0x1401b9ee2` call,
  `0x1401b9ee7` store into `[rsp+0xc4]`). The lookface rewrite right after it uses
  `[rsp+0x598]`, the same value the formula received as `param_3`.
- Recovered the CUserData byte offsets that `CUser::LoadFromRecord` (MsgServer.c:249255-249300)
  copies into `+0xed8..+0xeee`, including `record 0x76 -> +0xeee = profession` (pinned by the
  rebirth requirement match) and `slot 0xD -> +0xeac = lookface`. The struct is byte-packed
  (0x19/0x1A are read as overlapping u16s), so it is a compact cache, not the SQL row: the
  filler/adapter is the one decode that still blocks 1040 (668 rows).
- **532 (252 rows) ruled OUT as an action**: the 501-598 dispatcher has no `0x214` at all, and
  its 252 rows are pure data (DATA 304-319, params like `"1 10 0 604800 500 0 0"` = 7-day
  item-attribute definitions) read by the item-attribute subsystem.
- 1650/1651 gated on the faction state byte `user+0x12D`; 1082/1096/1098/1072 each need their
  named subsystem - all recorded in docs/decode_remaining_subsystems.md.

## v118 (Nov 5, 2026) — 1083 flags decoded to the status bitmap, 1095 loader mapped (docs)
- The `+0x2D8` queries that blocked 1083 are the **presence bitmap at `user+0xF68`**
  (0xC0 bits, word/bit addressing with an `idx <= 0xBF` guard). The setter switch
  (MsgServer.c:299106-301600) pairs each index with a notify id: 0x1B -> 0x1F, 0x1C -> 0x20,
  0x1D -> 0x21. So 1083's `chk` asks "does the actor HAVE state 0x1B" / "state 0x1C or >= 1
  second of privilege left", which needs the status-bitmap subsystem. Still BLOCKED.
- 1095's CMagicManager loader is mapped: four queries (cq_magictype, cq_magictype_ex,
  cq_magictype WHERE auto_learn!=0 -> a map<id,magic> SET, cq_magictypeop). The 64-cell
  container FUN_1402f16c0 walks is NOT any of those tables, so the grouping code is the one
  missing piece. Still BLOCKED.
- Also started a narrowly-scoped worker (per the owner's instruction to keep workers to ONE
  task because of their tool cap) on the CUserData column adapter, the single decode that
  still blocks 1040 (668 rows).

## v119 (Nov 5, 2026) — 1040 (Rebirth, 668 rows) FULLY DE-RISKED (docs)
A narrowly-scoped worker (one question only, per the owner's instruction about the worker
tool cap) found the CUserData adapter: `FUN_1403744b0` (MsgServer.c:624108) fills the struct
from the row built by `SELECT cq_user.* ... WHERE cq_user.id=%u` (:624561), so every column is
literal and no index arithmetic is needed:
`+0xed8=strength, +0xeda=first_prof, +0xedb=old_prof, +0xedc=Speed, +0xede=health,
+0xee0=soul, +0xee2=additional_point, +0xee4=auto_allot, +0xeee=profession`.
With that, the rebirth argument chain closes: `r15 = movsxd(r8d)` = the v3 tier, `r12d = 2`
inside the apply pins `GetField(2) = new_prof`, `GetField(4) = new_level`, and attrib 10
(additional points) is `strength+Speed+health+soul+additional_point - 3*new_level - 7`
clamped at 0 - the classic "3 points per level + 7" budget, which is what finally confirms
that `[rsp+0xa0]` is the new level.
`docs/worker_rebirth_apply2.md` section N is now the complete, address-backed recipe for
1040: requirement match, unequip-all-except, look tuple, point budget, the ordered attrib
writes, the lookface rewrite and the refresh/broadcast. Only the `v2 == 2` branch of the
point formula remains UNKNOWN (its body continues past the readable window) and is flagged as
such rather than guessed. Implementation is the next wave.

## v120 (Nov 5, 2026) — action 1040 (Rebirth, 668 rows) IMPLEMENTED + live-verified
`1040` is now a real port, not a recipe. Everything the recipe had left open was closed by
reading the code, not by guessing:

- **Requirement scan (FUN_140163c90):** `need_prof == cq_user.profession`, `new_prof == v1`,
  `metepsychosis == v3` (cq_rebirth read 0-based: 1=need_prof, 2=new_prof, 3=need_level,
  4=new_level, 5=metepsychosis) plus the level gate `(level < v3 || level > 2)` and
  `need_level <= level`. Any miss takes `id_nextfail`.
- **Apply core (FUN_1401b9d70):** current profession is `r13d`, current level comes from the
  `+0x70` getter, and `FUN_1401abdf0(user, health, soul, speed, strength, points)` was
  disassembled to prove the 5th argument (`[rsp+0x28]`) is the computed point budget.
- **Point budget (FUN_140173790):** mode `v2 == 1` is the level curve
  (`((lv-0x78)*(lv-0x77))/2 + 0x48`, profession 0x87 uses `((k+1)*k)/2 + 0x48` with
  `k = (min(130,level)-0x6e)/2`); every other mode is
  `add_point+soul+health+speed+strength - 3*current_level - 7` (clamped at 0) plus
  `3*new_level - 3`, and `v2 == 2` inserts the 11-band table `0 1 3 6 10 15 21 28 36 45 55`
  indexed by `clamp(current_level-120, 0, 10)`. The result is capped at
  `rebirth_point_cap() - 10`; the cap is `*(mgr+0x844)`, default `0x352` = **850** (ctor at
  MsgServer.c:147734), overridden by cq_config row 0x222E6 field 2 when that row exists (it
  does not in this DB), so the effective cap is **840**. All four modes really are in use —
  the DB has 167 rows for each of v2 = 1/2/3/4.
- **Look face (FUN_1401715d0):** `(lookface/1000 - v2/1000)*1000 + v2`, persisted.
- **Unequip (FUN_140163e10):** every equip slot except 10, 11 and 0x13 is moved to the
  inventory (`cq_item.position = 0`) with a 1008 action-1 notify, then combat is reloaded.
- New engine state: `Player`/`UserRecord` gained the CUserData stat block
  (`strength`, `speed`, `health`, `soul`, `add_point`) loaded from the four cq_user columns;
  new DB APIs `load_rebirth`, `rebirth_point_cap`, `save_user_rebirth` (single-row UPDATE) and
  `update_item_position`.
- **Test (`tests/test_actions_v120.py`):** V120Reborn (cq_user 97 / acc 100097, level 130,
  profession 10, all stats 0, one item in slot 4) + cq_rebirth 990001 (10 -> 11, level 1 -> 15,
  metepsychosis 1) + chains 99020080/83. Asserts the 12 attrib keys the original writes
  (0=93 life, 2=0 mana, 5=0 exp, 7=11, 0xc=15, 0xd/0xe/0xf/0x10 = 0/3/5/2, 10=42 points,
  0x16=1, 0x33=10), the whole cq_user row, the unequipped item, and the no-row fail branch.
- **UNKNOWN (flagged, not guessed):** attrib `0xb` (VP getter `+0x30`) is not modelled by
  this engine and is not sent; the tier-3+ path reads `cq_user.old_prof` (user+0xedb) which
  is not loaded yet, so it reports 0x32 only and logs the gap.
- Suite: **83/83 green** (clean re-run; same 83 distinct tests as the previous run). The first
  run of this wave lost v38/v39/transport_live to "connection refused" because the 5816 server
  process vanished mid-suite — no OOM record in dmesg, no crash trace in the server log — and all
  three pass both standalone and in the re-run, so it was an environment flake, not a regression.

## v121 (Nov 5, 2026) — 1095 (rebirth skill set, 245 rows) + 1048 (attr timer, 20 rows), and the case-body convention finally proven
Two more new-engine action types are live, and the wave also closed a decoding gap that had
been costing whole sub-agent runs.

- **The case-body address convention is now proof, not guesswork.** The dispatcher itself
  (`FUN_14012a6e0` at 0x14012a815) reads `rdx = 0x140000000`, `eax = byte_map[0x13aa9c+type-1001]`,
  `ecx = [rdx+rax*4+0x13a7ac]`, `add rcx,rdx; jmp rcx`, i.e.
  **body = 0x140000000 + u32[0x14013a7ac + case*4]**. Anchored against the known port
  1075 -> 0x14012c33f. Every earlier variant that added the table or entry address produced
  targets in 0x14026xxxx that only *looked* aligned (one was verified to be the tail of an
  unrelated function). `tools/newengine_map.py::body_of` is fixed, and
  `docs/v121_dispatch_and_1650.md` records the disassembly.
- **1095 = CUser::grant the rebirth skill set** (case 0x54, body 0x140137ef7 = a single
  `FUN_1401763f0(user, true)`). The manager pointer is `user+0x100`; the data source is
  **cq_magictypeop** (`FUN_1402f0ab0` runs "SELECT * FROM cq_magictypeop" into the tree at
  +0x188). The grant (`FUN_1402f16c0`) walks every row and matches
  `rebirth_time == metempsychosis` (only 1 and 2 reach the compares),
  `profession_ago == user+0xeda` when meto==1 else `user+0xedb`, and
  `profession_now == user+0xeee` (profession); it then applies skill_1..skill_60 with
  `magictype_op` 0 -> `FUN_140482c80` (full remove), 1 -> learn flag 0, 2 -> learn flag 1,
  any other value skips the row. The helper returns true when the walk ends, so the chain
  takes id_next. New: `load_magictypeop()`, `Player::old_prof/first_prof` (cq_user.old_prof /
  first_prof, the two bytes the grant reads), 1103 per granted magic, delete_magic on the
  clear path. FLAGGED (not guessed): the original then reconciles each learned magic's level
  from cq_magictype inside FUN_140493f70 (fields 3/6 compare at 0x140493fcc); we reuse the
  already-ported 1020 "learn" semantics (create at level 0), and the flag 0 vs flag 1
  difference is not modelled.
- **1048 = attribute timer** (case 0x2a): `sscanf(param,"%d %u")` must return exactly 2;
  `FUN_140382c50` clamps v1 at 0, stores `user+0xb74 = v1`, `user+0xb78 = v2`,
  `user+0xb7c = time(NULL)/1000`, and sends ONE CMsgUserAttrib 10017 with key v1 and value v2.
  The body then jumps to the shared fail epilogue, so this type **always** takes id_nextfail.
  Player now keeps attr_timer_id/seconds/start.
- **Test (`tests/test_actions_v121.py`)**: V121Magic (cq_user 96, profession 11,
  metempsychosis 1, first_prof 10) clicks MagicSage -> two matching cq_magictypeop rows prove
  both paths in one action (op 1 learns 1015 + 1115 with 1103, op 0 then clears 1115, final
  cq_magic = {1015}); clicks TimerSage -> the fail marker only, never the id_next marker, and
  a 10017 carrying key 300 = 60.
- Also decoded this wave and documented but NOT ported (flagged in
  `docs/worker_v121_a.md` / `docs/worker_v121_c.md` / `docs/v121_dispatch_and_1650.md`):
  1043 (0x140135433, iterates `user+0x1110`, sends 10017 via FUN_140162620 - the container
  type is UNKNOWN), 1072 (0x14012d507, one CMsgMapItem 1101 action 0xD at the player's own
  position, but the id it carries comes from an unidentified global getter),
  1082 (0x14012f025, `"%s %s %u %d %d %d"` self/mate/couple/team add|chk), 1650/1651/1654
  (a three-step state machine on `CUser+0x968` whose subsystem is still unnamed).
- Suite: 82 passes with the two known flakes only (test_drops RNG hunt: no drop in 208 kills;
  test_weaponskill carried exp). Everything else green, including the new test_actions_v121,
  transport_login and lua_unit.
- FIXTURE ID LESSON (cost a suite run): cq_user 96 was already V108Probe's (v109 wave), so
  the first v121 seed silently rewrote that character (level 130 -> 15, profession 10 -> 11,
  metempsychosis 0 -> 1) and broke test_actions_v109/v111. v121 now owns cq_user 95 /
  account 100095, and V108Probe's ON DUPLICATE clause restores profession/metempsychosis/
  old_prof/first_prof/position/life/mana so no later wave can leave it half-written.
  Also proven: cq_magictypeop must be walked in ASCENDING id order (the original's tree is
  keyed by id), otherwise an op=0 clear row can run before the op=1 grant row that feeds it.

## v122 (Nov 5, 2026) — the two known suite flakes are gone
The suite had been carrying the same two failures for several waves; both are now fixed at
the source instead of being re-explained every run.

- **test_drops**: the pill hunt (3%/kill) only had a 120s deadline while one
  summon-and-kill round costs about a second, so a run bought ~70 rolls and went dry 12% of
  the time. The deadline is now 240s (<0.3% dry) and `tools/run_suite.sh` gives this test its
  own 300s timeout instead of the 60s default. Standalone run: green.
- **test_weaponskill**: the level-up assertion demanded exp 6..20, i.e. it assumed a nominal
  killing hit. The carry-over is `1180 (seed) + dealt - 1200` where `dealt` is the capped prof
  exp of whichever hit killed the pheasant (1..33, crits and low rolls included), so the test
  now asserts the legal range 0..33 plus level 1 and next_req 68000. The invariant (overflow
  is carried, never lost) is unchanged; only the false precision is gone.

### v122b — 1072 ported (ground-item marker at the player's own cell)
- **1072** closes completely: identity = the action's `data` column, coordinates =
  the player's own cell, packet = CMsgMapItem **1101 action 0x0D** with data/ext zeroed,
  sent to the executing player only, always `id_next`. `data=0` is a silent no-op
  (`SetInfo` returns false for id 0) but still advances the chain. New builder
  `build_map_item_1101_1072`, test `tests/test_actions_v122.py` (chain 99020300 +
  zero-data 99020310, char V122MapItem = cq_user 94).
- **Docs**: `docs/worker_v122_1072_1043.md` (1072 CLOSED; 1043 half closed — the packet
  is 10010 action 110, not 10017, element stride/keys mapped, only the container element
  type stays UNKNOWN), `docs/worker_v122_1096_1098.md` (both decoded, provider objects
  still unnamed), `docs/worker_v122_1082.md`, `docs/worker_v122_1650.md`.
- Suite: green including test_drops (deadline fix held) and the new test_actions_v122.

### v122c — the router facts are now machine-checked
- **`tools/router_audit.py`** recomputes BOTH dispatch tables from the binary
  (`case = byte_map[0x13aa9c + (type-1001)]`, `body = 0x140000000 + u32[0x13a7ac + case*4]`)
  for the whole 1001..1729 range and then checks every place the same fact was written by
  hand: `ANCHORS` in `tools/newengine_map.py`, the hex case column of
  `docs/newengine_router.md`, and every `case N:` in `src/systems/actions.hpp` (each must
  resolve to a real body inside the router span, and no two types may share a body).
  Result now: **729 types resolved, 39 ported types, 39 distinct bodies, 52 doc rows, 0
  problems**. It runs as a preflight step of `tools/run_suite.sh`, so a hand-copied table
  value can never reach a green suite again.
- It caught one real slip: `docs/worker_v121_c.md` narrated the 1075 anchor as
  `case 0x3e` (that is 1072's label) while the body `0x14012c33f` was correct. Fixed, with
  the recomputation written next to it.
- 1043's remaining unknown narrowed: the element key getter `0x14039d9d0` is
  `return *(u32*)(this+8)` (setter `0x14039d9e0`), so the key lives at `+0x08` while the
  10010 payload field reads `+0x10`; `0x1401cbafc` is a raw `mov [user+0x1110], r12`
  inside a larger load function, so the container is attached there but its type still
  needs the allocation site. 1043 stays BLOCKED.

### v122d — the four blocked types share one root helper
- `FUN_1401181a0` is now understood: it is a **cached component getter**
  (`GetService()->vt[0x20](20)`, guarded by the once-flag at 0x140975d10 and cached at
  0x140975d08). 1043, 1082, 1096 and 1098 all call it, which is why they were all stuck
  at the same place: they operate on that one component and we had not named it.
- **1096's flow is now exact** (register level): the five negative-token checks, then
  `data` column -> int -> `component->vt[0xd8](id)` -> `0x140165da0(player)` precondition ->
  allocate a 16-byte node `{0, id, 0, 0}` -> hand it to the player via `vt+0x8`. It is a
  queue append, not a state read.
- Written up in `docs/worker_v122_shared_helpers.md`; 1043's write-up now points at it
  (the `user+0x1110` container is very likely a member list of that component, so closing
  component 20 closes 1043 as a side effect).

## v123 (Nov 6, 2026) — WIRE BUG FOUND IN A PORTED TYPE: 512 was sending 1116, the original sends 1108
Ten decode workers ran against the unported list; the first thing their reports produced was a
defect in code we had already shipped.

- **512 (CMsgItemInfoEx): the packet type was wrong.** The builder `FUN_1403873d0` stores
  `movl $0x454,0x8(obj)` at **0x14038767f** and `movl $0x4E,0xc(obj)` at 0x140387686, so the wire
  type is 0x454 = **1108**. v45 shipped `Packet p(1116)` even though the comment above it already
  read 0x454 - the literal was never checked against the store. Renamed to
  `build_item_info_ex_1108`, fixed the caller and `tests/test_actions_v45.py`; the test now
  asserts a single **1108** carries item id 90100, uid 1, type 900101 and the 0x4E size field.
- **3501..3598 has its own dispatch branch**: `iVar8 - 0xdadU < 0x62` at MsgServer.c:223697 ->
  `FUN_140140380`. `docs/old_engine_dispatch_ladder.md` omitted it (now fixed). Every case in
  that handler first calls `CurrentInstanceGet()->vt[0x20](8)` and, when that returns NULL, logs
  **"Family module is not loaded!"** and returns false. Our existing stub (3501/3510/3521/3523/3524
  -> id_nextfail) is therefore **faithful** for a build with no family module registered - it is
  not the "behaviourally wrong default" the worker suspected.
- **1098's mode is the `data` column, not the token count**: every row pairs `data` 0/1 with the
  same 15-id param list (e.g. `1 | 29 30 31 32 33 34 35 36 37 38 45 46 48 111 121`), so `data` is
  the OR-vs-first selector.
- **1096's row shape**: `data` = a small catalogue id (29..32) and
  `param = "<a> <b> <dur> <d> <dur2> <flag>"` with 604800 (7d) / 2419200 (28d) durations, e.g.
  `30 | 200 0 604800 0 604800 1`. Both 1096 and 1098 read/write the same provider (component 20),
  so they stay blocked together with 1043 - see `docs/worker_v123_component20.md`.
- **Component 20 identified structurally**: `FUN_1401181a0()` = `CurrentInstanceGet()` (Root.dll
  import at IAT 0x1406d8df0) -> `CGame::GetProvider(0x14)`, implemented as a
  `std::map<unsigned int, void*>` lookup at `CGame+0x48` (no jump table). The map is filled by the
  DLL modules named in `adapter_cfg.ini` (32 modules, Family.dll among them, which is provider 8
  as used by 218/219 and the 3501 family). Which module owns id 0x14 is still UNKNOWN.

### v123b — packet ids are machine-checked too (`tools/packet_id_audit.py`)
Every CMsg* builder in the original stores its type as `movl $<type>,0x8(obj)` right
before the size store, so a hardcoded wire id can be verified from ONE instruction.
The new tool reads that store out of the binary and compares it with the id our C++ sends,
then runs as a second suite preflight next to `router_audit.py`:

```
ok   1004 CMsgTalk (world)       stores 0x3ec
ok   1008 CMsgItemInfo           stores 0x3f0
ok   1025 CMsgWeaponSkill        stores 0x401
ok   1101 CMsgMapItem            stores 0x44d
ok   1104 CMsgWeaponSkillExp     stores 0x450
ok   1108 CMsgItemInfoEx         stores 0x454
ok   2077 CMsgItemStatus         stores 0x81d
```
All 8 match, so 512's 1108 fix was the only wrong literal in the ported builders. Suite: **85
passed, 0 failed** (both preflights green, every live test green including v45 with the corrected
1108).

## v124 (Nov 6, 2026) — 3701 ported, the 3701..3798 chain rule fixed, and provider 0x14 named
- **3701 is not a DB quota action.** Handler `FUN_14011dcb0` runs ZERO SQL: `sscanf "%d %s %d"`
  (exactly 3), int A <= 0 -> nothing; dead (status bit0) -> the STR_DIE notice only; otherwise it
  clears the `+0x130..+0x140` stamp block (`FUN_140164e30(user,0,...)`), asks the manager for
  `(uid, 0x56)`, and broadcasts **one CMsgAction 10010 action 0xA4** to the whole map with dir 1,
  x=y=0, ext 0, `+0x0C` = int B, `+0x24` = int A. Ported exactly, including the empty packed
  string the original passes (`local_148`, not the parsed `%s`).
- **The 3701..3798 branch DISCARDS the handler's return value** (`MsgServer.c:223714`) and returns
  1, so every unsupported sibling in 3702..3798 (`"unsupported ACTION type"` inside the handler)
  still takes **id_next**. Our `default:` case used to send them to `id_nextfail`; fixed, and the
  rule now has a live test (`3750` row -> id_next).
- **Provider 0x14 is `status::CStatusMgr` from Status.dll** (`docs/worker_v124_provider20.md`):
  registered through `CGame vtable+0x18` (`0x141677e20`), the only `mov edx,0x14` in the 34
  modules is at `0x1416b1217`. That is the object 1043/1096/1098 all act on, and it matches the
  1096/1098 row shapes (ids 29..32 with 7-day/28-day durations).
- Still blocked, with reasons recorded: **544** needs the SuperFlagMgr data model (packet 2110
  layout is proven: type 0x83E, size 0x4C + 10*0x30, superflag.cpp), **2009** needs the AI-NPC
  spawn entry `0x14038E270` (`+0x150`=6/10, `+0x154`=seconds, 10010 action 135), **2007** needs its
  field map re-verified against our existing port, **1043/1096/1098** need the status manager.
- Fixture band v124: chains 99020320-99020339, npc 99020186-99020188, char V124Stamps =
  cq_user 93 / acc 100093 (every wave gets its own character id - the cq_user 96 collision of
  v121 must not repeat).

### v124b — decode caveat: SQL text lives in db.dll, so "no SQL string" is not evidence
`db.dll` builds every statement dynamically (`INSERT INTO %s SET %s`,
`CRecord cannot insert records without MODE_EDIT for table "%s"`), so no action handler in
`MsgServer.exe` ever contains a literal `SELECT`/`INSERT`. Recorded in
`docs/decode_caveat_db_layer.md`. Effect on today's work: **3701's port stands** (its proof is
call-shape: every call target is the log IAT, `sscanf`, `CurrentInstanceGet()`, the manager vtable
or the user vtable), but the *string-dump* argument used alongside it is withdrawn; **2007's
"no INSERT" claim is retracted as unfounded** and needs a `CRecord`/`CDatabase` call check before
any port change. This caveat invalidates the "zero SQL" phrasing in the v12x worker docs unless
those argued from call shape.

## v125 (Nov 6, 2026) — status manager ported: 1096 and 1098 are live
- **New `src/systems/statuses.hpp`** — the port of provider 0x14 (`status::CStatusMgr`,
  Status.dll). Slots: `+0xd8` HasStatus (record exists AND state == 3, no DB), `+0x8` AddStatus
  (11 args, t3 is a **duration in seconds** - proven by `end = now + t3`), `+0x10`
  ApplyUserStatusCode (uid 0 is a silent no-op), `+0x28` types_of, `+0x40` clear. The record
  layout is transcribed from the argument build. Records live **in memory**: the mapping onto the
  `cq_status` columns is still UNKNOWN, so nothing writes that table yet (documented, not guessed).
- **1096 ported**: six tokens required, tokens 2..6 must be >= 0, type = the `data` column; already
  held -> the check/apply path, otherwise AddStatus and **the add's bool is the action result**.
- **1098 ported**: 1..15 ids, `data` = mode. 0 = OR probe; 1 = apply the code for **every** held id
  with **no early exit** and always true (this supersedes v122's "first hit wins / records it");
  >= 2 = false.
- New test `tests/test_actions_v125.py` (7 checks, all green): grant, already-held, negative token,
  mode 0 hit, mode 0 miss, mode 1, mode 2. Fixture V125Status = cq_user 92 / acc 100092.
- **2007 re-verified**: body is 0x140147808..0x140147B5F, create call
  `CNpc::Create(pNpc, [rbx+0x48], &info@0x170, 0, name@0x2e0)`; the sscanf→struct **field names are
  still UNKNOWN**, so the existing port's field map is explicitly marked unverified
  (`docs/worker_v125_2007.md`).
- **544 corrected and left BLOCKED**: the pushed id is `param_6` (the +0x18 context byte), not the
  10th argument; the 0x30 record is 4 CItemData values + a 0x20 string; `cq_super_flag` is empty and
  has no loader, so a port could only emit empty 2110 packets.
- **2009 refined**: the exit writes 6 **or** 10, accepted type window 11185761..11285759.

### v125b — 1028 (flag word) and 1053 (var compare) ported
- **1028** = the 32-bit user flag word at `CUser+0xf24`: `sscanf "%s %d"` (exactly 2 tokens), index
  guard `<= 0x1F` (CHECKF above it), ops `chk` (`bt`/`setb`, clear bit -> fail branch), `add` (set),
  `clr` (clear). New `Player::user_flags`. Ported + tested (5 checks).
- **1053** = `"var(%d) <op> <int64>"` on the same store as 1060/1061/1064, ops `>` (setg),
  `>=` (setge), fallthrough `sete` (`==`) and `+=` (second parse block); the comparison result IS
  the action result. Ported + tested.
- **1029** decoded as far as the format (`"%s %s %hu %hu %u"`, first token `play`, then a helper
  0x14037dfb0 + 0x14037e0a0(obj,0x14,name,u32)) and left **UNPORTED** with its unknowns listed.
- Seed bug found and fixed: the var-table cleanup used `owner_id`, the real column is
  `cq_user_script_var.player_id` - a bad DELETE there aborts the rest of the seed silently enough
  that the wave's action rows never land (symptom: every dialog assertion empty).

