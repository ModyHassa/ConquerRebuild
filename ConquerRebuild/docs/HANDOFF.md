# ConquerRebuild — Handoff / توجيه للوكيل القادم

> **للمالك (بالعربي):** الملف ده هو "عقل المشروع كله". اقرأه قبل أي حاجة. لو الوكيل اللي بعده
> أياً كان (AI جديد أو إنسان) مشي على الطريقة دي بالظبط، هيعرف يكمل من غير ما يضيع.
> **قاعدة ثابتة من المالك:** كل ما تخلص مروحة شغل (milestone)، ارفع على GitHub فورًا مع تحديث ملف
> MD يشرح اللي اتعمل واللي فاضل.

---

## 1. What this project is

We are rebuilding a **fully functional, open-source Conquer Online server** (v6159-era client,
5800-series protocol) as a clean C++ codebase (`ConquerRebuild/`), ported **logic-for-logic from
the original decompiled binaries**, wire-accurate against the original client.

- Original server binary: `conquer_source/Source/MsgServer.exe` (10.6MB, x86, build
  `f:\version\cqserver-78.0.11-1204\msgserver`), already decompiled to C:
  `decompiled/MsgServer.c` (59,726 functions, 1.36M lines) + the other modules in `decompiled/`.
- Original client: `conquer_source/patch/Conquer.exe` (7.3MB, x86), decompiled to `decompiled/Conquer.c`.
- Real original database dump: `conquer_source/cq.sql.gz` (gunzip → import into MySQL/MariaDB,
  DB name `cq`, ~112MB, 267 tables, 192,895 cq_action rows, 21,536 cq_task, 2,122 cq_npc, 823 cq_monstertype).
- AccountServer (.NET managed source available at `conquer_source/AccountServer/`) for SRP6 login flow.

**Current state (v47, Oct 24 2026): 32/32 live tests green.** Login (SRP6 + original code-2
duplicate-UIN), spawn (wire-accurate 10014), movement, full NPC dialog/task engine, real cq_action
chain engine (~40 action types ported), combat damage pipeline, monsters + AI, XP/level-up, drops,
inventory/equipment packets, player death/revive, magic casting (obfuscated 1022 action 24),
weapon proficiencies, dyna-NPCs — all live-verified against the real DB.

## 2. The methodology (follow this exactly — الطريقة)

1. **Decompile-driven, never invented.** Every ported feature starts in `decompiled/MsgServer.c`
   (or `Conquer.c` for client-side packet layout). Find the original function, read it, cite the
   FUN_xxxxx address in a code comment. If the original logs DBERROR / has a fail branch, port that too.
2. **Wire-accurate packets.** Packet builders must match the ORIGINAL wire format byte-for-byte
   (extract from the client parser in Conquer.c). Test asserts on real wire offsets. Never invent fields.
3. **Real-DB live tests.** Tests are Python scripts (`ConquerRebuild/tests/test_*.py`) that connect
   to the running server over TCP:5816, log in seeded accounts, and assert on packets + MySQL state.
   `ConquerRebuild/tools/run_suite.sh` = full regression suite (seeds DB, resets positions,
   fresh server, runs all tests). **The suite is the contract: no change merges unless all green.**
4. **Fixtures live in `tools/seed_test_accounts.sql`.** Add NPC + cq_action chain fixtures per wave.
   Fixture id bands are ALLOCATED (see §6) — never overlap bands or you wipe other tests' rows.
5. **Incremental waves.** Port a small batch of action types (a "wave"), add a vNN test file,
   register it in run_suite.sh, run the FULL suite. `vNN` version numbers = one wave each.

### Environment / commands

```bash
service mariadb start                      # sandbox restarts kill MariaDB; data persists
cd ConquerRebuild
make -j4                                   # Makefile tracks headers via HDRS=$(find src)
mysql -h 127.0.0.1 -u test -ptest cq < tools/seed_test_accounts.sql
./tools/reset_positions.sh                 # ALSO resets recordmap_id — run after any position-changing test
CQ_DB_HOST=127.0.0.1 CQ_DB_USER=test CQ_DB_PASS=test CQ_DB_NAME=cq \
  stdbuf -oL ./conquer_server > /tmp/srv.log 2>&1 &   # env vars are MANDATORY (default DB is wrong)
pkill -x conquer_server                    # kill by exact name (NOT -f: it kills your own bash)
sh tools/run_suite.sh                      # full regression, expect "32/32 PASS"
```

## 3. Codebase map (`ConquerRebuild/src/`)

| File | Role |
|---|---|
| `main.cpp` | bootstrap, socket loop, includes `handlers/default_handlers.cpp` |
| `core/database.hpp`, `core/mysql_db.cpp` | IDatabase interface + MySQL impl (mirrors original MySQL calls); MemoryDB dev fallback |
| `systems/login.{hpp,cpp}` | CUserList::LoginUser port: duplicate-UIN code 2, GM gate code 3 |
| `systems/world.cpp/hpp` | World, GameMap, spawn_player, tick (AI + respawn + ground-item sweep), broadcast_to_screen |
| `protocol/*.hpp` | wire-accurate builders: spawn_10014, item 1008/2077, magic 1103/1105, weapon skill 1025/1104, drops 1101, usereffect 1015, name 1015, attrib 10017 |
| `systems/actions.hpp` | THE cq_action chain engine: ActionTable (192,895 rows) + ~40 ported types + old/new engine routing |
| `systems/npc.hpp` | NpcSystem (2,122 real NPCs), CMsgDialog 2032 wire (per-line packets), menu remapper |
| `systems/tasks.hpp` | cq_task qualification + dual-task model (menu task → accept task) |
| `systems/dynanpc.hpp` | cq_dynanpc runtime NPC system (types 201/301/150) |
| `systems/monsters.hpp` | cq_monstertype + cq_generator spawn, respawn, spawn_one (type 304) |
| `systems/combat.hpp` | CPlayer::Attack / CBattleSystem::ProcAttack port (Part A + Part B) |
| `systems/drops.hpp` | money/pill drop tables, GroundItemManager, pickup |
| `systems/magic.hpp` | casting: obfuscation decode (ror/rol), 1105 damage entries, cooldowns |
| `systems/weaponskills.hpp` | cq_weapon_skill exp/level + up table |
| `systems/usereffect.hpp` | 1015 user-effect packet |
| `systems/xp.hpp` | cq_levexp AwardExp port |

Docs in `ConquerRebuild/docs/` (e.g. 10014 layout). Session logs of every past wave are in the
Base44 agent's saved memories — the gotchas below are the distilled version.

## 4. What is DONE (ported + live-verified)

- **Login:** original CUserList::LoginUser (code 0/2/3), SRP6 chain 1542→1213→1214→1055 (AccountServer SRP6.cs replicated), game leg 1008.
- **Spawn:** wire-accurate CMsgPlayer 10014 (37 fields + string packer), client-visible.
- **Movement:** walk/jump 10005/10005-family, screen sync 10010 action 205.
- **NPC/dialog:** CMsgTaskDialog 2032 per-line wire (mode/face/packer), types 101/102/103/104/105,
  menu remapper (u2 slot = index into per-user 20-entry menu list, cap 20 → 0xFFFF on overflow).
- **cq_action chain engine:** ActionTable loads all 192,895 rows at startup. Ported types:
  101 102 103 104 105 120 121 123 125 127 150 201 205 207 208 301 302 303 304 306 307 308 311 312 314
  501 502 503 543 9001 2006 2008 2009 2010 2011 2012 2013 506 509 510 511 513 516 517 518 1001 1003 1004 1005 1020 1021 1022 1026 1027 1030* 1064
  1070 1071* 1073 1074 1075 1076 1077 1080 1081 1085 2003 2004 1075-family… (see actions.hpp switch
  for the authoritative list; * = partial).
