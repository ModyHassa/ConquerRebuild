/* Decompiled by Ghidra 12.1.4 | program: TeamArenic.dll
   image base: 141910000 | functions: 2107 */


void FUN_141911000(void)

{
  log_InlineLogERROR(&DAT_1419462b8);
  return;
}




void FUN_141911030(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141911040(void)

{
  return 0;
}




undefined8 FUN_141911050(void)

{
  return 0;
}




undefined8 FUN_141911060(void)

{
  return 0;
}




undefined8 FUN_141911070(void)

{
  return 0;
}




undefined8 * FUN_141911080(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1419110c0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_1419110e0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),0x22);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_141911830(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ushort FUN_1419111c0(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

{
  ushort uVar1;
  bool bVar2;
  CMsg local_418 [1040];
  
  if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
    return 0;
  }
  if (param_4 < *param_3) {
    return 0;
  }
  uVar1 = param_3[1];
  if (uVar1 < 0x8c2) {
    if (uVar1 == 0x8c1) {
      FUN_14193a090(local_418);
      bVar2 = FUN_14193a110(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193a280((longlong)local_418,param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193a0e0((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x3ea) {
      FUN_141939dd0(local_418);
      bVar2 = FUN_141939e90(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_141939ec0(local_418,param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_141939e20((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x3eb) {
      FUN_141939f30(local_418);
      bVar2 = FUN_141939ff0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193a020(local_418,param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_141939f80((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x8a3) {
      FUN_14193b190(local_418);
      bVar2 = FUN_14193b290(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193b2c0((longlong)local_418,param_2,*(longlong **)(param_1 + 0x10),*(longlong **)(param_1 + 0x18));
      }
      FUN_14193b1e0((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
  }
  else {
    if (uVar1 == 0x8c2) {
      FUN_14193a470(local_418);
      bVar2 = FUN_14193a4f0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193a6f0((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193a4c0((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x8c3) {
      FUN_14193a7b0(local_418);
      bVar2 = FUN_14193a830(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193a990((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193a800((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x8c4) {
      FUN_14193ae80(local_418);
      bVar2 = FUN_14193af00(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193b0f0(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193aed0((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x8c5) {
      FUN_14193b7a0(local_418);
      bVar2 = FUN_14193b820(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193b900(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193b7f0((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
    if (uVar1 == 0x8c7) {
      FUN_14193abe0(local_418);
      bVar2 = FUN_14193ac60(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_14193add0((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x10));
      }
      FUN_14193ac30((undefined8 *)local_418);
      goto LAB_1419114cd;
    }
  }
  log_InlineLogWARNING("TeamArenic:: Recv fault MsgType:%d");
LAB_1419114cd:
  return *param_3;
}




void FUN_1419114f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014191150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer TeamArenic module doesn\'t have provider");
    return;
  }
  tq::TimeGet(0);
  FUN_1419118b0(*(longlong *)(param_1 + 0x10));
  return;
}




bool FUN_141911530(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_141912700(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c5,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c4,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c3,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c2,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c1,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8a3,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x8c7,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(*(longlong **)(param_1 + 0x28),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))(*(longlong **)(param_1 + 0x28),0x22,*(undefined8 *)(param_1 + 0x10));
  return cVar1 != '\0';
}




undefined8 FUN_141911630(void)

{
  return 1;
}




void FUN_141911640(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141911670(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1419116a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = team_arenic::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  return param_1;
}




void FUN_1419116f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = team_arenic::CModule::vftable;
  if (param_1[2] != 0) {
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x160))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[2] = 0;
  }
  *param_1 = gs::IModule::vftable;
  return;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x1750  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)team_arenic::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141911530((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_1419117f0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1419116f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_141911830(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  puVar1 = FUN_141922fb0(param_2);
  *(undefined8 **)(param_1 + 8) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CProvider::Init, can not create m_pTeamArenicMgr");
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_1419118b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141923df0(*(longlong *)(param_1 + 8));
  return;
}




ulonglong FUN_141911900(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191bd20(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




bool FUN_141911950(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return false;
  }
  bVar1 = FUN_141915ea0(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




bool FUN_1419119a0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return false;
  }
  bVar1 = FUN_14191b9d0(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




ulonglong FUN_1419119f0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191b8d0(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




ulonglong FUN_141911a40(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191b970(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




undefined8 FUN_141911a90(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  uVar1 = FUN_14191c140(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




void FUN_141911ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191fd30(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_141911b30(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141923070(*(longlong *)(param_1 + 8),param_2,'\x01');
  return;
}




void FUN_141911b80(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_1419231f0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911bd0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191e360(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911c20(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_1419202d0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911c70(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_1419219b0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911cc0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141921ba0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911d10(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191e660(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_141911d60(longlong param_1,uint param_2,char param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141920f50(*(longlong *)(param_1 + 8),param_2,param_3,'\x01');
  return;
}




void FUN_141911db0(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141915d70(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141911e00(longlong param_1,uint param_2,char param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141915dc0(*(longlong *)(param_1 + 8),param_2,param_3,'\x01');
  return;
}




void FUN_141911e50(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191e2d0(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141911ea0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141921cb0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911ef0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141921170(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911f40(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191be40(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911f90(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141921360(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141911fe0(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141921420(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




bool FUN_141912030(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return false;
  }
  bVar1 = FUN_14191baf0(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




ulonglong FUN_141912080(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191bb40(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




ulonglong FUN_1419120d0(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191bb90(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




void FUN_141912120(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  thunk_FUN_14191ec50(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141912170(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141923200(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_1419121c0(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191bed0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_141912210(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141915fb0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_141912260(longlong param_1,undefined4 param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141915fe0(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_1419122b0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191ec50(*(longlong *)(param_1 + 8),param_2);
  return;
}




undefined8 FUN_141912300(longlong param_1,uint param_2,int param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar1 = FUN_14191c160(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




void FUN_141912320(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_1419232c0(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141912370(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191c2b0(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




ulonglong FUN_1419123c0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_14191f270(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




void FUN_141912410(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191f380(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141912460(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191c380(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_1419124b0(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14191c400(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141912500(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_1419160f0(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_141912550(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141916100(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_1419125a0(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141916110(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_1419125f0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141916120(*(longlong *)(param_1 + 8),param_2);
  return;
}




longlong FUN_141912640(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    lVar1 = 0;
  }
  return lVar1;
}




void FUN_141912680(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141922be0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_1419126d0(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_14191b3c0((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_141912700(undefined8 *param_1)

{
  *param_1 = team_arenic::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_141912720(undefined8 *param_1)

{
  *param_1 = team_arenic::CProvider::vftable;
  if (param_1[1] != 0) {
    FUN_14191b3c0((undefined8 *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}




undefined8 * FUN_141912760(undefined8 *param_1,uint param_2)

{
  FUN_141912720(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_141912820(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_141912860(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141912880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141912890(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419128f0(void)

{
  return;
}




exception * FUN_141912900(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141912950(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141912983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141912990(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1419129b0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_141912a10(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141912a70(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141912aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141912ac0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141912b30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_141912b40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined8 FUN_141912b50(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    iVar1 = FUN_141925140(*(longlong *)(param_1 + 0x10));
    if (param_2 == iVar1) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    iVar1 = FUN_141925140(*(longlong *)(param_1 + 0x18));
    if (param_2 == iVar1) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  return 0;
}




ulonglong FUN_141912c00(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  ulonglong extraout_RAX_00;
  longlong *plVar4;
  ulonglong extraout_RAX_01;
  uint7 extraout_var;
  uint7 extraout_var_00;
  char *pcVar5;
  undefined8 uVar6;
  uint7 uVar7;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    plVar4 = (longlong *)FUN_141917800();
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar3 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      bVar1 = FUN_141924f60(*(longlong *)(param_1 + 0x10));
      uVar7 = extraout_var;
      if ((bVar1) && (bVar1 = FUN_141924f60(*(longlong *)(param_1 + 0x18)), uVar7 = extraout_var_00, bVar1)) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        uVar2 = FUN_141925140(*(longlong *)(param_1 + 0x10));
        *param_2 = uVar2;
        pcVar5 = (char *)(**(code **)(*plVar4 + 0x58))(plVar4,uVar2);
        strncpy((char *)(param_2 + 1),pcVar5,0x10);
        *(undefined1 *)((longlong)param_2 + 0x13) = 0;
        uVar6 = FUN_1419259f0(*(longlong *)(param_1 + 0x10));
        param_2[5] = (int)uVar6;
        uVar2 = FUN_141925140(*(longlong *)(param_1 + 0x18));
        *param_3 = uVar2;
        pcVar5 = (char *)(**(code **)(*plVar4 + 0x58))(plVar4,uVar2);
        strncpy((char *)(param_3 + 1),pcVar5,0x10);
        *(undefined1 *)((longlong)param_3 + 0x13) = 0;
        uVar6 = FUN_1419259f0(*(longlong *)(param_1 + 0x18));
        param_3[5] = (int)uVar6;
        return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      uVar3 = (ulonglong)uVar7 << 8;
    }
  }
  return uVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141912dd0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar1;
  ulonglong extraout_RAX_01;
  char *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [15];
  undefined1 local_39;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [15];
  undefined1 local_19;
  undefined4 local_18;
  ulonglong local_10;
  
  local_58 = 0xfffffffffffffffe;
  local_10 = DAT_14195d590 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_68 = 0x149;
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    local_68 = 0x14a;
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    plVar1 = (longlong *)FUN_141917800();
    if (plVar1 == (longlong *)0x0) {
      local_68 = 0x14f;
      log_InlineLogERROR(&DAT_1419462b8);
      uVar3 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      local_30 = FUN_141925140(*(longlong *)(param_1 + 0x10));
      local_2c = FUN_141925190(*(longlong *)(param_1 + 0x10));
      local_18 = FUN_141925160(*(longlong *)(param_1 + 0x10));
      pcVar2 = (char *)(**(code **)(*plVar1 + 0x58))(plVar1,local_30);
      strncpy(local_28,pcVar2,0x10);
      local_19 = 0;
      local_50 = FUN_141925140(*(longlong *)(param_1 + 0x18));
      local_4c = FUN_141925190(*(longlong *)(param_1 + 0x18));
      local_38 = FUN_141925160(*(longlong *)(param_1 + 0x18));
      pcVar2 = (char *)(**(code **)(*plVar1 + 0x58))(plVar1,local_50);
      strncpy(local_48,pcVar2,0x10);
      local_39 = 0;
      uVar3 = FUN_14193aaf0(param_2,&local_30,&local_50);
      if ((char)uVar3 != '\0') {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3;
}




longlong FUN_141912fa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141912fc2;
  }
  lVar2 = *plVar1;
LAB_141912fc2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141912fe0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141913002;
  }
  lVar2 = *plVar1;
LAB_141913002:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_141913060(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419130c0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"vector<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
}




exception * FUN_141913130(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_141913180(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




exception * FUN_1419131c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_141913240(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_141913270;
  }
  else {
LAB_141913270:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141913298;
  }
  _invalid_parameter_noinfo();
LAB_141913298:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1419132c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_141913330(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1419133a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_1419133f0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_141913490(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_1419134e0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}




void * FUN_141913570(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




undefined * FUN_1419135b0(void)

{
  if ((DAT_14195d5b8 & 1) == 0) {
    DAT_14195d5b8 = DAT_14195d5b8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5b0,"CTeamArenicMatch");
    atexit((_func_5014 *)&LAB_141945700);
  }
  return &DAT_14195d5b0;
}




void FUN_141913610(__uint64 param_1)

{
  if ((DAT_14195d5b8 & 1) == 0) {
    DAT_14195d5b8 = DAT_14195d5b8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5b0,"CTeamArenicMatch");
    atexit((_func_5014 *)&LAB_141945700);
  }
                    /* WARNING: Could not recover jumptable at 0x000141913665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14195d5b0,param_1);
  return;
}




void FUN_141913670(void *param_1)

{
  if ((DAT_14195d5b8 & 1) == 0) {
    DAT_14195d5b8 = DAT_14195d5b8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5b0,"CTeamArenicMatch");
    atexit((_func_5014 *)&LAB_141945700);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419136c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14195d5b0,param_1);
  return;
}




void FUN_1419136d0(void *param_1)

{
  if ((DAT_14195d5b8 & 1) == 0) {
    DAT_14195d5b8 = DAT_14195d5b8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5b0,"CTeamArenicMatch");
    atexit((_func_5014 *)&LAB_141945700);
  }
                    /* WARNING: Could not recover jumptable at 0x000141913725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14195d5b0,param_1);
  return;
}




longlong FUN_141913750(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141913772;
  }
  lVar2 = *plVar1;
LAB_141913772:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141913790(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419137b2;
  }
  lVar2 = *plVar1;
LAB_1419137b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1419137d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141913810(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141913820(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_1419138b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_141913920(longlong *param_1,longlong param_2)

{
  FUN_141913240(param_1,param_2);
  return param_1;
}




void * FUN_141913960(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}




void * FUN_1419139e0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141913a20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_141913a40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1419130c0();
    }
    lVar1 = FUN_141913820(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141913ab0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141913ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_141913b20(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * 4;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141913b8a;
  }
  _invalid_parameter_noinfo();
LAB_141913b8a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141913bc0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




void * FUN_141913c20(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_141913c90(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _Dst = (void *)(param_3 + lVar1 * -4);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 4,param_1,lVar1 * 4);
  }
  return _Dst;
}




void * FUN_141913d10(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141913d50(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141913d90(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_141913de0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_141913e30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141913e80(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




void * FUN_141913ee0(longlong param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 8) >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,*(void **)(param_1 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_141913f50(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




undefined8 * FUN_141913f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}




undefined8 * FUN_141913ff0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_141914040(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_141914090(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (undefined8 *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




longlong * FUN_1419140f0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  rsize_t _DstSize;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  _Src = *(void **)(param_4 + 8);
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_2[1];
  if (_Dst != _Src) {
    lVar2 = param_1[4] - (longlong)_Src >> 2;
    _DstSize = lVar2 * 4;
    if (0 < lVar2) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return param_2;
}




void * FUN_1419141e0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 8) - (longlong)*(void **)(param_2 + 8) >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,*(void **)(param_2 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




void * FUN_141914280(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 2;
  _DstSize = lVar1 * 4;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




undefined8 * FUN_1419142c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = team_arenic::CTeamArenicMatch::vftable;
  plVar3 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 4);
    plVar2 = plVar1;
  }
  param_1[4] = plVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 10);
    plVar2 = plVar1;
  }
  param_1[10] = plVar2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x10);
    plVar3 = plVar2;
  }
  param_1[0x10] = plVar3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}




undefined8 * FUN_1419143b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong uStack_20;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  uVar4 = (longlong)(param_2[4] - param_2[3]) >> 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar4 != 0) {
    if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1419130c0();
    }
    lVar2 = FUN_141913820(param_1 + 2,uVar4);
    param_1[3] = lVar2;
    param_1[4] = lVar2;
    param_1[5] = lVar2 + uVar4 * 4;
    uVar4 = param_2[4];
    if (uVar4 < (ulonglong)param_2[3]) {
      _invalid_parameter_noinfo();
    }
    local_58 = (undefined4)*param_2;
    uStack_54 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uStack_50 = (undefined4)uVar4;
    uStack_4c = (undefined4)(uVar4 >> 0x20);
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar4 = param_2[3];
    if ((ulonglong)param_2[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    local_28 = *param_2;
    uStack_20 = uVar4;
    pvVar3 = FUN_1419141e0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_1419144e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  rsize_t _DstSize;
  
  _Src = (void *)((longlong)*(void **)(param_3 + 8) + 4);
  lVar3 = param_1[4] - (longlong)_Src >> 2;
  if (0 < lVar3) {
    _DstSize = lVar3 << 2;
    memmove_s(*(void **)(param_3 + 8),_DstSize,_Src,_DstSize);
  }
  param_1[4] = param_1[4] + -4;
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar1 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_141914570(longlong *param_1)

{
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  longlong lVar1;
  
  _Src = (void *)param_1[4];
  if (_Src < (void *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_1[3];
  if ((void *)param_1[4] < _Dst) {
    _invalid_parameter_noinfo();
  }
  if ((_Dst < (void *)param_1[3]) || ((void *)param_1[4] < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *param_1;
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar1 == 0) || (lVar1 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar1 = param_1[4] - (longlong)_Src >> 2;
    _DstSize = lVar1 * 4;
    if (0 < lVar1) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return;
}




void FUN_141914660(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  rsize_t rVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x28) - lVar3 >> 2;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar6 - lVar3 >> 2;
    if (0x3fffffffffffffffU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1419130c0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141913820(param_1 + 0x10,uVar8);
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 2;
      puVar5 = (undefined4 *)((longlong)pvVar2 + lVar3 * 4);
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_4;
        puVar5 = puVar5 + 1;
      }
      lVar6 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 2;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 2;
        memmove_s(pvVar2,rVar7,*(void **)(param_1 + 0x18),rVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 2;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 2;
        memmove_s((void *)((longlong)pvVar2 + (lVar3 + param_3) * 4),rVar7,*(void **)(param_2 + 8),rVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + uVar8 * 4);
      *(void **)(param_1 + 0x20) = (void *)((longlong)pvVar2 + (param_3 + (lVar3 - (longlong)pvVar9 >> 2)) * 4);
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    else if ((ulonglong)(lVar6 - *(longlong *)(param_2 + 8) >> 2) < param_3) {
      uVar1 = *param_4;
      FUN_141914280(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
      puVar5 = *(undefined4 **)(param_1 + 0x20);
      for (lVar3 = param_3 - ((longlong)puVar5 - *(longlong *)(param_2 + 8) >> 2); lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 4;
      lVar3 = *(longlong *)(param_1 + 0x20);
      for (puVar5 = *(undefined4 **)(param_2 + 8); puVar5 != (undefined4 *)(lVar3 + param_3 * -4); puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    else {
      uVar1 = *param_4;
      pvVar9 = (void *)(lVar6 + param_3 * -4);
      pvVar2 = FUN_141914280(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141913c90(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_141914900(undefined8 *param_1)

{
  *param_1 = team_arenic::CTeamArenicMatch::vftable;
  FUN_141914570(param_1 + 0x10);
  FUN_141914570(param_1 + 4);
  FUN_141914570(param_1 + 10);
  if ((void *)param_1[0x13] != (void *)0x0) {
    operator_delete((void *)param_1[0x13]);
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  operator_delete((void *)param_1[0x10]);
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  operator_delete((void *)param_1[10]);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete((void *)param_1[7]);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  operator_delete((void *)param_1[4]);
  return;
}




undefined1 FUN_1419149e0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  rsize_t _DstSize;
  int *_Dst;
  
  _Dst = *(int **)(param_1 + 0x98);
  if (*(int **)(param_1 + 0xa0) < _Dst) {
    _invalid_parameter_noinfo();
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (piVar1 < *(int **)(param_1 + 0x98)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x80);
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == piVar1) {
      return 0;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (*(int **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    if (param_2 == *_Dst) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (*(int **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  lVar4 = *(longlong *)(param_1 + 0xa0) - (longlong)(_Dst + 1) >> 2;
  if (0 < lVar4) {
    _DstSize = lVar4 << 2;
    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -4;
  if ((_Dst < *(int **)(param_1 + 0x98)) || (*(int **)(param_1 + 0xa0) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  return 1;
}




void FUN_141914b00(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  longlong *local_50 [3];
  uint *local_38;
  uint *local_30;
  undefined8 local_28;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar5 = (longlong *)FUN_141917800();
    if (plVar5 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else if ((*(longlong *)(param_1 + 0x10) != 0) || (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1419143b0(local_50,(undefined8 *)(param_1 + 0x80));
      puVar6 = local_38;
      plVar2 = local_50[0];
      if (local_30 < local_38) {
        _invalid_parameter_noinfo();
        plVar2 = local_50[0];
      }
      while( true ) {
        puVar3 = local_30;
        if (local_30 < local_38) {
          _invalid_parameter_noinfo();
        }
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_50[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar6 == puVar3) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar2;
        }
        if (*(uint **)(lVar7 + 0x20) <= puVar6) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *puVar6;
        cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,uVar1);
        if (cVar4 != '\0') {
          FUN_141915dc0(param_2,uVar1,'\x01','\x01');
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar2;
        }
        if (*(uint **)(lVar7 + 0x20) <= puVar6) {
          _invalid_parameter_noinfo();
        }
        puVar6 = puVar6 + 1;
      }
      if (local_38 != (uint *)0x0) {
        operator_delete(local_38);
      }
      local_38 = (uint *)0x0;
      local_30 = (uint *)0x0;
      local_28 = 0;
      operator_delete(local_50[0]);
    }
  }
  return;
}




longlong * FUN_141914cf0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar3 = 0;
  uVar1 = param_1[3];
  lVar4 = lVar3;
  if ((param_1[4] - uVar1 & 0xfffffffffffffffc) != 0) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) >> 2;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_141914660((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 4;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141914de4;
  }
  _invalid_parameter_noinfo();
LAB_141914de4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141914e20(undefined8 *param_1,uint param_2)

{
  FUN_141914900(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141913670(param_1);
  }
  return param_1;
}




void FUN_141914e50(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined4 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5] - (longlong)puVar1 >> 2;
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 2) < uVar3) {
    *puVar2 = *param_2;
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_141914cf0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_141914f00(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_141914e50((longlong *)(param_1 + 0x80),local_res10);
  return;
}




void FUN_141914f20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_b0 [3];
  void *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_70;
  longlong *local_68;
  longlong local_58 [6];
  
  local_70 = 0xfffffffffffffffe;
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0x98);
    local_80 = (longlong *)0x0;
    if (*(undefined4 **)(param_1 + 0xa0) < puVar6) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x80);
    local_80 = plVar1;
    local_res18 = operator_new(8);
    if (local_res18 == (longlong *)0x0) {
      local_b0[0] = (longlong *)0x0;
    }
    else {
      *local_res18 = (longlong)local_b0;
      local_b0[0] = local_res18;
    }
    iVar8 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88 = 0;
    local_res20 = local_res18;
    while( true ) {
      puVar2 = *(undefined4 **)(param_1 + 0xa0);
      local_68 = (longlong *)0x0;
      if (puVar2 < *(undefined4 **)(param_1 + 0x98)) {
        _invalid_parameter_noinfo();
      }
      local_68 = *(longlong **)(param_1 + 0x80);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_68)) {
        _invalid_parameter_noinfo();
      }
      if (puVar6 == puVar2) goto LAB_1419150ff;
      iVar8 = iVar8 + 1;
      if (1000 < iVar8) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar1;
      }
      if (*(undefined4 **)(lVar7 + 0x20) <= puVar6) {
        _invalid_parameter_noinfo();
      }
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,*puVar6);
      cVar3 = (**(code **)(*plVar4 + 0x80))();
      if (cVar3 != '\0') {
        FUN_141914e50((longlong *)local_b0,(undefined4 *)&local_res18);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar1;
      }
      if (*(undefined4 **)(lVar7 + 0x20) <= puVar6) {
        _invalid_parameter_noinfo();
      }
      puVar6 = puVar6 + 1;
    }
    log_InlineLogERROR(&DAT_1419462b8);
LAB_1419150ff:
    if (local_90 - (longlong)local_98 >> 2 != 0) {
      local_res18 = local_58;
      puVar5 = FUN_1419143b0(local_58,local_b0);
      (**(code **)(*plVar4 + 0x10))(plVar4,puVar5,param_2);
    }
    if (local_98 != (void *)0x0) {
      operator_delete(local_98);
    }
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88 = 0;
    operator_delete(local_b0[0]);
  }
  return;
}




void FUN_1419151a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_14192afb0(*(longlong *)(param_1 + 0x10),param_2);
  FUN_14192afb0(*(longlong *)(param_1 + 0x18),param_2);
  FUN_141914f20(param_1,param_2);
  return;
}




void FUN_141915250(longlong param_1)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    FUN_14193aa40(local_418);
    uVar1 = FUN_141912dd0(param_1,(longlong)local_418);
    if ((char)uVar1 == '\0') {
      FUN_14193aa90((undefined8 *)local_418);
    }
    else {
      FUN_1419151a0(param_1,local_418);
      FUN_14193aa90((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_141915320(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  longlong lVar11;
  CMsg local_438 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar7 = (longlong *)FUN_141917800();
    if (plVar7 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      uVar5 = FUN_141925140(*(longlong *)(param_1 + 0x10));
      FUN_14193b190(local_438);
      uVar8 = FUN_14193b570(local_438,2,uVar5,(int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 2),
                            (int)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 2));
      if ((char)uVar8 == '\0') {
        FUN_14193b1e0((undefined8 *)local_438);
      }
      else {
        puVar10 = *(undefined4 **)(param_1 + 0x98);
        if (*(undefined4 **)(param_1 + 0xa0) < puVar10) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(param_1 + 0x80);
        puVar2 = *(undefined4 **)(param_1 + 0xa0);
        if (puVar2 < *(undefined4 **)(param_1 + 0x98)) {
          _invalid_parameter_noinfo();
        }
        plVar3 = *(longlong **)(param_1 + 0x80);
        while( true ) {
          if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar3)) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 == puVar2) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar1;
          }
          if (*(undefined4 **)(lVar11 + 0x20) <= puVar10) {
            _invalid_parameter_noinfo();
          }
          uVar5 = *puVar10;
          cVar4 = (**(code **)(*plVar7 + 0x80))(plVar7,uVar5);
          if (cVar4 != '\0') {
            pcVar9 = (char *)(**(code **)(*plVar7 + 0x58))(plVar7,uVar5);
            uVar6 = (**(code **)(*plVar7 + 0x60))(plVar7,uVar5);
            FUN_14193b450((longlong)local_438,uVar6,pcVar9);
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar1;
          }
          if (*(undefined4 **)(lVar11 + 0x20) <= puVar10) {
            _invalid_parameter_noinfo();
          }
          puVar10 = puVar10 + 1;
        }
        FUN_1419151a0(param_1,local_438);
        FUN_14193b1e0((undefined8 *)local_438);
      }
    }
  }
  return;
}




undefined1 FUN_1419155f0(longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  undefined4 local_res20 [2];
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar8 = (longlong *)FUN_141917800();
    if (plVar8 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      cVar2 = (**(code **)(*plVar8 + 0x80))(plVar8,param_2);
      if (cVar2 != '\0') {
        iVar4 = FUN_141925140(*(longlong *)(param_1 + 0x10));
        if ((iVar4 != param_3) && (iVar4 = FUN_141925140(*(longlong *)(param_1 + 0x18)), iVar4 != param_3)) {
          return 0;
        }
        bVar3 = FUN_141924f60(*(longlong *)(param_1 + 0x10));
        if ((bVar3) && (bVar3 = FUN_141924f60(*(longlong *)(param_1 + 0x18)), bVar3)) {
          uVar5 = (**(code **)(*plVar8 + 0x158))(plVar8,param_2);
          cVar2 = (**(code **)(*plVar8 + 0x168))(plVar8,uVar5);
          if (cVar2 == '\0') {
            return 0;
          }
          cVar2 = (**(code **)(*plVar8 + 0xb8))(plVar8,param_2,uVar5);
          if (cVar2 == '\0') {
            return 0;
          }
          cVar2 = (**(code **)(*plVar8 + 0x178))(plVar8,uVar5);
          if (cVar2 != '\0') {
            pIVar9 = theInstance();
            lVar1 = *plVar8;
            uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TEAM_ARENIC_NOT_INVITE");
            (**(code **)(lVar1 + 0x28))(plVar8,param_2,uVar10);
            return 0;
          }
          cVar2 = (**(code **)(*plVar8 + 0x180))(plVar8);
          if (cVar2 == '\0') {
            lVar1 = *plVar8;
            uVar6 = (**(code **)(lVar1 + 0x78))(plVar8,param_2);
            uVar7 = (**(code **)(*plVar8 + 0x70))(plVar8,param_2);
            (**(code **)(lVar1 + 0x90))(plVar8,param_2,uVar5,uVar7,uVar6,1);
          }
          FUN_14193b190(local_448);
          uVar10 = FUN_14193b210(local_448,0,param_3);
          if ((char)uVar10 != '\0') {
            (**(code **)(*plVar8 + 0x18))(plVar8,param_2,local_448);
          }
          (**(code **)(*plVar8 + 0xb0))(plVar8,param_2,*(undefined4 *)(param_1 + 8));
          local_res20[0] = param_2;
          FUN_141914e50((longlong *)(param_1 + 0x80),local_res20);
          FUN_14193aa40(local_858);
          uVar10 = FUN_141912dd0(param_1,(longlong)local_858);
          if ((char)uVar10 != '\0') {
            (**(code **)(*plVar8 + 0x18))(plVar8,param_2,local_858);
          }
          FUN_141915320(param_1);
          FUN_14193aa90((undefined8 *)local_858);
          FUN_14193b1e0((undefined8 *)local_448);
          return 1;
        }
        pIVar9 = theInstance();
        lVar1 = *plVar8;
        uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
        (**(code **)(lVar1 + 0x28))(plVar8,param_2,uVar10);
      }
    }
  }
  return 0;
}




void FUN_141915900(longlong param_1,int param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  CMsg local_438 [1040];
  
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    if (param_4 != '\0') {
      FUN_14193b190(local_438);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        uVar2 = FUN_141925140(*(longlong *)(param_1 + 0x10));
        uVar4 = FUN_14193b210(local_438,3,uVar2);
        if ((char)uVar4 != '\0') {
          (**(code **)(*plVar3 + 0x18))(plVar3,param_2,local_438);
        }
      }
      FUN_14193b1e0((undefined8 *)local_438);
    }
    uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,param_2);
    cVar1 = (**(code **)(*plVar3 + 0x168))(plVar3,uVar2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,uVar2);
      if ((cVar1 != '\0') && (param_3 != '\0')) {
        (**(code **)(*plVar3 + 0x120))(plVar3,param_2);
      }
    }
    FUN_1419149e0(param_1,param_2);
    if (param_4 != '\0') {
      FUN_141915320(param_1);
    }
  }
  return;
}




void FUN_141915a40(longlong param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  CMsg local_428 [1040];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar3 = (longlong *)FUN_141917800();
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      bVar1 = FUN_141924f60(*(longlong *)(param_1 + 0x10));
      if ((bVar1) && (bVar1 = FUN_141924f60(*(longlong *)(param_1 + 0x18)), bVar1)) {
        iVar2 = FUN_141925190(*(longlong *)(param_1 + 0x10));
        if (iVar2 == param_3) {
          plVar7 = (longlong *)(param_1 + 0x20);
          lVar8 = *(longlong *)(param_1 + 0x10);
        }
        else {
          iVar2 = FUN_141925190(*(longlong *)(param_1 + 0x18));
          if (iVar2 != param_3) {
            return;
          }
          plVar7 = (longlong *)(param_1 + 0x50);
          lVar8 = *(longlong *)(param_1 + 0x18);
        }
        if ((plVar7 != (longlong *)0x0) && (lVar8 != 0)) {
          FUN_141914e50(plVar7,local_res10);
          FUN_14193b190(local_428);
          pcVar4 = (char *)(**(code **)(*plVar3 + 0x58))(plVar3,param_2);
          pcVar5 = (char *)FUN_1419251a0(lVar8);
          uVar6 = FUN_14193b620(local_428,4,pcVar5,pcVar4);
          if ((char)uVar6 != '\0') {
            FUN_1419151a0(param_1,local_428);
          }
          FUN_141915320(param_1);
          FUN_14193b1e0((undefined8 *)local_428);
        }
      }
    }
  }
  return;
}




exception * FUN_141915c20(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141915c80(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141915cbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141915cd0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141915d70(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong **)(param_1 + 0x2c0) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141939940(*(longlong **)(param_1 + 0x2c0),param_2,param_3);
  return;
}




void FUN_141915dc0(longlong param_1,uint param_2,char param_3,char param_4)

{
  if (*(longlong **)(param_1 + 0x2c0) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  FUN_141939400(*(longlong **)(param_1 + 0x2c0),param_2,param_3,param_4);
  return;
}




void FUN_141915e10(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,int param_6)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    FUN_141925140(param_2);
    FUN_14192b9e0(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}




bool FUN_141915ea0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong **)(param_1 + 0x2c0) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return false;
  }
  bVar1 = FUN_141938a80(*(longlong **)(param_1 + 0x2c0),param_2);
  return bVar1;
}




void FUN_141915ef0(longlong param_1)

{
  FUN_141914900((undefined8 *)(param_1 + 8));
  return;
}




undefined4 FUN_141915f10(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  uVar1 = FUN_141924fb0(param_2);
  if (899 < uVar1) {
    return 1000;
  }
  if (299 < uVar1) {
    return 700;
  }
  uVar2 = 200;
  if (0x3b < uVar1) {
    uVar2 = 400;
  }
  return uVar2;
}




void FUN_141915fb0(longlong param_1,undefined4 param_2)

{
  FUN_1419326f0(param_1 + 0x118,param_2);
  return;
}




void FUN_141915fe0(longlong param_1,undefined4 param_2,int param_3)

{
  FUN_141932980(param_1 + 0x118,param_2,param_3);
  return;
}




undefined1 FUN_141916010(longlong param_1)

{
  int iVar1;
  tm *ptVar2;
  __time64_t local_res10 [3];
  
  local_res10[0] = _time64((__time64_t *)0x0);
  ptVar2 = _localtime64(local_res10);
  if ((ptVar2 != (tm *)0x0) &&
     ((iVar1 = ptVar2->tm_hour, iVar1 < *(int *)(param_1 + 0x2c8) ||
      (((*(int *)(param_1 + 0x2cc) <= iVar1 && (iVar1 < *(int *)(param_1 + 0x2d0))) || (*(int *)(param_1 + 0x2d4) <= iVar1)))))) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x2d8);
}




undefined8 FUN_141916070(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong extraout_RAX;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x150))();
  if ((char)uVar1 != '\0') {
    if (param_3 != 0) {
      log_InlineLogERROR("CTeamArenicMgr::ClearArenicMap, found invalid user in map(%d), %s");
      uVar1 = extraout_RAX;
    }
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}




void FUN_1419160d0(longlong param_1,uint param_2)

{
  FUN_1419373f0(param_1 + 0x118,param_2);
  return;
}




void FUN_1419160e0(longlong param_1,uint param_2)

{
  FUN_141935ce0(param_1 + 0x118,param_2);
  return;
}




void FUN_1419160f0(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_141934750(param_1 + 0x118,param_2,param_3);
  return;
}




void FUN_141916100(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_141934950(param_1 + 0x118,param_2,param_3);
  return;
}




void FUN_141916110(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_141934b50(param_1 + 0x118,param_2,param_3);
  return;
}




void FUN_141916120(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000141916130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogMessage("CTeamArenicMgr::SetTeamArenicStatus, set teamarenic open status: %d");
  return;
}




bool FUN_141916140(int *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  iVar2 = FUN_141925200(param_2);
  uVar4 = iVar2 - *param_1 >> 0x1f;
  iVar5 = (iVar2 - *param_1 ^ uVar4) - uVar4;
  iVar2 = FUN_141925200(param_3);
  uVar4 = iVar2 - *param_1 >> 0x1f;
  iVar2 = (iVar2 - *param_1 ^ uVar4) - uVar4;
  if (iVar5 == iVar2) {
    uVar4 = FUN_141925140(param_2);
    uVar3 = FUN_141925140(param_3);
    bVar1 = uVar3 < uVar4;
  }
  else {
    bVar1 = iVar5 < iVar2;
  }
  return bVar1;
}




bool FUN_141916230(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141916270(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1419162c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141916300(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_141916350(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141916390(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1419163e0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_141916420(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141916442;
  }
  lVar2 = *plVar1;
LAB_141916442:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141916460(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141916482;
  }
  lVar2 = *plVar1;
LAB_141916482:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




int FUN_1419164b0(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_1419164e0(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




void FUN_1419165f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_141916760(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_1419168d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0xd1) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




void FUN_141916960(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141916984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_141916a90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141916b80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141916ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_141916c10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141916c32;
  }
  lVar2 = *plVar1;
LAB_141916c32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141916c50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0xd1) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0xd1);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0xd1);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0xd1);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0xd1);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141916c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141916cf0(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"vector<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
}




longlong FUN_141916d80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_141916e10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141916e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141916eb0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141916ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141916f50(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0xd1) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0xd1);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0xd1);
        lVar3 = lVar4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0xd1);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0xd1);
    }
    if (*(char *)(param_1[1] + 0xd1) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0xd1) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141916f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1419170b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_1419170e0;
  }
  else {
LAB_1419170e0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141917108;
  }
  _invalid_parameter_noinfo();
LAB_141917108:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141917120(undefined8 *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_141939bf0((longlong *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_141917150(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141917180(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419171b0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_141917270(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419172f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141917370(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141917400(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xd8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0xd8);
  return;
}




void FUN_1419174e0(longlong param_1)

{
  FUN_141914900((undefined8 *)(param_1 + 0x20));
  return;
}




longlong FUN_141917510(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_1419175e0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void * FUN_1419176d0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141917710(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_3 < param_2) {
    do {
      lVar6 = (param_2 + -1) / 2;
      lVar1 = *(longlong *)(param_1 + lVar6 * 8);
      if (lVar1 == 0) break;
      if (param_4 != 0) {
        iVar3 = FUN_141925200(lVar1);
        uVar5 = iVar3 - param_5 >> 0x1f;
        iVar7 = (iVar3 - param_5 ^ uVar5) - uVar5;
        iVar3 = FUN_141925200(param_4);
        uVar5 = iVar3 - param_5 >> 0x1f;
        iVar3 = (iVar3 - param_5 ^ uVar5) - uVar5;
        if (iVar7 == iVar3) {
          uVar5 = FUN_141925140(lVar1);
          uVar4 = FUN_141925140(param_4);
          bVar2 = uVar4 < uVar5;
        }
        else {
          bVar2 = iVar7 < iVar3;
        }
        if (!bVar2) break;
      }
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar6 * 8);
      param_2 = lVar6;
    } while (param_3 < lVar6);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




undefined8 FUN_141917800(void)

{
  if (DAT_14195d5c0 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  return *(undefined8 *)(DAT_14195d5c0 + 8);
}




longlong FUN_141917850(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14195d5c0;
  if (DAT_14195d5c0 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  return lVar1;
}




ulonglong FUN_1419178a0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  longlong *plVar5;
  undefined8 extraout_RAX_01;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x298))(plVar4,40000,1);
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141947800);
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      *(undefined1 *)(param_1 + 0x2d8) = 0;
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,2);
      uVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      *(undefined4 *)(param_1 + 0x2c8) = uVar1;
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,3);
      uVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      *(undefined4 *)(param_1 + 0x2cc) = uVar1;
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,4);
      uVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      *(undefined4 *)(param_1 + 0x2d0) = uVar1;
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,5);
      uVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      *(undefined4 *)(param_1 + 0x2d4) = uVar1;
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,6);
      iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if (((*(int *)(param_1 + 0x2d0) < *(int *)(param_1 + 0x2d4)) && (*(int *)(param_1 + 0x2c8) < *(int *)(param_1 + 0x2cc))) && (iVar2 == 1)) {
        *(undefined1 *)(param_1 + 0x2d8) = 1;
      }
      (**(code **)*plVar4)(plVar4);
      log_InlineLogMessage("CTeamArenicMgr::GetOpenTime, teamarenic open status: %d");
      uVar3 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
    }
  }
  return uVar3;
}




ulonglong FUN_141917a20(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(param_1[1] + *param_1) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    param_1[1] = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




int FUN_141917a80(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




longlong * FUN_141917ab0(longlong *param_1)

{
  FUN_141916960(param_1);
  return param_1;
}




bool FUN_141917ad0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141917b20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_141917b80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141917bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_141917c20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141917c50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0xd1) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_141917cb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141917cc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141917ce2;
  }
  lVar2 = *plVar1;
LAB_141917ce2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141917d00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141917d22;
  }
  lVar2 = *plVar1;
LAB_141917d22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141917d40(longlong *param_1)

{
  FUN_141916b80(param_1);
  return param_1;
}




longlong * FUN_141917d60(longlong *param_1)

{
  FUN_141916c50(param_1);
  return param_1;
}




longlong FUN_141917d80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141917da2;
  }
  lVar2 = *plVar1;
LAB_141917da2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141917dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141917ef0(longlong *param_1)

{
  FUN_141916e10(param_1);
  return param_1;
}




longlong * FUN_141917f20(longlong *param_1)

{
  FUN_141916eb0(param_1);
  return param_1;
}




longlong * FUN_141917f40(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141916c50(param_1);
  return param_2;
}




longlong * FUN_141917f70(longlong *param_1)

{
  FUN_141916f50(param_1);
  return param_1;
}




void FUN_141917fa0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141918030(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1419180a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_141918120(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xd8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0xd8);
  return;
}




longlong * FUN_1419181a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141916960(param_1);
  return param_2;
}




longlong * FUN_1419181d0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141916b80(param_1);
  return param_2;
}




longlong * FUN_141918200(longlong *param_1,longlong param_2)

{
  FUN_1419170b0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_141918240(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141918280(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_1419182c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void * FUN_141918310(void *param_1,uint param_2)

{
  FUN_141914900((undefined8 *)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_141918370(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void * FUN_141918410(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141918450(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  int local_res20 [2];
  
  local_res20[0] = param_4;
  bVar2 = FUN_141916140(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_141916140(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_141916140(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_1419184f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  lVar8 = param_2;
  do {
    lVar7 = lVar8 * 2 + 2;
    if (param_3 <= lVar7) {
      if (lVar7 == param_3) {
        *(undefined8 *)(param_1 + lVar8 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
        lVar8 = param_3 + -1;
      }
      FUN_141917710(param_1,lVar8,param_2,param_4,param_5);
      return;
    }
    lVar1 = *(longlong *)(param_1 + lVar7 * 8);
    lVar2 = *(longlong *)(param_1 + -8 + lVar7 * 8);
    if (lVar1 != 0) {
      if (lVar2 != 0) {
        iVar4 = FUN_141925200(lVar1);
        uVar6 = iVar4 - param_5 >> 0x1f;
        iVar9 = (iVar4 - param_5 ^ uVar6) - uVar6;
        iVar4 = FUN_141925200(lVar2);
        uVar6 = iVar4 - param_5 >> 0x1f;
        iVar4 = (iVar4 - param_5 ^ uVar6) - uVar6;
        if (iVar9 == iVar4) {
          uVar6 = FUN_141925140(lVar1);
          uVar5 = FUN_141925140(lVar2);
          bVar3 = uVar5 < uVar6;
        }
        else {
          bVar3 = iVar9 < iVar4;
        }
        if (!bVar3) goto LAB_14191859d;
      }
      lVar7 = lVar8 * 2 + 1;
    }
LAB_14191859d:
    *(undefined8 *)(param_1 + lVar8 * 8) = *(undefined8 *)(param_1 + lVar7 * 8);
    lVar8 = lVar7;
  } while( true );
}




void * FUN_141918610(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void FUN_141918650(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,int param_5)

{
  *param_3 = *param_1;
  FUN_1419184f0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




longlong * FUN_141918680(longlong *param_1)

{
  FUN_141916960(param_1);
  return param_1;
}




longlong FUN_1419186a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419186c2;
  }
  lVar2 = *plVar1;
LAB_1419186c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419186e0(longlong *param_1)

{
  FUN_141916b80(param_1);
  return param_1;
}




longlong FUN_141918700(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141918722;
  }
  lVar2 = *plVar1;
LAB_141918722:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141918740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141918762;
  }
  lVar2 = *plVar1;
LAB_141918762:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141918780(longlong *param_1)

{
  FUN_141916c50(param_1);
  return param_1;
}




void FUN_1419187a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419187c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419187e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141918800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141918820(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141918820(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_141918870(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141918870(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong FUN_1419188c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419188e2;
  }
  lVar2 = *plVar1;
LAB_1419188e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141918900(longlong *param_1)

{
  FUN_141916e10(param_1);
  return param_1;
}




undefined8 * FUN_141918920(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong FUN_141918960(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141918982;
  }
  lVar2 = *plVar1;
LAB_141918982:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419189a0(longlong *param_1)

{
  FUN_141916eb0(param_1);
  return param_1;
}




undefined8 * FUN_1419189c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141918a00(longlong *param_1)

{
  FUN_141916f50(param_1);
  return param_1;
}




undefined8 FUN_141918a20(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_141916cf0();
    }
    lVar1 = FUN_141917fa0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_141918a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}




void FUN_141918b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}




undefined8 * FUN_141918b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141918bf0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141918c40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_141918c80(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141918cea;
  }
  _invalid_parameter_noinfo();
LAB_141918cea:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141918d20(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




void FUN_141918d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}




void FUN_141918de0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  *(undefined1 *)((longlong)puVar1 + 0xd1) = 0;
  return;
}




undefined8 * FUN_141918e50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141918ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141918ef0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141918f40(longlong param_1)

{
  FUN_141914900((undefined8 *)(param_1 + 0x20));
  return;
}




void * FUN_141918fa0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void FUN_141918ff0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    FUN_141916c50(param_1);
  }
  return;
}




void * FUN_141919080(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_1419190c0(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141918450(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_141918450(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_141918450(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_141918450(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_141918450(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1419191a0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_1419184f0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_141919220(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((param_1 != param_2) && (plVar9 = param_1 + 1, plVar9 != param_2)) {
    lVar10 = (longlong)plVar9 - (longlong)param_1;
    do {
      lVar1 = *plVar9;
      lVar6 = *param_1;
      plVar8 = plVar9;
      if (lVar1 == 0) {
LAB_141919300:
        while( true ) {
          lVar6 = plVar8[-1];
          if (lVar1 == 0) break;
          if (lVar6 != 0) {
            iVar3 = FUN_141925200(lVar1);
            uVar5 = iVar3 - param_3 >> 0x1f;
            iVar7 = (iVar3 - param_3 ^ uVar5) - uVar5;
            iVar3 = FUN_141925200(lVar6);
            uVar5 = iVar3 - param_3 >> 0x1f;
            iVar3 = (iVar3 - param_3 ^ uVar5) - uVar5;
            if (iVar7 == iVar3) {
              uVar5 = FUN_141925140(lVar6);
              uVar4 = FUN_141925140(lVar1);
              bVar2 = uVar5 < uVar4;
            }
            else {
              bVar2 = iVar7 < iVar3;
            }
            if (!bVar2) break;
          }
          *plVar8 = plVar8[-1];
          plVar8 = plVar8 + -1;
        }
        *plVar8 = lVar1;
      }
      else {
        if (lVar6 != 0) {
          iVar3 = FUN_141925200(lVar1);
          uVar5 = iVar3 - param_3 >> 0x1f;
          iVar7 = (iVar3 - param_3 ^ uVar5) - uVar5;
          iVar3 = FUN_141925200(lVar6);
          uVar5 = iVar3 - param_3 >> 0x1f;
          iVar3 = (iVar3 - param_3 ^ uVar5) - uVar5;
          if (iVar7 == iVar3) {
            uVar5 = FUN_141925140(lVar6);
            uVar4 = FUN_141925140(lVar1);
            bVar2 = uVar5 < uVar4;
          }
          else {
            bVar2 = iVar7 < iVar3;
          }
          if (!bVar2) goto LAB_141919300;
        }
        lVar6 = lVar10 >> 3;
        if (0 < lVar6) {
          memmove_s(plVar9 + (1 - lVar6),lVar6 * 8,param_1,lVar6 * 8);
        }
        *param_1 = lVar1;
      }
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar9 != param_2);
  }
  return;
}




void FUN_1419193b0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_1419184f0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1,param_3);
  return;
}




void FUN_141919400(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141918820(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_1419194a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141918870(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong FUN_141919520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141919542;
  }
  lVar2 = *plVar1;
LAB_141919542:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141919560(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141919582;
  }
  lVar2 = *plVar1;
LAB_141919582:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419195a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419195c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419195e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141919680(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141918b00();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1419196c0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(param_2 + 0x20));
  return;
}




undefined8 * FUN_1419196f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141919730(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141919780(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1419197c0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1419197f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141919840(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




void FUN_1419198a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141918d80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419198e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x29) == '\0') {
    puVar1 = FUN_141918b60(param_1,puVar3,param_3,puVar3,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((longlong)puVar3 + 0x29) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_1419198e0(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_1419198e0(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_141919970(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0xd1) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0xd1) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xd1) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0xd1) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0xd1) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xd1) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_141919a50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141918de0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0xd1) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141919a90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141919ae0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0xd1);
  while (cVar1 == '\0') {
    FUN_141919ae0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_141914900(param_2 + 4);
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0xd1);
  }
  return;
}




undefined8 * FUN_141919b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141919bb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141919c00(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0xd1) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0xd1) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0xd1);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0xd1);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xd1);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xd1);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void * FUN_141919d30(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141919d70(undefined8 *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *local_58;
  
  plVar8 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_1419190c0(param_2,plVar8,param_3 + -1,param_4);
  plVar11 = plVar8;
  do {
    do {
      plVar13 = plVar11;
      if (plVar13 <= param_2) goto joined_r0x000141919eac;
      lVar1 = plVar13[-1];
      lVar2 = *plVar13;
      plVar11 = plVar13 + -1;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141919eac;
        iVar4 = FUN_141925200(lVar1);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
        iVar4 = FUN_141925200(lVar2);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
        if (iVar12 == iVar4) {
          uVar6 = FUN_141925140(lVar1);
          uVar5 = FUN_141925140(lVar2);
          bVar3 = uVar5 < uVar6;
        }
        else {
          bVar3 = iVar12 < iVar4;
        }
        if (bVar3) goto joined_r0x000141919eac;
      }
      lVar1 = *plVar13;
      lVar2 = *plVar11;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar4 = FUN_141925200(lVar1);
    uVar6 = iVar4 - param_4 >> 0x1f;
    iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
    iVar4 = FUN_141925200(lVar2);
    uVar6 = iVar4 - param_4 >> 0x1f;
    iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
    if (iVar12 == iVar4) {
      uVar6 = FUN_141925140(lVar1);
      uVar5 = FUN_141925140(lVar2);
      bVar3 = uVar5 < uVar6;
    }
    else {
      bVar3 = iVar12 < iVar4;
    }
  } while (!bVar3);
joined_r0x000141919eac:
  do {
    do {
      plVar8 = plVar8 + 1;
      plVar11 = plVar8;
      local_58 = plVar8;
      plVar7 = plVar13;
      if (param_3 <= plVar8) goto joined_r0x000141919f93;
      lVar1 = *plVar8;
      lVar2 = *plVar13;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141919f93;
        iVar4 = FUN_141925200(lVar1);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
        iVar4 = FUN_141925200(lVar2);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
        if (iVar12 == iVar4) {
          uVar6 = FUN_141925140(lVar1);
          uVar5 = FUN_141925140(lVar2);
          bVar3 = uVar5 < uVar6;
        }
        else {
          bVar3 = iVar12 < iVar4;
        }
        if (bVar3) goto joined_r0x000141919f93;
      }
      lVar1 = *plVar13;
      lVar2 = *plVar8;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar4 = FUN_141925200(lVar1);
    uVar6 = iVar4 - param_4 >> 0x1f;
    iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
    iVar4 = FUN_141925200(lVar2);
    uVar6 = iVar4 - param_4 >> 0x1f;
    iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
    if (iVar12 == iVar4) {
      uVar6 = FUN_141925140(lVar1);
      uVar5 = FUN_141925140(lVar2);
      bVar3 = uVar5 < uVar6;
    }
    else {
      bVar3 = iVar12 < iVar4;
    }
  } while (!bVar3);
joined_r0x000141919f93:
  do {
    plVar10 = plVar7;
    plVar7 = plVar13;
    if (param_3 <= plVar8) goto joined_r0x00014191a09d;
    lVar1 = *plVar10;
    lVar2 = *plVar8;
    if (lVar1 == 0) {
LAB_14191a006:
      lVar1 = *plVar8;
      lVar2 = *plVar10;
      if (lVar1 != 0) {
        local_58 = plVar8;
        if (lVar2 != 0) {
          iVar4 = FUN_141925200(lVar1);
          uVar6 = iVar4 - param_4 >> 0x1f;
          iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
          iVar4 = FUN_141925200(lVar2);
          uVar6 = iVar4 - param_4 >> 0x1f;
          iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
          if (iVar12 == iVar4) {
            uVar6 = FUN_141925140(lVar1);
            uVar5 = FUN_141925140(lVar2);
            bVar3 = uVar5 < uVar6;
          }
          else {
            bVar3 = iVar12 < iVar4;
          }
          if (!bVar3) goto LAB_14191a068;
        }
joined_r0x00014191a09d:
        for (; plVar9 = plVar8, param_2 < plVar13; plVar13 = plVar13 + -1) {
          plVar7 = plVar7 + -1;
          lVar1 = *plVar7;
          lVar2 = *plVar10;
          if (lVar1 == 0) {
LAB_14191a117:
            lVar1 = *plVar10;
            lVar2 = *plVar7;
            if (lVar1 != 0) {
              plVar9 = local_58;
              if (lVar2 == 0) break;
              iVar4 = FUN_141925200(lVar1);
              uVar6 = iVar4 - param_4 >> 0x1f;
              iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
              iVar4 = FUN_141925200(lVar2);
              uVar6 = iVar4 - param_4 >> 0x1f;
              iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
              if (iVar12 == iVar4) {
                uVar6 = FUN_141925140(lVar1);
                uVar5 = FUN_141925140(lVar2);
                bVar3 = uVar5 < uVar6;
              }
              else {
                bVar3 = iVar12 < iVar4;
              }
              if (bVar3) break;
            }
            plVar10 = plVar10 + -1;
            if (plVar10 != plVar7) {
              lVar1 = *plVar10;
              *plVar10 = *plVar7;
              *plVar7 = lVar1;
            }
          }
          else if (lVar2 != 0) {
            iVar4 = FUN_141925200(lVar1);
            uVar6 = iVar4 - param_4 >> 0x1f;
            iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
            iVar4 = FUN_141925200(lVar2);
            uVar6 = iVar4 - param_4 >> 0x1f;
            iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
            if (iVar12 == iVar4) {
              uVar6 = FUN_141925140(lVar1);
              uVar5 = FUN_141925140(lVar2);
              bVar3 = uVar5 < uVar6;
            }
            else {
              bVar3 = iVar12 < iVar4;
            }
            if (!bVar3) goto LAB_14191a117;
          }
          plVar8 = local_58;
        }
        if (plVar13 == param_2) {
          if (plVar9 == param_3) {
            *param_1 = plVar10;
            param_1[1] = plVar11;
            return;
          }
          if ((plVar11 != plVar9) && (plVar10 != plVar11)) {
            lVar1 = *plVar10;
            *plVar10 = *plVar11;
            *plVar11 = lVar1;
          }
          plVar8 = plVar9 + 1;
          plVar11 = plVar11 + 1;
          local_58 = plVar8;
          plVar7 = plVar10 + 1;
          if (plVar10 != plVar9) {
            lVar1 = *plVar10;
            *plVar10 = *plVar9;
            *plVar9 = lVar1;
          }
        }
        else {
          plVar13 = plVar13 + -1;
          if (plVar9 == param_3) {
            plVar7 = plVar10 + -1;
            if (plVar13 != plVar7) {
              lVar1 = *plVar13;
              *plVar13 = *plVar7;
              *plVar7 = lVar1;
            }
            plVar11 = plVar11 + -1;
            plVar8 = plVar9;
            if (plVar7 != plVar11) {
              lVar1 = *plVar7;
              *plVar7 = *plVar11;
              *plVar11 = lVar1;
            }
          }
          else {
            if (plVar9 != plVar13) {
              lVar1 = *plVar9;
              *plVar9 = *plVar13;
              *plVar13 = lVar1;
            }
            plVar8 = plVar9 + 1;
            local_58 = plVar8;
            plVar7 = plVar10;
          }
        }
        goto joined_r0x000141919f93;
      }
LAB_14191a068:
      plVar9 = plVar11 + 1;
      if (plVar11 != plVar8) {
        lVar1 = *plVar11;
        *plVar11 = *plVar8;
        *plVar8 = lVar1;
      }
    }
    else {
      plVar9 = plVar11;
      if (lVar2 != 0) {
        iVar4 = FUN_141925200(lVar1);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar12 = (iVar4 - param_4 ^ uVar6) - uVar6;
        iVar4 = FUN_141925200(lVar2);
        uVar6 = iVar4 - param_4 >> 0x1f;
        iVar4 = (iVar4 - param_4 ^ uVar6) - uVar6;
        if (iVar12 == iVar4) {
          uVar6 = FUN_141925140(lVar1);
          uVar5 = FUN_141925140(lVar2);
          bVar3 = uVar5 < uVar6;
        }
        else {
          bVar3 = iVar12 < iVar4;
        }
        if (!bVar3) goto LAB_14191a006;
      }
    }
    plVar8 = plVar8 + 1;
    plVar11 = plVar9;
    local_58 = plVar8;
    plVar7 = plVar10;
  } while( true );
}




void FUN_14191a290(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (1 < lVar3) {
    lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
    while (0 < lVar2) {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + -1;
      FUN_1419184f0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_14191a310(longlong *param_1,longlong *param_2,int param_3)

{
  FUN_141919220(param_1,param_2,param_3);
  return;
}




void FUN_14191a330(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1419184f0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1,param_3);
  }
  return;
}




ulonglong FUN_14191a370(longlong param_1,longlong param_2)

{
  int iVar1;
  ulong uVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong extraout_RAX_00;
  undefined8 *puVar5;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_141919400(param_1 + 0x10);
    FUN_141919400(param_1 + 0x50);
    FUN_1419194a0(param_1 + 0x90);
    iVar1 = tq::DateStamp(0);
    *(int *)(param_1 + 0x110) = iVar1;
    iVar1 = tq::DateStampPass(iVar1,-1);
    *(int *)(param_1 + 0x114) = iVar1;
    uVar4 = FUN_1419178a0(param_1);
    if ((char)uVar4 == '\0') {
      log_InlineLogERROR("CTeamArenicMgr::Create, can not get teamarenic open time, please setting cq_config(40000) info");
      *(undefined1 *)(param_1 + 0x2d8) = 0;
    }
    *(undefined4 *)(param_1 + 0x2dc) = 3;
    uVar2 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x2e0) = uVar2 / 1000;
    DAT_14195d5c0 = param_1;
    uVar4 = FUN_141936df0(param_1 + 0x118);
    if ((char)uVar4 == '\0') {
      log_InlineLogERROR("CTeamArenicMgr::Create, failed in init rank manager");
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      puVar5 = FUN_141939ce0();
      *(undefined8 **)(param_1 + 0x2c0) = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        log_InlineLogERROR("CTeamArenicMgr::Create, failed in create witness manager");
        uVar3 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      }
    }
  }
  return uVar3;
}




longlong * FUN_14191a4e0(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




longlong * FUN_14191a5f0(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




undefined8 * FUN_14191a710(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}




void FUN_14191a770(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14191a7b0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_14191a800(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_14191a850(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14191a870(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14191a890(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14191a8b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_14191a940(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_141918a80(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_14191ac80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_14191ad10(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_1419198e0(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x29) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x29);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x29);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x29);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x29);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_14191adc0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_141918b60(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_14191b100(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_14191b190(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141919970(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_14191b1b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_14191b200(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141919ae0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_14191b240(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14191b290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void * FUN_14191b310(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




void FUN_14191b350(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_1419184f0((longlong)param_1,0,lVar2 + -8 >> 3,lVar1,param_3);
  }
  return;
}




void FUN_14191b3c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  plVar4 = *(longlong **)param_1[0x18];
  plVar1 = (longlong *)param_1[0x12];
LAB_14191b411:
  do {
    plVar5 = (longlong *)param_1[0x18];
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[0x12])) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) {
      FUN_1419194a0((longlong)(param_1 + 0x12));
      plVar4 = *(longlong **)param_1[8];
      plVar1 = (longlong *)param_1[2];
      do {
        while( true ) {
          while( true ) {
            plVar5 = (longlong *)param_1[8];
            if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[2])) {
              _invalid_parameter_noinfo();
            }
            if (plVar4 == plVar5) {
              FUN_141919400((longlong)(param_1 + 2));
              FUN_141919400((longlong)(param_1 + 10));
              if (param_1[0x58] != 0) {
                FUN_141939bf0((longlong *)param_1[0x58]);
                param_1[0x58] = 0;
              }
              DAT_14195d5c0 = 0;
              if (param_1 != (undefined8 *)0x0) {
                (**(code **)*param_1)(param_1,1);
              }
              return;
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar6 = 0;
            }
            else {
              lVar6 = *plVar1;
            }
            if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            puVar2 = (undefined8 *)plVar4[4];
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            if (*(char *)((longlong)plVar4 + 0x29) == '\0') break;
            _invalid_parameter_noinfo();
          }
          plVar5 = plVar4;
          plVar3 = (longlong *)plVar4[2];
          if (*(char *)(plVar4[2] + 0x29) != '\0') break;
          do {
            plVar4 = plVar3;
            plVar3 = (longlong *)*plVar4;
          } while (*(char *)(*plVar4 + 0x29) == '\0');
        }
        do {
          plVar4 = (longlong *)plVar5[1];
          if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
          bVar7 = plVar5 == (longlong *)plVar4[2];
          plVar5 = plVar4;
        } while (bVar7);
      } while( true );
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = (undefined8 *)plVar4[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar4 + 0x29) != '\0') {
      _invalid_parameter_noinfo();
      goto LAB_14191b411;
    }
    plVar5 = plVar4;
    plVar3 = (longlong *)plVar4[2];
    if (*(char *)(plVar4[2] + 0x29) == '\0') {
      do {
        plVar4 = plVar3;
        plVar3 = (longlong *)*plVar4;
      } while (*(char *)(*plVar4 + 0x29) == '\0');
    }
    else {
      do {
        plVar4 = (longlong *)plVar5[1];
        if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
        bVar7 = plVar5 == (longlong *)plVar4[2];
        plVar5 = plVar4;
      } while (bVar7);
    }
  } while( true );
}




undefined8 FUN_14191b650(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x40);
    local_28 = *(longlong *)(param_1 + 0x10);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x40);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar6;
}




undefined8 FUN_14191b750(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xc0))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0xc0);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar8 = *(undefined8 **)(param_1 + 0xc0);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xc0);
    local_28 = *(longlong *)(param_1 + 0x90);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xc0);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x90))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar6;
}




undefined8 FUN_14191b870(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))();
  uVar2 = FUN_14191b750(param_1,uVar1);
  return uVar2;
}




ulonglong FUN_14191b8d0(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar4;
  
  lVar3 = FUN_14191b650(param_1,param_2);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_14192d370(lVar3);
  uVar4 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    iVar1 = FUN_14192d7c0(lVar3);
    uVar4 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != 0) {
      FUN_14192d7a0(lVar3);
      lVar3 = FUN_14191b870(param_1);
      uVar4 = 0;
      if (lVar3 != 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),param_2);
        iVar2 = FUN_141925150(lVar3);
        uVar4 = CONCAT44(extraout_var_01,iVar2);
        if (iVar1 == iVar2) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




ulonglong FUN_14191b970(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar3;
  
  lVar2 = FUN_14191b750(param_1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_141924ed0(lVar2);
    uVar3 = CONCAT44(extraout_var,iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_141924ed0(lVar2);
      uVar3 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 != 1) {
        iVar1 = FUN_141924ed0(lVar2);
        uVar3 = CONCAT44(extraout_var_01,iVar1);
        if (iVar1 != 5) {
          iVar1 = FUN_141924ed0(lVar2);
          uVar3 = CONCAT44(extraout_var_02,iVar1);
          if (iVar1 != 6) {
            return uVar3 & 0xffffffffffffff00;
          }
        }
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




bool FUN_14191b9d0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x80))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x80);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x80);
    local_28 = *(longlong *)(param_1 + 0x50);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x80);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x50))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar8) {
    bVar9 = false;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    bVar9 = *(longlong *)(lVar4 + 0x20) != 0;
  }
  return bVar9;
}




bool FUN_14191baf0(longlong param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_14191b650(param_1,param_2);
  if (lVar3 != 0) {
    iVar2 = FUN_14192d7a0(lVar3);
    if (iVar2 != 0) {
      lVar3 = FUN_14191b870(param_1);
      if (lVar3 != 0) {
        bVar1 = FUN_141924f80(lVar3);
        return bVar1;
      }
    }
  }
  return false;
}




ulonglong FUN_14191bb40(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  lVar2 = FUN_14191b650(param_1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_14192d7a0(lVar2);
    uVar3 = CONCAT44(extraout_var,iVar1);
    if (iVar1 != 0) {
      lVar2 = FUN_14191b870(param_1);
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_141924f90(lVar2);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




longlong FUN_14191bb90(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 extraout_var;
  uint7 extraout_var_00;
  undefined4 extraout_var_02;
  ulonglong uVar7;
  undefined4 extraout_var_03;
  longlong lVar8;
  undefined7 extraout_var_01;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined8 uVar9;
  uint7 uVar10;
  
  lVar5 = FUN_14191b650(param_1,param_3);
  lVar6 = FUN_14191b650(param_1,param_2);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  bVar2 = FUN_141915ea0(param_1,param_2);
  uVar10 = extraout_var;
  if ((bVar2) || (bVar2 = FUN_141915ea0(param_1,param_3), uVar10 = extraout_var_00, bVar2)) {
    return (ulonglong)uVar10 << 8;
  }
  iVar3 = FUN_14192d7c0(lVar6);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),param_2);
    iVar4 = FUN_14192d7c0(lVar5);
    if (iVar4 == iVar3) {
      return CONCAT44(extraout_var_02,iVar4) & 0xffffffffffffff00;
    }
  }
  uVar7 = FUN_14191b8d0(param_1,param_2);
  if (((char)uVar7 == '\0') || (uVar7 = FUN_14191b8d0(param_1,param_3), (char)uVar7 == '\0')) {
    return CONCAT71((int7)(uVar7 >> 8),1);
  }
  iVar3 = FUN_14192d7a0(lVar5);
  if (iVar3 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var_03,iVar3) >> 8),1);
  }
  lVar8 = FUN_14191b870(param_1);
  if (lVar8 == 0) {
    return 1;
  }
  bVar2 = FUN_141924f80(lVar8);
  uVar7 = CONCAT71(extraout_var_01,bVar2);
  if ((!bVar2) && (uVar7 = FUN_141924f90(lVar8), (char)uVar7 == '\0')) {
    iVar3 = FUN_14192d370(lVar6);
    uVar7 = CONCAT44(extraout_var_04,iVar3);
    if (iVar3 == 8) {
      iVar3 = FUN_14192d370(lVar5);
      uVar7 = CONCAT44(extraout_var_05,iVar3);
      if (iVar3 == 8) {
        plVar1 = *(longlong **)(param_1 + 8);
        iVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,param_3);
        uVar9 = (**(code **)(*plVar1 + 0x1d8))(plVar1,param_2);
        uVar10 = (uint7)((ulonglong)uVar9 >> 8);
        if ((int)uVar9 == iVar3) {
          return (ulonglong)uVar10 << 8;
        }
        return CONCAT71(uVar10,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return uVar7 & 0xffffffffffffff00;
}




undefined8 FUN_14191bd20(longlong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong extraout_RAX;
  undefined7 extraout_var;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),uVar2);
  if (((char)uVar3 != '\0') && (uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),uVar2), (char)uVar3 != '\0')) {
    if (*(longlong **)(param_1 + 0x2c0) == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      bVar1 = FUN_141938a80(*(longlong **)(param_1 + 0x2c0),param_2);
      if ((bVar1) && (uVar3 = FUN_14191b8d0(param_1,param_3), (char)uVar3 != '\0')) goto LAB_14191be32;
    }
    if (*(longlong **)(param_1 + 0x2c0) == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar3 = extraout_RAX;
    }
    else {
      bVar1 = FUN_141938a80(*(longlong **)(param_1 + 0x2c0),param_3);
      uVar3 = CONCAT71(extraout_var,bVar1);
      if ((bVar1) && (uVar3 = FUN_14191b8d0(param_1,param_2), (char)uVar3 != '\0')) {
LAB_14191be32:
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




void FUN_14191be40(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14191b8d0(param_1,param_2);
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_14191b650(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnDie, not found team arenic user");
    }
    else {
      iVar1 = FUN_14192d370(lVar3);
      if (iVar1 == 8) {
        FUN_14192d7a0(lVar3);
        lVar3 = FUN_14191b870(param_1);
        if (lVar3 != 0) {
          FUN_1419283d0(lVar3,param_2);
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14191bed0(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStackY_4f8 [32];
  CMsg local_488 [1040];
  longlong *local_78 [3];
  longlong *local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14195d590 ^ (ulonglong)auStackY_4f8;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  if (((cVar4 != '\0') && (param_3 != 0)) && (param_3 <= param_4)) {
    FUN_14193a470(local_488);
    FUN_14193a550((longlong)local_488,0,param_3,param_4,(int)*(undefined8 *)(param_1 + 0x108),(int)*(undefined8 *)(param_1 + 200));
    puVar1 = *(undefined8 **)(param_1 + 0x100);
    puVar7 = (undefined8 *)*puVar1;
    iVar11 = 0;
    plVar2 = *(longlong **)(param_1 + 0xd0);
    uVar9 = 1;
    local_78[0] = plVar2;
    local_60[0] = plVar2;
LAB_14191bfc0:
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar7 != puVar1) {
      if ((param_3 <= uVar9) && (uVar9 <= param_4)) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar2;
        }
        if (puVar7 == *(undefined8 **)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = FUN_141912c00((longlong)(puVar7 + 4),(undefined4 *)local_78,(undefined4 *)local_60);
        if (((char)uVar5 != '\0') && (uVar6 = FUN_14193a5b0((longlong)local_488,(undefined4 *)local_78,(undefined4 *)local_60), (char)uVar6 == '\0'))
        goto LAB_14191c0d5;
      }
      iVar11 = iVar11 + 1;
      uVar9 = uVar9 + 1;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar7 + 0xd1) == '\0') {
        puVar8 = puVar7;
        puVar3 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar7[2] + 0xd1) == '\0') {
          do {
            puVar7 = puVar3;
            puVar3 = (undefined8 *)*puVar7;
          } while (*(char *)((longlong)*puVar7 + 0xd1) == '\0');
        }
        else {
          do {
            puVar7 = (undefined8 *)puVar8[1];
            if (*(char *)((longlong)puVar7 + 0xd1) != '\0') break;
            bVar12 = puVar8 == (undefined8 *)puVar7[2];
            puVar8 = puVar7;
          } while (bVar12);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_14191bfc0;
    }
LAB_14191c0d5:
    FUN_14193a6d0((longlong)local_488);
    FUN_14193a750((longlong)local_488,iVar11);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_488);
    FUN_14193a4c0((undefined8 *)local_488);
  }
  return;
}




void FUN_14191c140(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14191b650(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_14192d370(lVar1);
  return;
}




ulonglong FUN_14191c160(longlong param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar3;
  longlong lVar4;
  undefined7 extraout_var;
  longlong lVar5;
  undefined4 extraout_var_00;
  ulonglong extraout_RAX_01;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),param_3);
  if ((char)uVar3 == '\0') {
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  lVar4 = FUN_14191b650(param_1,param_2);
  uVar3 = 0;
  if (lVar4 != 0) {
    bVar1 = FUN_141938a80(*(longlong **)(param_1 + 0x2c0),param_2);
    uVar3 = CONCAT71(extraout_var,bVar1);
    if (!bVar1) {
      FUN_14192d7a0(lVar4);
      lVar5 = FUN_14191b870(param_1);
      if (lVar5 != 0) {
        iVar2 = FUN_14192d7c0(lVar4);
        uVar3 = CONCAT44(extraout_var_00,iVar2);
        if (iVar2 == param_3) goto LAB_14191c272;
      }
      FUN_14192d370(lVar4);
      log_InlineLogERROR("CTeamArenicMgr::CanEnterMap, user(%u) invalid try to enter team arenic map(%u), status: %d");
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
  }
LAB_14191c272:
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




void FUN_14191c2b0(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_3);
    if (cVar1 != '\0') {
      lVar3 = FUN_14191b650(param_1,param_3);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnJoinTeam, found NULL team arenic user[%u]");
      }
      else {
        lVar3 = FUN_14191b750(param_1,param_2);
        if (lVar3 != 0) {
          iVar2 = FUN_141924ed0(lVar3);
          if ((iVar2 == 1) || (iVar2 == 6)) {
            FUN_141928f50(lVar3);
          }
        }
      }
    }
  }
  return;
}




void FUN_14191c380(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1419373f0(param_1 + 0x118,param_2);
  lVar2 = FUN_14191b650(param_1,param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14192d670(lVar2);
    if ((char)lVar3 == '\0') {
      FUN_14192d7a0(lVar2);
      lVar2 = FUN_14191b870(param_1);
      if (lVar2 != 0) {
        iVar1 = FUN_141924ed0(lVar2);
        if ((iVar1 == 1) || (iVar1 == 6)) {
          FUN_141928f50(lVar2);
        }
      }
    }
  }
  return;
}




void FUN_14191c400(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14191b650(param_1,param_2);
  if (lVar1 != 0) {
    FUN_14192de90(lVar1,param_3);
  }
  return;
}




longlong * FUN_14191c430(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14191c58d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14191c5bc;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14191c58d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14191a940(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14191c5bc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_14191c5e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_141916b80(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_14191c7cc;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_14191c7cc:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141917b20((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419165f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141917b20((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1419165f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141917b20((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1419165f0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




exception * FUN_14191c9a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_14191ca00(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




longlong * FUN_14191cad0(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14191cc2d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14191cc5c;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14191cc2d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14191adc0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14191cc5c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_14191cc80(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_141916960(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_14191ce6c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_14191ce6c:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141917bc0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141916760((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141917bc0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141916760((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141917bc0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141916760((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_14191d040(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




undefined8 * FUN_14191d110(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0xd1) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_141916c50(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0xd1) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0xd1) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0xd1) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 0x1a;
        plVar7 = plVar7 + 0x1a;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_14191d31b;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0xd1) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0xd1) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0xd1);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0xd1);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0xd1) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0xd1);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0xd1);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_14191d31b:
  if ((char)plVar2[0x1a] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0x1a] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0x1a] == '\0') {
            *(undefined1 *)(plVar8 + 0x1a) = 1;
            *(undefined1 *)(plVar7 + 0x1a) = 0;
            FUN_141917c50((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0xd1) == '\0') {
            if ((*(char *)(*plVar8 + 0xd0) != '\x01') || (*(char *)(plVar8[2] + 0xd0) != '\x01')) {
              if (*(char *)(plVar8[2] + 0xd0) == '\x01') {
                *(undefined1 *)(*plVar8 + 0xd0) = 1;
                *(undefined1 *)(plVar8 + 0x1a) = 0;
                FUN_1419168d0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0x1a) = (char)plVar7[0x1a];
              *(undefined1 *)(plVar7 + 0x1a) = 1;
              *(undefined1 *)(plVar8[2] + 0xd0) = 1;
              FUN_141917c50((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x1a) = 0;
          }
        }
        else {
          if ((char)plVar8[0x1a] == '\0') {
            *(undefined1 *)(plVar8 + 0x1a) = 1;
            *(undefined1 *)(plVar7 + 0x1a) = 0;
            FUN_1419168d0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0xd1) == '\0') {
            if ((*(char *)(plVar8[2] + 0xd0) != '\x01') || (*(char *)(*plVar8 + 0xd0) != '\x01')) {
              if (*(char *)(*plVar8 + 0xd0) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0xd0) = 1;
                *(undefined1 *)(plVar8 + 0x1a) = 0;
                FUN_141917c50((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0x1a) = (char)plVar7[0x1a];
              *(undefined1 *)(plVar7 + 0x1a) = 1;
              *(undefined1 *)(*plVar8 + 0xd0) = 1;
              FUN_1419168d0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x1a) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0x1a) = 1;
  }
  FUN_141914900(plVar2 + 4);
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_14191d570(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0xd1) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0xd1) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




void FUN_14191d640(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14191d660(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14191d680(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_14191d6a0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_14191a940(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_14191a940(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
        return param_2;
      }
    }
    else {
      lVar4 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar4) {
        if (*(uint *)(*(undefined8 **)(param_1[6] + 0x10) + 3) < *param_4) {
          FUN_14191a940(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
          return param_2;
        }
      }
      else {
        uVar8 = *param_4;
        if (uVar8 < *(uint *)(param_3[1] + 0x18)) {
          local_38 = *param_3;
          local_30 = (longlong *)param_3[1];
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)local_30 + 0x29) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x29);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x29);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x29);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x29);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x29) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x29) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x29) != '\0') {
              FUN_14191a940(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_14191a940(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
            return param_2;
          }
        }
        if (*(uint *)(param_3[1] + 0x18) < uVar8) {
          local_38 = *param_3;
          plVar7 = (longlong *)param_1[6];
          local_30 = (longlong *)param_3[1];
          lVar4 = *param_1;
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          plVar9 = local_30;
          if (*(char *)((longlong)local_30 + 0x29) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x29);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x29);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x29);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x29);
                plVar6 = (longlong *)plVar9[1];
                plVar5 = plVar9;
              }
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == 0) || (local_38 != lVar4)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar9 == plVar7) || (*param_4 < *(uint *)(plVar9 + 3))) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x29) != '\0') {
              FUN_14191a940(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_14191a940(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_14191c430(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




undefined8 * FUN_14191d9c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_14191da10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)param_1[6];
  plVar3 = param_3;
  plVar4 = param_4;
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar1) {
    lVar1 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar1) {
      FUN_141919ae0(param_1,*(longlong **)(param_1[6] + 8),plVar3,plVar4);
      *(longlong *)(param_1[6] + 8) = param_1[6];
      param_1[7] = 0;
      *(longlong *)param_1[6] = param_1[6];
      *(longlong *)(param_1[6] + 0x10) = param_1[6];
      lVar1 = *(longlong *)param_1[6];
      *param_2 = *param_1;
      param_2[1] = lVar1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar1 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar2 = param_3[1];
    FUN_141916c50(param_3);
    local_28 = lVar1;
    lStack_20 = lVar2;
    FUN_14191d110(param_1,local_18,&local_28);
  }
  lVar1 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  return param_2;
}




void FUN_14191db70(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_14191da10(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_14191dc10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_141919400((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_14191c5e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_14191ddc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_14191de10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_1419194a0((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_14191cc80(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_14191dfc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_14191e010(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  rsize_t rVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x28) - lVar3 >> 3;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar6 - lVar3 >> 3;
    if (0x1fffffffffffffffU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_141916cf0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141917fa0(param_1 + 0x10,uVar8);
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 3;
      puVar5 = (undefined8 *)((longlong)pvVar2 + lVar3 * 8);
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_4;
        puVar5 = puVar5 + 1;
      }
      lVar6 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s(pvVar2,rVar7,*(void **)(param_1 + 0x18),rVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s((void *)((longlong)pvVar2 + (lVar3 + param_3) * 8),rVar7,*(void **)(param_2 + 8),rVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + uVar8 * 8);
      *(void **)(param_1 + 0x20) = (void *)((longlong)pvVar2 + (param_3 + (lVar3 - (longlong)pvVar9 >> 3)) * 8);
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    else if ((ulonglong)(lVar6 - *(longlong *)(param_2 + 8) >> 3) < param_3) {
      uVar1 = *param_4;
      FUN_14191b310(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      for (lVar3 = param_3 - ((longlong)puVar5 - *(longlong *)(param_2 + 8) >> 3); lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 8;
      lVar3 = *(longlong *)(param_1 + 0x20);
      for (puVar5 = *(undefined8 **)(param_2 + 8); puVar5 != (undefined8 *)(lVar3 + param_3 * -8); puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    else {
      uVar1 = *param_4;
      pvVar9 = (void *)(lVar6 + param_3 * -8);
      pvVar2 = FUN_14191b310(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141918fa0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_14191e2c0(undefined8 *param_1,longlong param_2,int param_3)

{
  FUN_14191b350(param_1,param_2,param_3);
  return;
}




void FUN_14191e2d0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar1 = FUN_14191b750(param_1,param_3);
    if (lVar1 != 0) {
      FUN_1419395b0(*(longlong **)(param_1 + 0x2c0),param_2,param_3);
    }
  }
  return;
}




void FUN_14191e360(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *local_res8;
  uint local_res10;
  uint local_468;
  undefined4 uStack_464;
  undefined8 *local_460;
  longlong *local_458 [3];
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  local_res10 = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  if (((((cVar2 != '\0') && (cVar2 = FUN_141916010(param_1), cVar2 != '\0')) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2), cVar2 != '\0')) &&
      ((uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2), 0x27 < uVar4 &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2), cVar2 == '\0')))) &&
     (bVar3 = FUN_14191b9d0(param_1,param_2), !bVar3)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))(*(longlong **)(param_1 + 8),param_2);
    if (cVar2 == '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))(*(longlong **)(param_1 + 8),param_2);
      local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,uVar4);
      if (((uVar4 != 0) &&
          ((lVar9 = FUN_14191b750(param_1,uVar4), lVar9 == 0 || ((bVar3 = FUN_141924f60(lVar9), !bVar3 && (iVar5 = FUN_141925150(lVar9), iVar5 == 0)))))) &&
         (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x220))(*(longlong **)(param_1 + 8),param_2,uVar4), iVar5 != 0)) {
        FUN_14191d040((longlong *)(param_1 + 0x90),(longlong *)&local_468,(uint *)&local_res8);
        local_res8 = *(undefined8 **)(param_1 + 0xc0);
        lVar9 = 0;
        local_458[0] = *(longlong **)(param_1 + 0x90);
        plVar1 = (longlong *)CONCAT44(uStack_464,local_468);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_458[0])) {
          _invalid_parameter_noinfo();
        }
        puVar10 = local_460;
        if (local_460 == local_res8) {
          puVar10 = FUN_14192c8f0(param_2);
          if (puVar10 == (undefined8 *)0x0) {
            return;
          }
          local_468 = uVar4;
          local_460 = puVar10;
          FUN_14191cad0((longlong *)(param_1 + 0x90),(longlong *)local_458,&local_468);
        }
        else {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar9 = *plVar1;
          }
          if (puVar10 == *(undefined8 **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar10 = (undefined8 *)puVar10[4];
          if (puVar10 == (undefined8 *)0x0) {
            log_InlineLogERROR("CTeamArenicMgr::OnApply, found NULL team of leader(%d)");
            return;
          }
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),param_2);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),uVar6);
        if (cVar2 != '\0') {
          FUN_141928f50((longlong)puVar10);
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar6);
          if (cVar2 == '\0') {
            FUN_14192a0e0((longlong)puVar10,1,'\x01');
          }
          else {
            FUN_14192a0e0((longlong)puVar10,6,'\x01');
          }
          FUN_14193a090(local_438);
          uVar8 = FUN_14193a140((longlong)local_438,0);
          if ((char)uVar8 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_438);
          }
          FUN_14191bed0(param_1,param_2,1,6);
          FUN_14193a0e0((undefined8 *)local_438);
        }
      }
    }
    else {
      pIVar7 = theInstance();
      lVar9 = **(longlong **)(param_1 + 8);
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_TEAM_ARENIC_APPLY_REJECT_IN_ARENIC");
      (**(code **)(lVar9 + 0x28))(*(undefined8 *)(param_1 + 8),param_2,uVar8);
    }
  }
  return;
}




void FUN_14191e660(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_14191b650(param_1,param_2);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnContinueAthlete, not found user(%d)");
      }
      else {
        FUN_14191e360(param_1,param_2);
      }
    }
  }
  return;
}




void FUN_14191e6f0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xc0))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar5 = *(undefined8 **)(param_1 + 0xc0);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar5;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar5 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  local_30 = puVar5;
  local_38 = *(longlong **)(param_1 + 0x90);
  puVar8 = *(undefined8 **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 0x90) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar8) || (param_2 < *(uint *)(puVar5 + 3))) {
    plStack_20 = (longlong *)*(undefined8 *)(param_1 + 0xc0);
    local_28 = *(longlong **)(param_1 + 0x90);
    pplVar7 = &local_28;
  }
  else {
    pplVar7 = &local_38;
  }
  plVar2 = *pplVar7;
  plVar3 = pplVar7[1];
  plVar4 = *(longlong **)(param_1 + 0xc0);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x90))) {
    _invalid_parameter_noinfo();
  }
  if (plVar3 == plVar4) {
    log_InlineLogERROR("CTeamArenicMgr::DeleteTeam, can not find team(%u)");
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (plVar3 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar8 = (undefined8 *)plVar3[4];
    if (puVar8 == (undefined8 *)0x0) {
      log_InlineLogERROR("CTeamArenicMgr::DeleteTeam, can not delete team(%u)");
    }
    else {
      FUN_14192a0e0((longlong)puVar8,0,'\x01');
      (**(code **)*puVar8)(puVar8,1);
      local_28 = plVar2;
      plStack_20 = plVar3;
      FUN_14191cc80((undefined8 *)(param_1 + 0x90),&local_38,(longlong *)&local_28);
    }
  }
  return;
}




void FUN_14191e880(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))();
  FUN_14191e6f0(param_1,uVar1);
  return;
}




void FUN_14191e8b0(longlong param_1,uint param_2)

{
  uint local_38 [2];
  longlong local_30;
  longlong local_28 [4];
  
  local_30 = FUN_14191b650(param_1,param_2);
  if (local_30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014191e8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CTeamArenicMgr::JoinTeamArenic");
    return;
  }
  local_38[0] = param_2;
  FUN_14191c430((longlong *)(param_1 + 0x50),local_28,local_38);
  return;
}




void FUN_14191e910(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x80))[1];
  cVar2 = *(char *)((longlong)puVar6 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  while (cVar2 == '\0') {
    if (*(uint *)(puVar6 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar6[2];
      puVar6 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar6;
    }
    puVar4 = puVar6;
    puVar6 = puVar5;
    cVar2 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x80);
  local_30 = puVar4;
  local_38 = *plVar1;
  if (*plVar1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar6) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x80);
    local_28 = *plVar1;
  }
  else {
    plVar7 = &local_38;
  }
  local_18 = *plVar7;
  lVar3 = *(longlong *)(param_1 + 0x80);
  local_10 = plVar7[1];
  if ((local_18 == 0) || (local_18 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar3) {
    local_18 = *plVar7;
    local_10 = plVar7[1];
    FUN_14191c5e0(plVar1,&local_28,&local_18);
  }
  return;
}




undefined8 FUN_14191ea10(longlong param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  FUN_14191d570((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
  lVar2 = *(longlong *)(param_1 + 0x100);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0xd0))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 == lVar2) {
    return 0;
  }
  if (local_18 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = 0;
  }
  else {
    lVar2 = *local_18;
  }
  if (local_10 == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = FUN_141912b50(local_10 + 0x20,param_3);
  return uVar1;
}




void FUN_14191eaf0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res10 [6];
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  local_res10[0] = param_2;
  FUN_14191d570(plVar1,&local_28,local_res10);
  lVar2 = *(longlong *)(param_1 + 0x100);
  if ((local_28 == 0) || (local_28 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (lStack_20 != lVar2) {
    FUN_14191d110(plVar1,local_18,&local_28);
  }
  return;
}




void FUN_14191eb60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    local_res10[0] = FUN_141925150(param_2);
    FUN_14191d570((longlong *)(param_1 + 0xd0),(longlong *)&local_30,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x100);
    lVar2 = 0;
    local_20 = *(longlong **)(param_1 + 0xd0);
    if ((local_30 == (longlong *)0x0) || (local_30 != local_20)) {
      _invalid_parameter_noinfo();
    }
    if (local_28 != lVar1) {
      if (local_30 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar2 = *local_30;
      }
      if (local_28 == *(longlong *)(lVar2 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_141915250(local_28 + 0x20);
    }
  }
  return;
}




void FUN_14191ec50(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
    if (cVar1 != '\0') {
      lVar3 = FUN_14191b650(param_1,param_2);
      if (lVar3 != 0) {
        uVar2 = FUN_14191c140(param_1,param_2);
        FUN_141936430(param_1 + 0x118,param_2,uVar2,lVar3);
      }
    }
  }
  return;
}




void FUN_14191ecd0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  tm *ptVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  __time64_t local_res10;
  
  uVar4 = tq::DateStamp(0);
  if (*(uint *)(param_1 + 0x110) < uVar4) {
    FUN_141933ea0(param_1 + 0x118);
    local_res10 = _time64((__time64_t *)0x0);
    ptVar6 = _localtime64(&local_res10);
    if (ptVar6 != (tm *)0x0) {
      if (ptVar6->tm_mday == 1) {
        FUN_1419341a0(param_1 + 0x118);
      }
      FUN_141936b90(param_1 + 0x118);
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      puVar7 = (undefined8 *)*puVar1;
      plVar2 = *(longlong **)(param_1 + 0x10);
LAB_14191ed90:
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 != puVar1) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar2;
        }
        if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar9 = puVar7[4];
        if (lVar9 == 0) {
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar2;
          }
          if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicMgr::ProcessSettlement, found null user, user: %u");
        }
        else {
          FUN_14192d5d0(lVar9);
          FUN_14192de90(lVar9,0);
          uVar5 = FUN_14192d7e0(lVar9);
          FUN_14191ec50(param_1,uVar5);
          FUN_141915fb0(param_1,uVar5);
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
          puVar8 = puVar7;
          puVar3 = (undefined8 *)puVar7[2];
          if (*(char *)((longlong)puVar7[2] + 0x29) == '\0') {
            do {
              puVar7 = puVar3;
              puVar3 = (undefined8 *)*puVar7;
            } while (*(char *)((longlong)*puVar7 + 0x29) == '\0');
          }
          else {
            do {
              puVar7 = (undefined8 *)puVar8[1];
              if (*(char *)((longlong)puVar7 + 0x29) != '\0') break;
              bVar10 = puVar8 == (undefined8 *)puVar7[2];
              puVar8 = puVar7;
            } while (bVar10);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_14191ed90;
      }
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x110);
      *(uint *)(param_1 + 0x110) = uVar4;
    }
  }
  return;
}




longlong FUN_14191eed0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_14191d570((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0xd0))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 == lVar1) {
    return 0;
  }
  if (local_18 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar1 = 0;
  }
  else {
    lVar1 = *local_18;
  }
  if (local_10 == *(longlong *)(lVar1 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return local_10 + 0x20;
}




longlong FUN_14191ef70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))();
  lVar6 = FUN_14191b750(param_1,uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  uVar5 = FUN_141925150(lVar6);
  if (uVar5 == 0) {
    return 0;
  }
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x100))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0xd1);
  puVar3 = *(undefined8 **)(param_1 + 0x100);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < uVar5) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = puVar3;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    puVar3 = puVar9;
    puVar9 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0xd1);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x100);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar9) || (uVar5 < *(uint *)(puVar3 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x100);
    local_28 = *(longlong *)(param_1 + 0xd0);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  lVar6 = *(longlong *)(param_1 + 0x100);
  local_18 = plVar2;
  local_10 = plVar8[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0xd0))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 != lVar6) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    return lVar4 + 0x20;
  }
  return 0;
}




void FUN_14191f120(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_14191d570((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x100);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0xd0))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar1) {
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar1 = 0;
    }
    else {
      lVar1 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar1 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_141914b00(local_10 + 0x20,param_1);
  }
  return;
}




ulonglong FUN_14191f1c0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong extraout_RAX_00;
  undefined4 extraout_var_01;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 uVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar4 = FUN_14191b870(param_1);
    if (lVar4 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::ChangeTeamLeader, not found team of leader:%u");
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      iVar2 = FUN_141928ad0(lVar4);
      uVar3 = CONCAT44(extraout_var_01,iVar2);
      if (iVar2 != 0) {
        bVar1 = FUN_141924f60(lVar4);
        uVar5 = extraout_var;
        if (bVar1) {
          FUN_14191eb60(param_1,lVar4);
          uVar5 = extraout_var_00;
        }
        uVar3 = CONCAT71(uVar5,1);
      }
    }
  }
  return uVar3;
}




ulonglong FUN_14191f270(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong extraout_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar4 = extraout_RAX;
  }
  else {
    lVar3 = FUN_14191b650(param_1,param_2);
    uVar4 = 0;
    if (lVar3 != 0) {
      lVar1 = **(longlong **)(param_1 + 8);
      uVar2 = FUN_14192d7b0(lVar3);
      uVar4 = (**(code **)(lVar1 + 0x220))(*(undefined8 *)(param_1 + 8),param_2,uVar2);
      if ((uint)uVar4 < 0x5dc) {
        uVar6 = (ulonglong)((0x5dc - (uint)uVar4) * 1000);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2);
        if ((longlong)uVar6 <= (longlong)uVar4) {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2,uVar6,1);
          if ((char)uVar4 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x218))(*(longlong **)(param_1 + 8),param_2,0x5dc);
            FUN_14191c380(param_1,param_2);
            uVar5 = FUN_14191ec50(param_1,param_2);
            return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
        }
      }
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




void FUN_14191f380(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  CMsg local_428 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    FUN_14193abe0(local_428);
    uVar2 = FUN_14193ac90((longlong)local_428,0,param_3);
    if ((char)uVar2 == '\0') {
      FUN_14193ac30((undefined8 *)local_428);
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
      if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_3), cVar1 != '\0')) {
        lVar3 = FUN_14191b870(param_1);
        if (lVar3 == 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_428);
          FUN_14193ac30((undefined8 *)local_428);
          return;
        }
        lVar4 = FUN_14191ef70(param_1);
        if (lVar4 == 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_428);
          FUN_14193ac30((undefined8 *)local_428);
          return;
        }
        FUN_141929370(lVar3,param_2);
        FUN_14193ac30((undefined8 *)local_428);
        return;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_428);
      FUN_14193ac30((undefined8 *)local_428);
    }
  }
  return;
}




undefined8 * FUN_14191f4f0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint local_48 [2];
  undefined8 local_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_48[0] = *param_2;
    local_40 = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_14191d6a0(param_1,local_28,(longlong *)&local_38,local_48);
    plVar6 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
  }
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar5 = *plVar6;
  }
  if (puVar4 == *(undefined8 **)(lVar5 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return puVar4 + 4;
}




void FUN_14191f5f0(longlong *param_1)

{
  FUN_14191db70(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14191f620(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_141919970(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0xd1) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0xd1) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0xd1);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0xd1);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xd1);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xd1);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_14191da10(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_14191f780(undefined8 *param_1,longlong param_2)

{
  *param_1 = team_arenic::CTeamArenicMatch::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  FUN_1419143b0(param_1 + 4,(undefined8 *)(param_2 + 0x20));
  FUN_1419143b0(param_1 + 10,(undefined8 *)(param_2 + 0x50));
  FUN_1419143b0(param_1 + 0x10,(undefined8 *)(param_2 + 0x80));
  return param_1;
}




undefined8 * FUN_14191f800(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918d80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14191f880(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_14191dc10(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_14191f8f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918b00();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14191f970(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_14191de10(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_14191f9e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918de0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xd1) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_14191fa60(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar3 = 0;
  uVar1 = param_1[3];
  lVar4 = lVar3;
  if ((param_1[4] - uVar1 & 0xfffffffffffffff8) != 0) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) >> 3;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_14191e010((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_14191fb54;
  }
  _invalid_parameter_noinfo();
LAB_14191fb54:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined4 * FUN_14191fb90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_14191f780((undefined8 *)(param_1 + 2),(longlong)(param_2 + 2));
  return param_1;
}




void FUN_14191fbd0(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_14191fca5:
      if (1 < lVar2) {
        FUN_141919220(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_14191a290((longlong)param_1,(longlong)param_2,param_4);
        FUN_14191b350(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_14191fca5;
    }
    FUN_141919d70(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_14191fbd0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_14191fbd0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_14191fd00(longlong *param_1)

{
  FUN_14191db70(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14191fd30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint local_res10 [2];
  undefined8 *local_res18;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  uVar1 = (uint)param_2;
  if (uVar1 != 0) {
    local_res10[0] = uVar1;
    puVar2 = FUN_14192df70(uVar1,param_2,param_3,param_4);
    local_res18 = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      log_InlineLogERROR("CTeamArenicMgr::OnUserLogin, can not create team arenic user[%u]");
    }
    else {
      FUN_14191ca00((longlong *)(param_1 + 0x10),(longlong *)&local_50,local_res10);
      lVar4 = *(longlong *)(param_1 + 0x40);
      local_40 = *(longlong **)(param_1 + 0x10);
      if ((local_50 == (longlong *)0x0) || (local_50 != local_40)) {
        _invalid_parameter_noinfo();
      }
      if (local_48 != lVar4) {
        if (local_50 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar4 = 0;
        }
        else {
          lVar4 = *local_50;
        }
        if (local_48 == *(longlong *)(lVar4 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(longlong *)(local_48 + 0x20) != 0) {
          puVar3 = *(undefined8 **)(local_48 + 0x20);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(local_48 + 0x20) = 0;
        }
      }
      puVar3 = FUN_14191f4f0((longlong *)(param_1 + 0x10),local_res10);
      *puVar3 = puVar2;
      FUN_1419345b0(param_1 + 0x118,uVar1);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
      uVar1 = tq::DateStamp((ulonglong)uVar1);
      if (uVar1 < *(uint *)(param_1 + 0x110)) {
        FUN_14192d5d0((longlong)puVar2);
        FUN_14192de90((longlong)puVar2,0);
      }
    }
  }
  return;
}




void FUN_14191feb0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR("CTeamArenicMgr::BeginAthletics, found NULL team");
  }
  else {
    uVar1 = FUN_141925150(param_2);
    uVar2 = FUN_141925150(param_3);
    iVar3 = FUN_141925140(param_2);
    iVar4 = FUN_141925140(param_3);
    if (((uVar1 == 0) || (uVar2 == 0)) || (uVar1 != uVar2)) {
      log_InlineLogERROR("CTeamArenicMgr::BeginAthletics, MapID error map1: %u, map2: %u, leader1: %u, leader2: %u");
    }
    else if (iVar3 == iVar4) {
      log_InlineLogERROR("CTeamArenicMgr::BeginAthletics, same team or family, leader1: %u, leader2: %u");
    }
    else {
      lVar5 = FUN_14191ea10(param_1,uVar1,iVar3);
      if ((lVar5 != 0) && (iVar3 = FUN_141925140(lVar5), iVar3 == iVar4)) {
        iVar3 = FUN_141924ed0(param_2);
        iVar4 = FUN_141924ed0(param_3);
        if ((iVar3 == 3) && (iVar4 == 3)) {
          FUN_141916070(param_1,(ulonglong)uVar1,0x141948d40);
          FUN_14192b330(param_2,param_3);
          FUN_14192b330(param_3,param_2);
          FUN_14191eb60(param_1,param_2);
          return;
        }
        log_InlineLogERROR("CTeamArenicMgr::BeginAthletics, status Error: leader1:%u status1:%d , leader2:%u status2:%d");
        return;
      }
      log_InlineLogERROR("CTeamArenicMgr::BeginAthletics, wrong team match, leader1: %u, leader2: %u");
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141920040(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  char *_Format;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  char local_158;
  undefined8 local_150;
  char local_148;
  undefined1 local_147 [254];
  undefined1 local_49;
  ulonglong local_48;
  
  local_150 = 0xfffffffffffffffe;
  local_48 = DAT_14195d590 ^ (ulonglong)auStack_188;
  local_158 = param_4;
  if (param_2 == 0) {
    local_168 = CONCAT44(local_168._4_4_,0x1d0);
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (param_3 == 0) {
    local_168 = CONCAT44(local_168._4_4_,0x1d1);
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar1 = FUN_141925150(param_2);
    uVar2 = FUN_141925150(param_3);
    iVar3 = FUN_141925140(param_2);
    iVar4 = FUN_141925140(param_3);
    if ((uVar1 == 0) || (uVar1 != uVar2)) {
      local_168 = CONCAT44(local_168._4_4_,iVar4);
      log_InlineLogERROR("CTeamArenicMgr::EndAthletics, map error, map1: %u, map2: %u, leader1: %u, leader2: %u");
    }
    else {
      lVar7 = FUN_14191ea10(param_1,uVar1,iVar3);
      if ((lVar7 == 0) || (iVar5 = FUN_141925140(lVar7), iVar4 != iVar5)) {
        log_InlineLogERROR("CTeamArenicMgr::EndAthletics, teams does not match");
      }
      else {
        FUN_1419250a0(param_2,iVar4);
        FUN_1419250a0(param_3,iVar3);
        FUN_141924ff0(param_2,1);
        FUN_141924ff0(param_3,2);
        FUN_141927a00(param_2,param_3);
        FUN_141927d40(param_3);
        FUN_14192e1f0(param_1 + 0x118,param_2,param_3);
        FUN_14192a0e0(param_2,10,'\x01');
        FUN_14192a0e0(param_3,10,'\x01');
        FUN_1419281c0(param_2);
        FUN_1419281c0(param_3);
        if (local_158 != '\0') {
          local_148 = '\0';
          memset(local_147,0,0xff);
          pIVar8 = theInstance();
          lVar7 = **(longlong **)(param_1 + 8);
          uVar6 = FUN_141925140(param_3);
          uVar9 = (**(code **)(lVar7 + 0x58))(*(undefined8 *)(param_1 + 8),uVar6);
          uVar6 = FUN_141925140(param_2);
          (**(code **)(lVar7 + 0x58))(*(undefined8 *)(param_1 + 8),uVar6);
          _Format = (char *)(*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TEAM_ARENIC_RESULT");
          local_168 = uVar9;
          _snprintf(&local_148,0x100,_Format);
          local_49 = 0;
          (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_148,0xffff00,0x7e6);
        }
      }
    }
  }
  return;
}




void FUN_1419202d0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14191b650(param_1,param_2);
  if (lVar3 == 0) {
    log_InlineLogERROR("CTeamArenicMgr::OnLeave, not found user : %u");
  }
  else {
    uVar1 = FUN_14192d7a0(lVar3);
    lVar3 = FUN_14191b870(param_1);
    if (lVar3 != 0) {
      uVar2 = FUN_141924ed0(lVar3);
      switch(uVar2) {
      case 1:
      case 5:
      case 6:
        if (uVar1 != param_2) {
          log_InlineLogERROR("CTeamArenicMgr::OnLeave, idleader != idUser on search status, user : %u");
          return;
        }
        FUN_14191e880(param_1);
        break;
      case 2:
      case 3:
      case 4:
        break;
      case 7:
      case 8:
      case 10:
      case 0xb:
        return;
      default:
        FUN_141924ed0(lVar3);
        log_InlineLogERROR("CTeamArenicMgr::OnLeave, error status of user(%u) when leave team arenic, \t\t\tteam status: %d");
      }
      FUN_14191bed0(param_1,param_2,1,6);
    }
  }
  return;
}




void FUN_1419203f0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    iVar1 = FUN_141925140(param_2);
    uVar2 = FUN_141925150(param_2);
    if (uVar2 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteOK, not arenic map of team, leader: %u");
    }
    else {
      lVar3 = FUN_14191ea10(param_1,uVar2,iVar1);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteOK, not found enemy team, leader: %u");
      }
      else {
        iVar1 = FUN_141924ed0(lVar3);
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            uVar4 = FUN_141926cd0(param_2);
            if (((char)uVar4 != '\0') && (uVar4 = FUN_141926cd0(lVar3), (char)uVar4 != '\0')) {
              FUN_14191feb0(param_1,param_2,lVar3);
              return;
            }
            uVar4 = FUN_141926a80(param_2);
            if (((char)uVar4 != '\0') && (uVar4 = FUN_141926a80(lVar3), (char)uVar4 != '\0')) {
              FUN_14192c3a0(param_2);
              FUN_14192c3a0(lVar3);
              return;
            }
            uVar4 = FUN_141926a80(param_2);
            if ((char)uVar4 == '\0') {
              uVar4 = FUN_141926a80(lVar3);
              if ((char)uVar4 == '\0') {
                uVar5 = FUN_1419258a0(param_2,lVar3);
                if ((char)uVar5 == '\0') {
                  FUN_14192c3a0(param_2);
                }
                else {
                  FUN_14192c3a0(lVar3);
                }
              }
              else {
                FUN_14192c3a0(param_2);
              }
            }
            else {
              FUN_14192c3a0(lVar3);
            }
          }
          else if (iVar1 == 4) {
            FUN_14192bfe0(lVar3);
          }
          else {
            FUN_141924ed0(lVar3);
            log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteOK, error status of enemy team, status: %d");
          }
        }
      }
    }
  }
  return;
}




void FUN_1419205a0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar2 = FUN_141925150(param_2);
    iVar3 = FUN_141925140(param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),uVar2);
    if (cVar1 == '\0') {
      log_InlineLogERROR("CTeamArenicMgr::OnTeamAthleteRefuse, arenic map no exist, leader: %u, map: %u");
    }
    else {
      lVar4 = FUN_14191ea10(param_1,uVar2,iVar3);
      if (lVar4 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnTeamAthleteRefuse, enemy team no exist, leader: %u, map: %u");
      }
      else {
        FUN_141920040(param_1,lVar4,param_2,'\x01');
        FUN_14193a090(local_418);
        uVar5 = FUN_14193a180((longlong)local_418,9,1);
        if ((char)uVar5 != '\0') {
          FUN_14192afb0(lVar4,local_418);
        }
        FUN_14193a090(local_828);
        uVar5 = FUN_14193a180((longlong)local_828,9,0);
        if ((char)uVar5 != '\0') {
          FUN_14192afb0(param_2,local_828);
        }
        FUN_14193a0e0((undefined8 *)local_828);
        FUN_14193a0e0((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_141920720(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar1 = FUN_141925150(param_2);
    local_58[0] = uVar1;
    iVar2 = FUN_141925140(param_2);
    if (uVar1 == 0) {
      FUN_141924ed0(param_2);
      log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteRefuse, leader: %u, status: %d");
    }
    else {
      lVar3 = FUN_14191ea10(param_1,uVar1,iVar2);
      if (lVar3 == 0) {
        FUN_141924ed0(param_2);
        log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteRefuse, can not found enemy team, leader: %u, status: %d");
      }
      else {
        FUN_1419259e0(param_2);
        FUN_141924ed0(param_2);
        iVar2 = FUN_141924ed0(lVar3);
        local_48 = FUN_1419259f0(param_2);
        local_50 = FUN_1419259f0(lVar3);
        FUN_141925190(param_2);
        FUN_141925190(lVar3);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          FUN_141924ed0(lVar3);
          FUN_141925140(lVar3);
          FUN_141924ed0(param_2);
          log_InlineLogERROR("CTeamArenicMgr::OnTeamInviteRefuse, status error leader1:%u, status1:%d, leader2:%u, status2:%d");
        }
        else {
          FUN_141920040(param_1,lVar3,param_2,'\0');
          FUN_141915e10(param_1,param_2,'\0','\0','\0',0);
          FUN_141915e10(param_1,lVar3,'\0','\0','\0',0);
          uVar4 = FUN_141916070(param_1,(ulonglong)uVar1,0x141949390);
          if ((char)uVar4 != '\0') {
            FUN_141925140(lVar3);
            log_InlineLogERROR(
                              "CTeamArenicMgr::OnTeamInviteRefuse ClearArenicMap found user, id leader:%u, target id leader:%u, empty:%d, Team id:%u, status:%d, num:%d,  target id: %u, status:%d, num:%u."
                              );
          }
          FUN_14191f620((longlong *)(param_1 + 0xd0),local_58);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),uVar1);
        }
      }
    }
  }
  return;
}




void FUN_141920980(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar1 = FUN_141925150(param_2);
    iVar2 = FUN_141925140(param_2);
    FUN_141924ed0(param_2);
    if (uVar1 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnTeamFightTimeOut,  none map leader:%u, status:%u");
    }
    else {
      lVar3 = FUN_14191ea10(param_1,uVar1,iVar2);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnTeamFightTimeOut,  not found enemy team, leader:%u, status:%u");
      }
      else {
        FUN_14192a0e0(param_2,9,'\x01');
        iVar2 = FUN_141924ed0(lVar3);
        if (iVar2 == 9) {
          uVar4 = FUN_1419258a0(param_2,lVar3);
          lVar6 = lVar3;
          if ((char)uVar4 != '\0') {
            lVar6 = param_2;
            param_2 = lVar3;
          }
          FUN_141920040(param_1,lVar6,param_2,'\x01');
          FUN_14193a090(local_418);
          uVar5 = FUN_14193a180((longlong)local_418,9,1);
          if ((char)uVar5 != '\0') {
            FUN_14192afb0(lVar6,local_418);
          }
          FUN_14193a090(local_828);
          uVar5 = FUN_14193a180((longlong)local_828,9,0);
          if ((char)uVar5 != '\0') {
            FUN_14192afb0(param_2,local_828);
          }
          FUN_14193a0e0((undefined8 *)local_828);
          FUN_14193a0e0((undefined8 *)local_418);
        }
      }
    }
  }
  return;
}




void FUN_141920b30(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar1 = FUN_141925150(param_2);
    iVar2 = FUN_141925140(param_2);
    FUN_141924ed0(param_2);
    if (uVar1 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnTeamFightEndTimeOut,  none map leader:%u, status:%u");
    }
    else {
      lVar3 = FUN_14191ea10(param_1,uVar1,iVar2);
      if (lVar3 == 0) {
        FUN_14192a0e0(param_2,0xb,'\x01');
        FUN_14191f120(param_1,uVar1);
        FUN_141915e10(param_1,param_2,'\x01','\x01','\x01',0);
        FUN_141916070(param_1,(ulonglong)uVar1,0x1419496c8);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),uVar1);
      }
      else {
        iVar2 = FUN_141924ed0(lVar3);
        if (iVar2 == 10) {
          FUN_14192a0e0(param_2,0xb,'\x01');
        }
        else {
          FUN_141924ed0(param_2);
          FUN_1419259f0(param_2);
          FUN_1419259f0(lVar3);
          FUN_141925140(param_2);
          FUN_141925140(lVar3);
          if (iVar2 != 0xb) {
            FUN_141925140(lVar3);
            log_InlineLogERROR("CTeamArenicMgr::OnTeamFightEndTimeOut, enemy status error, leader:%u, status:%u, enemy leader:%u, enemy status : %u");
          }
          FUN_14192a0e0(param_2,0xb,'\x01');
          FUN_14191f120(param_1,uVar1);
          FUN_141915e10(param_1,param_2,'\x01','\x01','\x01',0);
          FUN_141915e10(param_1,lVar3,'\x01','\x01','\x01',0);
          uVar4 = FUN_141916070(param_1,(ulonglong)uVar1,0x141949630);
          if ((char)uVar4 != '\0') {
            log_InlineLogERROR(
                              "CTeamArenicMgr::OnTeamFightEndTimeOut ClearArenicMap found user, from type:%d, id leader:%u, status:%d, num:%d,  target id leader: %u, status:%d, num:%u."
                              );
          }
          FUN_14191eaf0(param_1,uVar1);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),uVar1);
        }
      }
    }
  }
  return;
}




void FUN_141920da0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    iVar1 = FUN_141925140(param_2);
    uVar2 = FUN_141925150(param_2);
    if (uVar2 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnInviteTimeOut, found none map of user: %u");
    }
    else {
      lVar3 = FUN_14191ea10(param_1,uVar2,iVar1);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnInviteTimeOut, can not found enemy team, leader: %u");
      }
      else {
        iVar1 = FUN_141924ed0(lVar3);
        if (iVar1 == 2) {
          FUN_14192a0e0(param_2,4,'\0');
        }
        else if (iVar1 == 3) {
          FUN_14192bfe0(param_2);
        }
        else if (iVar1 == 4) {
          uVar4 = FUN_141926330(param_2,3);
          if (((char)uVar4 != '\0') && (uVar4 = FUN_141926330(lVar3,3), (char)uVar4 != '\0')) {
            FUN_14192bfe0(param_2);
            return;
          }
          uVar4 = FUN_141926330(param_2,3);
          if ((char)uVar4 == '\0') {
            uVar4 = FUN_141926330(lVar3,3);
            if ((char)uVar4 == '\0') {
              uVar4 = FUN_1419258a0(param_2,lVar3);
              if ((char)uVar4 == '\0') {
                FUN_14192bfe0(param_2);
              }
              else {
                FUN_14192bfe0(lVar3);
              }
            }
            else {
              FUN_14192bfe0(param_2);
            }
          }
          else {
            FUN_14192bfe0(lVar3);
          }
        }
        else {
          FUN_141924ed0(lVar3);
          FUN_141924ed0(param_2);
          log_InlineLogERROR("CTeamArenicMgr::OnInviteTimeOut, Leader : %u, team status: %d, enemy team status: %d");
        }
      }
    }
  }
  return;
}




void FUN_141920f50(longlong param_1,uint param_2,char param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  CMsg local_438 [1040];
  
  if (param_2 != 0) {
    lVar4 = FUN_14191b650(param_1,param_2);
    if (lVar4 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnAthleteRefuse, found NULL user[%u]");
    }
    else {
      uVar5 = FUN_14191b8d0(param_1,param_2);
      if ((char)uVar5 != '\0') {
        iVar2 = FUN_14192d7a0(lVar4);
        lVar6 = FUN_14191b870(param_1);
        if (lVar6 == 0) {
          log_InlineLogERROR("CTeamArenicMgr::OnAthleteRefuse, found no team of user: %u, leader: %u");
        }
        else {
          uVar3 = FUN_141925150(lVar6);
          lVar7 = FUN_14191ea10(param_1,uVar3,iVar2);
          if (lVar7 == 0) {
            log_InlineLogERROR("CTeamArenicMgr::OnAthleteRefuse, found no enemy team of user: %u, leader: %u");
          }
          else {
            bVar1 = FUN_141924f60(lVar6);
            if ((bVar1) && (bVar1 = FUN_141924f60(lVar7), bVar1)) {
              FUN_14192d6a0(lVar4,5);
              uVar8 = FUN_141928850(lVar6);
              if ((char)uVar8 == '\0') {
                if (param_4 != '\0') {
                  FUN_14192dd50(lVar4);
                  FUN_1419373f0(param_1 + 0x118,param_2);
                  FUN_14191ec50(param_1,param_2);
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x278))(*(longlong **)(param_1 + 8),param_2);
                }
              }
              else {
                FUN_1419205a0(param_1,lVar6);
              }
              if (param_3 == '\0') {
                FUN_14192ae70(lVar6,param_2);
                uVar3 = FUN_141925140(lVar6);
                if (param_2 == uVar3) {
                  FUN_14191f1c0(param_1);
                }
              }
              else {
                uVar8 = FUN_141926130(lVar6,5);
                if ((char)uVar8 == '\0') {
                  FUN_14193a090(local_438);
                  FUN_14193a180((longlong)local_438,10,0);
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_438);
                  FUN_14192ae70(lVar6,param_2);
                  uVar3 = FUN_141925140(lVar6);
                  if (param_2 == uVar3) {
                    FUN_14191f1c0(param_1);
                  }
                  FUN_14192e0e0(lVar4,'\x01','\x01','\x01');
                  FUN_14193a0e0((undefined8 *)local_438);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_141921170(longlong param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  CMsg local_428 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  if (((cVar1 != '\0') && (uVar5 = FUN_14191b8d0(param_1,param_2), (char)uVar5 != '\0')) && (lVar6 = FUN_14191b650(param_1,param_2), lVar6 != 0)) {
    FUN_14192d7a0(lVar6);
    lVar7 = FUN_14191b870(param_1);
    if ((lVar7 != 0) && (iVar3 = FUN_141924ed0(lVar7), 6 < iVar3)) {
      if (iVar3 < 10) {
        FUN_141920f50(param_1,param_2,'\0','\x01');
        FUN_14193a090(local_428);
        uVar8 = FUN_14193a140((longlong)local_428,0xd);
        if ((char)uVar8 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_428);
        }
        FUN_14192e0e0(lVar6,'\0','\x01','\x01');
        FUN_14193a0e0((undefined8 *)local_428);
      }
      else if (iVar3 < 0xc) {
        FUN_14192d6a0(lVar6,5);
        uVar8 = FUN_141928850(lVar7);
        if ((char)uVar8 != '\0') {
          uVar4 = FUN_141925150(lVar7);
          iVar3 = FUN_141925140(lVar7);
          lVar6 = FUN_14191ea10(param_1,uVar4,iVar3);
          bVar2 = FUN_1419259e0(lVar6);
          if ((!bVar2) && (uVar8 = FUN_141926130(lVar6,5), (char)uVar8 == '\0')) {
            return;
          }
          FUN_14191f120(param_1,uVar4);
          if (lVar6 != 0) {
            FUN_141915e10(param_1,lVar7,'\x01','\x01','\x01',param_2);
            FUN_141915e10(param_1,lVar6,'\x01','\x01','\x01',0);
            FUN_14191eaf0(param_1,uVar4);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),uVar4);
          }
        }
      }
    }
  }
  return;
}




void FUN_141921360(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  uVar2 = FUN_14191b8d0(param_1,param_2);
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_14191b650(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnDie, not found team arenic user");
    }
    else {
      iVar1 = FUN_14192d370(lVar3);
      if (iVar1 == 8) {
        FUN_141920f50(param_1,param_2,'\0','\x01');
        FUN_14193a090(local_418);
        uVar4 = FUN_14193a180((longlong)local_418,10,0);
        if ((char)uVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_418);
        }
        FUN_14193a0e0((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_141921420(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0 < param_3) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
    if (cVar1 != '\0') {
      lVar4 = FUN_14191b650(param_1,param_2);
      if (lVar4 != 0) {
        uVar5 = FUN_14191b8d0(param_1,param_2);
        if ((char)uVar5 != '\0') {
          iVar2 = FUN_14192d7a0(lVar4);
          if (iVar2 != 0) {
            lVar4 = FUN_14191b870(param_1);
            if (lVar4 != 0) {
              uVar3 = FUN_141925150(lVar4);
              if (uVar3 == 0) {
                FUN_141924ed0(lVar4);
                log_InlineLogERROR("CTeamArenicMgr::OnLoseLife Map none user:%u, status:%u");
              }
              else {
                lVar6 = FUN_14191ea10(param_1,uVar3,iVar2);
                if (lVar6 == 0) {
                  log_InlineLogERROR("CTeamArenicMgr::OnLoseLife, not found enemy team of user(%d), leader: %d");
                }
                else {
                  iVar2 = FUN_141924ed0(lVar4);
                  if (iVar2 == 8) {
                    iVar2 = FUN_141924ed0(lVar6);
                    if (iVar2 == 8) {
                      FUN_141925170(lVar6,param_3);
                      FUN_14191eb60(param_1,lVar4);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_141921560(longlong *param_1)

{
  FUN_14191f880(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141921590(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918b00();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  FUN_14191ad10((longlong)param_1,param_2);
  return param_1;
}




void FUN_141921620(longlong *param_1)

{
  FUN_14191f970(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141921650(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918de0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xd1) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined4 * FUN_1419216d0(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_14191f780((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_141921700(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5] - (longlong)puVar1 >> 3;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 3) < uVar3) {
    *puVar2 = *param_2;
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_14191fa60(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_1419217b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_14191f780(param_1 + 4,(longlong)(param_5 + 2));
  *(undefined1 *)(param_1 + 0x1a) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 0;
  return param_1;
}




void FUN_141921810(longlong *param_1,longlong *param_2,int param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_14191fbd0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_141921870(longlong *param_1)

{
  FUN_14191f880(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419218a0(longlong *param_1)

{
  FUN_14191f970(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419218d0(undefined8 *param_1)

{
  *param_1 = team_arenic::CTeamArenicMgr::vftable;
  FUN_141935570(param_1 + 0x23);
  FUN_14191db70(param_1 + 0x1a);
  operator_delete((void *)param_1[0x1a]);
  FUN_14191f970(param_1 + 0x12);
  operator_delete((void *)param_1[0x12]);
  FUN_14191f880(param_1 + 10);
  operator_delete((void *)param_1[10]);
  FUN_14191f880(param_1 + 2);
  operator_delete((void *)param_1[2]);
  return;
}




undefined8 * FUN_141921980(undefined8 *param_1,longlong param_2)

{
  FUN_141921590(param_1,param_2);
  return param_1;
}




void FUN_1419219b0(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  bVar1 = FUN_14191b9d0(param_1,param_2);
  if (bVar1) {
    lVar3 = FUN_14191b650(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnInviteRefuse, not found CTeamArenicUser of user %u");
    }
    else {
      FUN_14192d7a0(lVar3);
      lVar4 = FUN_14191b870(param_1);
      if (lVar4 == 0) {
        FUN_14192d7a0(lVar3);
        log_InlineLogERROR("CTeamArenicMgr::OnInviteRefuse, not found CTeamArenicTeam of user %u, leader: %u");
      }
      else {
        FUN_14192dd50(lVar3);
        FUN_1419373f0(param_1 + 0x118,param_2);
        FUN_14191ec50(param_1,param_2);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x278))(*(longlong **)(param_1 + 8),param_2);
        FUN_14192ae70(lVar4,param_2);
        uVar2 = FUN_141925140(lVar4);
        if ((param_2 == uVar2) && (uVar5 = FUN_14191f1c0(param_1), (char)uVar5 == '\0')) {
          FUN_14193a090(local_418);
          FUN_14193a180((longlong)local_418,10,0);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_418);
          FUN_141920720(param_1,lVar4);
          FUN_14193a0e0((undefined8 *)local_418);
          return;
        }
        FUN_14193a090(local_828);
        FUN_14193a180((longlong)local_828,10,0);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
        bVar1 = FUN_1419259e0(lVar4);
        if (bVar1) {
          FUN_141920720(param_1,lVar4);
          FUN_14193a0e0((undefined8 *)local_828);
        }
        else {
          uVar6 = FUN_141926130(lVar4,3);
          if ((char)uVar6 != '\0') {
            FUN_14192a0e0(lVar4,3,'\0');
            FUN_1419203f0(param_1,lVar4);
          }
          FUN_14193a0e0((undefined8 *)local_828);
        }
      }
    }
  }
  return;
}




void FUN_141921ba0(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  bVar2 = FUN_14191b9d0(param_1,param_2);
  if (bVar2) {
    lVar4 = FUN_14191b650(param_1,param_2);
    if (lVar4 == 0) {
      log_InlineLogERROR("CTeamArenicMgr::OnInviteOK, not found CTeamArenicUser of user %u");
    }
    else {
      FUN_14192d7a0(lVar4);
      lVar5 = FUN_14191b870(param_1);
      if (lVar5 == 0) {
        log_InlineLogERROR("CTeamArenicMgr::OnInviteOK, not found CTeamArenicTeam of user %u, leader: %u");
      }
      else {
        lVar1 = **(longlong **)(param_1 + 8);
        FUN_141925150(lVar5);
        cVar3 = (**(code **)(lVar1 + 0xb8))(*(undefined8 *)(param_1 + 8),param_2);
        if (cVar3 == '\0') {
          FUN_1419219b0(param_1,param_2);
        }
        else {
          FUN_14192d6a0(lVar4,3);
          uVar6 = FUN_141926130(lVar5,3);
          if ((char)uVar6 != '\0') {
            FUN_14192a0e0(lVar5,3,'\0');
            FUN_1419203f0(param_1,lVar5);
          }
        }
      }
    }
  }
  return;
}




void FUN_141921cb0(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = FUN_14191b870(param_1);
  if (lVar5 != 0) {
    uVar2 = FUN_141924ed0(lVar5);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),uVar3);
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),uVar3), cVar1 == '\0')) {
      switch(uVar2) {
      case 0:
      case 4:
      case 5:
      case 10:
      case 0xb:
        break;
      case 1:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2);
        if (cVar1 != '\0') {
          FUN_14192a0e0(lVar5,6,'\x01');
        }
        break;
      case 2:
      case 3:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar3);
        if (cVar1 != '\0') {
          FUN_1419219b0(param_1,param_2);
        }
        break;
      case 6:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2);
        if ((cVar1 != '\0') && (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar3), cVar1 == '\0')) {
          FUN_14192a0e0(lVar5,1,'\x01');
        }
        break;
      case 7:
      case 8:
        cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2);
        if ((cVar1 != '\0') && (uVar4 = FUN_141925140(lVar5), param_2 == uVar4)) {
          log_InlineLogERROR("CTeamArenicMgr::OnEnterMap Error. User:%u is leader, status:%d map:%u");
        }
        break;
      default:
        log_InlineLogERROR("CTeamArenicMgr::OnEnterMap Error User:%u, status:%d");
      }
    }
  }
  return;
}




void FUN_141921e80(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  CMsg local_418 [1040];
  
  lVar5 = FUN_14191b650(param_1,param_2);
  if (lVar5 != 0) {
    FUN_14192d7a0(lVar5);
    lVar6 = FUN_14191b870(param_1);
    if (lVar6 != 0) {
      uVar2 = FUN_141925140(lVar6);
      uVar3 = FUN_141924ed0(lVar6);
      switch(uVar3) {
      case 1:
      case 6:
        if (uVar2 == param_2) {
          FUN_14191e880(param_1);
        }
        break;
      case 2:
      case 3:
      case 4:
        FUN_1419219b0(param_1,param_2);
        break;
      case 5:
        FUN_14192ae70(lVar6,param_2);
        bVar1 = FUN_1419259e0(lVar6);
        if (bVar1) {
          FUN_141925140(lVar6);
          FUN_14191e880(param_1);
        }
        break;
      case 7:
      case 8:
      case 9:
        FUN_141920f50(param_1,param_2,'\0','\x01');
        FUN_14193a090(local_418);
        FUN_14193a180((longlong)local_418,10,0);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_418);
        FUN_14192e0e0(lVar5,'\x01','\x01','\x01');
        bVar1 = FUN_1419259e0(lVar6);
        if (bVar1) {
          uVar2 = FUN_141925150(lVar6);
          iVar4 = FUN_141925140(lVar6);
          lVar5 = FUN_14191ea10(param_1,uVar2,iVar4);
          if (lVar5 != 0) {
            FUN_141920b30(param_1,lVar5);
          }
          FUN_141920b30(param_1,lVar6);
        }
        FUN_14193a0e0((undefined8 *)local_418);
        break;
      case 10:
      case 0xb:
        if (param_2 == uVar2) {
          FUN_14191f1c0(param_1);
        }
        FUN_14192ae70(lVar6,param_2);
        FUN_14192e0e0(lVar5,'\x01','\x01','\x01');
      }
    }
  }
  return;
}




longlong FUN_141922090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *local_168 [3];
  longlong *local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128 [2];
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  
  local_68 = 0xfffffffffffffffe;
  if ((param_2 != 0) && (bVar2 = FUN_141924f50(param_2), bVar2)) {
    lVar9 = **(longlong **)(param_1 + 8);
    uVar4 = FUN_141925140(param_2);
    cVar3 = (**(code **)(lVar9 + 0xc0))(*(undefined8 *)(param_1 + 8),uVar4);
    if (cVar3 != '\0') {
      iVar5 = FUN_141925190(param_2);
      iVar6 = FUN_141925210(param_2);
      local_138 = operator_new(8);
      if (local_138 == (longlong *)0x0) {
        local_168[0] = (longlong *)0x0;
      }
      else {
        *local_138 = (longlong)local_168;
        local_168[0] = local_138;
      }
      lVar9 = 0;
      local_150 = (longlong *)0x0;
      local_148 = (longlong *)0x0;
      local_140 = 0;
      plVar10 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
      plVar14 = *(longlong **)(param_1 + 0x90);
      plVar1 = *(longlong **)(param_1 + 0xc0);
      local_c8 = *(longlong **)(param_1 + 0x90);
      local_128[0] = local_138;
      local_f8 = plVar14;
      plStack_f0 = plVar10;
      plStack_c0 = plVar1;
      local_98 = plVar14;
      plStack_90 = plVar10;
      local_78 = local_c8;
      plStack_70 = plVar1;
LAB_1419221f0:
      if ((plVar14 == (longlong *)0x0) || (plVar14 != local_78)) {
        _invalid_parameter_noinfo();
      }
      plVar11 = local_148;
      if (plVar10 != plVar1) {
        if (plVar14 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar12 = lVar9;
        }
        else {
          lVar12 = *plVar14;
        }
        if (plVar10 == *(longlong **)(lVar12 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar11 = (longlong *)plVar10[4];
        local_128[0] = plVar11;
        if (((plVar11 != (longlong *)0x0) && (iVar7 = FUN_141925190((longlong)plVar11), iVar5 != iVar7)) && (bVar2 = FUN_141924f50((longlong)plVar11), bVar2)) {
          lVar12 = **(longlong **)(param_1 + 8);
          uVar4 = FUN_141925140((longlong)plVar11);
          cVar3 = (**(code **)(lVar12 + 0xc0))(*(undefined8 *)(param_1 + 8),uVar4);
          if ((cVar3 != '\0') && (iVar7 = FUN_141925210((longlong)plVar11), uVar8 = iVar7 - iVar6 >> 0x1f, (iVar7 - iVar6 ^ uVar8) - uVar8 < 0x15)) {
            FUN_141921700((longlong *)local_168,local_128);
          }
        }
        if (plVar14 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
          plVar11 = plVar10;
          plVar13 = (longlong *)plVar10[2];
          if (*(char *)(plVar10[2] + 0x29) == '\0') {
            do {
              plVar10 = plVar13;
              plVar13 = (longlong *)*plVar10;
              local_d8 = plVar10;
            } while (*(char *)(*plVar10 + 0x29) == '\0');
          }
          else {
            do {
              plVar10 = (longlong *)plVar11[1];
              if (*(char *)((longlong)plVar10 + 0x29) != '\0') break;
              bVar2 = plVar11 == (longlong *)plVar10[2];
              plVar11 = plVar10;
            } while (bVar2);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_1419221f0;
      }
      if ((longlong)local_148 - (longlong)local_150 >> 3 != 0) {
        local_a8 = (longlong *)0x0;
        if (local_148 < local_150) {
          _invalid_parameter_noinfo();
        }
        plVar14 = local_150;
        plVar10 = local_168[0];
        local_a8 = local_168[0];
        uStack_a0 = plVar11;
        plVar1 = uStack_a0;
        local_a8._0_4_ = SUB84(local_168[0],0);
        local_a8._4_4_ = (undefined4)((ulonglong)local_168[0] >> 0x20);
        uStack_a0._0_4_ = SUB84(plVar11,0);
        uStack_a0._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
        local_58 = (undefined4)local_a8;
        uStack_54 = local_a8._4_4_;
        uStack_50 = (undefined4)uStack_a0;
        uStack_4c = uStack_a0._4_4_;
        local_b8 = (longlong *)0x0;
        local_a8 = plVar10;
        uStack_a0 = plVar1;
        if (local_148 < local_150) {
          _invalid_parameter_noinfo();
        }
        plVar1 = local_168[0];
        local_b8 = local_168[0];
        plStack_b0 = plVar14;
        local_48 = local_168[0];
        plStack_40 = plVar14;
        iVar5 = FUN_141925200(param_2);
        if ((plVar10 == (longlong *)0x0) || (plVar10 != plVar1)) {
          _invalid_parameter_noinfo();
        }
        FUN_14191fbd0(plVar14,plVar11,(longlong)plVar11 - (longlong)plVar14 >> 3,iVar5);
        uStack_110 = local_150;
        local_118 = (longlong *)0x0;
        if (local_148 < local_150) {
          _invalid_parameter_noinfo();
        }
        plVar10 = local_148;
        local_118 = local_168[0];
        plVar14 = uStack_110;
        uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
        local_138 = local_168[0];
        uStack_130 = (undefined4)uStack_110;
        uStack_12c = uStack_110._4_4_;
        local_e8 = (longlong *)0x0;
        uStack_110 = plVar14;
        if (local_148 < local_150) {
          _invalid_parameter_noinfo();
        }
        plVar11 = local_138;
        plVar1 = local_168[0];
        local_e8 = local_168[0];
        uStack_e0 = plVar10;
        local_e8._0_4_ = SUB84(local_168[0],0);
        local_e8._4_4_ = (undefined4)((ulonglong)local_168[0] >> 0x20);
        uStack_e0._0_4_ = SUB84(plVar10,0);
        uStack_e0._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
        local_88 = (undefined4)local_e8;
        uStack_84 = local_e8._4_4_;
        uStack_80 = (undefined4)uStack_e0;
        uStack_7c = uStack_e0._4_4_;
        plVar14 = (longlong *)CONCAT44(uStack_12c,uStack_130);
        local_e8 = plVar1;
        uStack_e0 = plVar10;
        while( true ) {
          if ((plVar11 == (longlong *)0x0) || (plVar11 != plVar1)) {
            _invalid_parameter_noinfo();
          }
          plVar13 = local_150;
          if (plVar14 == plVar10) break;
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar9;
          }
          else {
            lVar12 = *plVar11;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          lVar12 = *plVar14;
          if (lVar12 != 0) {
            iVar5 = FUN_141924fe0(param_2);
            if (iVar5 == 0) {
              if (local_150 != (longlong *)0x0) {
                operator_delete(local_150);
              }
              local_150 = (longlong *)0x0;
              local_148 = (longlong *)0x0;
              local_140 = 0;
              operator_delete(local_168[0]);
              return lVar12;
            }
            if (iVar5 == 1) {
              iVar5 = FUN_141925200(lVar12);
              iVar6 = FUN_141925200(param_2);
              if (iVar5 < iVar6) {
                iVar5 = FUN_141925140(lVar12);
                iVar6 = FUN_141925090(param_2);
                if (iVar5 != iVar6) {
                  if (local_150 != (longlong *)0x0) {
                    operator_delete(local_150);
                  }
                  local_150 = (longlong *)0x0;
                  local_148 = (longlong *)0x0;
                  local_140 = 0;
                  operator_delete(local_168[0]);
                  return lVar12;
                }
              }
            }
            else if (iVar5 == 2) {
              iVar5 = FUN_141925200(lVar12);
              iVar6 = FUN_141925200(param_2);
              if (iVar6 < iVar5) {
                iVar5 = FUN_141925140(lVar12);
                iVar6 = FUN_141925090(param_2);
                if (iVar5 != iVar6) {
                  if (local_150 != (longlong *)0x0) {
                    operator_delete(local_150);
                  }
                  local_150 = (longlong *)0x0;
                  local_148 = (longlong *)0x0;
                  local_140 = 0;
                  operator_delete(local_168[0]);
                  return lVar12;
                }
              }
            }
          }
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar9;
          }
          else {
            lVar12 = *plVar11;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          plVar14 = plVar14 + 1;
        }
        if (((longlong)local_148 - (longlong)local_150 & 0xfffffffffffffff8U) != 8) {
          local_108 = (longlong *)0x0;
          if (local_148 < local_150) {
            _invalid_parameter_noinfo();
          }
          plVar14 = local_168[0];
          local_108 = local_168[0];
          uStack_100 = plVar13;
          plVar11 = uStack_100;
          uStack_100._0_4_ = SUB84(plVar13,0);
          uStack_100._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
          local_138 = local_168[0];
          uStack_130 = (undefined4)uStack_100;
          uStack_12c = uStack_100._4_4_;
          uStack_100 = plVar11;
          while( true ) {
            if ((plVar14 == (longlong *)0x0) || (plVar14 != plVar1)) {
              _invalid_parameter_noinfo();
            }
            if (plVar13 == plVar10) break;
            if (plVar14 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar12 = lVar9;
            }
            else {
              lVar12 = *plVar14;
            }
            if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
              _invalid_parameter_noinfo();
            }
            lVar12 = *plVar13;
            if (lVar12 != 0) {
              iVar5 = FUN_141925140(lVar12);
              iVar6 = FUN_141925090(param_2);
              if (iVar5 != iVar6) {
                if (local_150 != (longlong *)0x0) {
                  operator_delete(local_150);
                }
                local_150 = (longlong *)0x0;
                local_148 = (longlong *)0x0;
                local_140 = 0;
                operator_delete(local_168[0]);
                return lVar12;
              }
            }
            if (plVar14 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar12 = lVar9;
            }
            else {
              lVar12 = *plVar14;
            }
            if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
              _invalid_parameter_noinfo();
            }
            plVar13 = plVar13 + 1;
          }
          if (local_150 != (longlong *)0x0) {
            operator_delete(local_150);
          }
          local_150 = (longlong *)0x0;
          local_148 = (longlong *)0x0;
          local_140 = 0;
          operator_delete(local_168[0]);
          return 0;
        }
        lVar9 = *local_150;
        if (lVar9 == 0) {
          if (local_150 != (longlong *)0x0) {
            operator_delete(local_150);
          }
          local_150 = (longlong *)0x0;
          local_148 = (longlong *)0x0;
          local_140 = 0;
          operator_delete(local_168[0]);
          return 0;
        }
        if (local_150 != (longlong *)0x0) {
          operator_delete(local_150);
        }
        local_150 = (longlong *)0x0;
        local_148 = (longlong *)0x0;
        local_140 = 0;
        operator_delete(local_168[0]);
        return lVar9;
      }
      if (local_150 != (longlong *)0x0) {
        operator_delete(local_150);
      }
      local_150 = (longlong *)0x0;
      local_148 = (longlong *)0x0;
      local_140 = 0;
      operator_delete(local_168[0]);
    }
  }
  return 0;
}




void FUN_141922840(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  uint *puStack_60;
  longlong *local_58 [3];
  uint *local_40;
  uint *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar12 = (longlong *)0x0;
  local_58[0] = plVar12;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (uint *)0x0;
  local_38 = (uint *)0x0;
  local_30 = 0;
  local_res18 = local_res10;
  FUN_141914570((longlong *)local_58);
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  do {
    plVar8 = *(longlong **)(param_1 + 0xc0);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 != *(undefined8 **)(param_1 + 0x90))) {
      _invalid_parameter_noinfo();
    }
    puVar11 = local_40;
    if (plVar9 == plVar8) {
      plVar9 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar9 = local_58[0];
      }
      while( true ) {
        puVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar9 == (longlong *)0x0) || (plVar9 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar11 == puVar4) break;
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar8 = plVar12;
        }
        else {
          plVar8 = (longlong *)*plVar9;
        }
        if ((uint *)plVar8[4] <= puVar11) {
          _invalid_parameter_noinfo();
        }
        uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))(*(longlong **)(param_1 + 8),*puVar11);
        FUN_14191e6f0(param_1,uVar6);
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar8 = plVar12;
        }
        else {
          plVar8 = (longlong *)*plVar9;
        }
        if ((uint *)plVar8[4] <= puVar11) {
          _invalid_parameter_noinfo();
        }
        FUN_14191ec50(param_1,*puVar11);
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar8 = plVar12;
        }
        else {
          plVar8 = (longlong *)*plVar9;
        }
        if ((uint *)plVar8[4] <= puVar11) {
          _invalid_parameter_noinfo();
        }
        puVar11 = puVar11 + 1;
      }
      if (local_40 != (uint *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (uint *)0x0;
      local_38 = (uint *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar2 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar8 = plVar12;
    }
    else {
      plVar8 = (longlong *)*puVar2;
    }
    if (plVar9 == (longlong *)plVar8[6]) {
      _invalid_parameter_noinfo();
    }
    lVar3 = plVar9[4];
    if ((lVar3 != 0) && ((iVar5 = FUN_141924ed0(lVar3), iVar5 == 6 || (iVar5 == 1)))) {
      uVar6 = FUN_141925140(lVar3);
      puVar11 = local_38;
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar6);
      plVar8 = plVar12;
      if (local_40 != (uint *)0x0) {
        plVar8 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar8) {
        *local_38 = uVar6;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        puVar4 = local_40;
        plVar8 = local_58[0];
        plVar10 = plVar12;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar8 == (longlong *)0x0) || (plVar8 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar10 = (longlong *)((longlong)puVar11 - (longlong)puVar4 >> 2);
        }
        local_68 = plVar8;
        puStack_60 = puVar11;
        FUN_141914660((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        puVar11 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar8 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar12;
        }
        else {
          plVar7 = (longlong *)*local_58[0];
        }
        if (puVar11 + (longlong)plVar10 <= (uint *)plVar7[4]) {
          plVar7 = plVar12;
          if (plVar8 != (longlong *)0x0) {
            plVar7 = (longlong *)*plVar8;
          }
          if ((uint *)plVar7[3] <= puVar11 + (longlong)plVar10) goto LAB_141922a5c;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_141922a5c:
    if (puVar2 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar8 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x29);
        plVar9 = plVar8;
        plVar8 = (longlong *)*plVar8;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x29);
          plVar9 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar10 = (longlong *)plVar9[1];
        plVar8 = plVar9;
        while ((plVar9 = plVar10, cVar1 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar10 = (longlong *)plVar9[1];
          plVar8 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_141922be0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  IStringManager *pIVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar4 = FUN_14191b870(param_1);
    if (lVar4 != 0) {
      iVar3 = FUN_141924ed0(lVar4);
      if (iVar3 == 1) {
        pIVar5 = theInstance();
        lVar1 = **(longlong **)(param_1 + 8);
        uVar6 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_TEAM_ARENIC_ENTER_CS_OR_OS");
        (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 8),param_2,uVar6);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2);
        if (cVar2 != '\0') {
          FUN_14192a0e0(lVar4,6,'\x01');
        }
      }
      else if (iVar3 - 2U < 2) {
        pIVar5 = theInstance();
        lVar4 = **(longlong **)(param_1 + 8);
        uVar6 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_TEAM_ARENIC_ENTER_CS_OR_OS");
        (**(code **)(lVar4 + 0x28))(*(undefined8 *)(param_1 + 8),param_2,uVar6);
        FUN_1419219b0(param_1,param_2);
      }
    }
  }
  return;
}




undefined8 * FUN_141922d10(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918d80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141922d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141918b00();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141922e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_14191f780(puVar1 + 4,(longlong)(param_5 + 2));
    *(undefined1 *)(puVar1 + 0x1a) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0xd1) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141922eb0(undefined8 *param_1)

{
  *param_1 = team_arenic::CTeamArenicMgr::vftable;
  param_1[1] = 0;
  FUN_141922d10(param_1 + 2);
  FUN_141922d10(param_1 + 10);
  FUN_141922d90(param_1 + 0x12);
  FUN_141921650(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  FUN_141936830(param_1 + 0x23);
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xb;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xe;
  *(undefined4 *)(param_1 + 0x5a) = 0x13;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x17;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return param_1;
}




undefined8 * FUN_141922f80(undefined8 *param_1,uint param_2)

{
  FUN_1419218d0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_141922fb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR("CTeamArenicMgr::CreateNew, NULL == pConsumer");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x2e8);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_141922eb0(puVar1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_14191a370((longlong)puVar1,param_1);
      if ((char)uVar2 == '\0') {
        FUN_14191b3c0(puVar1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




void FUN_141923070(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  uint local_res10 [2];
  longlong *local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong *local_38 [2];
  longlong *local_28;
  longlong lStack_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    bVar6 = FUN_141938a80(*(longlong **)(param_1 + 0x2c0),param_2);
    if (bVar6) {
      FUN_141915dc0(param_1,param_2,'\x01','\x01');
    }
    FUN_141921e80(param_1,param_2);
    FUN_14191ca00((longlong *)(param_1 + 0x50),(longlong *)&local_58,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar7 = 0;
    local_48 = *(longlong **)(param_1 + 0x50);
    if ((local_58 == (longlong *)0x0) || (local_58 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (lStack_50 != lVar2) {
      FUN_14191c5e0((undefined8 *)(param_1 + 0x50),&local_28,(longlong *)&local_58);
    }
    if (param_3 != '\0') {
      plVar1 = (longlong *)(param_1 + 0x10);
      FUN_14191ca00(plVar1,(longlong *)&local_58,local_res10);
      plVar4 = local_58;
      lVar2 = *(longlong *)(param_1 + 0x40);
      local_38[0] = (longlong *)*plVar1;
      if ((local_58 == (longlong *)0x0) || (local_58 != local_38[0])) {
        _invalid_parameter_noinfo();
      }
      lVar5 = lStack_50;
      if (lStack_50 != lVar2) {
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar7 = *plVar4;
        }
        if (lVar5 == *(longlong *)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar3 = *(undefined8 **)(lVar5 + 0x20);
        local_28 = local_58;
        lStack_20 = lStack_50;
        FUN_14191c5e0(plVar1,local_38,(longlong *)&local_28);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  return;
}




void FUN_1419231f0(longlong param_1,uint param_2)

{
  FUN_141923070(param_1,param_2,'\0');
  return;
}




void FUN_141923200(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_14191ec50(param_1,param_2);
  lVar2 = FUN_14191b870(param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_141924ed0(lVar2);
    switch(uVar1) {
    case 0:
    case 5:
      FUN_14191e880(param_1);
      break;
    case 1:
    case 6:
      FUN_14191e880(param_1);
      break;
    case 2:
    case 3:
    case 4:
      FUN_1419219b0(param_1,param_2);
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      FUN_141923070(param_1,param_2,'\0');
    }
  }
  return;
}




void FUN_1419232c0(longlong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar4 = FUN_14191b750(param_1,param_2);
    if (lVar4 != 0) {
      uVar2 = FUN_141924ed0(lVar4);
      uVar3 = FUN_141925140(lVar4);
      if (uVar3 == param_3) {
        switch(uVar2) {
        case 0:
        case 5:
          FUN_14191e880(param_1);
          break;
        case 1:
        case 6:
          uVar3 = FUN_141925190(lVar4);
          FUN_14191e6f0(param_1,uVar3);
          break;
        case 2:
        case 3:
        case 4:
          FUN_1419219b0(param_1,param_3);
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          FUN_141923070(param_1,param_3,'\0');
        }
      }
      else {
        switch(uVar2) {
        case 1:
        case 6:
          FUN_141928f50(lVar4);
          break;
        case 2:
        case 3:
        case 4:
          bVar1 = FUN_14191b9d0(param_1,param_3);
          if (bVar1) {
            FUN_1419219b0(param_1,param_3);
          }
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
          FUN_141923070(param_1,param_3,'\0');
        }
      }
    }
  }
  return;
}




undefined8 * FUN_141923470(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0x1642c8590b21640 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_141922e10(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0xd0);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0xd0) == '\0') {
        *(undefined1 *)(plVar2 + 0x1a) = 1;
        *(undefined1 *)(lVar4 + 0xd0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd0) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0xd1) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0xd0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd0) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd1) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0xd0) == '\0') {
        *(undefined1 *)(plVar2 + 0x1a) = 1;
        *(undefined1 *)(lVar4 + 0xd0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd0) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd1) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0xd0) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd0) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0xd1) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0xd0);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0xd0) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




longlong * FUN_1419237f0(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong local_28;
  undefined8 *local_20;
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0xd1) == '\0') {
    puVar1 = (undefined8 *)puVar3[1];
    do {
      puVar3 = puVar1;
      bVar4 = *param_3 < *(uint *)(puVar3 + 3);
      if (bVar4) {
        puVar1 = (undefined8 *)*puVar3;
      }
      else {
        puVar1 = (undefined8 *)puVar3[2];
      }
    } while (*(char *)((longlong)puVar1 + 0xd1) == '\0');
  }
  local_28 = *param_1;
  local_20 = puVar3;
  if (bVar4 == false) {
LAB_1419238b2:
    if (*param_3 <= *(uint *)(local_20 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_28;
      goto LAB_1419238dc;
    }
  }
  else {
    puVar1 = *(undefined8 **)param_1[6];
    if (local_28 == 0) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 != puVar1) {
      FUN_141916f50(&local_28);
      goto LAB_1419238b2;
    }
    bVar4 = true;
  }
  plVar2 = FUN_141923470(param_1,&local_28,bVar4,puVar3,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_20 = (undefined8 *)plVar2[1];
  *param_2 = *plVar2;
LAB_1419238dc:
  param_2[1] = (longlong)local_20;
  return param_2;
}




longlong * FUN_141923900(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulong uVar3;
  uint uVar4;
  longlong *extraout_RAX;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  char local_5c8;
  longlong *local_5b8 [3];
  uint local_5a0 [2];
  undefined **local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578 [6];
  undefined8 local_548 [6];
  undefined8 local_518 [6];
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8 [6];
  undefined8 local_498 [6];
  undefined8 local_468 [6];
  CMsg local_438 [1040];
  
  uVar3 = tq::TimeGet(0);
  plVar7 = (longlong *)((ulonglong)uVar3 * 0x10624dd3 & 0xffffffff);
  if ((uint)(*(int *)(param_1 + 0x2e0) + *(int *)(param_1 + 0x2dc)) <= uVar3 / 1000) {
    uVar3 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x2e0) = uVar3 / 1000;
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
    plVar9 = *(longlong **)(param_1 + 0x90);
LAB_141923993:
    plVar8 = *(longlong **)(param_1 + 0xc0);
    if ((plVar9 == (longlong *)0x0) || (plVar9 != *(longlong **)(param_1 + 0x90))) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar8) {
      if (plVar9 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar9;
      }
      if (plVar7 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar10 = plVar7[4];
      if ((lVar10 != 0) && (bVar11 = FUN_141924f50(lVar10), bVar11)) {
        FUN_141928f50(lVar10);
      }
      if (plVar9 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        plVar8 = plVar7;
        plVar1 = (longlong *)plVar7[2];
        if (*(char *)(plVar7[2] + 0x29) == '\0') {
          do {
            plVar7 = plVar1;
            plVar1 = (longlong *)*plVar7;
          } while (*(char *)(*plVar7 + 0x29) == '\0');
        }
        else {
          do {
            plVar7 = (longlong *)plVar8[1];
            if (*(char *)((longlong)plVar7 + 0x29) != '\0') break;
            bVar11 = plVar8 == (longlong *)plVar7[2];
            plVar8 = plVar7;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141923993;
    }
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
    plVar8 = *(longlong **)(param_1 + 0x90);
LAB_141923ab0:
    plVar1 = *(longlong **)(param_1 + 0xc0);
    plVar7 = *(longlong **)(param_1 + 0x90);
    local_5b8[0] = plVar7;
    if ((plVar8 == (longlong *)0x0) || (plVar8 != plVar7)) {
      _invalid_parameter_noinfo();
      plVar7 = extraout_RAX;
    }
    if (plVar9 != plVar1) {
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar8;
      }
      if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar10 = plVar9[4];
      if ((lVar10 != 0) && (lVar5 = FUN_141922090(param_1,lVar10), lVar5 != 0)) {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))();
        if (uVar4 == 0) {
          log_InlineLogERROR("CTeamArenicMgr::ProcessMatch, failed in create arenic map");
        }
        else {
          FUN_14193a090(local_438);
          uVar6 = FUN_14193a140((longlong)local_438,2);
          if ((char)uVar6 == '\0') {
            log_InlineLogERROR("CTeamArenicMgr::ProcessMatch, failed in creating CMsgTeamArenic");
            FUN_14193a0e0((undefined8 *)local_438);
          }
          else {
            FUN_1419142c0(&local_4e8,lVar10,lVar5);
            FUN_141912b30((longlong)&local_4e8,uVar4);
            local_598 = team_arenic::CTeamArenicMatch::vftable;
            local_590 = local_4e0;
            local_588 = local_4d8;
            local_580 = local_4d0;
            local_5a0[0] = uVar4;
            FUN_1419143b0(local_578,local_4c8);
            FUN_1419143b0(local_548,local_498);
            FUN_1419143b0(local_518,local_468);
            plVar7 = FUN_1419237f0((longlong *)(param_1 + 0xd0),(longlong *)local_5b8,local_5a0);
            lVar2 = plVar7[2];
            FUN_141914900(&local_598);
            local_5c8 = (char)lVar2;
            if (local_5c8 == '\0') {
              log_InlineLogERROR("CTeamArenicMgr::ProcessMatch m_mapMatch repeat key, key:%u.");
            }
            FUN_14192a900(lVar10);
            FUN_14192a2a0(lVar10,uVar4);
            FUN_14192afb0(lVar10,local_438);
            FUN_14192a0e0(lVar10,2,'\x01');
            FUN_141927670(lVar10);
            FUN_14192a900(lVar5);
            FUN_14192a2a0(lVar5,uVar4);
            FUN_14192afb0(lVar5,local_438);
            FUN_14192a0e0(lVar5,2,'\x01');
            FUN_141927670(lVar5);
            FUN_14192cb80(lVar10,lVar5);
            FUN_14192cb80(lVar5,lVar10);
            FUN_141914900(&local_4e8);
            FUN_14193a0e0((undefined8 *)local_438);
          }
        }
      }
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        plVar7 = plVar9;
        plVar1 = (longlong *)plVar9[2];
        if (*(char *)(plVar9[2] + 0x29) == '\0') {
          do {
            plVar9 = plVar1;
            plVar1 = (longlong *)*plVar9;
          } while (*(char *)(*plVar9 + 0x29) == '\0');
        }
        else {
          do {
            plVar9 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar9 + 0x29) != '\0') break;
            bVar11 = plVar7 == (longlong *)plVar9[2];
            plVar7 = plVar9;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141923ab0;
    }
  }
  return plVar7;
}




void FUN_141923df0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_98 [6];
  undefined8 *local_68;
  undefined8 local_60;
  longlong *local_58 [2];
  longlong *local_48;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined8 *puStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_14191ecd0(param_1);
    cVar3 = FUN_141916010(param_1);
    if (cVar3 == '\0') {
      FUN_141922840(param_1);
    }
    else {
      FUN_141923900(param_1);
    }
    FUN_141921590(local_98,param_1 + 0x90);
    plVar1 = local_98[0];
    puVar4 = (undefined8 *)*local_68;
    local_48 = local_98[0];
LAB_141923e80:
    puVar5 = local_68;
    local_58[0] = local_98[0];
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_98[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 != puVar5) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar1;
      }
      if (puVar4 == *(undefined8 **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (puVar4[4] != 0) {
        FUN_14192c9c0(puVar4[4]);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
        puVar5 = puVar4;
        puVar2 = (undefined8 *)puVar4[2];
        if (*(char *)((longlong)puVar4[2] + 0x29) == '\0') {
          do {
            puVar4 = puVar2;
            puVar2 = (undefined8 *)*puVar4;
          } while (*(char *)((longlong)*puVar4 + 0x29) == '\0');
        }
        else {
          do {
            puVar4 = (undefined8 *)puVar5[1];
            if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
            bVar7 = puVar5 == (undefined8 *)puVar4[2];
            puVar5 = puVar4;
          } while (bVar7);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141923e80;
    }
    uStack_30 = *local_68;
    local_28 = local_98[0];
    puStack_20 = local_68;
    local_38 = local_98[0];
    FUN_14191de10((longlong *)local_98,(longlong *)local_58,(longlong *)&local_38,(longlong *)&local_28);
    operator_delete(local_68);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    operator_delete(local_98[0]);
  }
  return;
}




void FUN_141924060(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




ulonglong FUN_141924080(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong extraout_RAX;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (undefined8 *)0x0)) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
    if (*param_1 != 0) {
      if (plVar2 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419462b8);
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
        (**(code **)(*plVar3 + 0x40))(plVar3);
        log_InlineLogERROR("CTeamArenicRankData::Create2 User:%u data repeat");
      }
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,1);
    }
    *param_1 = (longlong)plVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
    *(undefined4 *)(param_1 + 4) = param_5;
    *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
    *(undefined8 *)((longlong)param_1 + 0xc) = *param_3;
    uVar1 = param_3[1];
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar1;
    if (plVar2 != (longlong *)0x0) {
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
  }
  log_InlineLogERROR(&DAT_1419462b8);
  return extraout_RAX & 0xffffffffffffff00;
}




void FUN_1419241c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141924204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,0);
  return;
}




ulonglong FUN_141924210(longlong *param_1)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,0);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




undefined8 FUN_141924260(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001419242e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined8 FUN_1419242f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014192433d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
  return uVar2;
}




void FUN_141924350(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001419243fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




void FUN_141924410(longlong *param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if (0xd < param_2) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))();
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001419244f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




undefined4 FUN_141924500(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




longlong FUN_141924510(longlong param_1)

{
  return param_1 + 0xc;
}




undefined4 FUN_141924520(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




undefined4 FUN_141924530(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




undefined4 FUN_141924540(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_141924550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_141924560(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




void FUN_141924570(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_141924580(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




ulonglong FUN_141924590(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  longlong *plVar5;
  
  if (*param_1 == 0) {
    log_InlineLogERROR("CTeamArenicRankData::GetTeamArenicInfo, m_pData = NULL");
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,2);
  uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  *param_2 = uVar3;
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,3);
  uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
  param_2[2] = uVar3;
  strncpy((char *)(param_2 + 3),(char *)((longlong)param_1 + 0xc),0x10);
  *(undefined1 *)((longlong)param_2 + 0x1b) = 0;
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
  uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  param_2[10] = uVar3;
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,8);
  uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  param_2[0xc] = uVar3;
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,7);
  uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  param_2[0xb] = uVar3;
  uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)((longlong)param_1 + 0x1c));
  *(undefined1 *)(param_2 + 0xf) = uVar2;
  param_2[9] = *(undefined4 *)((longlong)param_1 + 0x24);
  param_2[7] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_2[8] = (int)param_1[4];
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,6);
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
  param_2[0xe] = uVar3;
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,5);
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
  param_2[0xd] = uVar3;
  lVar1 = param_1[1];
  param_2[1] = (int)lVar1;
  return CONCAT71((uint7)(uint3)((uint)(int)lVar1 >> 8),1);
}




bool FUN_141924720(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
  iVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (longlong *)*param_1;
  if (iVar1 != *(int *)(param_2 + 0x28)) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
    return *(uint *)(param_2 + 0x28) < uVar2;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
  uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  bVar4 = *(uint *)((longlong)param_1 + 0x24) < *(uint *)(param_2 + 0x24);
  bVar5 = false;
  if (*(uint *)((longlong)param_1 + 0x24) == *(uint *)(param_2 + 0x24)) {
    bVar4 = uVar2 < *(uint *)(param_2 + 8);
    bVar5 = uVar2 == *(uint *)(param_2 + 8);
  }
  return !bVar4 && !bVar5;
}




bool FUN_1419247b0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return false;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,9);
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  return iVar1 == 1;
}




void FUN_141924810(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,9);
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141924888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




void FUN_141924890(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined * FUN_1419248c0(void)

{
  if ((DAT_14195d5d0 & 1) == 0) {
    DAT_14195d5d0 = DAT_14195d5d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5c8,"CTeamArenicRankData");
    atexit((_func_5014 *)&LAB_141945710);
  }
  return &DAT_14195d5c8;
}




void FUN_141924920(__uint64 param_1)

{
  if ((DAT_14195d5d0 & 1) == 0) {
    DAT_14195d5d0 = DAT_14195d5d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5c8,"CTeamArenicRankData");
    atexit((_func_5014 *)&LAB_141945710);
  }
                    /* WARNING: Could not recover jumptable at 0x000141924975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14195d5c8,param_1);
  return;
}




void FUN_141924980(void *param_1)

{
  if ((DAT_14195d5d0 & 1) == 0) {
    DAT_14195d5d0 = DAT_14195d5d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5c8,"CTeamArenicRankData");
    atexit((_func_5014 *)&LAB_141945710);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419249d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14195d5c8,param_1);
  return;
}




void FUN_1419249e0(void *param_1)

{
  if ((DAT_14195d5d0 & 1) == 0) {
    DAT_14195d5d0 = DAT_14195d5d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5c8,"CTeamArenicRankData");
    atexit((_func_5014 *)&LAB_141945710);
  }
                    /* WARNING: Could not recover jumptable at 0x000141924a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14195d5c8,param_1);
  return;
}




undefined8 * FUN_141924a40(void)

{
  undefined8 *puVar1;
  
  if ((DAT_14195d5d0 & 1) == 0) {
    DAT_14195d5d0 = DAT_14195d5d0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5c8,"CTeamArenicRankData");
    atexit((_func_5014 *)&LAB_141945710);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_14195d5c8,0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8,"CHECKF","pTeamArenicRankData","f:\\version\\cqserver-78.0.11-1204\\modules\\teamarenic\\src\\teamarenicrankdata.cpp",0x28
                      );
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




longlong * FUN_141924b00(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FUN_141924980(param_1);
  }
  return param_1;
}




ulonglong FUN_141924b40(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_3 == (undefined4 *)0x0) {
    log_InlineLogERROR("CTeamArenicRankData::Create, pInfo is NULL");
    uVar2 = (**(code **)*param_2)(param_2,1);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    if (*param_1 != 0) {
      log_InlineLogERROR("CTeamArenicRankData::Create1 User:%u data repeat");
      (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,1);
    }
    *param_1 = (longlong)param_2;
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,2);
    (**(code **)(*plVar3 + 0xa8))(plVar3,*param_3);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,1);
    (**(code **)(*plVar3 + 0xb0))(plVar3,2);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,3);
    (**(code **)(*plVar3 + 0xb8))(plVar3,param_3[2]);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3[10]);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,7);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3[0xb]);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,8);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3[0xc]);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,6);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3[0xe]);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,5);
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3[0xd]);
    *(undefined4 *)(param_1 + 1) = param_3[1];
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_3[7];
    *(undefined4 *)(param_1 + 4) = param_3[8];
    *(undefined4 *)((longlong)param_1 + 0x24) = param_3[9];
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(param_3 + 5);
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,1);
    if ((char)uVar2 == '\0') {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*puVar1)(puVar1,1);
        *param_1 = 0;
      }
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_141924d40(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14195d590 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    local_68 = 0x10a;
    log_InlineLogERROR(&DAT_1419462b8);
    bVar4 = false;
  }
  else {
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_1c = 0;
    local_24 = 0;
    local_20 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    FUN_141924590(param_2,&local_58);
    plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
    uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
    plVar2 = (longlong *)*param_1;
    if (uVar1 == local_30) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
      uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
      bVar3 = *(uint *)((longlong)param_1 + 0x24) < local_34;
      bVar4 = false;
      if (*(uint *)((longlong)param_1 + 0x24) == local_34) {
        bVar3 = uVar1 < local_50;
        bVar4 = uVar1 == local_50;
      }
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
      uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
      bVar3 = uVar1 < local_30;
      bVar4 = uVar1 == local_30;
    }
    bVar4 = !bVar3 && !bVar4;
  }
  return bVar4;
}




void FUN_141924e60(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_141924980(param_1);
  }
  return;
}




undefined4 FUN_141924ed0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}




undefined8 FUN_141924ee0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
  case 3:
  case 4:
    return 2;
  case 5:
    return 3;
  case 6:
    return 4;
  case 7:
  case 8:
  case 9:
    return 5;
  default:
    return 0xffffffff;
  }
}




bool FUN_141924f50(longlong param_1)

{
  return *(int *)(param_1 + 0x54) == 1;
}




bool FUN_141924f60(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141924ee0(*(undefined4 *)(param_1 + 0x54));
  return (int)uVar1 == 5;
}




bool FUN_141924f80(longlong param_1)

{
  return *(int *)(param_1 + 0x54) == 7;
}




longlong FUN_141924f90(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x54);
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 10) && (iVar1 != 0xb)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}




int FUN_141924fb0(longlong param_1)

{
  __time64_t _Var1;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0;
  }
  _Var1 = _time64((__time64_t *)0x0);
  return (int)_Var1 - *(int *)(param_1 + 0x90);
}




undefined4 FUN_141924fe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}




void FUN_141924ff0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  lVar1 = FUN_141917850();
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar1 = FUN_14191b650(lVar1,*(uint *)(param_1 + 0x58));
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141925069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CTeamArenicTeam::SetLastPkResult, found NULL user(%u) Status[%d]");
    return;
  }
  FUN_14192d8e0(lVar1,param_2);
  return;
}




undefined4 FUN_141925090(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




void FUN_1419250a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x60) = param_2;
  lVar1 = FUN_141917850();
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar1 = FUN_14191b650(lVar1,*(uint *)(param_1 + 0x58));
  if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141925119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CTeamArenicTeam::SetLastPkTeamLeader, found NULL user(%u) Status[%d]");
    return;
  }
  FUN_14192d8f0(lVar1,param_2);
  return;
}




undefined4 FUN_141925140(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined4 FUN_141925150(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




undefined4 FUN_141925160(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




undefined4 FUN_141925170(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;
  return *(undefined4 *)(param_1 + 0x50);
}




undefined4 FUN_141925190(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




undefined8 FUN_1419251a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (*(int *)(param_1 + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419251f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
    return uVar2;
  }
  return 0;
}




undefined4 FUN_141925200(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}




undefined4 FUN_141925210(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




undefined4 FUN_141925250(longlong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),(uint)(param_2 + *(int *)(param_1 + 4)) <= uVar1 / 1000);
}




ulonglong FUN_141925290(undefined4 *param_1,int param_2)

{
  ulong uVar1;
  ulonglong in_RAX;
  
  if (param_1[1] != 0) {
    uVar1 = tq::TimeGet(0);
    in_RAX = (ulonglong)(uint)param_1[1];
    if ((uint)(param_2 + param_1[1]) <= uVar1 / 1000) {
      param_1[1] = 0;
      *param_1 = 0;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_141925400(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x1d) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




bool FUN_1419254a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419254e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x1d) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x1d) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x1d);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x1d);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x1d);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x1d);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141925504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141925590(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x1d);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x1d);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x1d);
    }
    if (*(char *)(param_1[1] + 0x1d) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x1d) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419255c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419256a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 << 5);
  return;
}




undefined * FUN_141925720(void)

{
  if ((DAT_14195d5e0 & 1) == 0) {
    DAT_14195d5e0 = DAT_14195d5e0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5d8,"CTeamArenicTeam");
    atexit((_func_5014 *)&LAB_141945720);
  }
  return &DAT_14195d5d8;
}




void FUN_141925780(__uint64 param_1)

{
  if ((DAT_14195d5e0 & 1) == 0) {
    DAT_14195d5e0 = DAT_14195d5e0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5d8,"CTeamArenicTeam");
    atexit((_func_5014 *)&LAB_141945720);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419257d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14195d5d8,param_1);
  return;
}




void FUN_1419257e0(void *param_1)

{
  if ((DAT_14195d5e0 & 1) == 0) {
    DAT_14195d5e0 = DAT_14195d5e0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5d8,"CTeamArenicTeam");
    atexit((_func_5014 *)&LAB_141945720);
  }
                    /* WARNING: Could not recover jumptable at 0x000141925835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14195d5d8,param_1);
  return;
}




void FUN_141925840(void *param_1)

{
  if ((DAT_14195d5e0 & 1) == 0) {
    DAT_14195d5e0 = DAT_14195d5e0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5d8,"CTeamArenicTeam");
    atexit((_func_5014 *)&LAB_141945720);
  }
                    /* WARNING: Could not recover jumptable at 0x000141925895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14195d5d8,param_1);
  return;
}




ulonglong FUN_1419258a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  bool bVar5;
  bool bVar6;
  
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (*(uint *)(param_1 + 0x50) != *(uint *)(param_2 + 0x50)) {
    return (ulonglong)(*(uint *)(param_2 + 0x50) < *(uint *)(param_1 + 0x50));
  }
  uVar1 = *(uint *)(param_2 + 0x58);
  uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined4 *)(param_1 + 0x58));
  uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4,uVar1);
  if (uVar2 == uVar3) {
    uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined4 *)(param_1 + 0x58));
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar1);
    if (uVar2 != uVar3) {
      bVar5 = uVar2 < uVar3;
      goto LAB_1419259c9;
    }
    bVar5 = *(uint *)(param_1 + 0x58) < uVar1;
    bVar6 = *(uint *)(param_1 + 0x58) == uVar1;
  }
  else {
    bVar5 = uVar2 < uVar3;
    bVar6 = uVar2 == uVar3;
  }
  bVar5 = !bVar5 && !bVar6;
LAB_1419259c9:
  return (ulonglong)bVar5;
}




bool FUN_1419259e0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) == 0;
}




undefined8 FUN_1419259f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}




longlong FUN_141925a00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141925a22;
  }
  lVar2 = *plVar1;
LAB_141925a22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141925a40(longlong *param_1)

{
  FUN_1419254e0(param_1);
  return param_1;
}




bool FUN_141925a60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141925ac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x1d) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




longlong * FUN_141925b90(longlong *param_1)

{
  FUN_141925590(param_1);
  return param_1;
}




void FUN_141925bb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 << 5);
  return;
}




longlong * FUN_141925c30(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419254e0(param_1);
  return param_2;
}




longlong FUN_141925c60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141925c82;
  }
  lVar2 = *plVar1;
LAB_141925c82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141925ca0(longlong *param_1)

{
  FUN_1419254e0(param_1);
  return param_1;
}




longlong * FUN_141925cc0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419254e0(param_1);
  return param_2;
}




void FUN_141925cf0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141925d10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_141925d10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




longlong * FUN_141925d60(longlong *param_1)

{
  FUN_141925590(param_1);
  return param_1;
}




undefined8 * FUN_141925d80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141925dc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)((longlong)puVar1 + 0x1c) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x1d) = 0;
  return;
}




undefined8 * FUN_141925e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x1d) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141925ea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141925f30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_141925d10(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x1d);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_141925fb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141925fd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141925dc0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141926010(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141926050(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x1d) == '\0') {
    puVar1 = FUN_141925e20(param_1,puVar3,param_3,puVar3,(undefined4 *)(param_2 + 3),*(undefined1 *)((longlong)param_2 + 0x1c));
    if (*(char *)((longlong)puVar3 + 0x1d) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_141926050(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_141926050(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_1419260e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




ulonglong FUN_141926130(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong extraout_RAX;
  undefined8 *puVar7;
  undefined8 *extraout_RAX_00;
  longlong lVar8;
  undefined4 extraout_var;
  undefined8 *extraout_RAX_01;
  ulonglong extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar13;
  ulonglong uVar9;
  ulonglong uVar12;
  
  lVar6 = FUN_141917850();
  if (lVar6 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  puVar2 = *(ulonglong **)(param_1 + 8);
  uVar13 = 0;
  puVar10 = (undefined8 *)*puVar7;
  uVar12 = uVar13;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar7 = extraout_RAX_00;
    }
    if (puVar10 == puVar3) {
LAB_1419262fd:
      return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    if (100 < (int)uVar11) {
      log_InlineLogERROR(&DAT_1419462b8);
      puVar7 = extraout_RAX_03;
      goto LAB_1419262fd;
    }
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar9 = uVar13;
    }
    else {
      uVar9 = *puVar2;
    }
    if (puVar10 == *(undefined8 **)(uVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = FUN_14191b650(lVar6,*(uint *)(puVar10 + 3));
    if (lVar8 == 0) {
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        uVar13 = *puVar2;
      }
      if (puVar10 == *(undefined8 **)(uVar13 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::IsAllTeamerInStatus, found NULL user(%u) Status[%d]");
      uVar9 = extraout_RAX_02;
LAB_1419262cf:
      return uVar9 & 0xffffffffffffff00;
    }
    iVar5 = FUN_14192d370(lVar8);
    uVar9 = CONCAT44(extraout_var,iVar5);
    if (param_2 != iVar5) goto LAB_1419262cf;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar10 + 0x1d) == '\0') {
      puVar3 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x1d);
        puVar7 = (undefined8 *)*puVar3;
        while (puVar10 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x1d);
          puVar3 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar10[1] + 0x1d);
        puVar4 = (undefined8 *)puVar10[1];
        puVar3 = puVar10;
        while ((puVar7 = puVar4, puVar10 = puVar7, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar7[2]))) {
          cVar1 = *(char *)((longlong)puVar7[1] + 0x1d);
          puVar4 = (undefined8 *)puVar7[1];
          puVar3 = puVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar7 = extraout_RAX_01;
    }
  } while( true );
}




ulonglong FUN_141926330(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong extraout_RAX;
  longlong lVar7;
  ulonglong extraout_RAX_00;
  undefined8 *puVar8;
  undefined8 *extraout_RAX_01;
  undefined4 extraout_var;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *puVar9;
  int iVar10;
  
  lVar6 = FUN_141917850();
  if (lVar6 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar7 = FUN_141917800();
  if (lVar7 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  iVar10 = 0;
  puVar9 = (undefined8 *)*puVar8;
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar8 = extraout_RAX_01;
    }
    if (puVar9 == puVar3) break;
    iVar10 = iVar10 + 1;
    if (100 < iVar10) {
      log_InlineLogERROR(&DAT_1419462b8);
      puVar8 = extraout_RAX_03;
      break;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puVar9 == *(undefined8 **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar7 = FUN_14191b650(lVar6,*(uint *)(puVar9 + 3));
    if (lVar7 == 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar2;
      }
      if (puVar9 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::CheckTeamerStatus, found NULL user(%u) Status[%d]");
    }
    else {
      iVar5 = FUN_14192d370(lVar7);
      if (param_2 == iVar5) {
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar5) >> 8),1);
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar9 + 0x1d) == '\0') {
      puVar3 = (undefined8 *)puVar9[2];
      if (*(char *)((longlong)puVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x1d);
        puVar8 = (undefined8 *)*puVar3;
        while (puVar9 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar8 + 0x1d);
          puVar3 = puVar8;
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar9[1] + 0x1d);
        puVar4 = (undefined8 *)puVar9[1];
        puVar3 = puVar9;
        while ((puVar8 = puVar4, puVar9 = puVar8, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar8[2]))) {
          cVar1 = *(char *)((longlong)puVar8[1] + 0x1d);
          puVar4 = (undefined8 *)puVar8[1];
          puVar3 = puVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar8 = extraout_RAX_02;
    }
  }
  return (ulonglong)puVar8 & 0xffffffffffffff00;
}




undefined4 FUN_141926560(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  plVar6 = (longlong *)FUN_141917800();
  if (plVar6 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar6 + 0x80))(plVar6,*(undefined4 *)(param_1 + 0x58));
    if (cVar3 != '\0') {
      return *(undefined4 *)(param_1 + 0x58);
    }
    plVar6 = *(longlong **)(param_1 + 8);
    plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    iVar9 = 0;
    while( true ) {
      plVar1 = *(longlong **)(param_1 + 0x38);
      if ((plVar6 == (longlong *)0x0) || (plVar6 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar1) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      if (100 < iVar9) {
        log_InlineLogERROR(&DAT_1419462b8);
        return 0;
      }
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar6;
      }
      if (plVar8 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar7 = FUN_14191b650(lVar5,*(uint *)(plVar8 + 3));
      if (lVar7 != 0) break;
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar6;
      }
      if (plVar8 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::GetOnlineTeamer, found NULL user(%u) Status[%d]");
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
        plVar1 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar1 + 0x1d) == '\0') {
          cVar3 = *(char *)(*plVar1 + 0x1d);
          plVar8 = plVar1;
          plVar1 = (longlong *)*plVar1;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*plVar1 + 0x1d);
            plVar8 = plVar1;
            plVar1 = (longlong *)*plVar1;
          }
        }
        else {
          cVar3 = *(char *)(plVar8[1] + 0x1d);
          plVar2 = (longlong *)plVar8[1];
          plVar1 = plVar8;
          while ((plVar8 = plVar2, cVar3 == '\0' && (plVar1 == (longlong *)plVar8[2]))) {
            cVar3 = *(char *)(plVar8[1] + 0x1d);
            plVar2 = (longlong *)plVar8[1];
            plVar1 = plVar8;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    uVar4 = FUN_14192d7e0(lVar7);
    return uVar4;
  }
  log_InlineLogERROR(&DAT_1419462b8);
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141926790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *plVar5;
  longlong lVar6;
  char *_Source;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_70;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [16];
  ulonglong local_30;
  
  local_60 = 0xfffffffffffffffe;
  local_30 = DAT_14195d590 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_141917800();
  if (plVar2 == (longlong *)0x0) {
    local_98 = 0x676;
    log_InlineLogERROR(&DAT_1419462b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar4 = FUN_141917850();
    if (lVar4 == 0) {
      local_98 = 0x679;
      log_InlineLogERROR(&DAT_1419462b8);
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar1 = *(longlong **)(param_1 + 8);
      local_80 = plVar1;
LAB_141926870:
      plVar8 = *(longlong **)(param_1 + 0x38);
      plVar5 = *(longlong **)(param_1 + 8);
      local_70 = plVar5;
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar5)) {
        _invalid_parameter_noinfo();
        plVar5 = extraout_RAX_01;
      }
      if (plVar7 != plVar8) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1;
        }
        if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_14191b650(lVar4,*(uint *)(plVar7 + 3));
        if (lVar6 == 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar1;
          }
          if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::GetTeamInfoMsg, found NULL user(%u) Status[%d]");
        }
        else {
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40[0] = '\0';
          local_40[1] = '\0';
          local_40[2] = '\0';
          local_40[3] = '\0';
          local_40[4] = '\0';
          local_40[5] = '\0';
          local_40[6] = '\0';
          local_40[7] = '\0';
          local_40[8] = '\0';
          local_40[9] = '\0';
          local_40[10] = '\0';
          local_40[0xb] = '\0';
          local_40[0xc] = '\0';
          local_40[0xd] = '\0';
          local_40[0xe] = '\0';
          local_40[0xf] = '\0';
          local_58 = FUN_14192d7e0(lVar6);
          local_54 = (**(code **)(*plVar2 + 0x38))(plVar2,local_58);
          local_50 = (**(code **)(*plVar2 + 0x68))(plVar2,local_58);
          local_4c = (**(code **)(*plVar2 + 0x48))(plVar2,local_58);
          local_48 = FUN_1419160e0(lVar4,local_58);
          local_44 = (**(code **)(*plVar2 + 0x220))(plVar2,local_58,*(undefined4 *)(param_1 + 0x5c));
          _Source = (char *)(**(code **)(*plVar2 + 0x58))(plVar2,local_58);
          strncpy(local_40,_Source,0x10);
          FUN_14193ace0(param_2,&local_58);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
          plVar8 = plVar7;
          plVar5 = (longlong *)plVar7[2];
          if (*(char *)(plVar7[2] + 0x1d) == '\0') {
            do {
              plVar7 = plVar5;
              plVar5 = (longlong *)*plVar7;
              local_88 = plVar7;
            } while (*(char *)(*plVar7 + 0x1d) == '\0');
          }
          else {
            do {
              plVar7 = (longlong *)plVar8[1];
              if (*(char *)((longlong)plVar7 + 0x1d) != '\0') break;
              bVar9 = plVar8 == (longlong *)plVar7[2];
              plVar8 = plVar7;
            } while (bVar9);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_141926870;
      }
      uVar3 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    }
  }
  return uVar3;
}




ulonglong FUN_141926a80(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong extraout_RAX;
  longlong lVar9;
  ulonglong extraout_RAX_00;
  undefined8 *puVar10;
  undefined8 *extraout_RAX_01;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *puVar13;
  int iVar14;
  
  plVar8 = (longlong *)FUN_141917800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar9 = FUN_141917850();
  if (lVar9 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 8);
  iVar14 = 0;
  puVar13 = (undefined8 *)*puVar10;
  while( true ) {
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar10 = extraout_RAX_01;
    }
    if (puVar13 == puVar4) break;
    iVar14 = iVar14 + 1;
    if (100 < iVar14) {
      log_InlineLogERROR(&DAT_1419462b8);
      puVar10 = extraout_RAX_03;
      break;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar3;
    }
    if (puVar13 == *(undefined8 **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar11 = FUN_14191b650(lVar9,*(uint *)(puVar13 + 3));
    if (lVar11 == 0) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar3;
      }
      if (puVar13 == *(undefined8 **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::CheckTeamerLoadArenicMap, found NULL user(%u) Status[%d]");
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 100);
      lVar5 = *plVar8;
      uVar7 = FUN_14192d7e0(lVar11);
      uVar12 = (**(code **)(lVar5 + 0xb8))(plVar8,uVar7,uVar2);
      if ((char)uVar12 != '\0') {
        return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      }
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar13 + 0x1d) == '\0') {
      puVar4 = (undefined8 *)puVar13[2];
      if (*(char *)((longlong)puVar4 + 0x1d) == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x1d);
        puVar10 = (undefined8 *)*puVar4;
        while (puVar13 = puVar4, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar10 + 0x1d);
          puVar4 = puVar10;
          puVar10 = (undefined8 *)*puVar10;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar13[1] + 0x1d);
        puVar6 = (undefined8 *)puVar13[1];
        puVar4 = puVar13;
        while ((puVar10 = puVar6, puVar13 = puVar10, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar10[2]))) {
          cVar1 = *(char *)((longlong)puVar10[1] + 0x1d);
          puVar6 = (undefined8 *)puVar10[1];
          puVar4 = puVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar10 = extraout_RAX_02;
    }
  }
  return (ulonglong)puVar10 & 0xffffffffffffff00;
}




ulonglong FUN_141926cd0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong extraout_RAX;
  longlong lVar9;
  ulonglong extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *extraout_RAX_02;
  undefined8 *extraout_RAX_03;
  undefined8 *extraout_RAX_04;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar15;
  
  plVar8 = (longlong *)FUN_141917800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar9 = FUN_141917850();
  if (lVar9 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x38);
  puVar3 = *(ulonglong **)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar16 = 0;
    puVar12 = (undefined8 *)*puVar11;
    uVar15 = uVar16;
LAB_141926db0:
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if ((puVar3 == (ulonglong *)0x0) || (puVar3 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar11 = extraout_RAX_01;
    }
    if (puVar12 == puVar4) {
LAB_141926f13:
      return CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
    }
    uVar14 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar14;
    if (100 < (int)uVar14) {
      log_InlineLogERROR(&DAT_1419462b8);
      puVar11 = extraout_RAX_04;
      goto LAB_141926f13;
    }
    if (puVar3 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar13 = uVar16;
    }
    else {
      uVar13 = *puVar3;
    }
    if (puVar12 == *(undefined8 **)(uVar13 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = FUN_14191b650(lVar9,*(uint *)(puVar12 + 3));
    if (lVar10 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 100);
      lVar5 = *plVar8;
      uVar7 = FUN_14192d7e0(lVar10);
      puVar11 = (undefined8 *)(**(code **)(lVar5 + 0xb8))(plVar8,uVar7,uVar2);
      if ((char)puVar11 == '\0') goto LAB_141926f24;
      if (puVar3 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar12 + 0x1d) == '\0') {
        puVar11 = (undefined8 *)puVar12[2];
        if (*(char *)((longlong)puVar11 + 0x1d) == '\0') {
          cVar1 = *(char *)((longlong)*puVar11 + 0x1d);
          puVar12 = puVar11;
          puVar11 = (undefined8 *)*puVar11;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar11 + 0x1d);
            puVar12 = puVar11;
            puVar11 = (undefined8 *)*puVar11;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar12[1] + 0x1d);
          puVar6 = (undefined8 *)puVar12[1];
          puVar4 = puVar12;
          while ((puVar11 = puVar6, puVar12 = puVar11, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar11[2]))) {
            cVar1 = *(char *)((longlong)puVar11[1] + 0x1d);
            puVar6 = (undefined8 *)puVar11[1];
            puVar4 = puVar11;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
        puVar11 = extraout_RAX_02;
      }
      goto LAB_141926db0;
    }
    if (puVar3 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      uVar16 = *puVar3;
    }
    if (puVar12 == *(undefined8 **)(uVar16 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    log_InlineLogERROR("CTeamArenicTeam::IsAllTeamerLoadArenicMap, found NULL user(%u) Status[%d]");
    puVar11 = extraout_RAX_03;
  }
LAB_141926f24:
  return (ulonglong)puVar11 & 0xffffffffffffff00;
}




void FUN_141926f80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141926fa0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_141927030(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_141926050(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x1d) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x1d);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x1d);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x1d);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x1d);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_1419270e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0x3ffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_141925e20(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x1c);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x1c) = 1;
        *(undefined1 *)(lVar4 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x1d) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x1d) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x1c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x1c) = 1;
        *(undefined1 *)(lVar4 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x1d) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x1c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x1c) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x1d) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x1c);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x1c) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_141927420(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141927470(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    plVar2 = *(longlong **)(param_1 + 8);
    while( true ) {
      plVar3 = *(longlong **)(param_1 + 0x38);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar7 + 3));
      if (lVar6 == 0) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar2;
        }
        if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CTeamArenicTeam::SwitchAllTeamerStatus, found NULL user(%u) Status[%d]");
      }
      else {
        FUN_14192d6a0(lVar6,param_2);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x1d);
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x1d);
            plVar7 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
          while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
            cVar1 = *(char *)(plVar7[1] + 0x1d);
            plVar4 = (longlong *)plVar7[1];
            plVar3 = plVar7;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  return;
}




ulonglong FUN_141927670(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong extraout_RAX;
  ulonglong *puVar6;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  ulonglong *extraout_RAX_02;
  ulonglong *puVar7;
  int iVar8;
  longlong lVar9;
  
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  puVar6 = *(ulonglong **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  iVar8 = 0;
  puVar7 = (ulonglong *)*puVar6;
  while( true ) {
    puVar3 = *(ulonglong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX_00;
    }
    if (puVar7 == puVar3) goto LAB_1419277f5;
    iVar8 = iVar8 + 1;
    if (100 < iVar8) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (puVar7 == *(ulonglong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_14191e8b0(lVar5,(uint)puVar7[3]);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar7 + 0x1d) == '\0') {
      puVar3 = (ulonglong *)puVar7[2];
      if (*(char *)((longlong)puVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x1d);
        puVar6 = (ulonglong *)*puVar3;
        while (puVar7 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x1d);
          puVar3 = puVar6;
          puVar6 = (ulonglong *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar7[1] + 0x1d);
        puVar4 = (ulonglong *)puVar7[1];
        puVar3 = puVar7;
        while ((puVar6 = puVar4, puVar7 = puVar6, cVar1 == '\0' && (puVar3 == (ulonglong *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x1d);
          puVar4 = (ulonglong *)puVar6[1];
          puVar3 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX_01;
    }
  }
  log_InlineLogERROR(&DAT_1419462b8);
  puVar6 = extraout_RAX_02;
LAB_1419277f5:
  return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
}




void FUN_141927820(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  iVar8 = 0;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    iVar8 = iVar8 + 1;
    if (100 < iVar8) {
      log_InlineLogERROR(&DAT_1419462b8);
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar7 + 3));
    if (lVar6 == 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::SetAllTeamerArenicMap, found NULL user(%u) Status[%d]");
    }
    else {
      FUN_14192d7d0(lVar6,param_2);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar3 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x1d);
        plVar7 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x1d);
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x1d);
        plVar4 = (longlong *)plVar7[1];
        plVar3 = plVar7;
        while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void FUN_141927a00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar6 = (longlong *)FUN_141917800();
    if (plVar6 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      lVar7 = FUN_141917850();
      if (lVar7 == 0) {
        log_InlineLogERROR(&DAT_1419462b8);
      }
      else {
        iVar1 = *(int *)(param_2 + 0x4c);
        plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
        plVar2 = *(longlong **)(param_1 + 8);
        iVar11 = 0;
LAB_141927b20:
        plVar10 = *(longlong **)(param_1 + 0x38);
        if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar9 == plVar10) {
          return;
        }
        iVar11 = iVar11 + 1;
        if (iVar11 < 0x65) {
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar2;
          }
          if (plVar9 == *(longlong **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar8 = FUN_14191b650(lVar7,*(uint *)(plVar9 + 3));
          if (lVar8 == 0) {
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = 0;
            }
            else {
              lVar8 = *plVar2;
            }
            if (plVar9 == *(longlong **)(lVar8 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            log_InlineLogERROR("CTeamArenicTeam::OnWin, found NULL user(%u) Status[%d]");
          }
          else {
            uVar4 = FUN_14192d7e0(lVar8);
            iVar5 = FUN_14192d370(lVar8);
            if ((((iVar5 != 5) && (iVar5 != 0)) && (iVar5 != 1)) && (iVar5 != 6)) {
              FUN_14192dc20(lVar8);
              lVar8 = *plVar6;
              iVar5 = (**(code **)(lVar8 + 0x220))(plVar6,uVar4,*(undefined4 *)(param_1 + 0x5c));
              (**(code **)(lVar8 + 0x218))(plVar6,uVar4,iVar5 + (iVar1 * 3) / 100);
              FUN_1419160d0(lVar7,uVar4);
              (**(code **)(*plVar6 + 0x278))(plVar6,uVar4);
              (**(code **)(*plVar6 + 0x2a0))(plVar6,uVar4,0xe,0,0);
            }
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
            plVar10 = plVar9;
            plVar3 = (longlong *)plVar9[2];
            if (*(char *)(plVar9[2] + 0x1d) == '\0') {
              do {
                plVar9 = plVar3;
                plVar3 = (longlong *)*plVar9;
              } while (*(char *)(*plVar9 + 0x1d) == '\0');
            }
            else {
              do {
                plVar9 = (longlong *)plVar10[1];
                if (*(char *)((longlong)plVar9 + 0x1d) != '\0') break;
                bVar12 = plVar10 == (longlong *)plVar9[2];
                plVar10 = plVar9;
              } while (bVar12);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_141927b20;
        }
        log_InlineLogERROR(&DAT_1419462b8);
      }
    }
  }
  return;
}




void FUN_141927d40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  
  plVar6 = (longlong *)FUN_141917800();
  if (plVar6 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar7 = FUN_141917850();
    if (lVar7 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar1 = *(longlong **)(param_1 + 8);
      iVar11 = 0;
LAB_141927e02:
      plVar10 = *(longlong **)(param_1 + 0x38);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar10) {
        return;
      }
      iVar11 = iVar11 + 1;
      if (iVar11 < 0x65) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar1;
        }
        if (plVar9 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar8 = FUN_14191b650(lVar7,*(uint *)(plVar9 + 3));
        if (lVar8 == 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar1;
          }
          if (plVar9 == *(longlong **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::OnLost, found NULL user(%u) Status[%d]");
        }
        else {
          FUN_14192dd50(lVar8);
          uVar4 = FUN_14192d7e0(lVar8);
          FUN_1419160d0(lVar7,uVar4);
          lVar2 = *plVar6;
          uVar5 = FUN_14192d7e0(lVar8);
          (**(code **)(lVar2 + 0x278))(plVar6,uVar5);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
          plVar10 = plVar9;
          plVar3 = (longlong *)plVar9[2];
          if (*(char *)(plVar9[2] + 0x1d) == '\0') {
            do {
              plVar9 = plVar3;
              plVar3 = (longlong *)*plVar9;
            } while (*(char *)(*plVar9 + 0x1d) == '\0');
          }
          else {
            do {
              plVar9 = (longlong *)plVar10[1];
              if (*(char *)((longlong)plVar9 + 0x1d) != '\0') break;
              bVar12 = plVar10 == (longlong *)plVar9[2];
              plVar10 = plVar9;
            } while (bVar12);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_141927e02;
      }
      log_InlineLogERROR(&DAT_1419462b8);
    }
  }
  return;
}




void FUN_141927fa0(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  bool bVar11;
  ulonglong uVar9;
  
  lVar3 = FUN_141917850();
  if (lVar3 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    uVar10 = 0;
    puVar1 = *(ulonglong **)(param_1 + 8);
    uVar9 = uVar10;
LAB_141928030:
    plVar6 = *(longlong **)(param_1 + 0x38);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar6) {
      return;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar8 < 0x65) {
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar7 = uVar10;
      }
      else {
        uVar7 = *puVar1;
      }
      if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar4 = FUN_14191b650(lVar3,*(uint *)(plVar5 + 3));
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar7 = uVar10;
      }
      else {
        uVar7 = *puVar1;
      }
      if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (lVar4 == 0) {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar7 = uVar10;
        }
        else {
          uVar7 = *puVar1;
        }
        if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CTeamArenicTeam::ShowTeamArenicInfo, found NULL user(%u) Status[%d]");
      }
      else {
        FUN_14191ec50(lVar3,*(uint *)(plVar5 + 3));
      }
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
        plVar6 = plVar5;
        plVar2 = (longlong *)plVar5[2];
        if (*(char *)(plVar5[2] + 0x1d) == '\0') {
          do {
            plVar5 = plVar2;
            plVar2 = (longlong *)*plVar5;
          } while (*(char *)(*plVar5 + 0x1d) == '\0');
        }
        else {
          do {
            plVar5 = (longlong *)plVar6[1];
            if (*(char *)((longlong)plVar5 + 0x1d) != '\0') break;
            bVar11 = plVar6 == (longlong *)plVar5[2];
            plVar6 = plVar5;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141928030;
    }
    log_InlineLogERROR(&DAT_1419462b8);
  }
  return;
}




void FUN_1419281c0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  
  plVar5 = (longlong *)FUN_141917800();
  if (plVar5 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar6 = FUN_141917850();
    if (lVar6 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      FUN_141927fa0(param_1);
      puVar7 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb8) < puVar7) {
        _invalid_parameter_noinfo();
      }
      plVar2 = *(longlong **)(param_1 + 0x98);
      iVar9 = 0;
      while( true ) {
        puVar3 = *(uint **)(param_1 + 0xb8);
        if (puVar3 < *(uint **)(param_1 + 0xb0)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x98))) {
          _invalid_parameter_noinfo();
        }
        if (puVar7 == puVar3) {
          return;
        }
        iVar9 = iVar9 + 1;
        if (100 < iVar9) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(uint **)(lVar8 + 0x20) <= puVar7) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *puVar7;
        cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,uVar1);
        if (cVar4 != '\0') {
          FUN_14191ec50(lVar6,uVar1);
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (*(uint **)(lVar8 + 0x20) <= puVar7) {
          _invalid_parameter_noinfo();
        }
        puVar7 = puVar7 + 1;
      }
      log_InlineLogERROR(&DAT_1419462b8);
    }
  }
  return;
}




void FUN_1419283d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar9 = *(longlong **)(param_1 + 8);
  iVar11 = 0;
  do {
    plVar8 = *(longlong **)(param_1 + 0x38);
    if ((plVar9 == (longlong *)0x0) || (plVar9 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar8) {
LAB_14192867d:
      plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar7 = *(longlong **)(param_1 + 8);
      break;
    }
    iVar11 = iVar11 + 1;
    if (100 < iVar11) {
      log_InlineLogERROR(&DAT_1419462b8);
      goto LAB_14192867d;
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar9;
    }
    if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar7 + 3));
    if (lVar6 == 0) {
      if (plVar9 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar9;
      }
      if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::OnUserDie, found NULL user(%u) Status[%d]");
    }
    else {
      if (plVar9 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar9;
      }
      if (plVar7 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (((int)plVar7[3] != param_2) && (lVar6 = FUN_14192d670(lVar6), (char)lVar6 != '\0')) {
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar9;
        }
        if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        cVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4,(int)plVar7[3]);
        if (cVar2 != '\0') {
          return;
        }
      }
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar8 = plVar7;
      plVar1 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x1d) == '\0') {
        do {
          plVar7 = plVar1;
          plVar1 = (longlong *)*plVar7;
        } while (*(char *)(*plVar7 + 0x1d) == '\0');
      }
      else {
        do {
          plVar7 = (longlong *)plVar8[1];
          if (*(char *)((longlong)plVar7 + 0x1d) != '\0') break;
          bVar12 = plVar8 == (longlong *)plVar7[2];
          plVar8 = plVar7;
        } while (bVar12);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
LAB_1419286c0:
  plVar9 = *(longlong **)(param_1 + 0x38);
  if ((plVar7 == (longlong *)0x0) || (plVar7 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  if (plVar4 == plVar9) goto LAB_14192881d;
  iVar11 = iVar11 + 1;
  if (100 < iVar11) {
    log_InlineLogERROR(&DAT_1419462b8);
LAB_14192881d:
    FUN_1419205a0(lVar5,param_1);
    return;
  }
  if (plVar7 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar7;
  }
  if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar4 + 3));
  if (lVar6 == 0) {
    if (plVar7 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar7;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    log_InlineLogERROR("CTeamArenicTeam::OnUserDie, found NULL user(%u) Status[%d]");
  }
  else {
    iVar3 = FUN_14192d370(lVar6);
    if (iVar3 != 5) {
      FUN_14192d6a0(lVar6,5);
    }
  }
  if (plVar7 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if (*(char *)((longlong)plVar4 + 0x1d) == '\0') {
    plVar9 = plVar4;
    plVar8 = (longlong *)plVar4[2];
    if (*(char *)(plVar4[2] + 0x1d) == '\0') {
      do {
        plVar4 = plVar8;
        plVar8 = (longlong *)*plVar4;
      } while (*(char *)(*plVar4 + 0x1d) == '\0');
    }
    else {
      do {
        plVar4 = (longlong *)plVar9[1];
        if (*(char *)((longlong)plVar4 + 0x1d) != '\0') break;
        bVar12 = plVar9 == (longlong *)plVar4[2];
        plVar9 = plVar4;
      } while (bVar12);
    }
  }
  else {
    _invalid_parameter_noinfo();
  }
  goto LAB_1419286c0;
}




ulonglong FUN_141928850(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  longlong lVar6;
  ulonglong extraout_RAX_00;
  longlong *plVar7;
  longlong *extraout_RAX_01;
  longlong lVar8;
  ulonglong uVar9;
  longlong *extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong *plVar10;
  int iVar11;
  
  plVar5 = (longlong *)FUN_141917800();
  if (plVar5 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar6 = FUN_141917850();
  if (lVar6 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  iVar11 = 0;
  plVar7 = plVar2;
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      plVar7 = extraout_RAX_01;
    }
    if (plVar10 == plVar3) break;
    iVar11 = iVar11 + 1;
    if (100 < iVar11) {
      log_InlineLogERROR(&DAT_1419462b8);
      plVar7 = extraout_RAX_03;
      break;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (plVar10 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = FUN_14191b650(lVar6,*(uint *)(plVar10 + 3));
    if (lVar8 == 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (plVar10 == *(longlong **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::IsAllTeamerGiveUp, found NULL user(%u) Status[%d]");
    }
    else {
      lVar8 = FUN_14192d670(lVar8);
      if ((char)lVar8 != '\0') {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (plVar10 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar9 = (**(code **)(*plVar5 + 0xc0))(plVar5,(int)plVar10[3]);
        if ((char)uVar9 != '\0') {
          return uVar9 & 0xffffffffffffff00;
        }
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar10 + 0x1d) == '\0') {
      plVar3 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x1d);
        plVar7 = (longlong *)*plVar3;
        while (plVar10 = plVar3, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x1d);
          plVar3 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar10[1] + 0x1d);
        plVar4 = (longlong *)plVar10[1];
        plVar3 = plVar10;
        while ((plVar7 = plVar4, plVar10 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      plVar7 = extraout_RAX_02;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
}




int FUN_141928ad0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  int local_94;
  ulonglong uVar15;
  
  plVar8 = (longlong *)FUN_141917800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    local_94 = 0;
  }
  else {
    lVar9 = FUN_141917850();
    if (lVar9 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
      local_94 = 0;
    }
    else if (*(longlong *)(param_1 + 0x40) == 0) {
      local_94 = 0;
    }
    else {
      plVar11 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar2 = *(longlong **)(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x58);
      local_94 = 0;
      iVar16 = 0;
LAB_141928bc0:
      plVar12 = *(longlong **)(param_1 + 0x38);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar11 == plVar12) goto LAB_141928d6d;
      iVar16 = iVar16 + 1;
      if (iVar16 < 0x65) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar2;
        }
        if (plVar11 == *(longlong **)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar10 = FUN_14191b650(lVar9,*(uint *)(plVar11 + 3));
        if (lVar10 == 0) {
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar2;
          }
          if (plVar11 == *(longlong **)(lVar10 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::ChangeLeader, found NULL user(%u) Status[%d]");
        }
        else {
          iVar6 = FUN_14192d7e0(lVar10);
          if (iVar1 != iVar6) {
            lVar3 = *plVar8;
            uVar7 = FUN_14192d7e0(lVar10);
            iVar6 = (**(code **)(lVar3 + 0x1e0))(plVar8,uVar7);
            if (iVar6 != 0) {
              local_94 = FUN_14192d7e0(lVar10);
            }
          }
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
          plVar12 = plVar11;
          plVar5 = (longlong *)plVar11[2];
          if (*(char *)(plVar11[2] + 0x1d) == '\0') {
            do {
              plVar11 = plVar5;
              plVar5 = (longlong *)*plVar11;
            } while (*(char *)(*plVar11 + 0x1d) == '\0');
          }
          else {
            do {
              plVar11 = (longlong *)plVar12[1];
              if (*(char *)((longlong)plVar11 + 0x1d) != '\0') break;
              bVar18 = plVar12 == (longlong *)plVar11[2];
              plVar12 = plVar11;
            } while (bVar18);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_141928bc0;
      }
      log_InlineLogERROR(&DAT_1419462b8);
LAB_141928d6d:
      if (local_94 == 0) {
        local_94 = 0;
      }
      else {
        *(int *)(param_1 + 0x58) = local_94;
        uVar17 = 0;
        plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x38);
        puVar4 = *(ulonglong **)(param_1 + 8);
        uVar15 = uVar17;
LAB_141928dd0:
        plVar11 = *(longlong **)(param_1 + 0x38);
        if ((puVar4 == (ulonglong *)0x0) || (puVar4 != *(ulonglong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar8 == plVar11) {
          return local_94;
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        if ((int)uVar14 < 0x65) {
          if (puVar4 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar13 = uVar17;
          }
          else {
            uVar13 = *puVar4;
          }
          if (plVar8 == *(longlong **)(uVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar10 = FUN_14191b650(lVar9,*(uint *)(plVar8 + 3));
          if (lVar10 == 0) {
            if (puVar4 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar13 = uVar17;
            }
            else {
              uVar13 = *puVar4;
            }
            if (plVar8 == *(longlong **)(uVar13 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            log_InlineLogERROR("CTeamArenicTeam::ChangeLeader, found NULL user(%u) Status[%d]");
          }
          else {
            FUN_14192d690(lVar10,local_94);
          }
          if (puVar4 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
            plVar11 = plVar8;
            plVar2 = (longlong *)plVar8[2];
            if (*(char *)(plVar8[2] + 0x1d) == '\0') {
              do {
                plVar8 = plVar2;
                plVar2 = (longlong *)*plVar8;
              } while (*(char *)(*plVar8 + 0x1d) == '\0');
            }
            else {
              do {
                plVar8 = (longlong *)plVar11[1];
                if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
                bVar18 = plVar11 == (longlong *)plVar8[2];
                plVar11 = plVar8;
              } while (bVar18);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_141928dd0;
        }
        log_InlineLogERROR(&DAT_1419462b8);
      }
    }
  }
  return local_94;
}




ulonglong FUN_141928f50(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong extraout_RAX;
  ulonglong uVar11;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong extraout_RAX_04;
  undefined8 extraout_RAX_05;
  uint *puVar14;
  int local_a8;
  int local_a4;
  int local_a0;
  longlong *local_98 [3];
  uint *local_80;
  uint *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_50;
  
  local_68 = 0xfffffffffffffffe;
  plVar10 = (longlong *)FUN_141917800();
  if (plVar10 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar11 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar11 = FUN_141917850();
    if (uVar11 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar11 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else if (*(longlong *)(param_1 + 0x40) == 0) {
      log_InlineLogERROR("CTeamArenicTeam::UpdateTeamAthletePoint, team(%u) is empty");
      uVar11 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else if ((*(int *)(param_1 + 0x5c) == 0) || (*(int *)(param_1 + 0x58) == 0)) {
      uVar11 = uVar11 & 0xffffffffffffff00;
    }
    else {
      local_98[0] = operator_new(8);
      if (local_98[0] == (longlong *)0x0) {
        local_98[0] = (longlong *)0x0;
      }
      else {
        *local_98[0] = (longlong)local_98;
      }
      local_80 = (uint *)0x0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      cVar4 = (**(code **)(*plVar10 + 0x1c0))(plVar10,*(undefined4 *)(param_1 + 0x58),local_98);
      puVar14 = local_80;
      if (cVar4 == '\0') {
        if (local_80 != (uint *)0x0) {
          operator_delete(local_80);
        }
        local_80 = (uint *)0x0;
        local_78 = (uint *)0x0;
        local_70 = 0;
        operator_delete(local_98[0]);
        uVar11 = extraout_RAX_02 & 0xffffffffffffff00;
      }
      else if (((longlong)local_78 - (longlong)local_80 & 0xfffffffffffffffcU) == 0) {
        if (local_80 != (uint *)0x0) {
          operator_delete(local_80);
        }
        local_80 = (uint *)0x0;
        local_78 = (uint *)0x0;
        local_70 = 0;
        operator_delete(local_98[0]);
        uVar11 = extraout_RAX_03 & 0xffffffffffffff00;
      }
      else {
        local_50 = (longlong *)0x0;
        if (local_78 < local_80) {
          _invalid_parameter_noinfo();
        }
        plVar2 = local_98[0];
        local_50 = local_98[0];
        local_a0 = 0;
        local_a8 = 0;
        local_a4 = 0;
        while( true ) {
          puVar3 = local_78;
          local_60 = (longlong *)0x0;
          if (local_78 < local_80) {
            _invalid_parameter_noinfo();
          }
          local_60 = local_98[0];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != local_98[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar14 == puVar3) break;
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = 0;
          }
          else {
            lVar12 = *plVar2;
          }
          if (*(uint **)(lVar12 + 0x20) <= puVar14) {
            _invalid_parameter_noinfo();
          }
          uVar1 = *puVar14;
          cVar4 = (**(code **)(*plVar10 + 0x80))(plVar10,uVar1);
          if (cVar4 != '\0') {
            lVar12 = FUN_14191b650(uVar11,uVar1);
            if (lVar12 == 0) {
              log_InlineLogERROR("CTeamArenicTeam::UpdateTeamAthletePoint, found NULL user(%u) Status[%d]");
            }
            else {
              bVar5 = FUN_14191b9d0(uVar11,uVar1);
              if ((((!bVar5) && (uVar13 = FUN_14191b8d0(uVar11,uVar1), (char)uVar13 == '\0')) &&
                  (uVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar1), 0x27 < uVar6)) &&
                 ((cVar4 = (**(code **)(*plVar10 + 0xa8))(plVar10,uVar1), cVar4 == '\0' &&
                  (cVar4 = (**(code **)(*plVar10 + 0x1a8))(plVar10,uVar1), cVar4 == '\0')))) {
                uVar7 = (**(code **)(*plVar10 + 0x158))(plVar10,uVar1);
                cVar4 = (**(code **)(*plVar10 + 0x170))(plVar10,uVar7);
                if ((cVar4 == '\0') && (iVar8 = (**(code **)(*plVar10 + 0x220))(plVar10,uVar1,*(undefined4 *)(param_1 + 0x5c)), 0 < iVar8)) {
                  iVar9 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar1);
                  local_a0 = local_a0 + 1;
                  local_a8 = local_a8 + iVar8;
                  local_a4 = local_a4 + iVar9;
                }
              }
            }
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = 0;
          }
          else {
            lVar12 = *plVar2;
          }
          if (*(uint **)(lVar12 + 0x20) <= puVar14) {
            _invalid_parameter_noinfo();
          }
          puVar14 = puVar14 + 1;
        }
        if (local_a0 == 0) {
          if (local_80 != (uint *)0x0) {
            operator_delete(local_80);
          }
          local_80 = (uint *)0x0;
          local_78 = (uint *)0x0;
          local_70 = 0;
          operator_delete(local_98[0]);
          uVar11 = extraout_RAX_04 & 0xffffffffffffff00;
        }
        else {
          *(int *)(param_1 + 0x4c) = local_a8 / local_a0;
          *(int *)(param_1 + 0x48) = local_a4 / local_a0;
          if (local_80 != (uint *)0x0) {
            operator_delete(local_80);
          }
          local_80 = (uint *)0x0;
          local_78 = (uint *)0x0;
          local_70 = 0;
          operator_delete(local_98[0]);
          uVar11 = CONCAT71((int7)((ulonglong)extraout_RAX_05 >> 8),1);
        }
      }
    }
  }
  return uVar11;
}




void FUN_141929370(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar2 = FUN_141917850();
    if (lVar2 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      FUN_14193abe0(local_418);
      uVar3 = FUN_14193ac90((longlong)local_418,0,*(undefined4 *)(param_1 + 0x58));
      if ((char)uVar3 == '\0') {
        FUN_14193ac30((undefined8 *)local_418);
      }
      else {
        FUN_141926790(param_1,(longlong)local_418);
        FUN_14193adb0((longlong)local_418);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,local_418);
        FUN_14193ac30((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_141929480(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  plVar8 = (longlong *)FUN_141917800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar9 = FUN_141917850();
  if (lVar9 != 0) {
    if (*(int *)(param_1 + 100) != 0) {
      plVar11 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar3 = *(longlong **)(param_1 + 8);
      iVar12 = 0;
      while( true ) {
        plVar4 = *(longlong **)(param_1 + 0x38);
        if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar11 == plVar4) {
          return;
        }
        iVar12 = iVar12 + 1;
        if (100 < iVar12) break;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar3;
        }
        if (plVar11 == *(longlong **)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar10 = FUN_14191b650(lVar9,*(uint *)(plVar11 + 3));
        if (lVar10 == 0) {
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar3;
          }
          if (plVar11 == *(longlong **)(lVar10 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::RequireLoadMap, found NULL user(%u) Status[%d]");
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 100);
          lVar5 = *plVar8;
          uVar7 = FUN_14192d7e0(lVar10);
          (**(code **)(lVar5 + 0xb8))(plVar8,uVar7,uVar2);
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
          plVar4 = (longlong *)plVar11[2];
          if (*(char *)((longlong)plVar4 + 0x1d) == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x1d);
            plVar11 = plVar4;
            plVar4 = (longlong *)*plVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar4 + 0x1d);
              plVar11 = plVar4;
              plVar4 = (longlong *)*plVar4;
            }
          }
          else {
            cVar1 = *(char *)(plVar11[1] + 0x1d);
            plVar6 = (longlong *)plVar11[1];
            plVar4 = plVar11;
            while ((plVar11 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar11[2]))) {
              cVar1 = *(char *)(plVar11[1] + 0x1d);
              plVar6 = (longlong *)plVar11[1];
              plVar4 = plVar11;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      log_InlineLogERROR(&DAT_1419462b8);
    }
    return;
  }
  log_InlineLogERROR(&DAT_1419462b8);
  return;
}




longlong * FUN_1419296f0(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x1d) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x1d) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14192984d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14192987c;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x1d) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x1d);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x1d);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x1d);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x1d);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x1d) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x1d) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14192984d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419270e0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14192987c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419298a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar5 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar5 + 0x1d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_1419254e0(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x1d) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
            plVar12[1] = (longlong)plVar11;
          }
          *plVar11 = (longlong)plVar12;
          plVar10[2] = plVar5[2];
          *(longlong **)(plVar5[2] + 8) = plVar10;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar5) {
          *(longlong **)(param_1[6] + 8) = plVar10;
        }
        else {
          puVar7 = (undefined8 *)plVar5[1];
          if ((longlong *)*puVar7 == plVar5) {
            *puVar7 = plVar10;
          }
          else {
            puVar7[2] = plVar10;
          }
        }
        plVar10[1] = plVar5[1];
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x1c);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x1c);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_141929a8c;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
    plVar12[1] = (longlong)plVar11;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar5) {
    *(longlong **)(param_1[6] + 8) = plVar12;
  }
  else if ((longlong *)*plVar11 == plVar5) {
    *plVar11 = (longlong)plVar12;
  }
  else {
    plVar11[2] = (longlong)plVar12;
  }
  if (*(longlong **)param_1[6] == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x1d);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x1d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x1d);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x1d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_141929a8c:
  if (*(char *)((longlong)plVar5 + 0x1c) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x1c) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_141925ac0((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_141925400((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_141925ac0((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_141925400((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_141925ac0((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_141925400((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x1c) = 1;
  }
  operator_delete(plVar5);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar8 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar8;
  return param_2;
}




longlong * FUN_141929c60(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x1d) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x1d) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




void FUN_141929d30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141929d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




longlong * FUN_141929da0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_141925f30((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x1d) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x1d);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x1d);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x1d);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x1d);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_1419298a0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




ulonglong FUN_141929f50(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong extraout_RAX_00;
  longlong *plVar4;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  undefined8 uVar5;
  uint local_res10 [2];
  longlong local_20 [3];
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar3 = FUN_141917850();
    if (lVar3 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      plVar4 = (longlong *)FUN_141917800();
      if (plVar4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419462b8);
        uVar2 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        *(uint *)(param_1 + 0x58) = param_2;
        uVar1 = (**(code **)(*plVar4 + 0x1d8))(plVar4,param_2);
        *(undefined4 *)(param_1 + 0x5c) = uVar1;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
        lVar3 = FUN_14191b650(lVar3,param_2);
        if (lVar3 == 0) {
          log_InlineLogERROR("CTeamArenicTeam::Create, found NULL user(%u) Status[%d]");
          uVar2 = extraout_RAX_02 & 0xffffffffffffff00;
        }
        else {
          uVar1 = FUN_14192d8d0(lVar3);
          *(undefined4 *)(param_1 + 0x60) = uVar1;
          uVar1 = FUN_14192d8c0(lVar3);
          *(undefined4 *)(param_1 + 0x68) = uVar1;
          FUN_14192d690(lVar3,param_2);
          FUN_14192da50(lVar3,*(undefined4 *)(param_1 + 0x5c));
          FUN_1419296f0((longlong *)(param_1 + 8),local_20,local_res10);
          uVar5 = FUN_141928f50(param_1);
          uVar2 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar2;
}




void FUN_14192a0e0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  ulong uVar2;
  __time64_t _Var3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != param_2) {
    if (iVar1 == 1) {
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else if (iVar1 == 7) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else if (iVar1 == 10) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    switch(param_2) {
    case 0:
    case 5:
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      break;
    case 1:
      _Var3 = _time64((__time64_t *)0x0);
      *(__time64_t *)(param_1 + 0x90) = _Var3;
      break;
    case 2:
      uVar2 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x70) = uVar2 / 1000;
      break;
    case 7:
      uVar2 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x78) = uVar2 / 1000;
      break;
    case 8:
      uVar2 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x80) = uVar2 / 1000;
      break;
    case 10:
      uVar2 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x88) = uVar2 / 1000;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if (param_3 != '\0') {
      FUN_141927470(param_1,param_2);
    }
    *(int *)(param_1 + 0x54) = param_2;
  }
  return;
}




void FUN_14192a2a0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 100) = param_2;
  FUN_141927820(param_1,param_2);
  if (param_2 != 0) {
    FUN_141929480(param_1);
  }
  return;
}




void FUN_14192a2d0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar12;
  bool bVar13;
  longlong *plStack_b0;
  ulonglong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  ulonglong *local_58;
  longlong *plStack_50;
  undefined8 local_48 [2];
  undefined8 local_38 [4];
  ulonglong uVar11;
  
  local_68 = 0xfffffffffffffffe;
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar8 = (longlong *)**(longlong **)(param_1 + 0x38);
    uVar12 = 0;
    puVar1 = *(ulonglong **)(param_1 + 8);
    uVar11 = uVar12;
    plStack_b0 = plVar8;
LAB_14192a370:
    plVar4 = plStack_b0;
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar7) goto LAB_14192a5ff;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    if ((int)uVar10 < 0x65) {
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *puVar1;
      }
      if (plVar8 == *(longlong **)(uVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar2 = plVar8[3];
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar12;
      }
      else {
        uVar9 = *puVar1;
      }
      if (plVar8 == *(longlong **)(uVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar8 + 3));
      if (lVar6 == 0) {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar12;
        }
        else {
          uVar9 = *puVar1;
        }
        if (plVar8 == *(longlong **)(uVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CTeamArenicTeam::ResetTeam, found NULL user(%u) Status[%d]");
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
          plVar7 = plVar8;
          plVar3 = (longlong *)plVar8[2];
          if (*(char *)(plVar8[2] + 0x1d) == '\0') {
            do {
              plVar8 = plVar3;
              plVar3 = (longlong *)*plVar8;
              plStack_b0 = plVar8;
            } while (*(char *)(*plVar8 + 0x1d) == '\0');
          }
          else {
            do {
              plVar8 = (longlong *)plVar7[1];
              plStack_b0 = plVar8;
              if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
              bVar13 = plVar7 == (longlong *)plVar8[2];
              plVar7 = plVar8;
            } while (bVar13);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        plStack_50 = plVar4;
        local_58 = puVar1;
        FUN_1419298a0((undefined8 *)(param_1 + 8),local_48,(longlong *)&local_58);
      }
      else if ((int)lVar2 == *(int *)(param_1 + 0x58)) {
        FUN_14192d690(lVar6,*(int *)(param_1 + 0x58));
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
          plVar7 = plVar8;
          plVar4 = (longlong *)plVar8[2];
          if (*(char *)(plVar8[2] + 0x1d) == '\0') {
            do {
              plVar8 = plVar4;
              plVar4 = (longlong *)*plVar8;
              plStack_b0 = plVar8;
            } while (*(char *)(*plVar8 + 0x1d) == '\0');
          }
          else {
            do {
              plVar8 = (longlong *)plVar7[1];
              plStack_b0 = plVar8;
              if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
              bVar13 = plVar7 == (longlong *)plVar8[2];
              plVar7 = plVar8;
            } while (bVar13);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      else {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
          plVar7 = plVar8;
          plVar3 = (longlong *)plVar8[2];
          if (*(char *)(plVar8[2] + 0x1d) == '\0') {
            do {
              plVar8 = plVar3;
              plVar3 = (longlong *)*plVar8;
              plStack_b0 = plVar8;
            } while (*(char *)(*plVar8 + 0x1d) == '\0');
          }
          else {
            do {
              plVar8 = (longlong *)plVar7[1];
              plStack_b0 = plVar8;
              if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
              bVar13 = plVar7 == (longlong *)plVar8[2];
              plVar7 = plVar8;
            } while (bVar13);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        plStack_70 = plVar4;
        local_78 = puVar1;
        FUN_1419298a0((undefined8 *)(param_1 + 8),local_38,(longlong *)&local_78);
      }
      goto LAB_14192a370;
    }
    log_InlineLogERROR(&DAT_1419462b8);
LAB_14192a5ff:
    FUN_141914570((longlong *)(param_1 + 0x98));
  }
  return;
}




void FUN_14192a640(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar9;
  ulonglong uVar8;
  
  lVar3 = FUN_141917850();
  if (lVar3 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    puVar1 = *(ulonglong **)(param_1 + 8);
    uVar8 = 0;
LAB_14192a6e2:
    plVar5 = *(longlong **)(param_1 + 0x38);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) goto LAB_14192a7dd;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if ((int)uVar7 < 0x65) {
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar1;
      }
      if (plVar4 == *(longlong **)(uVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_14191e910(lVar3,*(uint *)(plVar4 + 3));
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar4 + 0x1d) == '\0') {
        plVar5 = plVar4;
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)(plVar4[2] + 0x1d) == '\0') {
          do {
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar4;
          } while (*(char *)(*plVar4 + 0x1d) == '\0');
        }
        else {
          do {
            plVar4 = (longlong *)plVar5[1];
            if (*(char *)((longlong)plVar4 + 0x1d) != '\0') break;
            bVar9 = plVar5 == (longlong *)plVar4[2];
            plVar5 = plVar4;
          } while (bVar9);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_14192a6e2;
    }
    log_InlineLogERROR(&DAT_1419462b8);
LAB_14192a7dd:
    FUN_141914570((longlong *)(param_1 + 0x98));
  }
  return;
}




undefined8 * FUN_14192a810(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141925dc0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14192a890(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_141929da0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




ulonglong FUN_14192a900(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong extraout_RAX;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined8 extraout_RAX_02;
  longlong lVar11;
  uint *puVar12;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  longlong *local_88 [3];
  longlong *local_70 [3];
  uint *local_58;
  uint *local_50;
  undefined8 local_48;
  
  lVar8 = FUN_141917850();
  local_res18 = lVar8;
  if (lVar8 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar9 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar10 = (longlong *)FUN_141917800();
    if (plVar10 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar9 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      local_res10 = operator_new(8);
      if (local_res10 == (longlong *)0x0) {
        local_70[0] = (longlong *)0x0;
      }
      else {
        *local_res10 = (longlong)local_70;
        local_70[0] = local_res10;
      }
      local_58 = (uint *)0x0;
      local_50 = (uint *)0x0;
      local_48 = 0;
      local_res20 = local_res10;
      cVar4 = (**(code **)(*plVar10 + 0x1c0))(plVar10,*(undefined4 *)(param_1 + 0x58),local_70);
      if (cVar4 == '\0') {
        if (local_58 != (uint *)0x0) {
          operator_delete(local_58);
        }
        local_58 = (uint *)0x0;
        local_50 = (uint *)0x0;
        local_48 = 0;
        operator_delete(local_70[0]);
        uVar9 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        FUN_14192a2d0(param_1);
        puVar12 = local_58;
        plVar2 = local_70[0];
        if (local_50 < local_58) {
          _invalid_parameter_noinfo();
          plVar2 = local_70[0];
        }
        while( true ) {
          puVar3 = local_50;
          local_88[0] = (longlong *)0x0;
          if (local_50 < local_58) {
            _invalid_parameter_noinfo();
          }
          local_88[0] = local_70[0];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != local_70[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar12 == puVar3) break;
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar2;
          }
          if (*(uint **)(lVar11 + 0x20) <= puVar12) {
            _invalid_parameter_noinfo();
          }
          uVar1 = *puVar12;
          local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar1);
          lVar8 = FUN_14191b650(lVar8,uVar1);
          if (lVar8 == 0) {
            log_InlineLogERROR("CTeamArenicTeam::AddAllTeamUser, found NULL user(%u) Status[%d]");
          }
          else {
            FUN_14192da30(lVar8);
            bVar5 = FUN_14191b9d0(local_res18,uVar1);
            if ((((((!bVar5) && (iVar6 = FUN_14192d370(lVar8), iVar6 == 0)) && (uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,uVar1), 0x27 < uVar7)) &&
                 ((cVar4 = (**(code **)(*plVar10 + 0xa8))(plVar10,uVar1), cVar4 == '\0' &&
                  (cVar4 = (**(code **)(*plVar10 + 0x1a8))(plVar10,uVar1), cVar4 == '\0')))) &&
                ((iVar6 = (**(code **)(*plVar10 + 0x158))(plVar10,uVar1), iVar6 != 0 &&
                 ((cVar4 = (**(code **)(*plVar10 + 0x170))(plVar10,iVar6), cVar4 == '\0' &&
                  (cVar4 = (**(code **)(*plVar10 + 0x118))(plVar10,uVar1), cVar4 == '\0')))))) &&
               (iVar6 = (**(code **)(*plVar10 + 0x220))(plVar10,uVar1,*(undefined4 *)(param_1 + 0x5c)), iVar6 != 0)) {
              FUN_14192d690(lVar8,*(undefined4 *)(param_1 + 0x58));
              FUN_14192da50(lVar8,*(undefined4 *)(param_1 + 0x5c));
              FUN_1419296f0((longlong *)(param_1 + 8),(longlong *)local_88,(uint *)&local_res10);
            }
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar2;
          }
          if (*(uint **)(lVar8 + 0x20) <= puVar12) {
            _invalid_parameter_noinfo();
          }
          puVar12 = puVar12 + 1;
          lVar8 = local_res18;
        }
        if (local_58 != (uint *)0x0) {
          operator_delete(local_58);
        }
        local_58 = (uint *)0x0;
        local_50 = (uint *)0x0;
        local_48 = 0;
        operator_delete(local_70[0]);
        uVar9 = CONCAT71((int7)((ulonglong)extraout_RAX_02 >> 8),1);
      }
    }
  }
  return uVar9;
}




undefined8 * FUN_14192acc0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141925dc0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  FUN_141927030((longlong)param_1,param_2);
  return param_1;
}




void FUN_14192ad50(longlong *param_1)

{
  FUN_14192a890(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192ad80(longlong *param_1)

{
  FUN_14192a890(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192adb0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = team_arenic::CTeamArenicTeam::vftable;
  FUN_14192a640((longlong)param_1);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  plVar1 = param_1 + 1;
  FUN_141925f30((longlong)plVar1);
  FUN_141914570(param_1 + 0x13);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  operator_delete((void *)param_1[0x13]);
  FUN_14192a890(plVar1);
  operator_delete((void *)*plVar1);
  return;
}




ulonglong FUN_14192ae70(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  longlong extraout_RAX_00;
  longlong lVar3;
  undefined8 extraout_RAX_01;
  longlong lVar4;
  uint local_res10 [2];
  longlong local_38;
  longlong lStack_30;
  longlong local_28 [2];
  
  local_res10[0] = param_2;
  lVar1 = FUN_141917850();
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_141929c60((longlong *)(param_1 + 8),&local_38,local_res10);
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = *(longlong *)(param_1 + 8);
    local_28[0] = lVar4;
    if ((local_38 == 0) || (local_38 != lVar4)) {
      _invalid_parameter_noinfo();
      lVar4 = extraout_RAX_00;
    }
    if (lStack_30 != lVar3) {
      lVar3 = FUN_14191b650(lVar1,param_2);
      if (lVar3 == 0) {
        log_InlineLogERROR("CTeamArenicTeam::DeleteMember, found NULL user(%u) Status[%d]");
        return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
      }
      FUN_14192d6a0(lVar3,0);
      FUN_14191e910(lVar1,param_2);
      FUN_1419298a0((undefined8 *)(param_1 + 8),local_28,&local_38);
      lVar4 = FUN_141914e50((longlong *)(param_1 + 0x98),local_res10);
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  return uVar2;
}




void FUN_14192afb0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_c8 [3];
  undefined4 *local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 *puStack_90;
  longlong *local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  longlong local_70 [7];
  
  local_78 = 0xfffffffffffffffe;
  plVar8 = (longlong *)FUN_141917800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    puVar2 = *(ulonglong **)(param_1 + 8);
    local_res18 = operator_new(8);
    plVar13 = (longlong *)0x0;
    local_c8[0] = plVar13;
    if (local_res18 != (longlong *)0x0) {
      *local_res18 = (longlong)local_c8;
      local_c8[0] = local_res18;
    }
    local_b0 = (undefined4 *)0x0;
    local_a8 = (undefined4 *)0x0;
    local_a0 = 0;
    local_res20 = local_res18;
    while( true ) {
      uVar11 = 0;
      plVar3 = *(longlong **)(param_1 + 0x38);
      if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar12 == plVar3) goto LAB_14192b295;
      uVar16 = (int)plVar13 + 1;
      plVar13 = (longlong *)(ulonglong)uVar16;
      if (100 < (int)uVar16) break;
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar15 = uVar11;
      }
      else {
        uVar15 = *puVar2;
      }
      if (plVar12 == *(longlong **)(uVar15 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar1 = (undefined4)plVar12[3];
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar1);
      cVar7 = (**(code **)(*plVar8 + 0x80))(plVar8,uVar1);
      puVar5 = local_a8;
      if (cVar7 != '\0') {
        if (local_b0 != (undefined4 *)0x0) {
          uVar11 = local_a0 - (longlong)local_b0 >> 2;
        }
        if ((ulonglong)((longlong)local_a8 - (longlong)local_b0 >> 2) < uVar11) {
          *local_a8 = uVar1;
          local_a8 = local_a8 + 1;
        }
        else {
          if (local_a8 < local_b0) {
            _invalid_parameter_noinfo();
          }
          puVar4 = local_b0;
          plVar3 = local_c8[0];
          local_98 = local_c8[0];
          puStack_90 = puVar5;
          if (((longlong)local_a8 - (longlong)local_b0 & 0xfffffffffffffffcU) == 0) {
            lVar14 = 0;
          }
          else {
            if (local_a8 < local_b0) {
              _invalid_parameter_noinfo();
            }
            if ((plVar3 == (longlong *)0x0) || (plVar3 != local_c8[0])) {
              _invalid_parameter_noinfo();
            }
            lVar14 = (longlong)puVar5 - (longlong)puVar4 >> 2;
          }
          local_88 = local_98;
          puStack_80 = puStack_90;
          FUN_141914660((longlong)local_c8,(longlong)&local_88,1,(undefined4 *)&local_res18);
          puVar5 = local_b0;
          if (local_a8 < local_b0) {
            _invalid_parameter_noinfo();
          }
          plVar3 = local_c8[0];
          if (local_c8[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *local_c8[0];
          }
          if (puVar5 + lVar14 <= *(undefined4 **)(lVar9 + 0x20)) {
            if (plVar3 == (longlong *)0x0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *plVar3;
            }
            if (*(undefined4 **)(lVar9 + 0x18) <= puVar5 + lVar14) goto LAB_14192b1f4;
          }
          _invalid_parameter_noinfo();
        }
      }
LAB_14192b1f4:
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar12 + 0x1d) == '\0') {
        plVar3 = (longlong *)plVar12[2];
        if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
          cVar7 = *(char *)(*plVar3 + 0x1d);
          plVar12 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*plVar3 + 0x1d);
            plVar12 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar7 = *(char *)(plVar12[1] + 0x1d);
          plVar6 = (longlong *)plVar12[1];
          plVar3 = plVar12;
          while ((plVar12 = plVar6, cVar7 == '\0' && (plVar3 == (longlong *)plVar12[2]))) {
            cVar7 = *(char *)(plVar12[1] + 0x1d);
            plVar6 = (longlong *)plVar12[1];
            plVar3 = plVar12;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    log_InlineLogERROR(&DAT_1419462b8);
LAB_14192b295:
    if ((longlong)local_a8 - (longlong)local_b0 >> 2 != 0) {
      local_res18 = local_70;
      puVar10 = FUN_1419143b0(local_70,local_c8);
      (**(code **)(*plVar8 + 0x10))(plVar8,puVar10,param_2);
    }
    if (local_b0 != (undefined4 *)0x0) {
      operator_delete(local_b0);
    }
    local_b0 = (undefined4 *)0x0;
    local_a8 = (undefined4 *)0x0;
    local_a0 = 0;
    operator_delete(local_c8[0]);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14192b330(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong extraout_RAX_00;
  uint7 uVar12;
  longlong lVar10;
  char *_Source;
  undefined8 uVar11;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_918 [32];
  uint local_8f8;
  undefined4 local_8f0;
  int local_8e8;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  longlong local_8c8;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  longlong local_8a8;
  longlong *local_8a0;
  undefined8 local_898;
  longlong *local_890;
  CMsg local_878 [1040];
  CMsg local_468 [1040];
  undefined4 local_58;
  char local_54 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_898 = 0xfffffffffffffffe;
  local_30 = DAT_14195d590 ^ (ulonglong)auStack_918;
  local_8a8 = param_2;
  plVar7 = (longlong *)FUN_141917800();
  if (plVar7 == (longlong *)0x0) {
    local_8f8 = 0x2fd;
    log_InlineLogERROR(&DAT_1419462b8);
    uVar8 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar9 = FUN_141917850();
    local_8c8 = lVar9;
    if (lVar9 == 0) {
      local_8f8 = 0x300;
      log_InlineLogERROR(&DAT_1419462b8);
      uVar8 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar12 = (uint7)((ulonglong)lVar9 >> 8);
      if (param_2 == 0) {
        uVar8 = (ulonglong)uVar12 << 8;
      }
      else if ((*(int *)(param_1 + 0x54) == 3) && (*(int *)(param_1 + 100) != 0)) {
        plVar15 = (longlong *)**(undefined8 **)(param_1 + 0x38);
        lVar10 = *(longlong *)(param_1 + 8);
        local_8b8._0_4_ = (undefined4)lVar10;
        local_8b8._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_8b0._0_4_ = SUB84(plVar15,0);
        uStack_8b0._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
        local_8d8 = (undefined4)local_8b8;
        uStack_8d4 = local_8b8._4_4_;
        uStack_8d0 = (undefined4)uStack_8b0;
        uStack_8cc = uStack_8b0._4_4_;
        local_8e8 = 0;
        local_8b8 = lVar10;
        uStack_8b0 = plVar15;
LAB_14192b450:
        plVar14 = *(longlong **)(param_1 + 0x38);
        local_890 = *(longlong **)(param_1 + 8);
        plVar13 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
        if ((plVar13 == (longlong *)0x0) || (plVar13 != local_890)) {
          _invalid_parameter_noinfo();
          plVar13 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
        }
        if (plVar15 == plVar14) goto LAB_14192b821;
        local_8e8 = local_8e8 + 1;
        if (local_8e8 < 0x65) {
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar13;
          }
          if (plVar15 == *(longlong **)(lVar10 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar10 = FUN_14191b650(lVar9,*(uint *)(plVar15 + 3));
          local_8b8 = lVar10;
          if (lVar10 == 0) {
            plVar14 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
            if (plVar14 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar10 = 0;
            }
            else {
              lVar10 = *plVar14;
            }
            if (plVar15 == *(longlong **)(lVar10 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            log_InlineLogERROR("CTeamArenicTeam::BeginAthletics, found NULL user(%u) Status[%d]");
          }
          else {
            iVar4 = *(int *)(param_1 + 0x58);
            iVar2 = FUN_14192d7a0(lVar10);
            if ((iVar2 == iVar4) && (iVar4 = *(int *)(param_1 + 100), iVar2 = FUN_14192d7c0(lVar10), iVar2 == iVar4)) {
              uVar3 = FUN_14192d7e0(lVar10);
              bVar16 = FUN_141915ea0(lVar9,uVar3);
              if (bVar16) {
                FUN_141915dc0(lVar9,uVar3,'\0','\x01');
              }
              cVar1 = (**(code **)(*plVar7 + 0x1b0))(plVar7,uVar3);
              if (cVar1 != '\0') {
                (**(code **)(*plVar7 + 0x1b8))(plVar7,uVar3,0);
              }
              iVar4 = (**(code **)(*plVar7 + 0x158))(plVar7,uVar3);
              if ((iVar4 == 0) || (cVar1 = (**(code **)(*plVar7 + 0x168))(plVar7,iVar4), cVar1 == '\0')) {
                log_InlineLogERROR("CTeamArenicTeam::BeginAthletics, map error user: %u, map: %u");
                plVar14 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
                lVar9 = local_8c8;
              }
              else {
                cVar1 = (**(code **)(*plVar7 + 0x180))(plVar7,iVar4);
                if (cVar1 == '\0') {
                  lVar9 = *plVar7;
                  uVar5 = (**(code **)(lVar9 + 0x78))(plVar7,uVar3);
                  uVar6 = (**(code **)(*plVar7 + 0x70))(plVar7,uVar3);
                  local_8f0 = 1;
                  local_8f8 = uVar5;
                  (**(code **)(lVar9 + 0x90))(plVar7,uVar3,iVar4,uVar6);
                  lVar10 = local_8b8;
                }
                cVar1 = (**(code **)(*plVar7 + 0xb0))(plVar7,uVar3,*(undefined4 *)(param_1 + 100));
                if (cVar1 == '\0') {
                  log_InlineLogERROR("CTeamArenicTeam::BeginAthletics, trans map error, user: %d ,arenic map: %u");
                  plVar14 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
                  lVar9 = local_8c8;
                }
                else {
                  cVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7,uVar3);
                  if (cVar1 == '\0') {
                    (**(code **)(*plVar7 + 0x148))(plVar7,uVar3);
                    local_8f8 = local_8f8 & 0xffffff00;
                    (**(code **)(*plVar7 + 200))(plVar7,uVar3,0,0);
                  }
                  FUN_14192d7f0(lVar10);
                  FUN_14192d850(lVar10,2);
                  (**(code **)(*plVar7 + 0x140))(plVar7,uVar3);
                  lVar9 = *plVar7;
                  uVar6 = (**(code **)(lVar9 + 0xf0))(plVar7,uVar3);
                  local_8f8 = 1;
                  (**(code **)(lVar9 + 0xe0))(plVar7,uVar3,0,uVar6);
                  lVar9 = *plVar7;
                  uVar6 = (**(code **)(lVar9 + 0xf8))(plVar7,uVar3);
                  local_8f8 = 1;
                  (**(code **)(lVar9 + 0xe0))(plVar7,uVar3,2,uVar6);
                  lVar9 = *plVar7;
                  (**(code **)(lVar9 + 0x100))(plVar7,uVar3);
                  local_8f8 = 1;
                  (**(code **)(lVar9 + 0xe0))(plVar7,uVar3);
                  plVar14 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
                  lVar9 = local_8c8;
                }
              }
            }
            else {
              log_InlineLogERROR("CTeamArenicTeam::BeginAthletics, wrong teamer info");
              plVar14 = (longlong *)CONCAT44(uStack_8d4,local_8d8);
            }
          }
          if (plVar14 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar15 + 0x1d) == '\0') {
            plVar14 = plVar15;
            plVar13 = (longlong *)plVar15[2];
            if (*(char *)(plVar15[2] + 0x1d) == '\0') {
              do {
                plVar15 = plVar13;
                plVar13 = (longlong *)*plVar15;
                local_8a0 = plVar15;
              } while (*(char *)(*plVar15 + 0x1d) == '\0');
            }
            else {
              do {
                plVar15 = (longlong *)plVar14[1];
                if (*(char *)((longlong)plVar15 + 0x1d) != '\0') break;
                bVar16 = plVar14 == (longlong *)plVar15[2];
                plVar14 = plVar15;
              } while (bVar16);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_14192b450;
        }
        local_8f8 = 0x310;
        log_InlineLogERROR(&DAT_1419462b8);
LAB_14192b821:
        FUN_14192a0e0(param_1,7,'\x01');
        lVar9 = local_8a8;
        uVar6 = *(undefined4 *)(local_8a8 + 0x58);
        FUN_14193a090(local_468);
        local_54[0] = '\0';
        local_54[1] = '\0';
        local_54[2] = '\0';
        local_54[3] = '\0';
        local_54[4] = '\0';
        local_54[5] = '\0';
        local_54[6] = '\0';
        local_54[7] = '\0';
        local_54[8] = '\0';
        local_54[9] = '\0';
        local_54[10] = '\0';
        local_54[0xb] = '\0';
        local_54[0xc] = '\0';
        local_54[0xd] = '\0';
        local_54[0xe] = '\0';
        local_54[0xf] = '\0';
        local_54[0x10] = '\0';
        local_54[0x11] = '\0';
        local_54[0x12] = '\0';
        local_54[0x13] = '\0';
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_58 = uVar6;
        _Source = (char *)(**(code **)(*plVar7 + 0x58))(plVar7,uVar6);
        strncpy(local_54,_Source,0x10);
        local_54[0x10] = '\0';
        local_54[0x11] = '\0';
        local_54[0x12] = '\0';
        local_54[0x13] = '\0';
        local_40 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar6);
        local_3c = (**(code **)(*plVar7 + 0x48))(plVar7,uVar6);
        local_34 = (**(code **)(*plVar7 + 0x38))(plVar7,uVar6);
        uVar11 = FUN_14193a1c0((longlong)local_468,8,0,&local_58);
        if ((char)uVar11 != '\0') {
          FUN_14192afb0(param_1,local_468);
        }
        FUN_14193abe0(local_878);
        uVar11 = FUN_14193ac90((longlong)local_878,1,*(undefined4 *)(lVar9 + 0x58));
        if (((char)uVar11 != '\0') && (uVar11 = FUN_141926790(lVar9,(longlong)local_878), (char)uVar11 != '\0')) {
          FUN_14192afb0(param_1,local_878);
        }
        FUN_14193ac30((undefined8 *)local_878);
        uVar11 = FUN_14193a0e0((undefined8 *)local_468);
        uVar8 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      }
      else {
        uVar8 = (ulonglong)uVar12 << 8;
      }
    }
  }
  return uVar8;
}




void FUN_14192b9e0(longlong param_1,char param_2,char param_3,char param_4,int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  CMsg local_848 [1040];
  CMsg local_438 [1040];
  
  plVar5 = (longlong *)FUN_141917800();
  if (plVar5 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar6 = FUN_141917850();
    if (lVar6 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_14192a2a0(param_1,0);
      plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar1 = *(longlong **)(param_1 + 8);
      iVar11 = 0;
      bVar13 = false;
LAB_14192bb00:
      plVar10 = *(longlong **)(param_1 + 0x38);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar10) goto LAB_14192bc9d;
      iVar11 = iVar11 + 1;
      if (iVar11 < 0x65) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar1;
        }
        if (plVar9 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar7 = FUN_14191b650(lVar6,*(uint *)(plVar9 + 3));
        if (lVar7 == 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar1;
          }
          if (plVar9 == *(longlong **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::LeaveArenic, found NULL user(%u) Status[%d]");
          bVar13 = true;
        }
        else {
          iVar4 = FUN_14192d7e0(lVar7);
          if (iVar4 == param_5) {
            FUN_14192e0e0(lVar7,'\0',param_3,param_4);
          }
          else {
            FUN_14192e0e0(lVar7,param_2,param_3,param_4);
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
          plVar10 = plVar9;
          plVar2 = (longlong *)plVar9[2];
          if (*(char *)(plVar9[2] + 0x1d) == '\0') {
            do {
              plVar9 = plVar2;
              plVar2 = (longlong *)*plVar9;
            } while (*(char *)(*plVar9 + 0x1d) == '\0');
          }
          else {
            do {
              plVar9 = (longlong *)plVar10[1];
              if (*(char *)((longlong)plVar9 + 0x1d) != '\0') break;
              bVar12 = plVar10 == (longlong *)plVar9[2];
              plVar10 = plVar9;
            } while (bVar12);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_14192bb00;
      }
      log_InlineLogERROR(&DAT_1419462b8);
LAB_14192bc9d:
      if (bVar13) {
        log_InlineLogERROR("CTeamArenicTeam::LeaveArenic. Team[%u] TeamStatus[%d]");
        iVar11 = 0;
        plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
        plVar1 = *(longlong **)(param_1 + 8);
LAB_14192bd00:
        lVar7 = 0;
        plVar10 = *(longlong **)(param_1 + 0x38);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar9 == plVar10) goto LAB_14192be4d;
        iVar11 = iVar11 + 1;
        if (iVar11 < 0x65) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar7 = *plVar1;
          }
          if (plVar9 == *(longlong **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar7 = FUN_14191b650(lVar6,*(uint *)(plVar9 + 3));
          if (lVar7 != 0) {
            FUN_14192d370(lVar7);
            FUN_14192d7e0(lVar7);
            FUN_14192d7b0(lVar7);
            log_InlineLogERROR("CTeamArenicTeam::LeaveArenic. Team[%u] User[%u] Status[%d]");
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
            plVar10 = plVar9;
            plVar2 = (longlong *)plVar9[2];
            if (*(char *)(plVar9[2] + 0x1d) == '\0') {
              do {
                plVar9 = plVar2;
                plVar2 = (longlong *)*plVar9;
              } while (*(char *)(*plVar9 + 0x1d) == '\0');
            }
            else {
              do {
                plVar9 = (longlong *)plVar10[1];
                if (*(char *)((longlong)plVar9 + 0x1d) != '\0') break;
                bVar13 = plVar10 == (longlong *)plVar9[2];
                plVar10 = plVar9;
              } while (bVar13);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_14192bd00;
        }
        log_InlineLogERROR(&DAT_1419462b8);
LAB_14192be4d:
        cVar3 = (**(code **)(*plVar5 + 0x80))(plVar5,*(undefined4 *)(param_1 + 0x58));
        if (cVar3 == '\0') {
          log_InlineLogERROR("CTeamArenicTeam::LeaveArenic. Leader[%u] is offline Team[%u] TeamStatus[%d]");
        }
      }
      FUN_14193a090(local_438);
      uVar8 = FUN_14193a180((longlong)local_438,10,(uint)(*(int *)(param_1 + 0x68) == 1));
      if ((char)uVar8 != '\0') {
        FUN_14192afb0(param_1,local_438);
      }
      FUN_14192a0e0(param_1,0,'\x01');
      if (((*(longlong *)(param_1 + 0x40) == 0) || (cVar3 = (**(code **)(*plVar5 + 0x80))(plVar5,*(undefined4 *)(param_1 + 0x58)), cVar3 == '\0')) ||
         (iVar11 = (**(code **)(*plVar5 + 0x220))(plVar5,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c)), iVar11 != 0)) {
        FUN_14192a640(param_1);
        FUN_14192a2d0(param_1);
        if ((*(longlong *)(param_1 + 0x40) == 0) || (cVar3 = (**(code **)(*plVar5 + 0x1d0))(plVar5,*(undefined4 *)(param_1 + 0x58)), cVar3 == '\0')) {
          FUN_14191e6f0(lVar6,*(uint *)(param_1 + 0x5c));
        }
        else {
          FUN_14192a0e0(param_1,5,'\x01');
        }
      }
      else {
        FUN_14193a090(local_848);
        uVar8 = FUN_14193a140((longlong)local_848,7);
        if ((char)uVar8 != '\0') {
          FUN_14192afb0(param_1,local_848);
        }
        FUN_14191e6f0(lVar6,*(uint *)(param_1 + 0x5c));
        FUN_14193a0e0((undefined8 *)local_848);
      }
      FUN_14193a0e0((undefined8 *)local_438);
    }
  }
  return;
}




void FUN_14192bfe0(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  bool bVar11;
  longlong *local_b0 [3];
  uint *local_98;
  uint *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  longlong *local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = FUN_141917850();
  if (lVar5 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 8);
    local_78 = plVar1;
    local_b0[0] = operator_new(8);
    if (local_b0[0] == (longlong *)0x0) {
      local_b0[0] = (longlong *)0x0;
    }
    else {
      *local_b0[0] = (longlong)local_b0;
    }
    local_98 = (uint *)0x0;
    local_90 = (uint *)0x0;
    local_88 = 0;
    iVar10 = 0;
LAB_14192c0c0:
    plVar8 = *(longlong **)(param_1 + 0x38);
    local_48 = *(longlong **)(param_1 + 8);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar8) goto LAB_14192c24d;
    iVar10 = iVar10 + 1;
    if (iVar10 < 0x65) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar1;
      }
      if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar6 = FUN_14191b650(lVar5,*(uint *)(plVar7 + 3));
      if (lVar6 == 0) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1;
        }
        if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CTeamArenicTeam::OnInviteTimeOut, found NULL user(%u) Status[%d]");
      }
      else {
        iVar4 = FUN_14192d370(lVar6);
        if (iVar4 != 3) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar1;
          }
          if (plVar7 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_141914e50((longlong *)local_b0,(undefined4 *)(plVar7 + 3));
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
        plVar8 = plVar7;
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)(plVar7[2] + 0x1d) == '\0') {
          do {
            plVar7 = plVar3;
            plVar3 = (longlong *)*plVar7;
            local_80 = plVar7;
          } while (*(char *)(*plVar7 + 0x1d) == '\0');
        }
        else {
          do {
            plVar7 = (longlong *)plVar8[1];
            if (*(char *)((longlong)plVar7 + 0x1d) != '\0') break;
            bVar11 = plVar8 == (longlong *)plVar7[2];
            plVar8 = plVar7;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_14192c0c0;
    }
    log_InlineLogERROR(&DAT_1419462b8);
LAB_14192c24d:
    puVar9 = local_98;
    local_68 = (longlong *)0x0;
    if (local_90 < local_98) {
      _invalid_parameter_noinfo();
    }
    plVar7 = local_b0[0];
    local_68 = local_b0[0];
    while( true ) {
      puVar2 = local_90;
      local_58 = (longlong *)0x0;
      if (local_90 < local_98) {
        _invalid_parameter_noinfo();
      }
      local_58 = local_b0[0];
      if ((plVar7 == (longlong *)0x0) || (plVar7 != local_b0[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar9 == puVar2) break;
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar7;
      }
      if (*(uint **)(lVar6 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      FUN_1419219b0(lVar5,*puVar9);
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar7;
      }
      if (*(uint **)(lVar6 + 0x20) <= puVar9) {
        _invalid_parameter_noinfo();
      }
      puVar9 = puVar9 + 1;
    }
    if (local_98 != (uint *)0x0) {
      operator_delete(local_98);
    }
    local_98 = (uint *)0x0;
    local_90 = (uint *)0x0;
    local_88 = 0;
    operator_delete(local_b0[0]);
  }
  return;
}




undefined8 * FUN_14192c370(undefined8 *param_1,longlong param_2)

{
  FUN_14192acc0(param_1,param_2);
  return param_1;
}




void FUN_14192c3a0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  bool bVar16;
  longlong *local_c0 [3];
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar7 = (longlong *)FUN_141917800();
  if (plVar7 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar8 = FUN_141917850();
    if (lVar8 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar14 = (longlong *)0x0;
      plVar2 = *(longlong **)(param_1 + 8);
      local_88 = plVar2;
      local_88 = operator_new(8);
      local_c0[0] = plVar14;
      if (local_88 != (longlong *)0x0) {
        *local_88 = (longlong)local_c0;
        local_c0[0] = local_88;
      }
      local_a8 = (uint *)0x0;
      local_a0 = (uint *)0x0;
      local_98 = 0;
LAB_14192c4b0:
      lVar9 = 0;
      plVar11 = *(longlong **)(param_1 + 0x38);
      local_58 = *(longlong **)(param_1 + 8);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58)) {
        _invalid_parameter_noinfo();
      }
      if (plVar10 == plVar11) goto LAB_14192c660;
      uVar15 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar15;
      if ((int)uVar15 < 0x65) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *plVar2;
        }
        if (plVar10 == *(longlong **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar9 = FUN_14191b650(lVar8,*(uint *)(plVar10 + 3));
        if (lVar9 == 0) {
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar2;
          }
          if (plVar10 == *(longlong **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTeamArenicTeam::KickUnloadMapTeamer, found NULL user(%u) Status[%d]");
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 100);
          lVar13 = *plVar7;
          uVar6 = FUN_14192d7e0(lVar9);
          cVar5 = (**(code **)(lVar13 + 0xb8))(plVar7,uVar6,uVar1);
          if (cVar5 == '\0') {
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar9 = 0;
            }
            else {
              lVar9 = *plVar2;
            }
            if (plVar10 == *(longlong **)(lVar9 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            FUN_141914e50((longlong *)local_c0,(undefined4 *)(plVar10 + 3));
          }
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar10 + 0x1d) == '\0') {
          plVar11 = plVar10;
          plVar4 = (longlong *)plVar10[2];
          if (*(char *)(plVar10[2] + 0x1d) == '\0') {
            do {
              plVar10 = plVar4;
              plVar4 = (longlong *)*plVar10;
              local_90 = plVar10;
            } while (*(char *)(*plVar10 + 0x1d) == '\0');
          }
          else {
            do {
              plVar10 = (longlong *)plVar11[1];
              if (*(char *)((longlong)plVar10 + 0x1d) != '\0') break;
              bVar16 = plVar11 == (longlong *)plVar10[2];
              plVar11 = plVar10;
            } while (bVar16);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_14192c4b0;
      }
      log_InlineLogERROR(&DAT_1419462b8);
LAB_14192c660:
      puVar12 = local_a8;
      local_78 = (longlong *)0x0;
      if (local_a0 < local_a8) {
        _invalid_parameter_noinfo();
      }
      plVar7 = local_c0[0];
      local_78 = local_c0[0];
      while( true ) {
        puVar3 = local_a0;
        local_68 = (longlong *)0x0;
        if (local_a0 < local_a8) {
          _invalid_parameter_noinfo();
        }
        local_68 = local_c0[0];
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_c0[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar12 == puVar3) break;
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = lVar9;
        }
        else {
          lVar13 = *plVar7;
        }
        if (*(uint **)(lVar13 + 0x20) <= puVar12) {
          _invalid_parameter_noinfo();
        }
        FUN_1419219b0(lVar8,*puVar12);
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = lVar9;
        }
        else {
          lVar13 = *plVar7;
        }
        if (*(uint **)(lVar13 + 0x20) <= puVar12) {
          _invalid_parameter_noinfo();
        }
        puVar12 = puVar12 + 1;
      }
      if (local_a8 != (uint *)0x0) {
        operator_delete(local_a8);
      }
      local_a8 = (uint *)0x0;
      local_a0 = (uint *)0x0;
      local_98 = 0;
      operator_delete(local_c0[0]);
    }
  }
  return;
}




undefined8 * FUN_14192c780(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141925dc0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14192c800(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = team_arenic::CTeamArenicTeam::vftable;
  FUN_14192c780(param_1 + 1);
  plVar2 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x13);
    plVar2 = plVar1;
  }
  param_1[0x13] = plVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}




undefined8 * FUN_14192c8c0(undefined8 *param_1,uint param_2)

{
  FUN_14192adb0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1419257e0(param_1);
  }
  return param_1;
}




undefined8 * FUN_14192c8f0(uint param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_14195d5e0 & 1) == 0) {
    DAT_14195d5e0 = DAT_14195d5e0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5d8,"CTeamArenicTeam");
    atexit((_func_5014 *)&LAB_141945720);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_14195d5d8,200);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_14192c800(puVar1);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CTeamArenicTeam::CreateNew, error in allocate memory");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_141929f50((longlong)puVar1,param_1);
    if ((char)uVar2 == '\0') {
      log_InlineLogERROR("CTeamArenicTeam::CreateNew, can not create CTeamArenicTeam");
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_14192c9c0(longlong param_1)

{
  ulong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  lVar2 = FUN_141917850();
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    if ((*(int *)(param_1 + 0x70) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x70) + 0x3cU <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      FUN_141920da0(lVar2,param_1);
    }
    if ((*(int *)(param_1 + 0x78) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x78) + 10U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      FUN_14192a0e0(param_1,8,'\x01');
      FUN_14193a090(local_418);
      uVar3 = FUN_14193a140((longlong)local_418,0xc);
      if ((char)uVar3 != '\0') {
        FUN_14192afb0(param_1,local_418);
      }
      FUN_14193a0e0((undefined8 *)local_418);
    }
    if ((*(int *)(param_1 + 0x80) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x80) + 300U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_141920980(lVar2,param_1);
    }
    if ((*(int *)(param_1 + 0x88) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x88) + 5U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      FUN_141920b30(lVar2,param_1);
    }
  }
  return;
}




void FUN_14192cb80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  bool bVar14;
  undefined8 *puStack_190;
  longlong *local_188 [6];
  undefined8 *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  longlong *local_118;
  undefined8 *puStack_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 *puStack_d0;
  longlong *local_c8;
  undefined8 *puStack_c0;
  longlong *local_b8;
  undefined8 local_a8;
  longlong *local_98;
  undefined8 *puStack_90;
  longlong *local_88;
  undefined8 local_78;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 *puStack_50;
  
  local_78 = 0xfffffffffffffffe;
  plVar7 = (longlong *)FUN_141917800();
  if (plVar7 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar8 = FUN_141917850();
  if (lVar8 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  local_a8 = *(undefined8 *)(param_2 + 0x40);
  iVar13 = (*(int *)(param_1 + 0x4c) * (int)local_a8 * 3) / 100;
  FUN_14192acc0(local_188,param_1 + 8);
  while( true ) {
    plVar1 = local_188[0];
    if ((iVar13 < 1) || (*(ulonglong *)(param_1 + 0x40) == 0)) {
      puStack_110 = local_158;
      local_118 = local_188[0];
      uStack_130 = *local_158;
      local_138 = local_188[0];
      local_98 = local_188[0];
      puStack_90 = local_158;
      local_e8 = local_188[0];
      uStack_e0 = uStack_130;
      FUN_141929da0((longlong *)local_188,(longlong *)&local_c8,(longlong *)&local_e8,(longlong *)&local_98);
      operator_delete(local_158);
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      operator_delete(local_188[0]);
      return;
    }
    puVar10 = (undefined8 *)*local_158;
    iVar3 = (int)((ulonglong)(longlong)iVar13 / *(ulonglong *)(param_1 + 0x40));
    puStack_190 = puVar10;
    if (iVar3 == 0) break;
LAB_14192ceb0:
    puVar12 = local_158;
    puVar11 = puStack_190;
    local_88 = local_188[0];
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_188[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar10 != puVar12) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (puVar10 == *(undefined8 **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar9 = FUN_14191b650(lVar8,*(uint *)(puVar10 + 3));
      if (lVar9 == 0) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (puVar10 == *(undefined8 **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        log_InlineLogERROR("CTeamArenicTeam::CalcRockPoint, found NULL user(%u) Status[%d]");
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar10 + 0x1d) == '\0') {
          puVar11 = puVar10;
          puVar12 = (undefined8 *)puVar10[2];
          if (*(char *)((longlong)puVar10[2] + 0x1d) == '\0') {
            do {
              puVar10 = puVar12;
              puVar12 = (undefined8 *)*puVar10;
              puStack_190 = puVar10;
              local_128 = puVar10;
            } while (*(char *)((longlong)*puVar10 + 0x1d) == '\0');
          }
          else {
            do {
              puVar10 = (undefined8 *)puVar11[1];
              puStack_190 = puVar10;
              if (*(char *)((longlong)puVar10 + 0x1d) != '\0') break;
              bVar14 = puVar11 == (undefined8 *)puVar10[2];
              puVar11 = puVar10;
            } while (bVar14);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      else {
        uVar4 = FUN_14192d7e0(lVar9);
        iVar5 = (**(code **)(*plVar7 + 0x220))(plVar7,uVar4,*(undefined4 *)(param_1 + 0x5c));
        iVar6 = FUN_14192da40(lVar9);
        if (iVar6 + iVar3 < iVar5) {
          FUN_14192da20(lVar9,iVar3);
          iVar13 = iVar13 - iVar3;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar10 + 0x1d) == '\0') {
            puVar11 = puVar10;
            puVar12 = (undefined8 *)puVar10[2];
            if (*(char *)((longlong)puVar10[2] + 0x1d) == '\0') {
              do {
                puVar10 = puVar12;
                puVar12 = (undefined8 *)*puVar10;
                puStack_190 = puVar10;
                local_100 = puVar10;
              } while (*(char *)((longlong)*puVar10 + 0x1d) == '\0');
            }
            else {
              do {
                puVar10 = (undefined8 *)puVar11[1];
                puStack_190 = puVar10;
                if (*(char *)((longlong)puVar10 + 0x1d) != '\0') break;
                bVar14 = puVar11 == (undefined8 *)puVar10[2];
                puVar11 = puVar10;
              } while (bVar14);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
        }
        else {
          iVar6 = FUN_14192da40(lVar9);
          FUN_14192da60(lVar9,iVar5);
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar10 + 0x1d) == '\0') {
            puVar12 = puVar10;
            puVar2 = (undefined8 *)puVar10[2];
            if (*(char *)((longlong)puVar10[2] + 0x1d) == '\0') {
              do {
                puVar10 = puVar2;
                puVar2 = (undefined8 *)*puVar10;
                puStack_190 = puVar10;
                local_f8 = puVar10;
              } while (*(char *)((longlong)*puVar10 + 0x1d) == '\0');
            }
            else {
              do {
                puVar10 = (undefined8 *)puVar12[1];
                puStack_190 = puVar10;
                if (*(char *)((longlong)puVar10 + 0x1d) != '\0') break;
                bVar14 = puVar12 == (undefined8 *)puVar10[2];
                puVar12 = puVar10;
              } while (bVar14);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          local_c8 = plVar1;
          puStack_c0 = puVar11;
          FUN_1419298a0(local_188,&local_e8,(longlong *)&local_c8);
          iVar13 = iVar13 - (iVar5 - iVar6);
        }
      }
      goto LAB_14192ceb0;
    }
  }
  do {
    puVar11 = local_158;
    local_b8 = local_188[0];
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_188[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar10 == puVar11) {
LAB_14192cdfd:
      puStack_d0 = local_158;
      local_d8 = local_188[0];
      uStack_140 = *local_158;
      local_148 = local_188[0];
      local_58 = local_188[0];
      puStack_50 = local_158;
      local_68 = local_188[0];
      uStack_60 = uStack_140;
      FUN_141929da0((longlong *)local_188,(longlong *)&local_e8,(longlong *)&local_68,(longlong *)&local_58);
      operator_delete(local_158);
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      operator_delete(local_188[0]);
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar1;
    }
    if (puVar10 == *(undefined8 **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar9 = FUN_14191b650(lVar8,*(uint *)(puVar10 + 3));
    if (lVar9 == 0) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (puVar10 == *(undefined8 **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CTeamArenicTeam::CalcRockPoint, found NULL user(%u) Status[%d]");
    }
    else {
      FUN_14192da20(lVar9,1);
      iVar13 = iVar13 + -1;
      if (iVar13 < 1) goto LAB_14192cdfd;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar10 + 0x1d) == '\0') {
      puVar11 = puVar10;
      puVar12 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar10[2] + 0x1d) == '\0') {
        do {
          puVar10 = puVar12;
          puVar12 = (undefined8 *)*puVar10;
          local_108 = puVar10;
        } while (*(char *)((longlong)*puVar10 + 0x1d) == '\0');
      }
      else {
        do {
          puVar10 = (undefined8 *)puVar11[1];
          if (*(char *)((longlong)puVar10 + 0x1d) != '\0') break;
          bVar14 = puVar11 == (undefined8 *)puVar10[2];
          puVar11 = puVar10;
        } while (bVar14);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_14192d290(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar2 = FUN_141924ee0(*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_141924ee0(param_2);
    if ((int)uVar3 != (int)uVar2) {
      FUN_14193a090(local_418);
      uVar2 = FUN_141924ee0(param_2);
      uVar2 = FUN_14193a180((longlong)local_418,6,(int)uVar2);
      if ((char)uVar2 != '\0') {
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined4 *)(param_1 + 0xc),local_418);
      }
      FUN_14193a0e0((undefined8 *)local_418);
    }
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  return;
}




undefined4 FUN_14192d370(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_14192d3a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




int FUN_14192d3b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x20)) {
    log_InlineLogERROR(&DAT_1419462b8);
    return 0;
  }
  return *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
}




ulonglong FUN_14192d400(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar4;
  ulonglong extraout_RAX_01;
  uint uVar5;
  
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar4 = extraout_RAX;
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    *(int *)(param_1 + 0xc) = param_2;
    uVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
    if ((char)uVar4 != '\0') {
      uVar1 = (**(code **)(*plVar3 + 0x1f0))(plVar3,param_2);
      uVar5 = uVar1 / 10;
      *(uint *)(param_1 + 0x1c) = uVar5;
      uVar1 = uVar1 % 10;
      *(uint *)(param_1 + 0x20) = uVar1;
      if (uVar5 < uVar1) {
        log_InlineLogERROR("CTeamArenicUser::Create, user(%d) team arenic point error: %d");
        return extraout_RAX_01 & 0xffffffffffffff00;
      }
      uVar2 = 0x14;
      if (uVar5 < 0x14) {
        uVar2 = uVar5;
      }
      *(uint *)(param_1 + 0x1c) = uVar2;
      uVar5 = 9;
      if (uVar1 < 9) {
        uVar5 = uVar1;
      }
      *(uint *)(param_1 + 0x20) = uVar5;
      return 1;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




void FUN_14192d540(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  iVar3 = 0x14;
  if (*(int *)(param_1 + 0x1c) < 0x14) {
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  iVar2 = 9;
  if (*(int *)(param_1 + 0x20) < 9) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00014192d5bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined4 *)(param_1 + 0xc),iVar2 + iVar3 * 10);
  return;
}




void FUN_14192d5d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if ((*(int *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x1c) != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_14192d540(param_1);
    (**(code **)(*plVar1 + 600))(plVar1,*(undefined4 *)(param_1 + 0xc),0);
    (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined4 *)(param_1 + 0xc),0);
  }
  return;
}




longlong FUN_14192d670(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 8) && (iVar1 != 7)) && (iVar1 != 9)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}




void FUN_14192d690(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




ulonglong FUN_14192d6a0(longlong param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar5 = extraout_RAX;
LAB_14192d6eb:
    return uVar5 & 0xffffffffffffff00;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == param_2) goto LAB_14192d78a;
  if (uVar1 == 5) {
    if (param_2 != 0) {
      if ((param_2 != 1) && (uVar5 = 0, param_2 != 6)) goto LAB_14192d6eb;
      goto LAB_14192d71b;
    }
LAB_14192d779:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
LAB_14192d71b:
    if (param_2 == 0) goto LAB_14192d779;
    if ((param_2 == 1) || (param_2 == 6)) {
      uVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined4 *)(param_1 + 0xc));
      cVar2 = (**(code **)(*plVar4 + 0x170))(plVar4,uVar3);
      param_2 = 1;
      if (cVar2 != '\0') {
        param_2 = 6;
      }
    }
    else if (((8 < param_2) && (param_2 < 0xb)) && (uVar1 == 5)) {
      return 0;
    }
  }
  uVar5 = FUN_14192d290(param_1,param_2);
LAB_14192d78a:
  return CONCAT71((int7)(uVar5 >> 8),1);
}




undefined4 FUN_14192d7a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_14192d7b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




undefined4 FUN_14192d7c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_14192d7d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_14192d7e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




void FUN_14192d7f0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_141917800();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  uVar1 = (**(code **)(*plVar2 + 0xd0))(plVar2,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}




void FUN_14192d850(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined4 *)(param_1 + 0xc),param_2);
  return;
}




undefined4 FUN_14192d8c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




undefined4 FUN_14192d8d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_14192d8e0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_14192d8f0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_14192d900(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar1 = *plVar3;
  iVar2 = (**(code **)(lVar1 + 0x210))(plVar3,*(undefined4 *)(param_1 + 0xc));
  (**(code **)(lVar1 + 0x200))(plVar3,*(undefined4 *)(param_1 + 0xc),param_2 + iVar2);
  lVar1 = *plVar3;
  iVar2 = (**(code **)(lVar1 + 0x208))(plVar3,*(undefined4 *)(param_1 + 0xc));
  (**(code **)(lVar1 + 0x1f8))(plVar3,*(undefined4 *)(param_1 + 0xc),param_2 + iVar2);
                    /* WARNING: Could not recover jumptable at 0x00014192d9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x138))(plVar3,*(undefined4 *)(param_1 + 0xc));
  return;
}




void FUN_14192da20(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  return;
}




void FUN_14192da30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




undefined4 FUN_14192da40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_14192da50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}




void FUN_14192da60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




undefined * FUN_14192da70(void)

{
  if ((DAT_14195d5f0 & 1) == 0) {
    DAT_14195d5f0 = DAT_14195d5f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5e8,"CTeamArenicUser");
    atexit((_func_5014 *)&LAB_141945730);
  }
  return &DAT_14195d5e8;
}




void FUN_14192dad0(__uint64 param_1)

{
  if ((DAT_14195d5f0 & 1) == 0) {
    DAT_14195d5f0 = DAT_14195d5f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5e8,"CTeamArenicUser");
    atexit((_func_5014 *)&LAB_141945730);
  }
                    /* WARNING: Could not recover jumptable at 0x00014192db25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14195d5e8,param_1);
  return;
}




void FUN_14192db30(void *param_1)

{
  if ((DAT_14195d5f0 & 1) == 0) {
    DAT_14195d5f0 = DAT_14195d5f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5e8,"CTeamArenicUser");
    atexit((_func_5014 *)&LAB_141945730);
  }
                    /* WARNING: Could not recover jumptable at 0x00014192db85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14195d5e8,param_1);
  return;
}




void FUN_14192db90(void *param_1)

{
  if ((DAT_14195d5f0 & 1) == 0) {
    DAT_14195d5f0 = DAT_14195d5f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5e8,"CTeamArenicUser");
    atexit((_func_5014 *)&LAB_141945730);
  }
                    /* WARNING: Could not recover jumptable at 0x00014192dbe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14195d5e8,param_1);
  return;
}




undefined8 * FUN_14192dbf0(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CTeamArenicUser::vftable;
  if ((param_2 & 1) != 0) {
    FUN_14192db30(param_1);
  }
  return param_1;
}




void FUN_14192dc20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar1 = *plVar4;
    iVar3 = (**(code **)(lVar1 + 0x230))(plVar4,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(lVar1 + 0x228))(plVar4,*(undefined4 *)(param_1 + 0xc),iVar3 + 1);
    lVar1 = *plVar4;
    iVar3 = (**(code **)(lVar1 + 0x250))(plVar4,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(lVar1 + 0x248))(plVar4,*(undefined4 *)(param_1 + 0xc),iVar3 + 1);
    bVar2 = false;
    if (*(int *)(param_1 + 0x20) < 9) {
      bVar2 = true;
      iVar3 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar3;
      if (iVar3 == 9) {
        FUN_14192d900(param_1,500);
      }
    }
    if (*(int *)(param_1 + 0x1c) < 0x14) {
      bVar2 = true;
      iVar3 = *(int *)(param_1 + 0x1c) + 1;
      *(int *)(param_1 + 0x1c) = iVar3;
      if (iVar3 == 0x14) {
        FUN_14192d900(param_1,500);
      }
    }
    (**(code **)(*plVar4 + 0x268))(plVar4,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20));
    (**(code **)(*plVar4 + 0x270))(plVar4,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
    if (bVar2) {
      FUN_14192d540(param_1);
    }
  }
  return;
}




void FUN_14192dd50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x220))(plVar4,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x30) < iVar3) {
      (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined4 *)(param_1 + 0xc),iVar3 - *(int *)(param_1 + 0x30));
    }
    else {
      (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined4 *)(param_1 + 0xc),0);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    lVar1 = *plVar4;
    iVar3 = (**(code **)(lVar1 + 0x240))(plVar4,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(lVar1 + 0x238))(plVar4,*(undefined4 *)(param_1 + 0xc),iVar3 + 1);
    lVar1 = *plVar4;
    iVar3 = (**(code **)(lVar1 + 0x260))(plVar4,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(lVar1 + 600))(plVar4,*(undefined4 *)(param_1 + 0xc),iVar3 + 1);
    bVar2 = false;
    if (*(int *)(param_1 + 0x1c) < 0x14) {
      bVar2 = true;
      iVar3 = *(int *)(param_1 + 0x1c) + 1;
      *(int *)(param_1 + 0x1c) = iVar3;
      if (iVar3 == 0x14) {
        FUN_14192d900(param_1,500);
      }
    }
    (**(code **)(*plVar4 + 0x270))(plVar4,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x1c));
    if (bVar2) {
      FUN_14192d540(param_1);
    }
  }
  return;
}




void FUN_14192de90(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_141917800();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  if (param_2 == 0) {
    param_2 = (**(code **)(*plVar1 + 0x38))(plVar1,*(undefined4 *)(param_1 + 0xc));
  }
  uVar2 = 0;
  if (param_2 < 0x78) {
    if (param_2 < 0x6e) {
      if (param_2 < 100) {
        if (param_2 < 0x5a) {
          if (param_2 < 0x50) {
            if (0x27 < param_2) {
              uVar2 = 0x5dc;
            }
          }
          else {
            uVar2 = 0x708;
          }
        }
        else {
          uVar2 = 0x898;
        }
      }
      else {
        uVar2 = 0xa8c;
      }
    }
    else {
      uVar2 = 0xce4;
    }
  }
  else {
    uVar2 = 4000;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192df65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,*(undefined4 *)(param_1 + 0xc),uVar2);
  return;
}




undefined8 * FUN_14192df70(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if ((DAT_14195d5f0 & 1) == 0) {
    DAT_14195d5f0 = DAT_14195d5f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14195d5e8,"CTeamArenicUser");
    atexit((_func_5014 *)&LAB_141945730);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_14195d5e8,0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = team_arenic::CTeamArenicUser::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CTeamArenicUser::CreateNew, error in allocate memory");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_14192d400((longlong)puVar1,param_1);
    if ((char)uVar2 == '\0') {
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_14192e060(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  plVar2 = (longlong *)FUN_141917800();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    *(undefined4 *)(param_1 + 0x18) = 2;
    return;
  }
  (**(code **)(*plVar2 + 0xd8))(plVar2,*(undefined4 *)(param_1 + 0xc),uVar1);
  *(undefined4 *)(param_1 + 0x18) = 2;
  return;
}




void FUN_14192e0e0(longlong param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  longlong *plVar2;
  uint in_stack_ffffffffffffffc8;
  
  plVar2 = (longlong *)FUN_141917800();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0;
    (**(code **)(*plVar2 + 0x140))(plVar2,*(undefined4 *)(param_1 + 0xc));
    if (param_4 != '\0') {
      cVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,*(undefined4 *)(param_1 + 0xc));
      if (cVar1 == '\0') {
        (**(code **)(*plVar2 + 0x148))(plVar2,*(undefined4 *)(param_1 + 0xc));
        (**(code **)(*plVar2 + 200))(plVar2,*(undefined4 *)(param_1 + 0xc),0,0,in_stack_ffffffffffffffc8 & 0xffffff00);
      }
    }
    if (param_2 != '\0') {
      (**(code **)(*plVar2 + 0x120))(plVar2,*(undefined4 *)(param_1 + 0xc));
    }
    if (param_3 != '\0') {
      FUN_14192e060(param_1);
    }
  }
  return;
}




void FUN_14192e1f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  return;
}




void FUN_14192e270(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  lVar1 = *plVar3;
  iVar2 = (**(code **)(lVar1 + 0x210))(plVar3,param_2);
  (**(code **)(lVar1 + 0x200))(plVar3,param_2,param_3 + iVar2);
  lVar1 = *plVar3;
  iVar2 = (**(code **)(lVar1 + 0x208))(plVar3,param_2);
  (**(code **)(lVar1 + 0x1f8))(plVar3,param_2,param_3 + iVar2);
                    /* WARNING: Could not recover jumptable at 0x00014192e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  return;
}




bool FUN_14192e360(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_14192e3a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_14192e3f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192e412;
  }
  lVar2 = *plVar1;
LAB_14192e412:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14192e430(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192e452;
  }
  lVar2 = *plVar1;
LAB_14192e452:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_14192e470(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_14192e580(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




bool FUN_14192e6a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_14192e730(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"vector<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
}




longlong FUN_14192e840(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192e862;
  }
  lVar2 = *plVar1;
LAB_14192e862:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14192e880(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_14192e910(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_14192e9b0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014192e9e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_14192ea50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_14192eb70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_14192eba0;
  }
  else {
LAB_14192eba0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_14192ebc8;
  }
  _invalid_parameter_noinfo();
LAB_14192ebc8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_14192ec40(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_14192ece0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_14192ed90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0x28);
  return;
}




longlong FUN_14192ee30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_14192eea0(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_14192ef40(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_14192ef80(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void FUN_14192f070(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_141924d40(*(undefined8 **)(param_1 + lVar2 * 8),param_4);
      if (!bVar1) break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(longlong **)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong **)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




longlong FUN_14192f110(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192f132;
  }
  lVar2 = *plVar1;
LAB_14192f132:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14192f150(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192f172;
  }
  lVar2 = *plVar1;
LAB_14192f172:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_14192f190(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_14192f1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_14192f240(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192f260(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192f2b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14192f2c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192f2e2;
  }
  lVar2 = *plVar1;
LAB_14192f2e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14192f300(longlong *param_1)

{
  FUN_14192e880(param_1);
  return param_1;
}




longlong FUN_14192f320(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192f342;
  }
  lVar2 = *plVar1;
LAB_14192f342:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_14192f360(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192f382;
  }
  lVar2 = *plVar1;
LAB_14192f382:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14192f400(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_14192f4c0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14192e880(param_1);
  return param_2;
}




longlong * FUN_14192f4f0(longlong *param_1)

{
  FUN_14192e9b0(param_1);
  return param_1;
}




void FUN_14192f540(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_14192f5c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x21) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_14192f620(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x21) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




longlong * FUN_14192f680(longlong *param_1,longlong param_2)

{
  FUN_14192eb70(param_1,param_2);
  return param_1;
}




void FUN_14192f6a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x21) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x21);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x21);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x21);
    }
    if (*(char *)(param_1[1] + 0x21) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x21) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014192f6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_14192f740(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x21) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x21) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x21);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x21);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x21);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x21);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014192f764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_14192f7e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_14192f860(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14192f8a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void * FUN_14192f900(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_14192f940(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void * FUN_14192f990(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_14192fa20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = FUN_141924d40((undefined8 *)*param_2,(longlong *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  bVar2 = FUN_141924d40((undefined8 *)*param_3,(longlong *)*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  bVar2 = FUN_141924d40((undefined8 *)*param_2,(longlong *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}




void FUN_14192fab0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    bVar2 = FUN_141924d40(*(undefined8 **)(param_1 + lVar3 * 8),*(longlong **)(param_1 + -8 + lVar3 * 8));
    if (bVar2) {
      lVar3 = lVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  if (lVar3 == param_3) {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar1 = param_3 + -1;
  }
  while (param_2 < lVar1) {
    lVar3 = (lVar1 + -1) / 2;
    bVar2 = FUN_141924d40(*(undefined8 **)(param_1 + lVar3 * 8),param_4);
    if (!bVar2) break;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  *(longlong **)(param_1 + lVar1 * 8) = param_4;
  return;
}




void * FUN_14192fb80(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void FUN_14192fbc0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  *param_3 = *param_1;
  FUN_14192fab0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




longlong FUN_14192fbf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192fc12;
  }
  lVar2 = *plVar1;
LAB_14192fc12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14192fc30(longlong *param_1)

{
  FUN_14192e880(param_1);
  return param_1;
}




longlong FUN_14192fc50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14192fc72;
  }
  lVar2 = *plVar1;
LAB_14192fc72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14192fc90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192fcb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192fcd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14192fcf0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14192fcf0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_14192fd40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_14192e730();
    }
    lVar1 = FUN_14192f400(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_14192fdb0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_14192fde0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_14192fde0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




longlong * FUN_14192fe30(longlong *param_1)

{
  FUN_14192e9b0(param_1);
  return param_1;
}




undefined8 * FUN_14192fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}




undefined8 * FUN_14192fed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_14192ff10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_14192ff50(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14192ffba;
  }
  _invalid_parameter_noinfo();
LAB_14192ffba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_14192fff0(longlong *param_1,longlong param_2)

{
  FUN_14192eb70(param_1,-param_2);
  return param_1;
}




undefined8 * FUN_141930010(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




undefined8 * FUN_141930080(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419300c0(longlong *param_1)

{
  FUN_14192f740(param_1);
  return param_1;
}




longlong * FUN_1419300e0(longlong *param_1)

{
  FUN_14192f6a0(param_1);
  return param_1;
}




void FUN_141930100(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}




void FUN_141930160(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  return;
}




undefined8 * FUN_1419301c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    *(undefined1 *)(puVar1 + 4) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x21) = 0;
  }
  return puVar1;
}




longlong * FUN_141930240(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14192f740(param_1);
  return param_2;
}




longlong * FUN_141930270(longlong *param_1)

{
  FUN_14192f6a0(param_1);
  return param_1;
}




undefined8 * FUN_141930290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_1419302e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void * FUN_141930330(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (0 < lVar1) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_141930370(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




void * FUN_1419303e0(void *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _Dst = (void *)(param_3 + lVar1 * -8);
  if (0 < lVar1) {
    memmove_s(_Dst,lVar1 * 8,param_1,lVar1 * 8);
  }
  return _Dst;
}




void FUN_141930430(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
        }
        param_1[1] = lVar2;
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void * FUN_141930500(void *param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_2 - (longlong)param_1 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void FUN_141930570(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_14192fa20(param_1,param_1 + lVar1,param_1 + lVar1 * 2);
    FUN_14192fa20(param_2 + -lVar1,param_2,param_2 + lVar1);
    FUN_14192fa20(param_3 + lVar1 * -2,param_3 + -lVar1,param_3);
    FUN_14192fa20(param_1 + lVar1,param_2,param_3 + -lVar1);
    return;
  }
  FUN_14192fa20(param_1,param_2,param_3);
  return;
}




void FUN_141930650(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_14192fab0(param_1,lVar2,lVar3,*(longlong **)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_1419306d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    do {
      puVar1 = (undefined8 *)*puVar4;
      bVar2 = FUN_141924d40(puVar1,(longlong *)*param_1);
      if (bVar2) {
        lVar3 = (longlong)puVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(puVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = puVar1;
      }
      else {
        bVar2 = FUN_141924d40(puVar1,(longlong *)puVar4[-1]);
        puVar6 = puVar4;
        puVar5 = puVar4;
        if (bVar2) {
          do {
            puVar6 = puVar5 + -1;
            *puVar5 = *puVar6;
            bVar2 = FUN_141924d40(puVar1,(longlong *)puVar5[-2]);
            puVar5 = puVar6;
          } while (bVar2);
        }
        *puVar6 = puVar1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != param_2);
  }
  return;
}




void FUN_1419307e0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_14192fab0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,plVar1);
  return;
}




void FUN_141930810(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14192fcf0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_141930890(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419308d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_14192fde0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x21);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_141930950(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141930970(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141930990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_1419309e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141930a20(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[3])) || ((ulonglong)param_3[4] < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




longlong * FUN_141930a80(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = lVar3 + param_3 * -8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141930aed;
  }
  _invalid_parameter_noinfo();
LAB_141930aed:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141930b20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141930b60(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x29) == '\0') {
    puVar1 = FUN_14192fe50(param_1,puVar3,param_3,puVar3,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((longlong)puVar3 + 0x29) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_141930b60(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_141930b60(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_141930bf0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_141930cd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141930100();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_141930d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141930160();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141930d70(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0x1ffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_1419301c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x20);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x20) == '\0') {
        *(undefined1 *)(plVar2 + 4) = 1;
        *(undefined1 *)(lVar4 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x21) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x21) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x20) == '\0') {
        *(undefined1 *)(plVar2 + 4) = 1;
        *(undefined1 *)(lVar4 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x21) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x20) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x20) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x21) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x20);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x20) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_1419310b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141931100(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x21) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_14192f740(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x21) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 4;
        plVar7 = plVar7 + 4;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_1419312ec;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x21);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x21);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x21);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x21);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_1419312ec:
  if ((char)plVar2[4] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[4] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_14192f5c0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_14192f620((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_14192f5c0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_14192f620((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_14192f5c0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_14192f620((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 4) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




undefined8 * FUN_1419314c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141931510(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141931560(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void * FUN_141931650(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = param_3 - (longlong)param_2 >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,param_2,_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




undefined8 * FUN_1419316c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar7 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_141930570(param_2,puVar7,param_3 + -1);
  puVar8 = puVar7;
  while (puVar9 = puVar8, param_2 < puVar9) {
    bVar3 = FUN_141924d40((undefined8 *)puVar9[-1],(longlong *)*puVar9);
    if ((bVar3) || (bVar3 = FUN_141924d40((undefined8 *)*puVar9,(longlong *)puVar9[-1]), puVar8 = puVar9 + -1, bVar3)) break;
  }
  do {
    puVar7 = puVar7 + 1;
    puVar8 = puVar7;
    puVar4 = puVar9;
    if (param_3 <= puVar7) break;
    bVar3 = FUN_141924d40((undefined8 *)*puVar7,(longlong *)*puVar9);
    if ((bVar3) || (bVar3 = FUN_141924d40((undefined8 *)*puVar9,(longlong *)*puVar7), bVar3)) break;
  } while( true );
joined_r0x000141931783:
  puVar2 = puVar8;
  puVar8 = puVar9;
  puVar5 = puVar4;
  if (param_3 <= puVar2) {
joined_r0x0001419317c7:
    for (; param_2 < puVar9; puVar9 = puVar9 + -1) {
      puVar8 = puVar8 + -1;
      bVar3 = FUN_141924d40((undefined8 *)*puVar8,(longlong *)*puVar5);
      if (!bVar3) {
        bVar3 = FUN_141924d40((undefined8 *)*puVar5,(longlong *)*puVar8);
        if (bVar3) break;
        puVar5 = puVar5 + -1;
        if (puVar5 != puVar8) {
          uVar1 = *puVar5;
          *puVar5 = *puVar8;
          *puVar8 = uVar1;
        }
      }
    }
    if (puVar9 == param_2) {
      if (puVar2 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar7;
        return param_1;
      }
      if ((puVar7 != puVar2) && (puVar5 != puVar7)) {
        uVar1 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar1;
      }
      puVar7 = puVar7 + 1;
      puVar8 = puVar2 + 1;
      puVar4 = puVar5 + 1;
      if (puVar5 != puVar2) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
    }
    else {
      puVar9 = puVar9 + -1;
      if (puVar2 == param_3) {
        puVar4 = puVar5 + -1;
        if (puVar9 != puVar4) {
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        puVar7 = puVar7 + -1;
        puVar8 = puVar2;
        if (puVar4 != puVar7) {
          uVar1 = *puVar4;
          *puVar4 = *puVar7;
          *puVar7 = uVar1;
        }
      }
      else {
        if (puVar2 != puVar9) {
          uVar1 = *puVar2;
          *puVar2 = *puVar9;
          *puVar9 = uVar1;
        }
        puVar8 = puVar2 + 1;
        puVar4 = puVar5;
      }
    }
    goto joined_r0x000141931783;
  }
  bVar3 = FUN_141924d40((undefined8 *)*puVar4,(longlong *)*puVar2);
  puVar6 = puVar7;
  if (!bVar3) {
    bVar3 = FUN_141924d40((undefined8 *)*puVar2,(longlong *)*puVar4);
    if (bVar3) goto joined_r0x0001419317c7;
    puVar6 = puVar7 + 1;
    if (puVar7 != puVar2) {
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar7 = puVar6;
  puVar8 = puVar2 + 1;
  goto joined_r0x000141931783;
}




void FUN_1419318f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (1 < lVar3) {
    lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
    while (0 < lVar2) {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + -1;
      FUN_14192fab0(param_1,lVar2,lVar3,*(longlong **)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_141931970(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1419306d0(param_1,param_2);
  return;
}




void FUN_141931990(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    plVar1 = *(longlong **)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_14192fab0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,plVar1);
  }
  return;
}




undefined8 * FUN_141931a10(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}




undefined8 * FUN_141931a70(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[3];
  *param_2 = 0;
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




undefined8 * FUN_141931ac0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[4];
  *param_2 = 0;
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




ulonglong FUN_141931b10(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_1[4];
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  lVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar2;
  }
  uVar1 = uVar1 - 8;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    lVar3 = lVar4;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141931b87;
  }
  _invalid_parameter_noinfo();
LAB_141931b87:
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar4 = *plVar2;
  }
  if (*(ulonglong *)(lVar4 + 0x20) <= uVar1) {
    _invalid_parameter_noinfo();
  }
  return uVar1;
}




void FUN_141931be0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141931c00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141931c20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141931cb0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141930bf0(param_1,param_2,param_3);
  return param_2;
}




void FUN_141931cd0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_141930b60(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x29) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x29);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x29);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x29);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x29);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_141931d80(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_14192fe50(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_1419320c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (undefined8 *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




longlong * FUN_141932120(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  rsize_t _DstSize;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  _Src = *(void **)(param_4 + 8);
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_2[1];
  if (_Dst != _Src) {
    lVar2 = param_1[4] - (longlong)_Src >> 3;
    _DstSize = lVar2 * 8;
    if (0 < lVar2) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return param_2;
}




longlong * FUN_141932250(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x21) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x21) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_1419323ad:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419323dc;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x21) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x21) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x21);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x21);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x21);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x21);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x21) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x21) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_1419323ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141930d70(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419323dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_141932400(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_1419308d0((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x21) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x21);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x21);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x21);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x21);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_141931100(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419325b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




undefined8 * FUN_141932600(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141932680(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    plVar1 = *(longlong **)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_14192fab0((longlong)param_1,0,lVar2 + -8 >> 3,plVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419326f0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  int local_4b8;
  undefined4 local_4b4;
  longlong *local_4b0;
  longlong *local_4a0;
  undefined8 local_490;
  CMsg local_488 [1040];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_490 = 0xfffffffffffffffe;
  local_38 = DAT_14195d590 ^ (ulonglong)auStack_4e8;
  local_4b4 = param_2;
  plVar5 = (longlong *)FUN_141917800();
  if (plVar5 == (longlong *)0x0) {
    local_4c8 = 0x20d;
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5,param_2);
    if (cVar4 != '\0') {
      FUN_14193ae80(local_488);
      FUN_14193af30((longlong)local_488);
      puVar8 = *(undefined8 **)(param_1 + 0x110);
      local_4b0 = (longlong *)0x0;
      if (*(undefined8 **)(param_1 + 0x118) < puVar8) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 0xf8);
      puVar2 = *(undefined8 **)(param_1 + 0x118);
      local_4a0 = (longlong *)0x0;
      local_4b0 = plVar1;
      if (puVar2 < *(undefined8 **)(param_1 + 0x110)) {
        _invalid_parameter_noinfo();
      }
      plVar3 = *(longlong **)(param_1 + 0xf8);
      iVar9 = 0;
      local_4b8 = 0;
      local_4a0 = plVar3;
      while( true ) {
        if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar3)) {
          _invalid_parameter_noinfo();
        }
        if ((puVar8 == puVar2) || (9 < iVar9)) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1;
        }
        if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        if ((longlong *)*puVar8 != (longlong *)0x0) {
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_3c = 0;
          local_44 = 0;
          local_40 = 0;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          FUN_141924590((longlong *)*puVar8,&local_78);
          uVar7 = FUN_14193af60((longlong)local_488,(longlong)&local_78);
          if ((char)uVar7 == '\0') break;
        }
        iVar9 = iVar9 + 1;
        local_4b8 = iVar9;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1;
        }
        if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        puVar8 = puVar8 + 1;
      }
      FUN_14193b0d0((longlong)local_488);
      (**(code **)(*plVar5 + 0x18))(plVar5,param_2,local_488);
      FUN_14193aed0((undefined8 *)local_488);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141932980(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *_Source;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 auStack_4f8 [32];
  undefined4 local_4d8;
  undefined4 local_4c8;
  longlong *local_4c0;
  undefined8 *local_4b8;
  uint local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  int local_4a4;
  longlong *local_4a0;
  undefined8 local_490;
  longlong *local_488;
  CMsg local_478 [1040];
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  char local_53 [15];
  undefined1 local_44;
  ulonglong local_40;
  
  local_490 = 0xfffffffffffffffe;
  local_40 = DAT_14195d590 ^ (ulonglong)auStack_4f8;
  local_4c8 = param_2;
  local_4ac = param_2;
  local_4a8 = param_3;
  local_4c0 = (longlong *)FUN_141917800();
  if (local_4c0 == (longlong *)0x0) {
    local_4d8 = 0x23d;
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    cVar3 = (**(code **)(*local_4c0 + 0x80))(local_4c0,param_2);
    if ((cVar3 != '\0') && (param_3 != 0)) {
      uVar5 = *(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3;
      uVar12 = 1000;
      if (uVar5 < 1000) {
        uVar12 = uVar5;
      }
      puVar8 = *(undefined8 **)(param_1 + 0xe0);
      local_488 = (longlong *)0x0;
      if (*(undefined8 **)(param_1 + 0xe8) < puVar8) {
        local_4b8 = (undefined8 *)uVar12;
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 200);
      puVar13 = *(undefined8 **)(param_1 + 0xe8);
      local_4a0 = (longlong *)0x0;
      local_4b8 = puVar13;
      local_488 = plVar1;
      if (puVar13 < *(undefined8 **)(param_1 + 0xe0)) {
        _invalid_parameter_noinfo();
      }
      plVar7 = *(longlong **)(param_1 + 200);
      uVar10 = 1;
      local_4b0 = 1;
      local_4a0 = plVar7;
      FUN_14193a7b0(local_478);
      uVar6 = FUN_14193a860((longlong)local_478,(short)param_3,(short)uVar12);
      if ((char)uVar6 == '\0') {
        FUN_14193a800((undefined8 *)local_478);
      }
      else {
        iVar11 = 0;
        local_4a4 = 0;
        while( true ) {
          if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar7)) {
            _invalid_parameter_noinfo();
          }
          if (puVar8 == puVar13) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar1;
          }
          if (*(undefined8 **)(lVar9 + 0x20) <= puVar8) {
            _invalid_parameter_noinfo();
          }
          plVar2 = (longlong *)*puVar8;
          if (plVar2 != (longlong *)0x0) {
            if (((param_3 * 5 + -5) * 2 + 1U <= uVar10) && (uVar10 <= (uint)(param_3 * 10))) {
              memset(local_68,0,0x28);
              local_64 = local_4c8;
              uVar4 = FUN_141924500((longlong)plVar2);
              local_68[0] = (undefined2)uVar4;
              _Source = (char *)FUN_141924510((longlong)plVar2);
              strncpy(local_53,_Source,0x10);
              local_44 = 0;
              uVar6 = FUN_141924260(plVar2,4);
              local_60 = (undefined4)uVar6;
              lVar9 = *local_4c0;
              uVar4 = FUN_141924520((longlong)plVar2);
              local_54 = (**(code **)(lVar9 + 0x50))(local_4c0,uVar4);
              local_58 = FUN_141924540((longlong)plVar2);
              local_5c = FUN_141924530((longlong)plVar2);
              uVar6 = FUN_14193a8a0((longlong)local_478,local_68);
              plVar7 = local_4a0;
              if ((char)uVar6 == '\0') break;
            }
            uVar10 = uVar10 + 1;
            local_4b0 = uVar10;
          }
          iVar11 = iVar11 + 1;
          local_4a4 = iVar11;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar1;
          }
          if (*(undefined8 **)(lVar9 + 0x20) <= puVar8) {
            _invalid_parameter_noinfo();
          }
          puVar8 = puVar8 + 1;
          puVar13 = local_4b8;
        }
        FUN_14193a970((longlong)local_478);
        (**(code **)(*local_4c0 + 0x18))(local_4c0,local_4c8,local_478);
        FUN_14193a800((undefined8 *)local_478);
      }
    }
  }
  return;
}




longlong * FUN_141932cc0(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_141932e1d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141932e4c;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_141932e1d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141931d80(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141932e4c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_141932e70(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_14192e880(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_14193305c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_14193305c:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_14192f1e0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14192e580((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_14192f1e0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_14192e580((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14192f1e0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_14192e580((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_141933230(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




undefined8 * FUN_141933300(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  rsize_t _DstSize;
  
  _Src = (void *)((longlong)*(void **)(param_3 + 8) + 8);
  lVar3 = param_1[4] - (longlong)_Src >> 3;
  if (0 < lVar3) {
    _DstSize = lVar3 << 3;
    memmove_s(*(void **)(param_3 + 8),_DstSize,_Src,_DstSize);
  }
  param_1[4] = param_1[4] + -8;
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar1 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_141933390(longlong *param_1)

{
  rsize_t _DstSize;
  void *_Src;
  void *_Dst;
  longlong lVar1;
  
  _Src = (void *)param_1[4];
  if (_Src < (void *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  _Dst = (void *)param_1[3];
  if ((void *)param_1[4] < _Dst) {
    _invalid_parameter_noinfo();
  }
  if ((_Dst < (void *)param_1[3]) || ((void *)param_1[4] < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *param_1;
  if ((_Src < (void *)param_1[3]) || ((void *)param_1[4] < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar1 == 0) || (lVar1 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar1 = param_1[4] - (longlong)_Src >> 3;
    _DstSize = lVar1 * 8;
    if (0 < lVar1) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    param_1[4] = (longlong)(_DstSize + (longlong)_Dst);
  }
  return;
}




longlong * FUN_141933450(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x21) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




void FUN_141933520(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141933540(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141933560(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_141930810((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_141932e70(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_141933710(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_141933560(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1419337b0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_141930d70(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141930d70(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
        return param_2;
      }
    }
    else {
      lVar4 = param_1[6];
      if ((*param_3 == 0) || (*param_3 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      if (param_3[1] == lVar4) {
        if (*(uint *)(*(undefined8 **)(param_1[6] + 0x10) + 3) < *param_4) {
          FUN_141930d70(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
          return param_2;
        }
      }
      else {
        uVar8 = *param_4;
        if (uVar8 < *(uint *)(param_3[1] + 0x18)) {
          local_38 = *param_3;
          local_30 = (longlong *)param_3[1];
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)local_30 + 0x21) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x21) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x21);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x21);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x21);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x21);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x21) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x21) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x21) != '\0') {
              FUN_141930d70(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_141930d70(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
            return param_2;
          }
        }
        if (*(uint *)(param_3[1] + 0x18) < uVar8) {
          local_38 = *param_3;
          plVar7 = (longlong *)param_1[6];
          local_30 = (longlong *)param_3[1];
          lVar4 = *param_1;
          if (local_38 == 0) {
            _invalid_parameter_noinfo();
          }
          plVar9 = local_30;
          if (*(char *)((longlong)local_30 + 0x21) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x21);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x21);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x21);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x21);
                plVar6 = (longlong *)plVar9[1];
                plVar5 = plVar9;
              }
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          if ((local_38 == 0) || (local_38 != lVar4)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar9 == plVar7) || (*param_4 < *(uint *)(plVar9 + 3))) {
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x21) != '\0') {
              FUN_141930d70(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_141930d70(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_141932250(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_141933ad0(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_141932400(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141933b40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141933b90(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  rsize_t rVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(longlong *)(param_1 + 0x28) - lVar3 >> 3;
  }
  uVar8 = 0;
  if (param_3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar3 = lVar6 - lVar3 >> 3;
    if (0x1fffffffffffffffU - lVar3 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_14192e730();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_14192f400(param_1 + 0x10,uVar8);
      lVar3 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 3;
      puVar5 = (undefined8 *)((longlong)pvVar2 + lVar3 * 8);
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_4;
        puVar5 = puVar5 + 1;
      }
      lVar6 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s(pvVar2,rVar7,*(void **)(param_1 + 0x18),rVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 3;
      if (lVar6 != 0) {
        rVar7 = lVar6 << 3;
        memmove_s((void *)((longlong)pvVar2 + (lVar3 + param_3) * 8),rVar7,*(void **)(param_2 + 8),rVar7);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)pvVar2 + uVar8 * 8);
      *(void **)(param_1 + 0x20) = (void *)((longlong)pvVar2 + (param_3 + (lVar3 - (longlong)pvVar9 >> 3)) * 8);
      *(void **)(param_1 + 0x18) = pvVar2;
    }
    else if ((ulonglong)(lVar6 - *(longlong *)(param_2 + 8) >> 3) < param_3) {
      uVar1 = *param_4;
      FUN_141931650(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      for (lVar3 = param_3 - ((longlong)puVar5 - *(longlong *)(param_2 + 8) >> 3); lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 8;
      lVar3 = *(longlong *)(param_1 + 0x20);
      for (puVar5 = *(undefined8 **)(param_2 + 8); puVar5 != (undefined8 *)(lVar3 + param_3 * -8); puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    else {
      uVar1 = *param_4;
      pvVar9 = (void *)(lVar6 + param_3 * -8);
      pvVar2 = FUN_141931650(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1419303e0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_141933e40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141933e90(undefined8 *param_1,longlong param_2)

{
  FUN_141932680(param_1,param_2);
  return;
}




void FUN_141933ea0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint local_res10 [2];
  longlong local_res18;
  longlong *local_res20;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_70;
  uint local_68 [2];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50 [3];
  
  local_58 = 0xfffffffffffffffe;
  local_res20 = (longlong *)FUN_141917800();
  if (local_res20 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar8 = *(ulonglong *)(param_1 + 0xe0);
    local_a8 = 0;
    if (*(ulonglong *)(param_1 + 0xe8) < uVar8) {
      _invalid_parameter_noinfo();
    }
    uVar2 = *(undefined8 *)(param_1 + 200);
    local_a8._0_4_ = (undefined4)uVar2;
    local_a8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar8;
    uStack_a0._4_4_ = (undefined4)(uVar8 >> 0x20);
    local_b8 = (undefined4)local_a8;
    uStack_b4 = local_a8._4_4_;
    uStack_b0 = (undefined4)uStack_a0;
    uStack_ac = uStack_a0._4_4_;
    uVar3 = *(ulonglong *)(param_1 + 0xe8);
    local_98 = 0;
    local_a8 = uVar2;
    uStack_a0 = uVar8;
    if (uVar3 < *(ulonglong *)(param_1 + 0xe0)) {
      _invalid_parameter_noinfo();
    }
    uVar2 = *(undefined8 *)(param_1 + 200);
    local_98._0_4_ = (undefined4)uVar2;
    local_98._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_90._0_4_ = (undefined4)uVar3;
    uStack_90._4_4_ = (undefined4)(uVar3 >> 0x20);
    local_88 = (undefined4)local_98;
    uStack_84 = local_98._4_4_;
    uStack_80 = (undefined4)uStack_90;
    uStack_7c = uStack_90._4_4_;
    uVar13 = 1;
    puVar12 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    plVar6 = (longlong *)CONCAT44(uStack_b4,local_b8);
    local_98 = uVar2;
    uStack_90 = uVar3;
    while( true ) {
      if ((plVar6 == (longlong *)0x0) || (plVar6 != (longlong *)CONCAT44(uStack_84,local_88))) {
        _invalid_parameter_noinfo();
      }
      if ((puVar12 == (undefined8 *)CONCAT44(uStack_7c,uStack_80)) || (1000 < uVar13)) break;
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar6;
      }
      if (*(undefined8 **)(lVar10 + 0x20) <= puVar12) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)*puVar12;
      if (plVar4 != (longlong *)0x0) {
        uVar8 = FUN_141924260(plVar4,3);
        local_res10[0] = FUN_141924500((longlong)plVar4);
        if (local_res10[0] < 0x3e9) {
          plVar9 = FUN_141933450((longlong *)(param_1 + 0x128),(longlong *)&local_b8,local_res10);
          plVar5 = (longlong *)*plVar9;
          local_70 = plVar9[1];
          local_res18 = *(longlong *)(param_1 + 0x158);
          local_50[0] = *(longlong **)(param_1 + 0x128);
          local_78 = plVar5;
          if ((plVar5 == (longlong *)0x0) || (plVar5 != local_50[0])) {
            _invalid_parameter_noinfo();
          }
          lVar10 = local_70;
          if (local_70 != local_res18) {
            if (plVar5 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar5;
            }
            if (lVar10 == *(longlong *)(lVar11 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar1 = *(int *)(lVar10 + 0x1c);
            cVar7 = (**(code **)(*local_res20 + 0x80))(local_res20,uVar8 & 0xffffffff);
            if (cVar7 == '\0') {
              FUN_141924350(plVar4,5,iVar1);
              FUN_141924810(plVar4,1);
              local_68[0] = (uint)uVar8;
              local_60 = plVar4;
              FUN_141932cc0((longlong *)(param_1 + 0x88),(longlong *)local_50,local_68);
            }
            else {
              FUN_14192e270(param_1,(uint)uVar8,iVar1);
            }
            uVar13 = uVar13 + 1;
          }
        }
      }
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar6;
      }
      if (*(undefined8 **)(lVar10 + 0x20) <= puVar12) {
        _invalid_parameter_noinfo();
      }
      puVar12 = puVar12 + 1;
    }
  }
  return;
}




void FUN_1419341a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint local_res10 [2];
  longlong local_res18;
  longlong *local_res20;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_70;
  uint local_68 [2];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50 [3];
  
  local_58 = 0xfffffffffffffffe;
  local_res20 = (longlong *)FUN_141917800();
  if (local_res20 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 0xe0);
    local_a8 = 0;
    if (*(ulonglong *)(param_1 + 0xe8) < uVar7) {
      _invalid_parameter_noinfo();
    }
    uVar9 = *(undefined8 *)(param_1 + 200);
    local_a8._0_4_ = (undefined4)uVar9;
    local_a8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar7;
    uStack_a0._4_4_ = (undefined4)(uVar7 >> 0x20);
    local_b8 = (undefined4)local_a8;
    uStack_b4 = local_a8._4_4_;
    uStack_b0 = (undefined4)uStack_a0;
    uStack_ac = uStack_a0._4_4_;
    uVar2 = *(ulonglong *)(param_1 + 0xe8);
    local_98 = 0;
    local_a8 = uVar9;
    uStack_a0 = uVar7;
    if (uVar2 < *(ulonglong *)(param_1 + 0xe0)) {
      _invalid_parameter_noinfo();
    }
    uVar9 = *(undefined8 *)(param_1 + 200);
    local_98._0_4_ = (undefined4)uVar9;
    local_98._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    uStack_90._0_4_ = (undefined4)uVar2;
    uStack_90._4_4_ = (undefined4)(uVar2 >> 0x20);
    local_88 = (undefined4)local_98;
    uStack_84 = local_98._4_4_;
    uStack_80 = (undefined4)uStack_90;
    uStack_7c = uStack_90._4_4_;
    uVar13 = 1;
    puVar10 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    plVar5 = (longlong *)CONCAT44(uStack_b4,local_b8);
    local_98 = uVar9;
    uStack_90 = uVar2;
    while( true ) {
      if ((plVar5 == (longlong *)0x0) || (plVar5 != (longlong *)CONCAT44(uStack_84,local_88))) {
        _invalid_parameter_noinfo();
      }
      if ((puVar10 == (undefined8 *)CONCAT44(uStack_7c,uStack_80)) || (1000 < uVar13)) break;
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar5;
      }
      if (*(undefined8 **)(lVar11 + 0x20) <= puVar10) {
        _invalid_parameter_noinfo();
      }
      plVar3 = (longlong *)*puVar10;
      if (plVar3 != (longlong *)0x0) {
        uVar7 = FUN_141924260(plVar3,3);
        local_res10[0] = FUN_141924500((longlong)plVar3);
        if (local_res10[0] < 0x3e9) {
          plVar8 = FUN_141933450((longlong *)(param_1 + 0x168),(longlong *)&local_b8,local_res10);
          plVar4 = (longlong *)*plVar8;
          local_70 = plVar8[1];
          local_res18 = *(longlong *)(param_1 + 0x198);
          local_50[0] = *(longlong **)(param_1 + 0x168);
          local_78 = plVar4;
          if ((plVar4 == (longlong *)0x0) || (plVar4 != local_50[0])) {
            _invalid_parameter_noinfo();
          }
          lVar11 = local_70;
          if (local_70 != local_res18) {
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar12 = 0;
            }
            else {
              lVar12 = *plVar4;
            }
            if (lVar11 == *(longlong *)(lVar12 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar1 = *(int *)(lVar11 + 0x1c);
            cVar6 = (**(code **)(*local_res20 + 0x80))(local_res20,uVar7 & 0xffffffff);
            if (cVar6 == '\0') {
              uVar9 = FUN_141924260(plVar3,5);
              FUN_141924350(plVar3,5,iVar1 + (int)uVar9);
              FUN_141924810(plVar3,1);
              local_68[0] = (uint)uVar7;
              local_60 = plVar3;
              FUN_141932cc0((longlong *)(param_1 + 0x88),(longlong *)local_50,local_68);
            }
            else {
              FUN_14192e270(param_1,(uint)uVar7,iVar1);
            }
            uVar13 = uVar13 + 1;
          }
        }
      }
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar5;
      }
      if (*(undefined8 **)(lVar11 + 0x20) <= puVar10) {
        _invalid_parameter_noinfo();
      }
      puVar10 = puVar10 + 1;
    }
  }
  return;
}




undefined8 FUN_1419344b0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar6;
}




ulonglong FUN_1419345b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *extraout_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint local_res10 [2];
  longlong *local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong *local_38;
  longlong lStack_30;
  longlong local_28 [2];
  
  local_res10[0] = param_2;
  FUN_141933230((longlong *)(param_1 + 0x88),(longlong *)&local_58,local_res10);
  plVar6 = local_58;
  lVar7 = *(longlong *)(param_1 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0x88);
  local_48 = plVar2;
  if ((local_58 == (longlong *)0x0) || (local_58 != plVar2)) {
    _invalid_parameter_noinfo();
    plVar2 = extraout_RAX;
  }
  lVar1 = lStack_50;
  if (lStack_50 == lVar7) {
    uVar3 = (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  else {
    if (plVar6 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar6;
    }
    if (lVar1 == *(longlong *)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(lVar1 + 0x20);
    if (plVar2 == (longlong *)0x0) {
      puVar4 = FUN_141932e70((undefined8 *)(param_1 + 0x88),local_28,(longlong *)&local_58);
      uVar3 = (ulonglong)puVar4 & 0xffffffffffffff00;
    }
    else {
      uVar5 = FUN_141924260(plVar2,5);
      if ((int)uVar5 != 0) {
        FUN_14192e270(param_1,param_2,(int)uVar5);
      }
      local_38 = local_58;
      lStack_30 = lStack_50;
      FUN_141932e70((undefined8 *)(param_1 + 0x88),local_28,(longlong *)&local_38);
      lVar7 = *(longlong *)(param_1 + 0x78);
      lVar1 = *(longlong *)(param_1 + 0x48);
      local_28[0] = lVar1;
      plVar6 = FUN_141933230((longlong *)(param_1 + 0x48),local_28,local_res10);
      if ((*plVar6 == 0) || (*plVar6 != lVar1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar6[1] == lVar7) {
        FUN_1419241c0(plVar2);
        uVar5 = FUN_141924e60(plVar2);
      }
      else {
        uVar5 = FUN_141924810(plVar2,0);
      }
      uVar3 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
  }
  return uVar3;
}




void FUN_141934750(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_28;
    local_20 = (undefined8 *)*(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar9 = 0;
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924580(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x78))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x78);
  local_20 = puVar4;
  local_28 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_38;
    local_30 = *(undefined8 **)(param_1 + 0x78);
    local_38 = *(longlong *)(param_1 + 0x48);
  }
  else {
    plVar6 = &local_28;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x78);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x48))) {
    _invalid_parameter_noinfo();
  }
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924580(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  return;
}




void FUN_141934950(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_28;
    local_20 = (undefined8 *)*(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar9 = 0;
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924560(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x78))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x78);
  local_20 = puVar4;
  local_28 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_38;
    local_30 = *(undefined8 **)(param_1 + 0x78);
    local_38 = *(longlong *)(param_1 + 0x48);
  }
  else {
    plVar6 = &local_28;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x78);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x48))) {
    _invalid_parameter_noinfo();
  }
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924560(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  return;
}




void FUN_141934b50(longlong param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 *local_20;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_28;
    local_20 = (undefined8 *)*(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar9 = 0;
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924570(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x78))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x78);
  local_20 = puVar4;
  local_28 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar6 = &local_38;
    local_30 = *(undefined8 **)(param_1 + 0x78);
    local_38 = *(longlong *)(param_1 + 0x48);
  }
  else {
    plVar6 = &local_28;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x78);
  lVar3 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x48))) {
    _invalid_parameter_noinfo();
  }
  if (lVar3 != lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_141924570(*(longlong *)(lVar3 + 0x20),param_3);
    }
  }
  return;
}




void FUN_141934d50(longlong *param_1)

{
  FUN_141933710(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141934d80(longlong *param_1,longlong *param_2)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  if (param_1 != param_2) {
    local_38 = *param_1;
    puStack_30 = (undefined8 *)param_1[6];
    uStack_20 = *puStack_30;
    local_28 = local_38;
    FUN_141933560(param_1,local_18,&local_28,&local_38);
    FUN_141931cd0((longlong)param_1,(longlong)param_2);
  }
  return param_1;
}




longlong FUN_141934e00(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_141930bf0(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_141933560(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_141934f40(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *_Dst;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  rsize_t _DstSize;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    pvVar3 = (void *)param_2[3];
    uVar2 = param_2[4] - (longlong)pvVar3 >> 3;
    if (uVar2 == 0) {
      FUN_141933390(param_1);
      return param_1;
    }
    _Dst = (void *)param_1[3];
    uVar7 = param_1[4] - (longlong)_Dst >> 3;
    if (uVar2 <= uVar7) {
      lVar6 = param_2[4] - (longlong)pvVar3 >> 3;
      if (0 < lVar6) {
        _DstSize = lVar6 << 3;
        memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
      }
      param_1[4] = param_1[3] + (param_2[4] - param_2[3] >> 3) * 8;
      return param_1;
    }
    if (_Dst == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1[5] - (longlong)_Dst >> 3;
    }
    if (uVar2 <= uVar5) {
      pvVar1 = (void *)((longlong)pvVar3 + uVar7 * 8);
      FUN_141930330(pvVar3,(longlong)pvVar1,_Dst);
      pvVar3 = FUN_141930370(param_1,pvVar1,param_2[4],(void *)param_1[4]);
      param_1[4] = (longlong)pvVar3;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar4 = FUN_14192fd40((longlong)param_1,param_2[4] - param_2[3] >> 3);
    if ((char)uVar4 != '\0') {
      pvVar3 = FUN_141930370(param_1,(void *)param_2[3],param_2[4],(void *)param_1[3]);
      param_1[4] = (longlong)pvVar3;
    }
  }
  return param_1;
}




longlong FUN_141935080(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint local_res8 [2];
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x21) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_res8[0] = *param_2;
    local_res8[1] = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_1419337b0(param_1,local_28,(longlong *)&local_38,local_res8);
    plVar6 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
  }
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar5 = *plVar6;
  }
  if (puVar4 == *(undefined8 **)(lVar5 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return (longlong)puVar4 + 0x1c;
}




void FUN_141935180(longlong *param_1)

{
  FUN_141933ad0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419351b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141930100();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141935230(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar3 = 0;
  uVar1 = param_1[3];
  lVar4 = lVar3;
  if ((param_1[4] - uVar1 & 0xfffffffffffffff8) != 0) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) >> 3;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_141933b90((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 8;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141935324;
  }
  _invalid_parameter_noinfo();
LAB_141935324:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141935360(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141930160();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined1 FUN_1419353e0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar3 >> 3;
    if (lVar3 < 0x21) {
LAB_1419354b7:
      if (1 < lVar3) {
        param_4 = FUN_1419306d0(param_1,param_2);
      }
      return param_4;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_1419318f0((longlong)param_1,(longlong)param_2);
        uVar2 = FUN_141932680(param_1,(longlong)param_2);
        return uVar2;
      }
      goto LAB_1419354b7;
    }
    FUN_1419316c0(&local_18,param_1,param_2);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_1419353e0(param_1,local_18,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_1419353e0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_141935510(longlong *param_1)

{
  FUN_141933710(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141935540(longlong *param_1)

{
  FUN_141933ad0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141935570(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  
  *param_1 = team_arenic::CTeamRankMgr::vftable;
  FUN_141933390(param_1 + 0x19);
  FUN_141933390(param_1 + 0x1f);
  plVar1 = param_1 + 1;
  plVar6 = *(longlong **)param_1[7];
  plVar7 = (longlong *)*plVar1;
  while( true ) {
    plVar3 = (longlong *)param_1[7];
    if ((plVar7 == (longlong *)0x0) || (plVar7 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar3) break;
    if (plVar7 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar7;
    }
    if (plVar6 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((longlong *)plVar6[4] != (longlong *)0x0) {
      FUN_141924e60((longlong *)plVar6[4]);
    }
    if (plVar7 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar2 = *(char *)(*plVar3 + 0x29);
        plVar6 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar2 = *(char *)(plVar6[1] + 0x29);
        plVar4 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar4, cVar2 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar2 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = param_1 + 9;
  plVar7 = *(longlong **)param_1[0xf];
  plVar3 = (longlong *)*plVar6;
  local_68 = plVar3;
  plStack_60 = plVar7;
  while( true ) {
    plVar4 = (longlong *)param_1[0xf];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar6)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar4) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar3;
    }
    if (plVar7 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)plVar7[4];
    if (plVar4 != (longlong *)0x0) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar3;
      }
      if (plVar7 == *(longlong **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      FUN_141934e00(param_1 + 0x11,(uint *)(plVar7 + 3));
      FUN_141924e60(plVar4);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x29);
        plVar7 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x29);
          plVar7 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar2 = *(char *)(plVar7[1] + 0x29);
        plVar8 = (longlong *)plVar7[1];
        plVar4 = plVar7;
        while ((plVar7 = plVar8, cVar2 == '\0' && (plVar4 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x29);
          plVar8 = (longlong *)plVar7[1];
          plVar4 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar7 = param_1 + 0x11;
  plStack_60 = *(longlong **)param_1[0x17];
  plVar3 = (longlong *)*plVar7;
  plVar4 = plStack_60;
  local_68 = plVar3;
  local_58 = plVar3;
  plStack_50 = plStack_60;
  do {
    do {
      while( true ) {
        while( true ) {
          plVar8 = plVar4;
          plVar4 = (longlong *)param_1[0x17];
          if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar7)) {
            _invalid_parameter_noinfo();
          }
          if (plVar8 == plVar4) {
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
            plVar3 = *(longlong **)(param_1[7] + 8);
            while (cVar2 == '\0') {
              FUN_14192fcf0(plVar1,(longlong *)plVar3[2]);
              plVar4 = (longlong *)*plVar3;
              operator_delete(plVar3);
              plVar3 = plVar4;
              cVar2 = *(char *)((longlong)plVar4 + 0x29);
            }
            *(undefined8 *)(param_1[7] + 8) = param_1[7];
            param_1[8] = 0;
            *(undefined8 *)param_1[7] = param_1[7];
            *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0xf] + 8) + 0x29);
            plVar3 = *(longlong **)(param_1[0xf] + 8);
            while (cVar2 == '\0') {
              FUN_14192fcf0(plVar6,(longlong *)plVar3[2]);
              plVar4 = (longlong *)*plVar3;
              operator_delete(plVar3);
              plVar3 = plVar4;
              cVar2 = *(char *)((longlong)plVar4 + 0x29);
            }
            *(undefined8 *)(param_1[0xf] + 8) = param_1[0xf];
            param_1[0x10] = 0;
            *(undefined8 *)param_1[0xf] = param_1[0xf];
            *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x17] + 8) + 0x29);
            plVar3 = *(longlong **)(param_1[0x17] + 8);
            while (cVar2 == '\0') {
              FUN_14192fcf0(plVar7,(longlong *)plVar3[2]);
              plVar4 = (longlong *)*plVar3;
              operator_delete(plVar3);
              plVar3 = plVar4;
              cVar2 = *(char *)((longlong)plVar4 + 0x29);
            }
            *(undefined8 *)(param_1[0x17] + 8) = param_1[0x17];
            param_1[0x18] = 0;
            *(undefined8 *)param_1[0x17] = param_1[0x17];
            *(undefined8 *)(param_1[0x17] + 0x10) = param_1[0x17];
            plVar3 = param_1 + 0x25;
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x2b] + 8) + 0x21);
            plVar4 = *(longlong **)(param_1[0x2b] + 8);
            while (cVar2 == '\0') {
              FUN_14192fde0(plVar3,(longlong *)plVar4[2]);
              plVar8 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar8;
              cVar2 = *(char *)((longlong)plVar8 + 0x21);
            }
            *(undefined8 *)(param_1[0x2b] + 8) = param_1[0x2b];
            param_1[0x2c] = 0;
            *(undefined8 *)param_1[0x2b] = param_1[0x2b];
            *(undefined8 *)(param_1[0x2b] + 0x10) = param_1[0x2b];
            plVar8 = param_1 + 0x2d;
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x33] + 8) + 0x21);
            plVar4 = *(longlong **)(param_1[0x33] + 8);
            while (cVar2 == '\0') {
              FUN_14192fde0(plVar8,(longlong *)plVar4[2]);
              plVar5 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar5;
              cVar2 = *(char *)((longlong)plVar5 + 0x21);
            }
            *(undefined8 *)(param_1[0x33] + 8) = param_1[0x33];
            param_1[0x34] = 0;
            *(undefined8 *)param_1[0x33] = param_1[0x33];
            *(undefined8 *)(param_1[0x33] + 0x10) = param_1[0x33];
            plStack_50 = (longlong *)param_1[0x33];
            local_68 = (longlong *)*plVar8;
            plStack_60 = (longlong *)*plStack_50;
            local_58 = local_68;
            FUN_141932400(plVar8,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0x33]);
            param_1[0x33] = 0;
            param_1[0x34] = 0;
            operator_delete((void *)*plVar8);
            plStack_50 = (longlong *)param_1[0x2b];
            local_68 = (longlong *)*plVar3;
            plStack_60 = (longlong *)*plStack_50;
            local_58 = local_68;
            FUN_141932400(plVar3,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0x2b]);
            param_1[0x2b] = 0;
            param_1[0x2c] = 0;
            operator_delete((void *)*plVar3);
            if ((void *)param_1[0x22] != (void *)0x0) {
              operator_delete((void *)param_1[0x22]);
            }
            param_1[0x22] = 0;
            param_1[0x23] = 0;
            param_1[0x24] = 0;
            operator_delete((void *)param_1[0x1f]);
            if ((void *)param_1[0x1c] != (void *)0x0) {
              operator_delete((void *)param_1[0x1c]);
            }
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            param_1[0x1e] = 0;
            operator_delete((void *)param_1[0x19]);
            plStack_50 = (longlong *)param_1[0x17];
            local_68 = (longlong *)*plVar7;
            plStack_60 = (longlong *)*plStack_50;
            local_58 = local_68;
            FUN_141933560(plVar7,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0x17]);
            param_1[0x17] = 0;
            param_1[0x18] = 0;
            operator_delete((void *)*plVar7);
            plStack_50 = (longlong *)param_1[0xf];
            local_68 = (longlong *)*plVar6;
            plStack_60 = (longlong *)*plStack_50;
            local_58 = local_68;
            FUN_141933560(plVar6,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0xf]);
            param_1[0xf] = 0;
            param_1[0x10] = 0;
            operator_delete((void *)*plVar6);
            plStack_50 = (longlong *)param_1[7];
            local_68 = (longlong *)*plVar1;
            plStack_60 = (longlong *)*plStack_50;
            local_58 = local_68;
            FUN_141933560(plVar1,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[7]);
            param_1[7] = 0;
            param_1[8] = 0;
            operator_delete((void *)*plVar1);
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar3;
          }
          if (plVar8 == *(longlong **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if ((longlong *)plVar8[4] != (longlong *)0x0) {
            FUN_141924e60((longlong *)plVar8[4]);
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar4 = plVar8;
        }
        plVar4 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
        cVar2 = *(char *)(*plVar4 + 0x29);
        plVar8 = (longlong *)*plVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x29);
          plVar4 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      plVar4 = (longlong *)plVar8[1];
    } while (*(char *)((longlong)plVar4 + 0x29) != '\0');
    do {
      plVar5 = plVar4;
      plVar4 = plVar5;
      if (plVar8 != (longlong *)plVar5[2]) break;
      plVar4 = (longlong *)plVar5[1];
      plVar8 = plVar5;
    } while (*(char *)((longlong)plVar4 + 0x29) == '\0');
  } while( true );
}




void FUN_141935ce0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1419344b0(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_141924500(lVar1);
  return;
}




void FUN_141935d00(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    uVar2 = FUN_141935ce0(param_1,param_2);
    if (uVar2 != 0) {
      if (((param_3 == 0) || (1 < param_3)) && (uVar2 == 1)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_1");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,1);
      }
      else if (((param_3 == 0) || (5 < param_3)) && (uVar2 < 6)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_5");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      else if (((param_3 == 0) || (10 < param_3)) && (uVar2 < 0xb)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_10");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      else if (((param_3 == 0) || (0x14 < param_3)) && (uVar2 < 0x15)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_20");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      else if (((param_3 == 0) || (0x32 < param_3)) && (uVar2 < 0x33)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_50");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      else if (((param_3 == 0) || (100 < param_3)) && (uVar2 < 0x65)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_100");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      else if (((param_3 == 0) || (500 < param_3)) && (uVar2 < 0x1f5)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP_TO_500");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
      if ((uVar2 < param_3) || (param_3 == 0)) {
        pIVar4 = theInstance();
        lVar1 = *plVar3;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TEAM_ARENIC_UP");
        (**(code **)(lVar1 + 0x20))(plVar3,param_2,0x7d6,uVar5,uVar2);
      }
    }
  }
  return;
}




void FUN_141935fb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint local_res10 [2];
  longlong *local_88;
  undefined8 *puStack_80;
  longlong *local_68;
  undefined8 *puStack_60;
  longlong *local_58;
  undefined8 *puStack_50;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  iVar6 = 1;
  puStack_80 = *(undefined8 **)(param_1 + 0xe0);
  if (*(undefined8 **)(param_1 + 0xe8) < puStack_80) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_1 + 200);
  local_88 = plVar4;
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar2 < *(undefined8 **)(param_1 + 0xe0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 200))) {
      _invalid_parameter_noinfo();
    }
    if (puStack_80 == puVar2) break;
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puStack_80) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*puStack_80;
    if (plVar1 == (longlong *)0x0) {
      local_68 = local_88;
      puStack_60 = puStack_80;
      puVar2 = FUN_141933300((undefined8 *)(param_1 + 200),local_48,(longlong)&local_68);
      plVar4 = (longlong *)*puVar2;
      puStack_80 = (undefined8 *)puVar2[1];
      local_88 = plVar4;
    }
    else if ((iVar6 < 0x41b) && (uVar3 = FUN_141924260(plVar1,4), 0 < (int)uVar3)) {
      FUN_141924550((longlong)plVar1,iVar6);
      iVar6 = iVar6 + 1;
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar4;
      }
      if (*(undefined8 **)(lVar5 + 0x20) <= puStack_80) {
        _invalid_parameter_noinfo();
      }
      puStack_80 = puStack_80 + 1;
    }
    else {
      local_58 = local_88;
      puStack_50 = puStack_80;
      puVar2 = FUN_141933300((undefined8 *)(param_1 + 200),local_38,(longlong)&local_58);
      plVar4 = (longlong *)*puVar2;
      puStack_80 = (undefined8 *)puVar2[1];
      uVar3 = FUN_141924260(plVar1,3);
      local_res10[0] = (uint)uVar3;
      FUN_141934e00((longlong *)(param_1 + 8),local_res10);
      FUN_1419241c0(plVar1);
      FUN_141924e60(plVar1);
      local_88 = plVar4;
    }
  }
  return;
}




void FUN_1419361d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint local_res10 [2];
  longlong *local_b8;
  undefined8 *puStack_b0;
  uint local_a0 [2];
  longlong *local_98;
  longlong *local_90 [3];
  longlong *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  longlong *local_58;
  undefined8 *puStack_50;
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  local_68 = 0xfffffffffffffffe;
  iVar7 = 1;
  puStack_b0 = *(undefined8 **)(param_1 + 0x110);
  if (*(undefined8 **)(param_1 + 0x118) < puStack_b0) {
    _invalid_parameter_noinfo();
  }
  plVar5 = *(longlong **)(param_1 + 0xf8);
  local_b8 = plVar5;
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x118);
    local_90[0] = (longlong *)0x0;
    if (puVar3 < *(undefined8 **)(param_1 + 0x110)) {
      _invalid_parameter_noinfo();
    }
    local_90[0] = *(longlong **)(param_1 + 0xf8);
    if ((plVar5 == (longlong *)0x0) || (plVar5 != local_90[0])) {
      _invalid_parameter_noinfo();
    }
    if (puStack_b0 == puVar3) break;
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puStack_b0) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*puStack_b0;
    if (plVar1 == (longlong *)0x0) {
      local_58 = local_b8;
      puStack_50 = puStack_b0;
      puVar3 = FUN_141933300((undefined8 *)(param_1 + 0xf8),local_48,(longlong)&local_58);
      plVar5 = (longlong *)*puVar3;
      puStack_b0 = (undefined8 *)puVar3[1];
      local_b8 = plVar5;
    }
    else {
      bVar2 = FUN_1419247b0(plVar1);
      if (bVar2) {
        uVar4 = FUN_141924260(plVar1,3);
        local_a0[0] = (uint)uVar4;
        local_98 = plVar1;
        FUN_141932cc0((longlong *)(param_1 + 0x88),(longlong *)local_90,local_a0);
      }
      uVar4 = FUN_141924260(plVar1,4);
      if (((int)uVar4 < 1) || (10 < iVar7)) {
        local_78 = local_b8;
        puStack_70 = puStack_b0;
        puVar3 = FUN_141933300((undefined8 *)(param_1 + 0xf8),local_38,(longlong)&local_78);
        plVar5 = (longlong *)*puVar3;
        puStack_b0 = (undefined8 *)puVar3[1];
        uVar4 = FUN_141924260(plVar1,3);
        local_res10[0] = (uint)uVar4;
        FUN_141934e00((longlong *)(param_1 + 0x48),local_res10);
        local_b8 = plVar5;
        if (!bVar2) {
          FUN_1419241c0(plVar1);
          FUN_141924e60(plVar1);
        }
      }
      else {
        FUN_141924550((longlong)plVar1,iVar7);
        iVar7 = iVar7 + 1;
        if (plVar5 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar5;
        }
        if (*(undefined8 **)(lVar6 + 0x20) <= puStack_b0) {
          _invalid_parameter_noinfo();
        }
        puStack_b0 = puStack_b0 + 1;
      }
    }
  }
  return;
}




void FUN_141936430(longlong param_1,uint param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  int local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined1 local_444;
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar4 = FUN_141917850();
    if (lVar4 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else if (param_4 == 0) {
      log_InlineLogERROR("CTeamRankMgr::ShowTeamInfo, found NULL arenic user(%u)");
    }
    else {
      local_468 = FUN_141935ce0(param_1,param_2);
      lVar1 = *plVar3;
      uVar2 = FUN_14192d7b0(param_4);
      local_448 = (**(code **)(lVar1 + 0x220))(plVar3,param_2,uVar2);
      local_45c = (**(code **)(*plVar3 + 0x240))(plVar3,param_2);
      local_460 = (**(code **)(*plVar3 + 0x230))(plVar3,param_2);
      local_454 = FUN_14192d3b0(param_4);
      local_458 = FUN_14192d3a0(param_4);
      uVar5 = FUN_141924ee0(param_3);
      local_464 = (undefined4)uVar5;
      local_44c = (**(code **)(*plVar3 + 0x210))(plVar3,param_2);
      local_450 = (**(code **)(*plVar3 + 0x208))(plVar3,param_2);
      local_444 = FUN_141916010(lVar4);
      FUN_14193b7a0(local_438);
      uVar5 = FUN_14193b850((longlong)local_438,&local_468);
      if ((char)uVar5 == '\0') {
        FUN_14193b7f0((undefined8 *)local_438);
      }
      else {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,local_438);
        FUN_14193b7f0((undefined8 *)local_438);
      }
    }
  }
  return;
}




longlong * FUN_141936600(longlong *param_1,longlong *param_2)

{
  FUN_141934d80(param_1,param_2);
  return param_1;
}




undefined8 * FUN_141936620(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141930100();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419366a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[5] - (longlong)puVar1 >> 3;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 3) < uVar3) {
    *puVar2 = *param_2;
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_141935230(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_141936750(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141930160();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419367d0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_1419353e0((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_141936830(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = team_arenic::CTeamRankMgr::vftable;
  FUN_141936620(param_1 + 1);
  FUN_141936620(param_1 + 9);
  FUN_141936620(param_1 + 0x11);
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x19);
    plVar2 = plVar1;
  }
  param_1[0x19] = plVar2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x1f);
    plVar3 = plVar2;
  }
  param_1[0x1f] = plVar3;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_141936750(param_1 + 0x25);
  FUN_141936750(param_1 + 0x2d);
  return param_1;
}




undefined8 * FUN_141936920(undefined8 *param_1,uint param_2)

{
  FUN_141935570(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141936950(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) & 0xfffffffffffffff8U) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar1 < *(undefined8 **)(param_1 + 0xe0)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    lVar3 = *(longlong *)(param_1 + 200);
    if (*(undefined8 **)(param_1 + 0xe8) < puVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 200))) {
      _invalid_parameter_noinfo();
    }
    FUN_1419353e0(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,0);
    FUN_141935fb0(param_1);
  }
  return;
}




void FUN_141936a10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) & 0xfffffffffffffff8U) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x118);
    if (puVar1 < *(undefined8 **)(param_1 + 0x110)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x110);
    lVar3 = *(longlong *)(param_1 + 0xf8);
    if (*(undefined8 **)(param_1 + 0x118) < puVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0xf8))) {
      _invalid_parameter_noinfo();
    }
    FUN_1419353e0(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,0);
    FUN_1419361d0(param_1);
  }
  return;
}




ulonglong FUN_141936ad0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *local_res18 [2];
  uint local_38 [2];
  longlong *local_30;
  longlong local_28 [4];
  
  plVar1 = FUN_141924a40();
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_res18[0] = plVar1;
    plVar2 = (longlong *)InstanceGet();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_arenic");
    if ((plVar2 != (longlong *)0x0) && (uVar3 = FUN_141924b40(plVar1,plVar2,param_2), (char)uVar3 != '\0')) {
      local_38[0] = param_2[2];
      local_30 = plVar1;
      FUN_141932cc0((longlong *)(param_1 + 8),local_28,local_38);
      uVar3 = FUN_1419366a0((longlong *)(param_1 + 200),local_res18);
      return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    uVar4 = FUN_141924e60(plVar1);
  }
  return uVar4 & 0xffffffffffffff00;
}




void FUN_141936b90(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  uint local_88 [2];
  longlong *local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  longlong local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  longlong local_38;
  undefined8 uStack_30;
  
  local_68 = 0xfffffffffffffffe;
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  puVar5 = (undefined8 *)*puVar1;
  plVar2 = *(longlong **)(param_1 + 0x48);
  local_78[0] = plVar2;
  local_48 = plVar2;
  do {
    while( true ) {
      while( true ) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar5 == puVar1) {
          plVar2 = (longlong *)(param_1 + 0x48);
          FUN_141930810((longlong)plVar2);
          FUN_141933390((longlong *)(param_1 + 0xf8));
          plVar3 = (longlong *)(param_1 + 8);
          if (plVar2 != plVar3) {
            puStack_50 = *(undefined8 **)(param_1 + 0x78);
            local_58 = *plVar2;
            uStack_30 = *puStack_50;
            local_38 = local_58;
            FUN_141933560(plVar2,(longlong *)local_78,&local_38,&local_58);
            FUN_141931cd0((longlong)plVar2,(longlong)plVar3);
          }
          FUN_141934f40((longlong *)(param_1 + 0xf8),(longlong *)(param_1 + 200));
          FUN_141930810((longlong)plVar3);
          FUN_141933390((longlong *)(param_1 + 200));
          FUN_141936a10(param_1);
          return;
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar2;
        }
        if (puVar5 == *(undefined8 **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar3 = (longlong *)puVar5[4];
        if (plVar3 != (longlong *)0x0) {
          bVar8 = FUN_1419247b0(plVar3);
          if (bVar8) {
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = 0;
            }
            else {
              lVar7 = *plVar2;
            }
            if (puVar5 == *(undefined8 **)(lVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            local_88[0] = *(uint *)(puVar5 + 3);
            local_80 = plVar3;
            FUN_141932cc0((longlong *)(param_1 + 0x88),&local_38,local_88);
          }
          else {
            FUN_1419241c0(plVar3);
            FUN_141924e60(plVar3);
          }
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar5 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar6 = puVar5;
      puVar4 = (undefined8 *)puVar5[2];
      if (*(char *)((longlong)puVar5[2] + 0x29) != '\0') break;
      do {
        puVar5 = puVar4;
        puVar4 = (undefined8 *)*puVar5;
      } while (*(char *)((longlong)*puVar5 + 0x29) == '\0');
    }
    do {
      puVar5 = (undefined8 *)puVar6[1];
      if (*(char *)((longlong)puVar5 + 0x29) != '\0') break;
      bVar8 = puVar6 == (undefined8 *)puVar5[2];
      puVar6 = puVar5;
    } while (bVar8);
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141936df0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong extraout_RAX;
  longlong *plVar9;
  ulonglong extraout_RAX_00;
  longlong *plVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong extraout_RAX_01;
  int *piVar18;
  undefined8 uVar19;
  char *pcVar20;
  int iVar21;
  undefined1 uVar22;
  undefined1 auStackY_508 [32];
  int local_4d8;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8;
  longlong *local_4c0;
  longlong local_4b8;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  uint local_498 [2];
  longlong *local_490;
  uint local_488 [2];
  longlong *local_480;
  uint local_478 [2];
  longlong *local_470;
  uint local_468 [2];
  longlong *local_460;
  longlong local_458 [3];
  undefined8 local_440;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_440 = 0xfffffffffffffffe;
  local_38 = DAT_14195d590 ^ (ulonglong)auStackY_508;
  local_4b8 = param_1;
  lVar8 = FUN_141917800();
  if (lVar8 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar17 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar9 = (longlong *)InstanceGet();
    local_4a0 = plVar9;
    _snprintf(local_438,0x400,
              "SELECT cq_arenic.*, cq_user.name, cq_user.lookface, cq_user.profession, cq_user.level FROM cq_arenic LEFT JOIN cq_user ON cq_arenic.user_id = cq_user.id WHERE cq_arenic.type = %d"
             );
    local_39 = 0;
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,local_438,2);
    local_4a8 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419462b8);
      uVar17 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      local_4cc = tq::DateStamp(0);
      local_4d0 = tq::DateStampPass(local_4cc,-1);
      FUN_141930810(param_1 + 8);
      FUN_141930810(param_1 + 0x48);
      FUN_141930810(param_1 + 0x88);
      FUN_141933390((longlong *)(param_1 + 200));
      FUN_141933390((longlong *)(param_1 + 0xf8));
      local_4d8 = 0;
      while( true ) {
        iVar21 = 0;
        iVar2 = (**(code **)(*plVar9 + 0x40))(plVar9);
        uVar22 = local_4d8 == iVar2;
        if (iVar2 <= local_4d8) break;
        (**(code **)(*plVar9 + 0x30))(plVar9,(longlong)local_4d8);
        plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,10);
        pcVar11 = (char *)(**(code **)(*plVar10 + 0x78))(plVar10);
        lVar8 = 1;
        pcVar20 = "";
        do {
          if (lVar8 == 0) break;
          lVar8 = lVar8 + -1;
          uVar22 = *pcVar11 == *pcVar20;
          pcVar11 = pcVar11 + 1;
          pcVar20 = pcVar20 + 1;
        } while ((bool)uVar22);
        if ((bool)uVar22) {
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
          local_4b0 = plVar10;
          if (plVar10 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_1419462b8);
          }
          else {
            (**(code **)(*plVar10 + 0x40))(plVar10,0);
            (**(code **)*plVar10)(plVar10,1);
            local_4b0 = (longlong *)0x0;
          }
        }
        else {
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,3);
          uVar3 = (**(code **)(*plVar10 + 0x40))(plVar10);
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,2);
          local_4c8 = (**(code **)(*plVar10 + 0x50))(plVar10);
          plVar10 = FUN_141924a40();
          local_4c0 = plVar10;
          if (plVar10 == (longlong *)0x0) {
            log_InlineLogERROR("CTeamRankMgr::Init, failed in allocating memory for CTeamArenicRankData");
          }
          else {
            plVar12 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,0xd);
            plVar13 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,0xc);
            plVar14 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,0xb);
            plVar15 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,10);
            uVar4 = (**(code **)(*plVar12 + 0x50))(plVar12);
            uVar5 = (**(code **)(*plVar13 + 0x50))(plVar13);
            uVar6 = (**(code **)(*plVar14 + 0x50))(plVar14);
            puVar16 = (undefined8 *)(**(code **)(*plVar15 + 0x78))(plVar15);
            uVar17 = FUN_141924080(plVar10,plVar9,puVar16,uVar6,uVar5,uVar4);
            if ((char)uVar17 == '\0') {
              log_InlineLogERROR("CTeamRankMgr::Init, failed in creating CTeamArenicRankData");
              FUN_141924e60(plVar10);
            }
            else if (local_4cc == local_4c8) {
              local_498[0] = uVar3;
              local_490 = plVar10;
              FUN_141932cc0((longlong *)(param_1 + 8),local_458,local_498);
              FUN_1419366a0((longlong *)(param_1 + 200),&local_4c0);
            }
            else if (local_4d0 == local_4c8) {
              local_468[0] = uVar3;
              local_460 = plVar10;
              FUN_141932cc0((longlong *)(param_1 + 0x48),local_458,local_468);
              FUN_1419366a0((longlong *)(param_1 + 0xf8),&local_4c0);
              bVar1 = FUN_1419247b0(plVar10);
              if (bVar1) {
                local_488[0] = uVar3;
                local_480 = plVar10;
                FUN_141932cc0((longlong *)(param_1 + 0x88),local_458,local_488);
              }
            }
            else {
              bVar1 = FUN_1419247b0(plVar10);
              if (bVar1) {
                local_478[0] = uVar3;
                local_470 = plVar10;
                FUN_141932cc0((longlong *)(param_1 + 0x88),local_458,local_478);
              }
              else {
                FUN_1419241c0(plVar10);
                FUN_141924e60(plVar10);
              }
            }
          }
        }
        local_4d8 = local_4d8 + 1;
      }
      (**(code **)*plVar9)(plVar9);
      _snprintf(local_438,0x400,"SELECT * FROM cq_arenic_honor WHERE type = %d");
      local_39 = 0;
      plVar9 = (longlong *)(**(code **)(*local_4a0 + 0x10))(local_4a0,local_438,1);
      if (plVar9 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419462b8);
        uVar17 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        for (; iVar2 = (**(code **)(*plVar9 + 0x40))(plVar9), iVar21 < iVar2; iVar21 = iVar21 + 1) {
          (**(code **)(*plVar9 + 0x30))(plVar9,(longlong)iVar21);
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
          if (plVar10 == (longlong *)0x0) {
            log_InlineLogERROR("CTeamRankMgr::Init, found NULL record");
          }
          else {
            plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
            uVar3 = (**(code **)(*plVar12 + 0x48))(plVar12);
            plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
            iVar2 = (**(code **)(*plVar12 + 0x48))(plVar12);
            plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,3);
            iVar7 = (**(code **)(*plVar12 + 0x48))(plVar12);
            local_4d0 = uVar3;
            piVar18 = (int *)FUN_141935080((longlong *)(param_1 + 0x128),&local_4d0);
            *piVar18 = iVar2 * 3 >> 1;
            local_4cc = uVar3;
            piVar18 = (int *)FUN_141935080((longlong *)(param_1 + 0x168),&local_4cc);
            *piVar18 = iVar7 * 3 >> 1;
            (**(code **)*plVar10)(plVar10,1);
          }
        }
        (**(code **)*plVar9)(plVar9);
        FUN_141936950(param_1);
        uVar19 = FUN_141936a10(param_1);
        uVar17 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
      }
    }
  }
  return uVar17;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419373f0(longlong param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  char *_Source;
  undefined8 *puVar8;
  ulonglong extraout_RAX_00;
  uint7 extraout_var;
  undefined8 uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint local_88;
  undefined4 local_84;
  undefined8 local_80;
  int local_78 [3];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_80 = 0xfffffffffffffffe;
  local_38 = DAT_14195d590 ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  plVar4 = (longlong *)FUN_141917800();
  if (plVar4 == (longlong *)0x0) {
    local_98 = 0x101;
    log_InlineLogERROR(&DAT_1419462b8);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
    if ((char)uVar5 != '\0') {
      uVar2 = 0;
      local_84 = 0;
      lVar6 = FUN_141917850();
      if ((lVar6 != 0) && (lVar6 = FUN_14191b650(lVar6,param_2), lVar6 != 0)) {
        uVar2 = FUN_14192d7b0(lVar6);
        local_84 = uVar2;
      }
      uVar3 = FUN_141935ce0(param_1,param_2);
      plVar7 = (longlong *)FUN_1419344b0(param_1,param_2);
      if (plVar7 == (longlong *)0x0) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_3c = 0;
        local_44 = 0;
        local_40 = 0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_78[2] = param_2;
        _Source = (char *)(**(code **)(*plVar4 + 0x58))(plVar4,param_2);
        strncpy((char *)&local_6c,_Source,0x10);
        local_60 = local_60 & 0xffffff;
        local_50 = (**(code **)(*plVar4 + 0x220))(plVar4,param_2,uVar2);
        local_78[0] = tq::DateStamp(0);
        local_78[1] = 0;
        local_48 = (**(code **)(*plVar4 + 0x260))(plVar4,param_2);
        local_4c = (**(code **)(*plVar4 + 0x250))(plVar4,param_2);
        local_3c = (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
        local_54 = (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
        local_5c = (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
        local_58 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
        if (0x419 < (ulonglong)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3)) {
          puVar8 = (undefined8 *)FUN_141931b10((longlong *)(param_1 + 200));
          if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
            log_InlineLogERROR("CTeamRankMgr::OnDataChange, found last family data is NULL");
            return extraout_RAX_00 & 0xffffffffffffff00;
          }
          bVar1 = FUN_141924720((undefined8 *)*puVar8,(longlong)local_78);
          if (bVar1) {
            return (ulonglong)extraout_var << 8;
          }
        }
        uVar9 = FUN_141936ad0(param_1,local_78);
        if ((char)uVar9 == '\0') {
          return uVar9;
        }
      }
      else {
        uVar2 = (**(code **)(*plVar4 + 0x220))(plVar4,param_2,uVar2);
        FUN_141924350(plVar7,4,uVar2);
        uVar2 = (**(code **)(*plVar4 + 0x260))(plVar4,param_2);
        FUN_141924350(plVar7,8,uVar2);
        uVar2 = (**(code **)(*plVar4 + 0x250))(plVar4,param_2);
        FUN_141924350(plVar7,7,uVar2);
      }
      FUN_141936950(param_1);
      uVar9 = FUN_141935d00(param_1,param_2,uVar3);
      uVar5 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    }
  }
  return uVar5;
}




bool FUN_141937710(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141937750(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141937860(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x29) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}




longlong FUN_141937950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141937972;
  }
  lVar2 = *plVar1;
LAB_141937972:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141937990(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x29) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x29);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x29);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x29);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419379b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141937a30(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x29);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x29);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x29);
    }
    if (*(char *)(param_1[1] + 0x29) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141937a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141937b70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141937c30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x29) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x30) + 8)) {
    *(longlong **)(*(longlong *)(param_1 + 0x30) + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}




void FUN_141937c90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141937cb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141937cd2;
  }
  lVar2 = *plVar1;
LAB_141937cd2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141937cf0(longlong *param_1)

{
  FUN_141937990(param_1);
  return param_1;
}




longlong * FUN_141937d70(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141937990(param_1);
  return param_2;
}




longlong * FUN_141937da0(longlong *param_1)

{
  FUN_141937a30(param_1);
  return param_1;
}




void FUN_141937dc0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141937dc0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_141937e10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14195c148);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_141937e90(longlong *param_1)

{
  FUN_141937990(param_1);
  return param_1;
}




longlong FUN_141937eb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141937ed2;
  }
  lVar2 = *plVar1;
LAB_141937ed2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141937ef0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141937f10(longlong *param_1)

{
  FUN_141937a30(param_1);
  return param_1;
}




undefined8 * FUN_141937f30(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141937f70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141937dc0(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_141937ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_5[1];
    *(undefined4 *)(puVar1 + 4) = param_5[2];
    *(undefined4 *)((longlong)puVar1 + 0x24) = param_5[3];
    *(undefined1 *)(puVar1 + 5) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}




void FUN_141938080(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x29) = 0;
  return;
}




undefined8 * FUN_1419380e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141938120(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
        }
        param_1[1] = lVar2;
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void FUN_141938210(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141938270(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419382b0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_141938390(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141938080();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419383d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141938420(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_1;
  plVar7 = (longlong *)param_1[1];
  while( true ) {
    if ((lVar4 == 0) || (lVar4 != lVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) break;
    *param_3 = *param_3 + 1;
    if (lVar4 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




longlong * FUN_141938530(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




void FUN_141938600(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141938640(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1419386d0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1419382b0(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1419386f0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [40];
  
  if (0xffffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14195c090);
  }
  plVar5 = FUN_141937ff0(param_1,param_1[6],param_4,param_1[6],param_5,0);
  param_1[7] = param_1[7] + 1;
  if (param_4 == (undefined8 *)param_1[6]) {
    ((undefined8 *)param_1[6])[1] = plVar5;
    *(longlong **)param_1[6] = plVar5;
    *(longlong **)(param_1[6] + 0x10) = plVar5;
  }
  else if (param_3 == '\0') {
    param_4[2] = plVar5;
    if (param_4 == *(undefined8 **)(param_1[6] + 0x10)) {
      *(longlong **)(param_1[6] + 0x10) = plVar5;
    }
  }
  else {
    *param_4 = plVar5;
    if (param_4 == *(undefined8 **)param_1[6]) {
      *(longlong **)param_1[6] = plVar5;
    }
  }
  plVar7 = plVar5 + 1;
  cVar1 = *(char *)(*plVar7 + 0x28);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x29) == '\0') {
            *(longlong **)(*plVar6 + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          plVar6[1] = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong **)(param_1[6] + 8) = plVar6;
          }
          else {
            plVar3 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)*plVar3) {
              *plVar3 = (longlong)plVar6;
            }
            else {
              plVar3[2] = (longlong)plVar6;
            }
          }
          *plVar6 = (longlong)plVar2;
          *plVar7 = (longlong)plVar6;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
          *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar7;
        }
        *(longlong *)(lVar4 + 8) = plVar7[1];
        if (plVar7 == *(longlong **)(param_1[6] + 8)) {
          *(longlong *)(param_1[6] + 8) = lVar4;
        }
        else {
          plVar2 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar2[2]) {
            plVar2[2] = lVar4;
          }
          else {
            *plVar2 = lVar4;
          }
        }
        *(longlong **)(lVar4 + 0x10) = plVar7;
        plVar7[1] = lVar4;
      }
    }
    else {
      lVar4 = *plVar3;
      if (*(char *)(lVar4 + 0x28) == '\0') {
        *(undefined1 *)(plVar2 + 5) = 1;
        *(undefined1 *)(lVar4 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x29) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar2;
          }
          plVar7 = plVar2 + 1;
          *(longlong *)(lVar4 + 8) = *plVar7;
          if (plVar2 == *(longlong **)(param_1[6] + 8)) {
            *(longlong *)(param_1[6] + 8) = lVar4;
          }
          else {
            plVar6 = (longlong *)*plVar7;
            if (plVar2 == (longlong *)plVar6[2]) {
              plVar6[2] = lVar4;
            }
            else {
              *plVar6 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar2;
          *plVar7 = lVar4;
          plVar6 = plVar2;
        }
        *(undefined1 *)(*plVar7 + 0x28) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x28) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x29) == '\0') {
          *(longlong *)(*plVar7 + 8) = lVar4;
        }
        plVar7[1] = *(longlong *)(lVar4 + 8);
        if (lVar4 == *(longlong *)(param_1[6] + 8)) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          plVar2 = *(longlong **)(lVar4 + 8);
          if (lVar4 == *plVar2) {
            *plVar2 = (longlong)plVar7;
          }
          else {
            plVar2[2] = (longlong)plVar7;
          }
        }
        *plVar7 = lVar4;
        *(longlong **)(lVar4 + 8) = plVar7;
      }
    }
    plVar7 = plVar6 + 1;
    cVar1 = *(char *)(*plVar7 + 0x28);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x28) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_141938a30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




bool FUN_141938a80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  uint local_res10 [6];
  longlong local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    cVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
    if (cVar2 != '\0') {
      FUN_141938530(param_1,&local_18,local_res10);
      lVar1 = param_1[6];
      if ((local_18 == 0) || (local_18 != *param_1)) {
        _invalid_parameter_noinfo();
      }
      return local_10 != lVar1;
    }
  }
  return false;
}




longlong * FUN_141938b30(longlong *param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  
  plVar6 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar6[1] + 0x29) == '\0') {
    plVar5 = (longlong *)plVar6[1];
    do {
      plVar6 = plVar5;
      bVar7 = *param_3 < *(uint *)(plVar6 + 3);
      if (bVar7) {
        plVar5 = (longlong *)*plVar6;
      }
      else {
        plVar5 = (longlong *)plVar6[2];
      }
    } while (*(char *)((longlong)plVar5 + 0x29) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_141938c8d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141938cbc;
    }
  }
  else {
    plVar5 = *(longlong **)param_1[6];
    local_30 = plVar6;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 != plVar5) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x29);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x29);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x29);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x29) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x29) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_141938c8d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419386f0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141938cbc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_141938ce0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined **local_80 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_40 [40];
  
  plVar2 = (longlong *)param_3[1];
  if (*(char *)((longlong)plVar2 + 0x29) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14195c1a8);
  }
  FUN_141937990(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x29) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
            plVar9[1] = (longlong)plVar8;
          }
          *plVar8 = (longlong)plVar9;
          plVar7[2] = plVar2[2];
          *(longlong **)(plVar2[2] + 8) = plVar7;
        }
        if (*(longlong **)(param_1[6] + 8) == plVar2) {
          *(longlong **)(param_1[6] + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar2[1];
          if ((longlong *)*puVar4 == plVar2) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        plVar7[1] = plVar2[1];
        plVar3 = plVar2 + 5;
        plVar7 = plVar7 + 5;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_141938ecc;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
    plVar9[1] = (longlong)plVar8;
  }
  if (*(longlong **)(param_1[6] + 8) == plVar2) {
    *(longlong **)(param_1[6] + 8) = plVar9;
  }
  else if ((longlong *)*plVar8 == plVar2) {
    *plVar8 = (longlong)plVar9;
  }
  else {
    plVar8[2] = (longlong)plVar9;
  }
  if (*(longlong **)param_1[6] == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x29);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x29);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x29);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_141938ecc:
  if ((char)plVar2[5] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[5] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141937c30((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141937860((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141937c30((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141937860((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141937c30((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141937860((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 5) = 1;
  }
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_1419390a0(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar1 + 3) < *param_3) {
        puVar2 = (undefined8 *)puVar1[2];
      }
      else {
        puVar2 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar1 = (undefined8 *)param_1[6];
  local_20 = puVar4;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_3 < *(uint *)(puVar4 + 3))) {
    plVar3 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar3 = &local_28;
  }
  *param_2 = *plVar3;
  param_2[1] = plVar3[1];
  return param_2;
}




void FUN_141939170(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141939190(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  lVar2 = *(longlong *)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_141937f70((longlong)param_1);
      param_2[1] = *(longlong *)param_1[6];
      *param_2 = *param_1;
      return param_2;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *param_3;
    if (param_3[1] == param_4[1]) break;
    lVar3 = param_3[1];
    if (*param_3 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = param_3[1];
    if (*(char *)(lVar4 + 0x29) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x29);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x29);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_141938ce0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_141939340(longlong *param_1)

{
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  local_38 = *param_1;
  puStack_30 = (undefined8 *)param_1[6];
  uStack_20 = *puStack_30;
  local_28 = local_38;
  FUN_141939190(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1419393b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_141939400(longlong *param_1,uint param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint local_res10 [2];
  char local_res18;
  char local_res20;
  longlong *local_68;
  longlong lStack_60;
  longlong *local_58 [2];
  longlong *local_48;
  longlong lStack_40;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar4 = FUN_141917850();
  if (lVar4 == 0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    FUN_1419390a0(param_1,(longlong *)&local_68,local_res10);
    plVar2 = local_68;
    lVar1 = param_1[6];
    lVar6 = 0;
    local_58[0] = (longlong *)*param_1;
    if ((local_68 == (longlong *)0x0) || (local_68 != local_58[0])) {
      _invalid_parameter_noinfo();
    }
    lVar3 = lStack_60;
    if (lStack_60 != lVar1) {
      plVar5 = (longlong *)FUN_141917800();
      if (plVar5 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419462b8);
      }
      else {
        (**(code **)(*plVar5 + 0xe8))(plVar5,param_2,1);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar6 = *plVar2;
        }
        if (lVar3 == *(longlong *)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar4 = FUN_14191eed0(lVar4,*(uint *)(lVar3 + 0x24));
        if (lVar4 == 0) {
          FUN_141938ce0(param_1,&local_48,(longlong *)&local_68);
          log_InlineLogERROR("CTeamWitnessMgr::OnExitWitness, not found match, witness(%u), arenic map(%u)");
        }
        else {
          local_48 = local_68;
          lStack_40 = lStack_60;
          FUN_141938ce0(param_1,local_58,(longlong *)&local_48);
          FUN_141915900(lVar4,param_2,local_res18,local_res20);
        }
      }
    }
  }
  return;
}




void FUN_1419395b0(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar4 = FUN_141917850();
    if (lVar4 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      cVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      if (cVar2 != '\0') {
        FUN_1419390a0(param_1,(longlong *)&local_50,local_res10);
        lVar1 = param_1[6];
        lVar5 = 0;
        local_40 = (longlong *)*param_1;
        if ((local_50 == (longlong *)0x0) || (local_50 != local_40)) {
          _invalid_parameter_noinfo();
        }
        if (local_48 != lVar1) {
          if (local_50 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar5 = *local_50;
          }
          if (local_48 == *(longlong *)(lVar5 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar4 = FUN_14191eed0(lVar4,*(uint *)(local_48 + 0x24));
          if (lVar4 == 0) {
            log_InlineLogERROR("CTeamWitnessMgr::OnWitnessCheer, not found match, witness(%u), arenic map(%u)");
          }
          else {
            FUN_141915a40(lVar4,param_2,param_3);
          }
        }
      }
    }
  }
  return;
}




void FUN_141939720(longlong *param_1)

{
  FUN_141939340(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141939750(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_1419382b0(param_1,&local_38,param_2);
  plVar5 = local_20;
  lVar4 = local_28;
  lVar3 = local_38;
  lVar8 = 0;
  local_58 = local_38;
  local_50 = local_30;
  plVar7 = local_30;
  while( true ) {
    if ((lVar3 == 0) || (lVar3 != lVar4)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    lVar8 = lVar8 + 1;
    if (lVar3 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar6 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  local_58 = local_28;
  local_50 = local_20;
  local_48 = local_38;
  local_40 = local_30;
  FUN_141939190(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_141939890(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  return param_1;
}




void FUN_1419398e0(longlong *param_1)

{
  FUN_141939340(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141939910(longlong *param_1)

{
  FUN_141939340(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141939940(longlong *param_1,uint param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  uint local_res10 [2];
  uint local_40;
  int local_3c;
  undefined4 local_38;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_141917800();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else {
    lVar4 = FUN_141917850();
    if (lVar4 == 0) {
      log_InlineLogERROR(&DAT_1419462b8);
    }
    else {
      uVar5 = FUN_14191b8d0(lVar4,param_2);
      if ((char)uVar5 == '\0') {
        cVar1 = (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,param_2);
          if (cVar1 == '\0') {
            bVar2 = FUN_141938a80(param_1,param_2);
            if (!bVar2) {
              lVar4 = FUN_14191ef70(lVar4);
              if (lVar4 == 0) {
                pIVar6 = theInstance();
                lVar4 = *plVar3;
                uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
                (**(code **)(lVar4 + 0x28))(plVar3,param_2,uVar7);
              }
              else {
                local_40 = 0;
                local_38 = FUN_141912b40(lVar4);
                local_40 = param_2;
                local_3c = param_3;
                (**(code **)(*plVar3 + 0xe8))(plVar3,param_2,0);
                local_24 = local_40;
                local_20 = local_3c;
                local_1c = local_38;
                local_28 = param_2;
                FUN_141938b30(param_1,(longlong *)&local_40,&local_28);
                cVar1 = FUN_1419155f0(lVar4,param_2,param_3);
                if (cVar1 == '\0') {
                  (**(code **)(*plVar3 + 0xe8))(plVar3,param_2,1);
                  FUN_141939750(param_1,local_res10);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}




longlong * FUN_141939b20(longlong *param_1,uint param_2)

{
  FUN_141939340(param_1);
  operator_delete((void *)*param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_141939b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141938080();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141939bf0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_141939340(param_1);
    operator_delete((void *)*param_1);
    operator_delete(param_1);
  }
  return;
}




undefined8 * FUN_141939c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  lVar2 = FUN_141938080();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141939cb0(undefined8 *param_1)

{
  FUN_141939c30(param_1);
  return param_1;
}




undefined8 * FUN_141939ce0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_141939c30(puVar1);
  }
  return puVar1;
}




CMsg * FUN_141939d20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_141939d50(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_141939d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141939d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_141939d80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141939d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_141939d90(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141939d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_141939da0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141939dd0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141939e20(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141939e90(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_141939ec0(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x38))(param_3);
  }
  return;
}




undefined8 * FUN_141939ee0(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141939f30(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141939f80(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141939ff0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_14193a020(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x40))(param_3);
  }
  return;
}




undefined8 * FUN_14193a040(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193a090(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenic::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193a0e0(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193a110(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c1;
}




undefined8 FUN_14193a140(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = 0;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_14193a180(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_14193a1c0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30) = param_4[9];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_4[7];
  strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x10),(char *)(param_4 + 1),0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_4[8];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_4[6];
  uVar1 = param_4[5];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




void FUN_14193a280(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
  switch(*(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4)) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00014193a314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x50))(param_3,param_2);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00014193a32f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x58))(param_3,param_2);
    return;
  case 3:
    iVar1 = (**(code **)(*param_3 + 0x130))(param_3,param_2);
    if (iVar1 < 7) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x408) + 8);
      if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014193a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x68))(param_3,param_2);
        return;
      }
      if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00014193a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x60))(param_3,param_2);
        return;
      }
    }
    break;
  case 4:
    (**(code **)(*param_3 + 0x78))(param_3,param_2,1);
    break;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00014193a3ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3,param_2);
    return;
  case 0xb:
                    /* WARNING: Could not recover jumptable at 0x00014193a3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x70))(param_3,param_2);
    return;
  }
  return;
}




undefined8 * FUN_14193a420(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193a470(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicRacing::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193a4c0(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193a4f0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c2;
}




undefined8 FUN_14193a550(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  **(undefined2 **)(param_1 + 0x408) = 0x48;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_6;
  return CONCAT71((uint7)(uint3)((uint)param_6 >> 8),1);
}




ulonglong FUN_14193a5b0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar5;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x30) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x30;
  lVar3 = *(longlong *)(param_1 + 0x408);
  uVar5 = (ulonglong)*(uint *)(lVar3 + 0x14);
  *(undefined4 *)(lVar3 + 0x18 + uVar5 * 0x30) = *param_2;
  *(undefined4 *)(lVar3 + 0x1c + uVar5 * 0x30) = param_2[1];
  *(undefined4 *)(lVar3 + 0x20 + uVar5 * 0x30) = param_2[2];
  *(undefined4 *)(lVar3 + 0x24 + uVar5 * 0x30) = param_2[3];
  *(undefined4 *)(lVar3 + 0x28 + uVar5 * 0x30) = param_2[4];
  *(undefined4 *)(lVar3 + 0x2c + uVar5 * 0x30) = param_2[5];
  lVar4 = *(longlong *)(param_1 + 0x408);
  lVar3 = (ulonglong)*(uint *)(lVar4 + 0x14) * 3 + 3;
  *(undefined4 *)(lVar4 + lVar3 * 0x10) = *param_3;
  *(undefined4 *)(lVar4 + 4 + lVar3 * 0x10) = param_3[1];
  *(undefined4 *)(lVar4 + 8 + lVar3 * 0x10) = param_3[2];
  *(undefined4 *)(lVar4 + 0xc + lVar3 * 0x10) = param_3[3];
  *(undefined4 *)(lVar4 + 0x10 + lVar3 * 0x10) = param_3[4];
  *(undefined4 *)(lVar4 + 0x14 + lVar3 * 0x10) = param_3[5];
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 0x14);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined4 FUN_14193a6d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14);
}




void FUN_14193a6f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193a744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x80))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4),*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8));
  return;
}




void FUN_14193a750(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  return;
}




undefined8 * FUN_14193a760(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193a7b0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193a800(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193a830(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c3;
}




undefined8 FUN_14193a860(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 6) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_14193a8a0(longlong param_1,void *param_2)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x28) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x28;
  pvVar3 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0xc + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0x28),param_2,0x28);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}




undefined4 FUN_14193a970(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8);
}




void FUN_14193a990(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193a9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4));
  return;
}




undefined8 * FUN_14193a9f0(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193aa40(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicScore::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193aa90(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193aac0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c6;
}




undefined8 FUN_14193aaf0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x3c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c6;
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 4) = *param_2;
  *(undefined4 *)(lVar2 + 8) = param_2[1];
  *(undefined4 *)(lVar2 + 0xc) = param_2[2];
  *(undefined4 *)(lVar2 + 0x10) = param_2[3];
  *(undefined4 *)(lVar2 + 0x14) = param_2[4];
  *(undefined4 *)(lVar2 + 0x18) = param_2[5];
  *(undefined4 *)(lVar2 + 0x1c) = param_2[6];
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 0x20) = *param_3;
  *(undefined4 *)(lVar2 + 0x24) = param_3[1];
  *(undefined4 *)(lVar2 + 0x28) = param_3[2];
  *(undefined4 *)(lVar2 + 0x2c) = param_3[3];
  *(undefined4 *)(lVar2 + 0x30) = param_3[4];
  *(undefined4 *)(lVar2 + 0x34) = param_3[5];
  uVar1 = param_3[6];
  *(undefined4 *)(lVar2 + 0x38) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




undefined8 * FUN_14193ab90(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193abe0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicTeamInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193ac30(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicTeamInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193ac60(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c7;
}




undefined8 FUN_14193ac90(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x10;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_14193ace0(longlong param_1,void *param_2)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x28) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x28;
  pvVar3 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0x10 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0xc) * 0x28),param_2,0x28);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0xc);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}




undefined4 FUN_14193adb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc);
}




void FUN_14193add0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xa0))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8));
  return;
}




undefined8 * FUN_14193ae30(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicTeamInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193ae80(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicTopTen::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193aed0(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193af00(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c4;
}




undefined8 FUN_14193af30(longlong param_1)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 8;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x8c4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_14193af60(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x2c) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x2c;
  strncpy((char *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 8 + *(longlong *)(param_1 + 0x408)),(char *)(param_2 + 0xc),0x10);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x18 + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x28 + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x24 + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x1c + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x20 + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) * 0x2c + 0x30 + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 4) + 1) * 0x2c + *(longlong *)(param_1 + 0x408)) = *(undefined4 *)(param_2 + 0x2c);
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined4 FUN_14193b0d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4);
}




void FUN_14193b0f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193b132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x88))(param_3);
  return;
}




undefined8 * FUN_14193b140(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193b190(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamArenicWitness::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193b1e0(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_14193b210(CMsg *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x36;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 6) = 5;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_14193b290(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a3;
}




void FUN_14193b2c0(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if (param_4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
  }
  else if ((*(int *)(*(longlong *)(param_1 + 0x408) + 6) == 5) || (*(short *)(*(longlong *)(param_1 + 0x408) + 4) != 0)) {
    cVar3 = (**(code **)(*param_4 + 0x80))(param_4);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*param_4 + 0xc0))(param_4,param_2);
      if (cVar3 == '\0') {
        pIVar4 = theInstance();
        lVar2 = *param_4;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_DIE");
        (**(code **)(lVar2 + 0x28))(param_4,param_2,uVar5);
      }
      else {
        cVar3 = (**(code **)(*param_4 + 0xa8))(param_4,param_2);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_4 + 0x160))(param_4,param_2);
          if (cVar3 == '\0') {
            lVar2 = *(longlong *)(param_1 + 0x408);
            sVar1 = *(short *)(lVar2 + 4);
            if (sVar1 == 0) {
              (**(code **)(*param_3 + 0xa8))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
            }
            else if (sVar1 == 1) {
              (**(code **)(*param_3 + 0xb0))(param_3,param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
            }
            else if (sVar1 == 4) {
              (**(code **)(*param_3 + 0xb8))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
            }
            else {
              log_InlineLogERROR("CMsgTeamArenicWitness::Process invalid action:%d");
            }
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14193b450(longlong param_1,uint param_2,char *param_3)

{
  int *piVar1;
  short sVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14195d590 ^ (ulonglong)auStack_58;
  puVar3 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar3 + 0x24) {
    return (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  *puVar3 = puVar3[7] * 0x24 + 0x5a;
  local_38 = (ulonglong)param_2;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (param_3 != (char *)0x0) {
    tq::SafeCopy((char *)((longlong)&local_38 + 4),param_3,0x20);
  }
  lVar4 = *(longlong *)(param_1 + 0x408);
  lVar5 = (longlong)*(int *)(lVar4 + 0xe);
  *(ulonglong *)(lVar4 + 0x1a + lVar5 * 0x24) = local_38;
  *(undefined8 *)(lVar4 + 0x22 + lVar5 * 0x24) = local_30;
  *(undefined8 *)(lVar4 + 0x2a + lVar5 * 0x24) = local_28;
  *(undefined8 *)(lVar4 + 0x32 + lVar5 * 0x24) = local_20;
  *(undefined4 *)(lVar4 + 0x3a + lVar5 * 0x24) = local_18;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0xe);
  *piVar1 = *piVar1 + 1;
  sVar2 = (*(short **)(param_1 + 0x408))[7];
  **(short **)(param_1 + 0x408) = sVar2 * 0x24 + 0x5a;
  return CONCAT71((uint7)(byte)((ushort)(sVar2 * 8) >> 8),1);
}




undefined8 FUN_14193b570(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x5a;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x12) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_5;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 6) = 5;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_14193b620(CMsg *param_1,undefined2 param_2,char *param_3,char *param_4)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  ulonglong extraout_RAX_00;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_4 == (char *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
    **(undefined2 **)(param_1 + 0x408) = 0x5a;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x1a),param_3,0x10);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x29) = 0;
    strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x3a),param_4,0x10);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x49) = 0;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined4 *)(lVar1 + 6) = 5;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_14193b750(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14193b7a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = team_arenic::CMsgTeamAthlete::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14193b7f0(undefined8 *param_1)

{
  *param_1 = team_arenic::CMsgTeamAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14193b820(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8c5;
}




undefined8 FUN_14193b850(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x2c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8c5;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x28) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_2[8];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_2[7];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_2[6];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_2[3];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2[2];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = *param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_2[5];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_2[4];
  uVar1 = param_2[1];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




void FUN_14193b900(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419462b8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193b942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x98))(param_3);
  return;
}




undefined8 * FUN_14193b950(undefined8 *param_1,byte param_2)

{
  *param_1 = team_arenic::CMsgTeamAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __ptr64 __cdecl exception::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl std::exception::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl logic_error::`vector deleting destructor'(unsigned int) __ptr64
    public: virtual void * __ptr64 __cdecl type_info::`vector deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2008 Release */

type_info * FID_conflict__vector_deleting_destructor_(type_info *param_1,uint param_2)

{
  if ((param_2 & 2) == 0) {
    type_info::_type_info_dtor_internal_method(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1);
    }
  }
  else {
    _eh_vector_destructor_iterator_(param_1,0x18,*(int *)(param_1 + -8),type_info::_type_info_dtor_internal_method);
    if ((param_2 & 1) != 0) {
      operator_delete(param_1 + -8);
    }
    param_1 = param_1 + -8;
  }
  return param_1;
}




undefined8 FUN_14193bac4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  uVar1 = *(uint *)(lVar2 + 4);
  uVar3 = uVar1 & 2;
  if ((*(uint *)(param_1 + 4) & 0x66) == 0) {
    uVar3 = uVar1 & 1;
  }
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return 1;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_14195d590) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_14195dba0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_14195dba0);
    local_res18[0] = _decode_pointer(DAT_14195db98);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_14195dba0 = _encode_pointer(local_res10);
    DAT_14195db98 = _encode_pointer(local_res18[0]);
    _unlock(8);
  }
  return p_Var1;
}




/* Library Function - Single Match
    atexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __GSHandlerCheckCommon
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

longlong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = (ulonglong)*(uint *)(lVar1 + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar2 + 3) & 0xf) != 0) {
    lVar1 = (longlong)(int)(*(byte *)(lVar2 + 3) & 0xfffffff0);
  }
  return lVar1;
}




/* Library Function - Single Match
    __GSHandlerCheck
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2019 Release */

undefined8 __GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4);
  return 1;
}




bool FUN_14193bd1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_14195db98 = _encode_pointer(puVar1);
  DAT_14195dba0 = DAT_14195db98;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14193c394();
    atexit(FUN_14193c3cc);
    atexit((_func_5014 *)&LAB_14193c388);
  }
  return puVar1 == (undefined8 *)0x0;
}




/* Library Function - Single Match
    _CRT_INIT
   
   Library: Visual Studio 2008 Release */

undefined8 _CRT_INIT(undefined8 param_1,int param_2,undefined8 param_3)

{
  void *pvVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  BOOL BVar5;
  void *pvVar6;
  longlong *_Memory;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  
  pvVar1 = StackBase;
  bVar2 = false;
  if (param_2 == 0) {
    if (DAT_14195d5f4 < 1) {
      return 0;
    }
    DAT_14195d5f4 = DAT_14195d5f4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14195db88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14195db88;
        pvVar3 = DAT_14195db88;
      }
      DAT_14195db88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14193bdf6;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14193bdf6:
    if (DAT_14195db80 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_14195dba0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_14195db98);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_14195dba0);
            plVar12 = (longlong *)_decode_pointer(DAT_14195db98);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_14195db98 = _encoded_null();
        DAT_14195dba0 = DAT_14195db98;
      }
      DAT_14195db80 = 0;
      if (!bVar2) {
        LOCK();
        DAT_14195db88 = (void *)0x0;
        UNLOCK();
      }
    }
    else {
      _amsg_exit(0x1f);
    }
  }
  else if (param_2 == 1) {
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14195db88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14195db88;
        pvVar3 = DAT_14195db88;
      }
      DAT_14195db88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14193bf1f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14193bf1f:
    if (DAT_14195db80 == 0) {
      DAT_14195db80 = 1;
      iVar4 = _initterm_e(&DAT_141946268,&DAT_141946278);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141946258,&DAT_141946260);
      DAT_14195db80 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_14195db88 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_14195db90 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14195db90), BVar5 != 0)) {
      (*DAT_14195db90)(param_1,2,param_3);
    }
    DAT_14195d5f4 = DAT_14195d5f4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014193c098) */
/* WARNING: Removing unreachable block (ram,0x00014193c02f) */
/* WARNING: Removing unreachable block (ram,0x00014193c0d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14195d5f4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_14195d5a0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_14195d5a0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141911630();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141911630();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_14195d5a0 = 0xffffffff;
  return uVar2;
}




void entry(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  __DllMainCRTStartup(param_1,param_2,param_3,param_4);
  return;
}




undefined8 FUN_14193c150(undefined8 *param_1)

{
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* Library Function - Single Match
    void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl __ArrayUnwind(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    param_1 = (void *)((longlong)param_1 - param_2);
    (*param_4)(param_1);
  }
  return;
}




/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))
   
   Library: Visual Studio 2008 Release */

void __cdecl _eh_vector_destructor_iterator_(void *param_1,__uint64 param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3;
  pvVar1 = (void *)(uVar3 * param_2 + (longlong)param_1);
  while( true ) {
    uVar2 = (int)uVar3 - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*param_4)(pvVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __report_gsfailure
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  HANDLE hProcess;
  DWORD64 unaff_retaddr;
  uintptr_t local_res8 [4];
  PVOID local_48;
  ulonglong local_40;
  PRUNTIME_FUNCTION local_38;
  DWORD64 local_30;
  DWORD64 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_res8[0] = _StackCookie;
  RtlCaptureContext(&DAT_14195d6a0);
  local_30 = DAT_14195d798;
  local_38 = RtlLookupFunctionEntry(DAT_14195d798,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_14195d738 = local_res8;
    DAT_14195d798 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_14195d6a0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_14195d610 = DAT_14195d798;
  _DAT_14195d720 = local_res8[0];
  _DAT_14195d600 = 0xc0000409;
  _DAT_14195d604 = 1;
  local_20 = DAT_14195d590;
  local_18 = DAT_14195d598;
  DAT_14195d698 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_14194e200);
  if (DAT_14195d698 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14193c394(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14194ef18; puVar1 < &DAT_14194ef18; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14193c3cc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14194ef28; puVar1 < &DAT_14194ef28; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




/* Library Function - Single Match
    _ValidateImageBase
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

BOOL __cdecl _ValidateImageBase(PBYTE pImageBase)

{
  uint uVar1;
  
  if (*(short *)pImageBase != 0x5a4d) {
    return 0;
  }
  uVar1 = 0;
  if (*(int *)(pImageBase + *(int *)(pImageBase + 0x3c)) == 0x4550) {
    uVar1 = (uint)((short)*(int *)((longlong)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18) == 0x20b);
  }
  return uVar1;
}




/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)(pImageBase + (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) && (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}




/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Library: Visual Studio 2008 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  uint uVar2;
  PIMAGE_SECTION_HEADER p_Var3;
  IMAGE_DOS_HEADER *pImageBase;
  
  pImageBase = &IMAGE_DOS_HEADER_141910000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141910000);
  uVar2 = 0;
  if (BVar1 != 0) {
    p_Var3 = _FindPESection((PBYTE)pImageBase,(longlong)pTarget - (longlong)pImageBase);
    uVar2 = 0;
    if (p_Var3 != (PIMAGE_SECTION_HEADER)0x0) {
      uVar2 = ~(p_Var3->Characteristics >> 0x1f) & 1;
    }
  }
  return uVar2;
}




/* Library Function - Single Match
    __security_init_cookie
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __security_init_cookie(void)

{
  _FILETIME _Var1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD DVar4;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  if (DAT_14195d590 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_14195d590 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_14195d590 == 0x2b992ddfa232) {
      DAT_14195d590 = 0x2b992ddfa233;
    }
  }
  DAT_14195d598 = ~DAT_14195d590;
  return;
}




void Unwind_14193c620(undefined8 param_1,longlong param_2)

{
  FUN_14193b7f0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c640(undefined8 param_1,longlong param_2)

{
  FUN_14193aed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c660(undefined8 param_1,longlong param_2)

{
  FUN_14193a800((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c680(undefined8 param_1,longlong param_2)

{
  FUN_14193a4c0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c6a0(undefined8 param_1,longlong param_2)

{
  FUN_14193ac30((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c6c0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c6e0(undefined8 param_1,longlong param_2)

{
  FUN_14193b1e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c700(undefined8 param_1,longlong param_2)

{
  FUN_141939f80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193c720(undefined8 param_1,longlong param_2)

{
  FUN_141939e20((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_14193c740(void)

{
  log_InlineLogCATCH_ERROR("TeamArenic::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_1419114c5;
}




void Unwind_14193c790(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_14193c7b0(undefined8 param_1,longlong param_2)

{
  FUN_141911030(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_14193c7d0(undefined8 param_1,longlong param_2)

{
  FUN_141911030(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_14193c7f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pProvider) @%s,%d");
  return &DAT_141911738;
}




void Unwind_14193c830(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_14193c850(undefined8 param_1,longlong param_2)

{
  FUN_141911030(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined8 Catch_14193c870(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x1419117d4;
}




undefined8 Catch_14193c8b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pTeamArenicMgr) @%s,%d");
  return 0x141912754;
}




void Unwind_14193c8f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c910(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c970(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193c990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c9b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193c9d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193c9f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193ca10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193ca30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193ca50(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193ca70(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193ca90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193cab0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193cad0(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193caf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193cb10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




undefined * Catch_14193cb30(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::GetRacingInfo @%s,%d");
  return &DAT_141912daa;
}




undefined * Catch_14193cb70(void)

{
  log_InlineLogCATCH_ERROR(" CTeamArenicMatch::GetScoreMsg @%s,%d");
  return &DAT_141912f63;
}




void Unwind_14193cbb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14193cbd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14193cbf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14193cc10(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14193cc30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193cc50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193cc70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193cc90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193ccb0(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193ccd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193ccf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193cd10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193cd30(void)

{
  DAT_14195d5b8 = DAT_14195d5b8 & 0xfffffffe;
  return;
}




void Unwind_14193cd50(void)

{
  DAT_14195d5b8 = DAT_14195d5b8 & 0xfffffffe;
  return;
}




void Unwind_14193cd70(void)

{
  DAT_14195d5b8 = DAT_14195d5b8 & 0xfffffffe;
  return;
}




void Unwind_14193cd90(void)

{
  DAT_14195d5b8 = DAT_14195d5b8 & 0xfffffffe;
  return;
}




void Unwind_14193cdb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193cdd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193cdf0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ce10(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193ce30(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ce50(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ce70(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193ce90(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ceb0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193ced0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193cef0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193cf10(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193cf30(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193cf50(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193cf70(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_14193cf90(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193cfb0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193cfd0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193cff0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x50));
  return;
}




void Unwind_14193d010(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193d030(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d050(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d070(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x80));
  return;
}




void Unwind_14193d090(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193d0c0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14193d0e0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_14193d100(undefined8 param_1,longlong param_2)

{
  FUN_141913ab0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14193d130(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14193d160(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193d180(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_14193d1a0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x50));
  return;
}




void Unwind_14193d1c0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x80));
  return;
}




void Unwind_14193d1e0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d200(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d220(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d240(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14193d260(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14193d280(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14193d2a0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_14193d2c0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_14193d2e0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x58));
  return;
}




undefined8 Catch_14193d300(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::ClearWitness @%s,%d");
  return 0x141914ccf;
}




void Unwind_14193d340(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193d370(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14193d390(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14193d3b0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14193d3d0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_14193d3f0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14193d410(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_14193d430(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::BroadcastWitnessMsg @%s,%d");
  return 0x14191517b;
}




void Unwind_14193d470(undefined8 param_1,longlong param_2)

{
  FUN_14193aa90((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_14193d490(undefined8 param_1,longlong param_2)

{
  FUN_14193b1e0((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_14193d4b0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::ShowWitnessInfo @%s,%d");
  return 0x1419155ca;
}




void Unwind_14193d4f0(undefined8 param_1,longlong param_2)

{
  FUN_14193b1e0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_14193d510(undefined8 param_1,longlong param_2)

{
  FUN_14193aa90((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_14193d530(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::OnEnterWitness, witness:%u, arenic leader:%u @%s,%d");
  return &DAT_1419158dd;
}




void Unwind_14193d580(undefined8 param_1,longlong param_2)

{
  FUN_14193b1e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193d5a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::OnExitWitness, user:%u, fly back: %d @%s,%d");
  return 0x141915a24;
}




void Unwind_14193d5f0(undefined8 param_1,longlong param_2)

{
  FUN_14193b1e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193d610(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMatch::OnWitnessCheer @%s,%d");
  return 0x141915bda;
}




void Unwind_14193d650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193d690(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d6b0(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d6d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d6f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193d710(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193d750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




undefined8 Catch_14193d770(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::ProcessStatusEndOut, team leader:%u @%s,%d");
  return 0x141915e90;
}




void Unwind_14193d7b0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




undefined8 Catch_14193d7d0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnShowYesterdayInfo, idUser:%u @%s,%d");
  return 0x141915fce;
}




undefined8 Catch_14193d810(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnShowRankAthletePoint, idUser:%u, page: %u @%s,%d");
  return 0x141916003;
}




void Unwind_14193d860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14193d880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14193d8a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14193d8c0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14193d8e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193d900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193d920(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193d940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193d960(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14193d980(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




undefined * Catch_14193d9a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return &DAT_1419179eb;
}




void Unwind_14193d9e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193da00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193da20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193da40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14193da60(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193da80(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193daa0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193dac0(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14193dae0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14193db00(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193db20(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193db40(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193db60(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193db80(void)

{
  FUN_1419128f0();
  return;
}




void Catch_14193dba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14193dbd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193dc00(void)

{
  FUN_1419128f0();
  return;
}




void Catch_14193dc20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193dc50(void)

{
  FUN_1419128f0();
  return;
}




void Catch_14193dc70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14193dca0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193dcd0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193dcf0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193dd10(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193dd30(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193dd50(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193dd70(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193dd90(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14193ddb0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14193ddd0(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ddf0(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193de10(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193de30(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193de50(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193de70(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193de90(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_14193deb0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14193ded0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193def0(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14193df10(undefined8 param_1,longlong param_2)

{
  FUN_141918870(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193df40(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193df60(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193df80(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193dfa0(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_14193dfc0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14193dfe0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e000(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e020(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e040(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e060(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e080(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193e0a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::Create @%s,%d");
  return 0x14191a489;
}




void Unwind_14193e0e0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e100(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e120(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e140(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e160(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e180(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e1a0(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e1c0(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e1e0(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e200(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e220(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e240(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e260(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e280(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e2a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14193e2c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14193e2e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14193e300(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14193e320(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14193e340(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14193e360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14193e380(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14193e3a0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e3c0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e3e0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e400(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e420(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e440(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e460(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e480(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e4a0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193e4c0(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e4e0(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e500(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_14193e520(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pWitnessMgr) @%s,%d");
  return &DAT_14191b604;
}




undefined * Catch_14193e560(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::Release @%s,%d");
  return &DAT_14191b618;
}




undefined8 Catch_14193e5a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::IsAttackAble, user:%u, target user:%u @%s,%d");
  return 0x14191bd02;
}




undefined8 Catch_14193e5f0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnDie, user:%u @%s,%d");
  return 0x14191beba;
}




void Unwind_14193e630(undefined8 param_1,longlong param_2)

{
  FUN_14193a4c0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_14193e650(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnShowCompetingInfo, idUser:%u @%s,%d");
  return 0x14191c112;
}




undefined8 Catch_14193e690(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnJoinTeam, user:%u @%s,%d");
  return 0x14191c368;
}




void Unwind_14193e6d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14193e6f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e710(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14193e730(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e750(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193e770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14193e790(undefined8 param_1,longlong param_2)

{
  FUN_141912950(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14193e7b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14193e7d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e7f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14193e810(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14193e850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14193e890(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14193e8b0(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_14193e8d0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_14193e8f0(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e910(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e930(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e950(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e970(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e990(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e9b0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e9d0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193e9f0(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ea10(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ea30(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ea50(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ea70(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193ea90(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eab0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ead0(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eaf0(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eb10(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193eb30(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eb50(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eb70(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193eb90(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ebb0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193ebd0(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ebf0(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ec10(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ec30(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14193ec50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14193ec80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_14193eca0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnWitnessCheer, user:%u, leader:%u @%s,%d");
  return 0x14191e34e;
}




void Unwind_14193ecf0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_14193ed10(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnApply, idUser: %u @%s,%d");
  return 0x14191e636;
}




undefined8 Catch_14193ed50(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnContinueAthlete, user: %u @%s,%d");
  return 0x14191e6db;
}




undefined * Catch_14193ed90(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pTeamArenicTeam) @%s,%d");
  return &DAT_14191e840;
}




undefined8 Catch_14193edd0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::ShowScore @%s,%d");
  return 0x14191ec35;
}




undefined8 Catch_14193ee10(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnShowTeamArenicInfo, idUser:%u @%s,%d");
  return 0x14191ecb7;
}




undefined8 Catch_14193ee50(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::ProcessSettlement @%s,%d");
  return 0x14191eeb5;
}




undefined * Catch_14193ee90(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::ChangeTeamLeader, old leader:%u @%s,%d");
  return &DAT_14191f25d;
}




void Unwind_14193eed0(undefined8 param_1,longlong param_2)

{
  FUN_14193ac30((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193eef0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnShowTeamInfo, idUser:%u, team leader: %u @%s,%d");
  return 0x14191f4cc;
}




void Unwind_14193ef40(undefined8 param_1,longlong param_2)

{
  FUN_14191d680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ef60(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ef80(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193efa0(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193efc0(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193efe0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_14193f000(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_14193f020(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x80));
  return;
}




void Unwind_14193f040(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193f060(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f080(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f0a0(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f0c0(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f0e0(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f100(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193f120(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f140(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f160(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f180(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f1a0(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f1c0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193f1e0(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f200(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f220(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f240(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f260(undefined8 param_1,longlong param_2)

{
  FUN_14191d680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f280(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14193f2a0(undefined8 param_1,longlong param_2)

{
  FUN_14191f5f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14193f2c0(undefined8 param_1,longlong param_2)

{
  FUN_14191d680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f2e0(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f300(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f320(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f340(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_14193f360(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(iterPos->second) @%s,%d");
  return &DAT_14191fe1d;
}




undefined8 Catch_14193f3a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnUserLogin, User id : %d @%s,%d");
  return 0x14191fe86;
}




undefined * Catch_14193f3e0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::BeginAthletics @%s,%d");
  return &DAT_141920010;
}




undefined8 Catch_14193f420(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::EndAthletics @%s,%d");
  return 0x14192029d;
}




undefined8 Catch_14193f460(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnLeave, user:%u @%s,%d");
  return 0x1419203a7;
}




undefined8 Catch_14193f4a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTeamInviteOK @%s,%d");
  return 0x14192057f;
}




void Unwind_14193f4e0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_14193f500(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193f520(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTeamAthleteRefuse @%s,%d");
  return 0x1419206fb;
}




undefined8 Catch_14193f560(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTeamInviteRefuse @%s,%d");
  return 0x14192096a;
}




void Unwind_14193f5a0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_14193f5c0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193f5e0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnFightTimeOut @%s,%d");
  return 0x141920b11;
}




undefined8 Catch_14193f620(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTeamFightEndTimeOut  @%s,%d");
  return 0x141920d8b;
}




undefined8 Catch_14193f660(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnInviteTimeOut, idLeader:%u @%s,%d");
  return 0x141920f34;
}




void Unwind_14193f6a0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14193f6c0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_14193f6e0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnLeaveMap, idUser:%u @%s,%d");
  return 0x14192133f;
}




void Unwind_14193f720(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_14193f740(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnActionReborn, user:%u @%s,%d");
  return 0x141921404;
}




undefined8 Catch_14193f780(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnLoseLife, user:%u, lose life: %d @%s,%d");
  return 0x14192153e;
}




void Unwind_14193f7d0(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f7f0(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f810(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f830(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f850(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f870(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193f890(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f8b0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f8d0(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f8f0(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f910(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14193f930(undefined8 param_1,longlong param_2)

{
  FUN_14191f970(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14193f960(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f980(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f9a0(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f9c0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193f9e0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fa00(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_14193fa20(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fa40(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fa60(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fa80(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193faa0(undefined8 param_1,longlong param_2)

{
  FUN_14191d680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fac0(undefined8 param_1,longlong param_2)

{
  FUN_14191f5f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14193fae0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14193fb00(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14193fb20(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14193fb40(undefined8 param_1,longlong param_2)

{
  FUN_141921560(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14193fb60(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fb80(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fba0(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fbc0(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fbe0(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fc00(undefined8 param_1,longlong param_2)

{
  FUN_141921620(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14193fc20(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fc40(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fc60(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fc80(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fca0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193fcc0(undefined8 param_1,longlong param_2)

{
  FUN_141921870((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14193fce0(undefined8 param_1,longlong param_2)

{
  FUN_141921870((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_14193fd00(undefined8 param_1,longlong param_2)

{
  FUN_1419218a0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_14193fd20(undefined8 param_1,longlong param_2)

{
  FUN_14191fd00((longlong *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_14193fd40(undefined8 param_1,longlong param_2)

{
  FUN_141935570((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x118));
  return;
}




void Unwind_14193fd60(undefined8 param_1,longlong param_2)

{
  FUN_14191f5f0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_14193fd80(undefined8 param_1,longlong param_2)

{
  FUN_14191d680(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fda0(undefined8 param_1,longlong param_2)

{
  FUN_14191a890(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fdc0(undefined8 param_1,longlong param_2)

{
  FUN_1419195e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fde0(undefined8 param_1,longlong param_2)

{
  FUN_141918800(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fe00(undefined8 param_1,longlong param_2)

{
  FUN_141917cb0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fe20(undefined8 param_1,longlong param_2)

{
  FUN_141921620(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_14193fe40(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fe60(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fe80(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fea0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fec0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193fee0(undefined8 param_1,longlong param_2)

{
  FUN_141921560(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_14193ff00(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193ff20(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193ff40(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193ff60(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193ff80(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14193ffa0(undefined8 param_1,longlong param_2)

{
  FUN_141921560(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14193ffc0(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14193ffe0(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940000(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940020(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940040(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940060(undefined8 param_1,longlong param_2)

{
  FUN_141921620(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141940080(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x440));
  return;
}




void Unwind_1419400a0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_1419400c0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnInviteRefuse, user:%u @%s,%d");
  return 0x141921b76;
}




undefined8 Catch_141940100(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnInviteOK, user: %u @%s,%d");
  return 0x141921c8f;
}




undefined8 Catch_141940140(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnEnterMap, iduser:%u @%s,%d");
  return 0x141921e2f;
}




void Unwind_141940180(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_1419401a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::QuitTeam @%s,%d");
  return 0x14192203d;
}




void Unwind_1419401e0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141940200(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940220(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940240(undefined8 param_1,longlong param_2)

{
  FUN_14191a770((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940260(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940280(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419402a0(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419402c0(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419402e0(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940300(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940320(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940340(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940360(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940380(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419403a0(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419403c0(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1419403e0(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940400(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940420(undefined8 param_1,longlong param_2)

{
  FUN_1419187a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141940440(undefined8 param_1,longlong param_2)

{
  FUN_141917dc0((undefined8 *)(param_2 + 0x20));
  return;
}




undefined8 Catch_141940460(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::SearchMatch @%s,%d");
  return 0x14192282a;
}




void Unwind_1419404a0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419404d0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419404f0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940510(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940530(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940550(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141940570(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnEnterCSOrOS, iduser:%u @%s,%d");
  return 0x141922cee;
}




void Unwind_1419405b0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419405d0(undefined8 param_1,longlong param_2)

{
  FUN_141917b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419405f0(undefined8 param_1,longlong param_2)

{
  FUN_1419187c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940610(undefined8 param_1,longlong param_2)

{
  FUN_1419195a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940630(undefined8 param_1,longlong param_2)

{
  FUN_14191a850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940650(undefined8 param_1,longlong param_2)

{
  FUN_14191d640(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940670(undefined8 param_1,longlong param_2)

{
  FUN_141921560(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141940690(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419406b0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419406d0(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419406f0(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940710(undefined8 param_1,longlong param_2)

{
  FUN_14191a870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940730(undefined8 param_1,longlong param_2)

{
  FUN_14191d660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940750(undefined8 param_1,longlong param_2)

{
  FUN_141921620(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141940770(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141940790(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_1419407b0(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_1419407d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141940800(undefined8 param_1,longlong param_2)

{
  FUN_141921870((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141940820(undefined8 param_1,longlong param_2)

{
  FUN_141921870((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_141940840(undefined8 param_1,longlong param_2)

{
  FUN_1419218a0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_141940860(undefined8 param_1,longlong param_2)

{
  FUN_14191fd00((longlong *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_141940880(undefined8 param_1,longlong param_2)

{
  FUN_141935570((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x118));
  return;
}




void Unwind_1419408a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined * Catch_1419408c0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::CreateNew @%s,%d");
  return &DAT_141923053;
}




undefined8 Catch_141940900(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pTeamArenicUser) @%s,%d");
  return 0x1419231d8;
}




undefined8 Catch_141940940(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnUserLogout, user id: %d @%s,%d");
  return 0x1419231d8;
}




undefined8 Catch_141940980(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTeamDismiss @%s,%d");
  return 0x141923281;
}




undefined8 Catch_1419409c0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnQuitTeam, user:%u @%s,%d");
  return 0x1419233f1;
}




void Unwind_141940a00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141940a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141940a40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141940a60(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141940a80(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x200));
  return;
}




void Unwind_141940aa0(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(param_2 + 0x150));
  return;
}




void Unwind_141940ac0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x648) + 0x20));
  return;
}




void Unwind_141940ae0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x648) + 0x50));
  return;
}




void Unwind_141940b00(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x648) + 0x80));
  return;
}




void Unwind_141940b30(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141940b50(undefined8 param_1,longlong param_2)

{
  FUN_141915ef0(param_2 + 0x98);
  return;
}




void Unwind_141940b70(undefined8 param_1,longlong param_2)

{
  FUN_141914900((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined8 Catch_141940b90(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::ProcessMatch @%s,%d");
  return 0x141923dcf;
}




void Unwind_141940bd0(undefined8 param_1,longlong param_2)

{
  FUN_141921620((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_141940bf0(undefined8 param_1,longlong param_2)

{
  FUN_1419218a0((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_141940c10(undefined8 param_1,longlong param_2)

{
  FUN_141921620((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_141940c30(undefined8 param_1,longlong param_2)

{
  FUN_14191d660((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940c50(undefined8 param_1,longlong param_2)

{
  FUN_14191a870((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940c70(undefined8 param_1,longlong param_2)

{
  FUN_1419195c0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940c90(undefined8 param_1,longlong param_2)

{
  FUN_1419187e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141940cb0(undefined8 param_1,longlong param_2)

{
  FUN_141917c20((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141940cd0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicMgr::OnTimer @%s,%d");
  return 0x141923fe1;
}




void Unwind_141940d10(void)

{
  DAT_14195d5d0 = DAT_14195d5d0 & 0xfffffffe;
  return;
}




void Unwind_141940d30(void)

{
  DAT_14195d5d0 = DAT_14195d5d0 & 0xfffffffe;
  return;
}




void Unwind_141940d50(void)

{
  DAT_14195d5d0 = DAT_14195d5d0 & 0xfffffffe;
  return;
}




void Unwind_141940d70(void)

{
  DAT_14195d5d0 = DAT_14195d5d0 & 0xfffffffe;
  return;
}




void Unwind_141940d90(void)

{
  DAT_14195d5d0 = DAT_14195d5d0 & 0xfffffffe;
  return;
}




void Unwind_141940db0(undefined8 param_1,longlong param_2)

{
  FUN_141924980(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_141940dd0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pDefault) @%s,%d");
  return 0x141924bb6;
}




undefined8 Catch_141940e10(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pData) @%s,%d");
  return 0x141924d21;
}




void Unwind_141940e50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141940e70(void)

{
  DAT_14195d5e0 = DAT_14195d5e0 & 0xfffffffe;
  return;
}




void Unwind_141940e90(void)

{
  DAT_14195d5e0 = DAT_14195d5e0 & 0xfffffffe;
  return;
}




void Unwind_141940eb0(void)

{
  DAT_14195d5e0 = DAT_14195d5e0 & 0xfffffffe;
  return;
}




void Unwind_141940ed0(void)

{
  DAT_14195d5e0 = DAT_14195d5e0 & 0xfffffffe;
  return;
}




void Unwind_141940ef0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141940f10(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141940f30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141940f60(void)

{
  FUN_1419128f0();
  return;
}




void Catch_141940f80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141940fb0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141940fd0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141940ff0(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941010(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141941030(undefined8 param_1,longlong param_2)

{
  FUN_141925d10(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141941060(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941080(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419410a0(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1419410c0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::GetTeamInfoMsg @%s,%d");
  return &DAT_141926a41;
}




void Unwind_141941100(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941120(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941140(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941160(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141941180(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419411a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419411c0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419411e0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941200(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941220(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941240(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141941260(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::SwitchAllTeamerStatus catch: id=%u, status=%d @%s,%d");
  return &DAT_1419275b7;
}




undefined8 Catch_1419412b0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::OnWin @%s,%d");
  return 0x141927d1d;
}




undefined8 Catch_1419412f0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::OnLost @%s,%d");
  return 0x141927f7d;
}




undefined8 Catch_141941330(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::ShowTeamArenicInfo @%s,%d");
  return 0x14192819d;
}




undefined8 Catch_141941370(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::UpdateFamilyInfo @%s,%d");
  return 0x1419283a8;
}




undefined8 Catch_1419413b0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::OnUserDie @%s,%d");
  return 0x141928829;
}




undefined * Catch_1419413f0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::ChangeLeader @%s,%d");
  return &DAT_141928f22;
}




void Unwind_141941430(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941460(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941480(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419414a0(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419414c0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419414e0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941500(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941520(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941540(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941560(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141941580(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419415a0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_1419415c0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::UpdateTeamAthletePoint @%s,%d");
  return &DAT_141929352;
}




void Unwind_141941600(undefined8 param_1,longlong param_2)

{
  FUN_14193ac30((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141941620(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::ShowTeamInfo, user:%u @%s,%d");
  return 0x141929465;
}




void Unwind_141941660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141941680(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419416a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419416c0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419416e0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941700(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941720(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941740(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941760(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941780(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419417a0(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419417c0(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419417e0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141941800(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::Create @%s,%d");
  return 0x14192a0c6;
}




undefined8 Catch_141941840(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::SwitchStatus, status:%d, switch all teamers:%d @%s,%d");
  return 0x14192a25a;
}




undefined8 Catch_141941890(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::ResetTeam @%s,%d");
  return 0x14192a60d;
}




undefined8 Catch_1419418d0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::ClearTeam @%s,%d");
  return 0x14192a7ea;
}




void Unwind_141941910(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941930(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941950(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941970(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941990(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419419b0(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419419d0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941a00(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941a20(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941a40(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941a60(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941a80(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941aa0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x78));
  return;
}




void Unwind_141941ac0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x78));
  return;
}




undefined * Catch_141941ae0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::AddAllTeamUser @%s,%d");
  return &DAT_14192aca3;
}




void Unwind_141941b20(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941b40(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941b60(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941b80(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941ba0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941bc0(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141941be0(undefined8 param_1,longlong param_2)

{
  FUN_14192a890(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141941c10(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941c30(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941c50(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941c70(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941c90(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941cb0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141941cd0(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941cf0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941d10(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941d30(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941d50(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941d70(undefined8 param_1,longlong param_2)

{
  FUN_14192ad80((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141941d90(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x98));
  return;
}




void Unwind_141941db0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141941dd0(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141941df0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141941e10(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941e30(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941e50(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941e70(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141941e90(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141941eb0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::DeleteMember, user:%u @%s,%d");
  return &DAT_14192af8b;
}




void Unwind_141941ef0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141941f20(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141941f40(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141941f60(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141941f80(undefined8 param_1,longlong param_2)

{
  FUN_141913d50(*(undefined8 **)(param_2 + 0x110));
  return;
}




void Unwind_141941fa0(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141941fc0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141941fe0(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x4b0));
  return;
}




void Unwind_141942000(undefined8 param_1,longlong param_2)

{
  FUN_14193ac30((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined * Catch_141942020(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::BeginAthletics @%s,%d");
  return &DAT_14192b9a2;
}




void Unwind_141942060(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x4d0));
  return;
}




void Unwind_141942080(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0xc0));
  return;
}




undefined8 Catch_1419420a0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::LeaveArenic @%s,%d");
  return 0x14192bfb6;
}




void Unwind_1419420e0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942110(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942130(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942150(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942170(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942190(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_1419421b0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::OnInviteTimeOut @%s,%d");
  return 0x14192c34e;
}




void Unwind_1419421f0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141942210(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942230(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942250(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942270(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141942290(undefined8 param_1,longlong param_2)

{
  FUN_141913a20((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419422b0(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_1419422d0(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::KickUnloadMapTeamer @%s,%d");
  return 0x14192c760;
}




void Unwind_141942310(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942330(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942350(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942370(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942390(undefined8 param_1,longlong param_2)

{
  FUN_141926f80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419423b0(undefined8 param_1,longlong param_2)

{
  FUN_141929d30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419423d0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419423f0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad80((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_141942410(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942430(undefined8 param_1,longlong param_2)

{
  FUN_141913810(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141942450(undefined8 param_1,longlong param_2)

{
  FUN_141913a20(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141942470(undefined8 param_1,longlong param_2)

{
  FUN_141913d50((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x98));
  return;
}




void Unwind_141942490(void)

{
  DAT_14195d5e0 = DAT_14195d5e0 & 0xfffffffe;
  return;
}




void Unwind_1419424b0(undefined8 param_1,longlong param_2)

{
  FUN_1419257e0(*(void **)(param_2 + 0x48));
  return;
}




undefined8 Catch_1419424d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pTeam) @%s,%d");
  return 0x14192c9a5;
}




void Unwind_141942510(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141942530(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::OnTimer @%s,%d");
  return 0x14192cb66;
}




void Unwind_141942570(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_141942590(undefined8 param_1,longlong param_2)

{
  FUN_14192ad80((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1419425b0(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_1419425d0(undefined8 param_1,longlong param_2)

{
  FUN_141929d30((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419425f0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141942610(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141942630(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141942650(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141942670(undefined8 param_1,longlong param_2)

{
  FUN_14192ad50((longlong *)(param_2 + 0x50));
  return;
}




void Unwind_141942690(undefined8 param_1,longlong param_2)

{
  FUN_141929d30((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419426b0(undefined8 param_1,longlong param_2)

{
  FUN_141926f80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419426d0(undefined8 param_1,longlong param_2)

{
  FUN_141925fb0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419426f0(undefined8 param_1,longlong param_2)

{
  FUN_141925cf0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141942710(undefined8 param_1,longlong param_2)

{
  FUN_141913810((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141942730(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicTeam::CalcRockPoint @%s,%d");
  return 0x14192d21b;
}




void Unwind_141942770(undefined8 param_1,longlong param_2)

{
  FUN_14193a0e0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141942790(void)

{
  DAT_14195d5f0 = DAT_14195d5f0 & 0xfffffffe;
  return;
}




void Unwind_1419427b0(void)

{
  DAT_14195d5f0 = DAT_14195d5f0 & 0xfffffffe;
  return;
}




void Unwind_1419427d0(void)

{
  DAT_14195d5f0 = DAT_14195d5f0 & 0xfffffffe;
  return;
}




void Unwind_1419427f0(void)

{
  DAT_14195d5f0 = DAT_14195d5f0 & 0xfffffffe;
  return;
}




undefined8 Catch_141942810(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicUser::AddWinCount @%s,%d");
  return 0x14192dd3a;
}




undefined8 Catch_141942850(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicUser::AddLostCount @%s,%d");
  return 0x14192de7b;
}




void Unwind_141942890(void)

{
  DAT_14195d5f0 = DAT_14195d5f0 & 0xfffffffe;
  return;
}




void Unwind_1419428b0(undefined8 param_1,longlong param_2)

{
  FUN_14192db30(*(void **)(param_2 + 0x48));
  return;
}




undefined8 Catch_1419428d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pTeamArenicUser) @%s,%d");
  return 0x14192e043;
}




undefined8 Catch_141942910(void)

{
  log_InlineLogCATCH_ERROR("CTeamArenicUser::LeaveArenic, change map: %d, change PK mode: %d @%s,%d");
  return 0x14192e1c7;
}




undefined8 Catch_141942960(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::OnTeamArenicEnd @%s,%d");
  return 0x14192e25f;
}




void Unwind_1419429a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419429c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419429e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141942a00(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141942a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942a40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942aa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942ac0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141942ae0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942b00(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942b20(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942b40(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942b60(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942b80(void)

{
  FUN_1419128f0();
  return;
}




void Catch_141942ba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141942bd0(void)

{
  FUN_1419128f0();
  return;
}




void Catch_141942bf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141942c20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141942c50(void)

{
  FUN_1419128f0();
  return;
}




void Catch_141942c70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141942ca0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942cc0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942ce0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942d00(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942d20(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942d40(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942d60(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942d80(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942da0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942dc0(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942de0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942e00(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141942e20(undefined8 param_1,longlong param_2)

{
  FUN_14192fcf0(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141942e50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141942e70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141942e90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141942eb0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141942ed0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141942ef0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141942f10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141942f30(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141942f50(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942f70(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942f90(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942fb0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141942fd0(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141942ff0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943010(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141943030(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943050(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943070(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943090(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419430b0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419430d0(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419430f0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943110(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141943150(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141943170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141943190(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419431b0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419431d0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419431f0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943210(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943230(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141943250(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943270(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943290(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419432b0(undefined8 param_1,longlong param_2)

{
  FUN_14193aed0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419432d0(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::ShowYesterdayTopTenInfo, user: %u @%s,%d");
  return 0x141932943;
}




void Unwind_141943310(undefined8 param_1,longlong param_2)

{
  FUN_14193a800((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_141943330(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::ShowRankAthletePoint, user:%u, page:%u @%s,%d");
  return 0x141932c9b;
}




void Unwind_141943380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419433a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419433c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419433e0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141943400(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943420(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943440(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943460(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943480(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419434a0(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419434c0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419434e0(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943500(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141943520(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943540(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943560(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943580(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419435a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419435d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419435f0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141943610(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943630(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943650(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943670(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141943690(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::RewardDayHornor @%s,%d");
  return 0x141934186;
}




undefined8 Catch_1419436d0(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::RewardMonthHornor @%s,%d");
  return 0x141934493;
}




undefined * Catch_141943710(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::UpdateUserAysncHornor @%s,%d");
  return &DAT_141934728;
}




void Unwind_141943750(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943770(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943790(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419437b0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419437d0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419437f0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943810(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943830(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943850(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943870(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943890(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419438b0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419438d0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419438f0(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943910(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943930(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943950(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141943970(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943990(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419439b0(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419439d0(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419439f0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943a10(undefined8 param_1,longlong param_2)

{
  FUN_141934d50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141943a30(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943a50(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943a70(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943a90(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943ab0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943ad0(undefined8 param_1,longlong param_2)

{
  FUN_141935180(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141943af0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943b10(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943b30(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943b50(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943b70(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141943b90(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0xa0) + 8));
  return;
}




void Unwind_141943bb0(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x48));
  return;
}




void Unwind_141943bd0(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x88));
  return;
}




void Unwind_141943c00(undefined8 param_1,longlong param_2)

{
  FUN_141930890((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 200));
  return;
}




void Unwind_141943c30(undefined8 param_1,longlong param_2)

{
  FUN_141930890((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0xf8));
  return;
}




void Unwind_141943c60(undefined8 param_1,longlong param_2)

{
  FUN_141935540((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x128));
  return;
}




void Unwind_141943c90(undefined8 param_1,longlong param_2)

{
  FUN_141935540((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x168));
  return;
}




void Unwind_141943cc0(undefined8 param_1,longlong param_2)

{
  FUN_141935180(*(longlong **)(param_2 + 0xb0));
  return;
}




void Unwind_141943ce0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943d00(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943d20(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943d40(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943d60(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943d80(undefined8 param_1,longlong param_2)

{
  FUN_141935180(*(longlong **)(param_2 + 0xb0));
  return;
}




void Unwind_141943da0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943dc0(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943de0(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943e00(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943e20(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943e40(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943e60(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_141943e80(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943ea0(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943ec0(undefined8 param_1,longlong param_2)

{
  FUN_141934d50(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_141943ee0(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943f00(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943f20(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943f40(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943f60(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943f80(undefined8 param_1,longlong param_2)

{
  FUN_141934d50(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_141943fa0(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943fc0(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141943fe0(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141944000(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141944020(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_141944040(undefined8 param_1,longlong param_2)

{
  FUN_141934d50(*(longlong **)(param_2 + 0xa0));
  return;
}




void Unwind_141944060(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_141944080(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_1419440a0(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_1419440c0(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_1419440e0(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0xa0));
  return;
}




undefined8 Catch_141944100(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::NotifyRank @%s,%d");
  return 0x141935f8c;
}




undefined8 Catch_141944140(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::UpdateTeamRanks @%s,%d");
  return 0x1419361a4;
}




undefined8 Catch_141944180(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::UpdateYesterdayRanks @%s,%d");
  return 0x14193640f;
}




void Unwind_1419441c0(undefined8 param_1,longlong param_2)

{
  FUN_14193b7f0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419441e0(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::ShowTeamArenicInfo, user:%u, status:%d @%s,%d");
  return 0x1419365de;
}




void Unwind_141944230(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944250(undefined8 param_1,longlong param_2)

{
  FUN_14192f240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944270(undefined8 param_1,longlong param_2)

{
  FUN_14192fcb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944290(undefined8 param_1,longlong param_2)

{
  FUN_141930950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419442b0(undefined8 param_1,longlong param_2)

{
  FUN_141931be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419442d0(undefined8 param_1,longlong param_2)

{
  FUN_141933520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419442f0(undefined8 param_1,longlong param_2)

{
  FUN_141934d50(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944310(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944330(undefined8 param_1,longlong param_2)

{
  FUN_14192f2b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944350(undefined8 param_1,longlong param_2)

{
  FUN_14192fcd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944370(undefined8 param_1,longlong param_2)

{
  FUN_141930970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944390(undefined8 param_1,longlong param_2)

{
  FUN_141931c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419443b0(undefined8 param_1,longlong param_2)

{
  FUN_141933540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419443d0(undefined8 param_1,longlong param_2)

{
  FUN_141935180(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419443f0(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_141944410(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_141944430(undefined8 param_1,longlong param_2)

{
  FUN_141935510((longlong *)(*(longlong *)(param_2 + 0x50) + 0x88));
  return;
}




void Unwind_141944450(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944470(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141944490(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1419444b0(undefined8 param_1,longlong param_2)

{
  FUN_141930890((undefined8 *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_1419444d0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419444f0(undefined8 param_1,longlong param_2)

{
  FUN_14192f260(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141944510(undefined8 param_1,longlong param_2)

{
  FUN_14192fc90(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141944530(undefined8 param_1,longlong param_2)

{
  FUN_141930890((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0xf8));
  return;
}




void Unwind_141944550(undefined8 param_1,longlong param_2)

{
  FUN_141935540((longlong *)(*(longlong *)(param_2 + 0x50) + 0x128));
  return;
}




void Unwind_141944570(undefined8 param_1,longlong param_2)

{
  FUN_141935540((longlong *)(*(longlong *)(param_2 + 0x50) + 0x168));
  return;
}




undefined8 Catch_141944590(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::ProcessRanks @%s,%d");
  return 0x141936dc0;
}




undefined * Catch_1419445d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAthleteRec) @%s,%d");
  return &DAT_141937006;
}




undefined8 Catch_141944610(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::Init @%s,%d");
  return 0x1419373b1;
}




undefined * Catch_141944650(void)

{
  log_InlineLogCATCH_ERROR("CTeamRankMgr::OnDataChange, family: %u @%s,%d");
  return &DAT_1419376a8;
}




void Unwind_141944690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419446b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419446d0(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419446f0(void)

{
  FUN_1419128f0();
  return;
}




void Catch_141944710(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141944740(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141944770(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944790(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419447b0(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419447d0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_1419447f0(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944810(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944830(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944850(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141944890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419448b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419448d0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419448f0(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944910(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944930(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141944970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141944990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419449b0(undefined8 param_1,longlong param_2)

{
  FUN_141912950((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419449d0(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419449f0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944a10(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944a30(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944a50(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944a70(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944a90(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944ab0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141944ad0(void)

{
  log_InlineLogCATCH_ERROR("CTeamWitnessMgr::OnExitWitness, fly map: %d, notify: %d @%s,%d");
  return 0x14193959b;
}




undefined8 Catch_141944b20(void)

{
  log_InlineLogCATCH_ERROR("CTeamWitnessMgr::OnWitnessCheer @%s,%d");
  return 0x141939702;
}




void Unwind_141944b60(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944b80(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944ba0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944bc0(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944be0(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944c00(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944c20(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944c40(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944c60(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944c80(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944ca0(undefined8 param_1,longlong param_2)

{
  FUN_141939720(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944cc0(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944ce0(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944d00(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944d20(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944d40(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944d60(undefined8 param_1,longlong param_2)

{
  FUN_1419398e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944d80(undefined8 param_1,longlong param_2)

{
  FUN_141939720(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944da0(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944dc0(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944de0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944e00(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944e20(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141944e40(void)

{
  log_InlineLogCATCH_ERROR("CTeamWitnessMgr::OnEnterWitness @%s,%d");
  return 0x141939afd;
}




void Unwind_141944e80(undefined8 param_1,longlong param_2)

{
  FUN_1419398e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944ea0(undefined8 param_1,longlong param_2)

{
  FUN_141939720(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141944ec0(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944ee0(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944f00(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944f20(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944f40(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944f60(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141944f80(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944fa0(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944fc0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141944fe0(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945000(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945020(undefined8 param_1,longlong param_2)

{
  FUN_1419398e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141945040(undefined8 param_1,longlong param_2)

{
  FUN_141939720(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141945060(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945080(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419450a0(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419450c0(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419450e0(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945100(void)

{
  FUN_1419128f0();
  return;
}




void Unwind_141945120(undefined8 param_1,longlong param_2)

{
  FUN_141937c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945140(undefined8 param_1,longlong param_2)

{
  FUN_141937ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945160(undefined8 param_1,longlong param_2)

{
  FUN_141938210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945180(undefined8 param_1,longlong param_2)

{
  FUN_141938600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419451a0(undefined8 param_1,longlong param_2)

{
  FUN_141939170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419451c0(undefined8 param_1,longlong param_2)

{
  FUN_141939720(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419451e0(undefined8 param_1,longlong param_2)

{
  FUN_1419398e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141945200(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141945220(undefined8 param_1,longlong param_2)

{
  FUN_1419398e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141945240(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945260(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945280(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419452a0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419452c0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419452e0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945300(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945320(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945340(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945360(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945380(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419453a0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419453c0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419453e0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945400(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945420(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945440(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945460(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945480(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419454a0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419454c0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419454e0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945500(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945520(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945540(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141945560(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141945580(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419455a0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419455c0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419455e0(undefined8 param_1,longlong param_2)

{
  FUN_141939d50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1419455f8(void)

{
  _unlock(8);
  return;
}




void FUN_141945611(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141945641(void)

{
  _DAT_14195d5a0 = 0xffffffff;
  return;
}




/* Library Function - Single Match
    int `void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))'::`1'::filt$0
   
   Library: Visual Studio 2005 Release */

undefined4 `void___cdecl___ArrayUnwind(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::__l1::filt_0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x28) = param_1;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x28);
  if (**(int **)(param_2 + 0x30) != -0x1f928c9d) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    return *(undefined4 *)(param_2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* Library Function - Single Match
    int `void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,int,void (__cdecl*)(void * __ptr64))'::`1'::fin$0
   
   Library: Visual Studio 2005 Release */

void `void___cdecl_`eh_vector_destructor_iterator'(void*___ptr64,unsigned___int64,int,void_(__cdecl*)(void*___ptr64))'::__l1::fin_0
               (undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x20) == 0) {
    __ArrayUnwind(*(void **)(param_2 + 0x60),*(__uint64 *)(param_2 + 0x68),*(int *)(param_2 + 0x70),*(_func_void_void_ptr **)(param_2 + 0x78));
  }
  return;
}




bool FUN_1419456d0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=2016 failed=0 total=2107 */
