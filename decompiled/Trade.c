/* Decompiled by Ghidra 12.1.4 | program: Trade.dll
   image base: 1419c0000 | functions: 840 */


void FUN_1419c1000(void)

{
  log_InlineLogERROR(&DAT_1419d2218);
  return;
}




void FUN_1419c1050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1419c1060(void)

{
  return 0;
}




undefined8 FUN_1419c1070(void)

{
  return 0;
}




undefined8 FUN_1419c1080(void)

{
  return 0;
}




undefined8 FUN_1419c1090(void)

{
  return 0;
}




undefined8 * FUN_1419c10a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419c10e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = trade::CModule::vftable;
  plVar1 = (longlong *)param_1[0x85];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_1419cd4d0(param_1 + 0x86);
  FUN_1419cd670((undefined8 *)((longlong)param_1 + 0xc));
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_1419c1150(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




bool FUN_1419c1170(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1419c2020(puVar1);
  }
  *(undefined8 **)(param_1 + 0x428) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x840) + 8))(*(longlong **)(param_1 + 0x840),0x420,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x840) + 8))(*(longlong **)(param_1 + 0x840),0x3eb,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x840) + 0x18))(*(longlong **)(param_1 + 0x840),0x17,*(undefined8 *)(param_1 + 0x428));
  }
  else {
    log_InlineLogERROR(&DAT_1419d2218);
  }
  return puVar1 != (undefined8 *)0x0;
}




ulonglong FUN_1419c1230(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x30))(*(longlong **)(param_1 + 0x840),0x17);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x420) = lVar1;
  if (*(longlong *)(param_1 + 0x428) == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1419c1630(*(longlong *)(param_1 + 0x428),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1419d2218);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_1419c1310(void)

{
  return;
}




longlong * FUN_1419c1320(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3eb) {
      plVar2 = (longlong *)(param_1 + 0x430);
    }
    else {
      if (param_2[1] != 0x420) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0xc);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




undefined8 FUN_1419c1380(void)

{
  return 1;
}




undefined8 * FUN_1419c1390(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = trade::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_1419cd620((CMsg *)((longlong)param_1 + 0xc));
  param_1[0x85] = 0;
  FUN_1419cd480((CMsg *)(param_1 + 0x86));
  param_1[0x108] = param_2;
  return param_1;
}




undefined8 * FUN_1419c1400(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1419c10e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1419c1430(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x180))();
  if (cVar1 != '\0') {
    return 0;
  }
  if ((param_3 != (ushort *)0x0) && (*param_3 <= param_4)) {
    if (param_3[1] == 0x3eb) {
      plVar2 = (longlong *)(param_1 + 0x430);
    }
    else {
      if (param_3[1] != 0x420) {
        return 0;
      }
      plVar2 = (longlong *)(param_1 + 0xc);
    }
    cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_3);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x428));
      return (short)plVar2[1];
    }
  }
  return 0;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x14f0  1  ModuleCreate */
  puVar2 = operator_new(0x848);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_1419c1390(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419d2218);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1419c1170((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




void * FUN_1419c1600(void *param_1,uint param_2)

{
  FUN_1419c82b0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1419c1630(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    puVar1 = operator_new(0x98);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_1419c8570(puVar1);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1419d2218);
      uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar2 = FUN_1419c7ef0(puVar1,*(longlong *)(param_1 + 8));
      if ((char)uVar2 == '\0') {
        log_InlineLogERROR(&DAT_1419d2218);
        uVar2 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2;
}




bool FUN_1419c1720(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return false;
  }
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  return lVar1 != 0;
}




void FUN_1419c1750(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  IStringManager *pIVar4;
  undefined8 *puVar5;
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))();
  if (cVar1 == '\0') {
    uVar2 = FUN_1419c7b30(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if ((char)uVar2 != '\0') {
      FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
    }
  }
  else {
    lVar3 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar3 == 0) {
      lVar3 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_3);
      if (lVar3 == 0) {
        uVar2 = FUN_1419c7b30(*(longlong *)(param_1 + 0x10),param_2,param_3);
        if ((char)uVar2 == '\0') {
          lVar3 = FUN_1419c7ae0(*(longlong *)(param_1 + 0x10),param_3,param_2);
          if ((char)lVar3 == '\0') {
            pIVar4 = theInstance();
            lVar3 = **(longlong **)(param_1 + 8);
            uVar2 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TARGET_TRADING");
            (**(code **)(lVar3 + 0x148))(*(undefined8 *)(param_1 + 8),param_2,uVar2,0xff0000,0x7e1);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),param_3,param_2);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),param_2,param_3);
            FUN_1419cd620(local_418);
            uVar2 = FUN_1419cd6a0(local_418,1,param_2);
            if ((char)uVar2 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_3,local_418);
            }
            pIVar4 = theInstance();
            lVar3 = **(longlong **)(param_1 + 8);
            uVar2 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TRADING_REQEST_SENT");
            (**(code **)(lVar3 + 0x148))(*(undefined8 *)(param_1 + 8),param_2,uVar2,0xff0000,0x7d5);
            FUN_1419cd670((undefined8 *)local_418);
          }
        }
        else {
          puVar5 = FUN_1419c8040(*(longlong **)(param_1 + 0x10));
          if (puVar5 != (undefined8 *)0x0) {
            FUN_1419c25c0((longlong)puVar5,param_2);
            FUN_1419c25c0((longlong)puVar5,param_3);
            *(undefined1 *)(puVar5 + 5) = 0;
            FUN_1419cd620(local_418);
            uVar2 = FUN_1419cd6a0(local_418,3,param_2);
            if ((char)uVar2 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_3,local_418);
            }
            uVar2 = FUN_1419cd6a0(local_418,3,param_3);
            if ((char)uVar2 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_2,local_418);
            }
            FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
            FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_3);
            FUN_1419cd670((undefined8 *)local_418);
          }
        }
      }
      else {
        pIVar4 = theInstance();
        lVar3 = **(longlong **)(param_1 + 8);
        uVar2 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TARGET_TRADING");
        (**(code **)(lVar3 + 0x148))(*(undefined8 *)(param_1 + 8),param_2,uVar2,0xff0000,0x7e1);
      }
    }
    else {
      FUN_1419c2690(lVar3,param_2);
    }
  }
  return;
}




void FUN_1419c19f0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
  }
  return;
}




void FUN_1419c1a10(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_1419c2800(lVar1,param_2);
    FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
    if (lVar2 != 0) {
      FUN_1419c7c50(*(longlong *)(param_1 + 0x10),*(uint *)(lVar2 + 0x10));
    }
    FUN_1419c2690(lVar1,param_2);
  }
  return;
}




undefined8 FUN_1419c1a90(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_1419c27e0(lVar1,param_2);
  uVar3 = FUN_1419c2800(lVar1,param_2);
  if (((lVar2 == 0) || (uVar3 == 0)) || (*(char *)(lVar2 + 0x21) != '\0')) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    *(undefined1 *)(lVar2 + 0x21) = 1;
    FUN_1419c51e0(lVar1,param_2,param_3,param_4);
    FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
    uVar4 = FUN_1419c7c50(*(longlong *)(param_1 + 0x10),*(uint *)(uVar3 + 0x10));
    uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar3;
}




undefined8 FUN_1419c1b50(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_1419c27e0(lVar2,param_2);
  uVar4 = FUN_1419c2800(lVar2,param_2);
  if (((lVar3 == 0) || (uVar4 == 0)) || (*(char *)(lVar3 + 0x20) != '\0')) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    *(undefined1 *)(lVar3 + 0x20) = 1;
    if (*(char *)(uVar4 + 0x20) != '\0') {
      cVar1 = FUN_1419c4220(lVar2,lVar3,uVar4);
      if (cVar1 == '\0') {
        FUN_1419c2690(lVar2,param_2);
      }
    }
    FUN_1419c7c50(*(longlong *)(param_1 + 0x10),param_2);
    uVar5 = FUN_1419c7c50(*(longlong *)(param_1 + 0x10),*(uint *)(uVar4 + 0x10));
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar4;
}




void FUN_1419c1c20(longlong param_1,int param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  lVar2 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar2 != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2,param_3);
    if (cVar1 == '\0') {
      pIVar3 = theInstance();
      lVar2 = **(longlong **)(param_1 + 8);
      uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_NOT_FOR_TRADE");
      (**(code **)(lVar2 + 0x148))(*(undefined8 *)(param_1 + 8),param_2,uVar4,0xff0000,0x7d5);
      FUN_1419cd620(local_418);
      uVar4 = FUN_1419cd6a0(local_418,0xb,param_3);
      if ((char)uVar4 == '\0') {
        log_InlineLogERROR(&DAT_1419d2218);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),param_2,local_418);
      }
      FUN_1419cd670((undefined8 *)local_418);
    }
    else {
      lVar2 = FUN_1419c27e0(lVar2,param_2);
      if (lVar2 != 0) {
        FUN_1419cc4e0(lVar2,param_3);
      }
    }
  }
  return;
}




undefined8 FUN_1419c1d50(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_1419c27e0(lVar1,param_2);
  uVar3 = FUN_1419c2800(lVar1,param_2);
  if ((lVar2 == 0) || (uVar3 == 0)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar4 = FUN_1419cbf80(lVar2,*(undefined4 *)(uVar3 + 0x10),param_3);
    uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar3;
}




bool FUN_1419c1de0(longlong param_1,int param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_1419c27e0(lVar2,param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_1419cc0d0(lVar2,param_3);
      return bVar1;
    }
  }
  return false;
}




void FUN_1419c1e30(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_3;
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if (lVar1 != 0) {
    lVar4 = **(longlong **)(param_1 + 8);
    lVar2 = (**(code **)(lVar4 + 0x188))();
    if ((param_3 <= lVar2) && (-1 < param_3)) {
      lVar1 = FUN_1419c27e0(lVar1,param_2);
      if (lVar1 == 0) {
        log_InlineLogERROR(&DAT_1419d2218);
      }
      else {
        FUN_1419c85f0(lVar1,param_3,lVar3,lVar4);
      }
    }
  }
  return;
}




void FUN_1419c1ed0(longlong param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3;
  lVar1 = FUN_1419c6e70(*(longlong *)(param_1 + 0x10),param_2);
  if ((lVar1 != 0) && (param_3 < 0xf4241)) {
    lVar1 = FUN_1419c27e0(lVar1,param_2);
    if (lVar1 == 0) {
      log_InlineLogERROR(&DAT_1419d2218);
      return;
    }
    FUN_1419c86f0(lVar1,param_3,uVar2,param_4);
  }
  return;
}




void FUN_1419c1f50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    pIVar3 = theInstance();
    lVar1 = **(longlong **)(param_1 + 8);
    uVar4 = (**(code **)(lVar1 + 0x130))(*(longlong **)(param_1 + 8),param_3);
    uVar5 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_TRADE_ACTOR_AUTO_REFUSE");
    (**(code **)(lVar1 + 0x148))(*(undefined8 *)(param_1 + 8),param_2,uVar5,uVar4);
    pIVar3 = theInstance();
    plVar2 = *(longlong **)(param_1 + 8);
    lVar1 = *plVar2;
    uVar4 = (**(code **)(*plVar2 + 0x130))(plVar2,param_2);
    uVar5 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_TRADE_TARGET_AUTO_REFUSE");
    (**(code **)(lVar1 + 0x148))(*(undefined8 *)(param_1 + 8),param_3,uVar5,uVar4);
  }
  return;
}




undefined8 * FUN_1419c2020(undefined8 *param_1)

