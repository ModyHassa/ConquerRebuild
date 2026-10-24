/* Decompiled by Ghidra 12.1.4 | program: Peerage.dll
   image base: 141550000 | functions: 393 */


void FUN_141551000(void)

{
  log_InlineLogERROR(&DAT_14155a358);
  return;
}




void FUN_141551050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141551060(void)

{
  return 0;
}




undefined8 FUN_141551070(void)

{
  return 0;
}




undefined8 FUN_141551080(void)

{
  return 0;
}




undefined8 FUN_141551090(void)

{
  return 0;
}




undefined8 * FUN_1415510a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1415510e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = peerage::CModule::vftable;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_141557310(param_1 + 0x86);
  FUN_141557180(param_1 + 4);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_141551150(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




undefined8 FUN_141551170(longlong param_1)

{
  longlong lVar1;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0xb);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_14155a358);
    return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_14155a358);
    uVar2 = extraout_RAX_00;
  }
  else {
    uVar2 = FUN_1415516a0(*(longlong *)(param_1 + 0x18),lVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




bool FUN_141551210(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_141551ff0();
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x810,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0xb,*(undefined8 *)(param_1 + 0x18));
  return cVar1 != '\0';
}




longlong * FUN_1415512a0(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3ea) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    else {
      if (param_2[1] != 0x810) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x430);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




void FUN_141551310(void)

{
  return;
}




undefined8 FUN_141551320(void)

{
  return 1;
}




undefined8 * FUN_141551330(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = peerage::CModule::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = 0;
  FUN_141557130((CMsg *)(param_1 + 4));
  FUN_141557290((CMsg *)(param_1 + 0x86));
  return param_1;
}




undefined8 * FUN_141551390(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1415510e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1415513c0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1415512a0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x18));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  
                    /* 0x1430  1  ModuleCreate */
  plVar2 = operator_new(0x858);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)peerage::CModule::vftable;
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 2) = param_2;
    plVar2[3] = 0;
    FUN_141557130((CMsg *)(plVar2 + 4));
    FUN_141557290((CMsg *)(plVar2 + 0x86));
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141551210((longlong)plVar2);
    if (!bVar1) {
      log_InlineLogERROR(&DAT_14155a358);
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




void FUN_141551520(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x00014155153d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}




void FUN_141551550(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x00014155156d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_141551640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = peerage::CPeerageService::vftable;
  if (param_1[2] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[2] = 0;
    param_1[2] = 0;
  }
  return;
}




ulonglong FUN_1415516a0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_14155a358);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_141555690();
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1415569f0((longlong)puVar1,param_2);
  return uVar2;
}




void FUN_141551750(longlong param_1,int param_2)

{
  FUN_141554c40(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141551760(longlong param_1,int param_2,char *param_3,char *param_4)

{
  FUN_1415558a0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_141551770(longlong param_1,int param_2)

{
  FUN_141554b10(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141551780(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  
  uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))();
  if (uVar2 < 0x46) {
    pIVar3 = theInstance();
    lVar6 = **(longlong **)(param_1 + 8);
    pcVar5 = "STR_PEERAGE_DONATE_ERR_BELOW_LEVEL";
  }
  else if (param_3 < 3000000) {
    pIVar3 = theInstance();
    pcVar5 = "STR_PEERAGE_DONATE_ERR_BELOW_UNDERLINE";
    lVar6 = **(longlong **)(param_1 + 8);
  }
  else if (param_3 < 1000000000) {
    if (param_4 == 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,param_3);
    }
    else if (param_4 == 1) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,param_3 / 50000);
    }
    else {
      lVar6 = **(longlong **)(param_1 + 8);
      if (param_4 != 2) {
        (**(code **)(lVar6 + 0x88))(*(longlong **)(param_1 + 8),param_2,0x3c);
        return;
      }
      cVar1 = (**(code **)(lVar6 + 8))();
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2,param_3 / 50000);
    }
    if (cVar1 != '\0') {
      FUN_141556db0(*(longlong *)(param_1 + 0x10),param_2,param_3);
      return;
    }
    pIVar3 = theInstance();
    pcVar5 = "STR_PEERAGE_DONATE_ERR_NO_ENOUGH_MONEY";
    lVar6 = **(longlong **)(param_1 + 8);
  }
  else {
    pIVar3 = theInstance();
    pcVar5 = "STR_PEERAGE_DONATE_OVERFLOW";
    lVar6 = **(longlong **)(param_1 + 8);
  }
  uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,pcVar5);
  (**(code **)(lVar6 + 0x30))(*(undefined8 *)(param_1 + 8),param_2,uVar4,0xff0000,0x7d5);
  return;
}




void FUN_141551920(longlong param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined7 extraout_var;
  undefined4 uVar6;
  CMsg local_438 [1072];
  
  uVar6 = 0xffffffff;
  lVar4 = FUN_1415548b0(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
    uVar1 = FUN_141552980(lVar4);
    uVar3 = (undefined4)CONCAT71(extraout_var,uVar1);
  }
  else {
    uVar3 = *(undefined4 *)(lVar4 + 0x10);
    uVar6 = *(undefined4 *)(lVar4 + 0x14);
    plVar5 = (longlong *)(**(code **)(**(longlong **)(lVar4 + 8) + 0x10))(*(longlong **)(lVar4 + 8),2);
    lVar4 = (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  FUN_141557290(local_438);
  cVar2 = FUN_1415574a0((longlong *)local_438,param_2,uVar3,uVar6,lVar4);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,local_438);
  }
  FUN_141557310((undefined8 *)local_438);
  return;
}




longlong FUN_141551a00(longlong param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_3 < 0xd) && ((lVar2 = FUN_1415548b0(*(longlong *)(param_1 + 0x10),param_2), lVar2 == 0 || (*(int *)(lVar2 + 0x10) < (int)param_3)))) {
    *param_4 = 0xffffffff;
    lVar5 = 3000000;
    lVar2 = FUN_1415549d0(*(longlong *)(param_1 + 0x10),param_3);
    if ((int)param_3 < 7) {
      iVar4 = 0;
      if (param_3 == 1) {
        iVar4 = 30000000;
      }
      else if (param_3 == 3) {
        iVar4 = 100000000;
      }
      else if (param_3 == 5) {
        iVar4 = 200000000;
      }
      uVar1 = FUN_141555070(*(longlong *)(param_1 + 0x10),(longlong)iVar4);
      *param_4 = uVar1;
    }
    if (lVar2 != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),2);
      lVar2 = (**(code **)(*plVar3 + 0x58))(plVar3);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
      lVar5 = (lVar2 - lVar5) + 1;
      if (lVar5 < 3000000) {
        lVar5 = 3000000;
      }
    }
    return lVar5;
  }
  return 0;
}




void FUN_141551b00(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  CMsg local_438 [1072];
  
  FUN_141557290(local_438);
  cVar1 = FUN_1415574a0((longlong *)local_438,param_2,param_3,0,0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,local_438);
  }
  FUN_141557310((undefined8 *)local_438);
  return;
}




