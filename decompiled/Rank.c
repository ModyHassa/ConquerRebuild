/* Decompiled by Ghidra 12.1.4 | program: Rank.dll
   image base: 141600000 | functions: 828 */


undefined8 * FUN_141601000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CCompeteSort::vftable;
  return param_1;
}




void FUN_141601030(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_141601050(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CCompeteSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_141601080(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416010a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d008);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_141601140(void)

{
  if ((DAT_14161d7f8 & 1) == 0) {
    DAT_14161d7f8 = DAT_14161d7f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d7f0,"CCompeteSort");
    atexit((_func_5014 *)&LAB_1416126d0);
  }
  return &DAT_14161d7f0;
}




void FUN_1416011a0(__uint64 param_1)

{
  if ((DAT_14161d7f8 & 1) == 0) {
    DAT_14161d7f8 = DAT_14161d7f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d7f0,"CCompeteSort");
    atexit((_func_5014 *)&LAB_1416126d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416011f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d7f0,param_1);
  return;
}




void FUN_141601200(void *param_1)

{
  if ((DAT_14161d7f8 & 1) == 0) {
    DAT_14161d7f8 = DAT_14161d7f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d7f0,"CCompeteSort");
    atexit((_func_5014 *)&LAB_1416126d0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d7f0,param_1);
  return;
}




void FUN_141601260(void *param_1)

{
  if ((DAT_14161d7f8 & 1) == 0) {
    DAT_14161d7f8 = DAT_14161d7f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d7f0,"CCompeteSort");
    atexit((_func_5014 *)&LAB_1416126d0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416012b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d7f0,param_1);
  return;
}




undefined8 * FUN_1416012c0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CCompeteSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_141601200(param_1);
  }
  return param_1;
}




undefined8 * FUN_141601310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CEquipQISort::vftable;
  return param_1;
}




void FUN_141601340(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_141601360(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CEquipQISort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_141601390(longlong param_1,ulonglong param_2,longlong param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  if (bVar1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))(*(longlong **)(param_1 + 0x40),param_2 & 0xffffffff);
    if (0x45 < uVar3) {
      bVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))(*(longlong **)(param_1 + 0x40),param_2 & 0xffffffff);
      return 2 < bVar2;
    }
  }
  return false;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416013f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428;
  undefined1 local_427 [1022];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14161d7c8 ^ (ulonglong)auStack_458;
  local_428 = '\0';
  memset(local_427,0,0x3ff);
  local_438 = param_3;
  _snprintf(&local_428,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d0a8);
  local_29 = 0;
  uVar1 = FUN_141604a30(param_1,&local_428);
  if ((char)uVar1 != '\0') {
    local_438 = param_2;
    _snprintf(&local_428,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d0b0);
    local_29 = 0;
    FUN_141604a30(param_1,&local_428);
  }
  return;
}




undefined * FUN_1416014c0(void)

{
  if ((DAT_14161d808 & 1) == 0) {
    DAT_14161d808 = DAT_14161d808 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d800,"CEquipQISort");
    atexit((_func_5014 *)&LAB_1416126e0);
  }
  return &DAT_14161d800;
}




void FUN_141601520(__uint64 param_1)

{
  if ((DAT_14161d808 & 1) == 0) {
    DAT_14161d808 = DAT_14161d808 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d800,"CEquipQISort");
    atexit((_func_5014 *)&LAB_1416126e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d800,param_1);
  return;
}




void FUN_141601580(void *param_1)

{
  if ((DAT_14161d808 & 1) == 0) {
    DAT_14161d808 = DAT_14161d808 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d800,"CEquipQISort");
    atexit((_func_5014 *)&LAB_1416126e0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416015d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d800,param_1);
  return;
}




void FUN_1416015e0(void *param_1)

{
  if ((DAT_14161d808 & 1) == 0) {
    DAT_14161d808 = DAT_14161d808 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d800,"CEquipQISort");
    atexit((_func_5014 *)&LAB_1416126e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d800,param_1);
  return;
}




undefined8 * FUN_141601640(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CEquipQISort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_141601580(param_1);
  }
  return param_1;
}




void FUN_1416016f0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
                    /* WARNING: Could not recover jumptable at 0x00014160170c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_141601710(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,2);
                    /* WARNING: Could not recover jumptable at 0x00014160172c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}




void FUN_141601730(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,3);
                    /* WARNING: Could not recover jumptable at 0x00014160174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




undefined8 * FUN_141601770(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CFamilyMoneySort::vftable;
  return param_1;
}




void FUN_1416017a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_1416017c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFamilyMoneySort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_1416017f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141601810(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428;
  undefined1 local_427 [1022];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14161d7c8 ^ (ulonglong)auStack_458;
  local_428 = '\0';
  memset(local_427,0,0x3ff);
  local_438 = param_3;
  _snprintf(&local_428,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d120);
  local_29 = 0;
  uVar1 = FUN_141604a30(param_1,&local_428);
  if ((char)uVar1 != '\0') {
    local_438 = param_2;
    _snprintf(&local_428,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_A_14161d130);
    local_29 = 0;
    FUN_141604a30(param_1,&local_428);
  }
  return;
}




longlong FUN_1416018e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141601902;
  }
  lVar2 = *plVar1;
LAB_141601902:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141601920(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141601942;
  }
  lVar2 = *plVar1;
LAB_141601942:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141601960(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




undefined * FUN_1416019b0(void)

{
  if ((DAT_14161d818 & 1) == 0) {
    DAT_14161d818 = DAT_14161d818 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d810,"CFamilyMoneySort");
    atexit((_func_5014 *)&LAB_1416126f0);
  }
  return &DAT_14161d810;
}




void FUN_141601a10(__uint64 param_1)

{
  if ((DAT_14161d818 & 1) == 0) {
    DAT_14161d818 = DAT_14161d818 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d810,"CFamilyMoneySort");
    atexit((_func_5014 *)&LAB_1416126f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d810,param_1);
  return;
}




void FUN_141601a70(void *param_1)

{
  if ((DAT_14161d818 & 1) == 0) {
    DAT_14161d818 = DAT_14161d818 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d810,"CFamilyMoneySort");
    atexit((_func_5014 *)&LAB_1416126f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d810,param_1);
  return;
}




void FUN_141601ad0(void *param_1)

{
  if ((DAT_14161d818 & 1) == 0) {
    DAT_14161d818 = DAT_14161d818 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d810,"CFamilyMoneySort");
    atexit((_func_5014 *)&LAB_1416126f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141601b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d810,param_1);
  return;
}




undefined8 * FUN_141601b30(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFamilyMoneySort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_141601a70(param_1);
  }
  return param_1;
}




longlong FUN_141601b80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141601ba2;
  }
  lVar2 = *plVar1;
LAB_141601ba2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141601bc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141601be2;
  }
  lVar2 = *plVar1;
LAB_141601be2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141601c00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




undefined8 * FUN_141601c50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141601cb0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141601d10(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141601d60(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141601db0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  char cVar12;
  CMsg local_448 [1040];
  
  FUN_14160e550(local_448);
  bVar3 = false;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))(*(longlong **)(param_1 + 0x40),param_2);
  if (iVar4 == 0) {
    FUN_14160e5a0((undefined8 *)local_448);
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    uVar8 = FUN_14160e5d0((longlong)local_448,2,uVar5,0,0);
    if ((char)uVar8 != '\0') {
      plVar10 = *(longlong **)(param_1 + 0x28);
      if (*(longlong **)(param_1 + 0x30) < plVar10) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 0x10);
      while( true ) {
        lVar11 = 0;
        plVar9 = *(longlong **)(param_1 + 0x30);
        if (plVar9 < *(longlong **)(param_1 + 0x28)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
          _invalid_parameter_noinfo();
        }
        if (plVar10 == plVar9) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar11 = *plVar1;
        }
        if (*(longlong **)(lVar11 + 0x20) <= plVar10) {
          _invalid_parameter_noinfo();
        }
        puVar2 = (undefined8 *)*plVar10;
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
        iVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
        if (iVar6 == iVar4) {
          if (((uint)DAT_14161d161 < *(uint *)(param_1 + 0x48)) && (*(uint *)(param_1 + 0x48) - (uint)*(byte *)(puVar2 + 1) <= (uint)DAT_14161d161)) {
            cVar12 = '\x01';
          }
          else {
            cVar12 = '\0';
          }
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
          uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
          uVar7 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,2);
          uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
          uVar8 = FUN_14160e630((longlong)local_448,*(char *)(puVar2 + 1),uVar8,uVar7,uVar5,(char *)(puVar2 + 3),(char *)(puVar2 + 5),cVar12);
          if ((char)uVar8 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_448);
            uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
            FUN_14160e5d0((longlong)local_448,2,uVar5,0,0);
            plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
            uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
            plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
            uVar7 = (**(code **)(*plVar9 + 0x40))(plVar9);
            plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,2);
            uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
            FUN_14160e630((longlong)local_448,*(char *)(puVar2 + 1),uVar8,uVar7,uVar5,(char *)(puVar2 + 3),(char *)(puVar2 + 5),cVar12);
          }
          bVar3 = true;
        }
        lVar11 = 0;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar11 = *plVar1;
        }
        if (*(longlong **)(lVar11 + 0x20) <= plVar10) {
          _invalid_parameter_noinfo();
        }
        plVar10 = plVar10 + 1;
      }
      if (bVar3) {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_448);
      }
    }
    FUN_14160e5a0((undefined8 *)local_448);
  }
  return;
}




undefined8 * FUN_1416020b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CFateSort::vftable;
  return param_1;
}




void FUN_1416020e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_141602100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFateSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_141602130(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141602150(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d1a0);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_1416021f0(void)

{
  if ((DAT_14161d828 & 1) == 0) {
    DAT_14161d828 = DAT_14161d828 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d820,"CFateSort");
    atexit((_func_5014 *)&LAB_141612700);
  }
  return &DAT_14161d820;
}




void FUN_141602250(__uint64 param_1)

{
  if ((DAT_14161d828 & 1) == 0) {
    DAT_14161d828 = DAT_14161d828 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d820,"CFateSort");
    atexit((_func_5014 *)&LAB_141612700);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416022a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d820,param_1);
  return;
}




void FUN_1416022b0(void *param_1)

{
  if ((DAT_14161d828 & 1) == 0) {
    DAT_14161d828 = DAT_14161d828 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d820,"CFateSort");
    atexit((_func_5014 *)&LAB_141612700);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d820,param_1);
  return;
}




void FUN_141602310(void *param_1)

{
  if ((DAT_14161d828 & 1) == 0) {
    DAT_14161d828 = DAT_14161d828 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d820,"CFateSort");
    atexit((_func_5014 *)&LAB_141612700);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d820,param_1);
  return;
}




undefined8 * FUN_141602370(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFateSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416022b0(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416023c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CFlowerSort::vftable;
  return param_1;
}




void FUN_1416023f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_141602410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFlowerSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_141602440(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141602460(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d218);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_141602500(void)

{
  if ((DAT_14161d838 & 1) == 0) {
    DAT_14161d838 = DAT_14161d838 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d830,"CFlowerSort");
    atexit((_func_5014 *)&LAB_141612710);
  }
  return &DAT_14161d830;
}




void FUN_141602560(__uint64 param_1)

{
  if ((DAT_14161d838 & 1) == 0) {
    DAT_14161d838 = DAT_14161d838 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d830,"CFlowerSort");
    atexit((_func_5014 *)&LAB_141612710);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416025b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d830,param_1);
  return;
}




void FUN_1416025c0(void *param_1)

{
  if ((DAT_14161d838 & 1) == 0) {
    DAT_14161d838 = DAT_14161d838 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d830,"CFlowerSort");
    atexit((_func_5014 *)&LAB_141612710);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d830,param_1);
  return;
}




void FUN_141602620(void *param_1)

{
  if ((DAT_14161d838 & 1) == 0) {
    DAT_14161d838 = DAT_14161d838 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d830,"CFlowerSort");
    atexit((_func_5014 *)&LAB_141612710);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d830,param_1);
  return;
}




undefined8 * FUN_141602680(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CFlowerSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416025c0(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416026d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CInnerStrengthSort::vftable;
  return param_1;
}




void FUN_141602700(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_141602720(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CInnerStrengthSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_141602750(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141602770(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d290);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_141602810(void)

{
  if ((DAT_14161d848 & 1) == 0) {
    DAT_14161d848 = DAT_14161d848 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d840,"CInnerStrengthSort");
    atexit((_func_5014 *)&LAB_141612720);
  }
  return &DAT_14161d840;
}




void FUN_141602870(__uint64 param_1)

{
  if ((DAT_14161d848 & 1) == 0) {
    DAT_14161d848 = DAT_14161d848 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d840,"CInnerStrengthSort");
    atexit((_func_5014 *)&LAB_141612720);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416028c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d840,param_1);
  return;
}




void FUN_1416028d0(void *param_1)

{
  if ((DAT_14161d848 & 1) == 0) {
    DAT_14161d848 = DAT_14161d848 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d840,"CInnerStrengthSort");
    atexit((_func_5014 *)&LAB_141612720);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d840,param_1);
  return;
}




void FUN_141602930(void *param_1)

{
  if ((DAT_14161d848 & 1) == 0) {
    DAT_14161d848 = DAT_14161d848 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d840,"CInnerStrengthSort");
    atexit((_func_5014 *)&LAB_141612720);
  }
                    /* WARNING: Could not recover jumptable at 0x000141602985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d840,param_1);
  return;
}




undefined8 * FUN_141602990(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CInnerStrengthSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416028d0(param_1);
  }
  return param_1;
}




void FUN_1416029e0(void)

{
  log_InlineLogERROR(&DAT_141613dc0);
  return;
}




void FUN_141602a10(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141602a20(void)

{
  return 0;
}




undefined8 FUN_141602a30(void)

{
  return 0;
}




undefined8 FUN_141602a40(void)

{
  return 0;
}




undefined8 FUN_141602a50(void)

{
  return 0;
}




undefined8 * FUN_141602a60(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141602ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CModule::vftable;
  FUN_141607fe0(param_1,param_2,param_3,param_4);
  FUN_14160d170();
  FUN_14160e460(param_1 + 0x84);
  FUN_14160e5a0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_141602b20(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_141602b40(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  ulonglong extraout_RAX_00;
  
  FUN_14160d840();
  puVar1 = FUN_141603d30();
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),0x11);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141613dc0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar3 = FUN_141603910((longlong)puVar1,lVar2);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_141613dc0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




longlong * FUN_141602c00(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3ea) {
      plVar2 = (longlong *)(param_1 + 0x420);
    }
    else {
      if (param_2[1] != 0x47f) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x10);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




void FUN_141602c70(void)

{
  FUN_141603d30();
  thunk_FUN_141604820();
  return;
}




bool FUN_141602c90(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = FUN_141603d30();
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x47f,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x18))(*(longlong **)(param_1 + 0x830),0x11,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_141602d00(void)

{
  return 1;
}




undefined8 * FUN_141602d10(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = rank::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_14160e550((CMsg *)(param_1 + 2));
  FUN_14160e410((CMsg *)(param_1 + 0x84));
  param_1[0x106] = param_2;
  return param_1;
}




undefined8 * FUN_141602d80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CModule::vftable;
  FUN_141607fe0(param_1,param_2,param_3,param_4);
  FUN_14160d170();
  FUN_14160e460(param_1 + 0x84);
  FUN_14160e5a0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_141602e00(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_141602c00(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  
                    /* 0x2e60  1  ModuleCreate */
  plVar2 = operator_new(0x838);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)rank::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = param_2;
    FUN_14160e550((CMsg *)(plVar2 + 2));
    FUN_14160e410((CMsg *)(plVar2 + 0x84));
    plVar2[0x106] = param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141602c90((longlong)plVar2);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




void FUN_141602f30(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = 1;
    do {
      plVar4 = (longlong *)FUN_1416094c0(iVar5 + 60000000);
      if (plVar4 != (longlong *)0x0) {
        lVar1 = *plVar4;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2,iVar5);
        (**(code **)(lVar1 + 0x18))(plVar4,param_2,(longlong)iVar3);
        lVar1 = **(longlong **)(param_1 + 8);
        cVar2 = FUN_1416073d0((longlong)plVar4,param_2);
        (**(code **)(lVar1 + 0x50))(*(undefined8 *)(param_1 + 8),param_2,iVar5,cVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 5);
    plVar4 = (longlong *)FUN_1416094c0(70000000);
    if (plVar4 != (longlong *)0x0) {
      lVar1 = *plVar4;
      iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
      (**(code **)(lVar1 + 0x18))(plVar4,param_2,(longlong)iVar5);
    }
  }
  return;
}




void FUN_141603010(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 1;
    do {
      plVar1 = (longlong *)FUN_1416094c0(iVar2 + 60000000);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
  }
  return;
}




undefined8 FUN_141603060(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  plVar2 = (longlong *)FUN_1416094c0((uVar1 / 10000 + 200000) * 100);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_4,param_5,param_6,param_7);
    return uVar3;
  }
  return 0xff;
}




