/* Decompiled by Ghidra 12.1.4 | program: Lottery.dll
   image base: 141520000 | functions: 1116 */


exception * FUN_141521090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1415210d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001415210f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141521100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141521160(void)

{
  return;
}




exception * FUN_141521170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1415211c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001415211f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141521200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141521220(exception *param_1,uint param_2)

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




exception * FUN_141521280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1415212e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014152131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141521330(exception *param_1,uint param_2)

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




exception * FUN_1415213a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141521400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014152143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141521450(exception *param_1,uint param_2)

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




void FUN_1415214c0(void)

{
  log_InlineLogERROR(&DAT_141537598);
  return;
}




undefined8 * FUN_1415214f0(undefined8 *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  return param_1;
}




void FUN_141521530(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141521554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}




longlong FUN_141521560(longlong param_1,char *param_2)

{
  if (param_2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),param_2);
  }
  return param_1;
}




undefined8 * FUN_141521590(undefined8 *param_1,uint param_2)

{
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_1415215f0(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x28));
  *(undefined ***)(param_1 + 0x20) = tq::CString::vftable;
  return param_1;
}




void FUN_141521640(longlong param_1)

{
  *(undefined ***)(param_1 + 0x20) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x00014152166d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x28));
  return;
}




bool FUN_1415216a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1415218d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141521960(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 << 3);
  return;
}




longlong * FUN_1415219d0(longlong *param_1,uint param_2)

{
  FUN_1415267e0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_141521a00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




bool FUN_141521a30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141521ab0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141521ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141521ae2;
  }
  lVar2 = *plVar1;
LAB_141521ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141521b00(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141521b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_141521b90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141521bb2;
  }
  lVar2 = *plVar1;
LAB_141521bb2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141521c40(longlong param_1,longlong param_2)

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




void FUN_141521ca0(longlong param_1,longlong *param_2)

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




void FUN_141521d00(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141521d32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141521da0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_141521e20(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141521e90(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    FUN_1415267e0(plVar1);
    operator_delete(plVar1);
    *param_1 = 0;
  }
  return;
}




longlong FUN_141521ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141521ef2;
  }
  lVar2 = *plVar1;
LAB_141521ef2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141521f10(longlong *param_1)

{
  FUN_141521b00(param_1);
  return param_1;
}




longlong FUN_141521f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141521f52;
  }
  lVar2 = *plVar1;
LAB_141521f52:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141521f70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141521f90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141521f90(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_141521ff0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141522030(longlong *param_1)

{
  FUN_141521d00(param_1);
  return param_1;
}




void FUN_141522050(void)

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




undefined8 * FUN_1415220b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_141522130(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141521b00(param_1);
  return param_2;
}




longlong * FUN_141522160(longlong *param_1)

{
  FUN_141521d00(param_1);
  return param_1;
}




undefined8 * FUN_141522180(undefined8 *param_1)

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




void FUN_1415221c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141521f90(param_1,(longlong *)plVar2[2]);
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




void FUN_141522240(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141522260(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1415222a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141522050();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1415222e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_1415220b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




exception * FUN_141522620(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_141522670(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_1415226d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141522720(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141521b00(param_3);
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
        goto LAB_14152290c;
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
LAB_14152290c:
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
            FUN_141521c40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141521ca0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141521c40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141521ca0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141521c40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141521ca0((longlong)param_1,plVar7);
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




exception * FUN_141522ae0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_141522b40(undefined8 *param_1)

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




void FUN_141522bd0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141522c30(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141522d8d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141522dbc;
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
      goto LAB_141522d8d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1415222e0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141522dbc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_141522de0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1415221c0((longlong)param_1);
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
    FUN_141522720(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141522f90(undefined8 *param_1)

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




longlong * FUN_141522fe0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1415230b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1415230d0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1415222e0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1415222e0(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1415222e0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_1415222e0(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1415222e0(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_1415222e0(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1415222e0(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_141522c30(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_1415233f0(longlong *param_1)

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
  FUN_141522de0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141523460(undefined8 *param_1)

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




longlong FUN_1415234b0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
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
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 != lVar8) {
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
    lVar8 = *(longlong *)(lVar4 + 0x20);
    if (lVar8 != 0) {
      return lVar8;
    }
    log_InlineLogERROR(&DAT_141537598);
  }
  return 0;
}




undefined8 * FUN_1415235e0(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_1415230d0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_1415236e0(longlong *param_1)

{
  FUN_1415233f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141523710(undefined8 *param_1)

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




void FUN_141523760(longlong *param_1)

{
  FUN_1415233f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141523790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  plVar4 = (longlong *)**(longlong **)(param_1 + 0x38);
  plVar6 = *(longlong **)(param_1 + 8);
  local_38 = plVar6;
  plStack_30 = plVar4;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    if ((plVar6 == (longlong *)0x0) || (plVar6 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar2) break;
    if (plVar6 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar6;
    }
    if (plVar4 == *(longlong **)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)plVar4[4];
    if (plVar2 != (longlong *)0x0) {
      FUN_1415267e0(plVar2);
      operator_delete(plVar2);
    }
    if (plVar6 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (plStack_30 = plVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar4 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x29);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
        while ((plVar4 = plVar3, plStack_30 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x29);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = (longlong *)(param_1 + 8);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
  cVar1 = *(char *)((longlong)plVar4 + 0x29);
  while (cVar1 == '\0') {
    FUN_141521f90(plVar6,(longlong *)plVar4[2]);
    plVar2 = (longlong *)*plVar4;
    operator_delete(plVar4);
    plVar4 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
  plStack_30 = *(longlong **)(param_1 + 0x38);
  local_38 = (longlong *)*plVar6;
  uStack_20 = *plStack_30;
  local_28 = local_38;
  FUN_141522de0(plVar6,local_18,(longlong *)&local_28,(longlong *)&local_38);
  operator_delete(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete((void *)*plVar6);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1415239b0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong extraout_RAX_00;
  longlong *plVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong extraout_RAX_01;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined ***local_d8;
  undefined ***local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [40];
  ulonglong local_38;
  
  local_98 = 0xfffffffffffffffe;
  local_38 = DAT_141542400 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) {
    local_e8 = 0x26;
    log_InlineLogERROR(&DAT_141537598,"CHECKF","pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\configmgr.cpp");
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *param_1 = param_2;
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x80))(param_2,10000,0x2b5b);
    if (plVar8 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141537b40,10000,0x2b5b);
      uVar7 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      iVar15 = 0;
      iVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
      if (0 < iVar6) {
        local_d0 = &local_68;
        do {
          (**(code **)(*plVar8 + 0x30))(plVar8,(longlong)iVar15);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
          local_68 = tq::CString::vftable;
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,0);
          local_88 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,1);
          local_84 = (**(code **)(*plVar9 + 0x40))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,2);
          local_80 = (**(code **)(*plVar9 + 0x48))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,3);
          local_7c = (**(code **)(*plVar9 + 0x48))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,4);
          local_78 = (**(code **)(*plVar9 + 0x48))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,5);
          local_74 = (**(code **)(*plVar9 + 0x48))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,6);
          local_70 = (**(code **)(*plVar9 + 0x48))(plVar9);
          plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,7);
          pcVar10 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
          if (pcVar10 != (char *)0x0) {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_60,pcVar10);
          }
          uVar5 = local_80;
          puVar12 = (undefined8 *)((undefined8 *)param_1[7])[1];
          cVar1 = *(char *)((longlong)puVar12 + 0x29);
          puVar3 = (undefined8 *)param_1[7];
          while (cVar1 == '\0') {
            if (*(uint *)(puVar12 + 3) < local_80) {
              puVar11 = (undefined8 *)puVar12[2];
              puVar12 = puVar3;
            }
            else {
              puVar11 = (undefined8 *)*puVar12;
            }
            puVar3 = puVar12;
            puVar12 = puVar11;
            cVar1 = *(char *)((longlong)puVar11 + 0x29);
          }
          local_c0 = puVar3;
          local_c8 = param_1[1];
          puVar12 = (undefined8 *)param_1[7];
          if (param_1[1] == 0) {
            _invalid_parameter_noinfo();
          }
          if ((puVar3 == puVar12) || (uVar5 < *(uint *)(puVar3 + 3))) {
            local_b0 = param_1[7];
            local_b8 = param_1[1];
            plVar9 = &local_b8;
          }
          else {
            plVar9 = &local_c8;
          }
          plVar2 = (longlong *)*plVar9;
          local_a8 = plVar2;
          local_a0 = plVar9[1];
          lVar14 = param_1[7];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[1])) {
            _invalid_parameter_noinfo();
          }
          lVar4 = local_a0;
          if (local_a0 == lVar14) {
            local_d8 = operator_new(0x40);
            if (local_d8 == (undefined ***)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = FUN_141526890(local_d8);
            }
            FUN_141526690(plVar9,&local_88);
            local_d8 = (undefined ***)CONCAT44(local_d8._4_4_,local_80);
            puVar12 = FUN_1415235e0(param_1 + 1,(uint *)&local_d8);
            *puVar12 = plVar9;
          }
          else {
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar14 = 0;
            }
            else {
              lVar14 = *plVar2;
            }
            if (lVar4 == *(longlong *)(lVar14 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            plVar9 = *(longlong **)(lVar4 + 0x20);
            if (plVar9 == (longlong *)0x0) {
              local_e8 = 0x44;
              log_InlineLogERROR(&DAT_141537598,"IF_NOT","pLotteryConfig","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\configmgr.cpp");
              local_d0 = &local_68;
              local_68 = tq::CString::vftable;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
              return extraout_RAX_01 & 0xffffffffffffff00;
            }
            FUN_141526690(plVar9,&local_88);
          }
          local_d8 = &local_68;
          local_68 = tq::CString::vftable;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
          iVar15 = iVar15 + 1;
          iVar6 = (**(code **)(*plVar8 + 0x40))(plVar8);
        } while (iVar15 < iVar6);
      }
      uVar13 = (**(code **)*plVar8)(plVar8);
      uVar7 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
    }
  }
  return uVar7;
}




undefined8 * FUN_141523dc0(undefined8 *param_1)

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
  lVar2 = FUN_141522050();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141523e40(undefined8 *param_1)

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
  lVar2 = FUN_141522050();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141523ec0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_141523e40(param_1 + 1);
  return param_1;
}




undefined8 * FUN_141523ef0(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  if (*(ulonglong *)(param_2 + 0x28) < 0x10) {
    pcVar1 = (char *)(param_2 + 0x10);
  }
  else {
    pcVar1 = *(char **)(param_2 + 0x10);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),pcVar1);
  return param_1;
}




longlong FUN_141523f60(longlong param_1,longlong param_2)

{
  if (0xf < *(ulonglong *)(param_2 + 0x28)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),*(char **)(param_2 + 0x10));
    return param_1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),(char *)(param_2 + 0x10));
  return param_1;
}




undefined4 * FUN_141523fa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  if (0xf < *(ulonglong *)(param_2 + 0x12)) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 10),*(char **)(param_2 + 0xc));
    return param_1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 10),(char *)(param_2 + 0xc));
  return param_1;
}




void FUN_141524010(longlong param_1)

{
  *(undefined ***)(param_1 + 0x28) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141524046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
  return;
}




void FUN_141524130(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x71) == '\0') {
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




bool FUN_1415241b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




undefined4 * FUN_141524200(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 10));
  *(undefined ***)(param_1 + 8) = tq::CString::vftable;
  if (*(ulonglong *)(param_2 + 0x12) < 0x10) {
    pcVar1 = (char *)(param_2 + 0xc);
  }
  else {
    pcVar1 = *(char **)(param_2 + 0xc);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 10),pcVar1);
  return param_1;
}




longlong FUN_1415242d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415242f2;
  }
  lVar2 = *plVar1;
LAB_1415242f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141524310(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x71) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x71) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x71);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x71);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x71);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x71);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141524334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1415243b0(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x71) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x71) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x71);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x71);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x71);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x71);
    }
    if (*(char *)(param_1[1] + 0x71) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x71) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415243e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




undefined4 * FUN_141524480(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_141524200(param_1 + 2,param_2 + 2);
  return param_1;
}




void FUN_1415244f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x78)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 * 0x78);
  return;
}




void FUN_141524580(longlong param_1)

{
  *(undefined ***)(param_1 + 0x40) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001415245bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x48));
  return;
}




bool FUN_1415245e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141524630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x71) == '\0') {
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




void FUN_141524690(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1415246a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415246c2;
  }
  lVar2 = *plVar1;
LAB_1415246c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1415246e0(longlong *param_1)

{
  FUN_141524310(param_1);
  return param_1;
}




undefined4 * FUN_141524700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  FUN_141524200(param_1 + 2,param_3);
  return param_1;
}




longlong * FUN_141524770(longlong *param_1)

{
  FUN_1415243b0(param_1);
  return param_1;
}