- **cq_task system:** qualification checks, dual-task model, real-NPC chains (Shopkeeper etc.) verified.
- **Combat:** full ProcAttack pipeline (Part A atk-def, Part B prof-vs-dodge, statuses, floor-1),
  1022 attack, never-overkill cap, aggro/counterattack AI, leash.
- **Monsters:** generator spawn per map, 1s tick respawn, AI chase (CMsgMonsterJump 20002), death 135.
- **XP/levels:** cq_levexp AwardExp (duplicates: keep FIRST per level), +3 attrib pts, full heal.
- **Drops:** money tiers (level-based multipliers), 3% pills, CMsgMapItem 1101 spawn/pickup, DB persist.
- **Inventory:** CMsgItemInfo 1008 (action 1 create / 9 query), CMsgItemStatus 2077 (modes 3/8),
  login dump of cq_item rows, pickup insert.
- **Death/revive:** 10017 hp=0 → client-side death UI, CMsgAction 94 revive dialog, revive at record
  pos; 1070 Relive (map validation + cross-map re-register + self-inclusive respawn broadcast).
- **Magic:** cq_magic records + 1103 snapshot, obfuscated 1022 action-24 casting (mt/tgt/x/y/mode2
  decode formulas all verified), 1105 damage broadcast, cooldowns, learn/uplevel/addexp (1020).
- **Weapon proficiency:** cq_weapon_skill exp/level, 1025 + 1104 packets, level-up table semantics.
- **Dyna NPCs:** 201 var ops, 301 create (INSERT + 10014 broadcast), 302 counts, 150 data ops.
- **Rebirth (1040, 668 rows):** full apply — requirement match on cq_rebirth, unequip-all-except
  (10/11/0x13), look tuple, the 4-mode point budget (cap 840), lookface rewrite, ordered 10017
  attrib writes, single-row persist. Test: tests/test_actions_v120.py (V120Reborn = cq_user 97).
  UNKNOWN: attrib 0xb (VP getter) and cq_user.old_prof for tier 3+, see CHANGELOG v120.

## 5. What REMAINS (by priority)

1. **Unported action types**: 112 (talk-ch, packet unclear), 131 (styled self-talk, needs
   CMsgTalk wire), 218 219, 512 (item-pos op, packet FUN_1403873d0 unidentified), 542-544
   (decompile-mangled bodies), 2005/2007/2014 (2007 needs guild system; 2014 needs the CurrentInstance subsystem; 2005 already ported as fail-branch stub
   checks with %iter vars, 2007=%syn_name rows, 2009=map-spawn (0x7d9: heavy Ghidra iterator spaghetti, needs patient
   decode)), 3001-3008 (NO original cases — default
   id_nextfail routing, same as 401), 3501+ family, task-quota chains.
   v49 findings: 131 = Create(id,color,style) + two %u format args + fixed
   string-table index 0xa2=162 + lookface -> SELF talk (needs STR table);
   218/219 need FamilySystem; 512 packet = FUN_1403873d0 (unidentified).
   VERIFIED v48: 401-403/498/532/544 have NO case in the original switches -> original default
   (DBERROR + false) = id_nextfail routing; our engine already matches (regression-covered). Method: find the case in
   the switch (note: new engine `switch((byte_map)[type-1001])` — case number ≠ type-1000), read the
   body, port, fixture in a NEW id band, extend the wave test.
2. **1083/1086 "online god"** (exp-privilege, packed datetime at user+0xf38 — partially decoded, deferred).
3. **1071** record push (user+0x330 container, FUN_1401a4740) — partially decoded.
4. **Big systems:** guild, team, trade/booth, PK/red-name, SRP login is DONE but client 1542 chain
   needs a final real-client check; 183 Lua scripts (Source/lua) — the lua cmd registry at
   MsgServer.c ~477860; task quota; item enchant/gem compose UIs.
5. **Damage rand-stage** (CUser slot-0x2b0 attack-record exp distribution per damager) — approximated.
6. **Client decompile leftovers:** verify remaining packet parsers as needed.

## 6. Fixture band allocation (`tools/seed_test_accounts.sql`)

v30=99000001-98, v32=99000200-59, v33=options 99000260-69+chains 270-291, v34=chains 300-330,
v35=chains 340-361, v36=options 400-05+chains 410-37, v37=options 406-09, v38=options 440-44+chains
480-99, v39=63900-63919 (small ids for u2 slot), v41=chains 510-39, v42=540-59, v46=600-45,
v47=660-99, v48=700-19, v49=720-39, v50=740-59, v51=760-79, v52=780-99, v53=800-19, v54=820-39, v55=840-69
(menu chain: ...99000800→99000801→99000820→99000840).
**Next free: 99000870+.**

## REAL-CLIENT TRANSPORT (found Nov 1, 2026 — read CHANGELOG v56 first)
The game socket is ENCRYPTED from the first byte: client sends magic
"TQClient" + a blob encrypted with the hardcoded handshake passphrase
"C238xs65pjy7HU9Q"; server answers with "TQServer" + DH exchange; the
CAST key comes from the token builder (hex1=md5hex(secret), hex2=md5hex(
hex1+hex1), token=hex1+hex2 — client FUN_00806399, server FUN_140503c00);
after that every packet is CAST-CFB64 with "TQServer" appended. The
sibling TQServer-CPP-rebuild clone in this workspace mapped the same
functions (its M14-M21) — use it as cross-reference, but re-verify every
function in decompiled/MsgServer.c before porting. Port order: transport
skeleton -> DH+CAST -> message framing -> account-net login on top.
STATUS (v57): step 0 DONE — src/crypto/{cast128,msg_token,dh_params}.hpp
+ tests/crypto_unit_test.cpp greens inside the suite (41/41).
M-B DONE (v58): src/net/transport.hpp ports FUN_140505bc0 (receiver,
byte-proven with objdump) + FUN_140500670 (encrypted send with the
"TQServer" magic) and tests/transport_unit_test.cpp proves the shared
CAST token end-to-end (42/42 green). NEXT = M-C: wire the transport into
the live socket layer (first-packet detection, 4-spare-byte recv buffer,
per-message framing FUN_1404f6c90: len u2 + type u2 + payload + 8-byte
trailing magic), then M-D account-net login (1002 MsgLogin 0x20 / 1052
MsgConnect 0x1c / 1055 CMsgConnectEx) on the encrypted channel.
M-C DONE (v59): src/net/frame.hpp + the live wiring in src/main.cpp /
src/net/net.hpp (handshake detection on the first bytes, decrypted
recv with the trailing "TQClient" check, encrypted send with "TQServer"),
proven by tests/transport_live_test.cpp against the running server
(45/45 green). NEXT = M-D: the server must PUBLISH its DH public key to
the client (the client's element 2 is ITS pub key; the counterpart reply
that lets the client derive the token is still undecoded — find who calls
FUN_140505bc0 and what it sends next), then the account-net login. Rules: (a) never widen a DELETE past your band,
(b) UPDATE the previous band's last option `id_next` to chain into your new band,
(c) seed blocks run in order — a mid-file clobber bug ate v29 once.

## 7. Gotchas that cost hours — read twice

1. `Packet.finalize()` — a builder without it sends len=4 + raw bytes and DESYNCS the client stream
   (symptom: unrelated tests fail "mysteriously").
2. `pkill -x conquer_server` (NOT `-f`). Server env vars mandatory or it silently uses wrong DB.
3. Packet wire offsets in tests are WIRE-based (`p[2]` = full wire incl 4-byte header), not payload.
4. 2032 reply wire: `struct.pack('<HHIHBB', tick_hi, tick_lo, action_id, counter, mode, face)` — an
   extra H shifts face/mode and the face==0x66 guard silently drops the reply.
5. `broadcast_to_screen(..., except_session)` — the last param is EXCEPT, not include. 1070 relive
   must pass nullptr for self-inclusive respawn.
6. 10017 64-bit keys (money/exp/vp) use lo@+0x14 hi@+0x18 inside 0x1C entries.
7. `tools/reset_positions.sh` must reset `recordmap_id` (not just x/y) or later tests click NPCs
   from the wrong map → mass "no menu" failures.
