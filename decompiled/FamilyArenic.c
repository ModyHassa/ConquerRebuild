/* Decompiled by Ghidra 12.1.4 | program: FamilyArenic.dll
   image base: 140db0000 | functions: 1830 */


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
  log_InlineLogERROR(&DAT_140ddd548);
  return;
}




void FUN_140db13d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




undefined4 FUN_140db13e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined8 FUN_140db13f0(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    iVar1 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
    if (param_2 == iVar1) {
      return *(undefined8 *)(param_1 + 0x18);
    }
    iVar1 = FUN_140dc0a70(*(longlong *)(param_1 + 0x18));
    if (param_2 == iVar1) {
      return *(undefined8 *)(param_1 + 0x10);
    }
  }
  return 0;
}




longlong FUN_140db14a0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint7 extraout_var;
  uint7 uVar4;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  char *pcVar3;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar4 = extraout_var;
  }
  else {
    bVar1 = FUN_140dc08f0(*(longlong *)(param_1 + 0x10));
    uVar4 = extraout_var_00;
    if ((bVar1) && (bVar1 = FUN_140dc08f0(*(longlong *)(param_1 + 0x18)), uVar4 = extraout_var_01, bVar1)) {
      memset(param_2,0,0x28);
      memset(param_3,0,0x28);
      uVar2 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
      *param_2 = uVar2;
      pcVar3 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))(*(longlong **)(param_1 + 0xb0),uVar2);
      strncpy((char *)(param_2 + 1),pcVar3,0x10);
      *(undefined1 *)((longlong)param_2 + 0x13) = 0;
      uVar2 = FUN_140dc0a80(*(longlong *)(param_1 + 0x10));
      param_2[5] = uVar2;
      pcVar3 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x1a8))(*(longlong **)(param_1 + 0xb0),uVar2);
      strncpy((char *)(param_2 + 6),pcVar3,0x10);
      *(undefined1 *)((longlong)param_2 + 0x27) = 0;
      uVar2 = FUN_140dc0a70(*(longlong *)(param_1 + 0x18));
      *param_3 = uVar2;
      pcVar3 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))(*(longlong **)(param_1 + 0xb0),uVar2);
      strncpy((char *)(param_3 + 1),pcVar3,0x10);
      *(undefined1 *)((longlong)param_3 + 0x13) = 0;
      uVar2 = FUN_140dc0a80(*(longlong *)(param_1 + 0x18));
      param_3[5] = uVar2;
      pcVar3 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x1a8))(*(longlong **)(param_1 + 0xb0),uVar2);
      pcVar3 = strncpy((char *)(param_3 + 6),pcVar3,0x10);
      *(undefined1 *)((longlong)param_3 + 0x27) = 0;
      return CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
    }
  }
  return (ulonglong)uVar4 << 8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140db1630(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  char local_64 [15];
  undefined1 local_55;
  char local_54 [15];
  undefined1 local_45;
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [15];
  undefined1 local_2d;
  char local_2c [15];
  undefined1 local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140df1540 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_78 = 0x11d;
    log_InlineLogERROR(&DAT_140ddd548);
    bVar3 = false;
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    local_78 = 0x11e;
    log_InlineLogERROR(&DAT_140ddd548);
    bVar3 = false;
  }
  else {
    local_40 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
    local_1c = FUN_140dc0ac0(*(longlong *)(param_1 + 0x10));
    pcVar1 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))(*(longlong **)(param_1 + 0xb0),local_40);
    strncpy(local_3c,pcVar1,0x10);
    pcVar1 = (char *)FUN_140dc0a90(*(longlong *)(param_1 + 0x10));
    strncpy(local_2c,pcVar1,0x10);
    local_2d = 0;
    local_1d = 0;
    local_68 = FUN_140dc0a70(*(longlong *)(param_1 + 0x18));
    local_44 = FUN_140dc0ac0(*(longlong *)(param_1 + 0x18));
    pcVar1 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x48))(*(longlong **)(param_1 + 0xb0),local_68);
    strncpy(local_64,pcVar1,0x10);
    pcVar1 = (char *)FUN_140dc0a90(*(longlong *)(param_1 + 0x18));
    strncpy(local_54,pcVar1,0x10);
    local_55 = 0;
    local_45 = 0;
    uVar2 = FUN_140dd32d0(param_2,&local_40,&local_68);
    bVar3 = (char)uVar2 != '\0';
  }
  return bVar3;
}




longlong FUN_140db17e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1802;
  }
  lVar2 = *plVar1;
LAB_140db1802:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db1820(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1842;
  }
  lVar2 = *plVar1;
LAB_140db1842:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140db18a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140db1900(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
}




exception * FUN_140db1970(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




longlong FUN_140db19c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




exception * FUN_140db1a00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong * FUN_140db1a80(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db1ab0;
  }
  else {
LAB_140db1ab0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db1ad8;
  }
  _invalid_parameter_noinfo();
LAB_140db1ad8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_140db1af0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140db1b70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_140db1be0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_140db1c30(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db1cd0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db1d20(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db1db0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_140db1e10(longlong *param_1)

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
  return param_1[1];
}




longlong * FUN_140db1e50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db1e72;
  }
  lVar2 = *plVar1;
LAB_140db1e72:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140db1e90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140db1ed0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db1ee0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140db1f70(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140db1fe0(longlong *param_1,longlong param_2)

{
  FUN_140db1a80(param_1,param_2);
  return param_1;
}




void * FUN_140db2020(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db20a0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140db20e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140db2100(longlong param_1,ulonglong param_2)

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
      FUN_140db1900();
    }
    lVar1 = FUN_140db1ee0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140db2170(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140db21a0(undefined8 *param_1)

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




longlong * FUN_140db21e0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db224a;
  }
  _invalid_parameter_noinfo();
LAB_140db224a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db2280(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_140db22e0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140db2350(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db23d0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140db2410(undefined8 *param_1)

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




undefined8 * FUN_140db2450(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db24a0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db24f0(undefined8 *param_1)

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




undefined8 * FUN_140db2540(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_140db25a0(longlong param_1,longlong param_2,void *param_3)

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




void * FUN_140db2610(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140db2650(undefined8 *param_1)

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




undefined8 * FUN_140db26b0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db2700(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db2750(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140db27b0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_140db28a0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_140db2940(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_140db2980(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = CFamilyArenicMatch::vftable;
  plVar3 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
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
  param_1[0x16] = param_2;
  return param_1;
}




void FUN_140db2a80(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  
  puVar4 = *(undefined4 **)(param_1 + 0x98);
  if (*(undefined4 **)(param_1 + 0xa0) < puVar4) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (puVar1 < *(undefined4 **)(param_1 + 0x98)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x80);
  iVar5 = 0;
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar1) break;
    iVar5 = iVar5 + 1;
    if (100 < iVar5) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(undefined4 **)(lVar6 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),*puVar4,param_2);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(undefined4 **)(lVar6 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}




void FUN_140db2ba0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dc1650(*(longlong *)(param_1 + 0x10),param_2);
  FUN_140dc1650(*(longlong *)(param_1 + 0x18),param_2);
  FUN_140db2a80(param_1,param_2);
  return;
}




undefined8 * FUN_140db2c50(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140db1900();
    }
    lVar2 = FUN_140db1ee0(param_1 + 2,uVar4);
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
    pvVar3 = FUN_140db28a0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_140db2d80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140db2e10(longlong *param_1)

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




void FUN_140db2f00(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140db1900();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db1ee0(param_1 + 0x10,uVar8);
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
      FUN_140db2940(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140db2940(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db2350(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140db31a0(undefined8 *param_1)

{
  *param_1 = CFamilyArenicMatch::vftable;
  FUN_140db2e10(param_1 + 0x10);
  FUN_140db2e10(param_1 + 4);
  FUN_140db2e10(param_1 + 10);
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




void FUN_140db3280(longlong param_1)

{
  bool bVar1;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    FUN_140dd3220(local_418);
    bVar1 = FUN_140db1630(param_1,(longlong)local_418);
    if (bVar1) {
      FUN_140db2ba0(param_1,local_418);
      FUN_140dd3270((undefined8 *)local_418);
    }
    else {
      FUN_140dd3270((undefined8 *)local_418);
    }
  }
  return;
}




void FUN_140db3350(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 *puVar11;
  CMsg local_438 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar6 = FUN_140dc0a80(*(longlong *)(param_1 + 0x10));
    uVar7 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
    FUN_140dd35f0(local_438);
    uVar8 = FUN_140dd3a00(local_438,2,(ulonglong)uVar6,uVar7,(int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 2),
                          (int)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 2));
    if ((char)uVar8 == '\0') {
      FUN_140dd3640((undefined8 *)local_438);
    }
    else {
      puVar11 = *(undefined4 **)(param_1 + 0x98);
      if (*(undefined4 **)(param_1 + 0xa0) < puVar11) {
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
        if (puVar11 == puVar2) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar1;
        }
        if (*(undefined4 **)(lVar10 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        uVar7 = *puVar11;
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x70))(*(longlong **)(param_1 + 0xb0),uVar7);
        if (cVar5 != '\0') {
          plVar4 = *(longlong **)(param_1 + 0xb0);
          pcVar9 = (char *)(**(code **)(*plVar4 + 0x48))(plVar4,uVar7);
          uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar7);
          FUN_140dd38b0((longlong)local_438,uVar6,pcVar9);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar1;
        }
        if (*(undefined4 **)(lVar10 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        puVar11 = puVar11 + 1;
      }
      FUN_140db2ba0(param_1,local_438);
      FUN_140dd3640((undefined8 *)local_438);
    }
  }
  return;
}




undefined1 FUN_140db35e0(longlong param_1,int param_2)

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




void FUN_140db3700(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *local_50 [3];
  uint *local_38;
  uint *local_30;
  undefined8 local_28;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if ((*(longlong *)(param_1 + 0x10) != 0) || (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_140db2c50(local_50,(undefined8 *)(param_1 + 0x80));
    puVar5 = local_38;
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
      if (puVar5 == puVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(uint **)(lVar6 + 0x20) <= puVar5) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *puVar5;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x70))(*(longlong **)(param_1 + 0xb0),uVar1);
      if (cVar4 != '\0') {
        FUN_140db4250(param_2,uVar1,'\x01','\x01');
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(uint **)(lVar6 + 0x20) <= puVar5) {
        _invalid_parameter_noinfo();
      }
      puVar5 = puVar5 + 1;
    }
    if (local_38 != (uint *)0x0) {
      operator_delete(local_38);
    }
    local_38 = (uint *)0x0;
    local_30 = (uint *)0x0;
    local_28 = 0;
    operator_delete(local_50[0]);
  }
  return;
}




longlong * FUN_140db38c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140db2f00((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140db39b4;
  }
  _invalid_parameter_noinfo();
LAB_140db39b4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db39f0(undefined8 *param_1,uint param_2)

{
  FUN_140db31a0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140db3a20(longlong param_1,int param_2,char param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  CMsg local_428 [1040];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x130))();
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x140))(*(longlong **)(param_1 + 0xb0),uVar2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x170))(*(longlong **)(param_1 + 0xb0),uVar2);
    if ((cVar1 != '\0') && (param_3 != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xf0))(*(longlong **)(param_1 + 0xb0),param_2);
    }
  }
  FUN_140db35e0(param_1,param_2);
  if (param_4 != '\0') {
    FUN_140dd35f0(local_428);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
      uVar3 = FUN_140dd3670(local_428,3,uVar2);
      if ((char)uVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),param_2,local_428);
      }
    }
    FUN_140db3350(param_1);
    FUN_140dd3640((undefined8 *)local_428);
  }
  return;
}




void FUN_140db3b30(longlong *param_1,undefined4 *param_2)

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
  FUN_140db38c0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140db3be0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_140db3b30((longlong *)(param_1 + 0x80),local_res10);
  return;
}




undefined1 FUN_140db3c00(longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  undefined4 local_res20 [2];
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x70))();
    if (cVar3 != '\0') {
      iVar5 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10));
      if ((iVar5 != param_3) && (iVar5 = FUN_140dc0a70(*(longlong *)(param_1 + 0x10)), iVar5 != param_3)) {
        return 0;
      }
      bVar4 = FUN_140dc08f0(*(longlong *)(param_1 + 0x10));
      if ((bVar4) && (bVar4 = FUN_140dc08f0(*(longlong *)(param_1 + 0x10)), bVar4)) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x130))(*(longlong **)(param_1 + 0xb0),param_2);
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x140))(*(longlong **)(param_1 + 0xb0),uVar6);
        if (cVar3 == '\0') {
          return 0;
        }
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x150))(*(longlong **)(param_1 + 0xb0),uVar6);
        if (cVar3 != '\0') {
          pIVar9 = theInstance();
          lVar1 = **(longlong **)(param_1 + 0xb0);
          uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_FAMILY_ARENIC_NOT_INVITE");
          (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar10);
          return 0;
        }
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x158))();
        if (cVar3 == '\0') {
          plVar2 = *(longlong **)(param_1 + 0xb0);
          lVar1 = *plVar2;
          uVar7 = (**(code **)(lVar1 + 0x68))(plVar2,param_2);
          uVar8 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
          (**(code **)(lVar1 + 0x80))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar6,uVar8,uVar7,1);
        }
        FUN_140dd35f0(local_448);
        uVar10 = FUN_140dd3670(local_448,0,param_3);
        if ((char)uVar10 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),param_2,local_448);
        }
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xa0))(*(longlong **)(param_1 + 0xb0),param_2,*(undefined4 *)(param_1 + 8));
        local_res20[0] = param_2;
        FUN_140db3b30((longlong *)(param_1 + 0x80),local_res20);
        FUN_140dd3220(local_858);
        bVar4 = FUN_140db1630(param_1,(longlong)local_858);
        if (bVar4) {
          (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),param_2,local_858);
        }
        FUN_140db3350(param_1);
        FUN_140dd3270((undefined8 *)local_858);
        FUN_140dd3640((undefined8 *)local_448);
        return 1;
      }
      pIVar9 = theInstance();
      lVar1 = **(longlong **)(param_1 + 0xb0);
      uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
      (**(code **)(lVar1 + 0x28))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar10);
    }
  }
  return 0;
}




void FUN_140db3f00(longlong param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 local_res10 [2];
  CMsg local_418 [1040];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    bVar1 = FUN_140dc08f0(*(longlong *)(param_1 + 0x10));
    if ((bVar1) && (bVar1 = FUN_140dc08f0(*(longlong *)(param_1 + 0x10)), bVar1)) {
      iVar2 = FUN_140dc0a80(*(longlong *)(param_1 + 0x10));
      if (iVar2 == param_3) {
        plVar6 = (longlong *)(param_1 + 0x20);
      }
      else {
        iVar2 = FUN_140dc0a80(*(longlong *)(param_1 + 0x18));
        if (iVar2 != param_3) {
          return;
        }
        plVar6 = (longlong *)(param_1 + 0x50);
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_140db3b30(plVar6,local_res10);
        FUN_140dd35f0(local_418);
        plVar6 = *(longlong **)(param_1 + 0xb0);
        pcVar3 = (char *)(**(code **)(*plVar6 + 0x48))(plVar6,param_2);
        pcVar4 = (char *)(**(code **)(*plVar6 + 0x1a8))(plVar6,param_3);
        uVar5 = FUN_140dd3aa0(local_418,4,pcVar4,pcVar3);
        if ((char)uVar5 != '\0') {
          FUN_140db2ba0(param_1,local_418);
        }
        FUN_140db3350(param_1);
        FUN_140dd3640((undefined8 *)local_418);
      }
    }
  }
  return;
}




exception * FUN_140db4080(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140db40e0(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140db411d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140db4130(exception *param_1,uint param_2)

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




void FUN_140db41a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140db41c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140db41e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140db4200(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x290) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dd2280(*(longlong *)(param_1 + 0x290),param_2,param_3);
  return;
}




void FUN_140db4250(longlong param_1,uint param_2,char param_3,char param_4)

{
  if (*(longlong *)(param_1 + 0x290) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dd1d90(*(longlong *)(param_1 + 0x290),param_2,param_3,param_4);
  return;
}




void FUN_140db42a0(undefined8 param_1,longlong param_2,char param_3,byte param_4,byte param_5)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    FUN_140dc0a70(param_2);
    FUN_140dc3ab0(param_2,param_3,param_4,param_5);
  }
  return;
}




bool FUN_140db4330(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x290) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  bVar1 = FUN_140dd1450(*(longlong *)(param_1 + 0x290),param_2);
  return bVar1;
}




void FUN_140db4380(longlong param_1)

{
  FUN_140db31a0((undefined8 *)(param_1 + 8));
  return;
}




undefined4 FUN_140db43a0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  uVar1 = FUN_140dc0940(param_2);
  if (299 < uVar1) {
    return 500;
  }
  if (0xb3 < uVar1) {
    return 0x15e;
  }
  uVar2 = 100;
  if (0x3b < uVar1) {
    uVar2 = 200;
  }
  return uVar2;
}




undefined2 FUN_140db4440(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  uVar2 = 10;
  uVar1 = FUN_140dc0940(param_2);
  if (299 < uVar1) {
    return 100;
  }
  if (0xb3 < uVar1) {
    return 0x32;
  }
  if (0x3b < uVar1) {
    uVar2 = 0x14;
  }
  return uVar2;
}




void FUN_140db4500(longlong param_1,undefined4 param_2)

{
  FUN_140dca540(param_1 + 0x120,param_2);
  return;
}




void FUN_140db4530(longlong param_1,undefined4 param_2,int param_3)

{
  FUN_140dca730(param_1 + 0x120,param_2,param_3);
  return;
}




undefined4 FUN_140db4560(void)

{
  int iVar1;
  uint3 uVar3;
  tm *ptVar2;
  __time32_t local_res8 [8];
  
  local_res8[0] = _time32((__time32_t *)0x0);
  ptVar2 = _localtime32(local_res8);
  iVar1 = ptVar2->tm_hour;
  uVar3 = (uint3)((ulonglong)ptVar2 >> 8);
  if ((10 < iVar1) && (((iVar1 < 0xe || (0x12 < iVar1)) && (iVar1 < 0x17)))) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}




void FUN_140db45a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x128))();
  if ((cVar1 != '\0') && (param_3 != 0)) {
    log_InlineLogERROR("CFamilyArenicMgr::ClearArenicMap, found invalid user in map(%d), %s");
  }
  return;
}




bool FUN_140db4610(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db4650(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140db46a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db46e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140db4730(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140db4770(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140db47c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db47e2;
  }
  lVar2 = *plVar1;
LAB_140db47e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140db4800(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db4822;
  }
  lVar2 = *plVar1;
LAB_140db4822:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




void FUN_140db4910(longlong param_1,longlong *param_2)

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




void FUN_140db4a80(longlong param_1,longlong *param_2)

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




void FUN_140db4bf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0xd9) == '\0') {
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




void FUN_140db4c80(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db4ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_140db4db0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140db4e90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db4eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140db4f20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db4f42;
  }
  lVar2 = *plVar1;
LAB_140db4f42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140db4f60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0xd9) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0xd9) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0xd9);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0xd9);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0xd9);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0xd9);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140db4f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140db5000(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
}




longlong FUN_140db5090(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140db5120(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db5152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140db51c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140db51f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140db5260(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0xd9) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0xd9) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0xd9);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0xd9);
        lVar3 = lVar4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0xd9);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0xd9);
    }
    if (*(char *)(param_1[1] + 0xd9) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0xd9) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140db5298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140db53c0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140db53f0;
  }
  else {
LAB_140db53f0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140db5418;
  }
  _invalid_parameter_noinfo();
LAB_140db5418:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140db5430(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db5460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db5490(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140dd00a0((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140db54c0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_140db5570(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140db55f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140db5670(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140db56f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xe0)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0xe0);
  return;
}




void FUN_140db57f0(longlong param_1)

{
  FUN_140db31a0((undefined8 *)(param_1 + 0x20));
  return;
}




void * FUN_140db58c0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db5970(void *param_1,longlong param_2,void *param_3)

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




longlong * FUN_140db59b0(longlong *param_1)

{
  FUN_140db4c80(param_1);
  return param_1;
}




bool FUN_140db59d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140db5a20(longlong param_1,longlong param_2)

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




void FUN_140db5a80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db5ab0(longlong param_1,longlong param_2)

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




void FUN_140db5b10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db5b40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0xd9) == '\0') {
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




void FUN_140db5ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140db5bb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5bd2;
  }
  lVar2 = *plVar1;
LAB_140db5bd2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db5bf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5c12;
  }
  lVar2 = *plVar1;
LAB_140db5c12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db5c30(longlong *param_1)

{
  FUN_140db4e90(param_1);
  return param_1;
}




longlong * FUN_140db5c50(longlong *param_1)

{
  FUN_140db4f60(param_1);
  return param_1;
}




longlong FUN_140db5c70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db5c92;
  }
  lVar2 = *plVar1;
LAB_140db5c92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140db5cb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140db5de0(longlong *param_1)

{
  FUN_140db5120(param_1);
  return param_1;
}




longlong * FUN_140db5e10(longlong *param_1)

{
  FUN_140db51c0(param_1);
  return param_1;
}




longlong * FUN_140db5e30(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db4f60(param_1);
  return param_2;
}




longlong * FUN_140db5e60(longlong *param_1)

{
  FUN_140db5260(param_1);
  return param_1;
}




void FUN_140db5e90(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140db5f20(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140db5f90(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140db6000(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0xe0)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0xe0);
  return;
}




longlong * FUN_140db6080(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db4c80(param_1);
  return param_2;
}




longlong * FUN_140db60b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db4e90(param_1);
  return param_2;
}




longlong * FUN_140db60e0(longlong *param_1,longlong param_2)

{
  FUN_140db53c0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140db6130(undefined8 *param_1)

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




undefined8 * FUN_140db6170(undefined8 *param_1)

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




undefined8 * FUN_140db61b0(undefined8 *param_1)

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




void * FUN_140db6200(void *param_1,uint param_2)

{
  FUN_140db31a0((undefined8 *)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_140db6260(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140db6300(void *param_1,longlong param_2,void *param_3)

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




longlong * FUN_140db6340(longlong *param_1)

{
  FUN_140db4c80(param_1);
  return param_1;
}




longlong FUN_140db6360(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db6382;
  }
  lVar2 = *plVar1;
LAB_140db6382:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db63a0(longlong *param_1)

{
  FUN_140db4e90(param_1);
  return param_1;
}




longlong FUN_140db63c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db63e2;
  }
  lVar2 = *plVar1;
LAB_140db63e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db6400(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db6422;
  }
  lVar2 = *plVar1;
LAB_140db6422:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db6440(longlong *param_1)

{
  FUN_140db4f60(param_1);
  return param_1;
}




void FUN_140db6460(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db6480(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db64a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db64c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db64e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db64e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140db6530(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db6530(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong FUN_140db6580(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db65a2;
  }
  lVar2 = *plVar1;
LAB_140db65a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db65c0(longlong *param_1)

{
  FUN_140db5120(param_1);
  return param_1;
}




undefined8 * FUN_140db65e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong FUN_140db6620(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db6642;
  }
  lVar2 = *plVar1;
LAB_140db6642:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140db6660(longlong *param_1)

{
  FUN_140db51c0(param_1);
  return param_1;
}




undefined8 * FUN_140db6680(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140db66c0(longlong *param_1)

{
  FUN_140db5260(param_1);
  return param_1;
}




undefined8 FUN_140db66e0(longlong param_1,ulonglong param_2)

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
      FUN_140db5000();
    }
    lVar1 = FUN_140db5e90(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140db6740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140db67c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140db6840(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140db6890(undefined8 *param_1)

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




longlong * FUN_140db68d0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140db693a;
  }
  _invalid_parameter_noinfo();
LAB_140db693a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140db6970(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140db69d0(void)

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




void FUN_140db6a30(void)

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




void FUN_140db6a90(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *(undefined1 *)((longlong)puVar1 + 0xd9) = 0;
  return;
}




undefined8 * FUN_140db6b00(undefined8 *param_1)

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




undefined8 * FUN_140db6b50(undefined8 *param_1)

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




undefined8 * FUN_140db6ba0(undefined8 *param_1)

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




void FUN_140db6bf0(longlong param_1)

{
  FUN_140db31a0((undefined8 *)(param_1 + 0x20));
  return;
}




void * FUN_140db6c50(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140db6ca0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  uVar6 = 2;
  do {
    if (puVar7 == param_2) {
      return;
    }
    uVar5 = 0x7fff;
    uVar3 = rand();
    uVar3 = uVar3 & 0x7fff;
    if (0x7fff < uVar6) {
      do {
        if (uVar5 == 0xffffffff) break;
        uVar4 = rand();
        uVar5 = uVar5 << 0xf | 0x7fff;
        uVar3 = uVar4 & 0x7fff | uVar3 << 0xf;
      } while (uVar5 < uVar6);
    }
    puVar1 = (undefined8 *)(param_1 + ((ulonglong)uVar3 % (ulonglong)uVar6) * 8);
    if (puVar7 != puVar1) {
      uVar2 = *puVar7;
      *puVar7 = *puVar1;
      *puVar1 = uVar2;
    }
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 + 1;
  } while( true );
}




void FUN_140db6d50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  while( true ) {
    if ((*param_1 == 0) || (*param_1 != *param_2)) {
      _invalid_parameter_noinfo();
    }
    if (param_1[1] == param_2[1]) break;
    *param_3 = *param_3 + 1;
    FUN_140db4f60(param_1);
  }
  return;
}




void * FUN_140db6de0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140db6e40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db64e0(param_1,(longlong *)plVar2[2]);
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




void FUN_140db6ee0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140db6530(param_1,(longlong *)plVar2[2]);
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




longlong FUN_140db6f60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db6f82;
  }
  lVar2 = *plVar1;
LAB_140db6f82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140db6fa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140db6fc2;
  }
  lVar2 = *plVar1;
LAB_140db6fc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140db6fe0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7020(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db70c0(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(param_2 + 0x20));
  return;
}




undefined8 * FUN_140db70f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140db7130(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140db7170(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140db71b0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140db71e0(undefined8 *param_1)

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




undefined8 * FUN_140db7230(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140db7290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140db69d0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140db72d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140db6a30();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140db7310(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0xd9) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0xd9) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xd9) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0xd9) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0xd9) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0xd9) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_140db73f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140db6a90();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0xd9) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140db7430(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0xd9);
  while (cVar1 == '\0') {
    FUN_140db7430(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    FUN_140db31a0(param_2 + 4);
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0xd9);
  }
  return;
}




undefined8 * FUN_140db74b0(undefined8 *param_1)

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




undefined8 * FUN_140db7500(undefined8 *param_1)

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




undefined8 * FUN_140db7550(undefined8 *param_1)

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




void FUN_140db75a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined8 *)param_1[1] != (undefined8 *)param_2[1]) {
    FUN_140db6ca0(param_1[1],(undefined8 *)param_2[1]);
  }
  return;
}




void FUN_140db75f0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0xd9) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0xd9) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0xd9);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0xd9);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xd9);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xd9);
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




void * FUN_140db7720(void *param_1,longlong param_2,void *param_3)

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




ulonglong FUN_140db7760(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong extraout_RAX_00;
  undefined8 *puVar8;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140db6e40(param_1 + 0x10);
    FUN_140db6e40(param_1 + 0x50);
    FUN_140db6ee0(param_1 + 0x90);
    iVar2 = tq::DateStamp(0);
    *(int *)(param_1 + 0x110) = iVar2;
    iVar2 = tq::DateStampPass(iVar2,-1);
    *(int *)(param_1 + 0x114) = iVar2;
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x278))(*(longlong **)(param_1 + 8),0x7d2,1);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x40))(plVar4);
      if (lVar5 == 1) {
        plVar6 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,2);
        uVar1 = (**(code **)(*plVar6 + 0x10))(plVar6);
        *(undefined1 *)(param_1 + 0x118) = uVar1;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4);
    }
    uVar7 = FUN_140dce3f0(param_1 + 0x120,*(longlong *)(param_1 + 8));
    if ((char)uVar7 == '\0') {
      log_InlineLogERROR("CFamilyArenicMgr::Create, failed in init rank manager");
      uVar3 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      puVar8 = FUN_140dd2630(param_2,param_1);
      *(undefined8 **)(param_1 + 0x290) = puVar8;
      if (puVar8 == (undefined8 *)0x0) {
        log_InlineLogERROR("CFamilyArenicMgr::Create, failed in create witness manager");
        uVar3 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
      }
    }
  }
  return uVar3;
}