{
  *param_1 = trade::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_1419c2040(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = trade::CProvider::vftable;
  if (param_1[2] != 0) {
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      FUN_1419c82b0((longlong)pvVar1);
      operator_delete(pvVar1);
    }
    param_1[2] = 0;
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_1419c20b0(undefined8 *param_1,uint param_2)

{
  FUN_1419c2040(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_1419c2170(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1419c21b0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001419c21d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419c21e0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419c2240(void)

{
  return;
}




exception * FUN_1419c2250(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1419c22a0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419c22d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1419c22e0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1419c2300(exception *param_1,uint param_2)

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




exception * FUN_1419c2360(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1419c23c0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419c23fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419c2410(exception *param_1,uint param_2)

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




undefined8 * FUN_1419c24d0(undefined8 *param_1,undefined4 *param_2)

{
  *param_1 = trade::CTrade::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




bool FUN_1419c2510(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 8) = param_2;
  }
  return param_2 != 0;
}




void FUN_1419c2530(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}




ulonglong FUN_1419c25c0(longlong param_1,int param_2)

{
  longlong *in_RAX;
  longlong *extraout_RAX;
  
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x28) != '\0') && (in_RAX = FUN_1419cd2b0(param_1,param_2,*(longlong *)(param_1 + 8)), in_RAX != (longlong *)0x0)) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        *(longlong **)(param_1 + 0x18) = in_RAX;
      }
      else {
        if (*(longlong *)(param_1 + 0x20) != 0) goto LAB_1419c25fd;
        *(longlong **)(param_1 + 0x20) = in_RAX;
      }
      if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                  (*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10),*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10));
        in_RAX = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                           (*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10));
      }
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    log_InlineLogERROR(&DAT_1419d2218);
    in_RAX = extraout_RAX;
  }
LAB_1419c25fd:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1419c2690(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  IStringManager *pIVar4;
  ulonglong uVar5;
  CMsg local_418 [1040];
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (param_2 != *(int *)(*(longlong *)(param_1 + 0x18) + 0x10))) &&
     ((uVar5 = *(ulonglong *)(param_1 + 0x20), uVar5 == 0 || (param_2 != *(int *)(uVar5 + 0x10))))) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    FUN_1419cd620(local_418);
    uVar3 = FUN_1419cd6a0(local_418,5,param_2);
    if ((char)uVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10),local_418);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10),local_418);
    }
    pIVar4 = theInstance();
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    lVar2 = **(longlong **)(param_1 + 8);
    uVar3 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TRADE_FAIL");
    (**(code **)(lVar2 + 0x148))(*(undefined8 *)(param_1 + 8),uVar1,uVar3,0xff0000,0x7e1);
    pIVar4 = theInstance();
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x10);
    lVar2 = **(longlong **)(param_1 + 8);
    uVar3 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_TRADE_FAIL");
    (**(code **)(lVar2 + 0x148))(*(undefined8 *)(param_1 + 8),uVar1,uVar3,0xff0000,0x7e1);
    FUN_1419c2530(param_1);
    uVar3 = FUN_1419cd670((undefined8 *)local_418);
    uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar5;
}




longlong FUN_1419c27e0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((lVar1 == 0) || (param_2 != *(int *)(lVar1 + 0x10))) && ((lVar1 = *(longlong *)(param_1 + 0x20), lVar1 == 0 || (param_2 != *(int *)(lVar1 + 0x10))))) {
    lVar1 = 0;
  }
  return lVar1;
}




longlong FUN_1419c2800(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (param_2 == *(int *)(lVar1 + 0x10))) {
    return *(longlong *)(param_1 + 0x20);
  }
  if ((*(longlong *)(param_1 + 0x20) == 0) || (param_2 != *(int *)(*(longlong *)(param_1 + 0x20) + 0x10))) {
    lVar1 = 0;
  }
  return lVar1;
}




longlong FUN_1419c2870(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c2892;
  }
  lVar2 = *plVar1;
LAB_1419c2892:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419c28b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c28d2;
  }
  lVar2 = *plVar1;
LAB_1419c28d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1419c28f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419c2960(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419d8f78);
}




exception * FUN_1419c29d0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_1419c2a20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




exception * FUN_1419c2a60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_1419c2ae0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1419c2b10;
  }
  else {
LAB_1419c2b10:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1419c2b38;
  }
  _invalid_parameter_noinfo();
LAB_1419c2b38:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1419c2b60(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_1419c2bd0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1419c2c40(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_1419c2d00(void *param_1,longlong param_2,longlong param_3)

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




longlong FUN_1419c2d70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void * FUN_1419c2dc0(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_1419c2e40(void)

{
  if ((DAT_1419da2a0 & 1) == 0) {
    DAT_1419da2a0 = DAT_1419da2a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da298,"CTrade");
    atexit((_func_5014 *)&LAB_1419d1c90);
  }
  return &DAT_1419da298;
}




void FUN_1419c2ea0(__uint64 param_1)

{
  if ((DAT_1419da2a0 & 1) == 0) {
    DAT_1419da2a0 = DAT_1419da2a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da298,"CTrade");
    atexit((_func_5014 *)&LAB_1419d1c90);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c2ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1419da298,param_1);
  return;
}




void FUN_1419c2f00(void *param_1)

{
  if ((DAT_1419da2a0 & 1) == 0) {
    DAT_1419da2a0 = DAT_1419da2a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da298,"CTrade");
    atexit((_func_5014 *)&LAB_1419d1c90);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c2f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1419da298,param_1);
  return;
}




void FUN_1419c2f60(void *param_1)

{
  if ((DAT_1419da2a0 & 1) == 0) {
    DAT_1419da2a0 = DAT_1419da2a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da298,"CTrade");
    atexit((_func_5014 *)&LAB_1419d1c90);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c2fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1419da298,param_1);
  return;
}




undefined8 * FUN_1419c2fc0(undefined8 *param_1,byte param_2)

{
  *param_1 = trade::CTrade::vftable;
  if ((param_2 & 1) != 0) {
    FUN_1419c2f00(param_1);
  }
  return param_1;
}




longlong FUN_1419c3010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c3032;
  }
  lVar2 = *plVar1;
LAB_1419c3032:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419c3050(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c3072;
  }
  lVar2 = *plVar1;
