/* Decompiled by Ghidra 12.1.4 | program: Sponsor.dll
   image base: 141690000 | functions: 676 */


exception * FUN_1416910b0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1416910f0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141691110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141691120(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141691180(void)

{
  return;
}




exception * FUN_141691190(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1416911e0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141691213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141691220(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141691240(exception *param_1,uint param_2)

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




exception * FUN_1416912a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141691300(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014169133d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141691350(exception *param_1,uint param_2)

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




exception * FUN_1416913c0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141691420(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014169145d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141691470(exception *param_1,uint param_2)

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




void FUN_1416914e0(void)

{
  log_InlineLogERROR(&DAT_1416a0590);
  return;
}




undefined8 * FUN_141691510(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  return param_1;
}




void FUN_141691540(void)

{
  return;
}




ulonglong FUN_141691550(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong extraout_RAX;
  tm *ptVar2;
  ulonglong extraout_RAX_00;
  __time64_t local_res10 [3];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *param_1 = param_2;
  local_res10[0] = 0;
  _time64(local_res10);
  ptVar2 = _localtime64(local_res10);
  if (ptVar2 == (tm *)0x0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  iVar1 = ptVar2->tm_mon;
  *(int *)(param_1 + 4) = (ptVar2->tm_year * 100 + 0x2e631 + iVar1) * 100 + ptVar2->tm_mday;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




int FUN_141691610(longlong param_1)

{
  return *(int *)(param_1 + 0x18) / 100;
}




int FUN_141691630(longlong param_1)

{
  return *(int *)(param_1 + 0x1c) / 100;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141691650(undefined8 *param_1,undefined4 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  IStringManager *pIVar4;
  char *_Format;
  undefined8 extraout_RAX;
  int iVar5;
  undefined1 auStack_178 [32];
  int local_158;
  int local_150;
  char local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  uVar1 = DAT_1416a8400 ^ (ulonglong)auStack_178;
  if (((((param_3 == *(int *)((longlong)param_1 + 0xc)) || (param_3 == *(int *)(param_1 + 2))) && (*(char *)(param_1 + 1) != '\0')) &&
      ((param_3 != 0 && (param_4 != 0)))) &&
     ((local_48 = uVar1, uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x14)),
      (char)uVar1 != '\0' &&
      ((uVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x14)), (char)uVar1 == '\0' &&
       (uVar1 = (ulonglong)(param_4 - 100U), param_4 - 100U < 0x1863d)))))) {
    uVar1 = (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,param_2);
    if (((longlong)uVar1 < (longlong)(param_4 * 1000)) ||
       (uVar1 = (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2,(longlong)(param_4 * 1000)), (char)uVar1 == '\0')) {
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0xc);
      if (iVar5 == param_3) {
        *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + param_4;
        iVar5 = *(int *)(param_1 + 2);
      }
      else {
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + param_4;
      }
      plVar2 = (longlong *)InstanceGet();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,PTR_s_cq_competesponsor_1416a8008);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
        (**(code **)(*plVar3 + 0xb0))(plVar3,2);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
        (**(code **)(*plVar3 + 0xb8))(plVar3,param_2);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
        (**(code **)(*plVar3 + 0xb8))(plVar3,param_3);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
        (**(code **)(*plVar3 + 0xb8))(plVar3,iVar5);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
        (**(code **)(*plVar3 + 0xb0))(plVar3,param_4);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,6);
        (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined4 *)(param_1 + 4));
        (**(code **)(*plVar2 + 0x50))(plVar2,0);
        (**(code **)*plVar2)(plVar2,1);
      }
      pIVar4 = theInstance();
      (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
      _Format = (char *)(*(code *)**(undefined8 **)pIVar4)(pIVar4,"STR_ELITE_SPONSOR");
      _snprintf(local_148,0x100,_Format);
      local_49 = 0;
      (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_3,local_148);
      local_158 = iVar5;
      local_150 = param_4;
      tq::MyLogSave("gmlog/elitecompetesponsor","User[%d] sponsor syncompete: target[%d], oppnent[%d], money[%d]");
      uVar1 = CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  else {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}




bool FUN_141691970(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_141691a20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141691a42;
  }
  lVar2 = *plVar1;
LAB_141691a42:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141691a60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141691a82;
  }
  lVar2 = *plVar1;
LAB_141691a82:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141691aa0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_141691b40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141691b62;
  }
  lVar2 = *plVar1;
LAB_141691b62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141691b80(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416a74e8);
}




exception * FUN_141691bf0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_141691c40(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_141691cc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong * FUN_141691dc0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141691df0;
  }
  else {
LAB_141691df0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141691e18;
  }
  _invalid_parameter_noinfo();
LAB_141691e18:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141691e60(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141691f00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141691f70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_1 * 0x28);
  return;
}