longlong * FUN_140db7910(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140db7a20(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140db7b30(undefined8 *param_1)

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




void FUN_140db7b90(undefined8 *param_1)

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




undefined8 * FUN_140db7bd0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140db7c20(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140db7c70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7c90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140db7cb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140db7cd0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140db7d60(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140db6740(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140db80a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140db8130(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140db67c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140db8470(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140db8500(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140db7310(param_1,param_2,param_3);
  return param_2;
}




void FUN_140db8520(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140db7430(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_140db8560(undefined8 *param_1)

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




undefined8 * FUN_140db85b0(undefined8 *param_1)

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




undefined8 * FUN_140db8600(undefined8 *param_1)

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




void * FUN_140db8680(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 FUN_140db86c0(longlong param_1,uint param_2)

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




undefined8 FUN_140db87c0(longlong param_1,uint param_2)

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




ulonglong FUN_140db88e0(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar5;
  
  lVar4 = FUN_140db86c0(param_1,param_2);
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = FUN_140dc4990(lVar4);
  uVar5 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    iVar1 = FUN_140dc4cc0(lVar4);
    uVar5 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != 0) {
      uVar2 = FUN_140dc4cb0(lVar4);
      lVar4 = FUN_140db87c0(param_1,uVar2);
      uVar5 = 0;
      if (lVar4 != 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),param_2);
        iVar3 = FUN_140dc0ab0(lVar4);
        uVar5 = CONCAT44(extraout_var_01,iVar3);
        if (iVar1 == iVar3) {
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}




bool FUN_140db8980(longlong param_1,uint param_2)

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




bool FUN_140db8aa0(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_140db86c0(param_1,param_2);
  if (lVar3 != 0) {
    uVar2 = FUN_140dc4cb0(lVar3);
    if (uVar2 != 0) {
      lVar3 = FUN_140db87c0(param_1,uVar2);
      if (lVar3 != 0) {
        bVar1 = FUN_140dc0910(lVar3);
        return bVar1;
      }
    }
  }
  return false;
}




ulonglong FUN_140db8af0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  lVar2 = FUN_140db86c0(param_1,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_140dc4cb0(lVar2);
    uVar3 = CONCAT44(extraout_var,uVar1);
    if (uVar1 != 0) {
      lVar2 = FUN_140db87c0(param_1,uVar1);
      uVar3 = 0;
      if (lVar2 != 0) {
        uVar3 = FUN_140dc0920(lVar2);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




longlong FUN_140db8b40(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint7 extraout_var;
  uint7 extraout_var_00;
  undefined4 extraout_var_02;
  ulonglong uVar8;
  undefined4 extraout_var_03;
  longlong lVar9;
  undefined7 extraout_var_01;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined8 uVar10;
  uint7 uVar11;
  
  lVar6 = FUN_140db86c0(param_1,param_3);
  lVar7 = FUN_140db86c0(param_1,param_2);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  bVar2 = FUN_140db4330(param_1,param_2);
  uVar11 = extraout_var;
  if ((bVar2) || (bVar2 = FUN_140db4330(param_1,param_3), uVar11 = extraout_var_00, bVar2)) {
    return (ulonglong)uVar11 << 8;
  }
  iVar3 = FUN_140dc4cc0(lVar7);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),param_2);
    iVar4 = FUN_140dc4cc0(lVar6);
    if (iVar4 == iVar3) {
      return CONCAT44(extraout_var_02,iVar4) & 0xffffffffffffff00;
    }
  }
  uVar8 = FUN_140db88e0(param_1,param_2);
  if (((char)uVar8 == '\0') || (uVar8 = FUN_140db88e0(param_1,param_3), (char)uVar8 == '\0')) {
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
  uVar5 = FUN_140dc4cb0(lVar6);
  if (uVar5 == 0) {
    return CONCAT71((int7)(CONCAT44(extraout_var_03,uVar5) >> 8),1);
  }
  lVar9 = FUN_140db87c0(param_1,uVar5);
  if (lVar9 == 0) {
    return 1;
  }
  bVar2 = FUN_140dc0910(lVar9);
  uVar8 = CONCAT71(extraout_var_01,bVar2);
  if ((!bVar2) && (uVar8 = FUN_140dc0920(lVar9), (char)uVar8 == '\0')) {
    iVar3 = FUN_140dc4990(lVar7);
    uVar8 = CONCAT44(extraout_var_04,iVar3);
    if (iVar3 == 8) {
      iVar3 = FUN_140dc4990(lVar6);
      uVar8 = CONCAT44(extraout_var_05,iVar3);
      if (iVar3 == 8) {
        plVar1 = *(longlong **)(param_1 + 8);
        iVar3 = (**(code **)(*plVar1 + 0x1a0))(plVar1,param_3);
        uVar10 = (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2);
        uVar11 = (uint7)((ulonglong)uVar10 >> 8);
        if ((int)uVar10 == iVar3) {
          return (ulonglong)uVar11 << 8;
        }
        return CONCAT71(uVar11,1);
      }
    }
    return uVar8 & 0xffffffffffffff00;
  }
  return uVar8 & 0xffffffffffffff00;
}




undefined8 FUN_140db8cd0(longlong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong extraout_RAX;
  undefined7 extraout_var;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),uVar2);
  if (((char)uVar3 != '\0') && (uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),uVar2), (char)uVar3 != '\0')) {
    if (*(longlong *)(param_1 + 0x290) == 0) {
      log_InlineLogERROR(&DAT_140ddd548);
    }
    else {
      bVar1 = FUN_140dd1450(*(longlong *)(param_1 + 0x290),param_2);
      if ((bVar1) && (uVar3 = FUN_140db88e0(param_1,param_3), (char)uVar3 != '\0')) goto LAB_140db8de2;
    }
    if (*(longlong *)(param_1 + 0x290) == 0) {
      log_InlineLogERROR(&DAT_140ddd548);
      uVar3 = extraout_RAX;
    }
    else {
      bVar1 = FUN_140dd1450(*(longlong *)(param_1 + 0x290),param_3);
      uVar3 = CONCAT71(extraout_var,bVar1);
      if ((bVar1) && (uVar3 = FUN_140db88e0(param_1,param_2), (char)uVar3 != '\0')) {
LAB_140db8de2:
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




void FUN_140db8df0(longlong param_1,uint param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = FUN_140db88e0(param_1,param_2);
  if ((char)uVar3 != '\0') {
    lVar4 = FUN_140db86c0(param_1,param_2);
    if (lVar4 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnDie, not found family arenic user");
    }
    else {
      iVar1 = FUN_140dc4990(lVar4);
      if (iVar1 == 8) {
        uVar2 = FUN_140dc4cb0(lVar4);
        lVar4 = FUN_140db87c0(param_1,uVar2);
        if (lVar4 != 0) {
          FUN_140dc1f40(lVar4,param_2,param_3,param_4);
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140db8e80(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStackY_538 [32];
  CMsg local_4a8 [1040];
  undefined4 local_98 [10];
  undefined4 local_70 [10];
  ulonglong local_48;
  
  local_48 = DAT_140df1540 ^ (ulonglong)auStackY_538;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (((cVar4 != '\0') && (param_3 != 0)) && (param_3 <= param_4)) {
    FUN_140dd2c30(local_4a8);
    FUN_140dd2d20((longlong)local_4a8,0,param_3,param_4,(int)*(undefined8 *)(param_1 + 0x108),(int)*(undefined8 *)(param_1 + 0x88));
    puVar1 = *(undefined8 **)(param_1 + 0x100);
    puVar6 = (undefined8 *)*puVar1;
    iVar10 = 0;
    plVar2 = *(longlong **)(param_1 + 0xd0);
    uVar8 = 1;
LAB_140db8f70:
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 != puVar1) {
      if ((param_3 <= uVar8) && (uVar8 <= param_4)) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar2;
        }
        if (puVar6 == *(undefined8 **)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar5 = FUN_140db14a0((longlong)(puVar6 + 4),local_70,local_98);
        if (((char)uVar5 != '\0') && (uVar5 = FUN_140dd2d90((longlong)local_4a8,local_70,local_98), (char)uVar5 == '\0')) goto LAB_140db9085;
      }
      iVar10 = iVar10 + 1;
      uVar8 = uVar8 + 1;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar6 + 0xd9) == '\0') {
        puVar7 = puVar6;
        puVar3 = (undefined8 *)puVar6[2];
        if (*(char *)((longlong)puVar6[2] + 0xd9) == '\0') {
          do {
            puVar6 = puVar3;
            puVar3 = (undefined8 *)*puVar6;
          } while (*(char *)((longlong)*puVar6 + 0xd9) == '\0');
        }
        else {
          do {
            puVar6 = (undefined8 *)puVar7[1];
            if (*(char *)((longlong)puVar6 + 0xd9) != '\0') break;
            bVar11 = puVar7 == (undefined8 *)puVar6[2];
            puVar7 = puVar6;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140db8f70;
    }
LAB_140db9085:
    FUN_140dd2ea0((longlong)local_4a8);
    FUN_140dd2f20((longlong)local_4a8,iVar10);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_4a8);
    FUN_140dd2c80((undefined8 *)local_4a8);
  }
  return;
}




void FUN_140db9100(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140db86c0(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140dc4990(lVar1);
  return;
}




ulonglong FUN_140db9120(longlong param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 extraout_var;
  longlong lVar6;
  undefined4 extraout_var_00;
  ulonglong extraout_RAX_01;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x290) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),param_3);
  if ((char)uVar4 == '\0') {
    return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  lVar5 = FUN_140db86c0(param_1,param_2);
  uVar4 = 0;
  if (lVar5 != 0) {
    bVar1 = FUN_140dd1450(*(longlong *)(param_1 + 0x290),param_2);
    uVar4 = CONCAT71(extraout_var,bVar1);
    if (!bVar1) {
      uVar2 = FUN_140dc4cb0(lVar5);
      lVar6 = FUN_140db87c0(param_1,uVar2);
      if (lVar6 != 0) {
        iVar3 = FUN_140dc4cc0(lVar5);
        uVar4 = CONCAT44(extraout_var_00,iVar3);
        if (iVar3 == param_3) goto LAB_140db9232;
      }
      FUN_140dc4990(lVar5);
      log_InlineLogERROR("CFamilyArenicMgr::CanEnterMap, user(%u) invalid try to enter family arenic map(%u), status: %d");
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
  }
LAB_140db9232:
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}




longlong * FUN_140db9270(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140db93cd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140db93fc;
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
      goto LAB_140db93cd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140db7d60(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140db93fc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140db9420(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140db4e90(param_3);
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
        goto LAB_140db960c;
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
LAB_140db960c:
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
            FUN_140db5a20((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db4910((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140db5a20((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140db4910((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db5a20((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140db4910((longlong)param_1,plVar7);
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




exception * FUN_140db97e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_140db9840(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140db9910(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140db9a6d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140db9a9c;
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
      goto LAB_140db9a6d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140db8130(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140db9a9c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140db9ac0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140db4c80(param_3);
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
        goto LAB_140db9cac;
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
LAB_140db9cac:
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
            FUN_140db5ab0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db4a80((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140db5ab0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140db4a80((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140db5ab0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140db4a80((longlong)param_1,plVar7);
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




longlong * FUN_140db9e80(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140db9f50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0xd9) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140db4f60(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0xd9) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0xd9) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0xd9) == '\0') {
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
        plVar3 = plVar2 + 0x1b;
        plVar7 = plVar7 + 0x1b;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140dba15b;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0xd9) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0xd9) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0xd9);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0xd9);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0xd9) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0xd9);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0xd9);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140dba15b:
  if ((char)plVar2[0x1b] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0x1b] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0x1b] == '\0') {
            *(undefined1 *)(plVar8 + 0x1b) = 1;
            *(undefined1 *)(plVar7 + 0x1b) = 0;
            FUN_140db5b40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0xd9) == '\0') {
            if ((*(char *)(*plVar8 + 0xd8) != '\x01') || (*(char *)(plVar8[2] + 0xd8) != '\x01')) {
              if (*(char *)(plVar8[2] + 0xd8) == '\x01') {
                *(undefined1 *)(*plVar8 + 0xd8) = 1;
                *(undefined1 *)(plVar8 + 0x1b) = 0;
                FUN_140db4bf0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0x1b) = (char)plVar7[0x1b];
              *(undefined1 *)(plVar7 + 0x1b) = 1;
              *(undefined1 *)(plVar8[2] + 0xd8) = 1;
              FUN_140db5b40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x1b) = 0;
          }
        }
        else {
          if ((char)plVar8[0x1b] == '\0') {
            *(undefined1 *)(plVar8 + 0x1b) = 1;
            *(undefined1 *)(plVar7 + 0x1b) = 0;
            FUN_140db4bf0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0xd9) == '\0') {
            if ((*(char *)(plVar8[2] + 0xd8) != '\x01') || (*(char *)(*plVar8 + 0xd8) != '\x01')) {
              if (*(char *)(*plVar8 + 0xd8) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0xd8) = 1;
                *(undefined1 *)(plVar8 + 0x1b) = 0;
                FUN_140db5b40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0x1b) = (char)plVar7[0x1b];
              *(undefined1 *)(plVar7 + 0x1b) = 1;
              *(undefined1 *)(*plVar8 + 0xd8) = 1;
              FUN_140db4bf0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x1b) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0x1b) = 1;
  }
  FUN_140db31a0(plVar2 + 4);
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_140dba3b0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0xd9) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0xd9) == '\0');
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




void FUN_140dba480(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dba4a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dba4c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dba4e0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140db7d60(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140db7d60(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140db7d60(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140db7d60(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140db7d60(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140db7d60(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140db7d60(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140db9270(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_140dba800(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140db7430(param_1,*(longlong **)(param_1[6] + 8),plVar3,plVar4);
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
    FUN_140db4f60(param_3);
    local_28 = lVar1;
    lStack_20 = lVar2;
    FUN_140db9f50(param_1,local_18,&local_28);
  }
  lVar1 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  return param_2;
}




void FUN_140dba960(longlong *param_1)

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
  FUN_140dba800(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140dbaa00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140db6e40((longlong)param_1);
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
    FUN_140db9420(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140dbabb0(undefined8 *param_1)

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




longlong * FUN_140dbac00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140db6ee0((longlong)param_1);
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
    FUN_140db9ac0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
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




undefined8 * FUN_140dbae00(undefined8 *param_1)

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




void FUN_140dbae50(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140db5000();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140db5e90(param_1 + 0x10,uVar8);
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
      FUN_140db8680(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140db8680(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140db6c50(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140dbb100(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x290) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    lVar2 = FUN_140db86c0(param_1,param_3);
    if (lVar2 != 0) {
      lVar2 = FUN_140db87c0(param_1,param_3);
      if (lVar2 != 0) {
        iVar1 = FUN_140dc0a80(lVar2);
        FUN_140dd1f50(*(longlong *)(param_1 + 0x290),param_2,iVar1);
      }
    }
  }
  return;
}




void FUN_140dbb1b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint local_res10 [2];
  uint local_468;
  undefined4 uStack_464;
  undefined8 *local_460;
  longlong *local_458 [3];
  undefined8 local_440;
  CMsg local_438 [1040];
  
  local_440 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (((((cVar3 != '\0') && (uVar5 = FUN_140db4560(), (char)uVar5 != '\0')) &&
       (iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))(*(longlong **)(param_1 + 8),param_2), iVar6 != 0)) &&
      ((cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x240))(*(longlong **)(param_1 + 8),param_2), cVar3 != '\0' &&
       (uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2), 0x45 < uVar7)))) &&
     ((cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2), cVar3 == '\0' &&
      (bVar4 = FUN_140db8980(param_1,param_2), !bVar4)))) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))(*(longlong **)(param_1 + 8),param_2);
    if (cVar3 == '\0') {
      FUN_140db9e80((longlong *)(param_1 + 0x90),(longlong *)&local_468,local_res10);
      puVar10 = *(undefined8 **)(param_1 + 0xc0);
      lVar11 = 0;
      local_458[0] = *(longlong **)(param_1 + 0x90);
      plVar1 = (longlong *)CONCAT44(uStack_464,local_468);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_458[0])) {
        _invalid_parameter_noinfo();
      }
      puVar2 = local_460;
      if (local_460 == puVar10) {
        puVar10 = FUN_140dc4790(*(longlong **)(param_1 + 8),param_1,param_2);
        if (puVar10 == (undefined8 *)0x0) {
          return;
        }
        local_468 = param_2;
        local_460 = puVar10;
        FUN_140db9910((longlong *)(param_1 + 0x90),(longlong *)local_458,&local_468);
      }
      else {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar11 = *plVar1;
        }
        if (puVar2 == *(undefined8 **)(lVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar10 = (undefined8 *)puVar2[4];
        if (puVar10 == (undefined8 *)0x0) {
          log_InlineLogERROR("CFamilyArenicMgr::OnApply, found NULL team of leader(%d)");
          return;
        }
      }
      uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),param_2);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),uVar5);
      if (cVar3 != '\0') {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),uVar5);
        if (cVar3 == '\0') {
          FUN_140dc2750((longlong)puVar10,1,'\x01');
        }
        else {
          FUN_140dc2750((longlong)puVar10,6,'\x01');
        }
        FUN_140dd2940(local_438);
        uVar9 = FUN_140dd29f0((longlong)local_438,0);
        if ((char)uVar9 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_438);
        }
        FUN_140dd2990((undefined8 *)local_438);
      }
    }
    else {
      pIVar8 = theInstance();
      lVar11 = **(longlong **)(param_1 + 8);
      uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_FAMILY_ARENIC_APPLY_REJECT_IN_ARENIC");
      (**(code **)(lVar11 + 0x28))(*(undefined8 *)(param_1 + 8),param_2,uVar9);
    }
  }
  return;
}




void FUN_140dbb430(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),uVar2);
    if (cVar1 != '\0') {
      lVar3 = FUN_140db86c0(param_1,param_2);
      if (lVar3 == 0) {
        log_InlineLogERROR("CFamilyArenicMgr::OnContinueAthlete, not found user(%d)");
      }
      else {
        FUN_140dbb1b0(param_1,param_2);
      }
    }
  }
  return;
}




void FUN_140dbb4c0(longlong param_1,uint param_2)

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
    log_InlineLogERROR("CFamilyArenicMgr::DeleteTeam, can not find team(leader: %u)");
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
      log_InlineLogERROR("CFamilyArenicMgr::DeleteTeam, can not delete team(leader: %u)");
    }
    else {
      FUN_140dc2750((longlong)puVar8,0,'\x01');
      (**(code **)*puVar8)(puVar8,1);
      local_28 = plVar2;
      plStack_20 = plVar3;
      FUN_140db9ac0((undefined8 *)(param_1 + 0x90),&local_38,(longlong *)&local_28);
    }
  }
  return;
}




void FUN_140dbb650(longlong param_1,uint param_2)

{
  uint local_38 [2];
  longlong local_30;
  longlong local_28 [4];
  
  local_30 = FUN_140db86c0(param_1,param_2);
  if (local_30 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140dbb67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CFamilyArenicMgr::JoinFamilyArenic");
    return;
  }
  local_38[0] = param_2;
  FUN_140db9270((longlong *)(param_1 + 0x50),local_28,local_38);
  return;
}




void FUN_140dbb6b0(longlong param_1,uint param_2)

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
    FUN_140db9420(plVar1,&local_28,&local_18);
  }
  return;
}




undefined8 FUN_140dbb7b0(longlong param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  FUN_140dba3b0((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
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
  uVar1 = FUN_140db13f0(local_10 + 0x20,param_3);
  return uVar1;
}




void FUN_140dbb890(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong lStack_20;
  undefined8 local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  local_res10[0] = param_2;
  FUN_140dba3b0(plVar1,(longlong *)&local_28,local_res10);
  lVar2 = *(longlong *)(param_1 + 0x100);
  if ((local_28 == (longlong *)0x0) || (local_28 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (lStack_20 != lVar2) {
    if (local_28 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *local_28;
    }
    if (lStack_20 == *(longlong *)(lVar2 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140db9f50(plVar1,local_18,(longlong *)&local_28);
  }
  return;
}




void FUN_140dbb940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    local_res10[0] = FUN_140dc0ab0(param_2);
    FUN_140dba3b0((longlong *)(param_1 + 0xd0),(longlong *)&local_30,local_res10);
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
      FUN_140db3280(local_28 + 0x20);
    }
  }
  return;
}




void FUN_140dbba30(longlong param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (cVar1 != '\0') {
    lVar3 = FUN_140db86c0(param_1,param_2);
    if (lVar3 != 0) {
      uVar2 = FUN_140db9100(param_1,param_2);
      FUN_140dcd690(param_1 + 0x120,param_2,uVar2,lVar3);
    }
  }
  return;
}




void FUN_140dbbab0(longlong param_1)

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
  __time32_t local_res10 [2];
  
  uVar4 = tq::DateStamp(0);
  if (*(uint *)(param_1 + 0x110) < uVar4) {
    FUN_140dcbea0(param_1 + 0x120);
    local_res10[0] = _time32((__time32_t *)0x0);
    ptVar6 = _localtime32(local_res10);
    if (ptVar6 == (tm *)0x0) {
      log_InlineLogERROR(&DAT_140ddd548);
    }
    else {
      if (ptVar6->tm_wday == 1) {
        FUN_140dca9f0(param_1 + 0x120);
      }
      if (ptVar6->tm_mday == 1) {
        FUN_140dcc0e0(param_1 + 0x120);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x210))();
      }
      FUN_140dcde30(param_1 + 0x120);
      puVar1 = *(undefined8 **)(param_1 + 0x40);
      puVar7 = (undefined8 *)*puVar1;
      plVar2 = *(longlong **)(param_1 + 0x10);
LAB_140dbbbc0:
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
          log_InlineLogERROR("CFamilyArenicMgr::ProcessSettlement, found null user, user: %u");
        }
        else {
          FUN_140dc4b90(lVar9);
          uVar5 = FUN_140dc4ce0(lVar9);
          FUN_140dbba30(param_1,uVar5);
          FUN_140db4500(param_1,uVar5);
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
        goto LAB_140dbbbc0;
      }
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x110);
      *(uint *)(param_1 + 0x110) = uVar4;
    }
  }
  return;
}




longlong FUN_140dbbd00(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_140dba3b0((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
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




longlong FUN_140dbbda0(longlong param_1,uint param_2)

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
  
  lVar6 = FUN_140db87c0(param_1,param_2);
  if (lVar6 == 0) {
    return 0;
  }
  uVar5 = FUN_140dc0ab0(lVar6);
  if (uVar5 != 0) {
    puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x100))[1];
    cVar1 = *(char *)((longlong)puVar9 + 0xd9);
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
      cVar1 = *(char *)((longlong)puVar7 + 0xd9);
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
  return 0;
}




void FUN_140dbbef0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_140dba3b0((longlong *)(param_1 + 0xd0),(longlong *)&local_18,local_res10);
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
    FUN_140db3700(local_10 + 0x20,param_1);
  }
  return;
}




ulonglong FUN_140dbbf90(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  ulonglong extraout_RAX;
  longlong lVar5;
  uint local_res10 [2];
  uint local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  longlong *local_58 [2];
  longlong local_48;
  longlong lStack_40;
  
  local_res10[0] = param_2;
  FUN_140db9e80((longlong *)(param_1 + 0x90),(longlong *)&local_68,local_res10);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  lVar5 = 0;
  local_58[0] = *(longlong **)(param_1 + 0x90);
  plVar2 = (longlong *)CONCAT44(uStack_64,local_68);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58[0])) {
    _invalid_parameter_noinfo();
  }
  lVar3 = lStack_60;
  if (lStack_60 != lVar1) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar5 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar1 = *(longlong *)(lVar3 + 0x20);
    if (lVar1 != 0) {
      local_68 = FUN_140dc2400(lVar1);
      if (local_68 == 0) {
        return CONCAT44(extraout_var,local_68);
      }
      lStack_40 = lStack_60;
      FUN_140db9ac0((undefined8 *)(param_1 + 0x90),local_58,&local_48);
      lStack_60 = lVar1;
      FUN_140db9910((longlong *)(param_1 + 0x90),&local_48,&local_68);
      uVar4 = FUN_140dbb940(param_1,lVar1);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  log_InlineLogERROR("CFamilyArenicMgr::ChangeTeamLeader, not found team of leader:%u");
  return extraout_RAX & 0xffffffffffffff00;
}




undefined8 * FUN_140dbc0c0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140dba4e0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_140dbc1c0(longlong *param_1)

{
  FUN_140dba960(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140dbc1f0(longlong *param_1,uint *param_2)

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
  
  FUN_140db7310(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0xd9) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0xd9) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0xd9);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0xd9);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0xd9);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0xd9);
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
  FUN_140dba800(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_140dbc350(undefined8 *param_1,longlong param_2)

{
  *param_1 = CFamilyArenicMatch::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  FUN_140db2c50(param_1 + 4,(undefined8 *)(param_2 + 0x20));
  FUN_140db2c50(param_1 + 10,(undefined8 *)(param_2 + 0x50));
  FUN_140db2c50(param_1 + 0x10,(undefined8 *)(param_2 + 0x80));
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  return param_1;
}




undefined8 * FUN_140dbc3e0(undefined8 *param_1)

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
  lVar2 = FUN_140db69d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dbc460(longlong *param_1)

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
  FUN_140dbaa00(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140dbc4d0(undefined8 *param_1)

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
  lVar2 = FUN_140db6a30();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dbc550(longlong *param_1)

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
  FUN_140dbac00(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140dbc5c0(undefined8 *param_1)

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
  lVar2 = FUN_140db6a90();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xd9) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140dbc640(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dbae50((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dbc734;
  }
  _invalid_parameter_noinfo();
LAB_140dbc734:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined4 * FUN_140dbc770(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140dbc350((undefined8 *)(param_1 + 2),(longlong)(param_2 + 2));
  return param_1;
}




void FUN_140dbc7b0(longlong *param_1)

{
  FUN_140dba960(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbc7e0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  puVar3 = FUN_140dc52c0(*(longlong **)(param_1 + 8),param_2);
  if (puVar3 == (undefined8 *)0x0) {
    log_InlineLogERROR("CFamilyArenicMgr::OnUserLogin, can not create family arenic user");
  }
  else {
    puVar4 = FUN_140dbc0c0((longlong *)(param_1 + 0x10),local_res10);
    *puVar4 = puVar3;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x220))(*(longlong **)(param_1 + 8),param_2);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    uVar2 = tq::DateStamp((longlong)iVar1);
    if (uVar2 < *(uint *)(param_1 + 0x110)) {
      FUN_140dc4b90((longlong)puVar3);
    }
  }
  return;
}




void FUN_140dbc890(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140dbba30(param_1,param_2);
  lVar2 = FUN_140db87c0(param_1,param_2);
  if (lVar2 != 0) {
    iVar1 = FUN_140dc0860(lVar2);
    if ((iVar1 != 1) && (iVar1 = FUN_140dc0860(lVar2), iVar1 != 6)) {
      return;
    }
    FUN_140dbb4c0(param_1,param_2);
  }
  return;
}




void FUN_140dbc900(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    log_InlineLogERROR("CFamilyArenicMgr::BeginAthletics, found NULL team");
  }
  else {
    uVar1 = FUN_140dc0ab0(param_2);
    uVar2 = FUN_140dc0ab0(param_3);
    iVar3 = FUN_140dc0a70(param_2);
    iVar4 = FUN_140dc0a70(param_3);
    if (((uVar1 == 0) || (uVar2 == 0)) || (uVar1 != uVar2)) {
      log_InlineLogERROR("CFamilyArenicMgr::BeginAthletics, MapID error map1: %u, map2: %u, leader1: %u, leader2: %u");
    }
    else {
      if (iVar3 != iVar4) {
        iVar5 = FUN_140dc0a80(param_2);
        iVar6 = FUN_140dc0a80(param_3);
        if (iVar5 != iVar6) {
          lVar7 = FUN_140dbb7b0(param_1,uVar1,iVar3);
          if ((lVar7 == 0) || (iVar3 = FUN_140dc0a70(lVar7), iVar3 != iVar4)) {
            log_InlineLogERROR("CFamilyArenicMgr::BeginAthletics, wrong team match, leader1: %u, leader2: %u");
            return;
          }
          iVar3 = FUN_140dc0860(param_2);
          iVar4 = FUN_140dc0860(param_3);
          if ((iVar3 == 3) && (iVar4 == 3)) {
            pcVar8 = "BeginAthletics";
            FUN_140db45a0(param_1,(ulonglong)uVar1,0x140ddf2d0);
            FUN_140dc2da0(param_2,param_3,pcVar8,param_4);
            FUN_140dc2da0(param_3,param_2,pcVar8,param_4);
            FUN_140dbb940(param_1,param_2);
            return;
          }
          log_InlineLogERROR("CFamilyArenicMgr::BeginAthletics, status Error: leader1:%u status1:%d , leader2:%u status2:%d");
          return;
        }
      }
      log_InlineLogERROR("CFamilyArenicMgr::BeginAthletics, same team or family, leader1: %u, leader2: %u");
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dbcab0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  char *_Format;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_158;
  char local_148;
  undefined1 local_147 [254];
  undefined1 local_49;
  ulonglong local_48;
  
  local_158 = 0xfffffffffffffffe;
  local_48 = DAT_140df1540 ^ (ulonglong)auStack_188;
  if (param_2 == 0) {
    local_168 = CONCAT44(local_168._4_4_,0x17a);
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (param_3 == 0) {
    local_168 = CONCAT44(local_168._4_4_,0x17b);
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar1 = FUN_140dc0ab0(param_2);
    uVar2 = FUN_140dc0ab0(param_3);
    iVar3 = FUN_140dc0a70(param_2);
    iVar4 = FUN_140dc0a70(param_3);
    if ((uVar1 == 0) || (uVar1 != uVar2)) {
      local_168 = CONCAT44(local_168._4_4_,iVar4);
      log_InlineLogERROR("CFamilyArenicMgr::EndAthletics, map error, map1: %u, map2: %u, leader1: %u, leader2: %u");
    }
    else {
      lVar6 = FUN_140dbb7b0(param_1,uVar1,iVar3);
      if ((lVar6 == 0) || (iVar5 = FUN_140dc0a70(lVar6), iVar4 != iVar5)) {
        log_InlineLogERROR("CFamilyArenicMgr::EndAthletics, teams does not match");
      }
      else {
        FUN_140dc0a00(param_2,iVar4);
        FUN_140dc0a00(param_3,iVar3);
        FUN_140dc0980(param_2,1);
        FUN_140dc0980(param_3,2);
        FUN_140dc18e0(param_2);
        FUN_140dc1aa0(param_3);
        FUN_140dceaf0(param_1 + 0x120,param_2,param_3);
        FUN_140dc2750(param_2,10,'\x01');
        FUN_140dc2750(param_3,10,'\x01');
        FUN_140dc1db0(param_2);
        FUN_140dc1db0(param_3);
        local_148 = '\0';
        memset(local_147,0,0xff);
        pIVar7 = theInstance();
        uVar8 = FUN_140dc0a90(param_3);
        FUN_140dc0a90(param_2);
        _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_FAMILY_ARENIC_RESULT");
        local_168 = uVar8;
        _snprintf(&local_148,0x100,_Format);
        local_49 = 0;
        iVar3 = FUN_140dc1270(param_2);
        if (iVar3 != 0) {
          (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_148,0xffff00,0x7e6);
        }
      }
    }
  }
  return;
}




void FUN_140dbcd20(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_140db86c0(param_1,param_2);
  if (lVar3 == 0) {
    log_InlineLogERROR("CFamilyArenicMgr::OnLeave, not found user : %u");
    return;
  }
  uVar1 = FUN_140dc4cb0(lVar3);
  lVar3 = FUN_140db87c0(param_1,uVar1);
  if (lVar3 == 0) {
    return;
  }
  iVar2 = FUN_140dc0860(lVar3);
  if (iVar2 == 1) {
LAB_140dbcdb6:
    if (uVar1 == param_2) {
      FUN_140dbb4c0(param_1,uVar1);
    }
    else {
      log_InlineLogERROR("CFamilyArenicMgr::OnLeave, idleader != idUser on search status, user : %u");
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 5) {
        return;
      }
      if (iVar2 < 7) goto LAB_140dbcdb6;
    }
    FUN_140dc0860(lVar3);
    log_InlineLogERROR("CFamilyArenicMgr::OnLeave, error status of user(%u) when leave family arenic, \t\t\tteam status: %d");
  }
  return;
}




void FUN_140dbcdf0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    iVar1 = FUN_140dc0a70(param_2);
    uVar2 = FUN_140dc0ab0(param_2);
    if (uVar2 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnTeamInviteOK, not arenic map of team, leader: %u");
    }
    else {
      lVar3 = FUN_140dbb7b0(param_1,uVar2,iVar1);
      iVar1 = FUN_140dc0860(lVar3);
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          FUN_140dbc900(param_1,param_2,lVar3,param_4);
        }
        else if (iVar1 == 4) {
          FUN_140dc4370(lVar3);
        }
        else {
          FUN_140dc0860(lVar3);
          log_InlineLogERROR("CFamilyArenicMgr::OnTeamInviteOK, error status of enemy team, status: %d");
        }
      }
    }
  }
  return;
}




void FUN_140dbcee0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar2 = FUN_140dc0ab0(param_2);
    iVar3 = FUN_140dc0a70(param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),uVar2);
    if (cVar1 == '\0') {
      log_InlineLogERROR("CFamilyArenicMgr::OnTeamAthleteRefuse, arenic map no exist, leader: %u, map: %u");
    }
    else {
      lVar4 = FUN_140dbb7b0(param_1,uVar2,iVar3);
      if (lVar4 == 0) {
        log_InlineLogERROR("CFamilyArenicMgr::OnTeamAthleteRefuse, enemy team no exist, leader: %u, map: %u");
      }
      else {
        FUN_140dbcab0(param_1,lVar4,param_2);
        FUN_140dd2940(local_418);
        uVar5 = FUN_140dd2a30((longlong)local_418,9,1);
        if ((char)uVar5 != '\0') {
          FUN_140dc1650(lVar4,local_418);
        }
        FUN_140dd2940(local_828);
        uVar5 = FUN_140dd2a30((longlong)local_828,9,0);
        if ((char)uVar5 != '\0') {
          FUN_140dc1650(param_2,local_828);
        }
        FUN_140dd2990((undefined8 *)local_828);
        FUN_140dd2990((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_140dbd060(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar1 = FUN_140dc0ab0(param_2);
    local_res10[0] = uVar1;
    iVar2 = FUN_140dc0a70(param_2);
    if (uVar1 == 0) {
      FUN_140dc0860(param_2);
      log_InlineLogERROR("CFamilyArenicMgr::OnTeamInviteRefuse, leader: %u, status: %d");
    }
    else {
      lVar3 = FUN_140dbb7b0(param_1,uVar1,iVar2);
      iVar2 = FUN_140dc0860(lVar3);
      if ((iVar2 == 0) || (iVar2 == 1)) {
        FUN_140dc0860(lVar3);
        FUN_140dc0a70(lVar3);
        FUN_140dc0860(param_2);
        log_InlineLogERROR("CFamilyArenicMgr::OnTeamInviteRefuse, status error leader1:%u, status1:%d, leader2:%u, status2:%d");
      }
      else {
        FUN_140dbcab0(param_1,lVar3,param_2);
        FUN_140db42a0(param_1,param_2,'\0',0,0);
        FUN_140db42a0(param_1,lVar3,'\0',0,0);
        FUN_140db45a0(param_1,(ulonglong)uVar1,0x140ddf7f8);
        FUN_140dbc1f0((longlong *)(param_1 + 0xd0),local_res10);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),uVar1);
      }
    }
  }
  return;
}




void FUN_140dbd1d0(longlong param_1,longlong param_2)

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
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar1 = FUN_140dc0ab0(param_2);
    iVar2 = FUN_140dc0a70(param_2);
    FUN_140dc0860(param_2);
    if (uVar1 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnTeamFightTimeOut,  none map leader:%u, status:%u");
    }
    else {
      lVar3 = FUN_140dbb7b0(param_1,uVar1,iVar2);
      if (lVar3 == 0) {
        log_InlineLogERROR("CFamilyArenicMgr::OnTeamFightTimeOut,  not found enemy team, leader:%u, status:%u");
      }
      else {
        FUN_140dc2750(param_2,9,'\x01');
        iVar2 = FUN_140dc0860(lVar3);
        if (iVar2 == 9) {
          uVar4 = FUN_140dc0de0(param_2,lVar3);
          lVar6 = lVar3;
          if ((char)uVar4 != '\0') {
            lVar6 = param_2;
            param_2 = lVar3;
          }
          FUN_140dbcab0(param_1,lVar6,param_2);
          FUN_140dd2940(local_418);
          uVar5 = FUN_140dd2a30((longlong)local_418,9,1);
          if ((char)uVar5 != '\0') {
            FUN_140dc1650(lVar6,local_418);
          }
          FUN_140dd2940(local_828);
          uVar5 = FUN_140dd2a30((longlong)local_828,9,0);
          if ((char)uVar5 != '\0') {
            FUN_140dc1650(param_2,local_828);
          }
          FUN_140dd2990((undefined8 *)local_828);
          FUN_140dd2990((undefined8 *)local_418);
        }
      }
    }
  }
  return;
}




void FUN_140dbd380(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar1 = FUN_140dc0ab0(param_2);
    iVar2 = FUN_140dc0a70(param_2);
    FUN_140dc0860(param_2);
    if (uVar1 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnTeamFightEndTimeOut,  none map leader:%u, status:%u");
    }
    else {
      lVar3 = FUN_140dbb7b0(param_1,uVar1,iVar2);
      if (lVar3 == 0) {
        FUN_140dc2750(param_2,0xb,'\x01');
        FUN_140dbbef0(param_1,uVar1);
        FUN_140db42a0(param_1,param_2,'\x01',1,1);
        FUN_140db45a0(param_1,(ulonglong)uVar1,0x140ddfa38);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),uVar1);
      }
      else {
        iVar2 = FUN_140dc0860(lVar3);
        if (iVar2 == 10) {
          FUN_140dc2750(param_2,0xb,'\x01');
        }
        else if (iVar2 == 0xb) {
          FUN_140dc2750(param_2,0xb,'\x01');
          FUN_140dbbef0(param_1,uVar1);
          FUN_140db42a0(param_1,param_2,'\x01',1,1);
          FUN_140db42a0(param_1,lVar3,'\x01',1,1);
          FUN_140db45a0(param_1,(ulonglong)uVar1,0x140ddf9a0);
          FUN_140dbb890(param_1,uVar1);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),uVar1);
        }
        else {
          FUN_140dc0a70(lVar3);
          log_InlineLogERROR("CFamilyArenicMgr::OnTeamFightEndTimeOut, enemy status error, leader:%u, status:%u, enemy leader:%u, enemy status : %u");
        }
      }
    }
  }
  return;
}




void FUN_140dbd570(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    iVar1 = FUN_140dc0a70(param_2);
    uVar2 = FUN_140dc0ab0(param_2);
    if (uVar2 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnInviteTimeOut, found none map of user: %u");
    }
    else {
      lVar3 = FUN_140dbb7b0(param_1,uVar2,iVar1);
      if (lVar3 == 0) {
        log_InlineLogERROR("CFamilyArenicMgr::OnInviteTimeOut, can not found enemy team, leader: %u");
      }
      else {
        iVar1 = FUN_140dc0860(lVar3);
        if (iVar1 == 2) {
          FUN_140dc2750(param_2,4,'\0');
        }
        else if (iVar1 == 3) {
          FUN_140dc4370(param_2);
        }
        else if (iVar1 == 4) {
          uVar4 = FUN_140dc1110(param_2,3);
          if (((char)uVar4 != '\0') && (uVar4 = FUN_140dc1110(lVar3,3), (char)uVar4 != '\0')) {
            FUN_140dc4370(param_2);
            FUN_140dc4370(lVar3);
            return;
          }
          uVar4 = FUN_140dc1110(param_2,3);
          if ((char)uVar4 == '\0') {
            uVar4 = FUN_140dc1110(lVar3,3);
            if ((char)uVar4 == '\0') {
              uVar4 = FUN_140dc0de0(param_2,lVar3);
              if ((char)uVar4 == '\0') {
                FUN_140dc4370(param_2);
              }
              else {
                FUN_140dc4370(lVar3);
              }
            }
            else {
              FUN_140dc4370(param_2);
            }
          }
          else {
            FUN_140dc4370(lVar3);
          }
        }
        else {
          FUN_140dc0860(lVar3);
          FUN_140dc0860(param_2);
          log_InlineLogERROR("CFamilyArenicMgr::OnInviteTimeOut, Leader : %u, team status: %d, enemy team status: %d");
        }
      }
    }
  }
  return;
}