int FUN_1416030e0(undefined8 param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_38 [12];
  
  uVar3 = 0;
  local_38[0] = 0x1c9c3e6;
  local_38[1] = 0x1c9c44a;
  local_38[2] = 0x1c9c4ae;
  local_38[3] = 0x1c9c382;
  local_38[4] = 0x1c9c3e5;
  local_38[5] = 0x1c9c449;
  local_38[6] = 0x1c9c4ad;
  local_38[7] = 0x1c9c381;
  local_38[8] = 0x1c9c512;
  local_38[9] = 0x1c9c576;
  local_38[10] = 0x1c9c5da;
  local_38[0xb] = 0x1c9c63e;
  uVar5 = 0xff;
  uVar4 = uVar3;
  uVar6 = uVar3;
  do {
    lVar2 = FUN_1416094c0(local_38[uVar3]);
    if (lVar2 != 0) {
      bVar1 = FUN_1416073d0(lVar2,param_2);
      if (bVar1 + 1 < uVar5) {
        uVar4 = uVar6;
        uVar5 = bVar1 + 1;
      }
    }
    uVar3 = uVar3 + 1;
    uVar6 = (ulonglong)((int)uVar6 + 1);
  } while ((longlong)uVar3 < 0xc);
  return uVar5 * 10000 + local_38[(int)uVar4];
}




undefined8 FUN_1416031c0(undefined8 param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416094c0(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_1416074c0(lVar1,param_3);
    return uVar2;
  }
  return 0;
}




char FUN_1416031f0(undefined8 param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1416094c0(param_2);
  if (lVar2 != 0) {
    cVar1 = FUN_1416073d0(lVar2,param_3);
    return cVar1;
  }
  return -1;
}




undefined8 FUN_141603220(undefined8 param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416094c0(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_1416075e0(lVar1,param_3);
    return uVar2;
  }
  return 0;
}




char FUN_141603250(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4,undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  CMsg local_428 [1040];
  
  if (param_1[1] == 0) {
    return -1;
  }
  switch(param_4) {
  case 0:
    uVar9 = 0x1c9c382;
    break;
  case 1:
    uVar9 = 0x1c9c3e6;
    break;
  case 2:
    uVar9 = 0x1c9c44a;
    break;
  case 3:
    uVar9 = 0x1c9c4ae;
    break;
  case 4:
    uVar9 = 0x1c9c512;
    break;
  case 5:
    uVar9 = 0x1c9c576;
    break;
  case 6:
    uVar9 = 0x1c9c5da;
    break;
  case 7:
    uVar9 = 0x1c9c63e;
    break;
  default:
    return -1;
  }
  plVar4 = (longlong *)FUN_1416094c0(uVar9);
  if (plVar4 == (longlong *)0x0) {
    return -1;
  }
  cVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_5,param_3,param_2,param_3);
  if (cVar2 != '\0') {
    return cVar2;
  }
  uVar5 = FUN_1416075e0((longlong)plVar4,'\0');
  if ((int)uVar5 == param_2) {
    if (uVar9 == 0x1c9c382) {
      uVar5 = 0x2b74;
    }
    else if (uVar9 == 0x1c9c3e6) {
      uVar5 = 0x2b77;
    }
    else if (uVar9 == 0x1c9c44a) {
      uVar5 = 0x2b75;
    }
    else {
      if (uVar9 != 0x1c9c4ae) goto LAB_14160337d;
      uVar5 = 0x2b76;
    }
    (**(code **)(*(longlong *)param_1[1] + 0x60))((longlong *)param_1[1],param_2,uVar5);
  }
LAB_14160337d:
  FUN_14160e550(local_428);
  if (param_1[1] != 0) {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
    uVar5 = FUN_14160e5d0((longlong)local_428,4,uVar3,0,0);
    if ((char)uVar5 != '\0') {
      plVar1 = (longlong *)param_1[1];
      pcVar6 = (char *)(**(code **)(*plVar1 + 8))(plVar1,param_2);
      pcVar7 = (char *)(**(code **)(*plVar1 + 8))(plVar1);
      FUN_14160e630((longlong)local_428,'\0',param_5,param_2,param_2,pcVar7,pcVar6,'\0');
      (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_2,local_428,0);
    }
  }
  if (param_1[1] != 0) {
    uVar10 = 100;
    uVar8 = FUN_141605500((longlong)plVar4);
    if (100 < uVar8) {
      do {
        uVar8 = FUN_1416075e0((longlong)plVar4,(char)uVar10);
        if ((int)uVar8 == 0) break;
        (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],uVar8 & 0xffffffff,param_4);
        uVar10 = uVar10 + 1;
        uVar8 = FUN_141605500((longlong)plVar4);
      } while (uVar10 < uVar8);
    }
  }
  FUN_14160e5a0((undefined8 *)local_428);
  return '\0';
}




undefined8 FUN_1416034d0(undefined8 param_1,undefined4 param_2,uint param_3,longlong param_4,undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_141613dc0);
  }
  plVar1 = (longlong *)FUN_1416094c0(param_3);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_5,param_4,param_2,param_4,param_3);
    return uVar2;
  }
  return 0xff;
}




char FUN_141603570(longlong *param_1,undefined4 param_2,undefined8 param_3,char param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  CMsg local_418 [1040];
  
  if (param_4 == '\0') {
    uVar7 = 0x1c9c381;
  }
  else if (param_4 == '\x01') {
    uVar7 = 0x1c9c3e5;
  }
  else if (param_4 == '\x02') {
    uVar7 = 0x1c9c449;
  }
  else {
    if (param_4 != '\x03') {
      return -1;
    }
    uVar7 = 0x1c9c4ad;
  }
  plVar3 = (longlong *)FUN_1416094c0(uVar7);
  if (plVar3 == (longlong *)0x0) {
    cVar1 = -1;
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_5,param_3,param_2,param_3);
    if (cVar1 == '\0') {
      FUN_14160e550(local_418);
      if (param_1[1] != 0) {
        uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
        uVar4 = FUN_14160e5d0((longlong)local_418,4,uVar2,0,0);
        if ((char)uVar4 != '\0') {
          plVar3 = (longlong *)param_1[1];
          pcVar5 = (char *)(**(code **)(*plVar3 + 8))(plVar3,param_2);
          pcVar6 = (char *)(**(code **)(*plVar3 + 8))(plVar3);
          FUN_14160e630((longlong)local_418,'\0',param_5,param_2,param_2,pcVar6,pcVar5,'\0');
          (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_2,local_418,0);
        }
      }
      FUN_14160e5a0((undefined8 *)local_418);
    }
  }
  return cVar1;
}




void FUN_1416036e0(undefined8 param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_14160d390();
  plVar2 = (longlong *)FUN_14160d3d0();
  while (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = FUN_1416094c0(uVar1);
    if (lVar3 != 0) {
      FUN_1416095d0(lVar3,param_2);
    }
    plVar2 = (longlong *)FUN_14160d3d0();
  }
  return;
}




ulonglong FUN_141603730(undefined8 param_1,int param_2,int param_3)

{
  undefined8 in_RAX;
  ulonglong extraout_RAX;
  longlong lVar1;
  uint uVar2;
  
  if (((param_3 != 1) && (param_3 != 2)) || (param_2 == 0)) {
    log_InlineLogERROR("CRankProvider::DelUserRankByChangeSex sex err, user id:%u, sex:%d.");
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == 2) {
    lVar1 = FUN_1416094c0(0x1c9c381);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c382);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c3e5);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c3e6);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c449);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c44a);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c4ad);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    uVar2 = 0x1c9c4ae;
  }
  else {
    if (param_3 != 1) goto LAB_141603887;
    lVar1 = FUN_1416094c0(0x1c9c512);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c576);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    lVar1 = FUN_1416094c0(0x1c9c5da);
    if (lVar1 != 0) {
      FUN_1416095d0(lVar1,param_2);
    }
    uVar2 = 0x1c9c63e;
  }
  lVar1 = FUN_1416094c0(uVar2);
  in_RAX = 0;
  if (lVar1 != 0) {
    in_RAX = FUN_1416095d0(lVar1,param_2);
  }
LAB_141603887:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




void FUN_141603890(undefined8 param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1416094c0(param_3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_4);
  }
  return;
}




void FUN_1416038d0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1416094c0(param_3);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}




ulonglong FUN_141603910(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141613dc0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  uVar1 = FUN_14160a3f0(param_2);
  return uVar1;
}




void FUN_141603960(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  FUN_14160e550(local_418);
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_14160e5d0((longlong)local_418,5,0,0,0);
    if ((char)uVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
  }
  FUN_14160e5a0((undefined8 *)local_418);
  return;
}




undefined8 FUN_1416039e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1416094c0(0x1c9c768);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_4,param_3,param_2,param_3);
    return uVar2;
  }
  return 0xff;
}




undefined8 FUN_141603a50(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1416094c0(50000000);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_6,param_3,param_4,param_5);
    return uVar2;
  }
  return 0xff;
}




undefined8 FUN_141603ac0(undefined8 param_1,int param_2,longlong param_3,byte param_4,undefined8 param_5)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  undefined8 uVar3;
  undefined7 in_register_00000089;
  
  if (((param_2 != 0) && (param_3 != 0)) && (uVar1 = (int)CONCAT71(in_register_00000089,param_4) - 1, in_RAX = (ulonglong)uVar1, (byte)uVar1 < 4)) {
    plVar2 = (longlong *)FUN_1416094c0(param_4 + 60000000);
    in_RAX = 0;
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_5,param_3,param_2,param_3);
      return uVar3;
    }
  }
  return CONCAT71((int7)(in_RAX >> 8),0xff);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141603b30(longlong param_1,int param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  void *pvVar4;
  IStringManager *pIVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong local_250;
  char local_248;
  undefined1 local_247 [510];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14161d7c8 ^ (ulonglong)auStack_278;
  if (param_3 == 0) {
    return local_48 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)FUN_1416094c0(70000000);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  bVar1 = FUN_1416073d0((longlong)plVar3,param_2);
  local_258 = CONCAT44(local_258._4_4_,param_2);
  local_250 = param_3;
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_4,param_3);
  bVar2 = FUN_1416073d0((longlong)plVar3,param_2);
  local_248 = '\0';
  pvVar4 = memset(local_247,0,0x1ff);
  if (bVar2 == 0) {
    if (bVar1 == 0) goto LAB_141603caf;
    pIVar5 = theInstance();
    uVar6 = FUN_1416074c0((longlong)plVar3,'\0');
    pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_INNER_STRENGTH_RANK_FIRST");
    local_258 = uVar6;
LAB_141603c7f:
    _snprintf(&local_248,0x200,pcVar7);
  }
  else {
    pvVar4 = (void *)(ulonglong)(bVar2 - 1);
    if (8 < bVar2 - 1) {
      pvVar4 = (void *)(ulonglong)(bVar2 - 10);
      if ((0x59 < bVar2 - 10) || (bVar1 < 100)) goto LAB_141603caf;
      pIVar5 = theInstance();
      pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_INNER_STRENGTH_RANK_FIRST100");
      local_258 = CONCAT44(local_258._4_4_,bVar2 + 1);
      goto LAB_141603c7f;
    }
    if (bVar1 < 10) goto LAB_141603caf;
    pIVar5 = theInstance();
    pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_INNER_STRENGTH_RANK_FIRST10");
    _snprintf(&local_248,0x200,pcVar7);
  }
  local_49 = 0;
  pvVar4 = (void *)(**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2,&local_248);
LAB_141603caf:
  return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
}




undefined8 * FUN_141603d00(undefined8 *param_1,byte param_2)

{
  *param_1 = rank::CRankProvider::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141603d30(void)

{
  if ((DAT_14161d860 & 1) == 0) {
    DAT_14161d860 = DAT_14161d860 | 1;
    _DAT_14161d850 = rank::CRankProvider::vftable;
    _DAT_14161d858 = 0;
    atexit((_func_5014 *)&LAB_141612730);
  }
  return &DAT_14161d850;
}




exception * FUN_141603d90(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141603de0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141603e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141603e20(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141603e40(exception *param_1,uint param_2)

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




exception * FUN_141603ea0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141603f00(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141603f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141603f50(exception *param_1,uint param_2)

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




exception * FUN_141603fc0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141604020(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014160405d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141604070(exception *param_1,uint param_2)

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




exception * FUN_141604110(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_141604150(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141604170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141604180(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416041e0(void)

{
  return;
}




void FUN_1416041f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,1,param_3,param_4,0xfffffffffffffffe);
    *param_1 = 0;
    *param_1 = 0;
  }
  return;
}




void FUN_141604240(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,4);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014160427e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




void FUN_141604290(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,2);
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001416042d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




void FUN_141604300(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,3);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014160433e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0);
  return;
}




void FUN_141604390(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
  }
  return;
}




ulonglong FUN_1416043b0(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
    return (ulonglong)(iVar1 / 10000000 == 6);
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_141604400(longlong *param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
    iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
    return (ulonglong)(iVar1 / 10000000 == 7);
  }
  return in_RAX & 0xffffffffffffff00;
}




longlong * FUN_141604450(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,longlong *param_5)

{
  *param_1 = param_3;
  param_1[2] = param_2;
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141613dc0);
  }
  *(undefined1 *)(param_1 + 1) = 0xff;
  param_1[3] = *param_4;
  param_1[4] = param_4[1];
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  param_1[5] = *param_5;
  param_1[6] = param_5[1];
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  return param_1;
}




undefined8 * FUN_1416044e0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)0x0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  puVar2 = puVar4;
  switch(uVar1 / 10000000) {
  case 2:
    puVar2 = puVar3;
    if ((uVar1 == (uVar1 / 100) * 100) && (puVar3 = (undefined8 *)FUN_141601520(0x58), puVar2 = puVar4, puVar3 != (undefined8 *)0x0)) {
      puVar2 = FUN_141601310(puVar3,param_1,param_2);
    }
    break;
  case 3:
    if (uVar1 < 0x1c9c4ae) {
      if (uVar1 != 0x1c9c4ad) {
        puVar2 = puVar3;
        switch(uVar1) {
        case 0x1c9c381:
        case 0x1c9c3e5:
        case 0x1c9c449:
          break;
        case 0x1c9c382:
        case 0x1c9c3e6:
        case 0x1c9c44a:
          goto switchD_1416045b0_caseD_1c9c382;
        default:
          goto switchD_141604534_default;
        }
      }
      puVar3 = (undefined8 *)FUN_14160def0(0x58);
      puVar2 = puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = FUN_14160dd50(puVar3,param_1,param_2);
      }
    }
    else {
      if (uVar1 < 0x1c9c5db) {
        if ((((uVar1 != 0x1c9c5da) && (uVar1 != 0x1c9c4ae)) && (uVar1 != 0x1c9c512)) && (uVar1 != 0x1c9c576)) {
          return (undefined8 *)0x0;
        }
      }
      else if (uVar1 != 0x1c9c63e) {
        if (uVar1 != 0x1c9c768) {
          return (undefined8 *)0x0;
        }
        puVar2 = (undefined8 *)FUN_14160e200(0x58);
        if (puVar2 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar2 = FUN_14160e060(puVar2,param_1,param_2);
        return puVar2;
      }
switchD_1416045b0_caseD_1c9c382:
      puVar3 = (undefined8 *)FUN_141602560(0x58);
      puVar2 = puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        puVar2 = FUN_1416023c0(puVar3,param_1,param_2);
      }
    }
    break;
  case 4:
    puVar3 = (undefined8 *)FUN_1416011a0(0x58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = FUN_141601000(puVar3,param_1,param_2);
    }
    break;
  case 5:
    puVar2 = puVar3;
    if ((uVar1 == 50000000) && (puVar3 = (undefined8 *)FUN_141601a10(0x58), puVar2 = puVar4, puVar3 != (undefined8 *)0x0)) {
      puVar2 = FUN_141601770(puVar3,param_1,param_2);
    }
    break;
  case 6:
    puVar3 = (undefined8 *)FUN_141602250(0x58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = FUN_1416020b0(puVar3,param_1,param_2);
    }
    break;
  case 7:
    puVar3 = (undefined8 *)FUN_141602870(0x58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = FUN_1416026d0(puVar3,param_1,param_2);
    }
  }
switchD_141604534_default:
  return puVar2;
}




void FUN_141604820(void)

{
  return;
}




longlong * FUN_141604830(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416041f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




bool FUN_141604860(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_2 == (longlong *)0x0) {
    return false;
  }
  if (param_3 == (longlong *)0x0) {
    return true;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,2);
  lVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,2);
  lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3);
  if (lVar4 != lVar5) {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,2);
    lVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,2);
    lVar5 = (**(code **)(*plVar3 + 0x58))(plVar3);
    return lVar5 < lVar4;
  }
  uVar6 = FUN_1416043b0(param_2);
  if ((char)uVar6 != '\0') {
    uVar6 = FUN_1416043b0(param_3);
    if ((char)uVar6 != '\0') {
      lVar4 = param_2[2];
      lVar5 = param_3[2];
      if (lVar4 != lVar5) goto LAB_141604963;
    }
  }
  uVar6 = FUN_141604400(param_2);
  if ((char)uVar6 != '\0') {
    uVar6 = FUN_141604400(param_3);
    if ((char)uVar6 != '\0') {
      lVar4 = param_2[2];
      lVar5 = param_3[2];
      if (lVar4 != lVar5) {
LAB_141604963:
        return lVar5 < lVar4;
      }
    }
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,4);
  uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,4);
  uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  return uVar1 < uVar2;
}




