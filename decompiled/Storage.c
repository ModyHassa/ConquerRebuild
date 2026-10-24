/* Decompiled by Ghidra 12.1.4 | program: Storage.dll
   image base: 1416f0000 | functions: 971 */


void FUN_1416f1000(void)

{
  log_InlineLogERROR(&DAT_141707348);
  return;
}




void FUN_1416f1050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1416f1060(void)

{
  return 0;
}




undefined8 FUN_1416f1070(void)

{
  return 0;
}




undefined8 FUN_1416f1080(void)

{
  return 0;
}




undefined8 FUN_1416f1090(void)

{
  return 0;
}




undefined8 * FUN_1416f10a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1416f10e0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_1416f1100(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0x12);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141707348);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141707348);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1416f1600(*(longlong *)(param_1 + 0x18),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_141707348);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_1416f11d0(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 == 0x3ea) {
      plVar3 = (longlong *)(param_1 + 0xc50);
    }
    else if (uVar1 == 0x3eb) {
      plVar3 = (longlong *)(param_1 + 0x20);
    }
    else if (uVar1 == 0x3f1) {
      plVar3 = (longlong *)(param_1 + 0x430);
    }
    else {
      if (uVar1 != 0x44e) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x840);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




void FUN_1416f1250(void)

{
  return;
}




bool FUN_1416f1260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_1416f2a20(puVar2);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3f1,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x44e,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0x12,*(undefined8 *)(param_1 + 0x18));
  return cVar1 != '\0';
}




undefined8 FUN_1416f1300(void)

{
  return 1;
}




void FUN_1416f1310(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1416f1340(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1416f1370(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = storage::CModule::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = 0;
  FUN_141701dc0((CMsg *)(param_1 + 4));
  FUN_141701970((CMsg *)(param_1 + 0x86));
  FUN_141701f40((CMsg *)(param_1 + 0x108));
  FUN_141701c70((CMsg *)(param_1 + 0x18a));
  return param_1;
}




void FUN_1416f13f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = storage::CModule::vftable;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_141701cc0(param_1 + 0x18a);
  FUN_141701f90(param_1 + 0x108);
  FUN_1417019c0(param_1 + 0x86);
  FUN_141701e10(param_1 + 4);
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_1416f1470(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1416f11d0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x18));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar4 = param_2;
                    /* 0x14e0  1  ModuleCreate */
  puVar2 = operator_new(0x1060);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    param_3 = param_2 & 0xffffffff;
    plVar3 = FUN_1416f1370(puVar2,param_1,(int)param_2);
    uVar4 = param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1416f1260((longlong)plVar3,uVar4,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined8 * FUN_1416f1560(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416f13f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




uint FUN_1416f15d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2,0x6e);
  return ~(uVar1 >> 1) & 1;
}




ulonglong FUN_1416f1600(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  undefined7 extraout_var;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141707348);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    puVar3 = operator_new(0x88);
    if (puVar3 == (undefined8 *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = FUN_141701340(puVar3);
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141707348);
      uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      cVar1 = FUN_1416fd220(plVar4,*(longlong *)(param_1 + 8));
      if (cVar1 == '\0') {
        log_InlineLogERROR(&DAT_141707348);
        uVar2 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71(extraout_var,1);
      }
    }
  }
  return uVar2;
}




undefined1 FUN_1416f16f0(longlong *param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  CMsg local_418 [1040];
  
  uVar4 = param_3 & 0xffffffff;
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3 & 0xffffffff,param_3,param_4,0xfffffffffffffffe);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],uVar4), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,uVar4);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      if (iVar2 < 1) {
        return 0;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],uVar4);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x148))((longlong *)param_1[1],param_2), cVar1 == '\0')) {
    return 0;
  }
  uVar3 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],param_2);
  FUN_141701970(local_418);
  uVar4 = FUN_141701aa0(local_418,(int)param_3,9,uVar3);
  if ((char)uVar4 != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x110))((longlong *)param_1[1],param_2,local_418);
  }
  FUN_1417019c0((undefined8 *)local_418);
  return 1;
}




ulonglong FUN_1416f1830(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  IStringManager *pIVar5;
  
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3);
  if ((cVar1 == '\0') && (uVar2 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_3), (char)uVar2 == '\0')) goto LAB_1416f18ac;
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      if ((int)uVar2 < 1) goto LAB_1416f18ac;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
      if ((char)uVar2 == '\0') goto LAB_1416f18ac;
    }
  }
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2);
  if ((char)uVar2 == '\0') {
    lVar3 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],param_2);
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x238))();
    if (lVar3 + param_4 < (longlong)uVar2) {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],param_2,param_4,1);
      if ((char)uVar4 == '\0') {
        pIVar5 = theInstance();
        lVar3 = *(longlong *)param_1[1];
        uVar4 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_NOT_SO_MUCH_MONEY");
        uVar2 = (**(code **)(lVar3 + 0x120))(param_1[1],param_2,uVar4);
        return uVar2 & 0xffffffffffffff00;
      }
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
LAB_1416f18ac:
  return uVar2 & 0xffffffffffffff00;
}




bool FUN_1416f1960(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_3), cVar1 == '\0')) {
    return false;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      if (iVar2 < 1) {
        return false;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2);
  if (cVar1 != '\0') {
    return false;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],param_2,param_4,1);
  return cVar1 != '\0';
}




void FUN_1416f1a30(longlong param_1,uint param_2,int param_3,int param_4)

{
  FUN_1416febb0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




undefined1 FUN_1416f1a40(longlong *param_1,uint param_2,int param_3,int param_4,short param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  if (param_4 == 10) {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x148))();
    if (cVar1 == '\0') {
      return 0;
    }
LAB_1416f1a93:
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,param_3);
    if (cVar1 != '\0') goto LAB_1416f1af4;
    if (param_4 != 10) {
      if (param_4 == 0x14) {
        return 0;
      }
      goto LAB_1416f1b15;
    }
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      if (iVar3 < 1) {
        return 0;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
    }
LAB_1416f1af9:
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3);
joined_r0x0001416f1b94:
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if ((param_4 != 0x1e) && (param_4 != 0x28)) goto LAB_1416f1a93;
LAB_1416f1af4:
    if (param_4 == 10) goto LAB_1416f1af9;
LAB_1416f1b15:
    if (param_4 == 0x14) {
      cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x140))((longlong *)param_1[1],param_3);
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],param_3,1);
      puVar5 = FUN_1416ff980((undefined8 *)param_1[2],iVar3,uVar4,0x14,param_3);
      goto LAB_1416f1bbc;
    }
    if (param_4 == 0x1e) {
      cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_2,param_3);
      goto joined_r0x0001416f1b94;
    }
  }
  puVar5 = FUN_1416ff980((undefined8 *)param_1[2],param_3,param_2,param_4,0);
LAB_1416f1bbc:
  if (puVar5 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    uVar2 = 0;
  }
  else {
    FUN_1416f8670((longlong)puVar5,param_2);
    if (param_5 == 1) {
      FUN_1416f49f0((longlong)puVar5,param_2,param_3);
      FUN_1416f6530((longlong)puVar5);
    }
    uVar2 = 1;
  }
  return uVar2;
}




undefined4 FUN_1416f1c40(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0x14) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))();
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_2,1);
      puVar4 = FUN_1416ff980(*(undefined8 **)(param_1 + 0x10),iVar1,uVar2,0x14,0);
      uVar3 = FUN_1416f4970((longlong)puVar4,param_4);
    }
    return uVar3;
  }
  return 0;
}




ulonglong FUN_1416f1ce0(longlong *param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong extraout_RAX;
  undefined8 uVar4;
  
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x100))((longlong *)param_1[1],param_3,4);
  if (uVar2 != 3) goto LAB_1416f1d50;
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],param_2,param_3);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2);
      if ((int)uVar2 < 1) goto LAB_1416f1d50;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
      if ((char)uVar2 == '\0') goto LAB_1416f1d50;
    }
  }
  puVar3 = FUN_1416ff980((undefined8 *)param_1[2],param_3,param_2,param_4,0);
  if (puVar3 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    uVar2 = extraout_RAX;
  }
  else {
    FUN_1416f8670((longlong)puVar3,param_2);
    uVar2 = FUN_1416f49f0((longlong)puVar3,param_2,param_3);
    if ((char)uVar2 != '\0') {
      uVar4 = FUN_1416f6530((longlong)puVar3);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
LAB_1416f1d50:
  return uVar2 & 0xffffffffffffff00;
}




undefined1 FUN_1416f1df0(longlong *param_1,ulonglong param_2,int param_3,int param_4,int param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined7 extraout_var;
  uint uVar10;
  ulonglong uVar11;
  int local_478;
  uint local_474;
  int local_470;
  undefined4 local_46c;
  undefined8 local_468;
  int local_460 [14];
  CMsg local_428 [1040];
  
  local_468 = 0xfffffffffffffffe;
  uVar11 = param_2 & 0xffffffff;
  uVar10 = (uint)param_2;
  if ((param_4 == 0x28) && (param_6 != '\0')) {
LAB_1416f1fa8:
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],param_5,0x6e);
    if ((((~(byte)(uVar5 >> 1) & 1) == 0) || (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf0))((longlong *)param_1[1],param_5), cVar2 != '\0')) ||
       ((cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],param_5), cVar2 == '\0' ||
        (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1a0))((longlong *)param_1[1],param_5), cVar2 != '\0')))) {
      pIVar7 = theInstance();
      lVar1 = *(longlong *)param_1[1];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CANT_STORAGE");
      (**(code **)(lVar1 + 0x120))(param_1[1],uVar11,uVar8);
      return 0;
    }
LAB_1416f202b:
    if (param_4 == 10) goto LAB_1416f2030;
    if (param_4 == 0x14) {
LAB_1416f204b:
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_3);
    }
    else {
      if (param_4 != 0x1e) goto LAB_1416f2081;
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf0))((longlong *)param_1[1],param_3);
    }
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],param_2,param_5);
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_4 == 0x1e) {
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x48))((longlong *)param_1[1],uVar11,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
      goto LAB_1416f1fa8;
    }
    if ((param_4 == 0x28) || (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xd0))((longlong *)param_1[1],uVar11,param_3), cVar2 != '\0')) {
      if (param_4 == 10) goto LAB_1416f1edf;
LAB_1416f1f30:
      if (param_4 != 0x14) {
        if (param_4 == 0x28) goto LAB_1416f1fa8;
        goto LAB_1416f202b;
      }
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x60))((longlong *)param_1[1],param_5);
      if (((cVar2 != '\0') || (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],param_5), cVar2 == '\0')) ||
         (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1a0))((longlong *)param_1[1],param_5), cVar2 != '\0')) {
        pIVar7 = theInstance();
        lVar1 = *(longlong *)param_1[1];
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CANT_STORAGE");
        (**(code **)(lVar1 + 0x120))(param_1[1],uVar11,uVar8);
        return 0;
      }
      goto LAB_1416f204b;
    }
    if (param_4 != 10) {
      if (param_4 == 0x14) {
        return 0;
      }
      goto LAB_1416f1f30;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x68))(param_1,uVar11,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x70))(param_1,uVar11,param_3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
LAB_1416f1edf:
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],param_5,0x6e);
    if ((~(byte)(uVar5 >> 1) & 1) == 0) {
      pIVar7 = theInstance();
      lVar1 = *(longlong *)param_1[1];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CANT_STORAGE");
      (**(code **)(lVar1 + 0x120))(param_1[1],uVar11,uVar8);
      return 0;
    }
LAB_1416f2030:
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3);
  }
  if (cVar2 == '\0') {
    return 0;
  }
LAB_1416f2081:
  local_46c = 0;
  local_478 = param_3;
  local_474 = uVar10;
  local_470 = param_4;
  if (param_4 == 0x14) {
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x128))((longlong *)param_1[1],uVar11,param_3,0);
    if (cVar2 == '\0') {
      pIVar7 = theInstance();
      lVar1 = *(longlong *)param_1[1];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CHECKIN_DISABLE");
      (**(code **)(lVar1 + 0x120))(param_1[1],uVar11,uVar8);
      return 0;
    }
    iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x140))((longlong *)param_1[1],param_3);
    if (iVar6 == 0) {
      return 0;
    }
    local_478 = iVar6;
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],param_3,1);
    puVar9 = FUN_1416ff980((undefined8 *)param_1[2],iVar6,uVar5,0x14,0);
  }
  else {
    puVar9 = FUN_1416ff980((undefined8 *)param_1[2],param_3,uVar10,param_4,0);
  }
  if (puVar9 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    uVar4 = 0;
  }
  else if ((param_4 == 0x14) &&
          ((cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xa0))((longlong *)param_1[1],param_5,2), cVar2 != '\0' ||
           (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xa0))((longlong *)param_1[1],param_5,1), cVar2 != '\0')))) {
    uVar4 = 0;
  }
  else {
    FUN_1416f8670((longlong)puVar9,uVar10);
    iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x180))((longlong *)param_1[1],param_5);
    if (iVar6 == 3) {
      FUN_141701970(local_428);
      bVar3 = FUN_1417019f0(local_428,param_5,0x2a,0xc9,0);
      if ((int)CONCAT71(extraout_var,bVar3) == 0) {
        log_InlineLogERROR(&DAT_141707348);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0x110))((longlong *)param_1[1],uVar11,local_428);
      }
      (**(code **)(*(longlong *)param_1[1] + 200))((longlong *)param_1[1],uVar11,param_5);
      (**(code **)(*(longlong *)param_1[1] + 0x188))((longlong *)param_1[1],param_5);
      FUN_1417019c0((undefined8 *)local_428);
      uVar4 = 1;
    }
    else {
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x160))((longlong *)param_1[1],param_5,local_460);
      if ((cVar2 == '\0') || (cVar2 = FUN_1416f9320((longlong)puVar9,local_460,&local_478,param_6), cVar2 == '\0')) {
        uVar4 = 0;
      }
      else {
        cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x1b0))((longlong *)param_1[1],param_5);
        if ((cVar2 != '\0') && (iVar6 = (**(code **)(*(longlong *)param_1[1] + 0x1c0))((longlong *)param_1[1],param_5), iVar6 < 1)) {
          (**(code **)(*(longlong *)param_1[1] + 0x188))((longlong *)param_1[1],param_5);
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}




bool FUN_1416f2330(longlong *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  
  if ((param_5 == 0) || (param_3 == 0)) {
    log_InlineLogWARNING("CProvider::CheckOutItem. idItem[%u] idOwner[%u]");
    return false;
  }
  if (param_4 == 0x1e) {
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x48))();
    if (cVar2 == '\0') {
      return false;
    }
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xf0))((longlong *)param_1[1],param_3);
  }
  else {
    if ((param_4 == 0x28) || (cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xd0))(), cVar2 != '\0')) {
LAB_1416f23ca:
      if (param_4 != 10) {
        if (param_4 != 0x14) goto LAB_1416f241f;
        cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],param_3);
        goto LAB_1416f2417;
      }
    }
    else {
      if (param_4 != 10) {
        if (param_4 == 0x14) {
          return false;
        }
        goto LAB_1416f23ca;
      }
      cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
      }
      else {
        cVar2 = (**(code **)(*param_1 + 0x70))();
      }
      if (cVar2 == '\0') {
        return false;
      }
    }
    cVar2 = (**(code **)(*(longlong *)param_1[1] + 0xe0))((longlong *)param_1[1],param_3);
  }
LAB_1416f2417:
  if (cVar2 == '\0') {
    return false;
  }
LAB_1416f241f:
  local_c = 0;
  uVar5 = param_2;
  local_18 = param_3;
  local_14 = param_2;
  local_10 = param_4;
  if (param_4 == 0x14) {
    lVar1 = *(longlong *)param_1[1];
    uVar3 = (**(code **)(lVar1 + 0x130))((longlong *)param_1[1],param_2);
    cVar2 = (**(code **)(lVar1 + 0x128))(param_1[1],param_2,param_3,uVar3);
    if (cVar2 == '\0') {
      return false;
    }
    iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x140))((longlong *)param_1[1],param_3);
    if (iVar4 == 0) {
      return false;
    }
    local_18 = iVar4;
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x108))((longlong *)param_1[1],param_3,1);
    param_4 = 0x14;
    param_3 = iVar4;
  }
  puVar6 = FUN_1416ff980((undefined8 *)param_1[2],param_3,uVar5,param_4,0);
  if (puVar6 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    return false;
  }
  iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x180))((longlong *)param_1[1],param_5);
  if (iVar4 == 3) {
    FUN_1416f8670((longlong)puVar6,param_2);
    return true;
  }
  FUN_1416f8670((longlong)puVar6,param_2);
  cVar2 = FUN_1416f7f20((longlong)puVar6,param_5,&local_18);
  return cVar2 != '\0';
}




undefined8 FUN_1416f2560(longlong param_1,uint param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 extraout_RAX;
  ulonglong extraout_RAX_00;
  
  if (((param_4 == 0) || (param_3 == 0)) || (param_2 == 0)) {
    log_InlineLogWARNING("CProvider::DelLostItem. idItem[%u] idOwner[%u] Actor[%u]");
    uVar1 = extraout_RAX_00;
  }
  else {
    uVar1 = FUN_1416fe6c0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
    if ((char)uVar1 != '\0') {
      tq::MyLogSave("gmlog/GiveBack_Opt_VirGM","Delete item[%u] from Trunck success!");
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




ulonglong FUN_1416f25c0(longlong param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6,undefined2 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  
  if (param_4 == 0x14) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_3);
    if ((int)uVar3 == 0) goto LAB_1416f2666;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,1);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    param_4 = 0x14;
    param_3 = (int)uVar3;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = param_2;
  }
  puVar4 = FUN_1416ff980(puVar4,param_3,uVar1,param_4,0);
  if (puVar4 != (undefined8 *)0x0) {
    uVar2 = FUN_1416f69e0((longlong)puVar4,param_2,param_5,param_6,param_7);
    return CONCAT44(extraout_var,uVar2);
  }
  log_InlineLogERROR(&DAT_141707348);
  uVar3 = extraout_RAX;
LAB_1416f2666:
  return uVar3 & 0xffffffffffffff00;
}




undefined8 FUN_1416f26a0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  uint7 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  if ((uint)uVar1 < 7) {
    uVar1 = uVar1 & 0xffffffff;
    uVar2 = (uint7)(uVar1 >> 8);
    switch(uVar1) {
    case 1:
      if (((param_3 != 0xc) && (param_3 != 0x2c)) && (param_3 != 8)) {
        return (ulonglong)uVar2 << 8;
      }
      break;
    case 2:
      if ((((param_3 != 0xc) && (param_3 != 0x2c)) && (param_3 != 8)) && (param_3 != 0x271b)) {
        return (ulonglong)uVar2 << 8;
      }
      break;
    case 3:
      if (((param_3 != 0xc) && (param_3 != 0x2c)) && ((param_3 != 8 && ((param_3 != 0x271b && (param_3 != 0x272c)))))) {
        return (ulonglong)uVar2 << 8;
      }
      break;
    case 4:
      if (((param_3 != 0xc) && (param_3 != 0x2c)) && ((param_3 != 8 && (((param_3 != 0x271b && (param_3 != 0x272c)) && (param_3 != 0x272b)))))) {
        return (ulonglong)uVar2 << 8;
      }
      break;
    case 5:
      if ((param_3 != 0xc) &&
         (((((param_3 != 0x2c && (param_3 != 8)) && (param_3 != 0x271b)) && ((param_3 != 0x272c && (param_3 != 0x272b)))) && (param_3 != 0x271c)))) {
        return (ulonglong)uVar2 << 8;
      }
      break;
    case 6:
      if ((((param_3 == 0xc) || (param_3 == 0x2c)) || (param_3 == 8)) ||
         (((param_3 == 0x271b || (param_3 == 0x272c)) || ((param_3 == 0x272b || ((param_3 == 0x271c || (param_3 == 0x1005)))))))) break;
    case 0:
      return (ulonglong)uVar2 << 8;
    }
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}




undefined1 FUN_1416f2840(longlong param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2);
  if (param_3 < 0x271d) {
    if (param_3 == 0x271c) {
      if ((uVar3 == 0) && (uVar2 < 0x32)) goto LAB_1416f2904;
    }
    else if (param_3 == 8) {
      if ((uVar3 == 0) && (uVar2 < 0x1e)) goto LAB_1416f2904;
    }
    else if (param_3 == 0x2c) {
      if ((uVar3 == 0) && (uVar2 < 0x14)) goto LAB_1416f2904;
    }
    else {
      if (param_3 != 0x271b) goto LAB_1416f28fe;
      if (uVar3 == 0) {
        uVar3 = 0;
        goto LAB_1416f2904;
      }
    }
  }
  else if (param_3 == 0x272b) {
    if (uVar3 < 2) goto LAB_1416f28fe;
  }
  else {
    if (param_3 != 0x272c) {
LAB_1416f28fe:
      uVar3 = 0;
      goto LAB_1416f2904;
    }
    if ((uVar3 == 0) && (uVar2 < 100)) goto LAB_1416f2904;
  }
  uVar3 = 1;
LAB_1416f2904:
  return (char)uVar3;
}




void FUN_1416f2920(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1416fe880(*(longlong *)(param_1 + 0x10),param_2);
  }
  return;
}




void FUN_1416f2940(longlong param_1,uint param_2,undefined8 param_3,int param_4,void *param_5)

{
  FUN_1416fed00(*(longlong *)(param_1 + 0x10),param_2,param_2,param_4,param_5);
  return;
}




void FUN_1416f2960(longlong param_1,int param_2)

{
  FUN_1416fb5f0(*(undefined8 **)(param_1 + 0x10),param_2);
  return;
}




void FUN_1416f2990(longlong param_1,uint param_2)

{
  FUN_141701890(*(undefined8 **)(param_1 + 0x10),param_2);
  return;
}




void FUN_1416f29a0(longlong param_1,int param_2,uint param_3)

{
  FUN_141700300(*(undefined8 **)(param_1 + 0x10),param_2,param_3);
  return;
}




void * FUN_1416f29d0(void *param_1,uint param_2)