void FUN_140dbd720(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  CMsg local_428 [1040];
  
  uVar9 = (undefined7)((ulonglong)param_4 >> 8);
  lVar4 = FUN_140db86c0(param_1,param_2);
  if (lVar4 == 0) {
    log_InlineLogERROR("CFamilyArenicMgr::OnAthleteRefuse, found NULL user");
  }
  else {
    uVar5 = FUN_140db88e0(param_1,param_2);
    if ((char)uVar5 != '\0') {
      uVar2 = FUN_140dc4cb0(lVar4);
      lVar6 = FUN_140db87c0(param_1,uVar2);
      if (lVar6 == 0) {
        log_InlineLogERROR("CFamilyArenicMgr::OnAthleteRefuse, found no team of user: %u, leader: %u");
      }
      else {
        uVar3 = FUN_140dc0ab0(lVar6);
        lVar7 = FUN_140dbb7b0(param_1,uVar3,uVar2);
        if (lVar7 == 0) {
          log_InlineLogERROR("CFamilyArenicMgr::OnAthleteRefuse, found no enemy team of user: %u, leader: %u");
        }
        else {
          bVar1 = FUN_140dc08f0(lVar6);
          if (bVar1) {
            bVar1 = FUN_140dc08f0(lVar7);
            if (bVar1) {
              FUN_140dc4c00(lVar4,5);
              uVar8 = FUN_140dc2260(lVar6);
              if ((char)uVar8 != '\0') {
                FUN_140dbcee0(param_1,lVar6);
              }
              if (param_3 != '\0') {
                uVar8 = FUN_140dc0fb0(lVar6,5);
                if ((char)uVar8 == '\0') {
                  FUN_140dd2940(local_428);
                  uVar8 = FUN_140dd29f0((longlong)local_428,0xd);
                  if ((char)uVar8 != '\0') {
                    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_428);
                  }
                  FUN_140dc53d0(lVar4,'\x01',1,CONCAT71(uVar9,1));
                  FUN_140dd2990((undefined8 *)local_428);
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




void FUN_140dbd8c0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  CMsg local_418 [1040];
  
  uVar9 = (undefined1)param_4;
  uVar10 = (undefined7)((ulonglong)param_4 >> 8);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (((cVar1 != '\0') && (uVar5 = FUN_140db88e0(param_1,param_2), (char)uVar5 != '\0')) && (lVar6 = FUN_140db86c0(param_1,param_2), lVar6 != 0)) {
    uVar3 = FUN_140dc4cb0(lVar6);
    lVar7 = FUN_140db87c0(param_1,uVar3);
    if ((lVar7 != 0) && (iVar4 = FUN_140dc0860(lVar7), 6 < iVar4)) {
      if (iVar4 < 10) {
        FUN_140dbd720(param_1,param_2,'\0',CONCAT71(uVar10,uVar9));
        FUN_140dd2940(local_418);
        uVar8 = FUN_140dd29f0((longlong)local_418,0xd);
        if ((char)uVar8 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2,local_418);
        }
        FUN_140dc53d0(lVar6,'\0',1,CONCAT71(uVar10,1));
        FUN_140dd2990((undefined8 *)local_418);
      }
      else if (iVar4 < 0xc) {
        FUN_140dc4c00(lVar6,5);
        uVar8 = FUN_140dc2260(lVar7);
        if ((char)uVar8 != '\0') {
          uVar3 = FUN_140dc0ab0(lVar7);
          iVar4 = FUN_140dc0a70(lVar7);
          lVar6 = FUN_140dbb7b0(param_1,uVar3,iVar4);
          bVar2 = FUN_140dc0f50(lVar6);
          if ((!bVar2) && (uVar8 = FUN_140dc0fb0(lVar6,5), (char)uVar8 == '\0')) {
            return;
          }
          FUN_140dbbef0(param_1,uVar3);
          if (lVar6 != 0) {
            FUN_140db42a0(param_1,lVar7,'\0',1,1);
            FUN_140db42a0(param_1,lVar6,'\x01',1,1);
            FUN_140dbb890(param_1,uVar3);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x160))(*(longlong **)(param_1 + 8),uVar3);
          }
        }
      }
    }
  }
  return;
}




void FUN_140dbdaa0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140db88e0(param_1,param_2);
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_140db86c0(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnDie, not found family arenic user");
    }
    else {
      iVar1 = FUN_140dc4990(lVar3);
      if (iVar1 == 8) {
        FUN_140dbd720(param_1,param_2,'\0',param_4);
      }
    }
  }
  return;
}




void FUN_140dbdb10(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0 < param_3) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
    if (cVar1 != '\0') {
      lVar5 = FUN_140db86c0(param_1,param_2);
      if (lVar5 != 0) {
        uVar6 = FUN_140db88e0(param_1,param_2);
        if ((char)uVar6 != '\0') {
          uVar2 = FUN_140dc4cb0(lVar5);
          if (uVar2 != 0) {
            lVar5 = FUN_140db87c0(param_1,uVar2);
            if (lVar5 != 0) {
              uVar3 = FUN_140dc0ab0(lVar5);
              if (uVar3 == 0) {
                FUN_140dc0860(lVar5);
                log_InlineLogERROR("CFamilyArenicMgr::OnLoseLife Map none user:%u, status:%u");
              }
              else {
                lVar7 = FUN_140dbb7b0(param_1,uVar3,uVar2);
                if (lVar7 == 0) {
                  log_InlineLogERROR("CFamilyArenicMgr::OnLoseLife, not found enemy team of user(%d), leader: %d");
                }
                else {
                  iVar4 = FUN_140dc0860(lVar5);
                  if (iVar4 == 8) {
                    iVar4 = FUN_140dc0860(lVar7);
                    if (iVar4 == 8) {
                      FUN_140dc0ad0(lVar7,param_3);
                      FUN_140dbb940(param_1,lVar5);
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




void FUN_140dbdc40(longlong *param_1)

{
  FUN_140dbc460(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbdc70(longlong *param_1)

{
  FUN_140dbc550(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dbdca0(undefined8 *param_1)

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
  lVar2 = FUN_140db6a90();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0xd9) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined4 * FUN_140dbdd20(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_140dbc350((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_140dbdd50(longlong *param_1,undefined8 *param_2)

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
  FUN_140dbc640(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_140dbde00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140dbc350(param_1 + 4,(longlong)(param_5 + 2));
  *(undefined1 *)(param_1 + 0x1b) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  return param_1;
}




void FUN_140dbde60(longlong *param_1)

{
  FUN_140dbc460(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbde90(longlong *param_1)

{
  FUN_140dbc550(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dbdec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 *puStack_60;
  longlong local_58 [4];
  
  *param_1 = CFamilyArenicMgr::vftable;
  plVar9 = *(longlong **)param_1[0x18];
  plVar2 = (longlong *)param_1[0x12];
  local_78 = plVar2;
  plStack_70 = plVar9;
  while( true ) {
    plVar10 = (longlong *)param_1[0x18];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0x12])) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar10) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar2;
    }
    if (plVar9 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)plVar9[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar10 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x29);
        plVar9 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (plStack_70 = plVar9, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x29);
          plVar9 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar8 = (longlong *)plVar9[1];
        plVar10 = plVar9;
        while ((plVar9 = plVar8, plStack_70 = plVar9, cVar1 == '\0' && (plVar10 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar8 = (longlong *)plVar9[1];
          plVar10 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x18] + 8) + 0x29);
  plVar9 = *(longlong **)(param_1[0x18] + 8);
  while (cVar1 == '\0') {
    FUN_140db6530(param_1 + 0x12,(longlong *)plVar9[2]);
    plVar2 = (longlong *)*plVar9;
    operator_delete(plVar9);
    plVar9 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(undefined8 *)(param_1[0x18] + 8) = param_1[0x18];
  param_1[0x19] = 0;
  *(undefined8 *)param_1[0x18] = param_1[0x18];
  *(undefined8 *)(param_1[0x18] + 0x10) = param_1[0x18];
  plVar9 = *(longlong **)param_1[8];
  plVar2 = (longlong *)param_1[2];
  local_78 = plVar2;
  plStack_70 = plVar9;
  while( true ) {
    plVar10 = (longlong *)param_1[8];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar10) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar2;
    }
    if (plVar9 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)plVar9[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar10 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x29);
        plVar9 = plVar10;
        plVar10 = (longlong *)*plVar10;
        while (plStack_70 = plVar9, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar10 + 0x29);
          plVar9 = plVar10;
          plVar10 = (longlong *)*plVar10;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar8 = (longlong *)plVar9[1];
        plVar10 = plVar9;
        while ((plVar9 = plVar8, plStack_70 = plVar9, cVar1 == '\0' && (plVar10 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar8 = (longlong *)plVar9[1];
          plVar10 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[8] + 8) + 0x29);
  plVar9 = *(longlong **)(param_1[8] + 8);
  while (cVar1 == '\0') {
    FUN_140db64e0(param_1 + 2,(longlong *)plVar9[2]);
    plVar2 = (longlong *)*plVar9;
    operator_delete(plVar9);
    plVar9 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x10] + 8) + 0x29);
  plVar9 = *(longlong **)(param_1[0x10] + 8);
  while (cVar1 == '\0') {
    FUN_140db64e0(param_1 + 10,(longlong *)plVar9[2]);
    plVar2 = (longlong *)*plVar9;
    operator_delete(plVar9);
    plVar9 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(undefined8 *)(param_1[0x10] + 8) = param_1[0x10];
  param_1[0x11] = 0;
  *(undefined8 *)param_1[0x10] = param_1[0x10];
  *(undefined8 *)(param_1[0x10] + 0x10) = param_1[0x10];
  if (param_1[0x52] != 0) {
    FUN_140dd00a0((undefined8 *)param_1[0x52]);
    param_1[0x52] = 0;
  }
  FUN_140dccb40(param_1 + 0x24);
  plVar9 = param_1 + 0x1a;
  puVar3 = (undefined8 *)param_1[0x20];
  plVar2 = (longlong *)*plVar9;
  plStack_70 = (longlong *)*puVar3;
  local_78 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  puVar4 = (undefined8 *)param_1[0x20];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar9)) {
    _invalid_parameter_noinfo();
  }
  plVar8 = local_78;
  plVar10 = plStack_70;
  if (puVar3 == puVar4) {
    cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x20] + 8) + 0xd9);
    plVar2 = *(longlong **)(param_1[0x20] + 8);
    while (cVar1 == '\0') {
      FUN_140db7430(plVar9,(longlong *)plVar2[2],param_3,param_4);
      plVar10 = (longlong *)*plVar2;
      FUN_140db31a0(plVar2 + 4);
      operator_delete(plVar2);
      plVar2 = plVar10;
      cVar1 = *(char *)((longlong)plVar10 + 0xd9);
    }
    *(undefined8 *)(param_1[0x20] + 8) = param_1[0x20];
    param_1[0x21] = 0;
    *(undefined8 *)param_1[0x20] = param_1[0x20];
    *(undefined8 *)(param_1[0x20] + 0x10) = param_1[0x20];
  }
  else {
    while( true ) {
      if ((plVar8 == (longlong *)0x0) || (plVar8 != plVar2)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = plStack_70;
      plVar5 = local_78;
      if (plVar10 == puVar3) break;
      if (plVar8 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar10 + 0xd9) == '\0') {
        puVar4 = (undefined8 *)plVar10[2];
        if (*(char *)((longlong)puVar4 + 0xd9) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0xd9);
          plVar10 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (plStack_70 = plVar10, cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0xd9);
            plVar10 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)(plVar10[1] + 0xd9);
          puVar7 = (undefined8 *)plVar10[1];
          puVar4 = plVar10;
          while ((plVar10 = puVar7, plStack_70 = plVar10, cVar1 == '\0' && (puVar4 == (undefined8 *)plVar10[2]))) {
            cVar1 = *(char *)(plVar10[1] + 0xd9);
            puVar7 = (undefined8 *)plVar10[1];
            puVar4 = plVar10;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      local_68 = plVar5;
      puStack_60 = plVar6;
      FUN_140db9f50(plVar9,local_58,(longlong *)&local_68);
    }
  }
  operator_delete((void *)param_1[0x20]);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  operator_delete((void *)*plVar9);
  plVar9 = param_1 + 0x12;
  plStack_70 = (longlong *)param_1[0x18];
  local_78 = (longlong *)*plVar9;
  puStack_60 = (undefined8 *)*plStack_70;
  local_68 = local_78;
  FUN_140dbac00(plVar9,local_58,(longlong *)&local_68,(longlong *)&local_78);
  operator_delete((void *)param_1[0x18]);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  operator_delete((void *)*plVar9);
  plVar9 = param_1 + 10;
  puStack_60 = (undefined8 *)param_1[0x10];
  local_78 = (longlong *)*plVar9;
  plStack_70 = (longlong *)*puStack_60;
  local_68 = local_78;
  FUN_140dbaa00(plVar9,local_58,(longlong *)&local_78,(longlong *)&local_68);
  operator_delete((void *)param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  operator_delete((void *)*plVar9);
  plVar9 = param_1 + 2;
  puStack_60 = (undefined8 *)param_1[8];
  local_78 = (longlong *)*plVar9;
  plStack_70 = (longlong *)*puStack_60;
  local_68 = local_78;
  FUN_140dbaa00(plVar9,local_58,(longlong *)&local_78,(longlong *)&local_68);
  operator_delete((void *)param_1[8]);
  param_1[8] = 0;
  param_1[9] = 0;
  operator_delete((void *)*plVar9);
  return;
}




void FUN_140dbe570(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  CMsg local_418 [1040];
  
  bVar1 = FUN_140db8980(param_1,param_2);
  if (bVar1) {
    lVar3 = FUN_140db86c0(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnInviteRefuse, not found CFamilyArenicUser of user %u");
    }
    else {
      uVar2 = FUN_140dc4cb0(lVar3);
      lVar4 = FUN_140db87c0(param_1,uVar2);
      FUN_140dc5200(lVar3);
      FUN_140dbba30(param_1,param_2);
      FUN_140dc3e60(lVar4,param_2);
      uVar2 = FUN_140dc0a70(lVar4);
      if (param_2 == uVar2) {
        FUN_140dbbf90(param_1,param_2);
      }
      FUN_140dd2940(local_418);
      FUN_140dd2a30((longlong)local_418,10,0);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
      bVar1 = FUN_140dc0f50(lVar4);
      if (bVar1) {
        FUN_140dbd060(param_1,lVar4);
        FUN_140dd2990((undefined8 *)local_418);
      }
      else {
        uVar5 = FUN_140dc0fb0(lVar4,3);
        if ((char)uVar5 != '\0') {
          uVar5 = 0;
          FUN_140dc2750(lVar4,3,'\0');
          FUN_140dbcdf0(param_1,lVar4,uVar5,param_4);
        }
        FUN_140dd2990((undefined8 *)local_418);
      }
    }
  }
  else {
    log_InlineLogERROR("CFamilyArenicMgr::OnInviteRefuse, user(%u) does not join the family arenic");
  }
  return;
}




void FUN_140dbe6d0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  bVar1 = FUN_140db8980(param_1,param_2);
  if (bVar1) {
    lVar3 = FUN_140db86c0(param_1,param_2);
    if (lVar3 == 0) {
      log_InlineLogERROR("CFamilyArenicMgr::OnInviteOK, not found CFamilyArenicUser of user %u");
    }
    else {
      uVar2 = FUN_140dc4cb0(lVar3);
      lVar4 = FUN_140db87c0(param_1,uVar2);
      FUN_140dc4c00(lVar3,3);
      uVar5 = FUN_140dc0fb0(lVar4,3);
      if ((char)uVar5 != '\0') {
        uVar5 = 0;
        FUN_140dc2750(lVar4,3,'\0');
        FUN_140dbcdf0(param_1,lVar4,uVar5,param_4);
      }
    }
  }
  return;
}




void FUN_140dbe780(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x240))();
  if ((cVar1 != '\0') && (lVar4 = FUN_140db87c0(param_1,param_2), lVar4 != 0)) {
    uVar2 = FUN_140dc0860(lVar4);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),param_2);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),uVar3);
    if (cVar1 != '\0') {
      lVar4 = **(longlong **)(param_1 + 8);
      cVar1 = (**(code **)(lVar4 + 0x170))(*(longlong **)(param_1 + 8),uVar3);
      if (cVar1 == '\0') {
        switch(uVar2) {
        case 0:
        case 3:
        case 4:
        case 5:
        case 10:
        case 0xb:
          break;
        case 1:
          lVar4 = FUN_140db87c0(param_1,param_2);
          if (lVar4 != 0) {
            FUN_140dc2750(lVar4,6,'\x01');
          }
          break;
        case 2:
          cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),uVar3);
          if (cVar1 != '\0') {
            FUN_140dbe570(param_1,param_2,lVar4,param_4);
          }
          break;
        case 6:
          lVar4 = FUN_140db87c0(param_1,param_2);
          if ((lVar4 != 0) && (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),uVar3), cVar1 == '\0')) {
            FUN_140dc2750(lVar4,1,'\x01');
          }
          break;
        default:
          log_InlineLogERROR("CFamilyArenicMgr::OnEnterMap Error User:%u, status:%d");
        }
      }
    }
  }
  return;
}




void FUN_140dbe920(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined7 uVar9;
  
  uVar8 = (undefined1)param_4;
  uVar9 = (undefined7)((ulonglong)param_4 >> 8);
  lVar5 = FUN_140db86c0(param_1,param_2);
  if (lVar5 != 0) {
    uVar2 = FUN_140dc4cb0(lVar5);
    lVar6 = FUN_140db87c0(param_1,uVar2);
    if (lVar6 != 0) {
      uVar3 = FUN_140dc0860(lVar6);
      switch(uVar3) {
      case 1:
      case 6:
        if (uVar2 == param_2) {
          FUN_140dbb4c0(param_1,uVar2);
        }
        else {
          log_InlineLogERROR("CFamilyArenicMgr::OnLeave, idleader != idUser on search status, user : %u");
        }
        break;
      case 2:
      case 3:
      case 4:
        FUN_140dbe570(param_1,param_2,param_3,CONCAT71(uVar9,uVar8));
        break;
      case 5:
        FUN_140dc3e60(lVar6,param_2);
        bVar1 = FUN_140dc0f50(lVar6);
        if (bVar1) {
          uVar2 = FUN_140dc0a70(lVar6);
          FUN_140dbb4c0(param_1,uVar2);
        }
        break;
      case 7:
      case 8:
      case 9:
        FUN_140dbd720(param_1,param_2,'\0',CONCAT71(uVar9,uVar8));
        FUN_140dc3e60(lVar6,param_2);
        if (param_2 == uVar2) {
          FUN_140dbbf90(param_1,uVar2);
        }
        bVar1 = FUN_140dc0f50(lVar6);
        if (bVar1) {
          uVar2 = FUN_140dc0ab0(lVar6);
          iVar4 = FUN_140dc0a70(lVar6);
          lVar7 = FUN_140dbb7b0(param_1,uVar2,iVar4);
          if (lVar7 != 0) {
            FUN_140dbd380(param_1,lVar7);
          }
          FUN_140dc53d0(lVar5,'\x01',1,CONCAT71(uVar9,1));
          FUN_140dbd380(param_1,lVar6);
        }
        break;
      case 10:
      case 0xb:
        FUN_140dc3e60(lVar6,param_2);
      }
    }
  }
  return;
}




longlong FUN_140dbeae0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *local_198 [3];
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  uint local_168;
  longlong *local_160;
  uint local_158;
  int local_154;
  longlong *local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_78 = 0xfffffffffffffffe;
  if ((param_2 != 0) && (bVar3 = FUN_140dc08e0(param_2), bVar3)) {
    lVar15 = **(longlong **)(param_1 + 8);
    uVar8 = FUN_140dc0a70(param_2);
    cVar4 = (**(code **)(lVar15 + 0xa8))(*(undefined8 *)(param_1 + 8),uVar8);
    if (cVar4 != '\0') {
      uVar9 = FUN_140dc0a80(param_2);
      local_158 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),uVar9);
      local_168 = FUN_140dcd0d0(param_1 + 0x120,uVar9);
      local_154 = FUN_140db43a0(param_1,param_2);
      uVar5 = FUN_140db4440(param_1,param_2);
      local_160 = operator_new(8);
      if (local_160 == (longlong *)0x0) {
        local_198[0] = (longlong *)0x0;
      }
      else {
        *local_160 = (longlong)local_198;
        local_198[0] = local_160;
      }
      lVar15 = 0;
      local_180 = (longlong *)0x0;
      local_178 = (longlong *)0x0;
      local_170 = 0;
      plVar16 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
      plVar1 = *(longlong **)(param_1 + 0x90);
      plStack_d0 = *(longlong **)(param_1 + 0xc0);
      local_d8 = *(longlong **)(param_1 + 0x90);
      local_148 = plVar1;
      plStack_140 = plVar16;
      local_c8 = local_d8;
      plStack_c0 = plStack_d0;
      local_a8 = plVar1;
      plStack_a0 = plVar16;
LAB_140dbec60:
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_c8)) {
        _invalid_parameter_noinfo();
      }
      plVar17 = local_178;
      if (plVar16 != plStack_c0) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar18 = lVar15;
        }
        else {
          lVar18 = *plVar1;
        }
        if (plVar16 == *(longlong **)(lVar18 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar17 = (longlong *)plVar16[4];
        local_160 = plVar17;
        if ((plVar17 != (longlong *)0x0) && (uVar10 = FUN_140dc0a80((longlong)plVar17), uVar9 != uVar10)) {
          iVar11 = FUN_140dc0a70((longlong)plVar17);
          iVar12 = FUN_140dc09f0(param_2);
          if ((iVar11 != iVar12) && (bVar3 = FUN_140dc08e0((longlong)plVar17), bVar3)) {
            lVar18 = **(longlong **)(param_1 + 8);
            uVar8 = FUN_140dc0a70((longlong)plVar17);
            cVar4 = (**(code **)(lVar18 + 0xa8))(*(undefined8 *)(param_1 + 8),uVar8);
            if (cVar4 != '\0') {
              uVar13 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),uVar10);
              uVar6 = FUN_140dcd0d0(param_1 + 0x120,uVar10);
              iVar11 = FUN_140db43a0(param_1,(longlong)plVar17);
              uVar7 = FUN_140db4440(param_1,(longlong)plVar17);
              if ((((((int)(local_158 - local_154) < 1) || (local_158 - local_154 <= uVar13)) && (uVar13 <= local_154 + local_158)) &&
                  (((int)(uVar13 - iVar11) < 1 || (uVar13 - iVar11 <= local_158)))) && (local_158 <= iVar11 + uVar13)) {
                FUN_140dbdd50((longlong *)local_198,&local_160);
              }
              else {
                uVar14 = (ushort)local_168;
                if (((uVar14 != 0) && (uVar14 < 0x65)) && ((uVar6 != 0 && ((uVar6 < 0x65 && (uVar5 != 0)))))) {
                  uVar10 = local_168 & 0xffff;
                  iVar11 = uVar10 - uVar5;
                  if (((iVar11 < 1) || ((ushort)iVar11 <= uVar6)) && ((uVar13 = (uint)uVar6, uVar13 <= uVar10 + uVar5 && (uVar7 != 0)))) {
                    iVar11 = uVar13 - uVar7;
                    if (((iVar11 < 1) || ((ushort)iVar11 <= uVar14)) && (uVar10 <= uVar7 + uVar13)) {
                      FUN_140dbdd50((longlong *)local_198,&local_160);
                    }
                  }
                }
              }
            }
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar16 + 0x29) == '\0') {
          plVar17 = plVar16;
          plVar2 = (longlong *)plVar16[2];
          if (*(char *)(plVar16[2] + 0x29) == '\0') {
            do {
              plVar16 = plVar2;
              plVar2 = (longlong *)*plVar16;
              local_e8 = plVar16;
            } while (*(char *)(*plVar16 + 0x29) == '\0');
          }
          else {
            do {
              plVar16 = (longlong *)plVar17[1];
              if (*(char *)((longlong)plVar16 + 0x29) != '\0') break;
              bVar3 = plVar17 == (longlong *)plVar16[2];
              plVar17 = plVar16;
            } while (bVar3);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_140dbec60;
      }
      if ((longlong)local_178 - (longlong)local_180 >> 3 != 0) {
        local_108 = (longlong *)0x0;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        plVar1 = local_180;
        plVar16 = local_198[0];
        local_108 = local_198[0];
        uStack_100 = plVar17;
        local_108._0_4_ = SUB84(local_198[0],0);
        local_108._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
        uStack_100._0_4_ = SUB84(plVar17,0);
        uStack_100._4_4_ = (undefined4)((ulonglong)plVar17 >> 0x20);
        local_48 = (undefined4)local_108;
        uStack_44 = local_108._4_4_;
        uStack_40 = (undefined4)uStack_100;
        uStack_3c = uStack_100._4_4_;
        local_128 = (longlong *)0x0;
        local_108 = plVar16;
        uStack_100 = plVar17;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        local_128 = local_198[0];
        plVar2 = local_128;
        uStack_120 = plVar1;
        local_128._0_4_ = SUB84(local_198[0],0);
        local_128._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
        uStack_120._0_4_ = SUB84(plVar1,0);
        uStack_120._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
        local_68 = (undefined4)local_128;
        uStack_64 = local_128._4_4_;
        uStack_60 = (undefined4)uStack_120;
        uStack_5c = uStack_120._4_4_;
        local_128 = plVar2;
        uStack_120 = plVar1;
        if ((local_198[0] == (longlong *)0x0) || (local_198[0] != plVar16)) {
          _invalid_parameter_noinfo();
        }
        if (plVar1 != plVar17) {
          FUN_140db6ca0((longlong)plVar1,plVar17);
        }
        plVar16 = local_180;
        local_138 = (longlong *)0x0;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        plVar1 = local_178;
        local_138 = local_198[0];
        plVar17 = local_138;
        uStack_130 = plVar16;
        local_138._0_4_ = SUB84(local_198[0],0);
        local_138._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
        uStack_130._0_4_ = SUB84(plVar16,0);
        uStack_130._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
        local_b8 = (undefined4)local_138;
        uStack_b4 = local_138._4_4_;
        uStack_b0 = (undefined4)uStack_130;
        uStack_ac = uStack_130._4_4_;
        local_118 = (longlong *)0x0;
        local_138 = plVar17;
        uStack_130 = plVar16;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        local_118 = local_198[0];
        plVar2 = local_118;
        uStack_110 = plVar1;
        local_118._0_4_ = SUB84(local_198[0],0);
        local_118._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
        uStack_110._0_4_ = SUB84(plVar1,0);
        uStack_110._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
        local_98 = (undefined4)local_118;
        uStack_94 = local_118._4_4_;
        uStack_90 = (undefined4)uStack_110;
        uStack_8c = uStack_110._4_4_;
        plVar17 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
        plVar16 = (longlong *)CONCAT44(uStack_b4,local_b8);
        local_118 = plVar2;
        uStack_110 = plVar1;
        while( true ) {
          if ((plVar16 == (longlong *)0x0) || (plVar16 != (longlong *)CONCAT44(uStack_94,local_98))) {
            _invalid_parameter_noinfo();
          }
          plVar2 = local_180;
          if (plVar17 == plVar1) break;
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar18 = lVar15;
          }
          else {
            lVar18 = *plVar16;
          }
          if (*(longlong **)(lVar18 + 0x20) <= plVar17) {
            _invalid_parameter_noinfo();
          }
          lVar18 = *plVar17;
          if (lVar18 != 0) {
            uVar8 = FUN_140dc0a80(lVar18);
            iVar11 = FUN_140dc0970(param_2);
            if (iVar11 == 0) {
              if (local_180 != (longlong *)0x0) {
                operator_delete(local_180);
              }
              local_180 = (longlong *)0x0;
              local_178 = (longlong *)0x0;
              local_170 = 0;
              operator_delete(local_198[0]);
              return lVar18;
            }
            if (iVar11 == 1) {
              uVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),uVar8);
              uVar13 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1b0))(*(longlong **)(param_1 + 8),uVar9);
              if (uVar13 < uVar10) {
                if (local_180 != (longlong *)0x0) {
                  operator_delete(local_180);
                }
                local_180 = (longlong *)0x0;
                local_178 = (longlong *)0x0;
                local_170 = 0;
                operator_delete(local_198[0]);
                return lVar18;
              }
            }
            else if (iVar11 == 2) {
              plVar2 = *(longlong **)(param_1 + 8);
              uVar10 = (**(code **)(*plVar2 + 0x1b0))(plVar2,uVar8);
              uVar13 = (**(code **)(*plVar2 + 0x1b0))(plVar2,uVar9);
              if (uVar10 <= uVar13) {
                if (local_180 != (longlong *)0x0) {
                  operator_delete(local_180);
                }
                local_180 = (longlong *)0x0;
                local_178 = (longlong *)0x0;
                local_170 = 0;
                operator_delete(local_198[0]);
                return lVar18;
              }
            }
          }
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar18 = lVar15;
          }
          else {
            lVar18 = *plVar16;
          }
          if (*(longlong **)(lVar18 + 0x20) <= plVar17) {
            _invalid_parameter_noinfo();
          }
          plVar17 = plVar17 + 1;
        }
        local_f8 = (longlong *)0x0;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        plVar1 = local_178;
        plVar16 = local_198[0];
        local_f8 = local_198[0];
        uStack_f0 = plVar2;
        plVar17 = uStack_f0;
        local_f8._0_4_ = SUB84(local_198[0],0);
        local_f8._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
        uStack_f0._0_4_ = SUB84(plVar2,0);
        uStack_f0._4_4_ = (undefined4)((ulonglong)plVar2 >> 0x20);
        local_58 = (undefined4)local_f8;
        uStack_54 = local_f8._4_4_;
        uStack_50 = (undefined4)uStack_f0;
        uStack_4c = uStack_f0._4_4_;
        local_88 = (longlong *)0x0;
        local_f8 = plVar16;
        uStack_f0 = plVar17;
        if (local_178 < local_180) {
          _invalid_parameter_noinfo();
        }
        local_88 = local_198[0];
        if ((plVar16 == (longlong *)0x0) || (plVar16 != local_198[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar2 == plVar1) {
          if (local_180 != (longlong *)0x0) {
            operator_delete(local_180);
          }
          local_180 = (longlong *)0x0;
          local_178 = (longlong *)0x0;
          local_170 = 0;
          operator_delete(local_198[0]);
          return 0;
        }
        if (plVar16 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar15 = *plVar16;
        }
        if (*(longlong **)(lVar15 + 0x20) <= plVar2) {
          _invalid_parameter_noinfo();
        }
        lVar15 = *plVar2;
        if (local_180 != (longlong *)0x0) {
          operator_delete(local_180);
        }
        local_180 = (longlong *)0x0;
        local_178 = (longlong *)0x0;
        local_170 = 0;
        operator_delete(local_198[0]);
        return lVar15;
      }
      if (local_180 != (longlong *)0x0) {
        operator_delete(local_180);
      }
      local_180 = (longlong *)0x0;
      local_178 = (longlong *)0x0;
      local_170 = 0;
      operator_delete(local_198[0]);
    }
  }
  return 0;
}




void FUN_140dbf2f0(longlong param_1)

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
  FUN_140db2e10((longlong *)local_58);
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
        FUN_140dbb4c0(param_1,*puVar11);
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
        FUN_140dbba30(param_1,*puVar11);
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
    if ((lVar3 != 0) && ((iVar5 = FUN_140dc0860(lVar3), iVar5 == 6 || (iVar5 == 1)))) {
      uVar6 = FUN_140dc0a70(lVar3);
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
        FUN_140db2f00((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
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
          if ((uint *)plVar7[3] <= puVar11 + (longlong)plVar10) goto LAB_140dbf50c;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140dbf50c:
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




void FUN_140dbf680(longlong param_1,int param_2)

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
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_78;
  uint *puStack_70;
  longlong *local_68 [3];
  uint *local_50;
  uint *local_48;
  longlong local_40;
  
  local_res18 = operator_new(8);
  plVar12 = (longlong *)0x0;
  local_68[0] = plVar12;
  if (local_res18 != (longlong *)0x0) {
    *local_res18 = (longlong)local_68;
    local_68[0] = local_res18;
  }
  local_50 = (uint *)0x0;
  local_48 = (uint *)0x0;
  local_40 = 0;
  local_res20 = local_res18;
  FUN_140db2e10((longlong *)local_68);
  plVar9 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  do {
    plVar8 = *(longlong **)(param_1 + 0xc0);
    if ((puVar2 == (undefined8 *)0x0) || (puVar2 != *(undefined8 **)(param_1 + 0x90))) {
      _invalid_parameter_noinfo();
    }
    puVar11 = local_50;
    if (plVar9 == plVar8) {
      plVar9 = local_68[0];
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
        plVar9 = local_68[0];
      }
      while( true ) {
        puVar4 = local_48;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar9 == (longlong *)0x0) || (plVar9 != local_68[0])) {
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
        FUN_140dbb4c0(param_1,*puVar11);
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
        FUN_140dbba30(param_1,*puVar11);
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
      if (local_50 != (uint *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (uint *)0x0;
      local_48 = (uint *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
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
    if (((lVar3 != 0) && (iVar5 = FUN_140dc0a80(lVar3), iVar5 == param_2)) && ((iVar5 = FUN_140dc0860(lVar3), iVar5 == 6 || (iVar5 == 1)))) {
      uVar6 = FUN_140dc0a70(lVar3);
      puVar11 = local_48;
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar6);
      plVar8 = plVar12;
      if (local_50 != (uint *)0x0) {
        plVar8 = (longlong *)(local_40 - (longlong)local_50 >> 2);
      }
      if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar8) {
        *local_48 = uVar6;
        local_48 = local_48 + 1;
      }
      else {
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        puVar4 = local_50;
        plVar8 = local_68[0];
        plVar10 = plVar12;
        if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          if ((plVar8 == (longlong *)0x0) || (plVar8 != local_68[0])) {
            _invalid_parameter_noinfo();
          }
          plVar10 = (longlong *)((longlong)puVar11 - (longlong)puVar4 >> 2);
        }
        local_78 = plVar8;
        puStack_70 = puVar11;
        FUN_140db2f00((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res18);
        puVar11 = local_50;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        plVar8 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar12;
        }
        else {
          plVar7 = (longlong *)*local_68[0];
        }
        if (puVar11 + (longlong)plVar10 <= (uint *)plVar7[4]) {
          plVar7 = plVar12;
          if (plVar8 != (longlong *)0x0) {
            plVar7 = (longlong *)*plVar8;
          }
          if ((uint *)plVar7[3] <= puVar11 + (longlong)plVar10) goto LAB_140dbf8b9;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140dbf8b9:
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




void FUN_140dbfa30(longlong param_1,uint param_2)

{
  FUN_140dce020(param_1 + 0x120,param_2);
  FUN_140dbf680(param_1,param_2);
  return;
}




undefined8 * FUN_140dbfa60(undefined8 *param_1)

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
  lVar2 = FUN_140db69d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dbfae0(undefined8 *param_1)

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
  lVar2 = FUN_140db6a30();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dbfb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140dbc350(puVar1 + 4,(longlong)(param_5 + 2));
    *(undefined1 *)(puVar1 + 0x1b) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0xd9) = 0;
  }
  return puVar1;
}




undefined8 * FUN_140dbfc00(undefined8 *param_1)

{
  *param_1 = CFamilyArenicMgr::vftable;
  param_1[1] = 0;
  FUN_140dbfa60(param_1 + 2);
  FUN_140dbfa60(param_1 + 10);
  FUN_140dbfae0(param_1 + 0x12);
  FUN_140dbdca0(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  FUN_140dcdac0(param_1 + 0x24);
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}




undefined8 * FUN_140dbfc90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140dbdec0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140dbfcc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR("CFamilyArenicMgr::CreateNew, NULL == pConsumer");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x298);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140dbfc00(puVar1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140ddd548);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140db7760((longlong)puVar1,param_1);
      if ((char)uVar2 == '\0') {
        FUN_140db41e0(puVar1);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




void FUN_140dbfd80(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  longlong lVar9;
  uint local_res10 [2];
  longlong *local_68;
  longlong lStack_60;
  longlong *local_58;
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38 [2];
  longlong *local_28;
  longlong lStack_20;
  
  uVar7 = (undefined1)param_4;
  uVar8 = (undefined7)((ulonglong)param_4 >> 8);
  if (param_2 != 0) {
    local_res10[0] = param_2;
    bVar5 = FUN_140dd1450(*(longlong *)(param_1 + 0x290),param_2);
    if (bVar5) {
      FUN_140db4250(param_1,param_2,'\x01','\x01');
    }
    else {
      FUN_140dbe920(param_1,param_2,param_3,CONCAT71(uVar8,uVar7));
      FUN_140db9840((longlong *)(param_1 + 0x50),(longlong *)&local_68,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      lVar9 = 0;
      local_58 = *(longlong **)(param_1 + 0x50);
      if ((local_68 == (longlong *)0x0) || (local_68 != local_58)) {
        _invalid_parameter_noinfo();
      }
      if (lStack_60 != lVar1) {
        local_48 = local_68;
        lStack_40 = lStack_60;
        FUN_140db9420((undefined8 *)(param_1 + 0x50),&local_28,(longlong *)&local_48);
      }
      plVar6 = FUN_140db9840((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
      plVar2 = (longlong *)*plVar6;
      lStack_60 = plVar6[1];
      lVar1 = *(longlong *)(param_1 + 0x40);
      local_38[0] = *(longlong **)(param_1 + 0x10);
      local_68 = plVar2;
      if ((plVar2 == (longlong *)0x0) || (plVar2 != local_38[0])) {
        _invalid_parameter_noinfo();
      }
      lVar4 = lStack_60;
      if (lStack_60 != lVar1) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar9 = *plVar2;
        }
        if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar3 = *(undefined8 **)(lVar4 + 0x20);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        local_28 = local_68;
        lStack_20 = lStack_60;
        FUN_140db9420((undefined8 *)(param_1 + 0x10),local_38,(longlong *)&local_28);
      }
    }
  }
  return;
}




undefined8 * FUN_140dbff30(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x155555555555553 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140dbfb60(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0xd8);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0xd8) == '\0') {
        *(undefined1 *)(plVar2 + 0x1b) = 1;
        *(undefined1 *)(lVar4 + 0xd8) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd8) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0xd9) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0xd8) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd8) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd9) == '\0') {
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
      if (*(char *)(lVar4 + 0xd8) == '\0') {
        *(undefined1 *)(plVar2 + 0x1b) = 1;
        *(undefined1 *)(lVar4 + 0xd8) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd8) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd9) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0xd8) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0xd8) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0xd9) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0xd8);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0xd8) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




longlong * FUN_140dc02b0(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong local_28;
  undefined8 *local_20;
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0xd9) == '\0') {
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
    } while (*(char *)((longlong)puVar1 + 0xd9) == '\0');
  }
  local_28 = *param_1;
  local_20 = puVar3;
  if (bVar4 == false) {
LAB_140dc0372:
    if (*param_3 <= *(uint *)(local_20 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_28;
      goto LAB_140dc039c;
    }
  }
  else {
    puVar1 = *(undefined8 **)param_1[6];
    if (local_28 == 0) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 != puVar1) {
      FUN_140db5260(&local_28);
      goto LAB_140dc0372;
    }
    bVar4 = true;
  }
  plVar2 = FUN_140dbff30(param_1,&local_28,bVar4,puVar3,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_20 = (undefined8 *)plVar2[1];
  *param_2 = *plVar2;
LAB_140dc039c:
  param_2[1] = (longlong)local_20;
  return param_2;
}




void FUN_140dc03c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_5f0 [3];
  undefined8 local_5d8;
  longlong *local_5d0;
  uint local_5c0 [2];
  undefined **local_5b8;
  undefined4 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598 [6];
  undefined8 local_568 [6];
  undefined8 local_538 [6];
  undefined8 local_508;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8 [6];
  undefined8 local_4a8 [6];
  undefined8 local_478 [6];
  undefined8 local_448;
  CMsg local_438 [1040];
  
  local_5d8 = 0xfffffffffffffffe;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 0x90);
  local_5d0 = plVar1;
  do {
    while( true ) {
      while( true ) {
        plVar7 = *(longlong **)(param_1 + 0xc0);
        local_5f0[0] = *(longlong **)(param_1 + 0x90);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_5f0[0])) {
          _invalid_parameter_noinfo();
        }
        if (plVar6 == plVar7) {
          return;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar1;
        }
        if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar8 = plVar6[4];
        if ((lVar8 != 0) && (lVar4 = FUN_140dbeae0(param_1,lVar8), lVar4 != 0)) {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x178))();
          if (uVar3 == 0) {
            log_InlineLogERROR("CFamilyArenicMgr::ProcessMatch, failed in create arenic map");
          }
          else {
            FUN_140dd2940(local_438);
            uVar5 = FUN_140dd29f0((longlong)local_438,2);
            if ((char)uVar5 == '\0') {
              log_InlineLogERROR("CFamilyArenicMgr::ProcessMatch, failed in creating CMsgFamilyArenic");
              FUN_140dd2990((undefined8 *)local_438);
            }
            else {
              FUN_140db2980(&local_4f8,*(undefined8 *)(param_1 + 8),lVar8,lVar4);
              FUN_140db13d0((longlong)&local_4f8,uVar3);
              local_5b8 = CFamilyArenicMatch::vftable;
              local_5b0 = local_4f0;
              local_5a8 = local_4e8;
              local_5a0 = local_4e0;
              local_5c0[0] = uVar3;
              FUN_140db2c50(local_598,local_4d8);
              FUN_140db2c50(local_568,local_4a8);
              FUN_140db2c50(local_538,local_478);
              local_508 = local_448;
              FUN_140dc02b0((longlong *)(param_1 + 0xd0),(longlong *)local_5f0,local_5c0);
              FUN_140db31a0(&local_5b8);
              FUN_140dc3780(lVar8);
              FUN_140dc2970(lVar8,uVar3);
              FUN_140dc1650(lVar8,local_438);
              FUN_140dc2750(lVar8,2,'\x01');
              FUN_140dc14f0(lVar8);
              FUN_140dc3780(lVar4);
              FUN_140dc2970(lVar4,uVar3);
              FUN_140dc1650(lVar4,local_438);
              FUN_140dc2750(lVar4,2,'\x01');
              FUN_140dc14f0(lVar4);
              FUN_140db31a0(&local_4f8);
              FUN_140dd2990((undefined8 *)local_438);
            }
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar6 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar7 = plVar6;
      plVar2 = (longlong *)plVar6[2];
      if (*(char *)(plVar6[2] + 0x29) != '\0') break;
      do {
        plVar6 = plVar2;
        plVar2 = (longlong *)*plVar6;
      } while (*(char *)(*plVar6 + 0x29) == '\0');
    }
    do {
      plVar6 = (longlong *)plVar7[1];
      if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
      bVar9 = plVar7 == (longlong *)plVar6[2];
      plVar7 = plVar6;
    } while (bVar9);
  } while( true );
}