exception * FUN_141692010(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_141692060(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141692100(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141692180(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_1416921c0(void)

{
  if ((DAT_1416a8428 & 1) == 0) {
    DAT_1416a8428 = DAT_1416a8428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8420,"CEliteCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fbf0);
  }
  return &DAT_1416a8420;
}




void FUN_141692220(__uint64 param_1)

{
  if ((DAT_1416a8428 & 1) == 0) {
    DAT_1416a8428 = DAT_1416a8428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8420,"CEliteCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141692275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416a8420,param_1);
  return;
}




void FUN_141692280(void *param_1)

{
  if ((DAT_1416a8428 & 1) == 0) {
    DAT_1416a8428 = DAT_1416a8428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8420,"CEliteCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416922d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416a8420,param_1);
  return;
}




void FUN_1416922e0(void *param_1)

{
  if ((DAT_1416a8428 & 1) == 0) {
    DAT_1416a8428 = DAT_1416a8428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8420,"CEliteCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fbf0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141692335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416a8420,param_1);
  return;
}




bool FUN_141692340(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141692380(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416923a2;
  }
  lVar2 = *plVar1;
LAB_1416923a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416923c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416923e2;
  }
  lVar2 = *plVar1;
LAB_1416923e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141692400(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141692460(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141692470(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141692492;
  }
  lVar2 = *plVar1;
LAB_141692492:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416924b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141692500(longlong param_1,longlong param_2)

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




void FUN_141692560(longlong param_1,longlong *param_2)

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




void FUN_1416925e0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141692604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141692680(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141692710(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141692780(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_1416927f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141692822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141692890(longlong *param_1,longlong param_2)

{
  FUN_141691dc0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1416928c0(undefined8 *param_1)

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




void * FUN_141692920(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141692990(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_1416929d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416929f2;
  }
  lVar2 = *plVar1;
LAB_1416929f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141692a10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141692a30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141692a50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_141692a50(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




longlong * FUN_141692aa0(longlong *param_1)

{
  FUN_1416925e0(param_1);
  return param_1;
}




undefined8 FUN_141692ac0(longlong param_1,ulonglong param_2)

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
      FUN_141691b80();
    }
    lVar1 = FUN_141692680(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141692b30(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141692b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_141692be0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141692c20(longlong *param_1)

{
  FUN_1416927f0(param_1);
  return param_1;
}




undefined8 * FUN_141692c40(undefined8 *param_1)

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




longlong * FUN_141692c80(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141692cea;
  }
  _invalid_parameter_noinfo();
LAB_141692cea:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141692d20(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141692d80(void)

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




longlong * FUN_141692de0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416925e0(param_1);
  return param_2;
}




undefined8 * FUN_141692e10(undefined8 *param_1)

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




void * FUN_141692e60(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141692ed0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141692f40(void *param_1,longlong param_2,void *param_3)

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




void FUN_141692f80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_141692a50(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_141693000(longlong *param_1)

{
  FUN_1416925e0(param_1);
  return param_1;
}




void FUN_141693020(undefined8 *param_1)

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




void FUN_141693060(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141693080(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416930c0(longlong *param_1)

{
  FUN_1416927f0(param_1);
  return param_1;
}




undefined8 * FUN_1416930e0(undefined8 *param_1)

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




undefined8 * FUN_141693130(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141693190(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141692d80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416931d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141693220(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416a7600);
  }
  FUN_1416925e0(param_3);
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
        goto LAB_14169340c;
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
LAB_14169340c:
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
            FUN_141692500((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_141692560((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_141692500((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_141692560((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_141692500((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_141692560((longlong)param_1,plVar7);
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




exception * FUN_1416935e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_141693640(undefined8 *param_1)

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




void * FUN_1416936c0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141693740(undefined8 *param_1)

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




undefined8 * FUN_1416937a0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416937f0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141693840(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416938a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416a74e8);
  }
  plVar5 = FUN_141692b60(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_141693be0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141693c40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141692f80((longlong)param_1);
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
    FUN_141693220(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141693df0(undefined8 *param_1)

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




void * FUN_141693e70(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




longlong * FUN_141693eb0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14169400d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14169403c;
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
      goto LAB_14169400d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416938a0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14169403c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_141694060(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141694130(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1416941c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416941e0(longlong *param_1)

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
  FUN_141693c40(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141694280(undefined8 *param_1)

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




void FUN_1416942d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141691b80();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141692680(param_1 + 0x10,uVar8);
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
      FUN_141693e70(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141693e70(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141692ed0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_141694580(longlong *param_1)

{
  FUN_1416941e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416945b0(undefined8 *param_1)

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
  lVar2 = FUN_141692d80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141694630(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1416942d0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141694724;
  }
  _invalid_parameter_noinfo();
LAB_141694724:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_141694760(longlong *param_1)

{
  FUN_1416941e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141694790(undefined8 *param_1)

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
  lVar2 = FUN_141692d80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141694810(longlong *param_1,undefined8 *param_2)

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
  FUN_141694630(param_1,local_18,&local_28,param_2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416948c0(ulonglong *param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_7b8 [32];
  undefined8 local_798;
  undefined8 local_790;
  int local_788;
  undefined4 local_780;
  uint local_778;
  int local_774;
  uint local_770;
  ulonglong *local_768;
  undefined8 uStack_760;
  ulonglong *local_758;
  undefined8 *puStack_750;
  ulonglong *local_748;
  undefined8 *puStack_740;
  ulonglong *local_738 [6];
  undefined8 *local_708;
  undefined8 local_700;
  uint local_6f8;
  int local_6f4;
  ulonglong *local_6e8;
  undefined8 *puStack_6e0;
  undefined8 *local_6d8;
  ulonglong *local_6d0;
  ulonglong *local_6c8;
  undefined8 uStack_6c0;
  ulonglong *local_6b8;
  undefined8 uStack_6b0;
  ulonglong *local_698;
  ulonglong *local_688;
  undefined8 local_678;
  ulonglong *local_670;
  ulonglong *local_658;
  undefined8 *puStack_650;
  ulonglong *local_648;
  undefined8 *puStack_640;
  char local_638 [255];
  undefined1 local_539;
  char local_538 [255];
  undefined1 local_439;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_678 = 0xfffffffffffffffe;
  local_38 = DAT_1416a8400 ^ (ulonglong)auStack_7b8;
  if ((char)param_1[1] != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  local_768 = param_1;
  local_6d0 = param_1;
  FUN_141694790(local_738);
  FUN_141692f80((longlong)local_738);
  if (((int)param_1[3] == 0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) {
    plVar9 = (longlong *)InstanceGet();
    local_788 = *(int *)((longlong)param_1 + 0xc);
    local_780 = (undefined4)param_1[4];
    local_790 = CONCAT44(local_790._4_4_,(int)param_1[2]);
    local_798 = CONCAT44(local_798._4_4_,(int)param_1[2]);
    _snprintf(local_438,0x400,
              "SELECT * FROM cq_competesponsor WHERE competetype= 2 && ((idtarget=%lu && idoppnent=%lu) ||(idtarget=%lu && idoppnent=%lu)) && starttime=%d");
    local_39 = 0;
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9,local_438,2);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
      if (0 < iVar5) {
        uVar17 = 0;
        local_770 = 0;
        uVar12 = uVar17;
        while( true ) {
          iVar5 = (**(code **)(*plVar9 + 0x40))(plVar9);
          puVar2 = local_738[0];
          if (iVar5 <= (int)uVar12) break;
          (**(code **)(*plVar9 + 0x30))(plVar9);
          plVar10 = (longlong *)(**(code **)(*plVar9 + 0x38))(plVar9);
          if (plVar10 != (longlong *)0x0) {
            plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,5);
            local_774 = (**(code **)(*plVar11 + 0x48))(plVar11);
            plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
            local_778 = (**(code **)(*plVar11 + 0x40))(plVar11);
            FUN_141694060((longlong *)local_738,(longlong *)&local_758,&local_778);
            puVar2 = local_758;
            local_748 = local_708;
            local_670 = local_738[0];
            if ((local_758 == (ulonglong *)0x0) || (local_758 != local_738[0])) {
              _invalid_parameter_noinfo();
            }
            puVar15 = puStack_750;
            uVar14 = local_778;
            if (puStack_750 == local_748) {
              local_6f8 = local_778;
              local_6f4 = local_774;
              FUN_141693eb0((longlong *)local_738,(longlong *)&local_6b8,&local_6f8);
            }
            else {
              if (puVar2 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar13 = uVar17;
              }
              else {
                uVar13 = *puVar2;
              }
              if (puVar15 == *(undefined8 **)(uVar13 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              piVar1 = (int *)((longlong)puVar15 + 0x1c);
              *piVar1 = *piVar1 + local_774;
              uVar14 = local_778;
            }
            cVar4 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,uVar14);
            if (cVar4 != '\0') {
              (**(code **)(*plVar10 + 0x40))(plVar10,1);
            }
            (**(code **)*plVar10)(plVar10);
          }
          local_770 = (int)uVar12 + 1;
          uVar12 = (ulonglong)local_770;
        }
        if ((int)param_1[3] == 0) {
          local_778 = (uint)param_1[2];
        }
        else {
          local_778 = *(uint *)((longlong)param_1 + 0xc);
        }
        puVar15 = (undefined8 *)*local_708;
        local_688 = local_738[0];
LAB_141694c60:
        puVar16 = local_708;
        uVar14 = local_778;
        local_698 = local_738[0];
        if ((puVar2 == (ulonglong *)0x0) || (puVar2 != local_738[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar15 != puVar16) {
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar12 = uVar17;
          }
          else {
            uVar12 = *puVar2;
          }
          if (puVar15 == *(undefined8 **)(uVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar12 = uVar17;
          }
          else {
            uVar12 = *puVar2;
          }
          if (puVar15 == *(undefined8 **)(uVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,*(undefined4 *)(puVar15 + 3),(longlong)(*(int *)((longlong)puVar15 + 0x1c) * 1000));
          pIVar6 = theInstance();
          plVar10 = (longlong *)*local_768;
          uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10,uVar14);
          (**(code **)(*plVar10 + 0x18))(plVar10,local_778);
          pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_END_ELITECOMPETE1");
          local_798 = uVar7;
          _snprintf(local_638,0x100,pcVar8);
          local_539 = 0;
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar12 = uVar17;
          }
          else {
            uVar12 = *puVar2;
          }
          if (puVar15 == *(undefined8 **)(uVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          param_1 = local_768;
          (**(code **)(*(longlong *)*local_768 + 0x70))((longlong *)*local_768,*(undefined4 *)(puVar15 + 3),local_638);
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar15 + 0x21) == '\0') {
            puVar16 = puVar15;
            puVar3 = (undefined8 *)puVar15[2];
            if (*(char *)((longlong)puVar15[2] + 0x21) == '\0') {
              do {
                puVar15 = puVar3;
                puVar3 = (undefined8 *)*puVar15;
                local_6d8 = puVar15;
              } while (*(char *)((longlong)*puVar15 + 0x21) == '\0');
            }
            else {
              do {
                puVar15 = (undefined8 *)puVar16[1];
                if (*(char *)((longlong)puVar15 + 0x21) != '\0') break;
                bVar18 = puVar16 == (undefined8 *)puVar15[2];
                puVar16 = puVar15;
              } while (bVar18);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_141694c60;
        }
        memset(local_638,0,0x100);
        pIVar6 = theInstance();
        (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,local_778);
        pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_END_ELITECOMPETE2");
        _snprintf(local_638,0x100,pcVar8);
        local_539 = 0;
        iVar5 = (**(code **)(*(longlong *)*param_1 + 0x40))
                          ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0xc),*(undefined4 *)((longlong)param_1 + 0x14),2);
        if (iVar5 == 0) {
          log_InlineLogERROR("ERROR: error2 in CEliteCompeteSponsor::ProcessEndSponsor(GetMapID error idTarget=%u, nType=%d");
        }
        (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,iVar5,local_638);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)*plVar9)(plVar9);
        }
        goto LAB_141694ec9;
      }
      (**(code **)*plVar9)(plVar9);
    }
    puStack_6e0 = local_708;
    local_6e8 = local_738[0];
    puStack_750 = (undefined8 *)*local_708;
    local_758 = local_738[0];
    local_648 = local_738[0];
    puStack_640 = local_708;
    local_6b8 = local_738[0];
    uStack_6b0 = puStack_750;
    FUN_141693c40((longlong *)local_738,(longlong *)&local_6c8,(longlong *)&local_6b8,(longlong *)&local_648);
    operator_delete(local_708);
    local_708 = (undefined8 *)0x0;
    local_700 = 0;
    operator_delete(local_738[0]);
  }
  else {
    pIVar6 = theInstance();
    plVar9 = (longlong *)*param_1;
    iVar5 = *(int *)((longlong)param_1 + 0x1c);
    uVar7 = (**(code **)(*plVar9 + 0x18))(plVar9,(int)param_1[2]);
    puVar2 = local_768;
    uVar12 = local_768[3];
    (**(code **)(*plVar9 + 0x18))(plVar9,*(undefined4 *)((longlong)local_768 + 0xc));
    pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_END_ELITECOMPETE3");
    local_798 = CONCAT44(local_798._4_4_,(int)uVar12 / 100);
    local_790 = uVar7;
    local_788 = iVar5 / 100;
    _snprintf(local_538,0x100,pcVar8);
    local_439 = 0;
    iVar5 = (**(code **)(*(longlong *)*puVar2 + 0x40))((longlong *)*puVar2,*(undefined4 *)((longlong)puVar2 + 0xc),*(undefined4 *)((longlong)puVar2 + 0x14),2);
    if (iVar5 == 0) {
      log_InlineLogERROR("ERROR: error3 in CEliteCompeteSponsor::ProcessEndSponsor(GetMapID error idTarget=%u, nType=%d");
    }
    (**(code **)(*(longlong *)*puVar2 + 0x78))((longlong *)*puVar2,iVar5,local_538);
LAB_141694ec9:
    puStack_740 = local_708;
    local_748 = local_738[0];
    uStack_760 = *local_708;
    local_768 = local_738[0];
    local_658 = local_738[0];
    puStack_650 = local_708;
    local_6c8 = local_738[0];
    uStack_6c0 = uStack_760;
    FUN_141693c40((longlong *)local_738,(longlong *)&local_6b8,(longlong *)&local_6c8,(longlong *)&local_658);
    operator_delete(local_708);
    local_708 = (undefined8 *)0x0;
    local_700 = 0;
    operator_delete(local_738[0]);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141695050(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  IStringManager *pIVar15;
  char *pcVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_7e8 [32];
  int local_7c8;
  int local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0;
  uint local_7a8;
  int local_7a4;
  uint local_7a0;
  uint local_79c;
  int local_798;
  int local_794;
  ulonglong *local_788;
  undefined8 uStack_780;
  ulonglong *local_778;
  undefined8 *puStack_770;
  ulonglong *local_768;
  longlong *plStack_760;
  ulonglong *local_758 [3];
  longlong *local_740;
  longlong *local_738;
  undefined8 local_730;
  undefined8 local_728;
  ulonglong *local_718;
  undefined8 *puStack_710;
  ulonglong *local_708;
  undefined8 *puStack_700;
  ulonglong *local_6f8;
  uint local_6f0;
  int local_6ec;
  undefined8 *local_6e8;
  undefined8 *local_6e0;
  ulonglong *local_6d8 [6];
  undefined8 *local_6a8;
  undefined8 local_6a0;
  ulonglong *local_698;
  undefined8 uStack_690;
  ulonglong *local_678 [6];
  undefined8 *local_648;
  undefined8 local_640;
  undefined8 *local_638;
  ulonglong *local_628;
  undefined8 uStack_620;
  ulonglong *local_618;
  undefined8 local_608;
  ulonglong *local_5f8;
  undefined8 *puStack_5f0;
  ulonglong *local_5e8;
  ulonglong *local_5d8;
  ulonglong *local_5c8;
  ulonglong *local_5b8;
  ulonglong *local_5a8;
  undefined8 *puStack_5a0;
  ulonglong *local_598;
  ulonglong *local_588;
  longlong *plStack_580;
  ulonglong *local_578;
  ulonglong *local_568;
  ulonglong *local_558;
  char local_548 [255];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_608 = 0xfffffffffffffffe;
    local_48 = DAT_1416a8400 ^ (ulonglong)auStack_7e8;
    if ((param_3 != 0) &&
       (((param_2 == *(int *)((longlong)param_1 + 0xc) && (param_3 == *(int *)(param_1 + 2))) ||
        ((param_2 == *(int *)(param_1 + 2) && (param_3 == *(int *)((longlong)param_1 + 0xc))))))) {
      local_7a4 = param_2;
      local_794 = param_3;
      local_788 = param_1;
      local_638 = param_1;
      plVar9 = (longlong *)InstanceGet();
      local_7b8 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_7c8 = *(int *)(param_1 + 2);
      local_7b0 = *(undefined4 *)(param_1 + 4);
      local_7c0 = local_7c8;
      _snprintf(local_448,0x400,
                "SELECT * FROM cq_competesponsor WHERE competetype= 2 && ((idtarget=%lu && idoppnent=%lu) ||(idtarget=%lu && idoppnent=%lu)) && starttime=%d");
      local_49 = 0;
      puVar10 = (ulonglong *)(**(code **)(*plVar9 + 0x10))(plVar9,local_448,2);
      if (puVar10 != (ulonglong *)0x0) {
        local_778 = puVar10;
        iVar5 = (**(code **)(*puVar10 + 0x40))(puVar10);
        if (iVar5 < 1) {
          (**(code **)*puVar10)(puVar10);
        }
        else {
          local_728 = operator_new(8);
          if (local_728 == (ulonglong *)0x0) {
            local_758[0] = (ulonglong *)0x0;
          }
          else {
            *local_728 = (ulonglong)local_758;
            local_758[0] = local_728;
          }
          uVar21 = 0;
          local_740 = (longlong *)0x0;
          local_738 = (longlong *)0x0;
          local_730 = 0;
          local_798 = 0;
          local_7a8 = 0;
          local_6f8 = local_728;
          FUN_141694790(local_678);
          FUN_141694790(local_6d8);
          local_7a0 = 0;
          uVar19 = uVar21;
          uVar22 = uVar21;
LAB_1416951d3:
          iVar5 = (**(code **)(*puVar10 + 0x40))(puVar10);
          puVar11 = local_678[0];
          if ((int)(uint)uVar19 < iVar5) {
            (**(code **)(*puVar10 + 0x30))(puVar10);
            puVar11 = (ulonglong *)(**(code **)(*puVar10 + 0x38))(puVar10);
            uVar6 = (uint)uVar19;
            local_6f8 = puVar11;
            if (puVar11 != (ulonglong *)0x0) {
              plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,2);
              uVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
              local_79c = uVar6;
              plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,5);
              iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
              plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,3);
              iVar7 = (**(code **)(*plVar9 + 0x40))(plVar9);
              if (iVar7 == param_2) {
                FUN_141694060((longlong *)local_678,(longlong *)&local_708,&local_79c);
                puVar20 = local_648;
                puVar10 = local_708;
                local_618 = local_678[0];
                if ((local_708 == (ulonglong *)0x0) || (local_708 != local_678[0])) {
                  _invalid_parameter_noinfo();
                }
                puVar18 = puStack_700;
                if (puStack_700 == puVar20) {
                  local_6f0 = uVar6;
                  local_6ec = iVar5;
                  FUN_141693eb0((longlong *)local_678,(longlong *)&local_698,&local_6f0);
                }
                else {
                  if (puVar10 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar19 = uVar21;
                  }
                  else {
                    uVar19 = *puVar10;
                  }
                  if (puVar18 == *(undefined8 **)(uVar19 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  piVar1 = (int *)((longlong)puVar18 + 0x1c);
                  *piVar1 = *piVar1 + iVar5;
                }
                local_798 = local_798 + iVar5;
                cVar4 = (**(code **)(*(longlong *)*local_788 + 0x48))((longlong *)*local_788,uVar6);
                plVar9 = local_740;
                if (cVar4 == '\0') {
                  local_5d8 = (ulonglong *)0x0;
                  if (local_738 < local_740) {
                    _invalid_parameter_noinfo();
                  }
                  puVar10 = local_758[0];
                  local_5d8 = local_758[0];
                  do {
                    plVar12 = local_738;
                    local_5b8 = (ulonglong *)0x0;
                    if (local_738 < local_740) {
                      _invalid_parameter_noinfo();
                    }
                    local_5b8 = local_758[0];
                    if ((puVar10 == (ulonglong *)0x0) || (puVar10 != local_758[0])) {
                      _invalid_parameter_noinfo();
                    }
                    if (plVar9 == plVar12) {
                      FUN_141694810((longlong *)local_758,&local_6f8);
                      uVar22 = (ulonglong)local_7a8;
                      puVar10 = local_778;
                      param_2 = local_7a4;
                      uVar6 = local_7a0;
                      goto LAB_14169558e;
                    }
                    if (puVar10 == (ulonglong *)0x0) {
                      _invalid_parameter_noinfo();
                      uVar19 = uVar21;
                    }
                    else {
                      uVar19 = *puVar10;
                    }
                    if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                      _invalid_parameter_noinfo();
                    }
                    plVar12 = (longlong *)*plVar9;
                    if (plVar12 != (longlong *)0x0) {
                      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,2);
                      uVar8 = (**(code **)(*plVar12 + 0x40))(plVar12);
                      if (uVar8 == uVar6) goto LAB_14169547f;
                    }
                    if (puVar10 == (ulonglong *)0x0) {
                      _invalid_parameter_noinfo();
                      uVar19 = uVar21;
                    }
                    else {
                      uVar19 = *puVar10;
                    }
                    if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                      _invalid_parameter_noinfo();
                    }
                    plVar9 = plVar9 + 1;
                  } while( true );
                }
                (**(code **)(*puVar11 + 0x40))(puVar11,1);
                (**(code **)*puVar11)(puVar11);
                uVar22 = (ulonglong)local_7a8;
                puVar10 = local_778;
                param_2 = local_7a4;
                uVar6 = local_7a0;
              }
              else {
                FUN_141694060((longlong *)local_6d8,(longlong *)&local_718,&local_79c);
                puVar20 = local_6a8;
                puVar10 = local_718;
                local_598 = local_6d8[0];
                if ((local_718 == (ulonglong *)0x0) || (local_718 != local_6d8[0])) {
                  _invalid_parameter_noinfo();
                }
                puVar18 = puStack_710;
                if (puStack_710 == puVar20) {
                  local_728 = (ulonglong *)CONCAT44(iVar5,uVar6);
                  FUN_141693eb0((longlong *)local_6d8,(longlong *)&local_698,(uint *)&local_728);
                }
                else {
                  if (puVar10 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar19 = uVar21;
                  }
                  else {
                    uVar19 = *puVar10;
                  }
                  if (puVar18 == *(undefined8 **)(uVar19 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  piVar1 = (int *)((longlong)puVar18 + 0x1c);
                  *piVar1 = *piVar1 + iVar5;
                }
                local_7a8 = local_7a8 + iVar5;
                uVar22 = (ulonglong)local_7a8;
                (**(code **)(*puVar11 + 0x40))(puVar11,1);
                (**(code **)*puVar11)(puVar11);
                puVar10 = local_778;
                param_2 = local_7a4;
                uVar6 = local_7a0;
              }
            }
            goto LAB_14169558e;
          }
          puVar20 = (undefined8 *)*local_648;
          local_578 = local_678[0];
          while( true ) {
            puVar18 = local_648;
            local_568 = local_678[0];
            if ((puVar11 == (ulonglong *)0x0) || (puVar11 != local_678[0])) {
              _invalid_parameter_noinfo();
            }
            puVar2 = local_6d8[0];
            puVar10 = local_788;
            if (puVar20 == puVar18) break;
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            uVar6 = (int)(((float)*(int *)((longlong)puVar20 + 0x1c) / (float)local_798) * (float)(int)uVar22) + *(int *)((longlong)puVar20 + 0x1c);
            local_79c = uVar6;
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            puVar10 = local_788;
            iVar5 = uVar6 * 1000;
            lVar13 = (*(code *)**(undefined8 **)*local_788)((undefined8 *)*local_788,*(undefined4 *)(puVar20 + 3));
            lVar14 = (**(code **)(*(longlong *)*puVar10 + 0x80))();
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            puVar10 = local_788;
            cVar4 = (**(code **)(*(longlong *)*local_788 + 0x48))((longlong *)*local_788,*(undefined4 *)(puVar20 + 3));
            if (cVar4 != '\0') {
              if (puVar11 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar11;
              }
              if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              plVar9 = (longlong *)*puVar10;
              (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined4 *)(puVar20 + 3),(longlong)iVar5);
            }
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            local_7c0 = local_794;
            local_7c8 = local_7a4;
            tq::MyLogSave("gmlog/elitecompetesponsor","User[%d] award money[%d] from elitecompete because sponsor winner[%d], Loser[%d]");
            pIVar15 = theInstance();
            plVar9 = (longlong *)*puVar10;
            (**(code **)(*plVar9 + 0x18))(plVar9,local_7a4);
            pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_AWARD_ELITESPONSOR");
            local_7c8 = iVar5;
            _snprintf(local_548,0x100,pcVar16);
            local_449 = 0;
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            (**(code **)(*(longlong *)*local_788 + 0x70))((longlong *)*local_788,*(undefined4 *)(puVar20 + 3),local_548);
            if (lVar14 < lVar13 + iVar5) {
              if (puVar11 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar11;
              }
              if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              puVar10 = local_788;
              cVar4 = (**(code **)(*(longlong *)*local_788 + 0x48))();
              if (cVar4 != '\0') {
                memset(local_548,0,0x100);
                pIVar15 = theInstance();
                pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_AWARD_ELITESPONSOR1");
                _snprintf(local_548,0x100,pcVar16);
                local_449 = 0;
                if (puVar11 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar19 = uVar21;
                }
                else {
                  uVar19 = *puVar11;
                }
                if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                (**(code **)(*(longlong *)*puVar10 + 0x70))((longlong *)*puVar10,*(undefined4 *)(puVar20 + 3),local_548);
              }
            }
            plVar9 = local_740;
            local_768 = (ulonglong *)0x0;
            if (local_738 < local_740) {
              _invalid_parameter_noinfo();
            }
            local_768 = local_758[0];
            plStack_760 = plVar9;
            puVar10 = local_758[0];
            while( true ) {
              plVar12 = local_738;
              plVar9 = plStack_760;
              local_5e8 = (ulonglong *)0x0;
              if (local_738 < local_740) {
                _invalid_parameter_noinfo();
              }
              local_5e8 = local_758[0];
              if ((puVar10 == (ulonglong *)0x0) || (puVar10 != local_758[0])) {
                _invalid_parameter_noinfo();
              }
              if (plVar9 == plVar12) break;
              if (puVar10 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar10;
              }
              if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                _invalid_parameter_noinfo();
              }
              plVar12 = (longlong *)*plVar9;
              if (plVar12 == (longlong *)0x0) {
LAB_141695a58:
                if (puVar10 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar19 = uVar21;
                }
                else {
                  uVar19 = *puVar10;
                }
                if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                  _invalid_parameter_noinfo();
                }
                plStack_760 = plVar9 + 1;
              }
              else {
                plVar17 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12);
                if (puVar11 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar19 = uVar21;
                }
                else {
                  uVar19 = *puVar11;
                }
                if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                iVar5 = (**(code **)(*plVar17 + 0x40))(plVar17);
                if (iVar5 != *(int *)(puVar20 + 3)) goto LAB_141695a58;
                plVar9 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,5);
                (**(code **)(*plVar9 + 0xb0))(plVar9,local_79c);
                plVar9 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,7);
                (**(code **)(*plVar9 + 0xb0))(plVar9,1);
                (**(code **)(*plVar12 + 0x38))(plVar12,1);
                (**(code **)*plVar12)(plVar12,1);
                local_588 = local_768;
                plStack_580 = plStack_760;
                puVar18 = FUN_141694130(local_758,&local_698,(longlong)&local_588);
                puVar10 = (ulonglong *)*puVar18;
                plStack_760 = (longlong *)puVar18[1];
                local_768 = puVar10;
              }
            }
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
            }
            if (*(char *)((longlong)puVar20 + 0x21) == '\0') {
              puVar18 = puVar20;
              puVar3 = (undefined8 *)puVar20[2];
              if (*(char *)((longlong)puVar20[2] + 0x21) == '\0') {
                do {
                  puVar20 = puVar3;
                  puVar3 = (undefined8 *)*puVar20;
                } while (*(char *)((longlong)*puVar20 + 0x21) == '\0');
                uVar22 = (ulonglong)local_7a8;
                local_6e0 = puVar20;
              }
              else {
                do {
                  puVar20 = (undefined8 *)puVar18[1];
                  if (*(char *)((longlong)puVar20 + 0x21) != '\0') break;
                  bVar23 = puVar18 == (undefined8 *)puVar20[2];
                  puVar18 = puVar20;
                } while (bVar23);
                uVar22 = (ulonglong)local_7a8;
              }
            }
            else {
              _invalid_parameter_noinfo();
              uVar22 = (ulonglong)local_7a8;
            }
          }
          puVar20 = (undefined8 *)*local_6a8;
          local_5c8 = local_6d8[0];
LAB_141695b30:
          puVar18 = local_6a8;
          local_558 = local_6d8[0];
          if ((puVar2 == (ulonglong *)0x0) || (puVar2 != local_6d8[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar20 != puVar18) {
            memset(local_548,0,0x100);
            pIVar15 = theInstance();
            plVar9 = (longlong *)*puVar10;
            (**(code **)(*plVar9 + 0x18))(plVar9,local_794);
            pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_LOSE_ELITESPONSOR");
            _snprintf(local_548,0x100,pcVar16);
            local_449 = 0;
            if (puVar2 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar2;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            plVar9 = (longlong *)*puVar10;
            (**(code **)(*plVar9 + 0x70))(plVar9,*(undefined4 *)(puVar20 + 3),local_548);
            if (puVar2 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
            }
            if (*(char *)((longlong)puVar20 + 0x21) == '\0') {
              puVar18 = puVar20;
              puVar3 = (undefined8 *)puVar20[2];
              if (*(char *)((longlong)puVar20[2] + 0x21) == '\0') {
                do {
                  puVar20 = puVar3;
                  puVar3 = (undefined8 *)*puVar20;
                  local_6e8 = puVar20;
                } while (*(char *)((longlong)*puVar20 + 0x21) == '\0');
              }
              else {
                do {
                  puVar20 = (undefined8 *)puVar18[1];
                  if (*(char *)((longlong)puVar20 + 0x21) != '\0') break;
                  bVar23 = puVar18 == (undefined8 *)puVar20[2];
                  puVar18 = puVar20;
                } while (bVar23);
              }
            }
            else {
              _invalid_parameter_noinfo();
            }
            goto LAB_141695b30;
          }
          if (local_778 != (ulonglong *)0x0) {
            (**(code **)*local_778)(local_778);
          }
          puStack_770 = local_6a8;
          local_778 = local_6d8[0];
          uStack_780 = *local_6a8;
          local_788 = local_6d8[0];
          local_5a8 = local_6d8[0];
          puStack_5a0 = local_6a8;
          local_628 = local_6d8[0];
          uStack_620 = uStack_780;
          FUN_141693c40((longlong *)local_6d8,(longlong *)&local_698,(longlong *)&local_628,(longlong *)&local_5a8);
          operator_delete(local_6a8);
          local_6a8 = (undefined8 *)0x0;
          local_6a0 = 0;
          operator_delete(local_6d8[0]);
          puStack_710 = local_648;
          local_718 = local_678[0];
          puStack_700 = (undefined8 *)*local_648;
          local_708 = local_678[0];
          local_5f8 = local_678[0];
          puStack_5f0 = local_648;
          local_698 = local_678[0];
          uStack_690 = puStack_700;
          FUN_141693c40((longlong *)local_678,(longlong *)&local_628,(longlong *)&local_698,(longlong *)&local_5f8);
          operator_delete(local_648);
          local_648 = (undefined8 *)0x0;
          local_640 = 0;
          operator_delete(local_678[0]);
          if (local_740 != (longlong *)0x0) {
            operator_delete(local_740);
          }
          local_740 = (longlong *)0x0;
          local_738 = (longlong *)0x0;
          local_730 = 0;
          operator_delete(local_758[0]);
        }
      }
    }
  }
  return;
LAB_14169547f:
  (**(code **)(*puVar11 + 0x40))(puVar11,1);
  (**(code **)*puVar11)(puVar11);
  uVar22 = (ulonglong)local_7a8;
  puVar10 = local_778;
  param_2 = local_7a4;
  uVar6 = local_7a0;
LAB_14169558e:
  local_7a0 = uVar6 + 1;
  uVar19 = (ulonglong)local_7a0;
  goto LAB_1416951d3;
}




void * FUN_141695e70(void *param_1,uint param_2)

{
  FUN_141691540();
  if ((param_2 & 1) != 0) {
    FUN_141692280(param_1);
  }
  return param_1;
}




undefined1 FUN_141695ea0(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return 0;
  }
  *param_1 = param_2;
  return 1;
}




longlong FUN_141695f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141695f52;
  }
  lVar2 = *plVar1;
LAB_141695f52:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141695f70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141695f92;
  }
  lVar2 = *plVar1;
LAB_141695f92:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141695fb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141695ff0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416a74e8);
}




longlong FUN_141696080(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong * FUN_1416960e0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141696110;
  }
  else {
LAB_141696110:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141696138;
  }
  _invalid_parameter_noinfo();
LAB_141696138:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141696160(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_1 << 3);
  return;
}




void * FUN_1416961f0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141696290(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141696310(void *param_1,longlong param_2,void *param_3)

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




void FUN_141696350(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_141691540();
    FUN_141692280(param_1);
  }
  return;
}




longlong FUN_141696380(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416963a2;
  }
  lVar2 = *plVar1;
LAB_1416963a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416963c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416963e2;
  }
  lVar2 = *plVar1;
LAB_1416963e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141696400(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141696440(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141696460(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1416964e0(longlong *param_1,longlong param_2)

{
  FUN_1416960e0(param_1,param_2);
  return param_1;
}




void * FUN_141696520(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141696590(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416965d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1416965f0(longlong param_1,ulonglong param_2)

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
      FUN_141695ff0();
    }
    lVar1 = FUN_141696460(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141696660(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141696690(undefined8 *param_1)

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




longlong * FUN_1416966d0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14169673a;
  }
  _invalid_parameter_noinfo();
LAB_14169673a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141696770(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1416967d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141696840(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416968b0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416968f0(undefined8 *param_1)

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




undefined8 * FUN_141696930(undefined8 *param_1)

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




undefined8 * FUN_141696980(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_141696a10(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141696a50(undefined8 *param_1)

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




undefined8 * FUN_141696ab0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141696b00(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141696b50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void * FUN_141696be0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_141696c20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  *param_1 = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 1);
    plVar2 = plVar1;
  }
  param_1[1] = plVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}




void FUN_141696c80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < puVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 < *(undefined8 **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    pvVar3 = (void *)*puVar4;
    if (pvVar3 != (void *)0x0) {
      FUN_141691540();
      FUN_141692280(pvVar3);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  operator_delete(*(void **)(param_1 + 8));
  return;
}




longlong FUN_141696dc0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x28) < plVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  do {
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
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(longlong **)(lVar4 + 0x20) <= plVar3) {
      _invalid_parameter_noinfo();
    }
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      if ((param_2 == *(int *)(lVar4 + 0xc)) && (param_3 == *(int *)(lVar4 + 0x10))) {
        return lVar4;
      }
      if ((param_2 == *(int *)(lVar4 + 0x10)) && (param_3 == *(int *)(lVar4 + 0xc))) {
        return lVar4;
      }
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
  } while( true );
}




int FUN_141696ea0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  iVar5 = 0;
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
    if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0x14) == param_2)) {
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
  return iVar5;
}




void FUN_141696f70(undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 local_res8;
  CMsg local_458 [1048];
  
  FUN_14169c3c0(local_458);
  bVar5 = false;
  local_res8 = 1;
  iVar12 = 0;
  plVar11 = (longlong *)param_1[4];
  if ((longlong *)param_1[5] < plVar11) {
    _invalid_parameter_noinfo();
  }
  plVar3 = (longlong *)param_1[1];
  bVar6 = bVar5;
  while( true ) {
    plVar4 = (longlong *)param_1[5];
    if (plVar4 < (longlong *)param_1[4]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)param_1[1])) {
      _invalid_parameter_noinfo();
    }
    if (plVar11 == plVar4) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar3;
    }
    if (*(longlong **)(lVar10 + 0x20) <= plVar11) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *plVar11;
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x14) == param_2)) {
      if ((bVar5) && (iVar12 < 0x30)) {
        uVar1 = *(undefined4 *)(lVar10 + 0x10);
        uVar2 = *(undefined4 *)(lVar10 + 0xc);
        iVar7 = FUN_141691630(lVar10);
        iVar8 = FUN_141691610(lVar10);
        FUN_14169c550((longlong)local_458,uVar2,uVar1,iVar8,iVar7);
        bVar5 = bVar6;
      }
      else {
        uVar1 = *(undefined4 *)(lVar10 + 0x10);
        uVar2 = *(undefined4 *)(lVar10 + 0xc);
        iVar7 = FUN_141691630(lVar10);
        iVar8 = FUN_141691610(lVar10);
        uVar9 = FUN_14169c470(local_458,uVar2,uVar1,iVar8,iVar7,(short)param_2,local_res8);
        bVar5 = bVar6;
        if ((char)uVar9 != '\0') {
          bVar5 = true;
          bVar6 = true;
        }
      }
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 0x30) {
      local_res8 = 0;
      iVar12 = 0;
      if (bVar5) {
        (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_3,local_458);
        bVar6 = false;
        bVar5 = bVar6;
      }
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar3;
    }
    if (*(longlong **)(lVar10 + 0x20) <= plVar11) {
      _invalid_parameter_noinfo();
    }
    plVar11 = plVar11 + 1;
  }
  if (bVar5) {
    (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_3,local_458);
  }
  FUN_14169c410((undefined8 *)local_458);
  return;
}




undefined8 * FUN_141697190(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_141697250(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141695ff0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141696460(param_1 + 0x10,uVar8);
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
      FUN_141696be0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141696be0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141696840(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_141697500(void)

{
  undefined8 *puVar1;
  
  if (DAT_1416a8430 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x38);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_1416a8430 = (undefined8 *)0x0;
    }
    else {
      DAT_1416a8430 = FUN_141696c20(puVar1);
    }
  }
  return;
}




void * FUN_141697550(void *param_1,uint param_2)

{
  FUN_141696c80((longlong)param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141697580(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  rsize_t _DstSize;
  undefined8 *_Dst;
  
  _Dst = *(undefined8 **)(param_1 + 0x20);
  if (*(undefined8 **)(param_1 + 0x28) < _Dst) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 < *(undefined8 **)(param_1 + 0x20)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == puVar2) {
      return;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    pvVar3 = (void *)*_Dst;
    if ((pvVar3 != (void *)0x0) && ((param_2 == *(int *)((longlong)pvVar3 + 0xc) || (param_2 == *(int *)((longlong)pvVar3 + 0x10))))) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  FUN_141691540();
  FUN_141692280(pvVar3);
  lVar4 = *(longlong *)(param_1 + 0x28) - (longlong)(_Dst + 1) >> 3;
  if (0 < lVar4) {
    _DstSize = lVar4 << 3;
    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
  if ((_Dst < *(undefined8 **)(param_1 + 0x20)) || (*(undefined8 **)(param_1 + 0x28) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  return;
}




longlong * FUN_1416976c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141697250((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416977b4;
  }
  _invalid_parameter_noinfo();
LAB_1416977b4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416977f0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_1416a8430;
  if (DAT_1416a8430 != (void *)0x0) {
    FUN_141696c80((longlong)DAT_1416a8430);
    operator_delete(pvVar1);
  }
  return;
}




void FUN_141697820(longlong *param_1,undefined8 *param_2)

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
  FUN_1416976c0(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_1416978d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = (longlong *)FUN_141692220(0x28);
  if (local_18 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = FUN_141691510(local_18,param_2,param_3,param_4);
  }
  if ((plVar1 != (longlong *)0x0) && (local_18 = plVar1, uVar2 = FUN_141691550(plVar1,*param_1), (char)uVar2 != '\0')) {
    FUN_141697820(param_1 + 1,&local_18);
    return plVar1;
  }
  return (longlong *)0x0;
}




void FUN_141697970(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141697980(void)

{
  return 0;
}




undefined8 FUN_141697990(void)

{
  return 0;
}




undefined8 FUN_1416979a0(void)

{
  return 0;
}




undefined8 FUN_1416979b0(void)

{
  return 0;
}




undefined8 * FUN_1416979c0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141697a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = sponsor::CModule::vftable;
  plVar1 = (longlong *)param_1[0x85];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_14169c410(param_1 + 0x86);
  FUN_14169c280(param_1 + 3);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_141697a80(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_141697aa0(longlong param_1)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  if (*(longlong *)(param_1 + 0x428) == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))(*(longlong **)(param_1 + 0x10),0x1a);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_141697f20(*(longlong *)(param_1 + 0x428),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1416a0590);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_141697b80(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x428) {
      plVar2 = (longlong *)(param_1 + 0x18);
    }
    else {
      if (param_2[1] != 0x429) {
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




void FUN_141697be0(longlong param_1)

{
  FUN_141698000(*(longlong *)(param_1 + 0x428));
  return;
}




bool FUN_141697bf0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_1416982f0();
  *(undefined8 **)(param_1 + 0x428) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1416a0590);
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x428,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),0x429,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),0x1a,*(undefined8 *)(param_1 + 0x428));
  return cVar1 != '\0';
}




undefined8 FUN_141697c90(void)

{
  return 1;
}




undefined8 * FUN_141697ca0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = sponsor::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_2;
  FUN_14169c230((CMsg *)(param_1 + 3));
  param_1[0x85] = 0;
  FUN_14169c3c0((CMsg *)(param_1 + 0x86));
  return param_1;
}




undefined8 * FUN_141697d00(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = sponsor::CModule::vftable;
  plVar1 = (longlong *)param_1[0x85];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_14169c410(param_1 + 0x86);
  FUN_14169c280(param_1 + 3);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_141697d90(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_3 != (ushort *)0x0) && (*param_3 <= param_4)) {
    if (param_3[1] == 0x428) {
      plVar2 = (longlong *)(param_1 + 0x18);
    }
    else {
      if (param_3[1] != 0x429) {
        return 0;
      }
      plVar2 = (longlong *)(param_1 + 0x430);
    }
    cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_3);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x428));
      return (short)plVar2[1];
    }
  }
  return 0;
}




longlong * ModuleCreate(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  
                    /* 0x7e30  1  ModuleCreate */
  plVar2 = operator_new(0x840);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)sponsor::CModule::vftable;
    *(undefined4 *)(plVar2 + 1) = param_2;
    plVar2[2] = param_1;
    FUN_14169c230((CMsg *)(plVar2 + 3));
    plVar2[0x85] = 0;
    FUN_14169c3c0((CMsg *)(plVar2 + 0x86));
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141697bf0((longlong)plVar2);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




void * FUN_141697ee0(void *param_1,uint param_2)

{
  FUN_14169a030((longlong)param_1);
  if ((param_2 & 1) != 0) {
    FUN_141698df0(param_1);
  }
  return param_1;
}




ulonglong FUN_141697f20(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong extraout_RAX;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar5;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    uVar5 = extraout_RAX;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    puVar2 = (undefined8 *)FUN_141698d90(0x40);
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = FUN_1416998f0(puVar2);
    }
    *(longlong **)(param_1 + 0x10) = plVar3;
    if ((plVar3 != (longlong *)0x0) && (uVar4 = FUN_14169a320(plVar3,param_2), (char)uVar4 != '\0')) {
      plVar3 = (longlong *)FUN_141697500();
      *(longlong **)(param_1 + 0x18) = plVar3;
      if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_141695ea0(plVar3,param_2), cVar1 != '\0')) {
        return CONCAT71(extraout_var,1);
      }
      log_InlineLogERROR("m_pElitePKMgr Init() false");
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    log_InlineLogERROR("m_pSynCompSponsor Init() false");
    uVar5 = extraout_RAX_01;
  }
  return uVar5 & 0xffffffffffffff00;
}




void FUN_141698000(longlong param_1)

{
  if (*(ulonglong **)(param_1 + 0x10) != (ulonglong *)0x0) {
    FUN_14169c0a0(*(ulonglong **)(param_1 + 0x10));
  }
  return;
}




void FUN_141698020(longlong param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,short param_7)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    if (param_7 == 1) {
      FUN_14169a590(*(undefined8 **)(param_1 + 0x10),param_2,param_3,param_4,param_5 * 100,param_6);
    }
    else if (param_7 == 2) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_3,param_6);
      if (((iVar1 != 0) &&
          ((plVar2 = (longlong *)FUN_141696dc0(*(longlong *)(param_1 + 0x18),param_3,iVar1), plVar2 != (longlong *)0x0 ||
           (plVar2 = FUN_1416978d0(*(longlong **)(param_1 + 0x18),param_3,iVar1,param_6), plVar2 != (longlong *)0x0)))) &&
         (uVar3 = FUN_141691650(plVar2,param_2,param_3,param_5 * 100), (char)uVar3 != '\0')) {
        FUN_141696f70(*(undefined8 **)(param_1 + 0x18),param_6,param_2);
      }
    }
    else {
      log_InlineLogERROR("error sponsor type%d");
    }
  }
  return;
}




void FUN_141698120(longlong param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)FUN_141696dc0(*(longlong *)(param_1 + 0x18),param_2,param_3);
    if (puVar1 != (ulonglong *)0x0) {
      FUN_1416948c0(puVar1);
    }
  }
  return;
}




void FUN_141698150(longlong param_1,int param_2,int param_3,short param_4)

{
  undefined8 *puVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (param_4 == 1) {
      FUN_14169b2e0(*(undefined8 **)(param_1 + 0x10),param_2,param_3);
    }
    else {
      if (param_4 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00014169819c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        log_InlineLogERROR("error sponsor award type%d");
        return;
      }
      puVar1 = (undefined8 *)FUN_141696dc0(*(longlong *)(param_1 + 0x18),param_2,param_3);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_141695050(puVar1,param_2,param_3);
        FUN_141697580(*(longlong *)(param_1 + 0x18),param_2);
        return;
      }
    }
  }
  return;
}




void FUN_141698200(longlong param_1,undefined4 param_2,ushort param_3)

{
  if (param_3 == 4) {
    FUN_141699a40(*(undefined8 **)(param_1 + 0x10),param_2);
    return;
  }
  FUN_141696f70(*(undefined8 **)(param_1 + 0x18),(uint)param_3,param_2);
  return;
}




void FUN_141698230(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_14169a030((longlong)param_1);
    FUN_141698df0(param_1);
  }
  return;
}




void FUN_141698280(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = sponsor::CSponsorMgr::vftable;
  if (param_1[2] != 0) {
    pvVar1 = (void *)param_1[2];
    if (pvVar1 != (void *)0x0) {
      FUN_14169a030((longlong)pvVar1);
      FUN_141698df0(pvVar1);
    }
    param_1[2] = 0;
    param_1[2] = 0;
  }
  FUN_1416977f0();
  return;
}




undefined8 * FUN_1416982f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = sponsor::CSponsorMgr::vftable;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}




undefined8 * FUN_141698340(undefined8 *param_1,uint param_2)

{
  FUN_141698280(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141698370(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  IStringManager *pIVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int local_1c0;
  char local_1b8;
  char local_1b7;
  short local_1b6;
  uint local_1b4;
  longlong local_1b0;
  int local_1a8;
  longlong *local_1a0;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178 [3];
  longlong *local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  char local_138 [255];
  undefined1 local_39;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_140 = 0xfffffffffffffffe;
    local_38 = DAT_1416a8400 ^ (ulonglong)auStack_1e8;
    local_1b7 = '\x01';
    local_1b8 = '\x01';
    plVar11 = (longlong *)0x0;
    local_1b4 = 0;
    local_1b0 = param_1;
    local_1a8 = param_2;
    local_148 = param_1;
    local_1a0 = operator_new(8);
    local_178[0] = plVar11;
    if (local_1a0 != (longlong *)0x0) {
      *local_1a0 = (longlong)local_178;
      local_178[0] = local_1a0;
    }
    local_160 = (longlong *)0x0;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_190 = local_1a0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),local_178,param_2,6);
    plVar12 = local_160;
    if ((longlong)local_158 - (longlong)local_160 >> 3 != 0) {
      local_190 = (longlong *)0x0;
      if (local_158 < local_160) {
        _invalid_parameter_noinfo();
      }
      plVar1 = local_178[0];
      local_190 = local_178[0];
      plVar8 = plVar11;
      while( true ) {
        plVar13 = local_158;
        local_1a0 = (longlong *)0x0;
        local_188 = plVar12;
        if (local_158 < local_160) {
          _invalid_parameter_noinfo();
        }
        local_1a0 = local_178[0];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_178[0])) {
          _invalid_parameter_noinfo();
        }
        iVar6 = (int)plVar8;
        if (plVar12 == plVar13) break;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar13 = plVar11;
        }
        else {
          plVar13 = (longlong *)*plVar1;
        }
        if ((longlong *)plVar13[4] <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar13 = (longlong *)*plVar12;
        local_180 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,3);
          uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
          plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,4);
          uVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
          local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,uVar4);
          plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,1);
          local_1b6 = (**(code **)(*plVar7 + 0x30))(plVar7);
          plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,6);
          local_1c8 = (**(code **)(*plVar7 + 0x48))(plVar7);
          cVar2 = (**(code **)(**(longlong **)(local_1b0 + 8) + 0x38))(*(longlong **)(local_1b0 + 8),uVar3,(ulonglong)local_1a0 & 0xffffffff,local_1b6);
          if (cVar2 == '\0') {
            plVar8 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,5);
            iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
            local_1b4 = iVar6 + iVar5;
            plVar8 = (longlong *)(ulonglong)local_1b4;
            plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,7);
            iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
            if (iVar6 == 0) {
              if (local_1b6 == 1) {
                plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,5);
                local_1c0 = (**(code **)(*plVar7 + 0x48))(plVar7);
                local_1c0 = local_1c0 * 1000;
                local_1c8 = param_2;
                tq::MyLogSave("gmlog/syncompetesponsor","syncompete idTargetSyn[%d], idOppnentSyn[%d] unnormal return user[%d] money[%d]");
                local_1b7 = '\0';
              }
              else {
                plVar7 = (longlong *)(**(code **)(*plVar13 + 0x10))(plVar13,5);
                local_1c0 = (**(code **)(*plVar7 + 0x48))(plVar7);
                local_1c0 = local_1c0 * 1000;
                local_1c8 = param_2;
                tq::MyLogSave("gmlog/elitecompetesponsor","elitecompete idTarget[%d], idOppnent[%d] unnormal return user[%d] money[%d]");
                local_1b8 = '\0';
              }
            }
            (**(code **)(*plVar13 + 0x40))(plVar13,0);
          }
          (**(code **)*plVar13)(plVar13,1);
          local_180 = (longlong *)0x0;
          param_1 = local_1b0;
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar13 = plVar11;
        }
        else {
          plVar13 = (longlong *)*plVar1;
        }
        if ((longlong *)plVar13[4] <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar12 = plVar12 + 1;
      }
      if (0 < iVar6) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,(longlong)(iVar6 * 1000));
        if (local_1b7 == '\0') {
          memset(local_138,0,0x100);
          pIVar9 = theInstance();
          pcVar10 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_UNNOMAL_SYNCOMPETE");
          _snprintf(local_138,0x100,pcVar10);
          local_39 = 0;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2,local_138);
        }
        if (local_1b8 == '\0') {
          memset(local_138,0,0x100);
          pIVar9 = theInstance();
          pcVar10 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_UNNOMAL_ELITECOMPETE");
          _snprintf(local_138,0x100,pcVar10);
          local_39 = 0;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2,local_138);
        }
      }
    }
    if (local_160 != (longlong *)0x0) {
      operator_delete(local_160);
    }
    local_160 = (longlong *)0x0;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    operator_delete(local_178[0]);
  }
  return;
}