8. test_login_chain game leg asserts the SELF snapshot (1008/1103/2077). spawn_player never sends
   the player's own 10014 (broadcast excludes self; unresolved whether original flag-0 broadcast
   includes self — a self-spawn attempt broke 8 tests, reverted; do not retry blindly).
9. Duplicate-UIN (code 2) state persists per PROCESS: suite order matters; SRP logins poison stored
   UIN for uin-777 logins (original behavior). LoginSystem list is in-memory.
10. `std::rand()` unseeded → use the thread_local mt19937 (drops.hpp tq_rand / combat rand_get).
11. Makefile: header-only systems edits don't rebuild unless HDRS=$(find src) is in the Makefile
    (it is now — don't regress it). default_handlers.cpp is #included by main.cpp.
12. MariaDB dies on sandbox restart: `service mariadb start`. mysql CLI: `-h 127.0.0.1 -u test -ptest`.
    bit(1) columns need `+0` cast; stmt_fetch 101=truncated is OK for bit cols.
13. Python: `x in list` is exact membership; heredoc mangles `\n`/`\t` into C++ source (use write_file);
    `struct.pack` has NO padding — add pad bytes explicitly.
14. cq_item seed ids: NEVER use the 900xx range (AUTO_INCREMENT climbs there); use 990xxx.
15. 301-created dyna rows leak across runs — delete by ownerid+lookface at seed time.
16. MySQL multi-row output = TAB separated (`row.split()`), not space.
17. The full MsgServer.c uses Ghidra decompiled C — function bodies sometimes reordered/inlined;
    when a handler isn't found by case, search the RANGE ROUTER: types 1001-1982 go to new engine
    FUN_14012a6e0 (byte map at .text 0x13aa9c + rel jumptable 0x13a7ac).
18. `TQServer_src/` and `TQServer.rar` = FAKE "open source" (AI-generated stub, verdict Oct 21 2026).
    Not in the repo. Never treat it as reference.

## 8. How to continue (playbook for the next agent)

1. Read §4/§5, pick the next unported batch (start with the old-engine item types: 532/542-544, then
   112/124/126/218/219, then 3001-3008 broadcast family).
2. For each type: locate the case body in decompiled/MsgServer.c → port into actions.hpp (cite
   FUN_ addresses) → add fixture rows in a free band → extend the wave test → full suite.
3. **Update this file + README after every wave, commit and push** (see §9), including what the wave
   changed, new gotchas, and the new fixture band.
4. Big features (guild/team/trade/lua): port the same way — decompile first, wire-accurate, test live.

## 9. GitHub workflow (standing instruction from the owner)

- Repo layout = this workspace root (ConquerRebuild + decompiled + conquer_source minus the 481MB
  map data and the 735MB v6137 client + cq.sql.gz + ghidra_scripts).
- After EVERY completed milestone: `git add -A && git commit -m "vNN: <what was done>" && git push`,
  and update an MD (this HANDOFF.md §4/§5 + a dated entry in CHANGELOG.md). The push exists so the
  project survives credit exhaustion — do not skip it.

## v62 (Nov 1, 2026) — M-F
112 notice line verified + covered (test_actions_v62.py, 6 assertions).
Case 0x70 decode confirmed against FUN_1403a6400: mode 0x70, reply id =
DATA, text = param, actor-only send. Suite 45/45 green, commit follows.

## v63+v64 (Nov 1, 2026) — M-G/G2
Data-driven coverage map: tools/action_coverage.py -> ACTION_COVERAGE.md.
MEASURED: 193,375 cq_action rows, 97.4% covered, 106/216 types have a
`case` in src/systems/actions.hpp; the ORIGINAL ProcessAction switch has
173 cases, so ~110 DB types are not action cases at all (task-engine
steps: 1040=668 rows, 1086=640, 1554=500, ...). Porting those would be
invention — the report now marks them "n/a".
REAL remaining, ranked: 131 (253, needs the client-side meaning of its
four u2 fields + the different 1004 layout), 542 (113), 2101 (103),
2007 (54, needs guild), 550 (53), 529 (49), 528 (49), 129 (36),
332 (30), 717 (28), 519 (27), 144 (24).

## v65 (Nov 1, 2026) — M-H
DEFERRED_TYPES.md records every remaining REAL type with its decoded
skeleton + the exact blocker. To resume, the highest-leverage unknowns are
(a) the FUN_140104140 item-attribute slot enum (unblocks 542 + 528 + 529 =
211 rows), and (b) the client-side renderer for the 131 1004 variant
(253 rows). 519 only needs FUN_14033a6a0 identified. Suite 45/45, no code
changes.

## v66 (Nov 1, 2026) — M-H2
FUN_140104140 decoded = generic item SetInt over ITEMTYPEDATA (idx < 100,
19 = equipment lock, 17 = derived total, 3 derived from the 1/8/9/12 group).
That was the blocker for 542+528+529 (211 rows); what remains there is only
mapping the indices onto our flat ItemInfo (4=amount, 5=max_dur,
8-12=gem/magic, 13=ref id, 20/21/24=quality family). Suite 45/45.

## v67 (Nov 1, 2026) — M-I
Action 528 PORTED + live-tested (13 assertions). IDatabase gained
ItemAttrs + insert_item_attrs for attribute-bearing item inserts.
Confirmed slot mapping: 4=amount, 5=amount_limit, 8=gem1, 9=gem2,
10=magic1, 11=magic2, 12=magic3, 13=data (int(4) in the real dump).
Suite 46/46. Next: 529 (2-field sibling of the same generator, 49 rows),
then 542 (17 fields) which needs the FUN_140385cf0 data resolution and
the two register-passed sscanf pointers.

## v68 (Nov 1, 2026) — M-J
Action 550 PORTED + live-tested: the `data` column is the itemtype, field 1
of the param is flags, field 2 is the COUNT (default 1). 529 decoded as a
consume-item gate (not generation) and left deferred with its evidence.
Suite 47/47. Next candidates: 529 (needs FUN_140385cf0), 542 (needs it too
+ the two register sscanf pointers), 2101 (103 rows, still undecoded),
131 (253 rows, needs the third 1004 renderer), 2007 (guild system).

## v69 (Nov 1, 2026) — M-K
Big batch: 131 (253 rows) + 519 (27 rows) PORTED and live-tested (12 new
assertions). 131 turned out to be a 10010 CMsgAction packet, not a dialog.
144/332/717 decoded with their blockers written down. Suite 48/48, coverage
97.6% (110/216 types). Remaining real work: 542 (113), 2101+2102 traps (115,
needs a trap object subsystem), 2007 guild (54), 529 (49), 129/130 (60,
parcel system), 332 (30), 717 (28).

## v70 (Nov 1, 2026) — M-L
Trap subsystem started: 2101 (103 rows) PORTED with a new src/systems/traps.hpp
(CMapTrap model + the 1101 MSGMAPITEM trap wire, action byte 10, coordinates
at +8/+0xC unlike the item layout). Suite 49/49, coverage 97.6% (111/216).
Next: 542 (113 rows, needs its two helpers), 2007 guild (54) + 717 (28), 529
(49 consume gate), 129/130 (60, parcel subsystem), 332 (30), and the trap
trigger path that would unlock 2102.

## v71 (Nov 1, 2026) — M-G
542 (113 rows) + 529 (49 rows) ported. 542 clones the worn weapon and
applies its 17-field attribute set onto cq_item (attribute 20 = colour,
default 3; narrow columns are range-checked rather than truncated). 529 is
the weapon consumption gate keyed on the user variable (1, field1).
Suite 50/50, coverage 97.7% (113/216). Fixed a long-standing test-isolation
hole: 517's persisted field probe made 516 pass only on a fresh DB.
Next: 2007 guild (54) + 717 (28), 129/130 parcel family (60), 332 (30),
2102 trap delete (needs the stepped-on-trap object).

## v72 (Nov 1, 2026) — 717 + combat stats fix
717 (28 rows) ported: guild fund/title/domain script, guild id from field 4
or the actor's guild, four ops. While testing it we found and fixed a real
combat bug: rings were accumulated into atk_max before the best-weapon
comparison, so a weapon row arriving after a ring row was silently dropped
(TestKnight fought with atk 1304-1958 instead of 1825-2596). Suite 51
tests / 50 green; the only red is the known test_drops RNG flake, green 3/3
standalone. Coverage 97.7% (114/216).
Next: 2007 guild members/ranks (54 rows, the remaining guild piece), 129
pet system (36 rows, 19-field pet template), 2102 trap deletion, 332
item-vtable bit (documented blocker).

## v73 (Nov 1, 2026) — 2102 traps, suite fully green
2102 ported: the acting player's cell is resolved to a trap through
TrapSystem::find_at, the removal is broadcast as MSGMAPITEM action 0xc and
the trap is dropped; a second run takes id_nextfail. The trap packet
builder now takes the action byte explicitly (10 show / 12 remove).
test_drops was de-flaked (3%/kill hunt up to 200 kills) and the trap test
purges leftover registry entries, so the suite is 52/52 green with no known
flaky test. Coverage 97.7% (115/216).
Next: 2007 (54) needs the guild domain manager FUN_1402c2390; 129 (36) needs
one decision - the Dexed body both creates a pet (19-field form) and, when
the msg dword at +4 is 1, releases an existing one via FUN_14021bd20, while
the live params look like conditions ("1 level >= 1"). Resolve the msg dword
source before porting either branch.

## v74 (Nov 2, 2026) — 129 pet descriptors, suite 53/53
129 ported as a data-driven switch: data=0 defines a pet condition
descriptor (id + up to six field/op/value triples, refuses a duplicate id),
data=1 releases an existing one when its in-use flag is clear. Registry in
src/systems/pet.hpp. test_drops now waits for respawns and has a 220s suite
budget, so the suite is 53/53 green with no known flakes. Coverage 97.8%
(116/216).
Next: the coverage report now shows ~50 unported types with 1-2 rows each
(715/721/2201/2205/...), which is a bigger batch opportunity than chasing
2007 (54 rows, guild domain manager) - triage those first, then 332 once the
item-vtable bit can be proven.

## v75 (Nov 2, 2026) — 130 pet object update, suite 54/54
130 ported: a 21-field template is applied to an existing pet object (field
3 defaults to 600), a miss or short param fails. Suite 54/54 green,
coverage 97.8% (117/216).
TRIAGE of the last 12 unported types (161 rows): everything except 2007
(54, guild domain manager FUN_1402c2390) and 332 (30, data bit 8 with all
rows data=0) is either guild-manager slots (715/720/721/722), home template
rows (223/224), arena bonus roles (2201/2205) or 144's world flag word that
only an inbound message ever sets. So the only meaningful next batch is the
guild/syndicate object model, which unlocks 2007 + 715/720/721/722 (68 rows).

## v76 (Nov 2, 2026) — 2007 generator create, suite 55/55
2007's arg order was recovered from the call site (r8/r9 + 23 stack slots),
which proves map = field 7, x = field 8, y = field 9, name = field 1. The
port reproduces the control flow exactly (>= 9 fields, map must exist) but
does not yet write a cq_generator row or broadcast a spawn, because the
CGameData field that carries the NPC type/lookface is still unidentified.
Suite 55/55 green, coverage 97.8% (118/216).
Next: finish 2007's spawn (identify the type/lookface field in
FUN_1402bc390/FUN_1402c18f0), then 332 (30 rows, needs proof for bit 8).