longlong FUN_141551b90(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




undefined8 * FUN_141551bf0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141551640(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141551c20(longlong param_1,undefined4 param_2,ushort param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint local_res8;
  CMsg local_468 [1072];
  
  lVar6 = FUN_141552a50(*(longlong *)(param_1 + 0x10));
  if (lVar6 == 0) {
    log_InlineLogERROR(&DAT_14155a358);
  }
  else {
    uVar7 = *(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18) >> 3;
    if (uVar7 < 0x33) {
      uVar7 = uVar7 + 9;
    }
    else {
      uVar7 = 0x32;
    }
    FUN_141557290(local_468);
    uVar8 = FUN_141557440((longlong)local_468,param_3,(short)(uVar7 / 10));
    if ((char)uVar8 != '\0') {
      uVar11 = param_3 * 10;
      uVar7 = *(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18) >> 3;
      uVar10 = (ulonglong)uVar11;
      if (uVar10 < uVar7) {
        do {
          if (((uint)param_3 * 5 + 5) * 2 <= (uint)uVar11) break;
          if (uVar7 <= uVar10) {
            _invalid_parameter_noinfo();
          }
          lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + uVar10 * 8);
          if (lVar2 == 0) {
            log_InlineLogERROR(&DAT_14155a358);
          }
          else {
            plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),3);
            uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
            cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),uVar4);
            local_res8 = 0;
            if (cVar3 != '\0') {
              plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),3);
              uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
              local_res8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),uVar4);
            }
            uVar4 = *(undefined4 *)(lVar2 + 0x14);
            uVar1 = *(undefined4 *)(lVar2 + 0x10);
            plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),2);
            uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
            plVar9 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),3);
            uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
            FUN_141557740((longlong)local_468,uVar5,cVar3 != '\0',local_res8,(char *)(lVar2 + 0x1c),uVar8,uVar1,uVar4);
          }
          uVar11 = uVar11 + 1;
          uVar7 = *(longlong *)(lVar6 + 0x20) - *(longlong *)(lVar6 + 0x18) >> 3;
          uVar10 = (ulonglong)uVar11;
        } while (uVar10 < uVar7);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,local_468);
    FUN_141557310((undefined8 *)local_468);
  }
  return;
}




void FUN_141551eb0(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_4d8 [8];
  undefined8 local_4b8;
  undefined8 local_4a8;
  undefined4 local_4a0 [22];
  CMsg local_448 [1072];
  
  local_4b8 = 0xfffffffffffffffe;
  local_4d8[0] = 1;
  local_4d8[1] = 3;
  local_4d8[2] = 5;
  local_4d8[3] = 7;
  local_4d8[4] = 9;
  local_4d8[5] = 0xc;
  local_4d8[6] = 0;
  lVar4 = 0;
  puVar3 = local_4a0;
  do {
    local_res8[0] = 0xffffffff;
    uVar1 = local_4d8[lVar4];
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,uVar1,local_res8);
    *(undefined8 *)(puVar3 + -2) = uVar2;
    *puVar3 = local_res8[0];
    puVar3[1] = uVar1;
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar4 < 6);
  FUN_141552a50(param_1[2]);
  FUN_141557290(local_448);
  uVar2 = FUN_141557580((longlong)local_448,(ulonglong)param_2,&local_4a8);
  if ((char)uVar2 != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],param_2,local_448);
  }
  FUN_141557310((undefined8 *)local_448);
  return;
}




undefined8 * FUN_141551ff0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = peerage::CPeerageService::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return puVar1;
}




void FUN_141552040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = peerage::CPeerageSort::vftable;
  if (param_1[1] != 0) {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_1415520c0(longlong param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    return;
  }
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  *(undefined8 *)(param_1 + 0x24) = param_2[1];
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return;
}




void FUN_141552110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0,param_3,param_4,0xfffffffffffffffe);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_141552170(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




undefined4 FUN_141552180(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined * FUN_141552190(void)

{
  if ((DAT_14155f2e8 & 1) == 0) {
    DAT_14155f2e8 = DAT_14155f2e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14155f2e0,"CPeerageSort");
    atexit((_func_5014 *)&LAB_1415595d0);
  }
  return &DAT_14155f2e0;
}




void FUN_1415521f0(__uint64 param_1)

{
  if ((DAT_14155f2e8 & 1) == 0) {
    DAT_14155f2e8 = DAT_14155f2e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14155f2e0,"CPeerageSort");
    atexit((_func_5014 *)&LAB_1415595d0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141552245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14155f2e0,param_1);
  return;
}




void FUN_141552250(void *param_1)

{
  if ((DAT_14155f2e8 & 1) == 0) {
    DAT_14155f2e8 = DAT_14155f2e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14155f2e0,"CPeerageSort");
    atexit((_func_5014 *)&LAB_1415595d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415522a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14155f2e0,param_1);
  return;
}




void FUN_1415522b0(void *param_1)

{
  if ((DAT_14155f2e8 & 1) == 0) {
    DAT_14155f2e8 = DAT_14155f2e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14155f2e0,"CPeerageSort");
    atexit((_func_5014 *)&LAB_1415595d0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141552305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14155f2e0,param_1);
  return;
}




undefined8 * FUN_141552310(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141552040(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_141552250(param_1);
  }
  return param_1;
}




undefined8 * FUN_141552340(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1415521f0(0x30);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = peerage::CPeerageSort::vftable;
      puVar1[1] = param_1;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = *param_2;
      *(undefined8 *)((longlong)puVar1 + 0x24) = param_2[1];
      *(undefined1 *)((longlong)puVar1 + 0x2b) = 0;
    }
  }
  return puVar1;
}




exception * FUN_141552460(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1415524a0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001415524c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1415524d0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141552530(void)

{
  return;
}




exception * FUN_141552540(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141552590(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001415525c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1415525d0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1415525f0(exception *param_1,uint param_2)

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




exception * FUN_141552650(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1415526b0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001415526ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141552700(exception *param_1,uint param_2)

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




void FUN_141552780(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x00014155279a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_1415527a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001415527e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




bool FUN_141552810(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    log_InlineLogERROR(&DAT_14155a358);
    return false;
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  lVar6 = (**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_2 + 8) + 0x10))(*(longlong **)(param_2 + 8),2);
  lVar7 = (**(code **)(*plVar5 + 0x58))(plVar5);
  if (lVar6 != lVar7) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    lVar6 = (**(code **)(*plVar5 + 0x58))(plVar5);
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_2 + 8) + 0x10))(*(longlong **)(param_2 + 8),2);
    lVar7 = (**(code **)(*plVar5 + 0x58))(plVar5);
    return lVar7 < lVar6;
  }
  iVar1 = FUN_141552180(param_1);
  iVar2 = FUN_141552180(param_2);
  if (iVar1 != iVar2) {
    iVar1 = FUN_141552180(param_1);
    iVar2 = FUN_141552180(param_2);
    return iVar2 < iVar1;
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0);
  uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_2 + 8) + 0x10))(*(longlong **)(param_2 + 8),0);
  uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
  return uVar3 < uVar4;
}




undefined1 FUN_141552980(longlong param_1)

{
  if (199999999 < param_1) {
    return 5;
  }
  if (99999999 < param_1) {
    return 3;
  }
  return 29999999 < param_1;
}




void FUN_1415529c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5)

{
  char cVar1;
  CMsg local_438 [1072];
  
  FUN_141557290(local_438);
  cVar1 = FUN_1415574a0((longlong *)local_438,param_2,param_3,param_4,param_5);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2,local_438);
  }
  FUN_141557310((undefined8 *)local_438);
  return;
}




longlong FUN_141552a50(longlong param_1)