void FUN_140dc06f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(int *)(param_1 + 0x110) != 0) && (*(char *)(param_1 + 0x118) != '\0')) {
    FUN_140dbbab0(param_1);
    uVar3 = FUN_140db4560();
    if ((char)uVar3 == '\0') {
      FUN_140dbf2f0(param_1);
    }
    else {
      FUN_140dc03c0(param_1);
    }
    plVar4 = (longlong *)**(undefined8 **)(param_1 + 0xc0);
    plVar1 = *(longlong **)(param_1 + 0x90);
LAB_140dc0770:
    plVar5 = *(longlong **)(param_1 + 0xc0);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x90))) {
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
      if (plVar4[4] != 0) {
        FUN_140dc3570(plVar4[4]);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        plVar5 = plVar4;
        plVar2 = (longlong *)plVar4[2];
        if (*(char *)(plVar4[2] + 0x29) == '\0') {
          do {
            plVar4 = plVar2;
            plVar2 = (longlong *)*plVar4;
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
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc0770;
    }
  }
  return;
}




undefined4 FUN_140dc0860(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




undefined8 FUN_140dc0870(undefined4 param_1)

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




bool FUN_140dc08e0(longlong param_1)

{
  return *(int *)(param_1 + 0x5c) == 1;
}




bool FUN_140dc08f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140dc0870(*(undefined4 *)(param_1 + 0x5c));
  return (int)uVar1 == 5;
}




bool FUN_140dc0910(longlong param_1)

{
  return *(int *)(param_1 + 0x5c) == 7;
}




longlong FUN_140dc0920(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 10) && (iVar1 != 0xb)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}




int FUN_140dc0940(longlong param_1)

{
  __time32_t _Var1;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    return 0;
  }
  _Var1 = _time32((__time32_t *)0x0);
  return _Var1 - *(int *)(param_1 + 0x9c);
}




undefined4 FUN_140dc0970(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}




void FUN_140dc0980(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x70) = param_2;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  lVar1 = FUN_140db86c0(*(longlong *)(param_1 + 0x50),*(uint *)(param_1 + 0x60));
  if (lVar1 != 0) {
    FUN_140dc4dd0(lVar1,param_2);
  }
  return;
}




undefined4 FUN_140dc09f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}




void FUN_140dc0a00(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  lVar1 = FUN_140db86c0(*(longlong *)(param_1 + 0x50),*(uint *)(param_1 + 0x60));
  if (lVar1 != 0) {
    FUN_140dc4de0(lVar1,param_2);
  }
  return;
}




undefined4 FUN_140dc0a70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}




undefined4 FUN_140dc0a80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




void FUN_140dc0a90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140dc0a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1a8))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 100));
  return;
}




undefined4 FUN_140dc0ab0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}




undefined4 FUN_140dc0ac0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined4 FUN_140dc0ad0(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
  return *(undefined4 *)(param_1 + 0x58);
}




int FUN_140dc0b00(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




int FUN_140dc0b30(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined4 FUN_140dc0b80(longlong param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),(uint)(param_2 + *(int *)(param_1 + 4)) <= uVar1 / 1000);
}




ulonglong FUN_140dc0bc0(undefined4 *param_1,int param_2)

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




ulonglong FUN_140dc0c20(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




undefined * FUN_140dc0c60(void)

{
  if ((DAT_140df1568 & 1) == 0) {
    DAT_140df1568 = DAT_140df1568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1560,"CFamilyArenicTeam");
    atexit((_func_5014 *)&LAB_140ddc800);
  }
  return &DAT_140df1560;
}




void FUN_140dc0cc0(__uint64 param_1)

{
  if ((DAT_140df1568 & 1) == 0) {
    DAT_140df1568 = DAT_140df1568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1560,"CFamilyArenicTeam");
    atexit((_func_5014 *)&LAB_140ddc800);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc0d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140df1560,param_1);
  return;
}




void FUN_140dc0d20(void *param_1)

{
  if ((DAT_140df1568 & 1) == 0) {
    DAT_140df1568 = DAT_140df1568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1560,"CFamilyArenicTeam");
    atexit((_func_5014 *)&LAB_140ddc800);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc0d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140df1560,param_1);
  return;
}




void FUN_140dc0d80(void *param_1)

{
  if ((DAT_140df1568 & 1) == 0) {
    DAT_140df1568 = DAT_140df1568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1560,"CFamilyArenicTeam");
    atexit((_func_5014 *)&LAB_140ddc800);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc0dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140df1560,param_1);
  return;
}




ulonglong FUN_140dc0de0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong extraout_RAX;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(uint *)(param_1 + 0x58) != *(uint *)(param_2 + 0x58)) {
    return (ulonglong)(*(uint *)(param_2 + 0x58) < *(uint *)(param_1 + 0x58));
  }
  uVar1 = *(uint *)(param_2 + 0x60);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))(*(longlong **)(param_1 + 0x48),uVar1);
  if (uVar2 != uVar3) {
    return (ulonglong)(uVar3 < uVar2);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))(*(longlong **)(param_1 + 0x48),uVar1);
  if (uVar2 != uVar3) {
    return (ulonglong)(uVar2 < uVar3);
  }
  return (ulonglong)(uVar1 < *(uint *)(param_1 + 0x60));
}




ulonglong FUN_140dc0ef0(int *param_1)

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




bool FUN_140dc0f50(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) == 0;
}




longlong * FUN_140dc0f60(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140db4e90(param_1);
  return param_2;
}




ulonglong FUN_140dc0fb0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *extraout_RAX;
  undefined4 extraout_var;
  undefined8 *extraout_RAX_00;
  ulonglong extraout_RAX_01;
  undefined8 *extraout_RAX_02;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  iVar9 = 0;
  puVar8 = (undefined8 *)*puVar6;
  do {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX;
    }
    if (puVar8 == puVar3) {
LAB_140dc10e6:
      return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
    iVar9 = iVar9 + 1;
    if (100 < iVar9) {
      log_InlineLogERROR(&DAT_140ddd548);
      puVar6 = extraout_RAX_02;
      goto LAB_140dc10e6;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (puVar8 == *(undefined8 **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (puVar8[4] == 0) {
      log_InlineLogERROR("CFamilyArenicTeam::IsAllTeamerInStatus, found NULL user");
      uVar7 = extraout_RAX_01;
LAB_140dc10b8:
      return uVar7 & 0xffffffffffffff00;
    }
    iVar5 = FUN_140dc4990(puVar8[4]);
    uVar7 = CONCAT44(extraout_var,iVar5);
    if (param_2 != iVar5) goto LAB_140dc10b8;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar8 + 0x29) == '\0') {
      puVar3 = (undefined8 *)puVar8[2];
      if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x29);
        puVar6 = (undefined8 *)*puVar3;
        while (puVar8 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x29);
          puVar3 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
        puVar4 = (undefined8 *)puVar8[1];
        puVar3 = puVar8;
        while ((puVar6 = puVar4, puVar8 = puVar6, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
          puVar4 = (undefined8 *)puVar6[1];
          puVar3 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX_00;
    }
  } while( true );
}




ulonglong FUN_140dc1110(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *extraout_RAX;
  undefined4 extraout_var;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  
  puVar6 = *(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  iVar8 = 0;
  puVar7 = (undefined8 *)*puVar6;
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX;
    }
    if (puVar7 == puVar3) break;
    iVar8 = iVar8 + 1;
    if (100 < iVar8) {
      log_InlineLogERROR(&DAT_140ddd548);
      puVar6 = extraout_RAX_01;
      break;
    }
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
    if (puVar7[4] == 0) {
      log_InlineLogERROR("CFamilyArenicTeam::CheckTeamerStatus, found NULL user");
    }
    else {
      iVar5 = FUN_140dc4990(puVar7[4]);
      if (param_2 == iVar5) {
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar5) >> 8),1);
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar7 + 0x29) == '\0') {
      puVar3 = (undefined8 *)puVar7[2];
      if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x29);
        puVar6 = (undefined8 *)*puVar3;
        while (puVar7 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x29);
          puVar3 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar7[1] + 0x29);
        puVar4 = (undefined8 *)puVar7[1];
        puVar3 = puVar7;
        while ((puVar6 = puVar4, puVar7 = puVar6, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
          puVar4 = (undefined8 *)puVar6[1];
          puVar3 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar6 = extraout_RAX_00;
    }
  }
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}




undefined4 FUN_140dc1270(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60));
  if (cVar4 != '\0') {
    return *(undefined4 *)(param_1 + 0x60);
  }
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 8);
  iVar7 = 0;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar2) {
      return 0;
    }
    iVar7 = iVar7 + 1;
    if (100 < iVar7) {
      log_InlineLogERROR(&DAT_140ddd548);
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar1;
    }
    if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6[4] != 0) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar4 = *(char *)(*plVar2 + 0x29);
        plVar6 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar2 + 0x29);
          plVar6 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar4 = *(char *)(plVar6[1] + 0x29);
        plVar3 = (longlong *)plVar6[1];
        plVar2 = plVar6;
        while ((plVar6 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar6[2]))) {
          cVar4 = *(char *)(plVar6[1] + 0x29);
          plVar3 = (longlong *)plVar6[1];
          plVar2 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  uVar5 = FUN_140dc4ce0(plVar6[4]);
  return uVar5;
}




void FUN_140dc13e0(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar3;
          plVar3 = *(longlong **)(param_1 + 0x38);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar3) {
            return;
          }
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
            FUN_140dc4c00(plVar5[4],param_2);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar5 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar5;
        }
        plVar3 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar3 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      plVar3 = (longlong *)plVar5[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar4 = plVar3;
      plVar3 = plVar4;
      if (plVar5 != (longlong *)plVar4[2]) break;
      plVar3 = (longlong *)plVar4[1];
      plVar5 = plVar4;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




ulonglong FUN_140dc14f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  ulonglong *extraout_RAX_01;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  
  puVar5 = *(ulonglong **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  iVar7 = 0;
  puVar6 = (ulonglong *)*puVar5;
  while( true ) {
    puVar3 = *(ulonglong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX;
    }
    if (puVar6 == puVar3) goto LAB_140dc1625;
    iVar7 = iVar7 + 1;
    if (100 < iVar7) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (puVar6 == *(ulonglong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140dbb650(*(longlong *)(param_1 + 0x50),(uint)puVar6[3]);
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
      puVar3 = (ulonglong *)puVar6[2];
      if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x29);
        puVar5 = (ulonglong *)*puVar3;
        while (puVar6 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar5 + 0x29);
          puVar3 = puVar5;
          puVar5 = (ulonglong *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
        puVar4 = (ulonglong *)puVar6[1];
        puVar3 = puVar6;
        while ((puVar5 = puVar4, puVar6 = puVar5, cVar1 == '\0' && (puVar3 == (ulonglong *)puVar5[2]))) {
          cVar1 = *(char *)((longlong)puVar5[1] + 0x29);
          puVar4 = (ulonglong *)puVar5[1];
          puVar3 = puVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX_00;
    }
  }
  log_InlineLogERROR(&DAT_140ddd548);
  puVar5 = extraout_RAX_01;
LAB_140dc1625:
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
}




void FUN_140dc1650(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  iVar6 = 0;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    iVar6 = iVar6 + 1;
    if (100 < iVar6) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(*(longlong **)(param_1 + 0x48),(int)plVar5[3],param_2);
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
  return;
}




void FUN_140dc1790(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  iVar6 = 0;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    iVar6 = iVar6 + 1;
    if (100 < iVar6) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5[4] == 0) {
      log_InlineLogERROR("FamilyArenicTeam::SetAllTeamerArenicMap, found NULL user");
    }
    else {
      FUN_140dc4cd0(plVar5[4],param_2);
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
  return;
}




void FUN_140dc18e0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  bool bVar11;
  ulonglong uVar9;
  
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  uVar10 = 0;
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar9 = uVar10;
  do {
    while( true ) {
      while( true ) {
        plVar6 = *(longlong **)(param_1 + 0x38);
        if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar5 == plVar6) {
          return;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        if (100 < (int)uVar8) {
          log_InlineLogERROR(&DAT_140ddd548);
          return;
        }
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
        lVar2 = plVar5[4];
        if (lVar2 == 0) {
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
          log_InlineLogERROR("CFamilyArenicTeam::OnWin, found NULL user(%d)");
        }
        else {
          iVar4 = FUN_140dc4990(lVar2);
          if ((((iVar4 != 5) && (iVar4 != 0)) && (iVar4 != 1)) && (iVar4 != 6)) {
            FUN_140dc50b0(lVar2);
          }
        }
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar5 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar6 = plVar5;
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)(plVar5[2] + 0x29) != '\0') break;
      do {
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar5;
      } while (*(char *)(*plVar5 + 0x29) == '\0');
    }
    do {
      plVar5 = (longlong *)plVar6[1];
      if (*(char *)((longlong)plVar5 + 0x29) != '\0') break;
      bVar11 = plVar6 == (longlong *)plVar5[2];
      plVar6 = plVar5;
    } while (bVar11);
  } while( true );
}




void FUN_140dc1aa0(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uVar7;
  
  plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  uVar8 = 0;
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar7 = uVar8;
  do {
    while( true ) {
      while( true ) {
        plVar4 = *(longlong **)(param_1 + 0x38);
        if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar3 == plVar4) {
          return;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (100 < (int)uVar6) {
          log_InlineLogERROR(&DAT_140ddd548);
          return;
        }
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar5 = uVar8;
        }
        else {
          uVar5 = *puVar1;
        }
        if (plVar3 == *(longlong **)(uVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (plVar3[4] == 0) {
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar5 = uVar8;
          }
          else {
            uVar5 = *puVar1;
          }
          if (plVar3 == *(longlong **)(uVar5 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CFamilyArenicTeam::OnWin, found NULL user(%d)");
        }
        else {
          FUN_140dc5200(plVar3[4]);
        }
        if (puVar1 == (ulonglong *)0x0) {
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
      bVar9 = plVar4 == (longlong *)plVar3[2];
      plVar4 = plVar3;
    } while (bVar9);
  } while( true );
}




void FUN_140dc1c40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  iVar6 = 0;
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    iVar6 = iVar6 + 1;
    if (100 < iVar6) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar7 = plVar5[4];
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (lVar7 == 0) {
      log_InlineLogERROR("CFamilyArenicTeam::ShowFamilyInfo, found NULL user(%d)");
    }
    else {
      FUN_140dbba30(*(longlong *)(param_1 + 0x50),*(uint *)(plVar5 + 3));
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
  return;
}




void FUN_140dc1db0(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  FUN_140dc1c40(param_1);
  puVar4 = *(uint **)(param_1 + 0xb8);
  uVar8 = 0;
  if (*(uint **)(param_1 + 0xc0) < puVar4) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(ulonglong **)(param_1 + 0xa0);
  uVar7 = uVar8;
  while( true ) {
    puVar2 = *(uint **)(param_1 + 0xc0);
    if (puVar2 < *(uint **)(param_1 + 0xb8)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0xa0))) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar2) break;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    if (100 < (int)uVar6) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar5 = uVar8;
    }
    else {
      uVar5 = *puVar1;
    }
    if (*(uint **)(uVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    uVar6 = *puVar4;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))(*(longlong **)(param_1 + 0x48),uVar6);
    if (cVar3 != '\0') {
      FUN_140dbba30(*(longlong *)(param_1 + 0x50),uVar6);
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar5 = uVar8;
    }
    else {
      uVar5 = *puVar1;
    }
    if (*(uint **)(uVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}




void FUN_140dc1f40(longlong param_1,int param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 8);
  iVar9 = 0;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar2) break;
    iVar9 = iVar9 + 1;
    if (100 < iVar9) {
      param_4 = "f:\\version\\cqserver-72.2.17-0210\\modules\\familyarenic\\src\\familyarenicteam.cpp";
      log_InlineLogERROR(&DAT_140ddd548);
      break;
    }
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
    lVar6 = plVar7[4];
    if (lVar6 != 0) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (((int)plVar7[3] != param_2) && (lVar6 = FUN_140dc4bd0(lVar6), (char)lVar6 != '\0')) {
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
        cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa8))(*(longlong **)(param_1 + 0x48),(int)plVar7[3]);
        if (cVar4 != '\0') {
          return;
        }
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar4 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar4 = *(char *)(plVar7[1] + 0x29);
        plVar3 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar4 = *(char *)(plVar7[1] + 0x29);
          plVar3 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar2) break;
    iVar9 = iVar9 + 1;
    if (100 < iVar9) {
      log_InlineLogERROR(&DAT_140ddd548);
      return;
    }
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
    if ((plVar7[4] != 0) && (iVar5 = FUN_140dc4990(plVar7[4]), iVar5 != 5)) {
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
      FUN_140dbd720(*(longlong *)(param_1 + 0x50),*(uint *)(plVar7 + 3),'\0',param_4);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar4 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar4 == '\0') {
          cVar4 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar4 = *(char *)(plVar7[1] + 0x29);
        plVar3 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar4 = *(char *)(plVar7[1] + 0x29);
          plVar3 = (longlong *)plVar7[1];
          plVar2 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




ulonglong FUN_140dc2260(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *extraout_RAX;
  longlong lVar6;
  ulonglong uVar7;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *plVar8;
  int iVar9;
  
  iVar9 = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  plVar5 = plVar2;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      plVar5 = extraout_RAX;
    }
    if (plVar8 == plVar3) break;
    iVar9 = iVar9 + 1;
    if (100 < iVar9) {
      log_InlineLogERROR(&DAT_140ddd548);
      plVar5 = extraout_RAX_01;
      break;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (plVar8 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar8[4] != 0) && (lVar6 = FUN_140dc4bd0(plVar8[4]), (char)lVar6 != '\0')) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar2;
      }
      if (plVar8 == *(longlong **)(lVar6 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa8))(*(longlong **)(param_1 + 0x48),(int)plVar8[3]);
      if ((char)uVar7 != '\0') {
        return uVar7 & 0xffffffffffffff00;
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = (longlong *)*plVar3;
        while (plVar8 = plVar3, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar3 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar4 = (longlong *)plVar8[1];
        plVar3 = plVar8;
        while ((plVar5 = plVar4, plVar8 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      plVar5 = extraout_RAX_00;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
}




undefined4 FUN_140dc2400(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar4 = 0;
  }
  else {
    plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    plVar2 = *(longlong **)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x60);
    uVar4 = 0;
    iVar9 = 0;
LAB_140dc2470:
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar7) goto LAB_140dc259d;
    iVar9 = iVar9 + 1;
    if (iVar9 < 0x65) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar8 = plVar6[4];
      if ((lVar8 != 0) && (iVar5 = FUN_140dc4ce0(lVar8), iVar1 != iVar5)) {
        uVar4 = FUN_140dc4ce0(lVar8);
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar7 = plVar6;
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)(plVar6[2] + 0x29) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
          } while (*(char *)(*plVar6 + 0x29) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar7[1];
            if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
            bVar10 = plVar7 == (longlong *)plVar6[2];
            plVar7 = plVar6;
          } while (bVar10);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc2470;
    }
    log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc259d:
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      iVar9 = 0;
      plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x38);
      plVar2 = *(longlong **)(param_1 + 8);
LAB_140dc25f0:
      plVar7 = *(longlong **)(param_1 + 0x38);
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar6 == plVar7) {
        return uVar4;
      }
      iVar9 = iVar9 + 1;
      if (iVar9 < 0x65) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar2;
        }
        if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        lVar8 = plVar6[4];
        if ((lVar8 != 0) && (iVar5 = FUN_140dc4ce0(lVar8), iVar1 != iVar5)) {
          FUN_140dc4bf0(lVar8,uVar4);
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
          plVar7 = plVar6;
          plVar3 = (longlong *)plVar6[2];
          if (*(char *)(plVar6[2] + 0x29) == '\0') {
            do {
              plVar6 = plVar3;
              plVar3 = (longlong *)*plVar6;
            } while (*(char *)(*plVar6 + 0x29) == '\0');
          }
          else {
            do {
              plVar6 = (longlong *)plVar7[1];
              if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
              bVar10 = plVar7 == (longlong *)plVar6[2];
              plVar7 = plVar6;
            } while (bVar10);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        goto LAB_140dc25f0;
      }
      log_InlineLogERROR(&DAT_140ddd548);
    }
  }
  return uVar4;
}




void FUN_140dc2750(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  __time32_t _Var2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x5c) != param_2) {
    if (param_2 != 2) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else if (iVar1 == 7) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else if (iVar1 == 10) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    switch(param_2) {
    case 0:
    case 5:
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      break;
    case 1:
      _Var2 = _time32((__time32_t *)0x0);
      *(__time32_t *)(param_1 + 0x9c) = _Var2;
      *(undefined4 *)(param_1 + 0x74) = 0x3c;
      uVar3 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x78) = uVar3 / 1000;
      break;
    case 2:
      uVar3 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x80) = uVar3 / 1000;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      break;
    case 7:
      uVar3 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x88) = uVar3 / 1000;
      break;
    case 8:
      uVar3 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x90) = uVar3 / 1000;
      break;
    case 10:
      uVar3 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x98) = uVar3 / 1000;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    if (param_3 != '\0') {
      FUN_140dc13e0(param_1,param_2);
    }
    *(int *)(param_1 + 0x5c) = param_2;
  }
  return;
}




void FUN_140dc2970(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  FUN_140dc1790(param_1,param_2);
  return;
}




void FUN_140dc2980(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  bool bVar11;
  longlong *plStack_b0;
  ulonglong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  ulonglong *local_58;
  longlong *plStack_50;
  undefined8 local_48 [2];
  undefined8 local_38 [4];
  ulonglong uVar9;
  
  local_68 = 0xfffffffffffffffe;
  plVar6 = (longlong *)**(longlong **)(param_1 + 0x38);
  uVar10 = 0;
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar9 = uVar10;
  plStack_b0 = plVar6;
  do {
    plVar4 = plStack_b0;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar5) goto LAB_140dc2c3e;
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (100 < (int)uVar8) {
      log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc2c3e:
      FUN_140db2e10((longlong *)(param_1 + 0xa0));
      return;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar10;
    }
    else {
      uVar7 = *puVar1;
    }
    if (plVar6 == *(longlong **)(uVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = plVar6[3];
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar10;
    }
    else {
      uVar7 = *puVar1;
    }
    if (plVar6 == *(longlong **)(uVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6[4] == 0) {
      log_InlineLogERROR("CFamilyArenicTeam::ResetTeam, found user(%u) info(CFamilyArenicUser) is NULL");
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = plVar6;
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)(plVar6[2] + 0x29) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
            plStack_b0 = plVar6;
          } while (*(char *)(*plVar6 + 0x29) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar5[1];
            plStack_b0 = plVar6;
            if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
            bVar11 = plVar5 == (longlong *)plVar6[2];
            plVar5 = plVar6;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      plStack_50 = plVar4;
      local_58 = puVar1;
      FUN_140db9420((undefined8 *)(param_1 + 8),local_48,(longlong *)&local_58);
    }
    else if ((int)lVar2 == *(int *)(param_1 + 0x60)) {
      FUN_140dc4bf0(plVar6[4],*(int *)(param_1 + 0x60));
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = plVar6;
        plVar4 = (longlong *)plVar6[2];
        if (*(char *)(plVar6[2] + 0x29) == '\0') {
          do {
            plVar6 = plVar4;
            plVar4 = (longlong *)*plVar6;
            plStack_b0 = plVar6;
          } while (*(char *)(*plVar6 + 0x29) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar5[1];
            plStack_b0 = plVar6;
            if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
            bVar11 = plVar5 == (longlong *)plVar6[2];
            plVar5 = plVar6;
          } while (bVar11);
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
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        plVar5 = plVar6;
        plVar3 = (longlong *)plVar6[2];
        if (*(char *)(plVar6[2] + 0x29) == '\0') {
          do {
            plVar6 = plVar3;
            plVar3 = (longlong *)*plVar6;
            plStack_b0 = plVar6;
          } while (*(char *)(*plVar6 + 0x29) == '\0');
        }
        else {
          do {
            plVar6 = (longlong *)plVar5[1];
            plStack_b0 = plVar6;
            if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
            bVar11 = plVar5 == (longlong *)plVar6[2];
            plVar5 = plVar6;
          } while (bVar11);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      plStack_70 = plVar4;
      local_78 = puVar1;
      FUN_140db9420((undefined8 *)(param_1 + 8),local_38,(longlong *)&local_78);
    }
  } while( true );
}




void FUN_140dc2c70(longlong param_1)

{
  int iVar1;
  tm *ptVar2;
  int iVar3;
  __time32_t local_res10 [6];
  
  local_res10[0] = _time32((__time32_t *)0x0);
  ptVar2 = _localtime32(local_res10);
  if (ptVar2 == (tm *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    iVar3 = 0;
    switch(ptVar2->tm_hour) {
    case 0:
    case 1:
      iVar3 = 5;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      iVar3 = 3;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x15:
    case 0x16:
    case 0x17:
      iVar3 = 10;
      break;
    case 0xb:
    case 0xc:
      iVar3 = 0x14;
      break;
    case 0x13:
    case 0x14:
      iVar3 = 0x1e;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1c0))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 100));
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1c8))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 100),iVar3 + iVar1);
    FUN_140dc1db0(param_1);
  }
  return;
}




void * FUN_140dc2da0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 in_stack_fffffffffffffb48;
  int local_488;
  CMsg local_438 [1040];
  
  if ((*(int *)(param_1 + 0x5c) == 3) && (*(int *)(param_1 + 0x6c) != 0)) {
    plVar17 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 8);
    local_488 = 0;
LAB_140dc2e20:
    plVar18 = *(longlong **)(param_1 + 0x38);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar17 == plVar18) goto LAB_140dc3197;
    local_488 = local_488 + 1;
    if (local_488 < 0x65) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar16 = 0;
      }
      else {
        lVar16 = *plVar1;
      }
      if (plVar17 == *(longlong **)(lVar16 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar16 = plVar17[4];
      if (lVar16 == 0) {
        log_InlineLogERROR("CFamilyArenicTeam::BeginAthletics, found NULL user");
      }
      else {
        iVar7 = *(int *)(param_1 + 0x60);
        iVar5 = FUN_140dc4cb0(lVar16);
        if ((iVar5 == iVar7) && (iVar7 = *(int *)(param_1 + 0x6c), iVar5 = FUN_140dc4cc0(lVar16), iVar5 == iVar7)) {
          uVar6 = FUN_140dc4ce0(lVar16);
          bVar19 = FUN_140db4330(*(longlong *)(param_1 + 0x50),uVar6);
          if (bVar19) {
            param_4 = CONCAT71((int7)(param_4 >> 8),1);
            FUN_140db4250(*(longlong *)(param_1 + 0x50),uVar6,'\0','\x01');
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x188))(*(longlong **)(param_1 + 0x48),uVar6);
          if (cVar4 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x48) + 400))(*(longlong **)(param_1 + 0x48),uVar6,0);
          }
          iVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x130))(*(longlong **)(param_1 + 0x48),uVar6);
          if ((iVar7 == 0) || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x140))(*(longlong **)(param_1 + 0x48),iVar7), cVar4 == '\0')) {
            log_InlineLogERROR("CFamilyArenicTeam::BeginAthletics, map error user: %u, map: %u");
          }
          else {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x158))(*(longlong **)(param_1 + 0x48),iVar7);
            uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffb48 >> 0x20);
            if (cVar4 == '\0') {
              plVar18 = *(longlong **)(param_1 + 0x48);
              lVar2 = *plVar18;
              uVar11 = (**(code **)(lVar2 + 0x68))(plVar18,uVar6);
              uVar8 = (**(code **)(*plVar18 + 0x60))(plVar18,uVar6);
              param_4 = (ulonglong)uVar8;
              in_stack_fffffffffffffb48 = CONCAT44(uVar9,uVar11);
              (**(code **)(lVar2 + 0x80))(*(undefined8 *)(param_1 + 0x48),uVar6,iVar7,param_4,in_stack_fffffffffffffb48,1);
            }
            uVar15 = (ulonglong)*(uint *)(param_1 + 0x6c);
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa0))(*(longlong **)(param_1 + 0x48),uVar6);
            uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffb48 >> 0x20);
            if (cVar4 == '\0') {
              log_InlineLogERROR("CFamilyArenicTeam::BeginAthletics, trans map error, user: %d ,arenic map: %u");
            }
            else {
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0xa8))();
              if (cVar4 == '\0') {
                param_4 = 0;
                uVar15 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0xb0))();
              }
              FUN_140dc4cf0(lVar16);
              FUN_140dc4d20(lVar16,0,uVar15,param_4);
              (**(code **)(**(longlong **)(param_1 + 0x48) + 0x120))(*(longlong **)(param_1 + 0x48),uVar6);
              lVar16 = **(longlong **)(param_1 + 0x48);
              uVar11 = (**(code **)(lVar16 + 0xd8))(*(longlong **)(param_1 + 0x48),uVar6);
              uVar14 = CONCAT44(uVar9,1);
              (**(code **)(lVar16 + 200))(*(undefined8 *)(param_1 + 0x48),uVar6,0,uVar11,uVar14);
              uVar11 = (undefined4)((ulonglong)uVar14 >> 0x20);
              lVar16 = **(longlong **)(param_1 + 0x48);
              uVar9 = (**(code **)(lVar16 + 0xe0))(*(longlong **)(param_1 + 0x48),uVar6);
              uVar14 = CONCAT44(uVar11,1);
              (**(code **)(lVar16 + 200))(*(undefined8 *)(param_1 + 0x48),uVar6,2,uVar9,uVar14);
              uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
              lVar16 = **(longlong **)(param_1 + 0x48);
              iVar7 = (**(code **)(lVar16 + 0xe8))(*(longlong **)(param_1 + 0x48),uVar6);
              param_4 = (ulonglong)iVar7;
              in_stack_fffffffffffffb48 = CONCAT44(uVar9,1);
              (**(code **)(lVar16 + 200))(*(undefined8 *)(param_1 + 0x48),uVar6,8,param_4,in_stack_fffffffffffffb48);
            }
          }
        }
        else {
          log_InlineLogERROR("CFamilyArenicTeam::BeginAthletics, wrong teamer info");
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar17 + 0x29) == '\0') {
        plVar18 = plVar17;
        plVar3 = (longlong *)plVar17[2];
        if (*(char *)(plVar17[2] + 0x29) == '\0') {
          do {
            plVar17 = plVar3;
            plVar3 = (longlong *)*plVar17;
          } while (*(char *)(*plVar17 + 0x29) == '\0');
        }
        else {
          do {
            plVar17 = (longlong *)plVar18[1];
            if (*(char *)((longlong)plVar17 + 0x29) != '\0') break;
            bVar19 = plVar18 == (longlong *)plVar17[2];
            plVar18 = plVar17;
          } while (bVar19);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140dc2e20;
    }
    log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc3197:
    FUN_140dc2750(param_1,7,'\x01');
    FUN_140dd2940(local_438);
    uVar9 = *(undefined4 *)(param_2 + 0x60);
    uVar11 = *(undefined4 *)(param_2 + 100);
    plVar17 = *(longlong **)(param_1 + 0x48);
    uVar10 = (**(code **)(*plVar17 + 0x38))(plVar17,uVar9);
    uVar11 = (**(code **)(*plVar17 + 0x1b0))(plVar17,uVar11);
    uVar12 = (**(code **)(*plVar17 + 0x58))(plVar17,uVar9);
    puVar13 = (undefined8 *)(**(code **)(*plVar17 + 0x48))(plVar17,uVar9);
    uVar14 = FUN_140dd2a70((longlong)local_438,8,0,uVar9,puVar13,0,uVar12,uVar11,uVar10);
    if ((char)uVar14 != '\0') {
      FUN_140dc1650(param_1,local_438);
    }
    uVar14 = FUN_140dd2990((undefined8 *)local_438);
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  }
  return register0x00000020;
}




void FUN_140dc3290(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  plVar5 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 8);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) goto LAB_140dc33c5;
    iVar6 = iVar6 + 1;
    if (100 < iVar6) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_140dbb6b0(*(longlong *)(param_1 + 0x50),*(uint *)(plVar5 + 3));
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
  log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc33c5:
  FUN_140db2e10((longlong *)(param_1 + 0xa0));
  return;
}




uint FUN_140dc33f0(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint extraout_EAX;
  uint uVar1;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_res20 [2];
  
  local_res20[0] = param_4;
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar1 = extraout_EAX & 0xffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar1 = extraout_EAX_00 & 0xffffff00;
  }
  else if (param_4 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar1 = extraout_EAX_01 & 0xffffff00;
  }
  else {
    *(longlong **)(param_1 + 0x48) = param_2;
    *(longlong *)(param_1 + 0x50) = param_3;
    *(uint *)(param_1 + 0x60) = param_4;
    iVar2 = (**(code **)(*param_2 + 0x1a0))(param_2,param_4);
    *(int *)(param_1 + 100) = iVar2;
    uVar1 = 0;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      lVar4 = FUN_140db86c0(*(longlong *)(param_1 + 0x50),param_4);
      uVar1 = 0;
      if (lVar4 != 0) {
        uVar3 = FUN_140dc4dc0(lVar4);
        *(undefined4 *)(param_1 + 0x68) = uVar3;
        uVar3 = FUN_140dc4db0(lVar4);
        *(undefined4 *)(param_1 + 0x70) = uVar3;
        FUN_140dc4bf0(lVar4,param_4);
        plVar5 = FUN_140dbc0c0((longlong *)(param_1 + 8),local_res20);
        *plVar5 = lVar4;
        uVar1 = (uint)CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      }
    }
  }
  return uVar1;
}




void FUN_140dc3570(longlong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    if ((*(int *)(param_1 + 0x78) != 0) && (uVar1 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x74)) <= uVar1 / 1000)) {
      uVar1 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x78) = uVar1 / 1000;
      if (*(int *)(param_1 + 0x5c) == 1) {
        FUN_140dc2c70(param_1);
      }
    }
    if ((*(int *)(param_1 + 0x80) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x80) + 0x3cU <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      FUN_140dbd570(*(longlong *)(param_1 + 0x50),param_1);
    }
    if ((*(int *)(param_1 + 0x88) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x88) + 10U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      FUN_140dc2750(param_1,8,'\x01');
      FUN_140dd2940(local_418);
      uVar2 = FUN_140dd29f0((longlong)local_418,0xc);
      if ((char)uVar2 != '\0') {
        FUN_140dc1650(param_1,local_418);
      }
      FUN_140dd2990((undefined8 *)local_418);
    }
    if ((*(int *)(param_1 + 0x90) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x90) + 300U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      FUN_140dbd1d0(*(longlong *)(param_1 + 0x50),param_1);
    }
    if ((*(int *)(param_1 + 0x98) != 0) && (uVar1 = tq::TimeGet(0), *(int *)(param_1 + 0x98) + 5U <= uVar1 / 1000)) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      FUN_140dbd380(*(longlong *)(param_1 + 0x50),param_1);
    }
  }
  return;
}




ulonglong FUN_140dc3780(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  ulonglong extraout_RAX_00;
  longlong lVar9;
  longlong *plVar10;
  undefined8 extraout_RAX_01;
  uint *puVar11;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_58 [3];
  uint *local_40;
  uint *local_38;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar8 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = operator_new(8);
    if (local_res8 == (longlong *)0x0) {
      local_58[0] = (longlong *)0x0;
    }
    else {
      *local_res8 = (longlong)local_58;
      local_58[0] = local_res8;
    }
    local_40 = (uint *)0x0;
    local_38 = (uint *)0x0;
    local_30 = 0;
    local_res10 = local_res8;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x230))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60),local_58);
    if (cVar4 == '\0') {
      if (local_40 != (uint *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (uint *)0x0;
      local_38 = (uint *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      uVar8 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      FUN_140dc2980(param_1);
      puVar11 = local_40;
      plVar2 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar2 = local_58[0];
      }
      while( true ) {
        puVar3 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar11 == puVar3) break;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(uint **)(lVar9 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *puVar11;
        local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar1);
        lVar9 = FUN_140db86c0(*(longlong *)(param_1 + 0x50),uVar1);
        if ((((((lVar9 != 0) &&
               (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1a0))(*(longlong **)(param_1 + 0x48),uVar1), iVar6 == *(int *)(param_1 + 100))) &&
              (bVar5 = FUN_140db8980(*(longlong *)(param_1 + 0x50),uVar1), !bVar5)) &&
             ((iVar6 = FUN_140dc4990(lVar9), iVar6 == 0 &&
              (uVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))(*(longlong **)(param_1 + 0x48),uVar1), 0x45 < uVar7)))) &&
            ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x98))(*(longlong **)(param_1 + 0x48),uVar1), cVar4 == '\0' &&
             ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x180))(*(longlong **)(param_1 + 0x48),uVar1), cVar4 == '\0' &&
              (iVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x130))(*(longlong **)(param_1 + 0x48),uVar1), iVar6 != 0)))))) &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x148))(*(longlong **)(param_1 + 0x48),iVar6), cVar4 == '\0')) {
          FUN_140dc4bf0(lVar9,*(undefined4 *)(param_1 + 0x60));
          plVar10 = FUN_140dbc0c0((longlong *)(param_1 + 8),(uint *)&local_res8);
          *plVar10 = lVar9;
        }
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar2;
        }
        if (*(uint **)(lVar9 + 0x20) <= puVar11) {
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
      uVar8 = CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
    }
  }
  return uVar8;
}




