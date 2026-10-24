/* Decompiled by Ghidra 12.1.4 | program: VexillumArenic.dll
   image base: 1419f0000 | functions: 1549 */


void FUN_1419f1000(void)

{
  log_InlineLogERROR(&DAT_141a18388);
  return;
}




void FUN_1419f1050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1419f1060(void)

{
  return 0;
}




undefined8 FUN_1419f1070(void)

{
  return 0;
}




undefined8 FUN_1419f1080(void)

{
  return 0;
}




undefined8 FUN_1419f1090(void)

{
  return 0;
}




undefined8 * FUN_1419f10a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1419f10e0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_1419f1100(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(*(longlong **)(param_1 + 0x20),0x1c);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1419f2040(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_1419f11d0(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x427) {
      plVar2 = (longlong *)(param_1 + 0x438);
    }
    else {
      if (param_2[1] != 0x8b0) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x28);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




void FUN_1419f1240(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419f124e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer VexillumArenic module doesn\'t have provider");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x10))();
  return;
}




bool FUN_1419f1260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_1419f1fc0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),0x8b0,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),0x427,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),0x1c,*(undefined8 *)(param_1 + 0x10));
  return cVar1 != '\0';
}




undefined8 FUN_1419f12e0(void)

{
  return 1;
}




void FUN_1419f12f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419f1320(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1419f1350(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = vexillumarenic::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = param_2;
  FUN_141a101d0((CMsg *)(param_1 + 5));
  FUN_141a0fd10((CMsg *)(param_1 + 0x87));
  return param_1;
}




void FUN_1419f13b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = vexillumarenic::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_141a0fd60(param_1 + 0x87);
  FUN_141a10220(param_1 + 5);
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_1419f1420(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1419f11d0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x10));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x1490  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x848);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)vexillumarenic::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = uVar3;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar2[4] = param_1;
    FUN_141a101d0((CMsg *)(plVar2 + 5));
    FUN_141a0fd10((CMsg *)(plVar2 + 0x87));
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1419f1260((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_1419f1540(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1419f13b0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419f1580(longlong param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a0ab30(*(longlong **)(param_1 + 0x10),param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_141a0f4c0(*(longlong *)(param_1 + 0x18));
  }
  return;
}




void FUN_1419f15e0(longlong param_1,int param_2,uint param_3,ulonglong param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
  }
  else {
    FUN_141a09b80(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_141a0ea20(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4 & 0xffffffff);
    }
  }
  return;
}




bool FUN_1419f1670(longlong param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      bVar1 = FUN_1419fcb20(*(longlong *)(param_1 + 0x10));
      return bVar1;
    }
    log_InlineLogERROR(&DAT_141a18388);
  }
  else if ((param_2 == 1) && (*(longlong *)(param_1 + 0x18) != 0)) {
    bVar1 = FUN_141a0b4b0(*(longlong *)(param_1 + 0x18));
    return bVar1;
  }
  return false;
}




void FUN_1419f16e0(longlong param_1,uint param_2,uint *param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a09980(*(longlong *)(param_1 + 0x10),param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_141a0e840(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
  }
  return;
}




undefined1 * FUN_1419f1750(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *extraout_RAX;
  undefined1 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    puVar1 = extraout_RAX;
LAB_1419f1792:
    return (undefined1 *)((ulonglong)puVar1 & 0xffffffffffffff00);
  }
  puVar1 = FUN_141a091b0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((char)puVar1 == '\0') {
      puVar1 = FUN_141a0e170(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
      if ((char)puVar1 == '\0') goto LAB_1419f1792;
    }
    puVar1 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return puVar1;
}




void FUN_1419f17d0(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a09dc0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_141a0ec60(*(longlong *)(param_1 + 0x18),param_2,param_3);
  }
  return;
}




bool FUN_1419f1860(longlong param_1,int param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    bVar1 = FUN_141a0b540(*(longlong *)(param_1 + 0x18),param_2);
    return bVar1;
  }
  return false;
}




void FUN_1419f1880(longlong param_1,uint param_2,int param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
  }
  else {
    FUN_1419fcb30(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_141a0b4c0(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
    }
  }
  return;
}




ulonglong FUN_1419f1910(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    uVar1 = extraout_RAX;
LAB_1419f1952:
    return uVar1 & 0xffffffffffffff00;
  }
  uVar1 = FUN_141a0a150(*(longlong *)(param_1 + 0x10),param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_141a0eff0(*(longlong *)(param_1 + 0x18),param_2);
      if ((char)uVar1 == '\0') goto LAB_1419f1952;
    }
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1;
}