{
  return param_1 + 8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141552a60(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,undefined4 param_5,char param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  IStringManager *pIVar3;
  char *pcVar4;
  longlong lVar5;
  undefined2 uVar6;
  undefined1 auStackY_6b8 [32];
  CMsg local_678 [1072];
  char local_248 [511];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14155f2c0 ^ (ulonglong)auStackY_6b8;
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_14155a358);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x70))();
    if ((cVar1 != '\0') && (param_6 != '\0')) {
      memset(local_248,0,0x200);
      uVar6 = 0x7d5;
      switch(param_3) {
      case 1:
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_BARON");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_BARON_FEMALE");
          _snprintf(local_248,0x200,pcVar4);
        }
        break;
      case 3:
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_VISCOUNT");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_VISCOUNT_FEMALE");
          _snprintf(local_248,0x200,pcVar4);
        }
        break;
      case 5:
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_EARL");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_EARL_FEMALE");
          _snprintf(local_248,0x200,pcVar4);
        }
        break;
      case 7:
        uVar6 = 0x7db;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_MARQUIS");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_MARQUIS_FEMALE");
          _snprintf(local_248,0x200,pcVar4);
        }
        break;
      case 9:
        uVar6 = 0x7db;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_DUKE");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_DUKE_FEMALE");
          _snprintf(local_248,0x200,pcVar4);
        }
        break;
      case 0xc:
        uVar6 = 0x7db;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x50))(*(longlong **)(param_1 + 0x40),param_2);
        if (iVar2 == 1) {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_KING");
          _snprintf(local_248,0x200,pcVar4);
        }
        else {
          pIVar3 = theInstance();
          pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PEERAGE_PROMPT_QUEEN");
          _snprintf(local_248,0x200,pcVar4);
        }
      }
      local_49 = 0;
      lVar5 = -1;
      pcVar4 = local_248;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (lVar5 != -2) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))(*(longlong **)(param_1 + 0x40),local_248,0xff0000,uVar6);
      }
    }
    FUN_141557290(local_678);
    cVar1 = FUN_1415574a0((longlong *)local_678,param_2,param_3,param_5,param_7);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))(*(longlong **)(param_1 + 0x40),param_2,local_678);
    }
    FUN_141557310((undefined8 *)local_678);
  }
  return;
}




longlong FUN_141552ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141552ef2;
  }
  lVar2 = *plVar1;
LAB_141552ef2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141552f10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141552f32;
  }
  lVar2 = *plVar1;
LAB_141552f32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong * FUN_141552f80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141552fa2;
  }
  lVar2 = *plVar1;
LAB_141552fa2:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -8;
  return param_1;
}




bool FUN_141552fc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_141553000(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141553022;
  }
  lVar2 = *plVar1;
LAB_141553022:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -8;
  return param_1;
}




void FUN_141553050(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_14155dd88);
}




exception * FUN_1415530c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_141553140(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




exception * FUN_1415531a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_141553210(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141553240;
  }
  else {
LAB_141553240:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141553268;
  }
  _invalid_parameter_noinfo();
LAB_141553268:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141553290(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14155de40);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141553300(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14155de40);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_141553370(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_1415533a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_141553400(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1415534a0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1415535b0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1415535f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      cVar1 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar2 * 8),param_4);
      if (cVar1 == '\0') break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(undefined8 *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(undefined8 *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




longlong FUN_141553680(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415536a2;
  }
  lVar2 = *plVar1;
LAB_1415536a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1415536c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415536e2;
  }
  lVar2 = *plVar1;
LAB_1415536e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141553700(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_141553740(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141553762;
  }
  lVar2 = *plVar1;
LAB_141553762:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -8;
  return param_1;
}




ulonglong FUN_141553780(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  uVar2 = param_1[1];
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar3;
  }
  else {
    lVar4 = *plVar1;
  }
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x18)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = uVar2 - 8;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar3 = *plVar1;
  }
  if (*(ulonglong *)(lVar3 + 0x20) <= uVar2) {
    _invalid_parameter_noinfo();
  }
  return uVar2;
}




void FUN_141553800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141553850(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14155de40);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1415538c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14155de40);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_141553930(longlong *param_1,longlong param_2)

{
  FUN_141553210(param_1,param_2);
  return param_1;
}




void * FUN_141553970(void *param_1,longlong param_2,longlong param_3)

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




bool FUN_1415539b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[1];
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == lVar1;
}




void * FUN_141553a60(void *param_1,longlong param_2,void *param_3)

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




void FUN_141553aa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if ((cVar2 != '\0') && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_3,*param_2);
  if ((cVar2 != '\0') && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if ((cVar2 != '\0') && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}




void FUN_141553b30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    cVar2 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar3 * 8),*(undefined8 *)(param_1 + -8 + lVar3 * 8));
    if (cVar2 != '\0') {
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
    cVar2 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar3 * 8),param_4);
    if (cVar2 == '\0') break;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  *(undefined8 *)(param_1 + lVar1 * 8) = param_4;
  return;
}




void * FUN_141553c10(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141553c50(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,undefined *param_5)

{
  *param_3 = *param_1;
  FUN_141553b30((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




void FUN_141553c80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_141553ca0(longlong param_1,ulonglong param_2)

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
      FUN_141553050();
    }
    lVar1 = FUN_141553850(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141553d10(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141553d40(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141553da0(undefined8 *param_1)

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




longlong * FUN_141553de0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141553e4a;
  }
  _invalid_parameter_noinfo();
LAB_141553e4a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void * FUN_141553e80(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141553ef0(void *param_1,longlong param_2,longlong param_3)

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




bool FUN_141553f30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[1];
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == lVar1;
}




void * FUN_141553fc0(void *param_1,longlong param_2,void *param_3)

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




void FUN_141554000(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141553aa0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_141553aa0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_141553aa0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_141553aa0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_141553aa0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1415540e0(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_141553b30(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_141554160(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 1, puVar5 != param_2)) {
    do {
      uVar1 = *puVar5;
      cVar3 = (*(code *)param_3)(uVar1,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(uVar1,puVar5[-1]);
        puVar2 = puVar5;
        while (cVar3 != '\0') {
          *puVar2 = puVar2[-1];
          cVar3 = (*(code *)param_3)(uVar1,puVar2[-2]);
          puVar2 = puVar2 + -1;
        }
        *puVar2 = uVar1;
      }
      else {
        lVar4 = (longlong)puVar5 - (longlong)param_1 >> 3;
        if (0 < lVar4) {
          memmove_s(puVar5 + (1 - lVar4),lVar4 * 8,param_1,lVar4 * 8);
        }
        *param_1 = uVar1;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != param_2);
  }
  return;
}




void FUN_141554270(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_141553b30((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,uVar1,param_3);
  return;
}




void FUN_1415542a0(undefined8 *param_1)

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




undefined8 * FUN_1415542e0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141554330(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141554380(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[4];
  if (uVar1 < (ulonglong)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1415543e0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141554440(undefined8 *param_1)

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




undefined8 * FUN_141554490(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




bool FUN_1415544f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[1];
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != lVar1;
}




void * FUN_141554570(void *param_1,longlong param_2,void *param_3)

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




void FUN_1415545b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar7 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_141554000(param_2,puVar7,param_3 + -1,param_4);
  puVar8 = puVar7;
  while (puVar9 = puVar8, param_2 < puVar9) {
    cVar3 = (*(code *)param_4)(puVar9[-1],*puVar9);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(*puVar9,puVar9[-1]), puVar8 = puVar9 + -1, cVar3 != '\0')) break;
  }
  do {
    puVar7 = puVar7 + 1;
    puVar8 = puVar7;
    puVar4 = puVar9;
    if (param_3 <= puVar7) break;
    cVar3 = (*(code *)param_4)(*puVar7,*puVar9);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(*puVar9,*puVar7), cVar3 != '\0')) break;
  } while( true );
joined_r0x000141554673:
  puVar2 = puVar8;
  puVar8 = puVar9;
  puVar5 = puVar4;
  if (param_3 <= puVar2) {
joined_r0x0001415546b3:
    for (; param_2 < puVar9; puVar9 = puVar9 + -1) {
      puVar8 = puVar8 + -1;
      cVar3 = (*(code *)param_4)(*puVar8,*puVar5);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_4)(*puVar5,*puVar8);
        if (cVar3 != '\0') break;
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
        return;
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
    goto joined_r0x000141554673;
  }
  cVar3 = (*(code *)param_4)(*puVar4,*puVar2);
  puVar6 = puVar7;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)param_4)(*puVar2,*puVar4);
    if (cVar3 != '\0') goto joined_r0x0001415546b3;
    puVar6 = puVar7 + 1;
    if (puVar7 != puVar2) {
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar7 = puVar6;
  puVar8 = puVar2 + 1;
  goto joined_r0x000141554673;
}




void FUN_1415547e0(longlong param_1,longlong param_2,undefined *param_3)

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
      FUN_141553b30(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_141554870(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    uVar1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_141553b30((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,uVar1,param_3);
  }
  return;
}




longlong FUN_1415548b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 < *(longlong **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar3) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      log_InlineLogERROR(&DAT_14155a358);
    }
    else {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x10))(*(longlong **)(lVar5 + 8),3);
      iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
      if (iVar2 == param_2) {
        return lVar5;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    plVar4 = plVar4 + 1;
  }
  return 0;
}




longlong FUN_1415549d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 < *(longlong **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (*(longlong **)(param_1 + 0x28) < plVar2) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (plVar4 <= *(longlong **)(lVar5 + 0x18)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = plVar4 + -1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar2) {
      _invalid_parameter_noinfo();
    }
    lVar5 = *plVar2;
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == param_2)) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    bVar3 = plVar4 <= *(longlong **)(lVar5 + 0x18);
    plVar4 = plVar2;
    if (bVar3) {
      _invalid_parameter_noinfo();
    }
  }
  return lVar5;
}