ulonglong FUN_1416049c0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return CONCAT71((int7)((ulonglong)uVar1 * 0x6b5fca6b >> 8),uVar1 / 10000000 == 6) & 0xffffffff;
}




bool FUN_1416049f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return (longlong)(ulonglong)uVar1 <= param_3;
}




void FUN_141604a20(void)

{
  return;
}




ulonglong FUN_141604a30(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)InstanceGet();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,param_2,2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141613dc0);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
    if (lVar2 == 0) {
      uVar3 = (**(code **)*plVar1)(plVar1);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar4 = (**(code **)*plVar1)(plVar1);
      uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar3;
}




ulonglong FUN_141604ac0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return CONCAT71((int7)((ulonglong)uVar1 * 0x6b5fca6b >> 8),uVar1 / 10000000 == 7) & 0xffffffff;
}




bool FUN_141604b00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141604b40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141604c90(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_14161b5f0);
}




exception * FUN_141604d00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_141604d70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141604d92;
  }
  lVar2 = *plVar1;
LAB_141604d92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141604db0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




exception * FUN_141604df0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_141604f00(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141604f30;
  }
  else {
LAB_141604f30:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141604f58;
  }
  _invalid_parameter_noinfo();
LAB_141604f58:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141604fd0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141605070(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416050f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_141605180(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_1416051b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_141605210(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416052b0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416053a0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416053e0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_141604860(&stack0x00000028,*(longlong **)(param_1 + lVar2 * 8),param_4);
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




longlong * FUN_141605480(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  
  if (((param_2 == 0) || (param_3 == (longlong *)0x0)) || (param_4 == (longlong *)0x0)) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = operator_new(0x38);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = FUN_141604450(plVar1,param_1,param_2,param_3,param_4);
    }
  }
  return plVar1;
}




longlong FUN_141605500(longlong param_1)

{
  return *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3;
}




void FUN_141605550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141605560(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141605570(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141605592;
  }
  lVar2 = *plVar1;
LAB_141605592:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141605610(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141605680(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416056a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141605730(longlong param_1,longlong param_2)

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




void FUN_141605790(longlong param_1,longlong *param_2)

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




void FUN_1416057f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141605860(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141605892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141605900(longlong *param_1,longlong param_2)

{
  FUN_141604f00(param_1,param_2);
  return param_1;
}




void FUN_141605920(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_1416059a0(undefined8 *param_1)

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




void * FUN_141605a00(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141605aa0(void *param_1,longlong param_2,void *param_3)

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




void FUN_141605ae0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_141604860(local_res20,(longlong *)*param_2,(longlong *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  bVar2 = FUN_141604860(local_res20,(longlong *)*param_3,(longlong *)*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  bVar2 = FUN_141604860(local_res20,(longlong *)*param_2,(longlong *)*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}




void FUN_141605b80(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2 + 2;
    if (param_3 <= lVar2) break;
    bVar1 = FUN_141604860(&param_5,*(longlong **)(param_1 + lVar2 * 8),*(longlong **)(param_1 + -8 + lVar2 * 8));
    if (bVar1) {
      lVar2 = lVar3 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
    lVar3 = lVar2;
  }
  if (lVar2 == param_3) {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 + -1;
  }
  FUN_1416053e0(param_1,lVar3,param_2,param_4);
  return;
}




void * FUN_141605c30(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141605c70(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_141605b80((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




longlong FUN_141605ca0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141605cc2;
  }
  lVar2 = *plVar1;
LAB_141605cc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141605ce0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141605d00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141605d20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141605d20(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_141605d70(longlong param_1,ulonglong param_2)

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
      FUN_141604c90();
    }
    lVar1 = FUN_141605610(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141605de0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_141605e10(longlong *param_1)

{
  FUN_141605680(param_1);
  return param_1;
}




undefined8 * FUN_141605e30(undefined8 *param_1)

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




undefined8 * FUN_141605e80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141605ec0(longlong *param_1)

{
  FUN_141605860(param_1);
  return param_1;
}




longlong * FUN_141605ee0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141605f4a;
  }
  _invalid_parameter_noinfo();
LAB_141605f4a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_141605f80(longlong *param_1,longlong param_2)

{
  FUN_141604f00(param_1,-param_2);
  return param_1;
}




void FUN_141605fa0(void)

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




undefined8 * FUN_141606000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_141606080(longlong *param_1)

{
  FUN_141605860(param_1);
  return param_1;
}




longlong * FUN_1416060a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141605680(param_1);
  return param_2;
}




undefined8 * FUN_1416060d0(undefined8 *param_1)

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




void * FUN_141606120(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141606190(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141606210(void *param_1,longlong param_2,void *param_3)

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




void FUN_141606250(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141605ae0(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_141605ae0(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_141605ae0(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_141605ae0(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_141605ae0(param_1,param_2,param_3,param_4);
  return;
}




void FUN_141606330(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_141605b80(param_1,lVar2,lVar3,*(longlong **)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_1416063b0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_res18 [16];
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    local_res18[0] = param_3;
    do {
      plVar1 = (longlong *)*puVar4;
      bVar2 = FUN_141604860(local_res18,plVar1,(longlong *)*param_1);
      if (bVar2) {
        lVar3 = (longlong)puVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(puVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = plVar1;
      }
      else {
        bVar2 = FUN_141604860(local_res18,plVar1,(longlong *)puVar4[-1]);
        puVar6 = puVar4;
        puVar5 = puVar4;
        if (bVar2) {
          do {
            puVar6 = puVar5 + -1;
            *puVar5 = *puVar6;
            bVar2 = FUN_141604860(local_res18,plVar1,(longlong *)puVar5[-2]);
            puVar5 = puVar6;
          } while (bVar2);
        }
        *puVar6 = plVar1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != param_2);
  }
  return;
}




void FUN_1416064d0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_141605b80((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,plVar1,param_3);
  return;
}




void FUN_141606500(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141605d20(param_1,(longlong *)plVar2[2]);
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




void FUN_141606580(undefined8 *param_1)

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




undefined8 * FUN_1416065c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141606610(undefined8 *param_1,undefined8 *param_2)

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




longlong * FUN_141606660(longlong *param_1)

{
  FUN_141605680(param_1);
  return param_1;
}




void FUN_141606680(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416066a0(undefined8 *param_1)

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




undefined8 * FUN_1416066f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141606730(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14160679d;
  }
  _invalid_parameter_noinfo();
LAB_14160679d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416067d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141605fa0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141606810(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14161b5f0);
  }
  plVar5 = FUN_141606000(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_141606b50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141606ba0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14161b708);
  }
  FUN_141605680(param_3);
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
        goto LAB_141606d8c;
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
LAB_141606d8c:
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
            FUN_141605730((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141605790((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141605730((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141605790((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141605730((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141605790((longlong)param_1,plVar7);
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




exception * FUN_141606f60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_141606fc0(undefined8 *param_1)

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




void * FUN_141607040(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141607080(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res20 [8];
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  local_res20[0] = param_4;
  FUN_141606250(param_2,puVar6,param_3 + -1,param_4);
  puVar7 = puVar6;
  while (puVar8 = puVar7, param_2 < puVar8) {
    bVar3 = FUN_141604860(local_res20,(longlong *)puVar8[-1],(longlong *)*puVar8);
    if ((bVar3) || (bVar3 = FUN_141604860(local_res20,(longlong *)*puVar8,(longlong *)puVar8[-1]), puVar7 = puVar8 + -1, bVar3)) break;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar7 = puVar6;
    puVar5 = puVar8;
    if (param_3 <= puVar6) break;
    bVar3 = FUN_141604860(local_res20,(longlong *)*puVar6,(longlong *)*puVar8);
    if ((bVar3) || (bVar3 = FUN_141604860(local_res20,(longlong *)*puVar8,(longlong *)*puVar6), bVar3)) break;
  } while( true );
joined_r0x000141607163:
  puVar4 = puVar5;
  puVar2 = puVar7;
  puVar7 = puVar8;
  if (param_3 <= puVar2) {
joined_r0x0001416071bc:
    for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
      puVar7 = puVar7 + -1;
      bVar3 = FUN_141604860(local_res20,(longlong *)*puVar7,(longlong *)*puVar4);
      if (!bVar3) {
        bVar3 = FUN_141604860(local_res20,(longlong *)*puVar4,(longlong *)*puVar7);
        if (bVar3) break;
        puVar4 = puVar4 + -1;
        if (puVar4 != puVar7) {
          uVar1 = *puVar4;
          *puVar4 = *puVar7;
          *puVar7 = uVar1;
        }
      }
    }
    if (puVar8 == param_2) {
      if (puVar2 == param_3) {
        *param_1 = puVar4;
        param_1[1] = puVar6;
        return param_1;
      }
      if ((puVar6 != puVar2) && (puVar4 != puVar6)) {
        uVar1 = *puVar4;
        *puVar4 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar7 = puVar2 + 1;
      puVar5 = puVar4 + 1;
      if (puVar4 != puVar2) {
        uVar1 = *puVar4;
        *puVar4 = *puVar2;
        *puVar2 = uVar1;
      }
    }
    else {
      puVar8 = puVar8 + -1;
      if (puVar2 == param_3) {
        puVar5 = puVar4 + -1;
        if (puVar8 != puVar5) {
          uVar1 = *puVar8;
          *puVar8 = *puVar5;
          *puVar5 = uVar1;
        }
        puVar6 = puVar6 + -1;
        puVar7 = puVar2;
        if (puVar5 != puVar6) {
          uVar1 = *puVar5;
          *puVar5 = *puVar6;
          *puVar6 = uVar1;
        }
      }
      else {
        if (puVar2 != puVar8) {
          uVar1 = *puVar2;
          *puVar2 = *puVar8;
          *puVar8 = uVar1;
        }
        puVar7 = puVar2 + 1;
        puVar5 = puVar4;
      }
    }
    goto joined_r0x000141607163;
  }
  bVar3 = FUN_141604860(local_res20,(longlong *)*puVar4,(longlong *)*puVar2);
  puVar5 = puVar6;
  if (!bVar3) {
    bVar3 = FUN_141604860(local_res20,(longlong *)*puVar2,(longlong *)*puVar4);
    if (bVar3) goto joined_r0x0001416071bc;
    puVar5 = puVar6 + 1;
    if (puVar6 != puVar2) {
      uVar1 = *puVar6;
      *puVar6 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar6 = puVar5;
  puVar7 = puVar2 + 1;
  puVar5 = puVar4;
  goto joined_r0x000141607163;
}




void FUN_1416072f0(longlong param_1,longlong param_2,undefined1 param_3)

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
      FUN_141605b80(param_1,lVar2,lVar3,*(longlong **)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_141607370(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  FUN_1416063b0(param_1,param_2,param_3);
  return;
}




void FUN_141607390(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    plVar1 = *(longlong **)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_141605b80((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,plVar1,param_3);
  }
  return;
}




char FUN_1416073d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < puVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  cVar7 = '\0';
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 < *(undefined8 **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (puVar5 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)(**(code **)(**(longlong **)*puVar5 + 0x10))(*(longlong **)*puVar5,3);
    iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (iVar3 == param_2) {
      return cVar7;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar5 = puVar5 + 1;
    cVar7 = cVar7 + '\x01';
  }
  return -1;
}




undefined8 FUN_1416074c0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x30) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  cVar6 = '\0';
  lVar7 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 < *(longlong **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) {
      return 0;
    }
    if (cVar6 == param_2) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = lVar7;
      }
      else {
        lVar5 = *plVar1;
      }
      if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
        _invalid_parameter_noinfo();
      }
      if (*plVar3 != 0) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar7 = *plVar1;
        }
        if (*(longlong **)(lVar7 + 0x20) <= plVar3) {
          _invalid_parameter_noinfo();
        }
        plVar3 = (longlong *)(**(code **)(**(longlong **)*plVar3 + 0x10))(*(longlong **)*plVar3,2);
        uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
        return uVar4;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar7;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
    cVar6 = cVar6 + '\x01';
  } while( true );
}




undefined8 FUN_1416075e0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x30) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  cVar6 = '\0';
  lVar7 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 < *(longlong **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) {
      return 0;
    }
    if (cVar6 == param_2) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = lVar7;
      }
      else {
        lVar5 = *plVar1;
      }
      if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
        _invalid_parameter_noinfo();
      }
      if (*plVar3 != 0) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar7 = *plVar1;
        }
        if (*(longlong **)(lVar7 + 0x20) <= plVar3) {
          _invalid_parameter_noinfo();
        }
        plVar3 = (longlong *)(**(code **)(**(longlong **)*plVar3 + 0x10))(*(longlong **)*plVar3,4);
        uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
        return uVar4;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar7;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(longlong **)(lVar5 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
    cVar6 = cVar6 + '\x01';
  } while( true );
}




undefined8 * FUN_141607740(undefined8 *param_1)

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




ulonglong FUN_1416077a0(longlong *param_1)

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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141607817;
  }
  _invalid_parameter_noinfo();
LAB_141607817:
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




void FUN_141607850(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416078b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141607910(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_141607a00(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141607b5d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141607b8c;
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
      goto LAB_141607b5d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141606810(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141607b8c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_141607bb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141606500((longlong)param_1);
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
    FUN_141606ba0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141607d60(undefined8 *param_1)

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




void * FUN_141607de0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141607e20(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    plVar1 = *(longlong **)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_141605b80((longlong)param_1,0,lVar2 + -8 >> 3,plVar1,param_3);
  }
  return;
}




void FUN_141607e90(undefined4 param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  plVar4 = DAT_14161d870;
  puVar3 = (undefined8 *)*DAT_14161d8a0;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar7 = puVar3;
          puVar3 = DAT_14161d8a0;
          if ((plVar4 == (longlong *)0x0) || (plVar4 != DAT_14161d870)) {
            _invalid_parameter_noinfo();
          }
          if (puVar7 == puVar3) {
            return;
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar4;
          }
          if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar2 = (longlong *)puVar7[4];
          if (((plVar2 != (longlong *)0x0) && (uVar5 = (**(code **)(*(longlong *)plVar2[1] + 0x10))(), uVar5 / 10000000 != 6)) &&
             (uVar5 = (**(code **)(*(longlong *)plVar2[1] + 0x10))(), uVar5 / 10000000 != 7)) {
            (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar3 = puVar7;
        }
        puVar3 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar3 + 0x29);
        puVar7 = (undefined8 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x29);
          puVar3 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      puVar3 = (undefined8 *)puVar7[1];
    } while (*(char *)((longlong)puVar3 + 0x29) != '\0');
    do {
      puVar6 = puVar3;
      puVar3 = puVar6;
      if (puVar7 != (undefined8 *)puVar6[2]) break;
      puVar3 = (undefined8 *)puVar6[1];
      puVar7 = puVar6;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141607fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  plVar4 = DAT_14161d870;
  puVar6 = (undefined8 *)*DAT_14161d8a0;
  while( true ) {
    puVar2 = DAT_14161d8a0;
    if ((plVar4 == (longlong *)0x0) || (plVar4 != DAT_14161d870)) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar4;
    }
    if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = (undefined8 *)puVar6[4];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
      puVar2 = (undefined8 *)puVar6[2];
      if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar2 + 0x29);
        puVar6 = puVar2;
        puVar2 = (undefined8 *)*puVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar2 + 0x29);
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar2;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
        puVar5 = (undefined8 *)puVar6[1];
        puVar2 = puVar6;
        while ((puVar6 = puVar5, cVar1 == '\0' && (puVar2 == (undefined8 *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
          puVar5 = (undefined8 *)puVar6[1];
          puVar2 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)((longlong)DAT_14161d8a0[1] + 0x29);
  plVar4 = (longlong *)DAT_14161d8a0[1];
  while (cVar1 == '\0') {
    FUN_141605d20(&DAT_14161d870,(longlong *)plVar4[2]);
    plVar3 = (longlong *)*plVar4;
    operator_delete(plVar4);
    plVar4 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  DAT_14161d8a0[1] = DAT_14161d8a0;
  _DAT_14161d8a8 = 0;
  *DAT_14161d8a0 = DAT_14161d8a0;
  DAT_14161d8a0[2] = DAT_14161d8a0;
  return;
}




undefined8 * FUN_141608170(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = rank::CRankSort::vftable;
  param_1[1] = param_2;
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 2);
    plVar2 = plVar1;
  }
  param_1[2] = plVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}




void FUN_1416081f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined8 FUN_141608210(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < puVar6) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar5 = 0;
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 < *(undefined8 **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar5;
    }
    else {
      lVar7 = *plVar1;
    }
    if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)(**(code **)(**(longlong **)*puVar6 + 0x10))(*(longlong **)*puVar6,3);
    iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (iVar3 == param_2) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar5;
      }
      else {
        lVar7 = *plVar1;
      }
      if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)(**(code **)(**(longlong **)*puVar6 + 0x10))(*(longlong **)*puVar6,4);
      iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (iVar3 == param_3) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar5 = *plVar1;
        }
        if (*(undefined8 **)(lVar5 + 0x20) <= puVar6) {
          _invalid_parameter_noinfo();
        }
        return *puVar6;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar5;
    }
    else {
      lVar7 = *plVar1;
    }
    if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    puVar6 = puVar6 + 1;
  } while( true );
}




longlong FUN_141608370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x30) < plVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 < *(longlong **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = lVar4;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(longlong **)(lVar3 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    if (*plVar5 == 0) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = lVar4;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(longlong **)(lVar3 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)(**(code **)(**(longlong **)*plVar5 + 0x10))(*(longlong **)*plVar5,2);
    lVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
    if (param_2 == lVar3) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar4 = *plVar1;
      }
      if (*(longlong **)(lVar4 + 0x20) <= plVar5) {
        _invalid_parameter_noinfo();
      }
      return *plVar5;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = lVar4;
    }
    else {
      lVar3 = *plVar1;
    }
    if (*(longlong **)(lVar3 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar5 = plVar5 + 1;
  }
  return 0;
}




void FUN_1416084b0(longlong param_1,undefined4 param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  short sVar8;
  longlong lVar9;
  longlong *plVar10;
  char local_res8;
  CMsg local_448 [1040];
  
  FUN_14160e550(local_448);
  sVar8 = (short)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (((int)((ulonglong)uVar3 / 10000000) == 6) && (0x32 < (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3))) {
    sVar8 = (short)((ulonglong)uVar3 / 10000000) + 0x2c;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if ((uVar3 / 10000000 == 7) && (100 < (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3))) {
      sVar8 = 100;
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  uVar6 = FUN_14160e5d0((longlong)local_448,1,uVar4,param_3,sVar8);
  if ((char)uVar6 != '\0') {
    plVar10 = *(longlong **)(param_1 + 0x28);
    if (*(longlong **)(param_1 + 0x30) < plVar10) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x10);
    uVar3 = 0;
    while( true ) {
      plVar7 = *(longlong **)(param_1 + 0x30);
      if (plVar7 < *(longlong **)(param_1 + 0x28)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (plVar10 == plVar7) break;
      if ((param_3 + 1) * (uint)DAT_14161d498 <= uVar3) break;
      if ((uint)DAT_14161d498 * (uint)param_3 <= uVar3) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar10) {
          _invalid_parameter_noinfo();
        }
        puVar2 = (undefined8 *)*plVar10;
        if (((uint)DAT_14161d499 < *(uint *)(param_1 + 0x48)) && (*(uint *)(param_1 + 0x48) - (uint)*(byte *)(puVar2 + 1) <= (uint)DAT_14161d499)) {
          local_res8 = '\x01';
        }
        else {
          local_res8 = '\0';
        }
        plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
        uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
        plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
        uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,2);
        uVar6 = (**(code **)(*plVar7 + 0x58))(plVar7);
        FUN_14160e630((longlong)local_448,(char)uVar3,uVar6,uVar5,uVar4,(char *)(puVar2 + 3),(char *)(puVar2 + 5),local_res8);
      }
      uVar3 = (uint)(byte)((char)uVar3 + 1);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(longlong **)(lVar9 + 0x20) <= plVar10) {
        _invalid_parameter_noinfo();
      }
      plVar10 = plVar10 + 1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_448);
  FUN_14160e5a0((undefined8 *)local_448);
  return;
}




void FUN_141608750(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  char *pcVar10;
  char *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  char cVar14;
  CMsg local_438 [1040];
  
  FUN_14160e550(local_438);
  bVar3 = false;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  uVar8 = FUN_14160e5d0((longlong)local_438,2,uVar4,0,0);
  if ((char)uVar8 != '\0') {
    plVar12 = *(longlong **)(param_1 + 0x28);
    if (*(longlong **)(param_1 + 0x30) < plVar12) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x10);
    while( true ) {
      lVar13 = 0;
      plVar9 = *(longlong **)(param_1 + 0x30);
      if (plVar9 < *(longlong **)(param_1 + 0x28)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (plVar12 == plVar9) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar13 = *plVar1;
      }
      if (*(longlong **)(lVar13 + 0x20) <= plVar12) {
        _invalid_parameter_noinfo();
      }
      puVar2 = (undefined8 *)*plVar12;
      plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
      iVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
      if (iVar5 == param_2) {
        if (((uint)DAT_14161d499 < *(uint *)(param_1 + 0x48)) && (*(uint *)(param_1 + 0x48) - (uint)*(byte *)(puVar2 + 1) <= (uint)DAT_14161d499)) {
          cVar14 = '\x01';
        }
        else {
          cVar14 = '\0';
        }
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
        uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
        uVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
        plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,2);
        uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
        uVar8 = FUN_14160e630((longlong)local_438,*(char *)(puVar2 + 1),uVar8,uVar6,uVar4,(char *)(puVar2 + 3),(char *)(puVar2 + 5),cVar14);
        if ((char)uVar8 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_438);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          FUN_14160e5d0((longlong)local_438,2,uVar4,0,0);
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,4);
          uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,3);
          uVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*(longlong *)*puVar2 + 0x10))((longlong *)*puVar2,2);
          uVar8 = (**(code **)(*plVar9 + 0x58))(plVar9);
          FUN_14160e630((longlong)local_438,*(char *)(puVar2 + 1),uVar8,uVar6,uVar4,(char *)(puVar2 + 3),(char *)(puVar2 + 5),cVar14);
        }
        bVar3 = true;
      }
      lVar13 = 0;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar13 = *plVar1;
      }
      if (*(longlong **)(lVar13 + 0x20) <= plVar12) {
        _invalid_parameter_noinfo();
      }
      plVar12 = plVar12 + 1;
    }
    if (bVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_438);
      goto LAB_141608a9e;
    }
  }
  uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (uVar7 / 10000000 == 6) {
    plVar12 = *(longlong **)(param_1 + 0x40);
    lVar13 = *plVar12;
    plVar1 = *(longlong **)(param_1 + 8);
    pcVar10 = (char *)(**(code **)(lVar13 + 8))(plVar12,param_2);
    pcVar11 = (char *)(**(code **)(*plVar12 + 8))(plVar12,param_2);
    uVar7 = (**(code **)(*plVar1 + 0x10))(plVar1);
    iVar5 = (**(code **)(lVar13 + 0x40))(*(undefined8 *)(param_1 + 0x40),param_2,uVar7 % 10);
    FUN_14160e630((longlong)local_438,'\0',(longlong)iVar5,param_2,param_2,pcVar11,pcVar10,'\x01');
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2,local_438);
  }
LAB_141608a9e:
  FUN_14160e5a0((undefined8 *)local_438);
  return;
}




ulonglong FUN_141608ad0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *in_RAX;
  
  if (param_3 <= *(longlong *)(param_1 + 0x50)) {
    in_RAX = (longlong *)(ulonglong)*(uint *)(param_1 + 0x48);
    if (in_RAX <= (longlong *)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3)) {
      if (param_3 == *(longlong *)(param_1 + 0x50)) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
        if (uVar2 / 10000000 != 6) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          in_RAX = (longlong *)((ulonglong)uVar2 * 0x6b5fca6b & 0xffffffff);
          if (uVar2 / 10000000 != 7) goto LAB_141608b7f;
        }
        in_RAX = (longlong *)0x0;
        if (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3 != 0) {
          in_RAX = (longlong *)FUN_1416077a0((longlong *)(param_1 + 0x10));
          if (*in_RAX != 0) {
            lVar1 = *(longlong *)(*in_RAX + 0x10);
            in_RAX = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))(*(longlong **)(param_1 + 0x40),param_2);
            if (lVar1 < (longlong)in_RAX) goto LAB_141608b91;
          }
        }
      }
LAB_141608b7f:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
LAB_141608b91:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




longlong * FUN_141608bb0(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141608c80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_141608d10(longlong *param_1)

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




void FUN_141608dd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141608df0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_141606810(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141606810(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_141606810(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_141606810(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_141606810(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_141606810(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_141606810(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_141607a00(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_141609110(longlong *param_1)

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
  FUN_141607bb0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416091b0(undefined8 *param_1)

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




void FUN_141609200(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141604c90();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141605610(param_1 + 0x10,uVar8);
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
      FUN_141607de0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141607de0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141606190(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_1416094b0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_141607e20(param_1,param_2,param_3);
  return;
}




longlong FUN_1416094c0(uint param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  plVar3 = DAT_14161d8a0;
  cVar1 = *(char *)(DAT_14161d8a0[1] + 0x29);
  plVar4 = (longlong *)DAT_14161d8a0[1];
  plVar2 = DAT_14161d8a0;
  while (plVar7 = plVar4, cVar1 == '\0') {
    if (*(uint *)(plVar7 + 3) < param_1) {
      plVar4 = (longlong *)plVar7[2];
      plVar7 = plVar2;
    }
    else {
      plVar4 = (longlong *)*plVar7;
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x29);
    plVar2 = plVar7;
  }
  local_30 = plVar2;
  local_38 = DAT_14161d870;
  if (DAT_14161d870 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar4 = DAT_14161d8a0;
  if ((plVar2 == plVar3) || (param_1 < *(uint *)(plVar2 + 3))) {
    local_20 = DAT_14161d8a0;
    local_28 = DAT_14161d870;
    pplVar6 = &local_28;
  }
  else {
    pplVar6 = &local_38;
  }
  plVar2 = *pplVar6;
  local_18 = plVar2;
  local_10 = pplVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != DAT_14161d870)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = local_10;
  if (local_10 == plVar4) {
    lVar5 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    if (plVar3 == *(longlong **)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar5 = plVar3[4];
  }
  return lVar5;
}




void FUN_1416095d0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  rsize_t _DstSize;
  undefined8 *_Dst;
  longlong *plVar5;
  longlong lVar6;
  
  _Dst = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  lVar6 = 0;
  while( true ) {
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 < *(undefined8 **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar5 == (longlong *)0x0) || (plVar5 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == puVar1) break;
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = lVar6;
    }
    else {
      lVar4 = *plVar5;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)(**(code **)(**(longlong **)*_Dst + 0x10))(*(longlong **)*_Dst,4);
    iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (iVar2 == param_2) {
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar6;
      }
      else {
        lVar4 = *plVar5;
      }
      if (*(undefined8 **)(lVar4 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      plVar5 = (longlong *)*_Dst;
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x40))(plVar3,0);
        if (*plVar5 != 0) {
          (*(code *)**(undefined8 **)*plVar5)((undefined8 *)*plVar5,1);
          *plVar5 = 0;
          *plVar5 = 0;
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x30) - (longlong)(_Dst + 1) >> 3;
      if (0 < lVar4) {
        _DstSize = lVar4 << 3;
        memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -8;
      if ((_Dst < *(undefined8 **)(param_1 + 0x28)) || (*(undefined8 **)(param_1 + 0x30) < _Dst)) {
        _invalid_parameter_noinfo();
      }
      plVar5 = *(longlong **)(param_1 + 0x10);
    }
    else {
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = lVar6;
      }
      else {
        lVar4 = *plVar5;
      }
      if (*(undefined8 **)(lVar4 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      _Dst = _Dst + 1;
    }
  }
  return;
}




void FUN_1416097b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  cVar4 = (char)param_2;
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < puVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 < *(undefined8 **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (puVar5 == puVar2) {
      FUN_141608d10((longlong *)(param_1 + 0x10));
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)*puVar5;
    if (plVar3 != (longlong *)0x0) {
      if (cVar4 == '\0') {
LAB_141609871:
        if (*plVar3 != 0) {
          param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          (*(code *)**(undefined8 **)*plVar3)();
          *plVar3 = 0;
          *plVar3 = 0;
        }
      }
      else if ((longlong *)*plVar3 != (longlong *)0x0) {
        param_2 = 0;
        (**(code **)(*(longlong *)*plVar3 + 0x40))();
        goto LAB_141609871;
      }
      FUN_1416041f0(plVar3,param_2,param_3,param_4);
      operator_delete(plVar3);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar5 = puVar5 + 1;
  } while( true );
}




void FUN_141609910(longlong param_1,int param_2,char *param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  byte bVar12;
  longlong *_Dst;
  longlong *plVar13;
  byte local_res18;
  byte local_res20;
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  _Dst = *(longlong **)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x30) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar13 = *(longlong **)(param_1 + 0x10);
  bVar12 = 0xff;
  local_res18 = 0xff;
  local_res20 = 0;
  do {
    lVar9 = 0;
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 < *(longlong **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar13 == (longlong *)0x0) || (plVar13 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == plVar1) {
      return;
    }
    if (plVar13 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar9 = *plVar13;
    }
    if (*(longlong **)(lVar9 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    plVar1 = (longlong *)*_Dst;
    if (plVar1 == (longlong *)0x0) {
      param_3 = (char *)(_Dst + 1);
      lVar9 = *(longlong *)(param_1 + 0x30) - (longlong)param_3 >> 3;
      if (0 < lVar9) {
        param_4 = (char *)(lVar9 << 3);
        memmove_s(_Dst,(rsize_t)param_4,param_3,(rsize_t)param_4);
      }
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -8;
      if ((_Dst < *(longlong **)(param_1 + 0x28)) || (*(longlong **)(param_1 + 0x30) < _Dst)) {
        _invalid_parameter_noinfo();
      }
      plVar13 = *(longlong **)(param_1 + 0x10);
    }
    else if ((uint)local_res20 < *(uint *)(param_1 + 0x48)) {
      bVar12 = bVar12 + 1;
      plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,2);
      uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      if ((uVar3 / 10000000 == 6) && (*(byte *)(plVar1 + 1) != bVar12)) {
        plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
        uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
        param_3 = (char *)**(undefined8 **)(param_1 + 0x40);
        cVar2 = (**(code **)param_3)(*(undefined8 **)(param_1 + 0x40),uVar4);
        if (cVar2 != '\0') {
          if (param_2 != 0) {
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
            iVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
            if (param_2 == iVar6) goto LAB_141609f5c;
          }
          FUN_14160e550(local_448);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          uVar8 = FUN_14160e5d0((longlong)local_448,2,uVar4,0,0);
          if ((char)uVar8 != '\0') {
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
            uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,3);
            uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            FUN_14160e630((longlong)local_448,bVar12,uVar8,uVar5,uVar4,(char *)(plVar1 + 3),(char *)(plVar1 + 5),'\0');
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
            uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),uVar4,local_448);
          }
          plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          lVar9 = **(longlong **)(param_1 + 0x40);
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          param_3 = (char *)(ulonglong)(uVar3 % 10);
          param_4 = (char *)(ulonglong)bVar12;
          (**(code **)(lVar9 + 0x50))(*(undefined8 *)(param_1 + 0x40),uVar4);
          FUN_14160e5a0((undefined8 *)local_448);
        }
      }
LAB_141609f5c:
      lVar9 = 0;
      *(byte *)(plVar1 + 1) = bVar12;
      if (plVar13 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar9 = *plVar13;
      }
      if (*(longlong **)(lVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      _Dst = _Dst + 1;
      local_res18 = bVar12;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      if ((uVar3 / 10000000 == 6) && ((char)plVar1[1] != -1)) {
        plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
        (**(code **)(*plVar7 + 0x40))(plVar7);
        param_3 = (char *)**(undefined8 **)(param_1 + 0x40);
        cVar2 = (**(code **)param_3)();
        if (cVar2 != '\0') {
          FUN_14160e550(local_858);
          uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          uVar8 = FUN_14160e5d0((longlong)local_858,2,uVar4,0,0);
          if ((char)uVar8 != '\0') {
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
            uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,3);
            uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,2);
            uVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
            FUN_14160e630((longlong)local_858,'\0',uVar8,uVar5,uVar4,(char *)(plVar1 + 3),(char *)(plVar1 + 5),'\x01');
            plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
            uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),uVar4,local_858);
          }
          plVar7 = (longlong *)(**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,4);
          (**(code **)(*plVar7 + 0x40))(plVar7);
          lVar9 = **(longlong **)(param_1 + 0x40);
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
          param_3 = (char *)(ulonglong)(uVar3 % 10);
          param_4 = (char *)0xff;
          (**(code **)(lVar9 + 0x50))(*(undefined8 *)(param_1 + 0x40));
          FUN_14160e5a0((undefined8 *)local_858);
        }
      }
      lVar9 = 0;
      *(undefined1 *)(plVar1 + 1) = 0xff;
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\rank\\src\\ranksort.cpp";
        param_3 = "pInfo->pRec";
        pcVar10 = "IF_OK";
        log_InlineLogERROR(&DAT_141613dc0);
      }
      else {
        pcVar10 = (char *)0x0;
        (**(code **)(*(longlong *)*plVar1 + 0x40))();
      }
      if (plVar13 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = lVar9;
      }
      else {
        lVar11 = *plVar13;
      }
      if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      if (*_Dst != 0) {
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = lVar9;
        }
        else {
          lVar11 = *plVar13;
        }
        if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        plVar1 = (longlong *)*_Dst;
        if (plVar1 != (longlong *)0x0) {
          FUN_1416041f0(plVar1,pcVar10,param_3,param_4);
          operator_delete(plVar1);
        }
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = lVar9;
        }
        else {
          lVar11 = *plVar13;
        }
        if (*(longlong **)(lVar11 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        *_Dst = 0;
        if (plVar13 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *plVar13;
        }
        if (*(longlong **)(lVar9 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        *_Dst = 0;
      }
      param_3 = (char *)(_Dst + 1);
      lVar9 = *(longlong *)(param_1 + 0x30) - (longlong)param_3 >> 3;
      if (0 < lVar9) {
        param_4 = (char *)(lVar9 << 3);
        memmove_s(_Dst,(rsize_t)param_4,param_3,(rsize_t)param_4);
      }
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -8;
      if ((_Dst < *(longlong **)(param_1 + 0x28)) || (*(longlong **)(param_1 + 0x30) < _Dst)) {
        _invalid_parameter_noinfo();
      }
      plVar13 = *(longlong **)(param_1 + 0x10);
      bVar12 = local_res18;
    }
    local_res20 = local_res20 + 1;
  } while( true );
}




undefined8 * FUN_141609fb0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_141608df0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_14160a0b0(longlong *param_1)

{
  FUN_141609110(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14160a0e0(undefined8 *param_1)

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
  lVar2 = FUN_141605fa0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_14160a160(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141609200((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_14160a254;
  }
  _invalid_parameter_noinfo();
LAB_14160a254:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_14160a290(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_14160a367:
      if (1 < lVar2) {
        FUN_1416063b0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_1416072f0((longlong)param_1,(longlong)param_2,param_4);
        FUN_141607e20(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_14160a367;
    }
    FUN_141607080(&local_18,param_1,param_2,param_4);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_14160a290(param_1,local_18,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_14160a290(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_14160a3c0(longlong *param_1)

{
  FUN_141609110(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_14160a3f0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint local_res10 [2];
  
  FUN_14160d390();
  while( true ) {
    plVar2 = (longlong *)FUN_14160d3d0();
    if (plVar2 == (longlong *)0x0) break;
    plVar3 = FUN_1416044e0(plVar2,param_1);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (cVar1 == '\0') {
        (**(code **)*plVar3)(plVar3,1);
      }
      else {
        local_res10[0] = (**(code **)(*plVar2 + 0x10))(plVar2);
        puVar4 = FUN_141609fb0(&DAT_14161d870,local_res10);
        *puVar4 = plVar3;
      }
    }
  }
  return 1;
}




void FUN_14160a490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CRankSort::vftable;
  FUN_1416097b0((longlong)param_1,0,param_3,param_4);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)param_1[2]);
  return;
}




undefined8 * FUN_14160a4f0(undefined8 *param_1)

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
  lVar2 = FUN_141605fa0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14160a570(longlong *param_1,undefined8 *param_2)

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
  FUN_14160a160(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_14160a620(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_14160a290((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_14160a680(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CRankSort::vftable;
  FUN_1416097b0((longlong)param_1,0,param_3,param_4);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14160a710(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong extraout_RAX;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined1 auStack_288 [32];
  uint local_268;
  uint local_258;
  int local_254;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238;
  char local_228 [511];
  undefined1 local_29;
  ulonglong local_28;
  
  local_238 = 0xfffffffffffffffe;
  local_28 = DAT_14161d7c8 ^ (ulonglong)auStack_288;
  local_248 = param_1;
  uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
  *(uint *)(param_1 + 9) = (uint)uVar4;
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
  plVar6 = (longlong *)InstanceGet();
  if ((((uVar5 == 0x1c9c381) || (uVar5 == 0x1c9c3e5)) || (uVar5 == 0x1c9c449)) || (uVar5 == 0x1c9c4ad)) {
    local_268 = uVar5;
    _snprintf(local_228,0x200,"DELETE FROM %s WHERE rank_type = %lu");
    local_29 = 0;
    uVar12 = (**(code **)(*plVar6 + 0x30))(plVar6,local_228,1,0);
    return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  }
  uVar8 = (ulonglong)uVar5 * 0x6b5fca6b & 0xffffffff;
  uVar13 = uVar5 / 10000000 - 2;
  if (5 < uVar13) goto LAB_14160ac5b;
  uVar8 = (ulonglong)uVar13;
  switch(uVar8) {
  case 0:
    log_InlineLogERROR("CRankSort::Init. RankType[%u] Error");
    uVar8 = extraout_RAX;
    goto LAB_14160ac5b;
  case 1:
    if (uVar5 < 0x1c9c513) {
      if (uVar5 != 0x1c9c512) {
        if (uVar5 < 0x1c9c44b) {
          if ((uVar5 < 0x1c9c449) && ((uVar5 < 0x1c9c381 || ((0x1c9c382 < uVar5 && ((uVar5 < 0x1c9c3e5 || (0x1c9c3e6 < uVar5)))))))) goto LAB_14160ac5b;
        }
        else if ((uVar5 < 0x1c9c4ad) || (0x1c9c4ae < uVar5)) goto LAB_14160ac5b;
      }
    }
    else if (((uVar5 != 0x1c9c576) && (uVar5 != 0x1c9c5da)) && ((uVar5 != 0x1c9c63e && (uVar8 = (ulonglong)(uVar5 + 0xfe363898), uVar5 + 0xfe363898 != 0))))
    goto LAB_14160ac5b;
    _snprintf(local_228,0x200,
              "SELECT cq_dyna_rank_rec.*, cq_user.name, cq_user.name, cq_user.donation FROM cq_dyna_rank_rec LEFT JOIN cq_user ON cq_dyna_rank_rec.Obj_id = cq_user.id WHERE cq_dyna_rank_rec.rank_type = %lu ORDER BY cq_dyna_rank_rec.value DESC, cq_dyna_rank_rec.user_id"
             );
    break;
  case 2:
    _snprintf(local_228,0x200,
              "SELECT cq_dyna_rank_rec.*, cq_user.name, cq_user.name, cq_user.donation FROM cq_dyna_rank_rec LEFT JOIN cq_user ON cq_dyna_rank_rec.Obj_id = cq_user.id WHERE cq_dyna_rank_rec.rank_type = %lu ORDER BY cq_dyna_rank_rec.value DESC, cq_dyna_rank_rec.user_id"
             );
    break;
  case 3:
    if (uVar5 == 50000000) {
      _snprintf(local_228,0x200,
                "SELECT cq_dyna_rank_rec.*, family.family_name, cq_user.name, cq_user.donation FROM cq_dyna_rank_rec LEFT JOIN family ON cq_dyna_rank_rec.Obj_id = family.id LEFT JOIN cq_user ON cq_dyna_rank_rec.user_id = cq_user.id WHERE cq_dyna_rank_rec.rank_type = %lu ORDER BY cq_dyna_rank_rec.value DESC, cq_dyna_rank_rec.user_id"
               );
      break;
    }
LAB_14160ac5b:
    return uVar8 & 0xffffffffffffff00;
  case 4:
    _snprintf(local_228,0x200,
              "SELECT cq_dyna_rank_rec.*, cq_user.name, cq_user.name, cq_user.donation FROM cq_dyna_rank_rec LEFT JOIN cq_user ON cq_dyna_rank_rec.Obj_id = cq_user.id WHERE cq_dyna_rank_rec.rank_type = %lu ORDER BY cq_dyna_rank_rec.value DESC, cq_dyna_rank_rec.user_id"
             );
    break;
  case 5:
    _snprintf(local_228,0x200,
              "SELECT cq_dyna_rank_rec.*, cq_user.name, cq_user.name, cq_user.donation FROM cq_dyna_rank_rec LEFT JOIN cq_user ON cq_dyna_rank_rec.Obj_id = cq_user.id WHERE cq_dyna_rank_rec.rank_type = %lu ORDER BY cq_dyna_rank_rec.value DESC, cq_dyna_rank_rec.user_id"
             );
  }
  local_29 = 0;
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_228,2);
  local_254 = -1;
  param_1[10] = 0;
  local_240 = plVar6;
  if ((plVar6 == (longlong *)0x0) || (lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6), lVar7 == 0)) {
    log_InlineLogWARNING("WARNING: CRankSort::Init() RankType=%u, RecordCount=0 at %s, %d");
  }
  else {
    local_258 = 0;
    while( true ) {
      uVar15 = (ulonglong)local_258;
      uVar8 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (uVar8 <= uVar15) break;
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar15);
      plVar9 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
      if (plVar9 != (longlong *)0x0) {
        if ((((ulonglong)(param_1[6] - param_1[5] >> 3) < (ulonglong)*(uint *)(param_1 + 9)) || (uVar8 = FUN_1416049c0((longlong)param_1), (char)uVar8 != '\0'))
           || (uVar8 = FUN_141604ac0((longlong)param_1), (char)uVar8 != '\0')) {
          local_250 = (longlong *)0x0;
          uVar8 = FUN_1416049c0((longlong)param_1);
          if (((char)uVar8 != '\0') || (uVar8 = FUN_141604ac0((longlong)param_1), (char)uVar8 != '\0')) {
            plVar10 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,7);
            local_250 = (longlong *)(**(code **)(*plVar10 + 0x58))(plVar10);
          }
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,6);
          plVar11 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,5);
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x78))(plVar10);
          plVar11 = (longlong *)(**(code **)(*plVar11 + 0x78))(plVar11);
          plVar10 = FUN_141605480((longlong)local_250,(longlong)plVar9,plVar11,plVar10);
          local_250 = plVar10;
          if (plVar10 == (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x40))(plVar9,0);
            (**(code **)*plVar9)(plVar9,1);
          }
          else {
            plVar11 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x10))((longlong *)*plVar10,4);
            uVar5 = (**(code **)(*plVar11 + 0x40))(plVar11);
            plVar11 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x10))((longlong *)*plVar10,3);
            (**(code **)(*plVar11 + 0x40))(plVar11);
            lVar7 = *param_1;
            uVar8 = (ulonglong)uVar5;
            cVar3 = (**(code **)(lVar7 + 0x50))(param_1);
            if (cVar3 == '\0') {
              uVar12 = 0;
              (**(code **)(*plVar9 + 0x40))(plVar9);
              FUN_1416041f0(plVar10,uVar12,uVar8,lVar7);
              operator_delete(plVar10);
              local_250 = (longlong *)0x0;
            }
            else {
              FUN_14160a570(param_1 + 2,&local_250);
              iVar14 = local_254 + 1;
              local_254 = iVar14;
              plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar10 + 0x10))((longlong *)*plVar10,2);
              lVar7 = (**(code **)(*plVar9 + 0x58))(plVar9);
              param_1[10] = lVar7;
              *(char *)(plVar10 + 1) = (char)iVar14;
            }
          }
        }
        else {
          (**(code **)(*plVar9 + 0x40))(plVar9,0);
          (**(code **)*plVar9)(plVar9,1);
        }
      }
      local_258 = local_258 + 1;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)*plVar6)(plVar6);
  }
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
  if ((uVar5 / 10000000 == 6) || (uVar8 = FUN_141604ac0((longlong)param_1), (char)uVar8 != '\0')) {
    puVar1 = (undefined8 *)param_1[6];
    if (puVar1 < (undefined8 *)param_1[5]) {
      _invalid_parameter_noinfo();
    }
    lVar7 = param_1[2];
    puVar2 = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[6] < puVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar7 == 0) || (lVar7 != param_1[2])) {
      _invalid_parameter_noinfo();
    }
    pcVar16 = (char *)((longlong)puVar1 - (longlong)puVar2 >> 3);
    pcVar17 = (char *)0x0;
    FUN_14160a290(puVar2,puVar1,(longlong)pcVar16,0);
    FUN_141609910((longlong)param_1,0,pcVar16,pcVar17);
  }
  uVar12 = (**(code **)(*param_1 + 0x58))(param_1);
  return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
}




ulonglong FUN_14160acf0(longlong *param_1,int param_2,char *param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong lVar14;
  rsize_t _DstSize;
  char *pcVar15;
  longlong lVar16;
  
  uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
  if (uVar5 / 10000000 != 6) {
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if (uVar5 / 10000000 != 7) {
      return (ulonglong)uVar5 * 0x6b5fca6b & 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[5];
  if ((longlong *)param_1[6] < plVar8) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)param_1[2];
  lVar14 = 0;
  do {
    plVar7 = (longlong *)param_1[6];
    if (plVar7 < (longlong *)param_1[5]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar7) goto LAB_14160b135;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar16 = lVar14;
    }
    else {
      lVar16 = *plVar1;
    }
    if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar7 = (longlong *)(**(code **)(**(longlong **)*plVar8 + 0x10))(*(longlong **)*plVar8,3);
    iVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if (iVar6 == param_2) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar16 = lVar14;
      }
      else {
        lVar16 = *plVar1;
      }
      if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
        _invalid_parameter_noinfo();
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)*plVar8 + 0x10))(*(longlong **)*plVar8,4);
      iVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
      if (iVar6 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar16 = lVar14;
        }
        else {
          lVar16 = *plVar1;
        }
        if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
          _invalid_parameter_noinfo();
        }
        plVar7 = (longlong *)*plVar8;
        if (plVar7 == (longlong *)0x0) {
LAB_14160b135:
          uVar10 = (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
          if (((char)uVar10 != '\0') && (uVar10 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3), (char)uVar10 != '\0')) {
            lVar14 = *param_1;
            plVar8 = (longlong *)param_1[8];
            uVar11 = (**(code **)(*plVar8 + 8))(plVar8,param_2);
            uVar12 = (**(code **)(*plVar8 + 8))(plVar8,param_2);
            uVar10 = (**(code **)(lVar14 + 0x20))(param_1,param_2,param_3,uVar12,param_2,uVar11);
          }
        }
        else {
          uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
          uVar10 = (ulonglong)uVar5 * 0x6b5fca6b & 0xffffffff;
          if (uVar5 / 10000000 != 7) {
            pcVar15 = param_3;
            cVar4 = (**(code **)(*param_1 + 0x48))(param_1);
            if (cVar4 == '\0') {
              if ((longlong *)*plVar7 == (longlong *)0x0) {
                param_4 = "f:\\version\\cqserver-78.0.11-1204\\modules\\rank\\src\\ranksort.cpp";
                pcVar15 = "pSortInfo->pRec";
                pcVar13 = "IF_OK";
                log_InlineLogERROR(&DAT_141613dc0);
              }
              else {
                pcVar13 = (char *)0x0;
                (**(code **)(*(longlong *)*plVar7 + 0x40))();
              }
              if (plVar1 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar16 = lVar14;
              }
              else {
                lVar16 = *plVar1;
              }
              if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
                _invalid_parameter_noinfo();
              }
              if (*plVar8 != 0) {
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar16 = lVar14;
                }
                else {
                  lVar16 = *plVar1;
                }
                if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
                  _invalid_parameter_noinfo();
                }
                plVar7 = (longlong *)*plVar8;
                if (plVar7 != (longlong *)0x0) {
                  FUN_1416041f0(plVar7,pcVar13,pcVar15,param_4);
                  operator_delete(plVar7);
                }
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar16 = lVar14;
                }
                else {
                  lVar16 = *plVar1;
                }
                if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
                  _invalid_parameter_noinfo();
                }
                *plVar8 = 0;
                if (plVar1 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                else {
                  lVar14 = *plVar1;
                }
                if (*(longlong **)(lVar14 + 0x20) <= plVar8) {
                  _invalid_parameter_noinfo();
                }
                *plVar8 = 0;
              }
              lVar14 = param_1[6] - (longlong)(plVar8 + 1) >> 3;
              if (0 < lVar14) {
                _DstSize = lVar14 << 3;
                memmove_s(plVar8,_DstSize,plVar8 + 1,_DstSize);
              }
              param_1[6] = param_1[6] + -8;
              if ((plVar8 < (longlong *)param_1[5]) || ((longlong *)param_1[6] < plVar8)) {
                _invalid_parameter_noinfo();
              }
            }
            else {
              plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar7 + 0x10))((longlong *)*plVar7,2);
              pcVar15 = (char *)(**(code **)(*plVar8 + 0x58))(plVar8);
              if ((pcVar15 == param_3) &&
                 (uVar10 = plVar7[2], uVar9 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2), uVar10 == uVar9)) {
                return uVar9;
              }
              plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar7 + 0x10))((longlong *)*plVar7,2);
              (**(code **)(*plVar8 + 0xa0))(plVar8,param_3);
              (**(code **)(*(longlong *)*plVar7 + 0x38))((longlong *)*plVar7,0);
              plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[8] + 8))((longlong *)param_1[8],param_2);
              plVar7[3] = *plVar8;
              plVar7[4] = plVar8[1];
              *(undefined1 *)((longlong)plVar7 + 0x27) = 0;
              plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[8] + 8))((longlong *)param_1[8],param_2);
              plVar7[5] = *plVar8;
              plVar7[6] = plVar8[1];
              *(undefined1 *)((longlong)plVar7 + 0x37) = 0;
              lVar14 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2);
              plVar7[2] = lVar14;
            }
            puVar2 = (undefined8 *)param_1[6];
            if (puVar2 < (undefined8 *)param_1[5]) {
              _invalid_parameter_noinfo();
            }
            lVar14 = param_1[2];
            puVar3 = (undefined8 *)param_1[5];
            if ((undefined8 *)param_1[6] < puVar3) {
              _invalid_parameter_noinfo();
            }
            if ((lVar14 == 0) || (lVar14 != param_1[2])) {
              _invalid_parameter_noinfo();
            }
            pcVar15 = (char *)((longlong)puVar2 - (longlong)puVar3 >> 3);
            pcVar13 = (char *)0x0;
            FUN_14160a290(puVar3,puVar2,(longlong)pcVar15,0);
            FUN_141609910((longlong)param_1,param_2,pcVar15,pcVar13);
            uVar10 = (**(code **)(*param_1 + 0x58))(param_1);
          }
        }
        return uVar10;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar16 = lVar14;
    }
    else {
      lVar16 = *plVar1;
    }
    if (*(longlong **)(lVar16 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar8 = plVar8 + 1;
  } while( true );
}