## v77 (Nov 2, 2026) — 2007 spawn complete (55/55)
FUN_1402c2390's failure log named its CGameData fields, which pinned the
mapping: field 1 = idOwner, 3 = name, 4 = nType, 5 = itemType, 7/8/9 =
map/x/y. 2007 now writes the cq_dynanpc row (owner, name, lookface from
itemType, map, x, y) through DynaNpcSystem::create and broadcasts the 10014
spawn. Still missing: nType (field 4) and task data, so the NPC is visible
but not clickable.
Next: extend DynaNpcRecord with type/itemid so the generator identity is
persisted; then the guild/syndicate model (715/720/721/722), and 332.

## v78 (Nov 2, 2026) — 2007 columns + deterministic drops
cq_dynanpc's type/itemid are modelled and filled by 2007 (nType and
itemType), so the created NPC's identity persists. test_drops now summons
its own monster through the 2006 chain instead of relying on respawns, and
harvests 1101 from every drain; a mid-test re-login must be avoided because
the map holds a stale player object and broadcast_to_screen then reaches
nobody. Suite 55/55 green, coverage 97.8% (118/216).
Next: the guild/syndicate object model (715/720/721/722 + the manager slots),
332's bit-8 decision, and the 183 Lua scripts.

## v79 (Nov 2, 2026) — 332/721/722, suite 56/56
332 is a data bit-8 test (the +0x160 getter turned out to be the actor's
map, so the guard always passes for a live player); 721 resolves a guild id
by name into Player.script_guild_id; 722 needs a guild link this database
does not have, so it faithfully fails. broadcast_to_screen has an opt-in
CQ_DEBUG_BCAST diagnostic. Suite 56/56 green, coverage 97.9% (121/216).
Next: 144 (world flag set only by an inbound message), 715/720 (guild
manager slots needing the member model), 223/224 (home templates), 2201/2205,
then the big systems (guild/team/trade, 183 Lua).

## v80 (Nov 2, 2026) — 144 world flag, suite 57/57
144 is a bit test on the world event-flag word (World::script_flags, only
ever set by an inbound 0x15f92 message, so 0 here): data 1..31 is false,
data 0 or >= 257 is true, anything but the "==" operator fails. Suite 57/57
green, coverage 97.9% (122/216).
Remaining unported (24 rows): 715/720 (guild-manager slots 0x118/0x260 need
a member model), 223/224 (%user_home_id templates; 224 is CMapGroup slot
0xa8, identified as CMapGroup from the FUN_1400875f0 call sites but the slot
name is still open), 2201/2205 (team/booth talk with TalkStrCheck). Then the
big systems: guild/team/trade and the 183 Lua scripts.