longlong * FUN_1415247b0(longlong *param_1)

{
  FUN_1415243b0(param_1);
  return param_1;
}




longlong * FUN_1415247d0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141524310(param_1);
  return param_2;
}




void FUN_141524800(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x78)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 0x78);
  return;
}




undefined8 * FUN_141524880(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_141524200((undefined4 *)(param_1 + 4),param_5 + 2);
  *(undefined1 *)(param_1 + 0xe) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  return param_1;
}




void * FUN_1415248e0(void *param_1,uint param_2)

{
  *(undefined ***)((longlong)param_1 + 0x40) = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x48));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_141524950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141524972;
  }
  lVar2 = *plVar1;
LAB_141524972:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141524990(longlong *param_1)

{
  FUN_141524310(param_1);
  return param_1;
}




void FUN_1415249b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1415249e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141524a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xe) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x71) = 0;
  return;
}




undefined8 * FUN_141524a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_141524200((undefined4 *)(puVar1 + 4),param_5 + 2);
    *(undefined1 *)(puVar1 + 0xe) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x71) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141524b20(undefined8 *param_1)

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




void FUN_141524b60(longlong param_1)

{
  *(undefined ***)(param_1 + 0x40) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141524b9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x48));
  return;
}




void FUN_141524bb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141524bd0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x40) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141524c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x48));
  return;
}




undefined8 * FUN_141524c20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141524c60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141524a20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x71) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141524ca0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x2e8ba2e8ba2e8b8 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_141524a80(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x70);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x70) == '\0') {
        *(undefined1 *)(plVar2 + 0xe) = 1;
        *(undefined1 *)(lVar4 + 0x70) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x70) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x71) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x70) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x70) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x71) == '\0') {
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
      if (*(char *)(lVar4 + 0x70) == '\0') {
        *(undefined1 *)(plVar2 + 0xe) = 1;
        *(undefined1 *)(lVar4 + 0x70) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x70) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x71) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x70) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x70) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x71) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x70);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x70) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_141524fe0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x71);
  while (cVar1 == '\0') {
    FUN_141524fe0(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    param_2[8] = (longlong)tq::CString::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 9));
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x71);
  }
  return;
}




undefined8 * FUN_141525090(undefined8 *param_1)

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




void FUN_141525120(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141525140(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1415251d0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x71) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x71) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14152532d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14152535c;
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
      if (*(char *)((longlong)plVar6 + 0x71) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x71) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x71);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x71);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x71);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x71);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x71) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x71) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14152532d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141524ca0(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14152535c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_141525380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141524fe0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_1415253c0(undefined8 *param_1)

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




ulonglong FUN_141525410(longlong *param_1,int param_2,uint *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1[7] == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar5 = (undefined8 *)param_1[6];
  plVar2 = (longlong *)*param_1;
  uVar8 = 0;
  uVar11 = 0;
  uVar12 = 0;
  puVar7 = (undefined8 *)*puVar5;
  do {
    puVar3 = (undefined8 *)param_1[6];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX;
    }
    if (puVar7 == puVar3) {
      if (((uVar8 == 0) || (uVar11 == 0)) || (uVar12 == 0)) {
        uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
      }
      else {
        uVar9 = uVar8;
        if (uVar11 < uVar8) {
          uVar9 = uVar11;
          uVar11 = uVar8;
        }
        *param_3 = uVar9;
        param_3[1] = uVar11;
        param_3[2] = uVar12;
        uVar6 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
      }
      return uVar6;
    }
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
    if (*(int *)(puVar7 + 5) == param_2) {
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
      if (9999 < *(uint *)((longlong)puVar7 + 0x24)) {
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
        if (*(uint *)((longlong)puVar7 + 0x24) < 11000) {
          if (uVar8 == 0) {
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
            uVar8 = *(uint *)((longlong)puVar7 + 0x24);
          }
          else {
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
            uVar11 = *(uint *)((longlong)puVar7 + 0x24);
          }
          goto LAB_141525576;
        }
      }
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
      uVar12 = uVar12 + *(int *)((longlong)puVar7 + 0x2c);
    }
LAB_141525576:
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar7 + 0x71) == '\0') {
      puVar3 = (undefined8 *)puVar7[2];
      if (*(char *)((longlong)puVar3 + 0x71) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x71);
        puVar5 = (undefined8 *)*puVar3;
        while (puVar7 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar5 + 0x71);
          puVar3 = puVar5;
          puVar5 = (undefined8 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar7[1] + 0x71);
        puVar4 = (undefined8 *)puVar7[1];
        puVar3 = puVar7;
        while ((puVar5 = puVar4, puVar7 = puVar5, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar5[2]))) {
          cVar1 = *(char *)((longlong)puVar5[1] + 0x71);
          puVar4 = (undefined8 *)puVar5[1];
          puVar3 = puVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX_00;
    }
  } while( true );
}




undefined4 FUN_141525650(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_1[7] == 0) {
    return 0;
  }
  plVar5 = *(longlong **)param_1[6];
  puVar2 = (ulonglong *)*param_1;
  uVar6 = 0;
  uVar9 = uVar6;
  while( true ) {
    plVar3 = (longlong *)param_1[6];
    if ((puVar2 == (ulonglong *)0x0) || (puVar2 != (ulonglong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar6;
    }
    else {
      uVar7 = *puVar2;
    }
    if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((int)plVar5[5] == param_2) {
      if (puVar2 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar7 = uVar6;
      }
      else {
        uVar7 = *puVar2;
      }
      if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (10999 < *(uint *)((longlong)plVar5 + 0x24)) {
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar7 = uVar6;
        }
        else {
          uVar7 = *puVar2;
        }
        if (plVar5 == *(longlong **)(uVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar8 = (int)uVar9 + *(int *)((longlong)plVar5 + 0x2c);
        uVar9 = (ulonglong)uVar8;
        if (param_3 < (int)uVar8) {
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            uVar6 = *puVar2;
          }
          if (plVar5 == *(longlong **)(uVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          return *(undefined4 *)((longlong)plVar5 + 0x24);
        }
      }
    }
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x71) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x71) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x71);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x71);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x71);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x71);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return 0;
}




undefined8 * FUN_141525800(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x71) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141524310(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x71) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x71) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x71) == '\0') {
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
        plVar3 = plVar2 + 0xe;
        plVar7 = plVar7 + 0xe;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_1415259ec;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x71) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x71) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x71);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x71);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x71) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x71);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x71);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_1415259ec:
  if ((char)plVar2[0xe] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0xe] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0xe] == '\0') {
            *(undefined1 *)(plVar8 + 0xe) = 1;
            *(undefined1 *)(plVar7 + 0xe) = 0;
            FUN_141524630((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x71) == '\0') {
            if ((*(char *)(*plVar8 + 0x70) != '\x01') || (*(char *)(plVar8[2] + 0x70) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x70) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x70) = 1;
                *(undefined1 *)(plVar8 + 0xe) = 0;
                FUN_141524130((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0xe) = (char)plVar7[0xe];
              *(undefined1 *)(plVar7 + 0xe) = 1;
              *(undefined1 *)(plVar8[2] + 0x70) = 1;
              FUN_141524630((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xe) = 0;
          }
        }
        else {
          if ((char)plVar8[0xe] == '\0') {
            *(undefined1 *)(plVar8 + 0xe) = 1;
            *(undefined1 *)(plVar7 + 0xe) = 0;
            FUN_141524130((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x71) == '\0') {
            if ((*(char *)(plVar8[2] + 0x70) != '\x01') || (*(char *)(*plVar8 + 0x70) != '\x01')) {
              if (*(char *)(*plVar8 + 0x70) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x70) = 1;
                *(undefined1 *)(plVar8 + 0xe) = 0;
                FUN_141524630((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0xe) = (char)plVar7[0xe];
              *(undefined1 *)(plVar7 + 0xe) = 1;
              *(undefined1 *)(*plVar8 + 0x70) = 1;
              FUN_141524130((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0xe) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0xe) = 1;
  }
  plVar2[8] = (longlong)tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar2 + 9));
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




longlong * FUN_141525bf0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x71) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x71) == '\0');
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




void FUN_141525cc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141525ce0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_141524ca0(param_1,param_2,'\x01',(undefined8 *)param_1[6],param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141524ca0(param_1,param_2,'\x01',puVar3,param_4);
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
          FUN_141524ca0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),param_4);
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
          if (*(char *)((longlong)local_30 + 0x71) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x71) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x71);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x71);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x71);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x71);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x71) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x71) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x71) != '\0') {
              FUN_141524ca0(param_1,param_2,'\0',plVar7,param_4);
              return param_2;
            }
            FUN_141524ca0(param_1,param_2,'\x01',(undefined8 *)param_3[1],param_4);
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
          if (*(char *)((longlong)local_30 + 0x71) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x71) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x71);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x71);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x71);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x71);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x71) != '\0') {
              FUN_141524ca0(param_1,param_2,'\0',(undefined8 *)param_3[1],param_4);
              return param_2;
            }
            FUN_141524ca0(param_1,param_2,'\x01',plVar9,param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1415251d0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_141526000(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141524fe0(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    if (*(char *)(lVar4 + 0x71) == '\0') {
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar5 + 0x71) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x71);
        plVar6 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x71);
          plVar5 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        plVar5 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar5 + 0x71);
        while ((cVar1 == '\0' && (param_3[1] == plVar5[2]))) {
          param_3[1] = (longlong)plVar5;
          plVar5 = (longlong *)plVar5[1];
          cVar1 = *(char *)((longlong)plVar5 + 0x71);
        }
      }
      param_3[1] = (longlong)plVar5;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_141525800(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1415261e0(undefined8 *param_1)

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




bool FUN_141526230(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  puVar5 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar5 + 0x71);
  puVar3 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar5 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar5[2];
      puVar5 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar3 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x71);
  }
  puVar5 = (undefined8 *)param_1[6];
  local_30 = puVar3;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar5) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = param_1[6];
    local_28 = *param_1;
  }
  else {
    plVar6 = &local_38;
  }
  local_18 = *plVar6;
  lVar2 = param_1[6];
  local_10 = plVar6[1];
  if ((local_18 == 0) || (local_18 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  bVar7 = local_10 != lVar2;
  if (bVar7) {
    local_18 = *plVar6;
    local_10 = plVar6[1];
    FUN_141525800(param_1,&local_28,&local_18);
  }
  return bVar7;
}




longlong FUN_141526330(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x71);
  puVar3 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar7[2];
      puVar7 = puVar3;
    }
    else {
      puVar4 = (undefined8 *)*puVar7;
    }
    puVar3 = puVar7;
    puVar7 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x71);
  }
  puVar7 = (undefined8 *)param_1[6];
  local_30 = puVar3;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = param_1[6];
    local_28 = *param_1;
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = param_1[6];
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_10;
  if (local_10 == lVar8) {
    lVar5 = 0;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (lVar5 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar5 = lVar5 + 0x20;
  }
  return lVar5;
}




undefined8 * FUN_141526430(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [8];
  undefined **local_b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a8 [40];
  uint local_80 [2];
  undefined4 local_78 [8];
  undefined **local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [40];
  longlong local_28 [2];
  
  local_d8 = 0xfffffffffffffffe;
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x71) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x71) == '\0');
  }
  plVar5 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_e8 = plVar5;
    puStack_e0 = puVar4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8);
    local_b0 = tq::CString::vftable;
    local_80[0] = *param_2;
    FUN_141524200(local_78,local_d0);
    plVar3 = FUN_141525ce0(param_1,local_28,(longlong *)&local_e8,local_80);
    plVar5 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
    local_58 = tq::CString::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50);
    local_b0 = tq::CString::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a8);
  }
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar5;
  }
  if (puVar4 == *(undefined8 **)(lVar6 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return puVar4 + 4;
}




void FUN_1415265d0(longlong *param_1)

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
  FUN_141526000(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141526640(undefined8 *param_1)

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




undefined8 FUN_141526690(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  char *pcVar3;
  
  puVar1 = FUN_141526430(param_1,param_2 + 1);
  *(undefined4 *)puVar1 = *param_2;
  *(undefined4 *)((longlong)puVar1 + 4) = param_2[1];
  *(undefined4 *)(puVar1 + 1) = param_2[2];
  *(undefined4 *)((longlong)puVar1 + 0xc) = param_2[3];
  *(undefined4 *)(puVar1 + 2) = param_2[4];
  *(undefined4 *)((longlong)puVar1 + 0x14) = param_2[5];
  *(undefined4 *)(puVar1 + 3) = param_2[6];
  if (*(ulonglong *)(param_2 + 0x12) < 0x10) {
    pcVar3 = (char *)(param_2 + 0xc);
  }
  else {
    pcVar3 = *(char **)(param_2 + 0xc);
  }
  pbVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 5),pcVar3);
  return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
}




void FUN_141526700(longlong *param_1)