LAB_1419c3072:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1419c3090(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419c30d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c30e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_1419c3170(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1419c31e0(longlong *param_1,longlong param_2)

{
  FUN_1419c2ae0(param_1,param_2);
  return param_1;
}




void * FUN_1419c3220(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1419c3280(longlong *param_1,longlong *param_2,longlong *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  *param_3 = *param_3 + (param_2[1] - param_1[1] >> 2);
  return;
}




void * FUN_1419c3300(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419c3350(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1419c3370(longlong param_1,ulonglong param_2)

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
      FUN_1419c2960();
    }
    lVar1 = FUN_1419c30e0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_1419c33d0(undefined8 *param_1)

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




longlong * FUN_1419c3420(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419c348a;
  }
  _invalid_parameter_noinfo();
LAB_1419c348a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1419c34c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1419c3550(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1419c35c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  lVar2 = param_1[1];
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  *param_3 = *param_3 + (lVar1 - lVar2 >> 2);
  return;
}




void * FUN_1419c3650(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419c36a0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1419c36d0(undefined8 *param_1)

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




undefined8 * FUN_1419c3720(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1419c37b0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419c37f0(longlong param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_1419c3830(undefined8 *param_1)

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




void FUN_1419c3890(undefined8 *param_1)

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




undefined8 * FUN_1419c38d0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1419c3920(undefined8 *param_1,undefined8 *param_2)

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




void * FUN_1419c39a0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_1419c39e0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void FUN_1419c3a80(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_1419c2960();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1419c30e0(param_1 + 0x10,uVar8);
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
      FUN_1419c39a0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_1419c39a0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1419c3550(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_1419c3d20(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  void *_Dst;
  void *pvVar3;
  longlong lVar4;
  rsize_t rVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_48;
  void *local_40;
  longlong local_38;
  longlong local_30;
  
  local_48 = *param_4;
  local_40 = (void *)param_4[1];
  local_38 = *param_3;
  local_30 = param_3[1];
  if ((local_48 == 0) || (local_48 != local_38)) {
    _invalid_parameter_noinfo();
  }
  uVar8 = (longlong)local_40 - local_30 >> 2;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(longlong *)(param_1 + 0x28) - lVar4 >> 2;
  }
  if (uVar8 != 0) {
    lVar4 = (longlong)*(void **)(param_1 + 0x20) - lVar4 >> 2;
    if (0x3fffffffffffffffU - lVar4 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_1419c2960();
    }
    uVar1 = lVar4 + uVar8;
    if (uVar9 < uVar1) {
      if (0x3fffffffffffffff - (uVar9 >> 1) < uVar9) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 + (uVar9 >> 1);
      }
      if (uVar9 < uVar1) {
        uVar9 = uVar1;
      }
      _Dst = (void *)FUN_1419c30e0(param_1 + 0x10,uVar9);
      lVar4 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 0x18) >> 2;
      rVar5 = lVar4 * 4;
      if (lVar4 != 0) {
        memmove_s(_Dst,rVar5,*(void **)(param_1 + 0x18),rVar5);
      }
      local_38 = *param_4;
      local_30 = param_4[1];
      local_48 = *param_3;
      local_40 = (void *)param_3[1];
      pvVar3 = FUN_1419c39e0(param_1,(longlong)&local_48,(longlong)&local_38,(void *)((longlong)_Dst + rVar5));
      lVar4 = *(longlong *)(param_1 + 0x20) - (longlong)*(void **)(param_2 + 8) >> 2;
      if (lVar4 != 0) {
        rVar5 = lVar4 << 2;
        memmove_s(pvVar3,rVar5,*(void **)(param_2 + 8),rVar5);
      }
      pvVar3 = *(void **)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)_Dst + uVar9 * 4);
      *(void **)(param_1 + 0x20) = (void *)((longlong)_Dst + (uVar8 + (lVar4 - (longlong)pvVar3 >> 2)) * 4);
      *(void **)(param_1 + 0x18) = _Dst;
    }
    else {
      local_38 = *param_4;
      local_30 = param_4[1];
      local_48 = *param_3;
      local_40 = (void *)param_3[1];
      lVar4 = local_30 - (longlong)local_40 >> 2;
      if (lVar4 != 0) {
        rVar5 = lVar4 << 2;
        memmove_s(*(void **)(param_1 + 0x20),rVar5,local_40,rVar5);
      }
      puVar7 = *(undefined4 **)(param_1 + 0x20);
      puVar6 = *(undefined4 **)(param_2 + 8);
      if (puVar6 != puVar7) {
        do {
          puVar7 = puVar7 + -1;
          if (puVar6 == puVar7) break;
          uVar2 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar2;
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar7);
      }
      puVar6 = *(undefined4 **)(param_1 + 0x20);
      puVar7 = puVar6 + uVar8;
      if (puVar6 != puVar7) {
        do {
          puVar7 = puVar7 + -1;
          if (puVar6 == puVar7) break;
          uVar2 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar2;
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar7);
      }
      puVar7 = (undefined4 *)(uVar8 * 4 + *(longlong *)(param_1 + 0x20));
      puVar6 = *(undefined4 **)(param_2 + 8);
      if (puVar6 != puVar7) {
        do {
          puVar7 = puVar7 + -1;
          if (puVar6 == puVar7) break;
          uVar2 = *puVar6;
          *puVar6 = *puVar7;
          *puVar7 = uVar2;
          puVar6 = puVar6 + 1;
        } while (puVar6 != puVar7);
      }
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + uVar8 * 4;
    }
  }
  return;
}




longlong * FUN_1419c3fe0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_1419c3a80((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1419c40d4;
  }
  _invalid_parameter_noinfo();
LAB_1419c40d4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1419c4110(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = *param_4;
  local_30 = param_4[1];
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_1419c3d20(param_1,(longlong)&local_18,&local_28,&local_38);
  return;
}




void FUN_1419c4170(longlong *param_1,undefined4 *param_2)

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
  FUN_1419c3fe0(param_1,local_18,&local_28,param_2);
  return;
}




undefined1 FUN_1419c4220(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *pvVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  __time64_t _Var14;
  __time64_t _Var15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  IStringManager *pIVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  int iVar25;
  byte local_res18 [8];
  char local_res20;
  longlong *local_578;
  undefined4 *puStack_570;
  longlong *local_568;
  void *pvStack_560;
  longlong *local_558 [3];
  undefined4 *local_540;
  undefined4 *local_538;
  undefined8 local_530;
  longlong *local_528 [3];
  undefined4 *local_510;
  undefined4 *local_508;
  undefined8 local_500;
  longlong *local_4f8 [3];
  void *local_4e0;
  void *local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8 [3];
  void *local_4b0;
  void *local_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined4 *puStack_490;
  int local_488;
  tm local_480;
  undefined8 local_458;
  CMsg local_448 [1040];
  
  local_458 = 0xfffffffffffffffe;
  if ((param_3 == 0) || (param_2 == 0)) {
    return 0;
  }
  cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_3 + 0x10));
  if (cVar9 == '\0') {
    return 0;
  }
  cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
  if ((cVar9 == '\0') ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10)), cVar9 == '\0')) {
    return 0;
  }
  cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
  if ((cVar9 != '\0') ||
     (local_res20 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10)), local_res20 != '\0')) {
    return 0;
  }
  local_578 = operator_new(8);
  plVar24 = (longlong *)0x0;
  local_528[0] = plVar24;
  if (local_578 != (longlong *)0x0) {
    *local_578 = (longlong)local_528;
    local_528[0] = local_578;
  }
  local_510 = (undefined4 *)0x0;
  local_508 = (undefined4 *)0x0;
  local_500 = 0;
  local_568 = local_578;
  local_578 = operator_new(8);
  local_558[0] = plVar24;
  if (local_578 != (longlong *)0x0) {
    *local_578 = (longlong)local_558;
    local_558[0] = local_578;
  }
  local_540 = (undefined4 *)0x0;
  local_538 = (undefined4 *)0x0;
  local_530 = 0;
  local_568 = local_578;
  local_578 = operator_new(8);
  local_4f8[0] = plVar24;
  if (local_578 != (longlong *)0x0) {
    *local_578 = (longlong)local_4f8;
    local_4f8[0] = local_578;
  }
  local_4e0 = (void *)0x0;
  local_4d8 = (void *)0x0;
  local_4d0 = 0;
  local_568 = local_578;
  local_578 = operator_new(8);
  local_4c8[0] = plVar24;
  if (local_578 != (longlong *)0x0) {
    *local_578 = (longlong)local_4c8;
    local_4c8[0] = local_578;
  }
  local_4b0 = (void *)0x0;
  local_4a8 = (void *)0x0;
  local_4a0 = 0;
  local_568 = local_578;
  iVar11 = FUN_1419ccaf0(param_2,(longlong *)local_4f8);
  iVar12 = FUN_1419ccaf0(param_3,(longlong *)local_4c8);
  puStack_490 = local_538;
  if (local_538 < local_540) {
    _invalid_parameter_noinfo();
  }
  pvVar8 = local_4d8;
  local_498 = local_558[0];
  if (local_4d8 < local_4e0) {
    _invalid_parameter_noinfo();
  }
  pvVar7 = local_4e0;
  local_568 = local_4f8[0];
  pvStack_560 = pvVar8;
  if (local_4d8 < local_4e0) {
    _invalid_parameter_noinfo();
  }
  local_578 = local_4f8[0];
  puStack_570 = pvVar7;
  FUN_1419c3d20((longlong)local_558,(longlong)&local_498,(longlong *)&local_578,(longlong *)&local_568);
  puVar21 = local_538;
  if (local_538 < local_540) {
    _invalid_parameter_noinfo();
  }
  pvVar8 = local_4a8;
  local_578 = local_558[0];
  puStack_570 = puVar21;
  if (local_4a8 < local_4b0) {
    _invalid_parameter_noinfo();
  }
  pvVar7 = local_4b0;
  local_498 = local_4c8[0];
  puStack_490 = pvVar8;
  if (local_4a8 < local_4b0) {
    _invalid_parameter_noinfo();
  }
  local_568 = local_4c8[0];
  pvStack_560 = pvVar7;
  FUN_1419c3d20((longlong)local_558,(longlong)&local_578,(longlong *)&local_568,(longlong *)&local_498);
  plVar2 = *(longlong **)(param_2 + 0x100);
  plVar22 = *(longlong **)(param_3 + 0x100);
  local_578 = plVar22;
  local_568 = plVar2;
  iVar13 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  else {
    iVar13 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  }
  uVar4 = (ulonglong)(uint)((int)plVar2 >> 0x1f) << 0x20 | (ulonglong)plVar2 & 0xffffffff;
  iVar25 = iVar11 + (int)plVar2 + (int)((longlong)uVar4 / (longlong)iVar13);
  iVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),(longlong)uVar4 % (longlong)iVar13 & 0xffffffff);
  if (iVar11 < 1) {
    iVar11 = 1;
  }
  else {
    iVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  }
  iVar11 = iVar12 + (int)plVar22 + (int)((longlong)((ulonglong)(uint)((int)plVar22 >> 0x1f) << 0x20 | (ulonglong)plVar22 & 0xffffffff) / (longlong)iVar11);
  local_488 = iVar11;
  cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
  if (((((cVar9 == '\0') &&
        (cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10)), cVar9 == '\0')) &&
       (cVar9 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10)), puVar21 = local_540,
       cVar9 == '\0')) && (((longlong)local_538 - (longlong)local_540 & 0xfffffffffffffffcU) != 0)) &&
     (((0x563 < iVar25 || (0x563 < iVar11)) && ((iVar11 * 5 <= iVar25 || (iVar25 * 5 <= iVar11)))))) {
    local_res20 = '\x01';
    if ((*(char *)(param_2 + 0x20) == '\0') || (*(char *)(param_3 + 0x20) == '\0')) {
      FUN_1419cd620(local_448);
      uVar18 = FUN_1419cd6a0(local_448,0xf,0);
      if ((char)uVar18 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10),local_448);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10),local_448);
      }
      FUN_1419cd670((undefined8 *)local_448);
      if (local_4b0 != (void *)0x0) {
        operator_delete(local_4b0);
      }
      local_4b0 = (void *)0x0;
      local_4a8 = (void *)0x0;
      local_4a0 = 0;
      operator_delete(local_4c8[0]);
      if (local_4e0 != (void *)0x0) {
        operator_delete(local_4e0);
      }
      local_4e0 = (void *)0x0;
      local_4d8 = (void *)0x0;
      local_4d0 = 0;
      operator_delete(local_4f8[0]);
      if (local_540 != (undefined4 *)0x0) {
        operator_delete(local_540);
      }
      local_540 = (undefined4 *)0x0;
      local_538 = (undefined4 *)0x0;
      local_530 = 0;
      operator_delete(local_558[0]);
      if (local_510 != (undefined4 *)0x0) {
        operator_delete(local_510);
      }
      local_510 = (undefined4 *)0x0;
      local_508 = (undefined4 *)0x0;
      local_500 = 0;
      operator_delete(local_528[0]);
      return 1;
    }
    plVar2 = local_558[0];
    if (local_538 < local_540) {
      _invalid_parameter_noinfo();
      plVar2 = local_558[0];
    }
    while( true ) {
      puVar6 = local_538;
      if (local_538 < local_540) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_558[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar21 == puVar6) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar22 = plVar24;
      }
      else {
        plVar22 = (longlong *)*plVar2;
      }
      if ((undefined4 *)plVar22[4] <= puVar21) {
        _invalid_parameter_noinfo();
      }
      iVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),*puVar21);
      if (iVar11 == 0) {
        local_480.tm_sec = 0;
        local_480.tm_min = 0;
        local_480.tm_hour = 0;
        local_480.tm_wday = 0;
        local_480.tm_yday = 0;
        local_480.tm_isdst = 0;
        local_480.tm_year = 0x6b;
        local_480.tm_mon = 0;
        local_480.tm_mday = 1;
        _Var14 = _time64((__time64_t *)0x0);
        _Var15 = _mktime64(&local_480);
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar22 = plVar24;
        }
        else {
          plVar22 = (longlong *)*plVar2;
        }
        if ((undefined4 *)plVar22[4] <= puVar21) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),*puVar21,(int)((_Var14 - _Var15) / 0xe10));
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar22 = plVar24;
        }
        else {
          plVar22 = (longlong *)*plVar2;
        }
        if ((undefined4 *)plVar22[4] <= puVar21) {
          _invalid_parameter_noinfo();
        }
        FUN_1419c4170((longlong *)local_528,puVar21);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar22 = plVar24;
      }
      else {
        plVar22 = (longlong *)*plVar2;
      }
      if ((undefined4 *)plVar22[4] <= puVar21) {
        _invalid_parameter_noinfo();
      }
      puVar21 = puVar21 + 1;
    }
  }
  local_res18[0] = 0;
  lVar23 = *(longlong *)(param_2 + 0xf8);
  lVar3 = *(longlong *)(param_3 + 0xf8);
  bVar5 = true;
  if (lVar23 == 0) {
LAB_1419c4a60:
    if (lVar3 != 0) {
      lVar16 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10));
      if (lVar3 <= lVar16) {
        lVar16 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
        lVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x188))();
        if (lVar16 + lVar3 <= lVar17) goto LAB_1419c4aa0;
      }
      goto LAB_1419c4a9d;
    }
  }
  else {
    lVar16 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
    if (lVar23 <= lVar16) {
      lVar16 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10));
      lVar17 = (**(code **)(**(longlong **)(param_1 + 8) + 0x188))();
      if (lVar16 + lVar23 <= lVar17) goto LAB_1419c4a60;
    }
LAB_1419c4a9d:
    bVar5 = false;
  }
LAB_1419c4aa0:
  if ((9999 < lVar23) || (9999 < lVar3)) {
    local_res18[0] = 1;
  }
  iVar11 = (int)local_568;
  if (iVar11 == 0) {
LAB_1419c4aed:
    iVar11 = (int)local_578;
    if ((iVar11 == 0) ||
       ((iVar12 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10)), iVar11 <= iVar12 &&
        (iVar12 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10)),
        (uint)(iVar12 + iVar11) < 0x3b9aca01)))) goto LAB_1419c4b31;
  }
  else {
    iVar12 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
    if (iVar12 < iVar11) {
      iVar11 = (int)local_578;
    }
    else {
      iVar12 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10));
      if ((uint)(iVar12 + iVar11) < 0x3b9aca01) goto LAB_1419c4aed;
      iVar11 = (int)local_578;
    }
  }
  bVar5 = false;
