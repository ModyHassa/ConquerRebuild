-- Test accounts for the regression suite, added into the REAL cq database
-- (conquer_source/cq.sql import). account_id 100001/100002 and cq_user
-- id 1/2 do not clash with the dump (its ids start at 1000009).
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100001,'TestKnight','test123',0,0,0),
  (100002,'GmDragon','test123',0,1,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (1,100001,'TestKnight',100003,15,2000,1500,1002,400,300,130,10),
  (2,100002,'GmDragon',100004,30,3000,2000,1002,405,300,140,10)
ON DUPLICATE KEY UPDATE name=VALUES(name);

-- Equipment for the combat test: TestKnight wields the real itemtype
-- 613129 ShadowFlyingKnife (attack 523-643) + CrimsonRing 150269
-- (attack 1300-1949). Combined stats: atk 1823-2592, extra 769.
-- GmDragon wears RambleVeil armor 112309 (defense 1056).
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (90001,1,1,613129,7000,7000,4)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);
-- GmDragon wears RambleVeil armor 112309 (defense 1056) for defense-path
-- coverage in a second test phase.
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (90002,2,2,112309,4000,4000,3)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (90003,1,1,150269,7000,7000,6)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);

-- Dedicated account for the monster system test (fresh UIN so the
-- process-lifetime duplicate-UIN rule of the original never collides
-- with test_login_chain's use of 100001/100002).
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100003,'MonsterSlayer','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (3,100003,'MonsterSlayer',100003,15,2000,1500,1002,400,300,130,10)
ON DUPLICATE KEY UPDATE name=VALUES(name);
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (990003,3,3,613129,7000,7000,4)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (90005,3,3,150269,7000,7000,6)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);

-- Bare-fisted account for the monster AI counterattack test: no
-- equipment -> damage floors to ~1 per hit so a 33-hp Pheasant
-- survives and gets to fight back.
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100004,'BareHand','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (4,100004,'BareHand',100003,15,500,500,1002,400,300,130,10)
ON DUPLICATE KEY UPDATE name=VALUES(name);

-- Dedicated low-level account for the XP/level-up test: exp 117 of the
-- 120 needed for level 1->2, one Pheasant kill (+3) levels on the spot.
-- (cq_user id 4 / account 100004 is BareHand, used gearless by
--  test_monster_system's AI phase - never give it equipment.)
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100005,'Newbie','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,exp,profession) VALUES
  (5,100005,'Newbie',100003,15,500,0,1002,400,300,1,117,10)
ON DUPLICATE KEY UPDATE account_id=100005, name='Newbie', level=1, exp=117,
                     life=500, recordx=400, recordy=300;
-- one-shot weapon (613129 ShadowFlyingKnife 523-643) kills a 33-hp Pheasant
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (990005,5,5,613129,7000,7000,4)
ON DUPLICATE KEY UPDATE player_id=5, owner_id=5,
                     type=VALUES(type), position=VALUES(position);

-- Dedicated account for the login inventory-dump test (v21): fixed
-- loadout so the CMsgItemInfo dump is byte-deterministic (fresh UIN
-- account: 100001 is already used by login-chain with other uins and
-- the original duplicate-UIN rule would reject the second login).
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100006,'ItemDumper','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (6,100006,'ItemDumper',100003,15,2000,1500,1002,400,300,130,10)
ON DUPLICATE KEY UPDATE name=VALUES(name);
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position) VALUES
  (90011,6,6,613129,7000,7000,4),   -- weapon (equipped)
  (90012,6,6,112309,4000,4000,3),   -- armor (equipped)
  (90013,6,6,150269,7000,7000,6),   -- ring (equipped)
  (90014,6,6,1000000,3,50,0),       -- Stancher pills x3 (inventory)
  (90015,6,6,1001000,5,50,0)        -- Agrypnotic pills x5 (inventory)
ON DUPLICATE KEY UPDATE type=VALUES(type), amount=VALUES(amount),
  position=VALUES(position), player_id=VALUES(player_id);

-- Death-system test account: Doomed has 9 life and no gear, so a
-- Pheasant counterattack (2-3 dmg) kills it within a few hits.
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100007,'Doomed','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (7,100007,'Doomed',100003,15,9,9,1002,398,298,1,10)
ON DUPLICATE KEY UPDATE name=VALUES(name), life=VALUES(life);

-- NPC chain-engine test account: NpcWalker has 5000 silvers to pay
-- CaptainLi (npc 43, map 1002) for the 1000-silver jail teleport.
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100008,'NpcWalker','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession,money) VALUES
  (8,100008,'NpcWalker',100003,15,200,150,1002,400,300,130,10,5000)
ON DUPLICATE KEY UPDATE name=VALUES(name), money=VALUES(money);

-- Weapon-proficiency test account (v24): SkillFarmer wields a 613129
-- weapon (family 613). The cq_weapon_skill row starts at 1180/1200 exp
-- toward level 1, so ONE capped pheasant kill (dmg cap 33 -> +33 exp)
-- triggers the level-up and the CMsgWeaponSkill 1025 packet.
-- DELETE+INSERT: no unique key on (owner_id,type), ON DUPLICATE would
-- duplicate on reruns.
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100009,'SkillFarmer','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession,money) VALUES
  (9,100009,'SkillFarmer',100003,15,2000,1500,1002,400,300,130,10,0)
ON DUPLICATE KEY UPDATE name=VALUES(name);
-- NOTE: NEVER use ids in the 900xx range: (a) insert_item() auto-created
-- rows climb the AUTO_INCREMENT into that range and ON DUPLICATE would
-- silently overwrite them; (b) two pre-v24 inserts both used id 90004
-- (MonsterSlayer + XpLevel weapons) so only one of them ever existed.
-- All test equipment now uses the 990xxx block. This DELETE removes the
-- superseded legacy row.
DELETE FROM cq_item WHERE id IN (90004);
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (990004,9,9,613129,7000,7000,4)
ON DUPLICATE KEY UPDATE type=VALUES(type), position=VALUES(position);
DELETE FROM cq_weapon_skill WHERE owner_id=9;
INSERT INTO cq_weapon_skill (type,level,exp,old_level,owner_id,unlearn)
  VALUES (613,0,1180,0,9,0);

-- ============================================================
-- v25: ITEM ACTIONS (501 award / 502 take / 503 check) fixture
-- Account ItemTaker (id 10) + test NPC 9943 "ItemSage" + a small
-- cq_action chain in the 990000xx block. Test itemtype = 725015
-- (DivineHare). Chains:
--   99000001 say "Welcome, item tester!" -> options
--   99000002 opt "Give~me~an~item 99000004"
--   99000003 opt "Take~my~item 99000010" -> end
--   99000004 503 has? next 99000006 fail 99000007
--   99000006 101 "You~have~it." -> 0
--   99000007 101 "You~lack~it.~Take~one!" -> 99000008
--   99000008 501 award 725015 -> 99000009
--   99000009 101 "There~you~go." -> 0
--   99000010 503 has? next 99000011 fail 99000007
--   99000011 502 take 725015 -> 99000012
--   99000012 101 "Thanks~for~the~item." -> 0
-- ============================================================
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100010,'ItemTaker','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession,money) VALUES
  (10,100010,'ItemTaker',100003,15,2000,1500,1002,405,300,130,10,0)
ON DUPLICATE KEY UPDATE name=VALUES(name);
-- start each run clean: no leftover awarded items, fresh actions
DELETE FROM cq_item WHERE player_id=10 AND type=725015;
DELETE FROM cq_npc WHERE id=9943;
INSERT INTO cq_npc (id,name,type,lookface,mapid,cellx,celly,task0,sort)
  VALUES (9943,'ItemSage',0,9001,1002,405,302,99000001,0);