void FUN_141698850(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"invalid bitset<N> position");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416a7600);
}




longlong FUN_141698900(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141698922;
  }
  lVar2 = *plVar1;
LAB_141698922:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141698940(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141698962;
  }
  lVar2 = *plVar1;
LAB_141698962:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141698980(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1416989d0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416a74e8);
}




longlong FUN_141698a60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong * FUN_141698ac0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141698af0;
  }
  else {
LAB_141698af0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141698b18;
  }
  _invalid_parameter_noinfo();
LAB_141698b18:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141698b40(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_1 << 3);
  return;
}




void * FUN_141698bd0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141698c70(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141698cf0(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_141698d30(void)

{
  if ((DAT_1416a8440 & 1) == 0) {
    DAT_1416a8440 = DAT_1416a8440 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8438,"CSynCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fc00);
  }
  return &DAT_1416a8438;
}




void FUN_141698d90(__uint64 param_1)

{
  if ((DAT_1416a8440 & 1) == 0) {
    DAT_1416a8440 = DAT_1416a8440 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8438,"CSynCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fc00);
  }
                    /* WARNING: Could not recover jumptable at 0x000141698de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416a8438,param_1);
  return;
}




void FUN_141698df0(void *param_1)

{
  if ((DAT_1416a8440 & 1) == 0) {
    DAT_1416a8440 = DAT_1416a8440 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8438,"CSynCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fc00);
  }
                    /* WARNING: Could not recover jumptable at 0x000141698e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416a8438,param_1);
  return;
}




void FUN_141698e50(void *param_1)

{
  if ((DAT_1416a8440 & 1) == 0) {
    DAT_1416a8440 = DAT_1416a8440 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416a8438,"CSynCompeteSponsor");
    atexit((_func_5014 *)&LAB_14169fc00);
  }
                    /* WARNING: Could not recover jumptable at 0x000141698ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416a8438,param_1);
  return;
}




longlong FUN_141698eb0(longlong param_1,ulonglong param_2,char param_3)

{
  uint *puVar1;
  byte bVar2;
  
  if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_141698850();
  }
  bVar2 = (byte)param_2 & 0x1f;
  if (param_3 != '\0') {
    puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << bVar2;
    return param_1;
  }
  puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar2);
  return param_1;
}




bool FUN_141698f00(longlong param_1,ulonglong param_2)

{
  if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_141698850();
  }
  return (*(uint *)(param_1 + (param_2 >> 5) * 4) >> ((byte)param_2 & 0x1f) & 1) != 0;
}




longlong FUN_141698f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141698f52;
  }
  lVar2 = *plVar1;
LAB_141698f52:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141698f70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141698f92;
  }
  lVar2 = *plVar1;
LAB_141698f92:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141698fb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141699000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141699020(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416a75a0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1416990a0(longlong *param_1,longlong param_2)

{
  FUN_141698ac0(param_1,param_2);
  return param_1;
}




void * FUN_1416990e0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141699150(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416991b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1416991d0(longlong param_1,ulonglong param_2)

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
      FUN_1416989d0();
    }
    lVar1 = FUN_141699020(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141699240(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141699270(undefined8 *param_1)

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




longlong * FUN_1416992b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14169931a;
  }
  _invalid_parameter_noinfo();
LAB_14169931a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141699350(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1416993b0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141699420(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141699490(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416994d0(undefined8 *param_1)

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




undefined8 * FUN_141699510(undefined8 *param_1)

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




undefined8 * FUN_141699560(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1416995f0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141699630(undefined8 *param_1)

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




undefined8 * FUN_141699690(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416996e0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141699730(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141699790(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_1416998b0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_1416998f0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar1 = operator_new(8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 2);
    plVar2 = plVar1;
  }
  param_1[2] = plVar2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}




int * FUN_141699960(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < puVar4) {
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
    if (puVar4 == puVar2) {
      return (int *)0x0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    piVar3 = (int *)*puVar4;
    if (piVar3 != (int *)0x0) {
      if ((*piVar3 == param_2) && (piVar3[2] == param_3)) {
        return piVar3;
      }
      if ((*piVar3 == param_3) && (piVar3[2] == param_2)) {
        return piVar3;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  } while( true );
}




void FUN_141699a40(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  CMsg local_428 [1040];
  
  FUN_14169c3c0(local_428);
  bVar4 = false;
  puVar6 = (undefined8 *)param_1[5];
  if ((undefined8 *)param_1[6] < puVar6) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)param_1[2];
  while( true ) {
    puVar2 = (undefined8 *)param_1[6];
    if (puVar2 < (undefined8 *)param_1[5]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1;
    }
    if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined4 *)*puVar6;
    if (puVar3 != (undefined4 *)0x0) {
      if (bVar4) {
        FUN_14169c550((longlong)local_428,*puVar3,puVar3[2],(int)puVar3[1] / 100,(int)puVar3[3] / 100);
      }
      else {
        uVar5 = FUN_14169c470(local_428,*puVar3,puVar3[2],(int)puVar3[1] / 100,(int)puVar3[3] / 100,4,1);
        if ((char)uVar5 != '\0') {
          bVar4 = true;
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
    if (*(undefined8 **)(lVar7 + 0x20) <= puVar6) {
      _invalid_parameter_noinfo();
    }
    puVar6 = puVar6 + 1;
  }
  if (bVar4) {
    (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_2,local_428);
  }
  FUN_14169c410((undefined8 *)local_428);
  return;
}




undefined8 * FUN_141699c00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_141699c90(longlong *param_1)

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




void FUN_141699d80(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1416989d0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141699020(param_1 + 0x10,uVar8);
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
      FUN_1416998b0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_1416998b0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141699420(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_14169a030(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (*(undefined8 **)(param_1 + 0x30) < puVar4) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    if ((void *)*puVar4 != (void *)0x0) {
      operator_delete((void *)*puVar4);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar2;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  FUN_141699c90(plVar1);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  operator_delete((void *)*plVar1);
  return;
}




longlong * FUN_14169a140(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141699d80((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_14169a234;
  }
  _invalid_parameter_noinfo();
LAB_14169a234:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_14169a270(longlong *param_1,undefined8 *param_2)

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
  FUN_14169a140(param_1,local_18,&local_28,param_2);
  return;
}




ulonglong FUN_14169a320(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  longlong *plVar6;
  tm *ptVar7;
  ulonglong extraout_RAX_00;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  __time64_t local_res18;
  int *local_res20;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416a0590);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *param_1 = param_2;
    plVar6 = (longlong *)InstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,"SELECT * FROM cq_competesponsor WHERE competetype = 1",1);
    uVar11 = 0;
    if (plVar6 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (0 < iVar1) {
        local_res18 = 0;
        _time64(&local_res18);
        ptVar7 = _localtime64(&local_res18);
        if (ptVar7 == (tm *)0x0) {
          log_InlineLogERROR(&DAT_1416a0590);
          return extraout_RAX_00 & 0xffffffffffffff00;
        }
        iVar12 = 0;
        iVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
        if (0 < iVar1) {
          do {
            (**(code **)(*plVar6 + 0x30))(plVar6,(longlong)iVar12);
            plVar8 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
            if (plVar8 != (longlong *)0x0) {
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,6);
              iVar1 = (**(code **)(*plVar9 + 0x48))(plVar9);
              if (ptVar7->tm_wday <= iVar1) {
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,3);
                iVar2 = (**(code **)(*plVar9 + 0x40))(plVar9);
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,4);
                iVar3 = (**(code **)(*plVar9 + 0x40))(plVar9);
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,5);
                iVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
                piVar10 = FUN_141699960((longlong)param_1,iVar2,iVar3);
                if (piVar10 == (int *)0x0) {
                  piVar10 = operator_new(0x14);
                  if (piVar10 == (int *)0x0) {
                    log_InlineLogERROR("Init SponsorInfo Error!");
                    (**(code **)*plVar8)(plVar8,1);
                    goto LAB_14169a55c;
                  }
                  *piVar10 = iVar2;
                  piVar10[1] = iVar4;
                  piVar10[2] = iVar3;
                  piVar10[4] = iVar1;
                  piVar10[3] = 0;
                  local_res20 = piVar10;
                  FUN_14169a270(param_1 + 2,&local_res20);
                }
                else if (*piVar10 == iVar2) {
                  piVar10[1] = piVar10[1] + iVar4;
                }
                else {
                  piVar10[3] = piVar10[3] + iVar4;
                }
              }
              (**(code **)*plVar8)(plVar8,1);
            }
LAB_14169a55c:
            iVar12 = iVar12 + 1;
            iVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
          } while (iVar12 < iVar1);
        }
      }
      uVar11 = (**(code **)*plVar6)(plVar6);
    }
    uVar5 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  }
  return uVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14169a940(ulonglong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  IStringManager *pIVar12;
  undefined8 uVar13;
  char *pcVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_7c8 [32];
  undefined8 local_7a8;
  undefined8 local_7a0;
  int local_798;
  uint local_788 [2];
  ulonglong *local_780;
  int local_770;
  int local_76c;
  ulonglong *local_768;
  undefined8 *puStack_760;
  ulonglong *local_758;
  undefined8 uStack_750;
  ulonglong *local_748;
  undefined8 *puStack_740;
  ulonglong *local_738;
  undefined8 *puStack_730;
  uint local_728;
  int local_724;
  uint local_720;
  undefined4 local_71c;
  ulonglong *local_718;
  undefined8 *local_710;
  ulonglong *local_708 [6];
  undefined8 *local_6d8;
  undefined8 local_6d0;
  ulonglong *local_6c8;
  undefined8 *local_6b8;
  ulonglong *local_6b0 [3];
  ulonglong *local_698;
  undefined8 uStack_690;
  ulonglong *local_678;
  undefined8 local_668;
  ulonglong *local_660;
  ulonglong *local_648;
  undefined8 *puStack_640;
  char local_638 [255];
  undefined1 local_539;
  char local_538 [255];
  undefined1 local_439;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_668 = 0xfffffffffffffffe;
  local_38 = DAT_1416a8400 ^ (ulonglong)auStack_7c8;
  local_76c = param_2;
  local_768 = param_1;
  local_738 = param_1;
  local_724 = param_2;
  plVar10 = (longlong *)InstanceGet();
  _snprintf(local_438,0x400,"SELECT * FROM cq_competesponsor WHERE competetype = 1 && starttime = %d");
  local_39 = 0;
  puVar11 = (ulonglong *)(**(code **)(*plVar10 + 0x10))(plVar10,local_438,2);
  if (puVar11 != (ulonglong *)0x0) {
    local_758 = puVar11;
    iVar7 = (**(code **)(*puVar11 + 0x40))(puVar11);
    if (iVar7 < 1) {
      (**(code **)*puVar11)(puVar11);
    }
    else {
      FUN_141694790(local_708);
      puVar17 = (ulonglong *)param_1[5];
      uVar23 = 0;
      local_6c8 = (ulonglong *)0x0;
      local_748 = puVar17;
      if ((undefined8 *)param_1[6] < puVar17) {
        _invalid_parameter_noinfo();
      }
      puVar22 = (ulonglong *)param_1[2];
      local_6c8 = puVar22;
      while( true ) {
        puVar16 = (undefined8 *)param_1[6];
        local_780 = (ulonglong *)0x0;
        if (puVar16 < (undefined8 *)param_1[5]) {
          _invalid_parameter_noinfo();
        }
        local_780 = (ulonglong *)param_1[2];
        if ((puVar22 == (ulonglong *)0x0) || (puVar22 != local_780)) {
          _invalid_parameter_noinfo();
        }
        if (puVar17 == puVar16) break;
        if (puVar22 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = uVar23;
        }
        else {
          uVar20 = *puVar22;
        }
        if (*(undefined8 **)(uVar20 + 0x20) <= puVar17) {
          _invalid_parameter_noinfo();
        }
        puVar4 = local_738;
        piVar2 = (int *)*puVar17;
        param_1 = local_738;
        if (piVar2 != (int *)0x0) {
          local_770 = (**(code **)(*(longlong *)*local_738 + 0x40))((longlong *)*local_738,*piVar2,piVar2[2],1);
          if (local_770 == 0) {
            log_InlineLogDBERROR(&DAT_1416a2dd0);
            log_InlineLogERROR("CSynCompeteSponsor::ProcessEndSponsor(GetMapID error idTarget=%u, idOppnent=%u");
          }
          FUN_141692f80((longlong)local_708);
          if ((piVar2[1] == 0) || (piVar2[3] == 0)) {
            (**(code **)(*puVar11 + 0x30))(puVar11);
            local_728 = 0;
            uVar20 = uVar23;
            while( true ) {
              iVar7 = (**(code **)(*puVar11 + 0x40))(puVar11);
              puVar17 = local_708[0];
              param_1 = local_738;
              if (iVar7 <= (int)uVar20) break;
              (**(code **)(*puVar11 + 0x30))(puVar11);
              plVar10 = (longlong *)(**(code **)(*puVar11 + 0x38))(puVar11);
              if (plVar10 != (longlong *)0x0) {
                plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,5);
                uVar8 = (**(code **)(*plVar15 + 0x48))(plVar15);
                local_780 = (ulonglong *)CONCAT44(local_780._4_4_,uVar8);
                plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,2);
                local_788[0] = (**(code **)(*plVar15 + 0x40))(plVar15);
                plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,3);
                iVar7 = (**(code **)(*plVar15 + 0x40))(plVar15);
                plVar15 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,4);
                iVar9 = (**(code **)(*plVar15 + 0x40))(plVar15);
                if (((*piVar2 == iVar7) && (piVar2[2] == iVar9)) || ((*piVar2 == iVar9 && (piVar2[2] == iVar7)))) {
                  FUN_141694060((longlong *)local_708,(longlong *)&local_718,local_788);
                  puVar16 = local_6d8;
                  puVar11 = local_718;
                  local_678 = local_708[0];
                  if ((local_718 == (ulonglong *)0x0) || (local_718 != local_708[0])) {
                    _invalid_parameter_noinfo();
                  }
                  puVar21 = local_710;
                  uVar18 = local_788[0];
                  if (local_710 == puVar16) {
                    local_720 = local_788[0];
                    local_71c = (int)local_780;
                    FUN_141693eb0((longlong *)local_708,(longlong *)&local_698,&local_720);
                  }
                  else {
                    if (puVar11 == (ulonglong *)0x0) {
                      _invalid_parameter_noinfo();
                      uVar19 = uVar23;
                    }
                    else {
                      uVar19 = *puVar11;
                    }
                    if (puVar21 == *(undefined8 **)(uVar19 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    piVar1 = (int *)((longlong)puVar21 + 0x1c);
                    *piVar1 = *piVar1 + (int)local_780;
                    uVar18 = local_788[0];
                  }
                  cVar6 = (**(code **)(*(longlong *)*local_738 + 0x48))((longlong *)*local_738,uVar18);
                  if (cVar6 != '\0') {
                    (**(code **)(*plVar10 + 0x40))(plVar10,1);
                  }
                }
                (**(code **)*plVar10)(plVar10);
                puVar11 = local_758;
              }
              local_728 = (int)uVar20 + 1;
              uVar20 = (ulonglong)local_728;
            }
            if (piVar2[3] == 0) {
              iVar7 = *piVar2;
            }
            else {
              iVar7 = piVar2[2];
            }
            local_780 = (ulonglong *)CONCAT44(local_780._4_4_,iVar7);
            puVar16 = (undefined8 *)*local_6d8;
            local_660 = local_708[0];
LAB_14169ae10:
            puVar21 = local_6d8;
            local_6b0[0] = local_708[0];
            if ((puVar17 == (ulonglong *)0x0) || (puVar17 != local_708[0])) {
              _invalid_parameter_noinfo();
            }
            if (puVar16 != puVar21) {
              if (puVar17 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar20 = uVar23;
              }
              else {
                uVar20 = *puVar17;
              }
              if (puVar16 == *(undefined8 **)(uVar20 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              if (puVar17 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar20 = uVar23;
              }
              else {
                uVar20 = *puVar17;
              }
              if (puVar16 == *(undefined8 **)(uVar20 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(*(longlong *)*param_1 + 0x10))
                        ((longlong *)*param_1,*(undefined4 *)(puVar16 + 3),(longlong)(*(int *)((longlong)puVar16 + 0x1c) * 1000));
              pIVar12 = theInstance();
              plVar10 = (longlong *)*param_1;
              uVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,iVar7);
              (**(code **)(*plVar10 + 0x20))(plVar10,(ulonglong)local_780 & 0xffffffff);
              pcVar14 = (char *)(*(code *)**(undefined8 **)pIVar12)(pIVar12,"STR_END_SYNSPONSOR");
              local_7a8 = uVar13;
              _snprintf(local_638,0x100,pcVar14);
              local_539 = 0;
              if (puVar17 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar20 = uVar23;
              }
              else {
                uVar20 = *puVar17;
              }
              if (puVar16 == *(undefined8 **)(uVar20 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              cVar6 = (**(code **)(*(longlong *)*param_1 + 0x48))();
              if (cVar6 != '\0') {
                if (puVar17 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar20 = uVar23;
                }
                else {
                  uVar20 = *puVar17;
                }
                if (puVar16 == *(undefined8 **)(uVar20 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,*(undefined4 *)(puVar16 + 3),local_638);
              }
              if (puVar17 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
              }
              if (*(char *)((longlong)puVar16 + 0x21) == '\0') {
                puVar21 = puVar16;
                puVar5 = (undefined8 *)puVar16[2];
                iVar7 = (int)local_780;
                if (*(char *)((longlong)puVar16[2] + 0x21) == '\0') {
                  do {
                    puVar16 = puVar5;
                    puVar5 = (undefined8 *)*puVar16;
                    local_6b8 = puVar16;
                  } while (*(char *)((longlong)*puVar16 + 0x21) == '\0');
                }
                else {
                  do {
                    puVar16 = (undefined8 *)puVar21[1];
                    if (*(char *)((longlong)puVar16 + 0x21) != '\0') break;
                    bVar24 = puVar21 == (undefined8 *)puVar16[2];
                    puVar21 = puVar16;
                  } while (bVar24);
                }
              }
              else {
                _invalid_parameter_noinfo();
                iVar7 = (int)local_780;
              }
              goto LAB_14169ae10;
            }
            memset(local_638,0,0x100);
            pIVar12 = theInstance();
            (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,(ulonglong)local_780 & 0xffffffff);
            pcVar14 = (char *)(*(code *)**(undefined8 **)pIVar12)(pIVar12,"STR_END_SYNSPONSOR1");
            _snprintf(local_638,0x100,pcVar14);
            local_539 = 0;
            (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,local_770,local_638);
            puVar17 = local_748;
            puVar11 = local_758;
            puVar22 = local_6c8;
          }
          else {
            pIVar12 = theInstance();
            plVar10 = (longlong *)*puVar4;
            iVar7 = piVar2[3];
            uVar13 = (**(code **)(*plVar10 + 0x20))(plVar10,piVar2[2]);
            iVar9 = piVar2[1];
            (**(code **)(*plVar10 + 0x20))(plVar10,*piVar2);
            pcVar14 = (char *)(*(code *)**(undefined8 **)pIVar12)(pIVar12,"STR_END_SYNSPONSOR2");
            local_7a8 = CONCAT44(local_7a8._4_4_,iVar9 / 100);
            local_7a0 = uVar13;
            local_798 = iVar7 / 100;
            _snprintf(local_538,0x100,pcVar14);
            param_1 = local_738;
            local_439 = 0;
            (**(code **)(*(longlong *)*local_738 + 0x78))((longlong *)*local_738,local_770,local_538);
            puVar17 = local_748;
            puVar11 = local_758;
            puVar22 = local_6c8;
          }
        }
        if (puVar22 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = uVar23;
        }
        else {
          uVar20 = *puVar22;
        }
        if (*(undefined8 **)(uVar20 + 0x20) <= puVar17) {
          _invalid_parameter_noinfo();
        }
        puVar17 = puVar17 + 1;
        local_748 = puVar17;
      }
      if (puVar11 != (ulonglong *)0x0) {
        (**(code **)*puVar11)(puVar11);
      }
      iVar7 = local_76c;
      puVar16 = (undefined8 *)param_1[5];
      local_768 = (ulonglong *)0x0;
      if ((undefined8 *)param_1[6] < puVar16) {
        _invalid_parameter_noinfo();
      }
      puVar11 = (ulonglong *)param_1[2];
      local_768 = puVar11;
      puStack_760 = puVar16;
      while( true ) {
        puVar21 = puStack_760;
        puVar16 = (undefined8 *)param_1[6];
        local_718 = (ulonglong *)0x0;
        if (puVar16 < (undefined8 *)param_1[5]) {
          _invalid_parameter_noinfo();
        }
        local_718 = (ulonglong *)param_1[2];
        if ((puVar11 == (ulonglong *)0x0) || (puVar11 != local_718)) {
          _invalid_parameter_noinfo();
        }
        if (puVar21 == puVar16) break;
        if (puVar11 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar20 = uVar23;
        }
        else {
          uVar20 = *puVar11;
        }
        if (*(undefined8 **)(uVar20 + 0x20) <= puVar21) {
          _invalid_parameter_noinfo();
        }
        pvVar3 = (void *)*puVar21;
        if ((pvVar3 == (void *)0x0) || (*(int *)((longlong)pvVar3 + 0x10) != iVar7)) {
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar20 = uVar23;
          }
          else {
            uVar20 = *puVar11;
          }
          if (*(undefined8 **)(uVar20 + 0x20) <= puVar21) {
            _invalid_parameter_noinfo();
          }
          puStack_760 = puVar21 + 1;
        }
        else {
          operator_delete(pvVar3);
          local_738 = local_768;
          puStack_730 = puStack_760;
          puVar16 = FUN_141699c00(param_1 + 2,&local_698,(longlong)&local_738);
          puVar11 = (ulonglong *)*puVar16;
          puStack_760 = (undefined8 *)puVar16[1];
          local_768 = puVar11;
        }
      }
      puStack_740 = local_6d8;
      local_748 = local_708[0];
      uStack_750 = *local_6d8;
      local_758 = local_708[0];
      local_648 = local_708[0];
      puStack_640 = local_6d8;
      local_698 = local_708[0];
      uStack_690 = uStack_750;
      FUN_141693c40((longlong *)local_708,(longlong *)local_6b0,(longlong *)&local_698,(longlong *)&local_648);
      operator_delete(local_6d8);
      local_6d8 = (undefined8 *)0x0;
      local_6d0 = 0;
      operator_delete(local_708[0]);
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14169b2e0(undefined8 *param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  IStringManager *pIVar15;
  char *pcVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_7f8 [32];
  int local_7d8;
  int local_7d0;
  int local_7c8;
  uint local_7b8;
  int local_7b4;
  uint local_7b0;
  uint local_7ac;
  int local_7a8;
  int local_7a4;
  ulonglong *local_798;
  undefined8 uStack_790;
  ulonglong *local_788;
  undefined8 *puStack_780;
  int local_778;
  undefined8 local_770;
  ulonglong *local_768;
  longlong *plStack_760;
  int local_758;
  ulonglong *local_750 [3];
  longlong *local_738;
  longlong *local_730;
  undefined8 local_728;
  ulonglong *local_718;
  undefined8 *puStack_710;
  ulonglong *local_708;
  undefined8 *puStack_700;
  uint local_6f8;
  int local_6f4;
  ulonglong *local_6f0;
  undefined8 *local_6e8;
  ulonglong *local_6d8;
  undefined8 uStack_6d0;
  ulonglong *local_6b8 [6];
  undefined8 *local_688;
  undefined8 local_680;
  undefined8 *local_678;
  ulonglong *local_668 [6];
  undefined8 *local_638;
  undefined8 local_630;
  ulonglong *local_628;
  undefined8 uStack_620;
  ulonglong *local_618;
  ulonglong *local_608;
  ulonglong *local_5f8;
  undefined8 *puStack_5f0;
  undefined8 local_5e8;
  ulonglong *local_5e0;
  ulonglong *local_5d0;
  ulonglong *local_5c0;
  ulonglong *local_5a8;
  undefined8 *puStack_5a0;
  ulonglong *local_598;
  ulonglong *local_588;
  longlong *plStack_580;
  ulonglong *local_578;
  ulonglong *local_568;
  ulonglong *local_558;
  char local_548 [255];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_5e8 = 0xfffffffffffffffe;
  local_48 = DAT_1416a8400 ^ (ulonglong)auStack_7f8;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_7b4 = param_2;
    local_7a4 = param_3;
    local_798 = param_1;
    local_778 = param_3;
    local_758 = param_2;
    plVar9 = (longlong *)InstanceGet();
    local_7d8 = param_3;
    local_7d0 = param_3;
    local_7c8 = param_2;
    _snprintf(local_448,0x400,"SELECT * FROM cq_competesponsor WHERE competetype= 1 && ((idtarget=%lu && idoppnent=%lu) || (idtarget=%lu && idoppnent=%lu)) ");
    local_49 = 0;
    puVar10 = (ulonglong *)(**(code **)(*plVar9 + 0x10))(plVar9,local_448,2);
    if (puVar10 != (ulonglong *)0x0) {
      local_788 = puVar10;
      iVar5 = (**(code **)(*puVar10 + 0x40))(puVar10);
      if (iVar5 < 1) {
        (**(code **)*puVar10)(puVar10);
      }
      else {
        local_770 = operator_new(8);
        if (local_770 == (ulonglong *)0x0) {
          local_750[0] = (ulonglong *)0x0;
        }
        else {
          *local_770 = (ulonglong)local_750;
          local_750[0] = local_770;
        }
        uVar21 = 0;
        local_738 = (longlong *)0x0;
        local_730 = (longlong *)0x0;
        local_728 = 0;
        local_7a8 = 0;
        local_7b8 = 0;
        local_6f0 = local_770;
        FUN_141694790(local_6b8);
        FUN_141694790(local_668);
        local_7b0 = 0;
        uVar19 = uVar21;
        uVar22 = uVar21;
LAB_14169b440:
        iVar5 = (**(code **)(*puVar10 + 0x40))(puVar10);
        puVar11 = local_6b8[0];
        if ((int)(uint)uVar19 < iVar5) {
          (**(code **)(*puVar10 + 0x30))(puVar10);
          puVar11 = (ulonglong *)(**(code **)(*puVar10 + 0x38))(puVar10);
          uVar6 = (uint)uVar19;
          local_6f0 = puVar11;
          if (puVar11 != (ulonglong *)0x0) {
            plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,2);
            uVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
            local_7ac = uVar6;
            plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,5);
            iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
            plVar9 = (longlong *)(**(code **)(*puVar11 + 0x10))(puVar11,3);
            iVar7 = (**(code **)(*plVar9 + 0x40))(plVar9);
            if (iVar7 == param_2) {
              FUN_141694060((longlong *)local_6b8,(longlong *)&local_718,&local_7ac);
              puVar20 = local_688;
              puVar10 = local_718;
              local_608 = local_6b8[0];
              if ((local_718 == (ulonglong *)0x0) || (local_718 != local_6b8[0])) {
                _invalid_parameter_noinfo();
              }
              puVar18 = puStack_710;
              if (puStack_710 == puVar20) {
                local_6f8 = uVar6;
                local_6f4 = iVar5;
                FUN_141693eb0((longlong *)local_6b8,(longlong *)&local_6d8,&local_6f8);
              }
              else {
                if (puVar10 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar19 = uVar21;
                }
                else {
                  uVar19 = *puVar10;
                }
                if (puVar18 == *(undefined8 **)(uVar19 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                piVar1 = (int *)((longlong)puVar18 + 0x1c);
                *piVar1 = *piVar1 + iVar5;
              }
              local_7a8 = local_7a8 + iVar5;
              cVar4 = (**(code **)(*(longlong *)*local_798 + 0x48))((longlong *)*local_798,uVar6);
              plVar9 = local_738;
              if (cVar4 == '\0') {
                local_5e0 = (ulonglong *)0x0;
                if (local_730 < local_738) {
                  _invalid_parameter_noinfo();
                }
                puVar10 = local_750[0];
                local_5e0 = local_750[0];
                do {
                  plVar12 = local_730;
                  local_5c0 = (ulonglong *)0x0;
                  if (local_730 < local_738) {
                    _invalid_parameter_noinfo();
                  }
                  local_5c0 = local_750[0];
                  if ((puVar10 == (ulonglong *)0x0) || (puVar10 != local_750[0])) {
                    _invalid_parameter_noinfo();
                  }
                  if (plVar9 == plVar12) {
                    FUN_141694810((longlong *)local_750,&local_6f0);
                    uVar22 = (ulonglong)local_7b8;
                    puVar10 = local_788;
                    param_2 = local_7b4;
                    uVar6 = local_7b0;
                    goto LAB_14169b7ee;
                  }
                  if (puVar10 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar19 = uVar21;
                  }
                  else {
                    uVar19 = *puVar10;
                  }
                  if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                    _invalid_parameter_noinfo();
                  }
                  plVar12 = (longlong *)*plVar9;
                  if (plVar12 != (longlong *)0x0) {
                    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,2);
                    uVar8 = (**(code **)(*plVar12 + 0x40))(plVar12);
                    if (uVar8 == uVar6) goto LAB_14169b6df;
                  }
                  if (puVar10 == (ulonglong *)0x0) {
                    _invalid_parameter_noinfo();
                    uVar19 = uVar21;
                  }
                  else {
                    uVar19 = *puVar10;
                  }
                  if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                    _invalid_parameter_noinfo();
                  }
                  plVar9 = plVar9 + 1;
                } while( true );
              }
              (**(code **)(*puVar11 + 0x40))(puVar11,1);
              (**(code **)*puVar11)(puVar11);
              uVar22 = (ulonglong)local_7b8;
              puVar10 = local_788;
              param_2 = local_7b4;
              uVar6 = local_7b0;
            }
            else {
              FUN_141694060((longlong *)local_668,(longlong *)&local_708,&local_7ac);
              puVar20 = local_638;
              puVar10 = local_708;
              local_598 = local_668[0];
              if ((local_708 == (ulonglong *)0x0) || (local_708 != local_668[0])) {
                _invalid_parameter_noinfo();
              }
              puVar18 = puStack_700;
              if (puStack_700 == puVar20) {
                local_770 = (ulonglong *)CONCAT44(iVar5,uVar6);
                FUN_141693eb0((longlong *)local_668,(longlong *)&local_6d8,(uint *)&local_770);
              }
              else {
                if (puVar10 == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar19 = uVar21;
                }
                else {
                  uVar19 = *puVar10;
                }
                if (puVar18 == *(undefined8 **)(uVar19 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                piVar1 = (int *)((longlong)puVar18 + 0x1c);
                *piVar1 = *piVar1 + iVar5;
              }
              local_7b8 = local_7b8 + iVar5;
              uVar22 = (ulonglong)local_7b8;
              (**(code **)(*puVar11 + 0x40))(puVar11,1);
              (**(code **)*puVar11)(puVar11);
              puVar10 = local_788;
              param_2 = local_7b4;
              uVar6 = local_7b0;
            }
          }
          goto LAB_14169b7ee;
        }
        puVar20 = (undefined8 *)*local_688;
        local_578 = local_6b8[0];
        while( true ) {
          puVar18 = local_688;
          local_568 = local_6b8[0];
          if ((puVar11 == (ulonglong *)0x0) || (puVar11 != local_6b8[0])) {
            _invalid_parameter_noinfo();
          }
          puVar2 = local_668[0];
          puVar10 = local_798;
          if (puVar20 == puVar18) break;
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          uVar6 = (int)(((float)*(int *)((longlong)puVar20 + 0x1c) / (float)local_7a8) * (float)(int)uVar22) + *(int *)((longlong)puVar20 + 0x1c);
          local_7ac = uVar6;
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar10 = local_798;
          iVar5 = uVar6 * 1000;
          lVar13 = (*(code *)**(undefined8 **)*local_798)((undefined8 *)*local_798,*(undefined4 *)(puVar20 + 3));
          lVar14 = (**(code **)(*(longlong *)*puVar10 + 0x80))();
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          puVar10 = local_798;
          cVar4 = (**(code **)(*(longlong *)*local_798 + 0x48))((longlong *)*local_798,*(undefined4 *)(puVar20 + 3));
          if (cVar4 != '\0') {
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            plVar9 = (longlong *)*puVar10;
            (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined4 *)(puVar20 + 3),(longlong)iVar5);
          }
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          local_7d0 = local_7a4;
          local_7d8 = local_7b4;
          tq::MyLogSave("gmlog/syncompetesponsor","User[%d] award money[%d] from syncompete because sponsor winner[%d], Loser[%d]");
          pIVar15 = theInstance();
          plVar9 = (longlong *)*puVar10;
          (**(code **)(*plVar9 + 0x20))(plVar9,local_7b4);
          pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_AWARD_SYNSPONSOR");
          local_7d8 = iVar5;
          _snprintf(local_548,0x100,pcVar16);
          local_449 = 0;
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar11;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          (**(code **)(*(longlong *)*local_798 + 0x70))((longlong *)*local_798,*(undefined4 *)(puVar20 + 3),local_548);
          if (lVar14 < lVar13 + iVar5) {
            if (puVar11 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar11;
            }
            if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            puVar10 = local_798;
            cVar4 = (**(code **)(*(longlong *)*local_798 + 0x48))();
            if (cVar4 != '\0') {
              memset(local_548,0,0x100);
              pIVar15 = theInstance();
              pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_AWARD_SYNSPONSOR1");
              _snprintf(local_548,0x100,pcVar16);
              local_449 = 0;
              if (puVar11 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar11;
              }
              if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(*(longlong *)*puVar10 + 0x70))((longlong *)*puVar10,*(undefined4 *)(puVar20 + 3),local_548);
            }
          }
          plVar9 = local_738;
          local_768 = (ulonglong *)0x0;
          if (local_730 < local_738) {
            _invalid_parameter_noinfo();
          }
          local_768 = local_750[0];
          plStack_760 = plVar9;
          puVar10 = local_750[0];
          while( true ) {
            plVar12 = local_730;
            plVar9 = plStack_760;
            local_618 = (ulonglong *)0x0;
            if (local_730 < local_738) {
              _invalid_parameter_noinfo();
            }
            local_618 = local_750[0];
            if ((puVar10 == (ulonglong *)0x0) || (puVar10 != local_750[0])) {
              _invalid_parameter_noinfo();
            }
            if (plVar9 == plVar12) break;
            if (puVar10 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar19 = uVar21;
            }
            else {
              uVar19 = *puVar10;
            }
            if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
              _invalid_parameter_noinfo();
            }
            plVar12 = (longlong *)*plVar9;
            if (plVar12 == (longlong *)0x0) {
LAB_14169bcb8:
              if (puVar10 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar10;
              }
              if (*(longlong **)(uVar19 + 0x20) <= plVar9) {
                _invalid_parameter_noinfo();
              }
              plStack_760 = plVar9 + 1;
            }
            else {
              plVar17 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12);
              if (puVar11 == (ulonglong *)0x0) {
                _invalid_parameter_noinfo();
                uVar19 = uVar21;
              }
              else {
                uVar19 = *puVar11;
              }
              if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              iVar5 = (**(code **)(*plVar17 + 0x40))(plVar17);
              if (iVar5 != *(int *)(puVar20 + 3)) goto LAB_14169bcb8;
              plVar9 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,5);
              (**(code **)(*plVar9 + 0xb0))(plVar9,local_7ac);
              plVar9 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,7);
              (**(code **)(*plVar9 + 0xb0))(plVar9,1);
              (**(code **)(*plVar12 + 0x38))(plVar12,1);
              (**(code **)*plVar12)(plVar12,1);
              local_588 = local_768;
              plStack_580 = plStack_760;
              puVar18 = FUN_141694130(local_750,&local_6d8,(longlong)&local_588);
              puVar10 = (ulonglong *)*puVar18;
              plStack_760 = (longlong *)puVar18[1];
              local_768 = puVar10;
            }
          }
          if (puVar11 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar20 + 0x21) == '\0') {
            puVar18 = puVar20;
            puVar3 = (undefined8 *)puVar20[2];
            if (*(char *)((longlong)puVar20[2] + 0x21) == '\0') {
              do {
                puVar20 = puVar3;
                puVar3 = (undefined8 *)*puVar20;
              } while (*(char *)((longlong)*puVar20 + 0x21) == '\0');
              uVar22 = (ulonglong)local_7b8;
              local_678 = puVar20;
            }
            else {
              do {
                puVar20 = (undefined8 *)puVar18[1];
                if (*(char *)((longlong)puVar20 + 0x21) != '\0') break;
                bVar23 = puVar18 == (undefined8 *)puVar20[2];
                puVar18 = puVar20;
              } while (bVar23);
              uVar22 = (ulonglong)local_7b8;
            }
          }
          else {
            _invalid_parameter_noinfo();
            uVar22 = (ulonglong)local_7b8;
          }
        }
        puVar20 = (undefined8 *)*local_638;
        local_5d0 = local_668[0];
LAB_14169bd90:
        puVar18 = local_638;
        local_558 = local_668[0];
        if ((puVar2 == (ulonglong *)0x0) || (puVar2 != local_668[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar20 != puVar18) {
          memset(local_548,0,0x100);
          pIVar15 = theInstance();
          plVar9 = (longlong *)*puVar10;
          (**(code **)(*plVar9 + 0x20))(plVar9,local_7a4);
          pcVar16 = (char *)(*(code *)**(undefined8 **)pIVar15)(pIVar15,"STR_LOSE_SYNSPONSOR");
          _snprintf(local_548,0x100,pcVar16);
          local_449 = 0;
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar19 = uVar21;
          }
          else {
            uVar19 = *puVar2;
          }
          if (puVar20 == *(undefined8 **)(uVar19 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)*puVar10;
          (**(code **)(*plVar9 + 0x70))(plVar9,*(undefined4 *)(puVar20 + 3),local_548);
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar20 + 0x21) == '\0') {
            puVar18 = puVar20;
            puVar3 = (undefined8 *)puVar20[2];
            if (*(char *)((longlong)puVar20[2] + 0x21) == '\0') {
              do {
                puVar20 = puVar3;
                puVar3 = (undefined8 *)*puVar20;
                local_6e8 = puVar20;
              } while (*(char *)((longlong)*puVar20 + 0x21) == '\0');
            }
            else {
              do {
                puVar20 = (undefined8 *)puVar18[1];
                if (*(char *)((longlong)puVar20 + 0x21) != '\0') break;
                bVar23 = puVar18 == (undefined8 *)puVar20[2];
                puVar18 = puVar20;
              } while (bVar23);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_14169bd90;
        }
        if (local_788 != (ulonglong *)0x0) {
          (**(code **)*local_788)(local_788);
        }
        puStack_780 = local_638;
        local_788 = local_668[0];
        uStack_790 = *local_638;
        local_798 = local_668[0];
        local_5a8 = local_668[0];
        puStack_5a0 = local_638;
        local_628 = local_668[0];
        uStack_620 = uStack_790;
        FUN_141693c40((longlong *)local_668,(longlong *)&local_6d8,(longlong *)&local_628,(longlong *)&local_5a8);
        operator_delete(local_638);
        local_638 = (undefined8 *)0x0;
        local_630 = 0;
        operator_delete(local_668[0]);
        puStack_700 = local_688;
        local_708 = local_6b8[0];
        puStack_710 = (undefined8 *)*local_688;
        local_718 = local_6b8[0];
        local_5f8 = local_6b8[0];
        puStack_5f0 = local_688;
        local_6d8 = local_6b8[0];
        uStack_6d0 = puStack_710;
        FUN_141693c40((longlong *)local_6b8,(longlong *)&local_628,(longlong *)&local_6d8,(longlong *)&local_5f8);
        operator_delete(local_688);
        local_688 = (undefined8 *)0x0;
        local_680 = 0;
        operator_delete(local_6b8[0]);
        if (local_738 != (longlong *)0x0) {
          operator_delete(local_738);
        }
        local_738 = (longlong *)0x0;
        local_730 = (longlong *)0x0;
        local_728 = 0;
        operator_delete(local_750[0]);
      }
    }
  }
  return;
LAB_14169b6df:
  (**(code **)(*puVar11 + 0x40))(puVar11,1);
  (**(code **)*puVar11)(puVar11);
  uVar22 = (ulonglong)local_7b8;
  puVar10 = local_788;
  param_2 = local_7b4;
  uVar6 = local_7b0;
LAB_14169b7ee:
  local_7b0 = uVar6 + 1;
  uVar19 = (ulonglong)local_7b0;
  goto LAB_14169b440;
}




void FUN_14169c0a0(ulonglong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  tm *ptVar4;
  __time64_t local_res10;
  
  local_res10 = 0;
  _time64(&local_res10);
  ptVar4 = _localtime64(&local_res10);
  if (ptVar4 != (tm *)0x0) {
    iVar2 = ptVar4->tm_wday;
    if (6 < (ulonglong)(longlong)iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_141698850();
    }
    if (((*(uint *)((longlong)param_1 + ((ulonglong)(longlong)iVar2 >> 5) * 4 + 8) >> ((byte)iVar2 & 0x1f) & 1) == 0) &&
       (iVar3 = ptVar4->tm_hour * 0x3c + ptVar4->tm_min, 1 < iVar2)) {
      if (iVar2 < 5) {
        if (iVar3 < 0x4ce) {
          return;
        }
        FUN_14169a940(param_1,iVar2);
        iVar2 = ptVar4->tm_wday;
      }
      else {
        if (iVar2 != 6) {
          return;
        }
        if (iVar3 < 0x4ce) {
          return;
        }
        FUN_14169a940(param_1,6);
        iVar2 = ptVar4->tm_wday;
      }
      if (6 < (ulonglong)(longlong)iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_141698850();
      }
      puVar1 = (uint *)((longlong)param_1 + ((ulonglong)(longlong)iVar2 >> 5) * 4 + 8);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    }
  }
  return;
}




CMsg * FUN_14169c190(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_14169c1c0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_14169c1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014169c1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_14169c1e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014169c1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_14169c1f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014169c1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_14169c200(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14169c230(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = sponsor::CMsgSponsor::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14169c280(undefined8 *param_1)

{
  *param_1 = sponsor::CMsgSponsor::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14169c2b0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x428;
}




void FUN_14169c2e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1416a0590);
  }
  else if ((int)param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x408);
    (**(code **)(*param_3 + 0x18))
              (param_3,param_2,*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 8),
               *(undefined2 *)(lVar1 + 4));
  }
  return;
}




undefined8 * FUN_14169c370(undefined8 *param_1,byte param_2)

{
  *param_1 = sponsor::CMsgSponsor::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14169c3c0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = sponsor::CMsgSponsorInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14169c410(undefined8 *param_1)

{
  *param_1 = sponsor::CMsgSponsorInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14169c440(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x429;
}




undefined8 FUN_14169c470(CMsg *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined2 param_6,undefined1 param_7)

{
  int *piVar1;
  longlong lVar2;
  
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0x1c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x429;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_6;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 6) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) + 1) * 0x10) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_5;
  lVar2 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar2 + 8);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




ulonglong FUN_14169c550(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x400 < (ulonglong)*puVar2 + 0x10) {
    return (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x10;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) + 1) * 0x10) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14 + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x408) + 8) * 0x10) = param_5;
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




void FUN_14169c5d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1416a0590);
  }
  else if (*(ushort *)(*(longlong *)(param_1 + 0x408) + 4) < 5) {
    (**(code **)(*param_3 + 0x20))(param_3);
  }
  return;
}




undefined8 * FUN_14169c640(undefined8 *param_1,byte param_2)

{
  *param_1 = sponsor::CMsgSponsorInfo::vftable;
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
  if ((_StackCookie == DAT_1416a8400) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_1416a89f0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1416a89f0);
    local_res18[0] = _decode_pointer(DAT_1416a89e8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1416a89f0 = _encode_pointer(local_res10);
    DAT_1416a89e8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_14169c938(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_14169c9e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1416a89e8 = _encode_pointer(puVar1);
  DAT_1416a89f0 = DAT_1416a89e8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14169d058();
    atexit(FUN_14169d090);
    atexit((_func_5014 *)&LAB_14169d04c);
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
    if (DAT_1416a8444 < 1) {
      return 0;
    }
    DAT_1416a8444 = DAT_1416a8444 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1416a89d8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1416a89d8;
        pvVar3 = DAT_1416a89d8;
      }
      DAT_1416a89d8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14169caba;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14169caba:
    if (DAT_1416a89d0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1416a89f0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1416a89e8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1416a89f0);
            plVar12 = (longlong *)_decode_pointer(DAT_1416a89e8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1416a89e8 = _encoded_null();
        DAT_1416a89f0 = DAT_1416a89e8;
      }
      DAT_1416a89d0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1416a89d8 = (void *)0x0;
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
      bVar13 = DAT_1416a89d8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1416a89d8;
        pvVar3 = DAT_1416a89d8;
      }
      DAT_1416a89d8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14169cbe3;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14169cbe3:
    if (DAT_1416a89d0 == 0) {
      DAT_1416a89d0 = 1;
      iVar4 = _initterm_e(&DAT_1416a0238,&DAT_1416a0248);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1416a0228,&DAT_1416a0230);
      DAT_1416a89d0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1416a89d8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1416a89e0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1416a89e0), BVar5 != 0)) {
      (*DAT_1416a89e0)(param_1,2,param_3);
    }
    DAT_1416a8444 = DAT_1416a8444 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014169cd5c) */
/* WARNING: Removing unreachable block (ram,0x00014169ccf3) */
/* WARNING: Removing unreachable block (ram,0x00014169cd97) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1416a8444 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1416a8414 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1416a8414 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141697c90();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141697c90();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1416a8414 = 0xffffffff;
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




undefined8 FUN_14169ce14(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1416a84f0);
  local_30 = DAT_1416a85e8;
  local_38 = RtlLookupFunctionEntry(DAT_1416a85e8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_1416a8588 = local_res8;
    DAT_1416a85e8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1416a84f0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1416a8460 = DAT_1416a85e8;
  _DAT_1416a8570 = local_res8[0];
  _DAT_1416a8450 = 0xc0000409;
  _DAT_1416a8454 = 1;
  local_20 = DAT_1416a8400;
  local_18 = DAT_1416a8408;
  DAT_1416a84e8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1416a33b0);
  if (DAT_1416a84e8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14169d058(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416a3a70; puVar1 < &DAT_1416a3a70; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14169d090(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416a3a80; puVar1 < &DAT_1416a3a80; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141690000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141690000);
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
  if (DAT_1416a8400 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1416a8400 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1416a8400 == 0x2b992ddfa232) {
      DAT_1416a8400 = 0x2b992ddfa233;
    }
  }
  DAT_1416a8408 = ~DAT_1416a8400;
  return;
}




void Unwind_14169d2e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d340(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d380(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d3c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d400(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d440(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d460(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d4c0(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d4e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d520(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d560(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d580(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d5a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d5c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d5e0(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d640(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14169d660(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169d680(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14169d6a0(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169d6c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d700(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d720(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169d740(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d780(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d7a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d7c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169d7e0(void)

{
  DAT_1416a8428 = DAT_1416a8428 & 0xfffffffe;
  return;
}




void Unwind_14169d800(void)

{
  DAT_1416a8428 = DAT_1416a8428 & 0xfffffffe;
  return;
}




void Unwind_14169d820(void)

{
  DAT_1416a8428 = DAT_1416a8428 & 0xfffffffe;
  return;
}




void Unwind_14169d840(void)

{
  DAT_1416a8428 = DAT_1416a8428 & 0xfffffffe;
  return;
}




void Unwind_14169d860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d8a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169d8c0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169d8e0(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169d900(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169d920(void)

{
  FUN_141691180();
  return;
}




void Catch_14169d940(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14169d970(void)

{
  FUN_141691180();
  return;
}




void Catch_14169d990(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14169d9c0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169d9e0(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169da00(undefined8 param_1,longlong param_2)

{
  FUN_141692a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169da20(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169da40(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169da60(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169da80(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169daa0(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14169dae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14169db00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14169db20(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14169db40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169db60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169db80(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14169dba0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169dbc0(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dbe0(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dc00(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169dc20(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dc40(undefined8 param_1,longlong param_2)

{
  FUN_141692a10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dc60(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dc80(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dca0(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dcc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14169dce0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14169dd00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14169dd20(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14169dd40(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169dd60(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dd80(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dda0(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169ddc0(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dde0(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169de00(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169de20(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169de40(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169de60(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169de80(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dea0(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dec0(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14169dee0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14169df10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14169df30(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169df50(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169df70(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169df90(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dfb0(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169dfd0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169dff0(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e010(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e030(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e050(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e070(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e090(undefined8 param_1,longlong param_2)

{
  FUN_141694580(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14169e0b0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e0d0(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e0f0(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e110(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e130(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e150(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169e170(undefined8 param_1,longlong param_2)

{
  FUN_141692460(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e190(undefined8 param_1,longlong param_2)

{
  FUN_141692a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e1b0(undefined8 param_1,longlong param_2)

{
  FUN_141693060(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e1d0(undefined8 param_1,longlong param_2)

{
  FUN_141693840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e1f0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e210(undefined8 param_1,longlong param_2)

{
  FUN_141694580(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14169e230(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 0x80));
  return;
}




undefined8 Catch_14169e250(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141694f74;
}




void Unwind_14169e290(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_14169e2b0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e2d0(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e2f0(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e310(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e330(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0x80));
  return;
}




undefined * Catch_14169e350(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141694ec6;
}




void Unwind_14169e390(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_14169e3b0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e3d0(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e3f0(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e410(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_14169e430(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_14169e450(void)

{
  log_InlineLogCATCH_ERROR("Process EndSponsor(idTarget = %d, idOppnent = %d) @%s,%d");
  return 0x141695020;
}




undefined8 Catch_14169e4a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141695e1a;
}




void Unwind_14169e4e0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169e510(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14169e530(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14169e550(undefined8 param_1,longlong param_2)

{
  FUN_141693020((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14169e570(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 0x170));
  return;
}




void Unwind_14169e590(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 0x110));
  return;
}




undefined * Catch_14169e5b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141695c82;
}




void Unwind_14169e5f0(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0x110));
  return;
}




void Unwind_14169e610(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_14169e630(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_14169e650(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_14169e670(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_14169e690(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0x110));
  return;
}




void Unwind_14169e6b0(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0x170));
  return;
}




void Unwind_14169e6d0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_14169e6f0(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_14169e710(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_14169e730(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_14169e750(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_14169e770(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14169e790(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0x90));
  return;
}




undefined8 Catch_14169e7b0(void)

{
  log_InlineLogCATCH_ERROR("Process AwardSponsor(idTarget = %d, idOppnent = %d) Error  @%s,%d");
  return 0x141695e1a;
}




void Unwind_14169e800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14169e820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169e840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14169e860(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169e880(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169e8a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169e8c0(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e8e0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169e900(undefined8 param_1,longlong param_2)

{
  FUN_1416965d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e920(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e940(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169e960(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e980(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169e9a0(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e9c0(undefined8 param_1,longlong param_2)

{
  FUN_1416965d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169e9e0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169ea00(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14169ea20(undefined8 param_1,longlong param_2)

{
  FUN_1416965d0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14169ea40(undefined8 param_1,longlong param_2)

{
  FUN_1416968f0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14169ea60(undefined8 param_1,longlong param_2)

{
  FUN_1416968f0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




undefined * Catch_14169ea80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141696d33;
}




void Unwind_14169eac0(undefined8 param_1,longlong param_2)

{
  FUN_1416965d0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14169eae0(undefined8 param_1,longlong param_2)

{
  FUN_141696440(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14169eb00(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(param_2 + 0x50));
  return;
}




void Catch_14169eb20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14169eb50(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14169eb70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




undefined * Catch_14169eb90(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141697631;
}




void Unwind_14169ebd0(undefined8 param_1,longlong param_2)

{
  FUN_141692280(*(void **)(param_2 + 0x20));
  return;
}




void Unwind_14169ebf0(undefined8 param_1,longlong param_2)

{
  FUN_141697970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169ec10(undefined8 param_1,longlong param_2)

{
  FUN_14169c280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169ec30(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_14169ec50(undefined8 param_1,longlong param_2)

{
  FUN_141697970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169ec70(undefined8 param_1,longlong param_2)

{
  FUN_14169c280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169ec90(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_14169ecb0(undefined8 param_1,longlong param_2)

{
  FUN_141697970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169ecd0(undefined8 param_1,longlong param_2)

{
  FUN_14169c280((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14169ecf0(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_14169ed10(void)

{
  log_InlineLogCATCH_ERROR("sponsor::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_141697e13;
}




void Unwind_14169ed60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_14169ed80(undefined8 param_1,longlong param_2)

{
  FUN_141697970(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14169eda0(undefined8 param_1,longlong param_2)

{
  FUN_14169c280((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_14169edc0(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x430));
  return;
}




undefined8 Catch_14169ede0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141697ec5;
}




void Unwind_14169ee20(undefined8 param_1,longlong param_2)

{
  FUN_141698df0(*(void **)(param_2 + 0x58));
  return;
}




undefined * Catch_14169ee40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416982cf;
}




void Unwind_14169ee80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_14169eea0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169eec0(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_14169eee0(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_14169ef00(undefined8 param_1,longlong param_2)

{
  FUN_141693020((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_14169ef20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14169867e;
}




void Unwind_14169ef60(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_14169ef80(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_14169efa0(void)

{
  log_InlineLogCATCH_ERROR("OnUserLogin Process Sponsor Money! @%s,%d");
  return 0x1416987f4;
}




void Unwind_14169efe0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14169f000(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169f020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14169f040(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169f060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14169f080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169f0a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14169f0c0(undefined8 param_1,longlong param_2)

{
  FUN_1416911e0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14169f0e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169f100(void)

{
  DAT_1416a8440 = DAT_1416a8440 & 0xfffffffe;
  return;
}




void Unwind_14169f120(void)

{
  DAT_1416a8440 = DAT_1416a8440 & 0xfffffffe;
  return;
}




void Unwind_14169f140(void)

{
  DAT_1416a8440 = DAT_1416a8440 & 0xfffffffe;
  return;
}




void Unwind_14169f160(void)

{
  DAT_1416a8440 = DAT_1416a8440 & 0xfffffffe;
  return;
}




void Unwind_14169f180(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14169f1a0(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f1c0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169f1e0(undefined8 param_1,longlong param_2)

{
  FUN_1416991b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f200(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f220(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169f240(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f260(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169f280(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f2a0(undefined8 param_1,longlong param_2)

{
  FUN_1416991b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f2c0(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169f2e0(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14169f300(undefined8 param_1,longlong param_2)

{
  FUN_1416991b0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14169f320(undefined8 param_1,longlong param_2)

{
  FUN_1416994d0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_14169f340(undefined8 param_1,longlong param_2)

{
  FUN_14169c410((undefined8 *)(param_2 + 0x50));
  return;
}




void Catch_14169f360(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14169f390(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14169f3b0(undefined8 param_1,longlong param_2)

{
  FUN_1416994d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14169f3d0(undefined8 param_1,longlong param_2)

{
  FUN_1416991b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f3f0(undefined8 param_1,longlong param_2)

{
  FUN_141699000(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_14169f410(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14169a57d;
}




undefined8 Catch_14169f450(void)

{
  log_InlineLogCATCH_ERROR("Sponsor SynCompete Error! @%s,%d");
  return 0x14169a915;
}




undefined8 Catch_14169f490(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14169b2ab;
}




void Unwind_14169f4d0(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 0xc0));
  return;
}




undefined * Catch_14169f4f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14169b0cc;
}




void Unwind_14169f530(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0xc0));
  return;
}




void Unwind_14169f550(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14169f570(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14169f590(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14169f5b0(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14169f5d0(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0xc0));
  return;
}




undefined8 Catch_14169f5f0(void)

{
  log_InlineLogCATCH_ERROR("ProcessEnd SynCompeteSponsor Error! @%s,%d");
  return 0x14169b2ab;
}




undefined8 Catch_14169f630(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14169c07a;
}




void Unwind_14169f670(void)

{
  FUN_141691180();
  return;
}




void Unwind_14169f6a0(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_14169f6c0(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_14169f6e0(undefined8 param_1,longlong param_2)

{
  FUN_141693020((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_14169f700(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 0x140));
  return;
}




void Unwind_14169f720(undefined8 param_1,longlong param_2)

{
  FUN_141694760((longlong *)(param_2 + 400));
  return;
}




undefined * Catch_14169f740(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14169bee2;
}




void Unwind_14169f780(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 400));
  return;
}




void Unwind_14169f7a0(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_14169f7c0(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_14169f7e0(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_14169f800(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_14169f820(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_14169f840(undefined8 param_1,longlong param_2)

{
  FUN_141694580((longlong *)(param_2 + 0x140));
  return;
}




void Unwind_14169f860(undefined8 param_1,longlong param_2)

{
  FUN_1416941c0((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_14169f880(undefined8 param_1,longlong param_2)

{
  FUN_141693840((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_14169f8a0(undefined8 param_1,longlong param_2)

{
  FUN_141693060((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_14169f8c0(undefined8 param_1,longlong param_2)

{
  FUN_141692a30((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_14169f8e0(undefined8 param_1,longlong param_2)

{
  FUN_141692460((undefined8 *)(param_2 + 0x140));
  return;
}




void Unwind_14169f900(undefined8 param_1,longlong param_2)

{
  FUN_141692a10((undefined8 *)(param_2 + 0xa8));
  return;
}




void Unwind_14169f920(undefined8 param_1,longlong param_2)

{
  FUN_1416924b0((undefined8 *)(param_2 + 0xa8));
  return;
}




undefined8 Catch_14169f940(void)

{
  log_InlineLogCATCH_ERROR("ProcessAward Syncompete Sponsor(idWin = %d, idLose = %d) Error! @%s,%d");
  return 0x14169c07c;
}




void Unwind_14169f990(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169f9b0(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_14169f9d0(void)

{
  log_InlineLogCATCH_ERROR("Sponsor::CMsgSponsor::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x14169c35f;
}




void Unwind_14169fa20(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169fa40(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14169fa60(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_14169fa80(void)

{
  log_InlineLogCATCH_ERROR("Process sponsor info error type = %d @%s,%d");
  return 0x14169c635;
}




void Unwind_14169fad0(undefined8 param_1,longlong param_2)

{
  FUN_14169c1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_14169fae8(void)

{
  _unlock(8);
  return;
}




void FUN_14169fb01(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14169fb31(void)

{
  _DAT_1416a8414 = 0xffffffff;
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




bool FUN_14169fbc0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=592 failed=1 total=676 */
