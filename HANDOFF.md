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
  501 502 503 543 9001 2008 2010 2011 2012 2013 506 509 510 511 513 516 517 518 1001 1003 1004 1005 1020 1021 1022 1026 1027 1030* 1064
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

## 5. What REMAINS (by priority)

1. **Unported action types**: 112 (talk-ch, packet unclear), 131 (styled self-talk, needs
   CMsgTalk wire), 218 219, 512 (item-pos op, packet FUN_1403873d0 unidentified), 542-544
   (decompile-mangled bodies), 2005-2007/2009/2014 (guild-war/syn entity family: 2006=multi-cond batch
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
v47=660-99, v48=700-19, v49=720-39, v50=740-59, v51=760-79, v52=780-99 (menu chain: ...99000760→99000761→99000780→99000781).
**Next free: 99000800+.** Rules: (a) never widen a DELETE past your band,
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