undefined1 FUN_14160b1c0(longlong *param_1,int param_2,longlong param_3,longlong *param_4,int param_5,longlong *param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 uVar13;
  longlong *local_res8;
  
  cVar3 = (**(code **)(*param_1 + 0x48))();
  if (cVar3 == '\0') {
    return 0xff;
  }
  puVar6 = (undefined8 *)FUN_141608210((longlong)param_1,param_2,param_5);
  if (puVar6 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      return 0xff;
    }
    bVar2 = param_1[10] < param_3;
    if ((param_3 == param_1[10]) &&
       (((uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))(), uVar4 / 10000000 == 6 || (uVar11 = FUN_141604ac0((longlong)param_1), (char)uVar11 != '\0'))
        && (param_1[6] - param_1[5] >> 3 != 0)))) {
      plVar7 = (longlong *)FUN_1416077a0(param_1 + 2);
      if ((*plVar7 != 0) &&
         (lVar8 = *(longlong *)(*plVar7 + 0x10), lVar9 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2), lVar8 < lVar9)) {
        bVar2 = true;
      }
    }
    plVar7 = (longlong *)InstanceGet();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,"cq_dyna_rank_rec");
    if (plVar7 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141613dc0);
      return 0xff;
    }
    plVar12 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,1);
    lVar8 = *plVar12;
    uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    (**(code **)(lVar8 + 0xb8))(plVar12,uVar5);
    plVar12 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,2);
    (**(code **)(*plVar12 + 0xa0))(plVar12,param_3);
    plVar12 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,3);
    (**(code **)(*plVar12 + 0xb8))(plVar12,param_2);
    plVar12 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,4);
    (**(code **)(*plVar12 + 0xb8))(plVar12,param_5);
    cVar3 = (**(code **)(*plVar7 + 0x50))(plVar7,1);
    if (cVar3 == '\0') {
      (**(code **)*plVar7)(plVar7,1);
      return 0xff;
    }
    lVar8 = 0;
    uVar11 = FUN_1416049c0((longlong)param_1);
    if (((char)uVar11 != '\0') || (uVar11 = FUN_141604ac0((longlong)param_1), (char)uVar11 != '\0')) {
      lVar8 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2);
    }
    local_res8 = FUN_141605480(lVar8,(longlong)plVar7,param_4,param_6);
    if (local_res8 == (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x40))(plVar7,0);
      (**(code **)*plVar7)(plVar7,1);
      return 0xff;
    }
    FUN_14160a570(param_1 + 2,&local_res8);
    if (!bVar2) {
      uVar13 = 1;
      goto LAB_14160b5c8;
    }
  }
  else {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,2);
    lVar8 = (**(code **)(*plVar7 + 0x58))(plVar7);
    if (lVar8 == param_3) {
      uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
      if ((uVar4 / 10000000 != 6) && (uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))(), uVar4 / 10000000 != 7)) {
        return 1;
      }
      lVar8 = puVar6[2];
      lVar9 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2);
      if (lVar8 == lVar9) {
        return 1;
      }
    }
    plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,2);
    (**(code **)(*plVar7 + 0xa0))(plVar7,param_3);
    (**(code **)(*(longlong *)*puVar6 + 0x38))((longlong *)*puVar6,0);
    puVar6[3] = *param_4;
    puVar6[4] = param_4[1];
    *(undefined1 *)((longlong)puVar6 + 0x27) = 0;
    puVar6[5] = *param_6;
    puVar6[6] = param_6[1];
    *(undefined1 *)((longlong)puVar6 + 0x37) = 0;
    uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if ((uVar4 / 10000000 == 6) || (uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))(), uVar4 / 10000000 == 7)) {
      uVar10 = (**(code **)(*(longlong *)param_1[8] + 0x48))((longlong *)param_1[8],param_2);
      puVar6[2] = uVar10;
    }
  }
  puVar6 = (undefined8 *)param_1[6];
  if (puVar6 < (undefined8 *)param_1[5]) {
    _invalid_parameter_noinfo();
  }
  lVar8 = param_1[2];
  puVar1 = (undefined8 *)param_1[5];
  if ((undefined8 *)param_1[6] < puVar1) {
    _invalid_parameter_noinfo();
  }
  if ((lVar8 == 0) || (lVar8 != param_1[2])) {
    _invalid_parameter_noinfo();
  }
  param_4 = (longlong *)((longlong)puVar6 - (longlong)puVar1 >> 3);
  param_6 = (longlong *)0x0;
  FUN_14160a290(puVar1,puVar6,(longlong)param_4,0);
  uVar13 = 0;