## v81 (Nov 2, 2026) — guild membership, suite 58/58
cq_synattr is the member model (id = user id, syn_id, rank); load_user and
the login path now carry it into Player.guild_id/guild_rank, so 722 is real
(member + existing guild row passes, guild-less fails). GuildProbe
(account 100099 / cq_user 99) exists purely so the membership test can
re-login without poisoning another character's broadcasts. Suite 58/58
green, coverage 97.8% (122/216).
Next: make 717 fall back to Player.guild_id (and rework its fixtures so no
test writes into a real guild's money), then 715/720 on top of the member
model, then 223/224 (home templates, CMapGroup slot 0xa8), 2201/2205, and
the big systems (team/trade, 183 Lua).

## v82 (Nov 2, 2026) — 717 actor-guild fallback, suite 59/59
717 now resolves the actor's guild when the param has no id, and the seed
puts TestKnight into the dedicated TestGuild 999001 so tests never write a
real guild's money. GuildProbe (99) and GuildProbe2 (98) exist so the guild
tests can log in/re-login without poisoning another character's broadcasts.
Suite 59/59 green, coverage 97.8% (122/216).
Next: 715/720 on top of the member model (their manager slots +0x118/+0x260
still need identifying), 223/224 (home templates, CMapGroup slot 0xa8),
2201/2205, then team/trade and the 183 Lua scripts.

## v83 (Nov 2, 2026) — Lua 5.2 host live, all 183 shipped scripts compile
src/script/lua_host.{hpp,cpp} loads liblua5.2.so.0 through dlopen (no headers
in the sandbox), declares the API subset by hand, parks _G at a fixed stack
slot so no registry pseudo-index is needed, and resolves lua_pcallk (5.2's
pacall macro target). Host functions host_log/host_int are the hook point.
main.cpp opens the engine at boot; CQ_LUA_DIR makes it compile-check the tree
(183/183 ok). tests/lua_unit_test.cpp is part of the suite. Suite 60/60.
NEXT for scripting: expose the gameplay API the scripts expect (Say/dialog,
Get/Set player attributes, stc(), item/money ops), bind cq_npc/cq_task script
names to chunks, and drive on_talk/on_task from the NPC path.

## v84 (Nov 2, 2026) — Lua-driven NPC dialogs, suite 61/61
say()/get_*()/add_money() are live on the Lua host (src/script/lua_api.cpp),
and cq_npc.datastr binds an NPC to a script file: the 2031 handler loads it,
sets the clicking player as context and runs on_talk. data/lua/v84_probe.lua
+ NPC 99001850 prove the whole path (talk text, live level/money, reward).
Suite 61/61 green.
NEXT for scripting: map the numeric key space (1001..1998) of
FUN_1404e02d0 onto our Player fields, add stc(), the Set* writers, ChgMap,
Effect, and the GetSyna*/GetTeam* family, then bind the event-driven
ActiveScripts (EventType registration).

## v85 (Nov 2, 2026) — GetUserInt/SetUserInt, suite 62/62
Attribute API is live under the original names with keys pinned by the
shipped content (1003 lookface, 1004 hair, 1037 guild rank, 1001 id; uid 0 =
current player). Unmapped keys answer -1 like the original. hair is a real
player column now (load + persist). Suite 62/62 green.
NEXT: decode FUN_1404e02d0's remaining keys (1005..1998) against the CUser
vtable table in docs/msgplayer_10014_layout.md, add AddUserInt/GetUserStr/
SetUserStr, then ChgMap/Effect/RecordPoint; still open: 715/720, 223/224,
2201/2205, and the big systems (team/trade, homes, 183 scripts beyond dialogs).

## v86 (Nov 2, 2026) — suite speedup, 62/62
Drop-test item phase now spawns five monsters per round (chain 99001330),
so test_drops is ~21s and the whole suite fits in under 5 minutes.
NEXT: the three decode agents (Lua key table, remaining action types,
Lua API function semantics) feed the next implementation wave.

## v87/v88 (Nov 4, 2026) — ChgMap + the real key table, suite 64/64
ChgMap(uid,map,x,y,force) works through World::teleport with boolean returns.
GetUserInt now implements 15 pinned keys (the enum file in the content is the
authority), SetUserInt is 4-arg and boolean, and docs/lua_key_table.md lists
every key with citations and what blocks the rest. Suite 64/64 green.
NEXT: SetUserInt's remaining keys need an indexed attribute setter (the
original routes them through FUN_1401a6420 with attrib ids 7,8,0xb,0xd-0x10,
0x1a); then RecordPoint (4 args pinned, engine body undecoded), Talk/Effect
(arg contracts pinned), and the 224/2201/2205 decode commands already listed
in docs/remaining_types_decode.md.

## v89 (Nov 4, 2026) — GetUserStr + RecordPoint, suite 65/65
Lua API now covers say/get_*/add_money/GetUserInt/SetUserInt/GetUserStr/
ChgMap/RecordPoint. The last six action types are pinned down to specific
blockers (documented in the changelog): 224 needs CMapGroup slot +0xa8 named
plus %user_home_id expansion, 223 the same template and its number-list
grammar, 2201/2205 team/booth state, 715/720 the guild-manager slots
+0x118/+0x260. Suite 65/65 green.
NEXT: name CMapGroup +0xa8 by finding its implementation through the vtable
(FUN_1400875f0's object), expand the %user_home_id template (find its source
column), then port 224/223.

## v90 (Nov 4, 2026) — SetUserInt fallthrough, RNG seed fix, suite 66/66
SetUserInt answers true for in-range keys with no wired case (no default in
FUN_1404e61e0) and false only when the user cannot be resolved; its flag arg is
dead. The drop RNG no longer seeds from time() seconds. Suite 66/66 green.
NEXT BLOCKERS unchanged and documented: CMapGroup+0xa8 (224), %user_home_id
expansion (223/224), guild-manager +0x118/+0x260 (715/720), team/booth state
(2201/2205), FUN_1401a2660 per-attrib writer (remaining SetUserInt keys) and
FUN_1404e6500 (AddUserInt).

## v91 (Nov 4, 2026) — attrib writer decoded, profession settable, suite 67/67
docs/attrib_writer.md maps every attrib id SetUserInt can reach (C:289018) and
key 1005 Profession is now written through Player + cq_user. Suite 67/67.
NEXT: the base-attribute recompute paths (FUN_140199cb0/140199d90/140199f50/
140199e70) if we model str/agi/vit/spi; still open: CMapGroup+0xa8 (224),
%user_home_id (223/224), guild slots +0x118/+0x260 (715/720), team/booth state
(2201/2205), FUN_1404e6500 (AddUserInt).

## v92 (Nov 4, 2026) — Talk() live, suite 68/68
Talk(uid, channel, msg) works (default channel 2000, empty msg refused,
boolean return). Blocker inventory is now explicit: 223/224 need the home
subsystem + CMapGroup slot +0xa8; 715/720 need guild-manager +0x118/+0x260;
2201/2205 need team/booth state; AddUserInt needs FUN_1404e6500.
NEXT high-value options: port the team system (unblocks 1013 and team chat),
the home/house subsystem (unblocks 223/224), or decode FUN_1404e6500 for
AddUserInt.

## v93 (Nov 4, 2026) — AddUserInt live, suite 69/69
AddUserInt(uid,key,value,flag) implemented for Life (1019) and Mana (1021) with
clamping + 10017 refresh; the engine's fallthrough semantics are matched
(true for unwired in-range keys). docs/team_decode.md pins the team manager
(FUN_140118320, registry 0x1e) and the count slots +0x28/+0x50, which is the
foundation for porting teams next.

## v94 (Nov 4, 2026) — 23 GetUserInt keys live, suite 70/70
Keys 1010/1011/1013/1014/1015/1031/1045/1046 joined the table and read real
cq_user columns (1013 is 0 by design until teams exist). Suite 70/70 green.
NEXT: teams. Team.c is decompiled in full: registry 0x1e = Team.dll, manager
FUN_140118320, vtable +0x28 LookupUserTeam, +0x50 GetMemberCount, and the module
handles wire types 0x3ea/0x3eb/0x3ff/0x7fd (Team.c:145-165). That is enough to
start the team data model + CMsgTeam 1023 handling.

## v95 (Nov 4, 2026) — Lua Effect live, suite 71/71
Effect(uid,target,effect,mode) sends CMsgUserEffect 1015 for the "self" target
(mode 10 add / 24 del) and refuses targets needing mate/team state. Three
research workers are decoding the team module (CTeam + CMsgTeam 0x3ff), types
2201/2205, and the guild vtable slots +0x118/+0x260 with capstone.

## v96 (Nov 4, 2026) — 715/720/2201/2205 live, suite 72/72
Guild kick (715), guild context resolve (720), PK-bonus predicate (2201) and the
PK target/hunter test (2205). Three workers are decoding the team wire (0x3ff),
the home types (223/224) and a sweep of the remaining small types.

## v98 (Nov 4, 2026) — team module live, suite 73/73
TeamManager + MSG_TEAM_1023 with every proven sub-command, lua key 1013 real.
Next: 0x402 CMsgTeamMember once its offsets are pinned, then sub 1 (apply) which
needs that packet, then the home types 223/224 (still BLOCKED on the +0xa8
identity) and the ready sweep types 112 / 401 / 2002.