DELETE FROM cq_action WHERE id BETWEEN 99000001 AND 99000020;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000001,99000002,0,101,0,'Welcome,~item~tester!'),
  (99000002,99000003,0,102,0,'Give~me~an~item 99000004'),
  (99000003,0,0,102,0,'Take~my~item 99000010'),
  (99000004,99000006,99000007,503,725015,''),
  (99000006,0,0,101,0,'You~have~it.'),
  (99000007,99000008,0,101,0,'You~lack~it.~Take~one!'),
  (99000008,99000009,0,501,725015,''),
  (99000009,0,0,101,0,'There~you~go.'),
  (99000010,99000011,99000007,503,725015,''),
  (99000011,99000012,0,502,725015,''),
  (99000012,0,0,101,0,'Thanks~for~the~item.');

-- v25b: random action types 121 (rand check) / 122 (rand jump of 8)
-- deterministic fixtures on the ItemSage chain:
--   99000020 opt "Roll dice 99000021"
--   99000021 121 "100 100" -> ALWAYS true -> 99000022
--   99000022 121 "100 0"  -> ALWAYS false -> id_nextfail 99000023
--   99000023 101 "Impossible." (never reached)
--   99000024 122 all-8 -> always 99000025 (jump target)
--   99000025 101 "Dice landed."
DELETE FROM cq_action WHERE id BETWEEN 99000020 AND 99000029;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000020,0,0,102,0,'Roll~dice 99000021'),
  (99000021,99000022,99000027,121,0,'100 100'),
  (99000022,99000028,99000024,121,0,'100 0'),
  (99000023,0,0,101,0,'Impossible.'),
  (99000024,0,0,122,0,'99000025 99000025 99000025 99000025 99000025 99000025 99000025 99000025'),
  (99000025,0,0,101,0,'Dice~landed.'),
  (99000027,0,0,101,0,'ERROR:~always-true~branch~failed.'),
  (99000028,0,0,101,0,'ERROR:~always-false~branch~failed.');
-- wire the third option into the greeting dialog
UPDATE cq_action SET id_next=99000020 WHERE id=99000003;

-- v25b FIX: test_death flakiness. The death test picks a pheasant that
-- earlier tests already damaged; Doomed's 1-dmg poke can land the KILL
-- (+3 exp -> LEVEL-UP -> full heal max_hp 9+24=33), breaking the
-- "revive to 9 hp" assertion. Level 130 makes the cq_levexp threshold
-- unreachable (millions of exp), so level-up can never fire mid-test.
-- Full reset every run (save_user persists level on exit, exp persists
-- via save_exp_level).
UPDATE cq_user SET level=130, life=9, exp=0 WHERE id=7;

-- ============================================================
-- v26: CMsgTalk chat system (packet 1004) fixtures.
-- Two fresh accounts standing together on map 1002:
--   ChatA (id 11, account 100011) at 400,300
--   ChatB (id 12, account 100012) at 401,300
-- ItemSage gains a chat option block:
--   99000030 opt "Shout~something 99000031"
--   99000031 125 broadcast SYSTEM/ALLUSERS (original type; 123 = datetime window) "Server~wide~hello!"
--   99000032 opt "Hear~the~sage 99000033"
--   99000033 105 NPC bubble "The~sage~speaks."
-- ============================================================
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100011,'ChatA','test123',0,0,0),
  (100012,'ChatB','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession,money) VALUES
  (11,100011,'ChatA',100003,15,2000,1500,1002,400,300,130,10,0),
  (12,100012,'ChatB',100003,15,2000,1500,1002,401,300,130,10,0)
ON DUPLICATE KEY UPDATE name=VALUES(name);
DELETE FROM cq_action WHERE id BETWEEN 99000030 AND 99000039;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000030,99000032,0,102,0,'Shout~something 99000031'),
  (99000031,99000034,0,125,0,'Server~wide~hello!'),
  (99000032,0,0,102,0,'Hear~the~sage 99000033'),
  (99000033,0,0,105,0,'The~sage~speaks.'),
  (99000034,0,0,101,0,'It~is~done.');
-- wire the chat options after the dice option
UPDATE cq_action SET id_next=99000030 WHERE id=99000020;

-- v26b: action types 1010 (player message box) / 1085 (gmlog no-op)
--   99000035 opt "Get~a~box 99000036"
--   99000036 1010 popup "Box~time!" -> 99000037
--   99000037 1085 gmlog "chat~gmlog~test" -> 99000038
--   99000038 101 "Logged~and~boxed."
DELETE FROM cq_action WHERE id BETWEEN 99000035 AND 99000039;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000035,99000039,0,102,0,'Get~a~box 99000036'),
  (99000036,99000037,0,1010,0,'Box~time!'),
  (99000037,99000038,0,1085,0,'chat~gmlog~test'),
  (99000038,0,0,101,0,'Logged~and~boxed.');
UPDATE cq_action SET id_next=99000035 WHERE id=99000032;

-- v27: script var system (stc/dataN/var/%-conditions)
--   99000039 opt "Var~tests 99000040" (appended after the box option)
--   99000040 1074 "stc(77,7) += 5 1" -> 99000041
--   99000041 1073 "stc(77,7) >= 5" next 99000042 fail 99000046
--   99000042 1057 "data3 set 41" -> 99000043
--   99000043 1057 "data3 == 41" next 99000044 fail 99000046
--   99000044 1061 "var(9) set %user_map_x" -> 99000045
--   99000045 2003 "%user_map_id == 1002" next 99000047 fail 99000046
--   99000046 101 "VAR~FAIL." / 99000047 101 "All~vars~passed."
DELETE FROM cq_action WHERE id BETWEEN 99000040 AND 99000049;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000039,0,0,102,0,'Var~tests 99000040'),
  (99000040,99000041,0,1074,0,'stc(77,7) += 5 1'),
  (99000041,99000042,99000046,1073,0,'stc(77,7) >= 5'),
  (99000042,99000043,0,1057,0,'data3 set 41'),
  (99000043,99000044,99000046,1057,0,'data3 == 41'),
  (99000044,99000045,0,1061,0,'var(9) set %user_map_x'),
  (99000045,99000047,99000046,2003,0,'%user_map_id == 1002'),
  (99000046,0,0,101,0,'VAR~FAIL.'),
  (99000047,0,0,101,0,'All~vars~passed.');
-- fresh var state per run
DELETE FROM cq_user_script_var WHERE player_id IN (11,12);

-- v27b: 801 dropitem + 518 award item
--   99000050 opt "Drop~n~award 99000051"
--   99000051 801 "dropitem 725015" -> 99000052
--   99000052 518 data=725015 award param -> 99000053
--   99000053 101 "Dropped~and~awarded."
DELETE FROM cq_action WHERE id BETWEEN 99000050 AND 99000059;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000050,0,0,102,0,'Drop~n~award 99000051'),
  (99000051,99000052,0,801,0,'dropitem 725015'),
  (99000052,99000053,0,518,725015,'0 0 0 0 0 0 0 0 0 0 0 3 3 0 0'),
  (99000053,0,0,101,0,'Dropped~and~awarded.');
UPDATE cq_action SET id_next=99000050 WHERE id=99000039;
DELETE FROM cq_item WHERE player_id=11 AND type=725015;

-- v27c: 508 inventory-space check + 1056 isexit item check
--   99000060 opt "Space~check 99000061"
--   99000061 508 data=2 (needs 2 free slots) next 99000062 fail 99000064
--   99000062 1056 data=725015 isexit next 99000063 fail 99000064
--   99000063 101 "Space~and~item~OK." / 99000064 101 "Space~FAIL."
DELETE FROM cq_action WHERE id BETWEEN 99000060 AND 99000069;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000060,0,0,102,0,'Space~check 99000061'),
  (99000061,99000062,99000064,508,2,''),
  (99000062,99000063,99000064,1056,725015,'isexit'),
  (99000063,0,0,101,0,'Space~and~item~OK.'),
  (99000064,0,0,101,0,'Space~FAIL.');