{
  FUN_1415265d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141526730(undefined8 *param_1)

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
  lVar2 = FUN_141524a20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x71) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1415267b0(longlong *param_1)

{
  FUN_1415265d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1415267e0(longlong *param_1)

{
  FUN_1415265d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141526810(undefined8 *param_1)

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
  lVar2 = FUN_141524a20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x71) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141526890(undefined8 *param_1)

{
  FUN_141526810(param_1);
  return param_1;
}




undefined4 * FUN_1415268c0(undefined4 *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 6));
  *(undefined ***)(param_1 + 4) = tq::CString::vftable;
  param_1[0x10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}




ulonglong FUN_141526920(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (longlong *)0x0) {
    in_RAX = (**(code **)(*param_1 + 8))(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




void FUN_141526940(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x00014152696d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}




void FUN_141526980(undefined8 *param_1)

{
  *param_1 = lottery::CLottery::vftable;
  param_1[3] = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001415269c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  return;
}




undefined4 FUN_1415269f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




undefined4 FUN_141526a00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




undefined4 FUN_141526a10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined4 FUN_141526a20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




longlong FUN_141526a30(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    return *(longlong *)(param_1 + 0x28);
  }
  return param_1 + 0x28;
}




undefined4 FUN_141526a50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




undefined4 FUN_141526a60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}




undefined4 FUN_141526a70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




undefined4 FUN_141526a80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}




undefined8 FUN_141526a90(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  if (*(ulonglong *)(param_2 + 0xe) < 0x10) {
    pcVar2 = (char *)(param_2 + 8);
  }
  else {
    pcVar2 = *(char **)(param_2 + 8);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x20),pcVar2);
  *(undefined4 *)(param_1 + 0x48) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x4c) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x50) = param_2[0x12];
  uVar1 = param_2[0x13];
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}




void FUN_141526b00(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




undefined * FUN_141526b30(void)

{
  if ((DAT_141542428 & 1) == 0) {
    DAT_141542428 = DAT_141542428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141542420,"CLottery");
    atexit((_func_5014 *)&LAB_141536ea0);
  }
  return &DAT_141542420;
}




void FUN_141526b90(__uint64 param_1)

{
  if ((DAT_141542428 & 1) == 0) {
    DAT_141542428 = DAT_141542428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141542420,"CLottery");
    atexit((_func_5014 *)&LAB_141536ea0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141526be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141542420,param_1);
  return;
}




void FUN_141526bf0(void *param_1)

{
  if ((DAT_141542428 & 1) == 0) {
    DAT_141542428 = DAT_141542428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141542420,"CLottery");
    atexit((_func_5014 *)&LAB_141536ea0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141526c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141542420,param_1);
  return;
}




void FUN_141526c50(void *param_1)

{
  if ((DAT_141542428 & 1) == 0) {
    DAT_141542428 = DAT_141542428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141542420,"CLottery");
    atexit((_func_5014 *)&LAB_141536ea0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141526ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141542420,param_1);
  return;
}




undefined8 * FUN_141526cb0(undefined8 *param_1)

{
  *param_1 = lottery::CLottery::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  param_1[3] = tq::CString::vftable;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}




undefined8 * FUN_141526d20(undefined8 *param_1,uint param_2)

{
  *param_1 = lottery::CLottery::vftable;
  param_1[3] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4));
  if ((param_2 & 1) != 0) {
    FUN_141526bf0(param_1);
  }
  return param_1;
}




undefined8 * FUN_141526d90(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((DAT_141542428 & 1) == 0) {
    DAT_141542428 = DAT_141542428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141542420,"CLottery");
    atexit((_func_5014 *)&LAB_141536ea0);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141542420,0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_141526cb0(puVar1);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141537598,"IF_NOT","pLottery","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lottery.cpp",0x10);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_141526a90((longlong)puVar1,param_1);
    if ((char)uVar2 == '\0') {
      (**(code **)*puVar1)(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_141526e90(void)

{
  if (DAT_141542430 != (undefined8 *)0x0) {
    (**(code **)*DAT_141542430)(DAT_141542430,1);
  }
  return;
}




ulonglong FUN_141526eb0(longlong param_1,int param_2,uint param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong extraout_RAX_00;
  uint local_38;
  uint local_34;
  int local_30;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 200) == 0)) {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x20))();
  iVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))(*(longlong **)(param_1 + 200),param_2);
  plVar6 = (longlong *)FUN_1415234b0(*(longlong *)(param_1 + 0xd0),param_3);
  if (plVar6 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141537598);
    uVar7 = extraout_RAX;
  }
  else {
    uVar7 = FUN_141525410(plVar6,param_3,&local_38);
    if ((char)uVar7 != '\0') {
      lVar8 = FUN_141526330(plVar6,local_38);
      uVar7 = FUN_141526330(plVar6,local_34);
      if ((lVar8 != 0) && (uVar7 != 0)) {
        if (iVar1 < *(int *)(lVar8 + 0x10)) {
          if (iVar2 < *(int *)(uVar7 + 0x10)) {
            uVar3 = tq::TimeGet(0);
            srand(iVar2 + uVar3 + iVar1 + param_3);
            iVar4 = tq::RandGet(local_30);
            uVar5 = FUN_141525650(plVar6,param_3,iVar4);
            uVar5 = uVar5 % 10;
            *param_4 = uVar5;
            if (*(int *)(lVar8 + 0xc) < (int)uVar5) {
              if (*(int *)(uVar7 + 0xc) < (int)uVar5) {
                (**(code **)(**(longlong **)(param_1 + 200) + 0x28))(*(longlong **)(param_1 + 200),param_2,iVar1 + 1,0);
                (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),param_2,iVar2 + 1,1);
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 200) + 0x28))(*(longlong **)(param_1 + 200),param_2,iVar1 + 1,0);
                (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),param_2,0,1);
              }
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 200) + 0x28))(*(longlong **)(param_1 + 200),param_2,0,0);
              (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),param_2,0,1);
            }
          }
          else {
            *param_4 = *(uint *)(uVar7 + 0xc);
            (**(code **)(**(longlong **)(param_1 + 200) + 0x28))(*(longlong **)(param_1 + 200),param_2,iVar1 + 1,0);
            (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),param_2,0,1);
          }
        }
        else {
          *param_4 = *(uint *)(lVar8 + 0xc);
          (**(code **)(**(longlong **)(param_1 + 200) + 0x28))(*(longlong **)(param_1 + 200),param_2,0,0);
          (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),param_2,0,1);
        }
        *param_5 = *(undefined4 *)(uVar7 + 0xc);
        return CONCAT71((int7)((ulonglong)param_5 >> 8),1);
      }
      return uVar7 & 0xffffffffffffff00;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}




longlong * FUN_141527180(longlong *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x28))();
  if (iVar2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar3 = tq::TimeGet(0);
    iVar4 = rand();
    srand(iVar4 + param_2 + uVar3 + param_3 + param_4);
    lVar1 = *param_1;
    iVar4 = tq::RandGet(iVar2);
    plVar5 = (longlong *)(**(code **)(lVar1 + 0x30))(param_1,param_2,param_3,iVar4);
    if (((plVar5 != (longlong *)0x0) && (0 < param_4)) && (plVar6 = plVar5, iVar4 = (**(code **)(*plVar5 + 0x40))(plVar5), param_4 != iVar4)) {
      lVar1 = *param_1;
      iVar2 = tq::RandGet(iVar2);
      plVar5 = (longlong *)(**(code **)(lVar1 + 0x30))(param_1,param_2,param_3,iVar2,plVar6);
    }
  }
  return plVar5;
}




ulonglong FUN_141527270(longlong param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong extraout_RAX;
  
  if ((param_3 != (longlong *)0x0) && (*(longlong *)(param_1 + 200) != 0)) {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3);
    iVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x40))(*(longlong **)(param_1 + 200),param_2,uVar3);
    *param_4 = iVar4;
    if (iVar4 != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x48))(*(longlong **)(param_1 + 200),param_2,iVar4);
      if (cVar2 != '\0') {
        lVar1 = **(longlong **)(param_1 + 200);
        uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
        (**(code **)(lVar1 + 0x50))(*(undefined8 *)(param_1 + 200),param_2,*param_4,0,uVar3);
        lVar1 = **(longlong **)(param_1 + 200);
        uVar3 = (**(code **)(*param_3 + 0x50))(param_3);
        (**(code **)(lVar1 + 0x50))(*(undefined8 *)(param_1 + 200),param_2,*param_4,1,uVar3);
      }
      uVar5 = (**(code **)(**(longlong **)(param_1 + 200) + 0x58))(*(longlong **)(param_1 + 200),param_2,*param_4);
      return uVar5;
    }
  }
  log_InlineLogERROR(&DAT_141537598);
  return extraout_RAX & 0xffffffffffffff00;
}




void FUN_1415274a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x39) == '\0') {
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




bool FUN_1415275b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141527620(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141527680(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1415276e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_141527940(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141527962;
  }
  lVar2 = *plVar1;
LAB_141527962:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141527980(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415279a2;
  }
  lVar2 = *plVar1;
LAB_1415279a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1415279c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415279e2;
  }
  lVar2 = *plVar1;
LAB_1415279e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141527a00(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x39) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x39) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x39);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x39);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x39);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x39);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141527a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141527ae0(longlong param_1,longlong *param_2)

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




void FUN_141527b70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x25) == '\0') {
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




void FUN_141527c00(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x39) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x39);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x39);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x39);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x39);
    }
    if (*(char *)(param_1[1] + 0x39) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x39) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141527c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141527ee0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_141527fb0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141528030(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 * 0x28);
  return;
}




void FUN_1415280d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x40)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 << 6);
  return;
}




void FUN_141528160(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_141528250(void *param_1,uint param_2)

{
  FUN_141523790((longlong)param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




bool FUN_141528290(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1415282d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_141528310(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_141528350(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1415283a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1415283c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x39) == '\0') {
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




void FUN_141528420(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141528450(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141528480(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141528490(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415284b2;
  }
  lVar2 = *plVar1;
LAB_1415284b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1415284d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415284f2;
  }
  lVar2 = *plVar1;
LAB_1415284f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141528510(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141528532;
  }
  lVar2 = *plVar1;
LAB_141528532:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141528550(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141528572;
  }
  lVar2 = *plVar1;
LAB_141528572:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141528590(longlong *param_1)

{
  FUN_141527a00(param_1);
  return param_1;
}




longlong FUN_1415285b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415285d2;
  }
  lVar2 = *plVar1;
LAB_1415285d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1415286e0(longlong param_1,longlong param_2)

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




void FUN_141528740(longlong param_1,longlong *param_2)

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




undefined8 * FUN_1415287c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141528800(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141528824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1415288a0(longlong *param_1)

{
  FUN_141527c00(param_1);
  return param_1;
}




void FUN_1415288f0(longlong param_1,longlong param_2)

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




void FUN_141528970(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x25) == '\0') {
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




void FUN_1415289d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_141528a40(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141528a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141528ae0(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x25) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x25);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x25);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x25);
    }
    if (*(char *)(param_1[1] + 0x25) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x25) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141528b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141528b80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x25) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x25);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x25);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x25);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x25);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141528ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141528c10(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141528c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141528cb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141528cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141528d40(longlong *param_1)

{
  FUN_141527c00(param_1);
  return param_1;
}




longlong * FUN_141528d60(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141527a00(param_1);
  return param_2;
}




void FUN_141528d90(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_141528e20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x39);
  while (cVar1 == '\0') {
    FUN_141528e20(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x39);
  }
  return;
}




void FUN_141528e70(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x40)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 << 6);
  return;
}




void FUN_141528ef0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141540b08);
  }
  operator_new(param_2 * 0x28);
  return;
}




void FUN_141528f90(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_141523790((longlong)pvVar1);
    operator_delete(pvVar1);
    *param_1 = 0;
  }
  return;
}




longlong FUN_141528fd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141528ff2;
  }
  lVar2 = *plVar1;
LAB_141528ff2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141529010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141529032;
  }
  lVar2 = *plVar1;
LAB_141529032:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141529050(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141529072;
  }
  lVar2 = *plVar1;
LAB_141529072:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141529090(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415290b2;
  }
  lVar2 = *plVar1;