{
  FUN_141700ea0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416f2a20(undefined8 *param_1)

{
  *param_1 = storage::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




longlong FUN_1416f2a40(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(param_3 >> 9);
  if (((((~(byte)(param_3 >> 1) & 1) != 0) && (param_2 != 0x10c8e3)) && (param_2 != 0x10c8e6)) &&
     (((param_2 != 0x10c8e9 && ((~(byte)param_3 & 1) != 0)) && (param_4 == 0)))) {
    return CONCAT71((uint7)uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}




bool FUN_1416f2a80(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_4 == 0x14) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_3);
    if (iVar1 == 0) {
      return true;
    }
    param_2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,1);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    param_4 = 0x14;
    param_3 = iVar1;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
  }
  puVar2 = FUN_1416ff980(puVar2,param_3,param_2,param_4,0);
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    return true;
  }
  return (puVar2[9] - puVar2[8] & 0xfffffffffffffff0) == 0;
}




bool FUN_1416f2b50(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_4 == 0x14) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_3);
    if (iVar1 == 0) {
      return true;
    }
    param_2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,1);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    param_4 = 0x14;
    param_3 = iVar1;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
  }
  puVar2 = FUN_1416ff980(puVar2,param_3,param_2,param_4,0);
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    return true;
  }
  return puVar2[0x12] == 0;
}




void FUN_1416f2c20(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_141700ea0((longlong)pvVar1);
    operator_delete(pvVar1);
    *param_1 = 0;
  }
  return;
}




void FUN_1416f2c60(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = storage::CProvider::vftable;
  if (param_1[2] != 0) {
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      FUN_141700ea0((longlong)pvVar1);
      operator_delete(pvVar1);
    }
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_1416f2cc0(undefined8 *param_1,uint param_2)

{
  FUN_1416f2c60(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_1416f2d80(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1416f2dc0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001416f2de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416f2df0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416f2e50(void)

{
  return;
}




void FUN_1416f2e80(undefined8 *param_1)

{
  *param_1 = std::tr1::_Ref_count_base::vftable;
  return;
}




void FUN_1416f2ea0(longlong *param_1)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}




undefined8 FUN_1416f2ec0(void)

{
  return 0;
}




undefined8 * FUN_1416f2ed0(undefined8 *param_1,byte param_2)

{
  *param_1 = std::tr1::_Ref_count_base::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_1416f2f10(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1416f2f60(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416f2f93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1416f2fa0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1416f2fc0(exception *param_1,uint param_2)

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




exception * FUN_1416f3020(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1416f3080(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416f30bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416f30d0(exception *param_1,uint param_2)

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




void FUN_1416f3140(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




uint FUN_1416f3180(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    return 0;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0x1e) {
    if (iVar1 == 0x28) {
      uVar2 = (**(code **)(*param_2 + 0x170))(param_2,*param_1);
      uVar3 = (**(code **)(*param_2 + 0x178))(param_2);
      if (uVar3 < uVar2) {
        log_InlineLogERROR(&DAT_141707c70);
        return uVar3;
      }
    }
    else {
      if (iVar1 == 10) {
        uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*param_1,0x15);
        uVar2 = 0x3c;
      }
      else {
        if (iVar1 != 0x14) {
          return 0;
        }
        uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*param_1,0x15);
        uVar2 = 0x14;
      }
      if (uVar3 != 0) {
        uVar2 = uVar3;
      }
    }
    return uVar2;
  }
  iVar1 = (**(code **)(*param_2 + 0x68))(param_2,*param_1,1);
  if (iVar1 == 0x10c8e6) {
    return 6;
  }
  if (iVar1 == 0x10c8e9) {
    return 0xc;
  }
  return 3;
}




longlong FUN_1416f3300(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 4) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x18);
}




bool FUN_1416f3350(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416f3390(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1416f3440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f3462;
  }
  lVar2 = *plVar1;
LAB_1416f3462:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416f3480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f34a2;
  }
  lVar2 = *plVar1;
LAB_1416f34a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x10;
  return param_1;
}




longlong FUN_1416f3500(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f3522;
  }
  lVar2 = *plVar1;
LAB_1416f3522:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416f3540(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f3562;
  }
  lVar2 = *plVar1;
LAB_1416f3562:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




bool FUN_1416f3580(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




undefined8 FUN_1416f35c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)*param_1;
  uVar5 = param_1[1];
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f3601;
  }
  lVar4 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = lVar4;
  }
LAB_1416f3601:
  if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = lVar3;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
  }
  if (*(ulonglong *)(lVar2 + 0x28) <= uVar5) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    uVar5 = uVar5 - *(longlong *)(lVar3 + 0x28);
  }
  lVar3 = lRam0000000000000020;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*plVar1 + 0x20);
  }
  return *(undefined8 *)(lVar3 + uVar5 * 8);
}




void FUN_1416f3680(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
}




exception * FUN_1416f36f0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




void FUN_1416f3760(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"deque<T> too long");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
}




longlong FUN_1416f37e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}




void FUN_1416f3820(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
}




longlong FUN_1416f38b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}




exception * FUN_1416f3910(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_1416f39c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_1416f39f0;
  }
  else {
LAB_1416f39f0:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x10;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_1416f3a18;
  }
  _invalid_parameter_noinfo();
LAB_1416f3a18:
  param_1[1] = param_1[1] + param_2 * 0x10;
  return param_1;
}




longlong * FUN_1416f3a30(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_1416f3a60;
  }
  else {
LAB_1416f3a60:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x38;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_1416f3a88;
  }
  _invalid_parameter_noinfo();
LAB_1416f3a88:
  param_1[1] = param_1[1] + param_2 * 0x38;
  return param_1;
}




void FUN_1416f3aa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1416f3ad0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 << 4);
  return;
}




void FUN_1416f3b60(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416f3bf0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 * 0x38);
  return;
}




void FUN_1416f3c60(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1416f3cd0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_1416f3d30(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416f3da0(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x38)) {
    memcpy(param_1,param_3,0x38);
  }
  return;
}




undefined8 * FUN_1416f3e10(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = std::tr1::_Ref_count_base::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  *param_1 = std::tr1::_Ref_count<MSGITEM_INFO>::vftable;
  return param_1;
}




void FUN_1416f3e60(longlong param_1)

{
  operator_delete(*(void **)(param_1 + 8));
  return;
}




void FUN_1416f3e70(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,1);
  }
  return;
}




void FUN_1416f3e90(undefined8 *param_1)

{
  *param_1 = std::tr1::_Ref_count_base::vftable;
  return;
}




void FUN_1416f3ee0(void *param_1,void *param_2)

{
  if (param_1 != (void *)0x0) {
    memcpy(param_1,param_2,0x38);
  }
  return;
}




void * FUN_1416f3f20(void *param_1,void *param_2,void *param_3)

{
  while (param_1 != param_2) {
    param_2 = (void *)((longlong)param_2 + -0x38);
    param_3 = (void *)((longlong)param_3 + -0x38);
    memcpy(param_3,param_2,0x38);
  }
  return param_3;
}




void FUN_1416f3ff0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  
  LOCK();
  plVar1 = param_1 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*param_1)();
    LOCK();
    piVar2 = (int *)((longlong)param_1 + 0x14);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}




undefined * FUN_1416f4030(void)

{
  if ((DAT_1417124f8 & 1) == 0) {
    DAT_1417124f8 = DAT_1417124f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1417124f0,"CStorage");
    atexit((_func_5014 *)&LAB_141706ca0);
  }
  return &DAT_1417124f0;
}




void FUN_1416f4090(__uint64 param_1)

{
  if ((DAT_1417124f8 & 1) == 0) {
    DAT_1417124f8 = DAT_1417124f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1417124f0,"CStorage");
    atexit((_func_5014 *)&LAB_141706ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f40e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1417124f0,param_1);
  return;
}




void FUN_1416f40f0(void *param_1)

{
  if ((DAT_1417124f8 & 1) == 0) {
    DAT_1417124f8 = DAT_1417124f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1417124f0,"CStorage");
    atexit((_func_5014 *)&LAB_141706ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f4145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1417124f0,param_1);
  return;
}




void FUN_1416f4150(void *param_1)

{
  if ((DAT_1417124f8 & 1) == 0) {
    DAT_1417124f8 = DAT_1417124f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1417124f0,"CStorage");
    atexit((_func_5014 *)&LAB_141706ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416f41a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1417124f0,param_1);
  return;
}




longlong FUN_1416f41e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f4202;
  }
  lVar2 = *plVar1;
LAB_1416f4202:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_1416f4220(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f4242;
  }
  lVar2 = *plVar1;
LAB_1416f4242:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416f4260(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f4282;
  }
  lVar2 = *plVar1;
LAB_1416f4282:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x10;
  return param_1;
}




longlong FUN_1416f42a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f42c2;
  }
  lVar2 = *plVar1;
LAB_1416f42c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416f42e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416f4302;
  }
  lVar2 = *plVar1;
LAB_1416f4302:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




bool FUN_1416f4320(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416f4370(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416f4380(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 << 4);
  return;
}




void FUN_1416f43f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return;
}




void FUN_1416f4430(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416f4460(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1416f44f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 0x38);
  return;
}




void FUN_1416f4580(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1416f45f0(longlong *param_1,longlong param_2)

{
  FUN_1416f39c0(param_1,param_2);
  return param_1;
}




longlong * FUN_1416f4610(longlong *param_1,longlong param_2)

{
  FUN_1416f3a30(param_1,param_2);
  return param_1;
}




void FUN_1416f4640(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = param_3;
    *param_1 = param_2;
  }
  else {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      param_1[1] = param_3;
      *param_1 = param_2;
    }
    else {
      param_1[1] = param_3;
      *param_1 = param_2;
    }
  }
  return;
}




void FUN_1416f4700(undefined8 param_1,void *param_2,void *param_3)

{
  if (param_2 != (void *)0x0) {
    memcpy(param_2,param_3,0x38);
  }
  return;
}




undefined8 * FUN_1416f4730(undefined8 *param_1,byte param_2)

{
  *param_1 = std::tr1::_Ref_count_base::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_1416f4780(void *param_1,void *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar2 = param_3 - (longlong)param_2;
    do {
      param_2 = (void *)((longlong)param_2 + -0x38);
      memcpy((void *)(lVar2 + (longlong)param_2),param_2,0x38);
    } while (param_2 != param_1);
  }
  return param_3 + (lVar1 / 0x38) * -0x38;
}




void FUN_1416f4810(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  LOCK();
  plVar1 = plVar3 + 2;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0x14);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}




void * FUN_1416f48d0(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x38)) {
    if (param_3 != (void *)0x0) {
      memcpy(param_3,param_1,0x38);
    }
    param_3 = (void *)((longlong)param_3 + 0x38);
  }
  return param_3;
}




undefined4 FUN_1416f4970(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < (int)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4))) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= (ulonglong)(longlong)param_2) {
      _invalid_parameter_noinfo();
    }
    return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 0x10) + 4);
  }
  log_InlineLogWARNING("CGameObjSet GetObjByIndex index oversize idx=%d, size=%u");
  return 0;
}




ulonglong FUN_1416f49f0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_141707348);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_141701f40(local_428);
    iVar8 = param_3;
    if (*(int *)(param_1 + 0x1c) == 0x14) {
      iVar8 = *(int *)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3,1);
    uVar3 = FUN_141701fc0(local_428,iVar8,*(undefined1 *)(param_1 + 0x1c),3,uVar2);
    if ((char)uVar3 == '\0') {
      uVar4 = FUN_141701f90((undefined8 *)local_428);
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      FUN_141702320((longlong)local_428,*(undefined2 *)(param_1 + 0x24));
      (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_2,local_428);
      uVar4 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4;
      if (uVar4 != 0) {
        FUN_141701f40(local_838);
        if (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4 == 0) {
          _invalid_parameter_noinfo();
        }
        uVar3 = FUN_141702150(local_838,iVar8,*(undefined1 *)(param_1 + 0x1c),0,(void *)**(undefined8 **)(param_1 + 0x40),1);
        if ((char)uVar3 == '\0') {
          log_InlineLogERROR(&DAT_141707348);
          FUN_141701f90((undefined8 *)local_838);
          uVar4 = FUN_141701f90((undefined8 *)local_428);
          return uVar4 & 0xffffffffffffff00;
        }
        FUN_141702320((longlong)local_838,*(undefined2 *)(param_1 + 0x24));
        uVar7 = 1;
        if (1 < uVar4) {
          lVar5 = 0x10;
          do {
            if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
              _invalid_parameter_noinfo();
            }
            if (*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x40)) == 0) {
              log_InlineLogERROR(&DAT_141707348);
            }
            else {
              if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
                _invalid_parameter_noinfo();
              }
              uVar3 = FUN_141702290((longlong)local_838,*(void **)(lVar5 + *(longlong *)(param_1 + 0x40)));
              if ((char)uVar3 == '\0') {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_2,local_838);
                if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
                  _invalid_parameter_noinfo();
                }
                uVar3 = FUN_141702150(local_838,iVar8,*(undefined1 *)(param_1 + 0x1c),0,*(void **)(lVar5 + *(longlong *)(param_1 + 0x40)),1);
                if ((char)uVar3 == '\0') {
                  log_InlineLogERROR(&DAT_141707348);
                  FUN_141701f90((undefined8 *)local_838);
                  uVar4 = FUN_141701f90((undefined8 *)local_428);
                  return uVar4 & 0xffffffffffffff00;
                }
                FUN_141702320((longlong)local_838,*(undefined2 *)(param_1 + 0x24));
              }
            }
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 < uVar4);
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_2,local_838);
        FUN_141701f90((undefined8 *)local_838);
      }
      uVar6 = 0;
      uVar7 = uVar6;
      if (uVar4 != 0) {
        do {
          if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
            _invalid_parameter_noinfo();
          }
          if (*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x40)) == 0) {
            log_InlineLogERROR(&DAT_141707348);
          }
          else {
            if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
              _invalid_parameter_noinfo();
            }
            cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                              (*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(uVar6 + *(longlong *)(param_1 + 0x40)) + 4));
            if (cVar1 != '\0') {
              if ((ulonglong)(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) <= uVar7) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(**(longlong **)(param_1 + 8) + 0x1f8))(*(longlong **)(param_1 + 8),param_2,**(undefined4 **)(uVar6 + *(longlong *)(param_1 + 0x40)));
            }
          }
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 + 0x10;
        } while (uVar7 < uVar4);
      }
      uVar3 = FUN_141701f90((undefined8 *)local_428);
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
  }
  return uVar4;
}




void FUN_1416f4e30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return;
}




void FUN_1416f4e70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416f4e90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416f4eb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1416f4ed0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1416f3680();
    }
    lVar1 = FUN_1416f4380(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x10 + lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_1416f4f40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1416f3820();
    }
    lVar1 = FUN_1416f44f0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x38 + lVar1;
  }
  return uVar2;
}




undefined8 * FUN_1416f4fb0(undefined8 *param_1)

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




undefined8 * FUN_1416f4ff0(undefined8 *param_1)

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




longlong * FUN_1416f5040(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar3 = param_3 * 0x10 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_1416f50ad;
  }
  _invalid_parameter_noinfo();
LAB_1416f50ad:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_1416f50e0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416f5140(undefined8 *param_1)

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




longlong * FUN_1416f5180(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar4;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar3 = param_3 * 0x38 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_1416f51ed;
  }
  _invalid_parameter_noinfo();
LAB_1416f51ed:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_1416f5220(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416f5280(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[6])) || ((ulonglong)(param_3[6] + param_3[7]) < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




void * FUN_1416f52e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416f5320(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((longlong)param_1 + 0x38)) {
    memcpy(param_1,param_3,0x38);
  }
  return;
}




void * FUN_1416f5380(void *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416f53f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = std::tr1::_Ref_count_base::vftable;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 1;
    *puVar1 = std::tr1::_Ref_count<MSGITEM_INFO>::vftable;
  }
  FUN_1416f4640(param_1,param_2,(longlong)puVar1);
  return;
}




void FUN_1416f5470(void *param_1,longlong param_2,void *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      memcpy(param_1,param_3,0x38);
    }
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return;
}




void FUN_1416f54e0(void *param_1,void *param_2,longlong param_3)

{
  FUN_1416f4780(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_1416f5500(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1416f4640(param_1,*param_2,param_2[1]);
  return param_1;
}




undefined8 * FUN_1416f5520(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    lVar3 = param_1[1];
    uVar4 = *param_1;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_3[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    param_3[1] = lVar3;
    *param_3 = uVar4;
    param_3 = param_3 + 2;
  }
  return param_3;
}




undefined8 * FUN_1416f55f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1416f4810(param_1);
  return param_1;
}




void FUN_1416f5610(void *param_1,void *param_2,void *param_3)

{
  FUN_1416f48d0(param_1,param_2,param_3);
  return;
}




void FUN_1416f5660(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416f5680(undefined8 *param_1)

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




undefined8 * FUN_1416f56d0(undefined8 *param_1)

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




undefined8 * FUN_1416f5720(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416f5780(undefined8 *param_1)

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




undefined8 * FUN_1416f57d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416f5830(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (((param_3 == (undefined8 *)0x0) || (param_2 < (ulonglong)param_3[6])) || ((ulonglong)(param_3[6] + param_3[7]) < param_2)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = *param_3;
  param_1[1] = param_2;
  *param_1 = uVar1;
  return param_1;
}




undefined8 * FUN_1416f5890(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1416f4640(param_1,*param_2,param_2[1]);
  return param_1;
}




undefined8 * FUN_1416f58c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1416f53f0(param_1,param_2);
  return param_1;
}




void FUN_1416f58e0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1416f4640(param_1,*param_2,param_2[1]);
  }
  return;
}




void FUN_1416f5920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return;
}




void FUN_1416f5960(void *param_1,longlong param_2,void *param_3)

{
  FUN_1416f5470(param_1,param_2,param_3);
  return;
}




void FUN_1416f5990(void *param_1,void *param_2,longlong param_3)

{
  FUN_1416f4780(param_1,param_2,param_3);
  return;
}




longlong FUN_1416f59c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1416f5520(param_1,param_2,param_3);
  return (longlong)param_3 + ((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U);
}




void FUN_1416f5a40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    lVar3 = param_3[1];
    uVar4 = *param_3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    param_1[1] = lVar3;
    *param_1 = uVar4;
  }
  return;
}




void FUN_1416f5ae0(void *param_1,void *param_2,void *param_3)

{
  FUN_1416f48d0(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_1416f5b30(undefined8 *param_1)

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




undefined8 * FUN_1416f5b90(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416f5be0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416f5c30(undefined8 *param_1)

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
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416f5c90(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[6];
  lVar2 = param_1[7];
  *param_2 = 0;
  if (uVar1 + lVar2 < uVar1) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}




undefined8 * FUN_1416f5ce0(undefined8 *param_1)

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




undefined8 * FUN_1416f5d40(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416f5d90(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416f5de0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1416f5e40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1416f4640(param_2,*param_3,param_3[1]);
  }
  return;
}




void FUN_1416f5e90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0x14);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return;
}




void * FUN_1416f5ed0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

{
  FUN_1416f5470(param_2,param_3,param_4);
  return (void *)((longlong)param_2 + param_3 * 0x38);
}




void FUN_1416f5f20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar4 = *(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x30);
    if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
      uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    plVar3 = (longlong *)(param_1 + 0x38);
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}




longlong FUN_1416f5fb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1416f5520(param_1,param_2,param_3);
  return (longlong)param_3 + ((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U);
}




void FUN_1416f6040(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  return;
}




void FUN_1416f60b0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_1416f4640(param_1,*param_3,param_3[1]);
    }
    param_1 = param_1 + 2;
  }
  return;
}




void FUN_1416f6130(void *param_1,void *param_2,void *param_3)

{
  FUN_1416f48d0(param_1,param_2,param_3);
  return;
}




ulonglong FUN_1416f6180(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *in_RAX;
  int *extraout_RAX;
  int *extraout_RAX_00;
  int *extraout_RAX_01;
  int *extraout_RAX_02;
  int *extraout_RAX_03;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (*(undefined8 **)(param_1 + 0x48) < puVar3) {
    _invalid_parameter_noinfo();
    in_RAX = extraout_RAX;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 < *(undefined8 **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_00;
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_01;
    }
    if (puVar3 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    in_RAX = (int *)*puVar3;
    if (*in_RAX == param_2) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
      in_RAX = extraout_RAX_02;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_03;
    }
    puVar3 = puVar3 + 2;
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1416f6250(longlong param_1,int param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *in_RAX;
  int *extraout_RAX;
  int *extraout_RAX_00;
  int *extraout_RAX_01;
  int *extraout_RAX_02;
  int *extraout_RAX_03;
  int *extraout_RAX_04;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x48) < plVar4) {
    _invalid_parameter_noinfo();
    in_RAX = extraout_RAX;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  lVar5 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 < *(longlong **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_00;
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_01;
    }
    if (plVar4 == plVar2) {
      return (ulonglong)in_RAX & 0xffffffffffffff00;
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
    in_RAX = (int *)*plVar4;
    if (*in_RAX == param_2) {
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
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
          _invalid_parameter_noinfo();
        }
        pvVar3 = memcpy(param_3,(void *)*plVar4,0x38);
        return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
      }
      log_InlineLogERROR(&DAT_141707348);
      in_RAX = extraout_RAX_02;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_03;
      lVar6 = lVar5;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_04;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}




ulonglong FUN_1416f63c0(longlong param_1,int param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *in_RAX;
  int *extraout_RAX;
  int *extraout_RAX_00;
  int *extraout_RAX_01;
  int *extraout_RAX_02;
  int *extraout_RAX_03;
  int *extraout_RAX_04;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x48) < plVar4) {
    _invalid_parameter_noinfo();
    in_RAX = extraout_RAX;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  lVar5 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 < *(longlong **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_00;
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_01;
    }
    if (plVar4 == plVar2) {
      return (ulonglong)in_RAX & 0xffffffffffffff00;
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
    in_RAX = (int *)*plVar4;
    if (*in_RAX == param_2) {
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
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
          _invalid_parameter_noinfo();
        }
        pvVar3 = memcpy((void *)*plVar4,param_3,0x38);
        return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
      }
      log_InlineLogERROR(&DAT_141707348);
      in_RAX = extraout_RAX_02;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_03;
      lVar6 = lVar5;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
      in_RAX = extraout_RAX_04;
    }
    plVar4 = plVar4 + 2;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416f6530(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_458 [32];
  uint local_438;
  char local_428;
  undefined1 local_427 [1022];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_1417124c8 ^ (ulonglong)auStack_458;
  if ((*(int *)(param_1 + 0x1c) != 0x14) && (*(char *)(param_1 + 0x10) == '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    plVar7 = *(longlong **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x48) < plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    while( true ) {
      plVar6 = *(longlong **)(param_1 + 0x48);
      if (plVar6 < *(longlong **)(param_1 + 0x40)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x28))) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar6) {
        local_438 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),4);
        return;
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      if (*plVar7 == 0) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *(undefined4 *)*plVar7;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),uVar1);
      if (((uVar4 != 0) &&
          (((cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),uVar1,2), cVar3 != '\0' ||
            (cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),uVar1,1), cVar3 != '\0')) &&
           (uVar5 = tq::TimeGet(3), uVar4 <= uVar5 + 19000000)))) &&
         (local_438 = uVar4, cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),3),
         cVar3 != '\0')) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),uVar1,0,4);
        local_428 = '\0';
        memset(local_427,0,0x3ff);
        local_438 = *(uint *)(param_1 + 0x18);
        _snprintf(&local_428,0x400,"DELETE FROM GhostContract WHERE Item_id=%lu AND owner_id=%lu LIMIT 1");
        local_29 = 0;
        plVar6 = (longlong *)InstanceGet();
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_428,0);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar7 = plVar7 + 2;
    }
    local_438 = 0x311;
    log_InlineLogERROR(&DAT_141707348);
  }
  return;
}