UPDATE cq_action SET id_next=99000060 WHERE id=99000050;

-- v27d: 1027 ACTION_USER_EFFECT "self <effect> [add|del]"
--   99000070 "Effect~test 99000071"
--   99000071 1027 "self angelwing"        -> next 99000072
--   99000072 1027 "self angelwing del"    -> next 99000073
--   99000073 101 "Effect~flow~done."
DELETE FROM cq_action WHERE id BETWEEN 99000070 AND 99000079;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000070,0,0,102,0,'Effect~test 99000071'),
  (99000071,99000072,0,1027,0,'self angelwing'),
  (99000072,99000073,0,1027,0,'self angelwing del'),
  (99000073,0,0,101,0,'Effect~flow~done.');
UPDATE cq_action SET id_next=99000070 WHERE id=99000060;

-- v28: action types 1002/1058/1060/1062/1063/1065 + task-keyed 1057 +
--      1010 channel data
--   99000080 "V28~suite 99000081"
--   99000081 1001 "life += -500" (hurt)                -> 99000082
--   99000082 1002 "life" (full restore)                -> 99000083
--   99000083 1061 "var(3) set 5"                       -> 99000084
--   99000084 1060 "var(3) == 5"  next 99000085 fail 99000098
--   99000085 1063 "var(2) set %user_name"             -> 99000086
--   99000086 1062 "var(2) == ChatA" next 99000087 fail 99000098
--   99000087 1058 "time set 0"   data=3003            -> 99000088
--   99000088 1058 "time >= 10"    data=3003 next 99000089 fail 99000098
--   99000089 1057 "complete == 0" data=3003 (record auto-created) next 99000090 fail 99000098
--   99000090 1057 "data9 == 41" data=3004 MISSING record -> fail path 99000098
--   99000091 (unreachable-by-chain ok) 
--   99000092 1065 "4 90" equipped slot 4 sort 90 (ItemDumper weapon 90011) next 99000094 fail 99000098
--   99000094 101 "V28~ALL~PASSED."  /  99000098 101 "V28~FAIL."
DELETE FROM cq_action WHERE id BETWEEN 99000080 AND 99000099;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000080,0,0,102,0,'V28~suite 99000081'),
  (99000081,99000082,0,1001,0,'life += -500'),
  (99000082,99000083,0,1002,0,'life'),
  (99000083,99000084,0,1061,0,'var(3) set 5'),
  (99000084,99000085,99000098,1060,0,'var(3) == 5'),
  (99000085,99000086,0,1063,0,'var(2) set %user_name'),
  (99000086,99000087,99000098,1062,0,'var(2) == ChatA'),
  (99000087,99000088,0,1058,3003,'time set 0'),
  (99000088,99000089,99000098,1058,3003,'time >= 10'),
  (99000089,99000092,99000098,1057,3003,'complete == 0'),
  (99000090,99000092,99000098,1057,3004,'data3 == 41'),
  (99000092,99000094,99000098,1065,0,'4 90'),
  (99000094,0,0,101,0,'V28~ALL~PASSED.'),
  (99000098,0,0,101,0,'V28~FAIL.');
-- task-keyed 1057: rewrite the v27 rows to a real task id
UPDATE cq_action SET data=3001, param='data3 set 41' WHERE id=99000042;
UPDATE cq_action SET data=3001, param='data3 == 41' WHERE id=99000043;
-- v26b 1010: original semantics = system message on channel data
UPDATE cq_action SET data=2005 WHERE id=99000036;
-- 1061 var(9) -> in-range var(7) (original MAX_ACTION_VAR = 8)
UPDATE cq_action SET param='var(7) set %user_map_x' WHERE id=99000044;
UPDATE cq_action SET id_next=99000080 WHERE id=99000070;

-- v28: ChatA equipment for the 1065 equipped-sort check (weapon pos 4,
-- itemtype 90011 -> sort 90), unique id in the 990xxx block
DELETE FROM cq_item WHERE id=990101;
INSERT INTO cq_item (id,owner_id,player_id,type,amount,position)
  VALUES (990101,11,11,90011,1,4);

-- =====================================================================
-- v29: cq_task SYSTEM FIXTURES (original model: the NPC's task0 is a
-- MENU task whose dialog option links to a separate ACCEPT task)
--   task 990109 (client_active=0): menu chain, always qualifies
--   task 990110 (client_active=1, money>=500): accept -> 1057 records
--   task 990111 (client_active=1, money>=99999): never qualifies ->
--     id_nextfail path ("V29 NOT QUALIFIED")
-- QuestTaker (cq_user 13) has 1000 silvers so task 990110 qualifies.
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100013,'QuestTaker','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession,money,pk) VALUES
  (13,100013,'QuestTaker',100003,15,200,150,1002,407,300,130,10,1000,0)
ON DUPLICATE KEY UPDATE name=VALUES(name), money=VALUES(money), pk=VALUES(pk);

DELETE FROM cq_task WHERE id IN (990109,990110,990111);
INSERT INTO cq_task
  (id,id_next,id_nextfail,itemname1,itemname2,money,profession,sex,
   min_pk,max_pk,team,metempsychosis,query,marriage,client_active,remote_transfer)
VALUES
  (990109,99000110,0,'','',0,0,999,-100000,100000,999,0,0,-1,0,0),
  (990110,99000112,99000114,'','',500,0,999,-100000,100000,999,0,0,-1,1,0),
  (990111,99000112,99000114,'','',99999,0,999,-100000,100000,999,0,0,-1,1,0);

DELETE FROM cq_npc WHERE id=9995;
INSERT INTO cq_npc (id,name,type,lookface,mapid,cellx,celly,task0) VALUES
  (9995,'TaskMaster',0,53,1002,406,304,990109);

-- menu chain (task 990109.id_next): text + options linking the ACCEPT
-- tasks by id (client echoes the id back on face 0x66)
-- accept chain (task 990110/990111.id_next): 1057 records + confirm
DELETE FROM cq_action WHERE id BETWEEN 99000110 AND 99000119;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000110,99000111,0,101,0,'Bring~me~500~silver~for~a~quest.'),
  (99000111,99000117,0,102,0,'Take~the~quest. 990110'),
  (99000117,0,0,102,0,'Impossible~quest. 990111'),
  (99000112,99000115,0,1057,990110,'complete set 1'),
  (99000115,99000116,0,1057,990110,'data1 set 7'),
  (99000116,0,0,101,0,'V29~QUEST~ACCEPTED.'),
  (99000114,0,0,101,0,'V29~NOT~QUALIFIED.');

-- ---- v30: ActionSage (npc 9990) — 121/123/125/507/518 fixture ----
--   99000200-07 menu 102s; 99000210-17 checks; 99000220-25 result texts
--   (options are consecutive 102 rows via id_next — original cq_action
--    has a PRIMARY KEY on id, no duplicate rows)
-- (v29 TaskMaster chain lives at 99000110-99000119;
--  keep v30 fixtures OUT of that range)
DELETE FROM cq_action WHERE id BETWEEN 99000100 AND 99000109;
DELETE FROM cq_action WHERE id BETWEEN 99000120 AND 99000129;
DELETE FROM cq_npc WHERE id=9990;
INSERT INTO cq_npc (id,name,type,lookface,cellx,celly,mapid,task0,sort)
  VALUES (9990,'ActionSage',0,123,406,302,1002,99000200,0);