void FUN_140dc3ab0(longlong param_1,char param_2,byte param_3,byte param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar11;
  CMsg local_848 [1040];
  CMsg local_438 [1040];
  ulonglong uVar10;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_140dc1790(param_1,0);
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  puVar1 = *(ulonglong **)(param_1 + 8);
  uVar10 = 0;
  do {
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar7) goto LAB_140dc3c5d;
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    if (100 < (int)uVar9) {
      log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc3c5d:
      FUN_140dd2940(local_438);
      uVar5 = FUN_140dd2a30((longlong)local_438,10,(uint)(*(int *)(param_1 + 0x70) == 1));
      if ((char)uVar5 != '\0') {
        FUN_140dc1650(param_1,local_438);
      }
      FUN_140dc2750(param_1,0,'\x01');
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1b0))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 100));
      if (iVar4 == 0) {
        FUN_140dd2940(local_848);
        uVar5 = FUN_140dd29f0((longlong)local_848,7);
        if ((char)uVar5 != '\0') {
          FUN_140dc1650(param_1,local_848);
        }
        FUN_140dbb4c0(*(longlong *)(param_1 + 0x50),*(uint *)(param_1 + 0x60));
        FUN_140dd2990((undefined8 *)local_848);
      }
      else {
        FUN_140dc3290(param_1);
        FUN_140dc2980(param_1);
        if ((*(longlong *)(param_1 + 0x40) == 0) ||
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x240))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x60)), cVar3 == '\0')) {
          FUN_140dbb4c0(*(longlong *)(param_1 + 0x50),*(uint *)(param_1 + 0x60));
        }
        else {
          FUN_140dc2750(param_1,5,'\x01');
        }
      }
      FUN_140dd2990((undefined8 *)local_438);
      return;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar1;
    }
    if (plVar6 == *(longlong **)(uVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6[4] == 0) {
      log_InlineLogERROR("CFamilyArenicTeam::LeaveArenic, found NULL user");
    }
    else {
      FUN_140dc53d0(plVar6[4],param_2,(ulonglong)param_3,(ulonglong)param_4);
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar7 = plVar6;
      plVar2 = (longlong *)plVar6[2];
      if (*(char *)(plVar6[2] + 0x29) == '\0') {
        do {
          plVar6 = plVar2;
          plVar2 = (longlong *)*plVar6;
        } while (*(char *)(*plVar6 + 0x29) == '\0');
      }
      else {
        do {
          plVar6 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
          bVar11 = plVar7 == (longlong *)plVar6[2];
          plVar7 = plVar6;
        } while (bVar11);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_140dc3d90(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = CFamilyArenicTeam::vftable;
  FUN_140dc3290((longlong)param_1);
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  plVar1 = param_1 + 1;
  FUN_140db6e40((longlong)plVar1);
  FUN_140db2e10(param_1 + 0x14);
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete((void *)param_1[0x17]);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  operator_delete((void *)param_1[0x14]);
  FUN_140dbc460(plVar1);
  operator_delete((void *)*plVar1);
  return;
}




undefined8 FUN_140dc3e60(longlong param_1,uint param_2)

{
  longlong *extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined7 uVar2;
  longlong *plVar1;
  longlong lVar3;
  longlong lVar4;
  uint local_res10 [2];
  longlong *local_48;
  longlong lStack_40;
  longlong *local_38 [2];
  
  local_res10[0] = param_2;
  FUN_140db9840((longlong *)(param_1 + 8),(longlong *)&local_48,local_res10);
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  local_38[0] = plVar1;
  if ((local_48 == (longlong *)0x0) || (local_48 != plVar1)) {
    _invalid_parameter_noinfo();
    plVar1 = extraout_RAX;
  }
  if (lStack_40 != lVar4) {
    if (local_48 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = lVar3;
    }
    else {
      lVar4 = *local_48;
    }
    if (lStack_40 == *(longlong *)(lVar4 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong *)(lStack_40 + 0x20) == 0) {
      if (local_48 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar3 = *local_48;
      }
      if (lStack_40 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CFamilyArenicTeam::DeleteMember, found NULL user(%u)");
      uVar2 = (undefined7)((ulonglong)extraout_RAX_00 >> 8);
      goto LAB_140dc3f75;
    }
    FUN_140dc4c00(*(longlong *)(lStack_40 + 0x20),0);
    FUN_140dbb6b0(*(longlong *)(param_1 + 0x50),param_2);
    FUN_140db9420((undefined8 *)(param_1 + 8),local_38,(longlong *)&local_48);
    plVar1 = (longlong *)FUN_140db3b30((longlong *)(param_1 + 0xa0),local_res10);
  }
  uVar2 = (undefined7)((ulonglong)plVar1 >> 8);
LAB_140dc3f75:
  return CONCAT71(uVar2,1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dc3f90(longlong param_1,undefined2 param_2,char *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 local_res20;
  undefined1 auStack_528 [32];
  undefined4 local_508;
  undefined2 local_500;
  longlong *local_4f8 [3];
  undefined4 *local_4e0;
  undefined4 *local_4d8;
  longlong local_4d0;
  longlong *local_4c8 [2];
  longlong *local_4b8;
  undefined4 *puStack_4b0;
  longlong *local_4a8;
  undefined4 *puStack_4a0;
  undefined8 local_498;
  longlong local_490 [7];
  char local_458 [1023];
  undefined1 local_59;
  ulonglong local_58;
  
  local_498 = 0xfffffffffffffffe;
  local_58 = DAT_140df1540 ^ (ulonglong)auStack_528;
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_508 = 0x256;
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (param_3 != (char *)0x0) {
    _vsnprintf(local_458,0x400,param_3,(va_list)&local_res20);
    local_59 = 0;
    local_4c8[0] = operator_new(8);
    plVar13 = (longlong *)0x0;
    local_4f8[0] = plVar13;
    if (local_4c8[0] != (longlong *)0x0) {
      *local_4c8[0] = (longlong)local_4f8;
      local_4f8[0] = local_4c8[0];
    }
    local_4e0 = (undefined4 *)0x0;
    local_4d8 = (undefined4 *)0x0;
    local_4d0 = 0;
    plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    puVar2 = *(ulonglong **)(param_1 + 8);
    local_4b8 = local_4c8[0];
    while( true ) {
      uVar11 = 0;
      plVar3 = *(longlong **)(param_1 + 0x38);
      if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar12 == plVar3) goto LAB_140dc42a5;
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
      local_4c8[0] = (longlong *)CONCAT44(local_4c8[0]._4_4_,uVar1);
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))(*(longlong **)(param_1 + 0x48),uVar1);
      puVar5 = local_4d8;
      if (cVar7 != '\0') {
        if (local_4e0 != (undefined4 *)0x0) {
          uVar11 = local_4d0 - (longlong)local_4e0 >> 2;
        }
        if ((ulonglong)((longlong)local_4d8 - (longlong)local_4e0 >> 2) < uVar11) {
          *local_4d8 = uVar1;
          local_4d8 = local_4d8 + 1;
        }
        else {
          if (local_4d8 < local_4e0) {
            _invalid_parameter_noinfo();
          }
          puVar4 = local_4e0;
          plVar3 = local_4f8[0];
          local_4b8 = local_4f8[0];
          puStack_4b0 = puVar5;
          if (((longlong)local_4d8 - (longlong)local_4e0 & 0xfffffffffffffffcU) == 0) {
            lVar14 = 0;
          }
          else {
            if (local_4d8 < local_4e0) {
              _invalid_parameter_noinfo();
            }
            if ((plVar3 == (longlong *)0x0) || (plVar3 != local_4f8[0])) {
              _invalid_parameter_noinfo();
            }
            lVar14 = (longlong)puVar5 - (longlong)puVar4 >> 2;
          }
          local_4a8 = local_4b8;
          puStack_4a0 = puStack_4b0;
          FUN_140db2f00((longlong)local_4f8,(longlong)&local_4a8,1,(undefined4 *)local_4c8);
          puVar5 = local_4e0;
          if (local_4d8 < local_4e0) {
            _invalid_parameter_noinfo();
          }
          plVar3 = local_4f8[0];
          if (local_4f8[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *local_4f8[0];
          }
          if (puVar5 + lVar14 <= *(undefined4 **)(lVar8 + 0x20)) {
            if (plVar3 == (longlong *)0x0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *plVar3;
            }
            if (*(undefined4 **)(lVar8 + 0x18) <= puVar5 + lVar14) goto LAB_140dc4202;
          }
          _invalid_parameter_noinfo();
        }
      }
LAB_140dc4202:
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar12 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar12[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar7 = *(char *)(*plVar3 + 0x29);
          plVar12 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar7 == '\0') {
            cVar7 = *(char *)(*plVar3 + 0x29);
            plVar12 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar7 = *(char *)(plVar12[1] + 0x29);
          plVar6 = (longlong *)plVar12[1];
          plVar3 = plVar12;
          while ((plVar12 = plVar6, cVar7 == '\0' && (plVar3 == (longlong *)plVar12[2]))) {
            cVar7 = *(char *)(plVar12[1] + 0x29);
            plVar6 = (longlong *)plVar12[1];
            plVar3 = plVar12;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    local_508 = 0x267;
    log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc42a5:
    if ((longlong)local_4d8 - (longlong)local_4e0 >> 2 != 0) {
      local_4b8 = local_490;
      puVar9 = FUN_140db2c50(local_490,local_4f8);
      uVar10 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1a8))(*(longlong **)(param_1 + 0x48),*(undefined4 *)(param_1 + 100));
      local_508 = 0xffff00;
      local_500 = param_2;
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(undefined8 *)(param_1 + 0x48),puVar9,uVar10,local_458);
    }
    if (local_4e0 != (undefined4 *)0x0) {
      operator_delete(local_4e0);
    }
    local_4e0 = (undefined4 *)0x0;
    local_4d8 = (undefined4 *)0x0;
    local_4d0 = 0;
    operator_delete(local_4f8[0]);
  }
  return;
}




void FUN_140dc4370(longlong param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint *puVar8;
  char *in_R8;
  char *in_R9;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_b0 [3];
  uint *local_98;
  uint *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_68;
  longlong *local_58;
  undefined8 *local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x38);
  plVar10 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_78 = puVar1;
  plVar5 = operator_new(8);
  local_b0[0] = plVar10;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)local_b0;
    local_b0[0] = plVar5;
  }
  local_98 = (uint *)0x0;
  local_90 = (uint *)0x0;
  local_88 = 0;
  plVar5 = plVar10;
  do {
    plVar7 = *(longlong **)(param_1 + 0x38);
    local_48 = *(undefined8 **)(param_1 + 8);
    if ((puVar1 == (undefined8 *)0x0) || (puVar1 != local_48)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar7) goto LAB_140dc456d;
    uVar9 = (int)plVar5 + 1;
    plVar5 = (longlong *)(ulonglong)uVar9;
    if (100 < (int)uVar9) {
      in_R9 = "f:\\version\\cqserver-72.2.17-0210\\modules\\familyarenic\\src\\familyarenicteam.cpp";
      in_R8 = "nLoopCount";
      log_InlineLogERROR(&DAT_140ddd548);
LAB_140dc456d:
      puVar8 = local_98;
      local_68 = (longlong *)0x0;
      if (local_90 < local_98) {
        _invalid_parameter_noinfo();
      }
      plVar6 = local_b0[0];
      local_68 = local_b0[0];
      while( true ) {
        puVar2 = local_90;
        local_58 = (longlong *)0x0;
        if (local_90 < local_98) {
          _invalid_parameter_noinfo();
        }
        local_58 = local_b0[0];
        if ((plVar6 == (longlong *)0x0) || (plVar6 != local_b0[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar8 == puVar2) break;
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar10;
        }
        else {
          plVar5 = (longlong *)*plVar6;
        }
        if ((uint *)plVar5[4] <= puVar8) {
          _invalid_parameter_noinfo();
        }
        FUN_140dbe570(*(longlong *)(param_1 + 0x50),*puVar8,in_R8,(ulonglong)in_R9);
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar10;
        }
        else {
          plVar5 = (longlong *)*plVar6;
        }
        if ((uint *)plVar5[4] <= puVar8) {
          _invalid_parameter_noinfo();
        }
        puVar8 = puVar8 + 1;
      }
      if (local_98 != (uint *)0x0) {
        operator_delete(local_98);
      }
      local_98 = (uint *)0x0;
      local_90 = (uint *)0x0;
      local_88 = 0;
      operator_delete(local_b0[0]);
      return;
    }
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar10;
    }
    else {
      plVar7 = (longlong *)*puVar1;
    }
    if (plVar6 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    if (plVar6[4] == 0) {
      if (puVar1 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
        plVar7 = plVar10;
      }
      else {
        plVar7 = (longlong *)*puVar1;
      }
      if (plVar6 == (longlong *)plVar7[6]) {
        _invalid_parameter_noinfo();
      }
      log_InlineLogERROR("CFamilyArenicTeam::OnInviteTimeOut, found NULL user(%d)");
    }
    else {
      iVar4 = FUN_140dc4990(plVar6[4]);
      if (iVar4 != 3) {
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar10;
        }
        else {
          plVar7 = (longlong *)*puVar1;
        }
        if (plVar6 == (longlong *)plVar7[6]) {
          _invalid_parameter_noinfo();
        }
        FUN_140db3b30((longlong *)local_b0,(undefined4 *)(plVar6 + 3));
      }
    }
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar7 = plVar6;
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)(plVar6[2] + 0x29) == '\0') {
        do {
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar6;
          local_80 = plVar6;
        } while (*(char *)(*plVar6 + 0x29) == '\0');
      }
      else {
        do {
          plVar6 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
          bVar11 = plVar7 == (longlong *)plVar6[2];
          plVar7 = plVar6;
        } while (bVar11);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined8 * FUN_140dc4690(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = CFamilyArenicTeam::vftable;
  FUN_140dbfa60(param_1 + 1);
  plVar2 = (longlong *)0x0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x14);
    plVar2 = plVar1;
  }
  param_1[0x14] = plVar2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}




undefined8 * FUN_140dc4760(undefined8 *param_1,uint param_2)

{
  FUN_140dc3d90(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140dc0d20(param_1);
  }
  return param_1;
}




undefined8 * FUN_140dc4790(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if ((DAT_140df1568 & 1) == 0) {
    DAT_140df1568 = DAT_140df1568 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1560,"CFamilyArenicTeam");
    atexit((_func_5014 *)&LAB_140ddc800);
  }
  puVar2 = CMyHeap::Alloc((CMyHeap *)&DAT_140df1560,0xd0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140dc4690(puVar2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR("CFamilyArenicTeam::CreateNew, error in allocate memory");
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = FUN_140dc33f0((longlong)puVar2,param_1,param_2,param_3);
    if ((char)uVar1 == '\0') {
      log_InlineLogERROR("CFamilyArenicTeam::CreateNew, can not create CFamilyArenicTeam");
      (**(code **)*puVar2)(puVar2,1);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}




void FUN_140dc48c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  CMsg local_418 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar1 = FUN_140dc0870(param_2);
    uVar2 = FUN_140dc0870(*(undefined4 *)(param_1 + 0x10));
    if ((int)uVar1 != (int)uVar2) {
      FUN_140dd2940(local_418);
      uVar1 = FUN_140dc0870(param_2);
      uVar1 = FUN_140dd2a30((longlong)local_418,6,(int)uVar1);
      if ((char)uVar1 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),local_418);
      }
      FUN_140dd2990((undefined8 *)local_418);
    }
    *(undefined4 *)(param_1 + 0x10) = param_2;
  }
  return;
}




undefined4 FUN_140dc4990(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_140dc49c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




int FUN_140dc49d0(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  return *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24);
}




ulonglong FUN_140dc4a20(longlong param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar3;
  ulonglong extraout_RAX_01;
  uint uVar4;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar3 = extraout_RAX;
  }
  else {
    if (param_3 == 0) {
      log_InlineLogERROR(&DAT_140ddd548);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    *(longlong **)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0x14) = param_3;
    uVar3 = (**(code **)(*param_2 + 0x70))(param_2,param_3);
    if ((char)uVar3 != '\0') {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x250))(*(longlong **)(param_1 + 8),param_3);
      uVar4 = uVar1 / 10;
      *(uint *)(param_1 + 0x20) = uVar4;
      uVar1 = uVar1 % 10;
      *(uint *)(param_1 + 0x24) = uVar1;
      if (uVar4 < uVar1) {
        log_InlineLogERROR("CFamilyArenicUser::Create, user(%d) family arenic point error: %d");
        return extraout_RAX_01 & 0xffffffffffffff00;
      }
      uVar2 = 0x14;
      if (uVar4 < 0x14) {
        uVar2 = uVar4;
      }
      *(uint *)(param_1 + 0x20) = uVar2;
      uVar4 = 9;
      if (uVar1 < 9) {
        uVar4 = uVar1;
      }
      *(uint *)(param_1 + 0x24) = uVar4;
      return 1;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




void FUN_140dc4b40(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x14;
  if (*(int *)(param_1 + 0x20) < 0x14) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar2;
  iVar1 = 9;
  if (*(int *)(param_1 + 0x24) < 9) {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x24) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000140dc4b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x248))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),iVar1 + iVar2 * 10);
  return;
}




void FUN_140dc4b90(longlong param_1)

{
  if ((*(int *)(param_1 + 0x24) != 0) || (*(int *)(param_1 + 0x20) != 0)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x248))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),0);
  }
  return;
}




longlong FUN_140dc4bd0(longlong param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 8) && (iVar1 != 7)) && (iVar1 != 9)) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}




void FUN_140dc4bf0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




longlong FUN_140dc4c00(longlong param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 == param_2) goto LAB_140dc4c9a;
  if (uVar1 == 5) {
    if (param_2 != 0) {
      if ((param_2 != 1) && (param_2 != 6)) goto LAB_140dc4c44;
      goto LAB_140dc4c27;
    }
LAB_140dc4c8b:
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
LAB_140dc4c27:
    if (param_2 == 0) goto LAB_140dc4c8b;
    if ((param_2 == 1) || (param_2 == 6)) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),uVar3);
      uVar3 = 1;
      if (cVar2 != '\0') {
        uVar3 = 6;
      }
      uVar4 = FUN_140dc48c0(param_1,uVar3);
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if (((8 < param_2) && (param_2 < 0xb)) && (uVar1 == 5)) {
LAB_140dc4c44:
      return (ulonglong)(uint3)(uVar1 >> 8) << 8;
    }
  }
  uVar5 = FUN_140dc48c0(param_1,param_2);
LAB_140dc4c9a:
  return CONCAT71((int7)(uVar5 >> 8),1);
}




undefined4 FUN_140dc4cb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




undefined4 FUN_140dc4cc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_140dc4cd0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




undefined4 FUN_140dc4ce0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




void FUN_140dc4cf0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}




void FUN_140dc4d20(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  CMsg local_438 [1072];
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2,param_4,0xfffffffffffffffe);
  FUN_140dd2750(local_438);
  uVar1 = FUN_140dd2810((longlong)local_438,0x60,*(undefined4 *)(param_1 + 0x14),(longlong)param_2);
  if ((char)uVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),local_438);
  }
  FUN_140dd27d0((undefined8 *)local_438);
  return;
}




undefined4 FUN_140dc4db0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_140dc4dc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




void FUN_140dc4dd0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_140dc4de0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




undefined8 FUN_140dc4df0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2,1,0,1);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2,0,CONCAT11(uVar3,1),1);
    return uVar2;
  }
  tq::GmLogSave("family_arenic","Error: Failed in giving user(%u) family arenic prize item: %u");
  return 0;
}