LAB_1419c4b31:
  if (((int)local_568 != 0) || (iVar11 != 0)) {
    local_res18[0] = 1;
  }
  uVar18 = FUN_1419cce00(param_2,*(undefined4 *)(param_3 + 0x10),local_res18);
  uVar19 = FUN_1419cce00(param_3,*(undefined4 *)(param_2 + 0x10),local_res18);
  puVar21 = local_510;
  if ((((char)uVar18 == '\0') || ((char)uVar19 == '\0')) || (!bVar5)) {
    if (local_508 < local_510) {
      _invalid_parameter_noinfo();
    }
    plVar24 = local_528[0];
    while( true ) {
      puVar6 = local_508;
      if (local_508 < local_510) {
        _invalid_parameter_noinfo();
      }
      if ((local_528[0] == (longlong *)0x0) || (local_528[0] != plVar24)) {
        _invalid_parameter_noinfo();
      }
      if (puVar6 == puVar21) break;
      if (plVar24 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar23 = 0;
      }
      else {
        lVar23 = *plVar24;
      }
      if (*(undefined4 **)(lVar23 + 0x20) <= puVar21) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))(*(longlong **)(param_1 + 8),*puVar21,0);
      if (plVar24 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar23 = 0;
      }
      else {
        lVar23 = *plVar24;
      }
      if (*(undefined4 **)(lVar23 + 0x20) <= puVar21) {
        _invalid_parameter_noinfo();
      }
      puVar21 = puVar21 + 1;
    }
    if (local_4b0 != (void *)0x0) {
      operator_delete(local_4b0);
    }
    local_4b0 = (void *)0x0;
    local_4a8 = (void *)0x0;
    local_4a0 = 0;
    operator_delete(local_4c8[0]);
    if (local_4e0 != (void *)0x0) {
      operator_delete(local_4e0);
    }
    local_4e0 = (void *)0x0;
    local_4d8 = (void *)0x0;
    local_4d0 = 0;
    operator_delete(local_4f8[0]);
    if (local_540 != (undefined4 *)0x0) {
      operator_delete(local_540);
    }
    local_540 = (undefined4 *)0x0;
    local_538 = (undefined4 *)0x0;
    local_530 = 0;
    operator_delete(local_558[0]);
    if (local_510 != (undefined4 *)0x0) {
      operator_delete(local_510);
    }
    local_510 = (undefined4 *)0x0;
    local_508 = (undefined4 *)0x0;
    local_500 = 0;
    operator_delete(local_528[0]);
    uVar10 = 0;
  }
  else {
    uVar18 = FUN_1419c87d0(param_2,*(undefined4 *)(param_3 + 0x10));
    if (((char)uVar18 == '\0') || (uVar18 = FUN_1419c87d0(param_3,*(undefined4 *)(param_2 + 0x10)), (char)uVar18 == '\0')) {
      if (local_4b0 != (void *)0x0) {
        operator_delete(local_4b0);
      }
      local_4b0 = (void *)0x0;
      local_4a8 = (void *)0x0;
      local_4a0 = 0;
      operator_delete(local_4c8[0]);
      if (local_4e0 != (void *)0x0) {
        operator_delete(local_4e0);
      }
      local_4e0 = (void *)0x0;
      local_4d8 = (void *)0x0;
      local_4d0 = 0;
      operator_delete(local_4f8[0]);
      if (local_540 != (undefined4 *)0x0) {
        operator_delete(local_540);
      }
      local_540 = (undefined4 *)0x0;
      local_538 = (undefined4 *)0x0;
      local_530 = 0;
      operator_delete(local_558[0]);
      if (local_510 != (undefined4 *)0x0) {
        operator_delete(local_510);
      }
      local_510 = (undefined4 *)0x0;
      local_508 = (undefined4 *)0x0;
      local_500 = 0;
      operator_delete(local_528[0]);
      uVar10 = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x168))
                (*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_3 + 0x10),lVar23,(int)local_568,lVar3,(int)local_578,iVar25,
                 local_488,local_res20);
      uVar18 = FUN_1419cb020(param_2,*(undefined4 *)(param_3 + 0x10),local_res18[0]);
      if (((char)uVar18 == '\0') || (uVar18 = FUN_1419cb020(param_3,*(undefined4 *)(param_2 + 0x10),local_res18[0]), (char)uVar18 == '\0')) {
        if (local_4b0 != (void *)0x0) {
          operator_delete(local_4b0);
        }
        local_4b0 = (void *)0x0;
        local_4a8 = (void *)0x0;
        local_4a0 = 0;
        operator_delete(local_4c8[0]);
        if (local_4e0 != (void *)0x0) {
          operator_delete(local_4e0);
        }
        local_4e0 = (void *)0x0;
        local_4d8 = (void *)0x0;
        local_4d0 = 0;
        operator_delete(local_4f8[0]);
        if (local_540 != (undefined4 *)0x0) {
          operator_delete(local_540);
        }
        local_540 = (undefined4 *)0x0;
        local_538 = (undefined4 *)0x0;
        local_530 = 0;
        operator_delete(local_558[0]);
        if (local_510 != (undefined4 *)0x0) {
          operator_delete(local_510);
        }
        local_510 = (undefined4 *)0x0;
        local_508 = (undefined4 *)0x0;
        local_500 = 0;
        operator_delete(local_528[0]);
        uVar10 = 0;
      }
      else {
        pIVar20 = theInstance();
        uVar1 = *(undefined4 *)(param_2 + 0x10);
        lVar23 = **(longlong **)(param_1 + 8);
        uVar18 = (*(code *)**(undefined8 **)pIVar20)(pIVar20,"STR_TRADE_SUCCEED");
        (**(code **)(lVar23 + 0x148))(*(undefined8 *)(param_1 + 8),uVar1,uVar18,0xff0000,0x7e1);
        pIVar20 = theInstance();
        uVar1 = *(undefined4 *)(param_3 + 0x10);
        lVar23 = **(longlong **)(param_1 + 8);
        uVar18 = (*(code *)**(undefined8 **)pIVar20)(pIVar20,"STR_TRADE_SUCCEED");
        (**(code **)(lVar23 + 0x148))(*(undefined8 *)(param_1 + 8),uVar1,uVar18,0xff0000,0x7e1);
        FUN_1419cd620(local_448);
        uVar18 = FUN_1419cd6a0(local_448,4,0);
        if ((char)uVar18 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10),local_448);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10),local_448);
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_2 + 0x10));
        (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_3 + 0x10));
        FUN_1419c2530(param_1);
        FUN_1419cd670((undefined8 *)local_448);
        if (local_4b0 != (void *)0x0) {
          operator_delete(local_4b0);
        }
        local_4b0 = (void *)0x0;
        local_4a8 = (void *)0x0;
        local_4a0 = 0;
        operator_delete(local_4c8[0]);
        if (local_4e0 != (void *)0x0) {
          operator_delete(local_4e0);
        }
        local_4e0 = (void *)0x0;
        local_4d8 = (void *)0x0;
        local_4d0 = 0;
        operator_delete(local_4f8[0]);
        if (local_540 != (undefined4 *)0x0) {
          operator_delete(local_540);
        }
        local_540 = (undefined4 *)0x0;
        local_538 = (undefined4 *)0x0;
        local_530 = 0;
        operator_delete(local_558[0]);
        if (local_510 != (undefined4 *)0x0) {
          operator_delete(local_510);
        }
        local_510 = (undefined4 *)0x0;
        local_508 = (undefined4 *)0x0;
        local_500 = 0;
        operator_delete(local_528[0]);
        uVar10 = 1;
      }
    }
  }
  return uVar10;
}




void FUN_1419c51e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  CMsg local_418 [1040];
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((lVar4 == 0) || (param_2 != *(int *)(lVar4 + 0x10))) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if ((lVar2 == 0) || (lVar5 = lVar4, param_2 != *(int *)(lVar2 + 0x10))) {
      lVar5 = 0;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = lVar2;
  }
  if ((((lVar4 != 0) && (param_2 == *(int *)(lVar4 + 0x10))) || ((lVar2 != 0 && (lVar4 = lVar2, param_2 == *(int *)(lVar2 + 0x10))))) &&
     ((lVar4 != 0 && (lVar5 != 0)))) {
    FUN_1419cd620(local_418);
    uVar3 = FUN_1419cd6a0(local_418,10,0);
    if ((char)uVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(lVar5 + 0x10),local_418);
    }
    if ((*(char *)(lVar5 + 0x21) != '\0') && (cVar1 = FUN_1419c4220(param_1,lVar4,lVar5), cVar1 == '\0')) {
      FUN_1419c2690(param_1,param_2);
    }
    FUN_1419cd670((undefined8 *)local_418);
  }
  return;
}




exception * FUN_1419c52d0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1419c5330(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419c536d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419c5380(exception *param_1,uint param_2)

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




void FUN_1419c54f0(longlong param_1,longlong *param_2)

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




longlong FUN_1419c5590(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = param_1[1];
  plVar2 = (longlong *)*param_1;
  lVar5 = 0;
  uVar6 = uVar1 >> 1;
  lVar3 = lVar5;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_1;
    lVar4 = lVar5;
    if (plVar2 == (longlong *)0x0) goto LAB_1419c55df;
  }
  lVar4 = *plVar2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = lVar4;
  }
LAB_1419c55df:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar4 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  lVar3 = lVar5;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
  }
  if (*(ulonglong *)(lVar3 + 0x28) <= uVar6) {
    lVar3 = lVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    uVar6 = uVar6 - *(longlong *)(lVar3 + 0x28);
  }
  if (plVar2 != (longlong *)0x0) {
    lVar5 = *plVar2;
  }
  return *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8) + (ulonglong)((uint)uVar1 & 1) * 8;
}




longlong * FUN_1419c5650(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c5683;
  }
  lVar2 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = lVar2;
  }
LAB_1419c5683:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 1;
  return param_1;
}




bool FUN_1419c56b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1419c5710(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419c5770(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419d8f78);
}




longlong FUN_1419c5830(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c5852;
  }
  lVar2 = *plVar1;
LAB_1419c5852:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419c5870(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419c5940(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c5972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419c5a30(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419c5ad0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419c5b90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_1419c5c40(void *param_1,longlong param_2,void *param_3)

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




longlong * FUN_1419c5cf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c5d23;
  }
  lVar2 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = lVar2;
  }
LAB_1419c5d23:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 1;
  return param_1;
}




bool FUN_1419c5d50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1419c5d90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419c5dd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c5de0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1419c5e70(longlong param_1,longlong param_2)

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




void FUN_1419c5ed0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419c5ef0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c5f12;
  }
  lVar2 = *plVar1;
LAB_1419c5f12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419c5f30(longlong *param_1)

{
  FUN_1419c5870(param_1);
  return param_1;
}




void FUN_1419c5f60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1419c6030(longlong *param_1)

{
  FUN_1419c5940(param_1);
  return param_1;
}




void FUN_1419c6080(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong * FUN_1419c60f0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419c5870(param_1);
  return param_2;
}