ulonglong FUN_1416f67c0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b8))(*(longlong **)(param_1 + 8),param_3);
  if (cVar3 == '\0') {
    return 1;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))(*(longlong **)(param_1 + 8),param_3);
  plVar6 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x48) < plVar6) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    if (param_4 < 1) {
      return 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 < *(longlong **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1;
    }
    if (*(longlong **)(lVar7 + 0x20) <= plVar6) {
      _invalid_parameter_noinfo();
    }
    if (*plVar6 == 0) {
      log_InlineLogERROR(&DAT_141707348);
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar1;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1e0))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)*plVar6,param_3,param_5,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      if (cVar3 != '\0') {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar1;
        }
        if (*(longlong **)(lVar7 + 0x20) <= plVar6) {
          _invalid_parameter_noinfo();
        }
        cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)*plVar6);
        if (cVar3 == '\0') {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar1;
          }
          if (*(longlong **)(lVar7 + 0x20) <= plVar6) {
            _invalid_parameter_noinfo();
          }
          iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1c0))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar6);
          param_4 = param_4 + (iVar5 - iVar4);
        }
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1;
    }
    if (*(longlong **)(lVar7 + 0x20) <= plVar6) {
      _invalid_parameter_noinfo();
    }
    plVar6 = plVar6 + 2;
  }
  if (param_4 < 1) {
    return 0;
  }
  return (longlong)(iVar4 + -1 + param_4) / (longlong)iVar4 & 0xffffffff;
}




undefined4 FUN_1416f69e0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 param_5)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1416f67c0(param_1,param_2,param_3,param_4,param_5);
  return CONCAT31((int3)(*(uint *)(param_1 + 0x24) >> 8),
                  (ulonglong)((*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) + (longlong)(int)uVar1) <=
                  (ulonglong)*(uint *)(param_1 + 0x24));
}




void FUN_1416f6a20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (*(undefined8 **)(param_1 + 0x48) < puVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    if (puVar2 < *(undefined8 **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),*(undefined4 *)*puVar3,0);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    puVar3 = puVar3 + 2;
  }
  return;
}




void FUN_1416f6af0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x30) * 8) + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    plVar3 = (longlong *)(param_1 + 0x38);
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}




void FUN_1416f6b70(longlong param_1,ulonglong param_2)

{
  void *pvVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Dst_00;
  rsize_t rVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffffffffff - uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1416f3760();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0xfffffffffffffff - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30);
  _Dst_00 = (void *)FUN_1416f4460(param_1 + 0x10,uVar2 + param_2);
  lVar5 = uVar3 * 8;
  pvVar1 = (void *)(lVar5 + *(longlong *)(param_1 + 0x20));
  lVar6 = (*(longlong *)(param_1 + 0x28) * 8 - (longlong)pvVar1) + *(longlong *)(param_1 + 0x20) >> 3;
  rVar4 = lVar6 * 8;
  _Dst = (void *)(rVar4 + lVar5 + (longlong)_Dst_00);
  if (lVar6 != 0) {
    memmove_s((void *)(lVar5 + (longlong)_Dst_00),rVar4,pvVar1,rVar4);
  }
  if (param_2 < uVar3) {
    lVar6 = (longlong)(param_2 * 8) >> 3;
    if (lVar6 != 0) {
      rVar4 = lVar6 << 3;
      memmove_s(_Dst,rVar4,*(void **)(param_1 + 0x20),rVar4);
    }
    pvVar1 = (void *)(*(longlong *)(param_1 + 0x20) + param_2 * 8);
    lVar5 = (lVar5 - (longlong)pvVar1) + *(longlong *)(param_1 + 0x20) >> 3;
    rVar4 = lVar5 * 8;
    if (lVar5 != 0) {
      memmove_s(_Dst_00,rVar4,pvVar1,rVar4);
    }
    if (param_2 != 0) {
      memset((void *)(rVar4 + (longlong)_Dst_00),0,param_2 << 3);
    }
  }
  else {
    rVar4 = (lVar5 >> 3) * 8;
    if (lVar5 >> 3 != 0) {
      memmove_s(_Dst,rVar4,*(void **)(param_1 + 0x20),rVar4);
    }
    if (param_2 - uVar3 != 0) {
      memset((void *)(rVar4 + (longlong)_Dst),0,(param_2 - uVar3) * 8);
    }
    if (uVar3 != 0) {
      memset(_Dst_00,0,uVar3 << 3);
    }
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + param_2;
  *(void **)(param_1 + 0x20) = _Dst_00;
  return;
}




void FUN_1416f6d30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  while (lVar5 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      uVar4 = *(longlong *)(param_1 + 0x38) + -1 + *(longlong *)(param_1 + 0x30);
      if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
        uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
      }
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 2;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0x14);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
      plVar3 = (longlong *)(param_1 + 0x38);
      *plVar3 = *plVar3 + -1;
      if (*plVar3 == 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5 * 8) != 0) {
      operator_delete(*(void **)(*(longlong *)(param_1 + 0x20) + lVar5 * 8));
    }
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1416f6e10(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1416f6e40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    plVar4 = param_1 + 1;
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 2;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0x14);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
      plVar3 = plVar4 + 1;
      plVar4 = plVar4 + 2;
    } while (plVar3 != param_2);
  }
  return;
}




void FUN_1416f6eb0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_1416f60b0(param_1,param_2,param_3);
  return;
}




void FUN_1416f6ed0(undefined8 param_1,void *param_2,void *param_3,void *param_4)

{
  FUN_1416f48d0(param_2,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x0001416f6fe3) */
/* WARNING: Removing unreachable block (ram,0x0001416f6fec) */
/* WARNING: Removing unreachable block (ram,0x0001416f7000) */
/* WARNING: Removing unreachable block (ram,0x0001416f7015) */

undefined8 * FUN_1416f6f10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      FUN_1416f4640(param_3,0,0);
    }
    puVar1 = param_1 + 1;
    puVar2 = param_3 + 1;
    if (puVar2 != puVar1) {
      uVar3 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar3;
    }
    if (param_3 != param_1) {
      uVar3 = *param_3;
      *param_3 = *param_1;
      *param_1 = uVar3;
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}




void FUN_1416f7090(undefined8 *param_1)

{
  FUN_1416f6d30((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416f70c0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 1U) {
    FUN_1416f6b70(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  if (*(ulonglong *)(param_1 + 0x28) <= uVar3) {
    uVar3 = uVar3 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) = pvVar2;
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8);
  if (puVar1 == (undefined8 *)0x0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_1416f4640(puVar1,*param_2,param_2[1]);
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  }
  return;
}




void FUN_1416f7170(undefined8 *param_1)

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




void FUN_1416f71b0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != param_3) {
    plVar4 = param_2 + 1;
    do {
      plVar3 = (longlong *)*plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 2;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0x14);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
      plVar3 = plVar4 + 1;
      plVar4 = plVar4 + 2;
    } while (plVar3 != param_3);
  }
  return;
}




void FUN_1416f7220(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    FUN_1416f71b0(param_1,*(longlong **)(param_1 + 0x18),*(longlong **)(param_1 + 0x20));
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416f7260(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_1416f60b0(param_2,param_3,param_4);
  return param_2 + param_3 * 2;
}




void FUN_1416f72b0(longlong param_1,longlong param_2,ulonglong param_3,void *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined1 local_68 [64];
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x38;
  }
  if (param_3 != 0) {
    pvVar5 = *(void **)(param_1 + 0x20);
    lVar2 = ((longlong)pvVar5 - lVar2) / 0x38;
    if (0x492492492492492U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1416f3820();
    }
    uVar1 = lVar2 + param_3;
    if (uVar4 < uVar1) {
      if (0x492492492492492 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
      }
      pvVar3 = (void *)FUN_1416f44f0(param_1 + 0x10,uVar4);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x38;
      FUN_1416f5470((void *)(lVar2 * 0x38 + (longlong)pvVar3),param_3,param_4);
      FUN_1416f48d0(*(void **)(param_1 + 0x18),*(void **)(param_2 + 8),pvVar3);
      FUN_1416f48d0(*(void **)(param_2 + 8),*(void **)(param_1 + 0x20),(void *)((lVar2 + param_3) * 0x38 + (longlong)pvVar3));
      pvVar5 = *(void **)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (pvVar5 != (void *)0x0) {
        operator_delete(pvVar5);
      }
      *(void **)(param_1 + 0x28) = (void *)(uVar4 * 0x38 + (longlong)pvVar3);
      *(void **)(param_1 + 0x20) = (void *)((param_3 + (lVar2 - (longlong)pvVar5) / 0x38) * 0x38 + (longlong)pvVar3);
      *(void **)(param_1 + 0x18) = pvVar3;
    }
    else if ((ulonglong)(((longlong)pvVar5 - *(longlong *)(param_2 + 8)) / 0x38) < param_3) {
      memcpy(local_68,param_4,0x38);
      FUN_1416f48d0(*(void **)(param_2 + 8),pvVar5,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 0x38));
      FUN_1416f5470(*(void **)(param_1 + 0x20),param_3 - ((longlong)*(void **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38,local_68);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x38;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (pvVar5 = *(void **)(param_2 + 8); pvVar5 != (void *)(lVar2 + param_3 * -0x38); pvVar5 = (void *)((longlong)pvVar5 + 0x38)) {
        memcpy(pvVar5,local_68,0x38);
      }
    }
    else {
      memcpy(local_68,param_4,0x38);
      pvVar6 = (void *)((longlong)pvVar5 + param_3 * -0x38);
      pvVar3 = FUN_1416f48d0(pvVar6,pvVar5,pvVar5);
      *(void **)(param_1 + 0x20) = pvVar3;
      FUN_1416f4780(*(void **)(param_2 + 8),pvVar6,(longlong)pvVar5);
      pvVar5 = *(void **)(param_2 + 8);
      pvVar3 = (void *)(param_3 * 0x38 + (longlong)pvVar5);
      for (; pvVar5 != pvVar3; pvVar5 = (void *)((longlong)pvVar5 + 0x38)) {
        memcpy(pvVar5,local_68,0x38);
      }
    }
  }
  return;
}




void FUN_1416f7650(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1416f6f10(param_1,param_2,param_3);
  return;
}




longlong FUN_1416f7670(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar6;
  undefined8 *puVar5;
  
  lVar3 = (longlong)param_3 - ((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U);
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_2;
    puVar4 = param_2 + 1;
    do {
      puVar5 = puVar4 + -2;
      param_3 = param_3 + -2;
      puVar1 = (undefined8 *)((longlong)puVar5 + lVar6);
      if (puVar1 != puVar5) {
        uVar2 = *puVar1;
        *puVar1 = *puVar5;
        *puVar5 = uVar2;
      }
      puVar1 = puVar4 + -3;
      if (param_3 != puVar1) {
        uVar2 = *param_3;
        *param_3 = *puVar1;
        *puVar1 = uVar2;
      }
      puVar4 = puVar5;
    } while (puVar1 != param_1);
  }
  return lVar3;
}




bool FUN_1416f76f0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  void *local_40;
  longlong *local_38;
  
  if (param_3 == (longlong *)0x0) {
    bVar8 = false;
  }
  else {
    *(longlong **)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0x14) = *param_2;
    *(undefined4 *)(param_1 + 0x18) = param_2[1];
    *(undefined4 *)(param_1 + 0x1c) = param_2[2];
    *(undefined4 *)(param_1 + 0x20) = param_2[3];
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar6 = FUN_1416f3180((undefined4 *)(param_1 + 0x14),param_3);
    *(uint *)(param_1 + 0x24) = uVar6;
    for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x24); uVar6 = uVar6 + 1) {
      pvVar7 = operator_new(0x38);
      local_40 = (void *)0x0;
      local_38 = (longlong *)0x0;
      FUN_1416f53f0(&local_40,pvVar7);
      if (local_40 == (void *)0x0) {
        log_InlineLogERROR(&DAT_141707348);
        plVar5 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 2;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0x14);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_38 + 8))();
            }
          }
        }
        return false;
      }
      memset(local_40,0,0x38);
      FUN_1416f70c0(param_1 + 0x58,&local_40);
      plVar5 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 2;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0x14);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))();
          }
        }
      }
    }
    bVar8 = *(ulonglong *)(param_1 + 0x90) == (ulonglong)*(uint *)(param_1 + 0x24);
  }
  return bVar8;
}




undefined8 FUN_1416f78b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong extraout_RAX;
  void *local_50;
  longlong *local_48;
  
  iVar6 = *(int *)(param_1 + 0x24);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))();
  if (uVar5 <= param_2 + iVar6) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))();
    param_2 = iVar6 - *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_2;
  uVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x230))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2);
  uVar5 = 0;
  while( true ) {
    if (param_2 <= uVar5) {
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    pvVar9 = operator_new(0x38);
    local_50 = (void *)0x0;
    local_48 = (longlong *)0x0;
    FUN_1416f53f0(&local_50,pvVar9);
    if (local_50 == (void *)0x0) break;
    memset(local_50,0,0x38);
    uVar8 = FUN_1416f70c0(param_1 + 0x58,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 2;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar7 = (int)lVar3 - 1;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0x14);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar8 = (ulonglong)(iVar6 - 1U);
        if (iVar6 - 1U == 0) {
          uVar8 = (**(code **)(*local_48 + 8))();
        }
      }
    }
    uVar5 = uVar5 + 1;
  }
  log_InlineLogERROR(&DAT_141707348);
  plVar4 = local_48;
  uVar8 = extraout_RAX;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 2;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar5 = (int)lVar3 - 1;
    uVar8 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      uVar8 = (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0x14);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        uVar8 = (**(code **)(*local_48 + 8))();
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}




void FUN_1416f7a70(undefined8 *param_1)

{
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    FUN_1416f71b0(param_1,(longlong *)param_1[3],(longlong *)param_1[4]);
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416f7ac0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  FUN_1416f5520(*(undefined8 **)(param_3 + 8) + 2,(undefined8 *)param_1[4],*(undefined8 **)(param_3 + 8));
  lVar3 = param_1[4];
  for (lVar7 = lVar3 + -0x10; lVar7 != lVar3; lVar7 = lVar7 + 0x10) {
    plVar4 = *(longlong **)(lVar7 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 2;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0x14);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  param_1[4] = param_1[4] + -0x10;
  uVar5 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar5 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar5)) {
    _invalid_parameter_noinfo();
  }
  uVar6 = *param_1;
  param_2[1] = uVar5;
  *param_2 = uVar6;
  return param_2;
}




longlong * FUN_1416f7bb0(longlong *param_1,longlong *param_2,longlong *param_3,void *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar4 = param_1[3];
  lVar5 = param_1[4] - uVar4;
  lVar2 = 0;
  lVar6 = lVar5 >> 0x3f;
  lVar3 = lVar2;
  if (lVar5 / 0x38 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) / 0x38;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_1416f72b0((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar2;
  }
  else {
    lVar6 = *plVar1;
  }
  uVar4 = lVar3 * 0x38 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_1416f7cd2;
  }
  _invalid_parameter_noinfo();
LAB_1416f7cd2:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




void FUN_1416f7d10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_1416f6f10(param_2,param_3,param_4);
  return;
}




longlong FUN_1416f7d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar6;
  undefined8 *puVar5;
  
  lVar3 = (longlong)param_3 - ((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U);
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_2;
    puVar4 = param_2 + 1;
    do {
      puVar5 = puVar4 + -2;
      param_3 = param_3 + -2;
      puVar1 = (undefined8 *)((longlong)puVar5 + lVar6);
      if (puVar1 != puVar5) {
        uVar2 = *puVar1;
        *puVar1 = *puVar5;
        *puVar5 = uVar2;
      }
      puVar1 = puVar4 + -3;
      if (param_3 != puVar1) {
        uVar2 = *param_3;
        *param_3 = *puVar1;
        *puVar1 = uVar2;
      }
      puVar4 = puVar5;
    } while (puVar1 != param_1);
  }
  return lVar3;
}




undefined8 * FUN_1416f7dd0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = storage::CStorage::vftable;
  plVar3 = (longlong *)0x0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 5);
    plVar2 = plVar1;
  }
  param_1[5] = plVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0xb);
    plVar3 = plVar2;
  }
  param_1[0xb] = plVar3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return param_1;
}




void FUN_1416f7e90(undefined8 *param_1)

{
  *param_1 = storage::CStorage::vftable;
  FUN_1416f6d30((longlong)(param_1 + 0xb));
  operator_delete((void *)param_1[0xb]);
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    FUN_1416f71b0(param_1 + 5,(longlong *)param_1[8],(longlong *)param_1[9]);
    operator_delete((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  operator_delete((void *)param_1[5]);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_1416f7f20(longlong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_4a8;
  longlong *plStack_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined8 local_458 [2];
  CMsg local_448 [1040];
  
  local_498 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  plVar9 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x48) < plVar9) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  local_4a8 = plVar1;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    plStack_4a0 = plVar9;
    if (plVar2 < *(longlong **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar1;
    }
    if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    if (*(uint *)*plVar9 == param_2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar1;
    }
    if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar9 = plVar9 + 2;
  }
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 < *(longlong **)(param_1 + 0x40)) {
    _invalid_parameter_noinfo();
  }
  if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
    _invalid_parameter_noinfo();
  }
  if (plVar9 == plVar2) {
    tq::GmLogSave("shop","Storage not exist this item[ItemId:%u][OwnerID:%u][PlayerID:%u][StorageType:%u]",param_2,*(undefined4 *)(param_1 + 0x14));
    uVar3 = 0;
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))(*(longlong **)(param_1 + 8),param_3[1],param_2);
    uVar3 = 0;
    if (cVar4 != '\0') {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar1;
      }
      if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      if (*plVar9 == 0) {
        log_InlineLogERROR(&DAT_141707348,"IF_NOT","iter->get()","f:\\version\\cqserver-78.0.11-1204\\modules\\storage\\src\\storage.cpp");
        uVar3 = 0;
      }
      else {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar1;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
          _invalid_parameter_noinfo();
        }
        memcpy(&local_490,(void *)*plVar9,0x38);
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar1;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
          _invalid_parameter_noinfo();
        }
        FUN_1416f70c0(param_1 + 0x58,plVar9);
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar1;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar9) {
          _invalid_parameter_noinfo();
        }
        memset((void *)*plVar9,0,0x38);
        FUN_1416f7ac0((undefined8 *)(param_1 + 0x28),local_458,(longlong)&local_4a8);
        FUN_141701f40(local_448);
        if (param_3[2] == 0x14) {
          iVar5 = *(int *)(param_1 + 0x20);
        }
        else {
          iVar5 = *param_3;
        }
        uVar7 = FUN_141702060(local_448,iVar5,*(undefined1 *)(param_1 + 0x1c),'\x02',param_2);
        if ((((char)uVar7 != '\0') &&
            ((**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_3[1],local_448), param_3[2] == 0x14)) &&
           (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_3[1]), iVar5 != 0)) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar5,local_448);
        }
        lVar10 = **(longlong **)(param_1 + 8);
        uVar8 = (**(code **)(lVar10 + 0x68))(*(longlong **)(param_1 + 8),param_2,1);
        cVar4 = (**(code **)(lVar10 + 0x88))(*(undefined8 *)(param_1 + 8),uVar8);
        if (cVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x200))(*(longlong **)(param_1 + 8),param_3[1],param_2,param_3[1]);
        }
        if ((*(int *)(param_1 + 0x1c) == 0x14) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2), cVar4 != '\0')) {
          plVar9 = *(longlong **)(param_1 + 8);
          iVar5 = param_3[1];
          (**(code **)(*plVar9 + 0x68))(plVar9,local_490,5);
          (**(code **)(*plVar9 + 0x68))(plVar9,local_490,4);
          (**(code **)(*plVar9 + 0x68))(plVar9,local_490,1);
          uVar8 = (**(code **)(*plVar9 + 0x150))(plVar9,iVar5);
          tq::MyLogSave("gmlog/Trunk","%s(%u) checkout item:[id=%u, type=%u], dur=%d, max_dur=%d, accumulate=%d",uVar8,iVar5);
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),param_2);
        if (cVar4 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),param_3[1],param_2);
        }
        else {
          lVar10 = **(longlong **)(param_1 + 8);
          uVar6 = (**(code **)(lVar10 + 0x1c0))(*(longlong **)(param_1 + 8),param_2);
          (**(code **)(lVar10 + 0x1e8))(*(undefined8 *)(param_1 + 8),param_3[1],local_48c,uVar6);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),param_2);
        }
        if (*(int *)(param_1 + 0x1c) == 0x14) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),param_3[3]);
        }
        FUN_141701f90((undefined8 *)local_448);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}