void FUN_1419f1990(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a06f20(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_1419f19e0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a0a660(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_1419f1a30(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a0a760(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_1419f1a80(longlong param_1,uint param_2,longlong *param_3)

{
  if (*(ulonglong **)(param_1 + 0x10) == (ulonglong *)0x0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a0a7d0(*(ulonglong **)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_1419f1ad0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a09cd0(*(longlong *)(param_1 + 0x10),param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_141a0eb70(*(longlong *)(param_1 + 0x18),param_2);
  }
  return;
}




int FUN_1419f1b40(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return -1;
  }
  uVar3 = param_2;
  puVar4 = param_3;
  bVar1 = FUN_1419fcb20(*(longlong *)(param_1 + 0x10));
  if (bVar1) {
    *param_3 = 1;
    iVar2 = FUN_141a06c60(*(longlong *)(param_1 + 0x10),(uint)param_2);
    return iVar2;
  }
  uVar3 = FUN_1419fccd0(*(longlong *)(param_1 + 0x10),uVar3,puVar4,param_4);
  if ((char)uVar3 == '\0') {
    *param_3 = 2;
  }
  iVar2 = FUN_141a06c60(*(longlong *)(param_1 + 0x10),(uint)param_2);
  return iVar2;
}




void FUN_1419f1bd0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1419fcd10(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  return;
}




void FUN_1419f1bf0(longlong param_1,int param_2,char param_3)

{
  if (param_2 != 0) {
    if (param_2 == 1) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        log_InlineLogERROR(&DAT_141a18388);
        return;
      }
      FUN_141a0b610(*(longlong *)(param_1 + 0x18),param_3);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_1419fcd70(*(longlong *)(param_1 + 0x10),param_3);
  return;
}




void FUN_1419f1c90(longlong param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    if (param_2 == 1) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        log_InlineLogERROR(&DAT_141a18388);
        return;
      }
      FUN_141a0e710(*(longlong *)(param_1 + 0x18),param_3);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a09850(*(longlong *)(param_1 + 0x10),param_3);
  return;
}




void FUN_1419f1d30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_1419ffa90(*(longlong *)(param_1 + 0x10));
  return;
}




ulonglong FUN_1419f1d80(longlong param_1)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    uVar1 = extraout_RAX;
  }
  else {
    uVar1 = FUN_141a072f0(*(longlong *)(param_1 + 0x10));
    if ((char)uVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        uVar1 = FUN_141a0d200(*(longlong *)(param_1 + 0x18));
        if ((char)uVar1 == '\0') goto LAB_1419f1dbc;
      }
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
LAB_1419f1dbc:
  return uVar1 & 0xffffffffffffff00;
}




undefined8 FUN_1419f1df0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_1419f1e00(longlong param_1,uint param_2,int param_3,int param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
  }
  else {
    FUN_141a093a0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_141a0e310(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
    }
  }
  return;
}




undefined4 FUN_1419f1e90(longlong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return 0;
  }
  uVar1 = FUN_141a06d60(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




void FUN_1419f1ee0(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  FUN_141a06da0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_1419f1f30(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_1419fca30((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419f1f60(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_141a0b3c0((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419f1f90(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1419f1fc0(undefined8 *param_1)

{
  *param_1 = vexillumarenic::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_1419f1fe0(undefined8 *param_1)

{
  *param_1 = vexillumarenic::CProvider::vftable;
  if (param_1[2] != 0) {
    FUN_1419fca30((undefined8 *)param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    FUN_141a0b3c0((undefined8 *)param_1[3]);
    param_1[3] = 0;
  }
  return;
}




ulonglong FUN_1419f2040(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong extraout_RAX_00;
  undefined8 *puVar3;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    puVar2 = FUN_141a090e0(param_2);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141a18388);
      uVar1 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),0x1f47);
      puVar2 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = FUN_141a0e0a0(param_2);
        *(undefined8 **)(param_1 + 0x18) = puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_141a18388);
          return extraout_RAX_01 & 0xffffffffffffff00;
        }
      }
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)(**(code **)*puVar3)(puVar3);
      }
      uVar1 = CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
  }
  return uVar1;
}




undefined8 * FUN_1419f2160(undefined8 *param_1,uint param_2)

{
  FUN_1419f1fe0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_1419f2220(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1419f2260(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001419f2280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419f2290(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419f22f0(void)

{
  return;
}




exception * FUN_1419f2300(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1419f2350(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419f2383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1419f2390(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1419f23b0(exception *param_1,uint param_2)

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




exception * FUN_1419f2410(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1419f2470(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419f24ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419f24c0(exception *param_1,uint param_2)

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




exception * FUN_1419f2530(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1419f2590(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419f25cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419f25e0(exception *param_1,uint param_2)

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




void FUN_1419f2680(longlong param_1,longlong param_2,int param_3,undefined *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}




undefined8 FUN_1419f26d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x0001419f26fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  return uVar2;
}




longlong FUN_1419f2700(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  return param_1 + 0x18;
}




void FUN_1419f2710(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (*(char *)(param_1 + 0x28) != '\0')) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  }
  memset((void *)(param_1 + 0x38),0,0x60);
  return;
}




void FUN_1419f2760(longlong param_1)

{
  longlong *plVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x2c);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined4 *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x28) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
    }
  }
  return;
}




void FUN_1419f27b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001419f27be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CSynInfo::DecCurUserCount(). m_nCurUserCount <= 0");
    return;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return;
}




int FUN_1419f27d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 0) {
    log_InlineLogERROR("CSynInfo::GetCurUserCount(). m_nCurUserCount < 0");
    iVar1 = 0;
  }
  return iVar1;
}




int FUN_1419f27f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 0) {
    log_InlineLogERROR("CSynInfo::GetMaxUserCount(). m_nMaxUserCount < 0");
    iVar1 = 0;
  }
  return iVar1;
}




void FUN_1419f2810(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
  if (*(char *)(param_1 + 0x28) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  }
  return;
}




undefined8 FUN_1419f2890(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  if (iVar1 < 0) {
    log_InlineLogERROR("CSynInfo::GetLastMeedMoney(). m_pRec->Field(VEXILLUMDATA_LASTMEEDMONEY) < 0");
    return 0;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
                    /* WARNING: Could not recover jumptable at 0x0001419f28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return uVar3;
}




undefined8 FUN_1419f28f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  if (iVar1 < 0) {
    log_InlineLogERROR("CSynInfo::GetLastMeedEmoney(). m_pRec->Field(VEXILLUMDATA_LASTMEEDEMONEY) < 0");
    return 0;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
                    /* WARNING: Could not recover jumptable at 0x0001419f2944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return uVar3;
}




void FUN_1419f2960(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (0 < param_2) {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
        lVar1 = *plVar4;
        iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
        (**(code **)(lVar1 + 0xb0))(plVar4,param_2 + iVar2);
                    /* WARNING: Could not recover jumptable at 0x0001419f29f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
        return;
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,3);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  return;
}




void FUN_1419f2a40(longlong param_1,uint param_2,int param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                  undefined2 param_9)

{
  longlong lVar1;
  
  if ((param_2 < 3) && (param_3 != 0)) {
    lVar1 = (longlong)(int)param_2 * 0x20;
    if (*(int *)(lVar1 + 0x38 + param_1) == param_3) {
      log_InlineLogERROR("CSynInfo::SetCurOwnerTar. m_idOwnerTar[i] == idTarNpc");
      *(undefined1 *)(param_1 + 0x34) = 1;
      return;
    }
    *(int *)(lVar1 + 0x38 + param_1) = param_3;
    *(undefined2 *)(lVar1 + 0x4c + param_1) = param_4;
    *(uint *)(lVar1 + 0x48 + param_1) = param_2 + 1;
    *(undefined2 *)(lVar1 + 0x4e + param_1) = param_5;
    *(undefined2 *)(lVar1 + 0x50 + param_1) = param_6;
    *(undefined2 *)(lVar1 + 0x52 + param_1) = param_7;
    *(undefined2 *)(lVar1 + 0x54 + param_1) = param_8;
    *(undefined2 *)(lVar1 + 0x56 + param_1) = param_9;
    *(undefined1 *)(param_1 + 0x34) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f2ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("CSynInfo::SetCurOwnerTar. nIndex < 0 || nIndex >= 3");
  return;
}




void FUN_1419f2ae0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  if (2 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001419f2b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CSynInfo::ClsCurOwnerTar. nIndex < 0 || nIndex >= 3");
    return;
  }
  lVar1 = (longlong)(int)param_2 * 0x20;
  lVar3 = 0;
  *(undefined8 *)(lVar1 + 0x38 + param_1) = 0;
  *(undefined8 *)(lVar1 + 0x40 + param_1) = 0;
  *(undefined8 *)(lVar1 + 0x48 + param_1) = 0;
  *(undefined8 *)(lVar1 + 0x50 + param_1) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  piVar2 = (int *)(param_1 + 0x38);
  do {
    if (*piVar2 != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      return;
    }
    lVar3 = lVar3 + 1;
    piVar2 = piVar2 + 8;
  } while (lVar3 < 3);
  return;
}




void FUN_1419f2b40(longlong param_1,void *param_2)

{
  memcpy(param_2,(void *)(param_1 + 0x38),0x60);
  return;
}




undefined8 FUN_1419f2b60(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x0001419f2b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
    return uVar2;
  }
  return 0;
}




void FUN_1419f2ca0(longlong param_1,longlong *param_2)

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




bool FUN_1419f2db0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_1419f2e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f2e22;
  }
  lVar2 = *plVar1;
LAB_1419f2e22:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x18;
  return param_1;
}




bool FUN_1419f2e40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419f2ed0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
}




exception * FUN_1419f2f40(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_1419f2f90(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_1419f3010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f3032;
  }
  lVar2 = *plVar1;
LAB_1419f3032:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419f3050(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419f3074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1419f30e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f3102;
  }
  lVar2 = *plVar1;
LAB_1419f3102:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_1419f3120(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}




void FUN_1419f31c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419f31f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1419f3290(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1419f32c0;
  }
  else {
LAB_1419f32c0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0x18;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1419f32f0;
  }
  _invalid_parameter_noinfo();
LAB_1419f32f0:
  param_1[1] = param_1[1] + param_2 * 0x18;
  return param_1;
}




void FUN_1419f3310(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419f3390(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 * 0x18);
  return;
}




void FUN_1419f3410(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419f3480(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 * 0x28);
  return;
}




exception * FUN_1419f3520(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_1419f3550(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f3770(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f3820(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,undefined *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_141a29318 ^ (ulonglong)auStack_68;
  local_48 = *param_4;
  local_40 = param_4[1];
  local_38 = param_4[2];
  while (param_3 < param_2) {
    lVar3 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + lVar3 * 0x18);
    cVar2 = (*(code *)param_5)(puVar1,&local_48);
    if (cVar2 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 0x18) = *puVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0x18) = puVar1[1];
    *(undefined4 *)(param_1 + 8 + param_2 * 0x18) = puVar1[2];
    *(undefined4 *)(param_1 + 0xc + param_2 * 0x18) = puVar1[3];
    *(undefined4 *)(param_1 + 0x10 + param_2 * 0x18) = puVar1[4];
    *(undefined4 *)(param_1 + 0x14 + param_2 * 0x18) = puVar1[5];
    param_2 = lVar3;
  }
  *(undefined4 *)(param_1 + param_2 * 0x18) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 4 + param_2 * 0x18) = local_48._4_4_;
  *(undefined4 *)(param_1 + 8 + param_2 * 0x18) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0xc + param_2 * 0x18) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0x10 + param_2 * 0x18) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x14 + param_2 * 0x18) = local_38._4_4_;
  return;
}




undefined * FUN_1419f3940(void)

{
  if ((DAT_141a29348 & 1) == 0) {
    DAT_141a29348 = DAT_141a29348 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29340,"CSynInfo");
    atexit((_func_5014 *)&LAB_141a17820);
  }
  return &DAT_141a29340;
}




void FUN_1419f39a0(__uint64 param_1)

{
  if ((DAT_141a29348 & 1) == 0) {
    DAT_141a29348 = DAT_141a29348 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29340,"CSynInfo");
    atexit((_func_5014 *)&LAB_141a17820);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f39f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141a29340,param_1);
  return;
}




void FUN_1419f3a00(void *param_1)

{
  if ((DAT_141a29348 & 1) == 0) {
    DAT_141a29348 = DAT_141a29348 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29340,"CSynInfo");
    atexit((_func_5014 *)&LAB_141a17820);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f3a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141a29340,param_1);
  return;
}




void FUN_1419f3a60(void *param_1)

{
  if ((DAT_141a29348 & 1) == 0) {
    DAT_141a29348 = DAT_141a29348 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29340,"CSynInfo");
    atexit((_func_5014 *)&LAB_141a17820);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f3ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141a29340,param_1);
  return;
}




bool FUN_1419f3ac0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_1419f3b00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f3b22;
  }
  lVar2 = *plVar1;
LAB_1419f3b22:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x18;
  return param_1;
}




bool FUN_1419f3b40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419f3b90(longlong param_1,longlong param_2)

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




void FUN_1419f3bf0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f3c10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419f3c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f3c42;
  }
  lVar2 = *plVar1;
LAB_1419f3c42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419f3c60(longlong *param_1)

{
  FUN_1419f3050(param_1);
  return param_1;
}




longlong FUN_1419f3c80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f3ca2;
  }
  lVar2 = *plVar1;
LAB_1419f3ca2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




void FUN_1419f3d20(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x18)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 0x18);
  return;
}




longlong * FUN_1419f3d90(longlong *param_1)

{
  FUN_1419f31c0(param_1);
  return param_1;
}




void FUN_1419f3dd0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1419f3e40(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong * FUN_1419f3eb0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419f3050(param_1);
  return param_2;
}




longlong * FUN_1419f3ee0(longlong *param_1,longlong param_2)

{
  FUN_1419f3290(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1419f3f10(undefined8 *param_1)

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




longlong FUN_1419f3f60(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 6;
      *(undefined4 *)(lVar1 + -0x18 + (longlong)puVar3) = *puVar2;
      *(undefined4 *)(lVar1 + -0x14 + (longlong)puVar3) = puVar2[1];
      *(undefined4 *)(lVar1 + -0x10 + (longlong)puVar3) = puVar2[2];
      *(undefined4 *)(lVar1 + -0xc + (longlong)puVar3) = puVar2[3];
      *(undefined4 *)(lVar1 + -8 + (longlong)puVar3) = puVar2[4];
      *(undefined4 *)(lVar1 + -4 + (longlong)puVar3) = puVar2[5];
      puVar2 = puVar3;
    } while (puVar3 != param_2);
  }
  return param_3 + (((longlong)param_2 - (longlong)param_1) / 0x18) * 0x18;
}




longlong FUN_1419f4040(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - param_2;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + -0x18;
      *(undefined4 *)(lVar1 + lVar3) = *(undefined4 *)(lVar2 + -0x18);
      *(undefined4 *)(lVar1 + 4 + lVar3) = *(undefined4 *)(lVar2 + -0x14);
      *(undefined4 *)(lVar1 + 8 + lVar3) = *(undefined4 *)(lVar2 + -0x10);
      *(undefined4 *)(lVar1 + 0xc + lVar3) = *(undefined4 *)(lVar2 + -0xc);
      *(undefined4 *)(lVar1 + 0x10 + lVar3) = *(undefined4 *)(lVar2 + -8);
      *(undefined4 *)(lVar1 + 0x14 + lVar3) = *(undefined4 *)(lVar2 + -4);
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x18) * -0x18;
}




void FUN_1419f40e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_1419f3770(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    FUN_1419f3770(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    FUN_1419f3770(param_2,param_1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f4160(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,undefined *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_a8 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_141a29318 ^ (ulonglong)auStackY_a8;
  local_78 = *param_4;
  local_70 = param_4[1];
  local_68 = param_4[2];
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    local_58 = local_78;
    local_50 = local_70;
    local_48 = local_68;
    if (param_3 <= lVar3) break;
    lVar4 = param_1 + lVar3 * 0x18;
    cVar2 = (*(code *)param_5)(lVar4,lVar4 + -0x18);
    if (cVar2 != '\0') {
      lVar3 = lVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + lVar1 * 0x18) = *(undefined4 *)(param_1 + lVar3 * 0x18);
    *(undefined4 *)(param_1 + 4 + lVar1 * 0x18) = *(undefined4 *)(param_1 + 4 + lVar3 * 0x18);
    *(undefined4 *)(param_1 + 8 + lVar1 * 0x18) = *(undefined4 *)(param_1 + 8 + lVar3 * 0x18);
    *(undefined4 *)(param_1 + 0xc + lVar1 * 0x18) = *(undefined4 *)(param_1 + 0xc + lVar3 * 0x18);
    *(undefined4 *)(param_1 + 0x10 + lVar1 * 0x18) = *(undefined4 *)(param_1 + 0x10 + lVar3 * 0x18);
    *(undefined4 *)(param_1 + 0x14 + lVar1 * 0x18) = *(undefined4 *)(param_1 + 0x14 + lVar3 * 0x18);
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    lVar1 = lVar3;
  }
  lVar4 = lVar1;
  if (lVar3 == param_3) {
    lVar4 = param_3 + -1;
    *(undefined4 *)(param_1 + lVar1 * 0x18) = *(undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    *(undefined4 *)(param_1 + 4 + lVar1 * 0x18) = *(undefined4 *)(param_1 + -0x14 + param_3 * 0x18);
    *(undefined4 *)(param_1 + 8 + lVar1 * 0x18) = *(undefined4 *)(param_1 + -0x10 + param_3 * 0x18);
    *(undefined4 *)(param_1 + 0xc + lVar1 * 0x18) = *(undefined4 *)(param_1 + -0xc + param_3 * 0x18);
    *(undefined4 *)(param_1 + 0x10 + lVar1 * 0x18) = *(undefined4 *)(param_1 + -8 + param_3 * 0x18);
    *(undefined4 *)(param_1 + 0x14 + lVar1 * 0x18) = *(undefined4 *)(param_1 + -4 + param_3 * 0x18);
  }
  FUN_1419f3820(param_1,lVar4,param_2,&local_78,param_5);
  return;
}




void FUN_1419f42b0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_1419f4040(param_1,param_2,param_3);
  return;
}




undefined4 * FUN_1419f42e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_3 = param_3 + 6;
  }
  return param_3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f4340(undefined4 *param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,undefined *param_5)

{
  undefined1 auStackY_78 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_141a29318 ^ (ulonglong)auStackY_78;
  local_48 = *param_4;
  local_40 = param_4[1];
  local_38 = param_4[2];
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  local_28 = local_48;
  local_20 = local_40;
  local_18 = local_38;
  FUN_1419f4160((longlong)param_1,0,(param_2 - (longlong)param_1) / 0x18,&local_48,param_5);
  return;
}




longlong FUN_1419f4400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f4422;
  }
  lVar2 = *plVar1;
LAB_1419f4422:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419f4440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f4462;
  }
  lVar2 = *plVar1;
LAB_1419f4462:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




void FUN_1419f4480(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f44a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f44c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419f44c0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 FUN_1419f4510(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1419f2ed0();
    }
    lVar1 = FUN_1419f3d20(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 0x18;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_1419f4580(longlong *param_1)

{
  FUN_1419f31c0(param_1);
  return param_1;
}




undefined8 * FUN_1419f45a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419f4620(undefined8 *param_1)

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




undefined8 * FUN_1419f4660(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419f46a0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419f470e;
  }
  _invalid_parameter_noinfo();
LAB_1419f470e:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1419f4740(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1419f47a0(void)

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




undefined8 * FUN_1419f4800(undefined8 *param_1)

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




void FUN_1419f4850(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  FUN_1419f3f60(param_1,param_2,param_3);
  return;
}




void FUN_1419f48f0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
    }
    param_1 = param_1 + 6;
  }
  return;
}




void FUN_1419f4950(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_1419f4040(param_1,param_2,param_3);
  return;
}




void FUN_1419f4970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = ((longlong)param_3 - (longlong)param_1) / 0x18;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_1419f40e0(param_1,param_1 + lVar1 * 6,param_1 + lVar1 * 0xc,param_4);
    FUN_1419f40e0(param_2 + lVar1 * -6,param_2,param_2 + lVar1 * 6,param_4);
    FUN_1419f40e0(param_3 + lVar1 * -0xc,param_3 + lVar1 * -6,param_3,param_4);
    FUN_1419f40e0(param_1 + lVar1 * 6,param_2,param_3 + lVar1 * -6,param_4);
    return;
  }
  FUN_1419f40e0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1419f4a70(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar3 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  lVar1 = lVar3 / 2;
  if (0 < lVar1) {
    lVar2 = param_1 + lVar1 * 0x18;
    do {
      local_28 = *(undefined4 *)(lVar2 + -0x18);
      local_24 = *(undefined4 *)(lVar2 + -0x14);
      local_20 = *(undefined4 *)(lVar2 + -0x10);
      local_1c = *(undefined4 *)(lVar2 + -0xc);
      local_18 = *(undefined4 *)(lVar2 + -8);
      lVar1 = lVar1 + -1;
      local_14 = *(undefined4 *)(lVar2 + -4);
      FUN_1419f4160(param_1,lVar1,lVar3,(undefined8 *)&local_28,param_3);
      lVar2 = lVar2 + -0x18;
    } while (0 < lVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f4b40(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  if (param_1 != param_2) {
    local_30 = DAT_141a29318 ^ (ulonglong)auStack_68;
    puVar5 = param_1;
    puVar3 = param_1;
    while (puVar3 = puVar3 + 6, puVar3 != param_2) {
      local_48 = *puVar3;
      local_44 = puVar3[1];
      local_40 = puVar3[2];
      local_3c = puVar3[3];
      local_38 = puVar3[4];
      local_34 = puVar3[5];
      cVar4 = (*(code *)param_3)(&local_48,param_1);
      puVar1 = puVar3;
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(&local_48,puVar5);
        puVar2 = puVar5;
        while (cVar4 != '\0') {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          puVar1[2] = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[4] = puVar2[4];
          puVar1[5] = puVar2[5];
          cVar4 = (*(code *)param_3)(&local_48,puVar2 + -6);
          puVar1 = puVar2;
          puVar2 = puVar2 + -6;
        }
        *puVar1 = local_48;
        puVar1[1] = local_44;
        puVar1[2] = local_40;
        puVar1[3] = local_3c;
        puVar1[4] = local_38;
        puVar1[5] = local_34;
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -6) {
          *puVar1 = puVar1[-6];
          puVar1[1] = puVar1[-5];
          puVar1[2] = puVar1[-4];
          puVar1[3] = puVar1[-3];
          puVar1[4] = puVar1[-2];
          puVar1[5] = puVar1[-1];
        }
        *param_1 = local_48;
        param_1[1] = local_44;
        param_1[2] = local_40;
        param_1[3] = local_3c;
        param_1[4] = local_38;
        param_1[5] = local_34;
      }
      puVar5 = puVar5 + 6;
    }
  }
  return;
}




void FUN_1419f4cf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_1419f42e0(param_1,param_2,param_3);
  return;
}




void FUN_1419f4d10(undefined4 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = *(undefined8 *)(param_2 + -0x18);
  local_20 = *(undefined8 *)(param_2 + -0x10);
  local_18 = *(undefined8 *)(param_2 + -8);
  *(undefined4 *)(param_2 + -0x18) = *param_1;
  *(undefined4 *)(param_2 + -0x14) = param_1[1];
  *(undefined4 *)(param_2 + -0x10) = param_1[2];
  *(undefined4 *)(param_2 + -0xc) = param_1[3];
  *(undefined4 *)(param_2 + -8) = param_1[4];
  *(undefined4 *)(param_2 + -4) = param_1[5];
  FUN_1419f4160((longlong)param_1,0,((param_2 - (longlong)param_1) + -0x18) / 0x18,&local_28,param_3);
  return;
}




void FUN_1419f4dc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419f44c0(param_1,(longlong *)plVar2[2]);
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




void FUN_1419f4e40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419f4e60(undefined8 *param_1)

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




undefined8 * FUN_1419f4eb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419f4ef0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1419f4f50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419f47a0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419f4f90(undefined8 *param_1)

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




void FUN_1419f4ff0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  FUN_1419f48f0(param_1,param_2,param_3);
  return;
}




void FUN_1419f5010(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_1419f4040(param_1,param_2,param_3);
  return;
}




void FUN_1419f5040(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x30) * 6;
  FUN_1419f4970(param_2,puVar6,param_3 + -6,param_4);
  puVar1 = puVar6;
  while (puVar4 = puVar1, param_2 < puVar4) {
    puVar1 = puVar4 + -6;
    cVar2 = (*(code *)param_4)(puVar1,puVar4);
    if ((cVar2 != '\0') || (cVar2 = (*(code *)param_4)(puVar4,puVar1), cVar2 != '\0')) break;
  }
  do {
    puVar6 = puVar6 + 6;
    puVar1 = puVar6;
    puVar3 = puVar4;
    if (param_3 <= puVar6) break;
    cVar2 = (*(code *)param_4)(puVar6,puVar4);
    if ((cVar2 != '\0') || (cVar2 = (*(code *)param_4)(puVar4,puVar6), cVar2 != '\0')) break;
  } while( true );
joined_r0x0001419f5113:
  puVar7 = puVar4;
  if (param_3 <= puVar1) {
joined_r0x0001419f514a:
    for (; param_2 < puVar4; puVar4 = puVar4 + -6) {
      puVar7 = puVar7 + -6;
      cVar2 = (*(code *)param_4)(puVar7,puVar3);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)param_4)(puVar3,puVar7);
        if (cVar2 != '\0') break;
        puVar3 = puVar3 + -6;
        FUN_1419f3770(puVar3,puVar7);
      }
    }
    if (puVar4 == param_2) {
      if (puVar1 == param_3) {
        *param_1 = puVar3;
        param_1[1] = puVar6;
        return;
      }
      if (puVar6 != puVar1) {
        FUN_1419f3770(puVar3,puVar6);
      }
      puVar6 = puVar6 + 6;
      FUN_1419f3770(puVar3,puVar1);
      puVar1 = puVar1 + 6;
      puVar3 = puVar3 + 6;
    }
    else {
      puVar4 = puVar4 + -6;
      if (puVar1 == param_3) {
        puVar3 = puVar3 + -6;
        if (puVar4 != puVar3) {
          FUN_1419f3770(puVar4,puVar3);
        }
        puVar6 = puVar6 + -6;
        FUN_1419f3770(puVar3,puVar6);
      }
      else {
        FUN_1419f3770(puVar1,puVar4);
        puVar1 = puVar1 + 6;
      }
    }
    goto joined_r0x0001419f5113;
  }
  cVar2 = (*(code *)param_4)(puVar3,puVar1);
  puVar5 = puVar6;
  if (cVar2 == '\0') {
    cVar2 = (*(code *)param_4)(puVar1,puVar3);
    if (cVar2 != '\0') goto joined_r0x0001419f514a;
    puVar5 = puVar6 + 6;
    FUN_1419f3770(puVar6,puVar1);
  }
  puVar6 = puVar5;
  puVar1 = puVar1 + 6;
  goto joined_r0x0001419f5113;
}




void FUN_1419f5230(longlong param_1,longlong param_2,undefined *param_3)

{
  if (1 < (param_2 - param_1) / 0x18) {
    FUN_1419f4a70(param_1,param_2,param_3);
  }
  return;
}




void FUN_1419f5290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_1419f42e0(param_1,param_2,param_3);
  return;
}




void FUN_1419f52b0(undefined4 *param_1,longlong param_2,undefined *param_3)

{
  if (1 < (param_2 - (longlong)param_1) / 0x18) {
    FUN_1419f4d10(param_1,param_2,param_3);
  }
  return;
}




undefined8 * FUN_1419f5310(undefined8 *param_1)

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




undefined8 * FUN_1419f5370(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1419f53c0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1419f5410(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419f5450(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419f54e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
  }
  plVar5 = FUN_1419f45a0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1419f5820(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1419f5890(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined4 * FUN_1419f58c0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  FUN_1419f48f0(param_2,param_3,param_4);
  return param_2 + param_3 * 6;
}




undefined8 * FUN_1419f5910(undefined8 *param_1)

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




void FUN_1419f5960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_1419f42e0(param_1,param_2,param_3);
  return;
}




void FUN_1419f5980(undefined4 *param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  
  for (lVar1 = param_2 - (longlong)param_1; 1 < lVar1 / 0x18; lVar1 = lVar1 + -0x18) {
    FUN_1419f4d10(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
  }
  return;
}




longlong * FUN_1419f5a20(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419f5b7d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419f5bac;
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
      goto LAB_1419f5b7d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419f54e0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419f5bac:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419f5bd0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a27850);
  }
  FUN_1419f3050(param_3);
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
        goto LAB_1419f5dbc;
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
LAB_1419f5dbc:
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
            FUN_1419f3b90((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419f2ca0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1419f3b90((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1419f2ca0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419f3b90((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1419f2ca0((longlong)param_1,plVar7);
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




exception * FUN_1419f5f90(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_1419f5ff0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1419f60c0(undefined8 *param_1)

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




undefined8 * FUN_1419f6100(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  FUN_1419f3f60((undefined4 *)(*(longlong *)(param_3 + 8) + 0x18),(undefined4 *)param_1[4],*(longlong *)(param_3 + 8));
  param_1[4] = param_1[4] + -0x18;
  *param_2 = 0;
  uVar1 = *(ulonglong *)(param_3 + 8);
  if ((uVar1 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_1419f61a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419f61c0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar3;
  puVar2 = *(undefined4 **)(param_4 + 8);
  if ((puVar2 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined4 *)param_2[1] != puVar2) {
    lVar3 = FUN_1419f3f60(puVar2,(undefined4 *)param_1[4],param_2[1]);
    param_1[4] = lVar3;
  }
  return param_2;
}




longlong * FUN_1419f62b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419f4dc0((longlong)param_1);
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
    FUN_1419f5bd0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419f6460(undefined8 *param_1)

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




void FUN_1419f64b0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_1419f42e0(param_2,param_3,param_4);
  return;
}




void FUN_1419f6500(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint local_res10 [2];
  longlong *local_78;
  uint *puStack_70;
  longlong *local_68;
  longlong *local_58;
  longlong lStack_50;
  longlong *local_48 [2];
  longlong *local_38;
  uint *puStack_30;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (*(char *)(param_1 + 0x2a) == '\0') {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
      uVar4 = FUN_1419f26d0(param_1);
      if (iVar3 == (int)uVar4) {
        FUN_1419f5ff0((longlong *)(param_1 + 0x98),(longlong *)&local_78,local_res10);
        plVar1 = local_78;
        lVar6 = *(longlong *)(param_1 + 200);
        lVar7 = 0;
        local_68 = *(longlong **)(param_1 + 0x98);
        if ((local_78 == (longlong *)0x0) || (local_78 != local_68)) {
          _invalid_parameter_noinfo();
        }
        puVar5 = puStack_70;
        if (puStack_70 != (uint *)lVar6) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
          }
          else {
            lVar6 = *plVar1;
          }
          if (puVar5 == (uint *)*(longlong *)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) - *(int *)((longlong)puVar5 + 0x1c);
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
          }
          else {
            lVar6 = *plVar1;
          }
          if (puVar5 == (uint *)*(longlong *)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_1419f26d0(param_1);
          tq::GmLogSave("syn_member_leave","CSynInfo::DelUserMerit. user Leave Syn[%u] Merit[%d]");
          local_58 = local_78;
          lStack_50 = (longlong)puStack_70;
          FUN_1419f5bd0((undefined8 *)(param_1 + 0x98),&local_38,(longlong *)&local_58);
          puVar5 = *(uint **)(param_1 + 0xf0);
          local_78 = (longlong *)0x0;
          if (*(uint **)(param_1 + 0xf8) < puVar5) {
            _invalid_parameter_noinfo();
          }
          plVar1 = *(longlong **)(param_1 + 0xd8);
          local_78 = plVar1;
          while( true ) {
            puVar2 = *(uint **)(param_1 + 0xf8);
            local_48[0] = (longlong *)0x0;
            puStack_70 = puVar5;
            if (puVar2 < *(uint **)(param_1 + 0xf0)) {
              _invalid_parameter_noinfo();
            }
            local_48[0] = *(longlong **)(param_1 + 0xd8);
            if ((plVar1 == (longlong *)0x0) || (plVar1 != local_48[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar5 == puVar2) {
              return;
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar6 = lVar7;
            }
            else {
              lVar6 = *plVar1;
            }
            if (*(uint **)(lVar6 + 0x20) <= puVar5) {
              _invalid_parameter_noinfo();
            }
            if (*puVar5 == param_2) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar6 = lVar7;
            }
            else {
              lVar6 = *plVar1;
            }
            if (*(uint **)(lVar6 + 0x20) <= puVar5) {
              _invalid_parameter_noinfo();
            }
            puVar5 = puVar5 + 6;
          }
          local_38 = local_78;
          puStack_30 = puStack_70;
          FUN_1419f6100((undefined8 *)(param_1 + 0xd8),local_48,(longlong)&local_38);
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),param_2);
        FUN_1419f26d0(param_1);
        log_InlineLogERROR("CSynInfo::DelUserMerit. SynID[%u], User_SynID[%u]");
      }
    }
    else {
      FUN_1419f26d0(param_1);
      log_InlineLogERROR("CSynInfo::DelUserMerit. Syndicate[%u] is destroy!");
    }
  }
  return;
}




undefined4 FUN_1419f6790(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_1419f5ff0((longlong *)(param_1 + 0x98),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 200);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x98))) {
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
    return *(undefined4 *)(local_10 + 0x1c);
  }
  return 0;
}




void FUN_1419f6840(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 < (undefined4 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined4 *)param_1[3];
  if ((undefined4 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    lVar3 = FUN_1419f3f60(puVar1,(undefined4 *)param_1[4],(longlong)puVar2);
    param_1[4] = lVar3;
  }
  return;
}




undefined8 * FUN_1419f68f0(undefined8 *param_1)

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
  lVar2 = FUN_1419f47a0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419f6970(longlong *param_1)

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
  FUN_1419f62b0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f69e0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_141a29318 ^ (ulonglong)auStack_a8;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28) - lVar6;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    uVar7 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  }
  if (param_3 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    lVar6 = ((longlong)puVar3 - lVar6) / 0x18;
    if (0xaaaaaaaaaaaaaaaU - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1419f2ed0();
    }
    uVar1 = lVar6 + param_3;
    if (uVar7 < uVar1) {
      if (0xaaaaaaaaaaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      puVar3 = (undefined4 *)FUN_1419f3d20(param_1 + 0x10,uVar7);
      lVar6 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18);
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      local_70 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      local_80 = 0;
      local_88 = local_78;
      local_68 = puVar3;
      FUN_1419f48f0(puVar3 + local_70 * 6,param_3,param_4);
      local_74 = 1;
      local_80 = 0;
      local_88 = local_78;
      FUN_1419f42e0(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_2 + 8),puVar3);
      local_74 = 2;
      local_80 = 0;
      local_88 = local_78;
      FUN_1419f42e0(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),puVar3 + (local_70 + param_3) * 6);
      pvVar2 = *(void **)(param_1 + 0x18);
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(undefined4 **)(param_1 + 0x28) = puVar3 + uVar7 * 6;
      *(undefined4 **)(param_1 + 0x20) = puVar3 + (param_3 + (lVar6 - (longlong)pvVar2) / 0x18) * 6;
      *(undefined4 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)(((longlong)puVar3 - *(longlong *)(param_2 + 8)) / 0x18) < param_3) {
      local_58 = *param_4;
      local_54 = param_4[1];
      local_50 = param_4[2];
      local_4c = param_4[3];
      local_48 = param_4[4];
      local_44 = param_4[5];
      local_80 = 0;
      FUN_1419f42e0(*(undefined4 **)(param_2 + 8),puVar3,*(undefined4 **)(param_2 + 8) + param_3 * 6);
      local_80 = 0;
      local_88 = local_78;
      FUN_1419f48f0(*(undefined4 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined4 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x18,&local_58);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x18;
      lVar6 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined4 **)(param_2 + 8); puVar3 != (undefined4 *)(lVar6 + param_3 * -0x18); puVar3 = puVar3 + 6) {
        *puVar3 = local_58;
        puVar3[1] = local_54;
        puVar3[2] = local_50;
        puVar3[3] = local_4c;
        puVar3[4] = local_48;
        puVar3[5] = local_44;
      }
    }
    else {
      local_58 = *param_4;
      local_54 = param_4[1];
      local_50 = param_4[2];
      local_4c = param_4[3];
      local_48 = param_4[4];
      local_44 = param_4[5];
      local_80 = 0;
      puVar4 = FUN_1419f42e0(puVar3 + param_3 * -6,puVar3,puVar3);
      *(undefined4 **)(param_1 + 0x20) = puVar4;
      local_80 = 0;
      local_88 = local_78;
      FUN_1419f4040(*(longlong *)(param_2 + 8),(longlong)(puVar3 + param_3 * -6),(longlong)puVar3);
      puVar4 = *(undefined4 **)(param_2 + 8);
      puVar3 = puVar4 + param_3 * 6;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 6) {
        *puVar4 = local_58;
        puVar4[1] = local_54;
        puVar4[2] = local_50;
        puVar4[3] = local_4c;
        puVar4[4] = local_48;
        puVar4[5] = local_44;
      }
    }
  }
  return;
}




void FUN_1419f6de0(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined4 *local_18;
  undefined4 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 / 0x18;
    if (lVar1 < 0x21) {
LAB_1419f6f0b:
      if (1 < lVar1) {
        FUN_1419f4b40(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        if (1 < ((longlong)param_2 - (longlong)param_1) / 0x18) {
          FUN_1419f4a70((longlong)param_1,(longlong)param_2,param_4);
        }
        FUN_1419f5980(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_1419f6f0b;
    }
    FUN_1419f5040(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    lVar1 = ((longlong)param_2 - (longlong)local_10) / 6 + ((longlong)param_2 - (longlong)local_10 >> 0x3f);
    if (((longlong)local_18 - (longlong)param_1) / 0x18 < (lVar1 >> 2) - (lVar1 >> 0x3f)) {
      FUN_1419f6de0(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_1419f6de0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




undefined1 FUN_1419f6f90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_1419f4dc0(param_1 + 0x98);
  FUN_1419f6840((longlong *)(param_1 + 0xd8));
  return 1;
}




void FUN_1419f6fd0(longlong *param_1)

{
  FUN_1419f6970(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419f7000(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar1 = param_1[3];
  lVar6 = param_1[4] - uVar1;
  lVar4 = 0;
  lVar3 = lVar6 >> 0x3f;
  lVar5 = lVar4;
  if (lVar6 / 0x18 + lVar3 != lVar3) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar1) / 6 + ((longlong)(param_3[1] - uVar1) >> 0x3f);
    lVar5 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_1419f69e0((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar3 = lVar4;
  }
  else {
    lVar3 = *plVar2;
  }
  uVar1 = uVar1 + lVar5 * 0x18;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419f7124;
  }
  _invalid_parameter_noinfo();
LAB_1419f7124:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1419f7160(longlong *param_1,longlong *param_2,undefined *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_1419f6de0((undefined4 *)param_1[1],(undefined4 *)param_2[1],(param_2[1] - param_1[1]) / 0x18,param_3);
  return;
}




void FUN_1419f71d0(longlong *param_1)

{
  FUN_1419f6970(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f7200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = vexillumarenic::CSynInfo::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete((void *)param_1[0x1e]);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  operator_delete((void *)param_1[0x1b]);
  FUN_1419f6970(param_1 + 0x13);
  operator_delete((void *)param_1[0x13]);
  return;
}




longlong FUN_1419f7290(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0xf8);
    if (puVar1 < *(undefined4 **)(param_1 + 0xf0)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = *(undefined4 **)(param_1 + 0xf0);
    lVar3 = *(longlong *)(param_1 + 0xd8);
    if (*(undefined4 **)(param_1 + 0xf8) < puVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0xd8))) {
      _invalid_parameter_noinfo();
    }
    FUN_1419f6de0(puVar2,puVar1,((longlong)puVar1 - (longlong)puVar2) / 0x18,&LAB_1419f2ba0);
    *(undefined1 *)(param_1 + 0x29) = 1;
    return param_1 + 0xd8;
  }
  return param_1 + 0xd8;
}




undefined8 FUN_1419f7360(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      (**(code **)(*plVar1 + 0x40))(plVar1,0);
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
    (**(code **)(*plVar1 + 0xb0))(plVar1,0);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    memset((void *)(param_1 + 0x38),0,0x60);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_1419f4dc0(param_1 + 0x98);
  uVar2 = FUN_1419f6840((longlong *)(param_1 + 0xd8));
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




undefined8 * FUN_1419f7450(undefined8 *param_1)

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
  lVar2 = FUN_1419f47a0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419f74d0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28;
  undefined4 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (param_1[5] - (longlong)puVar1) / 6 + (param_1[5] - (longlong)puVar1 >> 0x3f);
    uVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x18) < uVar4) {
    FUN_1419f48f0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 6);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_1419f7000(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_1419f75d0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = vexillumarenic::CSynInfo::vftable;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  plVar4 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined2 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x72) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)((longlong)param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x92) = 0;
  *(undefined2 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x96) = 0;
  FUN_1419f7450(param_1 + 0x13);
  plVar3 = operator_new(8);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)(param_1 + 0x1b);
    plVar4 = plVar3;
  }
  param_1[0x1b] = plVar4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if ((param_2 != (longlong *)0x0) && (param_3 != 0)) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,1);
    iVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (iVar1 != 0) {
      plVar4 = (longlong *)param_1[1];
      if (plVar4 == (longlong *)0x0) {
        uVar2 = 0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,1);
        uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
      }
      (**(code **)(*(longlong *)param_1[2] + 0x70))((longlong *)param_1[2],uVar2);
      _snprintf((char *)(param_1 + 3),0x10,"%s");
      *(undefined1 *)((longlong)param_1 + 0x27) = 0;
      *(undefined1 *)(param_1 + 5) = param_5;
      *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x29) = 0;
      *(undefined4 *)(param_1 + 0x21) = 0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      memset(param_1 + 7,0,0x60);
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,4);
      iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (0 < iVar1) {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,4);
        uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
        *(undefined4 *)(param_1 + 6) = uVar2;
      }
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,2);
      (**(code **)(*plVar4 + 0xb0))(plVar4,param_4);
    }
  }
  return param_1;
}




undefined8 * FUN_1419f7840(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1419f7200(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1419f3a00(param_1);
  }
  return param_1;
}




undefined8 * FUN_1419f7870(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x38))();
    puVar2 = (undefined8 *)0x0;
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)FUN_1419f39a0(0x110);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = FUN_1419f75d0(puVar2,plVar1,param_2,param_3,1);
      }
      if (puVar2 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_141a18388);
        (**(code **)*plVar1)(plVar1,1);
        puVar2 = (undefined8 *)0x0;
      }
    }
  }
  return puVar2;
}




undefined8 * FUN_1419f7930(undefined4 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 == (longlong *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (longlong *)InstanceGet();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_vexillum");
    puVar4 = (undefined8 *)0x0;
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*param_2 + 0x80))(param_2,param_1);
      if (cVar1 == '\0') {
        (**(code **)*plVar2)(plVar2,1);
        puVar4 = (undefined8 *)0x0;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
        puVar4 = (undefined8 *)FUN_1419f39a0(0x110);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = FUN_1419f75d0(puVar4,plVar2,(longlong)param_2,param_3,0);
        }
        if (puVar4 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_141a18388);
          (**(code **)*plVar2)(plVar2,1);
          puVar4 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar4;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419f7a50(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  char *_Source;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_4d8 [32];
  int local_4b8;
  uint local_4b4;
  uint local_4b0;
  int local_4ac;
  longlong *local_4a8;
  longlong local_4a0;
  longlong *local_498 [3];
  undefined8 local_480;
  longlong *local_478;
  CMsg local_468 [1040];
  uint local_58;
  char local_54 [16];
  int local_44;
  ulonglong local_40;
  
  local_480 = 0xfffffffffffffffe;
  local_40 = DAT_141a29318 ^ (ulonglong)auStack_4d8;
  if ((param_3 != 0) && (param_2 != 0)) {
    local_4b8 = param_3;
    local_4b4 = param_2;
    local_4b0 = param_2;
    if (*(char *)(param_1 + 0x2a) == '\0') {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
      uVar5 = FUN_1419f26d0(param_1);
      if (iVar4 == (int)uVar5) {
        FUN_1419f5ff0((longlong *)(param_1 + 0x98),(longlong *)&local_4a8,&local_4b0);
        plVar3 = local_4a8;
        lVar8 = *(longlong *)(param_1 + 200);
        lVar9 = 0;
        local_478 = *(longlong **)(param_1 + 0x98);
        if ((local_4a8 == (longlong *)0x0) || (local_4a8 != local_478)) {
          _invalid_parameter_noinfo();
        }
        iVar4 = local_4b8;
        if (local_4a0 == lVar8) {
          local_4ac = local_4b8;
          local_4b0 = param_2;
          FUN_1419f5a20((longlong *)(param_1 + 0x98),(longlong *)local_498,&local_4b0);
          local_44 = iVar4;
          local_58 = param_2;
          _Source = (char *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),param_2);
          if (_Source != (char *)0x0) {
            strncpy(local_54,_Source,0x10);
          }
          FUN_1419f74d0((longlong *)(param_1 + 0xd8),&local_58);
          iVar7 = iVar4;
        }
        else {
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = lVar9;
          }
          else {
            lVar8 = *plVar3;
          }
          if (local_4a0 == *(longlong *)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          *(int *)(local_4a0 + 0x1c) = *(int *)(local_4a0 + 0x1c) + local_4b8;
          puVar6 = *(uint **)(param_1 + 0xf0);
          local_4a8 = (longlong *)0x0;
          if (*(uint **)(param_1 + 0xf8) < puVar6) {
            _invalid_parameter_noinfo();
          }
          plVar1 = *(longlong **)(param_1 + 0xd8);
          local_4a8 = plVar1;
          while( true ) {
            puVar2 = *(uint **)(param_1 + 0xf8);
            local_498[0] = (longlong *)0x0;
            if (puVar2 < *(uint **)(param_1 + 0xf0)) {
              _invalid_parameter_noinfo();
            }
            local_498[0] = *(longlong **)(param_1 + 0xd8);
            if ((plVar1 == (longlong *)0x0) || (plVar1 != local_498[0])) {
              _invalid_parameter_noinfo();
            }
            param_2 = local_4b4;
            if (puVar6 == puVar2) goto LAB_1419f7c96;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = lVar9;
            }
            else {
              lVar8 = *plVar1;
            }
            if (*(uint **)(lVar8 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            param_2 = local_4b4;
            if (*puVar6 == local_4b4) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = lVar9;
            }
            else {
              lVar8 = *plVar1;
            }
            if (*(uint **)(lVar8 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            puVar6 = puVar6 + 6;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = lVar9;
          }
          else {
            lVar8 = *plVar3;
          }
          if (local_4a0 == *(longlong *)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = lVar9;
          }
          else {
            lVar8 = *plVar1;
          }
          if (*(uint **)(lVar8 + 0x20) <= puVar6) {
            _invalid_parameter_noinfo();
          }
          puVar6[5] = *(uint *)(local_4a0 + 0x1c);
LAB_1419f7c96:
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar9 = *plVar3;
          }
          if (local_4a0 == *(longlong *)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar4 = *(int *)(local_4a0 + 0x1c);
          iVar7 = local_4b8;
        }
        FUN_141a0fd10(local_468);
        uVar5 = FUN_141a0fe40(local_468,1,iVar4);
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))(*(longlong **)(param_1 + 0x10),param_2,local_468);
        }
        *(undefined1 *)(param_1 + 0x29) = 0;
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + iVar7;
        FUN_141a0fd60((undefined8 *)local_468);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),param_2);
        FUN_1419f26d0(param_1);
        log_InlineLogERROR("CSynInfo::AddUserMerit. SynID[%u], User_SynID[%u], Merit[%d]");
      }
    }
    else {
      FUN_1419f26d0(param_1);
      log_InlineLogERROR("CSynInfo::AddUserMerit. Syndicate[%u] is destroy!");
    }
  }
  return;
}




ulonglong FUN_1419f7da0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 in_register_00000014;
  int iVar7;
  
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (param_2 == 0) {
      log_InlineLogERROR("CSynInfo::InsertVexillum. idUser == ID_NONE");
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 8);
      if (plVar4 == (longlong *)0x0) {
        log_InlineLogERROR("CSynInfo::InsertVexillum. NULL == m_pRec");
        uVar3 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else if (*(char *)(param_1 + 0x34) == '\0') {
        log_InlineLogERROR("CSynInfo::InsertVexillum. m_idOwnerTar == ID_NONE");
        uVar3 = extraout_RAX_02 & 0xffffffffffffff00;
      }
      else {
        if (*(char *)(param_1 + 0x28) == '\0') {
          (**(code **)(*plVar4 + 0x50))(plVar4,CONCAT71((int7)(CONCAT44(in_register_00000014,param_2) >> 8),1),param_3,param_4,0xfffffffffffffffe);
          *(undefined1 *)(param_1 + 0x28) = 1;
        }
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
        plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
        lVar1 = *plVar5;
        iVar7 = (((char)param_3 != '\0') + 1) * 0xf;
        iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
        (**(code **)(lVar1 + 0xb0))(plVar5,iVar7 + iVar2);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
        uVar6 = FUN_1419f7a50(param_1,param_2,iVar7);
        uVar3 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
    }
  }
  else {
    FUN_1419f26d0(param_1);
    log_InlineLogERROR("CSynInfo::InsertVexillum. Syndicate[%u] is destroy!");
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  return uVar3;
}




bool FUN_1419f7ff0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1419f8060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f8082;
  }
  lVar2 = *plVar1;
LAB_1419f8082:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419f80a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f80c2;
  }
  lVar2 = *plVar1;
LAB_1419f80c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1419f80e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419f8170(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
}




longlong FUN_1419f8200(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f8222;
  }
  lVar2 = *plVar1;
LAB_1419f8222:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419f8240(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_1419f8310(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419f8342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1419f8410(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1419f8440;
  }
  else {
LAB_1419f8440:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1419f8468;
  }
  _invalid_parameter_noinfo();
LAB_1419f8468:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_1419f84b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419f8530(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_1419f85d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_1419f8670(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419f8720(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419f8810(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419f8850(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

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




undefined * FUN_1419f88e0(void)

{
  if ((DAT_141a29358 & 1) == 0) {
    DAT_141a29358 = DAT_141a29358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29350,"CTarAttackInfo");
    atexit((_func_5014 *)&LAB_141a17830);
  }
  return &DAT_141a29350;
}




void FUN_1419f8940(__uint64 param_1)

{
  if ((DAT_141a29358 & 1) == 0) {
    DAT_141a29358 = DAT_141a29358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29350,"CTarAttackInfo");
    atexit((_func_5014 *)&LAB_141a17830);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f8995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141a29350,param_1);
  return;
}




void FUN_1419f89a0(void *param_1)

{
  if ((DAT_141a29358 & 1) == 0) {
    DAT_141a29358 = DAT_141a29358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29350,"CTarAttackInfo");
    atexit((_func_5014 *)&LAB_141a17830);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f89f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141a29350,param_1);
  return;
}




void FUN_1419f8a00(void *param_1)

{
  if ((DAT_141a29358 & 1) == 0) {
    DAT_141a29358 = DAT_141a29358 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29350,"CTarAttackInfo");
    atexit((_func_5014 *)&LAB_141a17830);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419f8a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141a29350,param_1);
  return;
}




bool FUN_1419f8a60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1419f8aa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f8ac2;
  }
  lVar2 = *plVar1;
LAB_1419f8ac2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419f8ae0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f8b02;
  }
  lVar2 = *plVar1;
LAB_1419f8b02:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1419f8b20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419f8b80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f8b90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419f8ba0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f8bc2;
  }
  lVar2 = *plVar1;
LAB_1419f8bc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419f8c20(longlong param_1,longlong param_2)

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




void FUN_1419f8c80(longlong param_1,longlong *param_2)

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




void FUN_1419f8d10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1419f8d80(longlong *param_1)

{
  FUN_1419f8310(param_1);
  return param_1;
}




void FUN_1419f8da0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419f8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419f8e50(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1419f8ec0(longlong *param_1,longlong param_2)

{
  FUN_1419f8410(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1419f8ef0(undefined8 *param_1)

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




void FUN_1419f8f50(longlong *param_1,uint param_2)

{
  FUN_1419f8410(param_1,(ulonglong)param_2);
  return;
}




void * FUN_1419f8f70(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419f9010(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419f9050(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

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




void FUN_1419f90e0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

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




void * FUN_1419f91c0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1419f9200(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,undefined *param_5)

{
  *param_3 = *param_1;
  FUN_1419f90e0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




longlong FUN_1419f9230(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419f9252;
  }
  lVar2 = *plVar1;
LAB_1419f9252:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419f9270(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f9290(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419f92b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419f92b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_1419f9300(longlong param_1,ulonglong param_2)

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
      FUN_1419f8170();
    }
    lVar1 = FUN_1419f8d10(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_1419f9370(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_1419f93a0(longlong *param_1)

{
  FUN_1419f8310(param_1);
  return param_1;
}




longlong * FUN_1419f93c0(longlong *param_1)

{
  FUN_1419f8da0(param_1);
  return param_1;
}




undefined8 * FUN_1419f93e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419f9460(undefined8 *param_1)

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




undefined8 * FUN_1419f94a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419f94e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419f8da0(param_1);
  return param_2;
}




longlong * FUN_1419f9510(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419f957a;
  }
  _invalid_parameter_noinfo();
LAB_1419f957a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_1419f95b0(longlong *param_1,longlong param_2)

{
  FUN_1419f8410(param_1,-param_2);
  return param_1;
}




undefined8 * FUN_1419f95d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1419f9630(void)

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




undefined8 * FUN_1419f9690(undefined8 *param_1)

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




void * FUN_1419f96f0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419f9760(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419f97e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419f9820(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_1419f9050(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_1419f9050(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_1419f9050(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_1419f9050(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_1419f9050(param_1,param_2,param_3,param_4);
  return;
}




void FUN_1419f9900(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_1419f90e0(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_1419f9980(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

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




void FUN_1419f9a90(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_1419f90e0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,uVar1,param_3);
  return;
}




void FUN_1419f9ac0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419f92b0(param_1,(longlong *)plVar2[2]);
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




void FUN_1419f9b40(undefined8 *param_1)

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




longlong * FUN_1419f9b80(longlong *param_1)

{
  FUN_1419f8da0(param_1);
  return param_1;
}




void FUN_1419f9ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419f9bc0(undefined8 *param_1)

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




undefined8 * FUN_1419f9c10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419f9c50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_1419f9cb0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419f9d1d;
  }
  _invalid_parameter_noinfo();
LAB_1419f9d1d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1419f9d50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419f9da0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a27850);
  }
  FUN_1419f8da0(param_3);
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
        goto LAB_1419f9f8c;
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
LAB_1419f9f8c:
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
            FUN_1419f8c20((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419f8c80((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1419f8c20((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1419f8c80((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419f8c20((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1419f8c80((longlong)param_1,plVar7);
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




undefined8 * FUN_1419fa160(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_1419fa240(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419f9630();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419fa280(undefined8 *param_1)

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




void FUN_1419fa310(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_1419fa410(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419fa450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

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
  FUN_1419f9820(param_2,puVar7,param_3 + -1,param_4);
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
joined_r0x0001419fa513:
  puVar2 = puVar8;
  puVar8 = puVar9;
  puVar5 = puVar4;
  if (param_3 <= puVar2) {
joined_r0x0001419fa553:
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
    goto joined_r0x0001419fa513;
  }
  cVar3 = (*(code *)param_4)(*puVar4,*puVar2);
  puVar6 = puVar7;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)param_4)(*puVar2,*puVar4);
    if (cVar3 != '\0') goto joined_r0x0001419fa553;
    puVar6 = puVar7 + 1;
    if (puVar7 != puVar2) {
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar7 = puVar6;
  puVar8 = puVar2 + 1;
  goto joined_r0x0001419fa513;
}




void FUN_1419fa680(longlong param_1,longlong param_2,undefined *param_3)

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
      FUN_1419f90e0(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_1419fa710(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    uVar1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1419f90e0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,uVar1,param_3);
  }
  return;
}




undefined8 * FUN_1419fa790(undefined8 *param_1)

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




undefined8 * FUN_1419fa7f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1419fa840(undefined8 *param_1,undefined8 *param_2)

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




ulonglong FUN_1419fa890(longlong *param_1)

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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1419fa907;
  }
  _invalid_parameter_noinfo();
LAB_1419fa907:
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




void FUN_1419fa940(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419fa960(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419f9ac0((longlong)param_1);
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
    FUN_1419f9da0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419fab50(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1419fa160(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1419fab70(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
  }
  plVar5 = FUN_1419f93e0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_1419faeb0(longlong *param_1)

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
  FUN_1419fa960(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1419faf20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419faf80(undefined8 *param_1)

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




void FUN_1419fafd0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_1419fb0f0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_1419fb130(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_1419f90e0((longlong)param_1,0,lVar2 + -8 >> 3,uVar1,param_3);
  }
  return;
}




undefined8 FUN_1419fb1a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3;
  if (uVar3 == 0) {
    return 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (*(longlong **)(param_1 + 0x68) < plVar4) {
    _invalid_parameter_noinfo();
    uVar3 = extraout_RAX;
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  uVar6 = 0;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x68);
    if (plVar2 < *(longlong **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
      uVar3 = extraout_RAX_00;
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
      uVar3 = extraout_RAX_01;
    }
    if ((plVar4 == plVar2) || (4 < uVar6)) break;
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
    uVar3 = FUN_141a10290(param_2,(short)uVar6,*(undefined4 *)(*plVar4 + 4),(char *)(*plVar4 + 8));
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
      uVar3 = extraout_RAX_02;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
      uVar3 = extraout_RAX_03;
    }
    plVar4 = plVar4 + 1;
    uVar6 = uVar6 + 1;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




undefined4 FUN_1419fb2d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x68) < puVar1) {
    _invalid_parameter_noinfo();
  }
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = 0;
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x48);
  }
  if (*(undefined8 **)(lVar2 + 0x20) <= puVar1) {
    _invalid_parameter_noinfo();
  }
  return *(undefined4 *)*puVar1;
}




longlong * FUN_1419fb340(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419fb49d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419fb4cc;
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
      goto LAB_1419fb49d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419fab70(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419fb4cc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_1419fb4f0(longlong *param_1,uint *param_2)

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
  
  FUN_1419fa160(param_1,&local_38,param_2);
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
  FUN_1419fa960(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_1419fb630(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_1419fb700(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1419fb790(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void FUN_1419fb880(longlong *param_1)

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




void FUN_1419fb940(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419fb990(undefined8 *param_1)

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




void FUN_1419fb9e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1419f8170();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1419f8d10(param_1 + 0x10,uVar8);
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
      FUN_1419fb0f0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_1419fb0f0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1419f9760(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_1419fbca0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  rsize_t _DstSize;
  undefined8 *_Dst;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  FUN_1419fb4f0((longlong *)(param_1 + 8),local_res10);
  _Dst = *(undefined8 **)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x68) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    if (puVar2 < *(undefined8 **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == puVar2) {
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(undefined8 **)(lVar3 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    if (*(uint *)*_Dst == param_2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(undefined8 **)(lVar3 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x68) - (longlong)(_Dst + 1) >> 3;
  if (0 < lVar3) {
    _DstSize = lVar3 << 3;
    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -8;
  if ((_Dst < *(undefined8 **)(param_1 + 0x60)) || (*(undefined8 **)(param_1 + 0x68) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  return;
}




void FUN_1419fbdb0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5[4] != 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      operator_delete((void *)plVar5[4]);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419f92b0(param_1 + 8,(longlong *)plVar2[2]);
    plVar5 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
  FUN_1419fb880((longlong *)(param_1 + 0x48));
  return;
}




void FUN_1419fbf40(longlong *param_1)

{
  FUN_1419faeb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419fbf70(undefined8 *param_1)

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
  lVar2 = FUN_1419f9630();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_1419fbff0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1419fb9e0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1419fc0e4;
  }
  _invalid_parameter_noinfo();
LAB_1419fc0e4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1419fc120(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_1419fc1e5:
      if (1 < lVar1) {
        FUN_1419f9980(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_1419fa680((longlong)param_1,(longlong)param_2,param_4);
        FUN_1419fb130(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_1419fc1e5;
    }
    FUN_1419fa450(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_1419fc120(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_1419fc120(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_1419fc240(longlong *param_1)

{
  FUN_1419faeb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419fc270(longlong param_1)

{
  FUN_1419fbdb0(param_1);
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  operator_delete(*(void **)(param_1 + 0x48));
  FUN_1419faeb0((longlong *)(param_1 + 8));
  operator_delete(*(void **)(param_1 + 8));
  return;
}




undefined8 * FUN_1419fc2f0(undefined8 *param_1)

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
  lVar2 = FUN_1419f9630();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419fc370(longlong *param_1,undefined8 *param_2)

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
  FUN_1419fbff0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1419fc420(longlong *param_1,longlong *param_2,undefined *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_1419fc120((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_1419fc480(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1419fc2f0(param_1 + 1);
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 9);
    plVar2 = plVar1;
  }
  param_1[9] = plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = param_2;
  return param_1;
}




undefined8 * FUN_1419fc4f0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_141a29358 & 1) == 0) {
      DAT_141a29358 = DAT_141a29358 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_141a29350,"CTarAttackInfo");
      atexit((_func_5014 *)&LAB_141a17830);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141a29350,0x78);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_1419fc480(puVar1,param_1);
    }
  }
  return puVar1;
}




void FUN_1419fc570(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  rsize_t _DstSize;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *_Src;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  void *_Dst;
  longlong lVar10;
  bool bVar11;
  uint *local_res10;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x48);
  local_res10 = param_2;
  if (plVar2 < *(longlong **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  plVar9 = *(longlong **)(param_1 + 0x60);
  if (*(longlong **)(param_1 + 0x68) < plVar9) {
    _invalid_parameter_noinfo();
  }
  lVar8 = *plVar1;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 < *(longlong **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  for (; (plVar9 != plVar2 && ((uint *)*plVar9 != param_2)); plVar9 = plVar9 + 1) {
  }
  if ((lVar8 == 0) || (lVar8 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (plVar9 == plVar3) {
    if (4 < (ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3)) {
      puVar7 = (undefined8 *)FUN_1419fa890(plVar1);
      puVar4 = (uint *)*puVar7;
      if ((puVar4 != param_2) && (puVar4 != (uint *)0x0)) {
        if (puVar4[1] == param_2[1]) {
          bVar11 = *puVar4 < *param_2;
        }
        else {
          bVar11 = param_2[1] < puVar4[1];
        }
        if (bVar11) {
          return;
        }
      }
    }
    FUN_1419fc370(plVar1,&local_res10);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  if (puVar7 < *(undefined8 **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  lVar8 = *plVar1;
  if (*(undefined8 **)(param_1 + 0x68) < puVar5) {
    _invalid_parameter_noinfo();
  }
  if ((lVar8 == 0) || (lVar8 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  FUN_1419fc120(puVar5,puVar7,(longlong)puVar7 - (longlong)puVar5 >> 3,&LAB_1419f7f00);
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) < 6) {
    return;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x60);
  if (*(ulonglong *)(param_1 + 0x68) < uVar6) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  lVar8 = 0;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar10 = lVar8;
  }
  else {
    lVar10 = *plVar2;
  }
  _Dst = (void *)(uVar6 + 0x28);
  if (_Dst <= *(void **)(lVar10 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar8 = *plVar2;
    }
    if (*(void **)(lVar8 + 0x18) <= _Dst) goto LAB_1419fc721;
  }
  _invalid_parameter_noinfo();
LAB_1419fc721:
  _Src = *(void **)(param_1 + 0x68);
  if (_Src < *(void **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  if (((plVar1 == (longlong *)0x0) || (_Dst < *(void **)(param_1 + 0x60))) || (*(void **)(param_1 + 0x68) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar8 = *plVar1;
  if ((_Src < *(void **)(param_1 + 0x60)) || (*(void **)(param_1 + 0x68) < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar8 == 0) || (lVar8 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar8 = *(longlong *)(param_1 + 0x68) - (longlong)_Src >> 3;
    _DstSize = lVar8 * 8;
    if (0 < lVar8) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x68) = (void *)((longlong)_Dst + _DstSize);
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1419fc7c0(undefined8 *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10 [2];
  uint local_50;
  undefined4 uStack_4c;
  uint *local_48;
  longlong local_40 [3];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res10[0] = param_2;
    FUN_1419fb630(param_1 + 1,(longlong *)&local_50,local_res10);
    puVar3 = (uint *)param_1[7];
    plVar1 = (longlong *)CONCAT44(uStack_4c,local_50);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[1])) {
      _invalid_parameter_noinfo();
    }
    puVar2 = local_48;
    if (local_48 == puVar3) {
      puVar3 = operator_new(0x18);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
      }
      *puVar3 = param_2;
      puVar3[1] = param_3;
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_2);
      _snprintf((char *)(puVar3 + 2),0x10,"%s",uVar4);
      *(undefined1 *)((longlong)puVar3 + 0x17) = 0;
      local_50 = *puVar3;
      local_48 = puVar3;
      FUN_1419fb340(param_1 + 1,local_40,&local_50);
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1;
      }
      if (puVar2 == *(uint **)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar3 = *(uint **)(puVar2 + 8);
      puVar3[1] = puVar3[1] + param_3;
    }
    FUN_1419fc570((longlong)param_1,puVar3);
  }
  return;
}




void FUN_1419fc930(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void * FUN_1419fc960(void *param_1,uint param_2)

{
  FUN_1419fc270((longlong)param_1);
  if ((param_2 & 1) != 0) {
    FUN_1419f89a0(param_1);
  }
  return param_1;
}




bool FUN_1419fc990(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  uVar1 = FUN_1419f2b60(param_1);
  uVar2 = FUN_1419f2b60(param_2);
  if ((int)uVar1 != (int)uVar2) {
    uVar1 = FUN_1419f2b60(param_1);
    uVar2 = FUN_1419f2b60(param_2);
    return (int)uVar2 < (int)uVar1;
  }
  uVar1 = FUN_1419f26d0(param_1);
  uVar2 = FUN_1419f26d0(param_2);
  return (uint)uVar1 < (uint)uVar2;
}




void FUN_1419fca30(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined8 FUN_1419fca50(longlong param_1)

{
  __time32_t _Var1;
  tm *ptVar2;
  int local_res10 [6];
  tm local_38;
  
  _time32(local_res10);
  ptVar2 = _localtime32(local_res10);
  if (((ptVar2 != (tm *)0x0) && (*(char *)(param_1 + 0x48) != '\0')) && (*(int *)(param_1 + 0x10) == ptVar2->tm_wday)) {
    local_38.tm_mday = ptVar2->tm_mday;
    local_38.tm_mon = ptVar2->tm_mon;
    local_38.tm_year = ptVar2->tm_year;
    local_38.tm_wday = ptVar2->tm_wday;
    local_38.tm_yday = ptVar2->tm_yday;
    local_38.tm_isdst = ptVar2->tm_isdst;
    local_38.tm_hour = *(int *)(param_1 + 0x14);
    local_38.tm_min = *(int *)(param_1 + 0x18);
    local_38.tm_sec = 0;
    _Var1 = _mktime32(&local_38);
    if (((*(int *)(param_1 + 0x10) == ptVar2->tm_wday) && (local_res10[0] - _Var1 <= *(int *)(param_1 + 0x38))) && (0 < local_res10[0] - _Var1)) {
      return 0;
    }
  }
  return 0xffffffff;
}




bool FUN_1419fcb20(longlong param_1)

{
  return *(int *)(param_1 + 0xb0) == 0;
}




uint FUN_1419fcb30(longlong param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint extraout_EAX;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    if (param_2 == 0) {
      uVar1 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    else if ((param_3 == 0) || (param_4 == 0)) {
      log_InlineLogERROR(&DAT_141a18388);
      uVar1 = extraout_EAX & 0xffffff00;
    }
    else {
      for (uVar1 = 0; uVar1 < 3; uVar1 = uVar1 + 1) {
        lVar3 = (longlong)(int)uVar1 * 0x20;
        if (*(int *)(lVar3 + 0x50 + param_1) == param_3) {
          if (*(uint *)(lVar3 + 0x54 + param_1) != param_2) {
            uVar2 = FUN_1419fc7c0(*(undefined8 **)(lVar3 + 0x58 + param_1),param_2,param_4);
            return (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
          }
          break;
        }
      }
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  else {
    uVar1 = (int)((ulonglong)in_RAX >> 8) << 8;
  }
  return uVar1;
}




void FUN_1419fcbd0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  CMsg local_418 [1040];
  
  uVar3 = 0;
  do {
    if (2 < uVar3) {
      return;
    }
    FUN_141a101d0(local_418);
    FUN_141a10250((longlong)local_418,1,0);
    lVar4 = (longlong)(int)uVar3 * 0x20;
    lVar1 = *(longlong *)(lVar4 + 0x58 + param_1);
    if (lVar1 == 0) {
LAB_1419fcc93:
      FUN_141a10220((undefined8 *)local_418);
    }
    else {
      uVar2 = FUN_1419fb1a0(lVar1,(longlong)local_418);
      if (((char)uVar2 != '\0') || (param_2 != '\0')) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
                  (*(longlong **)(param_1 + 8),0x809,local_418,*(undefined2 *)(lVar4 + 0x68 + param_1),*(undefined2 *)(lVar4 + 0x6a + param_1),
                   *(undefined2 *)(lVar4 + 0x6c + param_1),*(undefined2 *)(lVar4 + 0x6e + param_1));
        goto LAB_1419fcc93;
      }
      FUN_141a10220((undefined8 *)local_418);
    }
    uVar3 = uVar3 + 1;
  } while( true );
}




ulonglong FUN_1419fccd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),4,param_3,param_4,0xfffffffffffffffe);
    in_RAX = (**(code **)(*plVar1 + 0x48))(plVar1);
    if ((int)in_RAX != 0) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_1419fcd10(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),4,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_2 == '\x01');
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),0);
  }
  return;
}




void FUN_1419fcd70(longlong param_1,char param_2)

{
  tm *ptVar1;
  longlong local_res18 [2];
  
  if (param_2 != '\0') {
    _time64(local_res18);
    ptVar1 = _localtime64(local_res18);
    *(int *)(param_1 + 0x10) = ptVar1->tm_wday;
    *(int *)(param_1 + 0x14) = ptVar1->tm_hour;
    *(int *)(param_1 + 0x18) = ptVar1->tm_min;
    return;
  }
  _time64(local_res18);
  local_res18[0] = local_res18[0] - *(int *)(param_1 + 0x38);
  ptVar1 = _localtime64(local_res18);
  *(int *)(param_1 + 0x10) = ptVar1->tm_wday;
  *(int *)(param_1 + 0x14) = ptVar1->tm_hour;
  *(int *)(param_1 + 0x18) = ptVar1->tm_min;
  return;
}




bool FUN_1419fcde0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  uVar1 = FUN_1419f2b60(param_2);
  uVar2 = FUN_1419f2b60(param_3);
  if ((int)uVar1 != (int)uVar2) {
    uVar1 = FUN_1419f2b60(param_2);
    uVar2 = FUN_1419f2b60(param_3);
    return (int)uVar2 < (int)uVar1;
  }
  uVar1 = FUN_1419f26d0(param_2);
  uVar2 = FUN_1419f26d0(param_3);
  return (uint)uVar1 < (uint)uVar2;
}




int FUN_1419fce80(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  int iVar3;
  tm *ptVar4;
  int local_res10 [6];
  tm local_38;
  
  _time32(local_res10);
  ptVar4 = _localtime32(local_res10);
  if ((ptVar4 != (tm *)0x0) && (*(int *)(param_1 + 0x10) == ptVar4->tm_wday)) {
    local_38.tm_mday = ptVar4->tm_mday;
    local_38.tm_mon = ptVar4->tm_mon;
    local_38.tm_year = ptVar4->tm_year;
    local_38.tm_wday = ptVar4->tm_wday;
    local_38.tm_yday = ptVar4->tm_yday;
    local_38.tm_isdst = ptVar4->tm_isdst;
    local_38.tm_hour = *(int *)(param_1 + 0x14);
    local_38.tm_min = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x38);
    local_38.tm_sec = 0;
    _Var2 = _mktime32(&local_38);
    iVar3 = _Var2 + (iVar1 - local_res10[0]);
    if ((iVar3 <= iVar1) && (0 < iVar3)) {
      return iVar3;
    }
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419fcf30(longlong param_1,char param_2)

{
  int iVar1;
  IStringManager *pIVar2;
  char *_Format;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_568 [32];
  undefined4 local_548;
  undefined4 local_540;
  undefined8 local_538;
  CMsg local_528 [1040];
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_538 = 0xfffffffffffffffe;
  local_18 = DAT_141a29318 ^ (ulonglong)auStack_568;
  if (*(int *)(param_1 + 0xb0) == 0) {
    do {
      iVar1 = tq::RandGet(3);
    } while (iVar1 == *(int *)(param_1 + 0x34));
    *(int *)(param_1 + 0x34) = iVar1;
    pIVar2 = theInstance();
    _Format = (char *)(*(code *)**(undefined8 **)pIVar2)(pIVar2,"STR_VEXILLUM_DOUBLE_TAR");
    _snprintf(local_118,0x100,_Format);
    local_19 = 0;
    local_540 = 0;
    local_548 = CONCAT22(local_548._2_2_,2000);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),0x809,local_118,0xff0000);
    if (param_2 != '\0') {
      FUN_141a101d0(local_528);
      uVar3 = FUN_141a10250((longlong)local_528,0xc,*(undefined4 *)((longlong)*(int *)(param_1 + 0x34) * 0x20 + 0x50 + param_1));
      if ((char)uVar3 == '\0') {
        local_548 = 0x726;
        log_InlineLogERROR(&DAT_141a18388);
      }
      else {
        lVar4 = (longlong)*(int *)(param_1 + 0x34) * 0x20;
        FUN_141a103d0((longlong)local_528,*(undefined2 *)(lVar4 + 100 + param_1),*(undefined2 *)(lVar4 + 0x66 + param_1));
        (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_528,0);
      }
      uVar3 = FUN_141a10220((undefined8 *)local_528);
    }
    local_18 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
    local_18 = local_18 & 0xffffffffffffff00;
  }
  return local_18;
}




ulonglong FUN_1419fd0f0(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




longlong FUN_1419fd150(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x18) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 0x18;
}




int FUN_1419fd200(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




bool FUN_1419fd350(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1419fd3c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd3e2;
  }
  lVar2 = *plVar1;
LAB_1419fd3e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419fd400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd422;
  }
  lVar2 = *plVar1;
LAB_1419fd422:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1419fd440(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1419fd480(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1419fd520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd542;
  }
  lVar2 = *plVar1;
LAB_1419fd542:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419fd560(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd582;
  }
  lVar2 = *plVar1;
LAB_1419fd582:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1419fd5a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1419fd600(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419fd6c0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
}




longlong FUN_1419fd820(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd842;
  }
  lVar2 = *plVar1;
LAB_1419fd842:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419fd860(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_1419fd8a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fd8c2;
  }
  lVar2 = *plVar1;
LAB_1419fd8c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419fd8e0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
}




longlong FUN_1419fd950(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_1419fdaa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x2d) == '\0') {
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




void FUN_1419fdb00(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419fdb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_1419fdba0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_1419fdd20(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1419fdd50;
  }
  else {
LAB_1419fdd50:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1419fdd78;
  }
  _invalid_parameter_noinfo();
LAB_1419fdd78:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_1419fdd90(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1419fddc0;
  }
  else {
LAB_1419fddc0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1419fdde8;
  }
  _invalid_parameter_noinfo();
LAB_1419fdde8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1419fde40(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419fde64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419fded0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419fdf00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_1419fdfa0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419fe060(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1419fe0f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 << 5);
  return;
}




void FUN_1419fe190(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_1419fe260(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_1419fe300(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419fe420(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419fe470(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419fe5a0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419fe5e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419fe620(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 < param_2) {
    do {
      lVar4 = (param_2 + -1) / 2;
      lVar1 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar1 == 0) break;
      if (param_4 != 0) {
        uVar2 = FUN_1419f2b60(lVar1);
        uVar3 = FUN_1419f2b60(param_4);
        if ((int)uVar2 == (int)uVar3) {
          uVar2 = FUN_1419f26d0(lVar1);
          uVar3 = FUN_1419f26d0(param_4);
          bVar5 = (uint)uVar2 < (uint)uVar3;
        }
        else {
          uVar2 = FUN_1419f2b60(lVar1);
          uVar3 = FUN_1419f2b60(param_4);
          bVar5 = (int)uVar3 < (int)uVar2;
        }
        if (!bVar5) break;
      }
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
      param_2 = lVar4;
    } while (param_3 < lVar4);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




void FUN_1419fe710(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

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




void FUN_1419fe7c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_1419fc270((longlong)param_1);
    FUN_1419f89a0(param_1);
  }
  return;
}




ulonglong FUN_1419fe7f0(int *param_1)

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




int FUN_1419fe850(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




bool FUN_1419fe880(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1419fe8c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fe8e2;
  }
  lVar2 = *plVar1;
LAB_1419fe8e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419fe900(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fe922;
  }
  lVar2 = *plVar1;
LAB_1419fe922:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1419fe940(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1419fe980(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1419fe9c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fe9e2;
  }
  lVar2 = *plVar1;
LAB_1419fe9e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419fea00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419fea22;
  }
  lVar2 = *plVar1;
LAB_1419fea22:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1419fea40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419feaa0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419feab0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419feae0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419feb10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419feb20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419feb42;
  }
  lVar2 = *plVar1;
LAB_1419feb42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419feb60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419feb82;
  }
  lVar2 = *plVar1;
LAB_1419feb82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419feba0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_1419fec50(longlong param_1,longlong param_2)

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




void FUN_1419fecb0(longlong param_1,longlong *param_2)

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




void FUN_1419fed40(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1419fee00(longlong param_1,longlong param_2)

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




void FUN_1419fee60(longlong param_1,longlong *param_2)

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




longlong * FUN_1419feee0(longlong *param_1)

{
  FUN_1419fdb00(param_1);
  return param_1;
}




void FUN_1419fef00(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419fef24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419fef90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x2d) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x2d) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x2d);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x2d);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x2d);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x2d);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419fefb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419ff080(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1419ff100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x2d) == '\0') {
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




void FUN_1419ff160(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 << 5);
  return;
}




longlong * FUN_1419ff1d0(longlong *param_1,longlong param_2)

{
  FUN_1419fdd20(param_1,param_2);
  return param_1;
}




void FUN_1419ff1f0(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x2d) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x2d);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x2d);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x2d);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x2d);
    }
    if (*(char *)(param_1[1] + 0x2d) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x2d) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419ff222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1419ff290(longlong *param_1,longlong param_2)

{
  FUN_1419fdd90(param_1,param_2);
  return param_1;
}




void FUN_1419ff2b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419ff2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419ff360(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141a277f0);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1419ff400(longlong *param_1)

{
  FUN_1419fde40(param_1);
  return param_1;
}




undefined8 * FUN_1419ff420(undefined8 *param_1)

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




undefined8 * FUN_1419ff460(undefined8 *param_1)

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




void FUN_1419ff4a0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_1419fc270((longlong)pvVar1);
    FUN_1419f89a0(pvVar1);
    *param_1 = 0;
  }
  return;
}




void FUN_1419ff500(longlong *param_1,uint param_2)

{
  FUN_1419fdd20(param_1,(ulonglong)param_2);
  return;
}




void * FUN_1419ff530(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419ff580(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419ff650(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419ff690(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419ff6d0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_1419fcde0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_1419fcde0(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_1419fcde0(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_1419ff770(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = param_2;
  do {
    lVar5 = lVar6 * 2 + 2;
    if (param_3 <= lVar5) {
      if (lVar5 == param_3) {
        *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
        lVar6 = param_3 + -1;
      }
      FUN_1419fe620(param_1,lVar6,param_2,param_4);
      return;
    }
    lVar1 = *(longlong *)(param_1 + lVar5 * 8);
    lVar2 = *(longlong *)(param_1 + -8 + lVar5 * 8);
    if (lVar1 != 0) {
      if (lVar2 != 0) {
        uVar3 = FUN_1419f2b60(lVar1);
        uVar4 = FUN_1419f2b60(lVar2);
        if ((int)uVar3 == (int)uVar4) {
          uVar3 = FUN_1419f26d0(lVar1);
          uVar4 = FUN_1419f26d0(lVar2);
          bVar7 = (uint)uVar3 < (uint)uVar4;
        }
        else {
          uVar3 = FUN_1419f2b60(lVar1);
          uVar4 = FUN_1419f2b60(lVar2);
          bVar7 = (int)uVar4 < (int)uVar3;
        }
        if (!bVar7) goto LAB_1419ff812;
      }
      lVar5 = lVar6 * 2 + 1;
    }
LAB_1419ff812:
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
    lVar6 = lVar5;
  } while( true );
}




void * FUN_1419ff880(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1419ff8c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

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




void FUN_1419ff950(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

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




void FUN_1419ffa30(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  *param_3 = *param_1;
  FUN_1419ff770((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




void FUN_1419ffa60(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,undefined *param_5)

{
  *param_3 = *param_1;
  FUN_1419ff950((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




void FUN_1419ffa90(longlong param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0x1e;
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x30) = uVar1 / 1000;
    FUN_1419fcf30(param_1,'\x01');
  }
  return;
}




longlong FUN_1419ffae0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419ffb02;
  }
  lVar2 = *plVar1;
LAB_1419ffb02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419ffb20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419ffb42;
  }
  lVar2 = *plVar1;
LAB_1419ffb42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419ffb60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ffb80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ffba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ffbc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ffbe0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ffc00(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419ffc00(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_1419ffc50(longlong param_1,ulonglong param_2)

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
      FUN_1419fd6c0();
    }
    lVar1 = FUN_1419fed40(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_1419ffcc0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1419ffcf0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1419ffcf0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




longlong * FUN_1419ffd40(longlong *param_1)

{
  FUN_1419fdb00(param_1);
  return param_1;
}




longlong * FUN_1419ffd60(longlong *param_1)

{
  FUN_1419fef00(param_1);
  return param_1;
}




longlong * FUN_1419ffd80(longlong *param_1)

{
  FUN_1419fef90(param_1);
  return param_1;
}




undefined8 FUN_1419ffda0(longlong param_1,ulonglong param_2)

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
      FUN_1419fd8e0();
    }
    lVar1 = FUN_1419feba0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_1419ffe00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419ffe80(undefined8 *param_1)

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




undefined8 * FUN_1419ffec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419fff40(undefined8 *param_1)

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




undefined8 * FUN_1419fff80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419fffc0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419fef00(param_1);
  return param_2;
}




longlong * FUN_1419ffff0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141a0005a;
  }
  _invalid_parameter_noinfo();
LAB_141a0005a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_141a00090(longlong *param_1,longlong param_2)

{
  FUN_1419fdd20(param_1,-param_2);
  return param_1;
}




undefined8 * FUN_141a000b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141a00120(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141a00160(longlong *param_1)

{
  FUN_1419ff1f0(param_1);
  return param_1;
}




longlong * FUN_141a00190(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141a001fa;
  }
  _invalid_parameter_noinfo();
LAB_141a001fa:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141a00230(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141a00290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141a002d0(longlong *param_1)

{
  FUN_1419ff2b0(param_1);
  return param_1;
}




void FUN_141a002f0(void)

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




void FUN_141a00350(void)

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
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x2d) = 0;
  return;
}




undefined8 * FUN_141a003b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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
    *(undefined4 *)(puVar1 + 5) = param_5[4];
    *(undefined1 *)((longlong)puVar1 + 0x2c) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x2d) = 0;
  }
  return puVar1;
}




void FUN_141a00450(void)

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




longlong * FUN_141a004b0(longlong *param_1)

{
  FUN_1419ff1f0(param_1);
  return param_1;
}




longlong * FUN_141a004d0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419fef90(param_1);
  return param_2;
}




longlong * FUN_141a00500(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419fde40(param_1);
  return param_2;
}




void FUN_141a00530(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x2d);
  while (cVar1 == '\0') {
    FUN_141a00530(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x2d);
  }
  return;
}




undefined8 * FUN_141a00580(undefined8 *param_1)

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




undefined8 * FUN_141a005d0(undefined8 *param_1)

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




undefined8 * FUN_141a00620(undefined8 *param_1)

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




void * FUN_141a00680(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141a006f0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141a00760(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141a00810(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141a00850(void *param_1,longlong param_2,void *param_3)

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




void FUN_141a00890(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_1419ff6d0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_1419ff6d0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_1419ff6d0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_1419ff6d0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_1419ff6d0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_141a00970(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_1419ff770(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_141a009f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_1 != param_2) && (plVar6 = param_1 + 1, plVar6 != param_2)) {
    lVar7 = (longlong)plVar6 - (longlong)param_1;
    do {
      lVar1 = *plVar6;
      lVar4 = *param_1;
      plVar5 = plVar6;
      if (lVar1 == 0) {
LAB_141a00ad0:
        while( true ) {
          lVar4 = plVar5[-1];
          if (lVar1 == 0) break;
          if (lVar4 != 0) {
            uVar2 = FUN_1419f2b60(lVar4);
            uVar3 = FUN_1419f2b60(lVar1);
            if ((int)uVar3 == (int)uVar2) {
              uVar2 = FUN_1419f26d0(lVar4);
              uVar3 = FUN_1419f26d0(lVar1);
              bVar8 = (uint)uVar3 < (uint)uVar2;
            }
            else {
              uVar2 = FUN_1419f2b60(lVar4);
              uVar3 = FUN_1419f2b60(lVar1);
              bVar8 = (int)uVar2 < (int)uVar3;
            }
            if (!bVar8) break;
          }
          *plVar5 = plVar5[-1];
          plVar5 = plVar5 + -1;
        }
        *plVar5 = lVar1;
      }
      else {
        if (lVar4 != 0) {
          uVar2 = FUN_1419f2b60(lVar4);
          uVar3 = FUN_1419f2b60(lVar1);
          if ((int)uVar3 == (int)uVar2) {
            uVar2 = FUN_1419f26d0(lVar4);
            uVar3 = FUN_1419f26d0(lVar1);
            bVar8 = (uint)uVar3 < (uint)uVar2;
          }
          else {
            uVar2 = FUN_1419f2b60(lVar4);
            uVar3 = FUN_1419f2b60(lVar1);
            bVar8 = (int)uVar2 < (int)uVar3;
          }
          if (!bVar8) goto LAB_141a00ad0;
        }
        lVar4 = lVar7 >> 3;
        if (0 < lVar4) {
          memmove_s(plVar6 + (1 - lVar4),lVar4 * 8,param_1,lVar4 * 8);
        }
        *param_1 = lVar1;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (plVar6 != param_2);
  }
  return;
}




void FUN_141a00b80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_1419ff8c0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_1419ff8c0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_1419ff8c0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_1419ff8c0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_1419ff8c0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_141a00c60(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_1419ff950(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_141a00ce0(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

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




void FUN_141a00df0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_1419ff770((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1);
  return;
}




void FUN_141a00e20(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_1419ff950((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,uVar1,param_3);
  return;
}




void FUN_141a00e50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419ffc00(param_1,(longlong *)plVar2[2]);
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




void FUN_141a00ed0(undefined8 *param_1)

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




void FUN_141a00f10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1419ffcf0(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_141a00f90(longlong *param_1)

{
  FUN_1419fef00(param_1);
  return param_1;
}




longlong * FUN_141a00fb0(longlong *param_1)

{
  FUN_1419fef90(param_1);
  return param_1;
}




void FUN_141a00fd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a00ff0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a01010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141a01030(undefined8 *param_1)

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




undefined8 * FUN_141a01080(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141a010c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_141a01120(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141a0118d;
  }
  _invalid_parameter_noinfo();
LAB_141a0118d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141a011c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141a01200(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141a01230(undefined8 *param_1)

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




undefined8 * FUN_141a01280(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141a012e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141a01320(longlong *param_1)

{
  FUN_1419ff2b0(param_1);
  return param_1;
}




undefined8 * FUN_141a01340(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141a01390(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a27850);
  }
  FUN_1419fef00(param_3);
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
        goto LAB_141a0157c;
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
LAB_141a0157c:
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
            FUN_1419fec50((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419fecb0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1419fec50((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1419fecb0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419fec50((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1419fecb0((longlong)param_1,plVar7);
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




undefined8 * FUN_141a01750(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_141a01830(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141a002f0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_141a01870(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141a00350();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x2d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141a018b0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0xcccccccccccccca < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
  }
  plVar5 = FUN_141a003b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x2c);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x2c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x2c) = 1;
        *(undefined1 *)(lVar4 + 0x2c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x2c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x2d) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x2c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x2c) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x2d) == '\0') {
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
      if (*(char *)(lVar4 + 0x2c) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x2c) = 1;
        *(undefined1 *)(lVar4 + 0x2c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x2c) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x2d) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x2c) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x2c) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x2d) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x2c);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x2c) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_141a01c10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141a00450();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141a01c50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141a01ca0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar5 + 0x2d) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a27850);
  }
  FUN_1419fef90(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x2d) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x2d) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x2d) == '\0') {
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
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x2c);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x2c);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_141a01e8c;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x2d) == '\0') {
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
    if (*(char *)((longlong)plVar12 + 0x2d) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x2d);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x2d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x2d) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x2d);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x2d);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_141a01e8c:
  if (*(char *)((longlong)plVar5 + 0x2c) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x2c) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x2c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x2c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x2c) = 0;
            FUN_1419ff100((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x2d) == '\0') {
            if ((*(char *)(*plVar11 + 0x2c) != '\x01') || (*(char *)(plVar11[2] + 0x2c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x2c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x2c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x2c) = 0;
                FUN_1419fdaa0((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x2c) = *(undefined1 *)((longlong)plVar10 + 0x2c);
              *(undefined1 *)((longlong)plVar10 + 0x2c) = 1;
              *(undefined1 *)(plVar11[2] + 0x2c) = 1;
              FUN_1419ff100((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x2c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x2c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x2c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x2c) = 0;
            FUN_1419fdaa0((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x2d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x2c) != '\x01') || (*(char *)(*plVar11 + 0x2c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x2c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x2c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x2c) = 0;
                FUN_1419ff100((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x2c) = *(undefined1 *)((longlong)plVar10 + 0x2c);
              *(undefined1 *)((longlong)plVar10 + 0x2c) = 1;
              *(undefined1 *)(*plVar11 + 0x2c) = 1;
              FUN_1419fdaa0((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x2c) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x2c) = 1;
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




void FUN_141a02060(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x2d);
  while (cVar1 == '\0') {
    FUN_141a00530(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x2d);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_141a020e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141a02130(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141a27850);
  }
  FUN_1419fde40(param_3);
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
        goto LAB_141a0231c;
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
LAB_141a0231c:
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
            FUN_1419fee00((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1419fee60((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_1419fee00((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_1419fee60((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1419fee00((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_1419fee60((longlong)param_1,plVar10);
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




undefined8 * FUN_141a024f0(undefined8 *param_1)

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




undefined8 * FUN_141a02540(undefined8 *param_1)

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




undefined8 * FUN_141a02590(undefined8 *param_1)

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




void FUN_141a02620(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_141a02750(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141a02790(void *param_1,longlong param_2,void *param_3)

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




void FUN_141a027d0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar9 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_141a00890(param_2,plVar9,param_3 + -1,param_4);
  plVar6 = plVar9;
  do {
    do {
      plVar10 = plVar6;
      if (plVar10 <= param_2) goto joined_r0x000141a028f7;
      lVar1 = plVar10[-1];
      lVar2 = *plVar10;
      plVar6 = plVar10 + -1;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141a028f7;
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (bVar11) goto joined_r0x000141a028f7;
      }
      lVar1 = *plVar10;
      lVar2 = *plVar6;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    uVar4 = FUN_1419f2b60(lVar1);
    uVar5 = FUN_1419f2b60(lVar2);
    if ((int)uVar4 == (int)uVar5) {
      uVar4 = FUN_1419f26d0(lVar1);
      uVar5 = FUN_1419f26d0(lVar2);
      bVar11 = (uint)uVar4 < (uint)uVar5;
    }
    else {
      uVar4 = FUN_1419f2b60(lVar1);
      uVar5 = FUN_1419f2b60(lVar2);
      bVar11 = (int)uVar5 < (int)uVar4;
    }
  } while (!bVar11);
joined_r0x000141a028f7:
  do {
    do {
      plVar9 = plVar9 + 1;
      plVar6 = plVar9;
      plVar8 = plVar10;
      if (param_3 <= plVar9) goto joined_r0x000141a029d3;
      lVar1 = *plVar9;
      lVar2 = *plVar10;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141a029d3;
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (bVar11) goto joined_r0x000141a029d3;
      }
      lVar1 = *plVar10;
      lVar2 = *plVar9;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    uVar4 = FUN_1419f2b60(lVar1);
    uVar5 = FUN_1419f2b60(lVar2);
    if ((int)uVar4 == (int)uVar5) {
      uVar4 = FUN_1419f26d0(lVar1);
      uVar5 = FUN_1419f26d0(lVar2);
      bVar11 = (uint)uVar4 < (uint)uVar5;
    }
    else {
      uVar4 = FUN_1419f2b60(lVar1);
      uVar5 = FUN_1419f2b60(lVar2);
      bVar11 = (int)uVar5 < (int)uVar4;
    }
  } while (!bVar11);
joined_r0x000141a029d3:
  do {
    plVar7 = plVar8;
    plVar3 = plVar6;
    plVar6 = plVar10;
    if (param_3 <= plVar3) goto joined_r0x000141a02abf;
    lVar1 = *plVar7;
    lVar2 = *plVar3;
    if (lVar1 == 0) {
LAB_141a02a3b:
      lVar1 = *plVar3;
      lVar2 = *plVar7;
      if (lVar1 != 0) {
        if (lVar2 != 0) {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          if ((int)uVar4 == (int)uVar5) {
            uVar4 = FUN_1419f26d0(lVar1);
            uVar5 = FUN_1419f26d0(lVar2);
            bVar11 = (uint)uVar4 < (uint)uVar5;
          }
          else {
            uVar4 = FUN_1419f2b60(lVar1);
            uVar5 = FUN_1419f2b60(lVar2);
            bVar11 = (int)uVar5 < (int)uVar4;
          }
          if (!bVar11) goto LAB_141a02a92;
        }
joined_r0x000141a02abf:
        for (; param_2 < plVar10; plVar10 = plVar10 + -1) {
          plVar6 = plVar6 + -1;
          lVar1 = *plVar6;
          lVar2 = *plVar7;
          if (lVar1 == 0) {
LAB_141a02b2c:
            lVar1 = *plVar7;
            lVar2 = *plVar6;
            if (lVar1 != 0) {
              if (lVar2 == 0) break;
              uVar4 = FUN_1419f2b60(lVar1);
              uVar5 = FUN_1419f2b60(lVar2);
              if ((int)uVar4 == (int)uVar5) {
                uVar4 = FUN_1419f26d0(lVar1);
                uVar5 = FUN_1419f26d0(lVar2);
                bVar11 = (uint)uVar4 < (uint)uVar5;
              }
              else {
                uVar4 = FUN_1419f2b60(lVar1);
                uVar5 = FUN_1419f2b60(lVar2);
                bVar11 = (int)uVar5 < (int)uVar4;
              }
              if (bVar11) break;
            }
            plVar7 = plVar7 + -1;
            if (plVar7 != plVar6) {
              lVar1 = *plVar7;
              *plVar7 = *plVar6;
              *plVar6 = lVar1;
            }
          }
          else if (lVar2 != 0) {
            uVar4 = FUN_1419f2b60(lVar1);
            uVar5 = FUN_1419f2b60(lVar2);
            if ((int)uVar4 == (int)uVar5) {
              uVar4 = FUN_1419f26d0(lVar1);
              uVar5 = FUN_1419f26d0(lVar2);
              bVar11 = (uint)uVar4 < (uint)uVar5;
            }
            else {
              uVar4 = FUN_1419f2b60(lVar1);
              uVar5 = FUN_1419f2b60(lVar2);
              bVar11 = (int)uVar5 < (int)uVar4;
            }
            if (!bVar11) goto LAB_141a02b2c;
          }
        }
        if (plVar10 == param_2) {
          if (plVar3 == param_3) {
            *param_1 = plVar7;
            param_1[1] = plVar9;
            return;
          }
          if ((plVar9 != plVar3) && (plVar7 != plVar9)) {
            lVar1 = *plVar7;
            *plVar7 = *plVar9;
            *plVar9 = lVar1;
          }
          plVar9 = plVar9 + 1;
          plVar6 = plVar3 + 1;
          plVar8 = plVar7 + 1;
          if (plVar7 != plVar3) {
            lVar1 = *plVar7;
            *plVar7 = *plVar3;
            *plVar3 = lVar1;
          }
        }
        else {
          plVar10 = plVar10 + -1;
          if (plVar3 == param_3) {
            plVar8 = plVar7 + -1;
            if (plVar10 != plVar8) {
              lVar1 = *plVar10;
              *plVar10 = *plVar8;
              *plVar8 = lVar1;
            }
            plVar9 = plVar9 + -1;
            plVar6 = plVar3;
            if (plVar8 != plVar9) {
              lVar1 = *plVar8;
              *plVar8 = *plVar9;
              *plVar9 = lVar1;
            }
          }
          else {
            if (plVar3 != plVar10) {
              lVar1 = *plVar3;
              *plVar3 = *plVar10;
              *plVar10 = lVar1;
            }
            plVar6 = plVar3 + 1;
            plVar8 = plVar7;
          }
        }
        goto joined_r0x000141a029d3;
      }
LAB_141a02a92:
      plVar8 = plVar9 + 1;
      if (plVar9 != plVar3) {
        lVar1 = *plVar9;
        *plVar9 = *plVar3;
        *plVar3 = lVar1;
      }
    }
    else {
      plVar8 = plVar9;
      if (lVar2 != 0) {
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (!bVar11) goto LAB_141a02a3b;
      }
    }
    plVar6 = plVar3 + 1;
    plVar9 = plVar8;
    plVar8 = plVar7;
  } while( true );
}




void FUN_141a02c90(longlong param_1,longlong param_2)

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
      FUN_1419ff770(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_141a02d10(longlong *param_1,longlong *param_2)

{
  FUN_141a009f0(param_1,param_2);
  return;
}




void FUN_141a02d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

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
  FUN_141a00b80(param_2,puVar7,param_3 + -1,param_4);
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
joined_r0x000141a02df3:
  puVar2 = puVar8;
  puVar8 = puVar9;
  puVar5 = puVar4;
  if (param_3 <= puVar2) {
joined_r0x000141a02e33:
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
    goto joined_r0x000141a02df3;
  }
  cVar3 = (*(code *)param_4)(*puVar4,*puVar2);
  puVar6 = puVar7;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)param_4)(*puVar2,*puVar4);
    if (cVar3 != '\0') goto joined_r0x000141a02e33;
    puVar6 = puVar7 + 1;
    if (puVar7 != puVar2) {
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar7 = puVar6;
  puVar8 = puVar2 + 1;
  goto joined_r0x000141a02df3;
}




void FUN_141a02f60(longlong param_1,longlong param_2,undefined *param_3)

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
      FUN_1419ff950(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_141a02ff0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1419ff770((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1);
  }
  return;
}




void FUN_141a03030(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    uVar1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1419ff950((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,uVar1,param_3);
  }
  return;
}




undefined8 * FUN_141a030b0(undefined8 *param_1)

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




undefined8 * FUN_141a03110(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141a03160(undefined8 *param_1,undefined8 *param_2)

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




ulonglong FUN_141a031b0(longlong *param_1)

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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141a03227;
  }
  _invalid_parameter_noinfo();
LAB_141a03227:
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




undefined8 * FUN_141a032a0(undefined8 *param_1)

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




void FUN_141a03300(undefined8 *param_1)

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




undefined8 * FUN_141a03340(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141a03390(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141a033e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a03400(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a03420(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141a03440(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141a00e50((longlong)param_1);
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
    FUN_141a01390(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141a03630(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141a01750(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_141a03650(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
  }
  plVar5 = FUN_1419ffe00(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_141a03990(longlong *param_1)

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
  FUN_141a03440(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141a03a00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141a03ac0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141a27738);
  }
  plVar5 = FUN_1419ffec0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_141a03e00(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x2d) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x2d) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_141a03f5d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141a03f8c;
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
      if (*(char *)((longlong)plVar6 + 0x2d) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x2d) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x2d);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x2d);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x2d);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x2d);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x2d) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x2d) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_141a03f5d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141a018b0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141a03f8c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_141a03fb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141a02060((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x2d) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x2d) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x2d);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x2d);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x2d);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x2d);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_141a01ca0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_141a04160(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141a00f10((longlong)param_1);
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
    FUN_141a02130(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141a04310(undefined8 *param_1)

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




undefined8 * FUN_141a04360(undefined8 *param_1)

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




undefined8 * FUN_141a043b0(undefined8 *param_1)

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




void FUN_141a04400(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_141a04550(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_141a04590(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141a045d0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_1419ff770((longlong)param_1,0,lVar2 + -8 >> 3,lVar1);
  }
  return;
}




void FUN_141a04640(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_1419ff950((longlong)param_1,0,lVar2 + -8 >> 3,uVar1,param_3);
  }
  return;
}




undefined8 FUN_141a046b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int7 iVar7;
  longlong *extraout_RAX;
  char *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110);
  if (lVar3 >> 3 == 0) {
    iVar7 = (int7)(lVar3 >> 0xb);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x110);
    lVar3 = 0;
    if (*(longlong **)(param_1 + 0x118) < plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0xf8);
    uVar10 = 0;
    while( true ) {
      plVar2 = *(longlong **)(param_1 + 0x118);
      if (plVar2 < *(longlong **)(param_1 + 0x110)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(param_1 + 0xf8);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar6)) {
        _invalid_parameter_noinfo();
        plVar6 = extraout_RAX;
      }
      if ((plVar8 == plVar2) || (7 < uVar10)) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      pcVar4 = (char *)FUN_1419f2700(*plVar8);
      uVar5 = FUN_1419f2b60(*plVar8);
      plVar6 = (longlong *)FUN_141a10290(param_2,uVar10,(int)uVar5,pcVar4);
      if ((char)plVar6 == '\0') break;
      uVar10 = uVar10 + 1;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar8 = plVar8 + 1;
    }
    iVar7 = (int7)((ulonglong)plVar6 >> 8);
  }
  return CONCAT71(iVar7,1);
}




bool FUN_141a04860(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 < *(longlong **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
  if (*(longlong **)(param_1 + 0x118) < plVar4) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0xf8);
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 < *(longlong **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  for (; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0xf8))) {
    _invalid_parameter_noinfo();
  }
  return plVar4 != plVar3;
}




longlong * FUN_141a04930(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141a04a8d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141a04abc;
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
      goto LAB_141a04a8d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141a03650(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141a04abc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_141a04ae0(longlong *param_1,uint *param_2)

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
  
  FUN_141a01750(param_1,&local_38,param_2);
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
  FUN_141a03440(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_141a04c20(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141a04cf0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141a04d80(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void FUN_141a04e70(longlong *param_1)

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




longlong * FUN_141a04f30(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x2d) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x2d) == '\0');
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




longlong * FUN_141a05000(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141a0515d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141a0518c;
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
      goto LAB_141a0515d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141a03ac0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141a0518c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_141a051b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a051d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a051f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141a05240(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_141a018b0(param_1,param_2,'\x01',(undefined8 *)param_1[6],param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141a018b0(param_1,param_2,'\x01',puVar3,param_4);
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
          FUN_141a018b0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),param_4);
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
          if (*(char *)((longlong)local_30 + 0x2d) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x2d) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x2d);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x2d);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x2d);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x2d);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x2d) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x2d) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x2d) != '\0') {
              FUN_141a018b0(param_1,param_2,'\0',plVar7,param_4);
              return param_2;
            }
            FUN_141a018b0(param_1,param_2,'\x01',(undefined8 *)param_3[1],param_4);
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
          if (*(char *)((longlong)local_30 + 0x2d) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x2d) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x2d);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x2d);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x2d);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x2d);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x2d) != '\0') {
              FUN_141a018b0(param_1,param_2,'\0',(undefined8 *)param_3[1],param_4);
              return param_2;
            }
            FUN_141a018b0(param_1,param_2,'\x01',plVar9,param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_141a03e00(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_141a05560(longlong *param_1)

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
  FUN_141a03fb0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_141a055d0(longlong *param_1)

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
  FUN_141a04160(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141a05670(undefined8 *param_1)

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




void FUN_141a056c0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1419fd6c0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1419fed40(param_1 + 0x10,uVar8);
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
      FUN_141a04550(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141a04550(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141a006f0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_141a05970(undefined8 *param_1)

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




undefined8 * FUN_141a059c0(undefined8 *param_1)

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




void FUN_141a05a10(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_1419fd8e0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1419feba0(param_1 + 0x10,uVar8);
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
      FUN_141a04590(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_141a04590(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141a00760(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_141a05cb0(undefined8 *param_1,longlong param_2)

{
  FUN_141a045d0(param_1,param_2);
  return;
}




void FUN_141a05cd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0xe8);
  lVar7 = 0;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  do {
    while( true ) {
      while( true ) {
        plVar5 = *(longlong **)(param_1 + 0xe8);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xb8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar5) {
          FUN_141a00e50(param_1 + 0xb8);
          FUN_141a04e70((longlong *)(param_1 + 0xf8));
          FUN_141a00f10(param_1 + 0x168);
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = lVar7;
        }
        else {
          lVar6 = *plVar1;
        }
        if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (plVar4[4] != 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
          }
          else {
            lVar6 = *plVar1;
          }
          if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_1419f7360(plVar4[4]);
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
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
      bVar8 = plVar5 == (longlong *)plVar4[2];
      plVar5 = plVar4;
    } while (bVar8);
  } while( true );
}




void FUN_141a05e80(longlong param_1)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  uVar1 = 0xfffffffffffffffe;
  FUN_141a101d0(local_418);
  FUN_141a10250((longlong)local_418,2,0);
  FUN_141a046b0(param_1,(longlong)local_418);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_418,0,uVar1);
  FUN_141a10220((undefined8 *)local_418);
  return;
}




undefined8 FUN_141a05ef0(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xe8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0xe8);
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
  puVar8 = *(undefined8 **)(param_1 + 0xe8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xe8);
    local_28 = *(longlong *)(param_1 + 0xb8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xe8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0xb8))) {
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




void FUN_141a06010(longlong *param_1)

{
  FUN_141a03990(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141a06040(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  undefined8 *puStack_40;
  uint local_38 [8];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x2d) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x2d) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  local_58 = plVar6;
  puStack_50 = puVar4;
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_38[0] = *param_2;
    local_68 = 0;
    local_48 = local_58;
    puStack_40 = puStack_50;
    local_64 = 0;
    local_5c = 0;
    local_60 = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    plVar3 = FUN_141a05240(param_1,(longlong *)&local_68,(longlong *)&local_48,local_38);
    plVar6 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
    local_58 = plVar6;
    puStack_50 = puVar4;
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




void FUN_141a06170(longlong *param_1)

{
  FUN_141a05560(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a061a0(longlong *param_1)

{
  FUN_141a055d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141a061d0(undefined8 *param_1)

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
  lVar2 = FUN_141a002f0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141a06250(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141a056c0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141a06344;
  }
  _invalid_parameter_noinfo();
LAB_141a06344:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141a06380(undefined8 *param_1)

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
  lVar2 = FUN_141a00350();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x2d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141a06400(undefined8 *param_1)

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
  lVar2 = FUN_141a00450();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141a06480(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_141a05a10((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141a06574;
  }
  _invalid_parameter_noinfo();
LAB_141a06574:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_141a065b0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_141a06687:
      if (1 < lVar2) {
        FUN_141a009f0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_141a02c90((longlong)param_1,(longlong)param_2);
        FUN_141a045d0(param_1,(longlong)param_2);
        return;
      }
      goto LAB_141a06687;
    }
    FUN_141a027d0(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_141a065b0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_141a065b0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_141a066e0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_141a067a5:
      if (1 < lVar1) {
        FUN_141a00ce0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_141a02f60((longlong)param_1,(longlong)param_2,param_4);
        FUN_141a04640(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_141a067a5;
    }
    FUN_141a02d30(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_141a066e0(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_141a066e0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_141a06800(longlong *param_1)

{
  FUN_141a03990(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a06830(longlong *param_1)

{
  FUN_141a05560(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a06860(longlong *param_1)

{
  FUN_141a055d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141a06890(undefined8 *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  *param_1 = vexillumarenic::CVexillumArenicMgr::vftable;
  puVar2 = (ulonglong *)param_1[0x17];
  uVar9 = 0;
  plVar3 = *(longlong **)param_1[0x1d];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar8 = plVar3;
          plVar3 = (longlong *)param_1[0x1d];
          if ((puVar2 == (ulonglong *)0x0) || (puVar2 != (ulonglong *)param_1[0x17])) {
            _invalid_parameter_noinfo();
          }
          if (plVar8 == plVar3) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x1d] + 8) + 0x29);
            plVar3 = *(longlong **)(param_1[0x1d] + 8);
            while (cVar1 == '\0') {
              FUN_1419ffc00(param_1 + 0x17,(longlong *)plVar3[2]);
              plVar8 = (longlong *)*plVar3;
              operator_delete(plVar3);
              plVar3 = plVar8;
              cVar1 = *(char *)((longlong)plVar8 + 0x29);
            }
            *(undefined8 *)(param_1[0x1d] + 8) = param_1[0x1d];
            param_1[0x1e] = 0;
            *(undefined8 *)param_1[0x1d] = param_1[0x1d];
            *(undefined8 *)(param_1[0x1d] + 0x10) = param_1[0x1d];
            while (uVar7 = (uint)uVar9, uVar7 < 3) {
              lVar10 = (longlong)(int)uVar7;
              if (param_1[lVar10 * 4 + 0xb] != 0) {
                pvVar5 = (void *)param_1[lVar10 * 4 + 0xb];
                if (pvVar5 != (void *)0x0) {
                  FUN_1419fc270((longlong)pvVar5);
                  FUN_1419f89a0(pvVar5);
                }
                param_1[lVar10 * 4 + 0xb] = 0;
              }
              uVar9 = (ulonglong)(uVar7 + 1);
            }
            puVar4 = (undefined8 *)param_1[8];
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            plVar3 = param_1 + 0x2d;
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x33] + 8) + 0x1d);
            plVar8 = *(longlong **)(param_1[0x33] + 8);
            while (cVar1 == '\0') {
              FUN_1419ffcf0(plVar3,(longlong *)plVar8[2]);
              plVar6 = (longlong *)*plVar8;
              operator_delete(plVar8);
              plVar8 = plVar6;
              cVar1 = *(char *)((longlong)plVar6 + 0x1d);
            }
            *(undefined8 *)(param_1[0x33] + 8) = param_1[0x33];
            param_1[0x34] = 0;
            *(undefined8 *)param_1[0x33] = param_1[0x33];
            *(undefined8 *)(param_1[0x33] + 0x10) = param_1[0x33];
            puStack_50 = (undefined8 *)param_1[0x33];
            local_58 = *plVar3;
            puStack_40 = (undefined8 *)*puStack_50;
            local_48 = local_58;
            FUN_141a04160(plVar3,local_38,&local_48,&local_58);
            operator_delete((void *)param_1[0x33]);
            param_1[0x33] = 0;
            param_1[0x34] = 0;
            operator_delete((void *)*plVar3);
            plVar3 = param_1 + 0x25;
            puStack_40 = (undefined8 *)param_1[0x2b];
            local_58 = *plVar3;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_141a03fb0(plVar3,local_38,&local_58,&local_48);
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
            plVar3 = param_1 + 0x17;
            puStack_40 = (undefined8 *)param_1[0x1d];
            local_58 = *plVar3;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_141a03440(plVar3,local_38,&local_58,&local_48);
            operator_delete((void *)param_1[0x1d]);
            param_1[0x1d] = 0;
            param_1[0x1e] = 0;
            operator_delete((void *)*plVar3);
            return;
          }
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar11 = uVar9;
          }
          else {
            uVar11 = *puVar2;
          }
          if (plVar8 == *(longlong **)(uVar11 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar4 = (undefined8 *)plVar8[4];
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar8;
        }
        plVar3 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar8 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x29);
          plVar3 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      plVar3 = (longlong *)plVar8[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar6 = plVar3;
      plVar3 = plVar6;
      if (plVar8 != (longlong *)plVar6[2]) break;
      plVar3 = (longlong *)plVar6[1];
      plVar8 = plVar6;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




int FUN_141a06c60(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = FUN_141a05ef0(param_1,param_2);
  if (lVar3 == 0) {
LAB_141a06d3b:
    iVar6 = -1;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x110);
    iVar6 = 0;
    if (*(longlong **)(param_1 + 0x118) < plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0xf8);
    while( true ) {
      plVar2 = *(longlong **)(param_1 + 0x118);
      if (plVar2 < *(longlong **)(param_1 + 0x110)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xf8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar5 == plVar2) goto LAB_141a06d3b;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      if (*(longlong **)(lVar3 + 0x20) <= plVar5) {
        _invalid_parameter_noinfo();
      }
      uVar4 = FUN_1419f26d0(*plVar5);
      if ((uint)uVar4 == param_2) break;
      iVar6 = iVar6 + 1;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      if (*(longlong **)(lVar3 + 0x20) <= plVar5) {
        _invalid_parameter_noinfo();
      }
      plVar5 = plVar5 + 1;
    }
  }
  return iVar6;
}




undefined4 FUN_141a06d60(longlong param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_141a05ef0(param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1419f6790(lVar2,param_3);
  }
  return uVar1;
}




void FUN_141a06da0(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  CMsg local_438 [1040];
  
  if ((param_2 != 0) && (0 < param_3)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    lVar3 = FUN_141a05ef0(param_1,uVar1);
    if (lVar3 != 0) {
      lVar4 = FUN_1419f7290(lVar3);
      FUN_141a0fd10(local_438);
      lVar7 = *(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x18);
      lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
      uVar2 = FUN_1419f6790(lVar3,param_2);
      uVar5 = FUN_141a0fdc0(local_438,uVar2,(short)(lVar7 >> 2) - (short)(lVar7 >> 0x3f));
      if ((char)uVar5 == '\0') {
        FUN_141a0fd60((undefined8 *)local_438);
      }
      else {
        iVar9 = 0;
        for (uVar8 = (ulonglong)(param_3 * 8 + -8); (iVar9 < 8 && (uVar8 < (ulonglong)((*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x18)) / 0x18)));
            uVar8 = uVar8 + 1) {
          uVar6 = FUN_141a0ff30((longlong)local_438,(char *)(*(longlong *)(lVar4 + 0x18) + 4 + uVar8 * 0x18),
                                *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + 0x14 + uVar8 * 0x18));
          if ((char)uVar6 == '\0') break;
          iVar9 = iVar9 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_438);
        FUN_141a0fd60((undefined8 *)local_438);
      }
    }
  }
  return;
}




void FUN_141a06f20(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int local_res18 [2];
  undefined4 local_res20 [2];
  CMsg local_448 [1040];
  
  FUN_141a0fd10(local_448);
  FUN_141a0fec0(local_448);
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 3 != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
      if (((*(int *)(param_1 + 0xb0) == 0) && (uVar4 != 0)) && (lVar6 = FUN_141a05ef0(param_1,uVar4), lVar6 != 0)) {
        uVar7 = FUN_1419f2b60(lVar6);
        FUN_141a100e0((longlong)local_448,(int)uVar7);
      }
      plVar13 = *(longlong **)(param_1 + 0x110);
      if (*(longlong **)(param_1 + 0x118) < plVar13) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 0xf8);
      while( true ) {
        lVar6 = 0;
        plVar2 = *(longlong **)(param_1 + 0x118);
        if (plVar2 < *(longlong **)(param_1 + 0x110)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xf8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar13 == plVar2) break;
        if (*(int *)(param_1 + 0xb0) == 0) {
          local_res18[0] = 0;
          local_res20[0] = 0;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          lVar12 = **(longlong **)(param_1 + 8);
          uVar8 = FUN_1419f26d0(*plVar13);
          (**(code **)(lVar12 + 0x90))(*(undefined8 *)(param_1 + 8),uVar8 & 0xffffffff,1,local_res18,local_res20);
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar6 = *plVar1;
          }
          if (*(longlong **)(lVar6 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          lVar6 = (longlong)local_res18[0];
          iVar5 = FUN_1419f27d0(*plVar13);
          uVar7 = FUN_1419f2b60(*plVar13);
          pcVar9 = (char *)FUN_1419f2700(*plVar13);
          uVar8 = FUN_141a0fff0((longlong)local_448,pcVar9,(int)uVar7,iVar5,lVar6,local_res20[0]);
          cVar3 = (char)uVar8;
        }
        else {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = lVar6;
          }
          else {
            lVar12 = *plVar1;
          }
          if (*(longlong **)(lVar12 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar6 = *plVar1;
          }
          if (*(longlong **)(lVar6 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          uVar7 = FUN_1419f28f0(*plVar13);
          uVar10 = FUN_1419f2890(*plVar13);
          iVar5 = FUN_1419f27f0(*plVar13);
          uVar11 = FUN_1419f2b60(*plVar13);
          pcVar9 = (char *)FUN_1419f2700(*plVar13);
          uVar8 = FUN_141a0fff0((longlong)local_448,pcVar9,(int)uVar11,iVar5,(longlong)(int)uVar10,(int)uVar7);
          cVar3 = (char)uVar8;
        }
        if (cVar3 == '\0') break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar1;
        }
        if (*(longlong **)(lVar6 + 0x20) <= plVar13) {
          _invalid_parameter_noinfo();
        }
        plVar13 = plVar13 + 1;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_448);
      FUN_141a0fd60((undefined8 *)local_448);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_448);
  }
  FUN_141a0fd60((undefined8 *)local_448);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a072f0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar5;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  uint *puVar6;
  undefined8 extraout_RAX_04;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong **local_f0;
  char local_e8 [4];
  undefined4 local_e4;
  longlong *local_e0 [3];
  uint *local_c8;
  uint *local_c0;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_60;
  longlong *local_50;
  ushort local_40 [4];
  ushort local_38 [4];
  ushort local_30 [4];
  ushort local_28 [4];
  ulonglong local_20;
  
  local_78 = 0xfffffffffffffffe;
  local_20 = DAT_141a29318 ^ (ulonglong)auStack_118;
  plVar14 = (longlong *)0x0;
  local_98 = 0;
  plVar7 = plVar14;
  uVar10 = local_98;
  while (local_98 = uVar10, uVar10 = (uint)plVar7, uVar10 < 3) {
    local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
    local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
    local_e4 = 0;
    lVar13 = (longlong)(int)uVar10;
    local_f0 = &local_88;
    local_f8 = &local_90;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),*(undefined4 *)(&DAT_141a19e50 + lVar13 * 4),0x2e,&local_e4);
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x48) = 0;
      log_InlineLogDBERROR("table:cq_dynanpc. TarNpc[%u] not found, VexillumArenic be disable.");
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    lVar9 = lVar13 * 0x20;
    *(undefined4 *)(lVar9 + 0x50 + param_1) = local_e4;
    *(undefined2 *)(lVar9 + 100 + param_1) = local_90._0_2_;
    *(undefined2 *)(lVar9 + 0x66 + param_1) = local_88._0_2_;
    uVar10 = uVar10 + 1;
    plVar7 = (longlong *)(ulonglong)uVar10;
    *(uint *)((lVar13 + 3) * 0x20 + param_1) = uVar10;
    puVar4 = FUN_1419fc4f0(*(longlong *)(param_1 + 8));
    *(undefined8 **)(lVar9 + 0x58 + param_1) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      log_InlineLogERROR("CVexillumArenicMgr::InitNPC. m_arTarInfo[nIndex].pTarAttackInfo == NULL");
      return extraout_RAX & 0xffffffffffffff00;
    }
  }
  local_e8[0] = '\0';
  local_e8[1] = 0;
  local_e8[2] = 0;
  local_f0 = (longlong **)local_38;
  local_f8 = (longlong **)local_30;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),0x809,local_28,local_40);
  if ((char)uVar5 == '\0') {
    return uVar5 & 0xffffffffffffff00;
  }
  local_a0 = 0;
  plVar7 = plVar14;
  do {
    uVar10 = (uint)plVar7;
    if (2 < uVar10) {
      local_9c = 0;
      plVar7 = plVar14;
      while (uVar10 = (uint)plVar7, uVar10 < 3) {
        if (local_e8[(int)uVar10] == '\0') {
          log_InlineLogERROR("CVexillumArenicMgr::InitNPC, bSet[%d] == false");
          return extraout_RAX_01 & 0xffffffffffffff00;
        }
        local_9c = uVar10 + 1;
        plVar7 = (longlong *)(ulonglong)local_9c;
      }
      local_90 = operator_new(8);
      local_e0[0] = plVar14;
      if (local_90 != (longlong *)0x0) {
        *local_90 = (longlong)local_e0;
        local_e0[0] = local_90;
      }
      local_c8 = (uint *)0x0;
      local_c0 = (uint *)0x0;
      local_b8 = 0;
      local_88 = local_90;
      (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),0x2f,local_e0);
      puVar11 = local_c8;
      if ((longlong)local_c0 - (longlong)local_c8 >> 2 != 0) {
        local_60 = (longlong *)0x0;
        if (local_c0 < local_c8) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_e0[0];
        local_60 = local_e0[0];
        while( true ) {
          puVar6 = local_c0;
          local_70 = (longlong *)0x0;
          if (local_c0 < local_c8) {
            _invalid_parameter_noinfo();
          }
          local_70 = local_e0[0];
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_e0[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar11 == puVar6) {
            if (local_c8 != (uint *)0x0) {
              operator_delete(local_c8);
            }
            local_c8 = (uint *)0x0;
            local_c0 = (uint *)0x0;
            local_b8 = 0;
            operator_delete(local_e0[0]);
            return CONCAT71((int7)((ulonglong)extraout_RAX_04 >> 8),1);
          }
          local_b0 = 0;
          local_ac = 0;
          local_a4 = 0;
          local_a8 = 0;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar14;
          }
          else {
            plVar12 = (longlong *)*plVar7;
          }
          if ((uint *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          local_b0 = *puVar11;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar14;
          }
          else {
            plVar12 = (longlong *)*plVar7;
          }
          if ((uint *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          FUN_141a04f30((longlong *)(param_1 + 0x128),(longlong *)&local_88,puVar11);
          lVar13 = *(longlong *)(param_1 + 0x158);
          local_50 = *(longlong **)(param_1 + 0x128);
          if ((local_88 == (longlong *)0x0) || (local_88 != local_50)) {
            _invalid_parameter_noinfo();
          }
          if (local_80 != lVar13) break;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar14;
          }
          else {
            plVar12 = (longlong *)*plVar7;
          }
          if ((uint *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*puVar11);
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar14;
          }
          else {
            plVar12 = (longlong *)*plVar7;
          }
          if ((uint *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          puVar6 = (uint *)FUN_141a06040((longlong *)(param_1 + 0x128),puVar11);
          *puVar6 = local_b0;
          puVar6[1] = local_ac;
          puVar6[2] = local_a8;
          puVar6[3] = local_a4;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar12 = plVar14;
          }
          else {
            plVar12 = (longlong *)*plVar7;
          }
          if ((uint *)plVar12[4] <= puVar11) {
            _invalid_parameter_noinfo();
          }
          puVar11 = puVar11 + 1;
        }
        log_InlineLogERROR("CVexillumArenicMgr::InitNPC, iterVlm != m_mapVlmInfo.end()");
        if (local_c8 != (uint *)0x0) {
          operator_delete(local_c8);
        }
        local_c8 = (uint *)0x0;
        local_c0 = (uint *)0x0;
        local_b8 = 0;
        operator_delete(local_e0[0]);
        return extraout_RAX_03 & 0xffffffffffffff00;
      }
      log_InlineLogERROR("CVexillumArenicMgr::InitNPC, vecID.size() <= 0");
      if (local_c8 != (uint *)0x0) {
        operator_delete(local_c8);
      }
      local_c8 = (uint *)0x0;
      local_c0 = (uint *)0x0;
      local_b8 = 0;
      operator_delete(local_e0[0]);
      return extraout_RAX_02 & 0xffffffffffffff00;
    }
    local_94 = 0;
    plVar7 = plVar14;
    while (uVar8 = (uint)plVar7, uVar8 < 3) {
      lVar13 = (longlong)(int)uVar8 * 0x20;
      uVar1 = local_28[(int)uVar10];
      uVar2 = *(ushort *)(lVar13 + 100 + param_1);
      if ((uVar1 <= uVar2) && ((uint)uVar2 < (uint)local_30[(int)uVar10] + (uint)uVar1)) {
        uVar2 = *(ushort *)(lVar13 + 0x66 + param_1);
        if ((local_40[(int)uVar10] <= uVar2) && ((uint)uVar2 < (uint)local_38[(int)uVar10] + (uint)local_40[(int)uVar10])) {
          *(ushort *)(lVar13 + 0x68 + param_1) = uVar1 - 1;
          *(ushort *)(lVar13 + 0x6a + param_1) = local_40[(int)uVar10] - 1;
          *(ushort *)(lVar13 + 0x6c + param_1) = local_30[(int)uVar10] + 2;
          *(ushort *)(lVar13 + 0x6e + param_1) = local_38[(int)uVar10] + 2;
          local_e8[(int)uVar8] = '\x01';
          break;
        }
      }
      local_94 = uVar8 + 1;
      plVar7 = (longlong *)(ulonglong)local_94;
    }
    local_a0 = uVar10 + 1;
    plVar7 = (longlong *)(ulonglong)local_a0;
  } while( true );
}




void FUN_141a078d0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (param_2 != 0) {
    lVar1 = FUN_141a05ef0(param_1,param_2);
    if (lVar1 == 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar4 = 0;
      param_2 = 0;
    }
    else {
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_52 = 0;
      local_50 = 0;
      local_4e = 0;
      local_4c = 0;
      local_4a = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_32 = 0;
      local_30 = 0;
      local_2e = 0;
      local_2c = 0;
      local_2a = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_12 = 0;
      local_10 = 0;
      local_e = 0;
      local_c = 0;
      local_a = 0;
      FUN_1419f2b40(lVar1,&local_68);
      uVar2 = local_54;
      uVar3 = local_52;
      uVar4 = local_34;
      uVar5 = local_32;
      uVar6 = local_14;
      uVar7 = local_12;
    }
    FUN_141a10490(param_3,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}




undefined8 * FUN_141a07a30(undefined8 *param_1)

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
  lVar2 = FUN_141a002f0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141a07ab0(longlong *param_1,undefined8 *param_2)

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
  FUN_141a06250(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_141a07b60(undefined8 *param_1)

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
  lVar2 = FUN_141a00350();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x2d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141a07be0(undefined8 *param_1)

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
  lVar2 = FUN_141a00450();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141a07c60(longlong *param_1,undefined4 *param_2)

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
  FUN_141a06480(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_141a07d10(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a065b0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_141a07d70(longlong *param_1,longlong *param_2,undefined *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a066e0((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_141a07dd0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = vexillumarenic::CVexillumArenicMgr::vftable;
  param_1[1] = param_2;
  puVar3 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x86) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8e) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined2 *)((longlong)param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  FUN_141a07a30(param_1 + 0x17);
  plVar1 = param_1 + 0x1f;
  puVar2 = operator_new(8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar1;
    puVar3 = puVar2;
  }
  *plVar1 = (longlong)puVar3;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_141a07b60(param_1 + 0x25);
  FUN_141a07be0(param_1 + 0x2d);
  param_1[0x35] = 0;
  FUN_141a00e50((longlong)(param_1 + 0x17));
  FUN_141a04e70(plVar1);
  FUN_141a00f10((longlong)(param_1 + 0x2d));
  return param_1;
}




undefined8 * FUN_141a07fa0(undefined8 *param_1,uint param_2)

{
  FUN_141a06890(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141a07fd0(longlong param_1)

{
  rsize_t _DstSize;
  longlong *plVar1;
  ulonglong *puVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  longlong *plVar6;
  longlong lVar7;
  ulonglong extraout_RAX_00;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong extraout_RAX_01;
  void *_Dst;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  longlong *local_478;
  uint local_470 [2];
  longlong *local_468;
  undefined8 local_460;
  longlong local_458 [4];
  char local_438;
  undefined1 local_437 [1022];
  undefined1 local_39;
  ulonglong local_38;
  
  local_460 = 0xfffffffffffffffe;
  local_38 = DAT_141a29318 ^ (ulonglong)auStack_4a8;
  plVar5 = (longlong *)InstanceGet();
  local_438 = '\0';
  memset(local_437,0,0x3ff);
  _snprintf(&local_438,0x3ff,"SELECT * FROM cq_vexillum WHERE type = %u");
  local_39 = 0;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_438);
  if (plVar5 == (longlong *)0x0) {
    local_488 = 0x75;
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),0x1f43);
  local_478 = plVar6;
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6), lVar7 != 1)) {
    (**(code **)*plVar5)(plVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6);
    }
    log_InlineLogERROR("CVexillumArenicMgr::Create(), SQL_SELECT_SYNFLAG_ALL Error!");
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
  *(longlong *)(param_1 + 0x40) = lVar7;
  if (lVar7 == 0) {
    local_488 = 0x82;
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar13 = 0;
  iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
  uVar12 = uVar13;
  if (0 < iVar3) {
    do {
      (**(code **)(*plVar5 + 0x30))(plVar5,(longlong)(int)uVar12);
      plVar8 = FUN_1419f7870(plVar5,*(longlong *)(param_1 + 8),0);
      local_478 = plVar8;
      if (plVar8 == (longlong *)0x0) {
        log_InlineLogERROR("CVexillumArenicMgr::Create(). pSynInfo == NULL");
      }
      else {
        uVar9 = FUN_1419f26d0((longlong)plVar8);
        local_470[0] = (uint)uVar9;
        local_468 = plVar8;
        FUN_141a04930((longlong *)(param_1 + 0xb8),local_458,local_470);
        uVar9 = FUN_1419f2b60((longlong)plVar8);
        if (0 < (int)uVar9) {
          FUN_141a07ab0((longlong *)(param_1 + 0xf8),&local_478);
        }
      }
      uVar11 = (int)uVar12 + 1;
      iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < iVar3);
  }
  (**(code **)*plVar5)(plVar5);
  local_478 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0xf8);
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 < *(longlong **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  lVar7 = *plVar5;
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (*(longlong **)(param_1 + 0x118) < plVar1) {
    _invalid_parameter_noinfo();
  }
  if ((lVar7 == 0) || (lVar7 != *plVar5)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a065b0(plVar1,plVar8,(longlong)plVar8 - (longlong)plVar1 >> 3,local_478._0_1_);
  if ((ulonglong)(*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 3) < 9) goto LAB_141a08300;
  uVar12 = *(ulonglong *)(param_1 + 0x110);
  if (*(ulonglong *)(param_1 + 0x118) < uVar12) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (ulonglong *)*plVar5;
  if (puVar2 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar10 = uVar13;
  }
  else {
    uVar10 = *puVar2;
  }
  _Dst = (void *)(uVar12 + 0x40);
  if (*(void **)(uVar10 + 0x20) < _Dst) {
LAB_141a0827a:
    _invalid_parameter_noinfo();
  }
  else {
    if (puVar2 != (ulonglong *)0x0) {
      uVar13 = *puVar2;
    }
    if (_Dst < *(void **)(uVar13 + 0x18)) goto LAB_141a0827a;
  }
  _Src = *(void **)(param_1 + 0x118);
  if (_Src < *(void **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  if (((plVar5 == (longlong *)0x0) || (_Dst < *(void **)(param_1 + 0x110))) || (*(void **)(param_1 + 0x118) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar7 = *plVar5;
  if ((_Src < *(void **)(param_1 + 0x110)) || (*(void **)(param_1 + 0x118) < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar7 == 0) || (lVar7 != *plVar5)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar7 = *(longlong *)(param_1 + 0x118) - (longlong)_Src >> 3;
    _DstSize = lVar7 * 8;
    if (0 < lVar7) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 0x118) = (void *)(_DstSize + (longlong)_Dst);
  }
LAB_141a08300:
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,2);
  uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,3);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x14) = iVar3 / 100;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,3);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x18) = iVar3 % 100;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,5);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x38) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x38) = 0x1c20;
  }
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,6);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(bool *)(param_1 + 0x48) = iVar3 == 0;
  uVar9 = (**(code **)*plVar6)(plVar6);
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}




undefined8 FUN_141a08440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 extraout_RAX;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_58 [3];
  void *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_res10 = operator_new(8);
  if (local_res10 == (longlong *)0x0) {
    local_58[0] = (longlong *)0x0;
  }
  else {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  uVar4 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = 0;
  plVar5 = *(longlong **)(param_1 + 0x110);
  local_res18 = local_res10;
  if (*(longlong **)(param_1 + 0x118) < plVar5) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(ulonglong **)(param_1 + 0xf8);
  uVar7 = uVar4;
  while ((int)uVar7 < 8) {
    plVar2 = *(longlong **)(param_1 + 0x118);
    if (plVar2 < *(longlong **)(param_1 + 0x110)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0xf8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar2) break;
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar4;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(longlong **)(uVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    uVar3 = FUN_1419f2b60(*plVar5);
    if ((int)uVar3 < 1) break;
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar4;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(longlong **)(uVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    uVar3 = FUN_1419f26d0(*plVar5);
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(int)uVar3);
    FUN_141a07c60((longlong *)local_58,(undefined4 *)&local_res10);
    uVar7 = (ulonglong)((int)uVar7 + 1);
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar4;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(longlong **)(uVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar5 = plVar5 + 1;
  }
  if (local_38 - (longlong)local_40 >> 2 != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),local_58);
  }
  if (local_40 != (void *)0x0) {
    operator_delete(local_40);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = 0;
  operator_delete(local_58[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
}




undefined8 FUN_141a08640(longlong param_1,int param_2,longlong param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_141a10250(param_3,(short)param_4,0);
  if (param_4 == 0) {
    if (param_2 != 0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
      uVar2 = FUN_141a078d0(param_1,uVar1,param_3);
    }
  }
  else if (((param_4 == 7) || (param_4 == 6)) && (param_2 != 0)) {
    uVar2 = FUN_141a10510(param_3,param_2);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_141a086c0(longlong param_1,longlong param_2)

{
  rsize_t _DstSize;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  errno_t eVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  uint7 extraout_var;
  ulonglong uVar8;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  undefined4 extraout_var_00;
  longlong lVar9;
  void *_Dst;
  longlong lVar10;
  longlong local_res10;
  
  if (param_2 == 0) {
LAB_141a086da:
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10 = param_2;
  in_RAX = FUN_1419f2b60(param_2);
  if ((int)in_RAX < 1) goto LAB_141a086da;
  bVar5 = FUN_141a04860(param_1,param_2);
  if (!bVar5) {
    if (7 < (ulonglong)(*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 3)) {
      plVar7 = (longlong *)FUN_141a031b0((longlong *)(param_1 + 0xf8));
      bVar5 = FUN_1419fc990(*plVar7,param_2);
      if (bVar5) {
        return (ulonglong)extraout_var << 8;
      }
    }
    FUN_141a07ab0((longlong *)(param_1 + 0xf8),&local_res10);
  }
  plVar7 = (longlong *)(param_1 + 0xf8);
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  if (puVar1 < *(undefined8 **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  lVar9 = *plVar7;
  if (*(undefined8 **)(param_1 + 0x118) < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((lVar9 == 0) || (lVar9 != *plVar7)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a066e0(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,FUN_1419fc990);
  uVar8 = *(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 3;
  if (uVar8 < 9) goto LAB_141a08894;
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  if (*(ulonglong *)(param_1 + 0x118) < uVar3) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX;
  }
  plVar4 = (longlong *)*plVar7;
  lVar9 = 0;
  if (plVar4 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_00;
    lVar10 = lVar9;
  }
  else {
    lVar10 = *plVar4;
  }
  _Dst = (void *)(uVar3 + 0x40);
  if (*(void **)(lVar10 + 0x20) < _Dst) {
LAB_141a0880e:
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_01;
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *plVar4;
    }
    if (_Dst < *(void **)(lVar9 + 0x18)) goto LAB_141a0880e;
  }
  _Src = *(void **)(param_1 + 0x118);
  if (_Src < *(void **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_02;
  }
  if (((plVar7 == (longlong *)0x0) || (_Dst < *(void **)(param_1 + 0x110))) || (*(void **)(param_1 + 0x118) < _Dst)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_03;
  }
  lVar9 = *plVar7;
  if ((_Src < *(void **)(param_1 + 0x110)) || (*(void **)(param_1 + 0x118) < _Src)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_04;
  }
  if ((lVar9 == 0) || (lVar9 != *plVar7)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_05;
  }
  if (_Dst != _Src) {
    uVar8 = *(longlong *)(param_1 + 0x118) - (longlong)_Src >> 3;
    _DstSize = uVar8 * 8;
    if (0 < (longlong)uVar8) {
      eVar6 = memmove_s(_Dst,_DstSize,_Src,_DstSize);
      uVar8 = CONCAT44(extraout_var_00,eVar6);
    }
    *(void **)(param_1 + 0x118) = (void *)(_DstSize + (longlong)_Dst);
  }
LAB_141a08894:
  return CONCAT71((int7)(uVar8 >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a088b0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  IStringManager *pIVar7;
  char *_Format;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  CMsg *pCVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_628 [32];
  longlong **local_608;
  undefined4 local_600;
  longlong *local_5f8 [3];
  uint *local_5e0;
  uint *local_5d8;
  undefined8 local_5d0;
  uint local_5c8;
  longlong *local_5c0;
  longlong *local_5b8 [2];
  longlong *local_5a8 [2];
  longlong *local_598;
  longlong *local_590;
  longlong *local_580;
  longlong *local_570;
  longlong *local_568;
  undefined8 local_558;
  longlong *local_550;
  CMsg local_538 [1040];
  char local_128 [255];
  undefined1 local_29;
  ulonglong local_28;
  
  local_558 = 0xfffffffffffffffe;
  local_28 = DAT_141a29318 ^ (ulonglong)auStack_628;
  local_5c0 = param_1;
  FUN_1419fcd10((longlong)param_1,'\x01',param_3,param_4);
  tq::MyLogSave("gmlog/emoney_buy","0\t0\t0\t5000\t5007\t0\t0\t%d\t");
  plVar8 = *(longlong **)param_1[0x2b];
  plVar15 = (longlong *)0x0;
  plVar14 = (longlong *)param_1[0x25];
  local_5b8[0] = plVar14;
LAB_141a08940:
  do {
    plVar9 = (longlong *)param_1[0x2b];
    local_5a8[0] = (longlong *)param_1[0x25];
    if ((plVar14 == (longlong *)0x0) || (plVar14 != local_5a8[0])) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar9) {
      local_5c8 = 0;
      plVar8 = plVar15;
      while (uVar11 = (uint)plVar8, uVar11 < 3) {
        lVar10 = (longlong)(int)uVar11;
        *(undefined4 *)(lVar10 * 0x20 + 0x54 + (longlong)param_1) = 0;
        FUN_1419fbdb0(param_1[lVar10 * 4 + 0xb]);
        (**(code **)(*(longlong *)param_1[1] + 0x110))((longlong *)param_1[1],(int)param_1[lVar10 * 4 + 10]);
        (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],(int)param_1[lVar10 * 4 + 10]);
        local_5c8 = uVar11 + 1;
        plVar8 = (longlong *)(ulonglong)local_5c8;
      }
      plVar8 = *(longlong **)param_1[0x1d];
      plVar14 = (longlong *)param_1[0x17];
      local_550 = plVar14;
      do {
        while( true ) {
          while( true ) {
            plVar9 = (longlong *)param_1[0x1d];
            local_590 = (longlong *)param_1[0x17];
            if ((plVar14 == (longlong *)0x0) || (plVar14 != local_590)) {
              _invalid_parameter_noinfo();
            }
            if (plVar8 == plVar9) {
              (**(code **)(*(longlong *)param_1[1] + 0xa0))();
              local_5b8[0] = operator_new(8);
              local_5f8[0] = plVar15;
              if (local_5b8[0] != (longlong *)0x0) {
                *local_5b8[0] = (longlong)local_5f8;
                local_5f8[0] = local_5b8[0];
              }
              local_5e0 = (undefined4 *)0x0;
              local_5d8 = (undefined4 *)0x0;
              local_5d0 = 0;
              local_5a8[0] = local_5b8[0];
              (**(code **)(*(longlong *)param_1[1] + 0xb8))((longlong *)param_1[1],0x809);
              puVar12 = local_5e0;
              local_580 = (longlong *)0x0;
              if (local_5d8 < local_5e0) {
                _invalid_parameter_noinfo();
              }
              plVar8 = local_5f8[0];
              local_580 = local_5f8[0];
              while( true ) {
                puVar2 = local_5d8;
                local_568 = (longlong *)0x0;
                if (local_5d8 < local_5e0) {
                  _invalid_parameter_noinfo();
                }
                local_568 = local_5f8[0];
                if ((plVar8 == (longlong *)0x0) || (plVar8 != local_5f8[0])) {
                  _invalid_parameter_noinfo();
                }
                if (puVar12 == puVar2) break;
                if (plVar8 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar8;
                }
                if ((undefined4 *)plVar14[4] <= puVar12) {
                  _invalid_parameter_noinfo();
                }
                cVar4 = (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],*puVar12);
                if (cVar4 != '\0') {
                  if (plVar8 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    plVar14 = plVar15;
                  }
                  else {
                    plVar14 = (longlong *)*plVar8;
                  }
                  if ((undefined4 *)plVar14[4] <= puVar12) {
                    _invalid_parameter_noinfo();
                  }
                  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],*puVar12);
                }
                if (plVar8 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar8;
                }
                if ((undefined4 *)plVar14[4] <= puVar12) {
                  _invalid_parameter_noinfo();
                }
                puVar12 = puVar12 + 1;
              }
              if (local_5e0 != (undefined4 *)0x0) {
                operator_delete(local_5e0);
              }
              local_5e0 = (uint *)0x0;
              local_5d8 = (uint *)0x0;
              local_5d0 = 0;
              operator_delete(local_5f8[0]);
              FUN_141a101d0(local_538);
              uVar5 = 10;
              pCVar13 = (CMsg *)0x0;
              uVar6 = FUN_141a10250((longlong)local_538,10,0);
              if ((char)uVar6 != '\0') {
                param_4 = (longlong **)0x0;
                pCVar13 = local_538;
                uVar5 = 0x809;
                (**(code **)(*(longlong *)param_1[1] + 0x130))();
              }
              if (param_1[0x23] - param_1[0x22] >> 3 != 0) {
                plVar8 = (longlong *)param_1[0x22];
                local_568 = (longlong *)0x0;
                if ((longlong *)param_1[0x23] < plVar8) {
                  _invalid_parameter_noinfo();
                }
                local_568 = (longlong *)param_1[0x1f];
                if (local_568 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*local_568;
                }
                if ((longlong *)plVar14[4] <= plVar8) {
                  _invalid_parameter_noinfo();
                }
                lVar10 = *plVar8;
                if (lVar10 != 0) {
                  pIVar7 = theInstance();
                  uVar6 = FUN_1419f2b60(lVar10);
                  FUN_1419f2700(lVar10);
                  _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUM_WIN");
                  local_608 = (longlong **)CONCAT44(local_608._4_4_,(int)uVar6);
                  _snprintf(local_128,0x100,_Format);
                  local_29 = 0;
                  local_600 = 0;
                  local_608 = (longlong **)CONCAT62(local_608._2_6_,2000);
                  param_4 = (longlong **)0xff0000;
                  (**(code **)(*(longlong *)param_1[1] + 0x128))((longlong *)param_1[1],0x809,local_128);
                  local_5c0 = operator_new(8);
                  local_5f8[0] = plVar15;
                  if (local_5c0 != (longlong *)0x0) {
                    *local_5c0 = (longlong)local_5f8;
                    local_5f8[0] = local_5c0;
                  }
                  local_5e0 = (uint *)0x0;
                  local_5d8 = (uint *)0x0;
                  local_5d0 = 0;
                  lVar1 = *(longlong *)param_1[1];
                  local_5b8[0] = local_5c0;
                  uVar5 = FUN_1419f26d0(lVar10);
                  uVar5 = uVar5 & 0xffffffff;
                  pCVar13 = (CMsg *)local_5f8;
                  cVar4 = (**(code **)(lVar1 + 0x78))(param_1[1]);
                  puVar12 = local_5e0;
                  if ((cVar4 != '\0') && ((longlong)local_5d8 - (longlong)local_5e0 >> 2 != 0)) {
                    local_580 = (longlong *)0x0;
                    if (local_5d8 < local_5e0) {
                      _invalid_parameter_noinfo();
                    }
                    plVar8 = local_5f8[0];
                    local_580 = local_5f8[0];
                    while( true ) {
                      puVar2 = local_5d8;
                      local_590 = (longlong *)0x0;
                      if (local_5d8 < local_5e0) {
                        _invalid_parameter_noinfo();
                      }
                      local_590 = local_5f8[0];
                      if ((plVar8 == (longlong *)0x0) || (plVar8 != local_5f8[0])) {
                        _invalid_parameter_noinfo();
                      }
                      if (puVar12 == puVar2) break;
                      if (plVar8 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar14 = plVar15;
                      }
                      else {
                        plVar14 = (longlong *)*plVar8;
                      }
                      if ((uint *)plVar14[4] <= puVar12) {
                        _invalid_parameter_noinfo();
                      }
                      uVar5 = (ulonglong)*puVar12;
                      cVar4 = (*(code *)**(undefined8 **)param_1[1])();
                      if (cVar4 != '\0') {
                        if (plVar8 == (longlong *)0x0) {
                          _invalid_parameter_noinfo();
                          plVar14 = plVar15;
                        }
                        else {
                          plVar14 = (longlong *)*plVar8;
                        }
                        if ((uint *)plVar14[4] <= puVar12) {
                          _invalid_parameter_noinfo();
                        }
                        pCVar13 = (CMsg *)0x283d;
                        uVar5 = (ulonglong)*puVar12;
                        (**(code **)(*(longlong *)param_1[1] + 0x68))();
                      }
                      if (plVar8 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar14 = plVar15;
                      }
                      else {
                        plVar14 = (longlong *)*plVar8;
                      }
                      if ((uint *)plVar14[4] <= puVar12) {
                        _invalid_parameter_noinfo();
                      }
                      puVar12 = puVar12 + 1;
                    }
                  }
                  if (local_5e0 != (uint *)0x0) {
                    operator_delete(local_5e0);
                  }
                  local_5e0 = (uint *)0x0;
                  local_5d8 = (uint *)0x0;
                  local_5d0 = 0;
                  operator_delete(local_5f8[0]);
                }
              }
              *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
              FUN_141a08440((longlong)param_1,uVar5,pCVar13,param_4);
              FUN_141a10220((undefined8 *)local_538);
              return;
            }
            if (plVar14 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar9 = plVar15;
            }
            else {
              plVar9 = (longlong *)*plVar14;
            }
            if (plVar8 == (longlong *)plVar9[6]) {
              _invalid_parameter_noinfo();
            }
            lVar10 = plVar8[4];
            if (lVar10 != 0) {
              local_5b8[0] = (longlong *)((ulonglong)local_5b8[0] & 0xffffffff00000000);
              local_5a8[0] = (longlong *)((ulonglong)local_5a8[0] & 0xffffffff00000000);
              lVar1 = *(longlong *)param_1[1];
              uVar5 = FUN_1419f26d0(lVar10);
              local_608 = local_5a8;
              param_4 = local_5b8;
              (**(code **)(lVar1 + 0x90))(param_1[1],uVar5 & 0xffffffff,1);
              FUN_1419f2810(lVar10,local_5b8[0]._0_4_,local_5a8[0]._0_4_);
              lVar1 = *(longlong *)param_1[1];
              uVar5 = FUN_1419f26d0(lVar10);
              (**(code **)(lVar1 + 0x98))(param_1[1],uVar5 & 0xffffffff);
            }
            FUN_1419f6f90(lVar10);
            if (plVar14 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            if (*(char *)((longlong)plVar8 + 0x29) == '\0') break;
            _invalid_parameter_noinfo();
          }
          plVar9 = plVar8;
          plVar3 = (longlong *)plVar8[2];
          if (*(char *)(plVar8[2] + 0x29) != '\0') break;
          do {
            plVar8 = plVar3;
            plVar3 = (longlong *)*plVar8;
            local_570 = plVar8;
          } while (*(char *)(*plVar8 + 0x29) == '\0');
        }
        do {
          plVar8 = (longlong *)plVar9[1];
          if (*(char *)((longlong)plVar8 + 0x29) != '\0') break;
          bVar16 = plVar9 == (longlong *)plVar8[2];
          plVar9 = plVar8;
        } while (bVar16);
      } while( true );
    }
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar9 = plVar15;
    }
    else {
      plVar9 = (longlong *)*plVar14;
    }
    if (plVar8 == (longlong *)plVar9[6]) {
      _invalid_parameter_noinfo();
    }
    (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],*(undefined4 *)((longlong)plVar8 + 0x1c));
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar9 = plVar15;
    }
    else {
      plVar9 = (longlong *)*plVar14;
    }
    if (plVar8 == (longlong *)plVar9[6]) {
      _invalid_parameter_noinfo();
    }
    *(undefined4 *)(plVar8 + 5) = 0;
    *(undefined4 *)((longlong)plVar8 + 0x24) = 0;
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x2d) != '\0') {
      _invalid_parameter_noinfo();
      goto LAB_141a08940;
    }
    plVar9 = plVar8;
    plVar3 = (longlong *)plVar8[2];
    if (*(char *)(plVar8[2] + 0x2d) == '\0') {
      do {
        plVar8 = plVar3;
        plVar3 = (longlong *)*plVar8;
        local_598 = plVar8;
      } while (*(char *)(*plVar8 + 0x2d) == '\0');
    }
    else {
      do {
        plVar8 = (longlong *)plVar9[1];
        if (*(char *)((longlong)plVar8 + 0x2d) != '\0') break;
        bVar16 = plVar9 == (longlong *)plVar8[2];
        plVar9 = plVar8;
      } while (bVar16);
    }
  } while( true );
}




undefined8 * FUN_141a090e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x1b0);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_141a07dd0(puVar1,param_1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141a18388);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_141a07fd0((longlong)puVar1);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




undefined1 * FUN_141a091b0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  CMsg local_428 [1040];
  
  puVar5 = (undefined1 *)register0x00000020;
  if ((*(int *)(param_1 + 0xb0) == 0) && (puVar5 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x58))(), (char)puVar5 != '\0')) {
    puVar5 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    uVar2 = (uint)puVar5;
    if (uVar2 != 0) {
      lVar6 = FUN_141a05ef0(param_1,uVar2);
      if (lVar6 == 0) {
        log_InlineLogERROR("CVexillumArenicMgr::OnRevSuccessVexillum. pSynInfo == NULL");
        puVar5 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
        lVar12 = **(longlong **)(param_1 + 8);
        uVar7 = (**(code **)(lVar12 + 0x30))(*(longlong **)(param_1 + 8),param_2);
        uVar8 = uVar7;
        for (uVar11 = 0; uVar11 < 3; uVar11 = uVar11 + 1) {
          lVar10 = (longlong)(int)uVar11 * 0x20;
          uVar1 = *(ushort *)(lVar10 + 0x68 + param_1);
          if (((int)(uint)uVar1 <= iVar3) && (uVar4 = (uint)*(ushort *)(lVar10 + 0x6c + param_1) + (uint)uVar1, uVar8 = (ulonglong)uVar4, iVar3 < (int)uVar4)) {
            uVar1 = *(ushort *)(lVar10 + 0x6a + param_1);
            if (((int)(uint)uVar1 <= (int)uVar7) &&
               (uVar4 = (uint)*(ushort *)(lVar10 + 0x6e + param_1) + (uint)uVar1, uVar8 = (ulonglong)uVar4, (int)uVar7 < (int)uVar4)) {
              if ((*(uint *)(lVar10 + 0x54 + param_1) == uVar2) &&
                 (uVar8 = FUN_1419f7da0(lVar6,param_2,CONCAT71((int7)((ulonglong)lVar12 >> 8),uVar11 == *(uint *)(param_1 + 0x34)),param_4), (char)uVar8 != '\0'
                 )) {
                uVar2 = *(uint *)(param_1 + 0x34);
                (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
                (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2,((uVar11 == uVar2) + '\x01') * '\x0f');
                FUN_141a101d0(local_428);
                uVar9 = FUN_141a08640(param_1,param_2,(longlong)local_428,7);
                if ((char)uVar9 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_428,param_2,1);
                }
                FUN_141a086c0(param_1,lVar6);
                uVar9 = FUN_141a10220((undefined8 *)local_428);
                return (undefined1 *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              }
              return (undefined1 *)(uVar8 & 0xffffffffffffff00);
            }
          }
        }
        puVar5 = (undefined1 *)(uVar8 & 0xffffffffffffff00);
      }
    }
  }
  return puVar5;
}




void FUN_141a093a0(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    lVar3 = FUN_141a05ef0(param_1,uVar2);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x2a) != '\0')) {
      log_InlineLogERROR("CVexillumArenicMgr::AddMemberMerit. User[%u] Merit[%d]");
    }
    else {
      FUN_1419f7a50(lVar3,param_2,param_3);
      lVar1 = **(longlong **)(param_1 + 8);
      (**(code **)(lVar1 + 0x88))(*(longlong **)(param_1 + 8),param_2,param_3,lVar1,uVar4);
      if (0 < param_4) {
        FUN_1419f2960(lVar3,param_4);
        FUN_141a086c0(param_1,lVar3);
      }
    }
  }
  return;
}




void FUN_141a09470(longlong param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  FUN_141a101d0(local_828);
  FUN_141a10250((longlong)local_828,0,0);
  if (param_2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    FUN_141a078d0(param_1,uVar1,(longlong)local_828);
  }
  FUN_141a046b0(param_1,(longlong)local_828);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_828);
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_141a101d0(local_418);
    uVar2 = FUN_141a10250((longlong)local_418,0xc,*(undefined4 *)((longlong)*(int *)(param_1 + 0x34) * 0x20 + 0x50 + param_1));
    if ((char)uVar2 == '\0') {
      log_InlineLogERROR(&DAT_141a18388);
    }
    else {
      FUN_141a103d0((longlong)local_418,*(undefined2 *)((longlong)*(int *)(param_1 + 0x34) * 0x20 + 100 + param_1),
                    *(undefined2 *)((longlong)*(int *)(param_1 + 0x34) * 0x20 + 0x66 + param_1));
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_141a10220((undefined8 *)local_418);
  }
  FUN_141a10220((undefined8 *)local_828);
  return;
}




void FUN_141a095c0(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  uVar2 = 0xfffffffffffffffe;
  FUN_141a101d0(local_418);
  uVar1 = FUN_141a08640(param_1,0,(longlong)local_418,param_3);
  if ((char)uVar1 == '\0') {
    log_InlineLogERROR("CVexillumArenicMgr::SendVexillumInfo. CreateMsgVexillumHead");
    FUN_141a10220((undefined8 *)local_418);
  }
  else {
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_418,param_4,uVar2);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_141a10220((undefined8 *)local_418);
  }
  return;
}




void FUN_141a09690(longlong param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  CMsg local_418 [1040];
  
  if (param_2 != 0) {
    FUN_141a101d0(local_418);
    uVar2 = FUN_141a08640(param_1,0,(longlong)local_418,param_3);
    if ((char)uVar2 == '\0') {
      log_InlineLogERROR("CVexillumArenicMgr::SendOneSynVexillum. CreateMsgVexillumHead");
      FUN_141a10220((undefined8 *)local_418);
    }
    else {
      if (param_3 == 4) {
        uVar2 = FUN_1419f26d0(param_2);
        FUN_141a078d0(param_1,(uint)uVar2,(longlong)local_418);
      }
      else if (param_3 == 5) {
        uVar2 = FUN_1419f26d0(param_2);
        FUN_141a078d0(param_1,(uint)uVar2,(longlong)local_418);
        FUN_141a10500((longlong)local_418,param_5);
      }
      lVar1 = **(longlong **)(param_1 + 8);
      uVar3 = FUN_1419f26d0(param_2);
      (**(code **)(lVar1 + 0x148))(*(undefined8 *)(param_1 + 8),0x809,uVar3 & 0xffffffff,local_418,param_4);
      FUN_141a10220((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_141a097b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  if (param_2 != 0) {
    FUN_141a101d0(local_418);
    uVar1 = FUN_141a08640(param_1,param_2,(longlong)local_418,5);
    if ((char)uVar1 == '\0') {
      log_InlineLogERROR("CVexillumArenicMgr::ClsDestVexillum. CreateMsgVexillumHead");
      FUN_141a10220((undefined8 *)local_418);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
      FUN_141a10220((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_141a09850(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (iVar4 == 0x809) {
      if (*(longlong *)(param_1 + 0x160) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141a098a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),param_2,&DAT_141a1bb18);
        return;
      }
      lVar1 = **(longlong **)(param_1 + 0x158);
      plVar2 = *(longlong **)(param_1 + 0x128);
      lVar5 = 0;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar5 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar1 + 0x1c),lVar1 + 0x20,lVar1 + 0x22);
      if (cVar3 != '\0') {
        FUN_141a095c0(param_1,0,3,0);
      }
    }
  }
  return;
}




void * FUN_141a09980(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 *puVar4;
  ulonglong extraout_RAX_01;
  undefined8 uVar5;
  uint local_res10 [2];
  uint local_450 [2];
  undefined8 *local_448;
  undefined8 local_440;
  longlong local_438 [4];
  CMsg local_418 [1040];
  
  local_440 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX & 0xffffffffffffff00);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX_00 & 0xffffffffffffff00);
  }
  else if (*(int *)(param_1 + 0xb0) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    puVar4 = (undefined8 *)FUN_141a05ef0(param_1,uVar2);
    if (((puVar4 == (undefined8 *)0x0) && (uVar2 != 0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),uVar2), cVar1 != '\0')) {
      puVar4 = FUN_1419f7930(uVar2,*(longlong **)(param_1 + 8),0);
      if (puVar4 == (undefined8 *)0x0) {
        log_InlineLogERROR("CVexillumArenicMgr::OnEnterBattle. pSynInfo == NUL, User[%d] Syn[%d]");
        return (void *)(extraout_RAX_01 & 0xffffffffffffff00);
      }
      local_450[0] = uVar2;
      local_448 = puVar4;
      FUN_141a04930((longlong *)(param_1 + 0xb8),local_438,local_450);
      FUN_141a086c0(param_1,(longlong)puVar4);
    }
    FUN_141a09470(param_1,param_2);
    FUN_141a05000((longlong *)(param_1 + 0x168),local_438,local_res10);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1419f2760((longlong)puVar4);
      FUN_141a0fd10(local_418);
      uVar3 = FUN_1419f6790((longlong)puVar4,param_2);
      uVar5 = FUN_141a0fe40(local_418,1,uVar3);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
      }
      FUN_141a0fd60((undefined8 *)local_418);
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
    if ((int)uVar5 != 2) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2,2);
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return register0x00000020;
}




void * FUN_141a09b80(longlong param_1,int param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  CMsg local_418 [1040];
  
  if ((*(int *)(param_1 + 0xb0) == 0) && (param_2 != 0)) {
    if ((param_3 == 0) || ((int)param_4 < 1)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
    }
    else {
      uVar5 = param_4;
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_3);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_3);
      }
      uVar4 = param_4 & 0xffffffff;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_3);
      puVar2 = FUN_141a091b0(param_1,param_3,uVar4,uVar5);
      if ((char)puVar2 == '\0') {
        FUN_141a101d0(local_418);
        uVar3 = FUN_141a10250((longlong)local_418,8,0);
        if ((char)uVar3 != '\0') {
          FUN_141a10520((longlong)local_418,(int)param_4);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_3,local_418);
        }
        uVar3 = FUN_141a10220((undefined8 *)local_418);
      }
      else {
        FUN_141a101d0(local_418);
        uVar3 = FUN_141a08640(param_1,param_3,(longlong)local_418,7);
        if ((char)uVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_418,param_3,1);
        }
        uVar3 = FUN_141a10220((undefined8 *)local_418);
      }
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return register0x00000020;
}




ulonglong FUN_141a09cd0(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  CMsg local_418 [1040];
  
  FUN_141a101d0(local_418);
  uVar3 = FUN_141a10250((longlong)local_418,9,0);
  if ((char)uVar3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  if (iVar1 != 3) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    lVar5 = FUN_141a05ef0(param_1,uVar2);
    if (lVar5 != 0) {
      FUN_1419f27b0(lVar5);
    }
    pvVar6 = FUN_141a09b80(param_1,param_2,0,0);
    uVar3 = FUN_141a10220((undefined8 *)local_418);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(char)pvVar6);
  }
  else {
    uVar4 = FUN_141a10220((undefined8 *)local_418);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}




undefined1 * FUN_141a09dc0(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong extraout_RAX_02;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res18 [4];
  longlong *local_878;
  longlong local_870;
  longlong *local_868;
  undefined8 local_858;
  CMsg local_848 [1040];
  CMsg local_438 [1040];
  
  local_858 = 0xfffffffffffffffe;
  puVar5 = (undefined1 *)register0x00000020;
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_res18[0] = param_3;
    if ((param_2 == 0) || (param_3 == 0)) {
      log_InlineLogERROR("CVexillumArenicMgr::OnUserTouchVexillum. idUser == %u || idVlmNpc == %u");
      puVar5 = (undefined1 *)(extraout_RAX_02 & 0xffffffffffffff00);
    }
    else {
      puVar5 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
      if ((char)puVar5 != '\0') {
        FUN_141a04f30((longlong *)(param_1 + 0x128),(longlong *)&local_878,local_res18);
        lVar8 = *(longlong *)(param_1 + 0x158);
        lVar11 = 0;
        plVar6 = *(longlong **)(param_1 + 0x128);
        local_868 = plVar6;
        if ((local_878 == (longlong *)0x0) || (local_878 != plVar6)) {
          _invalid_parameter_noinfo();
          plVar6 = extraout_RAX;
        }
        if (local_870 != lVar8) {
          if (local_878 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar6 = extraout_RAX_00;
            lVar8 = lVar11;
          }
          else {
            lVar8 = *local_878;
          }
          if (local_870 == *(longlong *)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
            plVar6 = extraout_RAX_01;
          }
          if (*(int *)(local_870 + 0x28) == 0) {
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = lVar11;
            }
            else {
              lVar8 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar8 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = lVar11;
            }
            else {
              lVar8 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar8 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
            uVar2 = iVar1 - (uint)*(ushort *)(local_870 + 0x22);
            uVar9 = (int)uVar2 >> 0x1f;
            iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
            uVar3 = iVar1 - (uint)*(ushort *)(local_870 + 0x20);
            uVar10 = (int)uVar3 >> 0x1f;
            if ((int)((uVar2 ^ uVar9) - uVar9) < (int)((uVar3 ^ uVar10) - uVar10)) {
              if (local_878 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar8 = lVar11;
              }
              else {
                lVar8 = *local_878;
              }
              if (local_870 == *(longlong *)(lVar8 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
              uVar2 = iVar1 - (uint)*(ushort *)(local_870 + 0x20);
              uVar3 = (int)uVar2 >> 0x1f;
              uVar3 = (uVar2 ^ uVar3) - uVar3;
            }
            else {
              if (local_878 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar8 = lVar11;
              }
              else {
                lVar8 = *local_878;
              }
              if (local_870 == *(longlong *)(lVar8 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
              uVar2 = iVar1 - (uint)*(ushort *)(local_870 + 0x22);
              uVar3 = (int)uVar2 >> 0x1f;
              uVar3 = (uVar2 ^ uVar3) - uVar3;
            }
            if (2 < uVar3) {
              return (undefined1 *)((ulonglong)(uVar3 >> 8) << 8);
            }
            (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
            FUN_141a101d0(local_848);
            uVar7 = FUN_141a10250((longlong)local_848,8,0);
            if ((char)uVar7 != '\0') {
              FUN_141a10520((longlong)local_848,0x3c);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_848);
            }
            FUN_141a101d0(local_438);
            uVar7 = FUN_141a08640(param_1,param_2,(longlong)local_438,6);
            if ((char)uVar7 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_438,param_2,1);
            }
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar8 = lVar11;
            }
            else {
              lVar8 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar8 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*(undefined4 *)(local_870 + 0x1c));
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              lVar11 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar11 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            *(undefined4 *)(local_870 + 0x24) = 0x1e;
            uVar4 = tq::TimeGet(0);
            *(uint *)(local_870 + 0x28) = uVar4 / 1000;
            uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
            lVar8 = FUN_141a05ef0(param_1,uVar2);
            if (lVar8 != 0) {
              FUN_141a093a0(param_1,param_2,3,3);
              FUN_141a086c0(param_1,lVar8);
            }
            FUN_141a10220((undefined8 *)local_438);
            uVar7 = FUN_141a10220((undefined8 *)local_848);
            return (undefined1 *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
        }
        puVar5 = (undefined1 *)((ulonglong)plVar6 & 0xffffffffffffff00);
      }
    }
  }
  return puVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a0a150(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  IStringManager *pIVar8;
  char *pcVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  CMsg *pCVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStackY_5f8 [32];
  longlong *local_5a0 [3];
  uint *local_588;
  uint *local_580;
  undefined8 local_578;
  longlong *local_570;
  longlong *local_560;
  undefined8 local_550;
  CMsg local_548 [1040];
  char local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  local_550 = 0xfffffffffffffffe;
  local_38 = DAT_141a29318 ^ (ulonglong)auStackY_5f8;
  if (*(int *)(param_1 + 0xb0) == 0) {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141a18388);
      local_38 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      tq::SysLogSave("resetvlmowner","[1] Tar[%u]");
      for (uVar11 = 0; uVar11 < 3; uVar11 = uVar11 + 1) {
        lVar10 = (longlong)(int)uVar11 * 0x20;
        if (*(int *)(lVar10 + 0x50 + param_1) == param_2) {
          uVar1 = *(uint *)(lVar10 + 0x54 + param_1);
          if (uVar1 != 0) {
            lVar5 = FUN_141a05ef0(param_1,uVar1);
            if (lVar5 == 0) {
              log_InlineLogERROR("CVexillumArenicMgr::OnResetTarNpcOwner. pOldSynInfo == NULL");
            }
            else {
              FUN_1419f2ae0(lVar5,uVar11);
              FUN_141a09690(param_1,lVar5,4,0,0);
            }
          }
          uVar4 = FUN_1419fb2d0(*(longlong *)(lVar10 + 0x58 + param_1));
          *(undefined4 *)(lVar10 + 0x54 + param_1) = uVar4;
          FUN_1419fbdb0(*(longlong *)(lVar10 + 0x58 + param_1));
          FUN_1419fcbd0(param_1,'\x01');
          (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar10 + 0x54 + param_1));
          lVar5 = FUN_141a05ef0(param_1,*(uint *)(lVar10 + 0x54 + param_1));
          if (lVar5 == 0) {
            pIVar8 = theInstance();
            pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_VEXILLUM_NO_SYN_OCCUPY_SUCCESS");
            _snprintf(local_138,0x100,pcVar9);
          }
          else {
            FUN_1419f2a40(lVar5,uVar11,*(int *)(lVar10 + 0x50 + param_1),*(undefined2 *)(lVar10 + 100 + param_1),*(undefined2 *)(lVar10 + 0x66 + param_1),
                          *(undefined2 *)(lVar10 + 0x68 + param_1),*(undefined2 *)(lVar10 + 0x6a + param_1),*(undefined2 *)(lVar10 + 0x6c + param_1),
                          *(undefined2 *)(lVar10 + 0x6e + param_1));
            FUN_141a09690(param_1,lVar5,5,0,*(undefined4 *)(((longlong)(int)uVar11 + 3) * 0x20 + param_1));
            local_570 = operator_new(8);
            if (local_570 == (longlong *)0x0) {
              local_5a0[0] = (longlong *)0x0;
            }
            else {
              *local_570 = (longlong)local_5a0;
              local_5a0[0] = local_570;
            }
            lVar15 = 0;
            local_588 = (uint *)0x0;
            local_580 = (uint *)0x0;
            local_578 = 0;
            uVar14 = (ulonglong)*(ushort *)(lVar10 + 0x68 + param_1);
            pCVar13 = (CMsg *)0x809;
            local_560 = local_570;
            (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),*(undefined4 *)(lVar10 + 0x54 + param_1));
            puVar12 = local_588;
            if ((longlong)local_580 - (longlong)local_588 >> 2 != 0) {
              local_570 = (longlong *)0x0;
              if (local_580 < local_588) {
                _invalid_parameter_noinfo();
              }
              plVar2 = local_5a0[0];
              local_570 = local_5a0[0];
              while( true ) {
                puVar3 = local_580;
                local_560 = (longlong *)0x0;
                if (local_580 < local_588) {
                  _invalid_parameter_noinfo();
                }
                local_560 = local_5a0[0];
                if ((plVar2 == (longlong *)0x0) || (plVar2 != local_5a0[0])) {
                  _invalid_parameter_noinfo();
                }
                if (puVar12 == puVar3) break;
                if (plVar2 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar10 = lVar15;
                }
                else {
                  lVar10 = *plVar2;
                }
                if (*(uint **)(lVar10 + 0x20) <= puVar12) {
                  _invalid_parameter_noinfo();
                }
                puVar6 = FUN_141a091b0(param_1,*puVar12,pCVar13,uVar14);
                if ((char)puVar6 != '\0') {
                  FUN_141a101d0(local_548);
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = lVar15;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (*(uint **)(lVar10 + 0x20) <= puVar12) {
                    _invalid_parameter_noinfo();
                  }
                  uVar14 = 7;
                  pCVar13 = local_548;
                  uVar7 = FUN_141a08640(param_1,*puVar12,(longlong)pCVar13,7);
                  if ((char)uVar7 != '\0') {
                    if (plVar2 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar10 = lVar15;
                    }
                    else {
                      lVar10 = *plVar2;
                    }
                    if (*(uint **)(lVar10 + 0x20) <= puVar12) {
                      _invalid_parameter_noinfo();
                    }
                    uVar14 = (ulonglong)*puVar12;
                    pCVar13 = local_548;
                    (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809);
                  }
                  FUN_141a10220((undefined8 *)local_548);
                }
                if (plVar2 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar10 = lVar15;
                }
                else {
                  lVar10 = *plVar2;
                }
                if (*(uint **)(lVar10 + 0x20) <= puVar12) {
                  _invalid_parameter_noinfo();
                }
                puVar12 = puVar12 + 1;
              }
            }
            pIVar8 = theInstance();
            FUN_1419f2700(lVar5);
            pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_VEXILLUM_SYN_OCCUPY_SUCCESS");
            _snprintf(local_138,0x100,pcVar9);
            if (local_588 != (uint *)0x0) {
              operator_delete(local_588);
            }
            local_588 = (uint *)0x0;
            local_580 = (uint *)0x0;
            local_578 = 0;
            operator_delete(local_5a0[0]);
          }
          local_39 = 0;
          uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),0x809,local_138,0xffffff);
          return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
        }
      }
      local_38 = extraout_RAX_00 & 0xffffffffffffff00;
    }
  }
  else {
    local_38 = local_38 & 0xffffffffffffff00;
  }
  return local_38;
}




void FUN_141a0a660(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  CMsg local_418 [1040];
  
  if (((*(int *)(param_1 + 0xb0) == 0) && (iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), iVar2 == 0x809)) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2), iVar2 != 0)) {
    lVar5 = **(longlong **)(param_1 + 8);
    cVar1 = (**(code **)(lVar5 + 0x80))(*(longlong **)(param_1 + 8),iVar2);
    if (cVar1 != '\0') {
      FUN_141a09980(param_1,param_2);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
      if ((cVar1 != '\0') && (puVar3 = FUN_141a091b0(param_1,param_2,lVar5,param_4), (char)puVar3 != '\0')) {
        FUN_141a101d0(local_418);
        uVar4 = FUN_141a08640(param_1,param_2,(longlong)local_418,7);
        if ((char)uVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_418,param_2,1);
        }
        FUN_141a10220((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_141a0a760(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    lVar3 = FUN_141a05ef0(param_1,uVar1);
    if (lVar3 != 0) {
      FUN_1419f6500(lVar3,param_2);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
    if (iVar2 == 0x809) {
      FUN_141a097b0(param_1,param_2);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a0a7d0(ulonglong *param_1,uint param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 *puVar6;
  IStringManager *pIVar7;
  char *_Format;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_1e8 [32];
  undefined2 local_1c8;
  undefined4 local_1c0;
  uint local_1b8;
  uint local_1b4 [3];
  ulonglong *local_1a8;
  longlong *plStack_1a0;
  ulonglong *local_198;
  longlong *plStack_190;
  ulonglong *local_188 [2];
  ulonglong *local_178;
  undefined8 local_168;
  ulonglong *local_160;
  char local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  local_168 = 0xfffffffffffffffe;
  local_48 = DAT_141a29318 ^ (ulonglong)auStack_1e8;
  if ((((int)param_1[0x16] == 0) &&
      (local_1b4[0] = param_2, local_198 = param_1, puVar6 = (undefined8 *)FUN_141a05ef0((longlong)param_1,param_2), puVar6 != (undefined8 *)0x0)) &&
     (*(char *)((longlong)puVar6 + 0x2a) == '\0')) {
    FUN_1419f2710((longlong)puVar6);
    local_1b8 = 0;
    uVar13 = 0;
    uVar10 = uVar13;
    while (uVar9 = (uint)uVar10, uVar9 < 3) {
      lVar12 = (longlong)(int)uVar9;
      if (*(uint *)(lVar12 * 0x20 + 0x54 + (longlong)param_1) == param_2) {
        *(undefined4 *)(lVar12 * 0x20 + 0x54 + (longlong)param_1) = 0;
        (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],(int)param_1[lVar12 * 4 + 10],0);
        pIVar7 = theInstance();
        _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUM_DIS_OCCUPY_SUCCESS");
        _snprintf(local_148,0x100,_Format);
        local_49 = 0;
        local_1c0 = 0;
        local_1c8 = 0x7e6;
        (**(code **)(*(longlong *)param_1[1] + 0x128))((longlong *)param_1[1],0x809,local_148,0xffffff);
      }
      else {
        FUN_1419fbca0(param_1[lVar12 * 4 + 0xb],param_2);
      }
      local_1b8 = uVar9 + 1;
      uVar10 = (ulonglong)local_1b8;
    }
    piVar11 = (int *)param_3[3];
    local_178 = (ulonglong *)0x0;
    if ((int *)param_3[4] < piVar11) {
      _invalid_parameter_noinfo();
    }
    puVar1 = (ulonglong *)*param_3;
    local_178 = puVar1;
    while( true ) {
      piVar2 = (int *)param_3[4];
      local_160 = (ulonglong *)0x0;
      if (piVar2 < (int *)param_3[3]) {
        _invalid_parameter_noinfo();
      }
      local_160 = (ulonglong *)*param_3;
      if ((puVar1 == (ulonglong *)0x0) || (puVar1 != local_160)) {
        _invalid_parameter_noinfo();
      }
      if (piVar11 == piVar2) break;
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar13;
      }
      else {
        uVar10 = *puVar1;
      }
      if (*(int **)(uVar10 + 0x20) <= piVar11) {
        _invalid_parameter_noinfo();
      }
      iVar5 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],*piVar11);
      if (iVar5 == 0x809) {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar10 = uVar13;
        }
        else {
          uVar10 = *puVar1;
        }
        if (*(int **)(uVar10 + 0x20) <= piVar11) {
          _invalid_parameter_noinfo();
        }
        FUN_141a097b0((longlong)param_1,*piVar11);
      }
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar13;
      }
      else {
        uVar10 = *puVar1;
      }
      if (*(int **)(uVar10 + 0x20) <= piVar11) {
        _invalid_parameter_noinfo();
      }
      piVar11 = piVar11 + 1;
    }
    plVar8 = (longlong *)param_1[0x22];
    local_1a8 = (ulonglong *)0x0;
    if ((longlong *)param_1[0x23] < plVar8) {
      _invalid_parameter_noinfo();
    }
    puVar1 = (ulonglong *)param_1[0x1f];
    plVar3 = (longlong *)param_1[0x23];
    local_188[0] = (ulonglong *)0x0;
    local_1a8 = puVar1;
    plStack_1a0 = plVar8;
    if (plVar3 < (longlong *)param_1[0x22]) {
      _invalid_parameter_noinfo();
    }
    puVar4 = (ulonglong *)param_1[0x1f];
    local_188[0] = puVar4;
    while( true ) {
      if ((puVar1 == (ulonglong *)0x0) || (puVar1 != puVar4)) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar3) {
        return;
      }
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar13;
      }
      else {
        uVar10 = *puVar1;
      }
      if (*(longlong **)(uVar10 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      if ((undefined8 *)*plVar8 == puVar6) break;
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar13;
      }
      else {
        uVar10 = *puVar1;
      }
      if (*(longlong **)(uVar10 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar8 = plVar8 + 1;
      plStack_1a0 = plVar8;
    }
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
    local_198 = local_1a8;
    plStack_190 = plStack_1a0;
    FUN_141a04cf0(param_1 + 0x1f,local_188,(longlong)&local_198);
    FUN_141a04ae0((longlong *)(param_1 + 0x17),local_1b4);
  }
  return;
}




void FUN_141a0ab30(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  longlong *local_c0 [3];
  uint *local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_70;
  longlong *local_60;
  longlong *local_50;
  longlong *local_40;
  undefined8 local_30;
  undefined8 *local_28;
  
  local_30 = 0xfffffffffffffffe;
  uVar6 = FUN_1419fca50((longlong)param_1);
  if ((int)param_1[0x16] == -1) {
    if ((int)uVar6 == 0) {
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 4) = uVar5 / 1000;
      *(undefined4 *)((longlong)param_1 + 0x24) = 5;
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 5) = uVar5 / 1000;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 900;
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 6) = uVar5 / 1000;
      FUN_1419fcf30((longlong)param_1,'\0');
      FUN_141a05cd0((longlong)param_1);
      (**(code **)(*(longlong *)param_1[1] + 0xa8))();
      plVar11 = (longlong *)0x0;
      plVar7 = plVar11;
      while (uVar8 = (uint)plVar7, uVar8 < 3) {
        (**(code **)(*(longlong *)param_1[1] + 0xb0))((longlong *)param_1[1],(int)param_1[(longlong)(int)uVar8 * 4 + 10],0);
        plVar7 = (longlong *)(ulonglong)(uVar8 + 1);
      }
      plVar7 = *(longlong **)param_1[0x2b];
      puVar1 = (undefined8 *)param_1[0x25];
      local_28 = puVar1;
LAB_141a0ac60:
      plVar9 = (longlong *)param_1[0x2b];
      local_80 = (undefined8 *)param_1[0x25];
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 != local_80)) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 != plVar9) {
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar11;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar9[6]) {
          _invalid_parameter_noinfo();
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar11;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar9[6]) {
          _invalid_parameter_noinfo();
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar11;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar9[6]) {
          _invalid_parameter_noinfo();
        }
        cVar4 = (**(code **)(*(longlong *)param_1[1] + 0xe0))
                          ((longlong *)param_1[1],*(undefined4 *)((longlong)plVar7 + 0x1c),0x809,plVar7 + 4,(longlong)plVar7 + 0x22);
        if (cVar4 == '\0') {
          if (puVar1 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar9 = plVar11;
          }
          else {
            plVar9 = (longlong *)*puVar1;
          }
          if (plVar7 == (longlong *)plVar9[6]) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)((longlong)plVar7 + 0x24) = 0x1e;
          uVar5 = tq::TimeGet(0);
          *(uint *)(plVar7 + 5) = uVar5 / 1000;
          log_InlineLogERROR("CVexillumArenicMgr::OnTimer(). RefreshVexillum Error!");
        }
        else {
          if (puVar1 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar9 = plVar11;
          }
          else {
            plVar9 = (longlong *)*puVar1;
          }
          if (plVar7 == (longlong *)plVar9[6]) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(plVar7 + 5) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar7 + 0x2d) == '\0') {
          plVar9 = plVar7;
          plVar3 = (longlong *)plVar7[2];
          if (*(char *)(plVar7[2] + 0x2d) == '\0') {
            do {
              plVar7 = plVar3;
              plVar3 = (longlong *)*plVar7;
              local_90 = plVar7;
            } while (*(char *)(*plVar7 + 0x2d) == '\0');
          }
          else {
            do {
              plVar7 = (longlong *)plVar9[1];
              if (*(char *)((longlong)plVar7 + 0x2d) != '\0') break;
              bVar14 = plVar9 == (longlong *)plVar7[2];
              plVar9 = plVar7;
            } while (bVar14);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_141a0ac60;
      }
      plVar7 = operator_new(8);
      local_c0[0] = plVar11;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)local_c0;
        local_c0[0] = plVar7;
      }
      local_a8 = (uint *)0x0;
      local_a0 = (uint *)0x0;
      local_98 = 0;
      (**(code **)(*(longlong *)param_1[1] + 0xb8))((longlong *)param_1[1],0x809,local_c0);
      puVar10 = local_a8;
      if ((longlong)local_a0 - (longlong)local_a8 >> 2 != 0) {
        local_50 = (longlong *)0x0;
        if (local_a0 < local_a8) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_c0[0];
        local_50 = local_c0[0];
        while( true ) {
          puVar2 = local_a0;
          local_70 = (longlong *)0x0;
          if (local_a0 < local_a8) {
            _invalid_parameter_noinfo();
          }
          local_70 = local_c0[0];
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_c0[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 == puVar2) break;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar9 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar7;
          }
          if ((uint *)plVar9[4] <= puVar10) {
            _invalid_parameter_noinfo();
          }
          FUN_141a09980((longlong)param_1,*puVar10);
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar9 = plVar11;
          }
          else {
            plVar9 = (longlong *)*plVar7;
          }
          if ((uint *)plVar9[4] <= puVar10) {
            _invalid_parameter_noinfo();
          }
          puVar10 = puVar10 + 1;
        }
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
  else if (((int)param_1[0x16] == 0) && ((int)uVar6 == -1)) {
    *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    FUN_141a088b0(param_1,param_2,param_3,param_4);
  }
  lVar12 = 0;
  if ((int)param_1[0x16] == 0) {
    if (((int)param_1[4] != 0) && (uVar5 = tq::TimeGet(0), (uint)(*(int *)((longlong)param_1 + 0x1c) + (int)param_1[4]) <= uVar5 / 1000)) {
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 4) = uVar5 / 1000;
      FUN_141a05e80((longlong)param_1);
    }
    if (((int)param_1[5] != 0) && (uVar5 = tq::TimeGet(0), (uint)((int)param_1[5] + *(int *)((longlong)param_1 + 0x24)) <= uVar5 / 1000)) {
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 5) = uVar5 / 1000;
      FUN_1419fcbd0((longlong)param_1,'\0');
    }
    if (((int)param_1[6] != 0) && (uVar5 = tq::TimeGet(0), (uint)(*(int *)((longlong)param_1 + 0x2c) + (int)param_1[6]) <= uVar5 / 1000)) {
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 6) = uVar5 / 1000;
      FUN_1419fcf30((longlong)param_1,'\x01');
    }
    plVar7 = *(longlong **)param_1[0x2b];
    plVar11 = (longlong *)param_1[0x25];
    local_60 = plVar11;
LAB_141a0b0d0:
    plVar9 = (longlong *)param_1[0x2b];
    local_40 = (longlong *)param_1[0x25];
    if ((plVar11 == (longlong *)0x0) || (plVar11 != local_40)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar9) {
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar13 = lVar12;
      }
      else {
        lVar13 = *plVar11;
      }
      if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((int)plVar7[5] != 0) {
        if (plVar11 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = lVar12;
        }
        else {
          lVar13 = *plVar11;
        }
        if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = tq::TimeGet(0);
        if ((uint)((int)plVar7[5] + *(int *)((longlong)plVar7 + 0x24)) <= uVar5 / 1000) {
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar11;
          }
          if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(plVar7 + 5) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar11;
          }
          if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar11;
          }
          if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar11;
          }
          if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          cVar4 = (**(code **)(*(longlong *)param_1[1] + 0xe0))
                            ((longlong *)param_1[1],*(undefined4 *)((longlong)plVar7 + 0x1c),0x809,plVar7 + 4,(longlong)plVar7 + 0x22);
          if (cVar4 == '\0') {
            if (plVar11 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar13 = lVar12;
            }
            else {
              lVar13 = *plVar11;
            }
            if (plVar7 == *(longlong **)(lVar13 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            *(undefined4 *)((longlong)plVar7 + 0x24) = 0x1e;
            uVar5 = tq::TimeGet(0);
            *(uint *)(plVar7 + 5) = uVar5 / 1000;
            log_InlineLogERROR("CVexillumArenicMgr::OnTimer(). RefreshVexillum Error!");
          }
        }
      }
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x2d) == '\0') {
        plVar9 = plVar7;
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)(plVar7[2] + 0x2d) == '\0') {
          do {
            plVar7 = plVar3;
            plVar3 = (longlong *)*plVar7;
            local_88 = plVar7;
          } while (*(char *)(*plVar7 + 0x2d) == '\0');
        }
        else {
          do {
            plVar7 = (longlong *)plVar9[1];
            if (*(char *)((longlong)plVar7 + 0x2d) != '\0') break;
            bVar14 = plVar9 == (longlong *)plVar7[2];
            plVar9 = plVar7;
          } while (bVar14);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141a0b0d0;
    }
  }
  return;
}




bool FUN_141a0b320(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return true;
  }
  uVar1 = FUN_1419f2b60(param_1);
  uVar2 = FUN_1419f2b60(param_2);
  if ((int)uVar1 != (int)uVar2) {
    uVar1 = FUN_1419f2b60(param_1);
    uVar2 = FUN_1419f2b60(param_2);
    return (int)uVar2 < (int)uVar1;
  }
  uVar1 = FUN_1419f26d0(param_1);
  uVar2 = FUN_1419f26d0(param_2);
  return (uint)uVar1 < (uint)uVar2;
}




void FUN_141a0b3c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined8 FUN_141a0b3e0(longlong param_1)

{
  __time32_t _Var1;
  tm *ptVar2;
  int local_res10 [6];
  tm local_38;
  
  _time32(local_res10);
  ptVar2 = _localtime32(local_res10);
  if (((ptVar2 != (tm *)0x0) && (*(char *)(param_1 + 0x38) != '\0')) && (*(int *)(param_1 + 0x10) == ptVar2->tm_wday)) {
    local_38.tm_mday = ptVar2->tm_mday;
    local_38.tm_mon = ptVar2->tm_mon;
    local_38.tm_year = ptVar2->tm_year;
    local_38.tm_wday = ptVar2->tm_wday;
    local_38.tm_yday = ptVar2->tm_yday;
    local_38.tm_isdst = ptVar2->tm_isdst;
    local_38.tm_hour = *(int *)(param_1 + 0x14);
    local_38.tm_min = *(int *)(param_1 + 0x18);
    local_38.tm_sec = 0;
    _Var1 = _mktime32(&local_38);
    if (((*(int *)(param_1 + 0x10) == ptVar2->tm_wday) && (local_res10[0] - _Var1 <= *(int *)(param_1 + 0x2c))) && (0 < local_res10[0] - _Var1)) {
      return 0;
    }
  }
  return 0xffffffff;
}




bool FUN_141a0b4b0(longlong param_1)

{
  return *(int *)(param_1 + 0x60) == 0;
}




undefined1 FUN_141a0b4c0(longlong param_1,uint param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else if ((param_3 == 0) || (param_4 == 0)) {
      log_InlineLogERROR(&DAT_141a18388);
      uVar1 = 0;
    }
    else if ((*(int *)(param_1 + 0x40) == param_3) && (*(uint *)(param_1 + 0x44) != param_2)) {
      FUN_1419fc7c0(*(undefined8 **)(param_1 + 0x48),param_2,param_4);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




bool FUN_141a0b540(longlong param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 0x40);
}




void FUN_141a0b550(longlong param_1,char param_2)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  FUN_141a101d0(local_418);
  FUN_141a10250((longlong)local_418,1,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar1 = FUN_1419fb1a0(*(longlong *)(param_1 + 0x48),(longlong)local_418);
    if (((char)uVar1 == '\0') && (param_2 == '\0')) {
      FUN_141a10220((undefined8 *)local_418);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
              (*(longlong **)(param_1 + 8),0x809,local_418,*(undefined2 *)(param_1 + 0x58),*(undefined2 *)(param_1 + 0x5a),*(undefined2 *)(param_1 + 0x5c),
               *(undefined2 *)(param_1 + 0x5e));
  }
  FUN_141a10220((undefined8 *)local_418);
  return;
}




void FUN_141a0b610(longlong param_1,char param_2)

{
  tm *ptVar1;
  longlong local_res18 [2];
  
  if (param_2 != '\0') {
    _time64(local_res18);
    ptVar1 = _localtime64(local_res18);
    *(int *)(param_1 + 0x10) = ptVar1->tm_wday;
    *(int *)(param_1 + 0x14) = ptVar1->tm_hour;
    *(int *)(param_1 + 0x18) = ptVar1->tm_min;
    return;
  }
  _time64(local_res18);
  local_res18[0] = local_res18[0] + -0x1c20;
  ptVar1 = _localtime64(local_res18);
  *(int *)(param_1 + 0x10) = ptVar1->tm_wday;
  *(int *)(param_1 + 0x14) = ptVar1->tm_hour;
  *(int *)(param_1 + 0x18) = ptVar1->tm_min;
  return;
}




bool FUN_141a0b680(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  uVar1 = FUN_1419f2b60(param_2);
  uVar2 = FUN_1419f2b60(param_3);
  if ((int)uVar1 != (int)uVar2) {
    uVar1 = FUN_1419f2b60(param_2);
    uVar2 = FUN_1419f2b60(param_3);
    return (int)uVar2 < (int)uVar1;
  }
  uVar1 = FUN_1419f26d0(param_2);
  uVar2 = FUN_1419f26d0(param_3);
  return (uint)uVar1 < (uint)uVar2;
}




int FUN_141a0b720(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  int iVar3;
  tm *ptVar4;
  int local_res10 [6];
  tm local_38;
  
  _time32(local_res10);
  ptVar4 = _localtime32(local_res10);
  if ((ptVar4 != (tm *)0x0) && (*(int *)(param_1 + 0x10) == ptVar4->tm_wday)) {
    local_38.tm_mday = ptVar4->tm_mday;
    local_38.tm_mon = ptVar4->tm_mon;
    local_38.tm_year = ptVar4->tm_year;
    local_38.tm_wday = ptVar4->tm_wday;
    local_38.tm_yday = ptVar4->tm_yday;
    local_38.tm_isdst = ptVar4->tm_isdst;
    local_38.tm_hour = *(int *)(param_1 + 0x14);
    local_38.tm_min = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x2c);
    local_38.tm_sec = 0;
    _Var2 = _mktime32(&local_38);
    iVar3 = _Var2 + (iVar1 - local_res10[0]);
    if ((iVar3 <= iVar1) && (0 < iVar3)) {
      return iVar3;
    }
  }
  return 0;
}




void FUN_141a0b7d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 < param_2) {
    do {
      lVar4 = (param_2 + -1) / 2;
      lVar1 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar1 == 0) break;
      if (param_4 != 0) {
        uVar2 = FUN_1419f2b60(lVar1);
        uVar3 = FUN_1419f2b60(param_4);
        if ((int)uVar2 == (int)uVar3) {
          uVar2 = FUN_1419f26d0(lVar1);
          uVar3 = FUN_1419f26d0(param_4);
          bVar5 = (uint)uVar2 < (uint)uVar3;
        }
        else {
          uVar2 = FUN_1419f2b60(lVar1);
          uVar3 = FUN_1419f2b60(param_4);
          bVar5 = (int)uVar3 < (int)uVar2;
        }
        if (!bVar5) break;
      }
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
      param_2 = lVar4;
    } while (param_3 < lVar4);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




void FUN_141a0b8c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_141a0b680(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_141a0b680(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_141a0b680(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_141a0b960(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = param_2;
  do {
    lVar5 = lVar6 * 2 + 2;
    if (param_3 <= lVar5) {
      if (lVar5 == param_3) {
        *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
        lVar6 = param_3 + -1;
      }
      FUN_141a0b7d0(param_1,lVar6,param_2,param_4);
      return;
    }
    lVar1 = *(longlong *)(param_1 + lVar5 * 8);
    lVar2 = *(longlong *)(param_1 + -8 + lVar5 * 8);
    if (lVar1 != 0) {
      if (lVar2 != 0) {
        uVar3 = FUN_1419f2b60(lVar1);
        uVar4 = FUN_1419f2b60(lVar2);
        if ((int)uVar3 == (int)uVar4) {
          uVar3 = FUN_1419f26d0(lVar1);
          uVar4 = FUN_1419f26d0(lVar2);
          bVar7 = (uint)uVar3 < (uint)uVar4;
        }
        else {
          uVar3 = FUN_1419f2b60(lVar1);
          uVar4 = FUN_1419f2b60(lVar2);
          bVar7 = (int)uVar4 < (int)uVar3;
        }
        if (!bVar7) goto LAB_141a0ba02;
      }
      lVar5 = lVar6 * 2 + 1;
    }
LAB_141a0ba02:
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
    lVar6 = lVar5;
  } while( true );
}




void FUN_141a0ba70(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  *param_3 = *param_1;
  FUN_141a0b960((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




void FUN_141a0baa0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141a0b8c0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_141a0b8c0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_141a0b8c0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_141a0b8c0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_141a0b8c0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_141a0bb80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_141a0b960(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_141a0bc00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((param_1 != param_2) && (plVar6 = param_1 + 1, plVar6 != param_2)) {
    lVar7 = (longlong)plVar6 - (longlong)param_1;
    do {
      lVar1 = *plVar6;
      lVar4 = *param_1;
      plVar5 = plVar6;
      if (lVar1 == 0) {
LAB_141a0bce0:
        while( true ) {
          lVar4 = plVar5[-1];
          if (lVar1 == 0) break;
          if (lVar4 != 0) {
            uVar2 = FUN_1419f2b60(lVar4);
            uVar3 = FUN_1419f2b60(lVar1);
            if ((int)uVar3 == (int)uVar2) {
              uVar2 = FUN_1419f26d0(lVar4);
              uVar3 = FUN_1419f26d0(lVar1);
              bVar8 = (uint)uVar3 < (uint)uVar2;
            }
            else {
              uVar2 = FUN_1419f2b60(lVar4);
              uVar3 = FUN_1419f2b60(lVar1);
              bVar8 = (int)uVar2 < (int)uVar3;
            }
            if (!bVar8) break;
          }
          *plVar5 = plVar5[-1];
          plVar5 = plVar5 + -1;
        }
        *plVar5 = lVar1;
      }
      else {
        if (lVar4 != 0) {
          uVar2 = FUN_1419f2b60(lVar4);
          uVar3 = FUN_1419f2b60(lVar1);
          if ((int)uVar3 == (int)uVar2) {
            uVar2 = FUN_1419f26d0(lVar4);
            uVar3 = FUN_1419f26d0(lVar1);
            bVar8 = (uint)uVar3 < (uint)uVar2;
          }
          else {
            uVar2 = FUN_1419f2b60(lVar4);
            uVar3 = FUN_1419f2b60(lVar1);
            bVar8 = (int)uVar2 < (int)uVar3;
          }
          if (!bVar8) goto LAB_141a0bce0;
        }
        lVar4 = lVar7 >> 3;
        if (0 < lVar4) {
          memmove_s(plVar6 + (1 - lVar4),lVar4 * 8,param_1,lVar4 * 8);
        }
        *param_1 = lVar1;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (plVar6 != param_2);
  }
  return;
}




void FUN_141a0bd90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_141a0b960((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1);
  return;
}




void FUN_141a0bdc0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar9 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_141a0baa0(param_2,plVar9,param_3 + -1,param_4);
  plVar6 = plVar9;
  do {
    do {
      plVar10 = plVar6;
      if (plVar10 <= param_2) goto joined_r0x000141a0bee7;
      lVar1 = plVar10[-1];
      lVar2 = *plVar10;
      plVar6 = plVar10 + -1;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141a0bee7;
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (bVar11) goto joined_r0x000141a0bee7;
      }
      lVar1 = *plVar10;
      lVar2 = *plVar6;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    uVar4 = FUN_1419f2b60(lVar1);
    uVar5 = FUN_1419f2b60(lVar2);
    if ((int)uVar4 == (int)uVar5) {
      uVar4 = FUN_1419f26d0(lVar1);
      uVar5 = FUN_1419f26d0(lVar2);
      bVar11 = (uint)uVar4 < (uint)uVar5;
    }
    else {
      uVar4 = FUN_1419f2b60(lVar1);
      uVar5 = FUN_1419f2b60(lVar2);
      bVar11 = (int)uVar5 < (int)uVar4;
    }
  } while (!bVar11);
joined_r0x000141a0bee7:
  do {
    do {
      plVar9 = plVar9 + 1;
      plVar6 = plVar9;
      plVar8 = plVar10;
      if (param_3 <= plVar9) goto joined_r0x000141a0bfc3;
      lVar1 = *plVar9;
      lVar2 = *plVar10;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141a0bfc3;
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (bVar11) goto joined_r0x000141a0bfc3;
      }
      lVar1 = *plVar10;
      lVar2 = *plVar9;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    uVar4 = FUN_1419f2b60(lVar1);
    uVar5 = FUN_1419f2b60(lVar2);
    if ((int)uVar4 == (int)uVar5) {
      uVar4 = FUN_1419f26d0(lVar1);
      uVar5 = FUN_1419f26d0(lVar2);
      bVar11 = (uint)uVar4 < (uint)uVar5;
    }
    else {
      uVar4 = FUN_1419f2b60(lVar1);
      uVar5 = FUN_1419f2b60(lVar2);
      bVar11 = (int)uVar5 < (int)uVar4;
    }
  } while (!bVar11);
joined_r0x000141a0bfc3:
  do {
    plVar7 = plVar8;
    plVar3 = plVar6;
    plVar6 = plVar10;
    if (param_3 <= plVar3) goto joined_r0x000141a0c0af;
    lVar1 = *plVar7;
    lVar2 = *plVar3;
    if (lVar1 == 0) {
LAB_141a0c02b:
      lVar1 = *plVar3;
      lVar2 = *plVar7;
      if (lVar1 != 0) {
        if (lVar2 != 0) {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          if ((int)uVar4 == (int)uVar5) {
            uVar4 = FUN_1419f26d0(lVar1);
            uVar5 = FUN_1419f26d0(lVar2);
            bVar11 = (uint)uVar4 < (uint)uVar5;
          }
          else {
            uVar4 = FUN_1419f2b60(lVar1);
            uVar5 = FUN_1419f2b60(lVar2);
            bVar11 = (int)uVar5 < (int)uVar4;
          }
          if (!bVar11) goto LAB_141a0c082;
        }
joined_r0x000141a0c0af:
        for (; param_2 < plVar10; plVar10 = plVar10 + -1) {
          plVar6 = plVar6 + -1;
          lVar1 = *plVar6;
          lVar2 = *plVar7;
          if (lVar1 == 0) {
LAB_141a0c11c:
            lVar1 = *plVar7;
            lVar2 = *plVar6;
            if (lVar1 != 0) {
              if (lVar2 == 0) break;
              uVar4 = FUN_1419f2b60(lVar1);
              uVar5 = FUN_1419f2b60(lVar2);
              if ((int)uVar4 == (int)uVar5) {
                uVar4 = FUN_1419f26d0(lVar1);
                uVar5 = FUN_1419f26d0(lVar2);
                bVar11 = (uint)uVar4 < (uint)uVar5;
              }
              else {
                uVar4 = FUN_1419f2b60(lVar1);
                uVar5 = FUN_1419f2b60(lVar2);
                bVar11 = (int)uVar5 < (int)uVar4;
              }
              if (bVar11) break;
            }
            plVar7 = plVar7 + -1;
            if (plVar7 != plVar6) {
              lVar1 = *plVar7;
              *plVar7 = *plVar6;
              *plVar6 = lVar1;
            }
          }
          else if (lVar2 != 0) {
            uVar4 = FUN_1419f2b60(lVar1);
            uVar5 = FUN_1419f2b60(lVar2);
            if ((int)uVar4 == (int)uVar5) {
              uVar4 = FUN_1419f26d0(lVar1);
              uVar5 = FUN_1419f26d0(lVar2);
              bVar11 = (uint)uVar4 < (uint)uVar5;
            }
            else {
              uVar4 = FUN_1419f2b60(lVar1);
              uVar5 = FUN_1419f2b60(lVar2);
              bVar11 = (int)uVar5 < (int)uVar4;
            }
            if (!bVar11) goto LAB_141a0c11c;
          }
        }
        if (plVar10 == param_2) {
          if (plVar3 == param_3) {
            *param_1 = plVar7;
            param_1[1] = plVar9;
            return;
          }
          if ((plVar9 != plVar3) && (plVar7 != plVar9)) {
            lVar1 = *plVar7;
            *plVar7 = *plVar9;
            *plVar9 = lVar1;
          }
          plVar9 = plVar9 + 1;
          plVar6 = plVar3 + 1;
          plVar8 = plVar7 + 1;
          if (plVar7 != plVar3) {
            lVar1 = *plVar7;
            *plVar7 = *plVar3;
            *plVar3 = lVar1;
          }
        }
        else {
          plVar10 = plVar10 + -1;
          if (plVar3 == param_3) {
            plVar8 = plVar7 + -1;
            if (plVar10 != plVar8) {
              lVar1 = *plVar10;
              *plVar10 = *plVar8;
              *plVar8 = lVar1;
            }
            plVar9 = plVar9 + -1;
            plVar6 = plVar3;
            if (plVar8 != plVar9) {
              lVar1 = *plVar8;
              *plVar8 = *plVar9;
              *plVar9 = lVar1;
            }
          }
          else {
            if (plVar3 != plVar10) {
              lVar1 = *plVar3;
              *plVar3 = *plVar10;
              *plVar10 = lVar1;
            }
            plVar6 = plVar3 + 1;
            plVar8 = plVar7;
          }
        }
        goto joined_r0x000141a0bfc3;
      }
LAB_141a0c082:
      plVar8 = plVar9 + 1;
      if (plVar9 != plVar3) {
        lVar1 = *plVar9;
        *plVar9 = *plVar3;
        *plVar3 = lVar1;
      }
    }
    else {
      plVar8 = plVar9;
      if (lVar2 != 0) {
        uVar4 = FUN_1419f2b60(lVar1);
        uVar5 = FUN_1419f2b60(lVar2);
        if ((int)uVar4 == (int)uVar5) {
          uVar4 = FUN_1419f26d0(lVar1);
          uVar5 = FUN_1419f26d0(lVar2);
          bVar11 = (uint)uVar4 < (uint)uVar5;
        }
        else {
          uVar4 = FUN_1419f2b60(lVar1);
          uVar5 = FUN_1419f2b60(lVar2);
          bVar11 = (int)uVar5 < (int)uVar4;
        }
        if (!bVar11) goto LAB_141a0c02b;
      }
    }
    plVar6 = plVar3 + 1;
    plVar9 = plVar8;
    plVar8 = plVar7;
  } while( true );
}




void FUN_141a0c280(longlong param_1,longlong param_2)

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
      FUN_141a0b960(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_141a0c300(longlong *param_1,longlong *param_2)

{
  FUN_141a0bc00(param_1,param_2);
  return;
}




void FUN_141a0c320(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_141a0b960((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1);
  }
  return;
}




void FUN_141a0c360(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_141a0b960((longlong)param_1,0,lVar2 + -8 >> 3,lVar1);
  }
  return;
}




undefined8 FUN_141a0c3d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int7 iVar7;
  longlong *extraout_RAX;
  char *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  
  lVar3 = *(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0);
  if (lVar3 >> 3 == 0) {
    iVar7 = (int7)(lVar3 >> 0xb);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0xc0);
    lVar3 = 0;
    if (*(longlong **)(param_1 + 200) < plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0xa8);
    uVar10 = 0;
    while( true ) {
      plVar2 = *(longlong **)(param_1 + 200);
      if (plVar2 < *(longlong **)(param_1 + 0xc0)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(param_1 + 0xa8);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar6)) {
        _invalid_parameter_noinfo();
        plVar6 = extraout_RAX;
      }
      if ((plVar8 == plVar2) || (7 < uVar10)) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      pcVar4 = (char *)FUN_1419f2700(*plVar8);
      uVar5 = FUN_1419f2b60(*plVar8);
      plVar6 = (longlong *)FUN_141a10290(param_2,uVar10,(int)uVar5,pcVar4);
      if ((char)plVar6 == '\0') break;
      uVar10 = uVar10 + 1;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = lVar3;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar8 = plVar8 + 1;
    }
    iVar7 = (int7)((ulonglong)plVar6 >> 8);
  }
  return CONCAT71(iVar7,1);
}




bool FUN_141a0c580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 < *(longlong **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 200) < plVar4) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  plVar3 = *(longlong **)(param_1 + 200);
  if (plVar3 < *(longlong **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
  }
  for (; (plVar4 != plVar1 && (*plVar4 != param_2)); plVar4 = plVar4 + 1) {
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0xa8))) {
    _invalid_parameter_noinfo();
  }
  return plVar4 != plVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141a0c650(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  IStringManager *pIVar7;
  char *_Format;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_5d8 [32];
  undefined4 local_5b8;
  undefined4 local_5b0;
  longlong *local_5a8;
  longlong *local_598 [3];
  undefined4 *local_580;
  undefined4 *local_578;
  undefined8 local_570;
  longlong local_568;
  longlong *local_560;
  longlong *local_550;
  undefined8 local_548;
  CMsg local_538 [1040];
  char local_128 [255];
  undefined1 local_29;
  ulonglong local_28;
  
  local_548 = 0xfffffffffffffffe;
  local_28 = DAT_141a29318 ^ (ulonglong)auStack_5d8;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x108);
  plVar11 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  local_5a8 = puVar1;
  local_568 = param_1;
  do {
    while( true ) {
      while( true ) {
        plVar9 = *(longlong **)(param_1 + 0x108);
        local_560 = *(longlong **)(param_1 + 0xd8);
        if ((puVar1 == (undefined8 *)0x0) || (puVar1 != local_560)) {
          _invalid_parameter_noinfo();
        }
        if (plVar8 == plVar9) {
          *(undefined4 *)(param_1 + 0x44) = 0;
          FUN_1419fbdb0(*(longlong *)(param_1 + 0x48));
          (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x40));
          local_5a8 = operator_new(8);
          local_598[0] = plVar11;
          if (local_5a8 != (longlong *)0x0) {
            *local_5a8 = (longlong)local_598;
            local_598[0] = local_5a8;
          }
          local_580 = (undefined4 *)0x0;
          local_578 = (undefined4 *)0x0;
          local_570 = 0;
          local_560 = local_5a8;
          (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),0x809);
          puVar10 = local_580;
          local_5a8 = (longlong *)0x0;
          if (local_578 < local_580) {
            _invalid_parameter_noinfo();
          }
          plVar8 = local_598[0];
          local_5a8 = local_598[0];
          while( true ) {
            puVar3 = local_578;
            local_560 = (longlong *)0x0;
            if (local_578 < local_580) {
              _invalid_parameter_noinfo();
            }
            local_560 = local_598[0];
            if ((plVar8 == (longlong *)0x0) || (plVar8 != local_598[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar10 == puVar3) break;
            if (plVar8 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar9 = plVar11;
            }
            else {
              plVar9 = (longlong *)*plVar8;
            }
            if ((undefined4 *)plVar9[4] <= puVar10) {
              _invalid_parameter_noinfo();
            }
            cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),*puVar10);
            if (cVar5 != '\0') {
              if (plVar8 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar9 = plVar11;
              }
              else {
                plVar9 = (longlong *)*plVar8;
              }
              if ((undefined4 *)plVar9[4] <= puVar10) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),*puVar10);
            }
            if (plVar8 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar9 = plVar11;
            }
            else {
              plVar9 = (longlong *)*plVar8;
            }
            if ((undefined4 *)plVar9[4] <= puVar10) {
              _invalid_parameter_noinfo();
            }
            puVar10 = puVar10 + 1;
          }
          if (local_580 != (undefined4 *)0x0) {
            operator_delete(local_580);
          }
          local_580 = (undefined4 *)0x0;
          local_578 = (undefined4 *)0x0;
          local_570 = 0;
          operator_delete(local_598[0]);
          FUN_141a101d0(local_538);
          uVar6 = FUN_141a10250((longlong)local_538,10,0);
          if ((char)uVar6 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_538,0);
          }
          if (*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3 != 0) {
            plVar8 = *(longlong **)(param_1 + 0xc0);
            local_5a8 = (longlong *)0x0;
            if (*(longlong **)(param_1 + 200) < plVar8) {
              _invalid_parameter_noinfo();
            }
            local_5a8 = *(longlong **)(param_1 + 0xa8);
            if (local_5a8 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              plVar11 = (longlong *)*local_5a8;
            }
            if ((longlong *)plVar11[4] <= plVar8) {
              _invalid_parameter_noinfo();
            }
            lVar2 = *plVar8;
            if (lVar2 != 0) {
              pIVar7 = theInstance();
              uVar6 = FUN_1419f2b60(lVar2);
              FUN_1419f2700(lVar2);
              _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUMONE_WIN");
              local_5b8 = (undefined4)uVar6;
              _snprintf(local_128,0x100,_Format);
              local_29 = 0;
              local_5b0 = 0;
              local_5b8 = CONCAT22(local_5b8._2_2_,2000);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),0x809,local_128,0xff0000);
            }
          }
          FUN_141a10220((undefined8 *)local_538);
          return;
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar11;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        if (plVar8 == (longlong *)plVar9[6]) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*(undefined4 *)((longlong)plVar8 + 0x1c));
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar11;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        if (plVar8 == (longlong *)plVar9[6]) {
          _invalid_parameter_noinfo();
        }
        *(undefined4 *)(plVar8 + 5) = 0;
        *(undefined4 *)((longlong)plVar8 + 0x24) = 0;
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x2d) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar9 = plVar8;
      plVar4 = (longlong *)plVar8[2];
      if (*(char *)(plVar8[2] + 0x2d) != '\0') break;
      do {
        plVar8 = plVar4;
        plVar4 = (longlong *)*plVar8;
        local_550 = plVar8;
      } while (*(char *)(*plVar8 + 0x2d) == '\0');
    }
    do {
      plVar8 = (longlong *)plVar9[1];
      if (*(char *)((longlong)plVar8 + 0x2d) != '\0') break;
      bVar12 = plVar9 == (longlong *)plVar8[2];
      plVar9 = plVar8;
    } while (bVar12);
  } while( true );
}




void FUN_141a0cad0(undefined8 *param_1,longlong param_2)

{
  FUN_141a0c360(param_1,param_2);
  return;
}




void FUN_141a0cae0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x98);
  lVar7 = 0;
  plVar1 = *(longlong **)(param_1 + 0x68);
  do {
    while( true ) {
      while( true ) {
        plVar5 = *(longlong **)(param_1 + 0x98);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x68))) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar5) {
          FUN_141a00e50(param_1 + 0x68);
          FUN_141a04e70((longlong *)(param_1 + 0xa8));
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = lVar7;
        }
        else {
          lVar6 = *plVar1;
        }
        if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (plVar4[4] != 0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
          }
          else {
            lVar6 = *plVar1;
          }
          if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_1419f7360(plVar4[4]);
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
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
      bVar8 = plVar5 == (longlong *)plVar4[2];
      plVar5 = plVar4;
    } while (bVar8);
  } while( true );
}




void FUN_141a0cc70(longlong param_1)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  uVar1 = 0xfffffffffffffffe;
  FUN_141a101d0(local_418);
  FUN_141a10250((longlong)local_418,2,0);
  FUN_141a0c3d0(param_1,(longlong)local_418);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_418,0,uVar1);
  FUN_141a10220((undefined8 *)local_418);
  return;
}




undefined8 FUN_141a0cce0(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x98))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x98);
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
  puVar8 = *(undefined8 **)(param_1 + 0x98);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x98);
    local_28 = *(longlong *)(param_1 + 0x68);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x98);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x68))) {
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




void FUN_141a0cdf0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_141a0cec7:
      if (1 < lVar2) {
        FUN_141a0bc00(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_141a0c280((longlong)param_1,(longlong)param_2);
        FUN_141a0c360(param_1,(longlong)param_2);
        return;
      }
      goto LAB_141a0cec7;
    }
    FUN_141a0bdc0(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_141a0cdf0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_141a0cdf0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_141a0cf20(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  *param_1 = vexillumarenic::CVexillumOneMgr::vftable;
  plVar2 = (longlong *)param_1[0xd];
  plVar3 = *(longlong **)param_1[0x13];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar7 = plVar3;
          plVar3 = (longlong *)param_1[0x13];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0xd])) {
            _invalid_parameter_noinfo();
          }
          if (plVar7 == plVar3) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x13] + 8) + 0x29);
            plVar2 = *(longlong **)(param_1[0x13] + 8);
            while (cVar1 == '\0') {
              FUN_1419ffc00(param_1 + 0xd,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(undefined8 *)(param_1[0x13] + 8) = param_1[0x13];
            param_1[0x14] = 0;
            *(undefined8 *)param_1[0x13] = param_1[0x13];
            *(undefined8 *)(param_1[0x13] + 0x10) = param_1[0x13];
            if (param_1[9] != 0) {
              pvVar5 = (void *)param_1[9];
              if (pvVar5 != (void *)0x0) {
                FUN_1419fc270((longlong)pvVar5);
                FUN_1419f89a0(pvVar5);
              }
              param_1[9] = 0;
            }
            puVar4 = (undefined8 *)param_1[6];
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            plVar2 = param_1 + 0x1b;
            puStack_50 = (undefined8 *)param_1[0x21];
            local_58 = *plVar2;
            puStack_40 = (undefined8 *)*puStack_50;
            local_48 = local_58;
            FUN_141a03fb0(plVar2,local_38,&local_48,&local_58);
            operator_delete((void *)param_1[0x21]);
            param_1[0x21] = 0;
            param_1[0x22] = 0;
            operator_delete((void *)*plVar2);
            if ((void *)param_1[0x18] != (void *)0x0) {
              operator_delete((void *)param_1[0x18]);
            }
            param_1[0x18] = 0;
            param_1[0x19] = 0;
            param_1[0x1a] = 0;
            operator_delete((void *)param_1[0x15]);
            plVar2 = param_1 + 0xd;
            puStack_40 = (undefined8 *)param_1[0x13];
            local_58 = *plVar2;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_141a03440(plVar2,local_38,&local_58,&local_48);
            operator_delete((void *)param_1[0x13]);
            param_1[0x13] = 0;
            param_1[0x14] = 0;
            operator_delete((void *)*plVar2);
            return;
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar2;
          }
          if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar4 = (undefined8 *)plVar7[4];
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar7;
        }
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar7 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar3 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      plVar3 = (longlong *)plVar7[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar6 = plVar3;
      plVar3 = plVar6;
      if (plVar7 != (longlong *)plVar6[2]) break;
      plVar3 = (longlong *)plVar6[1];
      plVar7 = plVar6;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a0d200(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  uint *puVar6;
  char cVar7;
  undefined8 *puVar8;
  ulonglong extraout_RAX;
  ulonglong uVar9;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  undefined4 *puVar10;
  undefined8 extraout_RAX_03;
  ulonglong extraout_RAX_04;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  ushort *local_e8;
  ushort *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8 [3];
  uint *local_a0;
  uint *local_98;
  undefined8 local_90;
  uint local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_58;
  ushort local_48 [4];
  ushort local_40 [4];
  ushort local_38 [4];
  ushort local_30 [4];
  ulonglong local_28;
  
  local_70 = 0xfffffffffffffffe;
  local_28 = DAT_141a29318 ^ (ulonglong)auStack_108;
  plVar15 = (longlong *)0x0;
  local_d0[0] = 0;
  local_d4 = 0;
  local_d8 = 0;
  local_e0 = (ushort *)&local_d4;
  local_e8 = (ushort *)local_d0;
  cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),0x186fc,0x2e,&local_d8);
  if (cVar7 == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
    log_InlineLogDBERROR("table:cq_dynanpc. TarNpc[%u] not found, VexillumOneArenic be disable.");
    uVar9 = extraout_RAX_04 & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = local_d8;
    *(undefined2 *)(param_1 + 0x54) = (undefined2)local_d0[0];
    *(undefined2 *)(param_1 + 0x56) = (undefined2)local_d4;
    *(undefined4 *)(param_1 + 0x50) = 2;
    puVar8 = FUN_1419fc4f0(*(longlong *)(param_1 + 8));
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    if (puVar8 == (undefined8 *)0x0) {
      log_InlineLogERROR("CVexillumOneMgr::InitNPC. m_arTarInfo[nIndex].pTarAttackInfo == NULL");
      uVar9 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      local_e0 = local_30;
      local_e8 = local_38;
      uVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),0x809,local_40,local_48);
      if ((char)uVar9 == '\0') {
        uVar9 = uVar9 & 0xffffffffffffff00;
      }
      else {
        local_88 = 0;
        plVar12 = plVar15;
        while (uVar11 = (uint)plVar12, uVar11 < 3) {
          uVar1 = local_40[(int)uVar11];
          if ((uVar1 <= *(ushort *)(param_1 + 0x54)) && (uVar2 = local_38[(int)uVar11], (uint)*(ushort *)(param_1 + 0x54) < (uint)uVar2 + (uint)uVar1)) {
            uVar3 = local_48[(int)uVar11];
            if ((uVar3 <= *(ushort *)(param_1 + 0x56)) && (uVar4 = local_30[(int)uVar11], (uint)*(ushort *)(param_1 + 0x56) < (uint)uVar4 + (uint)uVar3)) {
              *(ushort *)(param_1 + 0x58) = uVar1 - 1;
              *(ushort *)(param_1 + 0x5a) = uVar3 - 1;
              *(ushort *)(param_1 + 0x5c) = uVar2 + 2;
              *(ushort *)(param_1 + 0x5e) = uVar4 + 2;
              local_c8 = operator_new(8);
              local_b8[0] = plVar15;
              if (local_c8 != (longlong *)0x0) {
                *local_c8 = (longlong)local_b8;
                local_b8[0] = local_c8;
              }
              local_a0 = (uint *)0x0;
              local_98 = (uint *)0x0;
              local_90 = 0;
              local_80 = local_c8;
              (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),0x2f,local_b8);
              puVar13 = local_a0;
              if ((longlong)local_98 - (longlong)local_a0 >> 2 == 0) {
                log_InlineLogERROR("CVexillumOneMgr::InitNPC, vecID.size() <= 0");
                if (local_a0 != (uint *)0x0) {
                  operator_delete(local_a0);
                }
                local_a0 = (uint *)0x0;
                local_98 = (uint *)0x0;
                local_90 = 0;
                operator_delete(local_b8[0]);
                return extraout_RAX_01 & 0xffffffffffffff00;
              }
              local_80 = (longlong *)0x0;
              if (local_98 < local_a0) {
                _invalid_parameter_noinfo();
              }
              plVar12 = local_b8[0];
              local_80 = local_b8[0];
              while( true ) {
                puVar6 = local_98;
                local_68 = (longlong *)0x0;
                if (local_98 < local_a0) {
                  _invalid_parameter_noinfo();
                }
                local_68 = local_b8[0];
                if ((plVar12 == (longlong *)0x0) || (plVar12 != local_b8[0])) {
                  _invalid_parameter_noinfo();
                }
                if (puVar13 == puVar6) {
                  if (local_a0 != (uint *)0x0) {
                    operator_delete(local_a0);
                  }
                  local_a0 = (uint *)0x0;
                  local_98 = (uint *)0x0;
                  local_90 = 0;
                  operator_delete(local_b8[0]);
                  return CONCAT71((int7)((ulonglong)extraout_RAX_03 >> 8),1);
                }
                local_c8 = (longlong *)0x0;
                local_bc = 0;
                local_c0 = 0;
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar12;
                }
                if ((uint *)plVar14[4] <= puVar13) {
                  _invalid_parameter_noinfo();
                }
                local_c8 = (longlong *)CONCAT44(local_c8._4_4_,*puVar13);
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar12;
                }
                if ((uint *)plVar14[4] <= puVar13) {
                  _invalid_parameter_noinfo();
                }
                FUN_141a04f30((longlong *)(param_1 + 0xd8),(longlong *)&local_80,puVar13);
                lVar5 = *(longlong *)(param_1 + 0x108);
                local_58 = *(longlong **)(param_1 + 0xd8);
                if ((local_80 == (longlong *)0x0) || (local_80 != local_58)) {
                  _invalid_parameter_noinfo();
                }
                if (local_78 != lVar5) break;
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar12;
                }
                if ((uint *)plVar14[4] <= puVar13) {
                  _invalid_parameter_noinfo();
                }
                (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*puVar13);
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar12;
                }
                if ((uint *)plVar14[4] <= puVar13) {
                  _invalid_parameter_noinfo();
                }
                puVar10 = (undefined4 *)FUN_141a06040((longlong *)(param_1 + 0xd8),puVar13);
                *puVar10 = (undefined4)local_c8;
                puVar10[1] = local_c8._4_4_;
                puVar10[2] = local_c0;
                puVar10[3] = local_bc;
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar14 = plVar15;
                }
                else {
                  plVar14 = (longlong *)*plVar12;
                }
                if ((uint *)plVar14[4] <= puVar13) {
                  _invalid_parameter_noinfo();
                }
                puVar13 = puVar13 + 1;
              }
              log_InlineLogERROR("CVexillumOneMgr::InitNPC, iterVlm != m_mapVlmInfo.end()");
              if (local_a0 != (uint *)0x0) {
                operator_delete(local_a0);
              }
              local_a0 = (uint *)0x0;
              local_98 = (uint *)0x0;
              local_90 = 0;
              operator_delete(local_b8[0]);
              return extraout_RAX_02 & 0xffffffffffffff00;
            }
          }
          local_88 = uVar11 + 1;
          plVar12 = (longlong *)(ulonglong)local_88;
        }
        log_InlineLogERROR("CVexillumOneMgr::InitNPC, bSet == false");
        uVar9 = extraout_RAX_00 & 0xffffffffffffff00;
      }
    }
  }
  return uVar9;
}




void FUN_141a0d710(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (param_2 != 0) {
    lVar1 = FUN_141a0cce0(param_1,param_2);
    if (lVar1 == 0) {
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = 0;
      uVar5 = 0;
      uVar2 = 0;
      uVar4 = 0;
      param_2 = 0;
    }
    else {
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_52 = 0;
      local_50 = 0;
      local_4e = 0;
      local_4c = 0;
      local_4a = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_32 = 0;
      local_30 = 0;
      local_2e = 0;
      local_2c = 0;
      local_2a = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_12 = 0;
      local_10 = 0;
      local_e = 0;
      local_c = 0;
      local_a = 0;
      FUN_1419f2b40(lVar1,&local_68);
      uVar2 = local_54;
      uVar3 = local_52;
      uVar4 = local_34;
      uVar5 = local_32;
      uVar6 = local_14;
      uVar7 = local_12;
    }
    FUN_141a10490(param_3,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}




void FUN_141a0d870(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a0cdf0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_141a0d8d0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = vexillumarenic::CVexillumOneMgr::vftable;
  param_1[1] = param_2;
  puVar3 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined2 *)((longlong)param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  FUN_141a07a30(param_1 + 0xd);
  plVar1 = param_1 + 0x15;
  puVar2 = operator_new(8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar1;
    puVar3 = puVar2;
  }
  *plVar1 = (longlong)puVar3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_141a07b60(param_1 + 0x1b);
  param_1[0x23] = 0;
  FUN_141a00e50((longlong)(param_1 + 0xd));
  FUN_141a04e70(plVar1);
  return param_1;
}




undefined8 * FUN_141a0d9c0(undefined8 *param_1,uint param_2)

{
  FUN_141a0cf20(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a0d9f0(longlong param_1)

{
  rsize_t _DstSize;
  longlong *plVar1;
  ulonglong *puVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  longlong *plVar6;
  longlong lVar7;
  ulonglong extraout_RAX_00;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong extraout_RAX_01;
  uint uVar10;
  void *_Dst;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  longlong *local_478;
  uint local_470 [2];
  longlong *local_468;
  undefined8 local_460;
  longlong local_458 [4];
  char local_438;
  undefined1 local_437 [1022];
  undefined1 local_39;
  ulonglong local_38;
  ulonglong uVar11;
  
  local_460 = 0xfffffffffffffffe;
  local_38 = DAT_141a29318 ^ (ulonglong)auStack_4a8;
  plVar5 = (longlong *)InstanceGet();
  local_438 = '\0';
  memset(local_437,0,0x3ff);
  _snprintf(&local_438,0x3ff,"SELECT * FROM cq_vexillum WHERE type = %u");
  local_39 = 0;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_438,2);
  if (plVar5 == (longlong *)0x0) {
    local_488 = 0x6e;
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),0x1f47);
  local_478 = plVar6;
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6), lVar7 != 1)) {
    (**(code **)*plVar5)(plVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6);
    }
    log_InlineLogERROR("CVexillumOneMgr::Create(), SQL_SELECT_SYNFLAG_ALL Error!");
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  lVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
  *(longlong *)(param_1 + 0x30) = lVar7;
  if (lVar7 == 0) {
    local_488 = 0x7b;
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar13 = 0;
  iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
  uVar11 = uVar13;
  if (0 < iVar3) {
    do {
      (**(code **)(*plVar5 + 0x30))(plVar5,(longlong)(int)uVar11);
      plVar8 = FUN_1419f7870(plVar5,*(longlong *)(param_1 + 8),1);
      local_478 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        uVar9 = FUN_1419f26d0((longlong)plVar8);
        local_470[0] = (uint)uVar9;
        local_468 = plVar8;
        FUN_141a04930((longlong *)(param_1 + 0x68),local_458,local_470);
        uVar9 = FUN_1419f2b60((longlong)plVar8);
        if (0 < (int)uVar9) {
          FUN_141a07ab0((longlong *)(param_1 + 0xa8),&local_478);
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      iVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
    } while ((int)uVar10 < iVar3);
  }
  (**(code **)*plVar5)(plVar5);
  local_478 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0xa8);
  plVar8 = *(longlong **)(param_1 + 200);
  if (plVar8 < *(longlong **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
  }
  lVar7 = *plVar5;
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (*(longlong **)(param_1 + 200) < plVar1) {
    _invalid_parameter_noinfo();
  }
  if ((lVar7 == 0) || (lVar7 != *plVar5)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a0cdf0(plVar1,plVar8,(longlong)plVar8 - (longlong)plVar1 >> 3,local_478._0_1_);
  if ((ulonglong)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3) < 9) goto LAB_141a0dd0d;
  uVar11 = *(ulonglong *)(param_1 + 0xc0);
  if (*(ulonglong *)(param_1 + 200) < uVar11) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (ulonglong *)*plVar5;
  if (puVar2 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar12 = uVar13;
  }
  else {
    uVar12 = *puVar2;
  }
  _Dst = (void *)(uVar11 + 0x40);
  if (*(void **)(uVar12 + 0x20) < _Dst) {
LAB_141a0dc87:
    _invalid_parameter_noinfo();
  }
  else {
    if (puVar2 != (ulonglong *)0x0) {
      uVar13 = *puVar2;
    }
    if (_Dst < *(void **)(uVar13 + 0x18)) goto LAB_141a0dc87;
  }
  _Src = *(void **)(param_1 + 200);
  if (_Src < *(void **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
  }
  if (((plVar5 == (longlong *)0x0) || (_Dst < *(void **)(param_1 + 0xc0))) || (*(void **)(param_1 + 200) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  lVar7 = *plVar5;
  if ((_Src < *(void **)(param_1 + 0xc0)) || (*(void **)(param_1 + 200) < _Src)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar7 == 0) || (lVar7 != *plVar5)) {
    _invalid_parameter_noinfo();
  }
  if (_Dst != _Src) {
    lVar7 = *(longlong *)(param_1 + 200) - (longlong)_Src >> 3;
    _DstSize = lVar7 * 8;
    if (0 < lVar7) {
      memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)(param_1 + 200) = (void *)(_DstSize + (longlong)_Dst);
  }
LAB_141a0dd0d:
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,2);
  uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,3);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x14) = iVar3 / 100;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,3);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x18) = iVar3 % 100;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,5);
  iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)(param_1 + 0x2c) = 0x1c20;
  }
  uVar9 = (**(code **)*plVar6)(plVar6);
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}




undefined8 FUN_141a0de30(longlong param_1,int param_2,longlong param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_141a10250(param_3,(short)param_4,0);
  if (param_4 == 0) {
    if (param_2 != 0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
      uVar2 = FUN_141a0d710(param_1,uVar1,param_3);
    }
  }
  else if (((param_4 == 7) || (param_4 == 6)) && (param_2 != 0)) {
    uVar2 = FUN_141a10510(param_3,param_2);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_141a0deb0(longlong param_1,longlong param_2)

{
  rsize_t _DstSize;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  errno_t eVar6;
  ulonglong in_RAX;
  longlong *plVar7;
  uint7 extraout_var;
  ulonglong uVar8;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  undefined4 extraout_var_00;
  longlong lVar9;
  void *_Dst;
  longlong lVar10;
  longlong local_res10;
  
  if (param_2 == 0) {
LAB_141a0deca:
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10 = param_2;
  in_RAX = FUN_1419f2b60(param_2);
  if ((int)in_RAX < 1) goto LAB_141a0deca;
  bVar5 = FUN_141a0c580(param_1,param_2);
  if (!bVar5) {
    if (7 < (ulonglong)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3)) {
      plVar7 = (longlong *)FUN_141a031b0((longlong *)(param_1 + 0xa8));
      bVar5 = FUN_141a0b320(*plVar7,param_2);
      if (bVar5) {
        return (ulonglong)extraout_var << 8;
      }
    }
    FUN_141a07ab0((longlong *)(param_1 + 0xa8),&local_res10);
  }
  plVar7 = (longlong *)(param_1 + 0xa8);
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 < *(undefined8 **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
  }
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  lVar9 = *plVar7;
  if (*(undefined8 **)(param_1 + 200) < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((lVar9 == 0) || (lVar9 != *plVar7)) {
    _invalid_parameter_noinfo();
  }
  FUN_141a066e0(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,FUN_141a0b320);
  uVar8 = *(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3;
  if (uVar8 < 9) goto LAB_141a0e084;
  uVar3 = *(ulonglong *)(param_1 + 0xc0);
  if (*(ulonglong *)(param_1 + 200) < uVar3) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX;
  }
  plVar4 = (longlong *)*plVar7;
  lVar9 = 0;
  if (plVar4 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_00;
    lVar10 = lVar9;
  }
  else {
    lVar10 = *plVar4;
  }
  _Dst = (void *)(uVar3 + 0x40);
  if (*(void **)(lVar10 + 0x20) < _Dst) {
LAB_141a0dffe:
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_01;
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *plVar4;
    }
    if (_Dst < *(void **)(lVar9 + 0x18)) goto LAB_141a0dffe;
  }
  _Src = *(void **)(param_1 + 200);
  if (_Src < *(void **)(param_1 + 0xc0)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_02;
  }
  if (((plVar7 == (longlong *)0x0) || (_Dst < *(void **)(param_1 + 0xc0))) || (*(void **)(param_1 + 200) < _Dst)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_03;
  }
  lVar9 = *plVar7;
  if ((_Src < *(void **)(param_1 + 0xc0)) || (*(void **)(param_1 + 200) < _Src)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_04;
  }
  if ((lVar9 == 0) || (lVar9 != *plVar7)) {
    _invalid_parameter_noinfo();
    uVar8 = extraout_RAX_05;
  }
  if (_Dst != _Src) {
    uVar8 = *(longlong *)(param_1 + 200) - (longlong)_Src >> 3;
    _DstSize = uVar8 * 8;
    if (0 < (longlong)uVar8) {
      eVar6 = memmove_s(_Dst,_DstSize,_Src,_DstSize);
      uVar8 = CONCAT44(extraout_var_00,eVar6);
    }
    *(void **)(param_1 + 200) = (void *)(_DstSize + (longlong)_Dst);
  }
LAB_141a0e084:
  return CONCAT71((int7)(uVar8 >> 8),1);
}




undefined8 * FUN_141a0e0a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x120);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_141a0d8d0(puVar1,param_1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141a18388);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_141a0d9f0((longlong)puVar1);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




undefined1 * FUN_141a0e170(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  CMsg local_418 [1040];
  
  puVar3 = (undefined1 *)register0x00000020;
  if ((*(int *)(param_1 + 0x60) == 0) && (puVar3 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x58))(), (char)puVar3 != '\0')) {
    puVar3 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    uVar1 = (uint)puVar3;
    if (uVar1 != 0) {
      lVar4 = FUN_141a0cce0(param_1,uVar1);
      if (lVar4 == 0) {
        log_InlineLogERROR("CVexillumOneMgr::OnRevSuccessVexillum. pSynInfo == NULL");
        puVar3 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
      }
      else {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
        if (((int)(uint)*(ushort *)(param_1 + 0x58) <= iVar2) && (iVar2 < (int)((uint)*(ushort *)(param_1 + 0x5c) + (uint)*(ushort *)(param_1 + 0x58)))) {
          if (((int)(uint)*(ushort *)(param_1 + 0x5a) <= (int)uVar5) &&
             ((int)uVar5 < (int)((uint)*(ushort *)(param_1 + 0x5e) + (uint)*(ushort *)(param_1 + 0x5a)))) {
            if ((*(uint *)(param_1 + 0x44) == uVar1) && (uVar5 = FUN_1419f7da0(lVar4,param_2,0,param_4), (char)uVar5 != '\0')) {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2,0xf);
              FUN_141a101d0(local_418);
              uVar6 = FUN_141a0de30(param_1,param_2,(longlong)local_418,7);
              if ((char)uVar6 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_418,param_2,1);
              }
              FUN_141a0deb0(param_1,lVar4);
              uVar6 = FUN_141a10220((undefined8 *)local_418);
              return (undefined1 *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
            return (undefined1 *)(uVar5 & 0xffffffffffffff00);
          }
        }
        puVar3 = (undefined1 *)(uVar5 & 0xffffffffffffff00);
      }
    }
  }
  return puVar3;
}




void FUN_141a0e310(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    lVar3 = FUN_141a0cce0(param_1,uVar2);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x2a) != '\0')) {
      log_InlineLogERROR("CVexillumOneMgr::AddMemberMerit. User[%u] Merit[%d]");
    }
    else {
      FUN_1419f7a50(lVar3,param_2,param_3);
      lVar1 = **(longlong **)(param_1 + 8);
      (**(code **)(lVar1 + 0x88))(*(longlong **)(param_1 + 8),param_2,param_3,lVar1,uVar4);
      if (0 < param_4) {
        FUN_1419f2960(lVar3,param_4);
        FUN_141a0deb0(param_1,lVar3);
      }
    }
  }
  return;
}




void FUN_141a0e3e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  CMsg local_418 [1040];
  
  FUN_141a101d0(local_418);
  FUN_141a10250((longlong)local_418,0,0);
  if (param_2 != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    FUN_141a0d710(param_1,uVar1,(longlong)local_418);
  }
  FUN_141a0c3d0(param_1,(longlong)local_418);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
  FUN_141a10220((undefined8 *)local_418);
  return;
}




void FUN_141a0e480(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  uVar2 = 0xfffffffffffffffe;
  FUN_141a101d0(local_418);
  uVar1 = FUN_141a0de30(param_1,0,(longlong)local_418,param_3);
  if ((char)uVar1 == '\0') {
    log_InlineLogERROR("CVexillumOneMgr::SendVexillumInfo. CreateMsgVexillumHead");
    FUN_141a10220((undefined8 *)local_418);
  }
  else {
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0x809,local_418,param_4,uVar2);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_141a10220((undefined8 *)local_418);
  }
  return;
}




void FUN_141a0e550(longlong param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  CMsg local_418 [1040];
  
  if (param_2 != 0) {
    FUN_141a101d0(local_418);
    uVar2 = FUN_141a0de30(param_1,0,(longlong)local_418,param_3);
    if ((char)uVar2 == '\0') {
      log_InlineLogERROR("CVexillumOneMgr::SendOneSynVexillum. CreateMsgVexillumHead");
      FUN_141a10220((undefined8 *)local_418);
    }
    else {
      if (param_3 == 4) {
        uVar2 = FUN_1419f26d0(param_2);
        FUN_141a0d710(param_1,(uint)uVar2,(longlong)local_418);
      }
      else if (param_3 == 5) {
        uVar2 = FUN_1419f26d0(param_2);
        FUN_141a0d710(param_1,(uint)uVar2,(longlong)local_418);
        FUN_141a10500((longlong)local_418,param_5);
      }
      lVar1 = **(longlong **)(param_1 + 8);
      uVar3 = FUN_1419f26d0(param_2);
      (**(code **)(lVar1 + 0x148))(*(undefined8 *)(param_1 + 8),0x809,uVar3 & 0xffffffff,local_418,param_4);
      FUN_141a10220((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_141a0e670(longlong param_1,int param_2)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  if (param_2 != 0) {
    FUN_141a101d0(local_418);
    uVar1 = FUN_141a0de30(param_1,param_2,(longlong)local_418,5);
    if ((char)uVar1 == '\0') {
      log_InlineLogERROR("CVexillumOneMgr::ClsDestVexillum. CreateMsgVexillumHead");
      FUN_141a10220((undefined8 *)local_418);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
      FUN_141a10220((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_141a0e710(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (iVar4 == 0x809) {
      if (*(longlong *)(param_1 + 0x110) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141a0e766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),param_2,&DAT_141a1bb18);
        return;
      }
      lVar1 = **(longlong **)(param_1 + 0x108);
      plVar2 = *(longlong **)(param_1 + 0xd8);
      lVar5 = 0;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar5;
      }
      else {
        lVar6 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar5 = *plVar2;
      }
      if (lVar1 == *(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(lVar1 + 0x1c),lVar1 + 0x20,lVar1 + 0x22);
      if (cVar3 != '\0') {
        FUN_141a0e480(param_1,0,3,0);
      }
    }
  }
  return;
}




void * FUN_141a0e840(longlong param_1,uint param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 *puVar4;
  ulonglong extraout_RAX_01;
  undefined8 uVar5;
  uint local_450 [2];
  undefined8 *local_448;
  undefined8 local_440;
  longlong local_438 [4];
  CMsg local_418 [1040];
  
  local_440 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX & 0xffffffffffffff00);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX_00 & 0xffffffffffffff00);
  }
  else if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    puVar4 = (undefined8 *)FUN_141a0cce0(param_1,uVar2);
    if ((puVar4 == (undefined8 *)0x0) && (uVar2 != 0)) {
      param_3 = (uint *)**(undefined8 **)(param_1 + 8);
      cVar1 = (**(code **)(param_3 + 0x20))(*(undefined8 **)(param_1 + 8),uVar2);
      if (cVar1 != '\0') {
        puVar4 = FUN_1419f7930(uVar2,*(longlong **)(param_1 + 8),1);
        if (puVar4 == (undefined8 *)0x0) {
          log_InlineLogERROR("CVexillumOneMgr::OnEnterBattle. pSynInfo == NUL, User[%d] Syn[%d]");
          return (void *)(extraout_RAX_01 & 0xffffffffffffff00);
        }
        param_3 = local_450;
        local_450[0] = uVar2;
        local_448 = puVar4;
        FUN_141a04930((longlong *)(param_1 + 0x68),local_438,param_3);
        FUN_141a0deb0(param_1,(longlong)puVar4);
      }
    }
    FUN_141a0e3e0(param_1,param_2,param_3,param_4);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1419f2760((longlong)puVar4);
      FUN_141a0fd10(local_418);
      uVar3 = FUN_1419f6790((longlong)puVar4,param_2);
      uVar5 = FUN_141a0fe40(local_418,1,uVar3);
      if ((char)uVar5 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_418);
      }
      FUN_141a0fd60((undefined8 *)local_418);
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
    if ((int)uVar5 != 2) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2,2);
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return register0x00000020;
}




void * FUN_141a0ea20(longlong param_1,int param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  CMsg local_418 [1040];
  
  if ((*(int *)(param_1 + 0x60) == 0) && (param_2 != 0)) {
    if ((param_3 == 0) || ((int)param_4 < 1)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
    }
    else {
      uVar5 = param_4;
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_3);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_3);
      }
      uVar4 = param_4 & 0xffffffff;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_3);
      puVar2 = FUN_141a0e170(param_1,param_3,uVar4,uVar5);
      if ((char)puVar2 == '\0') {
        FUN_141a101d0(local_418);
        uVar3 = FUN_141a10250((longlong)local_418,8,0);
        if ((char)uVar3 != '\0') {
          FUN_141a10520((longlong)local_418,(int)param_4);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_3,local_418);
        }
        uVar3 = FUN_141a10220((undefined8 *)local_418);
      }
      else {
        FUN_141a101d0(local_418);
        uVar3 = FUN_141a0de30(param_1,param_3,(longlong)local_418,7);
        if ((char)uVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_418,param_3,1);
        }
        uVar3 = FUN_141a10220((undefined8 *)local_418);
      }
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return register0x00000020;
}




ulonglong FUN_141a0eb70(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  CMsg local_418 [1040];
  
  FUN_141a101d0(local_418);
  uVar3 = FUN_141a10250((longlong)local_418,9,0);
  if ((char)uVar3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  if (iVar1 != 3) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
    lVar5 = FUN_141a0cce0(param_1,uVar2);
    if (lVar5 != 0) {
      FUN_1419f27b0(lVar5);
    }
    pvVar6 = FUN_141a0ea20(param_1,param_2,0,0);
    uVar3 = FUN_141a10220((undefined8 *)local_418);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(char)pvVar6);
  }
  else {
    uVar4 = FUN_141a10220((undefined8 *)local_418);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}




undefined8 FUN_141a0ec60(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res18 [4];
  longlong *local_878;
  longlong local_870;
  longlong *local_868;
  undefined8 local_858;
  CMsg local_848 [1040];
  CMsg local_438 [1040];
  
  local_858 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x60) == 0) {
    local_res18[0] = param_3;
    if (((param_2 == 0) || (param_3 == 0)) || (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(), cVar1 == '\0')) {
      log_InlineLogERROR("CVexillumOneMgr::OnUserTouchVexillum. idUser == %u || idVlmNpc == %u || !m_pConsumer->IsUserAlive(idUser)");
    }
    else {
      FUN_141a04f30((longlong *)(param_1 + 0xd8),(longlong *)&local_878,local_res18);
      lVar7 = *(longlong *)(param_1 + 0x108);
      lVar10 = 0;
      local_868 = *(longlong **)(param_1 + 0xd8);
      if ((local_878 == (longlong *)0x0) || (local_878 != local_868)) {
        _invalid_parameter_noinfo();
      }
      if (local_870 != lVar7) {
        if (local_878 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar10;
        }
        else {
          lVar7 = *local_878;
        }
        if (local_870 == *(longlong *)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)(local_870 + 0x28) == 0) {
          if (local_878 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = lVar10;
          }
          else {
            lVar7 = *local_878;
          }
          if (local_870 == *(longlong *)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (local_878 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = lVar10;
          }
          else {
            lVar7 = *local_878;
          }
          if (local_870 == *(longlong *)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
          uVar3 = iVar2 - (uint)*(ushort *)(local_870 + 0x22);
          uVar8 = (int)uVar3 >> 0x1f;
          iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
          uVar4 = iVar2 - (uint)*(ushort *)(local_870 + 0x20);
          uVar9 = (int)uVar4 >> 0x1f;
          if ((int)((uVar3 ^ uVar8) - uVar8) < (int)((uVar4 ^ uVar9) - uVar9)) {
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = lVar10;
            }
            else {
              lVar7 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
            uVar3 = iVar2 - (uint)*(ushort *)(local_870 + 0x20);
            uVar4 = (int)uVar3 >> 0x1f;
            uVar4 = (uVar3 ^ uVar4) - uVar4;
          }
          else {
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = lVar10;
            }
            else {
              lVar7 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
            uVar3 = iVar2 - (uint)*(ushort *)(local_870 + 0x22);
            uVar4 = (int)uVar3 >> 0x1f;
            uVar4 = (uVar3 ^ uVar4) - uVar4;
          }
          if (uVar4 < 3) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
            FUN_141a101d0(local_848);
            uVar6 = FUN_141a10250((longlong)local_848,8,0);
            if ((char)uVar6 != '\0') {
              FUN_141a10520((longlong)local_848,0x3c);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),param_2,local_848);
            }
            FUN_141a101d0(local_438);
            uVar6 = FUN_141a0de30(param_1,param_2,(longlong)local_438,6);
            if ((char)uVar6 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809,local_438,param_2,1);
            }
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = lVar10;
            }
            else {
              lVar7 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*(undefined4 *)(local_870 + 0x1c));
            if (local_878 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              lVar10 = *local_878;
            }
            if (local_870 == *(longlong *)(lVar10 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            *(undefined4 *)(local_870 + 0x24) = 0x1e;
            uVar5 = tq::TimeGet(0);
            *(uint *)(local_870 + 0x28) = uVar5 / 1000;
            uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
            lVar7 = FUN_141a0cce0(param_1,uVar3);
            if (lVar7 != 0) {
              FUN_141a0e310(param_1,param_2,3,3);
              FUN_141a0deb0(param_1,lVar7);
            }
            FUN_141a10220((undefined8 *)local_438);
            FUN_141a10220((undefined8 *)local_848);
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141a0eff0(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  IStringManager *pIVar7;
  char *pcVar8;
  longlong *plVar9;
  uint *puVar10;
  CMsg *pCVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auStackY_5f8 [32];
  longlong *local_5a8 [3];
  uint *local_590;
  uint *local_588;
  undefined8 local_580;
  longlong *local_578;
  longlong *local_568;
  undefined8 local_558;
  CMsg local_548 [1040];
  char local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  local_558 = 0xfffffffffffffffe;
  local_38 = DAT_141a29318 ^ (ulonglong)auStackY_5f8;
  if (*(int *)(param_1 + 0x60) == 0) {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141a18388);
      local_38 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      tq::SysLogSave("resetvlmowner","[1] Tar[%u]");
      if (*(int *)(param_1 + 0x40) == param_2) {
        if (*(uint *)(param_1 + 0x44) != 0) {
          lVar4 = FUN_141a0cce0(param_1,*(uint *)(param_1 + 0x44));
          if (lVar4 == 0) {
            log_InlineLogERROR("CVexillumOneMgr::OnResetTarNpcOwner. pOldSynInfo == NULL");
          }
          else {
            FUN_1419f2ae0(lVar4,1);
            FUN_141a0e550(param_1,lVar4,4,0,0);
          }
        }
        plVar9 = (longlong *)0x0;
        uVar3 = FUN_1419fb2d0(*(longlong *)(param_1 + 0x48));
        *(undefined4 *)(param_1 + 0x44) = uVar3;
        FUN_1419fbdb0(*(longlong *)(param_1 + 0x48));
        FUN_141a0b550(param_1,'\x01');
        (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x44));
        lVar4 = FUN_141a0cce0(param_1,*(uint *)(param_1 + 0x44));
        if (lVar4 == 0) {
          pIVar7 = theInstance();
          pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUMONE_NO_SYN_OCCUPY_SUCCESS");
          _snprintf(local_138,0x100,pcVar8);
        }
        else {
          FUN_1419f2a40(lVar4,1,*(int *)(param_1 + 0x40),*(undefined2 *)(param_1 + 0x54),*(undefined2 *)(param_1 + 0x56),*(undefined2 *)(param_1 + 0x58),
                        *(undefined2 *)(param_1 + 0x5a),*(undefined2 *)(param_1 + 0x5c),*(undefined2 *)(param_1 + 0x5e));
          FUN_141a0e550(param_1,lVar4,5,0,*(undefined4 *)(param_1 + 0x50));
          local_578 = operator_new(8);
          local_5a8[0] = plVar9;
          if (local_578 != (longlong *)0x0) {
            *local_578 = (longlong)local_5a8;
            local_5a8[0] = local_578;
          }
          local_590 = (uint *)0x0;
          local_588 = (uint *)0x0;
          local_580 = 0;
          uVar12 = (ulonglong)*(ushort *)(param_1 + 0x58);
          pCVar11 = (CMsg *)0x809;
          local_568 = local_578;
          (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x44));
          puVar10 = local_590;
          if ((longlong)local_588 - (longlong)local_590 >> 2 != 0) {
            local_578 = (longlong *)0x0;
            if (local_588 < local_590) {
              _invalid_parameter_noinfo();
            }
            plVar1 = local_5a8[0];
            local_578 = local_5a8[0];
            while( true ) {
              puVar2 = local_588;
              local_568 = (longlong *)0x0;
              if (local_588 < local_590) {
                _invalid_parameter_noinfo();
              }
              local_568 = local_5a8[0];
              if ((plVar1 == (longlong *)0x0) || (plVar1 != local_5a8[0])) {
                _invalid_parameter_noinfo();
              }
              if (puVar10 == puVar2) break;
              if (plVar1 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar13 = plVar9;
              }
              else {
                plVar13 = (longlong *)*plVar1;
              }
              if ((uint *)plVar13[4] <= puVar10) {
                _invalid_parameter_noinfo();
              }
              puVar5 = FUN_141a0e170(param_1,*puVar10,pCVar11,uVar12);
              if ((char)puVar5 != '\0') {
                FUN_141a101d0(local_548);
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar13 = plVar9;
                }
                else {
                  plVar13 = (longlong *)*plVar1;
                }
                if ((uint *)plVar13[4] <= puVar10) {
                  _invalid_parameter_noinfo();
                }
                uVar12 = 7;
                pCVar11 = local_548;
                uVar6 = FUN_141a0de30(param_1,*puVar10,(longlong)pCVar11,7);
                if ((char)uVar6 != '\0') {
                  if (plVar1 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    plVar13 = plVar9;
                  }
                  else {
                    plVar13 = (longlong *)*plVar1;
                  }
                  if ((uint *)plVar13[4] <= puVar10) {
                    _invalid_parameter_noinfo();
                  }
                  uVar12 = (ulonglong)*puVar10;
                  pCVar11 = local_548;
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),0x809);
                }
                FUN_141a10220((undefined8 *)local_548);
              }
              if (plVar1 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar13 = plVar9;
              }
              else {
                plVar13 = (longlong *)*plVar1;
              }
              if ((uint *)plVar13[4] <= puVar10) {
                _invalid_parameter_noinfo();
              }
              puVar10 = puVar10 + 1;
            }
          }
          pIVar7 = theInstance();
          FUN_1419f2700(lVar4);
          pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUMONE_SYN_OCCUPY_SUCCESS");
          _snprintf(local_138,0x100,pcVar8);
          if (local_590 != (uint *)0x0) {
            operator_delete(local_590);
          }
          local_590 = (uint *)0x0;
          local_588 = (uint *)0x0;
          local_580 = 0;
          operator_delete(local_5a8[0]);
        }
        local_39 = 0;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))(*(longlong **)(param_1 + 8),0x809,local_138,0xffffff);
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else {
        local_38 = extraout_RAX_00 & 0xffffffffffffff00;
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffffffffffff00;
  }
  return local_38;
}




void FUN_141a0f4c0(longlong param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  longlong local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong *local_d8 [3];
  uint *local_c0;
  uint *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_88;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  undefined8 local_48;
  longlong *local_40;
  
  local_48 = 0xfffffffffffffffe;
  uVar6 = FUN_141a0b3e0(param_1);
  if (*(int *)(param_1 + 0x60) == -1) {
    if ((int)uVar6 == 0) {
      plVar9 = (longlong *)0x0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 5;
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x20) = uVar5 / 1000;
      *(undefined4 *)(param_1 + 0x24) = 5;
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x28) = uVar5 / 1000;
      FUN_141a0cae0(param_1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x40),0);
      local_res20[0] = 0;
      local_res18[0] = 0;
      local_res10._0_4_ = 0;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),0x186fb,0x2e,&local_res10,local_res20,local_res18);
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),(undefined4)local_res10,0);
      }
      plVar13 = &local_res10;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),0x186fd,0x2e,plVar13,local_res20,local_res18);
      if (cVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),(undefined4)local_res10,0);
      }
      plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x108);
      puVar1 = *(undefined8 **)(param_1 + 0xd8);
      local_98 = puVar1;
LAB_141a0f650:
      plVar8 = *(longlong **)(param_1 + 0x108);
      local_88 = *(longlong **)(param_1 + 0xd8);
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 != local_88)) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 != plVar8) {
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar13 = plVar9;
        }
        else {
          plVar13 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar13[6]) {
          _invalid_parameter_noinfo();
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar13 = plVar9;
        }
        else {
          plVar13 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar13[6]) {
          _invalid_parameter_noinfo();
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar13 = plVar9;
        }
        else {
          plVar13 = (longlong *)*puVar1;
        }
        if (plVar7 == (longlong *)plVar13[6]) {
          _invalid_parameter_noinfo();
        }
        plVar13 = plVar7 + 4;
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))
                          (*(longlong **)(param_1 + 8),*(undefined4 *)((longlong)plVar7 + 0x1c),0x809,plVar13,(longlong)plVar7 + 0x22);
        if (cVar4 == '\0') {
          if (puVar1 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar8 = plVar9;
          }
          else {
            plVar8 = (longlong *)*puVar1;
          }
          if (plVar7 == (longlong *)plVar8[6]) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)((longlong)plVar7 + 0x24) = 0x1e;
          uVar5 = tq::TimeGet(0);
          *(uint *)(plVar7 + 5) = uVar5 / 1000;
          log_InlineLogERROR("CVexillumOneMgr::OnTimer(). RefreshVexillum Error!");
        }
        else {
          if (puVar1 == (undefined8 *)0x0) {
            _invalid_parameter_noinfo();
            plVar8 = plVar9;
          }
          else {
            plVar8 = (longlong *)*puVar1;
          }
          if (plVar7 == (longlong *)plVar8[6]) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(plVar7 + 5) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
        }
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar7 + 0x2d) == '\0') {
          plVar8 = plVar7;
          plVar3 = (longlong *)plVar7[2];
          if (*(char *)(plVar7[2] + 0x2d) == '\0') {
            do {
              plVar7 = plVar3;
              plVar3 = (longlong *)*plVar7;
              local_a0 = plVar7;
            } while (*(char *)(*plVar7 + 0x2d) == '\0');
          }
          else {
            do {
              plVar7 = (longlong *)plVar8[1];
              if (*(char *)((longlong)plVar7 + 0x2d) != '\0') break;
              bVar15 = plVar8 == (longlong *)plVar7[2];
              plVar8 = plVar7;
            } while (bVar15);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_141a0f650;
      }
      local_98 = operator_new(8);
      local_d8[0] = plVar9;
      if (local_98 != (longlong *)0x0) {
        *local_98 = (longlong)local_d8;
        local_d8[0] = local_98;
      }
      local_c0 = (uint *)0x0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      pplVar12 = local_d8;
      local_88 = local_98;
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),0x809);
      puVar10 = local_c0;
      if ((longlong)local_b8 - (longlong)local_c0 >> 2 != 0) {
        local_40 = (longlong *)0x0;
        if (local_b8 < local_c0) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_d8[0];
        local_40 = local_d8[0];
        while( true ) {
          puVar2 = local_b8;
          local_78 = (longlong *)0x0;
          if (local_b8 < local_c0) {
            _invalid_parameter_noinfo();
          }
          local_78 = local_d8[0];
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_d8[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar10 == puVar2) break;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar8 = plVar9;
          }
          else {
            plVar8 = (longlong *)*plVar7;
          }
          if ((uint *)plVar8[4] <= puVar10) {
            _invalid_parameter_noinfo();
          }
          FUN_141a0e840(param_1,*puVar10,(uint *)pplVar12,plVar13);
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar8 = plVar9;
          }
          else {
            plVar8 = (longlong *)*plVar7;
          }
          if ((uint *)plVar8[4] <= puVar10) {
            _invalid_parameter_noinfo();
          }
          puVar10 = puVar10 + 1;
        }
      }
      if (local_c0 != (uint *)0x0) {
        operator_delete(local_c0);
      }
      local_c0 = (uint *)0x0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      operator_delete(local_d8[0]);
    }
  }
  else if ((*(int *)(param_1 + 0x60) == 0) && ((int)uVar6 == -1)) {
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_141a0c650(param_1);
  }
  lVar11 = 0;
  if (*(int *)(param_1 + 0x60) == 0) {
    if ((*(int *)(param_1 + 0x20) != 0) && (uVar5 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar5 / 1000)) {
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x20) = uVar5 / 1000;
      FUN_141a0cc70(param_1);
    }
    if ((*(int *)(param_1 + 0x28) != 0) && (uVar5 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24)) <= uVar5 / 1000)) {
      uVar5 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x28) = uVar5 / 1000;
      FUN_141a0b550(param_1,'\0');
    }
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x108);
    plVar13 = *(longlong **)(param_1 + 0xd8);
    local_68 = plVar13;
LAB_141a0fa50:
    plVar7 = *(longlong **)(param_1 + 0x108);
    local_58 = *(longlong **)(param_1 + 0xd8);
    if ((plVar13 == (longlong *)0x0) || (plVar13 != local_58)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 != plVar7) {
      if (plVar13 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = lVar11;
      }
      else {
        lVar14 = *plVar13;
      }
      if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((int)plVar9[5] != 0) {
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar14 = lVar11;
        }
        else {
          lVar14 = *plVar13;
        }
        if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = tq::TimeGet(0);
        if ((uint)((int)plVar9[5] + *(int *)((longlong)plVar9 + 0x24)) <= uVar5 / 1000) {
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar11;
          }
          else {
            lVar14 = *plVar13;
          }
          if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          *(undefined4 *)(plVar9 + 5) = 0;
          *(undefined4 *)((longlong)plVar9 + 0x24) = 0;
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar11;
          }
          else {
            lVar14 = *plVar13;
          }
          if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar11;
          }
          else {
            lVar14 = *plVar13;
          }
          if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar13 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar11;
          }
          else {
            lVar14 = *plVar13;
          }
          if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))
                            (*(longlong **)(param_1 + 8),*(undefined4 *)((longlong)plVar9 + 0x1c),0x809,plVar9 + 4,(longlong)plVar9 + 0x22);
          if (cVar4 == '\0') {
            if (plVar13 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar14 = lVar11;
            }
            else {
              lVar14 = *plVar13;
            }
            if (plVar9 == *(longlong **)(lVar14 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            *(undefined4 *)((longlong)plVar9 + 0x24) = 0x1e;
            uVar5 = tq::TimeGet(0);
            *(uint *)(plVar9 + 5) = uVar5 / 1000;
            log_InlineLogERROR("CVexillumOneMgr::OnTimer(). RefreshVexillum Error!");
          }
        }
      }
      if (plVar13 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x2d) == '\0') {
        plVar7 = plVar9;
        plVar8 = (longlong *)plVar9[2];
        if (*(char *)(plVar9[2] + 0x2d) == '\0') {
          do {
            plVar9 = plVar8;
            plVar8 = (longlong *)*plVar9;
            local_a8 = plVar9;
          } while (*(char *)(*plVar9 + 0x2d) == '\0');
        }
        else {
          do {
            plVar9 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar9 + 0x2d) != '\0') break;
            bVar15 = plVar7 == (longlong *)plVar9[2];
            plVar7 = plVar9;
          } while (bVar15);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_141a0fa50;
    }
  }
  return;
}




CMsg * FUN_141a0fc70(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_141a0fca0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_141a0fcb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a0fcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_141a0fcc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a0fcc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_141a0fcd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141a0fcd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_141a0fce0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141a0fd10(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = vexillumarenic::CMsgSelfSynMemAwardRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141a0fd60(undefined8 *param_1)

{
  *param_1 = vexillumarenic::CMsgSelfSynMemAwardRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141a0fd90(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x427;
}




undefined8 FUN_141a0fdc0(CMsg *param_1,undefined4 param_2,ushort param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x427;
  **(undefined2 **)(param_1 + 0x408) = 0x46;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x12) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(uint *)(lVar1 + 10) = (uint)param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_141a0fe40(CMsg *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x427;
  **(undefined2 **)(param_1 + 0x408) = 0x46;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 0xd;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 6) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0x12) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_141a0fec0(CMsg *param_1)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x427;
  **(undefined2 **)(param_1 + 0x408) = 0x36;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = 9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 0;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 6) = 1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_141a0ff30(longlong param_1,char *param_2,undefined4 param_3)

{
  int *piVar1;
  char *_Dest;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x14) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x14;
  _Dest = (char *)(*(longlong *)(param_1 + 0x408) + 0x1e + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 0xe) * 0x14);
  _Dest[0] = '\0';
  _Dest[1] = '\0';
  _Dest[2] = '\0';
  _Dest[3] = '\0';
  _Dest[4] = '\0';
  _Dest[5] = '\0';
  _Dest[6] = '\0';
  _Dest[7] = '\0';
  _Dest[8] = '\0';
  _Dest[9] = '\0';
  _Dest[10] = '\0';
  _Dest[0xb] = '\0';
  _Dest[0xc] = '\0';
  _Dest[0xd] = '\0';
  _Dest[0xe] = '\0';
  _Dest[0xf] = '\0';
  _Dest[0x10] = '\0';
  _Dest[0x11] = '\0';
  _Dest[0x12] = '\0';
  _Dest[0x13] = '\0';
  if (param_2 != (char *)0x0) {
    strncpy(_Dest,param_2,0x10);
  }
  *(undefined4 *)(_Dest + 0x10) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 0xe);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




ulonglong FUN_141a0fff0(longlong param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  char *_Dest;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x24) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x24;
  _Dest = (char *)(*(longlong *)(param_1 + 0x408) + 0x1e + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 0xe) * 0x24);
  _Dest[0] = '\0';
  _Dest[1] = '\0';
  _Dest[2] = '\0';
  _Dest[3] = '\0';
  _Dest[4] = '\0';
  _Dest[5] = '\0';
  _Dest[6] = '\0';
  _Dest[7] = '\0';
  _Dest[8] = '\0';
  _Dest[9] = '\0';
  _Dest[10] = '\0';
  _Dest[0xb] = '\0';
  _Dest[0xc] = '\0';
  _Dest[0xd] = '\0';
  _Dest[0xe] = '\0';
  _Dest[0xf] = '\0';
  _Dest[0x10] = '\0';
  _Dest[0x11] = '\0';
  _Dest[0x12] = '\0';
  _Dest[0x13] = '\0';
  _Dest[0x14] = '\0';
  _Dest[0x15] = '\0';
  _Dest[0x16] = '\0';
  _Dest[0x17] = '\0';
  _Dest[0x18] = '\0';
  _Dest[0x19] = '\0';
  _Dest[0x1a] = '\0';
  _Dest[0x1b] = '\0';
  _Dest[0x1c] = '\0';
  _Dest[0x1d] = '\0';
  _Dest[0x1e] = '\0';
  _Dest[0x1f] = '\0';
  _Dest[0x20] = '\0';
  _Dest[0x21] = '\0';
  _Dest[0x22] = '\0';
  _Dest[0x23] = '\0';
  if (param_2 != (char *)0x0) {
    strncpy(_Dest,param_2,0x10);
  }
  *(undefined4 *)(_Dest + 0x10) = param_3;
  *(undefined8 *)(_Dest + 0x18) = param_5;
  *(undefined4 *)(_Dest + 0x14) = param_4;
  *(undefined4 *)(_Dest + 0x20) = param_6;
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 0xe);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined8 FUN_141a100e0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0x12) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




void FUN_141a100f0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a18388);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(short *)(lVar1 + 4) == 8) {
    if (*(int *)(lVar1 + 6) == 1) {
      (**(code **)(*param_3 + 0xa0))(param_3,param_2,*(undefined4 *)(lVar1 + 10));
    }
  }
  else if ((*(short *)(lVar1 + 4) == 9) && (*(int *)(lVar1 + 6) == 1)) {
                    /* WARNING: Could not recover jumptable at 0x000141a10155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x48))(param_3,param_2);
    return;
  }
  return;
}




undefined8 * FUN_141a10180(undefined8 *param_1,byte param_2)

{
  *param_1 = vexillumarenic::CMsgSelfSynMemAwardRank::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141a101d0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = vexillumarenic::CMsgVexillum::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141a10220(undefined8 *param_1)

{
  *param_1 = vexillumarenic::CMsgVexillum::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_141a10250(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8b0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x20;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




ulonglong FUN_141a10290(longlong param_1,undefined2 param_2,undefined4 param_3,char *param_4)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar6;
  char *pcVar7;
  
  if (param_4 != (char *)0x0) {
    uVar6 = 0xffffffffffffffff;
    pcVar7 = param_4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (~uVar6 - 1 < 0x10) {
      puVar4 = *(ushort **)(param_1 + 0x408);
      if (0x3ff < (ulonglong)*puVar4 + 0x18) {
        log_InlineLogERROR(&DAT_141a18388);
        return extraout_RAX & 0xffffffffffffff00;
      }
      if (puVar4 == (ushort *)0x0) {
        log_InlineLogERROR(&DAT_141a18388);
        return extraout_RAX_00 & 0xffffffffffffff00;
      }
      *puVar4 = *puVar4 + 0x18;
      *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x20 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x1c) * 0x18) = param_2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x1c) * 0x18) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x408);
      uVar3 = *(ushort *)(lVar5 + 0x1c);
      *(undefined8 *)(lVar5 + 0x28 + (ulonglong)uVar3 * 0x18) = *(undefined8 *)param_4;
      *(undefined8 *)(lVar5 + 0x30 + (ulonglong)uVar3 * 0x18) = *(undefined8 *)(param_4 + 8);
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x37 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x1c) * 0x18) = 0;
      lVar5 = *(longlong *)(param_1 + 0x408);
      psVar1 = (short *)(lVar5 + 0x1c);
      *psVar1 = *psVar1 + 1;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  log_InlineLogERROR("CMsgVexillum::Create. szSynName is error!");
  return extraout_RAX_01 & 0xffffffffffffff00;
}




ulonglong FUN_141a103d0(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  short *psVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 4) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_141a18388);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x20 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x1c) * 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x22 + (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x1c) * 4) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x408);
  psVar1 = (short *)(lVar3 + 0x1c);
  *psVar1 = *psVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




void FUN_141a10490(longlong param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,
                  undefined2 param_8)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x12) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_5;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_6;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_7;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_8;
  return;
}




void FUN_141a10500(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  return;
}




void FUN_141a10510(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  return;
}




void FUN_141a10520(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  return;
}




ulonglong FUN_141a10540(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(8,*(short *)(param_1 + 10) == 0x8b0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_141a10580(longlong param_1,int param_2,longlong *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int local_res20 [2];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141a18388);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141a18388);
  }
  else {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x408) + 4);
    if (sVar1 == 6) {
      (**(code **)(*param_3 + 0x28))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8));
    }
    else if (sVar1 == 7) {
      cVar2 = (**(code **)(*param_3 + 0x20))(param_3,param_2);
      if (cVar2 != '\0') {
        plVar5 = (longlong *)(**(code **)(*param_3 + 0x88))(param_3);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x118))(plVar5,param_2,param_1);
        }
      }
    }
    else if (sVar1 == 0xb) {
      cVar2 = (**(code **)(*param_3 + 0x10))(param_3,0);
      if (cVar2 == '\0') {
        uVar6 = 1;
        cVar2 = (**(code **)(*param_3 + 0x10))(param_3,1);
        if (cVar2 == '\0') {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 1;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = uVar6;
      plVar5 = (longlong *)(**(code **)(*param_3 + 0x88))(param_3);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x118))(plVar5,param_2,param_1);
      }
    }
    else if (sVar1 == 0xd) {
      plVar5 = (longlong *)(**(code **)(*param_3 + 0x88))(param_3);
      if (plVar5 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
        local_res20[0] = 0;
        uVar4 = (**(code **)(*param_3 + 0x70))(param_3,uVar3,local_res20);
        *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = 0;
        if ((local_res20[0] == 0) && (uVar4 < 3)) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = 1;
        }
        (**(code **)(*plVar5 + 0x118))(plVar5,param_2,param_1);
      }
    }
  }
  return;
}




undefined8 * FUN_141a10770(undefined8 *param_1,byte param_2)

{
  *param_1 = vexillumarenic::CMsgVexillum::vftable;
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




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_141a29318) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_141a29900);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_141a29900);
    local_res18[0] = _decode_pointer(DAT_141a298f8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_141a29900 = _encode_pointer(local_res10);
    DAT_141a298f8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_141a10a78(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_141a10b44(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141a298f8 = _encode_pointer(puVar1);
  DAT_141a29900 = DAT_141a298f8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_141a111bc();
    atexit(FUN_141a111f4);
    atexit((_func_5014 *)&LAB_141a111b0);
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
    if (DAT_141a2935c < 1) {
      return 0;
    }
    DAT_141a2935c = DAT_141a2935c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_141a298e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141a298e8;
        pvVar3 = DAT_141a298e8;
      }
      DAT_141a298e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141a10c1e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141a10c1e:
    if (DAT_141a298e0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_141a29900);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_141a298f8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_141a29900);
            plVar12 = (longlong *)_decode_pointer(DAT_141a298f8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_141a298f8 = _encoded_null();
        DAT_141a29900 = DAT_141a298f8;
      }
      DAT_141a298e0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_141a298e8 = (void *)0x0;
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
      bVar13 = DAT_141a298e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141a298e8;
        pvVar3 = DAT_141a298e8;
      }
      DAT_141a298e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141a10d47;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141a10d47:
    if (DAT_141a298e0 == 0) {
      DAT_141a298e0 = 1;
      iVar4 = _initterm_e(&DAT_141a18280,&DAT_141a18290);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141a18270,&DAT_141a18278);
      DAT_141a298e0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_141a298e8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_141a298f0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141a298f0), BVar5 != 0)) {
      (*DAT_141a298f0)(param_1,2,param_3);
    }
    DAT_141a2935c = DAT_141a2935c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000141a10ec0) */
/* WARNING: Removing unreachable block (ram,0x000141a10e57) */
/* WARNING: Removing unreachable block (ram,0x000141a10efb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_141a2935c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_141a29330 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_141a29330 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1419f12e0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1419f12e0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_141a29330 = 0xffffffff;
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




undefined8 FUN_141a10f78(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_141a29400);
  local_30 = DAT_141a294f8;
  local_38 = RtlLookupFunctionEntry(DAT_141a294f8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141a29498 = local_res8;
    DAT_141a294f8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_141a29400,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141a29370 = DAT_141a294f8;
  _DAT_141a29480 = local_res8[0];
  _DAT_141a29360 = 0xc0000409;
  _DAT_141a29364 = 1;
  local_20 = DAT_141a29318;
  local_18 = DAT_141a29320;
  DAT_141a293f8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141a1d2b0);
  if (DAT_141a293f8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_141a111bc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141a1dad8; puVar1 < &DAT_141a1dad8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_141a111f4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141a1dae8; puVar1 < &DAT_141a1dae8; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1419f0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1419f0000);
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
  if (DAT_141a29318 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141a29318 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_141a29318 == 0x2b992ddfa232) {
      DAT_141a29318 = 0x2b992ddfa233;
    }
  }
  DAT_141a29320 = ~DAT_141a29318;
  return;
}




void Unwind_141a11450(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141a11470(undefined8 param_1,longlong param_2)

{
  FUN_1419f1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11490(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_141a114b0(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




void Unwind_141a114d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a114f0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_141a11510(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




undefined * Catch_141a11530(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_1419f13ea;
}




undefined * Catch_141a11570(void)

{
  log_InlineLogCATCH_ERROR("VexillumArenic::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_1419f146f;
}




void Unwind_141a115c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_141a115e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f1050(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_141a11600(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x28));
  return;
}




void Unwind_141a11620(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x438));
  return;
}




undefined8 Catch_141a11640(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x1419f1529;
}




undefined * Catch_141a11680(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pVexillumMgr) @%s,%d");
  return &DAT_1419f201a;
}




undefined8 Catch_141a116c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pOneVexillumMgr) @%s,%d");
  return 0x1419f2037;
}




undefined8 Catch_141a11700(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return 0x1419f213f;
}




void Unwind_141a11740(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11780(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a117a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a117c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a117e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a118a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a118c0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a118e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11920(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a119a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a119c0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a119e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11a20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11a40(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11a80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11aa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141a11ac0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a11ae0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141a11b00(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a11b20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11b40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11b60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11b80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a11ba0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11bc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11be0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11c00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11c20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a11c40(void)

{
  DAT_141a29348 = DAT_141a29348 & 0xfffffffe;
  return;
}




void Unwind_141a11c60(void)

{
  DAT_141a29348 = DAT_141a29348 & 0xfffffffe;
  return;
}




void Unwind_141a11c80(void)

{
  DAT_141a29348 = DAT_141a29348 & 0xfffffffe;
  return;
}




void Unwind_141a11ca0(void)

{
  DAT_141a29348 = DAT_141a29348 & 0xfffffffe;
  return;
}




void Unwind_141a11cc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11ce0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11d00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a11d20(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a11d40(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a11d60(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11d80(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11da0(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a11dc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a11df0(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a11e10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a11e40(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a11e60(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141a11e80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a11ea0(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11ec0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11ee0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a11f00(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11f20(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a11f40(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11f60(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11f80(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a11fa0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11fc0(undefined8 param_1,longlong param_2)

{
  FUN_1419f4480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a11fe0(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12000(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12020(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12040(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141a12060(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a12080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a120a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a120c0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a120e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12100(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12120(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12140(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a12160(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a12180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141a121a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a121c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a121e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141a12200(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141a12220(undefined8 param_1,longlong param_2)

{
  FUN_1419f4480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12240(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12260(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12280(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a122a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a122c0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a122e0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12300(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12320(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12340(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12360(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a12380(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::DelUserMerit @%s,%d");
  return 0x1419f6765;
}




void Unwind_141a123c0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a123e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12400(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12420(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12440(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12460(undefined8 param_1,longlong param_2)

{
  FUN_1419f61a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141a12480(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a124b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a124d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f61a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a124f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12510(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12530(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12550(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12570(undefined8 param_1,longlong param_2)

{
  FUN_1419f6fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a12590(undefined8 param_1,longlong param_2)

{
  FUN_1419f61a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a125b0(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a125d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a125f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12610(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12630(undefined8 param_1,longlong param_2)

{
  FUN_1419f71d0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x98));
  return;
}




void Unwind_141a12650(undefined8 param_1,longlong param_2)

{
  FUN_1419f60c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xd8));
  return;
}




void Unwind_141a12670(undefined8 param_1,longlong param_2)

{
  FUN_1419f4480(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141a12690(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141a126b0(undefined8 param_1,longlong param_2)

{
  FUN_1419f6fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a126d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f61a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a126f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12710(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12730(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12750(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12770(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12790(undefined8 param_1,longlong param_2)

{
  FUN_1419f3bf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a127b0(undefined8 param_1,longlong param_2)

{
  FUN_1419f44a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a127d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a127f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f5410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12810(undefined8 param_1,longlong param_2)

{
  FUN_1419f61a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12830(undefined8 param_1,longlong param_2)

{
  FUN_1419f6fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a12850(undefined8 param_1,longlong param_2)

{
  FUN_1419f71d0((longlong *)(*(longlong *)(param_2 + 0x70) + 0x98));
  return;
}




void Unwind_141a12870(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12890(undefined8 param_1,longlong param_2)

{
  FUN_1419f3c10(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_141a128b0(undefined8 param_1,longlong param_2)

{
  FUN_1419f4480(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_141a128d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f60c0((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xd8));
  return;
}




void Unwind_141a128f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f3a00(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_141a12910(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x1419f7914;
}




void Unwind_141a12950(undefined8 param_1,longlong param_2)

{
  FUN_1419f3a00(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_141a12970(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_141a12990(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::AddUserMerit @%s,%d");
  return 0x1419f7d7a;
}




undefined * Catch_141a129d0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::InsertVexillum. @%s,%d");
  return &DAT_1419f7ebd;
}




void Unwind_141a12a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141a12a30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a12a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141a12a70(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a12a90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a12ab0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a12ad0(void)

{
  DAT_141a29358 = DAT_141a29358 & 0xfffffffe;
  return;
}




void Unwind_141a12af0(void)

{
  DAT_141a29358 = DAT_141a29358 & 0xfffffffe;
  return;
}




void Unwind_141a12b10(void)

{
  DAT_141a29358 = DAT_141a29358 & 0xfffffffe;
  return;
}




void Unwind_141a12b30(void)

{
  DAT_141a29358 = DAT_141a29358 & 0xfffffffe;
  return;
}




void Unwind_141a12b50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a12b70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a12b90(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12bb0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12bd0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12bf0(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a12c10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a12c40(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a12c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a12c90(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12cb0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12cd0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12cf0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12d10(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12d30(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12d50(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12d70(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12d90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a12db0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a12dd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141a12df0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a12e10(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12e30(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12e50(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12e70(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12e90(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12eb0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12ed0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12ef0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12f10(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12f30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141a12f50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a12f70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a12f90(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a12fb0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a12fd0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a12ff0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13010(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13030(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13050(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13070(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13090(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a130b0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a130d0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a130f0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13110(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13130(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141a13150(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a13180(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a131a0(undefined8 param_1,longlong param_2)

{
  FUN_1419fb940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a131c0(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a131e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13200(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13220(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13240(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13260(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13280(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a132a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a132c0(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a132e0(undefined8 param_1,longlong param_2)

{
  FUN_1419fb940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13300(undefined8 param_1,longlong param_2)

{
  FUN_1419fbf40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a13320(undefined8 param_1,longlong param_2)

{
  FUN_1419fb940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13340(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13360(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13380(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a133a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a133c0(undefined8 param_1,longlong param_2)

{
  FUN_1419fc240((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141a133e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9b40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_141a13400(undefined8 param_1,longlong param_2)

{
  FUN_1419f9270(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141a13420(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141a13440(undefined8 param_1,longlong param_2)

{
  FUN_1419fbf40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a13460(undefined8 param_1,longlong param_2)

{
  FUN_1419fb940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13480(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a134a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a134c0(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a134e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13500(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13520(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13540(undefined8 param_1,longlong param_2)

{
  FUN_1419f9290(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13560(undefined8 param_1,longlong param_2)

{
  FUN_1419f9ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13580(undefined8 param_1,longlong param_2)

{
  FUN_1419fa940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a135a0(undefined8 param_1,longlong param_2)

{
  FUN_1419fb940(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a135c0(undefined8 param_1,longlong param_2)

{
  FUN_1419fbf40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a135e0(undefined8 param_1,longlong param_2)

{
  FUN_1419fc240((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_141a13600(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13620(undefined8 param_1,longlong param_2)

{
  FUN_1419f8b90(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_141a13640(undefined8 param_1,longlong param_2)

{
  FUN_1419f9270(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_141a13660(undefined8 param_1,longlong param_2)

{
  FUN_1419f9b40((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_141a13680(void)

{
  DAT_141a29358 = DAT_141a29358 & 0xfffffffe;
  return;
}




void Unwind_141a136a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f89a0(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141a136c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x98));
  return;
}




undefined8 Catch_141a136e0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnAttackTarNpc @%s,%d");
  return 0x1419fcbc8;
}




void Unwind_141a13720(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141a13740(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::BroadcastVexillumInfo @%s,%d");
  return 0x1419fcca8;
}




undefined8 Catch_141a13780(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::GetValidForCrossVlm @%s,%d");
  return 0x1419fcd04;
}




undefined8 Catch_141a137c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SetValidForCrossVlm @%s,%d");
  return 0x1419fcd63;
}




void Unwind_141a13800(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141a13820(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::RefreshDoubleTar @%s,%d");
  return &DAT_1419fd0a3;
}




void Unwind_141a13860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141a13880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a138a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141a138c0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a138e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141a13900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a13920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141a13940(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141a13960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a139a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a139c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a139e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13a40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141a13aa0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13ac0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13ae0(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13b00(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13b20(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13b40(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13b60(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13b80(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a13ba0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a13bd0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13bf0(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a13c10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a13c40(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a13c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a13c90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a13cc0(void)

{
  FUN_1419f22f0();
  return;
}




void Catch_141a13ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a13d10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a13d40(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13d60(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13d80(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13da0(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13dc0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13de0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13e00(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13e20(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13e40(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13e60(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13e80(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13ea0(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13ec0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13ee0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13f00(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13f20(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13f40(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a13f60(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a13f80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a13fa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a13fc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141a13fe0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a14000(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141a14020(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a14040(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a14060(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a14080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a140a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a140c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141a140e0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a14100(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a14120(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a14140(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141a14160(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141a14180(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a141a0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a141c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a141e0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14200(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14220(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14240(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14260(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14280(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a142a0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a142c0(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a142e0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14300(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14320(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14340(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14360(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14380(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a143a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a143c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a143e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14400(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14420(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14440(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14460(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14480(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a144a0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a144c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141a144e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a14500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a14520(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a14540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141a14560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a14580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141a145a0(undefined8 param_1,longlong param_2)

{
  FUN_1419f2350((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141a145c0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a145e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14600(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14620(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14640(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14660(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14680(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a146a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a146c0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a146e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14700(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14720(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141a14740(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::CreateMsgVexillumSortSyn1to3 @%s,%d");
  return &DAT_141a04830;
}




void Unwind_141a14780(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a147a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a147c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a147e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14800(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14820(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14840(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14860(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14880(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a148a0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a148c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a148e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14900(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14920(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14940(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14960(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14980(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141a149a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a149d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141a149f0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14a10(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14a30(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14a50(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14a70(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14a90(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14ab0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14ad0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14af0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14b10(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141a14b30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141a14b60(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_141a14b80(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::AddMemberMerit @%s,%d");
  return 0x141a05e65;
}




void Unwind_141a14bc0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a14be0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::BroadcastVexillumInfo @%s,%d");
  return 0x141a05ee5;
}




void Unwind_141a14c20(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14c40(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14c60(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14c80(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14ca0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14cc0(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14ce0(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14d00(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14d20(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14d40(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14d60(undefined8 param_1,longlong param_2)

{
  FUN_141a051f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14d80(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14da0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14dc0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14de0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14e00(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14e20(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14e40(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14e60(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14e80(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14ea0(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14ec0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14ee0(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14f00(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14f20(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14f40(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14f60(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14f80(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a14fa0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14fc0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a14fe0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15000(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15020(undefined8 param_1,longlong param_2)

{
  FUN_141a051f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15040(undefined8 param_1,longlong param_2)

{
  FUN_141a06010(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a15060(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15080(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a150a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a150c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a150e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15100(undefined8 param_1,longlong param_2)

{
  FUN_141a06170(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a15120(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15140(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15160(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15180(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a151a0(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a151c0(undefined8 param_1,longlong param_2)

{
  FUN_141a061a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a151e0(undefined8 param_1,longlong param_2)

{
  FUN_141a051f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15200(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15220(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15240(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15260(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15280(undefined8 param_1,longlong param_2)

{
  FUN_141a06800((longlong *)(*(longlong *)(param_2 + 0x90) + 0xb8));
  return;
}




void Unwind_141a152b0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ed0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xf8));
  return;
}




void Unwind_141a152e0(undefined8 param_1,longlong param_2)

{
  FUN_141a06830((longlong *)(*(longlong *)(param_2 + 0x90) + 0x128));
  return;
}




void Unwind_141a15310(undefined8 param_1,longlong param_2)

{
  FUN_141a06860((longlong *)(*(longlong *)(param_2 + 0x90) + 0x168));
  return;
}




undefined * Catch_141a15340(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_arTarInfo[i].pTarAttackInfo) @%s,%d");
  return &DAT_141a06a3a;
}




void Unwind_141a15380(undefined8 param_1,longlong param_2)

{
  FUN_141a061a0(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_141a153a0(undefined8 param_1,longlong param_2)

{
  FUN_141a051f0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a153c0(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a153e0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15400(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15420(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15440(undefined8 param_1,longlong param_2)

{
  FUN_141a06170(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_141a15460(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15480(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a154a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a154c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a154e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15500(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15520(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a15540(undefined8 param_1,longlong param_2)

{
  FUN_141a06010(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_141a15560(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a15580(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a155a0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a155c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a155e0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x90));
  return;
}




undefined8 Catch_141a15600(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::AddMemberMerit @%s,%d");
  return 0x141a06d88;
}




void Unwind_141a15640(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a15660(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SendSynMemberMerit @%s,%d");
  return 0x141a06f01;
}




void Unwind_141a156a0(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_141a156c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SendLastEight @%s,%d");
  return 0x141a072d2;
}




void Unwind_141a15700(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15730(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a15750(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a15770(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a15790(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a157b0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a157d0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a157f0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a15810(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a15830(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




undefined * Catch_141a15850(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::InitNPC @%s,%d");
  return &DAT_141a07894;
}




void Unwind_141a15890(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a158b0(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a158d0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a158f0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15910(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15930(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15950(undefined8 param_1,longlong param_2)

{
  FUN_141a06010(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a15970(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15990(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a159b0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a159d0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a159f0(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15a10(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15a30(undefined8 param_1,longlong param_2)

{
  FUN_141a06170(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a15a50(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15a70(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15a90(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15ab0(undefined8 param_1,longlong param_2)

{
  FUN_141a01010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15ad0(undefined8 param_1,longlong param_2)

{
  FUN_141a03420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15af0(undefined8 param_1,longlong param_2)

{
  FUN_141a051f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a15b10(undefined8 param_1,longlong param_2)

{
  FUN_141a061a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141a15b30(undefined8 param_1,longlong param_2)

{
  FUN_141a06800((longlong *)(*(longlong *)(param_2 + 0x60) + 0xb8));
  return;
}




void Unwind_141a15b50(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15b70(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_141a15b90(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_141a15bb0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ed0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0xf8));
  return;
}




void Unwind_141a15bd0(undefined8 param_1,longlong param_2)

{
  FUN_141a06830((longlong *)(*(longlong *)(param_2 + 0x60) + 0x128));
  return;
}




void Unwind_141a15bf0(undefined8 param_1,longlong param_2)

{
  FUN_141a06860((longlong *)(*(longlong *)(param_2 + 0x60) + 0x168));
  return;
}




undefined * Catch_141a15c10(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return &DAT_141a083e2;
}




undefined8 Catch_141a15c50(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigTimeRes) @%s,%d");
  return 0x141a083f6;
}




void Unwind_141a15c90(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15cc0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a15ce0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a15d00(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a15d20(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a15d40(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_141a15d60(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::AwardPrize @%s,%d");
  return &DAT_141a0861c;
}




undefined * Catch_141a15da0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnGameOver @%s,%d");
  return &DAT_141a08a8e;
}




void Unwind_141a15de0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15e00(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15e20(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15e40(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15e60(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15e80(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_141a15ea0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnGameOver Meed @%s,%d");
  return &DAT_141a08d95;
}




void Unwind_141a15ee0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_141a15f00(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a15f20(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15f40(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15f60(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15f80(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a15fa0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a15fc0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnGameOver @%s,%d");
  return 0x141a090a6;
}




void Unwind_141a16000(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_141a16020(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a16040(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnRevSuccessVexillum @%s,%d");
  return 0x141a0936f;
}




undefined8 Catch_141a16080(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::AddMemberMerit @%s,%d");
  return 0x141a09449;
}




void Unwind_141a160c0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a160e0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x450));
  return;
}




undefined8 Catch_141a16100(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SendMatchBattleInfoToUser @%s,%d");
  return 0x141a095a8;
}




void Unwind_141a16140(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a16160(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SendVexillumInfo @%s,%d");
  return 0x141a09667;
}




void Unwind_141a161a0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a161c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::SendOneSynVexillum @%s,%d");
  return 0x141a09786;
}




void Unwind_141a16200(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a16220(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::ClsDestVexillum @%s,%d");
  return 0x141a09831;
}




void Unwind_141a16260(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_141a16280(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::EnterBattle @%s,%d");
  return &DAT_141a09b60;
}




void Unwind_141a162c0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a162e0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141a16300(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnDie @%s,%d");
  return &DAT_141a09cb6;
}




void Unwind_141a16340(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_141a16360(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnLeaveMap @%s,%d");
  return &DAT_141a09da2;
}




void Unwind_141a163a0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141a163c0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x470));
  return;
}




undefined8 Catch_141a163e0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnUserPickVexillum @%s,%d");
  return 0x141a0a12a;
}




void Unwind_141a16420(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a16450(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_141a16470(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_141a16490(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_141a164b0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_141a164d0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_141a164f0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x58));
  return;
}




undefined8 Catch_141a16510(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnResetTarNpcOwner. @%s,%d");
  return 0x141a0a625;
}




void Unwind_141a16550(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a16570(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnUserJoinSyn @%s,%d");
  return 0x141a0a742;
}




undefined8 Catch_141a165b0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnUserLeaveSyn @%s,%d");
  return 0x141a0a7c3;
}




undefined * Catch_141a165f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pSynInfo) @%s,%d");
  return &DAT_141a0aaa3;
}




undefined8 Catch_141a16630(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnDestroySynDicate @%s,%d");
  return 0x141a0ab09;
}




void Unwind_141a16670(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a166a0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a166c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a166e0(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a16700(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141a16720(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_141a16740(void)

{
  log_InlineLogCATCH_ERROR("CVexillumArenicMgr::OnTimer @%s,%d");
  return 0x141a0b2dd;
}




undefined8 Catch_141a16780(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnAttackTarNpc @%s,%d");
  return 0x141a0b534;
}




void Unwind_141a167c0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141a167e0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::BroadcastVexillumInfo @%s,%d");
  return 0x141a0b5f9;
}




undefined * Catch_141a16820(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::CreateMsgVexillumSortSyn1to3 @%s,%d");
  return &DAT_141a0c550;
}




undefined * Catch_141a16860(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnGameOver @%s,%d");
  return &DAT_141a0c7ce;
}




void Unwind_141a168a0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a168c0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a168e0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a16900(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a16920(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a16940(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141a16960(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnGameOver DetachVexillumStatus @%s,%d");
  return &DAT_141a0c94f;
}




void Unwind_141a169a0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined8 Catch_141a169c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnGameOver @%s,%d");
  return 0x141a0ca9e;
}




undefined8 Catch_141a16a00(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::AddMemberMerit @%s,%d");
  return 0x141a0cc55;
}




void Unwind_141a16a40(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a16a60(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::BroadcastVexillumInfo @%s,%d");
  return 0x141a0ccd5;
}




void Unwind_141a16aa0(undefined8 param_1,longlong param_2)

{
  FUN_141a06800((longlong *)(*(longlong *)(param_2 + 0x90) + 0x68));
  return;
}




void Unwind_141a16ac0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ed0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xa8));
  return;
}




void Unwind_141a16af0(undefined8 param_1,longlong param_2)

{
  FUN_141a06830((longlong *)(*(longlong *)(param_2 + 0x90) + 0xd8));
  return;
}




undefined * Catch_141a16b20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_arTarInfo.pTarAttackInfo) @%s,%d");
  return &DAT_141a0d0ae;
}




void Unwind_141a16b60(undefined8 param_1,longlong param_2)

{
  FUN_141a06170(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_141a16b80(undefined8 param_1,longlong param_2)

{
  FUN_141a051d0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16ba0(undefined8 param_1,longlong param_2)

{
  FUN_141a03400(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16bc0(undefined8 param_1,longlong param_2)

{
  FUN_141a00ff0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16be0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffbc0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16c00(undefined8 param_1,longlong param_2)

{
  FUN_1419feae0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16c20(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16c40(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141a16c60(undefined8 param_1,longlong param_2)

{
  FUN_141a06010(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_141a16c80(undefined8 param_1,longlong param_2)

{
  FUN_141a051b0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a16ca0(undefined8 param_1,longlong param_2)

{
  FUN_141a033e0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a16cc0(undefined8 param_1,longlong param_2)

{
  FUN_141a00fd0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a16ce0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffba0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a16d00(undefined8 param_1,longlong param_2)

{
  FUN_1419feaa0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141a16d20(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a16d40(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16d60(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16d80(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16da0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16dc0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16de0(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16e00(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16e20(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a16e40(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_141a16e60(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::InitNPC @%s,%d");
  return &DAT_141a0d6de;
}




void Unwind_141a16ea0(undefined8 param_1,longlong param_2)

{
  FUN_141a06800((longlong *)(*(longlong *)(param_2 + 0x60) + 0x68));
  return;
}




void Unwind_141a16ec0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a16ee0(undefined8 param_1,longlong param_2)

{
  FUN_1419feab0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_141a16f00(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb60(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_141a16f20(undefined8 param_1,longlong param_2)

{
  FUN_141a00ed0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0xa8));
  return;
}




void Unwind_141a16f40(undefined8 param_1,longlong param_2)

{
  FUN_141a06830((longlong *)(*(longlong *)(param_2 + 0x60) + 0xd8));
  return;
}




undefined * Catch_141a16f60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return &DAT_141a0ddd8;
}




undefined8 Catch_141a16fa0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigTimeRes) @%s,%d");
  return 0x141a0ddec;
}




void Unwind_141a16fe0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_141a17000(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a17020(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnRevSuccessVexillum @%s,%d");
  return 0x141a0e2e3;
}




undefined8 Catch_141a17060(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::AddMemberMerit @%s,%d");
  return 0x141a0e3b6;
}




void Unwind_141a170a0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a170c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::SendMatchBattleInfoToUser @%s,%d");
  return 0x141a0e465;
}




void Unwind_141a17100(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a17120(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::SendVexillumInfo @%s,%d");
  return 0x141a0e527;
}




void Unwind_141a17160(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141a17180(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::SendOneSynVexillum @%s,%d");
  return 0x141a0e646;
}




void Unwind_141a171c0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a171e0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::ClsDestVexillum @%s,%d");
  return 0x141a0e6f1;
}




void Unwind_141a17220(undefined8 param_1,longlong param_2)

{
  FUN_141a0fd60((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_141a17240(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::EnterBattle @%s,%d");
  return &DAT_141a0ea00;
}




void Unwind_141a17280(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141a172a0(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141a172c0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnDie @%s,%d");
  return &DAT_141a0eb53;
}




void Unwind_141a17300(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_141a17320(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnLeaveMap @%s,%d");
  return &DAT_141a0ec3f;
}




void Unwind_141a17360(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141a17380(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0x470));
  return;
}




undefined8 Catch_141a173a0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnUserPickVexillum @%s,%d");
  return 0x141a0efcf;
}




void Unwind_141a173e0(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a17410(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a17430(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a17450(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a17470(undefined8 param_1,longlong param_2)

{
  FUN_141a10220((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_141a17490(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141a174b0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141a174d0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnResetTarNpcOwner. @%s,%d");
  return 0x141a0f489;
}




void Unwind_141a17510(void)

{
  FUN_1419f22f0();
  return;
}




void Unwind_141a17530(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a17550(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a17570(undefined8 param_1,longlong param_2)

{
  FUN_141a03300((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a17590(undefined8 param_1,longlong param_2)

{
  FUN_1419ffb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141a175b0(undefined8 param_1,longlong param_2)

{
  FUN_1419feb10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141a175d0(void)

{
  log_InlineLogCATCH_ERROR("CVexillumOneMgr::OnTimer @%s,%d");
  return 0x141a0fc5d;
}




void Unwind_141a17610(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a17630(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141a17650(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a17670(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141a17690(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141a176b0(void)

{
  log_InlineLogCATCH_ERROR("CMsgVexillum::Process, Action[%d] @%s,%d");
  return 0x141a10755;
}




void Unwind_141a17700(undefined8 param_1,longlong param_2)

{
  FUN_141a0fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_141a17718(void)

{
  _unlock(8);
  return;
}




void FUN_141a17731(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141a17761(void)

{
  _DAT_141a29330 = 0xffffffff;
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




bool FUN_141a177f0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1456 failed=0 total=1549 */