void FUN_141554b10(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  CMsg local_438 [1072];
  
  lVar2 = FUN_1415548b0(param_1,param_2);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 1)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))(*(longlong **)(param_1 + 0x40),param_2);
    if (lVar2 < 200000000) {
      if (lVar2 < 100000000) {
        uVar5 = (uint)(29999999 < lVar2);
      }
      else {
        uVar5 = 3;
      }
    }
    else {
      uVar5 = 5;
    }
    FUN_141557290(local_438);
    cVar1 = FUN_1415574a0((longlong *)local_438,param_2,uVar5,0xffffffff,lVar2);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2,local_438);
    }
    FUN_141557310((undefined8 *)local_438);
  }
  else {
    FUN_141557290(local_438);
    plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),2);
    uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
    cVar1 = FUN_1415574a0((longlong *)local_438,param_2,*(undefined4 *)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x14),uVar4);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2,local_438);
    }
    FUN_141557310((undefined8 *)local_438);
  }
  return;
}




uint FUN_141554c40(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1415548b0(param_1,param_2);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x10);
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))(*(longlong **)(param_1 + 0x40),param_2);
  if (199999999 < lVar1) {
    return 5;
  }
  if (99999999 < lVar1) {
    return 3;
  }
  return (uint)(29999999 < lVar1);
}




undefined8 * FUN_141554cc0(undefined8 *param_1)

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




undefined8 * FUN_141554d20(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141554d70(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141554dc0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141554e20(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_141554f40(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141554f80(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_141553b30((longlong)param_1,0,lVar2 + -8 >> 3,uVar1,param_3);
  }
  return;
}




undefined8 * FUN_141554ff0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = peerage::CPeerageSortMgr::vftable;
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 1);
    plVar2 = plVar1;
  }
  param_1[1] = plVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}




undefined4 FUN_141555070(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 < *(longlong **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x10))(*(longlong **)(lVar5 + 8),2);
      lVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
      if (lVar3 < param_2) {
        return *(undefined4 *)(lVar5 + 0x14);
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    plVar4 = plVar4 + 1;
  }
  return 0xffffffff;
}




undefined8 FUN_141555160(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 < *(longlong **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    lVar5 = *plVar3;
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x14) == param_2)) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  }
  plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x10))(*(longlong **)(lVar5 + 8),2);
  uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
  return uVar4;
}