void FUN_1416f8670(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *plStack_470;
  CMsg local_438 [1040];
  
  plStack_470 = *(longlong **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x48) < plStack_470) {
    _invalid_parameter_noinfo();
  }
  plVar8 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    if (plVar2 < *(longlong **)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar8 == (longlong *)0x0) || (plVar8 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
    }
    if (plStack_470 == plVar2) break;
    if (plVar8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar8;
    }
    if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
      _invalid_parameter_noinfo();
    }
    if (*plStack_470 == 0) {
      log_InlineLogERROR(&DAT_141707348);
      return;
    }
    if (plVar8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar8;
    }
    if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
      _invalid_parameter_noinfo();
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))(*(longlong **)(param_1 + 8),*(undefined4 *)*plStack_470);
    if (iVar5 == 3) {
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))(*(longlong **)(param_1 + 8),*(undefined4 *)*plStack_470);
      if (cVar4 != '\0') {
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar8;
        }
        if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x198))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),*(undefined4 *)*plStack_470);
      }
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 400))(*(longlong **)(param_1 + 8),param_2,*(undefined4 *)*plStack_470,0);
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),*(undefined4 *)*plStack_470);
      FUN_141701f40(local_438);
      if (*(int *)(param_1 + 0x1c) == 0x14) {
        uVar9 = *(undefined4 *)(param_1 + 0x20);
      }
      else {
        uVar9 = *(undefined4 *)(param_1 + 0x14);
      }
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      uVar6 = FUN_141702150(local_438,uVar9,*(undefined1 *)(param_1 + 0x1c),4,(void *)*plStack_470,1);
      if ((char)uVar6 == '\0') {
        log_InlineLogERROR(&DAT_141707348);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_2,local_438);
        if ((*(int *)(param_1 + 0x1c) == 0x14) && (iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_2), iVar5 != 0)
           ) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar5,local_438);
        }
      }
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      FUN_1416f70c0(param_1 + 0x58,plStack_470);
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      memset((void *)*plStack_470,0,0x38);
      FUN_1416f5520(plStack_470 + 2,*(undefined8 **)(param_1 + 0x48),plStack_470);
      lVar3 = *(longlong *)(param_1 + 0x48);
      for (lVar7 = lVar3 + -0x10; lVar7 != lVar3; lVar7 = lVar7 + 0x10) {
        plVar8 = *(longlong **)(lVar7 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0x14);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 8))(plVar8);
            }
          }
        }
      }
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -0x10;
      if ((plStack_470 < *(longlong **)(param_1 + 0x40)) || (*(longlong **)(param_1 + 0x48) < plStack_470)) {
        _invalid_parameter_noinfo();
      }
      plVar8 = *(longlong **)(param_1 + 0x28);
      FUN_141701f90((undefined8 *)local_438);
    }
    else {
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar8;
      }
      if (*(longlong **)(lVar7 + 0x20) <= plStack_470) {
        _invalid_parameter_noinfo();
      }
      plStack_470 = plStack_470 + 2;
    }
  }
  return;
}




void FUN_1416f8ac0(longlong *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_28;
  void *pvStack_20;
  longlong local_18 [2];
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (param_1[5] - (longlong)pvVar1) / 0x38;
  }
  pvVar2 = (void *)param_1[4];
  if ((ulonglong)(((longlong)pvVar2 - (longlong)pvVar1) / 0x38) < uVar3) {
    FUN_1416f5470(pvVar2,1,param_2);
    param_1[4] = (longlong)pvVar2 + 0x38;
    return;
  }
  if (pvVar2 < pvVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  pvStack_20 = pvVar2;
  FUN_1416f7bb0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416f8bc0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(longlong *)(param_1 + 0x28) - lVar10 >> 4;
  }
  uVar12 = 0;
  if (param_3 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x20) - lVar10 >> 4;
    if (0xfffffffffffffffU - lVar10 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1416f3680();
    }
    uVar3 = lVar10 + param_3;
    if (uVar11 < uVar3) {
      if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
        uVar12 = uVar11 + (uVar11 >> 1);
      }
      if (uVar12 < uVar3) {
        uVar12 = uVar3;
      }
      puVar8 = (undefined8 *)FUN_1416f4380(param_1 + 0x10,uVar12);
      lVar10 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 4;
      FUN_1416f60b0(puVar8 + lVar10 * 2,param_3,param_4);
      FUN_1416f6f10(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar8);
      FUN_1416f6f10(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar8 + (lVar10 + param_3) * 2);
      plVar5 = *(longlong **)(param_1 + 0x18);
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        FUN_1416f71b0(param_1,plVar5,*(longlong **)(param_1 + 0x20));
        operator_delete(*(void **)(param_1 + 0x18));
      }
      *(undefined8 **)(param_1 + 0x28) = puVar8 + uVar12 * 2;
      *(undefined8 **)(param_1 + 0x20) = puVar8 + (param_3 + (lVar10 - (longlong)plVar5 >> 4)) * 2;
      *(undefined8 **)(param_1 + 0x18) = puVar8;
    }
    else if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_2 + 8) >> 4) < param_3) {
      plVar5 = (longlong *)param_4[1];
      lVar10 = *param_4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
        UNLOCK();
      }
      local_60 = lVar10;
      local_58 = plVar5;
      FUN_1416f6f10(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),*(undefined8 **)(param_2 + 8) + param_3 * 2);
      FUN_1416f60b0(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8) >> 4),&local_60);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x10;
      lVar6 = *(longlong *)(param_1 + 0x20);
      for (plVar13 = *(longlong **)(param_2 + 8); plVar13 != (longlong *)(lVar6 + param_3 * -0x10); plVar13 = plVar13 + 2) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
          UNLOCK();
        }
        plVar14 = (longlong *)plVar13[1];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar14 + 2;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0x14);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 8))(plVar14);
            }
          }
        }
        plVar13[1] = (longlong)plVar5;
        *plVar13 = lVar10;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 2;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
    }
    else {
      plVar5 = (longlong *)param_4[1];
      lVar10 = *param_4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
        UNLOCK();
      }
      puVar8 = *(undefined8 **)(param_1 + 0x20);
      local_50 = lVar10;
      local_48 = plVar5;
      puVar9 = FUN_1416f6f10(puVar8 + param_3 * -2,puVar8,puVar8);
      *(undefined8 **)(param_1 + 0x20) = puVar9;
      FUN_1416f7d50(*(undefined8 **)(param_2 + 8),puVar8 + param_3 * -2,puVar8);
      plVar13 = *(longlong **)(param_2 + 8);
      if (plVar13 != plVar13 + param_3 * 2) {
        plVar14 = plVar13 + 1;
        do {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            UNLOCK();
          }
          plVar7 = (longlong *)*plVar14;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar7 + 2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0x14);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          *plVar14 = (longlong)plVar5;
          plVar14[-1] = lVar10;
          plVar7 = plVar14 + 1;
          plVar14 = plVar14 + 2;
        } while (plVar7 != plVar13 + param_3 * 2);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 2;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_1416f8ff0(undefined4 *param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  
  if ((DAT_1417124f8 & 1) == 0) {
    DAT_1417124f8 = DAT_1417124f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1417124f0,"CStorage");
    atexit((_func_5014 *)&LAB_141706ca0);
  }
  puVar2 = CMyHeap::Alloc((CMyHeap *)&DAT_1417124f0,0x98);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_1416f7dd0(puVar2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141707348,"IF_NOT","pStorage","f:\\version\\cqserver-78.0.11-1204\\modules\\storage\\src\\storage.cpp",0x15);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    bVar1 = FUN_1416f76f0((longlong)puVar2,param_1,param_2);
    if (!bVar1) {
      (**(code **)*puVar2)(puVar2,1);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}




undefined8 * FUN_1416f90e0(undefined8 *param_1,uint param_2)

{
  FUN_1416f7e90(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1416f40f0(param_1);
  }
  return param_1;
}




longlong * FUN_1416f9110(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar2 = 0;
  uVar4 = param_1[3];
  lVar3 = lVar2;
  if ((param_1[4] - uVar4 & 0xfffffffffffffff0) != 0) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) >> 4;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_1416f8bc0((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar2;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = lVar3 * 0x10 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_1416f9207;
  }
  _invalid_parameter_noinfo();
LAB_1416f9207:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




void FUN_1416f9250(longlong *param_1,longlong *param_2)

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
    uVar3 = param_1[5] - (longlong)puVar1 >> 4;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 4) < uVar3) {
    FUN_1416f60b0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 2);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_1416f9110(param_1,local_18,&local_28,param_2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1416f9320(longlong param_1,int *param_2,undefined4 *param_3,char param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  void *pvVar4;
  int *piVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  IStringManager *pIVar11;
  char *_Format;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  void *pvVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined1 auStackY_998 [32];
  uint local_954;
  ulonglong *local_948 [3];
  void *local_930;
  void *local_928;
  undefined8 local_920;
  int *local_918;
  undefined4 *local_910;
  ulonglong *local_908;
  ulonglong local_8f8;
  ulonglong local_8f0;
  ulonglong *local_8e8;
  undefined8 local_8e0;
  undefined4 local_8d8 [14];
  undefined1 local_8a0 [4];
  undefined4 local_89c;
  undefined1 local_88d;
  CMsg local_868 [1040];
  CMsg local_458;
  undefined1 local_457 [1039];
  ulonglong local_48;
  
  local_8e0 = 0xfffffffffffffffe;
  local_48 = DAT_1417124c8 ^ (ulonglong)auStackY_998;
  local_918 = param_2;
  local_910 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    if (((param_3[2] != 0x28) || (param_4 == '\0')) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_3[1],*param_2), cVar6 == '\0')) {
      return 0;
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),*param_2);
    if ((cVar6 == '\0') && ((ulonglong)*(uint *)(param_1 + 0x24) < (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) + 1U)) {
      return 0;
    }
    uVar10 = FUN_1416f67c0(param_1,param_3[1],param_2[1],(uint)*(ushort *)(param_2 + 0xc),(ushort)*(byte *)((longlong)param_2 + 0x13));
    if ((ulonglong)*(uint *)(param_1 + 0x24) < (ulonglong)((*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40) >> 4) + (longlong)(int)uVar10)) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar7 = 0;
  }
  else {
    if ((param_3 != (undefined4 *)0x0) && (*(int *)(param_1 + 0x1c) == 0x14)) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x20));
    }
    if (((*(int *)(param_1 + 0x1c) == 0x1e) || (*(int *)(param_1 + 0x1c) == 0x28)) &&
       ((cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),*param_2), cVar6 == '\0' ||
        (cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))(*(longlong **)(param_1 + 8),*param_2), cVar6 != '\0')))) {
      if (param_3 == (undefined4 *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*param_2,7);
        log_InlineLogWARNING("CStorage::CheckinGoods Item exchange unable,item id:[%u] Position[%u] Player[%u]");
        if (*(int *)(param_1 + 0x18) != 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,7,0);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,2,*(undefined4 *)(param_1 + 0x18));
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,3,*(undefined4 *)(param_1 + 0x18));
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),*param_2,2);
      }
      uVar7 = 0;
    }
    else {
      uVar10 = FUN_1416f6180(param_1,*param_2);
      if ((char)uVar10 == '\0') {
        if (param_3 == (undefined4 *)0x0) {
          uVar10 = *(ulonglong *)(param_1 + 0x88);
          if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
            _invalid_parameter_noinfo();
          }
          plVar16 = *(longlong **)(param_1 + 0x58);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar15 = 0;
          }
          else {
            lVar15 = *plVar16;
          }
          lVar13 = 0;
          if ((ulonglong)(*(longlong *)(lVar15 + 0x38) + *(longlong *)(lVar15 + 0x30)) <= uVar10) {
            _invalid_parameter_noinfo();
          }
          lVar15 = lVar13;
          if (plVar16 != (longlong *)0x0) {
            lVar15 = *plVar16;
          }
          if (*(ulonglong *)(lVar15 + 0x28) <= uVar10) {
            lVar15 = lVar13;
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar16;
            }
            uVar10 = uVar10 - *(longlong *)(lVar15 + 0x28);
          }
          lVar15 = lVar13;
          if (plVar16 != (longlong *)0x0) {
            lVar15 = *plVar16;
          }
          if (**(longlong **)(*(longlong *)(lVar15 + 0x20) + uVar10 * 8) == 0) {
            log_InlineLogERROR(&DAT_141707348);
            return 0;
          }
          uVar10 = *(ulonglong *)(param_1 + 0x88);
          local_908 = (ulonglong *)0x0;
          if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
            _invalid_parameter_noinfo();
          }
          plVar16 = *(longlong **)(param_1 + 0x58);
          local_908 = (ulonglong *)plVar16;
          local_8f8 = uVar10;
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar13;
            lVar15 = lVar13;
          }
          else {
            lVar14 = *plVar16;
            lVar15 = *plVar16;
          }
          if ((ulonglong)(*(longlong *)(lVar14 + 0x38) + *(longlong *)(lVar15 + 0x30)) <= uVar10) {
            _invalid_parameter_noinfo();
          }
          lVar15 = lVar13;
          if (plVar16 != (longlong *)0x0) {
            lVar15 = *plVar16;
          }
          if (*(ulonglong *)(lVar15 + 0x28) <= uVar10) {
            lVar15 = lVar13;
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar16;
            }
            uVar10 = uVar10 - *(longlong *)(lVar15 + 0x28);
            local_8f8 = uVar10;
          }
          lVar15 = lVar13;
          if (plVar16 != (longlong *)0x0) {
            lVar15 = *plVar16;
          }
          FUN_1416f9250((longlong *)(param_1 + 0x28),*(longlong **)(*(longlong *)(lVar15 + 0x20) + uVar10 * 8));
          uVar10 = *(ulonglong *)(param_1 + 0x88);
          if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
            _invalid_parameter_noinfo();
          }
          plVar16 = *(longlong **)(param_1 + 0x58);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar15 = lVar13;
          }
          else {
            lVar15 = *plVar16;
          }
          if ((ulonglong)(*(longlong *)(lVar15 + 0x38) + *(longlong *)(lVar15 + 0x30)) <= uVar10) {
            _invalid_parameter_noinfo();
          }
          lVar15 = lVar13;
          if (plVar16 != (longlong *)0x0) {
            lVar15 = *plVar16;
          }
          if (*(ulonglong *)(lVar15 + 0x28) <= uVar10) {
            lVar15 = lVar13;
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar16;
            }
            uVar10 = uVar10 - *(longlong *)(lVar15 + 0x28);
          }
          if (plVar16 != (longlong *)0x0) {
            lVar13 = *plVar16;
          }
          memcpy((void *)**(undefined8 **)(*(longlong *)(lVar13 + 0x20) + uVar10 * 8),param_2,0x38);
          FUN_1416f6af0(param_1 + 0x58);
        }
        else {
          if ((param_3[2] == 0x14) && (cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(), piVar5 = local_918, cVar6 != '\0')) {
            plVar16 = *(longlong **)(param_1 + 8);
            uVar19 = param_3[1];
            (**(code **)(*plVar16 + 0x68))(plVar16,*local_918,5);
            (**(code **)(*plVar16 + 0x68))(plVar16,*piVar5,4);
            (**(code **)(*plVar16 + 0x68))(plVar16,*local_918,1);
            (**(code **)(*plVar16 + 0x150))(plVar16,uVar19);
            param_2 = local_918;
            tq::MyLogSave("gmlog/Trunk","%s(%u) checkin item:[id=%u, type=%u], dur=%d, max_dur=%d");
            param_3 = local_910;
          }
          bVar3 = false;
          if (param_4 != '\0') {
            local_458 = (CMsg)0x0;
            memset(local_457,0,0x3ff);
            pIVar11 = theInstance();
            (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),*param_2);
            _Format = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_PICK_ITEM_TO_CHEST");
            _snprintf((char *)&local_458,0x3ff,_Format);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),param_3[1],&local_458);
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_3[1],*param_2);
          cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))(*(longlong **)(param_1 + 8),*param_2);
          if (cVar6 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x218))(*(longlong **)(param_1 + 8),*param_2);
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,3,param_3[1]);
          iVar8 = param_3[2];
          if (iVar8 == 0) {
            return 0;
          }
          if (iVar8 == 10) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,7,0xc9);
          }
          else if (iVar8 == 0x14) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,7,0xca);
          }
          else if (iVar8 == 0x1e) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,7,0xcb);
          }
          else if (iVar8 == 0x28) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,7,0xd0);
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),*param_2,2,*param_3);
          cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),*param_2);
          if (cVar6 != '\0') {
            local_954 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1c0))(*(longlong **)(param_1 + 8),*param_2);
            iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),*param_2);
            cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),*param_2,local_8a0);
            if (cVar6 == '\0') {
              log_InlineLogERROR(&DAT_141707348);
              return 0;
            }
            local_910 = (undefined4 *)CONCAT44(local_910._4_4_,local_89c);
            local_908 = operator_new(8);
            if (local_908 == (ulonglong *)0x0) {
              local_948[0] = (ulonglong *)0x0;
            }
            else {
              *local_908 = (ulonglong)local_948;
              local_948[0] = local_908;
            }
            uVar10 = 0;
            local_930 = (void *)0x0;
            local_928 = (void *)0x0;
            local_920 = 0;
            plVar16 = *(longlong **)(param_1 + 0x40);
            local_8e8 = local_908;
            if (*(longlong **)(param_1 + 0x48) < plVar16) {
              _invalid_parameter_noinfo();
            }
            puVar1 = *(ulonglong **)(param_1 + 0x28);
            while (0 < (int)local_954) {
              plVar2 = *(longlong **)(param_1 + 0x48);
              if (plVar2 < *(longlong **)(param_1 + 0x40)) {
                _invalid_parameter_noinfo();
              }
              if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0x28))) {
                _invalid_parameter_noinfo();
              }
              if (plVar16 == plVar2) break;
              if (puVar1 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar18 = uVar10;
              }
              else {
                uVar18 = *puVar1;
              }
              if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                _invalid_parameter_noinfo();
              }
              if (*plVar16 == 0) {
                log_InlineLogERROR(&DAT_141707348);
              }
              else {
                if (puVar1 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar18 = uVar10;
                }
                else {
                  uVar18 = *puVar1;
                }
                if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                  _invalid_parameter_noinfo();
                }
                cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1e0))
                                  (*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16,(ulonglong)local_910 & 0xffffffff,local_88d);
                if (cVar6 != '\0') {
                  if (puVar1 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar18 = uVar10;
                  }
                  else {
                    uVar18 = *puVar1;
                  }
                  if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                    _invalid_parameter_noinfo();
                  }
                  cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_3[1],*(undefined4 *)*plVar16);
                  if (cVar6 == '\0') {
                    if (puVar1 == (ulonglong *)0x0) {
                      _invalid_parameter_noinfo();
                      uVar18 = uVar10;
                    }
                    else {
                      uVar18 = *puVar1;
                    }
                    if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                      _invalid_parameter_noinfo();
                    }
                    iVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1c0))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16);
                    if (iVar8 < (int)(iVar9 + local_954)) {
                      local_954 = local_954 + (iVar9 - iVar8);
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      (**(code **)(**(longlong **)(param_1 + 8) + 0x1c8))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16,iVar8,0);
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      lVar15 = *plVar16;
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16,lVar15);
                    }
                    else {
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      (**(code **)(**(longlong **)(param_1 + 8) + 0x1c8))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16,iVar9 + local_954,0);
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      lVar15 = *plVar16;
                      if (puVar1 == (ulonglong *)0x0) {
                        _invalid_parameter_noinfo();
                        uVar18 = uVar10;
                      }
                      else {
                        uVar18 = *puVar1;
                      }
                      if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                        _invalid_parameter_noinfo();
                      }
                      (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),*(undefined4 *)*plVar16,lVar15);
                      local_954 = 0;
                      if (param_4 != '\0') {
                        if (puVar1 == (ulonglong *)0x0) {
                          _invalid_parameter_noinfo();
                          uVar18 = uVar10;
                        }
                        else {
                          uVar18 = *puVar1;
                        }
                        if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                          _invalid_parameter_noinfo();
                        }
                        (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_3[1],*(undefined4 *)*plVar16,(short)param_2[0xc]);
                        bVar3 = true;
                      }
                    }
                    if (puVar1 == (ulonglong *)0x0) {
                      _invalid_parameter_noinfo();
                      uVar18 = uVar10;
                    }
                    else {
                      uVar18 = *puVar1;
                    }
                    if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                      _invalid_parameter_noinfo();
                    }
                    FUN_1416f8ac0((longlong *)local_948,(void *)*plVar16);
                  }
                }
              }
              if (puVar1 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar18 = uVar10;
              }
              else {
                uVar18 = *puVar1;
              }
              if (*(longlong **)(uVar18 + 0x20) <= plVar16) {
                _invalid_parameter_noinfo();
              }
              plVar16 = plVar16 + 2;
            }
            pvVar17 = local_930;
            lVar15 = (longlong)local_928 - (longlong)local_930 >> 0x3f;
            if (((longlong)local_928 - (longlong)local_930) / 0x38 + lVar15 != lVar15) {
              if (local_928 < local_930) {
                _invalid_parameter_noinfo();
              }
              puVar1 = local_948[0];
              FUN_141701f40(&local_458);
              if (param_3[2] == 0x14) {
                uVar19 = *(undefined4 *)(param_1 + 0x20);
              }
              else {
                uVar19 = *param_3;
              }
              if (puVar1 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar18 = uVar10;
              }
              else {
                uVar18 = *puVar1;
              }
              if (*(void **)(uVar18 + 0x20) <= pvVar17) {
                _invalid_parameter_noinfo();
              }
              uVar12 = FUN_141702150(&local_458,uVar19,*(undefined1 *)(param_1 + 0x1c),5,pvVar17,1);
              if ((char)uVar12 == '\0') {
                log_InlineLogERROR(&DAT_141707348);
                FUN_141701f90((undefined8 *)&local_458);
                if (local_930 != (void *)0x0) {
                  operator_delete(local_930);
                }
                local_930 = (void *)0x0;
                local_928 = (void *)0x0;
                local_920 = 0;
                operator_delete(local_948[0]);
                return 0;
              }
              if (puVar1 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar18 = uVar10;
              }
              else {
                uVar18 = *puVar1;
              }
              if (*(void **)(uVar18 + 0x20) <= pvVar17) {
                _invalid_parameter_noinfo();
              }
              while( true ) {
                pvVar4 = local_928;
                pvVar17 = (void *)((longlong)pvVar17 + 0x38);
                if (local_928 < local_930) {
                  _invalid_parameter_noinfo();
                }
                if ((local_948[0] == (ulonglong *)0x0) || (local_948[0] != puVar1)) {
                  _invalid_parameter_noinfo();
                }
                if (pvVar4 == pvVar17) break;
                if (puVar1 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar18 = uVar10;
                }
                else {
                  uVar18 = *puVar1;
                }
                if (*(void **)(uVar18 + 0x20) <= pvVar17) {
                  _invalid_parameter_noinfo();
                }
                uVar12 = FUN_141702290((longlong)&local_458,pvVar17);
                if ((char)uVar12 == '\0') {
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_3[1],&local_458);
                  if ((param_3[2] == 0x14) && (iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_3[1]), iVar8 != 0))
                  {
                    (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar8,&local_458);
                  }
                  if (puVar1 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar18 = uVar10;
                  }
                  else {
                    uVar18 = *puVar1;
                  }
                  if (*(void **)(uVar18 + 0x20) <= pvVar17) {
                    _invalid_parameter_noinfo();
                  }
                  uVar12 = FUN_141702150(&local_458,uVar19,*(undefined1 *)(param_3 + 2),5,pvVar17,1);
                  if ((char)uVar12 == '\0') {
                    log_InlineLogERROR(&DAT_141707348);
                    FUN_141701f90((undefined8 *)&local_458);
                    if (local_930 != (void *)0x0) {
                      operator_delete(local_930);
                    }
                    local_930 = (void *)0x0;
                    local_928 = (void *)0x0;
                    local_920 = 0;
                    operator_delete(local_948[0]);
                    return 0;
                  }
                }
                if (puVar1 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar18 = uVar10;
                }
                else {
                  uVar18 = *puVar1;
                }
                if (*(void **)(uVar18 + 0x20) <= pvVar17) {
                  _invalid_parameter_noinfo();
                }
              }
              (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_3[1],&local_458);
              if ((param_3[2] == 0x14) && (iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_3[1]), iVar8 != 0)) {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar8,&local_458);
              }
              FUN_141701f90((undefined8 *)&local_458);
              param_2 = local_918;
            }
            if (0 < (int)local_954) {
              uVar10 = (ulonglong)local_954;
            }
            (**(code **)(**(longlong **)(param_1 + 8) + 0x1c8))(*(longlong **)(param_1 + 8),*param_2,uVar10,0);
            iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1c0))(*(longlong **)(param_1 + 8),*param_2);
            if (iVar8 < 1) {
              if (local_930 != (void *)0x0) {
                operator_delete(local_930);
              }
              local_930 = (void *)0x0;
              local_928 = (void *)0x0;
              local_920 = 0;
              operator_delete(local_948[0]);
              return 1;
            }
            if (local_930 != (void *)0x0) {
              operator_delete(local_930);
            }
            local_930 = (void *)0x0;
            local_928 = (void *)0x0;
            local_920 = 0;
            operator_delete(local_948[0]);
          }
          lVar15 = 0;
          uVar10 = *(ulonglong *)(param_1 + 0x88);
          if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
            _invalid_parameter_noinfo();
          }
          plVar16 = *(longlong **)(param_1 + 0x58);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar15;
          }
          else {
            lVar13 = *plVar16;
          }
          if ((ulonglong)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar13 + 0x30)) <= uVar10) {
            _invalid_parameter_noinfo();
          }
          if (plVar16 == (longlong *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar16;
          }
          if (*(ulonglong *)(lVar13 + 0x28) <= uVar10) {
            if (plVar16 == (longlong *)0x0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar16;
            }
            uVar10 = uVar10 - *(longlong *)(lVar13 + 0x28);
          }
          if (plVar16 == (longlong *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar16;
          }
          if (**(longlong **)(*(longlong *)(lVar13 + 0x20) + uVar10 * 8) == 0) {
            log_InlineLogERROR(&DAT_141707348);
            return 0;
          }
          uVar10 = *(ulonglong *)(param_1 + 0x88);
          local_908 = (ulonglong *)0x0;
          if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
            _invalid_parameter_noinfo();
          }
          plVar16 = *(longlong **)(param_1 + 0x58);
          local_908 = (ulonglong *)plVar16;
          local_8f0 = uVar10;
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar15;
          }
          else {
            lVar13 = *plVar16;
          }
          if ((ulonglong)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar13 + 0x30)) <= uVar10) {
            _invalid_parameter_noinfo();
          }
          if (plVar16 == (longlong *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar16;
          }
          if (*(ulonglong *)(lVar13 + 0x28) <= uVar10) {
            if (plVar16 == (longlong *)0x0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar16;
            }
            uVar10 = uVar10 - *(longlong *)(lVar13 + 0x28);
            local_8f0 = uVar10;
          }
          if (plVar16 == (longlong *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar16;
          }
          FUN_1416f9250((longlong *)(param_1 + 0x28),*(longlong **)(*(longlong *)(lVar13 + 0x20) + uVar10 * 8));
          cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),*param_2,local_8d8);
          if (cVar6 == '\0') {
            uVar10 = *(ulonglong *)(param_1 + 0x88);
            if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
              _invalid_parameter_noinfo();
            }
            plVar16 = *(longlong **)(param_1 + 0x58);
            if (plVar16 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar13 = lVar15;
            }
            else {
              lVar13 = *plVar16;
            }
            if ((ulonglong)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar13 + 0x30)) <= uVar10) {
              _invalid_parameter_noinfo();
            }
            if (plVar16 == (longlong *)0x0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar16;
            }
            if (*(ulonglong *)(lVar13 + 0x28) <= uVar10) {
              if (plVar16 == (longlong *)0x0) {
                lVar13 = 0;
              }
              else {
                lVar13 = *plVar16;
              }
              uVar10 = uVar10 - *(longlong *)(lVar13 + 0x28);
            }
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar16;
            }
            memcpy((void *)**(undefined8 **)(*(longlong *)(lVar15 + 0x20) + uVar10 * 8),param_2,0x38);
          }
          else {
            uVar10 = *(ulonglong *)(param_1 + 0x88);
            if (uVar10 + *(longlong *)(param_1 + 0x90) < uVar10) {
              _invalid_parameter_noinfo();
            }
            plVar16 = *(longlong **)(param_1 + 0x58);
            if (plVar16 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar13 = lVar15;
            }
            else {
              lVar13 = *plVar16;
            }
            if ((ulonglong)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar13 + 0x30)) <= uVar10) {
              _invalid_parameter_noinfo();
            }
            if (plVar16 == (longlong *)0x0) {
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar16;
            }
            if (*(ulonglong *)(lVar13 + 0x28) <= uVar10) {
              if (plVar16 == (longlong *)0x0) {
                lVar13 = 0;
              }
              else {
                lVar13 = *plVar16;
              }
              uVar10 = uVar10 - *(longlong *)(lVar13 + 0x28);
            }
            if (plVar16 != (longlong *)0x0) {
              lVar15 = *plVar16;
            }
            memcpy((void *)**(undefined8 **)(*(longlong *)(lVar15 + 0x20) + uVar10 * 8),local_8d8,0x38);
            if ((param_4 != '\0') && (!bVar3)) {
              (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_3[1],local_8d8[0],(short)param_2[0xc]);
            }
          }
          FUN_1416f6af0(param_1 + 0x58);
          FUN_141701f40(local_868);
          if (param_3[2] == 0x14) {
            uVar19 = *(undefined4 *)(param_1 + 0x20);
          }
          else {
            uVar19 = *param_3;
          }
          uVar12 = FUN_141702150(local_868,uVar19,*(undefined1 *)(param_1 + 0x1c),1,local_8d8,1);
          if ((((char)uVar12 != '\0') &&
              ((**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),param_3[1],local_868), param_3[2] == 0x14)) &&
             (iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_3[1]), iVar8 != 0)) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),iVar8,local_868);
          }
          cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2[1]);
          if (((cVar6 != '\0') &&
              ((**(code **)(**(longlong **)(param_1 + 8) + 0x200))(*(longlong **)(param_1 + 8),param_3[1],*param_2,*param_3), param_3[2] == 0x14)) &&
             (iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),param_3[1]), iVar8 != 0)) {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x1f8))(*(longlong **)(param_1 + 8),iVar8,*param_2);
          }
          FUN_141701f90((undefined8 *)local_868);
        }
        uVar7 = 1;
      }
      else {
        log_InlineLogERROR("Storage repeat item found in CStorage::CheckIn(%u)");
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}