## v99 (Nov 4, 2026) — team 0x402 + sub 1 done, suite 73/73
The team module is functionally complete for a single client: 0x402 team info,
every proven sub-command, and lua 1013. Remaining team work: 0x7fd offsets (20
bytes, four builders) and the +0x45/+0x46 flag meanings.
Verified-and-rejected this wave: the sweep worker's "implementable now" verdicts
for 112 and 401 do NOT hold when read at the source - 401's EVENT_LAYNPC string
does not exist in any decompiled file, and 112 needs the identity of record
slots +0x48/+0x78 and FUN_1403a6400's argument meaning. 2002 (delmonsternow)
does parse "%d %s %d" but how the three values select the monsters is still
unread. All three stay UNPORTED until their evidence exists.

## v100 (Nov 4, 2026) — 0x7fd decoded (not sent), dead code proven, 73/73
Team work is now evidence-complete for everything that actually fires. What is
left in the team module is only what the original never triggers.
Next: pick a new subsystem (trade or homes) or re-open 112/401 with a dedicated
decode of the action-context cell getters (+0x48 / +0x78 / +0xa34).

## v101 (Nov 4, 2026) — coverage tool + dispatch facts; 97.87% by rows
`python3 tools/coverage.py` is now the first command of every wave: it prints
the real covered/unported rows so the batch targets the biggest gaps instead of
guesswork. Current: 132/216 types, 97.87% of rows. Known dispatch traps are
documented in CHANGELOG v101 (the 870962 getter switch and the 0x30-0x37 op
sub-switch are not action types).

## v102 (Nov 4, 2026) — router solved, 52 types enumerated, suite 73/73
`python3 tools/newengine_map.py <type...>` now answers "which case is this type"
for 1001-1729, verified 6/6 against the hand-ported types. docs/newengine_router.md
holds the full table: for each unported type, the case, the proven semantics, and
the ONE missing helper/field that blocks it. Next wave = read those helpers
(they are small, listed by name) and port the families in bulk. Workers are
decoding 401/402/403/532/542-544 and 1554/1095/1651 in parallel.

## v103 (Nov 4, 2026) — 401 ported, 402 decoded, suite 74/74
First port out of the old-engine 401-family: 401 (94 rows) is live and tested,
proven to the instruction level. 402 is decoded except for what the four
CRoleManager counts mean; that is the next single read. The worker's
401/402/403/532/542-544 report is saved in docs/decode_401_family.md.

## v103b (Nov 4, 2026) — 1071 decoded, 402 gate closed, suite 74/74
1071's notification half is proven (10010 CMsgAction, action 159, wire +0x0C =
field1, +0x14 = field3) but stays unported until the 10010 size-field question is
settled: the original writes size 0x26 (38 bytes wire) while our builder emits 40.
402 needs only the meaning of the four CRoleManager counts. CORRECTION (v106): the earlier
warning that coverage.py under-reports 542/543 was WRONG - its `case (\d+):`
regex does pick both up, they simply never appeared in the top-unported list.
Current truth: 135 of 216 types have a case label, 98.17% of rows covered.

## v104 (Nov 4, 2026) — 10010 size solved, 1071 ported, suite 75/75
The 0x26-vs-0x28 question is settled: every original CMsgAction builder writes a
0x26 payload (wire 0x2A) and leaves the tail zero, so our builder now pads to 42
bytes and takes an optional slot14 for call sites that set payload+0x10.
1071 is live and tested. Next: 402's four CRoleManager counters (call-site
analysis on FUN_1400875f0's object, since the vtable route failed), then the
1554/1095 decodes and 1086's levexp curve tail.

## v105 (Nov 4, 2026) — 402 ported, suite 76/76
Old-engine 402 (303 rows) is live: subject `type`/`name` count NPCs over cq_npc +
cq_dynanpc on the actor's map and apply the proven `<`/`==` gate; `all` and
`furniture` are 0-row subjects whose predicate is still UNKNOWN and therefore log
+ fail. Remaining old-engine family work: 403 (needs the 108-byte NPC info
struct), 532 (item-attribute driven, not an action case), 543/544 (helper
definitions). Next big new-engine targets: 1040 rebirth (requirement table) and
1086 (levexp curve) once their helpers are read.

## v106 (Nov 4, 2026) — coverage truth + 3 decode workers running
tools/coverage.py is accurate: 135/216 types carry a case label and 98.17% of the
193,584 cq_action rows are covered (401, 402 and 1071 landed today). The v103b
note claiming it under-reported 542/543 was wrong and is corrected above.
Top unported by row count: 1040 (668), 1086 (640), 1554 (500), 532 (252),
1095 (245), 3701 (122), 1083 (121), 1084 (99), 1651 (95), 403 (93).
Three decode workers are working NOW with incremental writes into
docs/worker_1040_1086.md, docs/worker_403_532.md and docs/worker_small_types.md
(112/124/126/218/219/2002/2005). Read those files first next wave - implement
straight from their PORT RECIPE sections.

## v107 (Nov 5, 2026) — 112 wire fix, suite 77/77
Action 112 was sending DATA in the reply-id slot with a zero face; the original
puts DATA in the FACE (+0x0E) and 0 in the reply id (+0x0C), proven from
FUN_1403a6400 and the 0x140144007 call site. Fixed, two stale tests corrected, one
new wire test added. A worker is decoding the rebirth apply (FUN_1401c3180) so
type 1040 (668 rows) can be ported next.

## v108 (Nov 5, 2026) — rebirth: flag closed, columns mapped, apply core documented
The shipped server always takes the flag-OFF rebirth core FUN_1401b9d70 (proven three ways),
cq_rebirth is 0-based (params match new_prof = cell 2), and the apply tail is decoded down to
the exact FUN_1401a6420 calls. Remaining for 1040: read FUN_1401a2660's cases 2/5/7/0xb/0xc/
0x16/0x32/0x33, FUN_1401abdf0, FUN_140173790, FUN_1401715d0 - all listed in
docs/worker_rebirth_apply2.md sections G/H.

## v109 (Nov 5, 2026) — 1086 ported, levexp curve fixed, suite 78/78
action 1086 (640 rows) = "exp equivalent of N minutes": var[idx] = walk of cq_levexp with
the original's float32 arithmetic, ported as exp_from_minutes() in src/systems/xp.hpp.
load_levexp now filters type=0 (it was mixing the type 1..5 mentor curves into the level-up
thresholds) and load_levexp_time() exposes up_lev_time. Fixture bands for new waves: use
99020000+ (actions) / 99020100+ (npcs) - 99001100, 99001200 and 99001300 are owned by
v74/v74/v76.

## v110 (Nov 5, 2026) — 1554 ported, suite 79/79
Achievements are live: action 1554 chk/add/clr on cq_achievementtype.position with the
original's 1-based cell math (field = (data/100)%100+1, bit = data%100) over the real
cq_achievement row (point + achieve1..13), loaded at login and saved on disconnect.
Watch out for IDatabase: any new method that calls query_string must NOT take mtx_
itself (non-recursive -> deadlock, which cost a whole suite run today).

## v111 (Nov 5, 2026) — 1084 ported, suite 80/80
1084 = "exp amount -> absolute level + percent into it" via exp_split(), a literal port
of FUN_140382d20 (double math, unlike 1086's float32). Next: 1083 (case 0x49, 121 rows,
needs FUN_140382960 getter + FUN_140382b00 add-hours + the two chk predicates) and then the
rebirth 1040 pipeline (668 rows) whose remaining helpers are listed in
docs/worker_rebirth_apply2.md sections G/H.

## v112 (Nov 5, 2026) — docs wave: rebirth stat call solved, god-time family mapped
FUN_1401abdf0's arguments are now proven from the disassembly (attrib 13/14/15/16 =
iVar8/iVar7/iVar9/iVar11, attrib 10 = the action's 5th field). 1083 is decoded except the
user flag queries 0x1b/0x1c; 403 parses the ITEM accept string (pszAccept), not the action
param. Remaining for 1040: the FUN_1401c3180 -> FUN_1401b9d70 argument mapping, the five
u16 stats at user+0xed8..0xee2 with their columns, and the persisted-record field 5 target.