undefined8 * FUN_141555250(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1415552e0(longlong *param_1)

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




void FUN_1415553d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141553050();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141553850(param_1 + 0x10,uVar8);
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
      FUN_141554f40(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141554f40(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141553ef0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_141555690(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_141554ff0(puVar1);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_141555700(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = peerage::CPeerageSortMgr::vftable;
  plVar4 = (longlong *)param_1[4];
  if ((longlong *)param_1[5] < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)param_1[1];
  lVar5 = 0;
  while( true ) {
    plVar2 = (longlong *)param_1[5];
    if (plVar2 < (longlong *)param_1[4]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[1])) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar5;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    if (*plVar4 != 0) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      puVar3 = (undefined8 *)*plVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      *plVar4 = 0;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      *plVar4 = 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar5;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    plVar4 = plVar4 + 1;
  }
  FUN_1415552e0(param_1 + 1);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  return;
}




void FUN_1415558a0(longlong param_1,int param_2,char *param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  rsize_t _DstSize;
  longlong *_Dst;
  
  _Dst = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 < *(longlong **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == plVar4) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) {
      param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\peerage\\src\\peeragesortmgr.cpp";
      param_3 = "pSort";
      log_InlineLogERROR(&DAT_14155a358);
    }
    else {
      plVar4 = (longlong *)(**(code **)(*(longlong *)puVar2[1] + 0x10))((longlong *)puVar2[1],3);
      lVar5 = *plVar4;
      iVar3 = (**(code **)(lVar5 + 0x40))(plVar4);
      if (iVar3 == param_2) {
        FUN_141552110((longlong)puVar2,lVar5,param_3,param_4);
        (**(code **)*puVar2)(puVar2,1);
        lVar5 = *(longlong *)(param_1 + 0x28) - (longlong)(_Dst + 1) >> 3;
        if (0 < lVar5) {
          _DstSize = lVar5 << 3;
          memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
        if ((_Dst < *(longlong **)(param_1 + 0x20)) || (*(longlong **)(param_1 + 0x28) < _Dst)) {
          _invalid_parameter_noinfo();
        }
        return;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  return;
}




longlong * FUN_141555a30(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1415553d0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141555b24;
  }
  _invalid_parameter_noinfo();
LAB_141555b24:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_141555b60(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_141555c25:
      if (1 < lVar1) {
        FUN_141554160(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_1415547e0((longlong)param_1,(longlong)param_2,param_4);
        FUN_141554f80(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_141555c25;
    }
    FUN_1415545b0(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_141555b60(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_141555b60(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




undefined8 * FUN_141555c80(undefined8 *param_1,uint param_2)

{
  FUN_141555700(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141555cb0(longlong *param_1,undefined8 *param_2)

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
  FUN_141555a30(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_141555d60(longlong *param_1,longlong *param_2,undefined *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_141555b60((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_141555dc0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *local_res18;
  
  plVar3 = (longlong *)InstanceGet();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,PTR_s_dyna_rank_rec_14155f130);
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    return (undefined8 *)0x0;
  }
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,0);
  (**(code **)(*plVar4 + 0xb8))(plVar4,0);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,1);
  (**(code **)(*plVar4 + 0xb8))(plVar4,0x2dc6c3);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
  (**(code **)(*plVar4 + 0xb8))(plVar4,param_2);
  cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3,1);
  if (cVar1 == '\0') {
    (**(code **)*plVar3)(plVar3,1);
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40),param_2);
  puVar5 = FUN_141552340((longlong)plVar3,puVar5);
  local_res18 = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    (**(code **)*plVar3)(plVar3,1);
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x80))(*(longlong **)(param_1 + 0x40),param_2);
    FUN_141552170((longlong)puVar5,uVar2);
    FUN_141555cb0((longlong *)(param_1 + 8),&local_res18);
  }
  return puVar5;
}




void FUN_141555f80(longlong param_1,char param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  rsize_t _DstSize;
  code *_DstSize_00;
  longlong *_Dst;
  bool bVar14;
  uint local_res18;
  uint local_res20;
  int local_70;
  
  if (param_3 != 0) {
    FUN_1415548b0(param_1,param_3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 < *(undefined8 **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  lVar11 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((lVar11 == 0) || (lVar11 != *(longlong *)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  _DstSize_00 = FUN_141552810;
  FUN_141555b60(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,FUN_141552810);
  _Dst = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar12 = *(longlong **)(param_1 + 8);
  local_res18 = 0;
  local_res20 = 5;
  while( true ) {
    lVar11 = 0;
    plVar7 = *(longlong **)(param_1 + 0x28);
    if (plVar7 < *(longlong **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar12 == (longlong *)0x0) || (plVar12 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == plVar7) break;
    if (plVar12 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar11 = *plVar12;
    }
    if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    lVar11 = *_Dst;
    if (lVar11 != 0) {
      bVar14 = *(uint *)(lVar11 + 0x14) != local_res18;
      *(uint *)(lVar11 + 0x14) = local_res18;
      if ((int)local_res18 < 3) {
        if (*(int *)(lVar11 + 0x10) == 0xc) {
          if ((bVar14) && (param_2 == '\0')) {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            uVar6 = *(uint *)(lVar11 + 0x14);
            uVar4 = *(undefined4 *)(lVar11 + 0x10);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(ulonglong)uVar6;
            FUN_1415529c0(param_1,uVar3,uVar4,uVar6,uVar8);
          }
        }
        else {
          if (param_2 == '\0') {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            iVar5 = *(int *)(lVar11 + 0x10);
            uVar4 = *(undefined4 *)(lVar11 + 0x14);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(lVar11 + 0x1c);
            FUN_141552a60(param_1,uVar3,0xc,(longlong)_DstSize_00,uVar4,iVar5 < 0xc,uVar8);
          }
          *(undefined4 *)(lVar11 + 0x10) = 0xc;
          plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))(*(longlong **)(param_1 + 0x40),uVar4);
        }
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
        uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
      }
      else if ((int)local_res18 < 0xf) {
        if (*(int *)(lVar11 + 0x10) == 9) {
          if ((bVar14) && (param_2 == '\0')) {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            uVar6 = *(uint *)(lVar11 + 0x14);
            uVar4 = *(undefined4 *)(lVar11 + 0x10);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(ulonglong)uVar6;
            FUN_1415529c0(param_1,uVar3,uVar4,uVar6,uVar8);
          }
        }
        else {
          if (param_2 == '\0') {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            iVar5 = *(int *)(lVar11 + 0x10);
            uVar4 = *(undefined4 *)(lVar11 + 0x14);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(lVar11 + 0x1c);
            FUN_141552a60(param_1,uVar3,9,(longlong)_DstSize_00,uVar4,iVar5 < 9,uVar8);
          }
          *(undefined4 *)(lVar11 + 0x10) = 9;
          plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))(*(longlong **)(param_1 + 0x40),uVar4);
        }
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
        uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
      }
      else if (local_res18 < 0x32) {
        if (*(int *)(lVar11 + 0x10) == 7) {
          if ((bVar14) && (param_2 == '\0')) {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            uVar6 = *(uint *)(lVar11 + 0x14);
            uVar4 = *(undefined4 *)(lVar11 + 0x10);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(ulonglong)uVar6;
            FUN_1415529c0(param_1,uVar3,uVar4,uVar6,uVar8);
          }
        }
        else {
          if (param_2 == '\0') {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            iVar5 = *(int *)(lVar11 + 0x10);
            uVar4 = *(undefined4 *)(lVar11 + 0x14);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(lVar11 + 0x1c);
            FUN_141552a60(param_1,uVar3,7,(longlong)_DstSize_00,uVar4,iVar5 < 7,uVar8);
          }
          *(undefined4 *)(lVar11 + 0x10) = 7;
          plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))(*(longlong **)(param_1 + 0x40),uVar4);
        }
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
        uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
      }
      else if (local_res18 < *(uint *)(param_1 + 0x48)) {
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
        lVar9 = (**(code **)(*plVar7 + 0x58))(plVar7);
        if (lVar9 < 200000000) {
          if (lVar9 < 100000000) {
            uVar6 = (uint)(29999999 < lVar9);
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 5;
        }
        if (*(uint *)(lVar11 + 0x10) == uVar6) {
          if ((bVar14) && (param_2 == '\0')) {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            uVar6 = *(uint *)(lVar11 + 0x14);
            uVar4 = *(undefined4 *)(lVar11 + 0x10);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(ulonglong)uVar6;
            FUN_1415529c0(param_1,uVar3,uVar4,uVar6,uVar8);
          }
        }
        else {
          if (param_2 == '\0') {
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            iVar5 = *(int *)(lVar11 + 0x10);
            uVar4 = *(undefined4 *)(lVar11 + 0x14);
            plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
            uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
            _DstSize_00 = (code *)(lVar11 + 0x1c);
            FUN_141552a60(param_1,uVar3,uVar6,(longlong)_DstSize_00,uVar4,iVar5 < (int)uVar6,uVar8);
          }
          *(uint *)(lVar11 + 0x10) = uVar6;
          plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),3);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))(*(longlong **)(param_1 + 0x40),uVar4);
        }
        plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar11 + 8) + 0x10))(*(longlong **)(lVar11 + 8),2);
        uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
      }
      else {
        local_70 = param_3;
        if (local_res18 == *(uint *)(param_1 + 0x48)) {
          while( true ) {
            lVar11 = 0;
            if (plVar12 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              lVar11 = *plVar12;
            }
            if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            plVar7 = _Dst + 1;
            plVar10 = *(longlong **)(param_1 + 0x28);
            if (plVar10 < *(longlong **)(param_1 + 0x20)) {
              _invalid_parameter_noinfo();
            }
            if ((plVar12 == (longlong *)0x0) || (plVar12 != *(longlong **)(param_1 + 8))) {
              _invalid_parameter_noinfo();
            }
            if (plVar7 == plVar10) break;
            if (plVar12 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar12;
            }
            if (*(longlong **)(lVar11 + 0x20) <= plVar7) {
              _invalid_parameter_noinfo();
            }
            puVar1 = (undefined8 *)*plVar7;
            if (puVar1 != (undefined8 *)0x0) {
              plVar10 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
              iVar5 = (**(code **)(*plVar10 + 0x40))(plVar10);
              if (iVar5 == local_70) {
                local_70 = 0;
              }
              if (param_2 == '\0') {
                plVar10 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],2);
                uVar8 = (**(code **)(*plVar10 + 0x58))(plVar10);
                plVar10 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],2);
                lVar11 = (**(code **)(*plVar10 + 0x58))(plVar10);
                if (lVar11 < 200000000) {
                  if (lVar11 < 100000000) {
                    uVar6 = (uint)(29999999 < lVar11);
                  }
                  else {
                    uVar6 = 3;
                  }
                }
                else {
                  uVar6 = 5;
                }
                plVar10 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
                uVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
                _DstSize_00 = (code *)((longlong)puVar1 + 0x1c);
                FUN_141552a60(param_1,uVar4,uVar6,(longlong)_DstSize_00,0xffffffff,'\0',uVar8);
              }
              plVar10 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
              uVar6 = (**(code **)(*plVar10 + 0x40))(plVar10);
              lVar11 = **(longlong **)(param_1 + 0x40);
              uVar13 = (ulonglong)uVar6;
              (**(code **)(lVar11 + 0x68))();
              FUN_141552110((longlong)puVar1,uVar13,lVar11,_DstSize_00);
              (**(code **)*puVar1)(puVar1,1);
            }
            lVar11 = *(longlong *)(param_1 + 0x28) - (longlong)(_Dst + 2) >> 3;
            if (0 < lVar11) {
              _DstSize_00 = (code *)(lVar11 << 3);
              memmove_s(plVar7,(rsize_t)_DstSize_00,_Dst + 2,(rsize_t)_DstSize_00);
            }
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
            if ((plVar7 < *(longlong **)(param_1 + 0x20)) || (*(longlong **)(param_1 + 0x28) < plVar7)) {
              _invalid_parameter_noinfo();
            }
          }
          if (plVar12 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar12;
          }
          if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          puVar1 = (undefined8 *)*_Dst;
          if (puVar1 != (undefined8 *)0x0) {
            plVar12 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
            (**(code **)(*plVar12 + 0x40))(plVar12);
            if (param_2 == '\0') {
              plVar12 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],2);
              uVar8 = (**(code **)(*plVar12 + 0x58))(plVar12);
              plVar12 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],2);
              lVar11 = (**(code **)(*plVar12 + 0x58))(plVar12);
              if (lVar11 < 200000000) {
                if (lVar11 < 100000000) {
                  local_res20 = (uint)(29999999 < lVar11);
                }
                else {
                  local_res20 = 3;
                }
              }
              plVar12 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
              uVar4 = (**(code **)(*plVar12 + 0x40))(plVar12);
              _DstSize_00 = (code *)((longlong)puVar1 + 0x1c);
              FUN_141552a60(param_1,uVar4,local_res20,(longlong)_DstSize_00,0xffffffff,'\0',uVar8);
            }
            plVar12 = (longlong *)(**(code **)(*(longlong *)puVar1[1] + 0x10))((longlong *)puVar1[1],3);
            uVar6 = (**(code **)(*plVar12 + 0x40))(plVar12);
            lVar11 = **(longlong **)(param_1 + 0x40);
            uVar13 = (ulonglong)uVar6;
            (**(code **)(lVar11 + 0x68))();
            FUN_141552110((longlong)puVar1,uVar13,lVar11,_DstSize_00);
            (**(code **)*puVar1)(puVar1,1);
          }
          lVar11 = *(longlong *)(param_1 + 0x28) - (longlong)(_Dst + 1) >> 3;
          if (0 < lVar11) {
            _DstSize = lVar11 << 3;
            memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
          }
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
          if ((_Dst < *(longlong **)(param_1 + 0x20)) || (*(longlong **)(param_1 + 0x28) < _Dst)) {
            _invalid_parameter_noinfo();
          }
          return;
        }
      }
    }
    if (plVar12 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar12;
    }
    if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
    local_res18 = local_res18 + 1;
  }
  return;
}