void FUN_1419c6120(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419c6120(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 * FUN_1419c6180(undefined8 *param_1)

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




longlong FUN_1419c6210(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c6232;
  }
  lVar2 = *plVar1;
LAB_1419c6232:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419c6250(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c6270(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419c6290(longlong *param_1)

{
  FUN_1419c5940(param_1);
  return param_1;
}




undefined8 * FUN_1419c62d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419c6350(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1419c63c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419c6400(undefined8 *param_1)

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




void FUN_1419c6440(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419c6120(param_1,(longlong *)plVar2[2]);
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




void FUN_1419c64c0(void)

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




undefined8 * FUN_1419c6520(undefined8 *param_1)

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




void * FUN_1419c6570(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419c65e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c6600(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c6620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  while (lVar1 != 0) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar1 = *(longlong *)(param_1 + 0x38) + -1, *(longlong *)(param_1 + 0x38) = lVar1, lVar1 == 0)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  while (lVar1 != 0) {
    lVar1 = lVar1 + -1;
    if (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1 * 8) != 0) {
      operator_delete(*(void **)(*(longlong *)(param_1 + 0x20) + lVar1 * 8));
    }
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1419c66c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1419c6730(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419c6770(undefined8 *param_1)

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




void FUN_1419c67c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419c64c0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419c6800(undefined8 *param_1)

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




void FUN_1419c6880(undefined8 *param_1)

{
  FUN_1419c6620((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419c68b0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1419c6900(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[6];
  uVar1 = uVar2 + param_1[7];
  *param_2 = 0;
  if (uVar1 < uVar2) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}




void FUN_1419c6990(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419c69b0(undefined8 *param_1)

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




undefined8 * FUN_1419c6a20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419c6ab0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419d8f78);
  }
  plVar5 = FUN_1419c62d0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1419c6df0(undefined8 *param_1)

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




longlong FUN_1419c6e70(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  if (uVar4 + *(longlong *)(param_1 + 0x48) < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  while( true ) {
    uVar5 = *(ulonglong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x48);
    if (uVar5 < *(ulonglong *)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (uVar4 == uVar5) break;
    uVar5 = uVar4 >> 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar4) {
      _invalid_parameter_noinfo();
    }
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x28) <= uVar5) {
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar1;
      }
      uVar5 = uVar5 - *(longlong *)(lVar2 + 0x28);
    }
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar5 * 8) + (ulonglong)((uint)uVar4 & 1) * 8);
    if (lVar2 == 0) {
      log_InlineLogERROR(&DAT_1419d2218);
    }
    else {
      lVar3 = FUN_1419c27e0(lVar2,param_2);
      if (lVar3 != 0) {
        return lVar2;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar4) {
      _invalid_parameter_noinfo();
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}




undefined8 * FUN_1419c7000(undefined8 *param_1)

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




longlong * FUN_1419c7060(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419c71bd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419c71ec;
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
      goto LAB_1419c71bd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419c6ab0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419c71ec:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419c7210(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419d9090);
  }
  FUN_1419c5870(param_3);
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
        goto LAB_1419c73fc;
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
LAB_1419c73fc:
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
            FUN_1419c5e70((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419c54f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1419c5e70((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1419c54f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419c5e70((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1419c54f0((longlong)param_1,plVar7);
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




exception * FUN_1419c75d0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_1419c7630(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1419c7700(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c7720(longlong param_1,ulonglong param_2)

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
    FUN_1419c5770();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0xfffffffffffffff - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30) >> 1;
  _Dst_00 = (void *)FUN_1419c5f60(param_1 + 0x10,uVar2 + param_2);
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




longlong * FUN_1419c78e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419c6440((longlong)param_1);
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
    FUN_1419c7210(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419c7a90(undefined8 *param_1)

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




longlong FUN_1419c7ae0(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint local_res8;
  undefined4 local_resc;
  longlong local_20 [4];
  
  local_res8 = param_2;
  local_resc = param_3;
  plVar1 = FUN_1419c7060((longlong *)(param_1 + 0x58),local_20,&local_res8);
  return plVar1[2];
}




ulonglong FUN_1419c7b30(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x88))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x21);
  puVar4 = *(undefined8 **)(param_1 + 0x88);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x21);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x88);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  uVar3 = *(ulonglong *)(param_1 + 0x88);
  local_18 = plVar2;
  uVar7 = plVar8[1];
  local_10 = uVar7;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x58))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar5 = local_10;
  if (local_10 != uVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar5 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_01;
    }
    if (*(int *)(uVar5 + 0x1c) == param_3) {
      return CONCAT71((int7)(uVar7 >> 8),1);
    }
  }
  return uVar7 & 0xffffffffffffff00;
}




void FUN_1419c7c50(longlong param_1,uint param_2)

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
  
  plVar1 = (longlong *)(param_1 + 0x58);
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x88))[1];
  cVar2 = *(char *)((longlong)puVar6 + 0x21);
  puVar4 = *(undefined8 **)(param_1 + 0x88);
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
    cVar2 = *(char *)((longlong)puVar5 + 0x21);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x88);
  local_30 = puVar4;
  local_38 = *plVar1;
  if (*plVar1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar6) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_28 = *plVar1;
  }
  else {
    plVar7 = &local_38;
  }
  local_18 = *plVar7;
  lVar3 = *(longlong *)(param_1 + 0x88);
  local_10 = plVar7[1];
  if ((local_18 == 0) || (local_18 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar3) {
    local_18 = *plVar7;
    local_10 = plVar7[1];
    FUN_1419c7210(plVar1,&local_28,&local_18);
  }
  return;
}




void FUN_1419c7d50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x30) + (char)*(longlong *)(param_1 + 0x38) & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 2U >> 1)) {
    FUN_1419c7720(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  uVar4 = uVar3 >> 1;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
    uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = pvVar2;
  }
  puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar3 & 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}




undefined8 * FUN_1419c7e00(undefined8 *param_1)

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
  lVar2 = FUN_1419c64c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419c7e80(longlong *param_1)

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
  FUN_1419c78e0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




ulonglong FUN_1419c7ef0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong extraout_RAX;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  int iVar8;
  int local_res8 [2];
  undefined8 *local_res10;
  
  param_1[10] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    iVar8 = 1;
    do {
      local_res10 = (undefined8 *)FUN_1419c2ea0(0x30);
      if (local_res10 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        local_res8[0] = iVar8;
        puVar5 = FUN_1419c24d0(local_res10,local_res8);
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1419c2510((longlong)puVar5,param_1[10]);
        if (((*(char *)(param_1 + 8) + (char)param_1[9] & 1U) == 0) && ((ulonglong)param_1[7] <= param_1[9] + 2 >> 1)) {
          FUN_1419c7720((longlong)(param_1 + 2),1);
        }
        lVar2 = param_1[8];
        lVar3 = param_1[9];
        uVar7 = (ulonglong)(lVar2 + lVar3) >> 1;
        if ((ulonglong)param_1[7] <= uVar7) {
          uVar7 = uVar7 - param_1[7];
        }
        if (*(longlong *)(param_1[6] + uVar7 * 8) == 0) {
          pvVar6 = operator_new(0x10);
          *(void **)(param_1[6] + uVar7 * 8) = pvVar6;
        }
        puVar1 = (undefined8 *)(*(longlong *)(param_1[6] + uVar7 * 8) + (ulonglong)((uint)(lVar2 + lVar3) & 1) * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = puVar5;
        }
        param_1[9] = param_1[9] + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x65);
    uVar4 = param_1[9];
    param_1[1] = uVar4;
    *param_1 = uVar4;
    uVar7 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar7;
}




undefined8 * FUN_1419c8040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  undefined8 *local_res10;
  
  uVar7 = param_1[8];
  if (param_1[9] + uVar7 < uVar7) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)param_1[2];
  puVar5 = (undefined8 *)0x0;
  while( true ) {
    uVar8 = param_1[8] + param_1[9];
    if (uVar8 < (ulonglong)param_1[8]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (uVar7 == uVar8) {
      local_res8[0] = (int)param_1[9] + 1;
      local_res10 = (undefined8 *)FUN_1419c2ea0(0x30);
      if (local_res10 != (undefined8 *)0x0) {
        puVar5 = FUN_1419c24d0(local_res10,local_res8);
      }
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        FUN_1419c2510((longlong)puVar5,param_1[10]);
        if ((((char)param_1[9] + (char)param_1[8] & 1U) == 0) && ((ulonglong)param_1[7] <= param_1[9] + 2U >> 1)) {
          FUN_1419c7720((longlong)(param_1 + 2),1);
        }
        lVar2 = param_1[9];
        lVar3 = param_1[8];
        uVar7 = (ulonglong)(lVar2 + lVar3) >> 1;
        if ((ulonglong)param_1[7] <= uVar7) {
          uVar7 = uVar7 - param_1[7];
        }
        if (*(longlong *)(param_1[6] + uVar7 * 8) == 0) {
          pvVar6 = operator_new(0x10);
          *(void **)(param_1[6] + uVar7 * 8) = pvVar6;
        }
        puVar4 = (undefined8 *)(*(longlong *)(param_1[6] + uVar7 * 8) + (ulonglong)((uint)(lVar2 + lVar3) & 1) * 8);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = puVar5;
        }
        param_1[9] = param_1[9] + 1;
        param_1[1] = param_1[1] + 1;
        *param_1 = *param_1 + 1;
      }
      return puVar5;
    }
    uVar8 = uVar7 >> 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*plVar1;
    }
    if ((ulonglong)(puVar4[7] + puVar4[6]) <= uVar7) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar5;
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)*plVar1;
    }
    if ((ulonglong)puVar4[5] <= uVar8) {
      puVar4 = puVar5;
      if (plVar1 != (longlong *)0x0) {
        puVar4 = (undefined8 *)*plVar1;
      }
      uVar8 = uVar8 - puVar4[5];
    }
    puVar4 = puVar5;
    if (plVar1 != (longlong *)0x0) {
      puVar4 = (undefined8 *)*plVar1;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(puVar4[4] + uVar8 * 8) + (ulonglong)((uint)uVar7 & 1) * 8);
    if ((puVar4 != (undefined8 *)0x0) && (*(char *)(puVar4 + 5) != '\0')) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      puVar4 = puVar5;
    }
    else {
      puVar4 = (undefined8 *)*plVar1;
    }
    if ((ulonglong)(puVar4[7] + puVar4[6]) <= uVar7) {
      _invalid_parameter_noinfo();
    }
    uVar7 = uVar7 + 1;
  }
  return puVar4;
}




void FUN_1419c8250(longlong *param_1)

{
  FUN_1419c7e80(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c8280(longlong *param_1)

{
  FUN_1419c7e80(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c82b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28 [2];
  
  uVar5 = *(ulonglong *)(param_1 + 0x40);
  if (uVar5 + *(longlong *)(param_1 + 0x48) < uVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  local_48 = plVar1;
  while( true ) {
    uVar4 = *(ulonglong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x48);
    puStack_40 = (undefined8 *)uVar5;
    if (uVar4 < *(ulonglong *)(param_1 + 0x40)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (uVar5 == uVar4) break;
    uVar4 = uVar5 >> 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x30)) <= uVar5) {
      _invalid_parameter_noinfo();
    }
    if (plVar1 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x28) <= uVar4) {
      if (plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar1;
      }
      uVar4 = uVar4 - *(longlong *)(lVar3 + 0x28);
    }
    if (plVar1 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    puVar2 = *(undefined8 **)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar5 & 1) * 8);
    if (puVar2 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1419d2218);
    }
    else {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x30)) <= uVar5) {
      _invalid_parameter_noinfo();
    }
    uVar5 = uVar5 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x10);
  FUN_1419c6620((longlong)puVar2);
  plVar1 = (longlong *)(param_1 + 0x58);
  puStack_40 = *(undefined8 **)(param_1 + 0x88);
  local_48 = (longlong *)*plVar1;
  uStack_30 = *puStack_40;
  local_38 = local_48;
  FUN_1419c78e0(plVar1,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete(*(void **)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  operator_delete((void *)*plVar1);
  FUN_1419c6620((longlong)puVar2);
  operator_delete((void *)*puVar2);
  return;
}




undefined8 * FUN_1419c84f0(undefined8 *param_1)

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
  lVar2 = FUN_1419c64c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419c8570(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 2);
    plVar2 = plVar1;
  }
  param_1[2] = plVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1419c84f0(param_1 + 0xb);
  return param_1;
}




void FUN_1419c85f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  if ((((-1 < param_2) &&
       (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                          (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe), param_2 <= lVar1)) &&
      (lVar1 = FUN_1419c2800(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10)), lVar1 != 0)) &&
     (((*(longlong *)(param_1 + 0xf8) <= param_2 && (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x188))(), param_2 <= lVar2)) &&
      (lVar2 = *(longlong *)(lVar1 + 0xf8), lVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x188))(), lVar2 + param_2 <= lVar3)))) {
    *(longlong *)(param_1 + 0xf8) = param_2;
    FUN_1419cd620(local_418);
    uVar4 = FUN_1419cd710(local_418,8,*(undefined8 *)(param_1 + 0xf8));
    if ((char)uVar4 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(lVar1 + 0x10),local_418);
    }
    FUN_1419cd670((undefined8 *)local_418);
  }
  return;
}




void FUN_1419c86f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  if ((((-1 < param_2) &&
       (uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                          (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe),
       param_2 <= (longlong)(ulonglong)uVar1)) && (lVar2 = FUN_1419c2800(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10)), lVar2 != 0)) &&
     (((*(longlong *)(param_1 + 0x100) <= param_2 || (param_2 < 0x5f5e101)) || (*(longlong *)(lVar2 + 0x100) + param_2 < 0x5f5e101)))) {
    *(longlong *)(param_1 + 0x100) = param_2;
    FUN_1419cd620(local_418);
    uVar3 = FUN_1419cd6a0(local_418,0xc,*(undefined4 *)(param_1 + 0x100));
    if ((char)uVar3 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(lVar2 + 0x10),local_418);
    }
    FUN_1419cd670((undefined8 *)local_418);
  }
  return;
}




undefined8 FUN_1419c87d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong in_RAX;
  
  if (0 < *(longlong *)(param_1 + 0xf8)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))
                       (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),*(longlong *)(param_1 + 0xf8),0);
    if ((char)in_RAX == '\0') goto LAB_1419c8894;
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))(*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0xf8),0);
    if ((char)in_RAX == '\0') goto LAB_1419c8894;
  }
  if (0 < *(longlong *)(param_1 + 0x100)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x70))
                       (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x100),1);
    if ((char)in_RAX != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x68))(*(longlong **)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x100),1);
      plVar1 = *(longlong **)(param_1 + 0x18);
      if (cVar2 != '\0') {
        in_RAX = (**(code **)(*plVar1 + 0x160))(plVar1,2);
        goto LAB_1419c887b;
      }
      in_RAX = (**(code **)(*plVar1 + 0x160))(plVar1,5,*(undefined4 *)(param_1 + 0x10),param_2,*(undefined4 *)(param_1 + 0x100));
    }
LAB_1419c8894:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_1419c887b:
  return CONCAT71((int7)(in_RAX >> 8),1);
}




void FUN_1419c8990(longlong param_1,longlong *param_2)

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




bool FUN_1419c8a20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1419c8a90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1419c8ba0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c8bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1419c8c30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c8c52;
  }
  lVar2 = *plVar1;
LAB_1419c8c52:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1419c8cc0(longlong param_1,longlong *param_2)

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




void FUN_1419c8d20(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c8d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_1419c8dc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419c8f20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 << 5);
  return;
}




void FUN_1419c8fd0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_1419c9070(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_1419c90b0(void)

{
  if ((DAT_1419da2b0 & 1) == 0) {
    DAT_1419da2b0 = DAT_1419da2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da2a8,"CTrader");
    atexit((_func_5014 *)&LAB_1419d1ca0);
  }
  return &DAT_1419da2a8;
}




void FUN_1419c9110(__uint64 param_1)

{
  if ((DAT_1419da2b0 & 1) == 0) {
    DAT_1419da2b0 = DAT_1419da2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da2a8,"CTrader");
    atexit((_func_5014 *)&LAB_1419d1ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c9165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1419da2a8,param_1);
  return;
}




void FUN_1419c9170(void *param_1)