void FUN_140dc4e80(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  iVar2 = (**(code **)(lVar1 + 0x270))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
  (**(code **)(lVar1 + 0x260))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2 + iVar2);
  lVar1 = **(longlong **)(param_1 + 8);
  iVar2 = (**(code **)(lVar1 + 0x268))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
  (**(code **)(lVar1 + 600))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_2 + iVar2);
                    /* WARNING: Could not recover jumptable at 0x000140dc4ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x118))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
  return;
}




undefined * FUN_140dc4f00(void)

{
  if ((DAT_140df1578 & 1) == 0) {
    DAT_140df1578 = DAT_140df1578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1570,"CFamilyArenicUser");
    atexit((_func_5014 *)&LAB_140ddc810);
  }
  return &DAT_140df1570;
}




void FUN_140dc4f60(__uint64 param_1)

{
  if ((DAT_140df1578 & 1) == 0) {
    DAT_140df1578 = DAT_140df1578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1570,"CFamilyArenicUser");
    atexit((_func_5014 *)&LAB_140ddc810);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc4fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140df1570,param_1);
  return;
}




void FUN_140dc4fc0(void *param_1)

{
  if ((DAT_140df1578 & 1) == 0) {
    DAT_140df1578 = DAT_140df1578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1570,"CFamilyArenicUser");
    atexit((_func_5014 *)&LAB_140ddc810);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc5015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140df1570,param_1);
  return;
}




void FUN_140dc5020(void *param_1)

{
  if ((DAT_140df1578 & 1) == 0) {
    DAT_140df1578 = DAT_140df1578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1570,"CFamilyArenicUser");
    atexit((_func_5014 *)&LAB_140ddc810);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc5075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140df1570,param_1);
  return;
}




undefined8 * FUN_140dc5080(undefined8 *param_1,byte param_2)

{
  *param_1 = CFamilyArenicUser::vftable;
  if ((param_2 & 1) != 0) {
    FUN_140dc4fc0(param_1);
  }
  return param_1;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140dc50b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  IStringManager *pIVar5;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 < 9) {
    bVar3 = true;
    *(int *)(param_1 + 0x24) = iVar1 + 1;
    if (iVar1 == 8) {
      uVar4 = FUN_140dc4df0(param_1,0xb0bc8);
      if ((int)uVar4 != 0) {
        tq::GmLogSave("family_arenic","Give user(%u) family arenic prize item: %u for 9 win",*(undefined4 *)(param_1 + 0x14),0xb0bc8);
        pIVar5 = theInstance();
        lVar2 = **(longlong **)(param_1 + 8);
        uVar4 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_FAMILY_ARENIC_PRISE_WIN_9");
        (**(code **)(lVar2 + 0x20))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),0x7d5,uVar4);
      }
      FUN_140dc4e80(param_1,500);
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0x14) {
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (iVar1 == 0x13) {
      uVar4 = FUN_140dc4df0(param_1,0xb0bc8);
      if ((int)uVar4 != 0) {
        tq::GmLogSave("family_arenic","Give user(%u) family arenic prize item: %u for 20 match",*(undefined4 *)(param_1 + 0x14),0xb0bc8);
        pIVar5 = theInstance();
        lVar2 = **(longlong **)(param_1 + 8);
        uVar4 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_FAMILY_ARENIC_PRISE_BATTLE_20");
        (**(code **)(lVar2 + 0x20))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),0x7d5,uVar4);
      }
      FUN_140dc4e80(param_1,500);
    }
  }
  else if (!bVar3) {
    return;
  }
  FUN_140dc4b40(param_1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140dc5200(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  IStringManager *pIVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0x14) {
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    if (iVar1 == 0x13) {
      uVar3 = FUN_140dc4df0(param_1,0xb0bc8);
      if ((int)uVar3 != 0) {
        tq::GmLogSave("family_arenic","Give user(%u) family arenic prize item: %u for 20 match",*(undefined4 *)(param_1 + 0x14),0xb0bc8);
        pIVar4 = theInstance();
        lVar2 = **(longlong **)(param_1 + 8);
        uVar3 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_FAMILY_ARENIC_PRISE_BATTLE_20");
        (**(code **)(lVar2 + 0x20))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),0x7d5,uVar3);
      }
      FUN_140dc4e80(param_1,500);
    }
    FUN_140dc4b40(param_1);
  }
  return;
}




undefined8 * FUN_140dc52c0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if ((DAT_140df1578 & 1) == 0) {
    DAT_140df1578 = DAT_140df1578 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1570,"CFamilyArenicUser");
    atexit((_func_5014 *)&LAB_140ddc810);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140df1570,0x38);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = CFamilyArenicUser::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CFamilyArenicUser::CreateNew, error in allocate memory");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_140dc4a20((longlong)puVar1,param_1,param_2);
    if ((char)uVar2 == '\0') {
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_140dc53b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140dc4d20(param_1,*(int *)(param_1 + 0x1c),param_3,param_4);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}




void FUN_140dc53d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = (char)param_3;
  cVar1 = (char)param_4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x120))();
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
    if (cVar1 == '\0') {
      param_4 = 0;
      param_3 = 0;
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
      (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
    }
  }
  if (param_2 != '\0') {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x14);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))();
  }
  if (cVar3 != '\0') {
    FUN_140dc53b0(param_1,uVar2,param_3,param_4);
  }
  return;
}




void FUN_140dc54d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = CFamilyData::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}




void FUN_140dc5500(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




ulonglong FUN_140dc5520(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (undefined8 *)0x0)) {
    if (*(longlong *)(param_1 + 8) != 0) {
      plVar1 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
      if (plVar1 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_140ddd548);
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1,3);
        (**(code **)(*plVar2 + 0x40))(plVar2);
        log_InlineLogERROR("CFamilyData::Create2 User:%u data repeat");
      }
      (**(code **)*plVar1)(plVar1,1);
      (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
    }
    lVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    *(longlong *)(param_1 + 8) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = *param_3;
    *(undefined8 *)(param_1 + 0x28) = param_3[1];
    if (lVar3 != 0) {
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  log_InlineLogERROR(&DAT_140ddd548);
  return extraout_RAX & 0xffffffffffffff00;
}




void FUN_140dc5660(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc56a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),0);
  return;
}




ulonglong FUN_140dc56b0(longlong param_1)

{
  ulonglong extraout_RAX;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}




undefined8 FUN_140dc5700(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  if (9 < param_2) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140dc5786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined8 FUN_140dc5790(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140dc57e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
  return uVar2;
}




void FUN_140dc57f0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  if (9 < param_2) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140dc58a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




void FUN_140dc58b0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  if (9 < param_2) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  (**(code **)(*plVar1 + 0x80))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140dc599d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




undefined4 FUN_140dc59b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_140dc59c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




ulonglong FUN_140dc59d0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong extraout_RAX;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR("CFamilyData::GetFamilyArenicInfo, m_pData = NULL");
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  *param_2 = uVar1;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  param_2[2] = uVar1;
  strncpy((char *)(param_2 + 3),(char *)(param_1 + 0x20),0x10);
  *(undefined1 *)((longlong)param_2 + 0x1b) = 0;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  param_2[7] = uVar1;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),8);
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  param_2[9] = uVar1;
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),7);
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2);
  param_2[8] = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




bool FUN_140dc5ac0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
  iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  if (iVar3 != *(int *)(param_2 + 0x1c)) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
    return *(uint *)(param_2 + 0x1c) < uVar4;
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
  uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
  bVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x198))(*(longlong **)(param_1 + 0x18),uVar4);
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x198))(*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_2 + 8));
  if (bVar1 == bVar2) {
    bVar6 = uVar4 < *(uint *)(param_2 + 8);
    bVar7 = uVar4 == *(uint *)(param_2 + 8);
  }
  else {
    bVar6 = bVar1 < bVar2;
    bVar7 = bVar1 == bVar2;
  }
  return !bVar6 && !bVar7;
}




longlong FUN_140dc5bd0(longlong param_1)

{
  return param_1 + 0x20;
}




void FUN_140dc5be0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined * FUN_140dc5c10(void)

{
  if ((DAT_140df1588 & 1) == 0) {
    DAT_140df1588 = DAT_140df1588 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1580,"CFamilyData");
    atexit((_func_5014 *)&LAB_140ddc820);
  }
  return &DAT_140df1580;
}




void FUN_140dc5c70(__uint64 param_1)

{
  if ((DAT_140df1588 & 1) == 0) {
    DAT_140df1588 = DAT_140df1588 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1580,"CFamilyData");
    atexit((_func_5014 *)&LAB_140ddc820);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc5cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140df1580,param_1);
  return;
}




void FUN_140dc5cd0(void *param_1)

{
  if ((DAT_140df1588 & 1) == 0) {
    DAT_140df1588 = DAT_140df1588 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1580,"CFamilyData");
    atexit((_func_5014 *)&LAB_140ddc820);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc5d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140df1580,param_1);
  return;
}




void FUN_140dc5d30(void *param_1)

{
  if ((DAT_140df1588 & 1) == 0) {
    DAT_140df1588 = DAT_140df1588 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1580,"CFamilyData");
    atexit((_func_5014 *)&LAB_140ddc820);
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc5d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140df1580,param_1);
  return;
}




undefined8 * FUN_140dc5d90(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = CFamilyData::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_2 & 1) != 0) {
    FUN_140dc5cd0(param_1);
  }
  return param_1;
}




undefined8 * FUN_140dc5de0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_140df1588 & 1) == 0) {
    DAT_140df1588 = DAT_140df1588 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140df1580,"CFamilyData");
    atexit((_func_5014 *)&LAB_140ddc820);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140df1580,0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = CFamilyData::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = param_1;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548,"CHECKF","pFamilyData","f:\\version\\cqserver-72.2.17-0210\\modules\\familyarenic\\src\\familydata.cpp",0x24);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




ulonglong FUN_140dc5eb0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_3 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      log_InlineLogERROR("CFamilyData::Create1 User:%u data repeat");
      (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
    }
    *(longlong **)(param_1 + 8) = param_2;
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,2);
    (**(code **)(*plVar1 + 0xa8))(plVar1,*param_3);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
    (**(code **)(*plVar1 + 0xb0))(plVar1,1);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar1 + 0xb8))(plVar1,param_3[2]);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3[7]);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),7);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3[8]);
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),8);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3[9]);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 3);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 5);
    *(undefined4 *)(param_1 + 0x10) = param_3[1];
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),1);
    if ((char)uVar2 == '\0') {
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),1);
        *(undefined8 *)(param_1 + 8) = 0;
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

bool FUN_140dc6080(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_140df1540 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_48 = 200;
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  FUN_140dc59d0(param_2,&local_38);
  bVar1 = FUN_140dc5ac0(param_1,(longlong)&local_38);
  return bVar1;
}




bool FUN_140dc6180(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140dc61c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140dc6210(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc6232;
  }
  lVar2 = *plVar1;
LAB_140dc6232:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140dc6250(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc6272;
  }
  lVar2 = *plVar1;
LAB_140dc6272:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140dc6290(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140dc63a0(longlong param_1,longlong *param_2)

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




bool FUN_140dc64c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140dc6550(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
}




longlong FUN_140dc6660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc6682;
  }
  lVar2 = *plVar1;
LAB_140dc6682:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dc66a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dc66c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140dc6730(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140dc67d0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dc6802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




bool FUN_140dc6870(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_140dc6990(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140dc69c0;
  }
  else {
LAB_140dc69c0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140dc69e8;
  }
  _invalid_parameter_noinfo();
LAB_140dc69e8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140dc6a30(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140dc5500((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140dc6a90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140dc6b30(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140dc6be0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0x28);
  return;
}




longlong FUN_140dc6c80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_140dc6cf0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dc6d90(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dc6dd0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140dc6ec0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      bVar1 = FUN_140dc6080(*(longlong *)(param_1 + lVar2 * 8),param_4);
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




longlong FUN_140dc6f60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc6f82;
  }
  lVar2 = *plVar1;
LAB_140dc6f82:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140dc6fa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc6fc2;
  }
  lVar2 = *plVar1;
LAB_140dc6fc2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140dc6fe0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140dc7030(longlong param_1,longlong param_2)

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




void FUN_140dc7090(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc70b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc7100(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140dc7110(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc7132;
  }
  lVar2 = *plVar1;
LAB_140dc7132:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140dc7150(longlong *param_1)

{
  FUN_140dc66a0(param_1);
  return param_1;
}




longlong FUN_140dc7170(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc7192;
  }
  lVar2 = *plVar1;
LAB_140dc7192:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140dc71b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc71d2;
  }
  lVar2 = *plVar1;
LAB_140dc71d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dc7250(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140dc7310(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140dc66a0(param_1);
  return param_2;
}




longlong * FUN_140dc7340(longlong *param_1)

{
  FUN_140dc67d0(param_1);
  return param_1;
}




void FUN_140dc7390(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140dc7410(longlong param_1,longlong param_2)

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




void FUN_140dc7470(longlong param_1,longlong *param_2)

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




longlong * FUN_140dc74d0(longlong *param_1,longlong param_2)

{
  FUN_140dc6990(param_1,param_2);
  return param_1;
}




void FUN_140dc74f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dc7522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140dc7590(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dc75b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140dc7630(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_140dc76b0(undefined8 *param_1)

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




undefined8 * FUN_140dc76f0(undefined8 *param_1)

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




void * FUN_140dc7750(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dc7790(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140dc77e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dc7870(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = FUN_140dc6080(*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_140dc6080(*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_140dc6080(*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_140dc7900(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    bVar2 = FUN_140dc6080(*(longlong *)(param_1 + lVar3 * 8),*(longlong *)(param_1 + -8 + lVar3 * 8));
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
    bVar2 = FUN_140dc6080(*(longlong *)(param_1 + lVar3 * 8),param_4);
    if (!bVar2) break;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  *(longlong *)(param_1 + lVar1 * 8) = param_4;
  return;
}




void * FUN_140dc79d0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140dc7a10(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  *param_3 = *param_1;
  FUN_140dc7900((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




longlong FUN_140dc7a40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc7a62;
  }
  lVar2 = *plVar1;
LAB_140dc7a62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140dc7a80(longlong *param_1)

{
  FUN_140dc66a0(param_1);
  return param_1;
}




longlong FUN_140dc7aa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dc7ac2;
  }
  lVar2 = *plVar1;
LAB_140dc7ac2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dc7ae0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc7b00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc7b20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc7b40(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dc7b40(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_140dc7b90(longlong param_1,ulonglong param_2)

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
      FUN_140dc6550();
    }
    lVar1 = FUN_140dc7250(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140dc7c00(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_140dc7c30(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140dc7c30(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




longlong * FUN_140dc7c80(longlong *param_1)

{
  FUN_140dc67d0(param_1);
  return param_1;
}




undefined8 * FUN_140dc7ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140dc7d20(undefined8 *param_1)

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




undefined8 * FUN_140dc7d60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140dc7da0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140dc7e0a;
  }
  _invalid_parameter_noinfo();
LAB_140dc7e0a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140dc7e40(longlong *param_1,longlong param_2)

{
  FUN_140dc6990(param_1,-param_2);
  return param_1;
}




undefined8 * FUN_140dc7e60(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140dc7ed0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140dc7f10(longlong *param_1)

{
  FUN_140dc7590(param_1);
  return param_1;
}




longlong * FUN_140dc7f30(longlong *param_1)

{
  FUN_140dc74f0(param_1);
  return param_1;
}




void FUN_140dc7f50(void)

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




void FUN_140dc7fb0(void)

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




undefined8 * FUN_140dc8010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_140dc8090(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140dc7590(param_1);
  return param_2;
}




longlong * FUN_140dc80c0(longlong *param_1)

{
  FUN_140dc74f0(param_1);
  return param_1;
}




undefined8 * FUN_140dc80e0(undefined8 *param_1)

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




undefined8 * FUN_140dc8130(undefined8 *param_1)

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




void * FUN_140dc8180(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140dc81c0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140dc8230(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140dc8280(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_140dc8350(void *param_1,longlong param_2,void *param_3)

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




void FUN_140dc83c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140dc7870(param_1,param_1 + lVar1,param_1 + lVar1 * 2);
    FUN_140dc7870(param_2 + -lVar1,param_2,param_2 + lVar1);
    FUN_140dc7870(param_3 + lVar1 * -2,param_3 + -lVar1,param_3);
    FUN_140dc7870(param_1 + lVar1,param_2,param_3 + -lVar1);
    return;
  }
  FUN_140dc7870(param_1,param_2,param_3);
  return;
}




void FUN_140dc84a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140dc7900(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_140dc8520(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
    do {
      lVar1 = *plVar4;
      bVar2 = FUN_140dc6080(lVar1,*param_1);
      if (bVar2) {
        lVar3 = (longlong)plVar4 - (longlong)param_1 >> 3;
        if (0 < lVar3) {
          memmove_s(plVar4 + (1 - lVar3),lVar3 * 8,param_1,lVar3 * 8);
        }
        *param_1 = lVar1;
      }
      else {
        bVar2 = FUN_140dc6080(lVar1,plVar4[-1]);
        plVar6 = plVar4;
        plVar5 = plVar4;
        if (bVar2) {
          do {
            plVar6 = plVar5 + -1;
            *plVar5 = *plVar6;
            bVar2 = FUN_140dc6080(lVar1,plVar5[-2]);
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




void FUN_140dc8630(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140dc7900((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1);
  return;
}




void FUN_140dc8660(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dc7b40(param_1,(longlong *)plVar2[2]);
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




void FUN_140dc86e0(undefined8 *param_1)

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




void FUN_140dc8720(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140dc7c30(param_1,(longlong *)plVar2[2]);
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




void FUN_140dc87a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc87c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dc87e0(undefined8 *param_1)

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




undefined8 * FUN_140dc8830(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dc8870(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140dc88d0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140dc893d;
  }
  _invalid_parameter_noinfo();
LAB_140dc893d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140dc8970(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dc89b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x29) == '\0') {
    puVar1 = FUN_140dc7ca0(param_1,puVar3,param_3,puVar3,param_2 + 3,*(undefined1 *)(param_2 + 5));
    if (*(char *)((longlong)puVar3 + 0x29) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140dc89b0(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_140dc89b0(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_140dc8a40(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_140dc8b20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140dc7f50();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140dc8b80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140dc7fb0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140dc8bc0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140dc8010(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140dc8f00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dc8f50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140dc7590(param_3);
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
        goto LAB_140dc913c;
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
LAB_140dc913c:
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
            FUN_140dc7410((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140dc7470((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_140dc7410((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140dc7470((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140dc7410((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_140dc7470((longlong)param_1,plVar7);
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




undefined8 * FUN_140dc9310(undefined8 *param_1)

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




undefined8 * FUN_140dc9360(undefined8 *param_1)

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




void FUN_140dc93b0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_140dc94a0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_140dc9510(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar7 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_140dc83c0(param_2,plVar7,param_3 + -1);
  plVar8 = plVar7;
  while (plVar9 = plVar8, param_2 < plVar9) {
    bVar3 = FUN_140dc6080(plVar9[-1],*plVar9);
    if ((bVar3) || (bVar3 = FUN_140dc6080(*plVar9,plVar9[-1]), plVar8 = plVar9 + -1, bVar3)) break;
  }
  do {
    plVar7 = plVar7 + 1;
    plVar8 = plVar7;
    plVar4 = plVar9;
    if (param_3 <= plVar7) break;
    bVar3 = FUN_140dc6080(*plVar7,*plVar9);
    if ((bVar3) || (bVar3 = FUN_140dc6080(*plVar9,*plVar7), bVar3)) break;
  } while( true );
joined_r0x000140dc95d3:
  plVar2 = plVar8;
  plVar8 = plVar9;
  plVar5 = plVar4;
  if (param_3 <= plVar2) {
joined_r0x000140dc9617:
    for (; param_2 < plVar9; plVar9 = plVar9 + -1) {
      plVar8 = plVar8 + -1;
      bVar3 = FUN_140dc6080(*plVar8,*plVar5);
      if (!bVar3) {
        bVar3 = FUN_140dc6080(*plVar5,*plVar8);
        if (bVar3) break;
        plVar5 = plVar5 + -1;
        if (plVar5 != plVar8) {
          lVar1 = *plVar5;
          *plVar5 = *plVar8;
          *plVar8 = lVar1;
        }
      }
    }
    if (plVar9 == param_2) {
      if (plVar2 == param_3) {
        *param_1 = plVar5;
        param_1[1] = plVar7;
        return param_1;
      }
      if ((plVar7 != plVar2) && (plVar5 != plVar7)) {
        lVar1 = *plVar5;
        *plVar5 = *plVar7;
        *plVar7 = lVar1;
      }
      plVar7 = plVar7 + 1;
      plVar8 = plVar2 + 1;
      plVar4 = plVar5 + 1;
      if (plVar5 != plVar2) {
        lVar1 = *plVar5;
        *plVar5 = *plVar2;
        *plVar2 = lVar1;
      }
    }
    else {
      plVar9 = plVar9 + -1;
      if (plVar2 == param_3) {
        plVar4 = plVar5 + -1;
        if (plVar9 != plVar4) {
          lVar1 = *plVar9;
          *plVar9 = *plVar4;
          *plVar4 = lVar1;
        }
        plVar7 = plVar7 + -1;
        plVar8 = plVar2;
        if (plVar4 != plVar7) {
          lVar1 = *plVar4;
          *plVar4 = *plVar7;
          *plVar7 = lVar1;
        }
      }
      else {
        if (plVar2 != plVar9) {
          lVar1 = *plVar2;
          *plVar2 = *plVar9;
          *plVar9 = lVar1;
        }
        plVar8 = plVar2 + 1;
        plVar4 = plVar5;
      }
    }
    goto joined_r0x000140dc95d3;
  }
  bVar3 = FUN_140dc6080(*plVar4,*plVar2);
  plVar6 = plVar7;
  if (!bVar3) {
    bVar3 = FUN_140dc6080(*plVar2,*plVar4);
    if (bVar3) goto joined_r0x000140dc9617;
    plVar6 = plVar7 + 1;
    if (plVar7 != plVar2) {
      lVar1 = *plVar7;
      *plVar7 = *plVar2;
      *plVar2 = lVar1;
    }
  }
  plVar7 = plVar6;
  plVar8 = plVar2 + 1;
  goto joined_r0x000140dc95d3;
}




void FUN_140dc9740(longlong param_1,longlong param_2)

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
      FUN_140dc7900(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_140dc97c0(longlong *param_1,longlong *param_2)

{
  FUN_140dc8520(param_1,param_2);
  return;
}




void FUN_140dc97e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140dc7900((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1);
  }
  return;
}




undefined8 * FUN_140dc9860(undefined8 *param_1)

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




undefined8 * FUN_140dc98c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140dc9910(undefined8 *param_1,undefined8 *param_2)

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




ulonglong FUN_140dc9960(longlong *param_1)

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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dc99d7;
  }
  _invalid_parameter_noinfo();
LAB_140dc99d7:
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




void FUN_140dc9a30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dc9a50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dc9a70(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dc9b00(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140dc8a40(param_1,param_2,param_3);
  return param_2;
}




void FUN_140dc9b20(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_140dc89b0(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
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




undefined8 * FUN_140dc9bd0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140dc7ca0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140dc9f10(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140dc9f70(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_140dca0a0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140dca1fd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dca22c;
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
      goto LAB_140dca1fd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dc8bc0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dca22c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140dca250(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dc8720((longlong)param_1);
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
    FUN_140dc8f50(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140dca400(undefined8 *param_1)

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




undefined8 * FUN_140dca450(undefined8 *param_1)

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




void FUN_140dca4d0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140dc7900((longlong)param_1,0,lVar2 + -8 >> 3,lVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dca540(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char *_Source;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_4a8 [32];
  int local_488;
  undefined4 local_484;
  undefined8 local_480;
  longlong *local_478;
  longlong *local_468;
  CMsg local_458 [1040];
  char local_48 [8];
  ulonglong local_40;
  ulonglong local_38;
  
  local_480 = 0xfffffffffffffffe;
  local_38 = DAT_140df1540 ^ (ulonglong)auStack_4a8;
  local_484 = param_2;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x70))();
  if (cVar4 != '\0') {
    FUN_140dd3390(local_458);
    FUN_140dd3440((longlong)local_458);
    plVar6 = *(longlong **)(param_1 + 0xd0);
    iVar7 = 0;
    local_478 = (longlong *)0x0;
    if (*(longlong **)(param_1 + 0xd8) < plVar6) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0xb8);
    plVar2 = *(longlong **)(param_1 + 0xd8);
    local_468 = (longlong *)0x0;
    local_478 = plVar1;
    if (plVar2 < *(longlong **)(param_1 + 0xd0)) {
      _invalid_parameter_noinfo();
    }
    plVar3 = *(longlong **)(param_1 + 0xb8);
    local_488 = 0;
    local_468 = plVar3;
    while( true ) {
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar3)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar6 == plVar2) || (9 < iVar7)) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      if (*plVar6 != 0) {
        local_48[0] = '\0';
        local_48[1] = '\0';
        local_48[2] = '\0';
        local_48[3] = '\0';
        local_48[4] = '\0';
        local_48[5] = '\0';
        local_48[6] = '\0';
        local_48[7] = '\0';
        local_40 = 0;
        _Source = (char *)FUN_140dc5bd0(*plVar6);
        strncpy(local_48,_Source,0x10);
        local_40 = local_40 & 0xffffffffffffff;
        uVar5 = FUN_140dd3470((longlong)local_458,(undefined8 *)local_48);
        if ((char)uVar5 == '\0') break;
      }
      iVar7 = iVar7 + 1;
      local_488 = iVar7;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      plVar6 = plVar6 + 1;
    }
    FUN_140dd3530((longlong)local_458);
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))(*(longlong **)(param_1 + 0x168),param_2,local_458);
    FUN_140dd33e0((undefined8 *)local_458);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dca730(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char *_Source;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_4e8 [48];
  longlong *local_4b8;
  uint local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  undefined4 local_4a4;
  int local_4a0;
  longlong *local_498;
  undefined8 local_488;
  longlong *local_480;
  CMsg local_468 [1040];
  undefined4 local_58;
  undefined4 local_54;
  char local_50 [12];
  uint local_44;
  ulonglong local_40;
  
  local_488 = 0xfffffffffffffffe;
  local_40 = DAT_140df1540 ^ (ulonglong)auStack_4e8;
  local_4ac = param_2;
  local_4a8 = param_3;
  local_4a4 = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x70))();
  if ((cVar2 != '\0') && (param_3 != 0)) {
    uVar4 = *(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 3;
    uVar6 = 100;
    if (uVar4 < 100) {
      uVar6 = uVar4;
    }
    plVar7 = *(longlong **)(param_1 + 0xa0);
    local_480 = (longlong *)0x0;
    if (*(longlong **)(param_1 + 0xa8) < plVar7) {
      local_4b8 = (longlong *)uVar6;
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x88);
    local_4b8 = *(longlong **)(param_1 + 0xa8);
    local_498 = (longlong *)0x0;
    local_480 = plVar1;
    if (local_4b8 < *(longlong **)(param_1 + 0xa0)) {
      _invalid_parameter_noinfo();
    }
    local_498 = *(longlong **)(param_1 + 0x88);
    uVar8 = 1;
    local_4b0 = 1;
    FUN_140dd2f80(local_468);
    uVar5 = FUN_140dd3030((longlong)local_468,(short)param_3,(short)uVar6);
    if ((char)uVar5 == '\0') {
      FUN_140dd2fd0((undefined8 *)local_468);
    }
    else {
      iVar10 = 0;
      local_4a0 = 0;
      while( true ) {
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_498)) {
          _invalid_parameter_noinfo();
        }
        if (plVar7 == local_4b8) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        lVar9 = *plVar7;
        if (lVar9 != 0) {
          if (((param_3 * 5 + -5) * 2 + 1U <= uVar8) && (uVar8 <= (uint)(param_3 * 10))) {
            local_58 = 0;
            local_54 = 0;
            local_50[0] = '\0';
            local_50[1] = '\0';
            local_50[2] = '\0';
            local_50[3] = '\0';
            local_50[4] = '\0';
            local_50[5] = '\0';
            local_50[6] = '\0';
            local_50[7] = '\0';
            local_50[8] = '\0';
            local_50[9] = '\0';
            local_50[10] = '\0';
            local_50[0xb] = '\0';
            local_44 = 0;
            uVar3 = FUN_140dc59b0(lVar9);
            local_58 = CONCAT22(local_58._2_2_,(short)uVar3);
            _Source = (char *)FUN_140dc5bd0(lVar9);
            strncpy(local_50,_Source,0x10);
            local_44 = local_44 & 0xffffff;
            uVar5 = FUN_140dc5700(lVar9,4);
            local_54 = (undefined4)uVar5;
            uVar6 = FUN_140dd3070((longlong)local_468,&local_58);
            if ((char)uVar6 == '\0') break;
          }
          uVar8 = uVar8 + 1;
          local_4b0 = uVar8;
        }
        iVar10 = iVar10 + 1;
        local_4a0 = iVar10;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = 0;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(longlong **)(lVar9 + 0x20) <= plVar7) {
          _invalid_parameter_noinfo();
        }
        plVar7 = plVar7 + 1;
      }
      FUN_140dd3150((longlong)local_468);
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))(*(longlong **)(param_1 + 0x168),local_4a4,local_468);
      FUN_140dd2fd0((undefined8 *)local_468);
    }
  }
  return;
}




void FUN_140dca9f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  
  plVar8 = *(longlong **)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0xa8) < plVar8) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (plVar2 < *(longlong **)(param_1 + 0xa0)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  uVar10 = 1;
  while( true ) {
    if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar8 == plVar2) || (100 < uVar10)) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar1;
    }
    if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      uVar7 = FUN_140dc5700(lVar9,3);
      uVar4 = FUN_140dc59b0(lVar9);
      if (uVar4 < 0x65) {
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1c0))(*(longlong **)(param_1 + 0x168),uVar7 & 0xffffffff);
        if (uVar5 < 10000) {
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),uVar7 & 0xffffffff);
          iVar6 = MulDiv(iVar6,0x50,100);
          lVar9 = **(longlong **)(param_1 + 0x168);
          (**(code **)(lVar9 + 0x1b8))(*(longlong **)(param_1 + 0x168),uVar7 & 0xffffffff,iVar6,lVar9,uVar4);
        }
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar1;
    }
    if (*(longlong **)(lVar9 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar8 = plVar8 + 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x168) + 0x218))();
  return;
}




longlong * FUN_140dcabc0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140dcad1d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dcad4c;
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
      goto LAB_140dcad1d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dc9bd0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dcad4c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140dcad70(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140dc66a0(param_3);
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
        goto LAB_140dcaf5c;
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
LAB_140dcaf5c:
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
            FUN_140dc7030((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dc63a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140dc7030((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140dc63a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dc7030((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140dc63a0((longlong)param_1,plVar7);
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




longlong * FUN_140dcb130(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140dcb200(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140dcb290(longlong *param_1)

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




longlong * FUN_140dcb350(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140dcb420(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dcb440(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dcb460(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dc8660((longlong)param_1);
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
    FUN_140dcad70(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140dcb610(longlong *param_1)

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
  FUN_140dcb460(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140dcb6b0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140dc8bc0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140dc8bc0(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140dc8bc0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140dc8bc0(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140dc8bc0(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140dc8bc0(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140dc8bc0(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140dca0a0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_140dcb9d0(longlong *param_1)

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
  FUN_140dca250(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140dcba40(undefined8 *param_1)

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




void FUN_140dcba90(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140dc6550();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140dc7250(param_1 + 0x10,uVar8);
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
      FUN_140dc94a0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140dc94a0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140dc8230(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_140dcbd40(undefined8 *param_1)

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




void FUN_140dcbd90(undefined8 *param_1,longlong param_2)

{
  FUN_140dca4d0(param_1,param_2);
  return;
}




undefined8 FUN_140dcbda0(longlong param_1,uint param_2)

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




void FUN_140dcbea0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res10 [2];
  undefined4 local_res18;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  if (*(ulonglong *)(param_1 + 0xa8) < uVar1) {
    _invalid_parameter_noinfo();
  }
  local_88 = (undefined4)*(undefined8 *)(param_1 + 0x88);
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  uStack_80 = (undefined4)uVar1;
  uStack_7c = (undefined4)(uVar1 >> 0x20);
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uVar1 = *(ulonglong *)(param_1 + 0xa8);
  if (uVar1 < *(ulonglong *)(param_1 + 0xa0)) {
    _invalid_parameter_noinfo();
  }
  local_78 = (undefined4)*(undefined8 *)(param_1 + 0x88);
  uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  uStack_70 = (undefined4)uVar1;
  uStack_6c = (undefined4)(uVar1 >> 0x20);
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uVar9 = 1;
  plVar7 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  plVar3 = (longlong *)CONCAT44(uStack_64,local_68);
  while( true ) {
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)CONCAT44(uStack_54,local_58))) {
      _invalid_parameter_noinfo();
    }
    if ((plVar7 == (longlong *)CONCAT44(uStack_4c,uStack_50)) || (100 < uVar9)) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar3;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      uVar5 = FUN_140dc5700(lVar8,3);
      local_res18 = (undefined4)uVar5;
      local_res10[0] = FUN_140dc59b0(lVar8);
      if (local_res10[0] < 0x65) {
        plVar6 = FUN_140dcb350((longlong *)(param_1 + 0xe8),(longlong *)&local_68,local_res10);
        plVar2 = (longlong *)*plVar6;
        local_40 = plVar6[1];
        lVar8 = *(longlong *)(param_1 + 0x118);
        local_38 = *(longlong **)(param_1 + 0xe8);
        local_48 = plVar2;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_38)) {
          _invalid_parameter_noinfo();
        }
        lVar4 = local_40;
        if (local_40 != lVar8) {
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
          (**(code **)(**(longlong **)(param_1 + 0x168) + 0x228))(*(longlong **)(param_1 + 0x168),local_res18,*(undefined4 *)(lVar4 + 0x1c));
          uVar9 = uVar9 + 1;
        }
      }
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar3;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar7 = plVar7 + 1;
  }
  return;
}




void FUN_140dcc0e0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint local_res10 [2];
  undefined4 local_res18;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  if (*(ulonglong *)(param_1 + 0xa8) < uVar1) {
    _invalid_parameter_noinfo();
  }
  local_88 = (undefined4)*(undefined8 *)(param_1 + 0x88);
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  uStack_80 = (undefined4)uVar1;
  uStack_7c = (undefined4)(uVar1 >> 0x20);
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  uVar1 = *(ulonglong *)(param_1 + 0xa8);
  if (uVar1 < *(ulonglong *)(param_1 + 0xa0)) {
    _invalid_parameter_noinfo();
  }
  local_78 = (undefined4)*(undefined8 *)(param_1 + 0x88);
  uStack_74 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  uStack_70 = (undefined4)uVar1;
  uStack_6c = (undefined4)(uVar1 >> 0x20);
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  uVar9 = 1;
  plVar7 = (longlong *)CONCAT44(uStack_5c,uStack_60);
  plVar3 = (longlong *)CONCAT44(uStack_64,local_68);
  while( true ) {
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)CONCAT44(uStack_54,local_58))) {
      _invalid_parameter_noinfo();
    }
    if ((plVar7 == (longlong *)CONCAT44(uStack_4c,uStack_50)) || (100 < uVar9)) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar3;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      uVar5 = FUN_140dc5700(lVar8,3);
      local_res18 = (undefined4)uVar5;
      local_res10[0] = FUN_140dc59b0(lVar8);
      if (local_res10[0] < 0x65) {
        plVar6 = FUN_140dcb350((longlong *)(param_1 + 0x128),(longlong *)&local_68,local_res10);
        plVar2 = (longlong *)*plVar6;
        local_40 = plVar6[1];
        lVar8 = *(longlong *)(param_1 + 0x158);
        local_38 = *(longlong **)(param_1 + 0x128);
        local_48 = plVar2;
        if ((plVar2 == (longlong *)0x0) || (plVar2 != local_38)) {
          _invalid_parameter_noinfo();
        }
        lVar4 = local_40;
        if (local_40 != lVar8) {
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
          (**(code **)(**(longlong **)(param_1 + 0x168) + 0x228))(*(longlong **)(param_1 + 0x168),local_res18,*(undefined4 *)(lVar4 + 0x1c));
          uVar9 = uVar9 + 1;
        }
      }
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar3;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar7 = plVar7 + 1;
  }
  return;
}




void FUN_140dcc320(longlong *param_1)

{
  FUN_140dcb610(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dcc350(longlong *param_1,longlong *param_2)

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
    FUN_140dcb460(param_1,local_18,&local_28,&local_38);
    FUN_140dc9b20((longlong)param_1,(longlong)param_2);
  }
  return param_1;
}




longlong FUN_140dcc3d0(longlong *param_1,uint *param_2)

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
  
  FUN_140dc8a40(param_1,&local_38,param_2);
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
  FUN_140dcb460(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_140dcc510(longlong *param_1,longlong *param_2)

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
      FUN_140dcb290(param_1);
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
      FUN_140dc8180(pvVar3,(longlong)pvVar1,_Dst);
      pvVar3 = FUN_140dc81c0(param_1,pvVar1,param_2[4],(void *)param_1[4]);
      param_1[4] = (longlong)pvVar3;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      operator_delete(_Dst);
    }
    uVar4 = FUN_140dc7b90((longlong)param_1,param_2[4] - param_2[3] >> 3);
    if ((char)uVar4 != '\0') {
      pvVar3 = FUN_140dc81c0(param_1,(void *)param_2[3],param_2[4],(void *)param_1[3]);
      param_1[4] = (longlong)pvVar3;
    }
  }
  return param_1;
}




longlong FUN_140dcc650(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140dcb6b0(param_1,local_28,(longlong *)&local_38,local_res8);
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




void FUN_140dcc750(longlong *param_1)

{
  FUN_140dcb9d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dcc780(undefined8 *param_1)

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
  lVar2 = FUN_140dc7f50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140dcc800(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140dcba90((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140dcc8f4;
  }
  _invalid_parameter_noinfo();
LAB_140dcc8f4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140dcc930(undefined8 *param_1)

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
  lVar2 = FUN_140dc7fb0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined1 FUN_140dcc9b0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

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
LAB_140dcca87:
      if (1 < lVar3) {
        param_4 = FUN_140dc8520(param_1,param_2);
      }
      return param_4;
    }
    if (param_3 < 1) {
      if (0x20 < lVar3) {
        FUN_140dc9740((longlong)param_1,(longlong)param_2);
        uVar2 = FUN_140dca4d0(param_1,(longlong)param_2);
        return uVar2;
      }
      goto LAB_140dcca87;
    }
    FUN_140dc9510(&local_18,param_1,param_2);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140dcc9b0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_140dcc9b0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar3 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140dccae0(longlong *param_1)

{
  FUN_140dcb610(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dccb10(longlong *param_1)

{
  FUN_140dcb9d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dccb40(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong local_48 [2];
  
  *param_1 = CFamilyRankMgr::vftable;
  FUN_140dcb290(param_1 + 0x11);
  FUN_140dcb290(param_1 + 0x17);
  plVar1 = param_1 + 1;
  plVar6 = *(longlong **)param_1[7];
  plVar3 = (longlong *)*plVar1;
  while( true ) {
    plVar4 = (longlong *)param_1[7];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar4) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar3;
    }
    if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)plVar6[4] != (undefined8 *)0x0) {
      FUN_140dc5500((undefined8 *)plVar6[4]);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x29);
        plVar6 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar4 + 0x29);
          plVar6 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar2 = *(char *)(plVar6[1] + 0x29);
        plVar7 = (longlong *)plVar6[1];
        plVar4 = plVar6;
        while ((plVar6 = plVar7, cVar2 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
          cVar2 = *(char *)(plVar6[1] + 0x29);
          plVar7 = (longlong *)plVar6[1];
          plVar4 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = param_1 + 9;
  plStack_60 = *(longlong **)param_1[0xf];
  plVar3 = (longlong *)*plVar6;
  plVar4 = plStack_60;
  local_68 = plVar3;
  do {
    do {
      while( true ) {
        while( true ) {
          plVar7 = plVar4;
          plVar4 = (longlong *)param_1[0xf];
          if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar6)) {
            _invalid_parameter_noinfo();
          }
          if (plVar7 == plVar4) {
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
            plVar3 = *(longlong **)(param_1[7] + 8);
            while (cVar2 == '\0') {
              FUN_140dc7b40(plVar1,(longlong *)plVar3[2]);
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
              FUN_140dc7b40(plVar6,(longlong *)plVar3[2]);
              plVar4 = (longlong *)*plVar3;
              operator_delete(plVar3);
              plVar3 = plVar4;
              cVar2 = *(char *)((longlong)plVar4 + 0x29);
            }
            *(undefined8 *)(param_1[0xf] + 8) = param_1[0xf];
            param_1[0x10] = 0;
            *(undefined8 *)param_1[0xf] = param_1[0xf];
            *(undefined8 *)(param_1[0xf] + 0x10) = param_1[0xf];
            plVar3 = param_1 + 0x1d;
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x23] + 8) + 0x21);
            plVar4 = *(longlong **)(param_1[0x23] + 8);
            while (cVar2 == '\0') {
              FUN_140dc7c30(plVar3,(longlong *)plVar4[2]);
              plVar7 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar7;
              cVar2 = *(char *)((longlong)plVar7 + 0x21);
            }
            *(undefined8 *)(param_1[0x23] + 8) = param_1[0x23];
            param_1[0x24] = 0;
            *(undefined8 *)param_1[0x23] = param_1[0x23];
            *(undefined8 *)(param_1[0x23] + 0x10) = param_1[0x23];
            plVar7 = param_1 + 0x25;
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x2b] + 8) + 0x21);
            plVar4 = *(longlong **)(param_1[0x2b] + 8);
            while (cVar2 == '\0') {
              FUN_140dc7c30(plVar7,(longlong *)plVar4[2]);
              plVar5 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar5;
              cVar2 = *(char *)((longlong)plVar5 + 0x21);
            }
            *(undefined8 *)(param_1[0x2b] + 8) = param_1[0x2b];
            param_1[0x2c] = 0;
            *(undefined8 *)param_1[0x2b] = param_1[0x2b];
            *(undefined8 *)(param_1[0x2b] + 0x10) = param_1[0x2b];
            plStack_60 = (longlong *)param_1[0x2b];
            local_68 = (longlong *)*plVar7;
            puStack_50 = (undefined8 *)*plStack_60;
            local_58 = local_68;
            FUN_140dca250(plVar7,local_48,(longlong *)&local_58,(longlong *)&local_68);
            operator_delete((void *)param_1[0x2b]);
            param_1[0x2b] = 0;
            param_1[0x2c] = 0;
            operator_delete((void *)*plVar7);
            puStack_50 = (undefined8 *)param_1[0x23];
            local_68 = (longlong *)*plVar3;
            plStack_60 = (longlong *)*puStack_50;
            local_58 = local_68;
            FUN_140dca250(plVar3,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0x23]);
            param_1[0x23] = 0;
            param_1[0x24] = 0;
            operator_delete((void *)*plVar3);
            if ((void *)param_1[0x1a] != (void *)0x0) {
              operator_delete((void *)param_1[0x1a]);
            }
            param_1[0x1a] = 0;
            param_1[0x1b] = 0;
            param_1[0x1c] = 0;
            operator_delete((void *)param_1[0x17]);
            if ((void *)param_1[0x14] != (void *)0x0) {
              operator_delete((void *)param_1[0x14]);
            }
            param_1[0x14] = 0;
            param_1[0x15] = 0;
            param_1[0x16] = 0;
            operator_delete((void *)param_1[0x11]);
            puStack_50 = (undefined8 *)param_1[0xf];
            local_68 = (longlong *)*plVar6;
            plStack_60 = (longlong *)*puStack_50;
            local_58 = local_68;
            FUN_140dcb460(plVar6,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[0xf]);
            param_1[0xf] = 0;
            param_1[0x10] = 0;
            operator_delete((void *)*plVar6);
            puStack_50 = (undefined8 *)param_1[7];
            local_68 = (longlong *)*plVar1;
            plStack_60 = (longlong *)*puStack_50;
            local_58 = local_68;
            FUN_140dcb460(plVar1,local_48,(longlong *)&local_68,(longlong *)&local_58);
            operator_delete((void *)param_1[7]);
            param_1[7] = 0;
            param_1[8] = 0;
            operator_delete((void *)*plVar1);
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar3;
          }
          if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if ((undefined8 *)plVar7[4] != (undefined8 *)0x0) {
            FUN_140dc5500((undefined8 *)plVar7[4]);
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar4 = plVar7;
        }
        plVar4 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
        cVar2 = *(char *)(*plVar4 + 0x29);
        plVar7 = (longlong *)*plVar4;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x29);
          plVar4 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      plVar4 = (longlong *)plVar7[1];
    } while (*(char *)((longlong)plVar4 + 0x29) != '\0');
    do {
      plVar5 = plVar4;
      plVar4 = plVar5;
      if (plVar7 != (longlong *)plVar5[2]) break;
      plVar4 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    } while (*(char *)((longlong)plVar4 + 0x29) == '\0');
  } while( true );
}




void FUN_140dcd0d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dcbda0(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140dc59b0(lVar1);
  return;
}




void FUN_140dcd0f0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  IStringManager *pIVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = FUN_140dc0a80(param_2);
  lVar2 = FUN_140dcbda0(param_1,uVar1);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_140dc59b0(lVar2);
  if (uVar1 == 0) {
    return;
  }
  if (((param_3 == 0) || (1 < param_3)) && (uVar1 == 1)) {
    pIVar3 = theInstance();
    pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_FAMILY_ARENIC_UP_TO_1");
    uVar5 = 1;
  }
  else {
    if (((param_3 == 0) || (5 < param_3)) && (uVar1 < 6)) {
      pIVar3 = theInstance();
      pcVar4 = "STR_FAMILY_ARENIC_UP_TO_5";
    }
    else if (((param_3 == 0) || (10 < param_3)) && (uVar1 < 0xb)) {
      pIVar3 = theInstance();
      pcVar4 = "STR_FAMILY_ARENIC_UP_TO_10";
    }
    else if (((param_3 == 0) || (0x14 < param_3)) && (uVar1 < 0x15)) {
      pIVar3 = theInstance();
      pcVar4 = "STR_FAMILY_ARENIC_UP_TO_20";
    }
    else if (((param_3 == 0) || (0x32 < param_3)) && (uVar1 < 0x33)) {
      pIVar3 = theInstance();
      pcVar4 = "STR_FAMILY_ARENIC_UP_TO_50";
    }
    else {
      if (((param_3 != 0) && (param_3 < 0x65)) || (100 < uVar1)) goto LAB_140dcd218;
      pIVar3 = theInstance();
      pcVar4 = "STR_FAMILY_ARENIC_UP_TO_100";
    }
    pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,pcVar4);
    uVar5 = (ulonglong)uVar1;
  }
  FUN_140dc3f90(param_2,0x7d6,pcVar4,uVar5);
LAB_140dcd218:
  if ((uVar1 < param_3) || (param_3 == 0)) {
    pIVar3 = theInstance();
    pcVar4 = (char *)(*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_FAMILY_ARENIC_UP");
    FUN_140dc3f90(param_2,0x7e6,pcVar4,(ulonglong)uVar1);
  }
  return;
}




void FUN_140dcd260(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  puStack_80 = *(undefined8 **)(param_1 + 0xa0);
  if (*(undefined8 **)(param_1 + 0xa8) < puStack_80) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_1 + 0x88);
  local_88 = plVar4;
  while( true ) {
    puVar1 = *(undefined8 **)(param_1 + 0xa8);
    if (puVar1 < *(undefined8 **)(param_1 + 0xa0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    if (puStack_80 == puVar1) break;
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
    puVar1 = (undefined8 *)*puStack_80;
    if (puVar1 == (undefined8 *)0x0) {
      local_68 = local_88;
      puStack_60 = puStack_80;
      puVar1 = FUN_140dcb200((undefined8 *)(param_1 + 0x88),local_48,(longlong)&local_68);
      plVar4 = (longlong *)*puVar1;
      puStack_80 = (undefined8 *)puVar1[1];
      local_88 = plVar4;
    }
    else if ((iVar6 < 0x97) && (uVar2 = FUN_140dc5700((longlong)puVar1,4), 0 < (int)uVar2)) {
      FUN_140dc59c0((longlong)puVar1,iVar6);
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
      puVar3 = FUN_140dcb200((undefined8 *)(param_1 + 0x88),local_38,(longlong)&local_58);
      plVar4 = (longlong *)*puVar3;
      puStack_80 = (undefined8 *)puVar3[1];
      uVar2 = FUN_140dc5700((longlong)puVar1,3);
      local_res10[0] = (uint)uVar2;
      FUN_140dcc3d0((longlong *)(param_1 + 8),local_res10);
      FUN_140dc5660((longlong)puVar1);
      FUN_140dc5500(puVar1);
      local_88 = plVar4;
    }
  }
  return;
}




void FUN_140dcd480(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  puStack_80 = *(undefined8 **)(param_1 + 0xd0);
  if (*(undefined8 **)(param_1 + 0xd8) < puStack_80) {
    _invalid_parameter_noinfo();
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  local_88 = plVar4;
  while( true ) {
    puVar1 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar1 < *(undefined8 **)(param_1 + 0xd0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 0xb8))) {
      _invalid_parameter_noinfo();
    }
    if (puStack_80 == puVar1) break;
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
    puVar1 = (undefined8 *)*puStack_80;
    if (puVar1 == (undefined8 *)0x0) {
      local_68 = local_88;
      puStack_60 = puStack_80;
      puVar1 = FUN_140dcb200((undefined8 *)(param_1 + 0xb8),local_48,(longlong)&local_68);
      plVar4 = (longlong *)*puVar1;
      puStack_80 = (undefined8 *)puVar1[1];
      local_88 = plVar4;
    }
    else if ((iVar6 < 0xb) && (uVar2 = FUN_140dc5700((longlong)puVar1,4), 0 < (int)uVar2)) {
      FUN_140dc59c0((longlong)puVar1,iVar6);
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
      puVar3 = FUN_140dcb200((undefined8 *)(param_1 + 0xb8),local_38,(longlong)&local_58);
      plVar4 = (longlong *)*puVar3;
      puStack_80 = (undefined8 *)puVar3[1];
      uVar2 = FUN_140dc5700((longlong)puVar1,3);
      local_res10[0] = (uint)uVar2;
      FUN_140dcc3d0((longlong *)(param_1 + 0x48),local_res10);
      FUN_140dc5660((longlong)puVar1);
      FUN_140dc5500(puVar1);
      local_88 = plVar4;
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140dcd690(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  char *_Source;
  undefined8 uVar2;
  undefined1 auStack_4c8 [48];
  undefined4 local_498;
  undefined4 local_494;
  undefined8 local_490;
  CMsg local_488 [1040];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined1 local_4c;
  char local_4b [15];
  undefined1 local_3c;
  ulonglong local_38;
  
  local_490 = 0xfffffffffffffffe;
  local_38 = DAT_140df1540 ^ (ulonglong)auStack_4c8;
  local_498 = param_3;
  local_494 = param_2;
  if (param_4 == 0) {
    log_InlineLogERROR("CFamilyRankMgr::ShowFamilyInfo, found NULL arenic user(%u)");
  }
  else {
    local_50 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1a0))();
    if (local_50 != 0) {
      local_78 = FUN_140dcd0d0(param_1,local_50);
      _Source = (char *)(**(code **)(**(longlong **)(param_1 + 0x168) + 0x1a8))(*(longlong **)(param_1 + 0x168),local_50);
      strncpy(local_4b,_Source,0x10);
      local_3c = 0;
      local_58 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),local_50);
      local_6c = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1e0))(*(longlong **)(param_1 + 0x168),local_50);
      local_70 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1d0))(*(longlong **)(param_1 + 0x168),local_50);
      local_64 = FUN_140dc49d0(param_4);
      local_68 = FUN_140dc49c0(param_4);
      uVar2 = FUN_140dc0870(param_3);
      local_74 = (undefined4)uVar2;
      local_5c = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x270))(*(longlong **)(param_1 + 0x168),param_2);
      local_60 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x268))(*(longlong **)(param_1 + 0x168),param_2);
      local_54 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1c0))(*(longlong **)(param_1 + 0x168),local_50);
      uVar1 = FUN_140db4560();
      local_4c = (undefined1)uVar1;
      FUN_140dd3c20(local_488);
      uVar2 = FUN_140dd3cd0((longlong)local_488,&local_78);
      if ((char)uVar2 == '\0') {
        FUN_140dd3c70((undefined8 *)local_488);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))(*(longlong **)(param_1 + 0x168),param_2,local_488);
        FUN_140dd3c70((undefined8 *)local_488);
      }
    }
  }
  return;
}




longlong * FUN_140dcd890(longlong *param_1,longlong *param_2)

{
  FUN_140dcc350(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140dcd8b0(undefined8 *param_1)

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
  lVar2 = FUN_140dc7f50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dcd930(longlong *param_1,undefined8 *param_2)

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
  FUN_140dcc800(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_140dcd9e0(undefined8 *param_1)

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
  lVar2 = FUN_140dc7fb0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140dcda60(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140dcc9b0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_140dcdac0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = CFamilyRankMgr::vftable;
  FUN_140dcd8b0(param_1 + 1);
  FUN_140dcd8b0(param_1 + 9);
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x11);
    plVar2 = plVar1;
  }
  param_1[0x11] = plVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x17);
    plVar3 = plVar2;
  }
  param_1[0x17] = plVar3;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_140dcd9e0(param_1 + 0x1d);
  FUN_140dcd9e0(param_1 + 0x25);
  param_1[0x2d] = 0;
  return param_1;
}




undefined8 * FUN_140dcdba0(undefined8 *param_1,uint param_2)

{
  FUN_140dccb40(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140dcdbd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) & 0xfffffffffffffff8U) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xa8);
    if (plVar1 < *(longlong **)(param_1 + 0xa0)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (*(longlong **)(param_1 + 0xa8) < plVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    FUN_140dcc9b0(plVar2,plVar1,(longlong)plVar1 - (longlong)plVar2 >> 3,0);
    FUN_140dcd260(param_1);
  }
  return;
}




void FUN_140dcdc90(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xd8) - *(longlong *)(param_1 + 0xd0) & 0xfffffffffffffff8U) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xd8);
    if (plVar1 < *(longlong **)(param_1 + 0xd0)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(param_1 + 0xd0);
    lVar3 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong **)(param_1 + 0xd8) < plVar2) {
      _invalid_parameter_noinfo();
    }
    if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0xb8))) {
      _invalid_parameter_noinfo();
    }
    FUN_140dcc9b0(plVar2,plVar1,(longlong)plVar1 - (longlong)plVar2 >> 3,0);
    FUN_140dcd480(param_1);
  }
  return;
}




undefined8 FUN_140dcdd50(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *local_res8;
  uint local_38 [2];
  undefined8 *local_30;
  longlong local_28 [4];
  
  puVar1 = FUN_140dc5de0(*(undefined8 *)(param_1 + 0x168));
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  local_res8 = puVar1;
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,"cq_arenic");
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140dc5eb0((longlong)puVar1,plVar2,param_2);
    if ((char)uVar3 != '\0') {
      local_38[0] = param_2[2];
      local_30 = puVar1;
      FUN_140dcabc0((longlong *)(param_1 + 8),local_28,local_38);
      uVar3 = FUN_140dcd930((longlong *)(param_1 + 0x88),&local_res8);
      return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    (**(code **)*plVar2)(plVar2,1);
  }
  uVar4 = FUN_140dc5500(puVar1);
  return uVar4 & 0xffffffffffffff00;
}




void FUN_140dcde30(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_48 [2];
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  puVar5 = (undefined8 *)*puVar2;
  plVar3 = *(longlong **)(param_1 + 0x48);
  local_48[0] = plVar3;
  do {
    while( true ) {
      while( true ) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar5 == puVar2) {
          plVar3 = (longlong *)(param_1 + 0x48);
          FUN_140dc8660((longlong)plVar3);
          FUN_140dcb290((longlong *)(param_1 + 0xb8));
          plVar1 = (longlong *)(param_1 + 8);
          if (plVar3 != plVar1) {
            puStack_30 = *(undefined8 **)(param_1 + 0x78);
            local_38 = *plVar3;
            uStack_20 = *puStack_30;
            local_28 = local_38;
            FUN_140dcb460(plVar3,(longlong *)local_48,&local_28,&local_38);
            FUN_140dc9b20((longlong)plVar3,(longlong)plVar1);
          }
          FUN_140dcc510((longlong *)(param_1 + 0xb8),(longlong *)(param_1 + 0x88));
          FUN_140dc8660((longlong)plVar1);
          FUN_140dcb290((longlong *)(param_1 + 0x88));
          FUN_140dcdc90(param_1);
          return;
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar3;
        }
        if (puVar5 == *(undefined8 **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar6 = (undefined8 *)puVar5[4];
        if (puVar6 != (undefined8 *)0x0) {
          FUN_140dc5660((longlong)puVar6);
          FUN_140dc5500(puVar6);
        }
        if (plVar3 == (longlong *)0x0) {
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




void FUN_140dce020(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res10 [2];
  uint local_res18;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  undefined8 *puStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  undefined8 *puStack_b0;
  longlong *local_a8;
  longlong *local_98;
  longlong *local_88;
  longlong *local_78;
  undefined8 *puStack_70;
  longlong *local_68;
  undefined8 local_58;
  longlong *local_48;
  longlong *plStack_40;
  
  local_58 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  puVar5 = (undefined8 *)FUN_140dcbda0(param_1,param_2);
  if (puVar5 != (undefined8 *)0x0) {
    uVar4 = FUN_140dc59b0((longlong)puVar5);
    plVar6 = *(longlong **)(param_1 + 0xa0);
    local_e8 = (longlong *)0x0;
    local_res18 = uVar4;
    if (*(longlong **)(param_1 + 0xa8) < plVar6) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x88);
    local_e8 = plVar1;
    while( true ) {
      plVar2 = *(longlong **)(param_1 + 0xa8);
      local_68 = (longlong *)0x0;
      plStack_e0 = plVar6;
      if (plVar2 < *(longlong **)(param_1 + 0xa0)) {
        _invalid_parameter_noinfo();
      }
      local_68 = *(longlong **)(param_1 + 0x88);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != local_68)) {
        _invalid_parameter_noinfo();
      }
      if (plVar6 == plVar2) goto LAB_140dce175;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      if (puVar5 == (undefined8 *)*plVar6) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      plVar6 = plVar6 + 1;
    }
    local_48 = local_e8;
    plStack_40 = plStack_e0;
    FUN_140dcb200((undefined8 *)(param_1 + 0x88),&local_c8,(longlong)&local_48);
LAB_140dce175:
    FUN_140dcb130((longlong *)(param_1 + 8),(longlong *)&local_d8,local_res10);
    puVar7 = *(undefined8 **)(param_1 + 0x38);
    local_a8 = *(longlong **)(param_1 + 8);
    if ((local_d8 == (longlong *)0x0) || (local_d8 != local_a8)) {
      _invalid_parameter_noinfo();
    }
    if (puStack_d0 != puVar7) {
      local_78 = local_d8;
      puStack_70 = puStack_d0;
      FUN_140dcad70((undefined8 *)(param_1 + 8),&local_c8,(longlong *)&local_78);
    }
    FUN_140dc5660((longlong)puVar5);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_140dc5500(puVar5);
    }
    if ((uVar4 != 0) && (uVar4 < 0x97)) {
      FUN_140dcdbd0(param_1);
    }
  }
  lVar8 = 0;
  FUN_140dcb130((longlong *)(param_1 + 0x48),(longlong *)&local_e8,local_res10);
  plVar1 = local_e8;
  plVar6 = *(longlong **)(param_1 + 0x78);
  local_98 = *(longlong **)(param_1 + 0x48);
  if ((local_e8 == (longlong *)0x0) || (local_e8 != local_98)) {
    _invalid_parameter_noinfo();
  }
  plVar2 = plStack_e0;
  if (plStack_e0 != plVar6) {
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = lVar8;
    }
    else {
      lVar9 = *plVar1;
    }
    if (plVar2 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar5 = (undefined8 *)plVar2[4];
    if (puVar5 != (undefined8 *)0x0) {
      plVar6 = (longlong *)(param_1 + 0xb8);
      puVar7 = *(undefined8 **)(param_1 + 0xd0);
      local_d8 = (longlong *)0x0;
      if (*(undefined8 **)(param_1 + 0xd8) < puVar7) {
        _invalid_parameter_noinfo();
      }
      plVar1 = (longlong *)*plVar6;
      local_d8 = plVar1;
      while( true ) {
        puVar3 = *(undefined8 **)(param_1 + 0xd8);
        local_88 = (longlong *)0x0;
        puStack_d0 = puVar7;
        if (puVar3 < *(undefined8 **)(param_1 + 0xd0)) {
          _invalid_parameter_noinfo();
        }
        local_88 = (longlong *)*plVar6;
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_88)) {
          _invalid_parameter_noinfo();
        }
        if (puVar7 == puVar3) goto LAB_140dce38d;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(undefined8 **)(lVar9 + 0x20) <= puVar7) {
          _invalid_parameter_noinfo();
        }
        if (puVar5 == (undefined8 *)*puVar7) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar9 = lVar8;
        }
        else {
          lVar9 = *plVar1;
        }
        if (*(undefined8 **)(lVar9 + 0x20) <= puVar7) {
          _invalid_parameter_noinfo();
        }
        puVar7 = puVar7 + 1;
      }
      local_b8 = local_d8;
      puStack_b0 = puStack_d0;
      FUN_140dcb200(plVar6,&local_c8,(longlong)&local_b8);
LAB_140dce38d:
      FUN_140dc5660((longlong)puVar5);
      if (puVar5 != (undefined8 *)0x0) {
        FUN_140dc5500(puVar5);
      }
    }
    local_c8 = local_e8;
    plStack_c0 = plStack_e0;
    FUN_140dcad70((undefined8 *)(param_1 + 0x48),&local_b8,(longlong *)&local_c8);
    FUN_140dcdc90(param_1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dce3f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong extraout_RAX_00;
  longlong *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong extraout_RAX_01;
  longlong *plVar14;
  undefined4 *puVar15;
  longlong lVar16;
  char *pcVar17;
  undefined1 uVar18;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  int local_4b8;
  uint local_4b4;
  uint local_4b0 [2];
  undefined8 *local_4a8;
  longlong local_4a0;
  longlong *local_498;
  longlong *local_490;
  longlong *local_488;
  uint local_480 [2];
  undefined8 *local_478;
  uint local_470 [2];
  undefined8 *local_468;
  undefined8 local_460;
  longlong local_458 [4];
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_460 = 0xfffffffffffffffe;
  local_38 = DAT_140df1540 ^ (ulonglong)auStack_4e8;
  local_4a0 = param_1;
  if (param_2 == 0) {
    local_4c8 = 0x3f;
    log_InlineLogERROR(&DAT_140ddd548);
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 0x168) = param_2;
    plVar8 = (longlong *)InstanceGet();
    local_498 = plVar8;
    _snprintf(local_438,0x400,
              "SELECT cq_arenic.*, family.family_name FROM cq_arenic LEFT JOIN family ON cq_arenic.user_id = family.id WHERE cq_arenic.type = %d");
    local_39 = 0;
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,local_438,2);
    local_490 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      local_4c8 = 0x4e;
      log_InlineLogERROR(&DAT_140ddd548);
      uVar7 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      local_4b4 = tq::DateStamp(0);
      local_4b0[0] = tq::DateStampPass(local_4b4,-1);
      FUN_140dc8660(param_1 + 8);
      FUN_140dc8660(param_1 + 0x48);
      FUN_140dcb290((longlong *)(param_1 + 0x88));
      FUN_140dcb290((longlong *)(param_1 + 0xb8));
      local_4b8 = 0;
      while( true ) {
        iVar1 = local_4b8;
        iVar2 = (**(code **)(*plVar8 + 0x40))(plVar8);
        uVar18 = iVar1 == iVar2;
        if (iVar2 <= iVar1) break;
        (**(code **)(*plVar8 + 0x30))(plVar8,(longlong)iVar1);
        plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,10);
        pcVar10 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
        lVar16 = 1;
        pcVar17 = "";
        do {
          if (lVar16 == 0) break;
          lVar16 = lVar16 + -1;
          uVar18 = *pcVar10 == *pcVar17;
          pcVar10 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
        } while ((bool)uVar18);
        if ((bool)uVar18) {
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8);
          local_488 = plVar9;
          if (plVar9 == (longlong *)0x0) {
            local_4c8 = 0x61;
            log_InlineLogERROR(&DAT_140ddd548);
          }
          else {
            (**(code **)(*plVar9 + 0x40))(plVar9,0);
            (**(code **)*plVar9)(plVar9,1);
            local_488 = (longlong *)0x0;
          }
        }
        else {
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,3);
          uVar3 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,2);
          uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
          puVar11 = FUN_140dc5de0(*(undefined8 *)(param_1 + 0x168));
          local_4a8 = puVar11;
          if (puVar11 == (undefined8 *)0x0) {
            log_InlineLogERROR("CFamilyRankMgr::Init, failed in allocating memory for CFamilyData");
          }
          else {
            plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,10);
            puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0x78))(plVar9);
            uVar13 = FUN_140dc5520((longlong)puVar11,plVar8,puVar12);
            if ((char)uVar13 == '\0') {
              log_InlineLogERROR("CFamilyRankMgr::Init, failed in creating CFamilyData");
              FUN_140dc5500(puVar11);
            }
            else if (local_4b4 == uVar4) {
              local_470[0] = uVar3;
              local_468 = puVar11;
              FUN_140dcabc0((longlong *)(param_1 + 8),local_458,local_470);
              FUN_140dcd930((longlong *)(param_1 + 0x88),&local_4a8);
            }
            else if (local_4b0[0] == uVar4) {
              local_480[0] = uVar3;
              local_478 = puVar11;
              FUN_140dcabc0((longlong *)(param_1 + 0x48),local_458,local_480);
              FUN_140dcd930((longlong *)(param_1 + 0xb8),&local_4a8);
            }
            else {
              FUN_140dc5660((longlong)puVar11);
              FUN_140dc5500(puVar11);
            }
          }
        }
        local_4b8 = iVar1 + 1;
      }
      (**(code **)*plVar8)(plVar8);
      _snprintf(local_438,0x400,"SELECT * FROM cq_arenic_honor WHERE type = %d");
      local_39 = 0;
      plVar8 = (longlong *)(**(code **)(*local_498 + 0x10))(local_498,local_438,1);
      if (plVar8 == (longlong *)0x0) {
        local_4c8 = 0x92;
        log_InlineLogERROR(&DAT_140ddd548);
        uVar7 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        local_4b8 = 0;
        while (iVar1 = local_4b8, iVar2 = (**(code **)(*plVar8 + 0x40))(plVar8), iVar1 < iVar2) {
          (**(code **)(*plVar8 + 0x30))(plVar8,(longlong)iVar1);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8);
          if (plVar9 == (longlong *)0x0) {
            log_InlineLogERROR("CFamilyRankMgr::Init, found NULL record");
          }
          else {
            plVar14 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,0);
            iVar2 = (**(code **)(*plVar14 + 0x48))(plVar14);
            if (iVar2 < 0x2711) {
              (**(code **)*plVar9)(plVar9,1);
            }
            else {
              plVar14 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,2);
              uVar5 = (**(code **)(*plVar14 + 0x48))(plVar14);
              plVar14 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,3);
              uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14);
              local_4b0[0] = iVar2 - 10000U;
              puVar15 = (undefined4 *)FUN_140dcc650((longlong *)(param_1 + 0xe8),local_4b0);
              *puVar15 = uVar5;
              local_4b4 = iVar2 - 10000U;
              puVar15 = (undefined4 *)FUN_140dcc650((longlong *)(param_1 + 0x128),&local_4b4);
              *puVar15 = uVar6;
              (**(code **)*plVar9)(plVar9,1);
            }
          }
          local_4b8 = iVar1 + 1;
        }
        (**(code **)*plVar8)(plVar8);
        FUN_140dcdbd0(param_1);
        uVar13 = FUN_140dcdc90(param_1);
        uVar7 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      }
    }
  }
  return uVar7;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140dce910(longlong param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *_Source;
  longlong *plVar4;
  ulonglong extraout_RAX;
  uint7 extraout_var;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40;
  int local_38 [3];
  char local_2c [12];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_140df1540 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  lVar3 = FUN_140dcbda0(param_1,param_2);
  if (lVar3 == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
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
    local_20 = 0;
    local_38[2] = param_2;
    _Source = (char *)(**(code **)(**(longlong **)(param_1 + 0x168) + 0x1a8))(*(longlong **)(param_1 + 0x168),param_2);
    strncpy(local_2c,_Source,0x10);
    local_20 = local_20 & 0xffffff;
    local_1c = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),param_2);
    local_38[0] = tq::DateStamp(0);
    local_38[1] = 0;
    local_14 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x200))(*(longlong **)(param_1 + 0x168),param_2);
    local_18 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1f0))(*(longlong **)(param_1 + 0x168),param_2);
    if (0x95 < (ulonglong)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 3)) {
      plVar4 = (longlong *)FUN_140dc9960((longlong *)(param_1 + 0x88));
      if (*plVar4 == 0) {
        log_InlineLogERROR("CFamilyRankMgr::OnDataChange, found last family data is NULL");
        return extraout_RAX & 0xffffffffffffff00;
      }
      bVar1 = FUN_140dc5ac0(*plVar4,(longlong)local_38);
      if (bVar1) {
        return (ulonglong)extraout_var << 8;
      }
    }
    uVar5 = FUN_140dcdd50(param_1,local_38);
    if ((char)uVar5 == '\0') {
      return uVar5;
    }
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),param_2);
    FUN_140dc57f0(lVar3,4,uVar2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x200))(*(longlong **)(param_1 + 0x168),param_2);
    FUN_140dc57f0(lVar3,8,uVar2);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1f0))(*(longlong **)(param_1 + 0x168),param_2);
    uVar5 = FUN_140dc57f0(lVar3,7,uVar2);
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}




void FUN_140dceaf0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar2 = FUN_140dc0a80(param_2);
    uVar3 = FUN_140dc0a80(param_3);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),uVar2);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b0))(*(longlong **)(param_1 + 0x168),uVar3);
    uVar7 = (uint)(iVar5 * 3) / 100;
    iVar5 = iVar5 - uVar7;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b8))(*(longlong **)(param_1 + 0x168),uVar2,uVar7 + iVar4);
    lVar1 = **(longlong **)(param_1 + 0x168);
    iVar4 = (**(code **)(lVar1 + 0x1f0))(*(longlong **)(param_1 + 0x168),uVar2);
    (**(code **)(lVar1 + 0x1f8))(*(undefined8 *)(param_1 + 0x168),uVar2,iVar4 + 1);
    lVar1 = **(longlong **)(param_1 + 0x168);
    iVar4 = (**(code **)(lVar1 + 0x1d0))(*(longlong **)(param_1 + 0x168),uVar2);
    (**(code **)(lVar1 + 0x1d8))(*(undefined8 *)(param_1 + 0x168),uVar2,iVar4 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x1b8))(*(longlong **)(param_1 + 0x168),uVar3,iVar6);
    lVar1 = **(longlong **)(param_1 + 0x168);
    iVar6 = (**(code **)(lVar1 + 0x200))(*(longlong **)(param_1 + 0x168),uVar3);
    (**(code **)(lVar1 + 0x208))(*(undefined8 *)(param_1 + 0x168),uVar3,iVar6 + 1);
    lVar1 = **(longlong **)(param_1 + 0x168);
    iVar6 = (**(code **)(lVar1 + 0x1e0))(*(longlong **)(param_1 + 0x168),uVar3);
    (**(code **)(lVar1 + 0x1e8))(*(undefined8 *)(param_1 + 0x168),uVar3,iVar6 + 1);
    uVar7 = FUN_140dcd0d0(param_1,uVar2);
    uVar8 = FUN_140dcd0d0(param_1,uVar3);
    FUN_140dce910(param_1,uVar2);
    FUN_140dce910(param_1,uVar3);
    FUN_140dcdbd0(param_1);
    FUN_140dcd0f0(param_1,param_2,uVar7);
    FUN_140dcd0f0(param_1,param_3,uVar8);
  }
  return;
}




void FUN_140dced30(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140dced40(void)

{
  return 0;
}




undefined8 FUN_140dced50(void)

{
  return 0;
}




undefined8 FUN_140dced60(void)

{
  return 0;
}




undefined8 FUN_140dced70(void)

{
  return 0;
}




undefined8 * FUN_140dced80(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140dcedc0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140dcede0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0x17);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140dcf4d0(*(longlong *)(param_1 + 0x18),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ushort FUN_140dceec0(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

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
  if (uVar1 < 0x8a4) {
    if (uVar1 == 0x8a3) {
      FUN_140dd35f0(local_418);
      bVar2 = FUN_140dd36f0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd3720((longlong)local_418,param_2,*(longlong **)(param_1 + 0x18),*(longlong **)(param_1 + 0x20));
      }
      FUN_140dd3640((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x3ea) {
      FUN_140dd3dc0(local_418);
      bVar2 = FUN_140dd3e80(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd3eb0(local_418,param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd3e10((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x3eb) {
      FUN_140dd3f20(local_418);
      bVar2 = FUN_140dd3fe0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd4010(local_418,param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd3f70((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
  }
  else {
    if (uVar1 == 0x8a4) {
      FUN_140dd2940(local_418);
      bVar2 = FUN_140dd29c0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd2b10((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd2990((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x8a5) {
      FUN_140dd2c30(local_418);
      bVar2 = FUN_140dd2cb0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd2ec0((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd2c80((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x8a6) {
      FUN_140dd2f80(local_418);
      bVar2 = FUN_140dd3000(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd3170((longlong)local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd2fd0((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x8a7) {
      FUN_140dd3390(local_418);
      bVar2 = FUN_140dd3410(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd3550(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd33e0((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
    if (uVar1 == 0x8a8) {
      FUN_140dd3c20(local_418);
      bVar2 = FUN_140dd3ca0(local_418,(char *)param_3,param_4);
      if (bVar2) {
        FUN_140dd3d20(local_418,(ulonglong)param_2,*(longlong **)(param_1 + 0x18));
      }
      FUN_140dd3c70((undefined8 *)local_418);
      goto LAB_140dcf181;
    }
  }
  log_InlineLogWARNING("FamilyArenic:: Recv fault MsgType:%d");
LAB_140dcf181:
  return *param_3;
}




void FUN_140dcf1b0(longlong param_1)

{
  ulong uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140dcf1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer FamilyArenic module doesn\'t have provider");
    return;
  }
  uVar1 = tq::TimeGet(0);
                    /* WARNING: Could not recover jumptable at 0x000140dcf1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 200))(*(longlong **)(param_1 + 0x18),uVar1);
  return;
}




bool FUN_140dcf1f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140dcfff0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a8,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a7,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a6,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a5,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a4,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x8a3,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0x17,*(undefined8 *)(param_1 + 0x18));
  return cVar1 != '\0';
}




undefined8 FUN_140dcf2e0(void)

{
  return 1;
}




void FUN_140dcf2f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x110))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140dcf320(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140dcf350(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = family_arenic::CModule::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




void FUN_140dcf3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = family_arenic::CModule::vftable;
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x110))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = gs::IModule::vftable;
  return;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0x1f3f0  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x28);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)family_arenic::CModule::vftable;
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uVar3;
    plVar2[3] = 0;
    plVar2[4] = 0;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140dcf1f0((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_140dcf490(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140dcf3a0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140dcf4d0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  puVar1 = FUN_140dbfcc0(param_2);
  *(undefined8 **)(param_1 + 8) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CProvider::Init, can not create m_pFamilyArenicMgr");
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_140dcf550(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dc06f0(*(longlong *)(param_1 + 8));
  return;
}




ulonglong FUN_140dcf5a0(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db8cd0(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




bool FUN_140dcf5f0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  bVar1 = FUN_140db4330(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




bool FUN_140dcf640(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  bVar1 = FUN_140db8980(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




ulonglong FUN_140dcf690(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db88e0(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




undefined8 FUN_140dcf6e0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return 0;
  }
  uVar1 = FUN_140db9100(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




void FUN_140dcf730(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbc7e0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf780(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbfd80(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf7d0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  thunk_FUN_140dbfd80(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf820(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbb1b0(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcf870(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbcd20(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcf8c0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbe570(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf910(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbe6d0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf960(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbb430(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcf9b0(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbd720(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfa00(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db4200(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_140dcfa50(longlong param_1,uint param_2,char param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db4250(*(longlong *)(param_1 + 8),param_2,param_3,'\x01');
  return;
}




void FUN_140dcfaa0(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbb100(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_140dcfaf0(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbe780(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfb40(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbd8c0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfb90(longlong param_1,uint param_2,undefined8 param_3,char *param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db8df0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfbe0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbdaa0(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfc30(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbdb10(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




bool FUN_140dcfc80(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return false;
  }
  bVar1 = FUN_140db8aa0(*(longlong *)(param_1 + 8),param_2);
  return bVar1;
}




ulonglong FUN_140dcfcd0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db8af0(*(longlong *)(param_1 + 8),param_2);
  return uVar1;
}




ulonglong FUN_140dcfd20(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140db8b40(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




void FUN_140dcfd70(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  thunk_FUN_140dbba30(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcfdc0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbc890(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcfe10(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db8e80(*(longlong *)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140dcfe60(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db4500(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcfeb0(longlong param_1,undefined4 param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140db4530(*(longlong *)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_140dcff00(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbba30(*(longlong *)(param_1 + 8),param_2);
  return;
}




void FUN_140dcff50(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  FUN_140dbfa30(*(longlong *)(param_1 + 8),param_2);
  return;
}




undefined8 FUN_140dcffa0(longlong param_1,uint param_2,int param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar1 = FUN_140db9120(*(longlong *)(param_1 + 8),param_2,param_3);
  return uVar1;
}




void FUN_140dcffc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140dcfff0(undefined8 *param_1)

{
  *param_1 = family_arenic::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140dd0010(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = family_arenic::CProvider::vftable;
  if (param_1[1] != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[1] = 0;
  }
  return;
}




undefined8 * FUN_140dd0060(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140dd0010(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140dd00a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




bool FUN_140dd00e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140dd0120(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140dd0230(longlong param_1,longlong *param_2)

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




longlong FUN_140dd0320(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dd0342;
  }
  lVar2 = *plVar1;
LAB_140dd0342:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dd0360(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dd0384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140dd0400(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140dd0432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140dd0540(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140dd0600(longlong param_1,longlong param_2)

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




void FUN_140dd0660(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140dd0680(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dd06a2;
  }
  lVar2 = *plVar1;
LAB_140dd06a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140dd06c0(longlong *param_1)

{
  FUN_140dd0360(param_1);
  return param_1;
}




longlong * FUN_140dd0740(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140dd0360(param_1);
  return param_2;
}




longlong * FUN_140dd0770(longlong *param_1)

{
  FUN_140dd0400(param_1);
  return param_1;
}




void FUN_140dd0790(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dd0790(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140dd07e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140df0180);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140dd0860(longlong *param_1)

{
  FUN_140dd0360(param_1);
  return param_1;
}




longlong FUN_140dd0880(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140dd08a2;
  }
  lVar2 = *plVar1;
LAB_140dd08a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140dd08c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dd08e0(longlong *param_1)

{
  FUN_140dd0400(param_1);
  return param_1;
}




undefined8 * FUN_140dd0900(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140dd0940(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140dd0790(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_140dd09c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




void FUN_140dd0a50(void)

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




undefined8 * FUN_140dd0ab0(undefined8 *param_1)

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




void FUN_140dd0af0(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_140dd0be0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dd0c40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140dd0c80(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_140dd0d60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140dd0a50();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140dd0da0(undefined8 *param_1)

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




void FUN_140dd0df0(longlong *param_1,longlong *param_2,longlong *param_3)

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




longlong * FUN_140dd0f00(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140dd0fd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140dd1010(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140dd10a0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140dd0c80(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_140dd10c0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140df00c8);
  }
  plVar5 = FUN_140dd09c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140dd1400(undefined8 *param_1)

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




bool FUN_140dd1450(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint local_res10 [6];
  longlong local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))();
  if (cVar2 == '\0') {
    return false;
  }
  FUN_140dd0f00((longlong *)(param_1 + 8),&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  return local_10 != lVar1;
}




longlong * FUN_140dd14c0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140dd161d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140dd164c;
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
      goto LAB_140dd161d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140dd10c0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140dd164c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140dd1670(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140df01e0);
  }
  FUN_140dd0360(param_3);
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
        goto LAB_140dd185c;
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
LAB_140dd185c:
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
            FUN_140dd0600((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dd0230((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140dd0600((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140dd0230((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140dd0600((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140dd0230((longlong)param_1,plVar7);
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




longlong * FUN_140dd1a30(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140dd1b00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140dd1b20(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140dd0940((longlong)param_1);
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
    FUN_140dd1670(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140dd1cd0(longlong *param_1)

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
  FUN_140dd1b20(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140dd1d40(undefined8 *param_1)

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




void FUN_140dd1d90(longlong param_1,uint param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint local_res10 [2];
  char local_res18;
  char local_res20;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48 [2];
  
  local_68 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    plVar1 = (longlong *)(param_1 + 8);
    FUN_140dd1a30(plVar1,(longlong *)&local_58,local_res10);
    plVar2 = local_58;
    local_78 = *(longlong **)(param_1 + 0x38);
    lVar4 = 0;
    local_48[0] = (longlong *)*plVar1;
    if ((local_58 == (longlong *)0x0) || (local_58 != local_48[0])) {
      _invalid_parameter_noinfo();
    }
    plVar3 = plStack_50;
    if (plStack_50 != local_78) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))(*(longlong **)(param_1 + 0x48),param_2,1);
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar4 = *plVar2;
      }
      if (plVar3 == *(longlong **)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar4 = FUN_140dbbd00(*(longlong *)(param_1 + 0x50),*(uint *)((longlong)plVar3 + 0x24));
      if (lVar4 == 0) {
        FUN_140dd1670(plVar1,local_48,(longlong *)&local_58);
        log_InlineLogERROR("CWitnessMgr::OnExitWitness, not found match, witness(%u), arenic map(%u)");
      }
      else {
        local_78 = local_58;
        plStack_70 = plStack_50;
        FUN_140dd1670(plVar1,local_48,(longlong *)&local_78);
        FUN_140db3a20(lVar4,param_2,param_3,param_4);
      }
    }
  }
  return;
}




void FUN_140dd1f50(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  local_res10[0] = param_2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))();
  if (cVar1 != '\0') {
    FUN_140dd1a30((longlong *)(param_1 + 8),(longlong *)&local_50,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = 0;
    local_40 = *(longlong **)(param_1 + 8);
    if ((local_50 == (longlong *)0x0) || (local_50 != local_40)) {
      _invalid_parameter_noinfo();
    }
    if (local_48 != lVar2) {
      if (local_50 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar3 = *local_50;
      }
      if (local_48 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar2 = FUN_140dbbd00(*(longlong *)(param_1 + 0x50),*(uint *)(local_48 + 0x24));
      if (lVar2 == 0) {
        log_InlineLogERROR("CWitnessMgr::OnWitnessCheer, not found match, witness(%u), arenic map(%u)");
      }
      else {
        FUN_140db3f00(lVar2,param_2,param_3);
      }
    }
  }
  return;
}




void FUN_140dd2050(longlong *param_1)

{
  FUN_140dd1cd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140dd2080(longlong *param_1,uint *param_2)

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
  
  FUN_140dd0c80(param_1,&local_38,param_2);
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
  FUN_140dd1b20(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_140dd21c0(undefined8 *param_1)

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




void FUN_140dd2210(longlong *param_1)

{
  FUN_140dd1cd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140dd2240(undefined8 *param_1)

{
  *param_1 = CWitnessMgr::vftable;
  FUN_140dd1cd0(param_1 + 1);
  operator_delete((void *)param_1[1]);
  return;
}




void FUN_140dd2280(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  IStringManager *pIVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else {
    uVar3 = FUN_140db88e0(*(longlong *)(param_1 + 0x50),param_2);
    if ((char)uVar3 == '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))(*(longlong **)(param_1 + 0x48),param_2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x180))(*(longlong **)(param_1 + 0x48),param_2);
        if (cVar1 == '\0') {
          bVar2 = FUN_140dd1450(param_1,param_2);
          if (bVar2) {
            log_InlineLogERROR("CWitnessMgr::OnEnterWitness, witness enter more once, witness: %u");
          }
          else {
            lVar4 = FUN_140dbbda0(*(longlong *)(param_1 + 0x50),param_3);
            if (lVar4 == 0) {
              pIVar5 = theInstance();
              lVar4 = **(longlong **)(param_1 + 0x48);
              uVar6 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_ARENIC_NOT_BATTLE_TO_WITNESS");
              (**(code **)(lVar4 + 0x28))(*(undefined8 *)(param_1 + 0x48),param_2,uVar6);
            }
            else {
              local_40 = 0;
              local_38 = FUN_140db13e0(lVar4);
              local_40 = param_2;
              local_3c = param_3;
              (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))(*(longlong **)(param_1 + 0x48),param_2,0);
              local_24 = local_40;
              local_20 = local_3c;
              local_1c = local_38;
              local_28 = param_2;
              FUN_140dd14c0((longlong *)(param_1 + 8),(longlong *)&local_40,&local_28);
              cVar1 = FUN_140db3c00(lVar4,param_2,param_3);
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0xd0))(*(longlong **)(param_1 + 0x48),param_2,1);
                FUN_140dd2080((longlong *)(param_1 + 8),local_res10);
              }
            }
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_140dd2460(undefined8 *param_1)

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
  lVar2 = FUN_140dd0a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dd24e0(undefined8 *param_1,uint param_2)

{
  *param_1 = CWitnessMgr::vftable;
  FUN_140dd1cd0(param_1 + 1);
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140dd2550(undefined8 *param_1)

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
  lVar2 = FUN_140dd0a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140dd25d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = CWitnessMgr::vftable;
  FUN_140dd2550(param_1 + 1);
  param_1[9] = param_2;
  param_1[10] = param_3;
  return param_1;
}




undefined8 * FUN_140dd2630(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = CWitnessMgr::vftable;
    FUN_140dd2550(puVar1 + 1);
    puVar1[9] = param_1;
    puVar1[10] = param_2;
  }
  return puVar1;
}




CMsg * FUN_140dd26a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140dd26d0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140dd26f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd26f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140dd2700(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd2707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140dd2710(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140dd2717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140dd2720(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd2750(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgAction::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x31),0x3d7);
  return param_1;
}




void FUN_140dd27d0(undefined8 *param_1)

{
  *param_1 = CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140dd2810(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulong uVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x2a;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0xc) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_140dd28b0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x271a;
}




undefined8 * FUN_140dd28e0(undefined8 *param_1,uint param_2)

{
  *param_1 = CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd2940(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenic::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd2990(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd29c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a4;
}




undefined8 FUN_140dd29f0(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x30;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a4;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 4) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8 FUN_140dd2a30(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x30;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




undefined8
FUN_140dd2a70(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined8 *param_5,undefined4 param_6,undefined4 param_7,
             undefined4 param_8,undefined4 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x30;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_9;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0x10) = *param_5;
  uVar2 = param_5[1];
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_140dd2b10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  sVar1 = *(short *)(lVar2 + 4);
  if (sVar1 == 0) {
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  else {
    if (sVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140dd2bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x38))(param_3);
      return;
    }
    if (sVar1 == 3) {
      if (*(int *)(lVar2 + 8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140dd2ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x48))(param_3);
        return;
      }
      if (*(int *)(lVar2 + 8) == 2) {
                    /* WARNING: Could not recover jumptable at 0x000140dd2bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x40))(param_3);
        return;
      }
    }
    else {
      if (sVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x000140dd2b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x58))(param_3,param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        return;
      }
      if (sVar1 == 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000140dd2b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x50))(param_3);
        return;
      }
    }
  }
  return;
}




undefined8 * FUN_140dd2be0(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenic::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd2c30(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenicRacing::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd2c80(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd2cb0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a5;
}




undefined8 FUN_140dd2d20(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  **(undefined2 **)(param_1 + 0x408) = 0x6c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a5;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_6;
  return CONCAT71((uint7)(uint3)((uint)param_6 >> 8),1);
}




ulonglong FUN_140dd2d90(longlong param_1,void *param_2,void *param_3)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  void *pvVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x50) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x50;
  memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0x1c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x18) * 0x50),param_2,0x28);
  pvVar3 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0x44 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x18) * 0x50),param_3,0x28);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0x18);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}




undefined4 FUN_140dd2ea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18);
}




void FUN_140dd2ec0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(short *)(lVar1 + 0x14) == 0) {
    (**(code **)(*param_3 + 0x60))(param_3,param_2,*(undefined4 *)(lVar1 + 4),*(undefined4 *)(lVar1 + 8));
  }
  return;
}




void FUN_140dd2f20(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2;
  return;
}




undefined8 * FUN_140dd2f30(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenicRacing::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd2f80(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenicRank::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd2fd0(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd3000(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a6;
}




undefined8 FUN_140dd3030(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a6;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 6) = param_3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140dd3070(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar4;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x18) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar2 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x18;
  lVar3 = *(longlong *)(param_1 + 0x408);
  uVar4 = (ulonglong)*(uint *)(lVar3 + 8);
  *(undefined4 *)(lVar3 + 0xc + uVar4 * 0x18) = *param_2;
  *(undefined4 *)(lVar3 + 0x10 + uVar4 * 0x18) = param_2[1];
  *(undefined4 *)(lVar3 + 0x14 + uVar4 * 0x18) = param_2[2];
  *(undefined4 *)(lVar3 + 0x18 + uVar4 * 0x18) = param_2[3];
  *(undefined4 *)(lVar3 + 0x1c + uVar4 * 0x18) = param_2[4];
  *(undefined4 *)(lVar3 + 0x20 + uVar4 * 0x18) = param_2[5];
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined4 FUN_140dd3150(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8);
}




void FUN_140dd3170(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd31c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x70))(param_3,param_2,*(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4));
  return;
}




undefined8 * FUN_140dd31d0(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenicRank::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd3220(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenicScore::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd3270(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd32a0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a9;
}




undefined8 FUN_140dd32d0(longlong param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x54;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a9;
  memcpy((void *)(*(longlong *)(param_1 + 0x408) + 4),param_2,0x28);
  pvVar1 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 0x2c),param_3,0x28);
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}




undefined8 * FUN_140dd3340(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenicScore::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd3390(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenicTopTen::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd33e0(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd3410(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a7;
}




undefined8 FUN_140dd3440(longlong param_1)

{
  longlong lVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 8;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x8a7;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140dd3470(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  
  puVar3 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar3 + 0x10) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (puVar3 == (ushort *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *puVar3 = *puVar3 + 0x10;
  lVar4 = *(longlong *)(param_1 + 0x408);
  uVar2 = *(uint *)(lVar4 + 4);
  *(undefined8 *)(lVar4 + 8 + (ulonglong)uVar2 * 0x10) = *param_2;
  *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar2 * 0x10) = param_2[1];
  lVar4 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar4 + 4);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}




undefined4 FUN_140dd3530(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4);
}




void FUN_140dd3550(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd3592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x68))(param_3);
  return;
}




undefined8 * FUN_140dd35a0(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenicTopTen::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd35f0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyArenicWitness::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd3640(undefined8 *param_1)

{
  *param_1 = CMsgFamilyArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140dd3670(CMsg *param_1,undefined2 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x36;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 6) = 2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_140dd36f0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a3;
}




void FUN_140dd3720(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  char cVar3;
  IStringManager *pIVar4;
  undefined8 uVar5;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if (param_4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
  }
  else if ((*(int *)(*(longlong *)(param_1 + 0x408) + 6) == 2) || (*(short *)(*(longlong *)(param_1 + 0x408) + 4) != 0)) {
    cVar3 = (**(code **)(*param_4 + 0x70))(param_4);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*param_4 + 0xa8))(param_4,param_2);
      if (cVar3 == '\0') {
        pIVar4 = theInstance();
        lVar2 = *param_4;
        uVar5 = (*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_DIE");
        (**(code **)(lVar2 + 0x28))(param_4,param_2,uVar5);
      }
      else {
        cVar3 = (**(code **)(*param_4 + 0x98))(param_4,param_2);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_4 + 0x138))(param_4,param_2);
          if (cVar3 == '\0') {
            lVar2 = *(longlong *)(param_1 + 0x408);
            sVar1 = *(short *)(lVar2 + 4);
            if (sVar1 == 0) {
              (**(code **)(*param_3 + 0x80))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
            }
            else if (sVar1 == 1) {
              (**(code **)(*param_3 + 0x88))(param_3,param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
            }
            else if (sVar1 == 4) {
              (**(code **)(*param_3 + 0x90))(param_3,param_2,*(undefined4 *)(lVar2 + 10));
            }
            else {
              log_InlineLogERROR("CMsgFamilyArenicWitness::Process invalid action:%d");
            }
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140dd38b0(longlong param_1,uint param_2,char *param_3)

{
  int *piVar1;
  short sVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong extraout_RAX;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140df1540 ^ (ulonglong)auStack_68;
  puVar3 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar3 + 0x24) {
    local_48 = 0x75;
    log_InlineLogERROR(&DAT_140ddd548);
    return extraout_RAX & 0xffffffffffffff00;
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




undefined8 FUN_140dd3a00(CMsg *param_1,undefined2 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a3;
  **(undefined2 **)(param_1 + 0x408) = 0x5a;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 10) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x12) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_6;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 6) = 2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_140dd3aa0(CMsg *param_1,undefined2 param_2,char *param_3,char *param_4)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  ulonglong extraout_RAX_00;
  
  if (param_3 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_4 == (char *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
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
    *(undefined4 *)(lVar1 + 6) = 2;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140dd3bd0(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyArenicWitness::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd3c20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = CMsgFamilyAthlete::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd3c70(undefined8 *param_1)

{
  *param_1 = CMsgFamilyAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd3ca0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x8a8;
}




undefined8 FUN_140dd3cd0(longlong param_1,void *param_2)

{
  void *pvVar1;
  
  **(undefined2 **)(param_1 + 0x408) = 0x44;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x8a8;
  pvVar1 = memcpy((void *)(*(longlong *)(param_1 + 0x408) + 4),param_2,0x40);
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),1);
}




void FUN_140dd3d20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140ddd548);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dd3d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x78))(param_3);
  return;
}




undefined8 * FUN_140dd3d70(undefined8 *param_1,byte param_2)

{
  *param_1 = CMsgFamilyAthlete::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd3dc0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = family_arenic::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd3e10(undefined8 *param_1)

{
  *param_1 = family_arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd3e80(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_140dd3eb0(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x18))(param_3);
  }
  return;
}




undefined8 * FUN_140dd3ed0(undefined8 *param_1,byte param_2)

{
  *param_1 = family_arenic::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140dd3f20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = family_arenic::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140dd3f70(undefined8 *param_1)

{
  *param_1 = family_arenic::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140dd3fe0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_140dd4010(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x20))(param_3);
  }
  return;
}




undefined8 * FUN_140dd4030(undefined8 *param_1,byte param_2)

{
  *param_1 = family_arenic::CMsgLogout::vftable;
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
  if ((_StackCookie == DAT_140df1540) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_140dd42a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




/* Library Function - Single Match
    _onexit
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  undefined8 uVar2;
  longlong local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = _decode_pointer(DAT_140df1b30);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140df1b30);
    local_res18[0] = _decode_pointer(DAT_140df1b28);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140df1b30 = _encode_pointer(local_res10);
    DAT_140df1b28 = _encode_pointer(local_res18[0]);
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




bool FUN_140dd4420(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140df1b28 = _encode_pointer(puVar1);
  DAT_140df1b30 = DAT_140df1b28;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140dd4a98();
    atexit(FUN_140dd4ad0);
    atexit((_func_5014 *)&LAB_140dd4a8c);
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
    if (DAT_140df158c < 1) {
      return 0;
    }
    DAT_140df158c = DAT_140df158c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140df1b18 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140df1b18;
        pvVar3 = DAT_140df1b18;
      }
      DAT_140df1b18 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140dd44fa;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140dd44fa:
    if (DAT_140df1b10 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140df1b30);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140df1b28);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140df1b30);
            plVar12 = (longlong *)_decode_pointer(DAT_140df1b28);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140df1b28 = _encoded_null();
        DAT_140df1b30 = DAT_140df1b28;
      }
      DAT_140df1b10 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140df1b18 = (void *)0x0;
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
      bVar13 = DAT_140df1b18 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140df1b18;
        pvVar3 = DAT_140df1b18;
      }
      DAT_140df1b18 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140dd4623;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140dd4623:
    if (DAT_140df1b10 == 0) {
      DAT_140df1b10 = 1;
      iVar4 = _initterm_e(&DAT_140ddd298,&DAT_140ddd2a8);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140ddd288,&DAT_140ddd290);
      DAT_140df1b10 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140df1b18 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140df1b20 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140df1b20), BVar5 != 0)) {
      (*DAT_140df1b20)(param_1,2,param_3);
    }
    DAT_140df158c = DAT_140df158c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140dd479c) */