ulonglong FUN_1415569f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong extraout_RAX;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong extraout_RAX_00;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong extraout_RAX_01;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined8 *local_res20;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_14155a358);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 0x40) = param_2;
    plVar2 = (longlong *)InstanceGet();
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,PTR_s_SELECT_rank_num_FROM_dyna_rank_t_14155f140,1);
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_14155a358);
      uVar5 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
      if (lVar4 == 0) {
        uVar5 = (**(code **)*plVar3)(plVar3);
        uVar5 = uVar5 & 0xffffffffffffff00;
      }
      else {
        (**(code **)(*plVar3 + 0x30))(plVar3,0);
        plVar6 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3);
        if (plVar6 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_14155a358);
          uVar5 = (**(code **)*plVar3)(plVar3);
          uVar5 = uVar5 & 0xffffffffffffff00;
        }
        else {
          plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,0);
          uVar1 = (**(code **)(*plVar7 + 0x40))(plVar7);
          *(undefined4 *)(param_1 + 0x48) = uVar1;
          (**(code **)*plVar3)(plVar3);
          (**(code **)*plVar6)(plVar6,1);
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,PTR_s_SELECT_dyna_rank_rec____cq_user__14155f138);
          if (plVar2 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_14155a358);
            uVar5 = extraout_RAX_01 & 0xffffffffffffff00;
          }
          else {
            uVar12 = 0;
            while( true ) {
              uVar5 = (**(code **)(*plVar2 + 0x40))(plVar2);
              if (uVar5 <= uVar12) break;
              (**(code **)(*plVar2 + 0x30))(plVar2,(ulonglong)uVar12);
              plVar3 = (longlong *)(**(code **)(*plVar2 + 0x38))(plVar2);
              uVar13 = plVar3 == (longlong *)0x0;
              if ((bool)uVar13) {
                log_InlineLogERROR(&DAT_14155a358);
              }
              else {
                plVar6 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
                pcVar8 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
                lVar4 = 1;
                pcVar11 = "";
                do {
                  if (lVar4 == 0) break;
                  lVar4 = lVar4 + -1;
                  uVar13 = *pcVar8 == *pcVar11;
                  pcVar8 = pcVar8 + 1;
                  pcVar11 = pcVar11 + 1;
                } while ((bool)uVar13);
                if ((bool)uVar13) {
                  (**(code **)(*plVar3 + 0x40))(plVar3,0);
                  (**(code **)*plVar3)(plVar3,1);
                }
                else {
                  plVar6 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
                  puVar9 = (undefined8 *)(**(code **)(*plVar6 + 0x78))(plVar6);
                  puVar9 = FUN_141552340((longlong)plVar3,puVar9);
                  local_res20 = puVar9;
                  if (puVar9 == (undefined8 *)0x0) {
                    log_InlineLogERROR(&DAT_14155a358);
                    (**(code **)*plVar3)(plVar3,1);
                  }
                  else {
                    plVar3 = (longlong *)(**(code **)(*(longlong *)puVar9[1] + 0x10))((longlong *)puVar9[1],3);
                    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
                    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x80))(*(longlong **)(param_1 + 0x40),uVar1);
                    FUN_141552170((longlong)puVar9,uVar1);
                    FUN_141555cb0((longlong *)(param_1 + 8),&local_res20);
                  }
                }
              }
              uVar12 = uVar12 + 1;
            }
            (**(code **)*plVar2)(plVar2);
            uVar10 = FUN_141555f80(param_1,'\x01',0);
            uVar5 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          }
        }
      }
    }
  }
  return uVar5;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_141556db0(longlong param_1,uint param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  CMsg local_448 [1072];
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))();
  lVar3 = param_3 + lVar3;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))(*(longlong **)(param_1 + 0x40),param_2,lVar3);
  if (lVar3 <= *(longlong *)(param_1 + 0x38)) {
    if ((ulonglong)*(uint *)(param_1 + 0x48) <= (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) {
      lVar4 = lVar3 - param_3;
      uVar10 = 5;
      if (lVar4 < 200000000) {
        if (lVar4 < 100000000) {
          uVar8 = (uint)(29999999 < lVar4);
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        uVar8 = 5;
      }
      if (lVar3 < 200000000) {
        if (lVar3 < 100000000) {
          uVar10 = (uint)(29999999 < lVar3);
        }
        else {
          uVar10 = 3;
        }
      }
      if (uVar8 != uVar10) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40),param_2);
        FUN_141552a60(param_1,param_2,uVar10,lVar4,0xffffffff,'\x01',lVar3);
      }
      FUN_141557290(local_448);
      cVar2 = FUN_141557350((longlong *)local_448,param_2,uVar10,param_3,lVar3,0xffffffff);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2,local_448);
      }
      FUN_141557310((undefined8 *)local_448);
      goto LAB_141557050;
    }
  }
  puVar5 = (undefined8 *)FUN_1415548b0(param_1,param_2);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = FUN_141555dc0(param_1,param_2);
    if (puVar5 != (undefined8 *)0x0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)puVar5[1] + 0x10))((longlong *)puVar5[1],2);
      (**(code **)(*plVar6 + 0xa0))(plVar6,lVar3);
      (**(code **)(*(longlong *)puVar5[1] + 0x38))((longlong *)puVar5[1],0);
      goto LAB_141556f4a;
    }
  }
  else {
LAB_141556f4a:
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40),param_2);
    pcVar9 = (char *)((longlong)puVar5 + 0x1c);
    lVar4 = lVar4 - (longlong)pcVar9;
    do {
      cVar2 = *pcVar9;
      cVar1 = pcVar9[lVar4];
      if (cVar2 != cVar1) break;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (cVar2 != cVar1) {
      puVar7 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))(*(longlong **)(param_1 + 0x40),param_2);
      FUN_1415520c0((longlong)puVar5,puVar7);
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)puVar5[1] + 0x10))((longlong *)puVar5[1],2);
    (**(code **)(*plVar6 + 0xa0))(plVar6);
    (**(code **)(*(longlong *)puVar5[1] + 0x38))();
    FUN_141555f80(param_1,'\0',param_2);
  }
  lVar4 = FUN_1415548b0(param_1,param_2);
  if (lVar4 == 0) {
    log_InlineLogERROR(&DAT_14155a358,"IF_OK","pSort","f:\\version\\cqserver-78.0.11-1204\\modules\\peerage\\src\\peeragesortmgr.cpp");
  }
  else {
    FUN_141557290(local_448);
    cVar2 = FUN_141557350((longlong *)local_448,param_2,*(undefined4 *)(lVar4 + 0x10),param_3,lVar3,*(undefined4 *)(lVar4 + 0x14));
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2,local_448);
    }
    FUN_141557310((undefined8 *)local_448);
  }