{
  if ((DAT_1419da2b0 & 1) == 0) {
    DAT_1419da2b0 = DAT_1419da2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da2a8,"CTrader");
    atexit((_func_5014 *)&LAB_1419d1ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c91c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1419da2a8,param_1);
  return;
}




void FUN_1419c91d0(void *param_1)

{
  if ((DAT_1419da2b0 & 1) == 0) {
    DAT_1419da2b0 = DAT_1419da2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da2a8,"CTrader");
    atexit((_func_5014 *)&LAB_1419d1ca0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c9225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1419da2a8,param_1);
  return;
}




bool FUN_1419c9230(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419c9280(longlong param_1,longlong param_2)

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




void FUN_1419c9300(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419c9310(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c9332;
  }
  lVar2 = *plVar1;
LAB_1419c9332:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419c9350(longlong *param_1)

{
  FUN_1419c8ba0(param_1);
  return param_1;
}




longlong FUN_1419c9370(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c9392;
  }
  lVar2 = *plVar1;
LAB_1419c9392:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419c9440(longlong *param_1)

{
  FUN_1419c8d20(param_1);
  return param_1;
}




void FUN_1419c9480(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 << 5);
  return;
}




void FUN_1419c9500(longlong param_1,longlong param_2)

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




longlong * FUN_1419c9560(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419c8ba0(param_1);
  return param_2;
}




undefined8 * FUN_1419c9590(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1419c95d0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c9602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419c9670(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001419c9694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419c9710(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419d9030);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong FUN_1419c97a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419c97c2;
  }
  lVar2 = *plVar1;
LAB_1419c97c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419c97e0(longlong *param_1)

{
  FUN_1419c8ba0(param_1);
  return param_1;
}




void FUN_1419c9800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c9820(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419c9840(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1419c9840(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




longlong * FUN_1419c9890(longlong *param_1)

{
  FUN_1419c8d20(param_1);
  return param_1;
}




undefined8 * FUN_1419c98b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419c9930(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419c9970(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419c99c0(longlong *param_1)

{
  FUN_1419c9670(param_1);
  return param_1;
}




longlong * FUN_1419c99e0(longlong *param_1)

{
  FUN_1419c95d0(param_1);
  return param_1;
}




void FUN_1419c9a00(void)

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




undefined8 * FUN_1419c9a60(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419c9ab0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419d9090);
  }
  FUN_1419c9670(param_3);
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
        goto LAB_1419c9c9c;
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
LAB_1419c9c9c:
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
            FUN_1419c9500((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419c8cc0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1419c9500((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1419c8cc0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1419c9500((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1419c8cc0((longlong)param_1,plVar7);
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




void FUN_1419c9e70(void)

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




undefined8 * FUN_1419c9ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_1419c9f50(longlong *param_1)

{
  FUN_1419c95d0(param_1);
  return param_1;
}




longlong * FUN_1419c9f70(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419c9670(param_1);
  return param_2;
}




void FUN_1419c9fa0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419c9fa0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 * FUN_1419c9ff0(undefined8 *param_1)

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




void * FUN_1419ca030(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419ca070(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_1419c9840(param_1,(longlong *)plVar2[2]);
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




void FUN_1419ca0f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ca110(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419ca190(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1419ca1d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419c9a00();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1419ca230(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419c9e70();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419ca270(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419d8f78);
  }
  plVar5 = FUN_1419c9ed0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_1419ca5b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1419c9fa0(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_1419ca630(undefined8 *param_1)

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




undefined8 * FUN_1419ca680(undefined8 *param_1)

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




undefined1 FUN_1419ca6d0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
    return 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_1419ca070(param_1 + 0x28);
  FUN_1419ca070(param_1 + 0x68);
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return 1;
}




void FUN_1419ca7b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419ca7d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419ca7f0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419ca880(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419d8f78);
  }
  plVar5 = FUN_1419c98b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_1419cabc0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419cad1d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419cad4c;
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
      goto LAB_1419cad1d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419ca270(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419cad4c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_1419cad70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419ca5b0((longlong)param_1);
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
    FUN_1419c9ab0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419caf20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419caf80(undefined8 *param_1)

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




undefined8 * FUN_1419cafd0(undefined8 *param_1)

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




undefined8 FUN_1419cb020(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  ulonglong uVar6;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar7;
  longlong lVar8;
  
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x28);
  puVar7 = (undefined8 *)*puVar5;
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x28))) {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX;
    }
    if (puVar7 == puVar2) {
      return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar1;
    }
    if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf8))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(puVar7 + 3));
    if (cVar4 != '\0') {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x110))
                        (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(puVar7 + 3),0,0);
      if ((int)uVar6 == 0) {
        return uVar6 & 0xffffffffffffff00;
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),param_2);
      if (param_3 != '\0') {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar1;
        }
        if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x170))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(puVar7 + 3),*(undefined4 *)(param_1 + 0x10));
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(puVar7 + 3),param_2);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar7 + 0x1d) == '\0') {
      puVar2 = (undefined8 *)puVar7[2];
      if (*(char *)((longlong)puVar2 + 0x1d) == '\0') {
        cVar4 = *(char *)((longlong)*puVar2 + 0x1d);
        puVar5 = (undefined8 *)*puVar2;
        while (puVar7 = puVar2, cVar4 == '\0') {
          cVar4 = *(char *)((longlong)*puVar5 + 0x1d);
          puVar2 = puVar5;
          puVar5 = (undefined8 *)*puVar5;
        }
      }
      else {
        cVar4 = *(char *)((longlong)puVar7[1] + 0x1d);
        puVar3 = (undefined8 *)puVar7[1];
        puVar2 = puVar7;
        while ((puVar5 = puVar3, puVar7 = puVar5, cVar4 == '\0' && (puVar2 == (undefined8 *)puVar5[2]))) {
          cVar4 = *(char *)((longlong)puVar5[1] + 0x1d);
          puVar3 = (undefined8 *)puVar5[1];
          puVar2 = puVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX_00;
    }
  } while( true );
}




longlong * FUN_1419cb230(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419cb38d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419cb3bc;
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
      goto LAB_1419cb38d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419ca880(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419cb3bc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419cb3e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419d9090);
  }
  FUN_1419c8ba0(param_3);
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
        goto LAB_1419cb5cc;
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
LAB_1419cb5cc:
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
            FUN_1419c9280((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1419c8990((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_1419c9280((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_1419c8990((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_1419c9280((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_1419c8990((longlong)param_1,plVar10);
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




longlong * FUN_1419cb7a0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1419cb870(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419cb890(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419cb8b0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1419ca270(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1419ca270(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1419ca270(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_1419ca270(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1419ca270(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_1419ca270(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1419ca270(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1419cabc0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_1419cbbd0(longlong *param_1)

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
  FUN_1419cad70(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1419cbc40(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_1419cbd30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419ca070((longlong)param_1);
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
    FUN_1419cb3e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419cbee0(undefined8 *param_1)

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




undefined8 * FUN_1419cbf30(undefined8 *param_1)

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




void FUN_1419cbf80(longlong param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x58))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x1d);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar6 + 3) < param_3) {
      puVar5 = (undefined8 *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x1d);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x58);
  local_40 = puVar3;
  local_48 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_3 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_38;
    local_30 = *(undefined8 *)(param_1 + 0x58);
    local_38 = *(longlong *)(param_1 + 0x28);
  }
  else {
    plVar7 = &local_48;
  }
  local_28 = *plVar7;
  lVar2 = *(longlong *)(param_1 + 0x58);
  local_20 = plVar7[1];
  if ((local_28 == 0) || (local_28 != *(longlong *)(param_1 + 0x28))) {
    _invalid_parameter_noinfo();
  }
  if (local_20 != lVar2) {
    local_28 = *plVar7;
    local_20 = plVar7[1];
    FUN_1419cb3e0((undefined8 *)(param_1 + 0x28),&local_38,&local_28);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))(*(longlong **)(param_1 + 0x18),param_3);
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) - iVar4;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x138))(*(longlong **)(param_1 + 0x18),param_2,*(undefined4 *)(param_1 + 0x10),param_3,1);
  }
  return;
}




bool FUN_1419cc0d0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x58))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x1d);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar6 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x1d);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x58);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar5 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x58);
    local_28 = *(longlong *)(param_1 + 0x28);
  }
  else {
    plVar5 = &local_38;
  }
  local_18 = *plVar5;
  lVar2 = *(longlong *)(param_1 + 0x58);
  local_10 = plVar5[1];
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x28))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar2;
}




longlong FUN_1419cc1b0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint local_res8;
  undefined2 local_resc;
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
    local_res8 = *param_2;
    local_resc = 0;
    local_38 = plVar6;
    puStack_30 = puVar4;
    plVar3 = FUN_1419cb8b0(param_1,local_28,(longlong *)&local_38,&local_res8);
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




void FUN_1419cc2b0(longlong *param_1)

{
  FUN_1419cbbd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419cc2e0(longlong *param_1)

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




void FUN_1419cc3a0(longlong *param_1)

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
  FUN_1419cbd30(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1419cc410(undefined8 *param_1)

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




undefined8 * FUN_1419cc460(undefined8 *param_1)

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




void FUN_1419cc4b0(longlong *param_1)

{
  FUN_1419cbbd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419cc4e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  uint uVar10;
  longlong local_458;
  longlong local_450;
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  lVar6 = FUN_1419c2800(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))(*(longlong **)(param_1 + 0x18),param_2);
  if (cVar3 == '\0') {
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  }
  else {
    local_res8[0] = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))(*(longlong **)(param_1 + 0x18),param_2);
    psVar7 = (short *)FUN_1419cc1b0((longlong *)(param_1 + 0xa8),local_res8);
    sVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),param_2);
    *psVar7 = *psVar7 + sVar4;
  }
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))(*(longlong **)(param_1 + 0x18),param_2);
  if (lVar6 == 0) {
    log_InlineLogERROR(&DAT_1419d2218);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(lVar6 + 0x10));
    if ((cVar3 == '\0') &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10)), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))(*(longlong **)(param_1 + 0x18),param_2);
    if (((((cVar3 == '\0') || (bVar2)) &&
         ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x88))(*(longlong **)(param_1 + 0x18),param_2), cVar3 == '\0' || (bVar2)))) &&
        (*(int *)(param_1 + 0x60) < 0x15)) &&
       ((((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))(*(longlong **)(param_1 + 0x18),param_2,2), cVar3 == '\0' &&
          (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))(*(longlong **)(param_1 + 0x18),param_2,1), cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),param_2), cVar3 == '\0'
          || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10)), cVar3 != '\0'))))
        || ((bVar2 || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                                         (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(lVar6 + 0x10)), cVar3 != '\0')))))) {
      uVar10 = *(uint *)(param_1 + 0xe8);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                        (*(longlong **)(param_1 + 0x18),*(undefined4 *)(lVar6 + 0x10),param_2,param_1 + 0xa8,uVar10,iVar5 + *(int *)(param_1 + 0xec));
      if (cVar3 != '\0') {
        FUN_1419cb7a0((longlong *)(param_1 + 0x28),&local_458,local_res10);
        lVar1 = *(longlong *)(param_1 + 0x58);
        if ((local_458 == 0) || (local_458 != *(longlong *)(param_1 + 0x28))) {
          _invalid_parameter_noinfo();
        }
        if (local_450 != lVar1) {
          FUN_1419cd620(local_438);
          uVar9 = FUN_1419cd6a0(local_438,0xb,param_2);
          if ((char)uVar9 == '\0') {
            log_InlineLogERROR(&DAT_1419d2218);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),local_438);
          }
          FUN_1419cd670((undefined8 *)local_438);
          return;
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x138))
                  (*(longlong **)(param_1 + 0x18),*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(param_1 + 0x10),param_2,uVar10 & 0xffffff00);
        FUN_1419cb230((longlong *)(param_1 + 0x28),&local_458,local_res10);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + iVar5;
        return;
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))(*(longlong **)(param_1 + 0x18),param_2);
      if (cVar3 == '\0') {
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
      }
      else {
        local_res8[0] = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))(*(longlong **)(param_1 + 0x18),param_2);
        psVar7 = (short *)FUN_1419cc1b0((longlong *)(param_1 + 0xa8),local_res8);
        sVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),param_2);
        *psVar7 = *psVar7 - sVar4;
      }
    }
  }
  pIVar8 = theInstance();
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_NOT_FOR_TRADE");
  (**(code **)(lVar6 + 0x148))(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),uVar9,0xff0000,0x7d5);
  FUN_1419cd620(local_438);
  uVar9 = FUN_1419cd6a0(local_438,0xb,param_2);
  if ((char)uVar9 == '\0') {
    log_InlineLogERROR(&DAT_1419d2218);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),local_438);
  }
  FUN_1419cd670((undefined8 *)local_438);
  return;
}