exception * FUN_1416fa640(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1416fa6a0(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416fa6dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416fa6f0(exception *param_1,uint param_2)

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




bool FUN_1416fa7a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416fa7e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416fa930(longlong param_1,longlong *param_2)

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




void FUN_1416faa80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x51) == '\0') {
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




bool FUN_1416fab00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1416fab90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fabb2;
  }
  lVar2 = *plVar1;
LAB_1416fabb2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416fabd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fabf2;
  }
  lVar2 = *plVar1;
LAB_1416fabf2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1416fac10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1416facc0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416face4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1416fad80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fada2;
  }
  lVar2 = *plVar1;
LAB_1416fada2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416fadc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x51) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x51) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x51);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x51);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x51);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x51);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416fade4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416fae50(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
}




longlong FUN_1416faec0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_1416faf70(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x51) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x51);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x51);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x51);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x51);
    }
    if (*(char *)(param_1[1] + 0x51) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x51) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416fafa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416fb050(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416fb082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1416fb0f0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416fb120;
  }
  else {
LAB_1416fb120:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416fb148;
  }
  _invalid_parameter_noinfo();
LAB_1416fb148:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1416fb190(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_1416fb220(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_1416fb2e0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1416fb370(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_1 * 0x58);
  return;
}




void * FUN_1416fb430(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416fb4d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416fb520(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416fb560(void *param_1,longlong param_2,longlong param_3)

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




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416fb5f0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulonglong extraout_RAX;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auStack_898 [32];
  undefined4 local_878;
  uint local_868;
  uint local_864;
  int local_860;
  longlong *local_858;
  longlong *local_850;
  undefined8 *local_848;
  undefined8 local_840;
  char local_838;
  undefined1 local_837 [1022];
  undefined1 local_439;
  char local_438;
  undefined1 local_437 [1022];
  undefined1 local_39;
  ulonglong local_38;
  
  local_840 = 0xfffffffffffffffe;
  local_38 = DAT_1417124c8 ^ (ulonglong)auStack_898;
  local_860 = param_2;
  local_848 = param_1;
  if (param_2 == 0) {
    local_878 = 0x123;
    log_InlineLogERROR(&DAT_141707348);
    uVar6 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_838 = '\0';
    memset(local_837,0,0x3ff);
    _snprintf(&local_838,0x400,PTR_s_SELECT___FROM_cq_item_WHERE_play_1417121f0);
    local_439 = 0;
    plVar5 = (longlong *)InstanceGet();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_838,2);
    if (plVar5 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      local_858 = plVar5;
      (**(code **)(*plVar5 + 0x40))(plVar5);
      local_868 = 0;
      while( true ) {
        uVar1 = local_868;
        uVar11 = (ulonglong)local_868;
        uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5);
        if (uVar6 <= uVar11) break;
        (**(code **)(*plVar5 + 0x30))(plVar5,uVar11);
        plVar7 = (longlong *)(**(code **)(*plVar5 + 0x38))(plVar5);
        if (plVar7 == (longlong *)0x0) {
          local_878 = 0x137;
          log_InlineLogERROR(&DAT_141707348);
        }
        else {
          (**(code **)(*(longlong *)*param_1 + 0xb0))((longlong *)*param_1,param_2,0,plVar7);
          plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,7);
          iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
          if (iVar4 < 0xc9) {
LAB_1416fb798:
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,7);
            iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
            if (iVar4 != 0xd0) goto LAB_1416fb954;
          }
          else {
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,7);
            iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
            if (0xcb < iVar4) goto LAB_1416fb798;
          }
          plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,7);
          iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
          if (iVar4 != 0xca) {
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,1);
            lVar9 = *(longlong *)*param_1;
            (**(code **)(*plVar8 + 0x40))(plVar8);
            cVar3 = (**(code **)(lVar9 + 0x88))(*param_1);
            if (cVar3 != '\0') {
              local_438 = '\0';
              memset(local_437,0,0x3ff);
              plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,0);
              (**(code **)(*plVar7 + 0x48))(plVar7);
              _snprintf(&local_438,0x400,PTR_s_SELECT___FROM_cq_itemstatus_WHER_1417122e0);
              local_39 = 0;
              plVar7 = (longlong *)InstanceGet();
              plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&local_438);
              local_850 = plVar7;
              if ((plVar7 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar7 + 0x40))(plVar7), lVar9 != 0)) {
                local_864 = 0;
                while( true ) {
                  uVar2 = local_864;
                  uVar11 = (ulonglong)local_864;
                  uVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
                  if (uVar6 <= uVar11) break;
                  (**(code **)(*plVar7 + 0x30))(plVar7,uVar11);
                  lVar9 = (**(code **)(*plVar7 + 0x38))(plVar7);
                  if (lVar9 == 0) {
                    local_878 = 0x15c;
                    log_InlineLogERROR(&DAT_141707348);
                  }
                  else {
                    (**(code **)(*(longlong *)*param_1 + 0xb0))((longlong *)*param_1,param_2,0x1c,lVar9);
                  }
                  local_864 = uVar2 + 1;
                }
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)*plVar7)(plVar7);
                local_850 = (longlong *)0x0;
              }
            }
          }
        }
LAB_1416fb954:
        local_868 = uVar1 + 1;
      }
      uVar10 = (**(code **)*plVar5)(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
  }
  return uVar6;
}




bool FUN_1416fb9b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1416fba10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fba32;
  }
  lVar2 = *plVar1;
LAB_1416fba32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416fba50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fba72;
  }
  lVar2 = *plVar1;
LAB_1416fba72:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1416fba90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416fbad0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fbae0(longlong param_1,longlong param_2)

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




void FUN_1416fbb40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fbb70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x51) == '\0') {
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




void FUN_1416fbbd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1416fbc00(longlong *param_1)

{
  FUN_1416facc0(param_1);
  return param_1;
}




longlong FUN_1416fbc20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fbc42;
  }
  lVar2 = *plVar1;
LAB_1416fbc42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416fbc60(longlong *param_1)

{
  FUN_1416fadc0(param_1);
  return param_1;
}




void FUN_1416fbc80(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 4);
  return;
}




longlong FUN_1416fbd60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fbd82;
  }
  lVar2 = *plVar1;
LAB_1416fbd82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416fbda0(longlong *param_1)

{
  FUN_1416faf70(param_1);
  return param_1;
}




longlong * FUN_1416fbe20(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416facc0(param_1);
  return param_2;
}




longlong * FUN_1416fbe50(longlong *param_1)

{
  FUN_1416fb050(param_1);
  return param_1;
}




longlong * FUN_1416fbe70(longlong *param_1)

{
  FUN_1416faf70(param_1);
  return param_1;
}




longlong * FUN_1416fbe90(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416fadc0(param_1);
  return param_2;
}




longlong * FUN_1416fbec0(longlong *param_1,longlong param_2)

{
  FUN_1416fb0f0(param_1,param_2);
  return param_1;
}




void FUN_1416fbee0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1416fbf60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141711348);
  }
  operator_new(param_2 * 0x58);
  return;
}




undefined8 * FUN_1416fbfe0(undefined8 *param_1)

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




undefined8 * FUN_1416fc020(undefined8 *param_1)

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




void * FUN_1416fc080(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416fc0c0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416fc100(void *param_1,longlong param_2,void *param_3)

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




longlong * FUN_1416fc180(longlong *param_1)

{
  FUN_1416facc0(param_1);
  return param_1;
}




longlong * FUN_1416fc1a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416facc0(param_1);
  return param_2;
}




longlong FUN_1416fc1d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fc1f2;
  }
  lVar2 = *plVar1;