LAB_14160b5c8:
  FUN_141609910((longlong)param_1,0,(char *)param_4,(char *)param_6);
  (**(code **)(*param_1 + 0x58))(param_1);
  return uVar13;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14160b600(longlong *param_1,undefined4 param_2,longlong param_3,longlong *param_4,undefined4 param_5,longlong *param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 extraout_RAX_01;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  char local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined1 local_c7 [126];
  undefined1 local_49;
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_14161d7c8 ^ (ulonglong)auStack_128;
  local_e4 = param_2;
  local_e0 = param_4;
  local_d8 = param_1;
  if (param_4 == (longlong *)0x0) {
    local_108 = 0x24c;
    log_InlineLogERROR(&DAT_141613dc0);
    uVar4 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),0xff);
  }
  else if (param_6 == (longlong *)0x0) {
    local_108 = 0x251;
    log_InlineLogERROR(&DAT_141613dc0);
    uVar4 = CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),0xff);
  }
  else {
    uVar11 = 1;
    local_e8 = 1;
    uVar4 = (**(code **)(*param_1 + 0x48))();
    if ((char)uVar4 == '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
    }
    else {
      local_c8 = '\0';
      memset(local_c7,0,0x7f);
      local_108 = param_7;
      _snprintf(&local_c8,0x80,"SELECT * FROM %s WHERE rank_type = %lu");
      local_49 = 0;
      plVar5 = (longlong *)InstanceGet();
      plVar10 = (longlong *)*plVar5;
      plVar6 = (longlong *)(*(code *)plVar10[2])(plVar5,&local_c8,1);
      local_f0 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        local_108 = 0x267;
        log_InlineLogERROR(&DAT_141613dc0);
        uVar4 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),0xff);
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
        if (lVar7 == 0) {
          cVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
          if (cVar2 == '\0') {
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          local_f8 = param_1[10] < param_3;
          plVar10 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,"cq_dyna_rank_rec");
          if (plVar10 == (longlong *)0x0) {
            local_108 = 0x29a;
            log_InlineLogERROR(&DAT_141613dc0);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          plVar5 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,1);
          lVar7 = *plVar5;
          uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
          (**(code **)(lVar7 + 0xb8))(plVar5,uVar3);
          plVar5 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
          (**(code **)(*plVar5 + 0xa0))(plVar5,param_3);
          plVar5 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,3);
          (**(code **)(*plVar5 + 0xb8))(plVar5,local_e4);
          plVar5 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,4);
          (**(code **)(*plVar5 + 0xb8))(plVar5,param_5);
          cVar2 = (**(code **)(*plVar10 + 0x50))(plVar10,1);
          if (cVar2 == '\0') {
            (**(code **)*plVar10)(plVar10,1);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          plVar5 = FUN_141605480(0,(longlong)plVar10,local_e0,param_6);
          if (plVar5 == (longlong *)0x0) {
            local_e0 = plVar5;
            (**(code **)(*plVar10 + 0x40))(plVar10,0);
            (**(code **)*plVar10)(plVar10,1);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          plVar8 = local_e0;
          local_e0 = plVar5;
          FUN_14160a570(param_1 + 2,&local_e0);
        }
        else {
          plVar5 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
          if (plVar5 == (longlong *)0x0) {
            local_108 = 0x270;
            log_InlineLogERROR(&DAT_141613dc0);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          plVar8 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,2);
          lVar7 = (**(code **)(*plVar8 + 0x58))(plVar8);
          puVar9 = (undefined8 *)FUN_141608370((longlong)param_1,lVar7);
          if (puVar9 == (undefined8 *)0x0) {
            local_108 = 0x277;
            log_InlineLogERROR(&DAT_141613dc0);
            (**(code **)*plVar5)(plVar5,1);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff);
          }
          plVar8 = (longlong *)(**(code **)(*(longlong *)*puVar9 + 0x10))((longlong *)*puVar9,2);
          lVar7 = (**(code **)(*plVar8 + 0x58))(plVar8);
          if (lVar7 == param_3) {
            (**(code **)*plVar5)(plVar5,1);
            uVar4 = (**(code **)*plVar6)(plVar6);
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          }
          FUN_141604300(puVar9,local_e4);
          FUN_141604240(puVar9,param_5);
          FUN_141604290(puVar9,param_3);
          puVar9[3] = *local_e0;
          puVar9[4] = local_e0[1];
          *(undefined1 *)((longlong)puVar9 + 0x27) = 0;
          puVar9[5] = *param_6;
          puVar9[6] = param_6[1];
          *(undefined1 *)((longlong)puVar9 + 0x37) = 0;
          local_f8 = '\x01';
          plVar8 = local_e0;
          (**(code **)*plVar5)(plVar5);
          param_6 = plVar10;
        }
        (**(code **)*plVar6)(plVar6);
        if (local_f8 != '\0') {
          puVar9 = (undefined8 *)param_1[6];
          if (puVar9 < (undefined8 *)param_1[5]) {
            _invalid_parameter_noinfo();
          }
          lVar7 = param_1[2];
          puVar1 = (undefined8 *)param_1[5];
          if ((undefined8 *)param_1[6] < puVar1) {
            _invalid_parameter_noinfo();
          }
          if ((lVar7 == 0) || (lVar7 != param_1[2])) {
            _invalid_parameter_noinfo();
          }
          plVar8 = (longlong *)((longlong)puVar9 - (longlong)puVar1 >> 3);
          param_6 = (longlong *)0x0;
          FUN_14160a290(puVar1,puVar9,(longlong)plVar8,0);
          uVar11 = 0;
        }
        FUN_141609910((longlong)param_1,0,(char *)plVar8,(char *)param_6);
        uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
        uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar11);
      }
    }
  }
  return uVar4;
}