/* WARNING: Removing unreachable block (ram,0x000140dd4733) */
/* WARNING: Removing unreachable block (ram,0x000140dd47d7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140df158c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140df1550 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140df1550 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140dcf2e0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140dcf2e0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140df1550 = 0xffffffff;
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




undefined8 FUN_140dd4854(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140df1630);
  local_30 = DAT_140df1728;
  local_38 = RtlLookupFunctionEntry(DAT_140df1728,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140df16c8 = local_res8;
    DAT_140df1728 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140df1630,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140df15a0 = DAT_140df1728;
  _DAT_140df16b0 = local_res8[0];
  _DAT_140df1590 = 0xc0000409;
  _DAT_140df1594 = 1;
  local_20 = DAT_140df1540;
  local_18 = DAT_140df1548;
  DAT_140df1628 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140de3ee8);
  if (DAT_140df1628 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140dd4a98(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140de4cf0; puVar1 < &DAT_140de4cf0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140dd4ad0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140de4d00; puVar1 < &DAT_140de4d00; puVar1 = puVar1 + 1) {
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
  if (DAT_140df1540 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140df1540 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140df1540 == 0x2b992ddfa232) {
      DAT_140df1540 = 0x2b992ddfa233;
    }
  }
  DAT_140df1548 = ~DAT_140df1540;
  return;
}




void Unwind_140dd4d20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4d80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4da0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4dc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4de0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4e00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4e20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4e40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4e60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4e80(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4ea0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4ec0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4ee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4f00(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4f20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd4f40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd4f60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd4f80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd4fa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd4fc0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd4fe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5000(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd5020(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5040(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd5060(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd50a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd50c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd50e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5120(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5140(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5160(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5180(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd51a0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd51c0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd51e0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5200(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5220(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5240(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5260(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd5280(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd52a0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_140dd52c0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd52e0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd5300(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd5320(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x50));
  return;
}




void Unwind_140dd5340(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5360(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd5380(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140dd53a0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x80));
  return;
}




void Unwind_140dd53c0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd53f0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140dd5410(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_140dd5430(undefined8 param_1,longlong param_2)

{
  FUN_140db2170(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd5460(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd5490(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd54b0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_140dd54d0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x50));
  return;
}




void Unwind_140dd54f0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x80));
  return;
}




void Unwind_140dd5510(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd5530(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd5550(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd5570(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd5590(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140dd55b0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140dd55d0(undefined8 param_1,longlong param_2)

{
  FUN_140dd3270((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140dd55f0(undefined8 param_1,longlong param_2)

{
  FUN_140dd3640((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_140dd5610(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMatch::ShowWitnessInfo @%s,%d");
  return 0x140db35c2;
}




void Unwind_140dd5650(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5670(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x58));
  return;
}




void Unwind_140dd5690(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x58));
  return;
}




undefined8 Catch_140dd56b0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMatch::ClearWitness @%s,%d");
  return 0x140db389a;
}




void Unwind_140dd56f0(undefined8 param_1,longlong param_2)

{
  FUN_140dd3640((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd5710(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMatch::OnExitWitness, user:%u, fly back: %d @%s,%d");
  return 0x140db3b13;
}




void Unwind_140dd5760(undefined8 param_1,longlong param_2)

{
  FUN_140dd3640((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_140dd5780(undefined8 param_1,longlong param_2)

{
  FUN_140dd3270((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd57a0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMatch::OnEnterWitness, witness:%u, arenic leader:%u @%s,%d");
  return &DAT_140db3ee0;
}




void Unwind_140dd57f0(undefined8 param_1,longlong param_2)

{
  FUN_140dd3640((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd5810(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMatch::OnWitnessCheer @%s,%d");
  return 0x140db4062;
}




void Unwind_140dd5850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd5890(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd58b0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd58d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd58f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd5910(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




undefined8 Catch_140dd5970(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::ProcessStatusEndOut, team leader:%u @%s,%d");
  return 0x140db4318;
}




void Unwind_140dd59b0(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




undefined8 Catch_140dd59d0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnShowYesterdayInfo, idUser:%u @%s,%d");
  return 0x140db451e;
}




undefined8 Catch_140dd5a10(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnShowRankAthletePoint, idUser:%u, page: %u @%s,%d");
  return 0x140db4553;
}




void Unwind_140dd5a60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd5aa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd5ac0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd5ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5b00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5b20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5b40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5b60(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140dd5b80(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd5ba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5bc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5be0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5c00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd5c20(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5c40(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5c60(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5c80(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140dd5ca0(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd5cc0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5ce0(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5d00(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5d20(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5d40(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd5d60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd5d90(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd5db0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd5de0(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd5e00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd5e30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd5e60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd5e90(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5eb0(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5ed0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5ef0(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5f10(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd5f30(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5f50(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140dd5f70(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd5f90(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5fb0(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5fd0(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd5ff0(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6010(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6030(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6050(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140dd6070(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140dd6090(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd60b0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd60d0(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140dd60f0(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140dd6110(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6130(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6150(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6170(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6190(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd61b0(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd61d0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd61f0(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6210(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd6230(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return &DAT_140db7857;
}




undefined8 Catch_140dd6270(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::Create @%s,%d");
  return 0x140db78ae;
}




void Unwind_140dd62b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd62d0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd62f0(undefined8 param_1,longlong param_2)

{
  FUN_140db6460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6310(undefined8 param_1,longlong param_2)

{
  FUN_140db6460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6330(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6350(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6370(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6390(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd63b0(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd63d0(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd63f0(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6410(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6430(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6450(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd64b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd64d0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd64f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd6530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd6550(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd6570(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6590(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd65b0(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd65d0(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd65f0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6610(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6630(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6650(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6670(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6690(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd66b0(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd66d0(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd66f0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::IsAttackAble, user:%u, target user:%u @%s,%d");
  return 0x140db8cb2;
}




undefined8 Catch_140dd6740(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnDie, user:%u @%s,%d");
  return 0x140db8e6a;
}




void Unwind_140dd6780(undefined8 param_1,longlong param_2)

{
  FUN_140dd2c80((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_140dd67a0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnShowCompetingInfo, idUser:%u @%s,%d");
  return 0x140db90ce;
}




void Unwind_140dd67e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd6800(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd6840(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140dd68a0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140dd68c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd68e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd6920(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd6960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd6980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd69a0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd69c0(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140dd69e0(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140dd6a00(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6a20(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6a40(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6a60(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6a80(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6aa0(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6ac0(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6ae0(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6b00(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6b20(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6b40(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6b60(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6b80(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6ba0(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6bc0(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6be0(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6c00(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6c20(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6c40(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6c60(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6c80(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6ca0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6cc0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd6ce0(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6d00(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6d20(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd6d40(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd6d60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd6d90(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_140dd6db0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnWitnessCheer, user:%u, leader:%u @%s,%d");
  return 0x140dbb195;
}




void Unwind_140dd6e00(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dd6e20(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnApply, idUser: %u @%s,%d");
  return 0x140dbb407;
}




undefined8 Catch_140dd6e60(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnContinueAthlete, user: %u @%s,%d");
  return 0x140dbb4a8;
}




undefined * Catch_140dd6ea0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyArenicTeam) @%s,%d");
  return &DAT_140dbb610;
}




undefined8 Catch_140dd6ee0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::ShowScore @%s,%d");
  return 0x140dbba15;
}




undefined8 Catch_140dd6f20(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnShowFamilyInfo, idUser:%u @%s,%d");
  return 0x140dbba90;
}




undefined8 Catch_140dd6f60(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::ProcessSettlement @%s,%d");
  return 0x140dbbce5;
}




undefined * Catch_140dd6fa0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::ChangeTeamLeader, old leader:%u @%s,%d");
  return &DAT_140dbc0a1;
}




void Unwind_140dd6fe0(undefined8 param_1,longlong param_2)

{
  FUN_140dba4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7000(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7020(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7040(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7060(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7080(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_140dd70a0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_140dd70c0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x80));
  return;
}




void Unwind_140dd70e0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7100(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7120(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7140(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7160(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7180(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd71a0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd71c0(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd71e0(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7200(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7220(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7240(undefined8 param_1,longlong param_2)

{
  FUN_140dba4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7260(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd7280(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd72a0(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd72c0(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd72e0(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7300(undefined8 param_1,longlong param_2)

{
  FUN_140dba4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7320(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd7340(undefined8 param_1,longlong param_2)

{
  FUN_140dbc1c0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7360(undefined8 param_1,longlong param_2)

{
  FUN_140dba4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7380(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd73a0(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd73c0(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd73e0(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd7400(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnUserLogin, User id : %d @%s,%d");
  return 0x140dbc867;
}




undefined8 Catch_140dd7440(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTeamDismiss @%s,%d");
  return 0x140dbc8ea;
}




undefined * Catch_140dd7480(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::BeginAthletics @%s,%d");
  return &DAT_140dbca76;
}




undefined8 Catch_140dd74c0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::EndAthletics @%s,%d");
  return 0x140dbcced;
}




undefined8 Catch_140dd7500(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnLeave, user:%u @%s,%d");
  return 0x140dbcdd6;
}




undefined8 Catch_140dd7540(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTeamInviteOK @%s,%d");
  return 0x140dbcec3;
}




void Unwind_140dd7580(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_140dd75a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd75c0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTeamAthleteRefuse @%s,%d");
  return 0x140dbd038;
}




undefined8 Catch_140dd7600(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTeamInviteRefuse @%s,%d");
  return 0x140dbd1ba;
}




void Unwind_140dd7640(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_140dd7660(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd7680(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnFightTimeOut @%s,%d");
  return 0x140dbd35e;
}




undefined8 Catch_140dd76c0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTeamFightEndTimeOut  @%s,%d");
  return 0x140dbd546;
}




undefined8 Catch_140dd7700(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnInviteTimeOut, idLeader:%u @%s,%d");
  return 0x140dbd70c;
}




void Unwind_140dd7740(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd7760(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd7780(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnLeaveMap, idUser:%u @%s,%d");
  return 0x140dbda78;
}




undefined8 Catch_140dd77c0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnActionReborn, user:%u @%s,%d");
  return 0x140dbdafe;
}




undefined8 Catch_140dd7800(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnLoseLife, user:%u, lose life: %d @%s,%d");
  return 0x140dbdc2b;
}




void Unwind_140dd7850(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7870(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7890(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd78b0(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd78d0(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd78f0(undefined8 param_1,longlong param_2)

{
  FUN_140dba4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7910(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7930(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7950(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7970(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7990(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd79b0(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd79d0(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd79f0(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a10(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a30(undefined8 param_1,longlong param_2)

{
  FUN_140dba4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a50(undefined8 param_1,longlong param_2)

{
  FUN_140dbc1c0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7a70(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd7a90(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140dd7ab0(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140dd7ad0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7af0(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7b10(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7b30(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7b50(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7b70(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7b90(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7bb0(undefined8 param_1,longlong param_2)

{
  FUN_140dba4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7bd0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7bf0(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c10(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c30(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd7c50(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x10));
  return;
}




void Unwind_140dd7c70(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x50));
  return;
}




void Unwind_140dd7c90(undefined8 param_1,longlong param_2)

{
  FUN_140dbde90((longlong *)(*(longlong *)(param_2 + 0xb0) + 0x90));
  return;
}




void Unwind_140dd7cc0(undefined8 param_1,longlong param_2)

{
  FUN_140dbc7b0((longlong *)(*(longlong *)(param_2 + 0xb0) + 0xd0));
  return;
}




void Unwind_140dd7cf0(undefined8 param_1,longlong param_2)

{
  FUN_140dccb40((undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x120));
  return;
}




undefined * Catch_140dd7d20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyArenicTeam) @%s,%d");
  return &DAT_140dbdf69;
}




undefined * Catch_140dd7d60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyArenicUser) @%s,%d");
  return &DAT_140dbe0c3;
}




undefined * Catch_140dd7da0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pWitnessMgr) @%s,%d");
  return &DAT_140dbe218;
}




void Unwind_140dd7de0(undefined8 param_1,longlong param_2)

{
  FUN_140dbc1c0(*(longlong **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7e00(undefined8 param_1,longlong param_2)

{
  FUN_140dba4c0(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7e20(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0xb8) + 0x18);
  return;
}




void Unwind_140dd7e40(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0xb8) + 8));
  return;
}




void Unwind_140dd7e60(undefined8 param_1,longlong param_2)

{
  FUN_140db7cb0(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7e80(undefined8 param_1,longlong param_2)

{
  FUN_140db7020(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7ea0(undefined8 param_1,longlong param_2)

{
  FUN_140db64c0(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7ec0(undefined8 param_1,longlong param_2)

{
  FUN_140db5ba0(*(undefined8 **)(param_2 + 0xc0));
  return;
}




void Unwind_140dd7ee0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc70(*(longlong **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7f00(undefined8 param_1,longlong param_2)

{
  FUN_140dba4a0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7f20(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7f40(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7f60(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7f80(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7fa0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc40(*(longlong **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7fc0(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd7fe0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd8000(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd8020(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd8040(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0xb8));
  return;
}




void Unwind_140dd8060(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc40(*(longlong **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd8080(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd80a0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd80c0(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd80e0(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd8100(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0xb0));
  return;
}




void Unwind_140dd8120(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_140dd8140(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnInviteRefuse, user:%u @%s,%d");
  return 0x140dbe6ac;
}




undefined8 Catch_140dd8180(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnInviteOK, user: %u @%s,%d");
  return 0x140dbe76b;
}




undefined8 Catch_140dd81c0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnEnterMap, iduser:%u @%s,%d");
  return 0x140dbe8ce;
}




undefined8 Catch_140dd8200(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::QuitTeam @%s,%d");
  return 0x140dbea95;
}




void Unwind_140dd8240(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8260(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8280(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd82a0(undefined8 param_1,longlong param_2)

{
  FUN_140db7b90((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd82c0(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd82e0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8300(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8320(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8340(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8360(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8380(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd83a0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd83c0(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd83e0(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8400(undefined8 param_1,longlong param_2)

{
  FUN_140db6460((undefined8 *)(param_2 + 0x20));
  return;
}




void Unwind_140dd8420(undefined8 param_1,longlong param_2)

{
  FUN_140db5cb0((undefined8 *)(param_2 + 0x20));
  return;
}




undefined8 Catch_140dd8440(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::SearchMatch @%s,%d");
  return 0x140dbf2d4;
}




void Unwind_140dd8480(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd84b0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd84d0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd84f0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd8510(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd8530(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd8550(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8580(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd85a0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd85c0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd85e0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd8600(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140dd8620(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8640(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8660(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8680(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd86a0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd86c0(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd86e0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8700(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8720(undefined8 param_1,longlong param_2)

{
  FUN_140db5b10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8740(undefined8 param_1,longlong param_2)

{
  FUN_140db64a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8760(undefined8 param_1,longlong param_2)

{
  FUN_140db7000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd8780(undefined8 param_1,longlong param_2)

{
  FUN_140db7c90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd87a0(undefined8 param_1,longlong param_2)

{
  FUN_140dba4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd87c0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd87e0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8800(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140dd8820(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140dd8840(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd8870(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140dd8890(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_140dd88b0(undefined8 param_1,longlong param_2)

{
  FUN_140dbde90((longlong *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_140dd88d0(undefined8 param_1,longlong param_2)

{
  FUN_140dbc7b0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_140dd88f0(undefined8 param_1,longlong param_2)

{
  FUN_140dccb40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x120));
  return;
}




void Unwind_140dd8910(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined * Catch_140dd8930(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::CreateNew @%s,%d");
  return &DAT_140dbfd63;
}




undefined * Catch_140dd8970(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyArenicUser) @%s,%d");
  return &DAT_140dbfed9;
}




undefined8 Catch_140dd89b0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnUserLogout, user id: %d @%s,%d");
  return 0x140dbff00;
}




void Unwind_140dd89f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd8a10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd8a50(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8a70(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x1e0));
  return;
}




void Unwind_140dd8a90(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(param_2 + 0x120));
  return;
}




void Unwind_140dd8ab0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x628) + 0x20));
  return;
}




void Unwind_140dd8ad0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x628) + 0x50));
  return;
}




void Unwind_140dd8af0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x628) + 0x80));
  return;
}




void Unwind_140dd8b20(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140dd8b40(undefined8 param_1,longlong param_2)

{
  FUN_140db4380(param_2 + 0x58);
  return;
}




void Unwind_140dd8b60(undefined8 param_1,longlong param_2)

{
  FUN_140db31a0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140dd8b80(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::ProcessMatch @%s,%d");
  return 0x140dc06cd;
}




undefined8 Catch_140dd8bc0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicMgr::OnTimer @%s,%d");
  return 0x140dc083f;
}




void Unwind_140dd8c00(void)

{
  DAT_140df1568 = DAT_140df1568 & 0xfffffffe;
  return;
}




void Unwind_140dd8c20(void)

{
  DAT_140df1568 = DAT_140df1568 & 0xfffffffe;
  return;
}




void Unwind_140dd8c40(void)

{
  DAT_140df1568 = DAT_140df1568 & 0xfffffffe;
  return;
}




void Unwind_140dd8c60(void)

{
  DAT_140df1568 = DAT_140df1568 & 0xfffffffe;
  return;
}




undefined8 Catch_140dd8c80(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::OnWin @%s,%d");
  return 0x140dc1a7d;
}




undefined8 Catch_140dd8cc0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::OnLost @%s,%d");
  return 0x140dc1c1d;
}




undefined8 Catch_140dd8d00(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::UpdateFamilyInfo @%s,%d");
  return 0x140dc1f16;
}




undefined * Catch_140dd8d40(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::ChangeLeader @%s,%d");
  return &DAT_140dc2722;
}




undefined8 Catch_140dd8d80(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::SwitchStatus, status:%d, switch all teamers:%d @%s,%d");
  return 0x140dc2921;
}




undefined8 Catch_140dd8dd0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::ResetTeam @%s,%d");
  return 0x140dc2c4b;
}




undefined8 Catch_140dd8e10(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::AddFamilyActiveDegree @%s,%d");
  return 0x140dc2d5e;
}




void Unwind_140dd8e50(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined * Catch_140dd8e70(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::BeginAthletics @%s,%d");
  return &DAT_140dc3268;
}




undefined8 Catch_140dd8eb0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::Create @%s,%d");
  return 0x140dc3550;
}




void Unwind_140dd8ef0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dd8f10(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::OnTimer @%s,%d");
  return 0x140dc376c;
}




void Unwind_140dd8f50(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd8f80(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd8fa0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd8fc0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd8fe0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd9000(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd9020(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140dd9040(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_140dd9060(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::AddAllTeamUser @%s,%d");
  return &DAT_140dc3a8d;
}




void Unwind_140dd90a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x4a0));
  return;
}




void Unwind_140dd90c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_140dd90e0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::LeaveArenic @%s,%d");
  return 0x140dc3d65;
}




void Unwind_140dd9120(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140dd9140(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xa0));
  return;
}




void Unwind_140dd9160(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd9180(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140dd91a0(undefined8 param_1,longlong param_2)

{
  FUN_140dbdc40(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dd91c0(undefined8 param_1,longlong param_2)

{
  FUN_140dba480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd91e0(undefined8 param_1,longlong param_2)

{
  FUN_140db7c70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9200(undefined8 param_1,longlong param_2)

{
  FUN_140db6fe0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9220(undefined8 param_1,longlong param_2)

{
  FUN_140db6480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9240(undefined8 param_1,longlong param_2)

{
  FUN_140db5a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140dd9260(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::DeleteMember, user:%u @%s,%d");
  return &DAT_140dc3f73;
}




void Unwind_140dd92a0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd92c0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd92e0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd9300(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd9320(undefined8 param_1,longlong param_2)

{
  FUN_140db2410(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140dd9340(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd9360(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd9380(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd93b0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd93d0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd93f0(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd9410(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140dd9430(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_140dd9450(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicTeam::OnInviteTimeOut @%s,%d");
  return 0x140dc466f;
}




void Unwind_140dd9490(undefined8 param_1,longlong param_2)

{
  FUN_140dbde60((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140dd94b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd94d0(undefined8 param_1,longlong param_2)

{
  FUN_140db1ed0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd94f0(undefined8 param_1,longlong param_2)

{
  FUN_140db20e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140dd9510(undefined8 param_1,longlong param_2)

{
  FUN_140db2410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0xa0));
  return;
}




void Unwind_140dd9530(void)

{
  DAT_140df1568 = DAT_140df1568 & 0xfffffffe;
  return;
}




void Unwind_140dd9550(undefined8 param_1,longlong param_2)

{
  FUN_140dc0d20(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_140dd9570(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pTeam) @%s,%d");
  return 0x140dc485d;
}




void Unwind_140dd95b0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140dd95d0(undefined8 param_1,longlong param_2)

{
  FUN_140dd27d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140dd95f0(void)

{
  DAT_140df1578 = DAT_140df1578 & 0xfffffffe;
  return;
}




void Unwind_140dd9610(void)

{
  DAT_140df1578 = DAT_140df1578 & 0xfffffffe;
  return;
}




void Unwind_140dd9630(void)

{
  DAT_140df1578 = DAT_140df1578 & 0xfffffffe;
  return;
}




void Unwind_140dd9650(void)

{
  DAT_140df1578 = DAT_140df1578 & 0xfffffffe;
  return;
}




undefined8 Catch_140dd9670(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicUser::AddWinCount @%s,%d");
  return 0x140dc51ea;
}




undefined8 Catch_140dd96b0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicUser::AddLostCount @%s,%d");
  return 0x140dc52a9;
}




void Unwind_140dd96f0(void)

{
  DAT_140df1578 = DAT_140df1578 & 0xfffffffe;
  return;
}




void Unwind_140dd9710(undefined8 param_1,longlong param_2)

{
  FUN_140dc4fc0(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dd9730(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyArenicUser) @%s,%d");
  return 0x140dc5399;
}




undefined8 Catch_140dd9770(void)

{
  log_InlineLogCATCH_ERROR("CFamilyArenicUser::LeaveArenic, change map: %d, change PK mode: %d @%s,%d");
  return 0x140dc546b;
}




void Unwind_140dd97c0(void)

{
  DAT_140df1588 = DAT_140df1588 & 0xfffffffe;
  return;
}




void Unwind_140dd97e0(void)

{
  DAT_140df1588 = DAT_140df1588 & 0xfffffffe;
  return;
}




void Unwind_140dd9800(void)

{
  DAT_140df1588 = DAT_140df1588 & 0xfffffffe;
  return;
}




void Unwind_140dd9820(void)

{
  DAT_140df1588 = DAT_140df1588 & 0xfffffffe;
  return;
}




void Unwind_140dd9840(void)

{
  DAT_140df1588 = DAT_140df1588 & 0xfffffffe;
  return;
}




void Unwind_140dd9860(undefined8 param_1,longlong param_2)

{
  FUN_140dc5cd0(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_140dd9880(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pData) @%s,%d");
  return 0x140dc605f;
}




void Unwind_140dd98c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140dd98e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd9900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140dd9920(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140dd9940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd9960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd9980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd99a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd99c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd99e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140dd9a00(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9a20(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9a40(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9a60(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9a80(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9aa0(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd9ac0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd9af0(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd9b10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dd9b40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd9b70(void)

{
  FUN_140db1160();
  return;
}




void Catch_140dd9b90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd9bc0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9be0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9c00(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9c20(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9c40(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9c60(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9c80(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9ca0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9cc0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9ce0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9d00(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9d20(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dd9d40(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b40(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dd9d70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dd9d90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd9db0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd9dd0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dd9df0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dd9e10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd9e30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dd9e50(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dd9e70(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9e90(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9eb0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9ed0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9ef0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9f10(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9f30(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dd9f50(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9f70(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9f90(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9fb0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9fd0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dd9ff0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda010(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda030(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140dda070(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dda090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dda0b0(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140dda0d0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda0f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda110(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda130(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda150(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda170(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda190(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda1b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda1d0(undefined8 param_1,longlong param_2)

{
  FUN_140dd33e0((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_140dda1f0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::ShowYesterdayTopTenInfo, user: %u @%s,%d");
  return 0x140dca701;
}




void Unwind_140dda230(undefined8 param_1,longlong param_2)

{
  FUN_140dd2fd0((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_140dda250(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::ShowRankAthletePoint, user:%u, page:%u @%s,%d");
  return 0x140dca9c7;
}




undefined8 Catch_140dda2a0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::ProcessFamilyActivity @%s,%d");
  return 0x140dcab96;
}




void Unwind_140dda2e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140dda300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dda320(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140dda340(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140dda360(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda380(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda3a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda3c0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda3e0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda400(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda420(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda440(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda460(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda480(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda4a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda4c0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda4e0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140dda500(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140dda530(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140dda550(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda570(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda590(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda5b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda5d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140dda5f0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::RewardDayHornor @%s,%d");
  return 0x140dcc0ba;
}




undefined8 Catch_140dda630(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::RewardMonthHornor @%s,%d");
  return 0x140dcc2fa;
}




void Unwind_140dda670(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda690(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda6b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda6d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda6f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda710(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda730(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda750(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda770(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda790(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda7b0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda7d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda7f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda810(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda830(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda850(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda870(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140dda890(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda8b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda8d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda8f0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda910(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda930(undefined8 param_1,longlong param_2)

{
  FUN_140dcc320(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140dda950(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda970(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda990(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda9b0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda9d0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140dda9f0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc750(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaa10(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaa30(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaa50(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaa70(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaa90(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddaab0(undefined8 param_1,longlong param_2)

{
  FUN_140dccae0((longlong *)(*(longlong *)(param_2 + 0xa0) + 8));
  return;
}




void Unwind_140ddaad0(undefined8 param_1,longlong param_2)

{
  FUN_140dccae0((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x48));
  return;
}




void Unwind_140ddaaf0(undefined8 param_1,longlong param_2)

{
  FUN_140dc86e0((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x88));
  return;
}




void Unwind_140ddab20(undefined8 param_1,longlong param_2)

{
  FUN_140dc86e0((undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0xb8));
  return;
}




void Unwind_140ddab50(undefined8 param_1,longlong param_2)

{
  FUN_140dccb10((longlong *)(*(longlong *)(param_2 + 0xa0) + 0xe8));
  return;
}




void Unwind_140ddab80(undefined8 param_1,longlong param_2)

{
  FUN_140dccb10((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x128));
  return;
}




void Unwind_140ddabb0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc750(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddabd0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddabf0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddac10(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddac30(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddac50(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddac70(undefined8 param_1,longlong param_2)

{
  FUN_140dcc750(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddac90(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddacb0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddacd0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddacf0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddad10(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddad30(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddad50(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddad70(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddad90(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddadb0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc320(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddadd0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddadf0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddae10(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddae30(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddae50(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140ddae70(undefined8 param_1,longlong param_2)

{
  FUN_140dcc320(*(longlong **)(param_2 + 0xa0));
  return;
}




void Unwind_140ddae90(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140ddaeb0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140ddaed0(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140ddaef0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140ddaf10(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0xa0));
  return;
}




undefined8 Catch_140ddaf30(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::UpdateFamilyRanks @%s,%d");
  return 0x140dcd454;
}




undefined8 Catch_140ddaf70(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::UpdateYesterdayRanks @%s,%d");
  return 0x140dcd671;
}




void Unwind_140ddafb0(undefined8 param_1,longlong param_2)

{
  FUN_140dd3c70((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140ddafd0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::ShowFamilyInfo, user:%u, status:%d @%s,%d");
  return 0x140dcd864;
}




void Unwind_140ddb020(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb040(undefined8 param_1,longlong param_2)

{
  FUN_140dc7090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb060(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb080(undefined8 param_1,longlong param_2)

{
  FUN_140dc87a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb0a0(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb0c0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb0e0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc320(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb100(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb120(undefined8 param_1,longlong param_2)

{
  FUN_140dc7100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb140(undefined8 param_1,longlong param_2)

{
  FUN_140dc7b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb160(undefined8 param_1,longlong param_2)

{
  FUN_140dc87c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb180(undefined8 param_1,longlong param_2)

{
  FUN_140dc9a50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb1a0(undefined8 param_1,longlong param_2)

{
  FUN_140dcb440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb1c0(undefined8 param_1,longlong param_2)

{
  FUN_140dcc750(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb1e0(undefined8 param_1,longlong param_2)

{
  FUN_140dccae0((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140ddb200(undefined8 param_1,longlong param_2)

{
  FUN_140dccae0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_140ddb220(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb240(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140ddb260(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140ddb280(undefined8 param_1,longlong param_2)

{
  FUN_140dc86e0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x88));
  return;
}




void Unwind_140ddb2a0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb2c0(undefined8 param_1,longlong param_2)

{
  FUN_140dc70b0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140ddb2e0(undefined8 param_1,longlong param_2)

{
  FUN_140dc7ae0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140ddb300(undefined8 param_1,longlong param_2)

{
  FUN_140dc86e0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0xb8));
  return;
}




void Unwind_140ddb320(undefined8 param_1,longlong param_2)

{
  FUN_140dccb10((longlong *)(*(longlong *)(param_2 + 0x50) + 0xe8));
  return;
}




void Unwind_140ddb340(undefined8 param_1,longlong param_2)

{
  FUN_140dccb10((longlong *)(*(longlong *)(param_2 + 0x50) + 0x128));
  return;
}




undefined8 Catch_140ddb360(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::ProcessRanks @%s,%d");
  return 0x140dcdffa;
}




undefined * Catch_140ddb3a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyData) @%s,%d");
  return &DAT_140dce202;
}




undefined8 Catch_140ddb3e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pFamilyData) @%s,%d");
  return 0x140dce3a4;
}




undefined8 Catch_140ddb420(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::OnDestroyFamily, %u @%s,%d");
  return 0x140dce3d4;
}




undefined * Catch_140ddb460(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAthleteRec) @%s,%d");
  return &DAT_140dce5f7;
}




undefined8 Catch_140ddb4a0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::Init @%s,%d");
  return 0x140dce8d8;
}




undefined * Catch_140ddb4e0(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::OnDataChange, family: %u @%s,%d");
  return &DAT_140dceac0;
}




undefined8 Catch_140ddb520(void)

{
  log_InlineLogCATCH_ERROR("CFamilyRankMgr::OnFamilyArenicEnd @%s,%d");
  return 0x140dced05;
}




void Unwind_140ddb560(undefined8 param_1,longlong param_2)

{
  FUN_140dd3c70((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb580(undefined8 param_1,longlong param_2)

{
  FUN_140dd33e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb5a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2fd0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb5c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2c80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb5e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2990((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb600(undefined8 param_1,longlong param_2)

{
  FUN_140dd3640((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb620(undefined8 param_1,longlong param_2)

{
  FUN_140dd3f70((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140ddb640(undefined8 param_1,longlong param_2)

{
  FUN_140dd3e10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140ddb660(void)

{
  log_InlineLogCATCH_ERROR("FamilyArenic::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140dcf179;
}




void Unwind_140ddb6b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb6d0(undefined8 param_1,longlong param_2)

{
  FUN_140dced30(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddb6f0(undefined8 param_1,longlong param_2)

{
  FUN_140dced30(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140ddb710(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140dcf3da;
}




void Unwind_140ddb750(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140ddb770(undefined8 param_1,longlong param_2)

{
  FUN_140dced30(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140ddb790(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140dcf473;
}




undefined8 Catch_140ddb7d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pFamilyArenicMgr) @%s,%d");
  return 0x140dd004e;
}




void Unwind_140ddb810(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ddb830(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140ddb850(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb870(void)

{
  FUN_140db1160();
  return;
}




void Catch_140ddb890(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140ddb8c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140ddb8f0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb910(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb930(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb950(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddb970(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb990(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb9b0(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb9d0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddb9f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140ddba10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140ddba30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140ddba50(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140ddba70(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddba90(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbab0(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbad0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140ddbaf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140ddbb10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140ddbb30(undefined8 param_1,longlong param_2)

{
  FUN_140db11c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140ddbb50(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbb70(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbb90(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbbb0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbbd0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddbbf0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbc10(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbc30(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140ddbc50(void)

{
  log_InlineLogCATCH_ERROR("CWitnessMgr::OnExitWitness, fly map: %d, notify: %d @%s,%d");
  return 0x140dd1f3a;
}




undefined8 Catch_140ddbca0(void)

{
  log_InlineLogCATCH_ERROR("CWitnessMgr::OnWitnessCheer @%s,%d");
  return 0x140dd2029;
}




void Unwind_140ddbce0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbd00(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbd20(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbd40(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbd60(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbd80(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddbda0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbdc0(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbde0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbe00(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbe20(undefined8 param_1,longlong param_2)

{
  FUN_140dd2050(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbe40(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbe60(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbe80(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbea0(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbec0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbee0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2210((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140ddbf00(undefined8 param_1,longlong param_2)

{
  FUN_140dd2050(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbf20(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbf40(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbf60(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbf80(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddbfa0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140ddbfc0(void)

{
  log_InlineLogCATCH_ERROR("CWitnessMgr::OnEnterWitness @%s,%d");
  return 0x140dd2446;
}




void Unwind_140ddc000(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddc020(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc040(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc060(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc080(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc0a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc0c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2210((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140ddc0e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2050(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc100(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc120(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc140(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc160(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc180(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc1a0(void)

{
  FUN_140db1160();
  return;
}




void Unwind_140ddc1c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd0660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc1e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd08c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc200(undefined8 param_1,longlong param_2)

{
  FUN_140dd0be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc220(undefined8 param_1,longlong param_2)

{
  FUN_140dd0fd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc240(undefined8 param_1,longlong param_2)

{
  FUN_140dd1b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc260(undefined8 param_1,longlong param_2)

{
  FUN_140dd2050(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc280(undefined8 param_1,longlong param_2)

{
  FUN_140dd2210((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140ddc2a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140ddc2c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd2210((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_140ddc2e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc300(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140ddc320(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc340(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140ddc360(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc380(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140ddc3a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc3c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc3e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc400(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc420(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc440(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc460(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc480(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc4a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc4c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc4e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc500(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc520(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc540(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc560(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc580(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc5a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc5c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc5e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc600(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc620(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc640(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc660(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc680(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc6a0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140ddc6c0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140ddc6e0(undefined8 param_1,longlong param_2)

{
  FUN_140dd26d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140ddc6f8(void)

{
  _unlock(8);
  return;
}




void FUN_140ddc711(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ddc741(void)

{
  _DAT_140df1550 = 0xffffffff;
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




bool FUN_140ddc7d0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1732 failed=0 total=1830 */
