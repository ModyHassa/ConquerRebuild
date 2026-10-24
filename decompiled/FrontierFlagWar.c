/* Decompiled by Ghidra 12.1.4 | program: FrontierFlagWar.dll
   image base: 140db0000 | functions: 1641 */


exception * FUN_140db1090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140db10d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140db10f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140db1100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140db1160(void)

{
  return;
}




exception * FUN_140db1170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140db11c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140db11f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140db1200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140db1220(exception *param_1,uint param_2)

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




exception * FUN_140db1280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140db12e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140db131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140db1330(exception *param_1,uint param_2)

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




void FUN_140db13a0(void)

{
  log_InlineLogERROR(&DAT_140dd9588);
  return;
}




void FUN_140db13e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140db1400(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140db1467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined4 *)(param_1 + 0x38),param_2);
  return;
}




undefined4 FUN_140db1470(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}




undefined4 FUN_140db1480(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




undefined1 FUN_140db1490(longlong param_1,int param_2,int param_3)

{
  if ((((*(int *)(param_1 + 0x50) <= param_2) && (param_2 <= *(int *)(param_1 + 0x58))) && (*(int *)(param_1 + 0x54) <= param_3)) &&
     (param_3 <= *(int *)(param_1 + 0x5c))) {
    return 1;
  }
  return 0;
}




void FUN_140db14b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}




undefined4 FUN_140db14c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




undefined4 FUN_140db14d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}




longlong FUN_140db1530(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_140db15a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db15c2;
  }
  lVar2 = *plVar1;
LAB_140db15c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db15e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1602;
  }
  lVar2 = *plVar1;
LAB_140db1602:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db1620(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140db1670(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




exception * FUN_140db16e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_140db1750(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




exception * FUN_140db1790(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_140db1810(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db1840;
  }
  else {
LAB_140db1840:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db1868;
  }
  _invalid_parameter_noinfo();
LAB_140db1868:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140db1890(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140db1900(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_140db1970(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_140db19a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140db1b50(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uStackX_24;
  
  if (param_3 < param_2) {
    uStackX_24 = (int)((ulonglong)param_4 >> 0x20);
    do {
      lVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + 4 + lVar2 * 8);
      if (iVar1 == uStackX_24) {
        bVar3 = *(uint *)(param_1 + lVar2 * 8) < (uint)param_4;
      }
      else {
        bVar3 = uStackX_24 <= iVar1;
      }
    } while ((bVar3) && (*(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8), param_2 = lVar2, param_3 < lVar2));
  }
  *(undefined8 *)(param_1 + param_2 * 8) = param_4;
  return;
}




undefined * FUN_140db1bd0(void)

{
  if ((DAT_140deb568 & 1) == 0) {
    DAT_140deb568 = DAT_140deb568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb560,"CAltar");
    atexit((_func_5014 *)&LAB_140dd8f10);
  }
  return &DAT_140deb560;
}




void FUN_140db1c30(__uint64 param_1)

{
  if ((DAT_140deb568 & 1) == 0) {
    DAT_140deb568 = DAT_140deb568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb560,"CAltar");
    atexit((_func_5014 *)&LAB_140dd8f10);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db1c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140deb560,param_1);
  return;
}




void FUN_140db1c90(void *param_1)

{
  if ((DAT_140deb568 & 1) == 0) {
    DAT_140deb568 = DAT_140deb568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb560,"CAltar");
    atexit((_func_5014 *)&LAB_140dd8f10);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db1ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140deb560,param_1);
  return;
}




void FUN_140db1cf0(void *param_1)

{
  if ((DAT_140deb568 & 1) == 0) {
    DAT_140deb568 = DAT_140deb568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb560,"CAltar");
    atexit((_func_5014 *)&LAB_140dd8f10);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db1d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140deb560,param_1);
  return;
}




undefined8 FUN_140db1d50(longlong param_1,char *param_2)

{
  undefined2 uVar1;
  
  *param_2 = *(char *)(param_1 + 0x4c) + '\x01';
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 0x40);
  uVar1 = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(param_2 + 4) = uVar1;
  return CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
}




undefined4 FUN_140db1d80(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) & 0xfffffffffffffff8U) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 == 0) {
    _invalid_parameter_noinfo();
  }
  return **(undefined4 **)(param_1 + 0x20);
}




longlong FUN_140db1dd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1df2;
  }
  lVar2 = *plVar1;
LAB_140db1df2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db1e10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1e32;
  }
  lVar2 = *plVar1;
LAB_140db1e32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db1e50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140db1e90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db1eb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140db1f30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140db1fa0(longlong *param_1,longlong param_2)

{
  FUN_140db1810(param_1,param_2);
  return param_1;
}




void FUN_140db1fc0(longlong *param_1,int param_2)

{
  FUN_140db1810(param_1,(longlong)param_2);
  return;
}




void FUN_140db20c0(uint *param_1,uint *param_2,uint *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_2[1] == param_1[1]) {
    bVar2 = *param_2 < *param_1;
  }
  else {
    bVar2 = (int)param_1[1] <= (int)param_2[1];
  }
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar1;
  }
  if (param_3[1] == param_2[1]) {
    bVar2 = *param_3 < *param_2;
  }
  else {
    bVar2 = (int)param_2[1] <= (int)param_3[1];
  }
  if ((bVar2) && (param_3 != param_2)) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
  }
  if (param_2[1] == param_1[1]) {
    bVar2 = *param_2 < *param_1;
  }
  else {
    bVar2 = (int)param_1[1] <= (int)param_2[1];
  }
  if ((bVar2) && (param_2 != param_1)) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = uVar1;
  }
  return;
}




void FUN_140db2150(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iStackX_24;
  
  lVar4 = param_2;
  while( true ) {
    lVar3 = lVar4 * 2 + 2;
    if (param_3 <= lVar3) break;
    iVar1 = *(int *)(param_1 + 4 + lVar3 * 8);
    iVar2 = *(int *)(param_1 + -4 + lVar3 * 8);
    if (iVar1 == iVar2) {
      bVar5 = *(uint *)(param_1 + lVar3 * 8) < *(uint *)(param_1 + -8 + lVar3 * 8);
    }
    else {
      bVar5 = iVar2 <= iVar1;
    }
    if (bVar5) {
      lVar3 = lVar4 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar4 = lVar3;
  }
  if (lVar3 == param_3) {
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar4 = param_3 + -1;
  }
  if (param_2 < lVar4) {
    iStackX_24 = (int)((ulonglong)param_4 >> 0x20);
    do {
      lVar3 = (lVar4 + -1) / 2;
      iVar1 = *(int *)(param_1 + 4 + lVar3 * 8);
      if (iVar1 == iStackX_24) {
        bVar5 = *(uint *)(param_1 + lVar3 * 8) < (uint)param_4;
      }
      else {
        bVar5 = iStackX_24 <= iVar1;
      }
    } while ((bVar5) && (*(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar3 * 8), lVar4 = lVar3, param_2 < lVar3));
  }
  *(undefined8 *)(param_1 + lVar4 * 8) = param_4;
  return;
}




undefined8 * FUN_140db2260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}




void FUN_140db22a0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  *param_3 = *param_1;
  FUN_140db2150((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




void FUN_140db22d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140db22f0(longlong param_1,ulonglong param_2)

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
      FUN_140db1670();
    }
    lVar1 = FUN_140db1eb0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140db2350(undefined8 *param_1)

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




longlong * FUN_140db2390(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db23fa;
  }
  _invalid_parameter_noinfo();
LAB_140db23fa:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db2430(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140db2530(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_140db25b0(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140db20c0(param_1,param_1 + lVar1 * 2,param_1 + lVar1 * 4);
    FUN_140db20c0(param_2 + lVar1 * -2,param_2,param_2 + lVar1 * 2);
    FUN_140db20c0(param_3 + lVar1 * -4,param_3 + lVar1 * -2,param_3);
    FUN_140db20c0(param_1 + lVar1 * 2,param_2,param_3 + lVar1 * -2);
    return;
  }
  FUN_140db20c0(param_1,param_2,param_3);
  return;
}




void FUN_140db2690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140db2150(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_140db2710(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 2, puVar2 != param_2) {
      uVar1 = *(undefined8 *)puVar2;
      uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
      if (uVar3 == param_1[1]) {
        bVar6 = (uint)uVar1 < *param_1;
      }
      else {
        bVar6 = (int)param_1[1] <= (int)uVar3;
      }
      puVar4 = puVar2;
      if (bVar6) {
        for (; param_1 != puVar4; puVar4 = puVar4 + -2) {
          *(undefined8 *)puVar4 = *(undefined8 *)(puVar4 + -2);
        }
        *(undefined8 *)param_1 = uVar1;
      }
      else {
        while( true ) {
          puVar5 = puVar4 + -2;
          if (uVar3 == puVar4[-1]) {
            bVar6 = (uint)uVar1 < *puVar5;
          }
          else {
            bVar6 = (int)puVar4[-1] <= (int)uVar3;
          }
          if (!bVar6) break;
          *(undefined8 *)puVar4 = *(undefined8 *)puVar5;
          puVar4 = puVar5;
        }
        *(undefined8 *)puVar4 = uVar1;
      }
    }
  }
  return;
}




void FUN_140db27d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140db2260(param_1,param_2,param_3);
  return;
}




void FUN_140db27f0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140db2150((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,uVar1);
  return;
}




undefined8 * FUN_140db2820(undefined8 *param_1)

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




undefined8 * FUN_140db2870(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140db28e0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140db2530(param_1,param_2,param_3);
  return;
}




longlong FUN_140db2900(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = param_2 - param_1;
  if (param_1 != param_2) {
    lVar3 = param_3 - param_2;
    do {
      puVar1 = (undefined8 *)(param_2 + -8);
      param_2 = param_2 + -8;
      *(undefined8 *)(lVar3 + param_2) = *puVar1;
    } while (param_2 != param_1);
  }
  return param_3 - (uVar2 & 0xfffffffffffffff8);
}




ulonglong * FUN_140db2940(ulonglong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  
  puVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1) * 2;
  FUN_140db25b0(param_2,puVar6,param_3 + -2);
  puVar9 = puVar6 + 2;
  if (param_2 < puVar6) {
    puVar5 = puVar6 + -1;
    do {
      uVar1 = *puVar5;
      uVar2 = puVar5[2];
      if (uVar1 == uVar2) {
        bVar11 = puVar5[-1] < *puVar6;
      }
      else {
        bVar11 = (int)uVar2 <= (int)uVar1;
      }
      if (bVar11) break;
      if (uVar2 == uVar1) {
        bVar11 = *puVar6 < puVar5[-1];
      }
      else {
        bVar11 = (int)uVar1 <= (int)uVar2;
      }
      if (bVar11) break;
      puVar6 = puVar6 + -2;
      puVar5 = puVar5 + -2;
    } while (param_2 < puVar6);
  }
  puVar5 = puVar9;
  puVar7 = puVar6;
  if (puVar9 < param_3) {
    uVar1 = puVar6[1];
    while( true ) {
      uVar2 = puVar9[1];
      if (uVar2 == uVar1) {
        bVar11 = *puVar9 < *puVar6;
      }
      else {
        bVar11 = (int)uVar1 <= (int)uVar2;
      }
      puVar5 = puVar9;
      if (bVar11) break;
      if (uVar1 == uVar2) {
        bVar11 = *puVar6 < *puVar9;
      }
      else {
        bVar11 = (int)uVar2 <= (int)uVar1;
      }
      if ((bVar11) || (puVar9 = puVar9 + 2, puVar5 = puVar9, param_3 <= puVar9)) break;
    }
  }
joined_r0x000140db2a17:
  do {
    puVar4 = puVar5;
    puVar5 = puVar6;
    puVar8 = puVar7;
    if (param_3 <= puVar4) {
joined_r0x000140db2a75:
      for (; param_2 < puVar6; puVar6 = puVar6 + -2) {
        puVar7 = puVar5 + -2;
        uVar1 = puVar5[-1];
        uVar2 = puVar8[1];
        if (uVar1 == uVar2) {
          bVar11 = *puVar7 < *puVar8;
        }
        else {
          bVar11 = (int)uVar2 <= (int)uVar1;
        }
        if (!bVar11) {
          if (uVar2 == uVar1) {
            bVar11 = *puVar8 < *puVar7;
          }
          else {
            bVar11 = (int)uVar1 <= (int)uVar2;
          }
          if (bVar11) break;
          puVar8 = puVar8 + -2;
          if (puVar8 != puVar7) {
            uVar3 = *(undefined8 *)puVar8;
            *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar7 = uVar3;
          }
        }
        puVar5 = puVar7;
      }
      if (puVar6 == param_2) {
        if (puVar4 == param_3) {
          *param_1 = (ulonglong)puVar8;
          param_1[1] = (ulonglong)puVar9;
          return param_1;
        }
        if ((puVar9 != puVar4) && (puVar8 != puVar9)) {
          uVar3 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar9 = uVar3;
        }
        puVar9 = puVar9 + 2;
        puVar5 = puVar4 + 2;
        puVar7 = puVar8 + 2;
        if (puVar8 != puVar4) {
          uVar3 = *(undefined8 *)puVar8;
          *(undefined8 *)puVar8 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = uVar3;
        }
      }
      else {
        puVar6 = puVar6 + -2;
        if (puVar4 == param_3) {
          puVar7 = puVar8 + -2;
          if (puVar6 != puVar7) {
            uVar3 = *(undefined8 *)puVar6;
            *(undefined8 *)puVar6 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar7 = uVar3;
          }
          puVar9 = puVar9 + -2;
          puVar5 = puVar4;
          if (puVar7 != puVar9) {
            uVar3 = *(undefined8 *)puVar7;
            *(undefined8 *)puVar7 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = uVar3;
          }
        }
        else {
          if (puVar4 != puVar6) {
            uVar3 = *(undefined8 *)puVar4;
            *(undefined8 *)puVar4 = *(undefined8 *)puVar6;
            *(undefined8 *)puVar6 = uVar3;
          }
          puVar5 = puVar4 + 2;
          puVar7 = puVar8;
        }
      }
      goto joined_r0x000140db2a17;
    }
    uVar1 = puVar7[1];
    uVar2 = puVar4[1];
    if (uVar1 == uVar2) {
      bVar11 = *puVar7 < *puVar4;
    }
    else {
      bVar11 = (int)uVar2 <= (int)uVar1;
    }
    puVar10 = puVar9;
    if (!bVar11) {
      if (uVar2 == uVar1) {
        bVar11 = *puVar4 < *puVar7;
      }
      else {
        bVar11 = (int)uVar1 <= (int)uVar2;
      }
      if (bVar11) goto joined_r0x000140db2a75;
      puVar10 = puVar9 + 2;
      if (puVar9 != puVar4) {
        uVar3 = *(undefined8 *)puVar9;
        *(undefined8 *)puVar9 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar4 = uVar3;
      }
    }
    puVar5 = puVar4 + 2;
    puVar9 = puVar10;
  } while( true );
}




void FUN_140db2ba0(longlong param_1,longlong param_2)

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
      FUN_140db2150(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_140db2c20(uint *param_1,uint *param_2)

{
  FUN_140db2710(param_1,param_2);
  return;
}




void FUN_140db2c40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140db2260(param_1,param_2,param_3);
  return;
}




void FUN_140db2c60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    uVar1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140db2150((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,uVar1);
  }
  return;
}




undefined8 * FUN_140db2ca0(undefined8 *param_1)

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




undefined8 * FUN_140db2d00(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db2d50(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db2da0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140db2e10(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140db2e40(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140db2530(param_2,param_3,param_4);
  return param_2 + param_3;
}




void FUN_140db2e90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140db2260(param_1,param_2,param_3);
  return;
}




void FUN_140db2eb0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140db2150((longlong)param_1,0,lVar2 + -8 >> 3,uVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140db2f20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  char *pcVar7;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  undefined4 *puVar8;
  longlong lVar9;
  byte bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  byte local_88;
  char local_87 [16];
  char local_77 [39];
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_140db7190();
  if (plVar4 == (longlong *)0x0) {
    local_98 = 0xab;
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX;
  }
  else {
    uVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
    uVar5 = 0;
    if (uVar6 != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x20);
      if (*(undefined4 **)(param_1 + 0x28) < puVar8) {
        _invalid_parameter_noinfo();
        uVar6 = extraout_RAX_00;
      }
      plVar1 = *(longlong **)(param_1 + 8);
      bVar10 = 1;
      while( true ) {
        puVar2 = *(undefined4 **)(param_1 + 0x28);
        if (puVar2 < *(undefined4 **)(param_1 + 0x20)) {
          _invalid_parameter_noinfo();
          uVar6 = extraout_RAX_01;
        }
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
          uVar6 = extraout_RAX_02;
        }
        if (puVar8 == puVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(undefined4 **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
        }
        local_50 = puVar8[1];
        local_88 = bVar10;
        pcVar7 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,*puVar8);
        if (pcVar7 != (char *)0x0) {
          strncpy(local_77,pcVar7,0x24);
        }
        lVar9 = *plVar4;
        uVar3 = (**(code **)(lVar9 + 200))(plVar4,*puVar8);
        pcVar7 = (char *)(**(code **)(lVar9 + 0xd8))(plVar4,uVar3);
        if (pcVar7 != (char *)0x0) {
          strncpy(local_87,pcVar7,0x10);
        }
        uVar6 = FUN_140dd1830(param_2,&local_88);
        bVar10 = bVar10 + 1;
        if (5 < bVar10) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
          uVar6 = extraout_RAX_03;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(undefined4 **)(lVar9 + 0x20) <= puVar8) {
          _invalid_parameter_noinfo();
          uVar6 = extraout_RAX_04;
        }
        puVar8 = puVar8 + 2;
      }
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}




void FUN_140db3100(undefined8 *param_1)

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




longlong * FUN_140db3140(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  puVar3 = *(undefined8 **)(param_4 + 8);
  if ((puVar3 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar3)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != puVar3) {
    puVar5 = (undefined8 *)param_1[4];
    if (puVar3 != puVar5) {
      puVar7 = puVar3;
      do {
        uVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        *(undefined8 *)((longlong)puVar4 + (-8 - (longlong)puVar3) + (longlong)puVar7) = uVar6;
      } while (puVar7 != puVar5);
    }
    param_1[4] = (longlong)(puVar4 + ((longlong)puVar5 - (longlong)puVar3 >> 3));
  }
  return param_2;
}




void FUN_140db3230(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 < (undefined8 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined8 *)param_1[3];
  if ((undefined8 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    puVar4 = (undefined8 *)param_1[4];
    if (puVar1 != puVar4) {
      puVar6 = puVar1;
      do {
        uVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        *(undefined8 *)((longlong)puVar2 + (-8 - (longlong)puVar1) + (longlong)puVar6) = uVar5;
      } while (puVar6 != puVar4);
    }
    param_1[4] = (longlong)(puVar2 + ((longlong)puVar4 - (longlong)puVar1 >> 3));
  }
  return;
}




void FUN_140db32f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_140db2260(param_2,param_3,param_4);
  return;
}




void FUN_140db3330(undefined8 *param_1,longlong param_2)

{
  FUN_140db2eb0(param_1,param_2);
  return;
}




undefined8 * FUN_140db3340(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = frontier_flag_war::CAltar::vftable;
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
  *(undefined4 *)(param_1 + 7) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}




void FUN_140db3400(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CAltar::vftable;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  return;
}




ulonglong FUN_140db3450(longlong param_1,longlong *param_2,undefined4 param_3)

{
  ulonglong extraout_RAX;
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*param_2 + 0x138))(param_2,param_3,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),(undefined4 *)(param_1 + 0x50));
  if ((char)uVar1 != '\0') {
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  uVar2 = FUN_140db3230((longlong *)(param_1 + 8));
  return uVar2 & 0xffffffffffffff00;
}




void FUN_140db34f0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140db3230((longlong *)(param_1 + 8));
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140db356e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined4 *)(param_1 + 0x38),0);
  return;
}




void FUN_140db3580(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(longlong *)(param_1 + 0x28) - lVar5 >> 3;
  }
  if (param_3 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    lVar5 = (longlong)puVar3 - lVar5 >> 3;
    if (0x1fffffffffffffffU - lVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140db1670();
    }
    uVar7 = param_3 + lVar5;
    if (uVar6 < uVar7) {
      if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar7) {
        uVar6 = uVar7;
      }
      puVar3 = (undefined8 *)FUN_140db1eb0(param_1 + 0x10,uVar6);
      lVar5 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 3;
      local_res8 = puVar3;
      FUN_140db2530(puVar3 + lVar5,param_3,param_4);
      FUN_140db2260(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar3);
      FUN_140db2260(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar3 + lVar5 + param_3);
      pvVar1 = *(void **)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3 + uVar6;
      *(undefined8 **)(param_1 + 0x20) = puVar3 + param_3 + (lVar5 - (longlong)pvVar1 >> 3);
      *(undefined8 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)((longlong)puVar3 - *(longlong *)(param_2 + 8) >> 3) < param_3) {
      puVar4 = (undefined8 *)*param_4;
      local_res8 = puVar4;
      FUN_140db2260(*(undefined8 **)(param_2 + 8),puVar3,*(undefined8 **)(param_2 + 8) + param_3);
      FUN_140db2530(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8) >> 3),&local_res8);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 8;
      lVar5 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined8 **)(param_2 + 8); puVar3 != (undefined8 *)(lVar5 + param_3 * -8); puVar3 = puVar3 + 1) {
        *puVar3 = puVar4;
      }
    }
    else {
      uVar2 = *param_4;
      puVar4 = FUN_140db2260(puVar3 + -param_3,puVar3,puVar3);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      FUN_140db2900(*(longlong *)(param_2 + 8),(longlong)(puVar3 + -param_3),(longlong)puVar3);
      puVar4 = *(undefined8 **)(param_2 + 8);
      puVar3 = puVar4 + param_3;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
        *puVar4 = uVar2;
      }
    }
  }
  return;
}