DELETE FROM cq_action WHERE id BETWEEN 99000200 AND 99000229;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000200,99000201,0,102,0,'Test~121a 99000210'),
  (99000201,99000202,0,102,0,'Test~121b 99000211'),
  (99000202,99000203,0,102,0,'Test~123a 99000212'),
  (99000203,99000204,0,102,0,'Test~123b 99000213'),
  (99000204,99000205,0,102,0,'Test~125 99000214'),
  (99000205,99000206,0,102,0,'Test~507a 99000215'),
  (99000206,99000207,0,102,0,'Test~507b 99000216'),
  (99000207,0,0,102,0,'Test~518 99000217'),
  (99000210,99000220,99000221,121,0,'1 1'),
  (99000211,99000220,99000221,121,0,'0 1'),
  (99000212,99000222,99000223,123,4,'00:00 23:59'),
  (99000213,99000222,99000223,123,4,'00:00 00:01'),
  (99000214,99000224,0,125,0,'V30~BROADCAST!'),
  (99000215,99000222,99000223,507,0,'90011 90011 1'),
  (99000216,99000222,99000223,507,0,'90011 90011 2'),
  (99000217,99000225,0,518,725016,'0 3'),
  (99000220,0,0,101,0,'121~TRUE'),
  (99000221,0,0,101,0,'121~FALSE'),
  (99000222,0,0,101,0,'123/507~TRUE'),
  (99000223,0,0,101,0,'123/507~FALSE'),
  (99000224,0,0,101,0,'125~DONE'),
  (99000225,0,0,101,0,'518~AWARDED');
DELETE FROM cq_item WHERE player_id=11 AND type=725016;

-- ---- v32 fixture: action 127 (raw SQL) + 1080 (timestamp set) ----
-- extend the v30 ActionSage menu: last v30 option row (99000207) now
-- chains into the v32 options at 99000230+.
UPDATE cq_action SET id_next=99000230 WHERE id=99000207;
DELETE FROM cq_action WHERE id BETWEEN 99000230 AND 99000259;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000230,99000231,0,102,0,'127~good~SQL. 99000240'),
  (99000231,99000232,0,102,0,'127~bad~SQL. 99000241'),
  (99000232,99000233,0,102,0,'1080~timestamp~set. 99000242'),
  (99000233,0,0,102,0,'1080~bad~param. 99000243'),
  (99000240,99000250,0,127,0,'INSERT INTO cq_log SET user_id=11, task_id=99000240, profession=15, level=130, time=unix_timestamp()'),
  (99000241,99000250,99000251,127,0,'THIS IS NOT VALID SQL'),
  (99000242,99000252,0,1080,0,'timestamp(47,12) set 325240280'),
  (99000243,99000252,99000253,1080,0,'garbage'),
  (99000250,0,0,101,0,'V32~SQL127~OK.'),
  (99000251,0,0,101,0,'V32~SQL127~FAIL.'),
  (99000252,0,0,101,0,'V32~TS1080~OK.'),
  (99000253,0,0,101,0,'V32~TS1080~FAIL.');

-- ---- v33 fixture: DynaNpc system (201 var ops / 301 create / 302 map counts) ----
DELETE FROM cq_dynanpc WHERE ownerid=11 AND lookface=5000;
UPDATE cq_action SET id_next=99000260 WHERE id=99000233;
DELETE FROM cq_action WHERE id BETWEEN 99000260 AND 99000299;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000260,99000261,0,102,0,'301~create. 99000270'),
  (99000261,99000262,0,102,0,'302~mapuser. 99000280'),
  (99000262,99000263,0,102,0,'201~slots. 99000282'),
  (99000263,0,0,102,0,'201~datastr. 99000288'),
  -- 301: convert ActionSage context into dyna npc lf 5000 at (406,301)
  (99000270,99000271,0,301,0,'5000 406 301'),
  (99000271,99000272,0,201,0,'data0 = 7 0'),
  (99000272,99000273,0,201,0,'data0 += 1 0'),
  (99000273,99000274,99000275,201,0,'data0 == 8 0'),
  (99000274,0,0,101,0,'V33~DYN~OK.'),
  (99000275,0,0,101,0,'V33~DYN~FAIL.'),
  -- 302: map_user >= 1 (ChatA itself)
  (99000280,99000283,99000284,302,0,'map_user >= 1'),
  (99000283,0,0,101,0,'V33~MAP~OK.'),
  (99000284,0,0,101,0,'V33~MAP~FAIL.'),
  -- 201 on real dyna record 100010 (AwarderWoo): set + check + persist
  (99000282,99000285,0,201,0,'data1 = 55 100010'),
  (99000285,99000286,99000287,201,0,'data1 == 55 100010'),
  (99000286,0,0,101,0,'V33~SLOT~OK.'),
  (99000287,0,0,101,0,'V33~SLOT~FAIL.'),
  -- 201 datastr set + stricmp compare
  (99000288,99000289,0,201,0,'datastr = V33TEST 100010'),
  (99000289,99000290,99000291,201,0,'datastr == V33TEST 100010'),
  (99000290,0,0,101,0,'V33~STR~OK.'),
  (99000291,0,0,101,0,'V33~STR~FAIL.');

-- ---- v34 fixture: 303 broadcast / 304 runtime monster spawn / 306 map attribs ----
UPDATE cq_action SET id_next=99000264 WHERE id=99000263;
DELETE FROM cq_action WHERE id BETWEEN 99000264 AND 99000266;
DELETE FROM cq_action WHERE id BETWEEN 99000300 AND 99000330;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000264,99000265,0,102,0,'303~bcast. 99000300'),
  (99000265,99000266,0,102,0,'304~spawn. 99000310'),
  (99000266,0,0,102,0,'306~attrib. 99000320'),
  -- 303: SYSTEM/ALLUSERS channel 2005 with a %template
  (99000300,99000301,0,303,0,'V34~BROADCAST~from~%user_name'),
  (99000301,0,0,101,0,'V34~BCAST~OK.'),
  -- 304: spawn Pheasant (type 1) on map 1002 at (407,302)
  (99000310,99000311,0,304,0,'1 1002 407 302'),
  (99000311,0,0,101,0,'V34~SPAWN~OK.'),
  -- 306: set res_lev on map 1002, then compare; mapuser count
  (99000320,99000321,0,306,0,'res_lev = 2 1002'),
  (99000321,99000324,0,306,0,'res_lev == 2 1002'),
  (99000324,99000325,99000326,306,0,'mapuser >= 1'),
  (99000325,99000327,0,101,0,'V34~ATTR~OK.'),
  (99000326,0,0,101,0,'V34~ATTR~FAIL.'),
  (99000327,99000328,99000329,306,0,'res_lev == 99 1002'),
  (99000328,0,0,101,0,'V34~ATTR2~OK.'),
  (99000329,0,0,101,0,'V34~ATTR2~FAIL.');

-- ---- v35 fixture: 312 msgname broadcast / 509 item ops / 510 item checks ----
-- restore ChatA weapon (id 990101) before each suite: v35 downgrades its type
UPDATE cq_item SET type=90011, amount=1 WHERE id=990101;
UPDATE cq_action SET id_next=99000267 WHERE id=99000266;
DELETE FROM cq_action WHERE id BETWEEN 99000267 AND 99000269;
DELETE FROM cq_action WHERE id BETWEEN 99000340 AND 99000370;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000267,99000268,0,102,0,'509~downlev. 99000340'),
  (99000268,99000269,0,102,0,'510~check. 99000350'),
  (99000269,0,0,102,0,'312~fx. 99000360'),
  -- 509: weapon (pos 4, type 90011 -> level (11%1000)/10=1) down_one_lev
  (99000340,99000341,0,509,0,'down_one_lev 4'),
  (99000341,99000342,99000343,510,0,'4 level == 0'),
  (99000342,0,0,101,0,'V35~DOWN~OK.'),
  (99000343,0,0,101,0,'V35~DOWN~FAIL.'),
  -- 510: quality digit + missing-item branch
  (99000350,99000353,0,510,0,'4 quality == 1'),
  (99000353,99000354,0,101,0,'V35~QUAL~OK.'),
  (99000354,0,0,101,0,'V35~QUAL~FAIL.'),
  -- 509 recover_dur then 510 durability check (real itemtype 725015
  -- amount=100 at equipment pos 5, fixture row 990901)
  (99000355,99000356,0,509,0,'recover_dur 5'),
  (99000356,99000357,0,101,0,'V35~DUR~OK.'),
  (99000357,0,0,101,0,'V35~DUR~FAIL.');