void FUN_1419cc8e0(longlong *param_1)

{
  FUN_1419cc3a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419cc910(undefined8 *param_1)

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
  lVar2 = FUN_1419c9a00();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419cc990(undefined8 *param_1)

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
  lVar2 = FUN_1419c9e70();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419cca10(longlong *param_1)

{
  FUN_1419cc3a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419cca40(undefined8 *param_1)

{
  *param_1 = trade::CTrader::vftable;
  FUN_1419cbbd0(param_1 + 0x15);
  operator_delete((void *)param_1[0x15]);
  FUN_1419cc3a0(param_1 + 0xd);
  operator_delete((void *)param_1[0xd]);
  FUN_1419cc3a0(param_1 + 5);
  operator_delete((void *)param_1[5]);
  return;
}




ulonglong FUN_1419ccad0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




int FUN_1419ccaf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  FUN_1419cc2e0(param_2);
  plVar2 = *(longlong **)(param_1 + 0x28);
  iVar8 = 0;
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x58);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar6 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x58);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x28))) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar3) {
            return iVar8;
          }
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
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe0))(*(longlong **)(param_1 + 0x18),(int)plVar6[3]);
          iVar8 = iVar8 + iVar4;
          if (499 < iVar4) {
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
            FUN_1419c4170(param_2,(undefined4 *)(plVar6 + 3));
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar6 + 0x1d) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar6;
        }
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x1d) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x1d);
        plVar6 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x1d);
          plVar3 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      plVar3 = (longlong *)plVar6[1];
    } while (*(char *)((longlong)plVar3 + 0x1d) != '\0');
    do {
      plVar5 = plVar3;
      plVar3 = plVar5;
      if (plVar6 != (longlong *)plVar5[2]) break;
      plVar3 = (longlong *)plVar5[1];
      plVar6 = plVar5;
    } while (*(char *)((longlong)plVar3 + 0x1d) == '\0');
  } while( true );
}




undefined8 * FUN_1419ccc40(undefined8 *param_1)

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
  lVar2 = FUN_1419c9a00();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419cccc0(undefined8 *param_1)

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
  lVar2 = FUN_1419c9e70();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419ccd40(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = trade::CTrader::vftable;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  FUN_1419ccc40(param_1 + 5);
  FUN_1419ccc40(param_1 + 0xd);
  FUN_1419cccc0(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}




undefined8 * FUN_1419ccdd0(undefined8 *param_1,uint param_2)

{
  FUN_1419cca40(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1419c9170(param_1);
  }
  return param_1;
}




ulonglong FUN_1419cce00(longlong param_1,undefined4 param_2,byte *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 extraout_RAX_01;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *local_res20;
  longlong *local_a8;
  undefined8 *puStack_a0;
  longlong *local_98;
  undefined8 *puStack_90;
  longlong *local_88 [6];
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  iVar12 = 0;
  iVar13 = 0;
  local_res20 = operator_new(8);
  if (local_res20 == (longlong *)0x0) {
    local_88[0] = (longlong *)0x0;
  }
  else {
    *local_res20 = (longlong)local_88;
    local_88[0] = local_res20;
  }
  local_a8 = local_res20;
  local_58 = (undefined8 *)FUN_1419c9e70();
  *(undefined1 *)((longlong)local_58 + 0x21) = 1;
  local_58[1] = local_58;
  *local_58 = local_58;
  local_58[2] = local_58;
  local_50 = 0;
  plVar10 = (longlong *)**(undefined8 **)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x28);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x58);
    if ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) || (*(longlong **)(param_1 + 0x28) != plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == plVar10) {
      iVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))(*(longlong **)(param_1 + 0x18),param_2,local_88);
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x108))(*(longlong **)(param_1 + 0x18),param_2,iVar8 + iVar12,iVar13);
      if (cVar4 == '\0') {
        puStack_a0 = (undefined8 *)*local_58;
        local_98 = local_88[0];
        puStack_90 = local_58;
        local_a8 = local_88[0];
        FUN_1419cad70((longlong *)local_88,local_48,(longlong *)&local_a8,(longlong *)&local_98);
        operator_delete(local_58);
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        operator_delete(local_88[0]);
        return extraout_RAX_00 & 0xffffffffffffff00;
      }
      puStack_a0 = (undefined8 *)*local_58;
      local_98 = local_88[0];
      puStack_90 = local_58;
      local_a8 = local_88[0];
      FUN_1419cad70((longlong *)local_88,local_48,(longlong *)&local_a8,(longlong *)&local_98);
      operator_delete(local_58);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      operator_delete(local_88[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf8))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),(int)plVar10[3]);
    if (cVar4 == '\0') break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xc0))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
    if (cVar4 == '\0') {
      iVar12 = iVar12 + 1;
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar1;
      }
      if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar7);
      psVar9 = (short *)FUN_1419cc1b0((longlong *)local_88,(uint *)&local_res20);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar1;
      }
      if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      sVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
      *psVar9 = *psVar9 + sVar6;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
    iVar13 = iVar13 + iVar8;
    if (*param_3 == 0) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar1;
      }
      if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xa8))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
      *param_3 = *param_3 | bVar5;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar1;
      }
      if (plVar10 == *(longlong **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x128))(*(longlong **)(param_1 + 0x18),(int)plVar10[3]);
      *param_3 = *param_3 | bVar5;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar10 + 0x1d) == '\0') {
      plVar2 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
        cVar4 = *(char *)(*plVar2 + 0x1d);
        plVar10 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar2 + 0x1d);
          plVar10 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar4 = *(char *)(plVar10[1] + 0x1d);
        plVar3 = (longlong *)plVar10[1];
        plVar2 = plVar10;
        while ((plVar10 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar10[2]))) {
          cVar4 = *(char *)(plVar10[1] + 0x1d);
          plVar3 = (longlong *)plVar10[1];
          plVar2 = plVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  puStack_90 = (undefined8 *)*local_58;
  local_a8 = local_88[0];
  puStack_a0 = local_58;
  local_98 = local_88[0];
  FUN_1419cad70((longlong *)local_88,local_48,(longlong *)&local_98,(longlong *)&local_a8);
  operator_delete(local_58);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  operator_delete(local_88[0]);
  return extraout_RAX & 0xffffffffffffff00;
}




longlong * FUN_1419cd2b0(undefined8 param_1,int param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if ((param_3 == 0) || (param_2 == 0)) {
    log_InlineLogERROR(&DAT_1419d2218,"IF_NOT","pConsumer && idActor","f:\\version\\cqserver-78.0.11-1204\\modules\\trade\\src\\trader.cpp",0x17);
    plVar3 = (longlong *)0x0;
  }
  else {
    if ((DAT_1419da2b0 & 1) == 0) {
      DAT_1419da2b0 = DAT_1419da2b0 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_1419da2a8,"CTrader");
      atexit((_func_5014 *)&LAB_1419d1ca0);
    }
    puVar2 = CMyHeap::Alloc((CMyHeap *)&DAT_1419da2a8,0x108);
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = FUN_1419ccd40(puVar2,param_2,param_1);
    }
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419d2218,"IF_NOT","pTrader","f:\\version\\cqserver-78.0.11-1204\\modules\\trade\\src\\trader.cpp",0x1d);
      plVar3 = (longlong *)0x0;
    }
    else {
      cVar1 = FUN_1419ca6d0((longlong)plVar3,param_3);
      if (cVar1 == '\0') {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar3 = (longlong *)0x0;
      }
    }
  }
  return plVar3;
}




CMsg * FUN_1419cd3e0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1419cd410(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1419cd420(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419cd427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1419cd430(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419cd437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1419cd440(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419cd447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1419cd450(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419cd480(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = trade::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419cd4d0(undefined8 *param_1)

{
  *param_1 = trade::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1419cd540(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_1419cd570(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419d2218);
    }
    else {
      (**(code **)(*param_3 + 0x18))(param_3);
    }
  }
  return;
}




undefined8 * FUN_1419cd5d0(undefined8 *param_1,byte param_2)

{
  *param_1 = trade::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419cd620(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = trade::CMsgTrade::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419cd670(undefined8 *param_1)

{
  *param_1 = trade::CMsgTrade::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419cd6a0(CMsg *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xe;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x420;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 4) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_1419cd710(CMsg *param_1,undefined2 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xe;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x420;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 4) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_1419cd780(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x420;
}




void FUN_1419cd7b0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419d2218);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x408);
      switch(*(undefined2 *)(lVar1 + 0xc)) {
      case 1:
        (**(code **)(*param_3 + 8))(param_3,param_2,*(undefined4 *)(lVar1 + 4));
        break;
      case 2:
        (**(code **)(*param_3 + 0x18))(param_3,param_2);
        break;
      case 6:
        (**(code **)(*param_3 + 0x30))(param_3,param_2,*(undefined4 *)(lVar1 + 4));
        break;
      case 7:
        (**(code **)(*param_3 + 0x40))(param_3,param_2,*(undefined8 *)(lVar1 + 4));
        break;
      case 10:
        (**(code **)(*param_3 + 0x20))(param_3,param_2);
        break;
      case 0xd:
        (**(code **)(*param_3 + 0x48))(param_3,param_2,*(undefined4 *)(lVar1 + 4));
        break;
      case 0x10:
        (**(code **)(*param_3 + 0x28))(param_3,param_2);
        break;
      case 0x11:
        (**(code **)(*param_3 + 0x10))(param_3,param_2);
        break;
      case 0x12:
        (**(code **)(*param_3 + 0x10))(param_3,param_2);
        (**(code **)(*param_3 + 0x58))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4));
      }
    }
  }
  return;
}




undefined8 * FUN_1419cd940(undefined8 *param_1,byte param_2)

{
  *param_1 = trade::CMsgTrade::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1419da2e8);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1419da2e8);
    local_res18[0] = _decode_pointer(DAT_1419da2e0);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1419da2e8 = _encode_pointer(local_res10);
    DAT_1419da2e0 = _encode_pointer(local_res18[0]);
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




bool FUN_1419cdb80(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1419da2e0 = _encode_pointer(puVar1);
  DAT_1419da2e8 = DAT_1419da2e0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1419ce0ac();
    atexit(FUN_1419ce0e4);
    atexit((_func_5014 *)&LAB_1419ce0a0);
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
    if (DAT_1419da2b4 < 1) {
      return 0;
    }
    DAT_1419da2b4 = DAT_1419da2b4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1419da2d0 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419da2d0;
        pvVar3 = DAT_1419da2d0;
      }
      DAT_1419da2d0 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419cdc5a;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419cdc5a:
    if (DAT_1419da2c8 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1419da2e8);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1419da2e0);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1419da2e8);
            plVar12 = (longlong *)_decode_pointer(DAT_1419da2e0);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1419da2e0 = _encoded_null();
        DAT_1419da2e8 = DAT_1419da2e0;
      }
      DAT_1419da2c8 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1419da2d0 = (void *)0x0;
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
      bVar13 = DAT_1419da2d0 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419da2d0;
        pvVar3 = DAT_1419da2d0;
      }
      DAT_1419da2d0 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419cdd83;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419cdd83:
    if (DAT_1419da2c8 == 0) {
      DAT_1419da2c8 = 1;
      iVar4 = _initterm_e(&DAT_1419d21c8,&DAT_1419d21d8);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1419d21b8,&DAT_1419d21c0);
      DAT_1419da2c8 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1419da2d0 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1419da2d8 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1419da2d8), BVar5 != 0)) {
      (*DAT_1419da2d8)(param_1,2,param_3);
    }
    DAT_1419da2b4 = DAT_1419da2b4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001419cdefc) */
