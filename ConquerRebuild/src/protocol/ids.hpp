#pragma once
// ============================================================
//  Conquer packet IDs - extracted from the REAL decompiled
//  MsgServer.exe (59,726 functions decompiled by Ghidra).
//  The numbers in comments are how many times each ID was
//  referenced in the original binary's code (evidence count).
// ============================================================
#include <cstdint>

namespace conquer {

enum MsgId : uint16_t {
    // ---- verified in decompiled MsgServer.exe ----------------
    MSG_UNKNOWN            = 0,
    MSG_1000              = 1000, // 0x3E8  - first client message (auth/connect)
    MSG_1001              = 1001, // 0x3E9  (x7)
    MSG_1002              = 1002, // 0x3EA  (x16)
    // ---- verified against the client message factory -----------------
    // Authoritative source: FUN_00783ae9 (netmsg.cpp) in the decompiled
    // Conquer.exe - the client's CreateMsg switch (received packet id ->
    // message class ctor). Every id below is a direct factory case.
    // NOTE: the earlier "FUN_008beaa0(obj, id)" pass was WRONG - that call
    // takes an embedded BUFFER SIZE, not a packet id (e.g. CMsgPlayer holds
    // a 0x2e4=740-byte struct, hence the false "740 = spawn" claim).
    MSG_WALK_10005        = 10005, // 0x2715 CMsgWalk   (pb, fields 1..5 verified)
    MSG_ACTION_10010      = 10010, // 0x271A CMsgAction (general action relay)
    MSG_SPAWN_10014       = 10014, // 0x271E CMsgPlayer (other-player appear)
    MSG_INTERACT_1022     = 1022,  // 0x3FE  CMsgInteract (attacks/interactions)
    MSG_USER_ATTRIB_10017 = 10017, // 0x2721 CMsgUserAttrib (attr key/value pairs)
    MSG_SRP_REQUEST_1542  = 1542,  // 0x606 CMsgSrpRequest (SRP6 username)
    MSG_LOGIN_PROOF_1214  = 1214,  // 0x4BE CMsgLoginProof (SRP6 A+M proof)
    MSG_CONNECT_1052     = 1052,  // 0x41C CMsgConnect
    MSG_CONNECT_EX_1055  = 1055,  // 0x41F CMsgConnectEx
    MSG_ENCRYPT_1059     = 1059,  // 0x423 CMsgEncryptCode
    MSG_PIC_KEY_1075     = 1075,  // 0x433 CMsgPicKey
    MSG_KEY_LOGIN_1083   = 1083,  // 0x43B CMsgRequestKeyLogin
    MSG_LOGIN_CHALLENGE_1213 = 1213, // 0x4BD CMsgLoginChallengeS (SRP6)
    MSG_HOSTNAME_1601    = 1601,  // 0x641 CMsgLoginReplyHostName
    MSG_MAP_ITEM_1101    = 1101,  // 0x44D CMsgMapItem (ground items / pickup)
    MSG_NPC_INFO_2031    = 2031,  // 0x7EF CMsgNpc      (NPC info)
    MSG_TASK_DIALOG_2032 = 2032,  // 0x7F0 CMsgTaskDialog (NPC dialog)
    MSG_FRIEND_2033      = 2033,  // 0x7F1 CMsgFriendInfo
    MSG_TIME_2034        = 2034,  // 0x7F2 CMsgTime
    MSG_NPC_2030         = 2030,  // 0x7FE-slot CMsgNpcBase (factory range head)
    MSG_CONTRIBUTE_2067  = 2067,  // 0x813 CMsgContribute
    MSG_TASK_ACC_3000    = 3000,  // 0xBB8 CMsgTaskAccumulate
    MSG_TRANSPORT_2400   = 2400,  // 0x960 CMsgTransportor (map jump)
    MSG_INSTANCE_2401    = 2401,  // 0x961 CMsgInstance
    // legacy alias kept for the interim dev protocol
    MSG_1004              = 1004, // dev spawn packet (until CMsgPlayer layout)
    MSG_613               = 613,  // dev npc dialog (until CMsgTaskDialog layout)
    MSG_1005              = 1005, // 0x3ED  (x3)
    MSG_1008              = 1008, // 0x3F0  - login request
    MSG_1009              = 1009, // 0x3F1  (x5)  - talk
    MSG_1015              = 1015, // 0x3F7  (x6)
    MSG_1012              = 1012, // 0x3F4
    MSG_1011              = 1011, // 0x3F3
    MSG_1020              = 1020, // 0x3FC  (x3)
    MSG_1019              = 1019, // 0x3FB  (x3)
    MSG_1036              = 1036, // 0x40C  (x6)
    MSG_1037              = 1037, // 0x40D  (x4)
    MSG_1039              = 1039, // 0x40F  (x32) - most referenced
    MSG_1040              = 1040, // 0x410  (x3)
    MSG_1045              = 1045, // 0x415  (x3)
    MSG_1046              = 1046, // 0x416  (x3)
    MSG_1051              = 1051, // 0x41B
    MSG_1052              = 1052, // 0x41C  (x4)
    MSG_1069              = 1069, // 0x42B  (x3)
    MSG_1085              = 1085, // 0x43D  (x3)
    MSG_1090              = 1090, // 0x442  (x4)
    MSG_1091              = 1091, // 0x443
    MSG_1115              = 1115, // 0x44B  (x3)
    MSG_1165              = 1165, // 0x48D
    MSG_1202              = 1202, // 0x4B2  (x3)
    MSG_1315              = 1315, // 0x523  (x3)
    MSG_1351              = 1351, // 0x547  (x3)
    MSG_1254              = 1254, // 0x4E2  (x12)
    // --- sub-system IDs (npc / ui window family) -------------
    MSG_600               = 600,  // 0x258
    MSG_601               = 601,  // 0x259  (x7)
    MSG_610               = 610,  // 0x262  (x4)
    MSG_611               = 611,  // 0x263  (x8)
    MSG_612               = 612,  // 0x264  (x3)
    MSG_614               = 614,  // 0x266  (x3)
    MSG_615               = 615,  // 0x267
    MSG_616               = 616,  // 0x268  (x3)
    MSG_617               = 617,  // 0x269  (x12)
    MSG_620               = 620,  // 0x26C  (x10)
    MSG_619               = 619,  // 0x26B  (x6)
    MSG_660               = 660,  // 0x294
    MSG_771               = 771,  // 0x303  (x16)
    MSG_770               = 770,  // 0x302  (x6)
    MSG_773               = 773,  // 0x305  (x20)
    MSG_780               = 780,  // 0x30C
    MSG_820               = 820,  // 0x334  (x6)
    // -----------------------------------------------------------
    // NOTE: names marked "family" above are classified from usage
    // density in the original binary. Confirm each handler against
    // decompiled/MsgServer.c while porting (see ROADMAP.md).
};

const char* msg_id_name(uint16_t id);

} // namespace conquer