void FUN_14160bba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CRankType::vftable;
  if (param_1[1] != 0) {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_14160bbf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x00014160bc0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_14160bc10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00014160bc2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_14160bc40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x00014160bc5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return;
}




void FUN_14160bc70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x00014160bc8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




bool FUN_14160bca0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_14160bce0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_14160bef0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_1 * 0x30);
  return;
}




undefined8 * FUN_14160bf90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160bba0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_14160bfe0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14160bff0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14160c012;
  }
  lVar2 = *plVar1;
LAB_14160c012:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14160c080(longlong param_1,longlong param_2)

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




void FUN_14160c0e0(longlong param_1,longlong *param_2)

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




undefined8 * FUN_14160c160(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_14160c1a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014160c1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_14160c230(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14161b6a8);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_14160c2a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014160c2d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_14160c350(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14160c372;
  }
  lVar2 = *plVar1;
LAB_14160c372:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14160c390(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14160c3b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14160c3b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_14160c400(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong FUN_14160c440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14160c462;
  }
  lVar2 = *plVar1;
LAB_14160c462:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14160c490(longlong *param_1)

{
  FUN_14160c1a0(param_1);
  return param_1;
}




undefined8 * FUN_14160c4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_14160c530(longlong *param_1)

{
  FUN_14160c2a0(param_1);
  return param_1;
}




undefined8 * FUN_14160c550(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_14160c5a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14161b708);
  }
  FUN_14160c1a0(param_3);
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
        goto LAB_14160c78c;
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
LAB_14160c78c:
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
            FUN_14160c080((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14160c0e0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_14160c080((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_14160c0e0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14160c080((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_14160c0e0((longlong)param_1,plVar7);
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




void FUN_14160c960(void)

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




longlong * FUN_14160c9c0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14160c1a0(param_1);
  return param_2;
}




undefined8 * FUN_14160c9f0(undefined8 *param_1)

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




void FUN_14160ca70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14160c3b0(param_1,(longlong *)plVar2[2]);
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




longlong FUN_14160cb00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14160cb22;
  }
  lVar2 = *plVar1;
LAB_14160cb22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14160cb40(longlong *param_1)

{
  FUN_14160c1a0(param_1);
  return param_1;
}




void FUN_14160cb70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14160cbd0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14161b5f0);
  }
  plVar5 = FUN_14160c4b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_14160cf10(longlong *param_1)

{
  FUN_14160c2a0(param_1);
  return param_1;
}




longlong * FUN_14160cf30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14160ca70((longlong)param_1);
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
    FUN_14160c5a0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_14160d0e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14160c960();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14160d120(undefined8 *param_1)

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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14160d170(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar4 = DAT_14161d8b0;
  puVar6 = (undefined8 *)*DAT_14161d8e0;
  lVar8 = 0;
  while( true ) {
    puVar2 = DAT_14161d8e0;
    if ((plVar4 == (longlong *)0x0) || (plVar4 != DAT_14161d8b0)) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar8;
    }
    else {
      lVar7 = *plVar4;
    }
    if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (puVar6[4] != 0) {
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *plVar4;
      }
      if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = (undefined8 *)puVar6[4];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *plVar4;
      }
      if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar6[4] = 0;
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *plVar4;
      }
      if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar6[4] = 0;
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
      puVar2 = (undefined8 *)puVar6[2];
      if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar2 + 0x29);
        puVar6 = puVar2;
        puVar2 = (undefined8 *)*puVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar2 + 0x29);
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar2;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
        puVar5 = (undefined8 *)puVar6[1];
        puVar2 = puVar6;
        while ((puVar6 = puVar5, cVar1 == '\0' && (puVar2 == (undefined8 *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
          puVar5 = (undefined8 *)puVar6[1];
          puVar2 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)((longlong)DAT_14161d8e0[1] + 0x29);
  plVar4 = (longlong *)DAT_14161d8e0[1];
  while (cVar1 == '\0') {
    FUN_14160c3b0(&DAT_14161d8b0,(longlong *)plVar4[2]);
    plVar3 = (longlong *)*plVar4;
    operator_delete(plVar4);
    plVar4 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  DAT_14161d8e0[1] = DAT_14161d8e0;
  _DAT_14161d8e8 = 0;
  *DAT_14161d8e0 = DAT_14161d8e0;
  DAT_14161d8e0[2] = DAT_14161d8e0;
  return;
}




void FUN_14160d390(void)

{
  DAT_14161d8f0 = DAT_14161d8b0;
  DAT_14161d8f8 = *DAT_14161d8e0;
  return;
}




longlong FUN_14160d3d0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = DAT_14161d8e0;
  lVar4 = 0;
  if ((DAT_14161d8f0 == (longlong *)0x0) || (DAT_14161d8f0 != DAT_14161d8b0)) {
    _invalid_parameter_noinfo();
  }
  if (DAT_14161d8f8 != plVar2) {
    if ((DAT_14161d8f0 != (longlong *)0x0) || (_invalid_parameter_noinfo(), DAT_14161d8f0 != (longlong *)0x0)) {
      lVar4 = *DAT_14161d8f0;
    }
    if (DAT_14161d8f8 == *(longlong **)(lVar4 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = DAT_14161d8f8[4];
    if (DAT_14161d8f0 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)DAT_14161d8f8 + 0x29) != '\0') {
      _invalid_parameter_noinfo();
      return lVar4;
    }
    plVar2 = (longlong *)DAT_14161d8f8[2];
    if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x29);
      DAT_14161d8f8 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        DAT_14161d8f8 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(DAT_14161d8f8[1] + 0x29);
      plVar3 = (longlong *)DAT_14161d8f8[1];
      plVar2 = DAT_14161d8f8;
      while ((DAT_14161d8f8 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)DAT_14161d8f8[2]))) {
        cVar1 = *(char *)(DAT_14161d8f8[1] + 0x29);
        plVar3 = (longlong *)DAT_14161d8f8[1];
        plVar2 = DAT_14161d8f8;
      }
    }
  }
  return lVar4;
}