/* WARNING: Removing unreachable block (ram,0x0001419cde93) */
/* WARNING: Removing unreachable block (ram,0x0001419cdf37) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1419da2b4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1419da280 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1419da280 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1419c1380();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1419c1380();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1419da280 = 0xffffffff;
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




undefined8 FUN_1419cdfb4(undefined8 *param_1)

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




void FUN_1419ce0ac(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419d4820; puVar1 < &DAT_1419d4820; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1419ce0e4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419d4830; puVar1 < &DAT_1419d4830; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1419c0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1419c0000);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  if (DAT_1419da288 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1419da288 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1419da288 == 0x2b992ddfa232) {
      DAT_1419da288 = 0x2b992ddfa233;
    }
  }
  _DAT_1419da290 = ~DAT_1419da288;
  return;
}




void Unwind_1419ce310(undefined8 param_1,longlong param_2)

{
  FUN_1419c1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce330(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc));
  return;
}




void Unwind_1419ce350(undefined8 param_1,longlong param_2)

{
  FUN_1419cd4d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_1419ce370(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1419c111a;
}




void Unwind_1419ce3b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1419ce3d0(undefined8 param_1,longlong param_2)

{
  FUN_1419c1050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce3f0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc));
  return;
}




void Unwind_1419ce410(undefined8 param_1,longlong param_2)

{
  FUN_1419cd4d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_1419ce430(void)

{
  log_InlineLogCATCH_ERROR("trade::pMsg->Process(idActor), idActor:%d, MsgType:%d, SubType:%d @%s,%d");
  return &DAT_1419c14cc;
}




void Unwind_1419ce480(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419ce4a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1419c157b;
}




void Unwind_1419ce4e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1419ce500(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419ce520(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419ce540(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_1419ce560(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1419c208f;
}




void Unwind_1419ce5a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce5c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce5e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce680(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce6a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce6c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce700(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce720(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce740(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce760(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce780(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce7a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce7c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




undefined * Catch_1419ce7e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419c2561;
}




undefined * Catch_1419ce820(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419c2589;
}




void Unwind_1419ce860(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419ce880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419ce8a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419ce8c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1419ce8e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419ce900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419ce980(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419ce9a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419ce9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419ce9e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cea00(void)

{
  DAT_1419da2a0 = DAT_1419da2a0 & 0xfffffffe;
  return;
}




void Unwind_1419cea20(void)

{
  DAT_1419da2a0 = DAT_1419da2a0 & 0xfffffffe;
  return;
}




void Unwind_1419cea40(void)

{
  DAT_1419da2a0 = DAT_1419da2a0 & 0xfffffffe;
  return;
}




void Unwind_1419cea60(void)

{
  DAT_1419da2a0 = DAT_1419da2a0 & 0xfffffffe;
  return;
}




void Unwind_1419cea80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419ceaa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419ceac0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ceae0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419ceb00(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419ceb20(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ceb40(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419ceb60(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ceb80(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ceba0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cebc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419cebe0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419cec10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419cec30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419cec60(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cec80(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419ceca0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cecc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3890((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cece0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419ced00(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419ced20(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419ced40(undefined8 param_1,longlong param_2)

{
  FUN_1419c3890((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419ced60(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419ced80(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419ceda0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cedc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3890((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cede0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cee00(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cee20(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cee40(undefined8 param_1,longlong param_2)

{
  FUN_1419c3890((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cee60(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x180));
  return;
}




void Unwind_1419cee80(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419ceea0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419ceec0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419ceee0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cef00(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cef20(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cef40(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cef60(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cef80(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cefa0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cefc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cefe0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf000(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf020(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf040(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf060(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf080(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf0a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf0c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf0e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf100(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf120(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf140(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf160(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf180(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x180));
  return;
}




void Unwind_1419cf1a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf1c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf1e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf200(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf220(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf240(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf260(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf280(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf2a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf2c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x100));
  return;
}




void Unwind_1419cf2e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf300(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_1419cf320(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf340(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419cf360(undefined8 param_1,longlong param_2)

{
  FUN_1419c3350((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf380(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_1419cf3a0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419cf3c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419cf400(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf420(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf440(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419cf480(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf4a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf4c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419cf4e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf500(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419cf520(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1419cf540(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419cf560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf5a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf5c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf5e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419cf620(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cf640(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf660(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf680(void)

{
  FUN_1419c2240();
  return;
}




void Catch_1419cf6a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419cf6d0(void)

{
  FUN_1419c2240();
  return;
}




void Catch_1419cf6f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419cf720(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cf740(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf760(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf780(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf7a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf7c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf7e0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cf800(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf820(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cf840(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf860(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf880(undefined8 param_1,longlong param_2)

{
  FUN_1419c65e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf8a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf8c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf8e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf900(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf920(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf940(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cf960(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf980(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cf9a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419cf9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419cf9e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419cfa00(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419cfa20(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cfa40(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfa60(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfa80(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfaa0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cfac0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfae0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfb00(undefined8 param_1,longlong param_2)

{
  FUN_1419c65e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfb20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419cfb40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419cfb60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419cfb80(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419cfba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfbc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419cfbe0(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfc00(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfc20(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfc40(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfc60(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfc80(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cfca0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfcc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfce0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfd00(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfd20(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419cfd40(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfd60(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfd80(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfda0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfdc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c7700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfde0(undefined8 param_1,longlong param_2)

{
  FUN_1419c2f00(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_1419cfe00(undefined8 param_1,longlong param_2)

{
  FUN_1419c2f00(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_1419cfe20(undefined8 param_1,longlong param_2)

{
  FUN_1419c7700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfe40(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfe60(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfe80(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfea0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfec0(undefined8 param_1,longlong param_2)

{
  FUN_1419c8250(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419cfee0(undefined8 param_1,longlong param_2)

{
  FUN_1419c7700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cff00(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cff20(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cff40(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cff60(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419cff80(undefined8 param_1,longlong param_2)

{
  FUN_1419c6880((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Unwind_1419cffa0(undefined8 param_1,longlong param_2)

{
  FUN_1419c8280((longlong *)(*(longlong *)(param_2 + 0x90) + 0x58));
  return;
}




undefined * Catch_1419cffc0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1419c83e4;
}




void Unwind_1419d0000(undefined8 param_1,longlong param_2)

{
  FUN_1419c8250(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_1419d0020(undefined8 param_1,longlong param_2)

{
  FUN_1419c7700(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419d0040(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419d0060(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419d0080(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419d00a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419d00c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c65e0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419d00e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419d0100(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419d0120(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0140(undefined8 param_1,longlong param_2)

{
  FUN_1419c5ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0160(undefined8 param_1,longlong param_2)

{
  FUN_1419c6270(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0180(undefined8 param_1,longlong param_2)

{
  FUN_1419c6600(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d01a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c6990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d01c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c7700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d01e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c8250(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0200(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0220(undefined8 param_1,longlong param_2)

{
  FUN_1419c5dd0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1419d0240(undefined8 param_1,longlong param_2)

{
  FUN_1419c6250(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1419d0260(undefined8 param_1,longlong param_2)

{
  FUN_1419c65e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1419d0280(undefined8 param_1,longlong param_2)

{
  FUN_1419c6880((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_1419d02a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c8280((longlong *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_1419d02c0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419d02e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419d0300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419d0320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419d0340(void)

{
  DAT_1419da2b0 = DAT_1419da2b0 & 0xfffffffe;
  return;
}




void Unwind_1419d0360(void)

{
  DAT_1419da2b0 = DAT_1419da2b0 & 0xfffffffe;
  return;
}




void Unwind_1419d0380(void)

{
  DAT_1419da2b0 = DAT_1419da2b0 & 0xfffffffe;
  return;
}




void Unwind_1419d03a0(void)

{
  DAT_1419da2b0 = DAT_1419da2b0 & 0xfffffffe;
  return;
}




void Unwind_1419d03c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419d03e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419d0400(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0420(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0440(void)

{
  FUN_1419c2240();
  return;
}




void Catch_1419d0460(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419d0490(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419d04c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419d04e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419d0500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419d0520(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x38));
  return;
}




void Catch_1419d0540(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419d0570(void)

{
  FUN_1419c2240();
  return;
}




void Catch_1419d0590(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419d05c0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d05e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0600(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0620(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0640(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419d0680(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419d06a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419d06c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419d06e0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0700(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0720(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0740(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0760(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0780(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d07a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d07c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d07e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0800(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419d0840(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419d0860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419d0880(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419d08a0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d08c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d08e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0900(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0920(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0940(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419d0980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419d09a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419d09c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c22a0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419d09e0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0a00(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0a20(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0a40(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0a60(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0a80(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0aa0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0ac0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0ae0(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0b00(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0b20(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0b40(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0b60(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0b80(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0ba0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0bc0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0be0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0c00(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0c20(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0c40(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0c60(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0c80(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0ca0(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0cc0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0ce0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0d00(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0d20(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0d40(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0d60(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0d80(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0da0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0dc0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0de0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0e00(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0e20(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0e40(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0e60(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0e80(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419d0ea0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd670((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419d0ec0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0ee0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0f00(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0f20(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0f40(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0f60(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d0f80(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0fa0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0fc0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d0fe0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1000(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1020(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d1040(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1060(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1080(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d10a0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d10c0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d10e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc8e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1100(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1120(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1140(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1160(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1180(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d11a0(undefined8 param_1,longlong param_2)

{
  FUN_1419cca10((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_1419d11c0(undefined8 param_1,longlong param_2)

{
  FUN_1419cca10((longlong *)(*(longlong *)(param_2 + 0x40) + 0x68));
  return;
}




void Unwind_1419d11e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc4b0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xa8));
  return;
}




void Unwind_1419d1200(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1220(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1240(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1260(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1280(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d12a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d12c0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc8e0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1419d12e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1300(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1320(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1340(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1360(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419d1380(undefined8 param_1,longlong param_2)

{
  FUN_1419cc8e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d13a0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d13c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d13e0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1400(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1420(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1440(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d1460(undefined8 param_1,longlong param_2)

{
  FUN_1419c30d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1480(undefined8 param_1,longlong param_2)

{
  FUN_1419c9800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d14a0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca0f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d14c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d14e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb870(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1500(undefined8 param_1,longlong param_2)

{
  FUN_1419cc8e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1520(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d1540(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1560(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1580(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d15a0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d15c0(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d15e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1600(undefined8 param_1,longlong param_2)

{
  FUN_1419cca10((longlong *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_1419d1620(undefined8 param_1,longlong param_2)

{
  FUN_1419cca10((longlong *)(*(longlong *)(param_2 + 0x40) + 0x68));
  return;
}




void Unwind_1419d1640(undefined8 param_1,longlong param_2)

{
  FUN_1419cc4b0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xa8));
  return;
}




void Unwind_1419d1660(void)

{
  FUN_1419c2240();
  return;
}




void Unwind_1419d1680(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d16a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d16c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d16e0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1700(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1720(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1740(undefined8 param_1,longlong param_2)

{
  FUN_1419cc4b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1760(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1780(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d17a0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d17c0(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d17e0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1800(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1820(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1840(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1860(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1880(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d18a0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d18c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d18e0(undefined8 param_1,longlong param_2)

{
  FUN_1419cc2b0((longlong *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1900(undefined8 param_1,longlong param_2)

{
  FUN_1419cb890((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1920(undefined8 param_1,longlong param_2)

{
  FUN_1419ca7d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1940(undefined8 param_1,longlong param_2)

{
  FUN_1419ca110((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1960(undefined8 param_1,longlong param_2)

{
  FUN_1419c9820((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d1980(undefined8 param_1,longlong param_2)

{
  FUN_1419c9300((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419d19a0(void)

{
  DAT_1419da2b0 = DAT_1419da2b0 & 0xfffffffe;
  return;
}




void Unwind_1419d19c0(undefined8 param_1,longlong param_2)

{
  FUN_1419c9170(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419d19e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1419cd392;
}




void Unwind_1419d1a20(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1a40(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1419d1a60(void)

{
  log_InlineLogCATCH_ERROR("Trade::Actor:%d,MsgType:%d @%s,%d");
  return 0x1419cd5c5;
}




void Unwind_1419d1ab0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1ad0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419d1af0(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1419d1b10(void)

{
  log_InlineLogCATCH_ERROR("Trade::Actor:%d,MsgType:%d,Action:%d @%s,%d");
  return 0x1419cd8df;
}




void Unwind_1419d1b70(undefined8 param_1,longlong param_2)

{
  FUN_1419cd410(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1419d1b88(void)

{
  _unlock(8);
  return;
}




void FUN_1419d1ba1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419d1bd1(void)

{
  _DAT_1419da280 = 0xffffffff;
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




bool FUN_1419d1c60(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=774 failed=0 total=840 */