LAB_1416fc1f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416fc210(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fc230(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fc250(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fc270(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416fc270(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong FUN_1416fc2c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fc2e2;
  }
  lVar2 = *plVar1;
LAB_1416fc2e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




undefined8 FUN_1416fc300(longlong param_1,ulonglong param_2)

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
      FUN_1416fae50();
    }
    lVar1 = FUN_1416fbc80(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_1416fc370(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416fc3a0(undefined8 *param_1)

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




longlong * FUN_1416fc3e0(longlong *param_1)

{
  FUN_1416fb050(param_1);
  return param_1;
}




undefined8 * FUN_1416fc400(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416fc450(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416fc490(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416fc4fa;
  }
  _invalid_parameter_noinfo();
LAB_1416fc4fa:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416fc530(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416fc590(void)

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




undefined8 * FUN_1416fc5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_1416fc670(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  return;
}




undefined8 * FUN_1416fc6d0(undefined8 *param_1)

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




undefined8 * FUN_1416fc720(undefined8 *param_1)

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




void * FUN_1416fc770(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416fc7b0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_1416fc820(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416fc860(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416fc8e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416fc270(param_1,(longlong *)plVar2[2]);
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




longlong FUN_1416fc960(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416fc982;
  }
  lVar2 = *plVar1;
LAB_1416fc982:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416fc9a0(undefined8 *param_1)

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




void FUN_1416fc9e0(longlong param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  operator_delete(*(void **)(param_1 + 8));
  return;
}




void FUN_1416fca30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fca50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416fca70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416fcab0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416fcaf0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416fcb40(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416fcb90(undefined8 *param_1)

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




undefined8 * FUN_1416fcbe0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416fcc40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416fc590();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416fcc80(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
  }
  plVar5 = FUN_1416fc5f0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_1416fcfe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416fc670();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416fd020(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416fd080(undefined8 *param_1)

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




undefined8 * FUN_1416fd0d0(undefined8 *param_1)

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




void * FUN_1416fd120(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_1416fd160(longlong param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




void * FUN_1416fd1b0(longlong param_1,longlong param_2,void *param_3)

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




undefined1 FUN_1416fd220(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141707348);
    return 0;
  }
  FUN_1416fc8e0((longlong)(param_1 + 1));
  return 1;
}




undefined8 * FUN_1416fd2d0(undefined8 *param_1)

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




undefined8 * FUN_1416fd330(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416fd380(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1416fd3d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fd3f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416fd410(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416fd460(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_18 [2];
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *param_3 < *(uint *)(puVar3 + 3);
      if (bVar4) {
        puVar2 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = (undefined8 *)puVar3[2];
      }
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar3 = FUN_1416fcc80(param_1,local_18,bVar4,puVar3,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416fd4d0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




undefined8 * FUN_1416fd5b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1416fd650(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_1416fd740(undefined8 *param_1)

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




undefined8 * FUN_1416fd790(undefined8 *param_1)

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




void * FUN_1416fd7e0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_1416fd880(void *param_1,uint param_2)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  operator_delete(*(void **)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416fd900(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_18 [2];
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *param_3 < *(uint *)(puVar3 + 3);
      if (bVar4) {
        puVar2 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = (undefined8 *)puVar3[2];
      }
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar3 = FUN_1416fcc80(param_1,local_18,bVar4,puVar3,(undefined8 *)param_3);
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416fd970(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1417113a8);
  }
  FUN_1416facc0(param_3);
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
        goto LAB_1416fdb5c;
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
LAB_1416fdb5c:
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
            FUN_1416fbae0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416fa930((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416fbae0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416fa930((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416fbae0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416fa930((longlong)param_1,plVar7);
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




exception * FUN_1416fdd30(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_1416fdd90(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1416fd4d0(param_1,param_2,param_3);
  return param_2;
}




longlong * FUN_1416fddb0(longlong *param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar2 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar2[1] + 0x51) == '\0') {
    puVar3 = (undefined8 *)puVar2[1];
    do {
      if ((*(uint *)(puVar3 + 3) < *param_3) || ((*(uint *)(puVar3 + 3) <= *param_3 && (*(uint *)((longlong)puVar3 + 0x1c) < param_3[1])))) {
        puVar4 = (undefined8 *)puVar3[2];
      }
      else {
        puVar4 = (undefined8 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((longlong)puVar4 + 0x51) == '\0');
  }
  puVar3 = (undefined8 *)param_1[6];
  local_20 = puVar2;
  local_28 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if (((puVar2 == puVar3) || (*param_3 < *(uint *)(puVar2 + 3))) || ((*param_3 <= *(uint *)(puVar2 + 3) && (param_3[1] < *(uint *)((longlong)puVar2 + 0x1c)))))
  {
    plVar1 = &local_18;
    local_10 = param_1[6];
    local_18 = *param_1;
  }
  else {
    plVar1 = &local_28;
  }
  *param_2 = *plVar1;
  param_2[1] = plVar1[1];
  return param_2;
}




undefined8 * FUN_1416fdea0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1416fae50();
    }
    lVar2 = FUN_1416fbc80(param_1 + 2,uVar4);
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
    pvVar3 = FUN_1416fd7e0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




void FUN_1416fdfd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fdff0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416fe010(longlong *param_1)

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




undefined8 * FUN_1416fe100(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_1416fdea0(param_1 + 1,param_3);
  return param_1;
}




longlong * FUN_1416fe140(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416fc8e0((longlong)param_1);
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
    FUN_1416fd970(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416fe2f0(undefined8 *param_1)

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




undefined8 * FUN_1416fe340(undefined8 *param_1)

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




void FUN_1416fe390(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_1416fae50();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1416fbc80(param_1 + 0x10,uVar8);
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
      FUN_1416fd120(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_1416fd120(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416fc820(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_1416fe630(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1416fdea0(param_1 + 1,param_2 + 1);
  return param_1;
}




void FUN_1416fe670(longlong param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




ulonglong FUN_1416fe6c0(longlong param_1,uint param_2,int param_3,uint param_4)

{
  longlong *extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  longlong *extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  uint local_res10 [2];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_res10[0] = param_2;
  if (((param_3 == 0) || (param_2 == 0)) || (param_4 == 0)) {
    log_InlineLogERROR("CStorageMgr::DelLostItemFromTrunk idOwner or idPlayer is 0, idOwner:%u, idPlayer:%u, idItem:%u.");
    uVar1 = extraout_RAX_02 & 0xffffffffffffff00;
  }
  else {
    FUN_1416fd4d0((undefined8 *)(param_1 + 8),&local_48,local_res10);
    plVar2 = local_40;
LAB_1416fe743:
    if ((local_48 == (longlong *)0x0) || (local_48 != local_38)) {
      _invalid_parameter_noinfo();
      local_40 = extraout_RAX;
    }
    if (plVar2 == local_30) {
      return (ulonglong)local_40 & 0xffffffffffffff00;
    }
    if (local_48 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_48;
    }
    if (plVar2 == *(longlong **)(lVar4 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = plVar2[4];
    if (lVar4 == 0) {
      log_InlineLogERROR(&DAT_141707348);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    if ((*(int *)(lVar4 + 0x1c) != 0x14) || (*(int *)(lVar4 + 0x14) != param_3)) {
      if (local_48 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        plVar3 = plVar2;
        local_40 = (longlong *)plVar2[2];
        if (*(char *)(plVar2[2] + 0x29) == '\0') {
          do {
            plVar2 = local_40;
            local_40 = (longlong *)*plVar2;
          } while (*(char *)((longlong)local_40 + 0x29) == '\0');
        }
        else {
          do {
            local_40 = (longlong *)plVar3[1];
            plVar2 = local_40;
            if (*(char *)((longlong)local_40 + 0x29) != '\0') break;
            bVar5 = plVar3 == (longlong *)local_40[2];
            plVar3 = local_40;
          } while (bVar5);
        }
      }
      else {
        _invalid_parameter_noinfo();
        local_40 = extraout_RAX_01;
      }
      goto LAB_1416fe743;
    }
    uVar1 = FUN_1416f83e0(lVar4,(ulonglong)param_2,param_4);
  }
  return uVar1;
}




void FUN_1416fe880(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  longlong *plStack_d0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60 [5];
  
  local_78 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  FUN_1416fd4d0((undefined8 *)(param_1 + 8),&local_98,local_res10);
  plStack_d0 = local_90;
  uVar8 = 0;
  iVar10 = 0;
  local_res18 = 0;
  iVar9 = 0;
  local_res20 = 0;
  plVar6 = local_90;
  while( true ) {
    plVar4 = plStack_d0;
    if ((local_98 == (longlong *)0x0) || (local_98 != local_88)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == local_80) break;
    uVar8 = uVar8 + 1;
    if (local_98 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *local_98;
    }
    if (plVar6 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = (undefined8 *)plVar6[4];
    if (100 < uVar8) goto LAB_1416feb66;
    if (puVar2 == (undefined8 *)0x0) {
      iVar10 = iVar10 + 1;
      local_res18 = iVar10;
      if (local_98 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (plStack_d0 = plVar6, cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar6 = plVar5, plStack_d0 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x29);
            plVar5 = (longlong *)plVar6[1];
            plVar3 = plVar6;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      local_b8 = local_98;
      plStack_b0 = plVar4;
      FUN_1416fd970((undefined8 *)(param_1 + 8),local_70,(longlong *)&local_b8);
    }
    else if (*(int *)((longlong)puVar2 + 0x1c) == 0x14) {
      iVar9 = iVar9 + 1;
      local_res20 = iVar9;
      if (local_98 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar4 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar6 = plVar4;
          plVar4 = (longlong *)*plVar4;
          while (plStack_d0 = plVar6, cVar1 == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x29);
            plVar6 = plVar4;
            plVar4 = (longlong *)*plVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar3 = (longlong *)plVar6[1];
          plVar4 = plVar6;
          while ((plVar6 = plVar3, plStack_d0 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x29);
            plVar3 = (longlong *)plVar6[1];
            plVar4 = plVar6;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    else {
      if (local_98 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (plStack_d0 = plVar6, cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar6 = plVar5, plStack_d0 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
            cVar1 = *(char *)(plVar6[1] + 0x29);
            plVar5 = (longlong *)plVar6[1];
            plVar3 = plVar6;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      local_a8 = local_98;
      plStack_a0 = plVar4;
      FUN_1416fd970((undefined8 *)(param_1 + 8),local_60,(longlong *)&local_a8);
      FUN_1416f6a20((longlong)puVar2);
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (uVar8 < 0x65) {
    return;
  }
LAB_1416feb66:
  log_InlineLogERROR("DestroyStorage, uLoopCount=%lu more than 100 ,userid[%u] ,nStroageTrunk=%d, nNullStorage=%d");
  return;
}




undefined8 FUN_1416febb0(longlong param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *extraout_RAX;
  ulonglong uVar4;
  longlong *extraout_RAX_00;
  longlong *plVar5;
  longlong lVar6;
  uint local_res10 [2];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_res10[0] = param_2;
  FUN_1416fd4d0((undefined8 *)(param_1 + 8),&local_38,local_res10);
  plVar5 = local_30;
  while( true ) {
    if ((local_38 == (longlong *)0x0) || (local_38 != local_28)) {
      _invalid_parameter_noinfo();
      local_30 = extraout_RAX;
    }
    if (plVar5 == local_20) {
      return (ulonglong)local_30 & 0xffffffffffffff00;
    }
    if (local_38 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *local_38;
    }
    if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar6 = plVar5[4];
    if ((lVar6 != 0) && (((param_4 == 0 || (*(int *)(lVar6 + 0x1c) == param_4)) && (uVar4 = FUN_1416f6180(lVar6,param_3), (char)uVar4 != '\0')))) break;
    if (local_38 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        local_30 = (longlong *)*plVar2;
        while (plVar5 = plVar2, cVar1 == '\0') {
          cVar1 = *(char *)(*local_30 + 0x29);
          plVar2 = local_30;
          local_30 = (longlong *)*local_30;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        while ((local_30 = plVar3, plVar5 = local_30, cVar1 == '\0' && (plVar2 == (longlong *)local_30[2]))) {
          cVar1 = *(char *)(local_30[1] + 0x29);
          plVar3 = (longlong *)local_30[1];
          plVar2 = local_30;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      local_30 = extraout_RAX_00;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}




ulonglong FUN_1416fed00(longlong param_1,uint param_2,int param_3,int param_4,void *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *extraout_RAX;
  ulonglong uVar4;
  longlong *extraout_RAX_00;
  longlong *plVar5;
  longlong lVar6;
  uint local_res10 [2];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_res10[0] = param_2;
  FUN_1416fd4d0((undefined8 *)(param_1 + 8),&local_48,local_res10);
  plVar5 = local_40;
  while( true ) {
    if ((local_48 == (longlong *)0x0) || (local_48 != local_38)) {
      _invalid_parameter_noinfo();
      local_40 = extraout_RAX;
    }
    if (plVar5 == local_30) {
      return (ulonglong)local_40 & 0xffffffffffffff00;
    }
    if (local_48 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *local_48;
    }
    if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar6 = plVar5[4];
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x14) == param_3)) && (uVar4 = FUN_1416f6180(lVar6,param_4), (char)uVar4 != '\0')) break;
    if (local_48 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        local_40 = (longlong *)*plVar2;
        while (plVar5 = plVar2, cVar1 == '\0') {
          cVar1 = *(char *)(*local_40 + 0x29);
          plVar2 = local_40;
          local_40 = (longlong *)*local_40;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
        while ((local_40 = plVar3, plVar5 = local_40, cVar1 == '\0' && (plVar2 == (longlong *)local_40[2]))) {
          cVar1 = *(char *)(local_40[1] + 0x29);
          plVar3 = (longlong *)local_40[1];
          plVar2 = local_40;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      local_40 = extraout_RAX_00;
    }
  }
  uVar4 = FUN_1416f63c0(lVar6,param_4,param_5);
  return uVar4;
}




longlong * FUN_1416fee60(longlong *param_1,longlong *param_2)

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
    uVar2 = param_2[4] - (longlong)pvVar3 >> 2;
    if (uVar2 == 0) {
      FUN_1416fe010(param_1);
      return param_1;
    }
    _Dst = (void *)param_1[3];
    uVar7 = param_1[4] - (longlong)_Dst >> 2;
    if (uVar2 <= uVar7) {
      lVar6 = param_2[4] - (longlong)pvVar3 >> 2;
      if (0 < lVar6) {
        _DstSize = lVar6 << 2;
        memmove_s(_Dst,_DstSize,pvVar3,_DstSize);
      }
      param_1[4] = param_1[3] + (param_2[4] - param_2[3] >> 2) * 4;
      return param_1;
    }
    if (_Dst == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1[5] - (longlong)_Dst >> 2;
    }
    if (uVar2 <= uVar5) {
      pvVar1 = (void *)((longlong)pvVar3 + uVar7 * 4);
      FUN_1416fc770(pvVar3,(longlong)pvVar1,_Dst);
      pvVar3 = FUN_1416fc7b0(param_1,pvVar1,param_2[4],(void *)param_1[4]);
      param_1[4] = (longlong)pvVar3;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar4 = FUN_1416fc300((longlong)param_1,param_2[4] - param_2[3] >> 2);
    if ((char)uVar4 != '\0') {
      pvVar3 = FUN_1416fc7b0(param_1,(void *)param_2[3],param_2[4],(void *)param_1[3]);
      param_1[4] = (longlong)pvVar3;
    }
  }
  return param_1;
}




undefined8 * FUN_1416fefa0(undefined8 *param_1)

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
  lVar2 = FUN_1416fc590();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416ff020(longlong *param_1)

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
  FUN_1416fe140(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416ff090(undefined8 *param_1)

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
  lVar2 = FUN_1416fc670();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416ff110(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_2 + 0x38));
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  operator_delete(*(void **)(param_2 + 0x20));
  return;
}




longlong * FUN_1416ff160(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_1416fe390((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416ff254;
  }
  _invalid_parameter_noinfo();
LAB_1416ff254:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416ff290(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_1416ff290(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    if ((void *)param_2[7] != (void *)0x0) {
      operator_delete((void *)param_2[7]);
    }
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    operator_delete((void *)param_2[4]);
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x51);
  }
  return;
}




undefined8 * FUN_1416ff340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  FUN_1416fdea0(param_1 + 4,param_5 + 1);
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void FUN_1416ff3a0(longlong *param_1)

{
  FUN_1416ff020(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416ff3d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x51) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1417113a8);
  }
  FUN_1416fadc0(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x51) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
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
        plVar3 = plVar2 + 10;
        plVar7 = plVar7 + 10;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_1416ff5bc;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x51);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x51);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x51);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x51);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_1416ff5bc:
  if ((char)plVar2[10] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[10] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_1416fbb70((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_1416faa80((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_1416fbb70((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_1416faa80((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_1416fbb70((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_1416faa80((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 10) = 1;
  }
  if ((void *)plVar2[7] != (void *)0x0) {
    operator_delete((void *)plVar2[7]);
  }
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  operator_delete((void *)plVar2[4]);
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




void FUN_1416ff7c0(longlong *param_1,undefined4 *param_2)

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
  FUN_1416ff160(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416ff870(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416ff290(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_1416ff8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    FUN_1416fdea0(puVar1 + 4,param_5 + 1);
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_1416ff950(longlong *param_1)

{
  FUN_1416ff020(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416ff980(undefined8 *param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  bool bVar17;
  uint local_res18 [2];
  int local_res20;
  longlong *local_588;
  longlong *plStack_580;
  longlong *local_578 [3];
  int *local_560;
  int *local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 *local_540;
  int local_538;
  uint local_534;
  int local_530;
  undefined4 local_52c;
  undefined8 *local_528 [3];
  undefined4 *local_510;
  undefined4 *local_508;
  undefined8 local_500;
  longlong *local_4f8;
  longlong *local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  longlong *local_4d8;
  uint local_4b8 [2];
  undefined8 *local_4b0;
  longlong *local_4a8;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_480;
  longlong *local_478;
  undefined8 *local_468;
  longlong *local_458;
  longlong *plStack_450;
  CMsg local_448 [1040];
  
  local_480 = 0xfffffffffffffffe;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR("CStorageMgr::QueryStorage idOwner or idPlayer is 0, idOwner:%u, idPlayer:%u, type:%d.");
    return (undefined8 *)0x0;
  }
  FUN_1416fd4d0(param_1 + 1,&local_4f0,local_res18);
  plVar14 = local_4f0;
  local_588 = local_4f0;
  plStack_580 = local_4e8;
  plVar12 = (longlong *)0x0;
  plVar10 = local_4e8;
  do {
    while( true ) {
      while( true ) {
        if ((plVar14 == (longlong *)0x0) || (plVar14 != local_4e0)) {
          _invalid_parameter_noinfo();
        }
        iVar7 = local_res20;
        uVar2 = local_res18[0];
        if (plVar10 == local_4d8) {
          local_534 = local_res18[0];
          local_530 = local_res20;
          local_52c = param_5;
          local_538 = param_2;
          puVar8 = FUN_1416f8ff0(&local_538,(longlong *)*param_1);
          local_540 = puVar8;
          if (puVar8 == (undefined8 *)0x0) {
            log_InlineLogERROR(&DAT_141707348);
            return (undefined8 *)0x0;
          }
          local_588 = operator_new(8);
          uVar16 = local_res18[0];
          local_578[0] = plVar12;
          if (local_588 != (longlong *)0x0) {
            *local_588 = (longlong)local_578;
            local_578[0] = local_588;
          }
          local_560 = (int *)0x0;
          local_558 = (int *)0x0;
          local_550 = 0;
          if (iVar7 == 0x14) {
            local_548 = (longlong *)CONCAT44(param_2,uVar2);
            FUN_1416fddb0(param_1 + 9,(longlong *)&local_588,(uint *)&local_548);
            plVar14 = local_588;
            plVar10 = (longlong *)param_1[0xf];
            local_4a8 = (longlong *)param_1[9];
            if ((local_4a8 == (longlong *)0x0) || (local_4a8 != local_588)) {
              _invalid_parameter_noinfo();
            }
            plVar11 = plStack_580;
            uVar16 = local_res18[0];
            if (plVar10 != plStack_580) {
              if (plVar14 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar14 = plVar12;
              }
              else {
                plVar14 = (longlong *)*plVar14;
              }
              if (plVar11 == (longlong *)plVar14[6]) {
                _invalid_parameter_noinfo();
              }
              FUN_1416fdea0(local_528,plVar11 + 4);
              puVar15 = local_510;
              local_468 = (undefined8 *)0x0;
              if (local_508 < local_510) {
                _invalid_parameter_noinfo();
              }
              puVar8 = local_528[0];
              local_468 = local_528[0];
              while( true ) {
                puVar4 = local_508;
                local_490 = 0;
                if (local_508 < local_510) {
                  _invalid_parameter_noinfo();
                }
                if ((puVar8 == (undefined8 *)0x0) || (puVar8 != local_528[0])) {
                  _invalid_parameter_noinfo();
                }
                if (puVar15 == puVar4) break;
                if (puVar8 == (undefined8 *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar10 = plVar12;
                }
                else {
                  plVar10 = (longlong *)*puVar8;
                }
                if ((undefined4 *)plVar10[4] <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                uVar1 = *puVar15;
                (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,uVar1);
                iVar7 = (**(code **)(*(longlong *)*param_1 + 0x180))((longlong *)*param_1,uVar1);
                if (iVar7 == 3) {
                  cVar6 = (**(code **)(*(longlong *)*param_1 + 0x1a0))((longlong *)*param_1,uVar1);
                  if (cVar6 != '\0') {
                    (**(code **)(*(longlong *)*param_1 + 0x198))((longlong *)*param_1,local_res18[0],uVar1);
                  }
                  (**(code **)(*(longlong *)*param_1 + 400))((longlong *)*param_1,local_res18[0],uVar1,0);
                  (**(code **)(*(longlong *)*param_1 + 0x188))((longlong *)*param_1,uVar1);
                  FUN_141701f40(local_448);
                  uVar9 = FUN_141702150(local_448,param_5,(undefined1)local_res20,4,&local_4f0,1);
                  if ((char)uVar9 == '\0') {
                    log_InlineLogERROR(&DAT_141707348);
                    FUN_141701f90((undefined8 *)local_448);
                  }
                  else {
                    (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,local_res18[0],local_448);
                    FUN_141701f90((undefined8 *)local_448);
                  }
                }
                else {
                  FUN_1416f9320((longlong)local_540,(int *)&local_4f0,(undefined4 *)0x0,'\0');
                }
                if (puVar8 == (undefined8 *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar10 = plVar12;
                }
                else {
                  plVar10 = (longlong *)*puVar8;
                }
                if ((undefined4 *)plVar10[4] <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                puVar15 = puVar15 + 1;
              }
              local_458 = local_588;
              plStack_450 = plStack_580;
              FUN_1416ff3d0(param_1 + 9,&local_4f0,(longlong *)&local_458);
              if (local_510 != (undefined4 *)0x0) {
                operator_delete(local_510);
              }
              local_510 = (undefined4 *)0x0;
              local_508 = (undefined4 *)0x0;
              local_500 = 0;
              operator_delete(local_528[0]);
              uVar16 = local_res18[0];
            }
          }
          else {
            local_548 = local_588;
            if (((iVar7 == 0x1e) || (iVar7 == 10)) || (iVar7 == 0x28)) {
              if (iVar7 == 0x1e) {
                uVar9 = 0xcb;
              }
              else {
                uVar9 = 0xd0;
                if (iVar7 == 10) {
                  uVar9 = 0xc9;
                }
              }
              cVar6 = (**(code **)(*(longlong *)*param_1 + 0x158))
                                ((longlong *)*param_1,param_2,local_res18[0],uVar9,*(undefined2 *)((longlong)puVar8 + 0x24),local_578);
              piVar13 = local_560;
              if (cVar6 != '\0') {
                local_478 = (longlong *)0x0;
                if (local_558 < local_560) {
                  _invalid_parameter_noinfo();
                }
                plVar10 = local_578[0];
                local_478 = local_578[0];
                while( true ) {
                  piVar3 = local_558;
                  local_4f0 = (longlong *)0x0;
                  if (local_558 < local_560) {
                    _invalid_parameter_noinfo();
                  }
                  local_4f0 = local_578[0];
                  if ((plVar10 == (longlong *)0x0) || (plVar10 != local_578[0])) {
                    _invalid_parameter_noinfo();
                  }
                  if (piVar13 == piVar3) break;
                  if (plVar10 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    plVar14 = plVar12;
                  }
                  else {
                    plVar14 = (longlong *)*plVar10;
                  }
                  if ((int *)plVar14[4] <= piVar13) {
                    _invalid_parameter_noinfo();
                  }
                  iVar7 = (**(code **)(*(longlong *)*param_1 + 0x180))((longlong *)*param_1,*piVar13);
                  if (iVar7 == 3) {
                    if (plVar10 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      plVar14 = plVar12;
                    }
                    else {
                      plVar14 = (longlong *)*plVar10;
                    }
                    if ((int *)plVar14[4] <= piVar13) {
                      _invalid_parameter_noinfo();
                    }
                    cVar6 = (**(code **)(*(longlong *)*param_1 + 0x1a0))((longlong *)*param_1,*piVar13);
                    if (cVar6 != '\0') {
                      if (plVar10 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar14 = plVar12;
                      }
                      else {
                        plVar14 = (longlong *)*plVar10;
                      }
                      if ((int *)plVar14[4] <= piVar13) {
                        _invalid_parameter_noinfo();
                      }
                      (**(code **)(*(longlong *)*param_1 + 0x198))((longlong *)*param_1,uVar16,*piVar13);
                    }
                    FUN_141701f40(local_448);
                    if (plVar10 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      plVar14 = plVar12;
                    }
                    else {
                      plVar14 = (longlong *)*plVar10;
                    }
                    if ((int *)plVar14[4] <= piVar13) {
                      _invalid_parameter_noinfo();
                    }
                    uVar9 = FUN_141702150(local_448,param_2,(undefined1)local_res20,4,piVar13,1);
                    if ((char)uVar9 == '\0') {
                      log_InlineLogERROR(&DAT_141707348);
                      local_498 = 0;
                      FUN_141701f90((undefined8 *)local_448);
                      if (local_560 != (int *)0x0) {
                        operator_delete(local_560);
                      }
                      local_560 = (int *)0x0;
                      local_558 = (int *)0x0;
                      local_550 = 0;
                      operator_delete(local_578[0]);
                      return (undefined8 *)0x0;
                    }
                    (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,uVar16,local_448);
                    if (plVar10 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      plVar14 = plVar12;
                    }
                    else {
                      plVar14 = (longlong *)*plVar10;
                    }
                    if ((int *)plVar14[4] <= piVar13) {
                      _invalid_parameter_noinfo();
                    }
                    (**(code **)(*(longlong *)*param_1 + 400))((longlong *)*param_1,uVar16);
                    if (plVar10 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      plVar14 = plVar12;
                    }
                    else {
                      plVar14 = (longlong *)*plVar10;
                    }
                    if ((int *)plVar14[4] <= piVar13) {
                      _invalid_parameter_noinfo();
                    }
                    (**(code **)(*(longlong *)*param_1 + 0x188))((longlong *)*param_1,*piVar13);
                    FUN_141701f90((undefined8 *)local_448);
                  }
                  else {
                    if (plVar10 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      plVar14 = plVar12;
                    }
                    else {
                      plVar14 = (longlong *)*plVar10;
                    }
                    if ((int *)plVar14[4] <= piVar13) {
                      _invalid_parameter_noinfo();
                    }
                    FUN_1416f9320((longlong)local_540,piVar13,(undefined4 *)0x0,'\0');
                  }
                  if (plVar10 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    plVar14 = plVar12;
                  }
                  else {
                    plVar14 = (longlong *)*plVar10;
                  }
                  if ((int *)plVar14[4] <= piVar13) {
                    _invalid_parameter_noinfo();
                  }
                  piVar13 = piVar13 + 0xe;
                }
              }
            }
          }
          puVar8 = local_540;
          local_4b0 = local_540;
          local_4b8[0] = uVar16;
          FUN_1416fd900(param_1 + 1,&local_4f0,local_4b8);
          if (local_560 != (int *)0x0) {
            operator_delete(local_560);
          }
          local_560 = (int *)0x0;
          local_558 = (int *)0x0;
          local_550 = 0;
          operator_delete(local_578[0]);
          return puVar8;
        }
        if (plVar14 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar11 = plVar12;
        }
        else {
          plVar11 = (longlong *)*plVar14;
        }
        if (plVar10 == (longlong *)plVar11[6]) {
          _invalid_parameter_noinfo();
        }
        puVar8 = (undefined8 *)plVar10[4];
        if (puVar8 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_141707348);
          return (undefined8 *)0x0;
        }
        if ((*(int *)((longlong)puVar8 + 0x1c) == local_res20) && (*(int *)((longlong)puVar8 + 0x14) == param_2)) {
          return puVar8;
        }
        if (plVar14 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar10 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar11 = plVar10;
      plVar5 = (longlong *)plVar10[2];
      if (*(char *)(plVar10[2] + 0x29) != '\0') break;
      do {
        plVar10 = plVar5;
        plVar5 = (longlong *)*plVar10;
        local_4f8 = plVar10;
      } while (*(char *)(*plVar10 + 0x29) == '\0');
    }
    do {
      plVar10 = (longlong *)plVar11[1];
      if (*(char *)((longlong)plVar10 + 0x29) != '\0') break;
      bVar17 = plVar11 == (longlong *)plVar10[2];
      plVar11 = plVar10;
    } while (bVar17);
  } while( true );
}




void FUN_141700300(undefined8 *param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_1416ff980(param_1,param_2,param_2,0x28,0);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FUN_1416f78b0((longlong)puVar1,param_3);
  return;
}




undefined8 * FUN_141700340(undefined8 *param_1)

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
  lVar2 = FUN_1416fc590();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_1417003c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
  plVar5 = param_3;
  plVar6 = param_4;
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar2) {
    lVar2 = param_1[6];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar2) {
      FUN_1416ff290(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
      *(longlong *)(param_1[6] + 8) = param_1[6];
      param_1[7] = 0;
      *(longlong *)param_1[6] = param_1[6];
      *(longlong *)(param_1[6] + 0x10) = param_1[6];
      lVar2 = *(longlong *)param_1[6];
      *param_2 = *param_1;
      param_2[1] = lVar2;
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
    if (*(char *)(lVar4 + 0x51) == '\0') {
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x51);
        plVar6 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x51);
          plVar5 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        plVar5 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar5 + 0x51);
        while ((cVar1 == '\0' && (param_3[1] == plVar5[2]))) {
          param_3[1] = (longlong)plVar5;
          plVar5 = (longlong *)plVar5[1];
          cVar1 = *(char *)((longlong)plVar5 + 0x51);
        }
      }
      param_3[1] = (longlong)plVar5;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_1416ff3d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1417005a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
  
  if (0x492492492492490 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141711290);
  }
  plVar5 = FUN_1416ff8b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x50);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x50) == '\0') {
        *(undefined1 *)(plVar2 + 10) = 1;
        *(undefined1 *)(lVar4 + 0x50) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x50) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x51) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x50) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x50) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x51) == '\0') {
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
      if (*(char *)(lVar4 + 0x50) == '\0') {
        *(undefined1 *)(plVar2 + 10) = 1;
        *(undefined1 *)(lVar4 + 0x50) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x50) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x51) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x50) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x50) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x51) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x50);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x50) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_1417008e0(longlong *param_1)

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
  FUN_1417003c0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_141700950(longlong *param_1,longlong *param_2,uint *param_3)

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
  
  plVar5 = (longlong *)param_1[6];
  bVar7 = true;
  if (*(char *)(plVar5[1] + 0x51) == '\0') {
    plVar6 = (longlong *)plVar5[1];
    do {
      plVar5 = plVar6;
      if ((*param_3 < *(uint *)(plVar5 + 3)) || ((*param_3 <= *(uint *)(plVar5 + 3) && (param_3[1] < *(uint *)((longlong)plVar5 + 0x1c))))) {
        plVar6 = (longlong *)*plVar5;
        bVar7 = true;
      }
      else {
        plVar6 = (longlong *)plVar5[2];
        bVar7 = false;
      }
    } while (*(char *)((longlong)plVar6 + 0x51) == '\0');
  }
  lVar2 = *param_1;
  plVar6 = plVar5;
  local_38 = lVar2;
  plVar4 = plVar5;
  if (bVar7) {
    plVar6 = *(longlong **)param_1[6];
    local_30 = plVar5;
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 != plVar6) {
      if (lVar2 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
        plVar6 = (longlong *)*plVar5;
        if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
          cVar1 = *(char *)(plVar6[2] + 0x51);
          plVar3 = (longlong *)plVar6[2];
          while (plVar4 = plVar6, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x51);
            plVar6 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar5[1] + 0x51);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
          while ((plVar6 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar6))) {
            cVar1 = *(char *)(plVar6[1] + 0x51);
            plVar4 = (longlong *)plVar6[1];
            plVar3 = plVar6;
            local_30 = plVar6;
          }
          plVar4 = plVar6;
          if (*(char *)((longlong)plVar3 + 0x51) != '\0') {
            _invalid_parameter_noinfo();
            plVar6 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar6 = (longlong *)plVar5[2];
        plVar4 = plVar6;
        if (*(char *)((longlong)plVar6 + 0x51) != '\0') {
          local_30 = plVar6;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_141700a8d;
    }
    bVar7 = true;
  }
  else {
LAB_141700a8d:
    local_30 = plVar4;
    if ((*param_3 <= *(uint *)(plVar6 + 3)) && ((*param_3 < *(uint *)(plVar6 + 3) || (param_3[1] <= *(uint *)((longlong)plVar6 + 0x1c))))) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141700ae3;
    }
  }
  plVar5 = FUN_1417005a0(param_1,&local_38,bVar7,plVar5,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar5[1];
  *param_2 = *plVar5;
LAB_141700ae3:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_141700b10(longlong *param_1)

{
  FUN_1417008e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141700b40(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  longlong local_38;
  longlong *local_30;
  
  if (param_1[7] == 0) {
    FUN_1417005a0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
    return param_2;
  }
  plVar5 = *(longlong **)param_1[6];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 == plVar5) {
    if ((*(uint *)(plVar7 + 3) <= *param_4) && ((*(uint *)(plVar7 + 3) < *param_4 || (*(uint *)((longlong)plVar7 + 0x1c) <= param_4[1])))) goto LAB_141700dea;
  }
  else {
    lVar1 = param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = param_3[1];
    if (lVar2 == lVar1) {
      plVar5 = *(longlong **)(param_1[6] + 0x10);
      if ((*param_4 <= *(uint *)(plVar5 + 3)) && ((*param_4 < *(uint *)(plVar5 + 3) || (param_4[1] <= *(uint *)((longlong)plVar5 + 0x1c))))) goto LAB_141700dea;
      cVar8 = '\0';
      goto LAB_141700e4a;
    }
    uVar6 = *param_4;
    if ((uVar6 < *(uint *)(lVar2 + 0x18)) || ((uVar6 <= *(uint *)(lVar2 + 0x18) && (param_4[1] < *(uint *)(lVar2 + 0x1c))))) {
      local_38 = *param_3;
      local_30 = (longlong *)param_3[1];
      if (local_38 == 0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)local_30 + 0x51) == '\0') {
        plVar5 = (longlong *)*local_30;
        if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
          cVar8 = *(char *)(plVar5[2] + 0x51);
          plVar7 = (longlong *)plVar5[2];
          while (local_30 = plVar5, cVar8 == '\0') {
            cVar8 = *(char *)(plVar7[2] + 0x51);
            plVar5 = plVar7;
            plVar7 = (longlong *)plVar7[2];
          }
        }
        else {
          cVar8 = *(char *)(local_30[1] + 0x51);
          plVar3 = (longlong *)local_30[1];
          plVar7 = local_30;
          while ((plVar5 = plVar3, cVar8 == '\0' && (plVar7 == (longlong *)*plVar5))) {
            cVar8 = *(char *)(plVar5[1] + 0x51);
            plVar3 = (longlong *)plVar5[1];
            plVar7 = plVar5;
          }
          local_30 = plVar5;
          if (*(char *)((longlong)plVar7 + 0x51) != '\0') {
            local_30 = plVar7;
            _invalid_parameter_noinfo();
            plVar5 = plVar7;
          }
        }
      }
      else {
        plVar5 = (longlong *)local_30[2];
        local_30 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x51) != '\0') {
          _invalid_parameter_noinfo();
        }
      }
      uVar6 = *param_4;
      if ((*(uint *)(plVar5 + 3) < uVar6) || ((*(uint *)(plVar5 + 3) <= uVar6 && (*(uint *)((longlong)plVar5 + 0x1c) < param_4[1])))) {
        if (*(char *)(plVar5[2] + 0x51) != '\0') {
          cVar8 = '\0';
          goto LAB_141700e4a;
        }
        plVar7 = (longlong *)param_3[1];
        goto LAB_141700e42;
      }
    }
    plVar5 = (longlong *)param_3[1];
    if ((uVar6 <= *(uint *)(plVar5 + 3)) && ((uVar6 < *(uint *)(plVar5 + 3) || (param_4[1] <= *(uint *)((longlong)plVar5 + 0x1c))))) {
LAB_141700dea:
      plVar5 = FUN_141700950(param_1,&local_38,param_4);
      *param_2 = *plVar5;
      param_2[1] = plVar5[1];
      return param_2;
    }
    local_38 = *param_3;
    plVar3 = (longlong *)param_1[6];
    lVar1 = *param_1;
    local_30 = plVar5;
    if (local_38 == 0) {
      _invalid_parameter_noinfo();
    }
    plVar7 = local_30;
    if (*(char *)((longlong)local_30 + 0x51) == '\0') {
      plVar7 = (longlong *)local_30[2];
      if (*(char *)((longlong)plVar7 + 0x51) == '\0') {
        cVar8 = *(char *)(*plVar7 + 0x51);
        plVar5 = (longlong *)*plVar7;
        while (cVar8 == '\0') {
          cVar8 = *(char *)(*plVar5 + 0x51);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar8 = *(char *)(local_30[1] + 0x51);
        plVar4 = (longlong *)local_30[1];
        plVar5 = local_30;
        while ((plVar7 = plVar4, cVar8 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar8 = *(char *)(plVar7[1] + 0x51);
          plVar4 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    if ((local_38 == 0) || (local_38 != lVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar3) {
      if ((*(uint *)(plVar7 + 3) <= *param_4) && ((*(uint *)(plVar7 + 3) < *param_4 || (*(uint *)((longlong)plVar7 + 0x1c) <= param_4[1])))) goto LAB_141700dea;
    }
    plVar5 = (longlong *)param_3[1];
    if (*(char *)(plVar5[2] + 0x51) != '\0') {
      cVar8 = '\0';
      goto LAB_141700e4a;
    }
  }
LAB_141700e42:
  cVar8 = '\x01';
  plVar5 = plVar7;
LAB_141700e4a:
  FUN_1417005a0(param_1,param_2,cVar8,plVar5,(undefined8 *)param_4);
  return param_2;
}




void FUN_141700e70(longlong *param_1)

{
  FUN_1417008e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141700ea0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  plVar6 = (longlong *)**(longlong **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  local_48 = plVar2;
  plStack_40 = plVar6;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar6 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6[4] != 0) {
      puVar4 = (undefined8 *)plVar6[4];
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      plVar6[4] = 0;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar6 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_40 = plVar6, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x29);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar5, plStack_40 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = (longlong *)(param_1 + 0x48);
  plStack_40 = *(longlong **)(param_1 + 0x78);
  local_48 = (longlong *)*plVar6;
  puStack_30 = (undefined8 *)*plStack_40;
  local_38 = local_48;
  FUN_1417003c0(plVar6,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete(*(void **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  operator_delete((void *)*plVar6);
  plVar6 = (longlong *)(param_1 + 8);
  puStack_30 = *(undefined8 **)(param_1 + 0x38);
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_1416fe140(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete((void *)*plVar6);
  return;
}




undefined8 * FUN_1417010c0(undefined8 *param_1)

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
  lVar2 = FUN_1416fc670();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141701140(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *local_c8 [3];
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_48 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar2[1] + 0x51) == '\0') {
    puVar3 = (undefined8 *)puVar2[1];
    do {
      if ((*(uint *)(puVar3 + 3) < *param_2) || ((*(uint *)(puVar3 + 3) <= *param_2 && (*(uint *)((longlong)puVar3 + 0x1c) < param_2[1])))) {
        puVar5 = (undefined8 *)puVar3[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar3;
        puVar2 = puVar3;
      }
      puVar3 = puVar5;
    } while (*(char *)((longlong)puVar5 + 0x51) == '\0');
  }
  puVar3 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[6];
  if (puVar3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar4 = (longlong *)0x0;
  if (puVar2 != puVar5) {
    if ((*(uint *)(puVar2 + 3) <= *param_2) && ((*(uint *)(puVar2 + 3) < *param_2 || (*(uint *)((longlong)puVar2 + 0x1c) <= param_2[1])))) goto LAB_1417012fb;
  }
  local_58 = puVar3;
  puStack_50 = puVar2;
  plVar1 = operator_new(8);
  local_c8[0] = plVar4;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)local_c8;
    local_c8[0] = plVar1;
  }
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = *(undefined8 *)param_2;
  FUN_1416fdea0(local_90,local_c8);
  plVar1 = FUN_141700b40(param_1,local_40,(longlong *)&local_58,(uint *)&local_98);
  puVar3 = (undefined8 *)*plVar1;
  puVar2 = (undefined8 *)plVar1[1];
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  operator_delete(local_90[0]);
  if (local_b0 != (void *)0x0) {
    operator_delete(local_b0);
  }
  local_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
LAB_1417012fb:
  if (puVar3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    plVar4 = (longlong *)*puVar3;
  }
  if (puVar2 == (undefined8 *)plVar4[6]) {
    _invalid_parameter_noinfo();
  }
  return puVar2 + 4;
}




undefined8 * FUN_141701340(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_141700340(param_1 + 1);
  FUN_1417010c0(param_1 + 9);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x000141701610) */
/* WARNING: Removing unreachable block (ram,0x000141701630) */
/* WARNING: Removing unreachable block (ram,0x000141701649) */
/* WARNING: Removing unreachable block (ram,0x000141701683) */
/* WARNING: Removing unreachable block (ram,0x000141701688) */
/* WARNING: Removing unreachable block (ram,0x000141701693) */
/* WARNING: Removing unreachable block (ram,0x000141701698) */
/* WARNING: Removing unreachable block (ram,0x00014170169d) */
/* WARNING: Removing unreachable block (ram,0x0001417016a3) */

void FUN_141701380(undefined8 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_138 [3];
  undefined4 *local_120;
  undefined4 *local_118;
  undefined8 local_110;
  longlong *local_108 [3];
  void *local_f0;
  void *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 *puStack_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 *puStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [3];
  
  if (param_2 != 0) {
    local_68 = 0xfffffffffffffffe;
    local_res18 = operator_new(8);
    local_138[0] = (longlong *)0x0;
    if (local_res18 != (longlong *)0x0) {
      *local_res18 = (longlong)local_138;
      local_138[0] = local_res18;
    }
    local_120 = (undefined4 *)0x0;
    local_118 = (undefined4 *)0x0;
    local_110 = 0;
    local_res20 = local_res18;
    (**(code **)(*(longlong *)*param_1 + 0x228))((longlong *)*param_1,param_2,local_138);
    puVar15 = local_120;
    if (((longlong)local_118 - (longlong)local_120 & 0xfffffffffffffffcU) == 0) {
      if (local_120 != (undefined4 *)0x0) {
        operator_delete(local_120);
      }
      local_120 = (undefined4 *)0x0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0;
      operator_delete(local_138[0]);
    }
    else {
      plVar6 = local_138[0];
      if (local_118 < local_120) {
        _invalid_parameter_noinfo();
        plVar6 = local_138[0];
      }
      while( true ) {
        puVar4 = local_118;
        lVar9 = 0;
        if (local_118 < local_120) {
          _invalid_parameter_noinfo();
        }
        if ((plVar6 == (longlong *)0x0) || (plVar6 != local_138[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar15 == puVar4) break;
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *plVar6;
        }
        if (*(undefined4 **)(lVar9 + 0x20) <= puVar15) {
          _invalid_parameter_noinfo();
        }
        uVar2 = *puVar15;
        local_res10[0] = uVar2;
        uVar8 = (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,uVar2,2);
        local_res18 = (longlong *)CONCAT44(uVar8,param_2);
        plVar10 = param_1 + 9;
        puVar14 = (undefined8 *)param_1[0xf];
        cVar1 = *(char *)((longlong)puVar14[1] + 0x51);
        puVar3 = (undefined8 *)puVar14[1];
        while (cVar1 == '\0') {
          if ((*(uint *)(puVar3 + 3) < param_2) || ((*(uint *)(puVar3 + 3) <= param_2 && (*(uint *)((longlong)puVar3 + 0x1c) < uVar8)))) {
            puVar11 = (undefined8 *)puVar3[2];
          }
          else {
            puVar11 = (undefined8 *)*puVar3;
            puVar14 = puVar3;
          }
          puVar3 = puVar11;
          cVar1 = *(char *)((longlong)puVar11 + 0x51);
        }
        local_a0 = puVar14;
        local_a8 = *plVar10;
        puVar3 = (undefined8 *)param_1[0xf];
        if (*plVar10 == 0) {
          _invalid_parameter_noinfo();
        }
        if (((puVar14 == puVar3) || (param_2 < *(uint *)(puVar14 + 3))) ||
           ((param_2 <= *(uint *)(puVar14 + 3) && (uVar8 < *(uint *)((longlong)puVar14 + 0x1c))))) {
          local_90 = param_1[0xf];
          local_98 = *plVar10;
          plVar12 = &local_98;
        }
        else {
          plVar12 = &local_a8;
        }
        local_c8 = *plVar12;
        local_c0 = plVar12[1];
        lVar9 = param_1[0xf];
        if ((*plVar10 == 0) || (*plVar10 != local_c8)) {
          _invalid_parameter_noinfo();
        }
        if (lVar9 == local_c0) {
          local_res20 = operator_new(8);
          if (local_res20 == (longlong *)0x0) {
            local_108[0] = (longlong *)0x0;
          }
          else {
            *local_res20 = (longlong)local_108;
            local_108[0] = local_res20;
          }
          uStack_d0 = 0;
          local_e0 = 0;
          local_e8 = (void *)0x0;
          local_f0 = (void *)0x0;
          uStack_80 = 0;
          local_d8 = local_108[0];
          local_88 = local_108[0];
          local_60 = local_res20;
          FUN_1416fe390((longlong)local_108,(longlong)&local_88,1,local_res10);
          pvVar7 = local_f0;
          if (local_e8 < local_f0) {
            _invalid_parameter_noinfo();
          }
          plVar12 = local_108[0];
          if (local_108[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *local_108[0];
          }
          if (*(void **)(lVar9 + 0x20) < pvVar7) {
LAB_141701726:
            _invalid_parameter_noinfo();
          }
          else {
            if (plVar12 == (longlong *)0x0) {
              lVar9 = 0;
            }
            else {
              lVar9 = *plVar12;
            }
            if (pvVar7 < *(void **)(lVar9 + 0x18)) goto LAB_141701726;
          }
          plVar10 = FUN_141701140(plVar10,(uint *)&local_res18);
          FUN_1416fee60(plVar10,(longlong *)local_108);
          if (local_f0 != (void *)0x0) {
            operator_delete(local_f0);
          }
          local_f0 = (void *)0x0;
          local_e8 = (void *)0x0;
          local_e0 = 0;
          operator_delete(local_108[0]);
        }
        else {
          plVar10 = FUN_141701140(plVar10,(uint *)&local_res18);
          puVar4 = (undefined4 *)plVar10[3];
          if (puVar4 == (undefined4 *)0x0) {
            uVar13 = 0;
          }
          else {
            uVar13 = plVar10[5] - (longlong)puVar4 >> 2;
          }
          puVar5 = (undefined4 *)plVar10[4];
          if ((ulonglong)((longlong)puVar5 - (longlong)puVar4 >> 2) < uVar13) {
            *puVar5 = uVar2;
            plVar10[4] = (longlong)(puVar5 + 1);
          }
          else {
            if (puVar5 < puVar4) {
              _invalid_parameter_noinfo();
            }
            local_b8 = *plVar10;
            puStack_b0 = puVar5;
            local_78 = local_b8;
            puStack_70 = puVar5;
            FUN_1416ff160(plVar10,local_58,&local_78,local_res10);
          }
        }
        lVar9 = 0;
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *plVar6;
        }
        if (*(undefined4 **)(lVar9 + 0x20) <= puVar15) {
          _invalid_parameter_noinfo();
        }
        puVar15 = puVar15 + 1;
      }
      if (local_120 != (undefined4 *)0x0) {
        operator_delete(local_120);
      }
      local_120 = (undefined4 *)0x0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0;
      operator_delete(local_138[0]);
    }
  }
  return;
}




void FUN_141701890(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    FUN_141701380(param_1,param_2);
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,param_2);
    if (uVar1 != 0) {
      FUN_141701380(param_1,uVar1);
    }
  }
  return;
}




CMsg * FUN_1417018d0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_141701900(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_141701910(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141701917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_141701920(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141701927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_141701930(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141701937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_141701940(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141701970(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = storage::CMsgItem::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1417019c0(undefined8 *param_1)

{
  *param_1 = storage::CMsgItem::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1417019f0(CMsg *param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x5b;
    *(undefined2 *)(param_1 + 10) = 0x3f1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = 0;
  }
  return param_2 != 0;
}




ulonglong FUN_141701aa0(CMsg *param_1,int param_2,undefined2 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x5b;
    *(undefined2 *)(param_1 + 10) = 0x3f1;
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_3;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined4 *)(lVar1 + 0x1a) = 0;
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}




bool FUN_141701b40(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3f1;
}




void FUN_141701b70(longlong param_1,undefined4 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  sVar1 = *(short *)(lVar2 + 0x14);
  if (sVar1 == 9) {
    (**(code **)(*param_3 + 8))(param_3,param_2,*(undefined4 *)(lVar2 + 8));
  }
  else {
    if (sVar1 == 10) {
                    /* WARNING: Could not recover jumptable at 0x000141701bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x10))(param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
      return;
    }
    if (sVar1 == 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000141701bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x18))(param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc));
      return;
    }
  }
  return;
}




undefined8 * FUN_141701c20(undefined8 *param_1,byte param_2)

{
  *param_1 = storage::CMsgItem::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141701c70(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = storage::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141701cc0(undefined8 *param_1)

{
  *param_1 = storage::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141701cf0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_141701d20(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141707348);
      return;
    }
    (**(code **)(*param_3 + 0x98))(param_3);
  }
  return;
}




undefined8 * FUN_141701d70(undefined8 *param_1,byte param_2)

{
  *param_1 = storage::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141701dc0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = storage::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141701e10(undefined8 *param_1)

{
  *param_1 = storage::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141701e70(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_141701ea0(undefined8 param_1,int param_2,undefined8 *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141707348);
      return;
    }
    (**(code **)*param_3)(param_3);
  }
  return;
}




undefined8 * FUN_141701ef0(undefined8 *param_1,byte param_2)

{
  *param_1 = storage::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141701f40(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = storage::CMsgStorage::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141701f90(undefined8 *param_1)

{
  *param_1 = storage::CMsgStorage::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_141701fc0(CMsg *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(param_1 + 10) = 0x44e;
  *(undefined2 *)(param_1 + 8) = 0x54;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_5;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xd) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = 0;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 0x18) = 0;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_141702060(CMsg *param_1,int param_2,undefined1 param_3,char param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if (((param_2 == 0) || (param_5 == 0)) || (param_4 == '\0')) {
    log_InlineLogERROR(&DAT_141707348);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 10) = 0x44e;
    *(undefined2 *)(param_1 + 8) = 0x54;
    *(int *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    *(char *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xd) = param_3;
    *(int *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_5;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined2 *)(lVar1 + 0x18) = 0;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




ulonglong FUN_141702150(CMsg *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,void *param_5,ushort param_6)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong extraout_RAX;
  ushort uVar3;
  
  if ((param_5 == (void *)0x0) || (1 < param_6)) {
    log_InlineLogERROR(&DAT_141707348);
    uVar1 = extraout_RAX;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 10) = 0x44e;
    uVar1 = 0x400;
    uVar3 = (param_6 - 1) * 0x38 + 0x54;
    *(ushort *)(param_1 + 8) = uVar3;
    if (uVar3 < 0x401) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
      *(ushort *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
      pvVar2 = *(void **)(param_1 + 0x408);
      *(undefined1 *)((longlong)pvVar2 + 0xd) = param_3;
      if (param_6 != 0) {
        pvVar2 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0x1c),param_5,(ulonglong)param_6 * 0x38);
      }
      return CONCAT71((int7)((ulonglong)pvVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




bool FUN_141702260(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x44e;
}




ulonglong FUN_141702290(longlong param_1,void *param_2)

{
  short *psVar1;
  uint uVar2;
  ulonglong extraout_RAX;
  void *pvVar4;
  ulonglong uVar3;
  
  if (param_2 == (void *)0x0) {
    log_InlineLogERROR(&DAT_141707348);
    uVar3 = extraout_RAX;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 8) + 0x38;
    uVar3 = (ulonglong)uVar2;
    if (uVar2 < 0x400) {
      pvVar4 = memcpy((void *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x408) + 0x18) * 0x38 + 0x1c + *(longlong *)(param_1 + 0x408)),param_2,0x38);
      psVar1 = (short *)(*(longlong *)(param_1 + 0x408) + 0x18);
      *psVar1 = *psVar1 + 1;
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 0x38;
      return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




undefined8 FUN_141702320(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 0x10) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




void FUN_141702330(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((int)param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141707348);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x408);
      uVar3 = *(undefined4 *)(lVar4 + 4);
      uVar1 = *(undefined1 *)(lVar4 + 0xd);
      cVar2 = *(char *)(lVar4 + 0xc);
      if (cVar2 == '\0') {
        (**(code **)(*param_3 + 0x20))(param_3,param_2,uVar3,uVar1,*(undefined2 *)(lVar4 + 0xe));
      }
      else if (cVar2 == '\x01') {
        (**(code **)(*param_3 + 0x28))(param_3,param_2,uVar3,uVar1,*(undefined4 *)(lVar4 + 0x14),0);
      }
      else if (cVar2 == '\x02') {
        (**(code **)(*param_3 + 0x30))(param_3,param_2,uVar3,uVar1,*(undefined4 *)(lVar4 + 0x14));
      }
    }
  }
  return;
}




undefined8 * FUN_141702400(undefined8 *param_1,byte param_2)

{
  *param_1 = storage::CMsgStorage::vftable;
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
  
  local_res10 = _decode_pointer(DAT_141712aa0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_141712aa0);
    local_res18[0] = _decode_pointer(DAT_141712a98);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_141712aa0 = _encode_pointer(local_res10);
    DAT_141712a98 = _encode_pointer(local_res18[0]);
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




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __security_check_cookie
   
   Libraries: Visual Studio 2008 Debug, Visual Studio 2008 Release */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1417124c8) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_141702708(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_1417027a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141712a98 = _encode_pointer(puVar1);
  DAT_141712aa0 = DAT_141712a98;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_141702e1c();
    atexit(FUN_141702e54);
    atexit((_func_5014 *)&LAB_141702e10);
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
    if (DAT_1417124fc < 1) {
      return 0;
    }
    DAT_1417124fc = DAT_1417124fc + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_141712a88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141712a88;
        pvVar3 = DAT_141712a88;
      }
      DAT_141712a88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14170287e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14170287e:
    if (DAT_141712a80 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_141712aa0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_141712a98);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_141712aa0);
            plVar12 = (longlong *)_decode_pointer(DAT_141712a98);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_141712a98 = _encoded_null();
        DAT_141712aa0 = DAT_141712a98;
      }
      DAT_141712a80 = 0;
      if (!bVar2) {
        LOCK();
        DAT_141712a88 = (void *)0x0;
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
      bVar13 = DAT_141712a88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141712a88;
        pvVar3 = DAT_141712a88;
      }
      DAT_141712a88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1417029a7;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1417029a7:
    if (DAT_141712a80 == 0) {
      DAT_141712a80 = 1;
      iVar4 = _initterm_e(&DAT_141707240,&DAT_141707250);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141707230,&DAT_141707238);
      DAT_141712a80 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_141712a88 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_141712a90 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141712a90), BVar5 != 0)) {
      (*DAT_141712a90)(param_1,2,param_3);
    }
    DAT_1417124fc = DAT_1417124fc + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000141702b20) */
/* WARNING: Removing unreachable block (ram,0x000141702ab7) */
/* WARNING: Removing unreachable block (ram,0x000141702b5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1417124fc == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1417124e0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1417124e0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1416f1300();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1416f1300();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1417124e0 = 0xffffffff;
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




undefined8 FUN_141702bd8(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1417125a0);
  local_30 = DAT_141712698;
  local_38 = RtlLookupFunctionEntry(DAT_141712698,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141712638 = local_res8;
    DAT_141712698 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1417125a0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141712510 = DAT_141712698;
  _DAT_141712620 = local_res8[0];
  _DAT_141712500 = 0xc0000409;
  _DAT_141712504 = 1;
  local_20 = DAT_1417124c8;
  local_18 = DAT_1417124d0;
  DAT_141712598 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_14170b038);
  if (DAT_141712598 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_141702e1c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14170b968; puVar1 < &DAT_14170b968; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_141702e54(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14170b978; puVar1 < &DAT_14170b978; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1416f0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1416f0000);
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
  if (DAT_1417124c8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1417124c8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1417124c8 == 0x2b992ddfa232) {
      DAT_1417124c8 = 0x2b992ddfa233;
    }
  }
  DAT_1417124d0 = ~DAT_1417124c8;
  return;
}




void Unwind_1417030b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1417030d0(undefined8 param_1,longlong param_2)

{
  FUN_1416f1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417030f0(undefined8 param_1,longlong param_2)

{
  FUN_141701e10((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_141703110(undefined8 param_1,longlong param_2)

{
  FUN_1417019c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_141703130(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




void Unwind_141703150(undefined8 param_1,longlong param_2)

{
  FUN_141701cc0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc50));
  return;
}




void Unwind_141703170(undefined8 param_1,longlong param_2)

{
  FUN_1416f1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703190(undefined8 param_1,longlong param_2)

{
  FUN_141701e10((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1417031b0(undefined8 param_1,longlong param_2)

{
  FUN_1417019c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_1417031d0(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




void Unwind_1417031f0(undefined8 param_1,longlong param_2)

{
  FUN_141701cc0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc50));
  return;
}




undefined * Catch_141703210(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_1416f142a;
}




undefined * Catch_141703250(void)

{
  log_InlineLogCATCH_ERROR("storage::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_1416f14bf;
}




void Unwind_1417032a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_1417032c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x1416f1541;
}




void Unwind_141703300(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_141703320(undefined8 param_1,longlong param_2)

{
  FUN_1417019c0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_141703340(void)

{
  log_InlineLogCATCH_ERROR("CProvider::QueryItem(Storage) idOwner:[%u],idPlayer:[%u],eType:[%d]. @%s,%d");
  return &DAT_1416f1c22;
}




void Unwind_141703390(undefined8 param_1,longlong param_2)

{
  FUN_1417019c0((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_1417033b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pStorageMgr) @%s,%d");
  return 0x1416f2ca9;
}




void Unwind_1417033f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703410(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703430(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703450(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141703490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417034b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1417034d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417034f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141703510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141703550(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703570(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417035b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1417035d0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417035f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141703630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141703650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141703670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141703690(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1417036b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417036d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1417036f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141703710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141703730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141703750(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141703770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141703790(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1417037b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1417037d0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1417037f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141703830(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141703850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141703870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141703890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417038b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417038d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417038f0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2e80(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141703910(undefined8 param_1,longlong param_2)

{
  FUN_1416f2e80(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141703930(void)

{
  DAT_1417124f8 = DAT_1417124f8 & 0xfffffffe;
  return;
}




void Unwind_141703950(void)

{
  DAT_1417124f8 = DAT_1417124f8 & 0xfffffffe;
  return;
}




void Unwind_141703970(void)

{
  DAT_1417124f8 = DAT_1417124f8 & 0xfffffffe;
  return;
}




void Unwind_141703990(void)

{
  DAT_1417124f8 = DAT_1417124f8 & 0xfffffffe;
  return;
}




void Unwind_1417039b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417039d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417039f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141703a10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141703a30(undefined8 param_1,longlong param_2)

{
  FUN_1416f2e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141703a50(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141703a70(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_141703a90(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141703ab0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703ad0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703af0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703b10(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703b30(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703b50(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703b70(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703b90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_141703bb0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2e80(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Catch_141703bd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141703c00(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141703c20(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703c40(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703c60(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703c80(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703ca0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703ce0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703d00(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703d20(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703d40(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703d60(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703d80(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703da0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703dc0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703de0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703e00(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703e20(undefined8 param_1,longlong param_2)

{
  FUN_1416f5660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703e40(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703e60(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703e80(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703ea0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141703ec0(void)

{
  FUN_1416f2e50();
  return;
}




void Catch_141703ee0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  if (lVar3 != lVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x78);
    do {
      FUN_1416f5e90(uVar2,lVar3);
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141703f30(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e30(param_2 + 0x20);
  return;
}




void Unwind_141703f50(void)

{
  FUN_1416f2e50();
  return;
}




void Catch_141703f70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0xa0);
  if (lVar3 != lVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0xa8);
    do {
      FUN_1416f5e90(uVar2,lVar3);
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar1);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141703fd0(undefined8 param_1,longlong param_2)

{
  FUN_1416f5660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141703ff0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704010(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704030(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704050(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704070(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141704090(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0xb0));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1417040c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1417040e0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e30(param_2 + 0x38);
  return;
}




undefined * Catch_141704100(void)

{
  return &DAT_1416f7861;
}




void Unwind_141704120(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e30(param_2 + 0x38);
  return;
}




undefined * Catch_141704140(void)

{
  return &DAT_1416f7a2f;
}




void Unwind_141704160(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704180(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417041a0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_1417041c0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1417041e0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e70(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141704200(undefined8 param_1,longlong param_2)

{
  FUN_1416f7a70((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x28));
  return;
}




void Unwind_141704220(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704240(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141704260(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141704280(undefined8 param_1,longlong param_2)

{
  FUN_1416f5660(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1417042a0(undefined8 param_1,longlong param_2)

{
  FUN_1416f7090((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_1417042c0(undefined8 param_1,longlong param_2)

{
  FUN_1416f7a70((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_1417042e0(undefined8 param_1,longlong param_2)

{
  FUN_1416f7090((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_141704300(undefined8 param_1,longlong param_2)

{
  FUN_1416f5660(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141704320(undefined8 param_1,longlong param_2)

{
  FUN_1416f4eb0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141704340(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141704360(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704380(undefined8 param_1,longlong param_2)

{
  FUN_1416f4370(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1417043a0(void)

{
  return &DAT_1416f83be;
}




void Unwind_1417043c0(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined * Catch_1417043e0(void)

{
  return &DAT_1416f8653;
}




void Unwind_141704400(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_141704420(void)

{
  return &DAT_1416f8a6a;
}




void Catch_141704440(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 2) {
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
    plVar4 = *(longlong **)(param_2 + 0x40);
    lVar2 = *(longlong *)(param_2 + 0x38);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    plVar4 = *(longlong **)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0xb0);
    FUN_1416f71b0(uVar3,plVar4,plVar4 + lVar2 * 2);
  }
  if (0 < iVar1) {
    FUN_1416f71b0(uVar3,plVar4 + lVar2 * 2,plVar4 + (lVar2 + *(longlong *)(param_2 + 0xc0)) * 2);
  }
  operator_delete(plVar4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1417044e0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e30(param_2 + 0x48);
  return;
}




void Catch_141704500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xc0) * 0x10;
  FUN_1416f71b0(*(longlong *)(param_2 + 0xb0),(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xb8) + 8) + lVar1),
                (longlong *)(lVar1 + *(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x20)));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141704550(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e30(param_2 + 0x58);
  return;
}




void Unwind_141704570(void)

{
  DAT_1417124f8 = DAT_1417124f8 & 0xfffffffe;
  return;
}




void Unwind_141704590(undefined8 param_1,longlong param_2)

{
  FUN_1416f40f0(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1417045b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pStorage) @%s,%d");
  return 0x1416f90c1;
}




void Unwind_1417045f0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704620(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704640(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704660(undefined8 param_1,longlong param_2)

{
  FUN_1416f7170((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704680(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x540));
  return;
}




void Unwind_1417046a0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1417046c0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1417046e0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704700(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704720(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704740(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704760(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141704780(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_1417047a0(void)

{
  return &DAT_1416fa344;
}




void Unwind_1417047c0(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x130));
  return;
}




undefined * Catch_1417047e0(void)

{
  return &DAT_1416fa56c;
}




void Unwind_141704800(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141704820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141704840(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141704860(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141704880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417048a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1417048c0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417048e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141704900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141704920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141704940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141704960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141704980(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1417049a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417049c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1417049e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




undefined * Catch_141704a00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pResItemStatus) @%s,%d");
  return &DAT_1416fb940;
}




undefined8 Catch_141704a40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return 0x1416fb96b;
}




undefined * Catch_141704a80(void)

{
  log_InlineLogCATCH_ERROR("CStorageMgr::ProcessUserAsynLogin @%s,%d");
  return &DAT_1416fb973;
}




void Unwind_141704ac0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141704ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141704b00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141704b20(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704b40(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704b60(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704b80(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704ba0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704bc0(void)

{
  FUN_1416f2e50();
  return;
}




void Catch_141704be0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141704c10(void)

{
  FUN_1416f2e50();
  return;
}




void Catch_141704c30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141704c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141704c90(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704cb0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704cd0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704cf0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704d10(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704d30(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704d50(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141704d70(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704d90(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704db0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704dd0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704df0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704e10(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704e30(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704e50(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704e70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141704e90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141704eb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141704ed0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141704ef0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704f10(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704f30(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704f50(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141704f70(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704f90(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141704fb0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141704fd0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141704ff0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705010(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705030(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705050(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705070(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705090(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417050b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417050d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417050f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705110(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705130(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705150(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705170(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705190(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417051b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417051d0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_1417051f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705210(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705230(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705250(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141705270(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141705290(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417052b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417052d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1417052f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141705310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141705330(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141705350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141705370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141705390(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1417053b0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_1417053e0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141705400(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_141705420(undefined8 param_1,longlong param_2)

{
  FUN_1416fc370(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141705450(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705470(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705490(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417054b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417054d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417054f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705510(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705530(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705550(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141705570(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705590(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417055b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417055d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417055f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705610(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705630(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705650(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705670(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705690(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1417056b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1417056e0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141705700(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141705720(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141705740(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141705760(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705780(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_1417057a0(void)

{
  log_InlineLogCATCH_ERROR("CStorageMgr::DelLostItemFromTrunk @%s,%d");
  return 0x1416fe856;
}




undefined * Catch_1417057e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pStorage) @%s,%d");
  return &DAT_1416feab3;
}




void Unwind_141705820(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705840(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705860(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705880(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417058a0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417058c0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdfd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417058e0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705900(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705920(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705940(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705960(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705980(undefined8 param_1,longlong param_2)

{
  FUN_1416fdff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417059a0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_1417059c0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_1417059e0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141705a00(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141705a20(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_141705a40(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141705a60(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141705a80(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141705aa0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141705ac0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141705ae0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdfd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705b00(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705b20(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705b40(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705b60(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705b80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141705ba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141705bc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141705be0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141705c00(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_141705c20(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_141705c40(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_141705c60(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_141705c80(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705ca0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_141705cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_141705ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141705d10(undefined8 param_1,longlong param_2)

{
  FUN_1416ff3a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141705d30(undefined8 param_1,longlong param_2)

{
  FUN_1416fdfd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705d50(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705d70(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705d90(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705db0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141705dd0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141705df0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141705e10(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141705e30(undefined8 param_1,longlong param_2)

{
  FUN_1416f7170((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141705e50(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_141705e70(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_141705e90(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_141705eb0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x90));
  return;
}




undefined * Catch_141705ed0(void)

{
  log_InlineLogCATCH_ERROR("CItemMgr::QueryStorage1 idOwner:[%u],idPlayer:[%u],eType:[%d]. @%s,%d");
  return &DAT_1416fff0b;
}




void Unwind_141705f30(undefined8 param_1,longlong param_2)

{
  FUN_141701f90((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_141705f50(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141705f70(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141705f90(void)

{
  log_InlineLogCATCH_ERROR("CItemMgr::QueryStorage2 idOwner:[%u],idPlayer:[%u],eType:[%d]. @%s,%d");
  return &DAT_14170025f;
}




void Unwind_141705ff0(undefined8 param_1,longlong param_2)

{
  FUN_1416f4e90((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141706010(undefined8 param_1,longlong param_2)

{
  FUN_1416f4430((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_141706030(void)

{
  log_InlineLogCATCH_ERROR("CItemMgr::QueryStorage3 idOwner:[%u],idPlayer:[%u],eType:[%d]. @%s,%d");
  return &DAT_1417002e8;
}




void Unwind_141706090(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_1417060b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417060d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417060f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706110(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706130(undefined8 param_1,longlong param_2)

{
  FUN_1416fdfd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706150(undefined8 param_1,longlong param_2)

{
  FUN_1416ff3a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141706170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141706190(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1417061b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1417061d0(undefined8 param_1,longlong param_2)

{
  FUN_1416f2f60((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1417061f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706210(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706230(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706250(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706270(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706290(undefined8 param_1,longlong param_2)

{
  FUN_141700b10(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1417062b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417062d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417062f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706310(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706330(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706350(undefined8 param_1,longlong param_2)

{
  FUN_1416ff950((longlong *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}




void Unwind_141706370(undefined8 param_1,longlong param_2)

{
  FUN_141700e70((longlong *)(*(longlong *)(param_2 + 0x80) + 0x48));
  return;
}




undefined * Catch_141706390(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(iterator->second) @%s,%d");
  return &DAT_141700f3d;
}




void Unwind_1417063d0(undefined8 param_1,longlong param_2)

{
  FUN_141700b10(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_1417063f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdff0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_141706410(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_141706430(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_141706450(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_141706470(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_141706490(undefined8 param_1,longlong param_2)

{
  FUN_1416ff3a0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1417064b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdfd0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1417064d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3d0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1417064f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca30(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141706510(undefined8 param_1,longlong param_2)

{
  FUN_1416fc230(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141706530(undefined8 param_1,longlong param_2)

{
  FUN_1416fbb40(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141706550(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141706570(undefined8 param_1,longlong param_2)

{
  FUN_1416fbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706590(undefined8 param_1,longlong param_2)

{
  FUN_1416fc250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417065b0(undefined8 param_1,longlong param_2)

{
  FUN_1416fca50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417065d0(undefined8 param_1,longlong param_2)

{
  FUN_1416fd3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417065f0(undefined8 param_1,longlong param_2)

{
  FUN_1416fdff0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706610(undefined8 param_1,longlong param_2)

{
  FUN_141700b10(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141706630(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141706660(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141706680(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1417066a0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1417066c0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1417066e0(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9e0(param_2 + 0x60);
  return;
}




void Unwind_141706700(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_141706720(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_141706740(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_141706760(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141706780(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1417067a0(undefined8 param_1,longlong param_2)

{
  FUN_1416ff950((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1417067c0(undefined8 param_1,longlong param_2)

{
  FUN_141700e70((longlong *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_1417067e0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_141706810(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141706830(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141706850(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141706870(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_141706890(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1417068b0(void)

{
  FUN_1416f2e50();
  return;
}




void Unwind_1417068e0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141706900(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141706920(undefined8 param_1,longlong param_2)

{
  FUN_1416fc9a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141706940(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141706960(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141706980(undefined8 param_1,longlong param_2)

{
  FUN_1416fc210((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1417069a0(undefined8 param_1,longlong param_2)

{
  FUN_1416fbad0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_1417069c0(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1417069e0(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141706a00(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706a20(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706a40(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141706a60(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706a80(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706aa0(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141706ac0(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706ae0(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141706b00(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141706b20(void)

{
  log_InlineLogCATCH_ERROR("CMsgStorage::Actor:%u,Action:%u,eType:%u,usFlag:%u @%s,%d");
  return 0x1417023ec;
}




void Unwind_141706b80(undefined8 param_1,longlong param_2)

{
  FUN_141701900(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_141706b98(void)

{
  _unlock(8);
  return;
}




void FUN_141706bb1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141706be1(void)

{
  _DAT_1417124e0 = 0xffffffff;
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




bool FUN_141706c70(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=885 failed=1 total=971 */