DELETE FROM cq_item WHERE id=990901;
INSERT INTO cq_item (id,owner_id,player_id,type,amount,position,del_time)
  VALUES (990901,11,11,725015,1,5,0);
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  -- 312: CMsgName kind-9 screen effect on this map
  (99000360,99000361,0,312,0,'1002 406 301 V35FX'),
  (99000361,0,0,101,0,'V35~FX~OK.');

-- ---- v36 fixture: 1005 hairdresser / 205 alone / 208 teleport /
-- 307-308 monster wave / 311 weather / 314 / 207 abort ----
-- (band 99000400+: 99000270-291 are v33 chains, 99000300+ v34/v35)
UPDATE cq_user SET lookface=100003 WHERE id=11;
UPDATE cq_action SET id_next=99000400 WHERE id=99000269;
DELETE FROM cq_action WHERE id BETWEEN 99000400 AND 99000449;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000400,99000401,0,102,0,'1005~style. 99000410'),
  (99000401,99000402,0,102,0,'1005~color. 99000412'),
  (99000402,99000403,0,102,0,'208~teleport. 99000415'),
  (99000403,99000404,0,102,0,'307308~wave. 99000420'),
  (99000404,99000405,0,102,0,'205~alone. 99000430'),
  (99000405,0,0,102,0,'311314~misc. 99000435'),
  -- 1005 style: 100003 -> (100003/100)*100+4 = 100004
  (99000410,99000411,0,1005,0,'style 4'),
  (99000411,0,0,101,0,'V36~STYLE~OK.'),
  -- 1005 color: 100004 -> 100004 + (7 - (4%1000)/100=0)*100 = 100704
  (99000412,99000413,0,1005,0,'color 7'),
  (99000413,0,0,101,0,'V36~COLOR~OK.'),
  -- 208 teleport to (402,301)
  (99000415,99000416,0,208,0,'818 1002 402 301'),
  (99000416,0,0,101,0,'V36~TP~OK.'),
  -- 307 empty-region check, 308 wave of 3 Snakemen, 307 count >= 3
  (99000420,99000421,99000424,307,0,'0 400 300 20 20 13 < 1'),
  (99000421,99000422,99000424,308,0,'13 1002 400 300 20 20 3 0'),
  (99000422,99000423,99000424,307,0,'0 400 300 20 20 13 >= 3'),
  (99000423,0,0,101,0,'V36~WAVE~OK.'),
  (99000424,0,0,101,0,'V36~WAVE~FAIL.'),
  -- 205 map-alone check (both branches)
  (99000430,99000431,99000432,205,0,''),
  (99000431,0,0,101,0,'V36~ALONE~OK.'),
  (99000432,0,0,101,0,'V36~ALONE~FAIL.'),
  -- 311 weather + 314 popup, then OK
  (99000435,99000436,0,311,0,'1002 5'),
  (99000436,99000437,0,314,0,''),
  (99000437,0,0,101,0,'V36~MISC~OK.');

-- ---- v37 fixture: 1022 log / 1021 weapon-skill ops / 1020 magic ops ----
-- (band 99000450+; weapon type 410 + magic type 11230 have table rows)
UPDATE cq_action SET id_next=99000406 WHERE id=99000405;
DELETE FROM cq_action WHERE id BETWEEN 99000406 AND 99000409;
DELETE FROM cq_action WHERE id BETWEEN 99000450 AND 99000479;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000406,99000407,0,102,0,'1022~log. 99000450'),
  (99000407,99000408,0,102,0,'1021~wskill. 99000455'),
  (99000408,99000409,0,102,0,'1020~magic. 99000465'),
  (99000409,0,0,102,0,'1020~magicdel. 99000470'),
  -- 1022 = gmlog/action log + continue
  (99000450,99000451,0,1022,0,'V37~action~logged'),
  (99000451,0,0,101,0,'V37~LOG~OK.'),
  -- 1021 weapon skill: learn 410 level 2 -> check -> addexp
  (99000455,99000456,99000460,1021,0,'learn 410 2'),
  (99000456,99000457,99000460,1021,0,'check 410 2'),
  (99000457,99000458,99000460,1021,0,'addexp 410 100'),
  (99000458,0,0,101,0,'V37~WSK~OK.'),
  (99000460,0,0,101,0,'V37~WSK~FAIL.'),
  -- 1020 magic: learn 11230 -> check -> uplevel
  (99000465,99000466,99000468,1020,0,'learn 11230'),
  (99000466,99000467,99000468,1020,0,'check 11230'),
  (99000467,99000469,99000468,1020,0,'uplevel 11230'),
  (99000469,0,0,101,0,'V37~MAGIC~OK.'),
  (99000468,0,0,101,0,'V37~MAGIC~FAIL.'),
  -- del chain: addexp -> del (row must exist from the magic option first)
  (99000470,99000471,99000475,1020,0,'addexp 11230 50'),
  (99000471,99000472,99000475,1020,0,'del 11230'),
  (99000472,0,0,101,0,'V37~DEL~OK.'),
  (99000475,0,0,101,0,'V37~DEL~FAIL.');

-- ---- v38 fixture: 1075 client-action send / 1077 sql->svar /
-- ---- 1080 timestamp ops (verified) / default -> id_nextfail ----
-- (band: options 99000410-14 chained from v37's 99000409, chains 99000480+)
UPDATE cq_action SET id_next=99000440 WHERE id=99000409;
DELETE FROM cq_action WHERE id BETWEEN 99000440 AND 99000444;
DELETE FROM cq_action WHERE id BETWEEN 99000480 AND 99000499;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000440,99000441,0,102,0,'1075~self. 99000480'),
  (99000441,99000442,0,102,0,'1075~shout. 99000482'),
  (99000442,99000443,0,102,0,'1077~sql. 99000484'),
  (99000443,99000444,0,102,0,'1080~ts. 99000488'),
  (99000444,0,0,102,0,'unhandled~type. 99000492'),
  -- 1075 "send 1000 1": CMsgAction 10010 to SELF (action=1000, data=1)
  (99000480,99000481,0,1075,0,'send 1000 1'),
  (99000481,0,0,101,0,'V38~SEND~OK.'),
  -- 1075 non-"send" cmd: broadcast to everyone on screen
  (99000482,99000483,0,1075,0,'shout 205 1'),
  (99000483,0,0,101,0,'V38~SHOUT~OK.'),
  -- 1077: SQL select -> svar(6), then 1062 stricmp-compare
  (99000484,99000485,99000487,1077,6,'select name from cq_user where id=%user_id'),
  (99000485,99000486,99000487,1062,0,'var(6) == ChatA'),
  (99000486,0,0,101,0,'V38~SQL~OK.'),
  (99000487,0,0,101,0,'V38~SQL~FAIL.'),
  -- 1080 verified ops: set then == (true) and > (false at fail branch)
  (99000488,99000489,99000491,1080,0,'timestamp(66,66) set 100'),
  (99000489,99000490,99000491,1080,0,'timestamp(66,66) == 100'),
  (99000490,0,0,101,0,'V38~TS~OK.'),
  (99000491,0,0,101,0,'V38~TS~FAIL.'),
  -- unhandled type (1076 has 0 rows in the real DB): original default
  -- logs a DBERROR and takes id_nextfail
  (99000492,99000493,99000494,1076,1,'3 tester'),
  (99000493,0,0,101,0,'V38~NEXT~OK.'),
  (99000494,0,0,101,0,'V38~FAILBRANCH.');

