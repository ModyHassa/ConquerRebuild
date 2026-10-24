# Conquer 6159 client protocol map (extracted)

## Authoritative source: client message factory FUN_00783ae9 (netmsg.cpp)

The factory switch maps RECEIVED packet id -> message class ctor. This is
ground truth for what the client can parse. Extracted directly from the
Ghidra decompile (line 681949-683497 of Conquer.c).

**IMPORTANT CORRECTION (v6):** the earlier pass that read
`FUN_008beaa0(obj, N)` as 'packet id' was WRONG - N is the size of the
class's embedded serialization buffer (e.g. CMsgPlayer = 0x2e4 = 740
bytes, hence the false 'spawn = 740' claim). The factory switch is the
real id source.

| packet id | class (from factory) |
|---|---|
| 1052 | CMsgConnect |
| 1055 | CMsgConnectEx |
| 1057 | CMsgConnectWithBgp |
| 1059 | CMsgEncryptCode |
| 1075 | CMsgPicKey |
| 1083 | CMsgRequestKeyLogin |
| 1213 | CMsgLoginChallengeS |
| 1350 | CMsgGameServerShutDown |
| 1351 | CMsgSlotAction |
| 1352 | CMsgSlotResult |
| 1601 | CMsgLoginReplyHostName |
| 1602 | CMsgLoginReplyHostNameBGP |
| 2031 | CMsgNpc |
| 2032 | CMsgTaskDialog |
| 2033 | CMsgFriendInfo |
| 2034 | CMsgTime |
| 2035 | CMsgPetInfo |
| 2043 | CMsgTrainingInfo |
| 2067 | CMsgContribute |
| 2096 | CMsgShowHandExit |
| 2251 | CMsgTeamPopPKArenicScore |
| 2252 | CMsgTeamPopPKMatchInfo |
| 2253 | CMsgTeamPopPKRankInfo |
| 2260 | CMsgDominateTeamPopPkName |
| 2261 | CMsg2ndPsw |
| 2320 | CMsgSubPro |
| 2330 | CMsgFactionMatch |
| 2331 | CMsgFMRoundRobin |
| 2332 | CMsgFMMatch |
| 2400 | CMsgTransportor |
| 2401 | CMsgInstance |
| 2410 | CMsgAura |
| 2420 | CMsgVerifyCheck |
| 2430 | CMsgNationality |
| 2500 | CMsgSameGroupServerList |
| 2501 | CMsgCrossSwitch |
| 2502 | CMsgCrossFlagWar |
| 2504 | CMsgCrossFlagWarMerit |
| 2506 | CMsgCrossFlagWarFlag |
| 2507 | CMsgCrossFlagWarRank |
| 2510 | CMsgFactionChiefBase |
| 2520 | CMsgStrCheckKey |
| 2533 | CMsgTrainingVitality |
| 2535 | CMsgTrainingVitalityScore |
| 2536 | CMsgTrainingVitalityProtect |
| 2537 | CMsgTrainingVitalityProtectInfo |
| 2538 | CMsgTrainingVitalityExpiryNotify |
| 2610 | CMsgInnerStrengthOpt |
| 2627 | CMsgLeagueRank |
| 2700 | CMsgOwnKongfuBase |
| 2701 | CMsgOwnKongfuImproveSummaryInfo |
| 2702 | CMsgOwnKongfuImproveFeedback |
| 2703 | CMsgOwnKongRank |
| 2711 | CMsgTQP |
| 2712 | CMsgBenefitsConfig |
| 2801 | CMsgRouletteWinningNumber |
| 2803 | CMsgRouletteWatcherList |
| 2804 | CMsgRouletteAction |
| 2805 | CMsgRoulette1ArgAction |
| 2806 | CMsgRouletteInvite |
| 2807 | CMsgRouletteNpcInfo |
| 2808 | CMsgRouletteTable |
| 2809 | CMsgRoulettePlayer |
| 2811 | CMsgTaskReward |
| 2820 | CMsgActivityTask |
| 2822 | CMsgActivityTaskReward |
| 2823 | CMsgStatisticDaily |
| 2831 | CMsgProcessGoalTask |
| 2832 | CMsgProcessGoalInfo |
| 2900 | CMsgOSAction |
| 2902 | CMsgOSEnter |
| 3000 | CMsgTaskAccumulate |
| 3001 | CMsgHandBrickInfo |
| 3100 | CMsgInvadeWarning |
| 10005 | CMsgWalk |
| 10010 | CMsgAction |
| 10014 | CMsgPlayer |

## Wire layouts verified so far

### 10005 (0x2715) CMsgWalk - protobuf (VERIFIED, sender Create + factory)
- field 1 varint: direction + 8*step (dir = v & 7)
- field 2 varint: actor id
- field 3 varint: mode (0 walk / 1 run)
- field 4 varint: timestamp
- field 5 varint: key
Header: [len:2][type=10005:2], len = 4 + pb size.

### 10014 (0x271E) CMsgPlayer - spawn/appear (raw struct, NOT protobuf)
Client ctor wraps a 740-byte embedded buffer. Parser: FUN_008093fe
(1146 lines, reads name into 15-byte buffer, strings, ints).
TODO: extract full field offset map from FUN_008093fe.

### 10010 (0x271A) CMsgAction - general action relay
TODO: layout.

### 2031 CMsgNpc / 2032 CMsgTaskDialog - NPC dialog family
Matches the classic CO protocol (0x7EF/0x7F0). TODO: exact layouts.

### Login phase chain (from factory):
1052 CMsgConnect -> 1055 CMsgConnectEx -> 1059 CMsgEncryptCode ->
1075 CMsgPicKey -> 1083 CMsgRequestKeyLogin -> 1213 CMsgLoginChallengeS
(SRP6 challenge). TODO: exact raw layouts for each.

## CMsgTaskDialog (2032 / 0x7F0) - NPC dialog - VERIFIED from client parser FUN_007d8432
Wire: [len:2][type:2][fixed 12 bytes][string packer at wire+0x10]
Fixed part:
- +0x4: u2 (reserved/unused by parser)
- +0x8: u2 npc id -> player obj[10]
- +0xA: u2 link/option count -> player obj[0xb] (in task branches)
- +0xC: u2 task id (used with "Confirm" string 0xE13)
- +0xE: u1 mode (0 = normal, 2 = special branch)
- +0xF: u1 dialog face/type (0..5; 5 = input/link dialog)
String packer: [count:1][ [len:1][text] ]...
- string 0 = dialog TEXT (read into 255-byte buffer)
- strings 1..n = option/link texts
Client ctor FUN_007d82b2 (buffer size 0x3ed).

## CMsgNpc (2031 / 0x7EF) - NPC task status/action - VERIFIED from client parser FUN_007e0264
Wire: [len:2][type:2]
- +0x4: u4 (unread by parser)
- +0x8: u4 npc id
- +0xC: u4 task id (passed to task-status handler FUN_006b3e27)
- +0x10: u2 action (2 = ?, 3 = open npc view FUN_00796aae(id,1), 5 = task status)
- +0x12: u2 subtype/task-state (9, 0x19-0x2a, 0x66+ ranges checked)
