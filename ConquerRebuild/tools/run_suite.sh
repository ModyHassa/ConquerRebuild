#!/bin/sh
# Full regression suite. Restarts the server fresh (the original keeps the
# UIN login list for the process lifetime, so a fresh suite needs a fresh
# process) and restores seeded record positions (positions persist).
cd "$(dirname "$0")/.."
pkill -x conquer_server 2>/dev/null; sleep 0.5
mysql --default-character-set=utf8mb4 cq < tools/seed_test_accounts.sql 2>/dev/null
./tools/reset_positions.sh 2>/dev/null
CQ_DB_HOST=127.0.0.1 CQ_DB_USER=test CQ_DB_PASS=test CQ_DB_NAME=cq \
  stdbuf -oL ./conquer_server > /tmp/conquer_mysql.log 2>&1 &
sleep 1
for t in test_spawn_10014 test_walk_10005 test_npc_action test_action_10010 test_combat_1022 test_magic test_actions_v41 test_actions_v42 test_actions_v43 test_actions_v44 test_actions_v45 test_actions_v46 test_actions_v47 test_actions_v48 test_actions_v49 test_actions_v50 test_login_chain test_monster_system test_xp_level test_drops test_inventory test_death test_weaponskill test_itemaction test_chat test_tasks test_actions_v30 test_actions_v32 test_actions_v33 test_actions_v34 test_actions_v35 test_actions_v36 test_actions_v37 test_actions_v38 test_actions_v39; do
  to=60; [ "$t" = test_death ] && to=150
  timeout $to python3 -u tests/$t.py > /tmp/$t.out 2>&1 && echo "PASS $t" || { echo "FAIL $t"; tail -2 /tmp/$t.out; }
done