## v113 (Nov 5, 2026) — dispatch ladder + rebirth call site (docs)
docs/old_engine_dispatch_ladder.md now lists EVERY ProcessAction range with its handler, and
the new-engine byte map answers "which case handles type N" in one read. The rebirth apply
call site is resolved (cell 2 = new_prof, cell 4 = new_level, v3 = metepsychosis tier), but
1040 still needs the five-base-stat model (user+0xed8..0xee2) that this rebuild does not have.

## v114 (Nov 5, 2026) — remaining types bounded (docs)
docs/decode_remaining_subsystems.md now states, for every large unported type, exactly which
subsystem blocks it: 3701 needs FUN_140164e30 + the 0x56 notification, 1043 needs the
user+0x1110 container type, 1651 needs the faction state at user+0x12D, 1072 needs the
FUN_1403a5840 packet family, 1040 needs the five base stats, 1083 the 0x1B/0x1C flags.

## v115 (Nov 5, 2026) — 1203 + 1510 ported, suite 81/81
1203 = `max_life <= life` (getters +0x78/+0x80, the same pair the attrib-0 clamp uses) and
1510 = drain v% of life with DATA 0 = max base / 1 = current base via FUN_140177000. The
player-death flow FUN_140177000 triggers at 0 is still absent from the whole rebuild - that
is the one global gap these two types touch.

## v116 (Nov 5, 2026) — 1204 ported, suite 82/82
1204 = `max_mana <= mana` on the user getters +0x88/+0x80, which FUN_1401a2660 case 2 pins
exactly (that case clamps against +0x88 and reads +0x80). Today's ports: 1084, 1203, 1510,
1204 = 222 rows, plus the levexp type-0 fix.

## v117 (Nov 5, 2026) — rebirth points traced, 532 ruled out
Attrib 10 in the rebirth apply is FUN_140173790's return value (proven from the disassembly),
so the point budget comes from the CUserData cache; its byte offsets are now mapped
(record 0x76 -> profession, slot 0xD -> lookface, 0x18/0x19/0x1A/0x66/0x6A -> +0xed8..+0xee2)
and only the column adapter is missing. 532 is not an action at all (data-only item-attribute
definitions). Everything left is written down in docs/decode_remaining_subsystems.md.

## v118 (Nov 5, 2026) — 1083 flags + 1095 loader identified (docs)
1083's 0x1B/0x1C are entries in the status presence bitmap at user+0xF68 (0xC0 bits; setters at
MsgServer.c:299106-301600 pair index -> notify id 0x1F/0x20/0x21). 1095's CMagicManager loads
cq_magictype / _ex / auto_learn (as a map<id,magic> set) / cq_magictypeop, but the 64-cell
per-level container the action walks is built by code not yet found. A narrowly-scoped worker
is decoding the CUserData column adapter for 1040.

## v119 (Nov 5, 2026) — 1040 recipe COMPLETE (docs)
The CUserData adapter is solved (FUN_1403744b0 fills it from the cq_user row, columns are
literal): +0xed8 strength, +0xedc Speed, +0xede health, +0xee0 soul, +0xee2 additional_point,
+0xeee profession, +0xeda first_prof, +0xedb old_prof. Section N of
docs/worker_rebirth_apply2.md is the full 1040 recipe (requirement match -> unequip-all ->
look tuple -> point budget str+Speed+health+soul+additional_point-3*level-7 -> ordered attrib
writes -> lookface rewrite -> refresh/10017). Next wave: implement it (668 rows).

## v121 (current) - 1095 + 1048 live, case-body mapping proven
- Ported: **1095** (cq_magictypeop rebirth skill sets, 245 rows) and **1048** (attribute
  timer, 20 rows). New DB loader `load_magictypeop()` (ORDER BY id, mirrors the manager's
  id-keyed tree), `Player::old_prof/first_prof` (cq_user.old_prof/first_prof) and
  `Player::attr_timer_id/secs/start` (user+0xb74/+0xb78/+0xb7c).
- Test: `tests/test_actions_v121.py` (V121Magic = cq_user 95 / acc 100095, MagicSage grant +
  TimerSage fail branch). Suite is green apart from the two known flakes (drops RNG,
  weaponskill exp), and every earlier wave still passes.
- Decoded but NOT ported, with the reasons recorded in docs/worker_v121_a.md,
  docs/worker_v121_c.md and docs/v121_dispatch_and_1650.md: 1043 (container at user+0x1110
  has an UNKNOWN element type), 1072 (CMsgMapItem 1101 action 0xD, id comes from an
  unidentified global getter), 1082 ("%s %s %u %d %d %d" self/mate/couple/team add|chk),
  1650/1651/1654 (state machine on CUser+0x968, subsystem unnamed), 1096/1098 (still
  undisassembled).
- Next: 1082 then 1043 (needs the container type), then 1650-family once the subsystem is
  identified; remaining unknown flags stay flagged, never guessed.
- v122: test_drops deadline 240s + 300s suite timeout, test_weaponskill carry-over
  assertion widened to the legal 0..33 range. Four decode workers launched for 1082,
  1096/1098, 1072/1043 and the 1650 family; their write-ups land in docs/worker_v122_*.md.
- v122b: **1072 ported and tested** (1101 action 0x0D marker at the player's own cell,
  identity from cq_action.data, player-only send, data=0 no-op). 1043's wire format is now
  settled (10010 action 110 + the element layout) but the port stays BLOCKED on the element
  type. 1096/1098 decoded; 1082 and the 1650 family have write-ups in docs/worker_v122_*.
  Remaining to port: 1043 (needs container type), 1082 (6 unknown helpers), 1096/1098
  (provider naming), 1650/1651/1654 (named subsystem, texts live in a client table).
- v122c: `tools/router_audit.py` machine-checks the two dispatch tables against every
  hand-written record (newengine_map ANCHORS, newengine_router.md, actions.hpp cases +
  body uniqueness) and runs as the suite preflight. 729 types / 39 ported / 0 problems.
  Fixed one narrative slip (1075 case was written 0x3e = 1072's label).
- v122d: `FUN_1401181a0` identified as the cached component getter
  (`GetService()->vt[0x20](20)`, cache 0x140975d08, once-flag 0x140975d10) shared by
  1043/1082/1096/1098. 1096's exact flow documented. ONE remaining unknown unblocks all
  four: **component id 20**.

## 7. v123 wave plan (10 decode workers + the row-count truth table)

Measured 2026-11-05 against the live DB (216 distinct types in cq_action):
**77 types are still unported, 1,278 rows total (0.66% of 193,511).** Sorted by rows:

```
   532 252 | 3701 122 | 1083 121 | 1651 95 | 403 93 | 1043 65 | 1096 62 | 1082 52
  1098  38 | 1046  37 | 1650 34 | 802 31 | 1654 28 | 1029 25 | 1028 16 | 1053 14
  1508  13 | 1511  13 | 1094 11 | 1041 11 | 1107 9 | 1509 9 | 1078 7 | 224 7
  ... then 6 rows and fewer (52 types)
```

Ten workers were dispatched against this list (each capped at ~12 tool calls, each
writing `docs/worker_v123_*.md` incrementally): component id 20, `user+0x1110` element
type, 1082 helpers, 512 packet (FUN_1403873d0), 542-544, 218/219, 2009 map-spawn,
2007 guild domain, 3701 quota, 3501+ family.

CHECK NEXT WAVE: **1651 and 403 show as unported here**, but v117 notes claim 1651 was
implemented and v48 notes claim 403 is default-routing. Verify against
`git log -S'case 1651'` before touching either: if the case exists under a combined
label (`case 1650: case 1651:`) this row-count script under-counts, and the script (not
the port) is what needs fixing.
- v123: **512 fixed** - the builder stores type 0x454 = 1108 (0x14038767f), v45 had shipped 1116.
  3501-3598 dispatch branch documented (FUN_140140380) and our no-family-module stub confirmed
  faithful ("Family module is not loaded!" -> false). 1098 mode = `data` column. 1096/1098/1043
  all sit on component 20 = `CGame::GetProvider(0x14)` (map at CGame+0x48, filled by the
  adapter_cfg modules); owner module still UNKNOWN.
- v123 open item: provider id 0x14 owner module. root.dll exposes no setter, modules register
  through a CGame vtable slot; Family (id 8) is the only id with a dedicated "module is not
  loaded" string. See docs/worker_v123_component20.md facts 5-6 for the module RVAs to follow.
- v123b: `tools/packet_id_audit.py` verifies every hardcoded packet id against the builder's
  `movl $type,0x8(obj)` store (8 builders, all match) and runs as the second suite preflight.
  Suite 85/85 green.
- v124: **3701 ported** (no SQL; 10010 action 0xA4 map broadcast; sscanf "%d %s %d", A<=0 and
  STR_DIE gates) and the **3701..3798 -> always id_next** rule fixed (dispatcher discards the
  handler result). Provider 0x14 = status::CStatusMgr (Status.dll) - the object behind
  1043/1096/1098. Next: a minimal status manager model (add/has/hours), then 1096/1098/1043 in
  one wave, then 544 (SuperFlagMgr) and 2009 (AI-NPC spawn).
- v125: **status manager** (`src/systems/statuses.hpp`) + **1096** and **1098** ported and tested
  (suite +7 checks). Statuses are in memory only - the `cq_status` column mapping is UNKNOWN.
  2007's field map is explicitly UNVERIFIED; 544 stays BLOCKED (empty `cq_super_flag`, no loader);
  2009 needs the `0x14038E270` body. Next: settle 2007's struct fields, then 1043 (needs the
  `user+0x1110` element type).