longlong * FUN_14160d4e0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14160d63d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14160d66c;
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
      goto LAB_14160d63d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14160cbd0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14160d66c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_14160d690(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_14160d760(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14160d780(longlong *param_1)

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
  FUN_14160cf30(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_14160d7f0(undefined8 *param_1)

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




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14160d840(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_498 [32];
  uint local_478;
  longlong *local_470;
  uint local_468 [2];
  longlong *local_460;
  longlong *local_458;
  undefined8 local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430 [3];
  char local_418 [1023];
  undefined1 local_19;
  ulonglong local_18;
  
  local_450 = 0xfffffffffffffffe;
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_498;
  _snprintf(local_418,0x400,PTR_s_SELECT___FROM__s_14161d568);
  local_19 = 0;
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,local_418,2);
  uVar7 = 0;
  if (plVar2 != (longlong *)0x0) {
    local_470 = plVar2;
    lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if (lVar3 != 0) {
      local_478 = 0;
      while( true ) {
        uVar1 = local_478;
        uVar8 = (ulonglong)local_478;
        uVar4 = (**(code **)(*plVar2 + 0x40))(plVar2);
        if (uVar4 <= uVar8) break;
        (**(code **)(*plVar2 + 0x30))(plVar2,uVar8);
        plVar5 = (longlong *)(**(code **)(*plVar2 + 0x38))(plVar2);
        if (plVar5 != (longlong *)0x0) {
          local_458 = operator_new(0x10);
          if (local_458 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            *local_458 = (longlong)rank::CRankType::vftable;
            local_458[1] = (longlong)plVar5;
            plVar9 = local_458;
          }
          local_468[0] = (**(code **)(*plVar9 + 0x10))(plVar9);
          local_460 = plVar9;
          plVar6 = FUN_14160d4e0(&DAT_14161d8b0,local_430,local_468);
          local_448 = *plVar6;
          local_440 = plVar6[1];
          local_438 = plVar6[2];
          if ((char)local_438 == '\0') {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            log_InlineLogERROR("CRankType::Init type repeat, delete data, type:%u.");
            (**(code **)(*plVar5 + 0x40))(plVar5,0);
            (**(code **)*plVar9)(plVar9,1);
          }
        }
        local_478 = uVar1 + 1;
      }
    }
    uVar7 = (**(code **)*plVar2)(plVar2);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  return uVar7;
}




longlong FUN_14160da20(uint param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  plVar3 = DAT_14161d8e0;
  cVar1 = *(char *)(DAT_14161d8e0[1] + 0x29);
  plVar4 = (longlong *)DAT_14161d8e0[1];
  plVar2 = DAT_14161d8e0;
  while (plVar7 = plVar4, cVar1 == '\0') {
    if (*(uint *)(plVar7 + 3) < param_1) {
      plVar4 = (longlong *)plVar7[2];
      plVar7 = plVar2;
    }
    else {
      plVar4 = (longlong *)*plVar7;
    }
    cVar1 = *(char *)((longlong)plVar4 + 0x29);
    plVar2 = plVar7;
  }
  local_30 = plVar2;
  local_38 = DAT_14161d8b0;
  if (DAT_14161d8b0 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar4 = DAT_14161d8e0;
  if ((plVar2 == plVar3) || (param_1 < *(uint *)(plVar2 + 3))) {
    local_20 = DAT_14161d8e0;
    local_28 = DAT_14161d8b0;
    pplVar6 = &local_28;
  }
  else {
    pplVar6 = &local_38;
  }
  plVar2 = *pplVar6;
  local_18 = plVar2;
  local_10 = pplVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != DAT_14161d8b0)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = local_10;
  if (local_10 == plVar4) {
    lVar5 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    if (plVar3 == *(longlong **)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar5 = plVar3[4];
  }
  return lVar5;
}




void FUN_14160db30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14160db50(undefined8 *param_1)

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




void FUN_14160dba0(longlong *param_1)

{
  FUN_14160d780(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14160dbd0(undefined8 *param_1)

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




void FUN_14160dc20(longlong *param_1)

{
  FUN_14160d780(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14160dc50(undefined8 *param_1)

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
  lVar2 = FUN_14160c960();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14160dcd0(undefined8 *param_1)

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
  lVar2 = FUN_14160c960();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14160dd50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CTodayFlowerSort::vftable;
  return param_1;
}




void FUN_14160dd80(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_14160dda0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CTodayFlowerSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_14160ddd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14160ddf0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d5f0);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_14160de90(void)

{
  if ((DAT_14161d908 & 1) == 0) {
    DAT_14161d908 = DAT_14161d908 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d900,"CTodayFlowerSort");
    atexit((_func_5014 *)&LAB_141612860);
  }
  return &DAT_14161d900;
}




void FUN_14160def0(__uint64 param_1)

{
  if ((DAT_14161d908 & 1) == 0) {
    DAT_14161d908 = DAT_14161d908 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d900,"CTodayFlowerSort");
    atexit((_func_5014 *)&LAB_141612860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160df45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d900,param_1);
  return;
}




void FUN_14160df50(void *param_1)

{
  if ((DAT_14161d908 & 1) == 0) {
    DAT_14161d908 = DAT_14161d908 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d900,"CTodayFlowerSort");
    atexit((_func_5014 *)&LAB_141612860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160dfa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d900,param_1);
  return;
}




void FUN_14160dfb0(void *param_1)

{
  if ((DAT_14161d908 & 1) == 0) {
    DAT_14161d908 = DAT_14161d908 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d900,"CTodayFlowerSort");
    atexit((_func_5014 *)&LAB_141612860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160e005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d900,param_1);
  return;
}




undefined8 * FUN_14160e010(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CTodayFlowerSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_14160df50(param_1);
  }
  return param_1;
}




undefined8 * FUN_14160e060(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141608170(param_1,param_2,param_3);
  *param_1 = rank::CUserLevelSort::vftable;
  return param_1;
}




void FUN_14160e090(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_14160e0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CUserLevelSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  return;
}




bool FUN_14160e0e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  
  bVar1 = FUN_1416049f0(param_1,param_2,param_3);
  return bVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14160e100(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14161d7c8 ^ (ulonglong)auStack_448;
  local_418 = '\0';
  memset(local_417,0,0x3ff);
  local_428 = param_3;
  _snprintf(&local_418,0x400,PTR_s_SELECT_id_FROM__s_WHERE_id____u_14161d670);
  local_19 = 0;
  FUN_141604a30(param_1,&local_418);
  return;
}




undefined * FUN_14160e1a0(void)

{
  if ((DAT_14161d918 & 1) == 0) {
    DAT_14161d918 = DAT_14161d918 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d910,"CUserLevelSort");
    atexit((_func_5014 *)&LAB_141612870);
  }
  return &DAT_14161d910;
}




void FUN_14160e200(__uint64 param_1)

{
  if ((DAT_14161d918 & 1) == 0) {
    DAT_14161d918 = DAT_14161d918 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d910,"CUserLevelSort");
    atexit((_func_5014 *)&LAB_141612870);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160e255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14161d910,param_1);
  return;
}




void FUN_14160e260(void *param_1)

{
  if ((DAT_14161d918 & 1) == 0) {
    DAT_14161d918 = DAT_14161d918 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d910,"CUserLevelSort");
    atexit((_func_5014 *)&LAB_141612870);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160e2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14161d910,param_1);
  return;
}




void FUN_14160e2c0(void *param_1)

{
  if ((DAT_14161d918 & 1) == 0) {
    DAT_14161d918 = DAT_14161d918 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14161d910,"CUserLevelSort");
    atexit((_func_5014 *)&LAB_141612870);
  }
                    /* WARNING: Could not recover jumptable at 0x00014160e315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14161d910,param_1);
  return;
}




undefined8 * FUN_14160e320(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = rank::CUserLevelSort::vftable;
  FUN_14160a490(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_14160e260(param_1);
  }
  return param_1;
}




CMsg * FUN_14160e370(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_14160e3a0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_14160e3b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014160e3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_14160e3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014160e3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_14160e3d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014160e3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_14160e3e0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14160e410(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = rank::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14160e460(undefined8 *param_1)

{
  *param_1 = rank::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14160e490(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_14160e4c0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141603d30();
  (**(code **)(*plVar1 + 8))(plVar1,param_2);
  return;
}




undefined8 * FUN_14160e500(undefined8 *param_1,byte param_2)

{
  *param_1 = rank::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14160e550(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = rank::CMsgRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14160e5a0(undefined8 *param_1)

{
  *param_1 = rank::CMsgRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_14160e5d0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,undefined2 param_5)

{
  undefined2 *puVar1;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x47f;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x50;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14160e630(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,char *param_6,char *param_7,char param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14161d7c8 ^ (ulonglong)auStack_78;
  **(short **)(param_1 + 0x408) = (*(short **)(param_1 + 0x408))[8] * 0x38 + 0x50;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (param_8 == '\0') {
    local_58 = (ulonglong)(byte)(param_2 + 1);
  }
  else {
    local_58 = 0;
  }
  local_48 = CONCAT44(param_5,param_4);
  local_50 = param_3;
  if (param_6 != (char *)0x0) {
    strncpy((char *)&local_40,param_6,0x10);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)&local_30,param_7,0x10);
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  lVar3 = (longlong)*(int *)(lVar2 + 0x10) * 0x38;
  *(ulonglong *)(lVar3 + 0x18 + lVar2) = local_58;
  *(undefined8 *)(lVar3 + 0x20 + lVar2) = local_50;
  *(undefined8 *)(lVar3 + 0x28 + lVar2) = local_48;
  *(undefined8 *)(lVar3 + 0x30 + lVar2) = local_40;
  *(undefined8 *)(lVar3 + 0x38 + lVar2) = local_38;
  *(undefined8 *)(lVar3 + 0x40 + lVar2) = local_30;
  *(undefined8 *)(lVar3 + 0x48 + lVar2) = local_28;
  lVar2 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar2 + 0x10);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




bool FUN_14160e770(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x47f;
}




void FUN_14160e7a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = FUN_141603d30();
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(char *)(lVar1 + 4) == '\x01') {
    FUN_141603890(puVar2,param_2,*(uint *)(lVar1 + 8),*(undefined1 *)(lVar1 + 0xe));
    return;
  }
  if (*(char *)(lVar1 + 4) == '\x02') {
    if (*(uint *)(lVar1 + 8) == 0) {
      FUN_141607e90(param_2);
      FUN_141603960((longlong)puVar2,param_2);
      return;
    }
    FUN_1416038d0(puVar2,param_2,*(uint *)(lVar1 + 8));
  }
  return;
}




undefined8 * FUN_14160e840(undefined8 *param_1,byte param_2)

{
  *param_1 = rank::CMsgRank::vftable;
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
  if ((_StackCookie == DAT_14161d7c8) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_14161dec0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_14161dec0);
    local_res18[0] = _decode_pointer(DAT_14161deb8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_14161dec0 = _encode_pointer(local_res10);
    DAT_14161deb8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_14160eb34(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_14160ebd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_14161deb8 = _encode_pointer(puVar1);
  DAT_14161dec0 = DAT_14161deb8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14160f250();
    atexit(FUN_14160f288);
    atexit((_func_5014 *)&LAB_14160f244);
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
    if (DAT_14161d91c < 1) {
      return 0;
    }
    DAT_14161d91c = DAT_14161d91c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14161dea8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14161dea8;
        pvVar3 = DAT_14161dea8;
      }
      DAT_14161dea8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14160ecb2;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14160ecb2:
    if (DAT_14161dea0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_14161dec0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_14161deb8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_14161dec0);
            plVar12 = (longlong *)_decode_pointer(DAT_14161deb8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_14161deb8 = _encoded_null();
        DAT_14161dec0 = DAT_14161deb8;
      }
      DAT_14161dea0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_14161dea8 = (void *)0x0;
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
      bVar13 = DAT_14161dea8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14161dea8;
        pvVar3 = DAT_14161dea8;
      }
      DAT_14161dea8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14160eddb;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14160eddb:
    if (DAT_14161dea0 == 0) {
      DAT_14161dea0 = 1;
      iVar4 = _initterm_e(&DAT_141613238,&DAT_141613248);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141613218,&DAT_141613230);
      DAT_14161dea0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_14161dea8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_14161deb0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14161deb0), BVar5 != 0)) {
      (*DAT_14161deb0)(param_1,2,param_3);
    }
    DAT_14161d91c = DAT_14161d91c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014160ef54) */
/* WARNING: Removing unreachable block (ram,0x00014160eeeb) */
/* WARNING: Removing unreachable block (ram,0x00014160ef8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14161d91c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_14161d7e0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_14161d7e0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141602d00();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141602d00();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_14161d7e0 = 0xffffffff;
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




undefined8 FUN_14160f00c(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_14161d9c0);
  local_30 = DAT_14161dab8;
  local_38 = RtlLookupFunctionEntry(DAT_14161dab8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_14161da58 = local_res8;
    DAT_14161dab8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_14161d9c0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_14161d930 = DAT_14161dab8;
  _DAT_14161da40 = local_res8[0];
  _DAT_14161d920 = 0xc0000409;
  _DAT_14161d924 = 1;
  local_20 = DAT_14161d7c8;
  local_18 = DAT_14161d7d0;
  DAT_14161d9b8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141615d00);
  if (DAT_14161d9b8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14160f250(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416168a8; puVar1 < &DAT_1416168a8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14160f288(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416168b8; puVar1 < &DAT_1416168b8; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141600000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141600000);
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
  if (DAT_14161d7c8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_14161d7c8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_14161d7c8 == 0x2b992ddfa232) {
      DAT_14161d7c8 = 0x2b992ddfa233;
    }
  }
  DAT_14161d7d0 = ~DAT_14161d7c8;
  return;
}




void Unwind_14160f4e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f500(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f520(void)

{
  DAT_14161d7f8 = DAT_14161d7f8 & 0xfffffffe;
  return;
}




void Unwind_14160f540(void)

{
  DAT_14161d7f8 = DAT_14161d7f8 & 0xfffffffe;
  return;
}




void Unwind_14160f560(void)

{
  DAT_14161d7f8 = DAT_14161d7f8 & 0xfffffffe;
  return;
}




void Unwind_14160f580(void)

{
  DAT_14161d7f8 = DAT_14161d7f8 & 0xfffffffe;
  return;
}




void Unwind_14160f5a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f5c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f5e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f600(void)

{
  DAT_14161d808 = DAT_14161d808 & 0xfffffffe;
  return;
}




void Unwind_14160f620(void)

{
  DAT_14161d808 = DAT_14161d808 & 0xfffffffe;
  return;
}




void Unwind_14160f640(void)

{
  DAT_14161d808 = DAT_14161d808 & 0xfffffffe;
  return;
}




void Unwind_14160f660(void)

{
  DAT_14161d808 = DAT_14161d808 & 0xfffffffe;
  return;
}




void Unwind_14160f680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f6a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f6c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f6e0(void)

{
  DAT_14161d818 = DAT_14161d818 & 0xfffffffe;
  return;
}




void Unwind_14160f700(void)

{
  DAT_14161d818 = DAT_14161d818 & 0xfffffffe;
  return;
}




void Unwind_14160f720(void)

{
  DAT_14161d818 = DAT_14161d818 & 0xfffffffe;
  return;
}




void Unwind_14160f740(void)

{
  DAT_14161d818 = DAT_14161d818 & 0xfffffffe;
  return;
}




void Unwind_14160f760(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f780(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_14160f7a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f7c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f7e0(void)

{
  DAT_14161d828 = DAT_14161d828 & 0xfffffffe;
  return;
}




void Unwind_14160f800(void)

{
  DAT_14161d828 = DAT_14161d828 & 0xfffffffe;
  return;
}




void Unwind_14160f820(void)

{
  DAT_14161d828 = DAT_14161d828 & 0xfffffffe;
  return;
}




void Unwind_14160f840(void)

{
  DAT_14161d828 = DAT_14161d828 & 0xfffffffe;
  return;
}




void Unwind_14160f860(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f880(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f8a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f8c0(void)

{
  DAT_14161d838 = DAT_14161d838 & 0xfffffffe;
  return;
}




void Unwind_14160f8e0(void)

{
  DAT_14161d838 = DAT_14161d838 & 0xfffffffe;
  return;
}




void Unwind_14160f900(void)

{
  DAT_14161d838 = DAT_14161d838 & 0xfffffffe;
  return;
}




void Unwind_14160f920(void)

{
  DAT_14161d838 = DAT_14161d838 & 0xfffffffe;
  return;
}




void Unwind_14160f940(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f960(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f980(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160f9a0(void)

{
  DAT_14161d848 = DAT_14161d848 & 0xfffffffe;
  return;
}




void Unwind_14160f9c0(void)

{
  DAT_14161d848 = DAT_14161d848 & 0xfffffffe;
  return;
}




void Unwind_14160f9e0(void)

{
  DAT_14161d848 = DAT_14161d848 & 0xfffffffe;
  return;
}




void Unwind_14160fa00(void)

{
  DAT_14161d848 = DAT_14161d848 & 0xfffffffe;
  return;
}




void Unwind_14160fa20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_14160fa40(undefined8 param_1,longlong param_2)

{
  FUN_141602a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14160fa60(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14160fa80(undefined8 param_1,longlong param_2)

{
  FUN_14160e460((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_14160faa0(undefined8 param_1,longlong param_2)

{
  FUN_141602a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14160fac0(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14160fae0(undefined8 param_1,longlong param_2)

{
  FUN_14160e460((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_14160fb00(undefined8 param_1,longlong param_2)

{
  FUN_141602a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14160fb20(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14160fb40(undefined8 param_1,longlong param_2)

{
  FUN_14160e460((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




undefined * Catch_14160fb60(void)

{
  log_InlineLogCATCH_ERROR("Rank::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_141602e43;
}




void Unwind_14160fbb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_14160fbd0(undefined8 param_1,longlong param_2)

{
  FUN_141602a10(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14160fbf0(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_14160fc10(undefined8 param_1,longlong param_2)

{
  FUN_14160e460((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x420));
  return;
}




undefined8 Catch_14160fc30(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141602eed;
}




void Unwind_14160fc70(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_14160fc90(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_14160fcb0(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_14160fcd0(void)

{
  DAT_14161d860 = DAT_14161d860 & 0xfffffffe;
  return;
}




void Unwind_14160fcf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fd10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fd30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fd50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fd70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fd90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fdb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fdd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fdf0(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fe10(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fe30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fe50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fe70(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fe90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160feb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fed0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160fef0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160ff10(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160ff30(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160ff50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160ff70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160ff90(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160ffb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14160ffd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14160fff0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141610010(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141610030(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




undefined * Catch_141610050(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160421f;
}




void Unwind_141610090(undefined8 param_1,longlong param_2)

{
  FUN_141601580(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1416100b0(undefined8 param_1,longlong param_2)

{
  FUN_1416025c0(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1416100d0(undefined8 param_1,longlong param_2)

{
  FUN_14160df50(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1416100f0(undefined8 param_1,longlong param_2)

{
  FUN_14160e260(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141610110(undefined8 param_1,longlong param_2)

{
  FUN_141601200(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141610130(undefined8 param_1,longlong param_2)

{
  FUN_141601a70(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141610150(undefined8 param_1,longlong param_2)

{
  FUN_1416022b0(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141610170(undefined8 param_1,longlong param_2)

{
  FUN_1416028d0(*(void **)(param_2 + 0x40));
  return;
}




undefined8 Catch_141610190(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141604aa8;
}




undefined8 Catch_1416101d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141604ab5;
}




void Unwind_141610210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141610230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141610250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141610270(undefined8 param_1,longlong param_2)

{
  FUN_141603de0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141610290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416102b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416102d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416102f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141610310(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141610330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141610350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141610370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141610390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416103b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1416103d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416103f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141610410(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141610430(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610450(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610470(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610490(void)

{
  FUN_1416041e0();
  return;
}




void Catch_1416104b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416104e0(void)

{
  FUN_1416041e0();
  return;
}




void Catch_141610500(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141610530(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610550(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610570(undefined8 param_1,longlong param_2)

{
  FUN_141605ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610590(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416105b0(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416105d0(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416105f0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610610(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141610650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141610670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141610690(undefined8 param_1,longlong param_2)

{
  FUN_141603de0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416106b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416106d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416106f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141610710(undefined8 param_1,longlong param_2)

{
  FUN_141603de0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141610730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141610750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141610770(undefined8 param_1,longlong param_2)

{
  FUN_141603de0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141610790(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_1416107b0(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416107d0(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416107f0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610810(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610830(undefined8 param_1,longlong param_2)

{
  FUN_141605ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610850(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610870(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610890(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416108b0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_1416108d0(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416108f0(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610910(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141610930(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160806d;
}




void Unwind_141610970(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610990(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1416109b0(undefined8 param_1,longlong param_2)

{
  FUN_141605ce0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_1416109d0(undefined8 param_1,longlong param_2)

{
  FUN_141606580((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_1416109f0(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141610a10(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141610a30(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610a50(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610a70(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610a90(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610ab0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610ad0(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610af0(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610b10(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610b30(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141610b50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141610b80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_141610ba0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416096db;
}




undefined * Catch_141610be0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141609886;
}




void Unwind_141610c20(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x90));
  return;
}




undefined * Catch_141610c40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_141609ca3;
}




void Unwind_141610c80(undefined8 param_1,longlong param_2)

{
  FUN_14160e5a0((undefined8 *)(param_2 + 0x4a0));
  return;
}




void Unwind_141610ca0(undefined8 param_1,longlong param_2)

{
  FUN_141608dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610cc0(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610ce0(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610d00(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610d20(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610d40(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610d60(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610d80(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610da0(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610dc0(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610de0(undefined8 param_1,longlong param_2)

{
  FUN_141608dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610e00(undefined8 param_1,longlong param_2)

{
  FUN_14160a0b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141610e20(undefined8 param_1,longlong param_2)

{
  FUN_141608dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610e40(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610e60(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610e80(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610ea0(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141610ec0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160a456;
}




void Unwind_141610f00(undefined8 param_1,longlong param_2)

{
  FUN_141606580((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141610f20(undefined8 param_1,longlong param_2)

{
  FUN_141605ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610f40(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610f60(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141610f80(undefined8 param_1,longlong param_2)

{
  FUN_141605550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610fa0(undefined8 param_1,longlong param_2)

{
  FUN_141605d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610fc0(undefined8 param_1,longlong param_2)

{
  FUN_141606680(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141610fe0(undefined8 param_1,longlong param_2)

{
  FUN_141607850(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611000(undefined8 param_1,longlong param_2)

{
  FUN_141608dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611020(undefined8 param_1,longlong param_2)

{
  FUN_14160a0b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141611040(undefined8 param_1,longlong param_2)

{
  FUN_141606580((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141611060(undefined8 param_1,longlong param_2)

{
  FUN_141605ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611080(undefined8 param_1,longlong param_2)

{
  FUN_141605560(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1416110a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160aa07;
}




undefined * Catch_1416110e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160aac8;
}




undefined * Catch_141611120(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160ab43;
}




undefined * Catch_141611160(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160abbd;
}




undefined * Catch_1416111a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160af59;
}




undefined8 Catch_1416111e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b4e5;
}




undefined8 Catch_141611220(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b554;
}




undefined8 Catch_141611260(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b7cf;
}




undefined * Catch_1416112a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160b838;
}




undefined8 Catch_1416112e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b846;
}




undefined * Catch_141611320(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160b876;
}




undefined8 Catch_141611360(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b884;
}




undefined * Catch_1416113a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160b8f2;
}




undefined8 Catch_1416113e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b922;
}




undefined8 Catch_141611420(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160b987;
}




undefined * Catch_141611460(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160ba3c;
}




undefined8 Catch_1416114a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160ba4a;
}




undefined * Catch_1416114e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160ba8d;
}




undefined8 Catch_141611520(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160ba9b;
}




undefined * Catch_141611560(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160babd;
}




void Unwind_1416115a0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_1416115c0(void)

{
  FUN_141605550(&DAT_14161d870);
  return;
}




void Unwind_1416115e0(void)

{
  FUN_141605d00(&DAT_14161d870);
  return;
}




void Unwind_141611600(void)

{
  FUN_141606680(&DAT_14161d870);
  return;
}




void Unwind_141611620(void)

{
  FUN_141607850(&DAT_14161d870);
  return;
}




void Unwind_141611640(void)

{
  FUN_141608dd0(&DAT_14161d870);
  return;
}




void Unwind_141611660(void)

{
  FUN_14160a0b0(&DAT_14161d870);
  return;
}




void Unwind_141611680(void)

{
  FUN_14160a0b0(&DAT_14161d870);
  return;
}




void Unwind_1416116a0(void)

{
  FUN_141608dd0(&DAT_14161d870);
  return;
}




void Unwind_1416116c0(void)

{
  FUN_141607850(&DAT_14161d870);
  return;
}




void Unwind_1416116e0(void)

{
  FUN_141606680(&DAT_14161d870);
  return;
}




void Unwind_141611700(void)

{
  FUN_141605d00(&DAT_14161d870);
  return;
}




void Unwind_141611720(void)

{
  FUN_141605550(&DAT_14161d870);
  return;
}




undefined * Catch_141611740(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14160bbdc;
}




void Unwind_141611780(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416117a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416117c0(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416117e0(void)

{
  FUN_1416041e0();
  return;
}




void Catch_141611800(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141611830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141611850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141611870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141611890(undefined8 param_1,longlong param_2)

{
  FUN_141603de0((exception *)(param_2 + 0x38));
  return;
}




void Catch_1416118b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416118e0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611900(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611920(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141611960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141611980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416119a0(undefined8 param_1,longlong param_2)

{
  FUN_141603de0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416119c0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_1416119e0(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141611a00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160d255;
}




void Unwind_141611a40(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611a60(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611a80(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611aa0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611ac0(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611ae0(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611b00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




undefined * Catch_141611b20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14160d9c8;
}




undefined8 Catch_141611b60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14160d9ec;
}




void Unwind_141611ba0(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611bc0(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611be0(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611c00(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611c20(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611c40(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611c60(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611c80(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611ca0(undefined8 param_1,longlong param_2)

{
  FUN_14160db30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611cc0(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611ce0(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611d00(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611d20(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611d40(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611d60(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611d80(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611da0(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611dc0(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611de0(undefined8 param_1,longlong param_2)

{
  FUN_14160dba0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141611e00(undefined8 param_1,longlong param_2)

{
  FUN_14160db30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611e20(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611e40(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611e60(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611e80(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611ea0(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611ec0(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611ee0(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611f00(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611f20(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611f40(undefined8 param_1,longlong param_2)

{
  FUN_14160db30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611f60(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141611f80(undefined8 param_1,longlong param_2)

{
  FUN_14160bfe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611fa0(undefined8 param_1,longlong param_2)

{
  FUN_14160c390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611fc0(undefined8 param_1,longlong param_2)

{
  FUN_14160cb70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141611fe0(undefined8 param_1,longlong param_2)

{
  FUN_14160d760(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141612000(undefined8 param_1,longlong param_2)

{
  FUN_14160db30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141612020(undefined8 param_1,longlong param_2)

{
  FUN_14160dba0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141612040(void)

{
  FUN_1416041e0();
  return;
}




void Unwind_141612060(void)

{
  FUN_14160bfe0(&DAT_14161d8b0);
  return;
}




void Unwind_141612080(void)

{
  FUN_14160c390(&DAT_14161d8b0);
  return;
}




void Unwind_1416120a0(void)

{
  FUN_14160cb70(&DAT_14161d8b0);
  return;
}




void Unwind_1416120c0(void)

{
  FUN_14160d760(&DAT_14161d8b0);
  return;
}




void Unwind_1416120e0(void)

{
  FUN_14160db30(&DAT_14161d8b0);
  return;
}




void Unwind_141612100(void)

{
  FUN_14160dba0(&DAT_14161d8b0);
  return;
}




void Unwind_141612120(void)

{
  FUN_14160dba0(&DAT_14161d8b0);
  return;
}




void Unwind_141612140(void)

{
  FUN_14160db30(&DAT_14161d8b0);
  return;
}




void Unwind_141612160(void)

{
  FUN_14160d760(&DAT_14161d8b0);
  return;
}




void Unwind_141612180(void)

{
  FUN_14160cb70(&DAT_14161d8b0);
  return;
}




void Unwind_1416121a0(void)

{
  FUN_14160c390(&DAT_14161d8b0);
  return;
}




void Unwind_1416121c0(void)

{
  FUN_14160bfe0(&DAT_14161d8b0);
  return;
}




void Unwind_1416121e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_141612200(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_141612220(void)

{
  DAT_14161d908 = DAT_14161d908 & 0xfffffffe;
  return;
}




void Unwind_141612240(void)

{
  DAT_14161d908 = DAT_14161d908 & 0xfffffffe;
  return;
}




void Unwind_141612260(void)

{
  DAT_14161d908 = DAT_14161d908 & 0xfffffffe;
  return;
}




void Unwind_141612280(void)

{
  DAT_14161d908 = DAT_14161d908 & 0xfffffffe;
  return;
}




void Unwind_1416122a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_1416122c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_1416122e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_141612300(void)

{
  DAT_14161d918 = DAT_14161d918 & 0xfffffffe;
  return;
}




void Unwind_141612320(void)

{
  DAT_14161d918 = DAT_14161d918 & 0xfffffffe;
  return;
}




void Unwind_141612340(void)

{
  DAT_14161d918 = DAT_14161d918 & 0xfffffffe;
  return;
}




void Unwind_141612360(void)

{
  DAT_14161d918 = DAT_14161d918 & 0xfffffffe;
  return;
}




void Unwind_141612380(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14160a490(*(undefined8 **)(param_2 + 0x40),param_2,param_3,param_4);
  return;
}




void Unwind_1416123a0(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416123c0(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1416123e0(void)

{
  log_InlineLogCATCH_ERROR("Godbless::CMsgLogin::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x14160e4eb;
}




void Unwind_141612430(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141612450(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141612470(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141612490(undefined8 param_1,longlong param_2)

{
  FUN_14160e3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1416124a8(void)

{
  _unlock(8);
  return;
}




void FUN_1416124c1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416124f1(void)

{
  _DAT_14161d7e0 = 0xffffffff;
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




bool FUN_141612580(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416125b0(void)

{
  DAT_14161d870 = operator_new(8);
  if (DAT_14161d870 == (undefined8 *)0x0) {
    DAT_14161d870 = (undefined8 *)0x0;
  }
  else {
    *DAT_14161d870 = &DAT_14161d870;
  }
  DAT_14161d8a0 = FUN_141605fa0();
  *(undefined1 *)(DAT_14161d8a0 + 0x29) = 1;
  *(longlong *)(DAT_14161d8a0 + 8) = DAT_14161d8a0;
  *(longlong *)DAT_14161d8a0 = DAT_14161d8a0;
  *(longlong *)(DAT_14161d8a0 + 0x10) = DAT_14161d8a0;
  _DAT_14161d8a8 = 0;
  atexit(FUN_141612740);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141612640(void)

{
  DAT_14161d8b0 = operator_new(8);
  if (DAT_14161d8b0 == (undefined8 *)0x0) {
    DAT_14161d8b0 = (undefined8 *)0x0;
  }
  else {
    *DAT_14161d8b0 = &DAT_14161d8b0;
  }
  DAT_14161d8e0 = FUN_14160c960();
  *(undefined1 *)(DAT_14161d8e0 + 0x29) = 1;
  *(longlong *)(DAT_14161d8e0 + 8) = DAT_14161d8e0;
  *(longlong *)DAT_14161d8e0 = DAT_14161d8e0;
  *(longlong *)(DAT_14161d8e0 + 0x10) = DAT_14161d8e0;
  _DAT_14161d8e8 = 0;
  atexit(FUN_1416127d0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141612740(void)

{
  void *local_38;
  undefined8 *puStack_30;
  void *local_28;
  undefined8 uStack_20;
  longlong local_18 [3];
  
  uStack_20 = *DAT_14161d8a0;
  local_38 = DAT_14161d870;
  puStack_30 = DAT_14161d8a0;
  local_28 = DAT_14161d870;
  FUN_141607bb0((longlong *)&DAT_14161d870,local_18,(longlong *)&local_28,(longlong *)&local_38);
  operator_delete(DAT_14161d8a0);
  DAT_14161d8a0 = (undefined8 *)0x0;
  _DAT_14161d8a8 = 0;
  operator_delete(DAT_14161d870);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416127d0(void)

{
  void *local_38;
  undefined8 *puStack_30;
  void *local_28;
  undefined8 uStack_20;
  longlong local_18 [3];
  
  uStack_20 = *DAT_14161d8e0;
  local_38 = DAT_14161d8b0;
  puStack_30 = DAT_14161d8e0;
  local_28 = DAT_14161d8b0;
  FUN_14160cf30((longlong *)&DAT_14161d8b0,local_18,(longlong *)&local_28,(longlong *)&local_38);
  operator_delete(DAT_14161d8e0);
  DAT_14161d8e0 = (undefined8 *)0x0;
  _DAT_14161d8e8 = 0;
  operator_delete(DAT_14161d8b0);
  return;
}




/* DONE: decompiled=746 failed=0 total=828 */