LAB_1415290b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1415290d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1415290f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141529110(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141529130(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141529150(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141529150(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_1415291a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1415291f0(longlong *param_1)

{
  FUN_141528800(param_1);
  return param_1;
}




undefined8 * FUN_141529210(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141529250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_1415292d0(longlong *param_1)

{
  FUN_141528a40(param_1);
  return param_1;
}




undefined8 * FUN_141529300(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141529340(longlong *param_1)

{
  FUN_141528b80(param_1);
  return param_1;
}




longlong * FUN_141529360(longlong *param_1)

{
  FUN_141528ae0(param_1);
  return param_1;
}




longlong * FUN_141529380(longlong *param_1)

{
  FUN_141528cb0(param_1);
  return param_1;
}




longlong * FUN_1415293a0(longlong *param_1)

{
  FUN_141528c10(param_1);
  return param_1;
}




undefined8 * FUN_1415293d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141529410(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141529450(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1415294a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141528cb0(param_3);
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
        goto LAB_14152968c;
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
LAB_14152968c:
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
            FUN_1415288f0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_141527ae0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1415288f0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_141527ae0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1415288f0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_141527ae0((longlong)param_1,plVar7);
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




void FUN_141529860(void)

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




undefined8 * FUN_1415298c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_141529940(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x39);
  while (cVar1 == '\0') {
    FUN_141528e20(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x39);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




void FUN_1415299c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
  return;
}




undefined8 * FUN_141529a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    puVar1[5] = param_5[2];
    puVar1[6] = param_5[3];
    *(undefined1 *)(puVar1 + 7) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x39) = 0;
  }
  return puVar1;
}




void FUN_141529ab0(void)

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
  *(undefined1 *)((longlong)puVar1 + 0x24) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  return;
}




undefined8 * FUN_141529b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_5[1];
    *(undefined4 *)(puVar1 + 4) = param_5[2];
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x25) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141529ba0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141529bf0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141528800(param_3);
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
        goto LAB_141529ddc;
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
LAB_141529ddc:
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
            FUN_1415286e0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141528740((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1415286e0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141528740((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1415286e0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141528740((longlong)param_1,plVar7);
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




void FUN_141529fb0(void)

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




longlong * FUN_14152a010(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141528800(param_1);
  return param_2;
}




longlong * FUN_14152a040(longlong *param_1)

{
  FUN_141528ae0(param_1);
  return param_1;
}




longlong * FUN_14152a060(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141528b80(param_1);
  return param_2;
}




longlong * FUN_14152a090(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141528cb0(param_1);
  return param_2;
}




longlong * FUN_14152a0c0(longlong *param_1)

{
  FUN_141528c10(param_1);
  return param_1;
}




void FUN_14152a0e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_14152a0e0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




void FUN_14152a130(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x25);
  while (cVar1 == '\0') {
    FUN_14152a130(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x25);
  }
  return;
}




undefined8 * FUN_14152a180(undefined8 *param_1)

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




undefined8 * FUN_14152a1c0(undefined8 *param_1)

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




undefined8 * FUN_14152a200(undefined8 *param_1)

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




undefined8 * FUN_14152a240(undefined8 *param_1)

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




void FUN_14152a2e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141529150(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_14152a370(longlong *param_1)

{
  FUN_141528800(param_1);
  return param_1;
}




void FUN_14152a390(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152a3b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152a3d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152a3f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14152a4b0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_141529250(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_14152a7f0(longlong *param_1)

{
  FUN_141528a40(param_1);
  return param_1;
}




undefined8 * FUN_14152a810(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_14152a850(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_14152a8b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141529860();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14152a8f0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_1415298c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_14152ac50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1415299c0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x39) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14152ac90(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
  
  if (0x7fffffffffffffd < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_141529a20(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x38);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x38) == '\0') {
        *(undefined1 *)(plVar2 + 7) = 1;
        *(undefined1 *)(lVar4 + 0x38) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x38) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x39) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x38) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x38) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x39) == '\0') {
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
      if (*(char *)(lVar4 + 0x38) == '\0') {
        *(undefined1 *)(plVar2 + 7) = 1;
        *(undefined1 *)(lVar4 + 0x38) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x38) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x39) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x38) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x38) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x39) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x38);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x38) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




void FUN_14152aff0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141529ab0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x25) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14152b030(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x1555555555555553 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141540b90);
  }
  plVar5 = FUN_141529b10(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x24);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x25) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
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
      if (*(char *)(lVar4 + 0x24) == '\0') {
        *(undefined1 *)((longlong)plVar2 + 0x24) = 1;
        *(undefined1 *)(lVar4 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x25) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x24) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x24) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x25) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x24);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x24) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




longlong * FUN_14152b370(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14152a2e0((longlong)param_1);
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
    FUN_141529bf0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_14152b520(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141529fb0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_14152b560(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_14152a0e0(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_14152b5e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_14152b630(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141528b80(param_3);
  plVar11 = (longlong *)*plVar5;
  if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
    plVar12 = plVar11;
    if (*(char *)(plVar5[2] + 0x25) == '\0') {
      plVar10 = (longlong *)param_3[1];
      plVar12 = (longlong *)plVar10[2];
      if (plVar10 != plVar5) {
        plVar11[1] = (longlong)plVar10;
        *plVar10 = *plVar5;
        plVar11 = plVar10;
        if (plVar10 != (longlong *)plVar5[2]) {
          plVar11 = (longlong *)plVar10[1];
          if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
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
        puVar1 = (undefined1 *)((longlong)plVar5 + 0x24);
        puVar2 = (undefined1 *)((longlong)plVar10 + 0x24);
        if (puVar2 != puVar1) {
          uVar4 = *puVar2;
          *puVar2 = *puVar1;
          *puVar1 = uVar4;
        }
        goto LAB_14152b81c;
      }
    }
  }
  else {
    plVar12 = (longlong *)plVar5[2];
  }
  plVar11 = (longlong *)plVar5[1];
  if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
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
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(*plVar12 + 0x25);
      plVar6 = (longlong *)*plVar12;
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)*plVar9;
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)param_1[6] = plVar10;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar5) {
    plVar10 = plVar11;
    if (*(char *)((longlong)plVar12 + 0x25) == '\0') {
      cVar3 = *(char *)(plVar12[2] + 0x25);
      plVar6 = (longlong *)plVar12[2];
      plVar10 = plVar12;
      while (plVar9 = plVar6, cVar3 == '\0') {
        plVar6 = (longlong *)plVar9[2];
        cVar3 = *(char *)((longlong)plVar6 + 0x25);
        plVar10 = plVar9;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar10;
  }
LAB_14152b81c:
  if (*(char *)((longlong)plVar5 + 0x24) == '\x01') {
    if (plVar12 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar10 = plVar11;
        if (*(char *)((longlong)plVar12 + 0x24) != '\x01') break;
        plVar11 = (longlong *)*plVar10;
        if (plVar12 == plVar11) {
          plVar11 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_141528970((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(*plVar11 + 0x24) != '\x01') || (*(char *)(plVar11[2] + 0x24) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x24) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_141527b70((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(plVar11[2] + 0x24) = 1;
              FUN_141528970((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x24) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x24) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x24) = 0;
            FUN_141527b70((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x25) == '\0') {
            if ((*(char *)(plVar11[2] + 0x24) != '\x01') || (*(char *)(*plVar11 + 0x24) != '\x01')) {
              if (*(char *)(*plVar11 + 0x24) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x24) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
                FUN_141528970((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x24) = *(undefined1 *)((longlong)plVar10 + 0x24);
              *(undefined1 *)((longlong)plVar10 + 0x24) = 1;
              *(undefined1 *)(*plVar11 + 0x24) = 1;
              FUN_141527b70((longlong)param_1,plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x24) = 0;
          }
        }
        plVar11 = (longlong *)plVar10[1];
        plVar12 = plVar10;
      } while (plVar10 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)((longlong)plVar12 + 0x24) = 1;
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




void FUN_14152b9f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x25);
  while (cVar1 == '\0') {
    FUN_14152a130(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x25);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_14152ba70(undefined8 *param_1)

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




undefined8 * FUN_14152bac0(undefined8 *param_1)

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




undefined8 * FUN_14152bb10(undefined8 *param_1)

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




undefined8 * FUN_14152bb60(undefined8 *param_1)

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




int FUN_14152bbb0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    iVar7 = 0;
    plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x108);
    plVar1 = *(longlong **)(param_1 + 0xd8);
LAB_14152bc36:
    plVar5 = *(longlong **)(param_1 + 0x108);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0xd8))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) {
      return iVar7;
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
    plVar5 = (longlong *)plVar4[4];
    if (plVar5 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
      if ((iVar3 == param_2) && (iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5), iVar3 == param_3)) {
        iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        iVar7 = iVar7 + iVar3;
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
            bVar8 = plVar5 == (longlong *)plVar4[2];
            plVar5 = plVar4;
          } while (bVar8);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_14152bc36;
    }
    log_InlineLogERROR(&DAT_141537598);
  }
  return 0;
}




longlong FUN_14152bd90(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar10;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return 0;
  }
  uVar7 = 0;
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x108);
  puVar1 = *(ulonglong **)(param_1 + 0xd8);
  uVar9 = uVar7;
  do {
    while( true ) {
      while( true ) {
        plVar5 = *(longlong **)(param_1 + 0x108);
        if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0xd8))) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar5) {
          log_InlineLogERROR("CLotteryMgr::GetRandomLottery return NULL LotteryType=%d, Rank=%d, Random=%d");
          return 0;
        }
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar6 = uVar7;
        }
        else {
          uVar6 = *puVar1;
        }
        if (plVar4 == *(longlong **)(uVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar5 = (longlong *)plVar4[4];
        if (plVar5 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_141537598);
          return 0;
        }
        iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
        if ((iVar3 == param_2) && (iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5), iVar3 == param_3)) {
          iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
          uVar8 = (int)uVar9 + iVar3;
          uVar9 = (ulonglong)uVar8;
          if (param_4 < (int)uVar8) {
            if (puVar1 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
            }
            else {
              uVar7 = *puVar1;
            }
            if (plVar4 == *(longlong **)(uVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            return plVar4[4];
          }
        }
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar4 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar5 = plVar4;
      plVar2 = (longlong *)plVar4[2];
      if (*(char *)(plVar4[2] + 0x29) != '\0') break;
      do {
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar4;
      } while (*(char *)(*plVar4 + 0x29) == '\0');
    }
    do {
      plVar4 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
      bVar10 = plVar5 == (longlong *)plVar4[2];
      plVar5 = plVar4;
    } while (bVar10);
  } while( true );
}