-- ---- v39 fixture: 103 input dialog / 104 pic dialog / 105 message box ----
-- (options band 99000445-49 chained after v38's 99000444; chains in the
-- SMALL free band 63900-63919: the original writes the reply-action id
-- into a u2 wire slot (FUN_1403a6400 buf+8), so ids < 65536 round-trip
-- exactly; big ids truncate — the real DB uses remapper FUN_14039d300)
UPDATE cq_action SET id_next=99000445 WHERE id=99000444;
DELETE FROM cq_action WHERE id BETWEEN 99000445 AND 99000449;
DELETE FROM cq_action WHERE id BETWEEN 63900 AND 63919;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000445,99000446,0,102,0,'103~input. 63900'),
  (99000446,99000447,0,102,0,'104~pic. 63902'),
  (99000447,99000448,0,102,0,'105~msgbox. 63904'),
  (99000448,99000449,0,102,0,'103~flag. 63906'),
  (99000449,0,0,102,0,'104~bad. 63908'),
  -- 103 input: face, reply action id, text token, flag (u1 truncation)
  (63900,0,0,103,0,'15 63901 Enter~your~name:'),
  (63901,0,0,101,0,'V39~INPUT~OK.'),
  -- 104 pic dialog: pic1 pic2 reply-id
  (63902,0,0,104,0,'10 10 63903'),
  (63903,0,0,101,0,'V39~PIC~OK.'),
  -- 105 msgbox: face = DATA(7), confirm reply id = id_next
  (63904,63905,0,105,7,'V39~MSGBOX.'),
  (63905,0,0,101,0,'V39~AFTER~BOX.'),
  -- 103 with 4th field: face += 0x100 (truncated by the u1 slot)
  (63906,0,0,103,0,'15 63907 Enter~guild 1'),
  (63907,0,0,101,0,'V39~FLAG~OK.'),
  -- 104 bad param: 1 field < 3 -> id_nextfail
  (63908,0,63909,104,0,'10'),
  (63909,0,0,101,0,'V39~PICBAD~OK.');

-- v40: magic-casting test account (id 14). CasterA knows Thunder (1000,
-- exp 1998 so TWO casts level it up vs need_exp 2000), Fire (1001) for
-- the pheasant kill and Cure (1005) for the heal test. mana 300 covers
-- the casts (Thunder 1, Fire 21, Cure 10 each).
INSERT INTO accounts (id,name,password,banned,type,vip) VALUES
  (100014,'CasterA','test123',0,0,0)
ON DUPLICATE KEY UPDATE password=VALUES(password);
INSERT INTO cq_user (id,account_id,name,lookface,hair,life,mana,recordmap_id,
                     recordx,recordy,level,profession) VALUES
  (14,100014,'CasterA',100003,15,500,300,1002,400,300,130,10)
ON DUPLICATE KEY UPDATE name=VALUES(name), mana=VALUES(mana);
-- DELETE+INSERT: no unique key on (ownerid,type) in the real dump schema
DELETE FROM cq_magic WHERE ownerid=14;
INSERT INTO cq_magic (ownerid,type,level,exp,old_level,unlearn) VALUES
  (14,1000,0,1998,0,0),
  (14,1001,0,0,0,0),
  (14,1005,0,0,0,0);

-- ---- v41: item actions 506/511/513/516/517 (ActionSage 9990) ----
DELETE FROM cq_action WHERE id BETWEEN 99000510 AND 99000539;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000510,99000511,0,501,725015,''),
  (99000511,99000512,0,501,725015,''),
  (99000512,99000513,0,501,725015,''),
  (99000513,99000514,99000516,506,0,'725015 725015 2'),
  (99000514,0,0,101,0,'V41~TAKE~OK.'),
  (99000516,0,0,101,0,'V41~TAKE~FAIL.'),
  (99000517,0,99000518,506,0,'725025 725025 2'),
  (99000518,0,0,101,0,'V41~TAKE~MISS~OK.'),
  (99000520,99000521,99000522,511,0,''),
  (99000521,0,0,101,0,'V41~WEAPON~OK.'),
  (99000522,0,0,101,0,'V41~WEAPON~MISS.'),
  (99000525,99000526,0,513,0,'3310 0 3310 30'),
  (99000526,0,0,101,0,'V41~TRANS~OK.'),
  (99000530,99000531,99000532,516,0,'0 14 == 0 to 7'),
  (99000531,0,0,101,0,'V41~FIELD~OK.'),
  (99000532,0,0,101,0,'V41~FIELD~MISS.'),
  (99000533,99000534,0,517,0,'613129 14 set 1 1'),
  (99000534,99000535,99000536,517,0,'613129 14 == 1 0'),
  (99000535,0,0,101,0,'V41~SET~OK.'),
  (99000536,0,0,101,0,'V41~SET~FAIL.');

-- ---- v42: menu remapper + 120 ack + 2004 alias (ActionSage 9990) ----
DELETE FROM cq_action WHERE id BETWEEN 99000540 AND 99000559;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000540,99000541,0,102,0,'BigId~button. 99000544'),
  (99000541,0,0,101,0,'V42~BIGID~PROMPT.'),
  (99000544,99000545,0,101,0,'V42~BIGID~OK.'),
  (99000546,99000547,0,120,0,'99000548'),
  (99000547,0,0,101,0,'V42~ACK~PROMPT.'),
  (99000548,99000549,0,101,0,'V42~ACK~OK.'),
  (99000550,99000551,99000552,2004,0,'%user_map_id == 1002'),
  (99000551,0,0,101,0,'V42~COND~OK.'),
  (99000552,0,0,101,0,'V42~COND~FAIL.');

-- ---- v43: module-gated + caseless types (ActionSage 9990) ----
DELETE FROM cq_action WHERE id BETWEEN 99000560 AND 99000579;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000560,99000561,99000562,9001,0,''),
  (99000561,0,0,101,0,'V43~OS~GATE~PASS.'),
  (99000562,0,0,101,0,'V43~OS~GATE~FAIL.'),
  (99000563,99000564,99000565,3501,0,'rank = 3'),
  (99000564,0,0,101,0,'V43~FAMILY~RAN.'),
  (99000565,0,0,101,0,'V43~FAMILY~NORUN.'),
  (99000566,99000567,99000568,3001,0,''),
  (99000567,0,0,101,0,'V43~NOCASE~RAN.'),
  (99000568,0,0,101,0,'V43~NOCASE~FAIL.'),
  (99000569,99000570,99000571,498,0,''),
  (99000570,0,0,101,0,'V43~ITEM498~RAN.'),
  (99000571,0,0,101,0,'V43~ITEM498~FAIL.');

-- ---- v44: 112 news / 124 magic fx / 126 event / 2005 (ActionSage 9990) ----
DELETE FROM cq_action WHERE id BETWEEN 99000580 AND 99000599;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000580,99000581,0,112,7,'V44~PATCH~NEWS.'),
  (99000581,0,0,101,0,'V44~NEWS~OK.'),
  (99000582,99000583,0,124,1190,''),
  (99000583,0,0,101,0,'V44~MAGICFX~OK.'),
  (99000584,99000585,0,126,0,'300 99000585 0'),
  (99000585,0,0,101,0,'V44~EVENT~OK.'),
  (99000586,99000587,99000588,2005,0,'Sorry,no space for the item.'),
  (99000587,0,0,101,0,'V44~BAD~RAN.'),
  (99000588,0,0,101,0,'V44~BAD~FAIL.');

