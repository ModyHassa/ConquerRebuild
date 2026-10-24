# ConquerRebuild

Open-source rebuild of the Conquer Online v6159 server, ported logic-for-logic from the
original decompiled binaries, wire-accurate against the original v6159 client.

**Status: v47 (Oct 24, 2026) — 32/32 live regression tests green.**
Read **[HANDOFF.md](HANDOFF.md)** first: full methodology, ported/remaining lists, gotchas, and the
playbook for continuing the work. Arabic TL;DR at its top.

## Repo map

| Path | Contents |
|---|---|
| `ConquerRebuild/` | The rebuilt C++ server (src, Makefile, tools, tests, docs) |
| `decompiled/` | Ghidra decompile output: MsgServer.c (59,726 fns), Conquer.c client, other modules — THE reference |
| `conquer_source/` | Original source drop: MsgServer.exe + DLLs, patch/Conquer.exe (client), AccountServer (.NET, SRP6), ini/lua (183 scripts), cq.sql.gz (real original DB dump — gunzip and import into MySQL, db `cq`). map/ data and the v6137 client installer are excluded from the repo |
| `ghidra_scripts/` | Analysis scripts used during decompile |
| `HANDOFF.md` | Complete project state + how the work is done |

## Quickstart

```bash
gunzip -k conquer_source/cq.sql.gz
mysql -u root -p -e "CREATE DATABASE IF NOT EXISTS cq"
mysql --max-allowed-packet=512M cq < conquer_source/cq.sql   # 267 tables, ~112MB
mysql cq < ConquerRebuild/tools/seed_test_accounts.sql       # test accounts + fixtures
cd ConquerRebuild && make -j4
CQ_DB_HOST=127.0.0.1 CQ_DB_USER=test CQ_DB_PASS=test CQ_DB_NAME=cq ./conquer_server
sh tools/run_suite.sh   # from another terminal: full regression suite
```

## Done so far (live-verified)

Login (SRP6 + original duplicate-UIN logic), spawn (wire-accurate 10014), movement, full NPC
dialog + cq_task engine, real cq_action chain engine (192,895 rows, ~40 action types), combat
damage pipeline, monsters + AI + respawn, XP/levels, drops, inventory packets, death/revive,
relive/record-position, magic casting (incl. obfuscated cast packets), weapon proficiencies,
dyna-NPCs, broadcast families. All tested end-to-end against the real original database.

## Remaining

Remaining action types (112/124/126/218/219, 401-403, 498, 512, 532, 542-544, 2001-2014,
3001-3008, 3501+, 9001, task quota), guild / team / trade systems, the 183 Lua scripts,
exp-privilege (1083/1086), per-damager exp distribution, and final real-client polish.
See HANDOFF.md §5 for the prioritized list.