undefined1 FUN_140db3830(uint *param_1,uint *param_2,longlong param_3,undefined1 param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint *local_18;
  uint *local_10;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar3 >> 3;
    if (lVar3 < 0x21) {
LAB_140db3907:
      if (1 < lVar3) {
        param_4 = FUN_140db2710(param_1,param_2);
      }
      return param_4;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_140db2ba0((longlong)param_1,(longlong)param_2);
        uVar2 = FUN_140db2eb0((undefined8 *)param_1,(longlong)param_2);
        return uVar2;
      }
      goto LAB_140db3907;
    }
    FUN_140db2940((ulonglong *)&local_18,param_1,param_2);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140db3830(param_1,local_18,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_140db3830(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




undefined8 * FUN_140db3960(undefined8 *param_1,uint param_2)

{
  *param_1 = frontier_flag_war::CAltar::vftable;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    FUN_140db1c90(param_1);
  }
  return param_1;
}




undefined8 * FUN_140db39e0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_140db1c30(0x60);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140db3340(puVar1,param_3,param_4,param_5,param_6);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140db3450((longlong)puVar1,param_1,param_2);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




longlong * FUN_140db3af0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140db3580((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140db3be4;
  }
  _invalid_parameter_noinfo();
LAB_140db3be4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140db3c20(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140db3830((uint *)param_1[1],(uint *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_140db3c80(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  puVar2 = *(uint **)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 8);
  if (puVar2 < *(uint **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  puVar3 = *(uint **)(param_1 + 0x20);
  lVar10 = *plVar1;
  if (*(uint **)(param_1 + 0x28) < puVar3) {
    _invalid_parameter_noinfo();
  }
  if ((lVar10 == 0) || (lVar10 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140db3830(puVar3,puVar2,(longlong)puVar2 - (longlong)puVar3 >> 3,0);
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) < 6) {
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x28) < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar5 = (longlong *)*plVar1;
  lVar10 = 0;
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar12 = lVar10;
  }
  else {
    lVar12 = *plVar5;
  }
  puVar11 = (undefined8 *)(uVar4 + 0x28);
  if (puVar11 <= *(undefined8 **)(lVar12 + 0x20)) {
    if (plVar5 != (longlong *)0x0) {
      lVar10 = *plVar5;
    }
    if (*(undefined8 **)(lVar10 + 0x18) <= puVar11) goto LAB_140db3d49;
  }
  _invalid_parameter_noinfo();
LAB_140db3d49:
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  if (puVar6 < *(undefined8 **)(param_1 + 0x20)) {
    _invalid_parameter_noinfo();
  }
  if (((plVar1 == (longlong *)0x0) || (puVar11 < *(undefined8 **)(param_1 + 0x20))) || (*(undefined8 **)(param_1 + 0x28) < puVar11)) {
    _invalid_parameter_noinfo();
  }
  lVar10 = *plVar1;
  if ((puVar6 < *(undefined8 **)(param_1 + 0x20)) || (*(undefined8 **)(param_1 + 0x28) < puVar6)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar10 == 0) || (lVar10 != *plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar11 != puVar6) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if (puVar6 != puVar7) {
      puVar9 = puVar6;
      do {
        uVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        *(undefined8 *)((longlong)puVar11 + (-8 - (longlong)puVar6) + (longlong)puVar9) = uVar8;
      } while (puVar9 != puVar7);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar11 + ((longlong)puVar7 - (longlong)puVar6 >> 3);
  }
  return;
}




void FUN_140db3df0(longlong *param_1,undefined8 *param_2)

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
    FUN_140db2530(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 1);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140db3af0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140db3ec0(longlong param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res8;
  int local_resc;
  longlong local_38;
  undefined8 *puStack_30;
  
  piVar7 = *(int **)(param_1 + 0x20);
  if (*(int **)(param_1 + 0x28) < piVar7) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 < *(int **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (piVar7 == piVar2) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      uVar6 = uVar10;
      if (puVar3 != (undefined8 *)0x0) {
        uVar6 = *(longlong *)(param_1 + 0x30) - (longlong)puVar3 >> 3;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      local_res8 = param_2;
      local_resc = param_3;
      if ((ulonglong)((longlong)puVar4 - (longlong)puVar3 >> 3) < uVar6) {
        FUN_140db2530(puVar4,1,(undefined8 *)&local_res8);
        *(undefined8 **)(param_1 + 0x28) = puVar4 + 1;
        goto LAB_140db40a1;
      }
      if (puVar4 < puVar3) {
        _invalid_parameter_noinfo();
      }
      uVar6 = *(ulonglong *)(param_1 + 0x20);
      lVar5 = *(longlong *)(param_1 + 8);
      uVar8 = uVar10;
      local_38 = lVar5;
      puStack_30 = puVar4;
      if ((*(ulonglong *)(param_1 + 0x28) - uVar6 & 0xfffffffffffffff8) != 0) {
        if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
          _invalid_parameter_noinfo();
        }
        if ((lVar5 == 0) || (lVar5 != *(longlong *)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        uVar8 = (longlong)((longlong)puVar4 - uVar6) >> 3;
      }
      FUN_140db3580(param_1 + 8,(longlong)&local_38,1,(undefined8 *)&local_res8);
      uVar6 = *(ulonglong *)(param_1 + 0x20);
      if (*(ulonglong *)(param_1 + 0x28) < uVar6) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(ulonglong **)(param_1 + 8);
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar1;
      }
      uVar6 = uVar6 + uVar8 * 8;
      if (uVar6 <= *(ulonglong *)(uVar9 + 0x20)) {
        if (puVar1 != (ulonglong *)0x0) {
          uVar10 = *puVar1;
        }
        if (*(ulonglong *)(uVar10 + 0x18) <= uVar6) goto LAB_140db40a1;
      }
      _invalid_parameter_noinfo();
      goto LAB_140db40a1;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar10;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(int **)(uVar6 + 0x20) <= piVar7) {
      _invalid_parameter_noinfo();
    }
    if (param_2 == *piVar7) break;
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar10;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(int **)(uVar6 + 0x20) <= piVar7) {
      _invalid_parameter_noinfo();
    }
    piVar7 = piVar7 + 2;
  }
  piVar7[1] = piVar7[1] + param_3;
LAB_140db40a1:
  FUN_140db3c80(param_1);
  return;
}




undefined4 FUN_140db40f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_140db4100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




undefined4 FUN_140db4110(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




ulonglong FUN_140db4120(longlong param_1)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  ushort local_res10 [4];
  ushort local_res18 [8];
  
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar2 = extraout_RAX;
  }
  else {
    local_res10[0] = 0;
    local_res18[0] = 0;
    uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_res10,local_res18);
    if ((char)uVar2 != '\0') {
      *(uint *)(param_1 + 0x10) = (uint)local_res10[0];
      *(uint *)(param_1 + 0x14) = (uint)local_res18[0];
      return CONCAT71((uint7)(byte)(local_res18[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




void FUN_140db41b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140db4201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x120))(plVar1,*(undefined4 *)(param_1 + 8));
  return;
}




ulonglong FUN_140db4220(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




int FUN_140db4280(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined * FUN_140db42b0(void)

{
  if ((DAT_140deb578 & 1) == 0) {
    DAT_140deb578 = DAT_140deb578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb570,"CFlag");
    atexit((_func_5014 *)&LAB_140dd8f20);
  }
  return &DAT_140deb570;
}




void FUN_140db4310(__uint64 param_1)

{
  if ((DAT_140deb578 & 1) == 0) {
    DAT_140deb578 = DAT_140deb578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb570,"CFlag");
    atexit((_func_5014 *)&LAB_140dd8f20);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db4365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140deb570,param_1);
  return;
}




void FUN_140db4370(void *param_1)

{
  if ((DAT_140deb578 & 1) == 0) {
    DAT_140deb578 = DAT_140deb578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb570,"CFlag");
    atexit((_func_5014 *)&LAB_140dd8f20);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db43c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140deb570,param_1);
  return;
}




void FUN_140db43d0(void *param_1)

{
  if ((DAT_140deb578 & 1) == 0) {
    DAT_140deb578 = DAT_140deb578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb570,"CFlag");
    atexit((_func_5014 *)&LAB_140dd8f20);
  }
                    /* WARNING: Could not recover jumptable at 0x000140db4425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140deb570,param_1);
  return;
}




undefined8 * FUN_140db4460(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CFlag::vftable;
  if ((param_2 & 1) != 0) {
    FUN_140db4370(param_1);
  }
  return param_1;
}




undefined8 * FUN_140db4490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140db4310(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = frontier_flag_war::CFlag::vftable;
    *(undefined4 *)(puVar1 + 1) = param_1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_2;
    *(undefined4 *)(puVar1 + 2) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_4;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_140db4550(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




bool FUN_140db4570(longlong param_1)

{
  return *(int *)(param_1 + 0x1c) != 0;
}




void FUN_140db4580(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140db7190();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  (**(code **)(*plVar1 + 0x120))(plVar1,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




int FUN_140db45f0(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




int FUN_140db4620(longlong param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0x1e;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x1c) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




void FUN_140db4650(longlong param_1)

{
  ulong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = tq::TimeGet(0);
    if ((uint)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18)) <= uVar1 / 1000) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      uVar2 = FUN_140db4120(param_1);
      if ((char)uVar2 == '\0') {
        lVar3 = FUN_140db71e0();
        if (lVar3 != 0) {
          FUN_140db4e80(lVar3);
        }
        FUN_140db4620(param_1);
      }
    }
  }
  return;
}




exception * FUN_140db46d0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140db4730(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140db476d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140db4780(exception *param_1,uint param_2)

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




bool FUN_140db4850(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  uVar5 = FUN_140dca110(param_2);
  uVar6 = FUN_140dca110(param_3);
  if ((int)uVar5 != (int)uVar6) {
    uVar5 = FUN_140dca110(param_2);
    uVar6 = FUN_140dca110(param_3);
    return (int)uVar6 < (int)uVar5;
  }
  iVar1 = FUN_140dca100(param_2);
  iVar2 = FUN_140dca100(param_3);
  if (iVar1 != iVar2) {
    iVar1 = FUN_140dca100(param_2);
    iVar2 = FUN_140dca100(param_3);
    return iVar2 < iVar1;
  }
  uVar3 = FUN_140dca0c0(param_2);
  uVar4 = FUN_140dca0c0(param_3);
  return uVar3 < uVar4;
}




undefined8 FUN_140db4980(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  tm *ptVar3;
  int local_res10 [6];
  tm local_58;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int local_10;
  
  _time32(local_res10);
  ptVar3 = _localtime32(local_res10);
  if (ptVar3 == (tm *)0x0) {
    return 0xffffffff;
  }
  local_30 = ptVar3->tm_sec;
  iStack_2c = ptVar3->tm_min;
  local_28 = ptVar3->tm_hour;
  iStack_24 = ptVar3->tm_mday;
  local_20 = ptVar3->tm_mon;
  iStack_1c = ptVar3->tm_year;
  local_58.tm_mon = ptVar3->tm_mon;
  local_58.tm_year = ptVar3->tm_year;
  iVar1 = ptVar3->tm_wday;
  iStack_14 = ptVar3->tm_yday;
  local_58.tm_wday = ptVar3->tm_wday;
  local_58.tm_yday = ptVar3->tm_yday;
  local_58.tm_isdst = ptVar3->tm_isdst;
  if (*(int *)(param_1 + 0x14) == iVar1) {
    local_58.tm_mday = iStack_24;
    local_58.tm_hour = *(int *)(param_1 + 0x18);
    local_58._0_8_ = (ulonglong)*(uint *)(param_1 + 0x1c) << 0x20;
    local_18 = iVar1;
    local_10 = local_58.tm_isdst;
    _Var2 = _mktime32(&local_58);
    if (((*(int *)(param_1 + 0x14) == iVar1) && (local_res10[0] - _Var2 <= *(int *)(param_1 + 0x20))) && (0 < local_res10[0] - _Var2)) {
      return 0;
    }
  }
  return 0xffffffff;
}




bool FUN_140db4a90(longlong param_1)

{
  return *(int *)(param_1 + 0x2c) == 0;
}




void FUN_140db4aa0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  CMsg local_418 [1040];
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_140dd1280(local_418);
    uVar1 = FUN_140dd1300(local_418,5,0,0);
    if ((char)uVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_140dd12d0((undefined8 *)local_418);
  }
  return;
}




int FUN_140db4b20(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  int iVar3;
  tm *ptVar4;
  int local_res8 [8];
  tm local_38;
  
  _time32(local_res8);
  ptVar4 = _localtime32(local_res8);
  if (*(int *)(param_1 + 0x14) == ptVar4->tm_wday) {
    local_38.tm_mday = ptVar4->tm_mday;
    local_38.tm_mon = ptVar4->tm_mon;
    local_38.tm_year = ptVar4->tm_year;
    local_38.tm_wday = ptVar4->tm_wday;
    local_38.tm_yday = ptVar4->tm_yday;
    local_38.tm_isdst = ptVar4->tm_isdst;
    local_38.tm_hour = *(int *)(param_1 + 0x18);
    local_38.tm_min = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20);
    local_38.tm_sec = 0;
    _Var2 = _mktime32(&local_38);
    iVar3 = _Var2 + (iVar1 - local_res8[0]);
    if ((iVar3 <= iVar1) && (0 < iVar3)) {
      return iVar3;
    }
  }
  return 0;
}




undefined4 FUN_140db4bd0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined8 FUN_140db4be0(longlong param_1)

{
  int iVar1;
  tm *ptVar2;
  __time32_t local_res10 [6];
  
  _time32(local_res10);
  ptVar2 = _localtime32(local_res10);
  if (ptVar2 == (tm *)0x0) {
    return 0;
  }
  *(int *)(param_1 + 0x1c) = ptVar2->tm_min;
  *(int *)(param_1 + 0x18) = ptVar2->tm_hour;
  iVar1 = ptVar2->tm_wday;
  *(int *)(param_1 + 0x14) = iVar1;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




void FUN_140db4c30(longlong param_1)

{
  tm *ptVar1;
  int local_res10 [6];
  
  _time32(local_res10);
  ptVar1 = _localtime32(local_res10);
  if (ptVar1 != (tm *)0x0) {
    local_res10[0] = local_res10[0] - *(int *)(param_1 + 0x20);
    ptVar1 = _localtime32(local_res10);
    *(int *)(param_1 + 0x1c) = ptVar1->tm_min;
    *(int *)(param_1 + 0x18) = ptVar1->tm_hour;
    *(int *)(param_1 + 0x14) = ptVar1->tm_wday;
  }
  return;
}




ulonglong FUN_140db4c80(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
    uVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_3);
    if ((iVar3 == (int)uVar6) && (iVar3 != 0)) {
      return uVar6 & 0xffffffffffffff00;
    }
    plVar1 = *(longlong **)(param_1 + 8);
    lVar10 = *plVar1;
    uVar4 = (**(code **)(lVar10 + 0x48))(plVar1,param_2);
    uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    cVar2 = (**(code **)(lVar10 + 0x90))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),uVar5,uVar4);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 8);
      lVar10 = *plVar1;
      uVar4 = (**(code **)(lVar10 + 0x48))(plVar1,param_3);
      uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1,param_3);
      uVar8 = (**(code **)(lVar10 + 0x90))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),uVar5,uVar4);
      if ((char)uVar8 == '\0') {
        return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      pIVar7 = theInstance();
      pcVar9 = "STR_USER_OTHER_IN_SAFE_NO_ATK";
      lVar10 = **(longlong **)(param_1 + 8);
      puVar11 = *(undefined8 **)pIVar7;
    }
    else {
      pIVar7 = theInstance();
      pcVar9 = "STR_USER_I_IN_SAFE_NO_ATK";
      lVar10 = **(longlong **)(param_1 + 8);
      puVar11 = *(undefined8 **)pIVar7;
    }
    uVar8 = (*(code *)*puVar11)(pIVar7,pcVar9);
    uVar6 = (**(code **)(lVar10 + 0x170))(*(undefined8 *)(param_1 + 8),param_2,uVar8);
    return uVar6 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




void FUN_140db4e00(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  return;
}




undefined1 FUN_140db4e10(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}




void FUN_140db4e20(longlong param_1,longlong param_2,int param_3,undefined *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*(code *)param_4)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}




void FUN_140db4e70(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + param_2;
  return;
}




void FUN_140db4e80(longlong param_1)

{
  *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + 1;
  return;
}




longlong FUN_140db4ec0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_140db4f40(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0xc) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 0xc;
}




bool FUN_140db4fa0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db4fe0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140db5040(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db5080(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140db50f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db5130(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140db5390(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db53b2;
  }
  lVar2 = *plVar1;
LAB_140db53b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db53d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db53f2;
  }
  lVar2 = *plVar1;
LAB_140db53f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong FUN_140db5410(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5432;
  }
  lVar2 = *plVar1;
LAB_140db5432:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db5450(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5472;
  }
  lVar2 = *plVar1;
LAB_140db5472:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db5490(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140db54d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db54f2;
  }
  lVar2 = *plVar1;
LAB_140db54f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db5510(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5532;
  }
  lVar2 = *plVar1;
LAB_140db5532:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db5550(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140db55b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db55d2;
  }
  lVar2 = *plVar1;
LAB_140db55d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db55f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5612;
  }
  lVar2 = *plVar1;
LAB_140db5612:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140db5630(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140db56a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db56c2;
  }
  lVar2 = *plVar1;
LAB_140db56c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db56e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5702;
  }
  lVar2 = *plVar1;
LAB_140db5702:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0xc;
  return param_1;
}




bool FUN_140db5720(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140db5880(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




void FUN_140db5910(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




void FUN_140db59a0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




void FUN_140db5a30(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




longlong FUN_140db5ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5ae2;
  }
  lVar2 = *plVar1;
LAB_140db5ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db5b00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_140db5b40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_140db5b80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140db5bc0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




longlong FUN_140db5c30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_140db5c70(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db5c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140db5d00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}




void FUN_140db5e30(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db5e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140db5f90(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db5fc0;
  }
  else {
LAB_140db5fc0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db5fe8;
  }
  _invalid_parameter_noinfo();
LAB_140db5fe8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140db6000(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db6030;
  }
  else {
LAB_140db6030:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db6058;
  }
  _invalid_parameter_noinfo();
LAB_140db6058:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140db6070(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db60a0;
  }
  else {
LAB_140db60a0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db60c8;
  }
  _invalid_parameter_noinfo();
LAB_140db60c8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140db60e0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db6110;
  }
  else {
LAB_140db6110:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db6138;
  }
  _invalid_parameter_noinfo();
LAB_140db6138:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




longlong * FUN_140db6150(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db6180;
  }
  else {
LAB_140db6180:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0xc;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db61b0;
  }
  _invalid_parameter_noinfo();
LAB_140db61b0:
  param_1[1] = param_1[1] + param_2 * 0xc;
  return param_1;
}




void FUN_140db61d0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_140db6200(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db6230(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140dcea20((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db6260(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140db13e0((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db6290(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140db4550((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db6300(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140db63c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140db6440(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140db64c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140db6540(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xc)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 * 0xc);
  return;
}




void FUN_140db65c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 5);
  return;
}




void FUN_140db6650(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_140db66f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_140db6730(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}




void FUN_140db67b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  *param_3 = *param_3 + (param_2[1] - param_1[1] >> 3);
  return;
}




void * FUN_140db6830(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db6890(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db68f0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db6b80(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db6bc0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db6c00(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db6c50(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140db6e00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  return;
}




void * FUN_140db6f10(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db6f50(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db6f90(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db6fd0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140db7010(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_140db4850(&stack0x00000028,*(longlong *)(param_1 + lVar2 * 8),param_4);
      if (!bVar1) break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




void FUN_140db70b0(longlong param_1,longlong param_2,longlong param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  while (param_3 < param_2) {
    lVar3 = (param_2 + -1) / 2;
    uVar1 = *(uint *)(param_1 + lVar3 * 0xc);
    if (uVar1 == 0) break;
    if (*param_4 != 0) {
      uVar4 = *(int *)(param_1 + 8 + lVar3 * 0xc) * 50000 + *(int *)(param_1 + 4 + lVar3 * 0xc);
      uVar2 = param_4[2] * 50000 + param_4[1];
      if (uVar4 == uVar2) {
        bVar5 = uVar1 < *param_4;
      }
      else {
        bVar5 = uVar2 <= uVar4;
      }
      if (!bVar5) break;
    }
    *(uint *)(param_1 + param_2 * 0xc) = uVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + lVar3 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + lVar3 * 0xc);
    param_2 = lVar3;
  }
  *(uint *)(param_1 + param_2 * 0xc) = *param_4;
  *(uint *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(uint *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}




undefined8 FUN_140db7190(void)

{
  if (DAT_140deb580 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  return *(undefined8 *)(DAT_140deb580 + 8);
}




longlong FUN_140db71e0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140deb580;
  if (DAT_140deb580 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    lVar1 = 0;
  }
  return lVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db7270(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  IStringManager *pIVar5;
  undefined8 uVar6;
  char *_Format;
  ulonglong uVar7;
  undefined1 auStackY_f08 [32];
  ulonglong local_eb8 [5];
  undefined8 local_e90;
  CMsg local_e88 [1072];
  CMsg local_a58 [1040];
  CMsg local_648 [1040];
  char local_238;
  undefined1 local_237 [255];
  char local_138 [256];
  ulonglong local_38;
  
  local_e90 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStackY_f08;
  uVar7 = *(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 3;
  if (uVar7 != 0) {
    local_eb8[0] = 0;
    local_eb8[1] = 0;
    local_eb8[2] = 0;
    pIVar5 = theInstance();
    local_eb8[0] = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_CROSS_FLAG_WAR_FIRST");
    pIVar5 = theInstance();
    local_eb8[1] = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_CROSS_FLAG_WAR_SECOND");
    pIVar5 = theInstance();
    local_eb8[2] = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_CROSS_FLAG_WAR_THIRD");
    if (3 < uVar7) {
      uVar7 = 3;
    }
    local_eb8[3] = 0;
    local_eb8[4] = uVar7;
    while (uVar3 = local_eb8[3], local_eb8[3] < uVar7) {
      if ((ulonglong)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 3) <= local_eb8[3]) {
        _invalid_parameter_noinfo();
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar3 * 8);
      if (lVar1 == 0) {
        log_InlineLogERROR("CFrontierFlagWarMgr::OnGameOver, found NULL Server info at %d");
      }
      else {
        FUN_140dd1bb0(local_e88);
        FUN_140dca110(lVar1);
        FUN_140dca0d0(lVar1);
        _snprintf(local_138,0x100,(char *)local_eb8[uVar3]);
        uVar7 = FUN_140dd1c70(local_e88,"SYSTEM","ALLUSERS",local_138,(char *)0x0,0xff0000,2000,0,0,1);
        if ((char)uVar7 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_e88,0);
        }
        FUN_140dd1a10(local_a58);
        uVar6 = FUN_140dd1ad0((longlong)local_a58,local_138);
        if ((char)uVar6 == '\0') {
          log_InlineLogERROR("CFrontierFlagWarMgr::OnGameOver, failed in creating cross flag war rank msg");
          FUN_140dd1a60((undefined8 *)local_a58);
          FUN_140dd1c30((undefined8 *)local_e88);
          return;
        }
        lVar2 = **(longlong **)(param_1 + 8);
        uVar4 = FUN_140dca0f0(lVar1);
        (**(code **)(lVar2 + 0x150))(*(undefined8 *)(param_1 + 8),uVar4,local_a58);
        if (uVar3 == 0) {
          local_238 = '\0';
          memset(local_237,0,0xff);
          pIVar5 = theInstance();
          lVar2 = **(longlong **)(param_1 + 8);
          FUN_140dca110(lVar1);
          FUN_140dca0d0(lVar1);
          uVar4 = FUN_140dca0f0(lVar1);
          (**(code **)(lVar2 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar4);
          _Format = (char *)(*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_CROSS_FLAG_WAR_CHAMPION");
          _snprintf(&local_238,0x100,_Format);
          FUN_140dd1a10(local_648);
          uVar6 = FUN_140dd1ad0((longlong)local_648,&local_238);
          if ((char)uVar6 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),local_648);
          }
          FUN_140dd1a60((undefined8 *)local_648);
        }
        FUN_140dd1a60((undefined8 *)local_a58);
        FUN_140dd1c30((undefined8 *)local_e88);
        uVar7 = local_eb8[4];
      }
      local_eb8[3] = uVar3 + 1;
    }
  }
  return;
}




ulonglong FUN_140db75f0(int *param_1)

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




longlong FUN_140db7650(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_140db7690(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db76b2;
  }
  lVar2 = *plVar1;
LAB_140db76b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db76d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db76f2;
  }
  lVar2 = *plVar1;
LAB_140db76f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong FUN_140db7710(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7732;
  }
  lVar2 = *plVar1;
LAB_140db7732:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db7750(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7772;
  }
  lVar2 = *plVar1;
LAB_140db7772:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db7790(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140db77d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db77f2;
  }
  lVar2 = *plVar1;
LAB_140db77f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db7810(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7832;
  }
  lVar2 = *plVar1;
LAB_140db7832:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140db7850(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140db7890(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db78b2;
  }
  lVar2 = *plVar1;
LAB_140db78b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db78d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db78f2;
  }
  lVar2 = *plVar1;
LAB_140db78f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140db7910(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140db7950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7972;
  }
  lVar2 = *plVar1;
LAB_140db7972:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db7990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db79b2;
  }
  lVar2 = *plVar1;
LAB_140db79b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0xc;
  return param_1;
}




bool FUN_140db79d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140db7a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7a70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7a80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7a90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7aa0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7ab0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140db7ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7ae2;
  }
  lVar2 = *plVar1;
LAB_140db7ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db7b00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db7b22;
  }
  lVar2 = *plVar1;
LAB_140db7b22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db7b40(longlong *param_1)

{
  FUN_140db5c70(param_1);
  return param_1;
}




void FUN_140db7bb0(longlong param_1,longlong param_2)

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




void FUN_140db7c10(longlong param_1,longlong *param_2)

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




void FUN_140db7c70(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140db7d40(longlong param_1,longlong param_2)

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




void FUN_140db7da0(longlong param_1,longlong *param_2)

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




void FUN_140db7e30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140db7eb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140db7f30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140db7fb0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xc)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 0xc);
  return;
}




void FUN_140db8020(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db8044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140db80c0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db5c70(param_1);
  return param_2;
}




longlong * FUN_140db80f0(longlong *param_1)

{
  FUN_140db5e30(param_1);
  return param_1;
}




void FUN_140db8170(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 << 5);
  return;
}




void FUN_140db81f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140db8260(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db8292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140db8300(longlong *param_1,longlong param_2)

{
  FUN_140db5f90(param_1,param_2);
  return param_1;
}




longlong * FUN_140db8320(longlong *param_1,longlong param_2)

{
  FUN_140db6000(param_1,param_2);
  return param_1;
}




longlong * FUN_140db8340(longlong *param_1,longlong param_2)

{
  FUN_140db6070(param_1,param_2);
  return param_1;
}




longlong * FUN_140db8360(longlong *param_1,longlong param_2)

{
  FUN_140db60e0(param_1,param_2);
  return param_1;
}




longlong * FUN_140db8380(longlong *param_1,longlong param_2)

{
  FUN_140db6150(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140db83b0(undefined8 *param_1)

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




longlong FUN_140db83f0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  lVar2 = param_1[1];
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  return lVar1 - lVar2 >> 3;
}




void * FUN_140db8550(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db8590(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db85d0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db8620(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140db8740(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
  }
  return;
}




void * FUN_140db8850(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db8890(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db88d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db8910(void *param_1,longlong param_2,void *param_3)

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




void FUN_140db8950(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_140db4850(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_140db4850(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_140db4850(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_140db89f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined1 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2;
  while( true ) {
    lVar2 = lVar3 * 2 + 2;
    if (param_3 <= lVar2) break;
    bVar1 = FUN_140db4850(&param_5,*(longlong *)(param_1 + lVar2 * 8),*(longlong *)(param_1 + -8 + lVar2 * 8));
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
  FUN_140db7010(param_1,lVar3,param_2,param_4);
  return;
}




void * FUN_140db8aa0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140db8ae0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = *param_2;
  if (uVar1 != 0) {
    if (*param_1 != 0) {
      uVar4 = param_2[2] * 50000 + param_2[1];
      uVar3 = param_1[2] * 50000 + param_1[1];
      if (uVar4 == uVar3) {
        bVar5 = uVar1 < *param_1;
      }
      else {
        bVar5 = uVar3 <= uVar4;
      }
      if (!bVar5) goto LAB_140db8b64;
    }
    if (param_2 != param_1) {
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar1;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
    }
  }
LAB_140db8b64:
  if (*param_3 != 0) {
    uVar1 = *param_2;
    if (uVar1 != 0) {
      uVar4 = param_3[2] * 50000 + param_3[1];
      uVar3 = param_2[2] * 50000 + param_2[1];
      if (uVar4 == uVar3) {
        bVar5 = *param_3 < uVar1;
      }
      else {
        bVar5 = uVar3 <= uVar4;
      }
      if (!bVar5) goto LAB_140db8bea;
    }
    if (param_3 != param_2) {
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar2 = param_3[2];
      *param_3 = uVar1;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = uVar2;
    }
  }
LAB_140db8bea:
  if (*param_2 != 0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      uVar3 = param_1[2] * 50000 + param_1[1];
      uVar4 = param_2[2] * 50000 + param_2[1];
      if (uVar4 == uVar3) {
        bVar5 = *param_2 < uVar1;
      }
      else {
        bVar5 = uVar3 <= uVar4;
      }
      if (!bVar5) {
        return;
      }
    }
    if (param_2 != param_1) {
      uVar3 = *param_2;
      uVar4 = param_2[1];
      uVar2 = param_2[2];
      *param_2 = uVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar2;
    }
  }
  return;
}




void FUN_140db8c70(longlong param_1,longlong param_2,longlong param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  
  lVar3 = param_2;
  do {
    lVar7 = lVar3 * 2 + 2;
    if (param_3 <= lVar7) {
      lVar5 = lVar3;
      if (lVar7 == param_3) {
        lVar5 = param_3 + -1;
        *(undefined4 *)(param_1 + lVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
        *(undefined4 *)(param_1 + 4 + lVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
        *(undefined4 *)(param_1 + 8 + lVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
      }
      local_18 = *param_4;
      local_14 = param_4[1];
      local_10 = param_4[2];
      FUN_140db70b0(param_1,lVar5,param_2,&local_18);
      return;
    }
    uVar1 = *(uint *)(param_1 + lVar7 * 0xc);
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + -0xc + lVar7 * 0xc);
      if (uVar2 != 0) {
        uVar4 = *(int *)(param_1 + -4 + lVar7 * 0xc) * 50000 + *(int *)(param_1 + -8 + lVar7 * 0xc);
        uVar6 = *(int *)(param_1 + 8 + lVar7 * 0xc) * 50000 + *(int *)(param_1 + 4 + lVar7 * 0xc);
        if (uVar6 == uVar4) {
          bVar8 = uVar1 < uVar2;
        }
        else {
          bVar8 = uVar4 <= uVar6;
        }
        if (!bVar8) goto LAB_140db8cf1;
      }
      lVar7 = lVar3 * 2 + 1;
    }
LAB_140db8cf1:
    *(undefined4 *)(param_1 + lVar3 * 0xc) = *(undefined4 *)(param_1 + lVar7 * 0xc);
    *(undefined4 *)(param_1 + 4 + lVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + lVar7 * 0xc);
    *(undefined4 *)(param_1 + 8 + lVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + lVar7 * 0xc);
    lVar3 = lVar7;
  } while( true );
}




undefined4 * FUN_140db8e10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return param_3;
}




void FUN_140db8e60(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,undefined1 param_5)

{
  *param_3 = *param_1;
  FUN_140db89f0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




void FUN_140db8e90(undefined4 *param_1,longlong param_2,undefined4 *param_3,uint *param_4)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  FUN_140db8c70((longlong)param_1,0,(param_2 - (longlong)param_1) / 0xc,&local_18);
  return;
}




longlong FUN_140db8f00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db8f22;
  }
  lVar2 = *plVar1;
LAB_140db8f22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db8f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db8f62;
  }
  lVar2 = *plVar1;
LAB_140db8f62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db8f80(longlong *param_1)

{
  FUN_140db5c70(param_1);
  return param_1;
}




void FUN_140db8fa0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db8fc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db8fe0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db9000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db9020(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db9040(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db9060(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db9080(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140db9080(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




void FUN_140db90d0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db90d0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_140db9120(longlong param_1,ulonglong param_2)

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
      FUN_140db5880();
    }
    lVar1 = FUN_140db7e30(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140db9180(longlong param_1,ulonglong param_2)

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
      FUN_140db5910();
    }
    lVar1 = FUN_140db7eb0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140db91e0(longlong param_1,ulonglong param_2)

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
      FUN_140db59a0();
    }
    lVar1 = FUN_140db7f30(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140db9240(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x1555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140db5a30();
    }
    lVar1 = FUN_140db7fb0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 0xc;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_140db92b0(longlong *param_1)

{
  FUN_140db8020(param_1);
  return param_1;
}




undefined8 FUN_140db92d0(longlong param_1,ulonglong param_2)

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
      FUN_140db5bc0();
    }
    lVar1 = FUN_140db7c70(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_140db9330(longlong *param_1)

{
  FUN_140db5e30(param_1);
  return param_1;
}




undefined8 * FUN_140db9350(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140db9390(void)

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




undefined8 * FUN_140db93f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_140db9470(undefined8 *param_1)

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




undefined8 * FUN_140db94b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140db9540(undefined8 *param_1)

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




undefined8 * FUN_140db9590(undefined8 *param_1)

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




undefined8 * FUN_140db95e0(undefined8 *param_1)

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




undefined8 * FUN_140db9620(undefined8 *param_1)

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




undefined8 * FUN_140db9660(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140db96a0(longlong *param_1)

{
  FUN_140db8260(param_1);
  return param_1;
}




longlong * FUN_140db96c0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db972a;
  }
  _invalid_parameter_noinfo();
LAB_140db972a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db9760(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140db97c0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db982a;
  }
  _invalid_parameter_noinfo();
LAB_140db982a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db9860(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140db98c0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db992a;
  }
  _invalid_parameter_noinfo();
LAB_140db992a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db9960(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140db99d0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db9a3a;
  }
  _invalid_parameter_noinfo();
LAB_140db9a3a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db9a70(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140db9ad0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 0xc;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db9b3e;
  }
  _invalid_parameter_noinfo();
LAB_140db9b3e:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db9b70(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140db9bd0(void)

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




longlong * FUN_140db9c30(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db8020(param_1);
  return param_2;
}




undefined8 * FUN_140db9c60(undefined8 *param_1)

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




undefined8 * FUN_140db9cb0(undefined8 *param_1)

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




void * FUN_140db9d00(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db9d40(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db9d80(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_140db9dc0(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 3;
      *(undefined4 *)(lVar1 + -0xc + (longlong)puVar3) = *puVar2;
      *(undefined4 *)(lVar1 + -8 + (longlong)puVar3) = puVar2[1];
      *(undefined4 *)(lVar1 + -4 + (longlong)puVar3) = puVar2[2];
      puVar2 = puVar3;
    } while (puVar3 != param_2);
  }
  return param_3 + (((longlong)param_2 - (longlong)param_1) / 0xc) * 0xc;
}




void * FUN_140db9e60(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db9ed0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db9f40(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db9fe0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140dba040(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x1d) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x1d);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x1d);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x1d);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x1d);
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




void FUN_140dba110(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}




void * FUN_140dba2a0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dba2e0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dba320(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dba360(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dba3a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140db8950(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_140db8950(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_140db8950(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_140db8950(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_140db8950(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140dba480(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140db89f0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_140dba500(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res18 [16];
  
  if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
    local_res18[0] = param_3;
    do {
      lVar1 = *plVar4;
      bVar2 = FUN_140db4850(local_res18,lVar1,*param_1);
      if (bVar2) {
        lVar3 = (longlong)plVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(plVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = lVar1;
      }
      else {
        bVar2 = FUN_140db4850(local_res18,lVar1,plVar4[-1]);
        plVar6 = plVar4;
        plVar5 = plVar4;
        if (bVar2) {
          do {
            plVar6 = plVar5 + -1;
            *plVar5 = *plVar6;
            bVar2 = FUN_140db4850(local_res18,lVar1,plVar5[-2]);
            plVar5 = plVar6;
          } while (bVar2);
        }
        *plVar6 = lVar1;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != param_2);
  }
  return;
}




void FUN_140dba620(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  
  lVar1 = ((longlong)param_3 - (longlong)param_1) / 0xc;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140db8ae0(param_1,param_1 + lVar1 * 3,param_1 + lVar1 * 6);
    FUN_140db8ae0(param_2 + lVar1 * -3,param_2,param_2 + lVar1 * 3);
    FUN_140db8ae0(param_3 + lVar1 * -6,param_3 + lVar1 * -3,param_3);
    FUN_140db8ae0(param_1 + lVar1 * 3,param_2,param_3 + lVar1 * -3);
    return;
  }
  FUN_140db8ae0(param_1,param_2,param_3);
  return;
}




void FUN_140dba730(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  lVar3 = (lVar1 >> 1) - (lVar1 >> 0x3f);
  lVar1 = lVar3 / 2;
  if (0 < lVar1) {
    lVar2 = param_1 + lVar1 * 0xc;
    do {
      local_18 = *(uint *)(lVar2 + -0xc);
      local_14 = *(undefined4 *)(lVar2 + -8);
      local_10 = *(undefined4 *)(lVar2 + -4);
      lVar2 = lVar2 + -0xc;
      lVar1 = lVar1 + -1;
      FUN_140db8c70(param_1,lVar1,lVar3,&local_18);
    } while (0 < lVar1);
  }
  return;
}




void FUN_140dba7f0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 3, puVar4 != param_2) {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uVar3 = puVar4[2];
      puVar7 = puVar4;
      if (uVar1 == 0) {
LAB_140dba8d0:
        while (uVar1 != 0) {
          uVar5 = puVar7[-3];
          if (uVar5 != 0) {
            uVar8 = uVar3 * 50000 + uVar2;
            uVar6 = puVar7[-1] * 50000 + puVar7[-2];
            if (uVar8 == uVar6) {
              bVar9 = uVar1 < uVar5;
            }
            else {
              bVar9 = uVar6 < uVar8;
            }
            if (!bVar9) break;
          }
          *puVar7 = uVar5;
          puVar7[1] = puVar7[-2];
          puVar7[2] = puVar7[-1];
          puVar7 = puVar7 + -3;
        }
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
      }
      else {
        if (*param_1 != 0) {
          uVar6 = uVar2 + uVar3 * 50000;
          uVar5 = param_1[2] * 50000 + param_1[1];
          if (uVar6 == uVar5) {
            bVar9 = uVar1 < *param_1;
          }
          else {
            bVar9 = uVar5 < uVar6;
          }
          if (!bVar9) goto LAB_140dba8d0;
        }
        for (; param_1 != puVar7; puVar7 = puVar7 + -3) {
          *puVar7 = puVar7[-3];
          puVar7[1] = puVar7[-2];
          puVar7[2] = puVar7[-1];
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
      }
    }
  }
  return;
}




void FUN_140dba960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140db8e10(param_1,param_2,param_3);
  return;
}




void FUN_140dba980(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140db89f0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1,param_3);
  return;
}




void FUN_140dba9b0(undefined4 *param_1,longlong param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *(undefined8 *)(param_2 + -0xc);
  local_10 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -0xc) = *param_1;
  *(undefined4 *)(param_2 + -8) = param_1[1];
  *(undefined4 *)(param_2 + -4) = param_1[2];
  FUN_140db8c70((longlong)param_1,0,((param_2 - (longlong)param_1) + -0xc) / 0xc,(uint *)&local_18);
  return;
}




void FUN_140dbaa50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140db9080(param_1,(longlong *)plVar2[2]);
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




void FUN_140dbaad0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db90d0(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_140dbab50(longlong *param_1)

{
  FUN_140db8020(param_1);
  return param_1;
}




void FUN_140dbab70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbab90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbabf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9390();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140dbac30(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140dbac60(undefined8 *param_1)

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




void FUN_140dbacb0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140dbace0(undefined8 *param_1)

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




void FUN_140dbad30(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140dbad60(undefined8 *param_1)

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




undefined8 * FUN_140dbadb0(undefined8 *param_1)

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




undefined8 * FUN_140dbae00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140dbae40(longlong *param_1)

{
  FUN_140db8260(param_1);
  return param_1;
}




undefined8 * FUN_140dbae60(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140dbaec0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140dbaf20(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140dbaf80(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140dbafb0(undefined8 *param_1)

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




undefined8 * FUN_140dbb000(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140dbb060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dbb0a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140dbb100(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb150(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140de9b48);
  }
  FUN_140db5c70(param_3);
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
        goto LAB_140dbb33c;
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
LAB_140dbb33c:
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
            FUN_140db7bb0((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140db7c10((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_140db7bb0((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_140db7c10((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140db7bb0((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_140db7c10((longlong)param_1,plVar10);
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




exception * FUN_140dbb510(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_140dbb570(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x1d) == '\0') {
    puVar1 = FUN_140db93f0(param_1,puVar3,param_3,puVar3,(undefined4 *)(param_2 + 3),*(undefined1 *)((longlong)param_2 + 0x1c));
    if (*(char *)((longlong)puVar3 + 0x1d) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140dbb570(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_140dbb570(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_140dbb600(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x1d) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x1d) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x1d) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x1d) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x1d) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x1d) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_140dbb6e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140db9bd0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140dbb720(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb780(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb7e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb840(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb8a0(undefined8 *param_1)

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




undefined8 * FUN_140dbb8f0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dbb940(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140de9b48);
  }
  FUN_140db8020(param_3);
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
        goto LAB_140dbbb2c;
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
LAB_140dbbb2c:
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
            FUN_140db7d40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db7da0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140db7d40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140db7da0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db7d40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140db7da0((longlong)param_1,plVar7);
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




undefined8 * FUN_140dbbd00(undefined8 *param_1)

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




void FUN_140dbbd90(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x1d);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x1d);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x1d);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
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




void FUN_140dbbe80(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  FUN_140dba110(param_1,param_2,param_3);
  return;
}




longlong FUN_140dbbeb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - param_2;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + -0xc;
      *(undefined4 *)(lVar1 + lVar3) = *(undefined4 *)(lVar2 + -0xc);
      *(undefined4 *)(lVar1 + 4 + lVar3) = *(undefined4 *)(lVar2 + -8);
      *(undefined4 *)(lVar1 + 8 + lVar3) = *(undefined4 *)(lVar2 + -4);
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0xc) * -0xc;
}




void * FUN_140dbbfe0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dbc020(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dbc060(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dbc0a0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140dbc0e0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res20 [8];
  
  plVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  local_res20[0] = param_4;
  FUN_140dba3a0(param_2,plVar6,param_3 + -1,param_4);
  plVar7 = plVar6;
  while (plVar8 = plVar7, param_2 < plVar8) {
    bVar3 = FUN_140db4850(local_res20,plVar8[-1],*plVar8);
    if ((bVar3) || (bVar3 = FUN_140db4850(local_res20,*plVar8,plVar8[-1]), plVar7 = plVar8 + -1, bVar3)) break;
  }
  do {
    plVar6 = plVar6 + 1;
    plVar7 = plVar6;
    plVar5 = plVar8;
    if (param_3 <= plVar6) break;
    bVar3 = FUN_140db4850(local_res20,*plVar6,*plVar8);
    if ((bVar3) || (bVar3 = FUN_140db4850(local_res20,*plVar8,*plVar6), bVar3)) break;
  } while( true );
joined_r0x000140dbc1c3:
  plVar4 = plVar5;
  plVar2 = plVar7;
  plVar7 = plVar8;
  if (param_3 <= plVar2) {
joined_r0x000140dbc21c:
    for (; param_2 < plVar8; plVar8 = plVar8 + -1) {
      plVar7 = plVar7 + -1;
      bVar3 = FUN_140db4850(local_res20,*plVar7,*plVar4);
      if (!bVar3) {
        bVar3 = FUN_140db4850(local_res20,*plVar4,*plVar7);
        if (bVar3) break;
        plVar4 = plVar4 + -1;
        if (plVar4 != plVar7) {
          lVar1 = *plVar4;
          *plVar4 = *plVar7;
          *plVar7 = lVar1;
        }
      }
    }
    if (plVar8 == param_2) {
      if (plVar2 == param_3) {
        *param_1 = plVar4;
        param_1[1] = plVar6;
        return param_1;
      }
      if ((plVar6 != plVar2) && (plVar4 != plVar6)) {
        lVar1 = *plVar4;
        *plVar4 = *plVar6;
        *plVar6 = lVar1;
      }
      plVar6 = plVar6 + 1;
      plVar7 = plVar2 + 1;
      plVar5 = plVar4 + 1;
      if (plVar4 != plVar2) {
        lVar1 = *plVar4;
        *plVar4 = *plVar2;
        *plVar2 = lVar1;
      }
    }
    else {
      plVar8 = plVar8 + -1;
      if (plVar2 == param_3) {
        plVar5 = plVar4 + -1;
        if (plVar8 != plVar5) {
          lVar1 = *plVar8;
          *plVar8 = *plVar5;
          *plVar5 = lVar1;
        }
        plVar6 = plVar6 + -1;
        plVar7 = plVar2;
        if (plVar5 != plVar6) {
          lVar1 = *plVar5;
          *plVar5 = *plVar6;
          *plVar6 = lVar1;
        }
      }
      else {
        if (plVar2 != plVar8) {
          lVar1 = *plVar2;
          *plVar2 = *plVar8;
          *plVar8 = lVar1;
        }
        plVar7 = plVar2 + 1;
        plVar5 = plVar4;
      }
    }
    goto joined_r0x000140dbc1c3;
  }
  bVar3 = FUN_140db4850(local_res20,*plVar4,*plVar2);
  plVar5 = plVar6;
  if (!bVar3) {
    bVar3 = FUN_140db4850(local_res20,*plVar2,*plVar4);
    if (bVar3) goto joined_r0x000140dbc21c;
    plVar5 = plVar6 + 1;
    if (plVar6 != plVar2) {
      lVar1 = *plVar6;
      *plVar6 = *plVar2;
      *plVar2 = lVar1;
    }
  }
  plVar6 = plVar5;
  plVar7 = plVar2 + 1;
  plVar5 = plVar4;
  goto joined_r0x000140dbc1c3;
}




void FUN_140dbc350(longlong param_1,longlong param_2,undefined1 param_3)

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
      FUN_140db89f0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_140dbc3d0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  FUN_140dba500(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_140dbc3f0(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  
  puVar7 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x18) * 3;
  FUN_140dba620(param_2,puVar7,param_3 + -3);
  puVar5 = puVar7;
  do {
    do {
      puVar11 = puVar5;
      if (puVar11 <= param_2) goto joined_r0x000140dbc4ef;
      uVar1 = puVar11[-3];
      if (uVar1 != 0) {
        if (*puVar11 == 0) goto joined_r0x000140dbc4ef;
        uVar6 = puVar11[2] * 50000 + puVar11[1];
        uVar10 = puVar11[-1] * 50000 + puVar11[-2];
        if (uVar10 == uVar6) {
          bVar12 = uVar1 < *puVar11;
        }
        else {
          bVar12 = uVar6 <= uVar10;
        }
        if (bVar12) goto joined_r0x000140dbc4ef;
      }
      puVar5 = puVar11 + -3;
    } while (*puVar11 == 0);
    if (uVar1 == 0) break;
    uVar6 = puVar11[-1] * 50000 + puVar11[-2];
    uVar10 = puVar11[2] * 50000 + puVar11[1];
    if (uVar10 == uVar6) {
      bVar12 = *puVar11 < uVar1;
    }
    else {
      bVar12 = uVar6 <= uVar10;
    }
  } while (!bVar12);
joined_r0x000140dbc4ef:
  do {
    do {
      puVar5 = puVar7;
      puVar7 = puVar5 + 3;
      puVar9 = puVar7;
      puVar8 = puVar11;
      if (param_3 <= puVar7) goto joined_r0x000140dbc586;
      uVar1 = *puVar7;
      if (uVar1 != 0) {
        if (*puVar11 == 0) goto joined_r0x000140dbc586;
        uVar6 = puVar11[2] * 50000 + puVar11[1];
        uVar10 = puVar5[5] * 50000 + puVar5[4];
        if (uVar10 == uVar6) {
          bVar12 = uVar1 < *puVar11;
        }
        else {
          bVar12 = uVar6 <= uVar10;
        }
        if (bVar12) goto joined_r0x000140dbc586;
      }
    } while (*puVar11 == 0);
    if (uVar1 == 0) break;
    uVar6 = puVar5[5] * 50000 + puVar5[4];
    uVar10 = puVar11[2] * 50000 + puVar11[1];
    if (uVar10 == uVar6) {
      bVar12 = *puVar11 < uVar1;
    }
    else {
      bVar12 = uVar6 <= uVar10;
    }
  } while (!bVar12);
joined_r0x000140dbc586:
  do {
    puVar2 = puVar9;
    puVar5 = puVar7;
    puVar3 = puVar11;
    puVar4 = puVar8;
    puVar9 = puVar2;
    if (param_3 <= puVar5) goto joined_r0x000140dbc66d;
    uVar1 = *puVar8;
    if (uVar1 == 0) {
LAB_140dbc5d5:
      if (*puVar5 != 0) {
        if (uVar1 != 0) {
          uVar10 = puVar5[2] * 50000 + puVar5[1];
          uVar6 = puVar8[2] * 50000 + puVar8[1];
          if (uVar10 == uVar6) {
            bVar12 = *puVar5 < uVar1;
          }
          else {
            bVar12 = uVar6 <= uVar10;
          }
          if (!bVar12) goto LAB_140dbc614;
        }
joined_r0x000140dbc66d:
        for (; param_2 < puVar3; puVar3 = puVar3 + -3) {
          puVar7 = puVar11 + -3;
          uVar1 = *puVar7;
          if (uVar1 == 0) {
LAB_140dbc6bb:
            if (*puVar4 != 0) {
              if (uVar1 == 0) break;
              uVar10 = puVar4[2] * 50000 + puVar4[1];
              uVar6 = puVar11[-1] * 50000 + puVar11[-2];
              if (uVar10 == uVar6) {
                bVar12 = *puVar4 < uVar1;
              }
              else {
                bVar12 = uVar6 <= uVar10;
              }
              if (bVar12) break;
            }
            puVar8 = puVar4 + -3;
            if (puVar8 != puVar7) {
              uVar1 = *puVar8;
              uVar6 = puVar4[-2];
              uVar10 = puVar4[-1];
              *puVar8 = *puVar7;
              puVar4[-2] = puVar11[-2];
              puVar4[-1] = puVar11[-1];
              *puVar7 = uVar1;
              puVar11[-2] = uVar6;
              puVar11[-1] = uVar10;
            }
          }
          else {
            puVar8 = puVar4;
            if (*puVar4 != 0) {
              uVar10 = puVar11[-1] * 50000 + puVar11[-2];
              uVar6 = puVar4[2] * 50000 + puVar4[1];
              if (uVar10 == uVar6) {
                bVar12 = uVar1 < *puVar4;
              }
              else {
                bVar12 = uVar6 <= uVar10;
              }
              if (!bVar12) goto LAB_140dbc6bb;
            }
          }
          puVar11 = puVar7;
          puVar4 = puVar8;
        }
        if (puVar3 == param_2) {
          if (puVar5 == param_3) {
            *param_1 = puVar4;
            param_1[1] = puVar2;
            return param_1;
          }
          if ((puVar2 != puVar5) && (puVar4 != puVar2)) {
            uVar1 = *puVar4;
            uVar6 = puVar4[1];
            uVar10 = puVar4[2];
            *puVar4 = *puVar2;
            puVar4[1] = puVar2[1];
            puVar4[2] = puVar2[2];
            *puVar2 = uVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar10;
          }
          puVar7 = puVar5 + 3;
          puVar9 = puVar2 + 3;
          puVar11 = puVar3;
          puVar8 = puVar4 + 3;
          if (puVar4 != puVar5) {
            uVar1 = *puVar4;
            uVar6 = puVar4[1];
            uVar10 = puVar4[2];
            *puVar4 = *puVar5;
            puVar4[1] = puVar5[1];
            puVar4[2] = puVar5[2];
            *puVar5 = uVar1;
            puVar5[1] = uVar6;
            puVar5[2] = uVar10;
          }
        }
        else {
          puVar11 = puVar3 + -3;
          if (puVar5 == param_3) {
            puVar8 = puVar4 + -3;
            if (puVar11 != puVar8) {
              uVar1 = *puVar11;
              uVar6 = puVar3[-2];
              uVar10 = puVar3[-1];
              *puVar11 = *puVar8;
              puVar3[-2] = puVar4[-2];
              puVar3[-1] = puVar4[-1];
              *puVar8 = uVar1;
              puVar4[-2] = uVar6;
              puVar4[-1] = uVar10;
            }
            puVar9 = puVar2 + -3;
            puVar7 = puVar5;
            if (puVar8 != puVar9) {
              uVar1 = *puVar8;
              uVar6 = puVar4[-2];
              uVar10 = puVar4[-1];
              *puVar8 = *puVar9;
              puVar4[-2] = puVar2[-2];
              puVar4[-1] = puVar2[-1];
              *puVar9 = uVar1;
              puVar2[-2] = uVar6;
              puVar2[-1] = uVar10;
            }
          }
          else {
            if (puVar5 != puVar11) {
              uVar1 = *puVar5;
              uVar6 = puVar5[1];
              uVar10 = puVar5[2];
              *puVar5 = *puVar11;
              puVar5[1] = puVar3[-2];
              puVar5[2] = puVar3[-1];
              *puVar11 = uVar1;
              puVar3[-2] = uVar6;
              puVar3[-1] = uVar10;
            }
            puVar7 = puVar5 + 3;
            puVar8 = puVar4;
          }
        }
        goto joined_r0x000140dbc586;
      }
LAB_140dbc614:
      puVar9 = puVar2 + 3;
      if (puVar2 != puVar5) {
        uVar1 = *puVar2;
        uVar6 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        *puVar5 = uVar1;
        puVar5[1] = uVar6;
        puVar5[2] = uVar10;
      }
    }
    else if (*puVar5 != 0) {
      uVar10 = puVar8[2] * 50000 + puVar8[1];
      uVar6 = puVar5[2] * 50000 + puVar5[1];
      if (uVar10 == uVar6) {
        bVar12 = uVar1 < *puVar5;
      }
      else {
        bVar12 = uVar6 <= uVar10;
      }
      if (!bVar12) goto LAB_140dbc5d5;
    }
    puVar7 = puVar5 + 3;
  } while( true );
}




void FUN_140dbc940(longlong param_1,longlong param_2)

{
  if (1 < (param_2 - param_1) / 0xc) {
    FUN_140dba730(param_1,param_2);
  }
  return;
}




void FUN_140dbc990(uint *param_1,uint *param_2)

{
  FUN_140dba7f0(param_1,param_2);
  return;
}




void FUN_140dbc9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140db8e10(param_1,param_2,param_3);
  return;
}




void FUN_140dbc9d0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140db89f0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1,param_3);
  }
  return;
}




void FUN_140dbca10(undefined4 *param_1,longlong param_2)

{
  if (1 < (param_2 - (longlong)param_1) / 0xc) {
    FUN_140dba9b0(param_1,param_2);
  }
  return;
}




longlong * FUN_140dbca90(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140dbcba0(undefined8 *param_1)

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




void FUN_140dbcc00(undefined8 *param_1)

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




undefined8 * FUN_140dbcc40(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbcc90(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbcce0(undefined8 *param_1)

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




void FUN_140dbcd40(undefined8 *param_1)

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




undefined8 * FUN_140dbcd80(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbcdd0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbce20(undefined8 *param_1)

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




void FUN_140dbce80(undefined8 *param_1)

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




undefined8 * FUN_140dbcec0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbcf10(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbcf60(undefined8 *param_1)

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




undefined8 * FUN_140dbcfc0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbd010(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbd060(undefined8 *param_1)

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




void FUN_140dbd0c0(undefined8 *param_1)

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




undefined8 * FUN_140dbd100(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dbd150(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140dbd1a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbd1c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dbd1e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dbaa50((longlong)param_1);
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
    FUN_140dbb150(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140dbd3d0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140dbb600(param_1,param_2,param_3);
  return param_2;
}




void FUN_140dbd3f0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_140dbb570(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
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




undefined8 * FUN_140dbd4a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
  }
  plVar5 = FUN_140db93f0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_140dbd7e0(longlong *param_1)

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
  FUN_140dbd1e0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140dbd890(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
  }
  plVar5 = FUN_140db94b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_140dbdbd0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_140dbdcc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_140dbddb0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined4 * FUN_140dbdea0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  FUN_140dba110(param_2,param_3,param_4);
  return param_2 + param_3 * 3;
}




undefined8 * FUN_140dbdef0(undefined8 *param_1)

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




longlong * FUN_140dbdf40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dbaad0((longlong)param_1);
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
    FUN_140dbb940(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140dbe100(undefined8 *param_1)

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




void * FUN_140dbe210(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140dbe250(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140dbe290(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140dbe2d0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140dbe310(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_140db8e10(param_1,param_2,param_3);
  return;
}




void FUN_140dbe330(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140db89f0((longlong)param_1,0,lVar2 + -8 >> 3,lVar1,param_3);
  }
  return;
}




void FUN_140dbe3a0(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  for (lVar3 = param_2 - (longlong)param_1; 1 < lVar3 / 0xc; lVar3 = lVar3 + -0xc) {
    uVar1 = *(undefined4 *)((longlong)param_1 + lVar3 + -0xc);
    uVar2 = *(undefined4 *)((longlong)param_1 + lVar3 + -8);
    local_10 = *(undefined4 *)((longlong)param_1 + lVar3 + -4);
    *(undefined4 *)((longlong)param_1 + lVar3 + -0xc) = *param_1;
    *(undefined4 *)((longlong)param_1 + lVar3 + -8) = param_1[1];
    *(undefined4 *)((longlong)param_1 + lVar3 + -4) = param_1[2];
    local_18 = CONCAT44(uVar2,uVar1);
    FUN_140db8c70((longlong)param_1,0,(lVar3 + -0xc) / 0xc,(uint *)&local_18);
  }
  return;
}




longlong FUN_140dbe490(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (*(longlong **)(param_1 + 0xf0) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xf0);
    if (plVar2 < *(longlong **)(param_1 + 0xe8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xd0))) {
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
    if (lVar5 == 0) {
      log_InlineLogERROR("CFrontierFlagWarMgr::QueryFlag, found NULL flag npc info");
    }
    else {
      iVar3 = FUN_140db4110(lVar5);
      if (iVar3 == param_2) {
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




longlong FUN_140dbe5d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (*(longlong **)(param_1 + 0xc0) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 < *(longlong **)(param_1 + 0xb8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xa0))) {
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
    if (*(longlong **)(lVar5 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (iVar3 = FUN_140db1480(lVar5), iVar3 == param_2)) break;
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
  return lVar5;
}




bool FUN_140dbe700(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 < *(longlong **)(param_1 + 0x88)) {
    _invalid_parameter_noinfo();
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x90) < plVar5) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  for (; (plVar5 != plVar1 && (*plVar5 != param_2)); plVar5 = plVar5 + 1) {
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 < *(longlong **)(param_1 + 0x88)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x70))) {
    _invalid_parameter_noinfo();
  }
  if (plVar5 == plVar1) {
    bVar4 = false;
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 0x88);
    if (*(ulonglong *)(param_1 + 0x90) < uVar3) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x70))) {
      _invalid_parameter_noinfo();
    }
    bVar4 = (longlong)((longlong)plVar5 - uVar3 & 0xfffffffffffffff8) < 0x40;
  }
  return bVar4;
}




bool FUN_140dbe800(longlong param_1,uint param_2)

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
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x160))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x1d);
  puVar3 = *(undefined8 **)(param_1 + 0x160);
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
  puVar6 = *(undefined8 **)(param_1 + 0x160);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x130) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar5 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x160);
    local_28 = *(longlong *)(param_1 + 0x130);
  }
  else {
    plVar5 = &local_38;
  }
  local_18 = *plVar5;
  lVar2 = *(longlong *)(param_1 + 0x160);
  local_10 = plVar5[1];
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x130))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar2;
}




bool FUN_140dbe8f0(longlong param_1,uint param_2)

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
  
  puVar6 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1a0))[1];
  cVar1 = *(char *)((longlong)puVar6 + 0x1d);
  puVar3 = *(undefined8 **)(param_1 + 0x1a0);
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
  puVar6 = *(undefined8 **)(param_1 + 0x1a0);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x170) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar6) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar5 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1a0);
    local_28 = *(longlong *)(param_1 + 0x170);
  }
  else {
    plVar5 = &local_38;
  }
  local_18 = *plVar5;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  local_10 = plVar5[1];
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x170))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dbe9e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_6c8 [32];
  char *local_6a8;
  undefined1 *local_6a0;
  undefined1 *local_698;
  int local_688;
  longlong *local_680;
  longlong *local_678;
  longlong *local_668;
  longlong *local_658;
  longlong *local_648;
  undefined8 local_638;
  longlong *local_630;
  longlong *local_620;
  CMsg local_608 [1040];
  char local_1f8 [64];
  undefined1 local_1b8 [64];
  undefined1 local_178 [64];
  char local_138;
  undefined1 local_137 [255];
  ulonglong local_38;
  
  local_638 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_6c8;
  local_138 = '\0';
  memset(local_137,0,0xff);
  local_1f8[0] = '\0';
  memset(local_1f8 + 1,0,0xbf);
  iVar12 = 0;
  local_688 = 0;
  plVar9 = *(longlong **)(param_1 + 0x88);
  local_658 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x90) < plVar9) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  local_658 = plVar1;
  while( true ) {
    plVar10 = *(longlong **)(param_1 + 0x90);
    local_620 = (longlong *)0x0;
    if (plVar10 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    local_620 = *(longlong **)(param_1 + 0x70);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_620)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar10) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (*(longlong **)(lVar11 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    lVar11 = *plVar9;
    if (lVar11 != 0) {
      lVar2 = **(longlong **)(param_1 + 8);
      pcVar6 = (char *)FUN_140dca0d0(lVar11);
      uVar5 = FUN_140dca0f0(lVar11);
      (**(code **)(lVar2 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar5);
      local_6a8 = pcVar6;
      _snprintf(local_1f8 + (longlong)iVar12 * 0x40,0x40,"%s.%s");
      iVar12 = iVar12 + 1;
      local_688 = iVar12;
      if (2 < iVar12) break;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (*(longlong **)(lVar11 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar9 = plVar9 + 1;
  }
  if (iVar12 == 0) {
    pIVar7 = theInstance();
    pcVar6 = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CROSS_FLAG_WAR_COMPLETE");
    strncpy(&local_138,pcVar6,0x100);
  }
  else if (iVar12 == 1) {
    pIVar7 = theInstance();
    (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CROSS_FLAG_WAR_RANK");
    local_6a8 = local_1f8;
    _snprintf(&local_138,0x100,"%s %s");
  }
  else if (iVar12 == 2) {
    pIVar7 = theInstance();
    (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CROSS_FLAG_WAR_RANK");
    local_6a0 = local_1b8;
    local_6a8 = local_1f8;
    _snprintf(&local_138,0x100,"%s, %s, %s");
  }
  else {
    if (iVar12 != 3) {
      log_InlineLogERROR("CFrontierFlagWarMgr::BroadcastRank, failed in geting rank string");
      return;
    }
    pIVar7 = theInstance();
    (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_CROSS_FLAG_WAR_RANK");
    local_698 = local_178;
    local_6a0 = local_1b8;
    local_6a8 = local_1f8;
    _snprintf(&local_138,0x100,"%s %s, %s, %s");
  }
  iVar12 = 0;
  local_688 = 0;
  tq::GmLogSave(PTR_s_frontierflagwar_140deb128,&DAT_140ddb3e0);
  plVar9 = *(longlong **)(param_1 + 0x88);
  local_678 = (longlong *)0x0;
  if (*(longlong **)(param_1 + 0x90) < plVar9) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  local_678 = plVar1;
  while( true ) {
    plVar10 = *(longlong **)(param_1 + 0x90);
    local_630 = (longlong *)0x0;
    if (plVar10 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    local_630 = *(longlong **)(param_1 + 0x70);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_630)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar10) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (*(longlong **)(lVar11 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    lVar11 = *plVar9;
    if (lVar11 != 0) {
      iVar12 = iVar12 + 1;
      lVar2 = **(longlong **)(param_1 + 8);
      local_688 = iVar12;
      uVar8 = FUN_140dca110(lVar11);
      uVar5 = FUN_140dca0f0(lVar11);
      pcVar6 = (char *)(**(code **)(lVar2 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar5);
      FUN_140dca0d0(lVar11);
      local_6a0 = (undefined1 *)CONCAT44(local_6a0._4_4_,(int)uVar8);
      local_6a8 = pcVar6;
      tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"Rank: %d: %s(%s), Merit:%d");
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar1;
    }
    if (*(longlong **)(lVar11 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar9 = plVar9 + 1;
  }
  FUN_140dd1a10(local_608);
  uVar8 = FUN_140dd1ad0((longlong)local_608,&local_138);
  if ((char)uVar8 == '\0') {
    log_InlineLogERROR("CFrontierFlagWarMgr::BroadcastRank, failed in creating cross flag war rank msg");
    FUN_140dd1a60((undefined8 *)local_608);
  }
  else {
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x60);
    plVar1 = *(longlong **)(param_1 + 0x30);
    local_668 = plVar1;
LAB_140dbee80:
    plVar10 = *(longlong **)(param_1 + 0x60);
    local_648 = *(longlong **)(param_1 + 0x30);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_648)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 != plVar10) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar11 = 0;
      }
      else {
        lVar11 = *plVar1;
      }
      if (plVar9 == *(longlong **)(lVar11 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (plVar9[4] != 0) {
        uVar5 = FUN_140dca0f0(plVar9[4]);
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),uVar5);
        if (cVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),uVar5,local_608);
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        plVar10 = plVar9;
        plVar3 = (longlong *)plVar9[2];
        if (*(char *)(plVar9[2] + 0x29) == '\0') {
          do {
            plVar9 = plVar3;
            plVar3 = (longlong *)*plVar9;
            local_680 = plVar9;
          } while (*(char *)(*plVar9 + 0x29) == '\0');
        }
        else {
          do {
            plVar9 = (longlong *)plVar10[1];
            if (*(char *)((longlong)plVar9 + 0x29) != '\0') break;
            bVar13 = plVar10 == (longlong *)plVar9[2];
            plVar10 = plVar9;
          } while (bVar13);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dbee80;
    }
    FUN_140dd1a60((undefined8 *)local_608);
  }
  return;
}




void FUN_140dbefc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  CMsg local_418 [1040];
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x60);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar6 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x60);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x30))) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar3) {
            FUN_140dd1280(local_418);
            uVar5 = FUN_140dd1300(local_418,1,0,0);
            if ((char)uVar5 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x158))(*(longlong **)(param_1 + 8),local_418);
            }
            FUN_140dd12d0((undefined8 *)local_418);
            return;
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
          if (plVar6[4] != 0) {
            FUN_140dcd8f0(plVar6[4]);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar6 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar6;
        }
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar6 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x29);
          plVar3 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      plVar3 = (longlong *)plVar6[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar4 = plVar3;
      plVar3 = plVar4;
      if (plVar6 != (longlong *)plVar4[2]) break;
      plVar3 = (longlong *)plVar4[1];
      plVar6 = plVar4;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




int FUN_140dbf110(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  plVar4 = *(longlong **)(param_1 + 0xe8);
  iVar6 = 0;
  if (*(longlong **)(param_1 + 0xf0) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xf0);
    if (plVar2 < *(longlong **)(param_1 + 0xe8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xd0))) {
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
    if (*plVar4 != 0) {
      bVar3 = FUN_140db4570(*plVar4);
      if (!bVar3) {
        iVar6 = iVar6 + 1;
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
  return iVar6;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dbf200(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 extraout_var;
  uint7 uVar9;
  longlong *plVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  byte local_b8;
  byte local_b7;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_98;
  char local_88;
  char local_87 [16];
  char local_77 [39];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_38;
  
  local_b0 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_e8;
  local_b7 = param_3;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_c8 = 0x795;
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar5 = local_38;
    if ((*(int *)(param_1 + 0x2c) == 0) && (uVar5 = *(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88), (uVar5 & 0xfffffffffffffff8) != 0)) {
      plVar10 = *(longlong **)(param_1 + 0x88);
      local_98 = (longlong *)0x0;
      if (*(longlong **)(param_1 + 0x90) < plVar10) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 0x70);
      uVar13 = 1;
      local_b8 = 1;
      local_98 = plVar1;
      while( true ) {
        plVar2 = *(longlong **)(param_1 + 0x90);
        local_a8 = (longlong *)0x0;
        if (plVar2 < *(longlong **)(param_1 + 0x88)) {
          _invalid_parameter_noinfo();
        }
        local_a8 = *(longlong **)(param_1 + 0x70);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_a8)) {
          _invalid_parameter_noinfo();
        }
        if (plVar10 == plVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar1;
        }
        if (*(longlong **)(lVar11 + 0x20) <= plVar10) {
          _invalid_parameter_noinfo();
        }
        lVar11 = *plVar10;
        if (lVar11 != 0) {
          cVar12 = (char)uVar13;
          if (((int)uVar13 < (int)((uint)local_b7 * 8 - 7)) || ((uint)local_b7 * 8 < uVar13)) {
            local_b8 = cVar12 + 1;
            uVar13 = (uint)local_b8;
          }
          else {
            local_88 = cVar12;
            uVar6 = FUN_140dca110(lVar11);
            local_50 = (undefined4)uVar6;
            lVar8 = **(longlong **)(param_1 + 8);
            uVar3 = FUN_140dca0f0(lVar11);
            pcVar7 = (char *)(**(code **)(lVar8 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar3);
            if (pcVar7 != (char *)0x0) {
              strncpy(local_87,pcVar7,0x10);
            }
            lVar8 = FUN_140dca0d0(lVar11);
            if (lVar8 != 0) {
              pcVar7 = (char *)FUN_140dca0d0(lVar11);
              strncpy(local_77,pcVar7,0x24);
            }
            local_4c = FUN_140dca2a0(lVar11);
            FUN_140dd1830(param_2,&local_88);
            local_b8 = cVar12 + 1;
            uVar13 = (uint)local_b8;
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar1;
        }
        if (*(longlong **)(lVar11 + 0x20) <= plVar10) {
          _invalid_parameter_noinfo();
        }
        plVar10 = plVar10 + 1;
      }
      iVar4 = FUN_140dd19b0(param_2);
      uVar9 = (uint7)(CONCAT44(extraout_var,iVar4) >> 8);
      if (iVar4 < 1) {
        uVar5 = (ulonglong)uVar9 << 8;
      }
      else {
        uVar5 = CONCAT71(uVar9,1);
      }
    }
    else {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
  }
  return uVar5;
}




void FUN_140dbf490(longlong param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))();
    if (((cVar1 != '\0') && (param_3 != 0)) &&
       ((ulonglong)(longlong)(int)((uint)param_3 * 8 + -8) <= (ulonglong)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 3))) {
      FUN_140dd1670(local_418);
      uVar2 = FUN_140dd17d0((longlong)local_418,1,param_3,(int)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 3));
      if ((char)uVar2 == '\0') {
        FUN_140dd16c0((undefined8 *)local_418);
      }
      else {
        uVar3 = FUN_140dbf200(param_1,(longlong)local_418,param_3);
        if ((char)uVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_2,local_418);
        }
        FUN_140dd16c0((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_140dbf5c0(longlong param_1,undefined2 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_48 [4];
  undefined4 local_44;
  char local_40 [40];
  
  iVar5 = 3;
  pcVar3 = local_40;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    *pcVar3 = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3 = pcVar3 + 0xc;
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  local_48[0] = param_4;
  if (*(longlong **)(param_1 + 0xc0) < plVar4) {
    _invalid_parameter_noinfo();
  }
  uVar7 = 0;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 < *(longlong **)(param_1 + 0xb8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xa0))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      FUN_140db1d50(lVar6,local_40 + (longlong)(int)uVar7 * 0xc);
      iVar5 = FUN_140db14c0(lVar6);
      if (1 < iVar5) {
        local_44 = FUN_140db1480(lVar6);
      }
      uVar7 = uVar7 + 1;
      if (3 < uVar7) break;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    plVar4 = plVar4 + 1;
  }
  FUN_140dd0fc0(param_3,param_2,local_48);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dbf780(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong extraout_RAX;
  IStringManager *pIVar4;
  char *_Format;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_9d8 [32];
  CMsg local_968 [1040];
  CMsg local_558 [1072];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_140deb538 ^ (ulonglong)auStackY_9d8;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar8 = 0;
    if (((int)*(uint *)(param_1 + 0x1b0) < 0) || (3 < *(uint *)(param_1 + 0x1b0))) {
      uVar3 = tq::RandGet(3);
    }
    else {
      uVar3 = tq::RandGet(3);
      uVar7 = uVar8;
      do {
        if (uVar3 != *(uint *)(param_1 + 0x1b0)) goto LAB_140dbf883;
        uVar3 = tq::RandGet(3);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x65);
      log_InlineLogERROR(&DAT_140dd9588);
    }
LAB_140dbf883:
    *(uint *)(param_1 + 0x1b0) = uVar3;
    for (; uVar8 < 3; uVar8 = uVar8 + 1) {
      if ((ulonglong)(*(longlong *)(param_1 + 0xc0) - *(longlong *)(param_1 + 0xb8) >> 3) <= (ulonglong)(longlong)(int)uVar8) {
        _invalid_parameter_noinfo();
      }
      lVar1 = *(longlong *)(*(ulonglong *)(param_1 + 0xb8) + (longlong)(int)uVar8 * 8);
      if (lVar1 == 0) {
        return *(ulonglong *)(param_1 + 0xb8) & 0xffffffffffffff00;
      }
      if (uVar8 == uVar3) {
        FUN_140db14b0(lVar1,2);
      }
      else {
        FUN_140db14b0(lVar1,1);
      }
    }
    FUN_140dd1bb0(local_558);
    pIVar4 = theInstance();
    _Format = (char *)(*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_VEXILLUM_DOUBLE_TAR");
    _snprintf(local_128,0x100,_Format);
    uVar5 = FUN_140dd1c70(local_558,"SYSTEM","ALLUSERS",local_128,(char *)0x0,0xff0000,2000,0,0,1);
    if ((char)uVar5 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_558,0);
    }
    FUN_140dd0f00(local_968);
    cVar2 = FUN_140dbf5c0(param_1,2,(longlong)local_968,*(char *)(param_1 + 0x1b0) + '\x01');
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_968,0);
    }
    tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"Altar %d was set double rate");
    FUN_140dd0f50((undefined8 *)local_968);
    uVar6 = FUN_140dd1c30((undefined8 *)local_558);
    uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  return uVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dbfa50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  undefined1 auStack_558 [32];
  undefined4 local_538;
  char local_528;
  longlong *local_520 [3];
  undefined4 *local_508;
  undefined4 *local_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  longlong *local_4e8;
  longlong *local_4d8;
  undefined8 local_4c8;
  longlong *local_4c0;
  longlong *local_4b0;
  CMsg local_498 [1040];
  char local_88;
  char local_87 [16];
  char local_77 [39];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_38;
  
  local_4c8 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_558;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_538 = 0x987;
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if ((*(int *)(param_1 + 0x2c) == 0) && ((*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) & 0xfffffffffffffff8U) != 0)) {
    local_4f0 = operator_new(8);
    if (local_4f0 == (longlong *)0x0) {
      local_520[0] = (longlong *)0x0;
    }
    else {
      *local_4f0 = (longlong)local_520;
      local_520[0] = local_4f0;
    }
    lVar12 = 0;
    local_508 = (undefined4 *)0x0;
    local_500 = (undefined4 *)0x0;
    local_4f8 = 0;
    local_4e8 = local_4f0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),local_520);
    puVar10 = local_508;
    if (((longlong)local_500 - (longlong)local_508 & 0xfffffffffffffffcU) == 0) {
      if (local_508 != (undefined4 *)0x0) {
        operator_delete(local_508);
      }
      local_508 = (undefined4 *)0x0;
      local_500 = (undefined4 *)0x0;
      local_4f8 = 0;
      operator_delete(local_520[0]);
    }
    else {
      local_4f0 = (longlong *)local_508;
      local_4d8 = (longlong *)0x0;
      if (local_500 < local_508) {
        _invalid_parameter_noinfo();
      }
      local_4d8 = local_520[0];
      plVar11 = local_520[0];
      while( true ) {
        puVar3 = local_500;
        local_4e8 = (longlong *)0x0;
        if (local_500 < local_508) {
          _invalid_parameter_noinfo();
        }
        local_4e8 = local_520[0];
        if ((plVar11 == (longlong *)0x0) || (plVar11 != local_520[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar10 == puVar3) {
          if (local_508 != (undefined4 *)0x0) {
            operator_delete(local_508);
          }
          local_508 = (undefined4 *)0x0;
          local_500 = (undefined4 *)0x0;
          local_4f8 = 0;
          operator_delete(local_520[0]);
          return;
        }
        if (plVar11 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = lVar12;
        }
        else {
          lVar13 = *plVar11;
        }
        if (*(undefined4 **)(lVar13 + 0x20) <= puVar10) {
          _invalid_parameter_noinfo();
        }
        local_4e8 = (longlong *)CONCAT44(local_4e8._4_4_,*puVar10);
        FUN_140dd1670(local_498);
        uVar6 = FUN_140dd1780((longlong)local_498,3,0);
        if ((char)uVar6 == '\0') break;
        plVar11 = *(longlong **)(param_1 + 0x88);
        local_4c0 = (longlong *)0x0;
        if (*(longlong **)(param_1 + 0x90) < plVar11) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(param_1 + 0x70);
        cVar14 = '\x01';
        local_528 = '\x01';
        local_4c0 = plVar1;
        while( true ) {
          plVar2 = *(longlong **)(param_1 + 0x90);
          local_4b0 = (longlong *)0x0;
          if (plVar2 < *(longlong **)(param_1 + 0x88)) {
            _invalid_parameter_noinfo();
          }
          local_4b0 = *(longlong **)(param_1 + 0x70);
          if ((plVar1 == (longlong *)0x0) || (plVar1 != local_4b0)) {
            _invalid_parameter_noinfo();
          }
          if (plVar11 == plVar2) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar1;
          }
          if (*(longlong **)(lVar13 + 0x20) <= plVar11) {
            _invalid_parameter_noinfo();
          }
          lVar13 = *plVar11;
          if (lVar13 != 0) {
            local_88 = cVar14;
            uVar6 = FUN_140dca110(lVar13);
            local_50 = (undefined4)uVar6;
            local_48 = FUN_140dca0e0(lVar13);
            iVar4 = FUN_140dca0f0(lVar13);
            local_44 = (int)local_4e8 == iVar4;
            lVar8 = **(longlong **)(param_1 + 8);
            uVar5 = FUN_140dca0f0(lVar13);
            pcVar7 = (char *)(**(code **)(lVar8 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar5);
            if (pcVar7 != (char *)0x0) {
              strncpy(local_87,pcVar7,0x10);
            }
            lVar8 = FUN_140dca0d0(lVar13);
            if (lVar8 != 0) {
              pcVar7 = (char *)FUN_140dca0d0(lVar13);
              strncpy(local_77,pcVar7,0x24);
            }
            uVar6 = FUN_140dcb2e0(lVar13);
            local_4c = (undefined4)uVar6;
            uVar9 = FUN_140dd1830((longlong)local_498,&local_88);
            if ((char)uVar9 == '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),(ulonglong)local_4e8 & 0xffffffff);
              uVar6 = FUN_140dd1780((longlong)local_498,3,0);
              if ((char)uVar6 == '\0') {
                local_538 = 0x9c6;
                log_InlineLogERROR(&DAT_140dd9588);
                FUN_140dd16c0((undefined8 *)local_498);
                if (local_508 != (undefined4 *)0x0) {
                  operator_delete(local_508);
                }
                local_508 = (undefined4 *)0x0;
                local_500 = (undefined4 *)0x0;
                local_4f8 = 0;
                operator_delete(local_520[0]);
                return;
              }
              FUN_140dd1830((longlong)local_498,&local_88);
            }
            cVar14 = cVar14 + '\x01';
            local_528 = cVar14;
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = lVar12;
          }
          else {
            lVar13 = *plVar1;
          }
          if (*(longlong **)(lVar13 + 0x20) <= plVar11) {
            _invalid_parameter_noinfo();
          }
          plVar11 = plVar11 + 1;
        }
        iVar4 = FUN_140dd19b0((longlong)local_498);
        if (iVar4 < 1) {
          FUN_140dd16c0((undefined8 *)local_498);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x150))(*(longlong **)(param_1 + 8),(ulonglong)local_4e8 & 0xffffffff);
          FUN_140dd16c0((undefined8 *)local_498);
        }
        plVar11 = local_4d8;
        if (local_4d8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = lVar12;
        }
        else {
          lVar13 = *local_4d8;
        }
        plVar1 = local_4f0;
        if (*(undefined4 **)(lVar13 + 0x20) <= local_4f0) {
          _invalid_parameter_noinfo();
        }
        puVar10 = (undefined4 *)((longlong)plVar1 + 4);
        local_4f0 = (longlong *)puVar10;
      }
      FUN_140dd16c0((undefined8 *)local_498);
      if (local_508 != (undefined4 *)0x0) {
        operator_delete(local_508);
      }
      local_508 = (undefined4 *)0x0;
      local_500 = (undefined4 *)0x0;
      local_4f8 = 0;
      operator_delete(local_520[0]);
    }
  }
  return;
}




void FUN_140dbffc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  iVar5 = 1;
  if (*(longlong **)(param_1 + 0x90) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x70))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    if (*plVar3 != 0) {
      FUN_140dca340(*plVar3,iVar5);
      iVar5 = iVar5 + 1;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  }
  return;
}




void FUN_140dc00b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x60);
  plVar1 = *(longlong **)(param_1 + 0x30);
  do {
    while( true ) {
      while( true ) {
        plVar4 = *(longlong **)(param_1 + 0x60);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x30))) {
          _invalid_parameter_noinfo();
        }
        if (plVar3 == plVar4) {
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (plVar3 == *(longlong **)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (plVar3[4] != 0) {
          FUN_140dcb2f0(plVar3[4],param_2,param_3,param_4);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar4 = plVar3;
      plVar2 = (longlong *)plVar3[2];
      if (*(char *)(plVar3[2] + 0x29) != '\0') break;
      do {
        plVar3 = plVar2;
        plVar2 = (longlong *)*plVar3;
      } while (*(char *)(*plVar3 + 0x29) == '\0');
    }
    do {
      plVar3 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
      bVar6 = plVar4 == (longlong *)plVar3[2];
      plVar4 = plVar3;
    } while (bVar6);
  } while( true );
}




longlong FUN_140dc01e0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x60);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x60);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x30))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar3) {
      return 0;
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
    lVar7 = plVar6[4];
    if ((lVar7 != 0) && (iVar5 = FUN_140dca0c0(lVar7), iVar5 == param_2)) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar6 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x29);
        plVar4 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return lVar7;
}




void FUN_140dc0300(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (*(longlong **)(param_1 + 0xf0) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xf0);
    if (plVar2 < *(longlong **)(param_1 + 0xe8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xd0))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    if (*plVar3 != 0) {
      FUN_140db4570(*plVar3);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  }
  log_InlineLogMessage("FlagWar AllFlag[%d] HideFlag[%d] RefreshFail[%d] TouchFlag[%d] SendFlag1[%d] SendFlag2[%d] Score[%d]");
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  return;
}




longlong * FUN_140dc0460(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140dc05bd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dc05ec;
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
      goto LAB_140dc05bd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dbd4a0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dc05ec:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_140dc0610(longlong *param_1,uint *param_2)

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
  
  FUN_140dbb600(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x1d);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x1d);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x1d);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x1d);
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
  FUN_140dbd1e0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_140dc0750(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140dc0820(longlong *param_1,longlong *param_2,longlong *param_3)

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
      bVar7 = *param_3 < plVar6[3];
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
LAB_140dc097d:
    local_30 = plVar4;
    if (*param_3 <= plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dc09ad;
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
      goto LAB_140dc097d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dbd890(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dc09ad:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140dc09d0(longlong *param_1,longlong *param_2,longlong *param_3)

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
      if ((longlong)puVar1[3] < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < (longlong)puVar4[3])) {
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




void FUN_140dc0aa0(longlong *param_1)

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




void FUN_140dc0b60(longlong *param_1)

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




void FUN_140dc0c20(longlong *param_1)

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




void FUN_140dc0ce0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc0d00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dc0d20(undefined8 *param_1)

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




void FUN_140dc0d70(longlong *param_1)

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
  FUN_140dbdf40(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140dc0e70(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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
    lVar3 = FUN_140db9dc0(puVar2,(undefined4 *)param_1[4],param_2[1]);
    param_1[4] = lVar3;
  }
  return param_2;
}




void FUN_140dc0f40(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140dc0fa0(undefined8 *param_1)

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




void FUN_140dc0ff0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140db5880();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db7e30(param_1 + 0x10,uVar8);
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
      FUN_140dbe210(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140dbe210(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db9e60(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dc12a0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140db5910();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db7eb0(param_1 + 0x10,uVar8);
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
      FUN_140dbe250(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140dbe250(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db9ed0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dc1550(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140db59a0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db7f30(param_1 + 0x10,uVar8);
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
      FUN_140dbe290(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140dbe290(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db9f40(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dc1800(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140db5bc0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db7c70(param_1 + 0x10,uVar8);
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
      FUN_140dbe2d0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140dbe2d0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db9fe0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dc1aa0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_140db8e10(param_2,param_3,param_4);
  return;
}




void FUN_140dc1ae0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  FUN_140dbe330(param_1,param_2,param_3);
  return;
}




void FUN_140dc1af0(undefined4 *param_1,longlong param_2)

{
  FUN_140dbe3a0(param_1,param_2);
  return;
}




void FUN_140dc1b00(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar4 = *(longlong **)param_1[0xc];
  lVar8 = 0;
  plVar1 = (longlong *)param_1[6];
  do {
    while( true ) {
      while( true ) {
        plVar5 = (longlong *)param_1[0xc];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[6])) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar5) {
          FUN_140dbaad0((longlong)(param_1 + 6));
          FUN_140dc0aa0(param_1 + 0xe);
          puVar6 = (undefined8 *)param_1[0x17];
          if ((undefined8 *)param_1[0x18] < puVar6) {
            _invalid_parameter_noinfo();
          }
          plVar4 = (longlong *)param_1[0x14];
          while( true ) {
            puVar2 = (undefined8 *)param_1[0x18];
            if (puVar2 < (undefined8 *)param_1[0x17]) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)param_1[0x14])) {
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
            if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
              FUN_140db13e0((undefined8 *)*puVar6);
            }
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = lVar8;
            }
            else {
              lVar7 = *plVar4;
            }
            if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            puVar6 = puVar6 + 1;
          }
          FUN_140dc0b60(param_1 + 0x14);
          puVar6 = (undefined8 *)param_1[0x1d];
          if ((undefined8 *)param_1[0x1e] < puVar6) {
            _invalid_parameter_noinfo();
          }
          plVar4 = (longlong *)param_1[0x1a];
          while( true ) {
            puVar2 = (undefined8 *)param_1[0x1e];
            if (puVar2 < (undefined8 *)param_1[0x1d]) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)param_1[0x1a])) {
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
            if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
              FUN_140db4550((undefined8 *)*puVar6);
            }
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = lVar8;
            }
            else {
              lVar7 = *plVar4;
            }
            if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
              _invalid_parameter_noinfo();
            }
            puVar6 = puVar6 + 1;
          }
          FUN_140dc0c20(param_1 + 0x1a);
          FUN_140dbaa50((longlong)(param_1 + 0x26));
          FUN_140dbaa50((longlong)(param_1 + 0x2e));
          *(undefined4 *)(param_1 + 0x38) = 0;
          *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
          *(undefined4 *)(param_1 + 0x37) = 0;
          *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
          *(undefined4 *)(param_1 + 0x3b) = 0;
          *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
          DAT_140deb580 = 0;
          if (param_1 != (undefined8 *)0x0) {
            (**(code **)*param_1)(param_1,1);
          }
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar8;
        }
        else {
          lVar7 = *plVar1;
        }
        if (plVar4 == *(longlong **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((undefined8 *)plVar4[4] != (undefined8 *)0x0) {
          FUN_140dcea20((undefined8 *)plVar4[4]);
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
      bVar9 = plVar5 == (longlong *)plVar4[2];
      plVar5 = plVar4;
    } while (bVar9);
  } while( true );
}




undefined8 FUN_140dc1ed0(longlong param_1,longlong param_2,uint param_3)

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
  
  lVar9 = (param_2 << 0x20) + (ulonglong)param_3;
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x60))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  while (cVar1 == '\0') {
    if ((longlong)puVar8[3] < lVar9) {
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
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (lVar9 < (longlong)puVar3[3])) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x60);
    local_28 = *(longlong *)(param_1 + 0x30);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x60);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x30))) {
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




undefined8 FUN_140dc1fe0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
  uVar3 = FUN_140dc1ed0(param_1,(ulonglong)uVar2,uVar1);
  return uVar3;
}




void FUN_140dc2080(longlong param_1,uint param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140dc0610((longlong *)(param_1 + 0x130),local_res10);
  return;
}




ulonglong FUN_140dc20a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  ulonglong extraout_RAX_00;
  longlong *plVar3;
  uint local_res10 [6];
  ulonglong local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar2 = extraout_RAX;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))();
    if ((char)uVar2 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
      if ((int)uVar2 != -1) {
        FUN_140dc0750((longlong *)(param_1 + 0x130),(longlong *)&local_28,local_res10);
        lVar1 = *(longlong *)(param_1 + 0x160);
        if ((local_28 == 0) || (local_28 != *(ulonglong *)(param_1 + 0x130))) {
          _invalid_parameter_noinfo();
          local_28 = extraout_RAX_00;
        }
        uVar2 = local_28;
        if (local_20 == lVar1) {
          plVar3 = FUN_140dc0460((longlong *)(param_1 + 0x130),(longlong *)&local_28,local_res10);
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_140dc2170(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint local_res10 [6];
  longlong local_28 [5];
  
  local_res10[0] = param_2;
  plVar1 = FUN_140dc0460((longlong *)(param_1 + 0x170),local_28,local_res10);
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}




undefined8 FUN_140dc21a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  lVar1 = FUN_140dc0610((longlong *)(param_1 + 0x170),local_res10);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




void FUN_140dc21c0(longlong param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    bVar1 = FUN_140dbe8f0(param_1,param_2);
    if (bVar1) {
      lVar3 = FUN_140dc1fe0(param_1,param_2);
      if (lVar3 != 0) {
        lVar4 = FUN_140dbe5d0(param_1,param_3);
        if (lVar4 != 0) {
          iVar2 = FUN_140dca0c0(lVar3);
          FUN_140db3ec0(lVar4,iVar2,param_4);
        }
      }
    }
  }
  return;
}




void FUN_140dc2250(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  CMsg local_418 [1040];
  
  uVar3 = 0xfffffffffffffffe;
  FUN_140dd1670(local_418);
  uVar1 = FUN_140dd17d0((longlong)local_418,1,1,(int)(*(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88) >> 3));
  if ((char)uVar1 == '\0') {
    FUN_140dd16c0((undefined8 *)local_418);
  }
  else {
    uVar2 = FUN_140dbf200(param_1,(longlong)local_418,1);
    if ((char)uVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_418,param_2,uVar3);
    }
    FUN_140dd16c0((undefined8 *)local_418);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dc2310(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  byte bVar11;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte local_a8;
  char local_a7 [16];
  char local_97 [39];
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_58;
  
  local_f8 = 0xfffffffffffffffe;
  local_58 = DAT_140deb538 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_168 = 0x7f0;
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar5 = local_58;
    if ((*(int *)(param_1 + 0x2c) == 0) && (uVar5 = *(longlong *)(param_1 + 0x90) - *(longlong *)(param_1 + 0x88), (uVar5 & 0xfffffffffffffff8) != 0)) {
      lVar6 = FUN_140dc1ed0(param_1,param_2,param_3);
      uVar5 = 0;
      if (lVar6 != 0) {
        bVar11 = 0;
        plVar1 = *(longlong **)(param_1 + 0x90);
        local_148 = 0;
        if (plVar1 < *(longlong **)(param_1 + 0x88)) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        local_148._0_4_ = (undefined4)uVar7;
        local_148._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_140._0_4_ = SUB84(plVar1,0);
        uStack_140._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
        local_b8 = (undefined4)local_148;
        uStack_b4 = local_148._4_4_;
        uStack_b0 = (undefined4)uStack_140;
        uStack_ac = uStack_140._4_4_;
        plVar2 = *(longlong **)(param_1 + 0x88);
        local_138 = 0;
        local_148 = uVar7;
        uStack_140 = plVar1;
        if (*(longlong **)(param_1 + 0x90) < plVar2) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        local_138._0_4_ = (undefined4)uVar7;
        local_138._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_118 = (undefined4)local_138;
        uStack_114 = local_138._4_4_;
        for (plVar10 = plVar2; (plVar10 != plVar1 && (*plVar10 != lVar6)); plVar10 = plVar10 + 1) {
        }
        plVar1 = *(longlong **)(param_1 + 0x90);
        local_108 = 0;
        local_138 = uVar7;
        plStack_130 = plVar2;
        local_128 = plVar10;
        plStack_110 = plVar10;
        local_e8 = uVar7;
        plStack_e0 = plVar10;
        if (plVar1 < *(longlong **)(param_1 + 0x88)) {
          _invalid_parameter_noinfo();
        }
        local_108 = *(longlong *)(param_1 + 0x70);
        lVar9 = CONCAT44(uStack_114,local_118);
        if ((lVar9 == 0) || (lVar9 != local_108)) {
          _invalid_parameter_noinfo();
        }
        if (plVar10 != plVar1) {
          uVar5 = *(ulonglong *)(param_1 + 0x88);
          local_158 = 0;
          if (*(ulonglong *)(param_1 + 0x90) < uVar5) {
            _invalid_parameter_noinfo();
          }
          lVar3 = *(longlong *)(param_1 + 0x70);
          local_158._0_4_ = (undefined4)lVar3;
          local_158._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_150._0_4_ = (undefined4)uVar5;
          uStack_150._4_4_ = (undefined4)(uVar5 >> 0x20);
          local_c8 = (undefined4)local_158;
          uStack_c4 = local_158._4_4_;
          uStack_c0 = (undefined4)uStack_150;
          uStack_bc = uStack_150._4_4_;
          local_158 = lVar3;
          uStack_150 = uVar5;
          local_d8 = uVar7;
          plStack_d0 = plVar10;
          if ((lVar9 == 0) || (lVar9 != lVar3)) {
            _invalid_parameter_noinfo();
          }
          bVar11 = (char)((longlong)((longlong)plVar10 - uVar5) >> 3) + 1;
        }
        if (8 < bVar11) {
          bVar11 = 0;
        }
        local_a8 = bVar11;
        uVar7 = FUN_140dca110(lVar6);
        local_70 = (undefined4)uVar7;
        lVar9 = **(longlong **)(param_1 + 8);
        uVar4 = FUN_140dca0f0(lVar6);
        pcVar8 = (char *)(**(code **)(lVar9 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar4);
        if (pcVar8 != (char *)0x0) {
          strncpy(local_a7,pcVar8,0x10);
        }
        lVar9 = FUN_140dca0d0(lVar6);
        if (lVar9 != 0) {
          pcVar8 = (char *)FUN_140dca0d0(lVar6);
          strncpy(local_97,pcVar8,0x24);
        }
        local_6c = FUN_140dca2a0(lVar6);
        uVar5 = FUN_140dd1830(param_4,&local_a8);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
    }
    else {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
  }
  return uVar5;
}




void FUN_140dc2600(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    FUN_140dd1670(local_418);
    uVar4 = FUN_140dd1780((longlong)local_418,2,0);
    if ((char)uVar4 == '\0') {
      FUN_140dd16c0((undefined8 *)local_418);
    }
    else {
      plVar1 = *(longlong **)(param_1 + 8);
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
      uVar4 = FUN_140dc2310(param_1,(ulonglong)uVar3,uVar2,(longlong)local_418);
      if ((char)uVar4 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_2,local_418);
      }
      FUN_140dd16c0((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_140dc26f0(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    lVar1 = FUN_140dc1ed0(param_1,param_2,param_3);
    if (lVar1 != 0) {
      FUN_140dd1670(local_418);
      uVar2 = FUN_140dd1780((longlong)local_418,2,0);
      if ((char)uVar2 == '\0') {
        FUN_140dd16c0((undefined8 *)local_418);
      }
      else {
        uVar2 = FUN_140dc2310(param_1,param_2 & 0xffffffff,param_3,(longlong)local_418);
        if ((char)uVar2 != '\0') {
          FUN_140dcf9b0(lVar1,local_418);
        }
        FUN_140dd16c0((undefined8 *)local_418);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc27d0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  int local_4a8;
  undefined8 local_4a0;
  CMsg local_498 [1040];
  char local_88 [52];
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_4a0 = 0xfffffffffffffffe;
  local_48 = DAT_140deb538 ^ (ulonglong)auStack_4d8;
  local_4a8 = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_4b8 = 0x84d;
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if ((param_2 != 0) && (0 < param_3)) {
    FUN_140dd1670(local_498);
    lVar6 = *(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118);
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    uVar3 = FUN_140dd17d0((longlong)local_498,4,(char)param_3,(int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f));
    if ((char)uVar3 == '\0') {
      FUN_140dd16c0((undefined8 *)local_498);
    }
    else {
      uVar7 = param_3 * 5 - 5;
      iVar9 = 0;
      do {
        uVar8 = (ulonglong)uVar7;
        if ((ulonglong)((*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118)) / 0xc) <= uVar8) break;
        piVar4 = (int *)FUN_140db4f40(param_1 + 0x100,uVar8);
        lVar6 = FUN_140dc01e0(param_1,*piVar4);
        if (lVar6 != 0) {
          lVar1 = **(longlong **)(param_1 + 8);
          uVar2 = FUN_140dca0f0(lVar6);
          pcVar5 = (char *)(**(code **)(lVar1 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar2);
          if (pcVar5 == (char *)0x0) {
            local_88[0] = '\0';
            local_88[1] = '\0';
            local_88[2] = '\0';
            local_88[3] = '\0';
            local_88[4] = '\0';
            local_88[5] = '\0';
            local_88[6] = '\0';
            local_88[7] = '\0';
            local_88[8] = '\0';
            local_88[9] = '\0';
            local_88[10] = '\0';
            local_88[0xb] = '\0';
            local_88[0xc] = '\0';
            local_88[0xd] = '\0';
            local_88[0xe] = '\0';
            local_88[0xf] = '\0';
          }
          else {
            strncpy(local_88,pcVar5,0x10);
          }
          pcVar5 = (char *)FUN_140dca0d0(lVar6);
          if (pcVar5 == (char *)0x0) {
            local_88[0x10] = '\0';
            local_88[0x11] = '\0';
            local_88[0x12] = '\0';
            local_88[0x13] = '\0';
            local_88[0x14] = '\0';
            local_88[0x15] = '\0';
            local_88[0x16] = '\0';
            local_88[0x17] = '\0';
            local_88[0x18] = '\0';
            local_88[0x19] = '\0';
            local_88[0x1a] = '\0';
            local_88[0x1b] = '\0';
            local_88[0x1c] = '\0';
            local_88[0x1d] = '\0';
            local_88[0x1e] = '\0';
            local_88[0x1f] = '\0';
            local_88[0x20] = '\0';
            local_88[0x21] = '\0';
            local_88[0x22] = '\0';
            local_88[0x23] = '\0';
            local_88[0x24] = '\0';
            local_88[0x25] = '\0';
            local_88[0x26] = '\0';
            local_88[0x27] = '\0';
            local_88[0x28] = '\0';
            local_88[0x29] = '\0';
            local_88[0x2a] = '\0';
            local_88[0x2b] = '\0';
            local_88[0x2c] = '\0';
            local_88[0x2d] = '\0';
            local_88[0x2e] = '\0';
            local_88[0x2f] = '\0';
            local_88[0x30] = '\0';
            local_88[0x31] = '\0';
            local_88[0x32] = '\0';
            local_88[0x33] = '\0';
          }
          else {
            strncpy(local_88 + 0x10,pcVar5,0x24);
          }
          lVar6 = FUN_140db4f40(param_1 + 0x100,uVar8);
          local_54 = *(undefined4 *)(lVar6 + 4);
          lVar6 = FUN_140db4f40(param_1 + 0x100,uVar8);
          local_50 = *(undefined4 *)(lVar6 + 8);
          FUN_140dd18b0((longlong)local_498,local_88);
          iVar9 = iVar9 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (iVar9 < 5);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),local_4a8,local_498);
      FUN_140dd16c0((undefined8 *)local_498);
    }
  }
  return;
}




ulonglong FUN_140dc2a50(longlong param_1,undefined4 param_2,int param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    in_RAX = (**(code **)**(undefined8 **)(param_1 + 8))();
    if ((char)in_RAX != '\0') {
      lVar1 = FUN_140dc1fe0(param_1,param_2);
      in_RAX = 0;
      if (lVar1 != 0) {
        uVar2 = FUN_140dcb070(lVar1,param_2,(longlong)param_3);
        return uVar2;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_140dc2ac0(longlong param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    in_RAX = (**(code **)**(undefined8 **)(param_1 + 8))();
    if ((char)in_RAX != '\0') {
      lVar1 = FUN_140dc1fe0(param_1,param_2);
      in_RAX = 0;
      if (lVar1 != 0) {
        uVar2 = FUN_140dcf560(lVar1,param_2);
        return uVar2;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 * FUN_140dc2b20(undefined8 *param_1,longlong param_2)

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
  lVar2 = FUN_140db9390();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  FUN_140dbd3f0((longlong)param_1,param_2);
  return param_1;
}




void FUN_140dc2bb0(longlong *param_1)

{
  FUN_140dbd7e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc2be0(longlong *param_1)

{
  FUN_140dc0d70(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc2c10(undefined8 *param_1)

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




void FUN_140dc2c50(longlong *param_1)

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
    lVar3 = FUN_140db9dc0(puVar1,(undefined4 *)param_1[4],(longlong)puVar2);
    param_1[4] = lVar3;
  }
  return;
}




undefined8 * FUN_140dc2cf0(undefined8 *param_1)

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
  lVar2 = FUN_140db9390();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dc2d70(undefined8 *param_1)

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
  lVar2 = FUN_140db9bd0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140dc2df0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dc0ff0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dc2ee4;
  }
  _invalid_parameter_noinfo();
LAB_140dc2ee4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140dc2f20(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dc12a0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dc3014;
  }
  _invalid_parameter_noinfo();
LAB_140dc3014:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140dc3050(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dc1550((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dc3144;
  }
  _invalid_parameter_noinfo();
LAB_140dc3144:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140dc3180(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140dc1800((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dc3274;
  }
  _invalid_parameter_noinfo();
LAB_140dc3274:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140dc32b0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x28) - lVar6;
    lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
    uVar7 = (lVar5 >> 1) - (lVar5 >> 0x3f);
  }
  if (param_3 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    lVar6 = ((longlong)puVar3 - lVar6) / 0xc;
    if (0x1555555555555555U - lVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140db5a30();
    }
    uVar1 = lVar6 + param_3;
    if (uVar7 < uVar1) {
      if (0x1555555555555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      puVar3 = (undefined4 *)FUN_140db7fb0(param_1 + 0x10,uVar7);
      lVar6 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18);
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      lVar6 = (lVar6 >> 1) - (lVar6 >> 0x3f);
      FUN_140dba110(puVar3 + lVar6 * 3,param_3,param_4);
      FUN_140db8e10(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_2 + 8),puVar3);
      FUN_140db8e10(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),puVar3 + (lVar6 + param_3) * 3);
      pvVar2 = *(void **)(param_1 + 0x18);
      lVar6 = *(longlong *)(param_1 + 0x20);
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      *(undefined4 **)(param_1 + 0x28) = puVar3 + uVar7 * 3;
      *(undefined4 **)(param_1 + 0x20) = puVar3 + (param_3 + (lVar6 - (longlong)pvVar2) / 0xc) * 3;
      *(undefined4 **)(param_1 + 0x18) = puVar3;
    }
    else if ((ulonglong)(((longlong)puVar3 - *(longlong *)(param_2 + 8)) / 0xc) < param_3) {
      local_38 = *param_4;
      local_34 = param_4[1];
      local_30 = param_4[2];
      FUN_140db8e10(*(undefined4 **)(param_2 + 8),puVar3,*(undefined4 **)(param_2 + 8) + param_3 * 3);
      FUN_140dba110(*(undefined4 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined4 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0xc,&local_38);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0xc;
      lVar6 = *(longlong *)(param_1 + 0x20);
      for (puVar3 = *(undefined4 **)(param_2 + 8); puVar3 != (undefined4 *)(lVar6 + param_3 * -0xc); puVar3 = puVar3 + 3) {
        *puVar3 = local_38;
        puVar3[1] = local_34;
        puVar3[2] = local_30;
      }
    }
    else {
      local_38 = *param_4;
      local_34 = param_4[1];
      local_30 = param_4[2];
      puVar4 = FUN_140db8e10(puVar3 + param_3 * -3,puVar3,puVar3);
      *(undefined4 **)(param_1 + 0x20) = puVar4;
      FUN_140dbbeb0(*(longlong *)(param_2 + 8),(longlong)(puVar3 + param_3 * -3),(longlong)puVar3);
      puVar4 = *(undefined4 **)(param_2 + 8);
      puVar3 = puVar4 + param_3 * 3;
      for (; puVar4 != puVar3; puVar4 = puVar4 + 3) {
        *puVar4 = local_38;
        puVar4[1] = local_34;
        puVar4[2] = local_30;
      }
    }
  }
  return;
}




void FUN_140dc3650(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_140dc3727:
      if (1 < lVar2) {
        FUN_140dba500(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_140dbc350((longlong)param_1,(longlong)param_2,param_4);
        FUN_140dbe330(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_140dc3727;
    }
    FUN_140dbc0e0(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140dc3650(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_140dc3650(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140dc3780(uint *param_1,uint *param_2,longlong param_3,undefined1 param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint *local_18;
  uint *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 / 0xc;
    if (lVar2 < 0x21) {
LAB_140dc38b2:
      if (1 < lVar2) {
        FUN_140dba7f0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        if (1 < ((longlong)param_2 - (longlong)param_1) / 0xc) {
          FUN_140dba730((longlong)param_1,(longlong)param_2);
        }
        FUN_140dbe3a0(param_1,(longlong)param_2);
        return;
      }
      goto LAB_140dc38b2;
    }
    FUN_140dbc3f0(&local_18,param_1,param_2);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    lVar2 = ((longlong)param_2 - (longlong)local_10) / 6 + ((longlong)param_2 - (longlong)local_10 >> 0x3f);
    if (((longlong)local_18 - (longlong)param_1) / 0xc < (lVar2 >> 1) - (lVar2 >> 0x3f)) {
      FUN_140dc3780(param_1,local_18,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_140dc3780(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140dc3940(longlong *param_1)

{
  FUN_140dbd7e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc3970(longlong *param_1)

{
  FUN_140dc0d70(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc39a0(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CFrontierFlagWarMgr::vftable;
  FUN_140dbd7e0(param_1 + 0x2e);
  operator_delete((void *)param_1[0x2e]);
  FUN_140dbd7e0(param_1 + 0x26);
  operator_delete((void *)param_1[0x26]);
  if ((void *)param_1[0x23] != (void *)0x0) {
    operator_delete((void *)param_1[0x23]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  operator_delete((void *)param_1[0x20]);
  if ((void *)param_1[0x1d] != (void *)0x0) {
    operator_delete((void *)param_1[0x1d]);
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  operator_delete((void *)param_1[0x1a]);
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete((void *)param_1[0x17]);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  operator_delete((void *)param_1[0x14]);
  if ((void *)param_1[0x11] != (void *)0x0) {
    operator_delete((void *)param_1[0x11]);
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  operator_delete((void *)param_1[0xe]);
  FUN_140dc0d70(param_1 + 6);
  operator_delete((void *)param_1[6]);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc3af0(ulonglong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_508 [32];
  uint local_4e8;
  ulonglong *local_4e0;
  longlong *local_4d0;
  ulonglong *local_4c8;
  longlong *local_4b8;
  longlong *local_4b0;
  undefined8 local_4a8;
  ulonglong *local_4a0;
  ulonglong *local_490;
  ulonglong *local_480;
  ulonglong *local_470;
  CMsg local_458 [1040];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_4a8 = 0xfffffffffffffffe;
  local_28 = DAT_140deb538 ^ (ulonglong)auStack_508;
  local_4e0 = param_1;
  plVar5 = (longlong *)InstanceGet();
  plVar9 = (longlong *)param_1[0x17];
  uVar12 = 0;
  local_4c8 = (ulonglong *)0x0;
  if ((longlong *)param_1[0x18] < plVar9) {
    _invalid_parameter_noinfo();
  }
  puVar6 = (ulonglong *)param_1[0x14];
  local_4c8 = puVar6;
  while( true ) {
    plVar11 = (longlong *)param_1[0x18];
    local_470 = (ulonglong *)0x0;
    if (plVar11 < (longlong *)param_1[0x17]) {
      _invalid_parameter_noinfo();
    }
    local_470 = (ulonglong *)param_1[0x14];
    if ((puVar6 == (ulonglong *)0x0) || (puVar6 != local_470)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar11) break;
    if (puVar6 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar8 = uVar12;
    }
    else {
      uVar8 = *puVar6;
    }
    if (*(longlong **)(uVar8 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    if (*plVar9 != 0) {
      FUN_140db34f0(*plVar9);
    }
    if (puVar6 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar8 = uVar12;
    }
    else {
      uVar8 = *puVar6;
    }
    if (*(longlong **)(uVar8 + 0x20) <= plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar9 = plVar9 + 1;
  }
  if ((char)param_1[2] == '\0') {
    plVar9 = *(longlong **)param_1[0xc];
    puVar6 = (ulonglong *)param_1[6];
    local_480 = puVar6;
LAB_140dc3c32:
    plVar11 = (longlong *)param_1[0xc];
    local_4a0 = (ulonglong *)param_1[6];
    if ((puVar6 == (ulonglong *)0x0) || (puVar6 != local_4a0)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 != plVar11) {
      if (puVar6 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar8 = uVar12;
      }
      else {
        uVar8 = *puVar6;
      }
      if (plVar9 == *(longlong **)(uVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar1 = (undefined8 *)plVar9[4];
      if (puVar1 != (undefined8 *)0x0) {
        FUN_140dca220((longlong)puVar1);
        FUN_140dcea20(puVar1);
      }
      if (puVar6 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        plVar11 = plVar9;
        plVar3 = (longlong *)plVar9[2];
        if (*(char *)(plVar9[2] + 0x29) == '\0') {
          do {
            plVar9 = plVar3;
            plVar3 = (longlong *)*plVar9;
            local_4d0 = plVar9;
          } while (*(char *)(*plVar9 + 0x29) == '\0');
        }
        else {
          do {
            plVar9 = (longlong *)plVar11[1];
            if (*(char *)((longlong)plVar9 + 0x29) != '\0') break;
            bVar13 = plVar11 == (longlong *)plVar9[2];
            plVar11 = plVar9;
          } while (bVar13);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc3c32;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,"DELETE FROM cq_flag_war where type = 0",0,0);
    FUN_140dbaad0((longlong)(param_1 + 6));
    FUN_140dc0aa0((longlong *)(param_1 + 0xe));
    puVar6 = (ulonglong *)(**(code **)(*plVar5 + 0x10))(plVar5,"SELECT * FROM cq_flag_war_user",2);
    local_4c8 = puVar6;
    if ((puVar6 != (ulonglong *)0x0) && (lVar7 = (**(code **)(*puVar6 + 0x40))(puVar6), lVar7 != 0)) {
      (**(code **)(*puVar6 + 0x30))(puVar6,0);
      local_4e8 = 0;
      while( true ) {
        uVar8 = (**(code **)(*puVar6 + 0x40))(puVar6);
        if (uVar8 <= uVar12) break;
        (**(code **)(*puVar6 + 0x30))(puVar6,uVar12);
        plVar9 = (longlong *)(**(code **)(*puVar6 + 0x38))(puVar6);
        local_4b8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x40))(plVar9,0);
          (**(code **)*plVar9)(plVar9,1);
          local_4b8 = (longlong *)0x0;
        }
        local_4e8 = (int)uVar12 + 1;
        uVar12 = (ulonglong)local_4e8;
      }
    }
    if (puVar6 != (ulonglong *)0x0) {
      (**(code **)*puVar6)(puVar6);
    }
  }
  else {
    plVar9 = *(longlong **)param_1[0xc];
    puVar6 = (ulonglong *)param_1[6];
    local_4e0 = puVar6;
LAB_140dc3e20:
    plVar5 = (longlong *)param_1[0xc];
    local_490 = (ulonglong *)param_1[6];
    if ((puVar6 == (ulonglong *)0x0) || (puVar6 != local_490)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 != plVar5) {
      if (puVar6 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar8 = uVar12;
      }
      else {
        uVar8 = *puVar6;
      }
      if (plVar9 == *(longlong **)(uVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar7 = plVar9[4];
      if (lVar7 != 0) {
        FUN_140dd1280(local_458);
        uVar4 = FUN_140dca0e0(lVar7);
        uVar10 = FUN_140dd1300(local_458,2,uVar4,0);
        if ((char)uVar10 != '\0') {
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_44 = 0x7b;
          local_40 = 10;
          local_48 = 1;
          FUN_140dd1510((longlong)local_458,&local_48);
          lVar2 = *(longlong *)param_1[1];
          uVar4 = FUN_140dca0f0(lVar7);
          (**(code **)(lVar2 + 0x150))(param_1[1],uVar4,local_458);
        }
        FUN_140dd12d0((undefined8 *)local_458);
      }
      if (puVar6 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        plVar5 = plVar9;
        plVar11 = (longlong *)plVar9[2];
        if (*(char *)(plVar9[2] + 0x29) == '\0') {
          do {
            plVar9 = plVar11;
            plVar11 = (longlong *)*plVar9;
            local_4b0 = plVar9;
          } while (*(char *)(*plVar9 + 0x29) == '\0');
        }
        else {
          do {
            plVar9 = (longlong *)plVar5[1];
            if (*(char *)((longlong)plVar9 + 0x29) != '\0') break;
            bVar13 = plVar5 == (longlong *)plVar9[2];
            plVar5 = plVar9;
          } while (bVar13);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc3e20;
    }
  }
  FUN_140dbaa50((longlong)(param_1 + 0x26));
  FUN_140dbaa50((longlong)(param_1 + 0x2e));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  FUN_140dc2c50((longlong *)(param_1 + 0x20));
  return;
}




void FUN_140dc4030(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar1 = FUN_140dc1fe0(param_1,param_2);
    if (lVar1 == 0) {
      log_InlineLogERROR("CFrontierFlagWarMgr::AddMemberMerit. User[%u] Merit[%d]");
    }
    else {
      FUN_140dd0870(lVar1,param_2,param_3);
    }
  }
  return;
}




void FUN_140dc4090(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140dc1ed0(param_1,param_2,param_3);
  if (lVar1 != 0) {
    FUN_140dcebf0(lVar1,(int)param_2,param_4);
  }
  return;
}




undefined4 FUN_140dc40d0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140dc1fe0(param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140dcd590(lVar2,param_2);
  }
  return uVar1;
}




void FUN_140dc4100(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  CMsg local_418 [1040];
  
  lVar2 = FUN_140dc1fe0(param_1,param_2);
  if (lVar2 != 0) {
    FUN_140dc2600(param_1,param_2);
    FUN_140dd0f00(local_418);
    cVar1 = FUN_140dbf5c0(param_1,0,(longlong)local_418,*(char *)(param_1 + 0x1b0) + '\x01');
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_140dd0f50((undefined8 *)local_418);
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 * FUN_140dc4190(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong extraout_RAX;
  undefined1 *puVar9;
  undefined7 extraout_var;
  longlong lVar10;
  longlong *extraout_RAX_00;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  CMsg local_438 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588,"CHECKF","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\frontierflagwar\\src\\frontierflagwarmgr.cpp");
    puVar9 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
  }
  else {
    puVar9 = (undefined1 *)register0x00000020;
    if (((*(int *)(param_1 + 0x2c) == 0) && (puVar9 = (undefined1 *)(**(code **)**(undefined8 **)(param_1 + 8))(), (char)puVar9 != '\0')) &&
       (puVar9 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2), (char)puVar9 != '\0')) {
      bVar3 = FUN_140dbe8f0(param_1,param_2);
      puVar9 = (undefined1 *)CONCAT71(extraout_var,bVar3);
      if ((bVar3) && (puVar9 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2), (char)puVar9 != '\0')) {
        lVar10 = FUN_140dc1fe0(param_1,param_2);
        puVar9 = (undefined1 *)0x0;
        if (lVar10 != 0) {
          iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
          iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
          plVar14 = *(longlong **)(param_1 + 0xb8);
          if (*(longlong **)(param_1 + 0xc0) < plVar14) {
            _invalid_parameter_noinfo();
          }
          plVar1 = *(longlong **)(param_1 + 0xa0);
          while( true ) {
            plVar2 = *(longlong **)(param_1 + 0xc0);
            if (plVar2 < *(longlong **)(param_1 + 0xb8)) {
              _invalid_parameter_noinfo();
            }
            plVar11 = *(longlong **)(param_1 + 0xa0);
            if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar11)) {
              _invalid_parameter_noinfo();
              plVar11 = extraout_RAX_00;
            }
            if (plVar14 == plVar2) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar1;
            }
            if (*(longlong **)(lVar13 + 0x20) <= plVar14) {
              _invalid_parameter_noinfo();
            }
            lVar13 = *plVar14;
            if (lVar13 != 0) {
              iVar7 = FUN_140db1470(lVar13);
              iVar8 = FUN_140dca0c0(lVar10);
              if ((iVar7 == iVar8) && (cVar4 = FUN_140db1490(lVar13,iVar5,iVar6), cVar4 != '\0')) {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
                FUN_140dd1080(local_438);
                uVar12 = FUN_140dd1140((longlong)local_438,1,param_2);
                if ((char)uVar12 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 8) + 0x180))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_438,param_2);
                }
                FUN_140dd0b50(lVar10,param_2,lVar13);
                iVar5 = FUN_140db14c0(lVar13);
                if (iVar5 == 2) {
                  *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
                }
                else {
                  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
                }
                plVar14 = *(longlong **)(param_1 + 8);
                FUN_140db14d0(lVar13);
                uVar12 = (**(code **)(*plVar14 + 0x28))(plVar14,param_2);
                lVar10 = FUN_140dca0d0(lVar10);
                tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"User(%s.%s,%u), send flag to altar(%d) successfully",lVar10,uVar12);
                uVar12 = FUN_140dd10d0((undefined8 *)local_438);
                return (undefined1 *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
              }
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar13 = 0;
            }
            else {
              lVar13 = *plVar1;
            }
            if (*(longlong **)(lVar13 + 0x20) <= plVar14) {
              _invalid_parameter_noinfo();
            }
            plVar14 = plVar14 + 1;
          }
          return (undefined1 *)((ulonglong)plVar11 & 0xffffffffffffff00);
        }
      }
    }
  }
  return puVar9;
}




undefined1 * FUN_140dc4480(longlong param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong extraout_RAX;
  undefined1 *puVar6;
  undefined7 extraout_var;
  longlong lVar7;
  uint7 extraout_var_00;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar6 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
  }
  else {
    puVar6 = (undefined1 *)register0x00000020;
    if (((*(int *)(param_1 + 0x2c) == 0) && (puVar6 = (undefined1 *)(**(code **)**(undefined8 **)(param_1 + 8))(), (char)puVar6 != '\0')) &&
       (puVar6 = (undefined1 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2), (char)puVar6 != '\0')) {
      bVar1 = FUN_140dbe8f0(param_1,param_2);
      puVar6 = (undefined1 *)CONCAT71(extraout_var,bVar1);
      if (bVar1) {
        lVar7 = FUN_140dbe490(param_1,param_3);
        puVar6 = (undefined1 *)0x0;
        if (lVar7 != 0) {
          bVar1 = FUN_140db4570(lVar7);
          if (bVar1) {
            puVar6 = (undefined1 *)((ulonglong)extraout_var_00 << 8);
          }
          else {
            iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
            iVar3 = FUN_140db4100(lVar7);
            uVar9 = iVar2 - iVar3 >> 0x1f;
            iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
            iVar5 = FUN_140db40f0(lVar7);
            uVar10 = iVar4 - iVar5 >> 0x1f;
            if ((int)((iVar2 - iVar3 ^ uVar9) - uVar9) < (int)((iVar4 - iVar5 ^ uVar10) - uVar10)) {
              iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
              iVar3 = FUN_140db40f0(lVar7);
              uVar9 = iVar2 - iVar3 >> 0x1f;
              uVar9 = (iVar2 - iVar3 ^ uVar9) - uVar9;
            }
            else {
              iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
              iVar3 = FUN_140db4100(lVar7);
              uVar9 = iVar2 - iVar3 >> 0x1f;
              uVar9 = (iVar2 - iVar3 ^ uVar9) - uVar9;
            }
            if ((int)uVar9 < 3) {
              FUN_140db41b0(lVar7);
              FUN_140db4620(lVar7);
              *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
              (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2,0x3c);
              FUN_140dd1080(local_418);
              uVar8 = FUN_140dd1140((longlong)local_418,0,param_2);
              if ((char)uVar8 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x180))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_418,param_2,1);
              }
              FUN_140dd1080(local_828);
              uVar8 = FUN_140dd1140((longlong)local_828,2,0x3c);
              if ((char)uVar8 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_2,local_828);
              }
              lVar7 = FUN_140dc1fe0(param_1,param_2);
              if (lVar7 != 0) {
                FUN_140dca150(lVar7,3);
                FUN_140dd0870(lVar7,param_2,3);
              }
              FUN_140dd10d0((undefined8 *)local_828);
              uVar8 = FUN_140dd10d0((undefined8 *)local_418);
              puVar6 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            }
            else {
              puVar6 = (undefined1 *)((ulonglong)(uVar9 >> 8) << 8);
            }
          }
        }
      }
    }
  }
  return puVar6;
}




void FUN_140dc4710(longlong param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if ((((*(int *)(param_1 + 0x2c) == 0) && (cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(), cVar1 != '\0')) &&
           (cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_3), cVar1 != '\0')) &&
          ((bVar2 = FUN_140dbe8f0(param_1,param_2), bVar2 && (bVar2 = FUN_140dbe8f0(param_1,param_3), bVar2)))) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_3);
    if ((iVar3 != 0) && ((iVar4 != 0 && (iVar3 != iVar4)))) {
      if (param_4 < 6) {
        iVar3 = 3;
      }
      else {
        iVar3 = (param_4 < 0x33) + 1;
      }
      FUN_140dc4030(param_1,param_2,iVar3);
    }
  }
  return;
}




undefined8 * FUN_140dc4820(undefined8 *param_1,longlong param_2)

{
  FUN_140dc2b20(param_1,param_2);
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dc4850(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong extraout_RAX;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  IStringManager *pIVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined1 auStackY_a28 [32];
  longlong *local_9d0 [3];
  uint *local_9b8;
  uint *local_9b0;
  undefined8 local_9a8;
  longlong *local_9a0;
  longlong *local_990;
  undefined8 local_980;
  CMsg local_978 [1072];
  CMsg local_548 [1040];
  char local_138 [256];
  ulonglong local_38;
  
  local_980 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStackY_a28;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar8 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    lVar7 = FUN_140dbe5d0(param_1,param_2);
    uVar8 = 0;
    if (lVar7 != 0) {
      iVar5 = FUN_140db1d80(lVar7);
      FUN_140db34f0(lVar7);
      FUN_140db1400(lVar7,iVar5);
      FUN_140dd0f00(local_548);
      uVar6 = FUN_140db14d0(lVar7);
      cVar4 = FUN_140dbf5c0(param_1,1,(longlong)local_548,(char)uVar6 + '\x01');
      if (cVar4 == '\0') {
        uVar8 = FUN_140dd0f50((undefined8 *)local_548);
        uVar8 = uVar8 & 0xffffffffffffff00;
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_548,0);
        lVar9 = FUN_140dc01e0(param_1,iVar5);
        if (lVar9 == 0) {
          pIVar10 = theInstance();
          FUN_140db14d0(lVar7);
          pcVar11 = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_CROSS_FLAG_WAR_OCCUPY_ALTAR_NOSYN");
          _snprintf(local_138,0x100,pcVar11);
          FUN_140dd1bb0(local_978);
          uVar8 = FUN_140dd1c70(local_978,"SYSTEM","ALLUSERS",local_138,(char *)0x0,0xff0000,2000,0,0,1);
          if ((char)uVar8 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_978,0);
          }
          FUN_140db14d0(lVar7);
          tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"None syndicate user kill altar(%d)");
          FUN_140dd1c30((undefined8 *)local_978);
        }
        else {
          pIVar10 = theInstance();
          lVar1 = **(longlong **)(param_1 + 8);
          FUN_140db14d0(lVar7);
          FUN_140dca0d0(lVar9);
          uVar6 = FUN_140dca0f0(lVar9);
          (**(code **)(lVar1 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar6);
          pcVar11 = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_CROSS_FLAG_WAR_OCCUPY_ALTAR");
          _snprintf(local_138,0x100,pcVar11);
          FUN_140dd1bb0(local_978);
          plVar13 = (longlong *)0x0;
          uVar8 = FUN_140dd1c70(local_978,"SYSTEM","ALLUSERS",local_138,(char *)0x0,0xff0000,2000,0,0,1);
          if ((char)uVar8 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_978,0);
          }
          FUN_140db14d0(lVar7);
          FUN_140dca0c0(lVar9);
          FUN_140dca0d0(lVar9);
          tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"%s(%u) occupy altar(%d)");
          local_9a0 = operator_new(8);
          local_9d0[0] = plVar13;
          if (local_9a0 != (longlong *)0x0) {
            *local_9a0 = (longlong)local_9d0;
            local_9d0[0] = local_9a0;
          }
          local_9b8 = (uint *)0x0;
          local_9b0 = (uint *)0x0;
          local_9a8 = 0;
          local_990 = local_9a0;
          FUN_140dcfbb0(lVar9,lVar7,(longlong *)local_9d0);
          puVar14 = local_9b8;
          local_9a0 = (longlong *)0x0;
          if (local_9b0 < local_9b8) {
            _invalid_parameter_noinfo();
          }
          plVar2 = local_9d0[0];
          local_9a0 = local_9d0[0];
          while( true ) {
            puVar3 = local_9b0;
            local_990 = (longlong *)0x0;
            if (local_9b0 < local_9b8) {
              _invalid_parameter_noinfo();
            }
            local_990 = local_9d0[0];
            if ((plVar2 == (longlong *)0x0) || (plVar2 != local_9d0[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar14 == puVar3) break;
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar15 = plVar13;
            }
            else {
              plVar15 = (longlong *)*plVar2;
            }
            if ((uint *)plVar15[4] <= puVar14) {
              _invalid_parameter_noinfo();
            }
            FUN_140dc4190(param_1,*puVar14);
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              plVar15 = plVar13;
            }
            else {
              plVar15 = (longlong *)*plVar2;
            }
            if ((uint *)plVar15[4] <= puVar14) {
              _invalid_parameter_noinfo();
            }
            puVar14 = puVar14 + 1;
          }
          if (local_9b8 != (uint *)0x0) {
            operator_delete(local_9b8);
          }
          local_9b8 = (uint *)0x0;
          local_9b0 = (uint *)0x0;
          local_9a8 = 0;
          operator_delete(local_9d0[0]);
          FUN_140dd1c30((undefined8 *)local_978);
        }
        uVar12 = FUN_140dd0f50((undefined8 *)local_548);
        uVar8 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      }
    }
  }
  else {
    uVar8 = local_38 & 0xffffffffffffff00;
  }
  return uVar8;
}




undefined8 * FUN_140dc4d30(undefined8 *param_1)

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
  lVar2 = FUN_140db9390();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dc4db0(undefined8 *param_1)

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
  lVar2 = FUN_140db9bd0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dc4e30(longlong *param_1,undefined8 *param_2)

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
  FUN_140dc2df0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140dc4ee0(longlong *param_1,undefined8 *param_2)

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
  FUN_140dc2f20(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140dc4f90(longlong *param_1,undefined8 *param_2)

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
  FUN_140dc3050(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140dc5040(longlong *param_1,undefined4 *param_2)

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
  FUN_140dc3180(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_140dc50f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  if (lVar6 / 0xc + lVar3 != lVar3) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar1) / 6 + ((longlong)(param_3[1] - uVar1) >> 0x3f);
    lVar5 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140dc32b0((longlong)param_1,(longlong)&local_28,1,param_4);
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
  uVar1 = uVar1 + lVar5 * 0xc;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140dc5212;
  }
  _invalid_parameter_noinfo();
LAB_140dc5212:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140dc5250(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140dc3650((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_140dc52b0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140dc3780((uint *)param_1[1],(uint *)param_2[1],(param_2[1] - param_1[1]) / 0xc,param_3);
  return;
}




undefined8 * FUN_140dc5320(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = frontier_flag_war::CFrontierFlagWarMgr::vftable;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = (undefined8 *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1c20;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0x809;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  FUN_140dc4db0(param_1 + 6);
  plVar1 = param_1 + 0xe;
  puVar2 = operator_new(8);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar1;
    puVar3 = puVar2;
  }
  *plVar1 = (longlong)puVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar2 = operator_new(8);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1 + 0x14;
    puVar3 = puVar2;
  }
  param_1[0x14] = puVar3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = operator_new(8);
  puVar3 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_1 + 0x1a;
    puVar3 = puVar2;
  }
  param_1[0x1a] = puVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar3 = operator_new(8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_1 + 0x20;
    puVar4 = puVar3;
  }
  param_1[0x20] = puVar4;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_140dc4d30(param_1 + 0x26);
  FUN_140dc4d30(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  FUN_140dbaad0((longlong)(param_1 + 6));
  FUN_140dc0aa0(plVar1);
  FUN_140dbaa50((longlong)(param_1 + 0x26));
  FUN_140dbaa50((longlong)(param_1 + 0x2e));
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  return param_1;
}




undefined8 * FUN_140dc5580(undefined8 *param_1,uint param_2)

{
  FUN_140dc39a0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140dc55b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong extraout_RAX;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  ulonglong extraout_RAX_00;
  undefined8 *local_res18;
  longlong *local_res20;
  uint local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_60 = 0xfffffffffffffffe;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))();
  if (cVar2 == '\0') {
    log_InlineLogERROR("CFrontierFlagWarMgr::Create. Not Frontier Server");
    uVar13 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar3 = _time32((__time32_t *)0x0);
    srand(uVar3);
    plVar9 = (longlong *)InstanceGet();
    plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 400))(*(longlong **)(param_1 + 8),0x186a1);
    if ((plVar10 == (longlong *)0x0) || (lVar11 = (**(code **)(*plVar10 + 0x40))(plVar10), lVar11 != 1)) {
      if (plVar10 != (longlong *)0x0) {
        (**(code **)*plVar10)(plVar10);
      }
      log_InlineLogERROR(&DAT_140ddc390);
      uVar13 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,2);
      iVar4 = (**(code **)(*plVar12 + 0x48))(plVar12);
      *(int *)(param_1 + 0x1c) = iVar4 % 100;
      *(int *)(param_1 + 0x18) = (iVar4 / 100) % 100;
      *(int *)(param_1 + 0x14) = (iVar4 / 10000) % 100;
      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,3);
      iVar4 = (**(code **)(*plVar12 + 0x48))(plVar12);
      if (-1 < iVar4) {
        *(int *)(param_1 + 0x20) = iVar4 * 0x3c;
      }
      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,4);
      iVar4 = (**(code **)(*plVar12 + 0x48))(plVar12);
      if (iVar4 == 1) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      (**(code **)*plVar10)(plVar10);
      DAT_140deb580 = param_1;
      iVar4 = tq::DateStamp(0);
      plVar10 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,"SELECT * FROM cq_flag_war where type = 0",2);
      uVar22 = 0;
      local_res20 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        lVar11 = (**(code **)(*plVar10 + 0x40))(plVar10);
        uVar22 = 0;
        if (lVar11 != 0) {
          uVar3 = 0;
          while( true ) {
            uVar13 = (**(code **)(*plVar10 + 0x40))(plVar10);
            if (uVar13 <= uVar3) break;
            (**(code **)(*plVar10 + 0x30))(plVar10,(ulonglong)uVar3);
            plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,9);
            iVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
            if (iVar4 == iVar5) {
              *(undefined1 *)(param_1 + 0x10) = 1;
              break;
            }
            uVar3 = uVar3 + 1;
          }
          local_e8 = 0;
          while( true ) {
            uVar13 = (**(code **)(*plVar10 + 0x40))(plVar10);
            if (uVar13 <= local_e8) break;
            (**(code **)(*plVar10 + 0x30))(plVar10,(ulonglong)local_e8);
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x38))(plVar10);
            if (plVar10 != (longlong *)0x0) {
              if (*(char *)(param_1 + 0x10) != '\0') {
                plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,9);
                iVar5 = (**(code **)(*plVar12 + 0x48))(plVar12);
                if (iVar4 != iVar5) {
                  plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,9);
                  plVar14 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,8);
                  plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,7);
                  plVar16 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,6);
                  plVar17 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
                  plVar18 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
                  plVar19 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,1);
                  plVar20 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
                  (**(code **)(*plVar12 + 0x40))(plVar12);
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                  (**(code **)(*plVar15 + 0x40))(plVar15);
                  (**(code **)(*plVar16 + 0x40))(plVar16);
                  (**(code **)(*plVar17 + 0x40))(plVar17);
                  (**(code **)(*plVar18 + 0x40))(plVar18);
                  (**(code **)(*plVar19 + 0x40))(plVar19);
                  (**(code **)(*plVar20 + 0x40))(plVar20);
                  log_InlineLogERROR(&DAT_140ddc460);
                  (**(code **)(*plVar10 + 0x40))(plVar10,0);
                  (**(code **)*plVar10)(plVar10,1);
                  goto LAB_140dc5bb4;
                }
              }
              puVar21 = FUN_140dd0600(plVar10);
              local_res18 = puVar21;
              if (puVar21 != (undefined8 *)0x0) {
                uVar6 = FUN_140dca0f0((longlong)puVar21);
                uVar7 = FUN_140dca0e0((longlong)puVar21);
                local_98[0] = CONCAT44(uVar6,uVar7);
                FUN_140dc09d0((longlong *)(param_1 + 0x30),(longlong *)&local_88,local_98);
                lVar11 = *(longlong *)(param_1 + 0x60);
                if ((CONCAT44(uStack_84,local_88) == 0) || (CONCAT44(uStack_84,local_88) != *(longlong *)(param_1 + 0x30))) {
                  _invalid_parameter_noinfo();
                }
                if (CONCAT44(uStack_7c,uStack_80) == lVar11) {
                  local_70 = CONCAT44(uVar6,uVar7);
                  local_68 = puVar21;
                  FUN_140dc0820((longlong *)(param_1 + 0x30),(longlong *)&local_58,&local_70);
                  uVar22 = FUN_140dca110((longlong)puVar21);
                  if (0 < (int)uVar22) {
                    FUN_140dc4e30((longlong *)(param_1 + 0x70),&local_res18);
                  }
                }
                else {
                  plVar12 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,9);
                  plVar14 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,8);
                  plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,7);
                  plVar16 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,6);
                  plVar17 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
                  plVar18 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
                  plVar19 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,1);
                  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
                  (**(code **)(*plVar12 + 0x40))(plVar12);
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                  (**(code **)(*plVar15 + 0x40))(plVar15);
                  (**(code **)(*plVar16 + 0x40))(plVar16);
                  (**(code **)(*plVar17 + 0x40))(plVar17);
                  (**(code **)(*plVar18 + 0x40))(plVar18);
                  (**(code **)(*plVar19 + 0x40))(plVar19);
                  (**(code **)(*plVar10 + 0x40))(plVar10);
                  log_InlineLogERROR(&DAT_140ddc3e0);
                  FUN_140dcea20(local_res18);
                  local_res18 = (undefined8 *)0x0;
                }
              }
            }
LAB_140dc5bb4:
            local_e8 = local_e8 + 1;
            plVar10 = local_res20;
          }
          plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,"SELECT * FROM cq_flag_war_user",2);
          if (plVar9 != (longlong *)0x0) {
            local_78 = 0;
            while (uVar13 = local_78, uVar23 = (**(code **)(*plVar9 + 0x40))(plVar9), uVar13 < uVar23) {
              (**(code **)(*plVar9 + 0x30))(plVar9,uVar13);
              plVar12 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
              if (plVar12 != (longlong *)0x0) {
                plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,1);
                iVar5 = (**(code **)(*plVar14 + 0x48))(plVar14);
                if (iVar5 == iVar4) {
                  *(undefined1 *)(param_1 + 0x10) = 1;
                  plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,2);
                  uVar3 = (**(code **)(*plVar14 + 0x40))(plVar14);
                  plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,3);
                  uVar8 = (**(code **)(*plVar14 + 0x40))(plVar14);
                  plVar14 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,4);
                  uVar6 = (**(code **)(*plVar14 + 0x40))(plVar14);
                  local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,uVar6);
                  if (uVar8 == 0) {
                    (**(code **)(*plVar12 + 0x40))(plVar12,0);
                  }
                  else {
                    lVar11 = FUN_140dc1ed0(param_1,(ulonglong)uVar3,uVar8);
                    if (lVar11 != 0) {
                      FUN_140dd06d0(lVar11,(uint)local_res18,plVar12);
                      goto LAB_140dc5d0b;
                    }
                  }
                }
                (**(code **)*plVar12)(plVar12,1);
              }
LAB_140dc5d0b:
              local_78 = uVar13 + 1;
            }
            (**(code **)*plVar9)(plVar9);
          }
          plVar9 = *(longlong **)(param_1 + 0x90);
          if (plVar9 < *(longlong **)(param_1 + 0x88)) {
            _invalid_parameter_noinfo();
          }
          lVar11 = *(longlong *)(param_1 + 0x70);
          local_b8 = (undefined4)lVar11;
          uStack_b4 = (undefined4)((ulonglong)lVar11 >> 0x20);
          uStack_b0 = SUB84(plVar9,0);
          uStack_ac = (undefined4)((ulonglong)plVar9 >> 0x20);
          local_88 = local_b8;
          uStack_84 = uStack_b4;
          uStack_80 = uStack_b0;
          uStack_7c = uStack_ac;
          plVar12 = *(longlong **)(param_1 + 0x88);
          if (*(longlong **)(param_1 + 0x90) < plVar12) {
            _invalid_parameter_noinfo();
          }
          lVar1 = *(longlong *)(param_1 + 0x70);
          local_d8 = (undefined4)lVar1;
          uStack_d4 = (undefined4)((ulonglong)lVar1 >> 0x20);
          uStack_d0 = SUB84(plVar12,0);
          uStack_cc = (undefined4)((ulonglong)plVar12 >> 0x20);
          local_58 = local_d8;
          uStack_54 = uStack_d4;
          uStack_50 = uStack_d0;
          uStack_4c = uStack_cc;
          if ((lVar11 == 0) || (lVar11 != lVar1)) {
            _invalid_parameter_noinfo();
          }
          uVar22 = FUN_140dc3650(plVar12,plVar9,(longlong)plVar9 - (longlong)plVar12 >> 3,0);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        uVar22 = (**(code **)*plVar10)(plVar10);
      }
      uVar13 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
    }
  }
  return uVar13;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140dc5e40(longlong param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  uint extraout_EAX;
  uint uVar3;
  uint extraout_EAX_00;
  int iVar4;
  undefined4 uVar5;
  uint extraout_EAX_01;
  undefined4 uVar6;
  int extraout_var;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_8d8 [32];
  longlong local_8b8;
  undefined4 local_8b0;
  undefined8 local_8a8;
  undefined8 *local_898;
  longlong local_890;
  undefined8 *local_888;
  undefined8 local_880;
  CMsg local_878 [1040];
  CMsg local_468 [1040];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_880 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_8d8;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_8b8 = CONCAT44(local_8b8._4_4_,0x25f);
    log_InlineLogERROR(&DAT_140dd9588);
    uVar3 = extraout_EAX & 0xffffff00;
  }
  else if (param_2 == 0) {
    local_8b8 = CONCAT44(local_8b8._4_4_,0x260);
    log_InlineLogERROR(&DAT_140dd9588);
    uVar3 = extraout_EAX_00 & 0xffffff00;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    bVar2 = FUN_140dbe8f0(param_1,param_2);
    if (bVar2) {
      uVar3 = extraout_var << 8;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
      if (iVar4 != 2) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,2);
      }
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2);
      uVar3 = 0;
      if (iVar4 != 0) {
        puVar7 = (undefined8 *)FUN_140dc1fe0(param_1,param_2);
        local_898 = puVar7;
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = FUN_140dd0360(iVar4,*(longlong **)(param_1 + 8));
          local_898 = puVar7;
          if (puVar7 == (undefined8 *)0x0) {
            uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),iVar4);
            (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),iVar4);
            local_8b8 = CONCAT44(local_8b8._4_4_,uVar5);
            log_InlineLogERROR("CFrontierFlagWarMgr::OnEnterBattle. pSynInfo == NULL, User[%u] Syndicate: %s[%u][%u]");
            return extraout_EAX_01 & 0xffffff00;
          }
          uVar5 = FUN_140dca0f0((longlong)puVar7);
          uVar6 = FUN_140dca0e0((longlong)puVar7);
          local_890 = CONCAT44(uVar5,uVar6);
          local_888 = puVar7;
          FUN_140dc0820((longlong *)(param_1 + 0x30),&local_58,&local_890);
          FUN_140dd1280(local_878);
          uVar5 = FUN_140dca0e0((longlong)puVar7);
          uVar8 = FUN_140dd1300(local_878,2,uVar5,0);
          if ((char)uVar8 != '\0') {
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_58._4_4_ = 0x7b;
            local_50 = 10;
            local_58._0_4_ = 1;
            FUN_140dd1510((longlong)local_878,(undefined4 *)&local_58);
            lVar9 = **(longlong **)(param_1 + 8);
            uVar5 = FUN_140dca0f0((longlong)puVar7);
            (**(code **)(lVar9 + 0x150))(*(undefined8 *)(param_1 + 8),uVar5,local_878);
          }
          FUN_140dd12d0((undefined8 *)local_878);
        }
        else {
          bVar2 = FUN_140dca410((longlong)puVar7);
          if (bVar2) {
            FUN_140dca3b0((longlong)puVar7,iVar4);
          }
        }
        FUN_140dcf070((longlong)puVar7,param_2);
        (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2);
        FUN_140dc2170(param_1,param_2);
        FUN_140dd0cc0(local_468);
        uVar8 = FUN_140dd0d80((longlong)local_468,0,*(int *)(param_1 + 0x2c) == 0);
        if ((char)uVar8 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_2,local_468);
        }
        FUN_140dcf560((longlong)puVar7,param_2);
        FUN_140dc4100(param_1,param_2);
        plVar1 = *(longlong **)(param_1 + 8);
        lVar9 = *plVar1;
        uVar5 = FUN_140dca0f0((longlong)puVar7);
        uVar8 = (**(code **)(lVar9 + 0xd8))(*(undefined8 *)(param_1 + 8),uVar5);
        uVar5 = FUN_140dca0e0((longlong)puVar7);
        lVar9 = FUN_140dca0d0((longlong)puVar7);
        (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
        local_8b8 = lVar9;
        local_8b0 = uVar5;
        local_8a8 = uVar8;
        tq::GmLogSave(PTR_s_frontierflagwar_140deb128,"OnEnterBattle: user: %s(%u),syndicate: %s(%u), server:%s");
        uVar8 = FUN_140dd0d10((undefined8 *)local_468);
        uVar3 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
    }
  }
  else {
    uVar3 = (uint)local_38 & 0xffffff00;
  }
  return uVar3;
}




void * FUN_140dc61f0(longlong param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong extraout_RAX;
  undefined1 *puVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    register0x00000020 = (BADSPACEBASE *)(extraout_RAX & 0xffffffffffffff00);
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if (((param_3 != 0) && (0 < param_4)) && (bVar1 = FUN_140dbe8f0(param_1,param_3), bVar1)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_3);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_3);
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_3,param_4);
      puVar3 = FUN_140dc4190(param_1,param_3);
      if ((char)puVar3 == '\0') {
        FUN_140dd1080(local_418);
        uVar4 = FUN_140dd1140((longlong)local_418,2,param_4);
        if ((char)uVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),param_3,local_418);
        }
        FUN_140dd10d0((undefined8 *)local_418);
      }
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return register0x00000020;
}




ulonglong FUN_140dc6500(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 extraout_RAX_01;
  ulonglong extraout_RAX_02;
  uint uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_res10;
  longlong *local_res18;
  undefined4 local_res20 [2];
  longlong *local_98 [3];
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong *local_50;
  longlong *local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_64 = 0;
  plVar8 = (longlong *)0x0;
  plVar4 = plVar8;
  while (uVar3 = (uint)plVar4, uVar3 < 3) {
    local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
    local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
    local_res20[0] = 0;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(&DAT_140dd9bf0 + (longlong)(int)uVar3 * 4),0x2e,local_res20,&local_res18,&local_res10);
    if (cVar2 == '\0') {
      log_InlineLogDBERROR("CFrontierFlagWarMgr::InitNPC(), table:cq_dynanpc. TarNpc[%u] not found.");
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    local_58 = FUN_140db39e0(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_res20[0],local_res18._0_4_,local_res10._0_4_,uVar3);
    if (local_58 == (undefined8 *)0x0) {
      log_InlineLogERROR("CFrontierFlagWarMgr::InitNPC, failed in initializing altar npc: %u");
      return extraout_RAX & 0xffffffffffffff00;
    }
    FUN_140dc4ee0((longlong *)(param_1 + 0xa0),&local_58);
    local_64 = uVar3 + 1;
    plVar4 = (longlong *)(ulonglong)local_64;
  }
  local_res10 = operator_new(8);
  local_98[0] = plVar8;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_98;
    local_98[0] = local_res10;
  }
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = 0;
  local_res18 = local_res10;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),0x2f);
  puVar5 = local_80;
  if ((cVar2 == '\0') || (((longlong)local_78 - (longlong)local_80 & 0xfffffffffffffffcU) == 0)) {
    log_InlineLogERROR("CFrontierFlagWarMgr::InitNPC, failed in get flag npc");
    if (local_80 != (undefined4 *)0x0) {
      operator_delete(local_80);
    }
    local_80 = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_70 = 0;
    operator_delete(local_98[0]);
    return extraout_RAX_02 & 0xffffffffffffff00;
  }
  local_68 = 0;
  local_50 = (longlong *)0x0;
  if (local_78 < local_80) {
    _invalid_parameter_noinfo();
  }
  plVar4 = local_98[0];
  local_50 = local_98[0];
  plVar7 = plVar8;
  do {
    puVar1 = local_78;
    local_40 = (longlong *)0x0;
    if (local_78 < local_80) {
      _invalid_parameter_noinfo();
    }
    local_40 = local_98[0];
    if ((plVar4 == (longlong *)0x0) || (plVar4 != local_98[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar5 == puVar1) goto LAB_140dc67e9;
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar6 = plVar8;
    }
    else {
      plVar6 = (longlong *)*plVar4;
    }
    if ((undefined4 *)plVar6[4] <= puVar5) {
      _invalid_parameter_noinfo();
    }
    local_60 = FUN_140db4490(*puVar5,*(undefined4 *)(param_1 + 0x28),0,0);
    if (local_60 == (undefined8 *)0x0) {
      log_InlineLogERROR("CFrontierFlagWarMgr::InitNPC, failed in init flag npc %u");
    }
    else {
      FUN_140db41b0((longlong)local_60);
      FUN_140dc4f90((longlong *)(param_1 + 0xd0),&local_60);
      local_68 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)local_68;
      if (99 < (int)local_68) {
        log_InlineLogERROR("CFrontierFlagWarMgr::InitNPC, flag count(%d) over %d");
LAB_140dc67e9:
        log_InlineLogMessage("CFrontierFlagWarMgr::InitNPC, total flag count: %d");
        if (local_80 != (undefined4 *)0x0) {
          operator_delete(local_80);
        }
        local_80 = (undefined4 *)0x0;
        local_78 = (undefined4 *)0x0;
        local_70 = 0;
        operator_delete(local_98[0]);
        return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
      }
    }
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar6 = plVar8;
    }
    else {
      plVar6 = (longlong *)*plVar4;
    }
    if ((undefined4 *)plVar6[4] <= puVar5) {
      _invalid_parameter_noinfo();
    }
    puVar5 = puVar5 + 1;
  } while( true );
}




void FUN_140dc6890(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_e8;
  undefined4 *puStack_e0;
  longlong *local_d8 [3];
  undefined4 *local_c0;
  undefined4 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 *puStack_a0;
  longlong *local_98 [6];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [3];
  
  local_58 = 0xfffffffffffffffe;
  local_res10 = operator_new(8);
  if (local_res10 == (longlong *)0x0) {
    local_d8[0] = (longlong *)0x0;
  }
  else {
    *local_res10 = (longlong)local_d8;
    local_d8[0] = local_res10;
  }
  local_c0 = (undefined4 *)0x0;
  local_b8 = (undefined4 *)0x0;
  local_b0 = 0;
  local_res18 = local_res10;
  FUN_140dc2b20(local_98,param_1 + 0x170);
  plVar3 = local_98[0];
  puVar11 = (undefined8 *)*local_68;
  do {
    puVar2 = local_68;
    if ((plVar3 == (longlong *)0x0) || (plVar3 != local_98[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar11 == puVar2) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),local_d8);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 8);
      cVar8 = *(char *)((longlong)plVar3 + 0x1d);
      while (cVar8 == '\0') {
        FUN_140db9080(param_1 + 0x170,(longlong *)plVar3[2]);
        plVar4 = (longlong *)*plVar3;
        operator_delete(plVar3);
        plVar3 = plVar4;
        cVar8 = *(char *)((longlong)plVar4 + 0x1d);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 8) = *(longlong *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)*(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x1a0);
      *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x10) = *(longlong *)(param_1 + 0x1a0);
      puStack_a0 = (undefined4 *)*local_68;
      FUN_140dbd1e0((longlong *)local_98,local_50,(longlong *)&local_a8,(longlong *)&local_e8);
      operator_delete(local_68);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      operator_delete(local_98[0]);
      if (local_c0 != (undefined4 *)0x0) {
        operator_delete(local_c0);
      }
      local_c0 = (undefined4 *)0x0;
      local_b8 = (undefined4 *)0x0;
      local_b0 = 0;
      operator_delete(local_d8[0]);
      return;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar3;
    }
    if (puVar11 == *(undefined8 **)(lVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar1 = *(undefined4 *)(puVar11 + 3);
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar1);
    cVar8 = (**(code **)**(undefined8 **)(param_1 + 8))();
    puVar6 = local_b8;
    if (cVar8 != '\0') {
      if (local_c0 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = local_b0 - (longlong)local_c0 >> 2;
      }
      if ((ulonglong)((longlong)local_b8 - (longlong)local_c0 >> 2) < uVar10) {
        *local_b8 = uVar1;
        local_b8 = local_b8 + 1;
      }
      else {
        if (local_b8 < local_c0) {
          _invalid_parameter_noinfo();
        }
        puVar5 = local_c0;
        plVar4 = local_d8[0];
        local_e8 = local_d8[0];
        puStack_e0 = puVar6;
        if (((longlong)local_b8 - (longlong)local_c0 & 0xfffffffffffffffcU) == 0) {
          lVar12 = 0;
        }
        else {
          if (local_b8 < local_c0) {
            _invalid_parameter_noinfo();
          }
          if ((plVar4 == (longlong *)0x0) || (plVar4 != local_d8[0])) {
            _invalid_parameter_noinfo();
          }
          lVar12 = (longlong)puVar6 - (longlong)puVar5 >> 2;
        }
        local_a8 = local_e8;
        puStack_a0 = puStack_e0;
        FUN_140dc1800((longlong)local_d8,(longlong)&local_a8,1,(undefined4 *)&local_res10);
        puVar6 = local_c0;
        if (local_b8 < local_c0) {
          _invalid_parameter_noinfo();
        }
        plVar4 = local_d8[0];
        if (local_d8[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *local_d8[0];
        }
        if (puVar6 + lVar12 <= *(undefined4 **)(lVar9 + 0x20)) {
          if (plVar4 == (longlong *)0x0) {
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar4;
          }
          if (*(undefined4 **)(lVar9 + 0x18) <= puVar6 + lVar12) goto LAB_140dc6aaa;
        }
        _invalid_parameter_noinfo();
      }
LAB_140dc6aaa:
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),uVar1);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar11 + 0x1d) == '\0') {
      puVar2 = (undefined8 *)puVar11[2];
      if (*(char *)((longlong)puVar2 + 0x1d) == '\0') {
        cVar8 = *(char *)((longlong)*puVar2 + 0x1d);
        puVar11 = puVar2;
        puVar2 = (undefined8 *)*puVar2;
        while (cVar8 == '\0') {
          cVar8 = *(char *)((longlong)*puVar2 + 0x1d);
          puVar11 = puVar2;
          puVar2 = (undefined8 *)*puVar2;
        }
      }
      else {
        cVar8 = *(char *)((longlong)puVar11[1] + 0x1d);
        puVar7 = (undefined8 *)puVar11[1];
        puVar2 = puVar11;
        while ((puVar11 = puVar7, cVar8 == '\0' && (puVar2 == (undefined8 *)puVar11[2]))) {
          cVar8 = *(char *)((longlong)puVar11[1] + 0x1d);
          puVar7 = (undefined8 *)puVar11[1];
          puVar2 = puVar11;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_140dc6c90(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong *local_res20;
  longlong *local_b8;
  longlong *local_b0 [3];
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  longlong *local_50;
  longlong *local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    local_res20 = operator_new(8);
    if (local_res20 == (longlong *)0x0) {
      local_b0[0] = (longlong *)0x0;
    }
    else {
      *local_res20 = (longlong)local_b0;
      local_b0[0] = local_res20;
    }
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88 = 0;
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x1a0);
    plVar2 = *(longlong **)(param_1 + 0x170);
    local_b8 = local_res20;
    local_70 = plVar2;
LAB_140dc6d60:
    plVar8 = *(longlong **)(param_1 + 0x1a0);
    local_40 = *(longlong **)(param_1 + 0x170);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != local_40)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar8) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar2;
      }
      if (plVar7 == *(longlong **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar1 = (undefined4)plVar7[3];
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar1);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),uVar1);
      iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),uVar1);
      cVar4 = FUN_140db1490(param_2,iVar5,iVar6);
      if (cVar4 != '\0') {
        FUN_140dc5040((longlong *)local_b0,(undefined4 *)&local_res20);
      }
      if (plVar2 == (longlong *)0x0) {
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
            bVar10 = plVar8 == (longlong *)plVar7[2];
            plVar8 = plVar7;
          } while (bVar10);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc6d60;
    }
    plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x160);
    plVar2 = *(longlong **)(param_1 + 0x130);
    local_60 = plVar2;
LAB_140dc6e90:
    plVar8 = *(longlong **)(param_1 + 0x160);
    local_50 = *(longlong **)(param_1 + 0x130);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != local_50)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar8) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar2;
      }
      if (plVar7 == *(longlong **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar1 = (undefined4)plVar7[3];
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar1);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),uVar1);
      iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),uVar1);
      cVar4 = FUN_140db1490(param_2,iVar5,iVar6);
      if (cVar4 != '\0') {
        FUN_140dc5040((longlong *)local_b0,(undefined4 *)&local_b8);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x1d) == '\0') {
        plVar8 = plVar7;
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)(plVar7[2] + 0x1d) == '\0') {
          do {
            plVar7 = plVar3;
            plVar3 = (longlong *)*plVar7;
            local_78 = plVar7;
          } while (*(char *)(*plVar7 + 0x1d) == '\0');
        }
        else {
          do {
            plVar7 = (longlong *)plVar8[1];
            if (*(char *)((longlong)plVar7 + 0x1d) != '\0') break;
            bVar10 = plVar8 == (longlong *)plVar7[2];
            plVar8 = plVar7;
          } while (bVar10);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc6e90;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),local_b0,param_3);
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




void FUN_140dc7000(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  CMsg local_418 [1040];
  
  plVar5 = *(longlong **)(param_1 + 0xb8);
  if (*(longlong **)(param_1 + 0xc0) < plVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 < *(longlong **)(param_1 + 0xb8)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xa0))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    lVar6 = *plVar5;
    if (lVar6 != 0) {
      FUN_140dd1670(local_418);
      uVar3 = FUN_140db1480(lVar6);
      uVar4 = FUN_140dd1780((longlong)local_418,0,uVar3);
      if ((char)uVar4 != '\0') {
        uVar4 = FUN_140db2f20(lVar6,(longlong)local_418);
        if ((char)uVar4 != '\0') {
          FUN_140dc6c90(param_1,lVar6,local_418);
        }
      }
      FUN_140dd16c0((undefined8 *)local_418);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar5) {
      _invalid_parameter_noinfo();
    }
    plVar5 = plVar5 + 1;
  }
  return;
}




void FUN_140dc7130(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong local_res10;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x90) < plVar5) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    for (; (plVar5 != plVar1 && (*plVar5 != param_2)); plVar5 = plVar5 + 1) {
    }
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x70))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar1) {
      FUN_140dc4e30((longlong *)(param_1 + 0x70),&local_res10);
    }
    local_res10 = 0;
    plVar1 = *(longlong **)(param_1 + 0x90);
    if (plVar1 < *(longlong **)(param_1 + 0x88)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    plVar5 = *(longlong **)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0x90) < plVar5) {
      _invalid_parameter_noinfo();
    }
    if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x70))) {
      _invalid_parameter_noinfo();
    }
    FUN_140dc3650(plVar5,plVar1,(longlong)plVar1 - (longlong)plVar5 >> 3,(undefined1)local_res10);
    FUN_140dbffc0(param_1);
    uVar3 = FUN_140dca0e0(param_2);
    uVar4 = FUN_140dca0f0(param_2);
    FUN_140dc26f0(param_1,(ulonglong)uVar4,uVar3);
  }
  return;
}




void FUN_140dc7390(longlong *param_1,undefined4 *param_2)

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
    uVar4 = (lVar3 >> 1) - (lVar3 >> 0x3f);
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0xc) < uVar4) {
    FUN_140dba110(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 3);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140dc50f0(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_140dc7480(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x1f0);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140dc5320(puVar1,param_1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140dc55b0((longlong)puVar1);
      if ((char)uVar2 == '\0') {
        FUN_140dc1b00(puVar1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




undefined8 FUN_140dc7540(ulonglong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint _Seed;
  ulong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_4a8 [3];
  uint *local_490;
  uint *local_488;
  undefined8 local_480;
  longlong *local_478;
  longlong *local_468;
  undefined8 *local_458;
  undefined8 *local_448;
  undefined8 local_438;
  CMsg local_428 [1040];
  
  local_438 = 0xfffffffffffffffe;
  FUN_140dc3af0(param_1);
  FUN_140dd1280(local_428);
  uVar5 = FUN_140dd1300(local_428,5,0,0);
  if ((char)uVar5 != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x158))((longlong *)param_1[1],local_428);
  }
  FUN_140dbf780((longlong)param_1);
  _Seed = _time32((__time32_t *)0x0);
  srand(_Seed);
  plVar7 = (longlong *)param_1[0x1d];
  plVar10 = (longlong *)0x0;
  local_448 = (undefined8 *)0x0;
  if ((longlong *)param_1[0x1e] < plVar7) {
    _invalid_parameter_noinfo();
  }
  puVar1 = (undefined8 *)param_1[0x1a];
  local_448 = puVar1;
  while( true ) {
    plVar9 = (longlong *)param_1[0x1e];
    local_458 = (undefined8 *)0x0;
    if (plVar9 < (longlong *)param_1[0x1d]) {
      _invalid_parameter_noinfo();
    }
    local_458 = (undefined8 *)param_1[0x1a];
    if ((puVar1 == (undefined8 *)0x0) || (puVar1 != local_458)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar9) break;
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar9 = plVar10;
    }
    else {
      plVar9 = (longlong *)*puVar1;
    }
    if ((longlong *)plVar9[4] <= plVar7) {
      _invalid_parameter_noinfo();
    }
    lVar2 = *plVar7;
    if ((lVar2 != 0) && (uVar6 = FUN_140db4120(lVar2), (char)uVar6 == '\0')) {
      *(int *)((longlong)param_1 + 0x1e4) = *(int *)((longlong)param_1 + 0x1e4) + 1;
      FUN_140db4620(lVar2);
    }
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar9 = plVar10;
    }
    else {
      plVar9 = (longlong *)*puVar1;
    }
    if ((longlong *)plVar9[4] <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar7 = plVar7 + 1;
  }
  FUN_140dc0300((longlong)param_1);
  plVar7 = operator_new(8);
  local_4a8[0] = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)local_4a8;
    local_4a8[0] = plVar7;
  }
  local_490 = (uint *)0x0;
  local_488 = (uint *)0x0;
  local_480 = 0;
  (**(code **)(*(longlong *)param_1[1] + 0xe8))((longlong *)param_1[1],(int)param_1[5],local_4a8);
  puVar8 = local_490;
  if ((longlong)local_488 - (longlong)local_490 >> 2 != 0) {
    local_478 = (longlong *)0x0;
    if (local_488 < local_490) {
      _invalid_parameter_noinfo();
    }
    plVar7 = local_4a8[0];
    local_478 = local_4a8[0];
    while( true ) {
      puVar3 = local_488;
      local_468 = (longlong *)0x0;
      if (local_488 < local_490) {
        _invalid_parameter_noinfo();
      }
      local_468 = local_4a8[0];
      if ((plVar7 == (longlong *)0x0) || (plVar7 != local_4a8[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar8 == puVar3) break;
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar9 = plVar10;
      }
      else {
        plVar9 = (longlong *)*plVar7;
      }
      if ((uint *)plVar9[4] <= puVar8) {
        _invalid_parameter_noinfo();
      }
      FUN_140dc5e40((longlong)param_1,*puVar8);
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar9 = plVar10;
      }
      else {
        plVar9 = (longlong *)*plVar7;
      }
      if ((uint *)plVar9[4] <= puVar8) {
        _invalid_parameter_noinfo();
      }
      puVar8 = puVar8 + 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 5;
  uVar4 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x3a) = uVar4 / 1000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 5;
  uVar4 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x39) = uVar4 / 1000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 900;
  uVar4 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x37) = uVar4 / 1000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 300;
  uVar4 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x3b) = uVar4 / 1000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  if (local_490 != (uint *)0x0) {
    operator_delete(local_490);
  }
  local_490 = (uint *)0x0;
  local_488 = (uint *)0x0;
  local_480 = 0;
  operator_delete(local_4a8[0]);
  uVar5 = FUN_140dd12d0((undefined8 *)local_428);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}




void FUN_140dc78e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  CMsg local_428 [1040];
  
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x1a0);
  lVar10 = 0;
  plVar1 = *(longlong **)(param_1 + 0x170);
  do {
    while( true ) {
      while( true ) {
        plVar9 = *(longlong **)(param_1 + 0x1a0);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x170))) {
          _invalid_parameter_noinfo();
        }
        if (plVar8 == plVar9) {
          plVar8 = *(longlong **)(param_1 + 0xe8);
          if (*(longlong **)(param_1 + 0xf0) < plVar8) {
            _invalid_parameter_noinfo();
          }
          plVar1 = *(longlong **)(param_1 + 0xd0);
          while( true ) {
            plVar9 = *(longlong **)(param_1 + 0xf0);
            if (plVar9 < *(longlong **)(param_1 + 0xe8)) {
              _invalid_parameter_noinfo();
            }
            if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xd0))) {
              _invalid_parameter_noinfo();
            }
            if (plVar8 == plVar9) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = lVar10;
            }
            else {
              lVar11 = *plVar1;
            }
            if (*(longlong **)(lVar11 + 0x20) <= plVar8) {
              _invalid_parameter_noinfo();
            }
            if (*plVar8 != 0) {
              FUN_140db4580(*plVar8);
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = lVar10;
            }
            else {
              lVar11 = *plVar1;
            }
            if (*(longlong **)(lVar11 + 0x20) <= plVar8) {
              _invalid_parameter_noinfo();
            }
            plVar8 = plVar8 + 1;
          }
          plVar8 = *(longlong **)(param_1 + 0xb8);
          if (*(longlong **)(param_1 + 0xc0) < plVar8) {
            _invalid_parameter_noinfo();
          }
          plVar1 = *(longlong **)(param_1 + 0xa0);
          while( true ) {
            plVar9 = *(longlong **)(param_1 + 0xc0);
            if (plVar9 < *(longlong **)(param_1 + 0xb8)) {
              _invalid_parameter_noinfo();
            }
            if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xa0))) {
              _invalid_parameter_noinfo();
            }
            if (plVar8 == plVar9) break;
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = lVar10;
            }
            else {
              lVar11 = *plVar1;
            }
            if (*(longlong **)(lVar11 + 0x20) <= plVar8) {
              _invalid_parameter_noinfo();
            }
            lVar11 = *plVar8;
            if (lVar11 != 0) {
              lVar2 = **(longlong **)(param_1 + 8);
              uVar5 = FUN_140db1480(lVar11);
              (**(code **)(lVar2 + 0x148))(*(undefined8 *)(param_1 + 8),uVar5);
              FUN_140db34f0(lVar11);
            }
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = lVar10;
            }
            else {
              lVar11 = *plVar1;
            }
            if (*(longlong **)(lVar11 + 0x20) <= plVar8) {
              _invalid_parameter_noinfo();
            }
            plVar8 = plVar8 + 1;
          }
          plVar8 = *(longlong **)(param_1 + 0x90);
          if (plVar8 < *(longlong **)(param_1 + 0x88)) {
            _invalid_parameter_noinfo();
          }
          lVar10 = *(longlong *)(param_1 + 0x70);
          plVar1 = *(longlong **)(param_1 + 0x88);
          if (*(longlong **)(param_1 + 0x90) < plVar1) {
            _invalid_parameter_noinfo();
          }
          if ((lVar10 == 0) || (lVar10 != *(longlong *)(param_1 + 0x70))) {
            _invalid_parameter_noinfo();
          }
          lVar10 = (longlong)plVar8 - (longlong)plVar1 >> 3;
          uVar7 = 0;
          FUN_140dc3650(plVar1,plVar8,lVar10,0);
          FUN_140dbffc0(param_1);
          FUN_140dc00b0(param_1,plVar8,lVar10,uVar7);
          FUN_140dd0cc0(local_428);
          uVar7 = FUN_140dd0d80((longlong)local_428,2,0);
          if ((char)uVar7 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x178))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x28),local_428,0);
          }
          *(undefined4 *)(param_1 + 0x1b8) = 0;
          *(undefined4 *)(param_1 + 0x1b4) = 0;
          *(undefined4 *)(param_1 + 0x1c8) = 0;
          *(undefined4 *)(param_1 + 0x1c4) = 0;
          *(undefined4 *)(param_1 + 0x1d0) = 0;
          *(undefined4 *)(param_1 + 0x1cc) = 0;
          *(undefined4 *)(param_1 + 0x1d8) = 0;
          *(undefined4 *)(param_1 + 0x1d4) = 0;
          *(undefined4 *)(param_1 + 0x1bc) = 0xb4;
          uVar6 = tq::TimeGet(0);
          *(uint *)(param_1 + 0x1c0) = uVar6 / 1000;
          FUN_140dbfa50(param_1);
          FUN_140db7270(param_1);
          FUN_140dbefc0(param_1);
          FUN_140dc6890(param_1);
          FUN_140dd0d10((undefined8 *)local_428);
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = lVar10;
        }
        else {
          lVar11 = *plVar1;
        }
        if (plVar8 == *(longlong **)(lVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar11 = plVar8[3];
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),(int)lVar11);
        if (cVar4 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),(int)lVar11);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x1d) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar9 = plVar8;
      plVar3 = (longlong *)plVar8[2];
      if (*(char *)(plVar8[2] + 0x1d) != '\0') break;
      do {
        plVar8 = plVar3;
        plVar3 = (longlong *)*plVar8;
      } while (*(char *)(*plVar8 + 0x1d) == '\0');
    }
    do {
      plVar8 = (longlong *)plVar9[1];
      if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
      bVar12 = plVar9 == (longlong *)plVar8[2];
      plVar9 = plVar8;
    } while (bVar12);
  } while( true );
}




undefined8 FUN_140dc7d80(longlong param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong uStack_30;
  
  lVar7 = FUN_140dc1ed0(param_1,param_2,param_3);
  uVar8 = 0;
  if (lVar7 != 0) {
    FUN_140dca270(lVar7,param_4,param_5);
    plVar1 = (longlong *)(param_1 + 0x100);
    piVar9 = *(int **)(param_1 + 0x118);
    local_68 = (longlong *)0x0;
    if (*(int **)(param_1 + 0x120) < piVar9) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)*plVar1;
    local_68 = plVar2;
    while( true ) {
      piVar3 = *(int **)(param_1 + 0x120);
      local_58 = (longlong *)0x0;
      if (piVar3 < *(int **)(param_1 + 0x118)) {
        _invalid_parameter_noinfo();
      }
      local_58 = (longlong *)*plVar1;
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58)) {
        _invalid_parameter_noinfo();
      }
      if (piVar9 == piVar3) {
        local_a0 = FUN_140dca0c0(lVar7);
        local_9c = param_5;
        local_98 = param_4;
        FUN_140dc7390(plVar1,&local_a0);
        goto LAB_140dc7f14;
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(int **)(lVar10 + 0x20) <= piVar9) {
        _invalid_parameter_noinfo();
      }
      iVar6 = FUN_140dca0c0(lVar7);
      if (*piVar9 == iVar6) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (*(int **)(lVar10 + 0x20) <= piVar9) {
        _invalid_parameter_noinfo();
      }
      piVar9 = piVar9 + 3;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (*(int **)(lVar7 + 0x20) <= piVar9) {
      _invalid_parameter_noinfo();
    }
    piVar9[1] = param_5;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (*(int **)(lVar7 + 0x20) <= piVar9) {
      _invalid_parameter_noinfo();
    }
    piVar9[2] = param_4;
LAB_140dc7f14:
    uVar4 = *(ulonglong *)(param_1 + 0x120);
    local_88 = 0;
    if (uVar4 < *(ulonglong *)(param_1 + 0x118)) {
      _invalid_parameter_noinfo();
    }
    lVar7 = *plVar1;
    local_88._0_4_ = (undefined4)lVar7;
    local_88._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
    uStack_80._0_4_ = (undefined4)uVar4;
    uStack_80._4_4_ = (undefined4)(uVar4 >> 0x20);
    local_48 = (undefined4)local_88;
    uStack_44 = local_88._4_4_;
    uStack_40 = (undefined4)uStack_80;
    uStack_3c = uStack_80._4_4_;
    uVar5 = *(ulonglong *)(param_1 + 0x118);
    local_78 = 0;
    local_88 = lVar7;
    uStack_80 = uVar4;
    if (*(ulonglong *)(param_1 + 0x120) < uVar5) {
      _invalid_parameter_noinfo();
    }
    local_78 = *plVar1;
    uStack_70 = uVar5;
    local_38 = local_78;
    uStack_30 = uVar5;
    uVar8 = FUN_140dc52b0(&local_38,(longlong *)&local_48,0);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  return uVar8;
}




void FUN_140dc7fd0(ulonglong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  CTickAnalyst local_40 [24];
  CTickAnalyst local_28 [32];
  
  CTickAnalyst::CTickAnalyst(local_40,0x19);
  if (((int)param_1[0x38] != 0) && (uVar4 = tq::TimeGet(0), (uint)((int)param_1[0x38] + *(int *)((longlong)param_1 + 0x1bc)) <= uVar4 / 1000)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
    FUN_140dbe9e0((longlong)param_1);
  }
  uVar6 = FUN_140db4980((longlong)param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x2c);
  iVar5 = (int)uVar6;
  if ((iVar1 == iVar5) && (iVar1 != 0)) {
    CTickAnalyst::~CTickAnalyst(local_40);
  }
  else {
    if (iVar1 == -1) {
      if (((iVar5 == 0) && (*(char *)((longlong)param_1 + 0x24) != (char)uVar6)) && (uVar6 = FUN_140dc7540(param_1), (char)uVar6 != '\0')) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      }
    }
    else if ((iVar1 == 0) && (iVar5 == -1)) {
      FUN_140dc78e0((longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
    }
    CTickAnalyst::CTickAnalyst(local_28,0x1a);
    plVar7 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1e] < plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)param_1[0x1a];
    while( true ) {
      plVar3 = (longlong *)param_1[0x1e];
      if (plVar3 < (longlong *)param_1[0x1d]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0x1a])) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar3) break;
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
      if (*plVar7 != 0) {
        FUN_140db4650(*plVar7);
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
      plVar7 = plVar7 + 1;
    }
    CTickAnalyst::~CTickAnalyst(local_28);
    CTickAnalyst::CTickAnalyst(local_28,0x1b);
    if (((int)param_1[0x37] != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)((longlong)param_1 + 0x1b4) + (int)param_1[0x37]) <= uVar4 / 1000)) {
      uVar4 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x37) = uVar4 / 1000;
      FUN_140dbf780((longlong)param_1);
    }
    CTickAnalyst::~CTickAnalyst(local_28);
    if (((int)param_1[0x3b] != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)((longlong)param_1 + 0x1d4) + (int)param_1[0x3b]) <= uVar4 / 1000)) {
      uVar4 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x3b) = uVar4 / 1000;
      FUN_140dc0300((longlong)param_1);
    }
    CTickAnalyst::CTickAnalyst(local_28,0x1c);
    if (((int)param_1[0x3a] != 0) && (uVar4 = tq::TimeGet(0), (uint)((int)param_1[0x3a] + *(int *)((longlong)param_1 + 0x1cc)) <= uVar4 / 1000)) {
      uVar4 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x3a) = uVar4 / 1000;
      FUN_140dc7000((longlong)param_1);
    }
    CTickAnalyst::~CTickAnalyst(local_28);
    CTickAnalyst::~CTickAnalyst(local_40);
  }
  return;
}




void FUN_140dc8300(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140dc8360(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = frontier_flag_war::CFrontierFlagWarUser::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




ulonglong FUN_140dc8390(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  ulonglong extraout_RAX_00;
  longlong *plVar3;
  char *pcVar4;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0;
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,4);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,2);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,3);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,5);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    plVar3 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,6);
    pcVar4 = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
    pcVar4 = strncpy((char *)(param_1 + 0x10),pcVar4,0x10);
    if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
      log_InlineLogERROR("CFrontierFlagWarUser::Create, error user info: old id: %u, server id: %u");
      uVar2 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      *(longlong **)(param_1 + 8) = param_3;
      uVar2 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
    }
  }
  return uVar2;
}




undefined4 FUN_140dc84f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_140dc8500(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined4 *)(param_1 + 0x30));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return *(undefined4 *)(param_1 + 0x30);
}




longlong FUN_140dc8540(longlong param_1)

{
  return param_1 + 0x10;
}




void FUN_140dc8560(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
  (**(code **)(*plVar1 + 0xb0))(plVar1,*(undefined4 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000140dc8599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




undefined4 FUN_140dc85a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




void FUN_140dc85c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_140dc85d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




undefined4 FUN_140dc85e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




void FUN_140dc85f0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}




void FUN_140dc8600(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined * FUN_140dc8630(void)

{
  if ((DAT_140deb590 & 1) == 0) {
    DAT_140deb590 = DAT_140deb590 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb588,"CFrontierFlagWarUser");
    atexit((_func_5014 *)&LAB_140dd8f30);
  }
  return &DAT_140deb588;
}




void FUN_140dc8690(__uint64 param_1)

{
  if ((DAT_140deb590 & 1) == 0) {
    DAT_140deb590 = DAT_140deb590 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb588,"CFrontierFlagWarUser");
    atexit((_func_5014 *)&LAB_140dd8f30);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc86e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140deb588,param_1);
  return;
}




void FUN_140dc86f0(void *param_1)

{
  if ((DAT_140deb590 & 1) == 0) {
    DAT_140deb590 = DAT_140deb590 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb588,"CFrontierFlagWarUser");
    atexit((_func_5014 *)&LAB_140dd8f30);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc8745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140deb588,param_1);
  return;
}




void FUN_140dc8750(void *param_1)

{
  if ((DAT_140deb590 & 1) == 0) {
    DAT_140deb590 = DAT_140deb590 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb588,"CFrontierFlagWarUser");
    atexit((_func_5014 *)&LAB_140dd8f30);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc87a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140deb588,param_1);
  return;
}




undefined8 * FUN_140dc87b0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = frontier_flag_war::CFrontierFlagWarUser::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FUN_140dc86f0(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dc8800(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_48;
  undefined8 local_40;
  char local_38 [16];
  ulonglong local_28;
  
  local_40 = 0xfffffffffffffffe;
  local_28 = DAT_140deb538 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 0x24) = param_2;
  *(uint *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = 0;
  local_58 = param_2 % 100;
  local_48 = param_2;
  _snprintf(local_38,0x10,"Fake-%d-%d");
  strncpy((char *)(param_1 + 0x10),local_38,0x10);
  iVar1 = tq::DateStamp(0);
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_flag_war_user");
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    *(longlong **)(param_1 + 8) = plVar2;
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
    (**(code **)(*plVar2 + 0xb0))(plVar2,iVar1);
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined4 *)(param_1 + 0x20));
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined4 *)(param_1 + 0x28));
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar2 + 0xb8))(plVar2,*(undefined4 *)(param_1 + 0x2c));
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_5);
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
    (**(code **)(*plVar2 + 0x80))(plVar2,param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = param_5;
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
    if ((char)uVar3 == '\0') {
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar3 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3;
}




undefined8 * FUN_140dc89e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_140dc8690(0x38);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = frontier_flag_war::CFrontierFlagWarUser::vftable;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140dc8390((longlong)puVar1,param_1,param_2);
      if ((char)uVar2 == '\0') {
        (**(code **)*puVar1)(puVar1,1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




ulonglong FUN_140dc8b00(longlong param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  char *_Source;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong extraout_RAX_00;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    _Source = (char *)(**(code **)(*param_3 + 0x28))(param_3,param_2);
    strncpy((char *)(param_1 + 0x10),_Source,0x10);
    if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == -1)) {
      log_InlineLogERROR("CFrontierFlagWarUser::Create, error user info: id: %u , old id: %u, server id: %u");
      uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      iVar2 = tq::DateStamp(0);
      plVar3 = (longlong *)InstanceGet();
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,"cq_flag_war_user");
      uVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        *(longlong **)(param_1 + 8) = plVar3;
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,1);
        (**(code **)(*plVar3 + 0xb0))(plVar3,iVar2);
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
        (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0x20));
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
        (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0x28));
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
        (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0x2c));
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
        (**(code **)(*plVar3 + 0xb8))(plVar3,param_4);
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
        (**(code **)(*plVar3 + 0x80))(plVar3,param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x30) = param_4;
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
        if ((char)uVar4 == '\0') {
          if (*(longlong *)(param_1 + 8) != 0) {
            uVar4 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
            *(undefined8 *)(param_1 + 8) = 0;
          }
          uVar4 = uVar4 & 0xffffffffffffff00;
        }
        else {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
    }
  }
  return uVar4;
}




ulonglong FUN_140dc8d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0,param_3,param_4,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    uVar1 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return uVar1;
}




undefined8 * FUN_140dc8d60(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_140deb590 & 1) == 0) {
    DAT_140deb590 = DAT_140deb590 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb588,"CFrontierFlagWarUser");
    atexit((_func_5014 *)&LAB_140dd8f30);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140deb588,0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = frontier_flag_war::CFrontierFlagWarUser::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_140dc8800((longlong)puVar1,param_1,param_2,param_3,param_4);
    if ((char)uVar2 == '\0') {
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




undefined8 * FUN_140dc8e70(undefined4 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    cVar1 = (**(code **)*param_2)(param_2,param_1);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)FUN_140dc8690(0x38);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = frontier_flag_war::CFrontierFlagWarUser::vftable;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 5) = 0xffffffff;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        uVar3 = FUN_140dc8b00((longlong)puVar2,param_1,param_2,param_3);
        if ((char)uVar3 == '\0') {
          (**(code **)*puVar2)(puVar2,1);
          puVar2 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar2;
}




void FUN_140dc8fa0(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140dc8fb0(void)

{
  return 0;
}




undefined8 FUN_140dc8fc0(void)

{
  return 0;
}




undefined8 FUN_140dc8fd0(void)

{
  return 0;
}




undefined8 FUN_140dc8fe0(void)

{
  return 0;
}




undefined8 * FUN_140dc8ff0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140dc9030(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140dc9050(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(*(longlong **)(param_1 + 0x20),0x25);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140dc9520(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_140dc9120(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 == 0x9c6) {
      plVar3 = (longlong *)(param_1 + 0x28);
    }
    else if (uVar1 == 0x9c8) {
      plVar3 = (longlong *)(param_1 + 0xc58);
    }
    else if (uVar1 == 0x9ca) {
      plVar3 = (longlong *)(param_1 + 0x438);
    }
    else {
      if (uVar1 != 0x9cb) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x848);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




void FUN_140dc91a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc91b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer FrontierFlagWar module doesn\'t have provider");
    return;
  }
  FUN_140dc95b0(*(longlong *)(param_1 + 0x10));
  return;
}




bool FUN_140dc91c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140dca030(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),0x9c6,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),0x9ca,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),0x9c8,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),0x9cb,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  bVar3 = false;
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),0x25,*(undefined8 *)(param_1 + 0x10));
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}




undefined8 FUN_140dc9280(void)

{
  return 1;
}




void FUN_140dc9290(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x100))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140dc92c0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140dc92f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = frontier_flag_war::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = param_2;
  FUN_140dd0cc0((CMsg *)(param_1 + 5));
  FUN_140dd1080((CMsg *)(param_1 + 0x87));
  FUN_140dd1670((CMsg *)(param_1 + 0x109));
  FUN_140dd1280((CMsg *)(param_1 + 0x18b));
  return param_1;
}




void FUN_140dc9370(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = frontier_flag_war::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x100))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_140dd12d0(param_1 + 0x18b);
  FUN_140dd16c0(param_1 + 0x109);
  FUN_140dd10d0(param_1 + 0x87);
  FUN_140dd0d10(param_1 + 5);
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_140dc93f0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_140dc9120(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x10));
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
                    /* 0x19460  1  ModuleCreate */
  puVar2 = operator_new(0x1068);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    param_3 = param_2 & 0xffffffff;
    plVar3 = FUN_140dc92f0(puVar2,param_1,(int)param_2);
    uVar4 = param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140dc91c0((longlong)plVar3,uVar4,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined8 * FUN_140dc94e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140dc9370(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140dc9520(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_140dc7480(param_2);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_140dc95b0(longlong param_1)

{
  if (*(ulonglong **)(param_1 + 0x10) == (ulonglong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc7fd0(*(ulonglong **)(param_1 + 0x10));
  return;
}




void * FUN_140dc9600(longlong param_1,undefined4 param_2,uint param_3,int param_4)

{
  ulonglong extraout_RAX;
  void *pvVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return (void *)(extraout_RAX & 0xffffffffffffff00);
  }
  pvVar1 = FUN_140dc61f0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return pvVar1;
}




bool FUN_140dc9650(longlong param_1)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return false;
  }
  bVar1 = FUN_140db4a90(*(longlong *)(param_1 + 0x10));
  return bVar1;
}




uint FUN_140dc96a0(longlong param_1,uint param_2)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_EAX & 0xffffff00;
  }
  uVar1 = FUN_140dc5e40(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140dc96f0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140db4aa0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




undefined1 FUN_140dc9740(longlong param_1)

{
  if (*(ulonglong **)(param_1 + 0x10) == (ulonglong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  FUN_140dc3af0(*(ulonglong **)(param_1 + 0x10));
  return 1;
}




void FUN_140dc9790(longlong param_1,ulonglong param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc6330(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




ulonglong FUN_140dc97e0(longlong param_1)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc6500(*(longlong *)(param_1 + 0x10));
  return uVar1;
}




void FUN_140dc9830(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc4030(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined4 FUN_140dc9880(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  uVar1 = FUN_140dc40d0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140dc98d0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc4090(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




ulonglong FUN_140dc9920(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc20a0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140dc9970(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc2080(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




bool FUN_140dc99c0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return false;
  }
  bVar1 = FUN_140dbe800(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




bool FUN_140dc9a10(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return false;
  }
  bVar1 = FUN_140dbe8f0(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




undefined4 FUN_140dc9a60(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  uVar1 = FUN_140db4bd0(*(longlong *)(param_1 + 0x10));
  return uVar1;
}




ulonglong FUN_140dc9ab0(longlong param_1)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db4be0(*(longlong *)(param_1 + 0x10));
  return uVar1;
}




void FUN_140dc9b00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140db4c30(*(longlong *)(param_1 + 0x10));
  return;
}




void FUN_140dc9b50(longlong param_1,uint param_2,uint param_3,int param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc4710(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




ulonglong FUN_140dc9ba0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db4c80(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined1 * FUN_140dc9bf0(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  undefined1 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
  }
  puVar1 = FUN_140dc4480(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return puVar1;
}




undefined1 * FUN_140dc9c40(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  undefined1 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
  }
  puVar1 = FUN_140dc4190(*(longlong *)(param_1 + 0x10),param_2);
  return puVar1;
}




void FUN_140dc9c90(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140db4e00(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




undefined1 FUN_140dc9ce0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  uVar1 = FUN_140db4e10(*(longlong *)(param_1 + 0x10));
  return uVar1;
}




int FUN_140dc9d30(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  iVar1 = FUN_140dbf110(*(longlong *)(param_1 + 0x10));
  return iVar1;
}




void FUN_140dc9d80(longlong param_1,uint param_2,int param_3,int param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc21c0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




ulonglong FUN_140dc9dd0(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc4850(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




ulonglong FUN_140dc9e20(longlong param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc7d80(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return uVar1;
}




ulonglong FUN_140dc9e70(longlong param_1,undefined4 param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc2a50(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




ulonglong FUN_140dc9ec0(longlong param_1,undefined4 param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140dc2ac0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140dc9f10(longlong param_1,undefined4 param_2,byte param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dbf490(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140dc9f60(longlong param_1,int param_2,byte param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc27d0(*(longlong *)(param_1 + 0x10),param_2,(uint)param_3);
  return;
}




void FUN_140dc9fb0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140dc4100(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140dca000(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140dc1b00((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140dca030(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140dca050(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CProvider::vftable;
  if (param_1[2] != 0) {
    FUN_140dc1b00((undefined8 *)param_1[2]);
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_140dca090(undefined8 *param_1,uint param_2)

{
  FUN_140dca050(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined4 FUN_140dca0c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




longlong FUN_140dca0d0(longlong param_1)

{
  return param_1 + 0xb4;
}




undefined4 FUN_140dca0e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}




undefined4 FUN_140dca0f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}




undefined4 FUN_140dca100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x150);
}




undefined8 FUN_140dca110(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
                    /* WARNING: Could not recover jumptable at 0x000140dca13b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




void FUN_140dca150(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_140db71e0();
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  FUN_140db4e70(lVar2,param_2);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
  iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),6);
  (**(code **)(*plVar3 + 0xb0))(plVar3,param_2 + iVar1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  FUN_140dc7130(lVar2,param_1);
  return;
}




void FUN_140dca220(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dca267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
  return;
}




void FUN_140dca270(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  *(undefined4 *)(param_1 + 0xdc) = param_3;
  return;
}




undefined4 FUN_140dca2a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}




bool FUN_140dca2b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  iVar1 = FUN_140dc84f0(param_2);
  iVar2 = FUN_140dc84f0(param_3);
  if (iVar1 == iVar2) {
    uVar3 = FUN_140dc85a0(param_2);
    uVar4 = FUN_140dc85a0(param_3);
  }
  else {
    uVar3 = FUN_140dc84f0(param_2);
    uVar4 = FUN_140dc84f0(param_3);
  }
  return uVar4 < uVar3;
}




void FUN_140dca340(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}




undefined8 FUN_140dca350(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),9);
                    /* WARNING: Could not recover jumptable at 0x000140dca3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




void FUN_140dca3b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x154) == '\0') {
    *(undefined4 *)(param_1 + 0xa8) = param_2;
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,1);
      (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
    }
    *(undefined1 *)(param_1 + 0x154) = 1;
  }
  return;
}




bool FUN_140dca410(longlong param_1)

{
  return *(char *)(param_1 + 0x154) == '\0';
}




longlong FUN_140dca430(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




bool FUN_140dca470(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140dca4b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140dca5d0(longlong param_1,longlong *param_2)

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




longlong FUN_140dca6c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dca6e2;
  }
  lVar2 = *plVar1;
LAB_140dca6e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140dca700(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dca722;
  }
  lVar2 = *plVar1;
LAB_140dca722:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140dca740(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140dca7b0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
}




void FUN_140dca840(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dca864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140dca8d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140dca940(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dca972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140dcaa10(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140dcaa40;
  }
  else {
LAB_140dcaa40:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140dcaa68;
  }
  _invalid_parameter_noinfo();
LAB_140dcaa68:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140dcaab0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140dcab30(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_140dcabd0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_140dcac30(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dcacd0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140dcadc0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dcae00(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_3 < param_2) {
    do {
      lVar7 = (param_2 + -1) / 2;
      lVar1 = *(longlong *)(param_1 + lVar7 * 8);
      if (lVar1 == 0) break;
      if (param_4 != 0) {
        iVar3 = FUN_140dc84f0(lVar1);
        iVar4 = FUN_140dc84f0(param_4);
        if (iVar3 == iVar4) {
          uVar5 = FUN_140dc85a0(lVar1);
          uVar6 = FUN_140dc85a0(param_4);
          bVar2 = uVar6 < uVar5;
        }
        else {
          uVar5 = FUN_140dc84f0(lVar1);
          uVar6 = FUN_140dc84f0(param_4);
          bVar2 = uVar6 < uVar5;
        }
        if (!bVar2) break;
      }
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar7 * 8);
      param_2 = lVar7;
    } while (param_3 < lVar7);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




undefined * FUN_140dcaef0(void)

{
  if ((DAT_140deb5a0 & 1) == 0) {
    DAT_140deb5a0 = DAT_140deb5a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb598,"CSynInfo");
    atexit((_func_5014 *)&LAB_140dd8f40);
  }
  return &DAT_140deb598;
}




void FUN_140dcaf50(__uint64 param_1)

{
  if ((DAT_140deb5a0 & 1) == 0) {
    DAT_140deb5a0 = DAT_140deb5a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb598,"CSynInfo");
    atexit((_func_5014 *)&LAB_140dd8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dcafa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140deb598,param_1);
  return;
}




void FUN_140dcafb0(void *param_1)

{
  if ((DAT_140deb5a0 & 1) == 0) {
    DAT_140deb5a0 = DAT_140deb5a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb598,"CSynInfo");
    atexit((_func_5014 *)&LAB_140dd8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dcb005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140deb598,param_1);
  return;
}




void FUN_140dcb010(void *param_1)

{
  if ((DAT_140deb5a0 & 1) == 0) {
    DAT_140deb5a0 = DAT_140deb5a0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140deb598,"CSynInfo");
    atexit((_func_5014 *)&LAB_140dd8f40);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dcb065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140deb598,param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dcb070(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  undefined8 uVar3;
  char *_Source;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStackY_4c8 [32];
  CMsg local_478 [1040];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  char local_5c [20];
  ulonglong local_48;
  
  local_48 = DAT_140deb538 ^ (ulonglong)auStackY_4c8;
  plVar2 = (longlong *)FUN_140db7190();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar5 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 3;
    FUN_140dd1280(local_478);
    uVar3 = FUN_140dd13c0((longlong)local_478,3,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),(int)uVar5);
    if ((char)uVar3 == '\0') {
      log_InlineLogERROR("CSynInfo::SendMemberMeritAndBonus, failed in create msg of cross flag war merit, server : %u");
      uVar5 = FUN_140dd12d0((undefined8 *)local_478);
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else if (param_3 == 0) {
      uVar5 = FUN_140dd12d0((undefined8 *)local_478);
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      uVar4 = param_3 * 5 - 5;
      if (uVar5 < uVar4) {
        uVar5 = FUN_140dd12d0((undefined8 *)local_478);
        uVar5 = uVar5 & 0xffffffffffffff00;
      }
      else {
        uVar6 = param_3 * 5;
        if (uVar5 < (ulonglong)(param_3 * 5)) {
          uVar6 = uVar5;
        }
        for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
          if ((ulonglong)(*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 3) <= uVar4) {
            _invalid_parameter_noinfo();
          }
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + uVar4 * 8);
          if (lVar1 != 0) {
            local_68 = 0;
            local_64 = 0;
            local_60 = 0;
            local_5c[0] = '\0';
            local_5c[1] = '\0';
            local_5c[2] = '\0';
            local_5c[3] = '\0';
            local_5c[4] = '\0';
            local_5c[5] = '\0';
            local_5c[6] = '\0';
            local_5c[7] = '\0';
            local_5c[8] = '\0';
            local_5c[9] = '\0';
            local_5c[10] = '\0';
            local_5c[0xb] = '\0';
            local_5c[0xc] = '\0';
            local_5c[0xd] = '\0';
            local_5c[0xe] = '\0';
            local_5c[0xf] = '\0';
            local_64 = FUN_140dc85d0(lVar1);
            local_60 = FUN_140dc84f0(lVar1);
            local_68 = FUN_140dc85e0(lVar1);
            _Source = (char *)FUN_140dc8540(lVar1);
            strncpy(local_5c,_Source,0x10);
            uVar5 = FUN_140dd1510((longlong)local_478,&local_68);
            if ((char)uVar5 == '\0') {
              log_InlineLogERROR("CSynInfo::SendMemberMeritAndBonus, failed in AppendMerit");
            }
          }
        }
        (**(code **)(*plVar2 + 0x160))(plVar2,param_2,local_478);
        uVar3 = FUN_140dd12d0((undefined8 *)local_478);
        uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
    }
  }
  return uVar5;
}




undefined8 FUN_140dcb2e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}




undefined8 FUN_140dcb2f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),7,param_3,param_4,0xfffffffffffffffe);
  (**(code **)(*plVar1 + 0xb8))(plVar1);
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),8);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(uint *)(param_1 + 0xa4) & 0xff);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong FUN_140dcb370(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcb392;
  }
  lVar2 = *plVar1;
LAB_140dcb392:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140dcb3b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcb3d2;
  }
  lVar2 = *plVar1;
LAB_140dcb3d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140dcb3f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140dcb440(longlong param_1,longlong param_2)

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




void FUN_140dcb4a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcb4c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140dcb4d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcb4f2;
  }
  lVar2 = *plVar1;
LAB_140dcb4f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140dcb510(longlong *param_1)

{
  FUN_140dca840(param_1);
  return param_1;
}




void FUN_140dcb5a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140dcb610(longlong *param_1)

{
  FUN_140dca940(param_1);
  return param_1;
}




void FUN_140dcb640(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140de9ae8);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140dcb6b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140dca840(param_1);
  return param_2;
}




longlong * FUN_140dcb6e0(longlong *param_1,longlong param_2)

{
  FUN_140dcaa10(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140dcb710(undefined8 *param_1)

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




void * FUN_140dcb770(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140dcb810(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dcb850(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (lVar1 != 0) {
      iVar4 = FUN_140dc84f0(lVar2);
      iVar5 = FUN_140dc84f0(lVar1);
      if (iVar4 == iVar5) {
        uVar6 = FUN_140dc85a0(lVar2);
        uVar7 = FUN_140dc85a0(lVar1);
        bVar3 = uVar7 < uVar6;
      }
      else {
        uVar6 = FUN_140dc84f0(lVar2);
        uVar7 = FUN_140dc84f0(lVar1);
        bVar3 = uVar7 < uVar6;
      }
      if (!bVar3) goto LAB_140dcb8db;
    }
    if (param_2 != param_1) {
      lVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = lVar1;
    }
  }
LAB_140dcb8db:
  lVar1 = *param_3;
  lVar2 = *param_2;
  if (lVar1 != 0) {
    if (lVar2 != 0) {
      iVar4 = FUN_140dc84f0(lVar1);
      iVar5 = FUN_140dc84f0(lVar2);
      if (iVar4 == iVar5) {
        uVar6 = FUN_140dc85a0(lVar1);
        uVar7 = FUN_140dc85a0(lVar2);
        bVar3 = uVar7 < uVar6;
      }
      else {
        uVar6 = FUN_140dc84f0(lVar1);
        uVar7 = FUN_140dc84f0(lVar2);
        bVar3 = uVar7 < uVar6;
      }
      if (!bVar3) goto LAB_140dcb949;
    }
    if (param_3 != param_2) {
      lVar1 = *param_3;
      *param_3 = *param_2;
      *param_2 = lVar1;
    }
  }
LAB_140dcb949:
  lVar1 = *param_2;
  lVar2 = *param_1;
  if (lVar1 != 0) {
    if (lVar2 != 0) {
      iVar4 = FUN_140dc84f0(lVar1);
      iVar5 = FUN_140dc84f0(lVar2);
      if (iVar4 == iVar5) {
        uVar6 = FUN_140dc85a0(lVar1);
        uVar7 = FUN_140dc85a0(lVar2);
        bVar3 = uVar7 < uVar6;
      }
      else {
        uVar6 = FUN_140dc84f0(lVar1);
        uVar7 = FUN_140dc84f0(lVar2);
        bVar3 = uVar7 < uVar6;
      }
      if (!bVar3) {
        return;
      }
    }
    if (param_2 != param_1) {
      lVar1 = *param_2;
      *param_2 = *param_1;
      *param_1 = lVar1;
    }
  }
  return;
}




void FUN_140dcb9d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = param_2;
  do {
    lVar8 = lVar9 * 2 + 2;
    if (param_3 <= lVar8) {
      if (lVar8 == param_3) {
        *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
        lVar9 = param_3 + -1;
      }
      FUN_140dcae00(param_1,lVar9,param_2,param_4);
      return;
    }
    lVar1 = *(longlong *)(param_1 + lVar8 * 8);
    lVar2 = *(longlong *)(param_1 + -8 + lVar8 * 8);
    if (lVar1 != 0) {
      if (lVar2 != 0) {
        iVar4 = FUN_140dc84f0(lVar1);
        iVar5 = FUN_140dc84f0(lVar2);
        if (iVar4 == iVar5) {
          uVar6 = FUN_140dc85a0(lVar1);
          uVar7 = FUN_140dc85a0(lVar2);
          bVar3 = uVar7 < uVar6;
        }
        else {
          uVar6 = FUN_140dc84f0(lVar1);
          uVar7 = FUN_140dc84f0(lVar2);
          bVar3 = uVar7 < uVar6;
        }
        if (!bVar3) goto LAB_140dcba72;
      }
      lVar8 = lVar9 * 2 + 1;
    }
LAB_140dcba72:
    *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + lVar8 * 8);
    lVar9 = lVar8;
  } while( true );
}




void * FUN_140dcbae0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140dcbb20(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  *param_3 = *param_1;
  FUN_140dcb9d0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




longlong * FUN_140dcbb50(longlong *param_1)

{
  FUN_140dca840(param_1);
  return param_1;
}




longlong FUN_140dcbb70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcbb92;
  }
  lVar2 = *plVar1;
LAB_140dcbb92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dcbbb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcbbd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcbbf0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dcbbf0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_140dcbc40(longlong param_1,ulonglong param_2)

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
      FUN_140dca7b0();
    }
    lVar1 = FUN_140dcb5a0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140dcbcb0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong FUN_140dcbce0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcbd02;
  }
  lVar2 = *plVar1;
LAB_140dcbd02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140dcbd20(longlong *param_1)

{
  FUN_140dca940(param_1);
  return param_1;
}




undefined8 * FUN_140dcbd40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dcbd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140dcbe00(undefined8 *param_1)

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




longlong * FUN_140dcbe40(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140dcbeaa;
  }
  _invalid_parameter_noinfo();
LAB_140dcbeaa:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140dcbee0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140dcbf40(void)

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




undefined8 * FUN_140dcbfa0(undefined8 *param_1)

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




void * FUN_140dcbff0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dcc060(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140dcc0e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dcc120(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140dcb850(param_1,param_1 + lVar1,param_1 + lVar1 * 2);
    FUN_140dcb850(param_2 + -lVar1,param_2,param_2 + lVar1);
    FUN_140dcb850(param_3 + lVar1 * -2,param_3 + -lVar1,param_3);
    FUN_140dcb850(param_1 + lVar1,param_2,param_3 + -lVar1);
    return;
  }
  FUN_140dcb850(param_1,param_2,param_3);
  return;
}




void FUN_140dcc200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140dcb9d0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_140dcc280(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((param_1 != param_2) && (plVar9 = param_1 + 1, plVar9 != param_2)) {
    lVar10 = (longlong)plVar9 - (longlong)param_1;
    do {
      lVar1 = *plVar9;
      lVar7 = *param_1;
      plVar8 = plVar9;
      if (lVar1 == 0) {
LAB_140dcc360:
        while( true ) {
          lVar7 = plVar8[-1];
          if (lVar1 == 0) break;
          if (lVar7 != 0) {
            iVar3 = FUN_140dc84f0(lVar7);
            iVar4 = FUN_140dc84f0(lVar1);
            if (iVar4 == iVar3) {
              uVar5 = FUN_140dc85a0(lVar7);
              uVar6 = FUN_140dc85a0(lVar1);
              bVar2 = uVar5 < uVar6;
            }
            else {
              uVar5 = FUN_140dc84f0(lVar7);
              uVar6 = FUN_140dc84f0(lVar1);
              bVar2 = uVar5 < uVar6;
            }
            if (!bVar2) break;
          }
          *plVar8 = plVar8[-1];
          plVar8 = plVar8 + -1;
        }
        *plVar8 = lVar1;
      }
      else {
        if (lVar7 != 0) {
          iVar3 = FUN_140dc84f0(lVar7);
          iVar4 = FUN_140dc84f0(lVar1);
          if (iVar4 == iVar3) {
            uVar5 = FUN_140dc85a0(lVar7);
            uVar6 = FUN_140dc85a0(lVar1);
            bVar2 = uVar5 < uVar6;
          }
          else {
            uVar5 = FUN_140dc84f0(lVar7);
            uVar6 = FUN_140dc84f0(lVar1);
            bVar2 = uVar5 < uVar6;
          }
          if (!bVar2) goto LAB_140dcc360;
        }
        lVar7 = lVar10 >> 3;
        if (0 < lVar7) {
          memmove_s(plVar9 + (1 - lVar7),lVar7 * 8,param_1,lVar7 * 8);
        }
        *param_1 = lVar1;
      }
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar9 != param_2);
  }
  return;
}




void FUN_140dcc410(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140dcb9d0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1);
  return;
}




void FUN_140dcc460(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dcbbf0(param_1,(longlong *)plVar2[2]);
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




void FUN_140dcc4e0(undefined8 *param_1)

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




longlong FUN_140dcc520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dcc542;
  }
  lVar2 = *plVar1;
LAB_140dcc542:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dcc560(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dcc5c0(undefined8 *param_1)

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




undefined8 * FUN_140dcc610(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dcc650(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140dcc6b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140dcbf40();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140dcc6f0(undefined8 *param_1)

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




void * FUN_140dcc770(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dcc7b0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar11 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_140dcc120(param_2,plVar11,param_3 + -1);
  plVar8 = plVar11;
  do {
    do {
      plVar12 = plVar8;
      if (plVar12 <= param_2) goto joined_r0x000140dcc8cd;
      lVar1 = plVar12[-1];
      lVar2 = *plVar12;
      plVar8 = plVar12 + -1;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000140dcc8cd;
        iVar4 = FUN_140dc84f0(lVar1);
        iVar5 = FUN_140dc84f0(lVar2);
        if (iVar4 == iVar5) {
          uVar6 = FUN_140dc85a0(lVar1);
          uVar7 = FUN_140dc85a0(lVar2);
        }
        else {
          uVar6 = FUN_140dc84f0(lVar1);
          uVar7 = FUN_140dc84f0(lVar2);
        }
        if (uVar7 < uVar6) goto joined_r0x000140dcc8cd;
      }
      lVar1 = *plVar12;
      lVar2 = *plVar8;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar4 = FUN_140dc84f0(lVar1);
    iVar5 = FUN_140dc84f0(lVar2);
    if (iVar4 == iVar5) {
      uVar6 = FUN_140dc85a0(lVar1);
      uVar7 = FUN_140dc85a0(lVar2);
    }
    else {
      uVar6 = FUN_140dc84f0(lVar1);
      uVar7 = FUN_140dc84f0(lVar2);
    }
  } while (uVar6 <= uVar7);
joined_r0x000140dcc8cd:
  do {
    do {
      plVar11 = plVar11 + 1;
      plVar8 = plVar11;
      plVar10 = plVar12;
      if (param_3 <= plVar11) goto joined_r0x000140dcc998;
      lVar1 = *plVar11;
      lVar2 = *plVar12;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000140dcc998;
        iVar4 = FUN_140dc84f0(lVar1);
        iVar5 = FUN_140dc84f0(lVar2);
        if (iVar4 == iVar5) {
          uVar6 = FUN_140dc85a0(lVar1);
          uVar7 = FUN_140dc85a0(lVar2);
        }
        else {
          uVar6 = FUN_140dc84f0(lVar1);
          uVar7 = FUN_140dc84f0(lVar2);
        }
        if (uVar7 < uVar6) goto joined_r0x000140dcc998;
      }
      lVar1 = *plVar12;
      lVar2 = *plVar11;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar4 = FUN_140dc84f0(lVar1);
    iVar5 = FUN_140dc84f0(lVar2);
    if (iVar4 == iVar5) {
      uVar6 = FUN_140dc85a0(lVar1);
      uVar7 = FUN_140dc85a0(lVar2);
    }
    else {
      uVar6 = FUN_140dc84f0(lVar1);
      uVar7 = FUN_140dc84f0(lVar2);
    }
  } while (uVar6 <= uVar7);
joined_r0x000140dcc998:
  do {
    plVar9 = plVar10;
    plVar3 = plVar8;
    plVar8 = plVar12;
    if (param_3 <= plVar3) goto joined_r0x000140dcca75;
    lVar1 = *plVar9;
    lVar2 = *plVar3;
    if (lVar1 == 0) {
LAB_140dcc9f6:
      lVar1 = *plVar3;
      lVar2 = *plVar9;
      if (lVar1 != 0) {
        if (lVar2 != 0) {
          iVar4 = FUN_140dc84f0(lVar1);
          iVar5 = FUN_140dc84f0(lVar2);
          if (iVar4 == iVar5) {
            uVar6 = FUN_140dc85a0(lVar1);
            uVar7 = FUN_140dc85a0(lVar2);
          }
          else {
            uVar6 = FUN_140dc84f0(lVar1);
            uVar7 = FUN_140dc84f0(lVar2);
          }
          if (uVar6 <= uVar7) goto LAB_140dcca48;
        }
joined_r0x000140dcca75:
        for (; param_2 < plVar12; plVar12 = plVar12 + -1) {
          plVar8 = plVar8 + -1;
          lVar1 = *plVar8;
          lVar2 = *plVar9;
          if (lVar1 == 0) {
LAB_140dccadb:
            lVar1 = *plVar9;
            lVar2 = *plVar8;
            if (lVar1 != 0) {
              if (lVar2 == 0) break;
              iVar4 = FUN_140dc84f0(lVar1);
              iVar5 = FUN_140dc84f0(lVar2);
              if (iVar4 == iVar5) {
                uVar6 = FUN_140dc85a0(lVar1);
                uVar7 = FUN_140dc85a0(lVar2);
              }
              else {
                uVar6 = FUN_140dc84f0(lVar1);
                uVar7 = FUN_140dc84f0(lVar2);
              }
              if (uVar7 < uVar6) break;
            }
            plVar9 = plVar9 + -1;
            if (plVar9 != plVar8) {
              lVar1 = *plVar9;
              *plVar9 = *plVar8;
              *plVar8 = lVar1;
            }
          }
          else if (lVar2 != 0) {
            iVar4 = FUN_140dc84f0(lVar1);
            iVar5 = FUN_140dc84f0(lVar2);
            if (iVar4 == iVar5) {
              uVar6 = FUN_140dc85a0(lVar1);
              uVar7 = FUN_140dc85a0(lVar2);
            }
            else {
              uVar6 = FUN_140dc84f0(lVar1);
              uVar7 = FUN_140dc84f0(lVar2);
            }
            if (uVar6 <= uVar7) goto LAB_140dccadb;
          }
        }
        if (plVar12 == param_2) {
          if (plVar3 == param_3) {
            *param_1 = plVar9;
            param_1[1] = plVar11;
            return;
          }
          if ((plVar11 != plVar3) && (plVar9 != plVar11)) {
            lVar1 = *plVar9;
            *plVar9 = *plVar11;
            *plVar11 = lVar1;
          }
          plVar11 = plVar11 + 1;
          plVar8 = plVar3 + 1;
          plVar10 = plVar9 + 1;
          if (plVar9 != plVar3) {
            lVar1 = *plVar9;
            *plVar9 = *plVar3;
            *plVar3 = lVar1;
          }
        }
        else {
          plVar12 = plVar12 + -1;
          if (plVar3 == param_3) {
            plVar10 = plVar9 + -1;
            if (plVar12 != plVar10) {
              lVar1 = *plVar12;
              *plVar12 = *plVar10;
              *plVar10 = lVar1;
            }
            plVar11 = plVar11 + -1;
            plVar8 = plVar3;
            if (plVar10 != plVar11) {
              lVar1 = *plVar10;
              *plVar10 = *plVar11;
              *plVar11 = lVar1;
            }
          }
          else {
            if (plVar3 != plVar12) {
              lVar1 = *plVar3;
              *plVar3 = *plVar12;
              *plVar12 = lVar1;
            }
            plVar8 = plVar3 + 1;
            plVar10 = plVar9;
          }
        }
        goto joined_r0x000140dcc998;
      }
LAB_140dcca48:
      plVar10 = plVar11 + 1;
      if (plVar11 != plVar3) {
        lVar1 = *plVar11;
        *plVar11 = *plVar3;
        *plVar3 = lVar1;
      }
    }
    else {
      plVar10 = plVar11;
      if (lVar2 != 0) {
        iVar4 = FUN_140dc84f0(lVar1);
        iVar5 = FUN_140dc84f0(lVar2);
        if (iVar4 == iVar5) {
          uVar6 = FUN_140dc85a0(lVar1);
          uVar7 = FUN_140dc85a0(lVar2);
        }
        else {
          uVar6 = FUN_140dc84f0(lVar1);
          uVar7 = FUN_140dc84f0(lVar2);
        }
        if (uVar6 <= uVar7) goto LAB_140dcc9f6;
      }
    }
    plVar8 = plVar3 + 1;
    plVar11 = plVar10;
    plVar10 = plVar9;
  } while( true );
}




void FUN_140dccc30(longlong param_1,longlong param_2)

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
      FUN_140dcb9d0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_140dcccb0(longlong *param_1,longlong *param_2)

{
  FUN_140dcc280(param_1,param_2);
  return;
}




void FUN_140dcccd0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140dcb9d0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1);
  }
  return;
}




longlong * FUN_140dccd50(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140dcce20(undefined8 *param_1)

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




undefined8 * FUN_140dcce80(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dcced0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140dccf20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dccf40(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dccfd0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140de9a30);
  }
  plVar5 = FUN_140dcbd80(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140dcd310(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140dcd370(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140dcd460(undefined8 *param_1)

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




void * FUN_140dcd4e0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140dcd520(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140dcb9d0((longlong)param_1,0,lVar2 + -8 >> 3,lVar1);
  }
  return;
}




undefined4 FUN_140dcd590(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  plVar7 = (longlong *)FUN_140db7190();
  if (plVar7 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if (param_2 != 0) {
    uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
    puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x110))[1];
    cVar1 = *(char *)((longlong)puVar9 + 0x29);
    puVar3 = *(undefined8 **)(param_1 + 0x110);
    while (cVar1 == '\0') {
      if (*(uint *)(puVar9 + 3) < uVar5) {
        puVar8 = (undefined8 *)puVar9[2];
        puVar9 = puVar3;
      }
      else {
        puVar8 = (undefined8 *)*puVar9;
      }
      puVar3 = puVar9;
      puVar9 = puVar8;
      cVar1 = *(char *)((longlong)puVar8 + 0x29);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x110);
    local_30 = puVar3;
    local_38 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar9) || (uVar5 < *(uint *)(puVar3 + 3))) {
      plVar7 = &local_28;
      local_20 = *(undefined8 *)(param_1 + 0x110);
      local_28 = *(longlong *)(param_1 + 0xe0);
    }
    else {
      plVar7 = &local_38;
    }
    plVar2 = (longlong *)*plVar7;
    lVar10 = *(longlong *)(param_1 + 0x110);
    local_18 = plVar2;
    local_10 = plVar7[1];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0xe0))) {
      _invalid_parameter_noinfo();
    }
    lVar4 = local_10;
    if (local_10 != lVar10) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar2;
      }
      if (lVar4 == *(longlong *)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar10 = *(longlong *)(lVar4 + 0x20);
      if (lVar10 != 0) {
        uVar6 = FUN_140dc84f0(lVar10);
        return uVar6;
      }
    }
    return 0;
  }
  return 0;
}




undefined8 FUN_140dcd720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x150) = 0;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x110);
  plVar2 = *(longlong **)(param_1 + 0xe0);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x110);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0xe0))) {
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
    puVar4 = (undefined8 *)plVar6[4];
    if (puVar4 != (undefined8 *)0x0) {
      FUN_140dc8d10((longlong)puVar4,param_2,param_3,param_4);
      param_2 = 1;
      (**(code **)*puVar4)(puVar4);
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
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x29);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
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
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 8);
  cVar1 = *(char *)((longlong)plVar6 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dcbbf0(param_1 + 0xe0,(longlong *)plVar6[2]);
    plVar2 = (longlong *)*plVar6;
    operator_delete(plVar6);
    plVar6 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x110) + 8) = *(longlong *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x110);
  lVar7 = *(longlong *)(param_1 + 0x110);
  *(longlong *)(lVar7 + 0x10) = lVar7;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dcd8f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong extraout_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  int local_4a8;
  longlong *local_4a0;
  longlong *local_490;
  longlong local_480;
  undefined8 local_478;
  CMsg local_468 [1040];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_478 = 0xfffffffffffffffe;
  local_38 = DAT_140deb538 ^ (ulonglong)auStack_4d8;
  plVar3 = (longlong *)FUN_140db7190();
  if (plVar3 == (longlong *)0x0) {
    local_4b8 = 0x25b;
    log_InlineLogERROR(&DAT_140dd9588);
    uVar5 = extraout_RAX;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138) >> 3;
    local_480 = lVar9;
    FUN_140dd1280(local_468);
    uVar8 = (undefined4)lVar9;
    uVar4 = FUN_140dd1300(local_468,0,*(undefined4 *)(param_1 + 0xac),uVar8);
    if ((char)uVar4 != '\0') {
      (**(code **)(*plVar3 + 0xd8))(plVar3,*(undefined4 *)(param_1 + 0xb0));
      local_4b8 = *(undefined4 *)(param_1 + 0xac);
      tq::GmLogSave(PTR_s_frontierflagwar_140deb2d0,&DAT_140dddbc0);
      iVar7 = 1;
      local_4a8 = 1;
      plVar6 = *(longlong **)(param_1 + 0x138);
      local_4a0 = (longlong *)0x0;
      if (*(longlong **)(param_1 + 0x140) < plVar6) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)(param_1 + 0x120);
      local_4a0 = plVar1;
      while( true ) {
        plVar2 = *(longlong **)(param_1 + 0x140);
        local_490 = (longlong *)0x0;
        if (plVar2 < *(longlong **)(param_1 + 0x138)) {
          _invalid_parameter_noinfo();
        }
        local_490 = *(longlong **)(param_1 + 0x120);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_490)) {
          _invalid_parameter_noinfo();
        }
        if (plVar6 == plVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar6) {
          _invalid_parameter_noinfo();
        }
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          log_InlineLogERROR(&DAT_140dddb90);
        }
        else {
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 0;
          local_54 = FUN_140dc85a0(lVar9);
          local_50 = FUN_140dc84f0(lVar9);
          local_58 = FUN_140dc85e0(lVar9);
          local_4b8 = local_50;
          tq::GmLogSave(PTR_s_frontierflagwar_140deb2d0,"Rank: %d, User:%u total merit: %d");
          uVar5 = FUN_140dd1510((longlong)local_468,&local_58);
          if ((char)uVar5 == '\0') {
            (**(code **)(*plVar3 + 0x150))(plVar3,*(undefined4 *)(param_1 + 0xb0),local_468);
            uVar4 = FUN_140dd1300(local_468,0,*(undefined4 *)(param_1 + 0xac),uVar8);
            if ((char)uVar4 == '\0') {
              log_InlineLogERROR("CSynInfo::SendPlayerMerit1, failed in init msg merit, server : %u");
              uVar5 = FUN_140dd12d0((undefined8 *)local_468);
              return uVar5 & 0xffffffffffffff00;
            }
            FUN_140dd1510((longlong)local_468,&local_58);
          }
          iVar7 = iVar7 + 1;
          local_4a8 = iVar7;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar6) {
          _invalid_parameter_noinfo();
        }
        plVar6 = plVar6 + 1;
      }
      (**(code **)(*plVar3 + 0x150))(plVar3,*(undefined4 *)(param_1 + 0xb0),local_468);
      uVar4 = FUN_140dd12d0((undefined8 *)local_468);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    log_InlineLogERROR("CSynInfo::SendPlayerMerit, failed in create msg of cross flag war merit, server : %u");
    uVar5 = FUN_140dd12d0((undefined8 *)local_468);
  }
  return uVar5 & 0xffffffffffffff00;
}




void FUN_140dcdc50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 1;
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (*(longlong **)(param_1 + 0x140) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x120);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x140);
    if (plVar2 < *(longlong **)(param_1 + 0x138)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x120))) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    if (*plVar3 != 0) {
      FUN_140dc85f0(*plVar3,iVar5);
      iVar5 = iVar5 + 1;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plVar3 + 1;
  }
  return;
}




longlong * FUN_140dcdd80(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140dcdedd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dcdf0c;
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
      goto LAB_140dcdedd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dccfd0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dcdf0c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140dcdf30(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140de9b48);
  }
  FUN_140dca840(param_3);
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
        goto LAB_140dce11c;
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
LAB_140dce11c:
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
            FUN_140dcb440((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dca5d0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140dcb440((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140dca5d0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dcb440((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140dca5d0((longlong)param_1,plVar7);
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




longlong * FUN_140dce2f0(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140dce3c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140dce450(longlong *param_1)

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




void FUN_140dce510(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dce560(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dcc460((longlong)param_1);
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
    FUN_140dcdf30(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140dce710(undefined8 *param_1)

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




void FUN_140dce760(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140dca7b0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140dcb5a0(param_1 + 0x10,uVar8);
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
      FUN_140dcd4e0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140dcd4e0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140dcc060(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dcea10(undefined8 *param_1,longlong param_2)

{
  FUN_140dcd520(param_1,param_2);
  return;
}




void FUN_140dcea20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)param_1[0x22];
  plVar1 = (longlong *)param_1[0x1c];
  do {
    while( true ) {
      while( true ) {
        plVar4 = (longlong *)param_1[0x22];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[0x1c])) {
          _invalid_parameter_noinfo();
        }
        if (plVar3 == plVar4) {
          FUN_140dcc460((longlong)(param_1 + 0x1c));
          FUN_140dce450(param_1 + 0x24);
          FUN_140dbaa50((longlong)(param_1 + 4));
          FUN_140dbaa50((longlong)(param_1 + 0xc));
          if (param_1[1] != 0) {
            (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],0);
            (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1);
          }
          if (param_1 != (undefined8 *)0x0) {
            (**(code **)*param_1)(param_1,1);
          }
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar1;
        }
        if (plVar3 == *(longlong **)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((undefined8 *)plVar3[4] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar3[4])();
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar4 = plVar3;
      plVar2 = (longlong *)plVar3[2];
      if (*(char *)(plVar3[2] + 0x29) != '\0') break;
      do {
        plVar3 = plVar2;
        plVar2 = (longlong *)*plVar3;
      } while (*(char *)(*plVar3 + 0x29) == '\0');
    }
    do {
      plVar3 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
      bVar6 = plVar4 == (longlong *)plVar3[2];
      plVar4 = plVar3;
    } while (bVar6);
  } while( true );
}




void FUN_140dcebf0(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint local_res18 [4];
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_58;
  longlong lStack_50;
  longlong *local_48 [2];
  longlong *local_38;
  longlong *plStack_30;
  
  local_res18[0] = param_3;
  lVar7 = FUN_140db7190();
  if (lVar7 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if ((param_3 != 0) && (param_2 == *(int *)(param_1 + 0xb0))) {
    FUN_140dce2f0((longlong *)(param_1 + 0xe0),(longlong *)&local_78,local_res18);
    plVar1 = local_78;
    lVar7 = *(longlong *)(param_1 + 0x110);
    lVar12 = 0;
    local_68 = *(longlong **)(param_1 + 0xe0);
    if ((local_78 == (longlong *)0x0) || (local_78 != local_68)) {
      _invalid_parameter_noinfo();
    }
    plVar9 = plStack_70;
    if (plStack_70 != (longlong *)lVar7) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar12;
      }
      else {
        lVar7 = *plVar1;
      }
      if (plVar9 == (longlong *)*(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = *(undefined8 **)((longlong)plVar9 + 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        uVar5 = FUN_140dc84f0((longlong)puVar2);
        uVar11 = (ulonglong)uVar5;
        tq::GmLogSave(PTR_s_frontierflagwar_140deb2d0,"user Leave Syn[%u] Merit[%d]");
        iVar6 = FUN_140dc84f0((longlong)puVar2);
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) - iVar6;
        local_58 = local_78;
        lStack_50 = (longlong)plStack_70;
        pplVar10 = &local_58;
        pplVar8 = &local_38;
        FUN_140dcdf30((undefined8 *)(param_1 + 0xe0),pplVar8,(longlong *)pplVar10);
        plVar1 = (longlong *)(param_1 + 0x120);
        plVar9 = *(longlong **)(param_1 + 0x138);
        local_78 = (longlong *)0x0;
        if (*(longlong **)(param_1 + 0x140) < plVar9) {
          _invalid_parameter_noinfo();
        }
        plVar3 = (longlong *)*plVar1;
        local_78 = plVar3;
        while( true ) {
          plVar4 = *(longlong **)(param_1 + 0x140);
          local_48[0] = (longlong *)0x0;
          plStack_70 = plVar9;
          if (plVar4 < *(longlong **)(param_1 + 0x138)) {
            _invalid_parameter_noinfo();
          }
          local_48[0] = (longlong *)*plVar1;
          if ((plVar3 == (longlong *)0x0) || (plVar3 != local_48[0])) {
            _invalid_parameter_noinfo();
          }
          if (plVar9 == plVar4) goto LAB_140dcee50;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = lVar12;
          }
          else {
            lVar7 = *plVar3;
          }
          if (*(longlong **)(lVar7 + 0x20) <= plVar9) {
            _invalid_parameter_noinfo();
          }
          if ((*plVar9 != 0) && (uVar5 = FUN_140dc85a0(*plVar9), uVar5 == param_3)) break;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = lVar12;
          }
          else {
            lVar7 = *plVar3;
          }
          if (*(longlong **)(lVar7 + 0x20) <= plVar9) {
            _invalid_parameter_noinfo();
          }
          plVar9 = plVar9 + 1;
        }
        local_38 = local_78;
        plStack_30 = plStack_70;
        pplVar10 = &local_38;
        pplVar8 = local_48;
        FUN_140dce3c0(plVar1,pplVar8,(longlong)pplVar10);
LAB_140dcee50:
        FUN_140dc8d10((longlong)puVar2,pplVar8,pplVar10,uVar11);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
  return;
}




undefined8 FUN_140dcee90(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    param_3 = *plVar1;
    (**(code **)(param_3 + 0xb0))(plVar1);
    param_2 = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  }
  FUN_140dcd720(param_1,param_2,param_3,param_4);
  FUN_140dbaa50(param_1 + 0x20);
  uVar2 = FUN_140dbaa50(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




undefined8 FUN_140dcef00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  plVar6 = (longlong *)FUN_140db7190();
  if (plVar6 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,param_2);
    puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x110))[1];
    cVar1 = *(char *)((longlong)puVar8 + 0x29);
    puVar3 = *(undefined8 **)(param_1 + 0x110);
    while (cVar1 == '\0') {
      if (*(uint *)(puVar8 + 3) < uVar5) {
        puVar7 = (undefined8 *)puVar8[2];
        puVar8 = puVar3;
      }
      else {
        puVar7 = (undefined8 *)*puVar8;
      }
      puVar3 = puVar8;
      puVar8 = puVar7;
      cVar1 = *(char *)((longlong)puVar7 + 0x29);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x110);
    local_30 = puVar3;
    local_38 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar8) || (uVar5 < *(uint *)(puVar3 + 3))) {
      plVar6 = &local_28;
      local_20 = *(undefined8 *)(param_1 + 0x110);
      local_28 = *(longlong *)(param_1 + 0xe0);
    }
    else {
      plVar6 = &local_38;
    }
    plVar2 = (longlong *)*plVar6;
    lVar9 = *(longlong *)(param_1 + 0x110);
    local_18 = plVar2;
    local_10 = plVar6[1];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0xe0))) {
      _invalid_parameter_noinfo();
    }
    lVar4 = local_10;
    if (local_10 != lVar9) {
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
      return *(undefined8 *)(lVar4 + 0x20);
    }
  }
  return 0;
}




void FUN_140dcf070(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint local_res10 [2];
  uint local_res18 [4];
  longlong local_38 [4];
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_140db7190();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  if (iVar2 == iVar1) {
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
    if (iVar2 == iVar1) {
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      local_res18[0] = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      FUN_140dc0460((longlong *)(param_1 + 0x20),local_38,local_res18);
      FUN_140dc0460((longlong *)(param_1 + 0x60),local_38,local_res10);
    }
  }
  return;
}




void FUN_140dcf140(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  plVar3 = (longlong *)FUN_140db7190();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  if (iVar2 == iVar1) {
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
    if (iVar2 == iVar1) {
      FUN_140dc0610((longlong *)(param_1 + 0x60),local_res10);
      if (0 < *(int *)(param_1 + 0xa0)) {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      }
    }
  }
  return;
}




undefined8 * FUN_140dcf210(undefined8 *param_1)

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
  lVar2 = FUN_140dcbf40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dcf290(longlong *param_1)

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
  FUN_140dce560(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140dcf300(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dce760((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dcf3f4;
  }
  _invalid_parameter_noinfo();
LAB_140dcf3f4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined1 FUN_140dcf430(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *local_18;
  longlong *local_10;
  
  lVar3 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar3 = lVar3 >> 3;
    if (lVar3 < 0x21) {
LAB_140dcf507:
      if (1 < lVar3) {
        param_4 = FUN_140dcc280(param_1,param_2);
      }
      return param_4;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_140dccc30((longlong)param_1,(longlong)param_2);
        uVar2 = FUN_140dcd520(param_1,(longlong)param_2);
        return uVar2;
      }
      goto LAB_140dcf507;
    }
    FUN_140dcc7b0(&local_18,param_1,param_2);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140dcf430(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_140dcf430(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dcf560(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong extraout_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *_Source;
  undefined1 auStackY_488 [32];
  CMsg local_448 [1040];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_140deb538 ^ (ulonglong)auStackY_488;
  plVar2 = (longlong *)FUN_140db7190();
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_140dd1280(local_448);
    uVar3 = FUN_140dd13c0((longlong)local_448,4,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),1);
    if ((char)uVar3 == '\0') {
      log_InlineLogERROR("CSynInfo::SendSelfMerit, failed in create msg of cross flag war merit, server : %u");
      uVar4 = FUN_140dd12d0((undefined8 *)local_448);
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      lVar5 = FUN_140dcef00(param_1,param_2);
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x160))(plVar2,param_2,local_448);
        uVar3 = FUN_140dd12d0((undefined8 *)local_448);
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      else {
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c[0] = '\0';
        local_2c[1] = '\0';
        local_2c[2] = '\0';
        local_2c[3] = '\0';
        local_2c[4] = '\0';
        local_2c[5] = '\0';
        local_2c[6] = '\0';
        local_2c[7] = '\0';
        local_2c[8] = '\0';
        local_2c[9] = '\0';
        local_2c[10] = '\0';
        local_2c[0xb] = '\0';
        local_2c[0xc] = '\0';
        local_2c[0xd] = '\0';
        local_2c[0xe] = '\0';
        local_2c[0xf] = '\0';
        local_34 = FUN_140dc85d0(lVar5);
        local_30 = FUN_140dc84f0(lVar5);
        local_38 = FUN_140dc85e0(lVar5);
        _Source = (char *)FUN_140dc8540(lVar5);
        strncpy(local_2c,_Source,0x10);
        uVar4 = FUN_140dd1510((longlong)local_448,&local_38);
        if ((char)uVar4 == '\0') {
          log_InlineLogERROR("CSynInfo::SendSelfMerit, failed in AppendMerit");
          uVar4 = FUN_140dd12d0((undefined8 *)local_448);
          uVar4 = uVar4 & 0xffffffffffffff00;
        }
        else {
          iVar1 = FUN_140dd15d0((longlong)local_448);
          if (iVar1 < 1) {
            uVar4 = FUN_140dd12d0((undefined8 *)local_448);
            uVar4 = uVar4 & 0xffffffffffffff00;
          }
          else {
            (**(code **)(*plVar2 + 0x160))(plVar2,param_2,local_448);
            uVar3 = FUN_140dd12d0((undefined8 *)local_448);
            uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          }
        }
      }
    }
  }
  return uVar4;
}




void FUN_140dcf780(longlong *param_1)

{
  FUN_140dcf290(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcf7b0(longlong *param_1,undefined8 *param_2)

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
  FUN_140dcf300(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140dcf860(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140dcf430((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




void FUN_140dcf8c0(longlong *param_1)

{
  FUN_140dcf290(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcf8f0(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CSynInfo::vftable;
  if ((void *)param_1[0x27] != (void *)0x0) {
    operator_delete((void *)param_1[0x27]);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  operator_delete((void *)param_1[0x24]);
  FUN_140dcf290(param_1 + 0x1c);
  operator_delete((void *)param_1[0x1c]);
  FUN_140dbd7e0(param_1 + 0xc);
  operator_delete((void *)param_1[0xc]);
  FUN_140dbd7e0(param_1 + 4);
  operator_delete((void *)param_1[4]);
  return;
}




void FUN_140dcf9b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_58 [3];
  void *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)FUN_140db7190();
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    local_58[0] = operator_new(8);
    if (local_58[0] == (longlong *)0x0) {
      local_58[0] = (longlong *)0x0;
    }
    else {
      *local_58[0] = (longlong)local_58;
    }
    local_40 = (void *)0x0;
    local_38 = 0;
    local_30 = 0;
    plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x90);
    plVar1 = *(longlong **)(param_1 + 0x60);
LAB_140dcfa80:
    plVar5 = *(longlong **)(param_1 + 0x90);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x60))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 != plVar5) {
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
      FUN_140dc5040((longlong *)local_58,(undefined4 *)(plVar4 + 3));
      if (plVar1 == (longlong *)0x0) {
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
            bVar7 = plVar5 == (longlong *)plVar4[2];
            plVar5 = plVar4;
          } while (bVar7);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dcfa80;
    }
    (**(code **)(*plVar3 + 0x188))(plVar3,local_58,param_2);
    if (local_40 != (void *)0x0) {
      operator_delete(local_40);
    }
    local_40 = (void *)0x0;
    local_38 = 0;
    local_30 = 0;
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_140dcfbb0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_res20 [2];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    plVar7 = (longlong *)FUN_140db7190();
    if (plVar7 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
    }
    else {
      plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x90);
      plVar2 = *(longlong **)(param_1 + 0x60);
LAB_140dcfc70:
      plVar9 = *(longlong **)(param_1 + 0x90);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x60))) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 != plVar9) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar2;
        }
        if (plVar8 == *(longlong **)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar1 = (undefined4)plVar8[3];
        local_res20[0] = uVar1;
        cVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar1);
        if ((cVar4 != '\0') && (cVar4 = (**(code **)*plVar7)(plVar7,uVar1), cVar4 != '\0')) {
          iVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,uVar1);
          iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,uVar1);
          cVar4 = FUN_140db1490(param_2,iVar5,iVar6);
          if (cVar4 != '\0') {
            FUN_140dc5040(param_3,local_res20);
          }
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar8 + 0x1d) == '\0') {
          plVar9 = plVar8;
          plVar3 = (longlong *)plVar8[2];
          if (*(char *)(plVar8[2] + 0x1d) == '\0') {
            do {
              plVar8 = plVar3;
              plVar3 = (longlong *)*plVar8;
            } while (*(char *)(*plVar8 + 0x1d) == '\0');
          }
          else {
            do {
              plVar8 = (longlong *)plVar9[1];
              if (*(char *)((longlong)plVar8 + 0x1d) != '\0') break;
              bVar11 = plVar9 == (longlong *)plVar8[2];
              plVar9 = plVar8;
            } while (bVar11);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_140dcfc70;
      }
    }
  }
  return;
}




void FUN_140dcfdc0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x140);
  if (plVar1 < *(longlong **)(param_1 + 0x138)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (*(longlong **)(param_1 + 0x140) < plVar3) {
    _invalid_parameter_noinfo();
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x120))) {
    _invalid_parameter_noinfo();
  }
  FUN_140dcf430(plVar3,plVar1,(longlong)plVar1 - (longlong)plVar3 >> 3,0);
  FUN_140dcdc50(param_1);
  if (param_2 != 0) {
    FUN_140dcf560(param_1,param_2);
  }
  return;
}




undefined8 * FUN_140dcfec0(undefined8 *param_1)

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
  lVar2 = FUN_140dcbf40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dcff40(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *_Source;
  
  *param_1 = frontier_flag_war::CSynInfo::vftable;
  param_1[1] = param_2;
  plVar3 = (longlong *)0x0;
  param_1[2] = 0;
  *(char *)(param_1 + 3) = param_3;
  FUN_140dc4d30(param_1 + 4);
  FUN_140dc4d30(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  FUN_140dcfec0(param_1 + 0x1c);
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x24);
    plVar3 = plVar2;
  }
  param_1[0x24] = plVar3;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(bool *)((longlong)param_1 + 0x154) = param_3 == '\0';
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,1);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x15) = uVar1;
    plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],2);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
    plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],4);
    uVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    *(undefined4 *)(param_1 + 0x16) = uVar1;
    plVar3 = (longlong *)(**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],3);
    _Source = (char *)(**(code **)(*plVar3 + 0x78))(plVar3);
    strncpy((char *)((longlong)param_1 + 0xb4),_Source,0x24);
    *(undefined1 *)((longlong)param_1 + 0xd7) = 0;
  }
  return param_1;
}




undefined8 * FUN_140dd00c0(undefined8 *param_1,uint param_2)

{
  FUN_140dcf8f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140dcafb0(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140dd00f0(int param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined8 local_40;
  char local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_140deb538 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    local_58 = 0x5d;
    log_InlineLogERROR(&DAT_140dd9588);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    _snprintf(local_38,0x24,"Fake-%d");
    plVar2 = (longlong *)InstanceGet();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_flag_war");
    puVar4 = (undefined8 *)0x0;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
      (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
      (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
      (**(code **)(*plVar3 + 0xb0))(plVar3,1);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
      (**(code **)(*plVar3 + 0x80))(plVar3,local_38);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
      (**(code **)(*plVar3 + 0xb0))(plVar3,0);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
      (**(code **)(*plVar3 + 0xb8))(plVar3,(param_1 * 5 + -50000) * 2);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,7);
      (**(code **)(*plVar3 + 0xb0))(plVar3,10);
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,8);
      (**(code **)(*plVar3 + 0xb0))(plVar3,0);
      cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,1);
      if (cVar1 == '\0') {
        (**(code **)*plVar2)(plVar2,1);
        log_InlineLogERROR("CSynInfo::CreateNew, failed in create server info");
        puVar4 = (undefined8 *)0x0;
      }
      else {
        local_48 = (undefined8 *)FUN_140dcaf50(0x158);
        if (local_48 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = FUN_140dcff40(local_48,plVar2,'\x01');
        }
        if (puVar4 == (undefined8 *)0x0) {
          local_58 = 0x7a;
          log_InlineLogERROR(&DAT_140dd9588);
          (**(code **)(*plVar2 + 0x40))(plVar2,0);
          (**(code **)*plVar2)(plVar2,1);
          puVar4 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar4;
}




undefined8 * FUN_140dd0360(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0xb8))(param_2,param_1);
    puVar8 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      plVar6 = (longlong *)InstanceGet();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,"cq_flag_war");
      puVar8 = (undefined8 *)0x0;
      if (plVar6 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,1);
        (**(code **)(*plVar7 + 0xb8))(plVar7,param_1);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,2);
        lVar1 = *plVar7;
        uVar3 = (**(code **)(*param_2 + 0xc0))(param_2,param_1);
        (**(code **)(lVar1 + 0xb8))(plVar7,uVar3);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,4);
        lVar1 = *plVar7;
        uVar3 = (**(code **)(*param_2 + 200))(param_2,param_1);
        (**(code **)(lVar1 + 0xb8))(plVar7,uVar3);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,3);
        (**(code **)(*plVar7 + 0x80))(plVar7,lVar5);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,5);
        (**(code **)(*plVar7 + 0xb0))(plVar7,0);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,6);
        (**(code **)(*plVar7 + 0xb0))(plVar7,0);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,7);
        (**(code **)(*plVar7 + 0xb0))(plVar7,0);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,8);
        (**(code **)(*plVar7 + 0xb0))(plVar7,0);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,9);
        lVar5 = *plVar7;
        iVar4 = tq::DateStamp(0);
        (**(code **)(lVar5 + 0xb0))(plVar7,iVar4);
        cVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,1);
        if (cVar2 == '\0') {
          (**(code **)*plVar6)(plVar6,1);
          log_InlineLogERROR("CSynInfo::CreateNew, failed in create server info");
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)FUN_140dcaf50(0x158);
          if (puVar8 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            puVar8 = FUN_140dcff40(puVar8,plVar6,'\0');
          }
          if (puVar8 == (undefined8 *)0x0) {
            log_InlineLogERROR(&DAT_140dd9588);
            (**(code **)(*plVar6 + 0x40))(plVar6,0);
            (**(code **)*plVar6)(plVar6,1);
            puVar8 = (undefined8 *)0x0;
          }
        }
      }
    }
  }
  return puVar8;
}




undefined8 * FUN_140dd0600(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_140dcaf50(0x158);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140dcff40(puVar1,param_1,'\x01');
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
      (**(code **)(*param_1 + 0x40))(param_1,0);
      (**(code **)*param_1)(param_1,1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_140dd06d0(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint local_res10 [2];
  undefined8 *local_res20;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  longlong local_40 [3];
  
  local_res10[0] = param_2;
  lVar3 = FUN_140db7190();
  if (lVar3 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    puVar4 = (undefined8 *)0x0;
    local_res20 = (undefined8 *)0x0;
    FUN_140dce2f0((longlong *)(param_1 + 0xe0),(longlong *)&local_50,local_res10);
    puVar1 = *(undefined8 **)(param_1 + 0x110);
    local_40[0] = *(longlong *)(param_1 + 0xe0);
    if ((CONCAT44(uStack_4c,local_50) == 0) || (CONCAT44(uStack_4c,local_50) != local_40[0])) {
      _invalid_parameter_noinfo();
    }
    if (local_48 == puVar1) {
      puVar4 = FUN_140dc89e0(lVar3,param_3);
      local_res20 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        log_InlineLogERROR("CSynInfo::AddUserSaveMerit, failed in create CFrontierFlagWarUser");
        return;
      }
      local_50 = param_2;
      local_48 = puVar4;
      FUN_140dcdd80((longlong *)(param_1 + 0xe0),local_40,&local_50);
      FUN_140dcf7b0((longlong *)(param_1 + 0x120),&local_res20);
    }
    FUN_140dcfdc0(param_1,0);
    iVar2 = FUN_140dc84f0((longlong)puVar4);
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar2;
    FUN_140dc0460((longlong *)(param_1 + 0x20),local_40,local_res10);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dd0870(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  IStringManager *pIVar7;
  char *_Format;
  longlong lVar8;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  uint local_198 [2];
  undefined8 *local_190;
  uint local_188;
  undefined4 uStack_184;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  longlong *local_168 [4];
  char local_148;
  undefined1 local_147 [255];
  ulonglong local_48;
  
  local_170 = 0xfffffffffffffffe;
  local_48 = DAT_140deb538 ^ (ulonglong)auStack_1c8;
  plVar5 = (longlong *)FUN_140db7190();
  if (plVar5 == (longlong *)0x0) {
    local_1a8 = 0x10e;
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if ((param_3 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
    if (iVar3 == iVar1) {
      iVar1 = *(int *)(param_1 + 0xa8);
      iVar3 = (**(code **)(*plVar5 + 8))(plVar5,param_2);
      if (iVar3 == iVar1) {
        lVar8 = 0;
        local_190 = (undefined8 *)0x0;
        local_198[0] = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
        FUN_140dce2f0((longlong *)(param_1 + 0xe0),(longlong *)&local_188,local_198);
        local_178 = *(undefined8 **)(param_1 + 0x110);
        local_168[0] = *(longlong **)(param_1 + 0xe0);
        plVar2 = (longlong *)CONCAT44(uStack_184,local_188);
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_168[0])) {
          _invalid_parameter_noinfo();
        }
        puVar6 = local_180;
        if (local_180 == local_178) {
          puVar6 = FUN_140dc8e70(param_2,plVar5,param_3);
          local_190 = puVar6;
          if (puVar6 == (undefined8 *)0x0) {
            log_InlineLogERROR("CSynInfo::AddUserMerit, failed in create CFrontierFlagWarUser");
            return;
          }
          local_188 = local_198[0];
          local_180 = puVar6;
          FUN_140dcdd80((longlong *)(param_1 + 0xe0),(longlong *)local_168,&local_188);
          FUN_140dcf7b0((longlong *)(param_1 + 0x120),&local_190);
        }
        else {
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar8 = *plVar2;
          }
          if (puVar6 == *(undefined8 **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar6 = (undefined8 *)puVar6[4];
          local_190 = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            FUN_140dc85c0((longlong)puVar6,param_2);
            FUN_140dc8500((longlong)puVar6,param_3);
          }
        }
        FUN_140dcfdc0(param_1,param_2);
        if (puVar6 != (undefined8 *)0x0) {
          local_148 = '\0';
          memset(local_147,0,0xff);
          pIVar7 = theInstance();
          uVar4 = FUN_140dc84f0((longlong)puVar6);
          _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_VEXILLUM_MERIT_CHG");
          local_1a8 = uVar4;
          _snprintf(&local_148,0x100,_Format);
          (**(code **)(*plVar5 + 0x170))(plVar5,param_2,&local_148);
        }
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + param_3;
      }
      else {
        (**(code **)(*plVar5 + 8))(plVar5,param_2);
        log_InlineLogERROR("CSynInfo::AddUserMerit. Syndicate ID[%u], User Syndicate ID[%u], Merit[%d]");
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
      log_InlineLogERROR("CSynInfo::AddUserMerit. ServerID[%u], User_ServerID[%u], Merit[%d]");
    }
  }
  return;
}




void FUN_140dd0b50(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    lVar2 = FUN_140db7190();
    if (lVar2 == 0) {
      log_InlineLogERROR(&DAT_140dd9588);
    }
    else {
      iVar1 = FUN_140db14c0(param_3);
      FUN_140dd0870(param_1,param_2,iVar1 * 0xf);
      iVar1 = FUN_140db14c0(param_3);
      FUN_140dca150(param_1,iVar1 * 0xf);
    }
  }
  return;
}




CMsg * FUN_140dd0c20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140dd0c50(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140dd0c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd0c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140dd0c70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd0c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140dd0c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd0c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140dd0c90(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd0cc0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWar::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd0d10(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWar::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd0d40(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9c6);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140dd0d80(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9c6;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 8;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_140dd0dc0(longlong param_1,int param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if (*(short *)(*(longlong *)(param_1 + 0x408) + 4) == 3) {
    plVar2 = (longlong *)FUN_140db7190();
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 6) = uVar1;
      (**(code **)(*plVar2 + 0x160))(plVar2,param_2,param_1);
    }
  }
  return;
}




undefined8 * FUN_140dd0eb0(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWar::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd0f00(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWarAltar::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd0f50(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarAltar::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd0f80(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9c9);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140dd0fc0(longlong param_1,undefined2 param_2,void *param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  memcpy((void *)(*(longlong *)(param_1 + 0x408) + 8),param_3,0x2c);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9c9;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x34;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_140dd1020(void)

{
  return;
}




undefined8 * FUN_140dd1030(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarAltar::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd1080(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWarFlag::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd10d0(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarFlag::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd1100(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9ca);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140dd1140(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9ca;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0xc;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_140dd1180(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  
  if ((int)param_2 == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
  }
  else {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x408) + 4);
    if (sVar1 == 0) {
      (**(code **)(*param_3 + 0x88))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8));
    }
    else if (sVar1 == 1) {
      (**(code **)(*param_3 + 0x90))(param_3);
    }
  }
  return;
}




undefined8 * FUN_140dd1230(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarFlag::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd1280(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWarMerit::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd12d0(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarMerit::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140dd1300(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9c8;
  **(undefined2 **)(param_1 + 0x408) = 0x20;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0x18) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140dd1380(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9c8);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140dd13c0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9c8;
  **(undefined2 **)(param_1 + 0x408) = 0x20;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
  return CONCAT71((uint7)(uint3)((uint)param_6 >> 8),1);
}




void FUN_140dd1430(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (((int)param_2 != 0) || (*(short *)(*(longlong *)(param_1 + 0x408) + 4) == 2)) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x408);
    sVar1 = *(short *)(lVar2 + 4);
    if (sVar1 == 2) {
      (**(code **)(*param_3 + 0xb8))(param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      if (sVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000140dd14e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0xc0))(param_3,param_2,*(undefined4 *)(lVar2 + 0x1c));
        return;
      }
      if (sVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x000140dd14cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 200))(param_3);
        return;
      }
      if (sVar1 == 6) {
                    /* WARNING: Could not recover jumptable at 0x000140dd14be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*param_3)(param_3);
        return;
      }
      if (sVar1 == 7) {
                    /* WARNING: Could not recover jumptable at 0x000140dd14b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 8))(param_3);
        return;
      }
    }
  }
  return;
}




ulonglong FUN_140dd1510(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  short *psVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(ushort **)(param_1 + 0x408) == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    uVar4 = extraout_RAX;
  }
  else {
    uVar4 = (ulonglong)**(ushort **)(param_1 + 0x408) + 0x1c;
    if (uVar4 < 0x400) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      lVar5 = (longlong)*(int *)(lVar2 + 0x14) * 0x1c;
      *(undefined4 *)(lVar5 + 0x20 + lVar2) = *param_2;
      *(undefined4 *)(lVar5 + 0x24 + lVar2) = param_2[1];
      *(undefined4 *)(lVar5 + 0x28 + lVar2) = param_2[2];
      *(undefined4 *)(lVar5 + 0x2c + lVar2) = param_2[3];
      *(undefined4 *)(lVar5 + 0x30 + lVar2) = param_2[4];
      *(undefined4 *)(lVar5 + 0x34 + lVar2) = param_2[5];
      *(undefined4 *)(lVar5 + 0x38 + lVar2) = param_2[6];
      piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0x14);
      *piVar1 = *piVar1 + 1;
      psVar3 = *(short **)(param_1 + 0x408);
      *psVar3 = *psVar3 + 0x1c;
      return CONCAT71((int7)((ulonglong)psVar3 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




undefined4 FUN_140dd15d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14);
}




undefined8 * FUN_140dd1620(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarMerit::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd1670(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWarRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd16c0(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd16f0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9cb);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140dd1780(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9cb;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x18;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




undefined8 FUN_140dd17d0(longlong param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9cb;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x18;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




ulonglong FUN_140dd1830(longlong param_1,void *param_2)

{
  int *piVar1;
  short sVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar3 + 0x48) {
    return (ulonglong)puVar3 & 0xffffffffffffff00;
  }
  memcpy(puVar3 + (longlong)*(int *)(puVar3 + 6) * 0x24 + 0xc,param_2,0x48);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0xc);
  *piVar1 = *piVar1 + 1;
  sVar2 = (*(short **)(param_1 + 0x408))[6];
  **(short **)(param_1 + 0x408) = sVar2 * 0x48 + 0x60;
  return CONCAT71((uint7)(byte)((ushort)(sVar2 * 8) >> 8),1);
}




ulonglong FUN_140dd18b0(longlong param_1,void *param_2)

{
  int *piVar1;
  ushort *puVar2;
  short sVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x3c) {
    return (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  memcpy(puVar2 + (longlong)*(int *)(puVar2 + 6) * 0x1e + 0xc,param_2,0x3c);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0xc);
  *piVar1 = *piVar1 + 1;
  sVar3 = (*(short **)(param_1 + 0x408))[6] * 0x3c + 0x60;
  **(short **)(param_1 + 0x408) = sVar3;
  return CONCAT71((uint7)(byte)((ushort)sVar3 >> 8),1);
}




void FUN_140dd1920(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140dd9588);
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x408);
    if (*(short *)(lVar1 + 4) == 1) {
      (**(code **)(*param_3 + 0xd0))(param_3,param_2,*(undefined1 *)(lVar1 + 0x10));
    }
    else if (*(short *)(lVar1 + 4) == 4) {
                    /* WARNING: Could not recover jumptable at 0x000140dd1989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0xd8))(param_3,param_2,*(undefined1 *)(lVar1 + 0x10));
      return;
    }
  }
  return;
}




undefined4 FUN_140dd19b0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc);
}




undefined8 * FUN_140dd19c0(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarRank::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd1a10(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = frontier_flag_war::CMsgCrossFlagWarResult::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd1a60(undefined8 *param_1)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarResult::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd1a90(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(9,*(short *)(param_1 + 10) == 0x9c7);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_140dd1ad0(longlong param_1,char *param_2)

{
  ulonglong extraout_RAX;
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140dd9588);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x9c7;
  **(undefined2 **)(param_1 + 0x408) = 0x104;
  pcVar1 = strncpy((char *)(*(longlong *)(param_1 + 0x408) + 4),param_2,0x100);
  return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
}




void FUN_140dd1b50(void)

{
  return;
}




undefined8 * FUN_140dd1b60(undefined8 *param_1,byte param_2)

{
  *param_1 = frontier_flag_war::CMsgCrossFlagWarResult::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd1bb0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgTalk::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x29),0x3dd,true);
  return param_1;
}




void FUN_140dd1c30(undefined8 *param_1)

{
  *param_1 = CMsgTalk::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140dd1c70(CMsg *param_1,char *param_2,char *param_3,char *param_4,char *param_5,undefined4 param_6,undefined2 param_7,undefined2 param_8,
                       undefined4 param_9,undefined1 param_10)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  ulong uVar7;
  uint uVar8;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar9;
  char *pcVar10;
  
  if (param_2 != (char *)0x0) {
    uVar9 = 0xffffffffffffffff;
    in_RAX = 0;
    pcVar10 = param_2;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if ((~uVar9 - 1 < 0x10) && (param_3 != (char *)0x0)) {
      uVar9 = 0xffffffffffffffff;
      pcVar10 = param_3;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if ((~uVar9 - 1 < 0x10) && (in_RAX = 0, param_4 != (char *)0x0)) {
        uVar9 = 0xffffffffffffffff;
        pcVar10 = param_4;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (~uVar9 - 1 < 0x100) {
          if (param_5 != (char *)0x0) {
            uVar9 = 0xffffffffffffffff;
            pcVar10 = param_5;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            if (0xf < ~uVar9 - 1) {
              return 0;
            }
          }
          tq::CMsg::Init(param_1);
          *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_6;
          *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
          *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_8;
          uVar7 = tq::SysTimeGet();
          *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar7;
          *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_9;
          *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_10;
          bVar2 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
          bVar3 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
          bVar4 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_5);
          bVar5 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_4);
          uVar7 = tq::TimeGet(0);
          *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar7;
          *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3ec;
          uVar8 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
          sVar6 = (short)uVar8 + 0x23;
          **(short **)(param_1 + 0x408) = sVar6;
          return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar8) >> 0x10),sVar6) >> 8),((bVar2 && bVar3) && bVar4) && bVar5);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_140dd1e50(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulong uVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if ((bVar1) && (in_RAX = 0x3ec, *(short *)(param_1 + 10) == 0x3ec)) {
      uVar2 = tq::SysTimeGet();
      *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar2;
      return CONCAT71((int7)(CONCAT44(extraout_var_00,uVar2) >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 * FUN_140dd1ea0(undefined8 *param_1,uint param_2)

{
  *param_1 = CMsgTalk::vftable;
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
  
  local_res10 = _decode_pointer(DAT_140debb50);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140debb50);
    local_res18[0] = _decode_pointer(DAT_140debb48);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140debb50 = _encode_pointer(local_res10);
    DAT_140debb48 = _encode_pointer(local_res18[0]);
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
  if ((_StackCookie == DAT_140deb538) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_140dd2208(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_140dd22c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140debb48 = _encode_pointer(puVar1);
  DAT_140debb50 = DAT_140debb48;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140dd293c();
    atexit(FUN_140dd2974);
    atexit((_func_5014 *)&LAB_140dd2930);
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
    if (DAT_140deb5a4 < 1) {
      return 0;
    }
    DAT_140deb5a4 = DAT_140deb5a4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140debb38 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140debb38;
        pvVar3 = DAT_140debb38;
      }
      DAT_140debb38 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140dd239e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140dd239e:
    if (DAT_140debb30 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140debb50);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140debb48);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140debb50);
            plVar12 = (longlong *)_decode_pointer(DAT_140debb48);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140debb48 = _encoded_null();
        DAT_140debb50 = DAT_140debb48;
      }
      DAT_140debb30 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140debb38 = (void *)0x0;
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
      bVar13 = DAT_140debb38 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140debb38;
        pvVar3 = DAT_140debb38;
      }
      DAT_140debb38 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140dd24c7;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140dd24c7:
    if (DAT_140debb30 == 0) {
      DAT_140debb30 = 1;
      iVar4 = _initterm_e(&DAT_140dd92c0,&DAT_140dd92d0);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140dd92b0,&DAT_140dd92b8);
      DAT_140debb30 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140debb38 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140debb40 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140debb40), BVar5 != 0)) {
      (*DAT_140debb40)(param_1,2,param_3);
    }
    DAT_140deb5a4 = DAT_140deb5a4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140dd2640) */
/* WARNING: Removing unreachable block (ram,0x000140dd25d7) */
/* WARNING: Removing unreachable block (ram,0x000140dd267b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140deb5a4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140deb550 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140deb550 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140dc9280();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140dc9280();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140deb550 = 0xffffffff;
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




undefined8 FUN_140dd26f8(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140deb650);
  local_30 = DAT_140deb748;
  local_38 = RtlLookupFunctionEntry(DAT_140deb748,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140deb6e8 = local_res8;
    DAT_140deb748 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140deb650,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140deb5c0 = DAT_140deb748;
  _DAT_140deb6d0 = local_res8[0];
  _DAT_140deb5b0 = 0xc0000409;
  _DAT_140deb5b4 = 1;
  local_20 = DAT_140deb538;
  local_18 = DAT_140deb540;
  DAT_140deb648 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140ddebd8);
  if (DAT_140deb648 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140dd293c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140ddf778; puVar1 < &DAT_140ddf778; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140dd2974(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140ddf788; puVar1 < &DAT_140ddf788; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140db0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140db0000);
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
  if (DAT_140deb538 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140deb538 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140deb538 == 0x2b992ddfa232) {
      DAT_140deb538 = 0x2b992ddfa233;
    }
  }
  DAT_140deb540 = ~DAT_140deb538;
  return;
}




void Unwind_140dd2bd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2bf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2c30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2c50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2c70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2c90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2cb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2cf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2d10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2d30(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2d50(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2d70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2d90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2db0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2df0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2e10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd2e30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd2e50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd2e70(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd2e90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2eb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2ed0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2ef0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd2f10(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2f30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd2f50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd2f70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd2f90(void)

{
  DAT_140deb568 = DAT_140deb568 & 0xfffffffe;
  return;
}




void Unwind_140dd2fb0(void)

{
  DAT_140deb568 = DAT_140deb568 & 0xfffffffe;
  return;
}




void Unwind_140dd2fd0(void)

{
  DAT_140deb568 = DAT_140deb568 & 0xfffffffe;
  return;
}




void Unwind_140dd2ff0(void)

{
  DAT_140deb568 = DAT_140deb568 & 0xfffffffe;
  return;
}




void Unwind_140dd3010(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3030(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Catch_140dd3050(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3070(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3090(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd30b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd30d0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd30f0(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3110(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3130(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3150(undefined8 param_1,longlong param_2)

{
  FUN_140db22d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3170(undefined8 param_1,longlong param_2)

{
  FUN_140db22d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3190(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd31b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd31d0(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140dd31f0(undefined8 param_1,longlong param_2)

{
  FUN_140db22d0(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140dd3210(undefined8 param_1,longlong param_2)

{
  FUN_140db3100((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_140dd3230(undefined8 param_1,longlong param_2)

{
  FUN_140db3100((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd3250(undefined8 param_1,longlong param_2)

{
  FUN_140db22d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3270(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd3290(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x70));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd32c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd32e0(undefined8 param_1,longlong param_2)

{
  FUN_140db3100((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd3300(undefined8 param_1,longlong param_2)

{
  FUN_140db22d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3320(undefined8 param_1,longlong param_2)

{
  FUN_140db1e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3340(undefined8 param_1,longlong param_2)

{
  FUN_140db1c90(*(void **)(param_2 + 0x60));
  return;
}




undefined * Catch_140dd3360(void)

{
  log_InlineLogCATCH_ERROR("CAltar::CreateNew,altar id: %u, x:%u, y:%u @%s,%d");
  return &DAT_140db3ad8;
}




void Unwind_140dd33b0(void)

{
  DAT_140deb578 = DAT_140deb578 & 0xfffffffe;
  return;
}




void Unwind_140dd33d0(void)

{
  DAT_140deb578 = DAT_140deb578 & 0xfffffffe;
  return;
}




void Unwind_140dd33f0(void)

{
  DAT_140deb578 = DAT_140deb578 & 0xfffffffe;
  return;
}




void Unwind_140dd3410(void)

{
  DAT_140deb578 = DAT_140deb578 & 0xfffffffe;
  return;
}




void Unwind_140dd3430(undefined8 param_1,longlong param_2)

{
  FUN_140db4370(*(void **)(param_2 + 0x38));
  return;
}




undefined * Catch_140dd3450(void)

{
  log_InlineLogCATCH_ERROR("CFlag::CreateNew,Flag id: %u, x:%u, y:%u @%s,%d");
  return &DAT_140db4534;
}




undefined8 Catch_140dd34a0(void)

{
  log_InlineLogCATCH_ERROR("CFlag::OnTimer, flag npc: %u @%s,%d");
  return 0x140db46bb;
}




void Unwind_140dd34e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd3520(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3540(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3580(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd35a0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd35c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd35e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd3600(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd3620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd3660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd3680(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd36a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd36c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd36e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd3700(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd3720(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3740(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd3760(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd3780(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd37a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd37c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd37e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd3800(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd3820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3840(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd3860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd3880(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd38a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd38c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd38e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3920(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3980(undefined8 param_1,longlong param_2)

{
  FUN_140dd1c30((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140dd39a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1a60((undefined8 *)(param_2 + 0x4b0));
  return;
}




void Unwind_140dd39c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1a60((undefined8 *)(param_2 + 0x8c0));
  return;
}




undefined8 Catch_140dd39e0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::BroadcastResult @%s,%d");
  return 0x140db75bf;
}




void Unwind_140dd3a20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3a40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3aa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3ac0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd3b00(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd3b20(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3b40(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3b60(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3b80(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3ba0(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3bc0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3be0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3c00(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd3c20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3c50(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd3c70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3ca0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3cc0(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd3ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3d10(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3d30(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3d50(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3d70(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd3d90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3dc0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3de0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3e00(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3e20(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd3e40(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd3e60(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3e80(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3ea0(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3ec0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3ee0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3f00(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3f20(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3f40(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3f60(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3f80(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3fa0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd3fc0(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd3fe0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4000(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd4040(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd4080(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd40a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd40c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd40e0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Catch_140dd4100(undefined8 param_1,longlong param_2)

{
  FUN_140db9080(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd4130(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4150(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4170(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4190(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd41b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd41d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd41f0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4210(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4230(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4250(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4270(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4290(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd42b0(undefined8 param_1,longlong param_2)

{
  FUN_140db8fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd42d0(undefined8 param_1,longlong param_2)

{
  FUN_140db8fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd42f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4310(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4330(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4350(undefined8 param_1,longlong param_2)

{
  FUN_140db8fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4370(undefined8 param_1,longlong param_2)

{
  FUN_140db8fc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4390(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd43b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd43d0(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd43f0(undefined8 param_1,longlong param_2)

{
  FUN_140db8fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4410(undefined8 param_1,longlong param_2)

{
  FUN_140db8fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4430(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4450(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4470(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4490(undefined8 param_1,longlong param_2)

{
  FUN_140db9000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd44b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd44d0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd44f0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4510(undefined8 param_1,longlong param_2)

{
  FUN_140db9020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4530(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4550(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4570(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4590(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd45b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd45d0(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd45f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4630(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd4650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd4670(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd4690(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd46b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd46d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd46f0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd4710(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4730(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4750(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4770(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4790(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd47b0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd47d0(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd47f0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd4810(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::QueryFlag, flag npc: %u @%s,%d");
  return 0x140dbe5a4;
}




undefined8 Catch_140dd4850(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::QueryAltar, flag npc: %u @%s,%d");
  return 0x140dbe6d7;
}




void Unwind_140dd4890(undefined8 param_1,longlong param_2)

{
  FUN_140dd1a60((undefined8 *)(param_2 + 0xc0));
  return;
}




undefined8 Catch_140dd48b0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::BroadcastRank @%s,%d");
  return 0x140dbef8b;
}




void Unwind_140dd48f0(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd4910(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::CreateSyndicateRankMsg @%s,%d");
  return 0x140dbf452;
}




void Unwind_140dd4950(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd4970(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::CreateAltarMsg @%s,%d");
  return &DAT_140dbf756;
}




void Unwind_140dd49b0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1c30((undefined8 *)(param_2 + 0x480));
  return;
}




void Unwind_140dd49d0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0f50((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_140dd49f0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::RefreshHighRateAltar @%s,%d");
  return &DAT_140dbfa17;
}




void Unwind_140dd4a30(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4a50(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4a70(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4a90(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4ab0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4ad0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4af0(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_140dd4b10(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4b30(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4b50(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4b70(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4b90(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd4bb0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_140dd4bd0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::BroadcastFinalRank @%s,%d");
  return 0x140dbff8a;
}




undefined8 Catch_140dd4c10(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::SaveFinalSynInfo @%s,%d");
  return 0x140dc01bd;
}




void Unwind_140dd4c50(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4c70(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4c90(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4cb0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4cd0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4cf0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d10(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d30(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d50(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4d70(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d90(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4db0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4dd0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4df0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd4e10(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4e30(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4e50(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4e70(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd4e90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4ec0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4ee0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4f10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4f30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4f60(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4f80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd4fb0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_140dd4fd0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAltar) @%s,%d");
  return &DAT_140dc1cde;
}




undefined * Catch_140dd5010(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFlag) @%s,%d");
  return &DAT_140dc1df4;
}




undefined * Catch_140dd5050(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::Release @%s,%d");
  return &DAT_140dc1e96;
}




undefined8 Catch_140dd5090(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnAttackAltar, user: %u, altar: %u @%s,%d");
  return 0x140dc2233;
}




void Unwind_140dd50e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd5100(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::BroadcastSyndicateRank @%s,%d");
  return 0x140dc22f2;
}




undefined * Catch_140dd5140(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::CreateSyndicateRankMsg @%s,%d");
  return &DAT_140dc25c5;
}




void Unwind_140dd5180(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140dd51a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140dd51c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140dd51e0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5200(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5220(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5240(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5260(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5280(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd52a0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd7e0(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd52d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd52f0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5310(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5330(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5350(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5370(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5390(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd53b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd53d0(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd53f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5410(undefined8 param_1,longlong param_2)

{
  FUN_140db9000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5430(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5450(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5470(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5490(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd54b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd54d0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd54f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5510(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5530(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5550(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5570(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5590(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd55b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd55d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd5600(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd5620(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5640(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5660(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5680(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd56a0(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd56c0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd56e0(undefined8 param_1,longlong param_2)

{
  FUN_140dc2be0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5700(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5720(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5740(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5760(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5780(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd57a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc3970((longlong *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_140dd57c0(undefined8 param_1,longlong param_2)

{
  FUN_140dbcc00((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x70));
  return;
}




void Unwind_140dd57e0(undefined8 param_1,longlong param_2)

{
  FUN_140dbcd40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xa0));
  return;
}




void Unwind_140dd5800(undefined8 param_1,longlong param_2)

{
  FUN_140dbce80((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_140dd5820(undefined8 param_1,longlong param_2)

{
  FUN_140dc2c10((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x100));
  return;
}




void Unwind_140dd5840(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x130));
  return;
}




void Unwind_140dd5860(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x170));
  return;
}




void Unwind_140dd5880(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140dd58a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd58c0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd58e0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5900(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5920(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5940(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5960(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5980(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd59a0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd59c0(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd59e0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5a00(undefined8 param_1,longlong param_2)

{
  FUN_140db9000(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5a20(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5a40(undefined8 param_1,longlong param_2)

{
  FUN_140db8fe0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5a60(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5a80(undefined8 param_1,longlong param_2)

{
  FUN_140db8fc0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5aa0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5ac0(undefined8 param_1,longlong param_2)

{
  FUN_140db8fa0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5ae0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd5b00(undefined8 param_1,longlong param_2)

{
  FUN_140dc2be0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5b20(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5b40(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5b60(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5b80(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5ba0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd5bc0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return &DAT_140dc3dc6;
}




undefined * Catch_140dd5c00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pUserRes) @%s,%d");
  return &DAT_140dc3df5;
}




void Unwind_140dd5c40(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0xb0));
  return;
}




undefined8 Catch_140dd5c60(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::ClearData @%s,%d");
  return 0x140dc3ffc;
}




undefined8 Catch_140dd5ca0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::AddMemberMerit, User[%u] Merit[%d] @%s,%d");
  return 0x140dc4083;
}




undefined8 Catch_140dd5cf0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::GetMemberMerit @%s,%d");
  return 0x140dc40f7;
}




void Unwind_140dd5d30(undefined8 param_1,longlong param_2)

{
  FUN_140dd0f50((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd5d50(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::SendBattleInfoToUser @%s,%d");
  return 0x140dc417c;
}




void Unwind_140dd5d90(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140dd5db0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnUserSendFlagSuccessfully @%s,%d");
  return 0x140dc445a;
}




void Unwind_140dd5df0(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_140dd5e10(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd5e30(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnUserTouchFlag @%s,%d");
  return &DAT_140dc46e9;
}




undefined8 Catch_140dd5e70(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnKillUser, Attacker: %u, Target: %u, BattleEffectDistance: %d @%s,%d");
  return 0x140dc4811;
}




void Unwind_140dd5ec0(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5ee0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0f50((undefined8 *)(param_2 + 0x4e0));
  return;
}




void Unwind_140dd5f00(undefined8 param_1,longlong param_2)

{
  FUN_140dd1c30((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140dd5f20(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5f50(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5f70(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5f90(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5fb0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5fd0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5ff0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1c30((undefined8 *)(param_2 + 0xb0));
  return;
}




undefined * Catch_140dd6010(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnResetAltarOwner: altar:%u @%s,%d");
  return &DAT_140dc4cf7;
}




void Unwind_140dd6050(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6070(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6090(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd60b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd60d0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd60f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6110(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6130(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6150(undefined8 param_1,longlong param_2)

{
  FUN_140db7a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6170(undefined8 param_1,longlong param_2)

{
  FUN_140db9060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6190(undefined8 param_1,longlong param_2)

{
  FUN_140dbab90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd61b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd61d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd61f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc2be0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6210(undefined8 param_1,longlong param_2)

{
  FUN_140dc3970((longlong *)(*(longlong *)(param_2 + 0x70) + 0x30));
  return;
}




void Unwind_140dd6230(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6260(undefined8 param_1,longlong param_2)

{
  FUN_140db7a80(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd6280(undefined8 param_1,longlong param_2)

{
  FUN_140db8fa0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd62a0(undefined8 param_1,longlong param_2)

{
  FUN_140dbcc00((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x70));
  return;
}




void Unwind_140dd62c0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd62f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a90(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd6310(undefined8 param_1,longlong param_2)

{
  FUN_140db8fc0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd6330(undefined8 param_1,longlong param_2)

{
  FUN_140dbcd40((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xa0));
  return;
}




void Unwind_140dd6350(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6380(undefined8 param_1,longlong param_2)

{
  FUN_140db7aa0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd63a0(undefined8 param_1,longlong param_2)

{
  FUN_140db8fe0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd63c0(undefined8 param_1,longlong param_2)

{
  FUN_140dbce80((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xd0));
  return;
}




void Unwind_140dd63e0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6410(undefined8 param_1,longlong param_2)

{
  FUN_140db7ab0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd6430(undefined8 param_1,longlong param_2)

{
  FUN_140db9000(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_140dd6450(undefined8 param_1,longlong param_2)

{
  FUN_140dc2c10((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x100));
  return;
}




void Unwind_140dd6470(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x70) + 0x130));
  return;
}




void Unwind_140dd6490(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x70) + 0x170));
  return;
}




undefined8 Catch_140dd64b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return 0x140dc5e08;
}




undefined8 Catch_140dd64f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dc5985;
}




undefined8 Catch_140dd6530(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pSynInfo) @%s,%d");
  return 0x140dc5bb4;
}




undefined * Catch_140dd6570(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pUserRes) @%s,%d");
  return &DAT_140dc5d27;
}




undefined8 Catch_140dd65b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pSynRes) @%s,%d");
  return 0x140dc5df6;
}




undefined * Catch_140dd65f0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::Create @%s,%d");
  return &DAT_140dc5e1e;
}




void Unwind_140dd6630(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd6650(undefined8 param_1,longlong param_2)

{
  FUN_140dd0d10((undefined8 *)(param_2 + 0x470));
  return;
}




undefined * Catch_140dd6670(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::EnterBattle @%s,%d");
  return &DAT_140dc61b7;
}




void Unwind_140dd66b0(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd66d0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnDie @%s,%d");
  return &DAT_140dc630d;
}




void Unwind_140dd6710(undefined8 param_1,longlong param_2)

{
  FUN_140dd0d10((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd6730(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnLeaveMap, user:%u @%s,%d");
  return &DAT_140dc64d4;
}




void Unwind_140dd6770(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd67a0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd67c0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd67e0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6800(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6820(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6840(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6860(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140dd6880(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::InitNPC @%s,%d");
  return &DAT_140dc6871;
}




void Unwind_140dd68c0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd68f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6910(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6930(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6950(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140dd6970(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140dd6990(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140dd69b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd69d0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd69f0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd6a10(undefined8 param_1,longlong param_2)

{
  FUN_140db9040((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd6a30(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd6a50(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6a70(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd6a90(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6ab0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6ad0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6af0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6b10(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6b30(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_140dd6b50(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::BroadcastAltarRangeMsg @%s,%d");
  return 0x140dc6fe1;
}




void Unwind_140dd6b90(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd6bb0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnSynScoreChanged @%s,%d");
  return 0x140dc7372;
}




void Unwind_140dd6bf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140dd6c10(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140dd6c30(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6c60(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd6c80(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd6ca0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd6cc0(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd6ce0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x20));
  return;
}




undefined * Catch_140dd6d00(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::StartBattle @%s,%d");
  return &DAT_140dc78c1;
}




void Unwind_140dd6d40(undefined8 param_1,longlong param_2)

{
  FUN_140dd0d10((undefined8 *)(param_2 + 0xe0));
  return;
}




undefined8 Catch_140dd6d60(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnGameOver @%s,%d");
  return 0x140dc7d60;
}




undefined * Catch_140dd6da0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::UpdateSynBonus, syndicate: %u @%s,%d");
  return &DAT_140dc7fa5;
}




void Unwind_140dd6de0(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x48));
  return;
}




void Unwind_140dd6e00(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x60));
  return;
}




void Unwind_140dd6e20(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x60));
  return;
}




void Unwind_140dd6e40(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140dd6e60(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarMgr::OnTimer @%s,%d");
  return 0x140dc82d4;
}




undefined * Catch_140dd6ea0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarUser::Create, user:%u @%s,%d");
  return &DAT_140dc84d9;
}




void Unwind_140dd6ee0(void)

{
  DAT_140deb590 = DAT_140deb590 & 0xfffffffe;
  return;
}




void Unwind_140dd6f00(void)

{
  DAT_140deb590 = DAT_140deb590 & 0xfffffffe;
  return;
}




void Unwind_140dd6f20(void)

{
  DAT_140deb590 = DAT_140deb590 & 0xfffffffe;
  return;
}




void Unwind_140dd6f40(void)

{
  DAT_140deb590 = DAT_140deb590 & 0xfffffffe;
  return;
}




undefined8 Catch_140dd6f60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pRec) @%s,%d");
  return 0x140dc89be;
}




undefined * Catch_140dd6fa0(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarUser::Create, user:%u @%s,%d");
  return &DAT_140dc89c6;
}




void Unwind_140dd6fe0(undefined8 param_1,longlong param_2)

{
  FUN_140dc86f0(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dd7000(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return 0x140dc8add;
}




undefined8 Catch_140dd7040(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pRec) @%s,%d");
  return 0x140dc8cd6;
}




undefined * Catch_140dd7080(void)

{
  log_InlineLogCATCH_ERROR("CFrontierFlagWarUser::Create, user:%u @%s,%d");
  return &DAT_140dc8cf5;
}




undefined8 Catch_140dd70c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pRec) @%s,%d");
  return 0x140dc8d54;
}




void Unwind_140dd7100(void)

{
  DAT_140deb590 = DAT_140deb590 & 0xfffffffe;
  return;
}




void Unwind_140dd7120(undefined8 param_1,longlong param_2)

{
  FUN_140dc86f0(*(void **)(param_2 + 0x38));
  return;
}




undefined8 Catch_140dd7140(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return 0x140dc8e47;
}




void Unwind_140dd7180(undefined8 param_1,longlong param_2)

{
  FUN_140dc86f0(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_140dd71a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return 0x140dc8f55;
}




void Unwind_140dd71e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7200(undefined8 param_1,longlong param_2)

{
  FUN_140dc8fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7220(undefined8 param_1,longlong param_2)

{
  FUN_140dd0d10((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140dd7240(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




void Unwind_140dd7260(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x848));
  return;
}




void Unwind_140dd7280(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc58));
  return;
}




void Unwind_140dd72a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc8fa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd72c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0d10((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x28));
  return;
}




void Unwind_140dd72e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd10d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




void Unwind_140dd7300(undefined8 param_1,longlong param_2)

{
  FUN_140dd16c0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x848));
  return;
}




void Unwind_140dd7320(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc58));
  return;
}




undefined * Catch_140dd7340(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140dc93aa;
}




undefined * Catch_140dd7380(void)

{
  log_InlineLogCATCH_ERROR("FrontierFlagWar::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_140dc943f;
}




void Unwind_140dd73d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dd73f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140dc94c1;
}




undefined8 Catch_140dd7430(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pCrossFlagWarMgr) @%s,%d");
  return 0x140dca084;
}




void Unwind_140dd7470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd7490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd74b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd74d0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd74f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd7510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd7530(void)

{
  DAT_140deb5a0 = DAT_140deb5a0 & 0xfffffffe;
  return;
}




void Unwind_140dd7550(void)

{
  DAT_140deb5a0 = DAT_140deb5a0 & 0xfffffffe;
  return;
}




void Unwind_140dd7570(void)

{
  DAT_140deb5a0 = DAT_140deb5a0 & 0xfffffffe;
  return;
}




void Unwind_140dd7590(void)

{
  DAT_140deb5a0 = DAT_140deb5a0 & 0xfffffffe;
  return;
}




void Unwind_140dd75b0(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_140dd75d0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::SendMemberMeritAndBonus @%s,%d");
  return &DAT_140dcb2b3;
}




undefined * Catch_140dd7610(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::SaveAllInfo @%s,%d");
  return &DAT_140dcb360;
}




void Unwind_140dd7650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd7670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd7690(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd76b0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd76d0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd76f0(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd7710(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd7740(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd7760(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd7790(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd77b0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd77d0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd77f0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7810(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7830(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7850(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7870(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7890(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd78b0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd78d0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd78f0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7910(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7930(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7950(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7970(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7990(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd79b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd79d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd79f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd7a10(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd7a30(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7a50(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a70(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a90(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd7ab0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return &DAT_140dcd7d7;
}




void Unwind_140dd7af0(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_140dd7b10(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::SendPlayerMerit @%s,%d");
  return &DAT_140dcdc1d;
}




undefined8 Catch_140dd7b50(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::UpdateRanks @%s,%d");
  return 0x140dcdd55;
}




void Unwind_140dd7b90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd7bb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd7bd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd7bf0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd7c10(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c30(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c50(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c70(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c90(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7cb0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7cd0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7cf0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7d10(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd7d30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd7d60(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_140dd7d80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return &DAT_140dceae3;
}




undefined * Catch_140dd7dc0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::Release @%s,%d");
  return &DAT_140dcebb7;
}




undefined8 Catch_140dd7e00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pCrossFlagWarUser) @%s,%d");
  return 0x140dcee6d;
}




undefined8 Catch_140dd7e40(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::DelUserMerit @%s,%d");
  return 0x140dcee6d;
}




void Unwind_140dd7e80(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7ea0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7ec0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7ee0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7f00(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7f20(undefined8 param_1,longlong param_2)

{
  FUN_140dce510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7f40(undefined8 param_1,longlong param_2)

{
  FUN_140dd12d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd7f60(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::SendSelfMerit @%s,%d");
  return 0x140dcf757;
}




void Unwind_140dd7fa0(undefined8 param_1,longlong param_2)

{
  FUN_140dce510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7fc0(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7fe0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8000(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8020(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8040(undefined8 param_1,longlong param_2)

{
  FUN_140dcf780(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8060(undefined8 param_1,longlong param_2)

{
  FUN_140dce510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8080(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd80a0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd80c0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd80e0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8100(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_140dd8120(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_140dd8140(undefined8 param_1,longlong param_2)

{
  FUN_140dcf8c0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xe0));
  return;
}




void Unwind_140dd8160(undefined8 param_1,longlong param_2)

{
  FUN_140dcc4e0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x120));
  return;
}




void Unwind_140dd8180(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbb0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd81a0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd81c0(undefined8 param_1,longlong param_2)

{
  FUN_140dcf780(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140dd81e0(undefined8 param_1,longlong param_2)

{
  FUN_140dce510(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8200(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8220(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8240(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8260(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8280(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140dd82a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd82c0(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd82e0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8300(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8320(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd8340(undefined8 param_1,longlong param_2)

{
  FUN_140dc2bb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8360(undefined8 param_1,longlong param_2)

{
  FUN_140dc0ce0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8380(undefined8 param_1,longlong param_2)

{
  FUN_140dbd1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd83a0(undefined8 param_1,longlong param_2)

{
  FUN_140dbab70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd83c0(undefined8 param_1,longlong param_2)

{
  FUN_140db9040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd83e0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8400(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8430(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8450(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8470(undefined8 param_1,longlong param_2)

{
  FUN_140dbd0c0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8490(undefined8 param_1,longlong param_2)

{
  FUN_140db9020((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd84b0(undefined8 param_1,longlong param_2)

{
  FUN_140db7a40((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140dd84d0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::BroadcastMsg @%s,%d");
  return 0x140dcfb91;
}




undefined8 Catch_140dd8510(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::GetMembersInAltarRange @%s,%d");
  return 0x140dcfd9d;
}




undefined8 Catch_140dd8550(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::OnUserMeritChanged @%s,%d");
  return 0x140dcfea4;
}




void Unwind_140dd8590(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd85b0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd85d0(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd85f0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc560(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8610(undefined8 param_1,longlong param_2)

{
  FUN_140dccf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8630(undefined8 param_1,longlong param_2)

{
  FUN_140dce510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8650(undefined8 param_1,longlong param_2)

{
  FUN_140dcf780(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8670(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_140dd8690(undefined8 param_1,longlong param_2)

{
  FUN_140dc3940((longlong *)(*(longlong *)(param_2 + 0x50) + 0x60));
  return;
}




void Unwind_140dd86b0(undefined8 param_1,longlong param_2)

{
  FUN_140dcf8c0((longlong *)(*(longlong *)(param_2 + 0x50) + 0xe0));
  return;
}




void Unwind_140dd86d0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd86f0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb4c0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd8710(undefined8 param_1,longlong param_2)

{
  FUN_140dcbbb0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd8730(undefined8 param_1,longlong param_2)

{
  FUN_140dcc4e0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x120));
  return;
}




undefined8 Catch_140dd8750(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dd02ab;
}




void Unwind_140dd8790(undefined8 param_1,longlong param_2)

{
  FUN_140dcafb0(*(void **)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd87b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dd0329;
}




undefined * Catch_140dd87f0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::CreateNew @%s,%d");
  return &DAT_140dd032f;
}




undefined8 Catch_140dd8830(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dd0555;
}




void Unwind_140dd8870(undefined8 param_1,longlong param_2)

{
  FUN_140dcafb0(*(void **)(param_2 + 0x68));
  return;
}




undefined8 Catch_140dd8890(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dd05d3;
}




undefined * Catch_140dd88d0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::CreateNew @%s,%d");
  return &DAT_140dd05d9;
}




void Unwind_140dd8910(undefined8 param_1,longlong param_2)

{
  FUN_140dcafb0(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dd8930(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRec) @%s,%d");
  return 0x140dd06b2;
}




undefined * Catch_140dd8970(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::CreateNew @%s,%d");
  return &DAT_140dd06b8;
}




undefined8 Catch_140dd89b0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::AddUserMerit @%s,%d");
  return 0x140dd0851;
}




undefined8 Catch_140dd89f0(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::AddUserMerit @%s,%d");
  return 0x140dd0b27;
}




undefined8 Catch_140dd8a30(void)

{
  log_InlineLogCATCH_ERROR("CSynInfo::OnUserSendFlagSuccessfully @%s,%d");
  return 0x140dd0c06;
}




void Unwind_140dd8a70(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8a90(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140dd8ab0(void)

{
  log_InlineLogCATCH_ERROR("CMsgFrontierFlagWar::Process, Action[%d] @%s,%d");
  return 0x140dd0e8f;
}




void Unwind_140dd8b00(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8b20(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8b40(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140dd8b60(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8b80(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8ba0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140dd8bc0(void)

{
  log_InlineLogCATCH_ERROR("CMsgFrontierFlagWarFlag::Process, Action[%d] @%s,%d");
  return 0x140dd122a;
}




void Unwind_140dd8c10(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8c30(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8c50(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140dd8c70(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8c90(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8cb0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140dd8cd0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8cf0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8d10(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140dd8d30(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8d50(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8d70(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140dd8d90(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8db0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140dd8dd0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0c50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8df0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void FUN_140dd8e10(void)

{
  _unlock(8);
  return;
}




void FUN_140dd8e29(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dd8e59(void)

{
  _DAT_140deb550 = 0xffffffff;
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




bool FUN_140dd8ee0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1540 failed=1 total=1641 */