longlong * FUN_14152bfc0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_14152c0d0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14152c22d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14152c25c;
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
      goto LAB_14152c22d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14152a4b0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14152c25c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_14152c280(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152c2a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152c2c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152c2e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14152c300(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_14152c3d0(longlong *param_1)

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
  FUN_14152b370(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_14152c440(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14152c59d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14152c5cc;
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
      goto LAB_14152c59d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14152a8f0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14152c5cc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_14152c5f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14152b560((longlong)param_1);
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
    FUN_1415294a0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_14152c7a0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x39) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x39) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14152c8fd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14152c92c;
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
      if (*(char *)((longlong)plVar6 + 0x39) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x39) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x39);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x39);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x39);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x39);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x39) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x39) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14152c8fd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14152ac90(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14152c92c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_14152c950(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x25) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x25) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14152caad:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14152cadc;
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
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x25) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x25);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x25);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x25);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x25);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x25) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x25) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14152caad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14152b030(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14152cadc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_14152cb00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14152b9f0((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x25) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x25);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x25);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x25);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x25);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_14152b630(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_14152ccb0(undefined8 *param_1)

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




undefined8 * FUN_14152cd00(undefined8 *param_1)

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




undefined8 * FUN_14152cd50(undefined8 *param_1)

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




undefined8 * FUN_14152cda0(undefined8 *param_1)

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

ulonglong FUN_14152cdf0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong extraout_RAX_00;
  undefined8 uVar6;
  ulonglong extraout_RAX_01;
  longlong *plVar7;
  ulonglong extraout_RAX_02;
  longlong *plVar8;
  char *pcVar9;
  ulonglong extraout_RAX_03;
  undefined1 auStack_508 [32];
  undefined4 local_4e8;
  int local_4d8;
  longlong *local_4d0;
  undefined ***local_4c8;
  longlong *local_4c0;
  uint local_4b8 [2];
  longlong *local_4b0;
  undefined8 local_4a8;
  undefined ***local_4a0;
  longlong local_498 [2];
  char local_488;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined **local_468;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_460 [40];
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  char local_428;
  undefined1 local_427 [1023];
  ulonglong local_28;
  
  local_4a8 = 0xfffffffffffffffe;
  local_28 = DAT_141542400 ^ (ulonglong)auStack_508;
  local_4c8 = (undefined ***)param_1;
  if (param_2 == 0) {
    local_4e8 = 0x42;
    log_InlineLogERROR(&DAT_141537598,"IF_NOT","pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lotterymgr.cpp");
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 200) = param_2;
    local_4d0 = operator_new(0x48);
    if (local_4d0 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = FUN_141523ec0(local_4d0);
    }
    *(undefined8 **)(param_1 + 0xd0) = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      local_4e8 = 0x4b;
      log_InlineLogERROR(&DAT_141537598,"IF_NOT","m_pConfigMgr","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lotterymgr.cpp");
      uVar4 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar6 = FUN_1415239b0(puVar5,*(longlong **)(param_1 + 200));
      if ((char)uVar6 == '\0') {
        local_4e8 = 0x50;
        log_InlineLogERROR(&DAT_141537598,"IF_NOT","m_pConfigMgr->Init(m_pConsumer)","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lotterymgr.cpp"
                          );
        uVar4 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        local_428 = '\0';
        memset(local_427,0,0x3ff);
        _snprintf(&local_428,0x3ff,"SELECT * FROM %s","cq_lottery");
        plVar7 = (longlong *)InstanceGet();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7,&local_428,2);
        local_4d0 = plVar7;
        if (plVar7 == (longlong *)0x0) {
          local_4e8 = 0x58;
          log_InlineLogERROR(&DAT_141537598,"IF_NOT",&DAT_141538db4,"f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lotterymgr.cpp");
          uVar4 = extraout_RAX_02 & 0xffffffffffffff00;
        }
        else {
          local_4d8 = 0;
          while (iVar1 = local_4d8, iVar2 = (**(code **)(*plVar7 + 0x40))(plVar7), iVar1 < iVar2) {
            (**(code **)(*plVar7 + 0x30))(plVar7,(longlong)iVar1);
            FUN_1415268c0(&local_478);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,0);
            local_478 = (**(code **)(*plVar8 + 0x40))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,1);
            local_474 = (**(code **)(*plVar8 + 0x40))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,2);
            local_470 = (**(code **)(*plVar8 + 0x48))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,3);
            local_46c = (**(code **)(*plVar8 + 0x48))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,4);
            pcVar9 = (char *)(**(code **)(*plVar8 + 0x78))(plVar8);
            if (pcVar9 != (char *)0x0) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_460,pcVar9);
            }
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,5);
            local_438 = (**(code **)(*plVar8 + 0x40))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,6);
            local_434 = (**(code **)(*plVar8 + 0x48))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,7);
            local_430 = (**(code **)(*plVar8 + 0x48))(plVar8);
            plVar8 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7,8);
            local_42c = (**(code **)(*plVar8 + 0x48))(plVar8);
            plVar8 = FUN_141526d90(&local_478);
            local_4c0 = plVar8;
            if (plVar8 == (longlong *)0x0) {
              local_4e8 = 0x6c;
              log_InlineLogERROR(&DAT_141537598,"IF_NOT","pLottery","f:\\version\\cqserver-78.0.11-1204\\modules\\lottery\\src\\lotterymgr.cpp");
              (**(code **)*plVar7)(plVar7);
              local_4c8 = &local_468;
              local_468 = tq::CString::vftable;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_460);
              return extraout_RAX_03 & 0xffffffffffffff00;
            }
            local_4b8[0] = (**(code **)(*plVar8 + 0x10))(plVar8);
            local_4b0 = plVar8;
            FUN_14152c0d0((longlong *)(param_1 + 0xd8),local_498,local_4b8);
            if (local_488 == '\0') {
              uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8);
              log_InlineLogERROR(&DAT_141538d98,(ulonglong)uVar3);
              (**(code **)*plVar8)(plVar8);
              local_4c0 = (longlong *)0x0;
            }
            local_4a0 = &local_468;
            local_468 = tq::CString::vftable;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_460);
            local_4d8 = iVar1 + 1;
          }
          uVar6 = (**(code **)*plVar7)(plVar7);
          uVar4 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        }
      }
    }
  }
  return uVar4;
}




undefined2 FUN_14152d250(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_res10[0] = param_2;
  FUN_14152bfc0((longlong *)(param_1 + 8),(longlong *)&local_30,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar3 = 0;
  local_20 = *(longlong **)(param_1 + 8);
  if ((local_30 == (longlong *)0x0) || (local_30 != local_20)) {
    _invalid_parameter_noinfo();
  }
  if (local_28 == lVar1) {
    uVar2 = 0;
  }
  else {
    if (local_30 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar3 = *local_30;
    }
    if (local_28 == *(longlong *)(lVar3 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar2 = *(undefined2 *)(local_28 + 0x1c);
  }
  return uVar2;
}




undefined8 * FUN_14152d300(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x39) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141540c20);
  }
  FUN_141527a00(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x39) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x39) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x39) == '\0') {
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
        plVar3 = plVar2 + 7;
        plVar7 = plVar7 + 7;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_14152d4ec;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x39) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x39) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x39);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x39);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x39) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x39);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x39);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_14152d4ec:
  if ((char)plVar2[7] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[7] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[7] == '\0') {
            *(undefined1 *)(plVar8 + 7) = 1;
            *(undefined1 *)(plVar7 + 7) = 0;
            FUN_1415283c0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x39) == '\0') {
            if ((*(char *)(*plVar8 + 0x38) != '\x01') || (*(char *)(plVar8[2] + 0x38) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x38) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x38) = 1;
                *(undefined1 *)(plVar8 + 7) = 0;
                FUN_1415274a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 7) = (char)plVar7[7];
              *(undefined1 *)(plVar7 + 7) = 1;
              *(undefined1 *)(plVar8[2] + 0x38) = 1;
              FUN_1415283c0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 7) = 0;
          }
        }
        else {
          if ((char)plVar8[7] == '\0') {
            *(undefined1 *)(plVar8 + 7) = 1;
            *(undefined1 *)(plVar7 + 7) = 0;
            FUN_1415274a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x39) == '\0') {
            if ((*(char *)(plVar8[2] + 0x38) != '\x01') || (*(char *)(*plVar8 + 0x38) != '\x01')) {
              if (*(char *)(*plVar8 + 0x38) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x38) = 1;
                *(undefined1 *)(plVar8 + 7) = 0;
                FUN_1415283c0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 7) = (char)plVar7[7];
              *(undefined1 *)(plVar7 + 7) = 1;
              *(undefined1 *)(*plVar8 + 0x38) = 1;
              FUN_1415274a0((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 7) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 7) = 1;
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




longlong * FUN_14152d6c0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x39) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x39) == '\0');
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




longlong * FUN_14152d790(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x25) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x25) == '\0');
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




void FUN_14152d860(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152d880(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152d8a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152d8c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_14152d8e0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_14152a8f0(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_14152a8f0(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_14152a8f0(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_14152a8f0(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_14152a8f0(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_14152a8f0(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_14152a8f0(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_14152c440(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_14152dc00(longlong *param_1)

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
  FUN_14152c5f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_14152dc70(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_14152ac90(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_14152ac90(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_14152ac90(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
          if (*(char *)((longlong)local_30 + 0x39) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x39) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x39);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x39);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x39);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x39);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x39) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x39) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x39) != '\0') {
              FUN_14152ac90(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_14152ac90(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
          if (*(char *)((longlong)local_30 + 0x39) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x39) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x39);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x39);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x39);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x39);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x39) != '\0') {
              FUN_14152ac90(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_14152ac90(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_14152c7a0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_14152df90(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_14152b030(param_1,param_2,'\x01',(undefined8 *)param_1[6],param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_14152b030(param_1,param_2,'\x01',puVar3,param_4);
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
          FUN_14152b030(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),param_4);
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
          if (*(char *)((longlong)local_30 + 0x25) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x25) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x25);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x25);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x25);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x25);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x25) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x25) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x25) != '\0') {
              FUN_14152b030(param_1,param_2,'\0',plVar7,param_4);
              return param_2;
            }
            FUN_14152b030(param_1,param_2,'\x01',(undefined8 *)param_3[1],param_4);
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
          if (*(char *)((longlong)local_30 + 0x25) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x25) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x25);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x25);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x25);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x25);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x25) != '\0') {
              FUN_14152b030(param_1,param_2,'\0',(undefined8 *)param_3[1],param_4);
              return param_2;
            }
            FUN_14152b030(param_1,param_2,'\x01',plVar9,param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_14152c950(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_14152e2b0(longlong *param_1)

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
  FUN_14152cb00(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_14152e320(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141529940((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x39) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x39) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x39);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x39);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x39);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x39);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_14152d300(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_14152e4d0(undefined8 *param_1)

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




undefined8 * FUN_14152e520(undefined8 *param_1)

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




undefined8 * FUN_14152e570(undefined8 *param_1)

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




undefined8 * FUN_14152e5c0(undefined8 *param_1)

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




void FUN_14152e610(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if ((param_2 != 0) && (param_1[0x19] != 0)) {
    local_res10[0] = param_2;
    FUN_14152d790(param_1 + 0x11,(longlong *)&local_28,local_res10);
    lVar3 = param_1[0x17];
    if ((local_28 == (longlong *)0x0) || (local_28 != (longlong *)param_1[0x11])) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar3) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar3 = 0;
      }
      else {
        lVar3 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *(ulonglong *)(local_20 + 0x1c);
      cVar2 = (**(code **)(*(longlong *)param_1[0x19] + 0x90))((longlong *)param_1[0x19],param_2,0xadb50,3);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 8))(param_1,param_2,uVar1 & 0xffffffff,uVar1 >> 0x20,0,1);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14152e710(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *extraout_RAX;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong extraout_RAX_00;
  IStringManager *pIVar6;
  char *_Format;
  longlong lVar7;
  undefined1 auStackY_8e8 [32];
  uint local_898;
  uint local_894;
  longlong *local_888;
  longlong lStack_880;
  longlong *local_878 [2];
  longlong *local_868;
  undefined8 local_860;
  ulonglong local_858;
  undefined8 local_850;
  CMsg local_848 [1040];
  char local_438 [1024];
  ulonglong local_38;
  
  local_850 = 0xfffffffffffffffe;
  local_38 = DAT_141542400 ^ (ulonglong)auStackY_8e8;
  local_898 = param_2;
  local_894 = param_2;
  FUN_14152d6c0(param_1 + 9,(longlong *)&local_888,&local_898);
  lVar7 = param_1[0xf];
  plVar4 = (longlong *)param_1[9];
  local_878[0] = plVar4;
  if ((local_888 == (longlong *)0x0) || (local_888 != plVar4)) {
    _invalid_parameter_noinfo();
    plVar4 = extraout_RAX;
  }
  if (lStack_880 == lVar7) {
    local_858 = (ulonglong)plVar4 & 0xffffffffffffff00;
  }
  else {
    if (local_888 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *local_888;
    }
    if (lStack_880 == *(longlong *)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar4 = *(longlong **)(lStack_880 + 0x20);
    local_860 = *(undefined8 *)(lStack_880 + 0x28);
    local_858 = *(ulonglong *)(lStack_880 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      local_858 = local_858 & 0xffffffffffffff00;
    }
    else {
      local_868 = plVar4;
      FUN_14152d300(param_1 + 9,local_878,(longlong *)&local_888);
      local_898 = 0;
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2,plVar4,&local_898);
      if ((char)uVar5 == '\0') {
        puVar1 = (undefined8 *)param_1[0x19];
        (**(code **)(*plVar4 + 0x18))(plVar4);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x30))(plVar4);
        (**(code **)(*plVar4 + 0x20))(plVar4);
        (**(code **)*puVar1)(puVar1,local_894);
        tq::MyLogSave("gmlog/lotteryfail","lottery user [id:%u] [name:%s] | award [rank:%d] [prize_name:%s (ID:%d, TYPE:%d)] fail");
        local_858 = extraout_RAX_00 & 0xffffffffffffff00;
      }
      else {
        if (param_1[0x19] != 0) {
          if ((char)local_858 != '\0') {
            pIVar6 = theInstance();
            puVar1 = (undefined8 *)param_1[0x19];
            (**(code **)(*plVar4 + 0x30))(plVar4);
            (**(code **)*puVar1)(puVar1,param_2);
            _Format = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_LOTTERY_BIG");
            sprintf(local_438,_Format);
            (**(code **)(*(longlong *)param_1[0x19] + 0x70))((longlong *)param_1[0x19],local_438);
          }
          pIVar6 = theInstance();
          lVar7 = *(longlong *)param_1[0x19];
          (**(code **)(*plVar4 + 0x30))(plVar4);
          (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_LOTTERY_GENERAL");
          (**(code **)(lVar7 + 0x68))(param_1[0x19],param_2);
          FUN_1415309e0(local_848);
          uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar5 = FUN_141530a60(local_848,param_2,0,0,(undefined2)local_860,0xf2,uVar3);
          if ((int)uVar5 == 0) {
            log_InlineLogERROR(&DAT_141537598);
          }
          else {
            (**(code **)(*(longlong *)param_1[0x19] + 0x78))((longlong *)param_1[0x19],param_2,local_848);
          }
          puVar1 = (undefined8 *)param_1[0x19];
          (**(code **)(*plVar4 + 0x18))(plVar4);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          (**(code **)(*plVar4 + 0x30))(plVar4);
          (**(code **)(*plVar4 + 0x20))(plVar4);
          uVar2 = local_894;
          (**(code **)*puVar1)(puVar1,local_894);
          tq::MyLogSave("gmlog/lottery","lottery user [id:%u] [name:%s] [idItem:%u] | award [rank:%d] [prize_name:%s (ID:%d, TYPE:%d)]");
          (**(code **)(*(longlong *)param_1[0x19] + 0xa0))((longlong *)param_1[0x19],uVar2,0xf);
          uVar5 = FUN_141530a30((undefined8 *)local_848);
        }
        local_858 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
    }
  }
  return local_858;
}




