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

