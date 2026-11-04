# GetUserInt(userid, key) — key to attribute table

Evidence tags: `C:<line>` = decompiled/MsgServer.c; `PIC:<line>` = the shipped
interface enum BasicData/[Conquer][BasicData]ProgramInterfaceConstant.lua
(GBK); `FGV` = PublicFunc/[Conquer][PublicFunc]FuncGetValue.lua.

## Dispatch chain (verified)
- C:771170 `FUN_140434890` registered as "GetUserInt"; C:771207 "SetUserInt"
  = FUN_140436450.
- GetUserInt guard `key-0x3e9 < 0x3e6` = keys 1001..1998; uid 0 = current user
  (DAT_140975bf0+0x10); tail-calls the getter FUN_1404e02d0 (C:870797-871071,
  61 cases). Keys with no case return -1.
- SetUserInt (C:763388) takes FOUR args (uid, key, value, flag), guard 1001..1998,
  and pushes a BOOLEAN. Its setter switch covers 1003,1004,1005,1012,1024,
  1032,1033,1034,1035,1037,1038,1041,1042,1043,1046,1048,1054 (C:874310-874394).
- GetUserStr (C:871073) only implements 1002 (name), 1017 (mate name),
  1064 (god-bless expiry string).

## Corrections to earlier assumptions (verified)
- Guild rank is **1036** (sub vtable+0x170 -> guild manager +0xf8), NOT 1037.
  1037 is the task iterator (user+0xa68).
- Peerage = **1045**, VIP = **1047** (1046 = business state, 1048 = VIP value).
- 1003 LookFace has **no getter case** — GetUserInt answers -1; only SetUserInt
  implements it. The enum marks it "get set" but the getter switch has no case.
- key 1004 uses the SUB-object vtable +0x38, not the user vtable +0x38.

## Pinned keys we implement (all live in Player today)
| key | enum name | getter | field |
|---|---|---|---|
| 1001 | G_PLAYER_ID | user vtbl+8 (C:870826) | player id |
| 1004 | G_PLAYER_Hair | sub vtbl+0x38 (C:870829) | hair |
| 1005 | G_PLAYER_Profession | byte user+0xeee (C:870832) | profession |
| 1006 | G_PLAYER_Level | sub vtbl+0x70 (C:870835) | level |
| 1007 | G_PLAYER_MapID | sub vtbl+0x168 (C:870838) | map id |
| 1008 | G_PLAYER_PosX | sub vtbl+0x40 (C:870841) | pos.x |
| 1009 | G_PLAYER_PosY | sub vtbl+0x48 (C:870845) | pos.y |
| 1019 | G_PLAYER_Life | sub vtbl+0x78 (C:870887) | hp |
| 1020 | G_PLAYER_MaxLife | sub vtbl+0x80 (C:870890) | max_hp |
| 1021 | G_PLAYER_Mana | user vtbl+0x80 (C:870893) | mana |
| 1022 | G_PLAYER_MaxMana | user vtbl+0x88 (C:870896) | max_mana |
| 1025 | G_PLAYER_Money | user vtbl+0x60 (C:870914) | money |
| 1029 | G_PLAYER_Exp | user vtbl+0xa0 (C:870923) | exp |
| 1036 | G_PLAYER_SynRank | sub vtbl+0x170 -> guild mgr +0xf8 (C:870941) | guild_rank |
| 1056 | G_PLAYER_SynId | sub vtbl+0x170 (C:871021) | guild_id |

## Pinned keys still BLOCKED in our engine (need state we do not model)
1010 virtue, 1011 metempsychosis, 1012 sex, 1013 team member count, 1014 home
id, 1015 account id, 1016 battle effect, 1018 riding points, 1023 mentor
points, 1024 transform, 1027 e-money, 1028 bonus e-money, 1031 pk, 1032-1035
the four attributes, 1038 red-name, 1039/1040 cq_card counts, 1041 xp,
1042 ep, 1043 attribute points, 1045 peerage, 1047 VIP, 1057 family,
1058 exp-to-next, 1059 mate, 1067-1071 culture/league/war-merit.
Add-only keys (no getter at all): 1026, 1030, 1049, 1052, 1065, 1066, 1072.