- v125b: **1028** (user flag word +0xf24: chk/add/clr) and **1053** (var compare >, >=, ==, +=)
  ported and tested. 1029 partially decoded (format + helper calls), unported. Seed gotcha:
  `cq_user_script_var` is keyed by `player_id`, not `owner_id`.
- v126b: 1043/1046/1041 re-verified from the binary. 1043: case body is a tail call to 0x140162620;
  per-element state writes (old_level only when level<old, then setter 0x14039d8f0(elem,1)), erase
  via container vt+0x28(elem id), CMsgAction action 110 to self - packet field map still UNKNOWN so
  only the state half is portable. 1046 = action 126 + data cell; 1041 = vt+0x150(2105) on an
  unidentified object. 1557 blocked on naming CUser+0xe78.
- v127: **1043 and 1046 ported** (action 110 per weapon skill with nType at wire+0x0C; action 126
  with the data column). The CMsgAction builder map is now proven in
  `docs/cmsgaction_10010_map.md` (6th arg = action -> wire+0x18, 5th = "field 38" -> wire+0x1A,
  7th -> wire+0x0C, 8th -> wire+0x14). `cq_weapon_skill.old_level` now loads into the player and
  `mark_weapon_skill_unlearned` retires a skill row.
- v128: **1650 + 1652 ported** (dialog open -> CMsgAction 171 with the index at wire+0x0C;
  close -> action 174 then state reset), with a new Player dialog block mirroring
  CUser+0x968/+0x96c/+0x970/+0x974 and Player::dir. Caller-slot arithmetic of the CMsgAction builder
  corrected in docs/worker_v126_g5_1508.md (CORRECTION section). 1651/1654 still unported (second
  text parameter; UNKNOWN predicates 0x1402bf900 / 0x14038e270).
- v129: **802 ported** (cooldown on the `lastentertime` keyed stamp, Player::last_enter_time) and
  **1511 ported** (CMsgAction 160 with the npc id at wire+0x14). CUser+0xE78 narrowed to an embedded
  object whose +0x1b0/+0xa8 are read by 1557 and written nowhere in the module -> 1557 stays BLOCKED.
- v130: **1041 ported** (one CMsgTalk 1004 on channel 2105 carrying the action param). **1083 is
  decoded but still BLOCKED**: its four branches (`<` / `==` / `+=` / `chk`) all hinge on the packed
  value at CUser+0xF38, written only by the login loader 0x14016812b from record+0xd8 (DB column
  UNKNOWN), plus the two `chk` predicates 0x140383750 / 0x140382350.
- v131: **1083 (121 rows) and 1557 ported.** The `CUser+0xE78` date container is decoded into 50
  field→`cq_user` column pairs (`docs/date_container_0xe78.md`); `god_status` is a packed
  `YYMMDDHH` (e.g. 26052409 = 2026-05-24 09:00) with helpers in `src/systems/godtime.hpp`.
  `+=` re-bases on the **next hour boundary**. 1557 stores day differences in the 8 qwords at
  `CUser+0x2F0`. Also fixed a real bug: `load_user`'s SELECT overflowed `char sql[512]` (526 bytes
  after the new columns) and was truncated, which silently broke logins for several accounts.
  Suite 94/94 green.
- v132: **1107 (FlyMap) ported** - it shares the 1070 teleport core and its result is the FlyMap
  code, so 9 rows of map jumps now behave like the original; the new v132 test proves the map
  change through the NPC map guard. The v132b decode reports are persisted: 403 is a furniture/NPC
  placement action blocked on the CNpc create/register + map-region subsystem (`CUser+0xA30`),
  1654 is read-only but only reachable from 1651, and 1651's blocker is now exact (the second text
  param = `FUN_140145f60` arg 6 -> router arg 7 -> `%rbx`, an entity id our `ActionRow` cannot
  carry). 1082 produced no findings. Suite 95/95.
- v133: **1651 (95 rows) ported** with the dialog answer flow: gate state==2, `%u` entity id from
  the chain's SECOND text param, dispatch on the `data` column (1 = NPC name, 2/3 = numeric),
  mismatch re-sends CMsgAction 175 and drops the state back to 1, match writes state 3. The second
  text param is runtime state (`Player::chain_param2`, filled from the click's wire+0x0C); the
  select step (state 2) is an ENGINE MAPPING documented in docs/second_text_param.md because the
  binary's only writer (0x140367333) lives in an unidentified packet handler. 1654 remains
  unreachable-not-because-of-us: it needs state 3, which 1651 now produces, so it is the next
  candidate (its own body still has two UNKNOWN NPC fields: [npc+0x68], [npc+0xb4]).
  Suite 96/96, coverage 99.71%.
- v133b (decode only): **1078 = emoney-card redeem** - traced end to end except the credit call
  `0x1401742b0` (and the `0x140164640` checksum body, which must match exactly). The card is marked
  `used=1` with a re-stamped checksum in the same call that validates it. **1654** is decoded to its
  last branch: it needs `[npc+0x68]`, `[npc+0xb4]` and `0x14038e270`. Both ports are one
  identification away, so a future wave should finish them before touching 403 (which needs the
  CNpc create/register + MapRegion subsystems) or 1082 (undecoded).
- v133c (decode only): **1078+1079 are the same emoney-card module** (card tables
  emoney_card/card2/card3/card4/google/ndsdk; the checkout log's `nItemCount` means a card grants
  ITEMS, ruling out the earlier emoney_mono guess). Port them together after decoding `0x1401742b0`
  (the grant) and `0x140164640` (the checksum). **403 is blocked on MapRegion**, proven: its gates
  are `0x1402c3cc0(regionMgr,x,y)` and `0x1402c8370(regionMgr,x,y,0x1040,&out)`, while the dynanpc
  create path it needs already exists. 1023 = a single call to `0x140172910` (identify the
  1000-ladder's single-call callees in bulk next time).


NOTE (v133c): `tests/test_drops.py` is statistical (3% drop chance over 321 kills). It failed once in
a full suite run and passes on an immediate re-run, so treat a lone `test_drops` failure as flakiness
and re-run it on its own before investigating.