-- ---- v45: 512 socket-item display (ActionSage 9990) ----
-- equipped "gem item" at position 1, type 900101 (item_class = 6)
DELETE FROM cq_item WHERE id = 90100;
INSERT INTO cq_item (id,player_id,owner_id,type,amount,amount_limit,position)
  VALUES (90100,1,1,900101,1,1,1);
DELETE FROM cq_action WHERE id BETWEEN 99000590 AND 99000599;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000590,99000591,0,512,0,'1 4'),
  (99000591,0,0,101,0,'V45~OK.'),
  (99000592,0,99000593,512,0,'1 9'),
  (99000593,0,0,101,0,'V45~GATE~FAIL.'),
  (99000594,0,99000595,512,0,'7 4'),
  (99000595,0,0,101,0,'V45~NOITEM~STOP.');

-- ---- v46: 1026 lookface digit / 1064 var arithmetic / 1081 interval / 150 dyna data ----
-- ItemDumper (id 6) gets lookface 101003: digit (look%10000)/1000 == 1
UPDATE cq_user SET lookface=101003 WHERE id=6;
DELETE FROM cq_dynanpc WHERE ownerid=1 AND lookface=5001;
DELETE FROM cq_action WHERE id BETWEEN 99000600 AND 99000659;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  -- 1026 pass (player 6 lookface 101003 -> digit 1)
  (99000600,99000601,0,1026,0,''),
  (99000601,0,0,101,0,'V46~LOOK~OK.'),
  (99000602,0,99000603,1026,0,''),
  (99000603,0,0,101,0,'V46~LOOK~FAIL.'),
  -- 1064 chain A: += 7 -> *= 3 -> mod= 5  =>  21 % 5 = 1
  (99000604,99000605,0,1064,0,'var(2) += 7'),
  (99000605,99000606,0,1064,0,'var(2) *= 3'),
  (99000606,99000607,0,1064,0,'var(2) mod= 5'),
  (99000607,99000608,99000609,1060,0,'var(2) == 1'),
  (99000608,0,0,101,0,'V46~MATH~OK.'),
  (99000609,0,0,101,0,'V46~MATH~FAIL.'),
  -- 1064 chain B: += 12 -> -= 4 -> |= 1 -> &= 13  =>  9
  (99000610,99000611,0,1064,0,'var(5) += 12'),
  (99000611,99000612,0,1064,0,'var(5) -= 4'),
  (99000612,99000613,0,1064,0,'var(5) |= 1'),
  (99000613,99000614,0,1064,0,'var(5) &= 13'),
  (99000614,99000615,99000616,1060,0,'var(5) == 9'),
  (99000615,0,0,101,0,'V46~BIT~OK.'),
  (99000616,0,0,101,0,'V46~BIT~FAIL.'),
  -- 1064 chain C: += 6 -> ^= 3  =>  5
  (99000617,99000618,0,1064,0,'var(6) += 6'),
  (99000618,99000619,0,1064,0,'var(6) ^= 3'),
  (99000619,99000620,99000621,1060,0,'var(6) == 5'),
  (99000620,0,0,101,0,'V46~XOR~OK.'),
  (99000621,0,0,101,0,'V46~XOR~FAIL.'),
  -- 1064 bad op -> fail branch
  (99000622,0,99000623,1064,0,'var(0) **= 3'),
  (99000623,0,0,101,0,'V46~BADOP~FAIL.'),
  -- 1081 day-mode true: stc=1 (epoch day 0) -> interval >= 0
  (99000624,99000625,0,1074,0,'stc(205,205) = 1 1'),
  (99000625,99000626,0,1081,0,'interval(205,205,1) >= 0'),
  (99000626,0,0,101,0,'V46~INTV~OK.'),
  -- 1081 day-mode false: now_days != 0 + 5
  (99000627,99000628,0,1074,0,'stc(206,206) = 1 1'),
  (99000628,0,99000629,1081,0,'interval(206,206,1) == 5'),
  (99000629,0,0,101,0,'V46~INTV~EQFAIL.'),
  -- 1081 unset key: ts==0 -> fail
  (99000630,0,99000631,1081,0,'interval(207,207,0) >= 1'),
  (99000631,0,0,101,0,'V46~INTV~NOROW.'),
  -- 1081 normal-mode true: (1 + -999999999) <= now
  (99000632,99000633,0,1074,0,'stc(208,208) = 1 1'),
  (99000633,99000634,0,1081,0,'interval(208,208,0) >= -999999999'),
  (99000634,0,0,101,0,'V46~INTV~SEC~OK.'),
  -- 150 dyna data ops (context dyna from 301)
  (99000635,99000636,0,301,0,'5001 407 304'),
  (99000636,99000637,0,150,0,'0 data set 5'),
  (99000637,99000638,0,150,0,'1 data += 3'),
  (99000638,99000639,99000642,150,0,'0 data == 5'),
  (99000639,99000640,99000642,150,0,'1 data == 3'),
  (99000640,99000641,99000642,150,0,'0 data >= 100'),
  (99000641,0,0,101,0,'V46~DYNA~GATE~OK.'),
  (99000642,0,0,101,0,'V46~DYNA~FAIL.'),
  -- 1064 chains need an ABSOLUTE base: vars persist across sessions
  -- (cq_user_script_var), so reset before each arithmetic chain
  (99000643,99000604,0,1061,0,'var(2) set 0'),
  (99000644,99000610,0,1061,0,'var(5) set 0'),
  (99000645,99000617,0,1061,0,'var(6) set 0');

-- ---- v47: MapSage (npc 9945) — 1004 record-pos / 1070 relive ----
-- 99000660-61 menu 102s; 99000662-64 chains; 99000666-70 result texts
DELETE FROM cq_npc WHERE id=9945;
INSERT INTO cq_npc (id,name,type,lookface,cellx,celly,mapid,task0,sort)
  VALUES (9945,'MapSage',0,123,407,302,1002,99000660,0);
DELETE FROM cq_action WHERE id BETWEEN 99000660 AND 99000699;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000660,99000661,0,102,0,'Set~record 99000662'),
  (99000661,0,0,102,0,'Relive~me 99000665'),
  -- 1004 valid: set record pos to map 1011 (400,400)
  (99000662,99000666,99000667,1004,0,'1011 400 400'),
  -- 1004 invalid: map 99999 not in cq_map
  (99000663,99000668,99000669,1004,0,'99999 5 5'),
  -- 1070 valid: relive to map 1015 (500,500)
  (99000665,99000670,99000671,1070,0,'1015 500 500'),
  (99000666,0,0,101,0,'V47~REC~OK.'),
  (99000667,0,0,101,0,'V47~REC~FAIL.'),
  (99000668,0,0,101,0,'V47~REC2~OK.'),
  (99000669,0,0,101,0,'V47~REC2~FAIL.'),
  (99000670,0,0,101,0,'V47~RELIVE~OK.'),
  (99000671,0,0,101,0,'V47~RELIVE~FAIL.');

-- ============================================================
-- v48: MapSage menu extension — 543 consume-pack (case 0x21f:
-- ItemSystem lookup by DATA + ident==0 gate -> erase ONE copy),
-- plus DEFAULT-ROUTE coverage: types with no original handler
-- (401/0x191 etc.) -> DBERROR + false -> id_nextfail.
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000700 AND 99000719;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000700,99000701,0,102,0,'Consume~pack 99000702'),
  (99000701,0,0,102,0,'Default~route 99000706'),
  (99000702,99000704,99000705,543,723855,''),
  (99000709,99000710,99000711,543,0,''),
  (99000706,99000707,99000708,401,0,'1 2 3'),
  (99000704,0,0,101,0,'V48~CONSUME~OK.'),
  (99000705,0,0,101,0,'V48~CONSUME~FAIL.'),
  (99000707,0,0,101,0,'V48~DEFAULT~NEXT.'),
  (99000708,0,0,101,0,'V48~DEFAULT~FAIL.'),
  (99000710,0,0,101,0,'V48~BADTYPE~OK.'),
  (99000711,0,0,101,0,'V48~BADTYPE~FAIL.');