LAB_141557050:
  tq::MyLogSave("gmlog/peerage_donate","player:%u, donate money:%I64d, donate money type %d",param_2,param_3);
  return;
}




CMsg * FUN_141557090(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1415570c0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1415570d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001415570d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1415570e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001415570e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1415570f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001415570f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_141557100(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141557130(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = peerage::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141557180(undefined8 *param_1)

{
  *param_1 = peerage::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1415571b0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_1415571e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
  }
  else {
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  return;
}




undefined8 * FUN_141557240(undefined8 *param_1,byte param_2)

{
  *param_1 = peerage::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141557290(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = peerage::CMsgPeerage::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x80),0x359,true);
  return param_1;
}




void FUN_141557310(undefined8 *param_1)

{
  *param_1 = peerage::CMsgPeerage::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141557350(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  char local_238;
  undefined1 local_237 [511];
  ulonglong local_38;
  
  local_38 = DAT_14155f2c0 ^ (ulonglong)auStack_278;
  *(undefined2 *)(param_1[0x81] + 4) = 1;
  *(undefined4 *)(param_1[0x81] + 8) = param_2;
  *(undefined2 *)(param_1[0x81] + 2) = 0x810;
  *(undefined2 *)param_1[0x81] = 0xa8;
  local_238 = '\0';
  memset(local_237,0,0x1ff);
  local_240 = param_6;
  local_248 = param_5;
  local_258 = param_3;
  local_250 = param_4;
  _snprintf(&local_238,0x1ff,"%u %u %I64u %I64u %d");
  (**(code **)(*param_1 + 0x48))(param_1,&local_238);
  return;
}




undefined8 FUN_141557440(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x810;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0xa8;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415574a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5)

{
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_248;
  char local_238;
  undefined1 local_237 [511];
  ulonglong local_38;
  
  local_38 = DAT_14155f2c0 ^ (ulonglong)auStack_278;
  *(undefined2 *)(param_1[0x81] + 4) = 3;
  *(undefined4 *)(param_1[0x81] + 8) = param_2;
  *(undefined2 *)(param_1[0x81] + 2) = 0x810;
  *(undefined2 *)param_1[0x81] = 0xa8;
  local_238 = '\0';
  memset(local_237,0,0x1ff);
  local_258 = param_5;
  local_250 = param_3;
  local_248 = param_4;
  _snprintf(&local_238,0x1ff,"%u %I64u %u %d");
  (**(code **)(*param_1 + 0x48))(param_1,&local_238);
  return;
}




undefined8 FUN_141557580(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 4;
  memcpy((void *)(*(longlong *)(param_1 + 0x408) + 8),param_3,0x60);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x810;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0xa8;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




bool FUN_1415575e0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x810;
}




uint FUN_141557610(longlong param_1,char *param_2)

{
  short sVar1;
  uint extraout_EAX;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    log_InlineLogERROR(&DAT_14155a358,"IF_NOT","pszMsg","f:\\version\\cqserver-78.0.11-1204\\modules\\peerage\\src\\msg\\msgpeerage.cpp",0x60);
    return extraout_EAX & 0xffffff00;
  }
  tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0xa7;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),sVar1) >> 8),1);
}




void FUN_141557690(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_14155a358);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  sVar1 = *(short *)(lVar2 + 4);
  if (sVar1 == 1) {
    (**(code **)(*param_3 + 0x10))(param_3,param_2,*(undefined8 *)(lVar2 + 8),*(undefined2 *)(lVar2 + 0x68));
  }
  else {
    if (sVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000141557716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x18))(param_3,param_2,*(undefined2 *)(lVar2 + 8));
      return;
    }
    if (sVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000141557703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3);
      return;
    }
    if (sVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0001415576f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x38))(param_3);
      return;
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141557740(longlong param_1,undefined4 param_2,undefined1 param_3,uint param_4,char *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14155f2c0 ^ (ulonglong)auStack_68;
  **(short **)(param_1 + 0x408) = (*(short **)(param_1 + 0x408))[6] * 0x30 + 0xa8;
  local_48 = (ulonglong)CONCAT14(param_3,param_2);
  local_40 = (ulonglong)param_4;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_5 != (char *)0x0) {
    strncpy((char *)((longlong)&local_40 + 4),param_5,0x10);
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  local_20 = CONCAT44(param_8,param_7);
  lVar3 = (longlong)*(int *)(lVar2 + 0xc);
  *(ulonglong *)(lVar2 + 0x78 + lVar3 * 0x30) = local_48;
  *(ulonglong *)(lVar2 + 0x80 + lVar3 * 0x30) = local_40;
  *(undefined8 *)(lVar2 + 0x88 + lVar3 * 0x30) = local_38;
  *(undefined8 *)(lVar2 + 0x90 + lVar3 * 0x30) = local_30;
  *(undefined8 *)(lVar2 + 0x98 + lVar3 * 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0xa0 + lVar3 * 0x30) = local_20;
  lVar2 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar2 + 0xc);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




undefined8 * FUN_141557880(undefined8 *param_1,uint param_2)

{
  *param_1 = peerage::CMsgPeerage::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
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




/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_14155f890);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_14155f890);
    local_res18[0] = _decode_pointer(DAT_14155f888);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_14155f890 = _encode_pointer(local_res10);
    DAT_14155f888 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_141557ad8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_14155f2c0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
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




