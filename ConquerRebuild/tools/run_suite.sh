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
for t in test_spawn_10014 test_walk_10005 test_npc_action test_action_10010 test_combat_1022 test_magic test_actions_v41 test_actions_v42 test_actions_v43 test_actions_v44 test_actions_v45 test_actions_v46 test_actions_v47 test_actions_v48 test_actions_v49 test_actions_v50 test_actions_v51 test_actions_v52 test_actions_v53 test_actions_v54 test_actions_v55 test_actions_v62 test_actions_v67 test_actions_v68 test_actions_v69 test_actions_v70 test_actions_v71 test_actions_v72 test_actions_v73 test_actions_v74 test_actions_v75 test_actions_v76 test_actions_v79 test_actions_v80 test_actions_v81 test_actions_v82 test_actions_v84 test_actions_v85 test_actions_v87 test_actions_v88 test_actions_v89 test_actions_v90 test_actions_v91 test_actions_v92 test_actions_v93 test_actions_v94 test_actions_v95 test_actions_v96 test_login_chain test_monster_system test_xp_level test_drops test_inventory test_death test_weaponskill test_itemaction test_chat test_tasks test_actions_v30 test_actions_v32 test_actions_v33 test_actions_v34 test_actions_v35 test_actions_v36 test_actions_v37 test_actions_v38 test_actions_v39; do
  to=60; [ "$t" = test_death ] && to=150
  # test_drops kills monsters for 3%/kill item drops, so a run where the
  # first 70 kills miss the roll needs a longer window than the default.
  [ "$t" = test_drops ] && to=220
  timeout $to python3 -u tests/$t.py > /tmp/$t.out 2>&1 && echo "PASS $t" || { echo "FAIL $t"; tail -2 /tmp/$t.out; }
done

# ---- wave M-A: transport crypto unit (CAST/token/dh) ----
if g++ -std=c++17 -O1 -o /tmp/crypto_unit tests/crypto_unit_test.cpp -lcrypto 2>/tmp/crypto_unit.build \
   && /tmp/crypto_unit > /tmp/crypto_unit.out 2>&1; then
  echo "PASS crypto_unit"
else
  echo "FAIL crypto_unit"
  tail -5 /tmp/crypto_unit.build /tmp/crypto_unit.out 2>/dev/null
fi

# ---- wave M-B: transport handshake unit (FUN_140505bc0 / FUN_140500670) ----
if g++ -std=c++17 -O1 -o /tmp/transport_unit tests/transport_unit_test.cpp -lcrypto 2>/tmp/transport_unit.build \
   && /tmp/transport_unit > /tmp/transport_unit.out 2>&1; then
  echo "PASS transport_unit"
else
  echo "FAIL transport_unit"
  tail -5 /tmp/transport_unit.build /tmp/transport_unit.out 2>/dev/null
fi

# ---- wave M-C: live transport integration (handshake accepted + dev intact) ----
if g++ -std=c++17 -O1 -o /tmp/transport_live tests/transport_live_test.cpp -lcrypto 2>/tmp/transport_live.build \
   && /tmp/transport_live > /tmp/transport_live.out 2>&1; then
  echo "PASS transport_live"
else
  echo "FAIL transport_live"
  tail -8 /tmp/transport_live.build /tmp/transport_live.out 2>/dev/null
fi

# ---- wave M-E: encrypted-session login (hello-enabled server on 5817) ----
CQ_DB_HOST=127.0.0.1 CQ_DB_USER=test CQ_DB_PASS=test CQ_DB_NAME=cq \
  CONQUER_PORT=5817 CQ_TRANSPORT_HELLO=1 ./conquer_server \
  > /tmp/conquer_transport.log 2>&1 &
TPID=$!
sleep 1
if g++ -std=c++17 -O1 -o /tmp/transport_login tests/transport_login_test.cpp -lcrypto 2>/tmp/transport_login.build \
   && /tmp/transport_login > /tmp/transport_login.out 2>&1; then
  echo "PASS transport_login"
else
  echo "FAIL transport_login"
  tail -8 /tmp/transport_login.build /tmp/transport_login.out 2>/dev/null
fi
kill $TPID 2>/dev/null
wait $TPID 2>/dev/null

# ---- wave v83: Lua host unit (dlopen Lua 5.2 + the shipped content) ----
if g++ -std=c++17 -O1 -Isrc -o /tmp/lua_unit tests/lua_unit_test.cpp src/script/lua_host.cpp -ldl 2>/tmp/lua_unit.build \
   && /tmp/lua_unit > /tmp/lua_unit.out 2>&1; then
  echo "PASS lua_unit"
else
  echo "FAIL lua_unit"
  tail -5 /tmp/lua_unit.out 2>/dev/null
fi