UPDATE cq_action SET id_next=99000700 WHERE id=99000661;
DELETE FROM cq_item WHERE player_id=10 AND type=723855;

-- ============================================================
-- v49: 2008 (0x7d8) named-entity count check — MapSage options
--      extended. Real rows: "4025 name UltimatePluto < 1" style.
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000720 AND 99000739;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000720,99000721,0,102,0,'Mobcount 99000722'),
  (99000721,0,0,102,0,'Badmode 99000730'),
  -- Pheasant (19 generators on map 1002) -> count >= 1 -> < 999 true
  (99000722,99000724,99000725,2008,0,'1002 name Pheasant < 999'),
  -- nonexistent monster, count == 0 -> true
  (99000726,99000728,99000729,2008,0,'1002 name ZebraUnicorn == 0'),
  -- Pheasant == 0 is FALSE (mobs alive) -> fail branch
  (99000731,99000733,99000734,2008,0,'1002 name Pheasant == 0'),
  -- invalid mode string -> original returns false outright
  (99000730,99000732,99000735,2008,0,'1002 bogusmode Foo == 0'),
  -- NOTE: id_next=99000732 prints BADMODE~OK (unreachable),
  -- id_nextfail=99000735 prints BADMODE~FAIL (expected)
  (99000724,0,0,101,0,'V49~CNT~LT~OK.'),
  (99000725,0,0,101,0,'V49~CNT~LT~FAIL.'),
  (99000728,0,0,101,0,'V49~CNT~EQ~OK.'),
  (99000729,0,0,101,0,'V49~CNT~EQ~FAIL.'),
  (99000732,0,0,101,0,'V49~BADMODE~OK.'),
  (99000733,0,0,101,0,'V49~CNT~EQZ~OK.'),
  (99000734,0,0,101,0,'V49~CNT~EQZ~FAIL.'),
  (99000735,0,0,101,0,'V49~BADMODE~FAIL.');
UPDATE cq_action SET id_next=99000720 WHERE id=99000701;

-- ============================================================
-- v50: 2013 (0x7dd) ground-item removal — MapSage menu extended.
-- Real rows: "%user_map_id 6014760 -1" (remove ALL of a type).
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000740 AND 99000759;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000740,99000741,0,102,0,'Rmground 99000742'),
  (99000741,0,0,102,0,'Badparam 99000746'),
  (99000742,99000744,99000745,2013,0,'%user_map_id 152008 -1'),
  (99000746,99000748,99000749,2013,0,'1002 152008'),
  (99000744,0,0,101,0,'V50~RM~OK.'),
  (99000745,0,0,101,0,'V50~RM~FAIL.'),
  (99000748,0,0,101,0,'V50~BAD~OK.'),
  (99000749,0,0,101,0,'V50~BAD~FAIL.');
UPDATE cq_action SET id_next=99000740 WHERE id=99000721;

-- ============================================================
-- v51: 2012 (0x7dc) mass teleport + 2013 CORRECTED to mass item
--      award (was ground-removal in v50 — iterator walks USERS).
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000760 AND 99000779;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000760,99000761,0,102,0,'Flyme 99000762'),
  (99000761,0,0,102,0,'Whereami 99000766'),
  (99000762,99000764,99000765,2012,0,'1002 1000 318 330'),
  (99000766,99000768,99000769,2003,0,'%user_map_id == 1000'),
  (99000770,99000772,99000773,2012,0,'1002 1000'),
  (99000764,0,0,101,0,'V51~FLY~OK.'),
  (99000765,0,0,101,0,'V51~FLY~FAIL.'),
  (99000768,0,0,101,0,'V51~MAP~OK.'),
  (99000769,0,0,101,0,'V51~MAP~FAIL.'),
  (99000772,0,0,101,0,'V51~BAD~OK.'),
  (99000773,0,0,101,0,'V51~BAD~FAIL.');
UPDATE cq_action SET id_next=99000760 WHERE id=99000741;

-- ============================================================
-- v52: 2010 (0x7da) SYSTEM broadcast + 2011 (0x7db) map attr set.
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000780 AND 99000799;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000780,99000781,0,102,0,'Broadcast 99000782'),
  (99000781,0,0,102,0,'Setmap 99000786'),
  (99000782,99000784,99000785,2010,0,'V52BC hello from 2010'),
  (99000786,99000788,99000789,2011,0,'1002 type 12345'),
  (99000794,99000796,99000797,2011,0,'1002 type'),
  (99000784,0,0,101,0,'V52~BC~OK.'),
  (99000785,0,0,101,0,'V52~BC~FAIL.'),
  (99000788,0,0,101,0,'V52~SM~OK.'),
  (99000789,0,0,101,0,'V52~SM~FAIL.'),
  (99000796,0,0,101,0,'V52~BAD~OK.'),
  (99000797,0,0,101,0,'V52~BAD~FAIL.');
UPDATE cq_action SET id_next=99000780 WHERE id=99000761;

-- v51b: fly-back chain (state cleanup so v51's chgmap doesn't poison
-- the DB record pos for later tests: the disconnect save persists the
-- in-memory teleport as recordmap_id!).
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000775,99000777,0,2012,0,'1000 1002 400 300'),
  (99000777,0,0,101,0,'V51~BACK~OK.');

-- ============================================================
-- v53: test coverage for the EXISTING 2005 case (0x7d5): plain-
-- text params -> sscanf != 7 -> DBERROR -> FAIL branch.
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000800 AND 99000819;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000800,99000801,0,102,0,'Spacecheck 99000802'),
  (99000801,0,0,102,0,'Spacebad 99000806'),
  (99000802,99000804,99000805,2005,0,'Sorry,you did not have enough space for the item.'),
  (99000806,99000808,99000809,2005,0,'1011 2494'),
  (99000804,0,0,101,0,'V53~OK.'),
  (99000805,0,0,101,0,'V53~FAIL.'),
  (99000808,0,0,101,0,'V53~OK2.'),
  (99000809,0,0,101,0,'V53~FAIL2.');
UPDATE cq_action SET id_next=99000800 WHERE id=99000781;

-- ============================================================
-- v54: 2009 (0x7d9) arm live event monster. Pheasant = type 1,
-- 19 generators on map 1002.
-- ============================================================
DELETE FROM cq_action WHERE id BETWEEN 99000820 AND 99000839;
INSERT INTO cq_action (id,id_next,id_nextfail,type,data,param) VALUES
  (99000820,0,0,102,0,'Armmonster 99000822'),
  (99000822,99000824,99000825,2009,0,'1002 1 0 Pheasant'),
  (99000826,99000828,99000829,2009,0,'1002 1 0 GhostKing'),
  (99000830,99000832,99000833,2009,0,'9999 1 0 Pheasant'),
  (99000834,99000836,99000837,2009,0,'1002'),
  (99000824,0,0,101,0,'V54~OK1.'),
  (99000825,0,0,101,0,'V54~FAIL1.'),
  (99000828,0,0,101,0,'V54~OK2.'),
  (99000829,0,0,101,0,'V54~FAIL2.'),
  (99000832,0,0,101,0,'V54~OK3.'),
  (99000833,0,0,101,0,'V54~FAIL3.'),
  (99000836,0,0,101,0,'V54~OK4.'),
  (99000837,0,0,101,0,'V54~FAIL4.');
UPDATE cq_action SET id_next=99000820 WHERE id=99000801;