ulonglong FUN_14152eae0(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,undefined1 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *extraout_RAX;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  
  local_res10[0] = param_2;
  FUN_14152d6c0((longlong *)(param_1 + 0x48),(longlong *)&local_40,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar5 = 0;
  local_30 = *(longlong **)(param_1 + 0x48);
  local_28 = local_30;
  if ((local_40 == (longlong *)0x0) || (local_40 != local_30)) {
    _invalid_parameter_noinfo();
    local_30 = extraout_RAX;
  }
  if (local_38 != lVar1) {
    if (local_40 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar5 = *local_40;
    }
    if (local_38 == *(longlong *)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(local_38 + 0x20);
    local_30 = *(longlong **)(local_38 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      local_40 = plVar2;
      local_38 = *(undefined8 *)(local_38 + 0x28);
      uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
      *param_3 = uVar4;
      uVar4 = (**(code **)(*plVar2 + 0x40))(plVar2);
      *param_4 = uVar4;
      uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
      *param_6 = uVar3;
      uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
      *param_7 = uVar3;
      *param_5 = local_30._0_1_;
      return 1;
    }
  }
  return (ulonglong)local_30 & 0xffffffffffffff00;
}




longlong FUN_14152ec20(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_14152d8e0(param_1,local_28,(longlong *)&local_38,&local_res8);
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




void FUN_14152ed20(longlong *param_1)

{
  FUN_14152dc00(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14152ed50(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  uint7 uStack_47;
  uint local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x39) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x39) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_40[0] = *param_2;
    local_58 = 0;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = (ulonglong)uStack_47 << 8;
    local_68 = plVar6;
    puStack_60 = puVar4;
    plVar3 = FUN_14152dc70(param_1,&local_58,(longlong *)&local_68,local_40);
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




longlong FUN_14152ee90(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint local_58;
  undefined8 local_54;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x25) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x25) == '\0');
  }
  plVar5 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  local_48 = plVar5;
  puStack_40 = puVar4;
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_58 = *param_2;
    local_38 = local_48;
    puStack_30 = puStack_40;
    local_54 = 0;
    plVar3 = FUN_14152df90(param_1,local_28,(longlong *)&local_38,&local_58);
    plVar5 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
    local_48 = plVar5;
    puStack_40 = puVar4;
  }
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar5;
  }
  if (puVar4 == *(undefined8 **)(lVar6 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return (longlong)puVar4 + 0x1c;
}




void FUN_14152efb0(longlong *param_1)

{
  FUN_14152e2b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152efe0(longlong *param_1)

{
  FUN_14152c3d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152f010(longlong *param_1)

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
  FUN_14152e320(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_14152f080(undefined8 *param_1)

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




undefined8 * FUN_14152f0d0(undefined8 *param_1)

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




undefined8 * FUN_14152f120(undefined8 *param_1)

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




undefined8 * FUN_14152f170(undefined8 *param_1)

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




void FUN_14152f1c0(longlong *param_1)

{
  FUN_14152dc00(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152f1f0(longlong *param_1)

{
  FUN_14152e2b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152f220(longlong *param_1)

{
  FUN_14152c3d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152f250(longlong param_1,uint param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  puVar1 = (undefined2 *)FUN_14152ec20((longlong *)(param_1 + 8),local_res10);
  *puVar1 = param_3;
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_14152f280(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  ushort uVar4;
  short *psVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint local_res10 [2];
  uint local_res18 [4];
  longlong *local_48;
  longlong local_40;
  
  local_res10[0] = param_2;
  uVar4 = FUN_14152d250((longlong)param_1,param_2);
  lVar7 = 0;
  if ((((uVar4 != 0) && (uVar4 < 3)) && (param_1[0x19] != 0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x19] + 0x90))((longlong *)param_1[0x19],param_2,0xadb50), cVar3 != '\0')) {
    FUN_14152d790(param_1 + 0x11,(longlong *)&local_48,local_res10);
    lVar1 = param_1[0x17];
    if ((local_48 == (longlong *)0x0) || (local_48 != (longlong *)param_1[0x11])) {
      _invalid_parameter_noinfo();
    }
    if (local_40 == lVar1) {
      uVar6 = (*(code *)**(undefined8 **)param_1[0x19])((undefined8 *)param_1[0x19],param_2);
      tq::MyLogSave("gmlog/lotteryfail","lottery user [id:%u] [name:%s] lotterytime[%d] fail",(ulonglong)param_2,uVar6);
    }
    else {
      if (local_48 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar7 = *local_48;
      }
      if (local_40 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar2 = *(ulonglong *)(local_40 + 0x1c);
      local_res18[0] = param_2;
      psVar5 = (short *)FUN_14152ec20(param_1 + 1,local_res18);
      *psVar5 = uVar4 - 1;
      cVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,uVar2 & 0xffffffff,uVar2 >> 0x20);
      if (cVar3 == '\0') {
        uVar6 = (*(code *)**(undefined8 **)param_1[0x19])((undefined8 *)param_1[0x19],param_2);
        tq::MyLogSave("gmlog/lotteryfail","lottery user [id:%u] [name:%s] [type:%d] [color:%d] lotterytime[%d] fail",param_2,uVar6);
      }
    }
  }
  return;
}




void FUN_14152f450(longlong *param_1)

{
  FUN_14152f010(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14152f480(undefined8 *param_1)

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
  lVar2 = FUN_141529860();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14152f500(undefined8 *param_1)

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
  lVar2 = FUN_1415299c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x39) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14152f580(undefined8 *param_1)

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
  lVar2 = FUN_141529ab0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14152f600(undefined8 *param_1)

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
  lVar2 = FUN_141529fb0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14152f680(longlong *param_1)

{
  FUN_14152f010(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14152f6b0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  *param_1 = lottery::CLotteryMgr::vftable;
  plVar6 = *(longlong **)param_1[0x21];
  plVar2 = (longlong *)param_1[0x1b];
  local_48 = plVar2;
  plStack_40 = plVar6;
  while( true ) {
    plVar3 = (longlong *)param_1[0x21];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0x1b])) {
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
    if ((undefined8 *)plVar6[4] == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141537598);
    }
    else {
      (*(code *)**(undefined8 **)plVar6[4])();
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
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0x21] + 8) + 0x29);
  plVar6 = *(longlong **)(param_1[0x21] + 8);
  while (cVar1 == '\0') {
    FUN_141529150(param_1 + 0x1b,(longlong *)plVar6[2]);
    plVar2 = (longlong *)*plVar6;
    operator_delete(plVar6);
    plVar6 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(undefined8 *)(param_1[0x21] + 8) = param_1[0x21];
  param_1[0x22] = 0;
  *(undefined8 *)param_1[0x21] = param_1[0x21];
  *(undefined8 *)(param_1[0x21] + 0x10) = param_1[0x21];
  if (param_1[0x1a] != 0) {
    pvVar4 = (void *)param_1[0x1a];
    if (pvVar4 != (void *)0x0) {
      FUN_141523790((longlong)pvVar4);
      operator_delete(pvVar4);
    }
    param_1[0x1a] = 0;
  }
  plVar6 = param_1 + 0x1b;
  plStack_40 = (longlong *)param_1[0x21];
  local_48 = (longlong *)*plVar6;
  puStack_30 = (undefined8 *)*plStack_40;
  local_38 = local_48;
  FUN_14152b370(plVar6,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete((void *)param_1[0x21]);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  operator_delete((void *)*plVar6);
  plVar6 = param_1 + 0x11;
  puStack_30 = (undefined8 *)param_1[0x17];
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_14152cb00(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete((void *)param_1[0x17]);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  operator_delete((void *)*plVar6);
  plVar6 = param_1 + 9;
  puStack_30 = (undefined8 *)param_1[0xf];
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_14152e320(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete((void *)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  operator_delete((void *)*plVar6);
  plVar6 = param_1 + 1;
  puStack_30 = (undefined8 *)param_1[7];
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_14152c5f0(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete((void *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  operator_delete((void *)*plVar6);
  return;
}




undefined8 * FUN_14152ff50(undefined8 *param_1)

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
  lVar2 = FUN_141529860();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14152ffd0(undefined8 *param_1)

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
  lVar2 = FUN_1415299c0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x39) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141530050(undefined8 *param_1)

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
  lVar2 = FUN_141529ab0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x25) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1415300d0(undefined8 *param_1)

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
  lVar2 = FUN_141529fb0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141530150(undefined8 *param_1)

{
  *param_1 = lottery::CLotteryMgr::vftable;
  FUN_14152ff50(param_1 + 1);
  FUN_14152ffd0(param_1 + 9);
  FUN_141530050(param_1 + 0x11);
  FUN_1415300d0(param_1 + 0x1b);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}




undefined8 * FUN_1415301c0(undefined8 *param_1,uint param_2)

{
  FUN_14152f6b0(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1415301f0(void)

{
  undefined8 *puVar1;
  
  if (DAT_141542430 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x118);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_141542430 = (undefined8 *)0x0;
    }
    else {
      DAT_141542430 = FUN_141530150(puVar1);
    }
  }
  return;
}




void FUN_141530240(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141530250(void)

{
  return 0;
}




undefined8 FUN_141530260(void)

{
  return 0;
}




undefined8 FUN_141530270(void)

{
  return 0;
}




undefined8 FUN_141530280(void)

{
  return 0;
}




undefined8 * FUN_141530290(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1415302f0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_141530310(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x30))(*(longlong **)(param_1 + 0x430),10);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1415307a0(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_1415303f0(void)

{
  return;
}




bool FUN_141530400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_1415308d0(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x18))(*(longlong **)(param_1 + 0x430),10);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x430) + 8))(*(longlong **)(param_1 + 0x430),0x3eb,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x430) + 8))(*(longlong **)(param_1 + 0x430),0x522,param_1);
  }
  return cVar1 != '\0';
}




longlong * FUN_141530490(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3eb) {
      plVar2 = (longlong *)(param_1 + 0x20);
    }
    else {
      if (param_2[1] != 0x522) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x438);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




undefined8 FUN_141530500(void)

{
  return 1;
}




void FUN_141530510(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141530540(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_141530570(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = lottery::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_141531030((CMsg *)(param_1 + 4));
  param_1[0x86] = param_2;
  FUN_141531180((CMsg *)(param_1 + 0x87));
  return param_1;
}




void FUN_1415305e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = lottery::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_1415311d0(param_1 + 0x87);
  FUN_141531080(param_1 + 4);
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_141530650(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_141530490(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
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
                    /* 0x106b0  1  ModuleCreate */
  puVar2 = operator_new(0x848);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    param_3 = param_2 & 0xffffffff;
    plVar3 = FUN_141530570(puVar2,param_1,(int)param_2);
    uVar4 = param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141530400((longlong)plVar3,uVar4,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined8 * FUN_141530730(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1415305e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141530770(undefined8 *param_1)

{
  *param_1 = lottery::CProvider::vftable;
  FUN_141526e90();
  param_1[2] = 0;
  return;
}




ulonglong FUN_1415307a0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  lVar1 = FUN_1415301f0();
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_14152cdf0(lVar1,*(longlong *)(param_1 + 8));
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_141537598);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_141530870(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_1415308b0(longlong param_1,uint param_2)

{
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    thunk_FUN_14152e710(*(longlong **)(param_1 + 0x10),param_2);
  }
  return;
}




undefined8 * FUN_1415308d0(undefined8 *param_1)

{
  *param_1 = lottery::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_1415308f0(undefined8 *param_1,uint param_2)

{
  *param_1 = lottery::CProvider::vftable;
  FUN_141526e90();
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141530940(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_141530970(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_141530980(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141530987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_141530990(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141530997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1415309a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001415309a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1415309b0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1415309e0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = lottery::CMsgAction::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141530a30(undefined8 *param_1)

{
  *param_1 = lottery::CMsgAction::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_141530a60(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,short param_6,undefined4 param_7)

{
  ulong uVar1;
  
  if (param_6 == 0) {
    log_InlineLogERROR(&DAT_141537598);
  }
  else if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(short *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
    return 1;
  }
  return 0;
}




undefined8 FUN_141530b70(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,short param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  
  if (param_6 == 0) {
    log_InlineLogERROR(&DAT_141537598);
  }
  else if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_8;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(short *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
    return 1;
  }
  return 0;
}




undefined8 FUN_141530c80(CMsg *param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,short param_7,undefined4 param_8)

{
  ulong uVar1;
  
  if (param_7 == 0) {
    log_InlineLogERROR(&DAT_141537598);
  }
  else if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_6;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_8;
    *(short *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_7;
    return 1;
  }
  return 0;
}




undefined8 FUN_141530d90(CMsg *param_1,int param_2,undefined4 param_3,undefined4 param_4,short param_5,undefined2 param_6)

{
  ulong uVar1;
  
  if (param_5 == 0) {
    log_InlineLogERROR(&DAT_141537598);
  }
  else if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_6;
    *(short *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_5;
    return 1;
  }
  return 0;
}




undefined8 FUN_141530e90(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,short param_6,undefined2 param_7,undefined2 param_8)

{
  ulong uVar1;
  
  if (param_6 == 0) {
    log_InlineLogERROR(&DAT_141537598);
  }
  else if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x16) = param_5;
    *(short *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_6;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_8;
    return 1;
  }
  return 0;
}




bool FUN_141530fb0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x271a;
}




undefined8 * FUN_141530fe0(undefined8 *param_1,byte param_2)

{
  *param_1 = lottery::CMsgAction::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141531030(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = lottery::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141531080(undefined8 *param_1)

{
  *param_1 = lottery::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1415310b0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if ((param_2 != (char *)0x0) && (param_3 != 0)) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return (ulonglong)(*(short *)(param_1 + 10) == 0x3eb);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_1415310f0(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1415301f0();
  if (plVar1 != (longlong *)0x0) {
    FUN_14152e710(plVar1,param_2);
  }
  return;
}




undefined8 * FUN_141531130(undefined8 *param_1,byte param_2)

{
  *param_1 = lottery::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141531180(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = lottery::CMsgLottery::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1415311d0(undefined8 *param_1)

{
  *param_1 = lottery::CMsgLottery::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141531200(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x522;
}




ulonglong FUN_141531230(CMsg *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5,undefined4 param_6,undefined1 param_7,
                       undefined1 param_8,undefined1 param_9,undefined1 param_10)

{
  undefined2 *puVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x408) == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 5) = param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 6) = param_4;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 10) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_6;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 7) = param_7;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = param_8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 9) = param_9;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xb) = param_10;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x522;
    puVar1 = *(undefined2 **)(param_1 + 0x408);
    *puVar1 = 0x10;
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return uVar2;
}




ulonglong FUN_141531320(CMsg *param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  tq::CMsg::Init(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x522;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0x10;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




void FUN_141531390(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x408) != 0) {
    plVar2 = (longlong *)FUN_1415301f0();
    if (plVar2 != (longlong *)0x0) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x408) + 4);
      if (cVar1 == '\0') {
        FUN_14152e710(plVar2,param_2);
      }
      else if (cVar1 == '\x01') {
        FUN_14152f280(plVar2,param_2);
      }
      else if (cVar1 == '\x02') {
        FUN_14152e610(plVar2,param_2);
      }
    }
  }
  return;
}




undefined8 * FUN_141531410(undefined8 *param_1,byte param_2)

{
  *param_1 = lottery::CMsgLottery::vftable;
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




undefined8 FUN_141531584(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_141542400) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_1415429e0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1415429e0);
    local_res18[0] = _decode_pointer(DAT_1415429d8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1415429e0 = _encode_pointer(local_res10);
    DAT_1415429d8 = _encode_pointer(local_res18[0]);
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




bool FUN_141531748(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1415429d8 = _encode_pointer(puVar1);
  DAT_1415429e0 = DAT_1415429d8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_141531e44();
    atexit(FUN_141531e7c);
    atexit((_func_5014 *)&LAB_141531e38);
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
    if (DAT_141542438 < 1) {
      return 0;
    }
    DAT_141542438 = DAT_141542438 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1415429c8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1415429c8;
        pvVar3 = DAT_1415429c8;
      }
      DAT_1415429c8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141531822;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141531822:
    if (DAT_1415429c0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1415429e0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1415429d8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1415429e0);
            plVar12 = (longlong *)_decode_pointer(DAT_1415429d8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1415429d8 = _encoded_null();
        DAT_1415429e0 = DAT_1415429d8;
      }
      DAT_1415429c0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1415429c8 = (void *)0x0;
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
      bVar13 = DAT_1415429c8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1415429c8;
        pvVar3 = DAT_1415429c8;
      }
      DAT_1415429c8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14153194b;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14153194b:
    if (DAT_1415429c0 == 0) {
      DAT_1415429c0 = 1;
      iVar4 = _initterm_e(&DAT_141537250,&DAT_141537260);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141537240,&DAT_141537248);
      DAT_1415429c0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1415429c8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1415429d0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1415429d0), BVar5 != 0)) {
      (*DAT_1415429d0)(param_1,2,param_3);
    }
    DAT_141542438 = DAT_141542438 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000141531ac4) */
/* WARNING: Removing unreachable block (ram,0x000141531a5b) */
/* WARNING: Removing unreachable block (ram,0x000141531aff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_141542438 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_141542410 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_141542410 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141530500();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141530500();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_141542410 = 0xffffffff;
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




undefined8 FUN_141531b7c(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1415424e0);
  local_30 = DAT_1415425d8;
  local_38 = RtlLookupFunctionEntry(DAT_1415425d8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141542578 = local_res8;
    DAT_1415425d8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1415424e0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141542450 = DAT_1415425d8;
  _DAT_141542560 = local_res8[0];
  _DAT_141542440 = 0xc0000409;
  _DAT_141542444 = 1;
  local_20 = DAT_141542400;
  local_18 = DAT_141542408;
  DAT_1415424d8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141539fe8);
  if (DAT_1415424d8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_141531e44(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14153aac0; puVar1 < &DAT_14153aac0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_141531e7c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_14153aad0; puVar1 < &DAT_14153aad0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141520000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141520000);
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
  if (DAT_141542400 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141542400 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_141542400 == 0x2b992ddfa232) {
      DAT_141542400 = 0x2b992ddfa233;
    }
  }
  DAT_141542408 = ~DAT_141542400;
  return;
}




void Unwind_1415320d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415320f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532130(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532150(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532170(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532190(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415321b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415321d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415321f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532230(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532250(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532290(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415322b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415322d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415322f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532330(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532350(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532370(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415323b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415323d0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415323f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532410(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141532450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141532470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141532490(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_1415324b0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415324d0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415324f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141532510(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141532530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141532550(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141532590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415325b0(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1415325d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141532600(void)

{
  FUN_141521160();
  return;
}




void Catch_141532620(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141532650(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532670(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532690(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415326b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1415326d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1415326f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141532710(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141532730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415327b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415327d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1415327f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141532810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141532830(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141532850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141532870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141532890(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415328b0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415328d0(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415328f0(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532910(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532930(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532950(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532970(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532990(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415329b0(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415329d0(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415329f0(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532a10(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532a30(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532a50(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532a70(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532a90(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532ab0(undefined8 param_1,longlong param_2)

{
  FUN_1415230b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532ad0(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532af0(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532b10(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532b30(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532b50(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532b70(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532b90(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532bb0(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532bd0(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532bf0(undefined8 param_1,longlong param_2)

{
  FUN_1415236e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141532c10(undefined8 param_1,longlong param_2)

{
  FUN_1415230b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532c30(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532c50(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532c70(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532c90(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532cb0(undefined8 param_1,longlong param_2)

{
  FUN_141523760((longlong *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




undefined * Catch_141532cd0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pConfigSet) @%s,%d");
  return &DAT_14152383b;
}




void Unwind_141532d10(undefined8 param_1,longlong param_2)

{
  FUN_1415236e0(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_141532d30(undefined8 param_1,longlong param_2)

{
  FUN_1415230b0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141532d50(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141532d70(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141532d90(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141532db0(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141532dd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_141532df0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141532e10(undefined8 param_1,longlong param_2)

{
  FUN_141521640(param_2 + 0x80);
  return;
}




void Unwind_141532e30(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141532e50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_141532e70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30));
  return;
}




void Unwind_141532e90(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141532eb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x30) + 8));
  return;
}




void Unwind_141532ed0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532ef0(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532f10(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532f30(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532f50(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532f70(undefined8 param_1,longlong param_2)

{
  FUN_1415230b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532f90(void)

{
  FUN_141521160();
  return;
}




void Unwind_141532fb0(undefined8 param_1,longlong param_2)

{
  FUN_141521ab0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532fd0(undefined8 param_1,longlong param_2)

{
  FUN_141521f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141532ff0(undefined8 param_1,longlong param_2)

{
  FUN_141522240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533010(undefined8 param_1,longlong param_2)

{
  FUN_141522bd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533030(undefined8 param_1,longlong param_2)

{
  FUN_1415230b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533050(undefined8 param_1,longlong param_2)

{
  FUN_1415236e0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533070(undefined8 param_1,longlong param_2)

{
  FUN_141523760((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1415330b0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_1415330d0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415330f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533110(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_141533130(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_141533150(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_141533170(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141533190(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_1415331b0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_1415331d0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415331f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533210(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_141533230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141533250(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_141533270(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141533290(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_1415332b0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_1415332d0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1415332f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533310(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141533330(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141533360(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533380(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x38) + 8);
  return;
}




void Unwind_1415333a0(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_1415333c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415333f0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533410(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141533430(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_141533450(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_141533470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533490(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415334b0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415334d0(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_1415334f0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_141533510(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_141533530(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141533550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141533570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141533590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1415335b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1415335d0(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_1415335f0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_141533610(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x20));
  return;
}




void Unwind_141533630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141533650(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533670(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533690(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415336b0(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415336d0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415336f0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533710(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533730(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533750(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141533770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141533790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1415337b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1415337d0(undefined8 param_1,longlong param_2)

{
  FUN_141524010(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_1415337f0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(*(longlong *)(param_2 + 0xd0) + 8);
  return;
}




void Unwind_141533810(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x20));
  return;
}




void Unwind_141533830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_141533850(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533870(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533890(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415338b0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415338d0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415338f0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533910(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533930(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x120) + 8));
  return;
}




void Unwind_141533970(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_141533990(undefined8 param_1,longlong param_2)

{
  FUN_141521640(param_2 + 0x48);
  return;
}




void Unwind_1415339b0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(param_2 + 0xa0);
  return;
}




void Unwind_1415339d0(undefined8 param_1,longlong param_2)

{
  FUN_141524010(param_2 + 0x98);
  return;
}




void Unwind_1415339f0(undefined8 param_1,longlong param_2)

{
  FUN_141521640(param_2 + 0xa0);
  return;
}




void Unwind_141533a10(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x20));
  return;
}




void Unwind_141533a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x120) + 8));
  return;
}




void Unwind_141533a50(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_141533a70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x120) + 8));
  return;
}




void Unwind_141533a90(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533ab0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533ad0(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533af0(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533b10(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533b30(undefined8 param_1,longlong param_2)

{
  FUN_141525cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533b50(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533b70(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533b90(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533bb0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533bd0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533bf0(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533c10(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533c30(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533c50(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533c70(undefined8 param_1,longlong param_2)

{
  FUN_141525cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533c90(undefined8 param_1,longlong param_2)

{
  FUN_141526700(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533cb0(undefined8 param_1,longlong param_2)

{
  FUN_141525cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533cd0(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533cf0(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533d10(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533d30(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533d50(undefined8 param_1,longlong param_2)

{
  FUN_1415267b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533d70(undefined8 param_1,longlong param_2)

{
  FUN_141526700(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533d90(undefined8 param_1,longlong param_2)

{
  FUN_141525cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533db0(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533dd0(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533df0(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533e10(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533e30(void)

{
  FUN_141521160();
  return;
}




void Unwind_141533e50(undefined8 param_1,longlong param_2)

{
  FUN_141524690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533e70(undefined8 param_1,longlong param_2)

{
  FUN_1415249b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533e90(undefined8 param_1,longlong param_2)

{
  FUN_141524bb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533eb0(undefined8 param_1,longlong param_2)

{
  FUN_141525120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533ed0(undefined8 param_1,longlong param_2)

{
  FUN_141525cc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141533ef0(undefined8 param_1,longlong param_2)

{
  FUN_141526700(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533f10(undefined8 param_1,longlong param_2)

{
  FUN_1415267b0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141533f30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141533f50(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141533f70(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141533f90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141533fb0(undefined8 param_1,longlong param_2)

{
  FUN_141526940(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_141533fd0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141533ff0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141534010(void)

{
  DAT_141542428 = DAT_141542428 & 0xfffffffe;
  return;
}




void Unwind_141534030(void)

{
  DAT_141542428 = DAT_141542428 & 0xfffffffe;
  return;
}




void Unwind_141534050(void)

{
  DAT_141542428 = DAT_141542428 & 0xfffffffe;
  return;
}




void Unwind_141534070(void)

{
  DAT_141542428 = DAT_141542428 & 0xfffffffe;
  return;
}




void Unwind_141534090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_1415340b0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x10));
  return;
}




void Unwind_1415340d0(undefined8 param_1,longlong param_2)

{
  FUN_141526940(*(longlong *)(param_2 + 0x50) + 8);
  return;
}




void Unwind_1415340f0(undefined8 param_1,longlong param_2)

{
  FUN_141526940(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_141534110(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141534130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141534150(void)

{
  DAT_141542428 = DAT_141542428 & 0xfffffffe;
  return;
}




void Unwind_141534170(undefined8 param_1,longlong param_2)

{
  FUN_141526bf0(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_141534190(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pLottery) @%s,%d");
  return 0x141526e36;
}




undefined8 Catch_1415341d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pLottery) @%s,%d");
  return 0x141526e52;
}




undefined * Catch_141534210(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::ChooseLottery() crash @%s,%d");
  return &DAT_14152724c;
}




void Unwind_141534250(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141534270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141534290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415342b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415342d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415342f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141534310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141534330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141534350(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534370(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534390(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415343b0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415343d0(void)

{
  FUN_141521160();
  return;
}




void Catch_1415343f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141534420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141534440(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141534460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141534480(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Catch_1415344a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415344d0(void)

{
  FUN_141521160();
  return;
}




void Catch_1415344f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141534520(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141534550(void)

{
  FUN_141521160();
  return;
}




void Catch_141534570(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1415345a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415345d0(void)

{
  FUN_141521160();
  return;
}




void Catch_1415345f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141534620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141534640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141534660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141534680(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Catch_1415346a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415346d0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415346f0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534710(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534730(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534750(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534770(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534790(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415347b0(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415347d0(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415347f0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534810(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534830(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534850(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141534870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534890(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1415348b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1415348d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1415348f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534910(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141534930(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141534970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1415349b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1415349d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1415349f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141534a30(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141534a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141534a70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141534a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141534ab0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141534ad0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534af0(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534b10(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534b30(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534b50(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534b70(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534b90(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534bb0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141534bd0(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::GetTotalChance() crash @%s,%d");
  return &DAT_14152bd62;
}




undefined * Catch_141534c10(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::GetRandomLottery() crash @%s,%d");
  return &DAT_14152bfa0;
}




void Unwind_141534c50(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534c70(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534c90(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534cb0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534cd0(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534cf0(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534d10(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534d30(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534d50(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534d70(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534d90(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534db0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534dd0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534df0(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534e10(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534e30(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534e50(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534e70(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534e90(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534eb0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534ed0(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534ef0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141534f10(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534f30(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141534f50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_141534f70(undefined8 param_1,longlong param_2)

{
  FUN_141526940(param_2 + 0x90);
  return;
}




undefined * Catch_141534f90(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return &DAT_14152d145;
}




void Unwind_141534fd0(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141534ff0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




undefined * Catch_141535010(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pLottery) @%s,%d");
  return &DAT_14152d1d4;
}




void Unwind_141535050(undefined8 param_1,longlong param_2)

{
  FUN_141521530((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_141535070(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




undefined8 Catch_141535090(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return 0x14152d220;
}




undefined * Catch_1415350d0(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::Init crash @%s,%d");
  return &DAT_14152d224;
}




undefined * Catch_141535110(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::GetUserAvailableRepeatTimes() crash @%s,%d");
  return &DAT_14152d2de;
}




void Unwind_141535150(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141535170(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141535190(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1415351b0(undefined8 param_1,longlong param_2)

{
  FUN_1415211c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1415351d0(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415351f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535210(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535230(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535250(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535270(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535290(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415352b0(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415352d0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415352f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535310(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535330(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535350(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535370(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535390(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415353b0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415353d0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415353f0(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535410(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535430(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535450(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535470(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535490(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415354b0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415354d0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415354f0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535510(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535530(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535550(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535570(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535590(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415355b0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415355d0(undefined8 param_1,longlong param_2)

{
  FUN_141530a30((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined8 Catch_1415355f0(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::AwardDirectLotteryPrize() crash @%s,%d");
  return 0x14152eaad;
}




undefined8 Catch_141535630(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::GetDirectLotteryPrize() crash @%s,%d");
  return 0x14152ebe9;
}




void Unwind_141535670(undefined8 param_1,longlong param_2)

{
  FUN_14152d860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535690(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415356b0(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415356d0(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415356f0(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535710(undefined8 param_1,longlong param_2)

{
  FUN_14152d8a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535730(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535750(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535770(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535790(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415357b0(undefined8 param_1,longlong param_2)

{
  FUN_14152d8c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415357d0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415357f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535810(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535830(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535850(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535870(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535890(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415358b0(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415358d0(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415358f0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535910(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535930(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535950(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535970(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535990(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415359b0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415359d0(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415359f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535a10(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535a30(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535a50(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535a70(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535a90(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535ab0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535ad0(undefined8 param_1,longlong param_2)

{
  FUN_14152ed20(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141535af0(undefined8 param_1,longlong param_2)

{
  FUN_14152d860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535b10(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535b30(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535b50(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535b70(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535b90(undefined8 param_1,longlong param_2)

{
  FUN_14152efb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141535bb0(undefined8 param_1,longlong param_2)

{
  FUN_14152d8a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535bd0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535bf0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535c10(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535c30(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535c50(undefined8 param_1,longlong param_2)

{
  FUN_14152efe0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141535c70(undefined8 param_1,longlong param_2)

{
  FUN_14152d8c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535c90(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535cb0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535cd0(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535cf0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535d10(undefined8 param_1,longlong param_2)

{
  FUN_14152d880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535d30(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535d50(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535d70(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535d90(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535db0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535dd0(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535df0(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535e10(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535e30(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535e50(undefined8 param_1,longlong param_2)

{
  FUN_14152d860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535e70(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535e90(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535eb0(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535ed0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535ef0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535f10(undefined8 param_1,longlong param_2)

{
  FUN_14152d880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535f30(void)

{
  FUN_141521160();
  return;
}




void Unwind_141535f50(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535f70(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535f90(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535fb0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535fd0(undefined8 param_1,longlong param_2)

{
  FUN_14152d8a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141535ff0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141536010(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536030(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536050(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536070(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536090(undefined8 param_1,longlong param_2)

{
  FUN_14152d8c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415360b0(undefined8 param_1,longlong param_2)

{
  FUN_14152f450(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415360d0(undefined8 param_1,longlong param_2)

{
  FUN_14152d880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415360f0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536110(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536130(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536150(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536170(undefined8 param_1,longlong param_2)

{
  FUN_14152f1c0((longlong *)(*(longlong *)(param_2 + 0x90) + 8));
  return;
}




void Unwind_141536190(undefined8 param_1,longlong param_2)

{
  FUN_14152f680((longlong *)(*(longlong *)(param_2 + 0x90) + 0x48));
  return;
}




void Unwind_1415361b0(undefined8 param_1,longlong param_2)

{
  FUN_14152f1f0((longlong *)(*(longlong *)(param_2 + 0x90) + 0x88));
  return;
}




void Unwind_1415361e0(undefined8 param_1,longlong param_2)

{
  FUN_14152f220((longlong *)(*(longlong *)(param_2 + 0x90) + 0xd8));
  return;
}




undefined * Catch_141536210(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pLottery) @%s,%d");
  return &DAT_14152f780;
}




undefined * Catch_141536250(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pConfigMgr) @%s,%d");
  return &DAT_14152f8aa;
}




void Unwind_141536290(undefined8 param_1,longlong param_2)

{
  FUN_14152efe0(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_1415362b0(undefined8 param_1,longlong param_2)

{
  FUN_14152d8c0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415362d0(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415362f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536310(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536330(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536350(undefined8 param_1,longlong param_2)

{
  FUN_14152efb0(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_141536370(undefined8 param_1,longlong param_2)

{
  FUN_14152d8a0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536390(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415363b0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415363d0(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415363f0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536410(undefined8 param_1,longlong param_2)

{
  FUN_14152f450(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_141536430(undefined8 param_1,longlong param_2)

{
  FUN_14152d880(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536450(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536470(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_141536490(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415364b0(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1415364d0(undefined8 param_1,longlong param_2)

{
  FUN_14152ed20(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_1415364f0(undefined8 param_1,longlong param_2)

{
  FUN_14152d860(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141536510(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141536530(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141536550(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141536570(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141536590(undefined8 param_1,longlong param_2)

{
  FUN_1415311d0((undefined8 *)(param_2 + 0xd0));
  return;
}




undefined * Catch_1415365b0(void)

{
  log_InlineLogCATCH_ERROR("CLotteryMgr::Execute crash. @%s,%d");
  return &DAT_14152ff2d;
}




void Unwind_1415365f0(void)

{
  FUN_141521160();
  return;
}




void Unwind_141536610(undefined8 param_1,longlong param_2)

{
  FUN_1415283a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536630(undefined8 param_1,longlong param_2)

{
  FUN_1415290d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536650(undefined8 param_1,longlong param_2)

{
  FUN_14152a390(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536670(undefined8 param_1,longlong param_2)

{
  FUN_14152c280(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536690(undefined8 param_1,longlong param_2)

{
  FUN_14152d860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415366b0(undefined8 param_1,longlong param_2)

{
  FUN_14152ed20(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415366d0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415366f0(undefined8 param_1,longlong param_2)

{
  FUN_141528420(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536710(undefined8 param_1,longlong param_2)

{
  FUN_1415290f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536730(undefined8 param_1,longlong param_2)

{
  FUN_14152a3b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536750(undefined8 param_1,longlong param_2)

{
  FUN_14152c2a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536770(undefined8 param_1,longlong param_2)

{
  FUN_14152d880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536790(undefined8 param_1,longlong param_2)

{
  FUN_14152f450(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415367b0(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415367d0(undefined8 param_1,longlong param_2)

{
  FUN_141528450(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415367f0(undefined8 param_1,longlong param_2)

{
  FUN_141529110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536810(undefined8 param_1,longlong param_2)

{
  FUN_14152a3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536830(undefined8 param_1,longlong param_2)

{
  FUN_14152c2c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536850(undefined8 param_1,longlong param_2)

{
  FUN_14152d8a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536870(undefined8 param_1,longlong param_2)

{
  FUN_14152efb0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141536890(void)

{
  FUN_141521160();
  return;
}




void Unwind_1415368b0(undefined8 param_1,longlong param_2)

{
  FUN_141528480(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415368d0(undefined8 param_1,longlong param_2)

{
  FUN_141529130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415368f0(undefined8 param_1,longlong param_2)

{
  FUN_14152a3f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536910(undefined8 param_1,longlong param_2)

{
  FUN_14152c2e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536930(undefined8 param_1,longlong param_2)

{
  FUN_14152d8c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536950(undefined8 param_1,longlong param_2)

{
  FUN_14152efe0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141536970(undefined8 param_1,longlong param_2)

{
  FUN_14152f1c0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141536990(undefined8 param_1,longlong param_2)

{
  FUN_14152f680((longlong *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_1415369b0(undefined8 param_1,longlong param_2)

{
  FUN_14152f1f0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x88));
  return;
}




void Unwind_1415369d0(undefined8 param_1,longlong param_2)

{
  FUN_14152f220((longlong *)(*(longlong *)(param_2 + 0x40) + 0xd8));
  return;
}




void Unwind_1415369f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141536a10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141536a30(undefined8 param_1,longlong param_2)

{
  FUN_141530240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536a50(undefined8 param_1,longlong param_2)

{
  FUN_141531080((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_141536a70(undefined8 param_1,longlong param_2)

{
  FUN_1415311d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




void Unwind_141536a90(undefined8 param_1,longlong param_2)

{
  FUN_141530240(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536ab0(undefined8 param_1,longlong param_2)

{
  FUN_141531080((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_141536ad0(undefined8 param_1,longlong param_2)

{
  FUN_1415311d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x438));
  return;
}




undefined * Catch_141536af0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_141530617;
}




undefined * Catch_141536b30(void)

{
  log_InlineLogCATCH_ERROR("trade::pMsg->Process(idActor), idActor:%d, MsgType:%d, SubType:%d @%s,%d");
  return &DAT_141530693;
}




void Unwind_141536b80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_141536ba0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x141530711;
}




void Unwind_141536be0(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536c00(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141536c20(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536c40(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536c60(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141536c80(void)

{
  log_InlineLogCATCH_ERROR("lottery::CMsgLogout::Process(idActor), idActor:%u, MsgType:%u @%s,%d");
  return 0x14153111e;
}




void Unwind_141536cd0(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536cf0(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141536d10(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141536d30(void)

{
  log_InlineLogCATCH_ERROR("user[%d] msglottery[%d] crash @%s,%d");
  return 0x141531404;
}




void Unwind_141536d80(undefined8 param_1,longlong param_2)

{
  FUN_141530970(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_141536d98(void)

{
  _unlock(8);
  return;
}




void FUN_141536db1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141536de1(void)

{
  _DAT_141542410 = 0xffffffff;
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




bool FUN_141536e70(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1028 failed=1 total=1116 */