bool FUN_141557c54(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_14155f888 = _encode_pointer(puVar1);
  DAT_14155f890 = DAT_14155f888;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1415582cc();
    atexit(FUN_141558304);
    atexit((_func_5014 *)&LAB_1415582c0);
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
    if (DAT_14155f2ec < 1) {
      return 0;
    }
    DAT_14155f2ec = DAT_14155f2ec + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14155f878 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14155f878;
        pvVar3 = DAT_14155f878;
      }
      DAT_14155f878 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141557d2e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141557d2e:
    if (DAT_14155f870 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_14155f890);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_14155f888);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_14155f890);
            plVar12 = (longlong *)_decode_pointer(DAT_14155f888);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_14155f888 = _encoded_null();
        DAT_14155f890 = DAT_14155f888;
      }
      DAT_14155f870 = 0;
      if (!bVar2) {
        LOCK();
        DAT_14155f878 = (void *)0x0;
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
      bVar13 = DAT_14155f878 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14155f878;
        pvVar3 = DAT_14155f878;
      }
      DAT_14155f878 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141557e57;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141557e57:
    if (DAT_14155f870 == 0) {
      DAT_14155f870 = 1;
      iVar4 = _initterm_e(&DAT_14155a258,&DAT_14155a268);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_14155a248,&DAT_14155a250);
      DAT_14155f870 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_14155f878 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_14155f880 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14155f880), BVar5 != 0)) {
      (*DAT_14155f880)(param_1,2,param_3);
    }
    DAT_14155f2ec = DAT_14155f2ec + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000141557fd0) */
/* WARNING: Removing unreachable block (ram,0x000141557f67) */
/* WARNING: Removing unreachable block (ram,0x00014155800b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14155f2ec == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_14155f2d0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_14155f2d0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141551320();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141551320();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_14155f2d0 = 0xffffffff;
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




undefined8 FUN_141558088(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_14155f390);
  local_30 = DAT_14155f488;
  local_38 = RtlLookupFunctionEntry(DAT_14155f488,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_14155f428 = local_res8;
    DAT_14155f488 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_14155f390,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_14155f300 = DAT_14155f488;
  _DAT_14155f410 = local_res8[0];
  _DAT_14155f2f0 = 0xc0000409;
  _DAT_14155f2f4 = 1;
  local_20 = DAT_14155f2c0;
  local_18 = DAT_14155f2c8;
  DAT_14155f388 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_14155b698);
  if (DAT_14155f388 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_1415582cc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14155bdc0; puVar1 < &DAT_14155bdc0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_141558304(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14155bdd0; puVar1 < &DAT_14155bdd0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141550000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141550000);
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
  if (DAT_14155f2c0 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_14155f2c0 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_14155f2c0 == 0x2b992ddfa232) {
      DAT_14155f2c0 = 0x2b992ddfa233;
    }
  }
  DAT_14155f2c8 = ~DAT_14155f2c0;
  return;
}




void Unwind_141558560(undefined8 param_1,longlong param_2)

{
  FUN_141551050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558580(undefined8 param_1,longlong param_2)

{
  FUN_141557180((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415585a0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_1415585c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_141551117;
}




void Unwind_141558600(undefined8 param_1,longlong param_2)

{
  FUN_141551050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558620(undefined8 param_1,longlong param_2)

{
  FUN_141557180((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_141558640(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_141558660(void)

{
  log_InlineLogCATCH_ERROR("Peerage::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_14155140f;
}




void Unwind_1415586b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1415586d0(undefined8 param_1,longlong param_2)

{
  FUN_141551050(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1415586f0(undefined8 param_1,longlong param_2)

{
  FUN_141557180((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x20));
  return;
}




void Unwind_141558710(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x430));
  return;
}




undefined8 Catch_141558730(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1415514ed;
}




undefined * Catch_141558770(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_141551684;
}




void Unwind_1415587b0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1415587d0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1415587f0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141558810(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_141558830(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




undefined * Catch_141558850(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14155207c;
}




undefined * Catch_141558890(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141552153;
}




void Unwind_1415588d0(void)

{
  DAT_14155f2e8 = DAT_14155f2e8 & 0xfffffffe;
  return;
}




void Unwind_1415588f0(void)

{
  DAT_14155f2e8 = DAT_14155f2e8 & 0xfffffffe;
  return;
}




void Unwind_141558910(void)

{
  DAT_14155f2e8 = DAT_14155f2e8 & 0xfffffffe;
  return;
}




void Unwind_141558930(void)

{
  DAT_14155f2e8 = DAT_14155f2e8 & 0xfffffffe;
  return;
}




void Unwind_141558950(undefined8 param_1,longlong param_2)

{
  FUN_141552250(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141558970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415589b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415589d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415589f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558a10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558a50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558a70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558a90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558ab0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558ad0(undefined8 param_1,longlong param_2)

{
  FUN_141552590(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558af0(undefined8 param_1,longlong param_2)

{
  FUN_141552590(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558b10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558b30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558b50(undefined8 param_1,longlong param_2)

{
  FUN_141552590(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558b70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558b90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558bb0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141558bd0(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141558bf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141558c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141558c30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141558c50(undefined8 param_1,longlong param_2)

{
  FUN_141552590((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141558c70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558c90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558cb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141558cf0(undefined8 param_1,longlong param_2)

{
  FUN_141552590(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558d10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141558d30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141558d50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141558d70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141558d90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141558db0(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558dd0(void)

{
  FUN_141552530();
  return;
}




void Unwind_141558df0(undefined8 param_1,longlong param_2)

{
  FUN_141553c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558e10(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558e30(void)

{
  FUN_141552530();
  return;
}




void Unwind_141558e50(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558e70(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141558e90(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141558eb0(void)

{
  FUN_141552530();
  return;
}




void Unwind_141558ed0(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558ef0(undefined8 param_1,longlong param_2)

{
  FUN_141553c80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141558f10(void)

{
  FUN_141552530();
  return;
}




void Unwind_141558f30(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141558f50(undefined8 param_1,longlong param_2)

{
  FUN_141553c80(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141558f70(undefined8 param_1,longlong param_2)

{
  FUN_1415542a0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Catch_141558f90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141558fc0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141558fe0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_141559000(undefined8 param_1,longlong param_2)

{
  FUN_1415542a0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




undefined * Catch_141559020(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1415557f8;
}




void Unwind_141559060(undefined8 param_1,longlong param_2)

{
  FUN_141553c80(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_141559080(undefined8 param_1,longlong param_2)

{
  FUN_141553800(*(undefined8 **)(param_2 + 0x60));
  return;
}




undefined * Catch_1415590a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_141555997;
}




undefined * Catch_1415590e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14155679d;
}




undefined * Catch_141559120(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14155694a;
}




undefined8 Catch_141559160(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141556abf;
}




undefined8 Catch_1415591a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141556b1e;
}




undefined * Catch_1415591e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141556b48;
}




undefined * Catch_141559220(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141556b6d;
}




undefined * Catch_141559260(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141556c8a;
}




undefined * Catch_1415592a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141556d11;
}




undefined * Catch_1415592e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141556d89;
}




void Unwind_141559320(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141559340(undefined8 param_1,longlong param_2)

{
  FUN_141557310((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141559360(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141559380(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1415593a0(void)

{
  log_InlineLogCATCH_ERROR("Godbless::CMsgLogin::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x141557231;
}




void Unwind_1415593f0(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141559410(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141559430(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_141559450(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141559470(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_141559490(undefined8 param_1,longlong param_2)

{
  FUN_1415570c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415594b0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void FUN_1415594d0(void)

{
  _unlock(8);
  return;
}




void FUN_1415594e9(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141559519(void)

{
  _DAT_14155f2d0 = 0xffffffff;
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




bool FUN_1415595a0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=305 failed=0 total=393 */
