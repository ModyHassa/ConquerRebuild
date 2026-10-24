/* Decompiled by Ghidra 12.1.4 | program: AntiCheat.dll
   image base: 140a50000 | functions: 1206 */


exception * FUN_140a51090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140a510d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140a510f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a51100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140a51160(void)

{
  return;
}




exception * FUN_140a51170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140a511c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a511f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140a51200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140a51220(exception *param_1,uint param_2)

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




exception * FUN_140a51280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140a512e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a5131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a51330(exception *param_1,uint param_2)

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




exception * FUN_140a513a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140a51400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140a5143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140a51450(exception *param_1,uint param_2)

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




void FUN_140a514c0(void)

{
  log_InlineLogERROR(&DAT_140a6a758);
  return;
}




void FUN_140a51500(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140a58f30(*(longlong *)(param_1 + 0x50),param_2);
  }
  return;
}




void FUN_140a51520(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x98) = param_2;
  return;
}




undefined1 FUN_140a51530(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}




undefined1 FUN_140a51540(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}




bool FUN_140a51580(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a515c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




int FUN_140a51630(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_140a51660(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




void FUN_140a51780(longlong param_1,longlong *param_2)

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




void FUN_140a518e0(longlong param_1,longlong *param_2)

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




bool FUN_140a51970(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140a519f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a51a12;
  }
  lVar2 = *plVar1;
LAB_140a51a12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a51a30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a51a52;
  }
  lVar2 = *plVar1;
LAB_140a51a52:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x14;
  return param_1;
}




bool FUN_140a51a70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140a51b20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a51b42;
  }
  lVar2 = *plVar1;
LAB_140a51b42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a51b60(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a51b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140a51bf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a51c12;
  }
  lVar2 = *plVar1;
LAB_140a51c12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a51c30(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a51c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a51d10(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a51d42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a51db0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a51de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a51ec0(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140a580d0((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a51ef0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_140a51f20(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140a5cd20((undefined8 *)*param_1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a51fc0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140a52040(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140a52110(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_140a52180(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140a521c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),0x15f9b,1,param_4,0xfffffffffffffffe);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (lVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,2);
      iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,3);
      iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x99) = 1;
      }
      plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,4);
      iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      if (iVar1 != 0) {
        plVar5 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,4);
        uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
        *(undefined4 *)(param_1 + 0x9c) = uVar2;
      }
      (**(code **)*plVar3)(plVar3);
    }
  }
  return;
}




void FUN_140a522b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x120))(*(longlong **)(param_1 + 8),0x15f9c,1,param_4,0xfffffffffffffffe);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if (lVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,2);
      iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0xa0) = 1;
      }
      (**(code **)*plVar2)(plVar2);
    }
  }
  return;
}




undefined1 FUN_140a52340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a521c0(param_1,param_2,param_3,param_4);
  FUN_140a522b0(param_1,param_2,param_3,param_4);
  return 1;
}




int FUN_140a52360(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_140a52390(int *param_1)

{
  ulong uVar1;
  ulonglong in_RAX;
  
  if (param_1[1] != 0) {
    uVar1 = tq::TimeGet(0);
    in_RAX = (ulonglong)(uint)(*param_1 + param_1[1]);
    if ((uint)(*param_1 + param_1[1]) <= uVar1 / 1000) {
      param_1[1] = 0;
      *param_1 = 0;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




bool FUN_140a523e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140a52420(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52442;
  }
  lVar2 = *plVar1;
LAB_140a52442:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140a52460(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52482;
  }
  lVar2 = *plVar1;
LAB_140a52482:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x14;
  return param_1;
}




bool FUN_140a524a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140a524f0(longlong param_1,longlong param_2)

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




void FUN_140a52550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a52580(longlong param_1,longlong param_2)

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




void FUN_140a525e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140a52600(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52622;
  }
  lVar2 = *plVar1;
LAB_140a52622:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a52640(longlong *param_1)

{
  FUN_140a51b60(param_1);
  return param_1;
}




longlong FUN_140a52660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52682;
  }
  lVar2 = *plVar1;
LAB_140a52682:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a526a0(longlong *param_1)

{
  FUN_140a51c30(param_1);
  return param_1;
}




longlong * FUN_140a52760(longlong *param_1)

{
  FUN_140a51d10(param_1);
  return param_1;
}




longlong * FUN_140a52780(longlong *param_1)

{
  FUN_140a51db0(param_1);
  return param_1;
}




void FUN_140a527d0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140a52840(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140a528b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a51b60(param_1);
  return param_2;
}




longlong * FUN_140a528e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a51c30(param_1);
  return param_2;
}




void FUN_140a52910(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a52910(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140a52980(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 8);
  return;
}




ulonglong FUN_140a529f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  FUN_140a521c0(param_1,param_2,param_3,param_4);
  FUN_140a522b0(param_1,param_2,param_3,param_4);
  puVar1 = FUN_140a59690(*(longlong *)(param_1 + 8));
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




longlong FUN_140a52a60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52a82;
  }
  lVar2 = *plVar1;
LAB_140a52a82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a52aa0(longlong *param_1)

{
  FUN_140a51b60(param_1);
  return param_1;
}




longlong FUN_140a52ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a52ae2;
  }
  lVar2 = *plVar1;
LAB_140a52ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a52b00(longlong *param_1)

{
  FUN_140a51c30(param_1);
  return param_1;
}




void FUN_140a52b20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a52b40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a52b60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a52b60(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_140a52bb0(longlong *param_1)

{
  FUN_140a51d10(param_1);
  return param_1;
}




longlong * FUN_140a52bd0(longlong *param_1)

{
  FUN_140a51db0(param_1);
  return param_1;
}




undefined8 * FUN_140a52bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140a52c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_140a52d00(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a52d40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a52d80(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140a52de0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a52910(param_1,(longlong *)plVar2[2]);
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




void FUN_140a52e60(void)

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




void FUN_140a52ec0(void)

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




undefined8 * FUN_140a52f20(undefined8 *param_1)

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




undefined8 * FUN_140a52f60(undefined8 *param_1)

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




void FUN_140a52fa0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140a52b60(param_1,(longlong *)plVar2[2]);
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




void FUN_140a53020(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a53040(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a53060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a530a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a530e0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140a53140(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a52e60();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140a53180(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a52ec0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a531c0(undefined8 *param_1)

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




undefined8 * FUN_140a53210(undefined8 *param_1)

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




void FUN_140a53260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a52fa0((longlong)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_140a580d0((undefined8 *)param_1[10]);
    param_1[10] = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined8 * FUN_140a53340(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a53390(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140a533e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a53400(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a53420(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a534b0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
  }
  plVar5 = FUN_140a52bf0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




exception * FUN_140a537f0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_140a53840(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_140a538a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a53930(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
  }
  plVar5 = FUN_140a52c70(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140a53c70(undefined8 *param_1)

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




undefined8 * FUN_140a53cc0(undefined8 *param_1)

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




void FUN_140a53d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140a53260((undefined8 *)*param_1,param_2,param_3,param_4);
    *param_1 = 0;
  }
  return;
}




void FUN_140a53d40(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uVar10;
  CMsg local_438 [1040];
  
  FUN_140a63f20(local_438);
  uVar10 = (undefined2)param_3;
  FUN_140a63fa0(local_438,0,uVar10);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
  FUN_140a63fa0(local_438,1,uVar10);
  puVar7 = DAT_140a77618;
  if (param_3 == 0) {
    if (DAT_140a77620 < DAT_140a77618) {
      _invalid_parameter_noinfo();
    }
    puVar3 = DAT_140a77620;
    plVar1 = DAT_140a77600;
    if (DAT_140a77620 < DAT_140a77618) {
      _invalid_parameter_noinfo();
    }
    plVar2 = DAT_140a77600;
    while( true ) {
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar2)) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 == puVar3) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(undefined8 **)(lVar9 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      uVar5 = FUN_140a64020((longlong)local_438,*puVar7,(int)(longlong)*(float *)(puVar7 + 1),(int)(longlong)*(float *)((longlong)puVar7 + 0xc),
                            (int)(longlong)*(float *)(puVar7 + 2));
      if ((int)uVar5 == 0) {
        iVar4 = FUN_140a64110((longlong)local_438);
        if (iVar4 != 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2);
        }
        FUN_140a63fa0(local_438,1,0);
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (*(undefined8 **)(lVar9 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 0x14);
    }
  }
  else if (param_3 == 1) {
    lVar8 = 0;
    lVar6 = 0xf;
    lVar9 = lVar8;
    do {
      uVar5 = FUN_140a64020((longlong)local_438,lVar8,*(undefined4 *)((longlong)&DAT_140a6a398 + lVar9),*(undefined4 *)((longlong)&DAT_140a6a3d8 + lVar9),0);
      if ((int)uVar5 == 0) {
        iVar4 = FUN_140a64110((longlong)local_438);
        if (iVar4 != 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
        }
        FUN_140a63fa0(local_438,1,1);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else if (param_3 == 2) {
    lVar8 = 0;
    lVar6 = 0xf;
    lVar9 = lVar8;
    do {
      uVar5 = FUN_140a64020((longlong)local_438,lVar8,*(undefined4 *)((longlong)&DAT_140a6a418 + lVar9),*(undefined4 *)((longlong)&DAT_140a6a458 + lVar9),0);
      if ((int)uVar5 == 0) {
        iVar4 = FUN_140a64110((longlong)local_438);
        if (iVar4 != 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
        }
        FUN_140a63fa0(local_438,1,2);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else if (param_3 == 3) {
    lVar8 = 0;
    lVar6 = 0xf;
    lVar9 = lVar8;
    do {
      uVar5 = FUN_140a64020((longlong)local_438,lVar8,*(undefined4 *)((longlong)&DAT_140a6a498 + lVar9),*(undefined4 *)((longlong)&DAT_140a6a4d8 + lVar9),0);
      if ((int)uVar5 == 0) {
        iVar4 = FUN_140a64110((longlong)local_438);
        if (iVar4 != 0) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
        }
        FUN_140a63fa0(local_438,1,3);
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar4 = FUN_140a64110((longlong)local_438);
  if (iVar4 != 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
  }
  FUN_140a63fa0(local_438,2,uVar10);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),param_2,local_438);
  FUN_140a63f70((undefined8 *)local_438);
  return;
}




longlong * FUN_140a540e0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a5423d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a5426c;
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
      goto LAB_140a5423d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a534b0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a5426c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a54290(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140a75678);
  }
  FUN_140a51b60(param_3);
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
        goto LAB_140a5447c;
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
LAB_140a5447c:
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
            FUN_140a524f0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a51780((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140a524f0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140a51780((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a524f0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140a51780((longlong)param_1,plVar7);
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




exception * FUN_140a54650(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_140a546b0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140a54780(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a548dd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a5490c;
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
      goto LAB_140a548dd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a53930(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a5490c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a54930(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140a75678);
  }
  FUN_140a51c30(param_3);
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
        goto LAB_140a54b1c;
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
LAB_140a54b1c:
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
            FUN_140a52580((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a518e0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140a52580((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140a518e0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140a52580((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140a518e0((longlong)param_1,plVar7);
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




longlong * FUN_140a54cf0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140a54dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a54de0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140a54e00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a52de0((longlong)param_1);
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
    FUN_140a54290(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140a54fb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a52fa0((longlong)param_1);
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
    FUN_140a54930(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140a55160(undefined8 *param_1)

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




undefined8 * FUN_140a551b0(undefined8 *param_1)

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




void FUN_140a55200(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  uint local_res10 [2];
  uint local_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  longlong *local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (*(longlong *)(param_1 + 8) == 0) {
      log_InlineLogERROR(&DAT_140a6a758);
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x10);
      puVar6 = local_res10;
      puVar5 = &local_78;
      FUN_140a546b0(plVar1,(longlong *)puVar5,puVar6);
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar7 = 0;
      local_68 = (longlong *)*plVar1;
      plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
      if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68)) {
        _invalid_parameter_noinfo();
      }
      puVar3 = puStack_70;
      if (puStack_70 != (undefined8 *)lVar2) {
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar7 = *plVar4;
        }
        if (puVar3 == (undefined8 *)*(longlong *)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        puVar3 = *(undefined8 **)((longlong)puVar3 + 0x20);
        if (puVar3 == (undefined8 *)0x0) {
          log_InlineLogERROR("CAntiCheatMgr::CreateAntiCheatUser pUserAntiCheat is null, user id:%u.");
          lStack_50 = (longlong)puStack_70;
          FUN_140a54290(plVar1,&local_48,&local_58);
        }
        else {
          FUN_140a5cd80((longlong)puVar3,puVar5,puVar6,param_4);
          FUN_140a5cd20(puVar3);
          lStack_40 = (longlong)puStack_70;
          FUN_140a54290((undefined8 *)(param_1 + 0x10),&local_58,&local_48);
        }
      }
      puStack_70 = FUN_140a62a10(*(longlong **)(param_1 + 8),param_1,param_2);
      if (puStack_70 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_140a6a758);
      }
      else {
        local_78 = param_2;
        FUN_140a540e0((longlong *)(param_1 + 0x10),&local_48,&local_78);
      }
    }
  }
  return;
}




void FUN_140a553e0(longlong param_1,uint param_2)

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
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
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
  puVar7 = *(undefined8 **)(param_1 + 0x40);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x40);
    local_28 = *(longlong *)(param_1 + 0x10);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0x40);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
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
      FUN_140a5dad0(lVar8);
    }
  }
  return;
}




void FUN_140a554f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0x88))[1];
  cVar4 = *(char *)((longlong)puVar7 + 0x29);
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  while (cVar4 == '\0') {
    if (*(uint *)(puVar7 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar7[2];
      puVar7 = puVar2;
    }
    else {
      puVar5 = (undefined8 *)*puVar7;
    }
    puVar2 = puVar7;
    puVar7 = puVar5;
    cVar4 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  local_30 = puVar2;
  local_38 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 == puVar7) || (param_2 < *(uint *)(puVar2 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    plVar6 = &local_38;
  }
  plVar1 = (longlong *)*plVar6;
  lVar9 = *(longlong *)(param_1 + 0x88);
  local_18 = plVar1;
  local_10 = plVar6[1];
  if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x58))) {
    _invalid_parameter_noinfo();
  }
  lVar3 = local_10;
  if (local_10 == lVar9) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2,0x1774);
    if (cVar4 != '\0') {
      local_38 = 0;
      local_30 = (undefined8 *)((ulonglong)local_30 & 0xffffffff00000000);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),&local_38);
      uVar10 = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2,local_38 & 0xffffffff,local_38._4_4_,local_30._0_4_,1);
      cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                        (*(longlong **)(param_1 + 8),param_2,local_38 & 0xffffffff,local_38._4_4_,local_30._0_4_,uVar10 & 0xffffff00);
      if (cVar4 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2,&DAT_140a6af40);
      }
    }
  }
  else {
    lVar9 = 0;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar1;
    }
    if (lVar3 == *(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    local_38 = *(longlong *)(lVar3 + 0x1c);
    local_30 = (undefined8 *)CONCAT44(local_30._4_4_,*(undefined4 *)(lVar3 + 0x24));
    puVar7 = local_30;
    local_30._0_1_ = (char)*(undefined4 *)(lVar3 + 0x24);
    if ((char)local_30 != '\0') {
      local_30 = puVar7;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar9 = *plVar1;
      }
      if (lVar3 == *(longlong *)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),*(undefined4 *)(lVar3 + 0x18),0x1774);
    }
  }
  return;
}




void FUN_140a55700(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
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
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  local_30 = puVar4;
  local_38 = *(longlong **)(param_1 + 0x10);
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plStack_20 = *(longlong **)(param_1 + 0x40);
    local_28 = *(longlong **)(param_1 + 0x10);
    pplVar7 = &local_28;
  }
  else {
    pplVar7 = &local_38;
  }
  pplVar8 = &local_48;
  plVar2 = *pplVar7;
  plStack_40 = pplVar7[1];
  plVar3 = *(longlong **)(param_1 + 0x40);
  local_48 = plVar2;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  plVar5 = plStack_40;
  if (plStack_40 != plVar3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar9 = (undefined8 *)plVar5[4];
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    FUN_140a5cd80((longlong)puVar9,pplVar8,param_3,param_4);
    FUN_140a5cd20(puVar9);
    local_28 = local_48;
    plStack_20 = plStack_40;
    FUN_140a54290((undefined8 *)(param_1 + 0x10),&local_38,(longlong *)&local_28);
  }
  FUN_140a59050(*(longlong *)(param_1 + 0x50),param_2);
  return;
}




undefined8 FUN_140a55860(longlong param_1,uint param_2)

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




ulonglong FUN_140a55960(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar2 = FUN_140a5b430(lVar1,param_3);
  return uVar2;
}




void FUN_140a559c0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5b4f0(lVar1,param_3);
  return;
}




undefined1 FUN_140a55a50(longlong param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a61280(lVar2,param_3,param_4,param_5);
  return uVar1;
}




void FUN_140a55ad0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5dba0(lVar1,param_3);
  return;
}




void FUN_140a55b40(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5b6e0(lVar1);
  return;
}




bool FUN_140a55ba0(longlong param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return false;
  }
  bVar1 = FUN_140a5b810(lVar2);
  return bVar1;
}




void FUN_140a55bf0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a610d0(lVar1,param_3);
  return;
}




void FUN_140a55c50(longlong param_1,uint param_2,undefined4 param_3,ushort param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a61700(lVar1,param_3,param_4);
  return;
}




void FUN_140a55cc0(longlong param_1,uint param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5b8b0(lVar1,param_3,param_4);
  return;
}




undefined4 FUN_140a55d30(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a5ba40(lVar2,param_3);
  return uVar1;
}




void FUN_140a55d90(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5f4e0(lVar1);
  return;
}




undefined1 FUN_140a55de0(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a61f70(lVar2,param_3);
  return uVar1;
}




undefined1 FUN_140a55e40(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a621e0(lVar2,param_3);
  return uVar1;
}




void FUN_140a55ea0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5f4c0(lVar1);
  return;
}




undefined1 FUN_140a55ef0(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a61a00(lVar2,param_3);
  return uVar1;
}




undefined1 FUN_140a55f50(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a61cb0(lVar2,param_3);
  return uVar1;
}




ulonglong FUN_140a55fb0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogWARNING("CAntiCheatMgr::CheckUserLoginStep UserAntiCheat is not exist,this is maybe cheater. user id:%u, step:%d.");
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),param_2);
    if ((char)uVar2 == '\0') {
      log_InlineLogERROR("CAntiCheatMgr::CheckUserLoginStep user not online, user id:%u, step:%d.");
      uVar2 = extraout_RAX;
    }
    return uVar2 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140a5dc60(lVar1,param_3);
  return uVar2;
}




undefined4 FUN_140a56040(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140a55860(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a5ba50(lVar2);
  return uVar1;
}




void FUN_140a56090(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a5ba60(lVar1);
  return;
}




void FUN_140a560e0(longlong param_1,uint param_2,ushort param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140a55860(param_1,param_2);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a605f0(lVar1,param_3);
  return;
}




void FUN_140a56330(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint local_res10 [2];
  uint uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_18;
  longlong lStack_10;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    local_res10[0] = param_2;
    FUN_140a54cf0((longlong *)(param_1 + 0x58),&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((local_18 == 0) || (local_18 != *(longlong *)(param_1 + 0x58))) {
      _invalid_parameter_noinfo();
    }
    if (lStack_10 != lVar1) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),param_2);
      if (cVar2 != '\0') {
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),&local_28);
        uVar3 = 0;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2,local_28,local_24,local_20,1);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,local_28,local_24,local_20,uVar3 & 0xffffff00);
        if (cVar2 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2,&DAT_140a6af40);
        }
      }
      FUN_140a54930((undefined8 *)(param_1 + 0x58),(undefined8 *)&local_28,&local_18);
    }
  }
  return;
}




void FUN_140a56470(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140a55860(param_1,param_2);
    if (lVar1 == 0) {
      log_InlineLogERROR(&DAT_140a6a758);
      return;
    }
    FUN_140a5dcc0(lVar1,param_3);
  }
  return;
}




undefined4 FUN_140a564d0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_140a55860(param_1,param_2);
    if (lVar2 != 0) {
      uVar1 = FUN_140a5bbd0(lVar2);
      return uVar1;
    }
    log_InlineLogERROR(&DAT_140a6a758);
  }
  return 0;
}




void FUN_140a56760(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = FUN_140a55860(param_1,param_2), lVar1 != 0)) {
    FUN_140a5bbe0(lVar1,param_3);
  }
  return;
}




void FUN_140a56790(longlong *param_1)

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
  FUN_140a54e00(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140a56800(longlong *param_1)

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
  FUN_140a54fb0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140a56870(undefined8 *param_1)

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




undefined8 * FUN_140a568c0(undefined8 *param_1)

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




void FUN_140a56910(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
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
  
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x40);
  lVar11 = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
LAB_140a56950:
  do {
    plVar9 = *(longlong **)(param_1 + 0x40);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar9) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_140a59a50(*(longlong *)(param_1 + 0x50));
      }
      plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x88);
      plVar2 = *(longlong **)(param_1 + 0x58);
      do {
        while( true ) {
          while( true ) {
            plVar9 = *(longlong **)(param_1 + 0x88);
            if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x58))) {
              _invalid_parameter_noinfo();
            }
            if (plVar8 == plVar9) {
              return;
            }
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar10 = lVar11;
            }
            else {
              lVar10 = *plVar2;
            }
            if (plVar8 == *(longlong **)(lVar10 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            if (((int)plVar8[4] != 0) && (uVar6 = tq::TimeGet(0), (uint)(*(int *)((longlong)plVar8 + 0x1c) + (int)plVar8[4]) <= uVar6 / 1000)) {
              *(undefined4 *)(plVar8 + 4) = 0;
              *(undefined4 *)((longlong)plVar8 + 0x1c) = 0;
              *(undefined1 *)((longlong)plVar8 + 0x24) = 1;
              if (plVar2 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar10 = lVar11;
              }
              else {
                lVar10 = *plVar2;
              }
              if (plVar8 == *(longlong **)(lVar10 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),(int)plVar8[3],0x1774);
            }
            if (plVar2 == (longlong *)0x0) {
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
          } while (*(char *)(*plVar8 + 0x29) == '\0');
        }
        do {
          plVar8 = (longlong *)plVar9[1];
          if (*(char *)((longlong)plVar8 + 0x29) != '\0') break;
          bVar12 = plVar9 == (longlong *)plVar8[2];
          plVar9 = plVar8;
        } while (bVar12);
      } while( true );
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = lVar11;
    }
    else {
      lVar10 = *plVar2;
    }
    if (plVar8 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = plVar8[4];
    if (lVar10 != 0) {
      FUN_140a5e860(lVar10);
      uVar7 = FUN_140a5dd00(lVar10);
      if ((char)uVar7 != '\0') {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = lVar11;
        }
        else {
          lVar10 = *plVar2;
        }
        if (plVar8 == *(longlong **)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        uVar1 = *(uint *)(plVar8 + 3);
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))(*(longlong **)(param_1 + 8),uVar1);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),uVar1);
          FUN_140a56140(param_1,uVar1,uVar5,&DAT_140a6b180,*(char *)(param_1 + 0xa0));
        }
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) != '\0') {
      _invalid_parameter_noinfo();
      goto LAB_140a56950;
    }
    plVar9 = plVar8;
    plVar3 = (longlong *)plVar8[2];
    if (*(char *)(plVar8[2] + 0x29) == '\0') {
      do {
        plVar8 = plVar3;
        plVar3 = (longlong *)*plVar8;
      } while (*(char *)(*plVar8 + 0x29) == '\0');
    }
    else {
      do {
        plVar8 = (longlong *)plVar9[1];
        if (*(char *)((longlong)plVar8 + 0x29) != '\0') break;
        bVar12 = plVar9 == (longlong *)plVar8[2];
        plVar9 = plVar8;
      } while (bVar12);
    }
  } while( true );
}




void FUN_140a56c00(longlong *param_1)

{
  FUN_140a56790(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a56c30(longlong *param_1)

{
  FUN_140a56800(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a56c60(undefined8 *param_1)

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
  lVar2 = FUN_140a52e60();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a56ce0(undefined8 *param_1)

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
  lVar2 = FUN_140a52ec0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140a56d60(longlong *param_1)

{
  FUN_140a56790(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a56d90(longlong *param_1)

{
  FUN_140a56800(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a56dc0(undefined8 *param_1)

{
  *param_1 = anticheat::CAntiCheatMgr::vftable;
  FUN_140a56800(param_1 + 0xb);
  operator_delete((void *)param_1[0xb]);
  FUN_140a56790(param_1 + 2);
  operator_delete((void *)param_1[2]);
  return;
}




undefined8 * FUN_140a56e30(undefined8 *param_1)

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
  lVar2 = FUN_140a52e60();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a56eb0(undefined8 *param_1)

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
  lVar2 = FUN_140a52ec0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a56f30(undefined8 *param_1)

{
  *param_1 = anticheat::CAntiCheatMgr::vftable;
  param_1[1] = 0;
  FUN_140a56e30(param_1 + 2);
  param_1[10] = 0;
  FUN_140a56eb0(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 5000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_140a52fa0((longlong)(param_1 + 0xb));
  return param_1;
}




undefined8 * FUN_140a56fb0(undefined8 *param_1,uint param_2)

{
  *param_1 = anticheat::CAntiCheatMgr::vftable;
  FUN_140a56800(param_1 + 0xb);
  operator_delete((void *)param_1[0xb]);
  FUN_140a56790(param_1 + 2);
  operator_delete((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a57040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    log_InlineLogERROR("CAntiCheatMgr::CreateNew, NULL == pConsumer");
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0xa8);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140a56f30(puVar1);
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140a6a758);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140a529f0((longlong)puVar1,param_1,param_3,param_4);
      if ((char)uVar2 == '\0') {
        FUN_140a53260(puVar1,param_1,param_3,param_4);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




bool FUN_140a57100(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140a57140(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140a57270(longlong param_1,longlong *param_2)

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




longlong FUN_140a57360(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a57382;
  }
  lVar2 = *plVar1;
LAB_140a57382:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a573a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a573c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a57450(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a57482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140a57590(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 * 0x28);
  return;
}




undefined * FUN_140a57630(void)

{
  if ((DAT_140a775d8 & 1) == 0) {
    DAT_140a775d8 = DAT_140a775d8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775d0,"CCheaterList");
    atexit((_func_5014 *)&LAB_140a69a90);
  }
  return &DAT_140a775d0;
}




void FUN_140a57690(__uint64 param_1)

{
  if ((DAT_140a775d8 & 1) == 0) {
    DAT_140a775d8 = DAT_140a775d8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775d0,"CCheaterList");
    atexit((_func_5014 *)&LAB_140a69a90);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a576e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140a775d0,param_1);
  return;
}




void FUN_140a576f0(void *param_1)

{
  if ((DAT_140a775d8 & 1) == 0) {
    DAT_140a775d8 = DAT_140a775d8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775d0,"CCheaterList");
    atexit((_func_5014 *)&LAB_140a69a90);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a57745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140a775d0,param_1);
  return;
}




void FUN_140a57750(void *param_1)

{
  if ((DAT_140a775d8 & 1) == 0) {
    DAT_140a775d8 = DAT_140a775d8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775d0,"CCheaterList");
    atexit((_func_5014 *)&LAB_140a69a90);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a577a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140a775d0,param_1);
  return;
}




void FUN_140a577d0(longlong param_1,longlong param_2)

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




void FUN_140a57830(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140a57850(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a57872;
  }
  lVar2 = *plVar1;
LAB_140a57872:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a57890(longlong *param_1)

{
  FUN_140a573a0(param_1);
  return param_1;
}




longlong * FUN_140a57900(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a573a0(param_1);
  return param_2;
}




longlong * FUN_140a57930(longlong *param_1)

{
  FUN_140a57450(param_1);
  return param_1;
}




void FUN_140a57960(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong FUN_140a579e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a57a02;
  }
  lVar2 = *plVar1;
LAB_140a57a02:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140a57a20(longlong *param_1)

{
  FUN_140a573a0(param_1);
  return param_1;
}




void FUN_140a57a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a57a60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140a57a60(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




longlong * FUN_140a57ab0(longlong *param_1)

{
  FUN_140a57450(param_1);
  return param_1;
}




void FUN_140a57ad0(void)

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




undefined8 * FUN_140a57b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140a57bb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a57bf0(undefined8 *param_1)

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




void FUN_140a57c30(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x21) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x21);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x21);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x21);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x21);
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




void FUN_140a57d00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140a57a60(param_1,(longlong *)plVar2[2]);
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




void FUN_140a57d80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a57da0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a57ad0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a57de0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140a57e20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (*(char *)((longlong)param_2 + 0x21) == '\0') {
    puVar1 = FUN_140a57b30(param_1,puVar3,param_3,puVar3,param_2 + 3,*(undefined1 *)(param_2 + 4));
    if (*(char *)((longlong)puVar3 + 0x21) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_140a57e20(param_1,(undefined8 *)*param_2,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_140a57e20(param_1,(undefined8 *)param_2[2],puVar1);
    puVar1[2] = puVar2;
  }
  return puVar3;
}




undefined8 * FUN_140a57eb0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x21) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x21) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x21) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x21) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x21) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x21) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




undefined8 * FUN_140a57f90(undefined8 *param_1)

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




void FUN_140a57fe0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x21) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x21);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x21);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x21);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x21);
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




void FUN_140a580d0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140a57d00((longlong)(param_1 + 1));
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_140a58150(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a58170(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a58200(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_140a57eb0(param_1,param_2,param_3);
  return param_2;
}




void FUN_140a58220(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar7 = FUN_140a57e20(param_1,*(undefined8 **)(*(longlong *)(param_2 + 0x30) + 8),lVar2);
  *(undefined8 **)(lVar2 + 8) = puVar7;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  plVar4 = (longlong *)plVar3[1];
  if (*(char *)((longlong)plVar4 + 0x21) != '\0') {
    *plVar3 = (longlong)plVar3;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    return;
  }
  cVar1 = *(char *)(*plVar4 + 0x21);
  plVar6 = (longlong *)*plVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar6 + 0x21);
    plVar4 = plVar6;
    plVar6 = (longlong *)*plVar6;
  }
  *plVar3 = (longlong)plVar4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  lVar5 = *(longlong *)(lVar2 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x21);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x21);
    lVar2 = lVar5;
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = lVar2;
  return;
}




undefined8 * FUN_140a582d0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
  }
  plVar5 = FUN_140a57b30(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140a58610(undefined8 *param_1)

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




longlong * FUN_140a58660(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a587bd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a587ec;
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
      goto LAB_140a587bd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a582d0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a587ec:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a58810(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140a75678);
  }
  FUN_140a573a0(param_3);
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
        goto LAB_140a589fc;
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
LAB_140a589fc:
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
            FUN_140a577d0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140a57270((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_140a577d0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140a57270((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140a577d0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_140a57270((longlong)param_1,plVar7);
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




longlong * FUN_140a58bd0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140a58ca0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140a58cc0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a57d00((longlong)param_1);
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
    FUN_140a58810(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140a58e70(longlong *param_1)

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
  FUN_140a58cc0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140a58ee0(undefined8 *param_1)

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




void FUN_140a58f30(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint local_res8 [2];
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  
  plVar1 = (longlong *)(param_1 + 8);
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar3 = *(char *)((longlong)puVar9 + 0x21);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  while (cVar3 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = puVar5;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    puVar5 = puVar9;
    puVar9 = puVar7;
    cVar3 = *(char *)((longlong)puVar7 + 0x21);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_50 = puVar5;
  local_58 = *plVar1;
  if (*plVar1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar9) || (param_2 < *(uint *)(puVar5 + 3))) {
    plVar8 = &local_48;
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_48 = *plVar1;
  }
  else {
    plVar8 = &local_58;
  }
  plVar4 = (longlong *)*plVar8;
  lVar10 = *(longlong *)(param_1 + 0x38);
  local_38 = plVar4;
  local_30 = plVar8[1];
  if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar6 = local_30;
  if (local_30 == lVar10) {
    local_res8[1] = 1;
    local_res8[0] = param_2;
    FUN_140a58660(plVar1,(longlong *)&local_38,local_res8);
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar4;
    }
    if (lVar6 == *(longlong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    piVar2 = (int *)(lVar6 + 0x1c);
    *piVar2 = *piVar2 + 1;
  }
  return;
}




void FUN_140a59050(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28 [2];
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a58bd0((longlong *)(param_1 + 8),(longlong *)&local_38,local_res10);
  lVar5 = *(longlong *)(param_1 + 0x38);
  if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  if (lStack_30 != lVar5) {
    if (local_38 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *local_38;
    }
    if (lStack_30 == *(longlong *)(lVar5 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    iVar1 = *(int *)(lStack_30 + 0x1c);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf0))();
    if (iVar2 <= iVar1) {
      FUN_140a58810((undefined8 *)(param_1 + 8),local_28,(longlong *)&local_38);
      pIVar3 = theInstance();
      lVar5 = **(longlong **)(param_1 + 0x50);
      uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_GOTO_CHEATJAIL");
      (**(code **)(lVar5 + 0x30))(*(undefined8 *)(param_1 + 0x50),param_2,0x1772,uVar4);
    }
  }
  return;
}




void FUN_140a591a0(longlong *param_1)

{
  FUN_140a58e70(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140a591d0(longlong *param_1,uint *param_2)

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
  
  FUN_140a57eb0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x21) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x21);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x21);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x21);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x21);
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
  FUN_140a58cc0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_140a59310(undefined8 *param_1)

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




void FUN_140a59360(longlong *param_1)

{
  FUN_140a58e70(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a59390(undefined8 *param_1)

{
  *param_1 = anticheat::CCheaterList::vftable;
  FUN_140a58e70(param_1 + 1);
  operator_delete((void *)param_1[1]);
  return;
}




undefined8 * FUN_140a593d0(undefined8 *param_1,longlong param_2)

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
  lVar2 = FUN_140a57ad0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  FUN_140a58220((longlong)param_1,param_2);
  return param_1;
}




undefined8 * FUN_140a59460(undefined8 *param_1)

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
  lVar2 = FUN_140a57ad0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a594e0(undefined8 *param_1,uint param_2)

{
  *param_1 = anticheat::CCheaterList::vftable;
  FUN_140a58e70(param_1 + 1);
  operator_delete((void *)param_1[1]);
  if ((param_2 & 1) != 0) {
    FUN_140a576f0(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a59550(undefined8 *param_1,longlong param_2)

{
  FUN_140a593d0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140a59580(undefined8 *param_1)

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
  lVar2 = FUN_140a57ad0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140a59600(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  *param_1 = anticheat::CCheaterList::vftable;
  FUN_140a59580(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = param_2;
  FUN_140a57d00((longlong)(param_1 + 1));
  iVar1 = tq::RandGet(600);
  *(int *)(param_1 + 9) = iVar1 + 0x708;
  uVar2 = tq::TimeGet(0);
  *(uint *)((longlong)param_1 + 0x4c) = uVar2 / 1000;
  return param_1;
}




undefined8 * FUN_140a59690(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758,"CHECKF","pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\cheaterlist.cpp",0x23);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    if ((DAT_140a775d8 & 1) == 0) {
      DAT_140a775d8 = DAT_140a775d8 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775d0,"CCheaterList");
      atexit((_func_5014 *)&LAB_140a69a90);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140a775d0,0x58);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140a59600(puVar1,param_1);
    }
  }
  return puVar1;
}




void FUN_140a59740(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint local_res8 [2];
  ulonglong *local_b8 [6];
  undefined8 *local_88;
  undefined8 local_80;
  ulonglong *local_78 [2];
  ulonglong *local_68;
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong *local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else {
    uVar14 = 0;
    FUN_140a593d0(local_b8,param_1 + 8);
    puVar4 = local_b8[0];
    puVar10 = (undefined8 *)*local_88;
    local_68 = local_b8[0];
    uVar13 = uVar14;
LAB_140a597e0:
    puVar11 = local_88;
    local_78[0] = local_b8[0];
    if ((puVar4 == (ulonglong *)0x0) || (puVar4 != local_b8[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar10 != puVar11) {
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar12 = uVar14;
      }
      else {
        uVar12 = *puVar4;
      }
      if (puVar10 == *(undefined8 **)(uVar12 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      iVar1 = *(int *)((longlong)puVar10 + 0x1c);
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar12 = uVar14;
      }
      else {
        uVar12 = *puVar4;
      }
      if (puVar10 == *(undefined8 **)(uVar12 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      uVar2 = *(uint *)(puVar10 + 3);
      local_res8[0] = uVar2;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf0))();
      if (iVar7 <= iVar1) {
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xf8))(*(longlong **)(param_1 + 0x50),uVar2);
        if (cVar6 == '\0') {
          if ((int)uVar13 < 0x1e) {
            (**(code **)(**(longlong **)(param_1 + 0x50) + 0x108))(*(longlong **)(param_1 + 0x50),uVar2,0x1772);
            uVar13 = (ulonglong)((int)uVar13 + 1);
            goto LAB_140a5991d;
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xe0))(*(longlong **)(param_1 + 0x50),uVar2);
          if ((cVar6 == '\0') && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x140))(*(longlong **)(param_1 + 0x50),uVar2), cVar6 == '\0')) {
            pIVar8 = theInstance();
            lVar3 = **(longlong **)(param_1 + 0x50);
            uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_GOTO_CHEATJAIL");
            (**(code **)(lVar3 + 0x30))(*(undefined8 *)(param_1 + 0x50),uVar2,0x1772,uVar9);
LAB_140a5991d:
            FUN_140a591d0((longlong *)(param_1 + 8),local_res8);
          }
        }
      }
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar10 + 0x21) == '\0') {
        puVar11 = puVar10;
        puVar5 = (undefined8 *)puVar10[2];
        if (*(char *)((longlong)puVar10[2] + 0x21) == '\0') {
          do {
            puVar10 = puVar5;
            puVar5 = (undefined8 *)*puVar10;
          } while (*(char *)((longlong)*puVar10 + 0x21) == '\0');
        }
        else {
          do {
            puVar10 = (undefined8 *)puVar11[1];
            if (*(char *)((longlong)puVar10 + 0x21) != '\0') break;
            bVar15 = puVar11 == (undefined8 *)puVar10[2];
            puVar11 = puVar10;
          } while (bVar15);
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
      goto LAB_140a597e0;
    }
    uStack_50 = *local_88;
    local_48 = local_b8[0];
    puStack_40 = local_88;
    local_58 = local_b8[0];
    FUN_140a58cc0((longlong *)local_b8,(longlong *)local_78,(longlong *)&local_58,(longlong *)&local_48);
    operator_delete(local_88);
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    operator_delete(local_b8[0]);
  }
  return;
}




ulonglong FUN_140a59a50(longlong param_1)

{
  ulong uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX;
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x100))();
  if (((char)uVar3 == '\0') && (*(int *)(param_1 + 0x4c) != 0)) {
    uVar1 = tq::TimeGet(0);
    uVar3 = (ulonglong)uVar1 * 0x10624dd3 & 0xffffffff;
    if ((uint)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48)) <= uVar1 / 1000) {
      FUN_140a59740(param_1);
      iVar2 = tq::RandGet(600);
      *(int *)(param_1 + 0x48) = iVar2 + 0x708;
      uVar1 = tq::TimeGet(0);
      uVar3 = (ulonglong)uVar1 * 0x10624dd3 & 0xffffffff;
      *(uint *)(param_1 + 0x4c) = uVar1 / 1000;
    }
  }
  return uVar3;
}




undefined * FUN_140a59b20(void)

{
  if ((DAT_140a775e8 & 1) == 0) {
    DAT_140a775e8 = DAT_140a775e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775e0,"CClientDetector");
    atexit((_func_5014 *)&LAB_140a69aa0);
  }
  return &DAT_140a775e0;
}




void FUN_140a59b80(__uint64 param_1)

{
  if ((DAT_140a775e8 & 1) == 0) {
    DAT_140a775e8 = DAT_140a775e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775e0,"CClientDetector");
    atexit((_func_5014 *)&LAB_140a69aa0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a59bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140a775e0,param_1);
  return;
}




void FUN_140a59be0(void *param_1)

{
  if ((DAT_140a775e8 & 1) == 0) {
    DAT_140a775e8 = DAT_140a775e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775e0,"CClientDetector");
    atexit((_func_5014 *)&LAB_140a69aa0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a59c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140a775e0,param_1);
  return;
}




void FUN_140a59c40(void *param_1)

{
  if ((DAT_140a775e8 & 1) == 0) {
    DAT_140a775e8 = DAT_140a775e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775e0,"CClientDetector");
    atexit((_func_5014 *)&LAB_140a69aa0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a59c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140a775e0,param_1);
  return;
}




undefined8 * FUN_140a59ca0(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CClientDetector::vftable;
  if ((param_2 & 1) != 0) {
    FUN_140a59be0(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a59cd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  ulong uVar1;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *param_1 = anticheat::CClientDetector::vftable;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return param_1;
}




void FUN_140a59d30(longlong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = tq::TimeGet(0);
    if ((uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar1 / 1000) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      uVar2 = FUN_140a5b830(*(longlong *)(param_1 + 8));
      if ((char)uVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
        uVar1 = tq::TimeGet(0);
        *(uint *)(param_1 + 0x20) = uVar1 / 1000;
      }
      else {
        FUN_140a5ce60(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
        uVar1 = tq::TimeGet(0);
        *(uint *)(param_1 + 0x28) = uVar1 / 1000;
      }
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = tq::TimeGet(0);
    if ((uint)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24)) <= uVar1 / 1000) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_140a617f0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
    }
  }
  return;
}




int FUN_140a59e10(longlong param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x20) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined8 * FUN_140a59e50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((DAT_140a775e8 & 1) == 0) {
    DAT_140a775e8 = DAT_140a775e8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775e0,"CClientDetector");
    atexit((_func_5014 *)&LAB_140a69aa0);
  }
  puVar2 = CMyHeap::Alloc((CMyHeap *)&DAT_140a775e0,0x30);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = anticheat::CClientDetector::vftable;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_3;
    *(undefined4 *)(puVar2 + 3) = param_4;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = param_3;
    uVar1 = tq::TimeGet(0);
    *(uint *)(puVar2 + 4) = uVar1 / 1000;
  }
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758,"IF_NOT","pDetector","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\clientdetector.cpp",0x3b);
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}




void FUN_140a59f70(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140a59f80(void)

{
  return 0;
}




undefined8 FUN_140a59f90(void)

{
  return 0;
}




undefined8 FUN_140a59fa0(void)

{
  return 0;
}




undefined8 FUN_140a59fb0(void)

{
  return 0;
}




undefined8 * FUN_140a59fc0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140a5a000(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140a5a020(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0x23);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140a5a5f0(*(longlong *)(param_1 + 0x20),lVar1,param_3,param_4);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ushort FUN_140a5a100(longlong param_1,uint param_2,ushort *param_3,ushort param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  CMsg local_438 [1072];
  
  if ((param_3 == (ushort *)0x0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else if (param_4 < *param_3) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3[1];
    if (uVar2 == 0x3eb) {
      FUN_140a63e00(local_438);
      bVar1 = FUN_140a63e80(local_438,(char *)param_3,param_4);
      if (bVar1) {
        FUN_140a63eb0(local_438,param_2,*(longlong **)(param_1 + 0x20));
      }
      FUN_140a63e50((undefined8 *)local_438);
    }
    else if (uVar2 == 0x3fe) {
      FUN_140a63850(local_438);
      bVar1 = FUN_140a638d0(local_438,(char *)param_3,param_4);
      if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
        FUN_140a639b0((longlong)local_438,param_2,*(longlong **)(param_1 + 0x20),*(longlong *)(param_1 + 0x28));
      }
      FUN_140a638a0((undefined8 *)local_438);
    }
    else if (uVar2 == 0x9d9) {
      FUN_140a63c70(local_438);
      bVar1 = FUN_140a63cf0(local_438,(char *)param_3,param_4);
      if (bVar1) {
        FUN_140a63d20((longlong)local_438,(ulonglong)param_2,*(undefined8 *)(param_1 + 0x20),*(longlong **)(param_1 + 0x28));
      }
      FUN_140a63cc0((undefined8 *)local_438);
    }
    else if (uVar2 == 0x271a) {
      FUN_140a62e50(local_438);
      bVar1 = FUN_140a631c0(local_438,(char *)param_3,param_4);
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        FUN_140a63200((longlong)local_438,param_2,*(longlong **)(param_1 + 0x20),*(longlong **)(param_1 + 0x28));
      }
      FUN_140a62ed0((undefined8 *)local_438);
    }
    else {
      log_InlineLogWARNING("anticheat:: Recv fault MsgType:%d");
    }
    uVar2 = *param_3;
  }
  return uVar2;
}




void FUN_140a5a2d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a5a2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer AntiCheat module doesn\'t have provider");
    return;
  }
  tq::TimeGet(0);
  FUN_140a5a670(*(longlong *)(param_1 + 0x20));
  return;
}




bool FUN_140a5a310(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140a5b240(puVar2);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0x23);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3eb,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x271a,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3fe,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x9d9,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0x3eb,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0x271a,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0x3fe,param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0x9d9,param_1);
  }
  return cVar1 != '\0';
}




undefined8 FUN_140a5a400(void)

{
  return 1;
}




void FUN_140a5a410(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x118))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a5a440(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140a5a470(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = anticheat::CModule::vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}




void FUN_140a5a4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = anticheat::CModule::vftable;
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x118))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = gs::IModule::vftable;
  return;
}




longlong * ModuleCreate(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
                    /* 0xa510  1  ModuleCreate */
  uVar3 = (undefined4)param_2;
  plVar2 = operator_new(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)anticheat::CModule::vftable;
    plVar2[1] = param_1;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = uVar3;
    plVar2[4] = 0;
    plVar2[5] = 0;
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140a5a310((longlong)plVar2,param_2,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 * FUN_140a5a5b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a5a4c0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140a5a5f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_140a57040(param_2,param_2,param_3,param_4);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR("CProvider::Init, can not create m_pAntiCheatMgr");
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140a62c90();
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




void FUN_140a5a670(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56910(*(longlong *)(param_1 + 0x10));
  return;
}




void FUN_140a5a6c0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55200(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a5a710(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a553e0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a5a760(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a554f0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a5a7b0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55700(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




ulonglong FUN_140a5a800(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140a55960(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




void FUN_140a5a850(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a559c0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined1 FUN_140a5a8c0(longlong param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55a50(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return uVar1;
}




void FUN_140a5a920(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55ad0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a5a970(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55b40(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




bool FUN_140a5a9c0(longlong param_1,uint param_2)

{
  bool bVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return false;
  }
  bVar1 = FUN_140a55ba0(*(longlong *)(param_1 + 0x10),param_2);
  return bVar1;
}




void FUN_140a5aa10(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55bf0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a5aa60(longlong param_1,uint param_2,undefined4 param_3,ushort param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55c50(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a5aab0(longlong param_1,uint param_2,int param_3,int param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55cc0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




undefined4 FUN_140a5ab00(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55d30(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




void FUN_140a5ac30(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55d90(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




undefined1 FUN_140a5ac80(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55de0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined1 FUN_140a5acd0(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55e40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




void FUN_140a5ad20(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a55ea0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




undefined1 FUN_140a5ad70(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55ef0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined1 FUN_140a5adc0(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a55f50(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




ulonglong FUN_140a5ae10(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140a55fb0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined4 FUN_140a5ae60(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a56040(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140a5aeb0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56090(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a5af00(longlong param_1,uint param_2,ushort param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a560e0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a5af50(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a51500(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a5afa0(longlong param_1,undefined4 param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a53d40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_140a5aff0(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56140(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,'\0');
  return;
}




void FUN_140a5b040(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56330(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_140a5b090(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a51520(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




undefined1 FUN_140a5b0e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = FUN_140a51530(*(longlong *)(param_1 + 0x10));
  return uVar1;
}




void FUN_140a5b100(longlong param_1,uint param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56470(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined4 FUN_140a5b150(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  uVar1 = FUN_140a564d0(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_140a5b1a0(longlong param_1,uint param_2,undefined4 param_3,uint param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56520(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_140a5b1f0(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  FUN_140a56760(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined8 * FUN_140a5b240(undefined8 *param_1)

{
  *param_1 = anticheat::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140a5b260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = anticheat::CProvider::vftable;
  if (param_1[2] != 0) {
    FUN_140a53260((undefined8 *)param_1[2],param_2,param_3,param_4);
    param_1[2] = 0;
  }
  return;
}




undefined8 * FUN_140a5b2a0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a5b260(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140a5b2d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




ulonglong FUN_140a5b2f0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 *puVar2;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  *(longlong **)(param_1 + 8) = param_2;
  *(longlong *)(param_1 + 0x10) = param_3;
  cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
  if (cVar1 != '\0') {
    puVar2 = FUN_140a59e50(param_1,0x12,600,0x168);
    *(undefined8 **)(param_1 + 0x88) = puVar2;
  }
  puVar2 = FUN_140a59e50(param_1,0x13,900,0x1a4);
  *(undefined8 **)(param_1 + 0x90) = puVar2;
  puVar2 = FUN_140a59e50(param_1,0x14,0x2d0,0x168);
  *(undefined8 **)(param_1 + 0x98) = puVar2;
  puVar2 = FUN_140a59e50(param_1,0x15,0x30c,0x168);
  *(undefined4 *)(param_1 + 0x1f8) = 1;
  *(undefined8 **)(param_1 + 0xa0) = puVar2;
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}




ulonglong FUN_140a5b430(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  ulonglong extraout_RAX_00;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar1 = extraout_RAX;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    if ((int)uVar1 < 0x1389) {
      if (0x1f < param_2) {
        log_InlineLogERROR(&DAT_140a6a758);
        return extraout_RAX_00 & 0xffffffffffffff00;
      }
      return (ulonglong)((*(uint *)(param_1 + 0x1c) >> (param_2 & 0x1f) & 1) != 0);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140a5b4f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758,"IF_NOT","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\useranticheat.cpp");
    return;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (iVar2 < 0x1389) {
    if (0x1f < param_2) {
      log_InlineLogERROR(&DAT_140a6a758,"CHECK","idCheatKind < 32","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\useranticheat.cpp");
      return;
    }
    uVar5 = 1 << ((byte)param_2 & 0x1f);
    if ((*(uint *)(param_1 + 0x1c) & uVar5) == 0) {
      if (param_2 == 0xd) {
        plVar1 = *(longlong **)(param_1 + 8);
        uVar3 = (**(code **)*plVar1)(plVar1,*(undefined4 *)(param_1 + 0x18));
        uVar4 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x18));
        tq::MyLogSave("gmlog/maybecheater",
                      "Cheater found. Account[%u], User:[%s][%u], cheat type:[%s], subtype:[%u], dwCheatLogData1[%u], dwCheatLogData2[%u], dwCheatLogData3[%u], dwCheatLogData4[%u]"
                      ,uVar4 & 0xffffffff,uVar3);
      }
      else {
        plVar1 = *(longlong **)(param_1 + 8);
        uVar3 = (**(code **)*plVar1)(plVar1,*(undefined4 *)(param_1 + 0x18));
        uVar4 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x18));
        tq::MyLogSave("gmlog/cheater","Cheater found. Account[%u], User:[%s][%u], cheat type:[%s], subtype:[%u]",uVar4 & 0xffffffff,uVar3);
      }
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar5;
    }
  }
  return;
}




void FUN_140a5b6e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (iVar2 < 0x1389) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), cVar1 == '\0')) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (iVar2 == 0x177a) {
        return;
      }
      uVar3 = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x177a,0x22,0x4a,1);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x177a,0x22,0x4a,uVar3 & 0xffffff00);
      if (cVar1 != '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a5b7e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&DAT_140a6c790);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&DAT_140a6c768);
  }
  return;
}




bool FUN_140a5b810(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  return iVar1 == 0x1772;
}




undefined8 FUN_140a5b830(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((int)uVar1 != 0x1772) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if ((char)uVar1 == '\0') {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        if ((char)uVar1 == '\0') {
          uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
          if ((char)uVar1 == '\0') {
            return CONCAT71((int7)(uVar1 >> 8),1);
          }
        }
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




void FUN_140a5b8b0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), cVar1 == '\0')) {
    if (param_2 == 0x12) {
      if (param_3 != *(int *)(param_1 + 0x78)) {
                    /* WARNING: Could not recover jumptable at 0x000140a5ba09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        log_InlineLogMessage("CUserAntiCheat::ClearDetection _TYPE_OFFLINE_VERIFYDATA chek data error, user id:%u.");
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    else if (param_2 == 0x13) {
      if (0xe < *(uint *)(param_1 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x000140a5b9cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        log_InlineLogMessage("CUserAntiCheat::ClearDetection _TYPE_OFFLINE chek data error, user id:%u.");
        return;
      }
      if (param_3 != *(int *)(&DAT_140a6c498 + (ulonglong)*(uint *)(param_1 + 0x7c) * 4)) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    else if (param_2 == 0x14) {
      if (0xe < *(uint *)(param_1 + 0x80)) {
                    /* WARNING: Could not recover jumptable at 0x000140a5b986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        log_InlineLogMessage("CUserAntiCheat::ClearDetection _TYPE_OFFLINE3 chek data error, user id:%u.");
        return;
      }
      if (param_3 != *(int *)(&DAT_140a6c518 + (ulonglong)*(uint *)(param_1 + 0x80) * 4)) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0x98);
    }
    else {
      if (param_2 != 0x15) {
        return;
      }
      if (0xe < *(uint *)(param_1 + 0x84)) {
                    /* WARNING: Could not recover jumptable at 0x000140a5b93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        log_InlineLogMessage("CUserAntiCheat::ClearDetection _TYPE_OFFLINE4 chek data error, user id:%u.");
        return;
      }
      if (param_3 != *(int *)(&DAT_140a6c598 + (ulonglong)*(uint *)(param_1 + 0x84) * 4)) {
        return;
      }
      lVar2 = *(longlong *)(param_1 + 0xa0);
    }
    if (lVar2 != 0) {
      FUN_140a59e10(lVar2);
    }
  }
  return;
}




undefined4 FUN_140a5ba40(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  UNLOCK();
  return uVar1;
}




undefined4 FUN_140a5ba50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}




void FUN_140a5ba60(longlong param_1)

{
  *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
  return;
}




void FUN_140a5ba70(longlong param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  ushort uVar9;
  CMsg local_438 [1072];
  
  iVar3 = tq::RandGet(100);
  if (iVar3 < 0x1f) {
    iVar4 = tq::RandGet(500);
    FUN_140a62e50(local_438);
    iVar3 = *(int *)(param_1 + 0x18);
    iVar5 = tq::RandGet(8);
    iVar6 = rand();
    iVar7 = rand();
    bVar2 = FUN_140a62f10(local_438,iVar3,(short)iVar7,(short)iVar6,(short)iVar5,(short)iVar4 + 1000,0,0);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
    }
    FUN_140a62ed0((undefined8 *)local_438);
  }
  else {
    iVar3 = tq::RandGet(4999);
    uVar9 = (short)iVar3 + 15000;
    iVar3 = (uint)uVar9 * (uint)uVar9 + 10;
    uVar1 = (ushort)(iVar3 >> 0x1f) & 0x3f;
    FUN_140a63640(local_438);
    iVar4 = tq::RandGet(0x100);
    uVar8 = FUN_140a636c0(local_438,uVar9,(short)iVar4,(uVar1 + (short)iVar3 & 0x3f) - uVar1);
    if ((int)uVar8 != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
    }
    FUN_140a63690((undefined8 *)local_438);
  }
  return;
}




undefined4 FUN_140a5bbd0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x208);
}




void FUN_140a5bbe0(longlong param_1,int param_2)

{
  *(bool *)(param_1 + 0x234) = *(int *)(param_1 + 0x230) != param_2;
  return;
}




longlong FUN_140a5bc60(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x14) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 0x14;
}




bool FUN_140a5bdb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140a5be60(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
}




void FUN_140a5bee0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
}




void FUN_140a5bf80(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
}




longlong FUN_140a5c020(longlong *param_1)

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
  uVar6 = uVar1 >> 2;
  lVar3 = lVar5;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_1;
    lVar4 = lVar5;
    if (plVar2 == (longlong *)0x0) goto LAB_140a5c070;
  }
  lVar4 = *plVar2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = lVar4;
  }
LAB_140a5c070:
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
  return *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8) + (ulonglong)((uint)uVar1 & 3) * 4;
}




longlong FUN_140a5c0e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x14;
}




longlong FUN_140a5c140(longlong *param_1)

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
  uVar6 = uVar1 >> 2;
  lVar3 = lVar5;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_1;
    lVar4 = lVar5;
    if (plVar2 == (longlong *)0x0) goto LAB_140a5c190;
  }
  lVar4 = *plVar2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = lVar4;
  }
LAB_140a5c190:
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
  return *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8) + (ulonglong)((uint)uVar1 & 3) * 4;
}




longlong * FUN_140a5c260(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_140a5c290;
  }
  else {
LAB_140a5c290:
    lVar4 = *plVar1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = lVar4;
    }
  }
  if ((ulonglong)(param_1[1] + param_2) <= (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= (ulonglong)(param_1[1] + param_2)) goto LAB_140a5c2c8;
  }
  _invalid_parameter_noinfo();
LAB_140a5c2c8:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}




longlong * FUN_140a5c2e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  lVar2 = lVar3;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar4 = lVar3;
    if (plVar1 != (longlong *)0x0) goto LAB_140a5c310;
  }
  else {
LAB_140a5c310:
    lVar4 = *plVar1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = lVar4;
    }
  }
  if ((ulonglong)(param_1[1] + param_2) <= (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= (ulonglong)(param_1[1] + param_2)) goto LAB_140a5c348;
  }
  _invalid_parameter_noinfo();
LAB_140a5c348:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}




longlong * FUN_140a5c3e0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140a5c410;
  }
  else {
LAB_140a5c410:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0x14;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140a5c440;
  }
  _invalid_parameter_noinfo();
LAB_140a5c440:
  param_1[1] = param_1[1] + param_2 * 0x14;
  return param_1;
}




void FUN_140a5c460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140a5c490(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140a5c520(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140a5c5d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140a5c660(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x14)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 * 0x14);
  return;
}




void FUN_140a5c6e0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140a5c780(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_1 << 5);
  return;
}




void * FUN_140a5c840(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a5c8b0(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_140a5ca80(void)

{
  if ((DAT_140a775f8 & 1) == 0) {
    DAT_140a775f8 = DAT_140a775f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775f0,"CUserAntiCheat");
    atexit((_func_5014 *)&LAB_140a69ab0);
  }
  return &DAT_140a775f0;
}




void FUN_140a5cae0(__uint64 param_1)

{
  if ((DAT_140a775f8 & 1) == 0) {
    DAT_140a775f8 = DAT_140a775f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775f0,"CUserAntiCheat");
    atexit((_func_5014 *)&LAB_140a69ab0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a5cb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140a775f0,param_1);
  return;
}




void FUN_140a5cb40(void *param_1)

{
  if ((DAT_140a775f8 & 1) == 0) {
    DAT_140a775f8 = DAT_140a775f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775f0,"CUserAntiCheat");
    atexit((_func_5014 *)&LAB_140a69ab0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a5cb95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140a775f0,param_1);
  return;
}




void FUN_140a5cba0(void *param_1)

{
  if ((DAT_140a775f8 & 1) == 0) {
    DAT_140a775f8 = DAT_140a775f8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140a775f0,"CUserAntiCheat");
    atexit((_func_5014 *)&LAB_140a69ab0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a5cbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140a775f0,param_1);
  return;
}




void FUN_140a5cc00(undefined8 *param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = (DAT_140a77620 - DAT_140a77618) / 0x14;
  if (lVar1 != 0) {
    iVar2 = tq::RandGet((int)lVar1);
    uVar3 = (ulonglong)iVar2;
    if ((ulonglong)((DAT_140a77620 - DAT_140a77618) / 0x14) <= uVar3) {
      _invalid_parameter_noinfo();
    }
    *param_1 = *(undefined8 *)(DAT_140a77618 + uVar3 * 0x14);
    iVar2 = tq::RandGet(3);
    *param_2 = iVar2;
    if ((ulonglong)((DAT_140a77620 - DAT_140a77618) / 0x14) <= uVar3) {
      _invalid_parameter_noinfo();
    }
    *param_3 = (int)(longlong)*(float *)(DAT_140a77618 + 8 + (uVar3 * 5 + (longlong)*param_2) * 4);
  }
  return;
}




undefined2 FUN_140a5cd20(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




void FUN_140a5cd80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x88);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x98);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xa0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}




void FUN_140a5ce60(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_res8 [2];
  undefined8 local_res18 [2];
  CMsg local_438 [1072];
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if (cVar3 == '\0') {
      if (param_2 == 0x12) {
        local_res18[0] = 0;
        local_res8[0] = 0;
        FUN_140a5cc00(local_res18,local_res8,(undefined4 *)(param_1 + 0x78));
        FUN_140a62e50(local_438);
        uVar5 = FUN_140a63110((longlong)local_438,0x19a,*(undefined4 *)(param_1 + 0x18),local_res18[0],(undefined2)local_res8[0]);
        if ((char)uVar5 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
        }
        FUN_140a62ed0((undefined8 *)local_438);
      }
      else if (param_2 == 0x13) {
        uVar4 = tq::RandGet(0xf);
        *(uint *)(param_1 + 0x7c) = uVar4;
        if (uVar4 < 0xf) {
          iVar1 = *(int *)(&DAT_140a6c458 + (ulonglong)uVar4 * 4);
          FUN_140a62e50(local_438);
          uVar5 = FUN_140a63110((longlong)local_438,0x1a4,*(undefined4 *)(param_1 + 0x18),(longlong)iVar1,0);
          if ((char)uVar5 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
          }
          FUN_140a62ed0((undefined8 *)local_438);
        }
        else {
          log_InlineLogERROR("CUserAntiCheat::Detect _TYPE_OFFLINE chek data error");
        }
      }
      else if (param_2 == 0x14) {
        uVar4 = tq::RandGet(0xf);
        *(uint *)(param_1 + 0x80) = uVar4;
        if (uVar4 < 0xf) {
          uVar2 = *(undefined4 *)(&DAT_140a6c4d8 + (ulonglong)uVar4 * 4);
          FUN_140a63850(local_438);
          uVar5 = FUN_140a63910((longlong)local_438,0x38,*(undefined4 *)(param_1 + 0x18),uVar2);
          if ((char)uVar5 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
          }
          FUN_140a638a0((undefined8 *)local_438);
        }
        else {
          log_InlineLogERROR("CUserAntiCheat::Detect _TYPE_OFFLINE3 chek data error");
        }
      }
      else if (param_2 == 0x15) {
        uVar4 = tq::RandGet(0xf);
        *(uint *)(param_1 + 0x84) = uVar4;
        if (uVar4 < 0xf) {
          iVar1 = *(int *)(&DAT_140a6c558 + (ulonglong)uVar4 * 4);
          FUN_140a62e50(local_438);
          uVar5 = FUN_140a63110((longlong)local_438,0x1ae,*(undefined4 *)(param_1 + 0x18),(longlong)iVar1,0);
          if ((char)uVar5 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
          }
          FUN_140a62ed0((undefined8 *)local_438);
        }
        else {
          log_InlineLogERROR("CUserAntiCheat::Detect _TYPE_OFFLINE4 chek data error");
        }
      }
    }
  }
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

ulonglong FUN_140a5d0f0(longlong param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong extraout_RAX;
  
  if (*(int *)(param_1 + 0x218) != 0) {
    uVar1 = tq::TimeGet(0);
    uVar2 = *(int *)(param_1 + 0x218) + *(int *)(param_1 + 0x214);
    in_RAX = (ulonglong)uVar2;
    if (uVar1 / 1000 < uVar2) goto LAB_140a5d1e2;
  }
  if (*(int *)(param_1 + 0x218) != 0) {
    uVar1 = tq::TimeGet(0);
    uVar2 = *(int *)(param_1 + 0x218) + *(int *)(param_1 + 0x214);
    in_RAX = (ulonglong)uVar2;
    if (uVar2 <= uVar1 / 1000) {
      in_RAX = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x214) = 0;
    }
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    if (*(int *)(param_1 + 0x208) != 0) {
      uVar1 = tq::TimeGet(0);
      in_RAX = CONCAT44(extraout_var,uVar1);
      uVar2 = param_2 - *(int *)(param_1 + 0x208);
      if (uVar1 - *(int *)(param_1 + 0x204) < uVar2 - (uVar2 >> 4)) {
        tq::MyLogSave("gmlog/cheater",
                      "Cheater found. Error Time Stamp, UserID[%u],CurrClientTimeStamp(%u), LastClientTimeStamp(%u), CurServerTimeStamp(%u), LastServerTimeStamp(%u)"
                      ,(ulonglong)*(uint *)(param_1 + 0x18),(ulonglong)param_2);
        return extraout_RAX & 0xffffffffffffff00;
      }
    }
  }
LAB_140a5d1e2:
  return CONCAT71((int7)(in_RAX >> 8),1);
}




bool FUN_140a5d1f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140a5d250(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5d260(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140a5d2f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5d300(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5d310(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 4);
  return;
}




longlong FUN_140a5d390(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a5d3b2;
  }
  lVar2 = *plVar1;
LAB_140a5d3b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a5d400(longlong param_1,longlong param_2)

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




void FUN_140a5d460(longlong param_1,longlong *param_2)

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




void FUN_140a5d510(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140a5d5a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x14)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 0x14);
  return;
}




void FUN_140a5d620(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140a5d6a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a5d6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a5d730(longlong *param_1,longlong param_2)

{
  FUN_140a5c260(param_1,param_2);
  return param_1;
}




longlong * FUN_140a5d750(longlong *param_1,longlong param_2)

{
  FUN_140a5c2e0(param_1,param_2);
  return param_1;
}




void FUN_140a5d780(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x20)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140a75560);
  }
  operator_new(param_2 << 5);
  return;
}




undefined8 * FUN_140a5d7f0(undefined8 *param_1)

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




void FUN_140a5d840(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140a5d872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140a5d8e0(longlong *param_1,longlong param_2)

{
  FUN_140a5c3e0(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140a5da80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((longlong)param_1 + 0x14)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 2);
    }
    param_3 = (undefined8 *)((longlong)param_3 + 0x14);
  }
  return param_3;
}




void FUN_140a5dad0(longlong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined7 extraout_var;
  CMsg local_438 [1072];
  
  FUN_140a62e50(local_438);
  bVar1 = FUN_140a63000(local_438,*(int *)(param_1 + 0x18),0,0,0,0xcd,(char *)0x0,0,0);
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    uVar2 = tq::TimeGet(0);
    *(ulong *)(param_1 + 0x204) = uVar2;
    *(undefined4 *)(param_1 + 0x208) = 0;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
    *(undefined4 *)(param_1 + 0x20c) = 300;
    uVar2 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x210) = uVar2 / 1000;
  }
  FUN_140a62ed0((undefined8 *)local_438);
  return;
}




void FUN_140a5dba0(longlong param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if ((iVar1 < 0x1389) && (*(int *)(param_1 + 100) == 0)) {
    *(uint *)(param_1 + 0x60) = param_2;
    uVar2 = tq::TimeGet(0);
    *(uint *)(param_1 + 100) = uVar2 / 1000;
    tq::MyLogSave("gmlog/cheater","Cheater found. UserID[%u], start goto cheat jail punish after[%d] second, reason:(%s)");
  }
  return;
}




undefined8 FUN_140a5dc60(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  
  if (param_2 == *(int *)(param_1 + 0x1f8)) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  FUN_140a5b4f0(param_1,7);
  iVar1 = tq::RandGet(0x3c);
  uVar2 = FUN_140a5dba0(param_1,iVar1 + 0x3c);
  return uVar2 & 0xffffffffffffff00;
}




int FUN_140a5dcc0(longlong param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x208) = param_2;
  *(undefined4 *)(param_1 + 0x214) = 0x80;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x218) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined8 FUN_140a5dd00(longlong param_1)

{
  ulong uVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined8 extraout_RAX;
  
  if (((*(int *)(param_1 + 0x204) != 0) && (*(int *)(param_1 + 0x208) == 0)) && (*(int *)(param_1 + 0x210) != 0)) {
    uVar1 = tq::TimeGet(0);
    uVar2 = *(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x20c);
    in_RAX = (ulonglong)uVar2;
    if (uVar2 <= uVar1 / 1000) {
      *(undefined4 *)(param_1 + 0x210) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 0;
      tq::MyLogSave("gmlog/cheater","Cheater found. Error Time Stamp, UserID[%u], Wait Client Time Stamp Time Out.");
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_140a5dd80(longlong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  CMsg local_438 [1072];
  
  iVar1 = tq::RandGet(2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x22c) = 0x5b;
    *(undefined4 *)(param_1 + 0x230) = 0x8a;
  }
  else {
    *(undefined4 *)(param_1 + 0x22c) = 0x8a;
    *(undefined4 *)(param_1 + 0x230) = 0x5b;
  }
  FUN_140a62e50(local_438);
  uVar3 = FUN_140a63110((longlong)local_438,*(undefined2 *)(param_1 + 0x22c),*(undefined4 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x230),0);
  if ((char)uVar3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),local_438);
    iVar1 = tq::RandGet(300);
    *(int *)(param_1 + 0x224) = iVar1 + 300;
    uVar2 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x228) = uVar2 / 1000;
  }
  FUN_140a62ed0((undefined8 *)local_438);
  return;
}




void FUN_140a5de60(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    if ((ulonglong)(*(longlong *)(param_1 + 0x28) << 2) <= *(ulonglong *)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x38) + -1;
    *(longlong *)(param_1 + 0x38) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}




longlong FUN_140a5dea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140a5dec2;
  }
  lVar2 = *plVar1;
LAB_140a5dec2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140a5dee0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5df00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5df20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5df40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5df60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140a5df60(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  }
  return;
}




void FUN_140a5dfb0(longlong param_1)

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




undefined8 FUN_140a5e050(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0xccccccccccccccc < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140a5bee0();
    }
    lVar1 = FUN_140a5d5a0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 0x14;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_140a5e0c0(longlong *param_1)

{
  FUN_140a5d6a0(param_1);
  return param_1;
}




longlong * FUN_140a5e0e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = param_3 + lVar2;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_140a5e156;
  }
  _invalid_parameter_noinfo();
LAB_140a5e156:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}




longlong * FUN_140a5e190(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar3;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = param_3 + lVar2;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_140a5e206;
  }
  _invalid_parameter_noinfo();
LAB_140a5e206:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}




undefined8 * FUN_140a5e240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

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




undefined8 * FUN_140a5e2c0(undefined8 *param_1)

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




undefined8 * FUN_140a5e320(undefined8 *param_1)

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




undefined8 * FUN_140a5e370(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a5e3b0(longlong *param_1)

{
  FUN_140a5d840(param_1);
  return param_1;
}




longlong * FUN_140a5e3d0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 0x14;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140a5e43e;
  }
  _invalid_parameter_noinfo();
LAB_140a5e43e:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140a5e470(void)

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




undefined8 * FUN_140a5e4d0(undefined8 *param_1)

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




longlong * FUN_140a5e510(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140a5d6a0(param_1);
  return param_2;
}




undefined8 * FUN_140a5e540(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140a5e5a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140a5e600(undefined8 *param_1)

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




void * FUN_140a5e650(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140a5e690(void *param_1,longlong param_2,void *param_3)

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




void FUN_140a5e710(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    }
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}




void FUN_140a5e840(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140a5da80(param_1,param_2,param_3);
  return;
}




void FUN_140a5e860(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_140a59d30(*(longlong *)(param_1 + 0x88));
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_140a59d30(*(longlong *)(param_1 + 0x90));
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_140a59d30(*(longlong *)(param_1 + 0x98));
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_140a59d30(*(longlong *)(param_1 + 0xa0));
    }
    if ((*(int *)(param_1 + 100) != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x60)) <= uVar4 / 1000)) {
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (DAT_140a77238 != '\0') {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        if ((cVar3 == '\0') &&
           (cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), cVar3 == '\0')) {
          pIVar6 = theInstance();
          lVar1 = **(longlong **)(param_1 + 8);
          uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_GOTO_CHEATJAIL");
          (**(code **)(lVar1 + 0x30))(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x1772,uVar7);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&DAT_140a6d230);
        }
      }
    }
    if ((*(int *)(param_1 + 0x200) != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x200) + *(int *)(param_1 + 0x1fc)) <= uVar4 / 1000)) {
      *(undefined4 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = 0x1e;
      uVar4 = tq::TimeGet(0);
      *(uint *)(param_1 + 0x200) = uVar4 / 1000;
      FUN_140a5ba70(param_1);
    }
    if ((*(int *)(param_1 + 0x220) != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x21c) + *(int *)(param_1 + 0x220)) <= uVar4 / 1000)) {
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      FUN_140a5dd80(param_1);
    }
    if ((*(int *)(param_1 + 0x228) != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x228) + *(int *)(param_1 + 0x224)) <= uVar4 / 1000)) {
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x224) = 0;
      if ((*(char *)(param_1 + 0x234) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
        plVar2 = *(longlong **)(param_1 + 8);
        cVar3 = FUN_140a51540(*(longlong *)(param_1 + 0x10));
        uVar5 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(param_1 + 0x18));
        FUN_140a56140(*(longlong *)(param_1 + 0x10),*(uint *)(param_1 + 0x18),uVar5,&DAT_140a6d208,cVar3);
      }
    }
    if ((*(int *)(param_1 + 0x6c) != 0) && (uVar4 = tq::TimeGet(0), (uint)(*(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c)) <= uVar4 / 1000)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x70));
    }
  }
  return;
}




void FUN_140a5eb40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x1d);
  while (cVar1 == '\0') {
    FUN_140a5df60(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_140a5ebd0(longlong *param_1)

{
  FUN_140a5d6a0(param_1);
  return param_1;
}




void FUN_140a5ebf0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5ec10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5ec30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a5ec50(undefined8 *param_1)

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




void FUN_140a5eca0(longlong param_1)

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




undefined8 * FUN_140a5ed40(undefined8 *param_1)

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




undefined8 * FUN_140a5ed90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140a5edd0(longlong *param_1)

{
  FUN_140a5d840(param_1);
  return param_1;
}




void FUN_140a5edf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140a5e470();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x1d) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140a5ee30(undefined8 *param_1)

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




undefined8 * FUN_140a5ee80(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140a5eee0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140a5ef40(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140a5ef90(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140a75678);
  }
  FUN_140a5d6a0(param_3);
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
        goto LAB_140a5f17c;
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
LAB_140a5f17c:
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
            FUN_140a5d400((longlong)param_1,(longlong)plVar10);
            plVar11 = (longlong *)plVar10[2];
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(*plVar11 + 0x1c) != '\x01') || (*(char *)(plVar11[2] + 0x1c) != '\x01')) {
              if (*(char *)(plVar11[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*plVar11 + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140a5d460((longlong)param_1,plVar11);
                plVar11 = (longlong *)plVar10[2];
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(plVar11[2] + 0x1c) = 1;
              FUN_140a5d400((longlong)param_1,(longlong)plVar10);
              break;
            }
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
          }
        }
        else {
          if (*(char *)((longlong)plVar11 + 0x1c) == '\0') {
            *(undefined1 *)((longlong)plVar11 + 0x1c) = 1;
            *(undefined1 *)((longlong)plVar10 + 0x1c) = 0;
            FUN_140a5d460((longlong)param_1,plVar10);
            plVar11 = (longlong *)*plVar10;
          }
          if (*(char *)((longlong)plVar11 + 0x1d) == '\0') {
            if ((*(char *)(plVar11[2] + 0x1c) != '\x01') || (*(char *)(*plVar11 + 0x1c) != '\x01')) {
              if (*(char *)(*plVar11 + 0x1c) == '\x01') {
                *(undefined1 *)(plVar11[2] + 0x1c) = 1;
                *(undefined1 *)((longlong)plVar11 + 0x1c) = 0;
                FUN_140a5d400((longlong)param_1,(longlong)plVar11);
                plVar11 = (longlong *)*plVar10;
              }
              *(undefined1 *)((longlong)plVar11 + 0x1c) = *(undefined1 *)((longlong)plVar10 + 0x1c);
              *(undefined1 *)((longlong)plVar10 + 0x1c) = 1;
              *(undefined1 *)(*plVar11 + 0x1c) = 1;
              FUN_140a5d460((longlong)param_1,plVar10);
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




undefined8 * FUN_140a5f350(undefined8 *param_1)

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




void FUN_140a5f3a0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_140a5e710(param_1,param_2,param_3);
  return;
}




longlong FUN_140a5f3d0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar1 = param_3 - param_2;
    lVar2 = param_2;
    do {
      lVar3 = lVar2 + -0x14;
      *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar2 + -0x14);
      *(undefined8 *)(lVar1 + 8 + lVar3) = *(undefined8 *)(lVar2 + -0xc);
      *(undefined4 *)(lVar1 + 0x10 + lVar3) = *(undefined4 *)(lVar2 + -4);
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x14) * -0x14;
}




void FUN_140a5f4a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140a5da80(param_1,param_2,param_3);
  return;
}




void FUN_140a5f4c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_140a5dfb0(param_1 + 0xf8);
  }
  return;
}




void FUN_140a5f4e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_140a5dfb0(param_1 + 0x178);
  }
  return;
}




void FUN_140a5f540(undefined8 *param_1)

{
  FUN_140a5dfb0((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a5f570(undefined8 *param_1)

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




undefined8 * FUN_140a5f5d0(undefined8 *param_1)

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




void FUN_140a5f630(undefined8 *param_1)

{
  FUN_140a5eca0((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a5f660(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140a5f680(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140a755e8);
  }
  plVar5 = FUN_140a5e240(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140a5f9c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140a5fa10(undefined8 *param_1)

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




longlong FUN_140a5fa60(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_140a5e710(param_2,param_3,param_4);
  return (longlong)param_2 + param_3 * 0x14;
}




undefined8 * FUN_140a5fab0(undefined8 *param_1,undefined8 *param_2)

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




longlong * FUN_140a5fb00(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140a5eb40((longlong)param_1);
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
    FUN_140a5ef90(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140a5fcc0(undefined8 *param_1)

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




void FUN_140a5fd70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_140a5da80(param_1,param_2,param_3);
  return;
}




longlong * FUN_140a5fd90(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140a5feed:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140a5ff1c;
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
      goto LAB_140a5feed;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140a5f680(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140a5ff1c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140a5ff40(undefined8 *param_1)

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




void FUN_140a5ffa0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  ulonglong uStack_10;
  
  uVar2 = param_1[6];
  if (uVar2 + param_1[7] < uVar2) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  local_18 = plVar1;
  uStack_10 = uVar2;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar3;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar2 = uVar2 + param_2;
  if (uVar2 <= (ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar2) goto LAB_140a60028;
  }
  _invalid_parameter_noinfo();
LAB_140a60028:
  uStack_10 = uVar2;
  FUN_140a5c020((longlong *)&local_18);
  return;
}




void FUN_140a60060(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  ulonglong uStack_10;
  
  uVar2 = param_1[6];
  if (uVar2 + param_1[7] < uVar2) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  local_18 = plVar1;
  uStack_10 = uVar2;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar3;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar2 = uVar2 + param_2;
  if (uVar2 <= (ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar2) goto LAB_140a600e8;
  }
  _invalid_parameter_noinfo();
LAB_140a600e8:
  uStack_10 = uVar2;
  FUN_140a5c140((longlong *)&local_18);
  return;
}




void FUN_140a60120(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a60140(longlong *param_1)

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
  FUN_140a5fb00(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140a601b0(longlong param_1,ulonglong param_2)

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
    FUN_140a5be60();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0xfffffffffffffff - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30) >> 2;
  _Dst_00 = (void *)FUN_140a5d510(param_1 + 0x10,uVar2 + param_2);
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




void FUN_140a60370(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_140a603a0(longlong param_1,ulonglong param_2)

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
    FUN_140a5bf80();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0xfffffffffffffff - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30) >> 2;
  _Dst_00 = (void *)FUN_140a5d620(param_1 + 0x10,uVar2 + param_2);
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




undefined8 * FUN_140a60560(undefined8 *param_1)

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




void FUN_140a605b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_140a5da80(param_2,param_3,param_4);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140a605f0(longlong param_1,ushort param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong extraout_RAX;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_498 [32];
  uint local_468 [2];
  longlong local_460 [3];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_140a775b0 ^ (ulonglong)auStack_498;
  if ((param_2 < 0x20) || ((99 < param_2 && (param_2 < 0x6c)))) {
    cVar4 = FUN_140a51530(*(longlong *)(param_1 + 0x10));
    if (cVar4 == '\0') {
      if ((ushort)(param_2 - 100) < 8) {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                           (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),
                            *(undefined8 *)(s___AVlength_error_std___140a77090 + (ulonglong)param_2 * 8));
      }
      else if (param_2 < 0x20) {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                           (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),(&PTR_s__TYPE_MAGIC_140a77240)[param_2]);
      }
      else {
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                           (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),"Error AddTempJailActor reason!");
      }
    }
    else {
      local_468[0] = (uint)param_2;
      plVar6 = FUN_140a5fd90((longlong *)(param_1 + 0xb8),local_460,local_468);
      if (1 < *(ulonglong *)(param_1 + 0xf0)) {
        memset(local_448,0,0x400);
        plVar6 = *(longlong **)(param_1 + 0xb8);
        plVar9 = (longlong *)**(undefined8 **)(param_1 + 0xe8);
        iVar12 = 0;
        while( true ) {
          plVar2 = *(longlong **)(param_1 + 0xe8);
          if ((plVar6 == (longlong *)0x0) || (plVar6 != *(longlong **)(param_1 + 0xb8))) {
            _invalid_parameter_noinfo();
          }
          if (plVar9 == plVar2) break;
          if (plVar6 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar6;
          }
          if (plVar9 == *(longlong **)(lVar11 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          uVar1 = *(uint *)(plVar9 + 3);
          uVar7 = uVar1 - 100;
          if (uVar7 < 8) {
            uVar8 = 0xffffffffffffffff;
            lVar11 = (longlong)iVar12;
            pcVar10 = (&PTR_s__TYPE_TEMPJAIL_MSGCOUNT_140a773b0)[uVar7];
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            if (0x400 < ~uVar8 + lVar11) break;
            tq::SafeCopy(local_448 + lVar11,(&PTR_s__TYPE_TEMPJAIL_MSGCOUNT_140a773b0)[uVar7],0x401 - lVar11);
            lVar11 = -1;
            pcVar10 = (&PTR_s__TYPE_TEMPJAIL_MSGCOUNT_140a773b0)[uVar7];
            do {
              if (lVar11 == 0) break;
              lVar11 = lVar11 + -1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            iVar12 = iVar12 + (~(uint)lVar11 - 1);
          }
          else if (uVar1 < 0x20) {
            uVar8 = 0xffffffffffffffff;
            lVar11 = (longlong)iVar12;
            pcVar10 = (&PTR_s__TYPE_MAGIC_140a77240)[uVar1];
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            if (0x400 < ~uVar8 + lVar11) break;
            tq::SafeCopy(local_448 + lVar11,(&PTR_s__TYPE_MAGIC_140a77240)[uVar1],0x401 - lVar11);
            lVar11 = -1;
            pcVar10 = (&PTR_s__TYPE_MAGIC_140a77240)[uVar1];
            do {
              if (lVar11 == 0) break;
              lVar11 = lVar11 + -1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            iVar12 = iVar12 + (~(uint)lVar11 - 1);
          }
          else {
            uVar8 = 0xffffffffffffffff;
            pcVar10 = "Error AddTempJailActor imposible reason!";
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            lVar11 = (longlong)iVar12;
            if (0x400 < ~uVar8 + lVar11) break;
            tq::SafeCopy(local_448 + lVar11,"Error AddTempJailActor imposible reason!",0x401 - lVar11);
            lVar11 = -1;
            pcVar10 = "Error AddTempJailActor imposible reason!";
            do {
              if (lVar11 == 0) break;
              lVar11 = lVar11 + -1;
              cVar4 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar4 != '\0');
            iVar12 = iVar12 + (~(uint)lVar11 - 1);
          }
          if (plVar6 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar9 + 0x1d) == '\0') {
            plVar2 = (longlong *)plVar9[2];
            if (*(char *)((longlong)plVar2 + 0x1d) == '\0') {
              cVar4 = *(char *)(*plVar2 + 0x1d);
              plVar9 = plVar2;
              plVar2 = (longlong *)*plVar2;
              while (cVar4 == '\0') {
                cVar4 = *(char *)(*plVar2 + 0x1d);
                plVar9 = plVar2;
                plVar2 = (longlong *)*plVar2;
              }
            }
            else {
              cVar4 = *(char *)(plVar9[1] + 0x1d);
              plVar3 = (longlong *)plVar9[1];
              plVar2 = plVar9;
              while ((plVar9 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar9[2]))) {
                cVar4 = *(char *)(plVar9[1] + 0x1d);
                plVar3 = (longlong *)plVar9[1];
                plVar2 = plVar9;
              }
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
        }
        FUN_140a5eb40(param_1 + 0xb8);
        uVar1 = *(uint *)(param_1 + 0x18);
        uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),uVar1);
        plVar6 = (longlong *)FUN_140a56140(*(longlong *)(param_1 + 0x10),uVar1,uVar5,local_448,'\0');
      }
    }
    uVar8 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
  else {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar8 = extraout_RAX & 0xffffffffffffff00;
  }
  return uVar8;
}




void FUN_140a609d0(longlong *param_1)

{
  FUN_140a60140(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a60a00(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x30) + (char)*(longlong *)(param_1 + 0x38) & 3U) == 0) &&
     (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 4U >> 2)) {
    FUN_140a601b0(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  uVar4 = uVar3 >> 2;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
    uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar3 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}




void FUN_140a60ab0(undefined8 *param_1)

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




void FUN_140a60af0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x30) + (char)*(longlong *)(param_1 + 0x38) & 3U) == 0) &&
     (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 4U >> 2)) {
    FUN_140a603a0(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  uVar4 = uVar3 >> 2;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
    uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar3 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}




undefined8 * FUN_140a60ba0(undefined8 *param_1)

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
  lVar2 = FUN_140a5e470();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140a60c20(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x14;
  }
  if (param_3 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    lVar2 = ((longlong)puVar4 - lVar2) / 0x14;
    if (0xcccccccccccccccU - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140a5bee0();
    }
    uVar1 = lVar2 + param_3;
    if (uVar6 < uVar1) {
      if (0xccccccccccccccc - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar4 = (undefined8 *)FUN_140a5d5a0(param_1 + 0x10,uVar6);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x14;
      FUN_140a5e710((undefined8 *)((longlong)puVar4 + lVar2 * 0x14),param_3,param_4);
      FUN_140a5da80(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar4);
      FUN_140a5da80(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),(undefined8 *)((longlong)puVar4 + (lVar2 + param_3) * 0x14));
      pvVar3 = *(void **)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      *(ulonglong *)(param_1 + 0x28) = (longlong)puVar4 + uVar6 * 0x14;
      *(ulonglong *)(param_1 + 0x20) = (longlong)puVar4 + (param_3 + (lVar2 - (longlong)pvVar3) / 0x14) * 0x14;
      *(undefined8 **)(param_1 + 0x18) = puVar4;
    }
    else if ((ulonglong)(((longlong)puVar4 - *(longlong *)(param_2 + 8)) / 0x14) < param_3) {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = *(undefined4 *)(param_4 + 2);
      FUN_140a5da80(*(undefined8 **)(param_2 + 8),puVar4,(undefined8 *)((longlong)*(undefined8 **)(param_2 + 8) + param_3 * 0x14));
      FUN_140a5e710(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x14,&local_48);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x14;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (puVar4 = *(undefined8 **)(param_2 + 8); puVar4 != (undefined8 *)(lVar2 + param_3 * -0x14); puVar4 = (undefined8 *)((longlong)puVar4 + 0x14)) {
        *puVar4 = local_48;
        puVar4[1] = local_40;
        *(undefined4 *)(puVar4 + 2) = local_38;
      }
    }
    else {
      local_48 = *param_4;
      local_40 = param_4[1];
      local_38 = *(undefined4 *)(param_4 + 2);
      puVar7 = (undefined8 *)((longlong)puVar4 + param_3 * -0x14);
      puVar5 = FUN_140a5da80(puVar7,puVar4,puVar4);
      *(undefined8 **)(param_1 + 0x20) = puVar5;
      FUN_140a5f3d0(*(longlong *)(param_2 + 8),(longlong)puVar7,(longlong)puVar4);
      puVar5 = *(undefined8 **)(param_2 + 8);
      puVar4 = (undefined8 *)((longlong)puVar5 + param_3 * 0x14);
      for (; puVar5 != puVar4; puVar5 = (undefined8 *)((longlong)puVar5 + 0x14)) {
        *puVar5 = local_48;
        puVar5[1] = local_40;
        *(undefined4 *)(puVar5 + 2) = local_38;
      }
    }
  }
  return;
}




void FUN_140a60fc0(longlong *param_1)

{
  FUN_140a60140(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140a60ff0(undefined8 *param_1)

{
  *param_1 = anticheat::CUserAntiCheat::vftable;
  FUN_140a5dfb0((longlong)(param_1 + 0x37));
  operator_delete((void *)param_1[0x37]);
  FUN_140a5dfb0((longlong)(param_1 + 0x2f));
  operator_delete((void *)param_1[0x2f]);
  FUN_140a5dfb0((longlong)(param_1 + 0x27));
  operator_delete((void *)param_1[0x27]);
  FUN_140a5dfb0((longlong)(param_1 + 0x1f));
  operator_delete((void *)param_1[0x1f]);
  FUN_140a60140(param_1 + 0x17);
  operator_delete((void *)param_1[0x17]);
  FUN_140a5dfb0((longlong)(param_1 + 4));
  operator_delete((void *)param_1[4]);
  return;
}




void FUN_140a610d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return;
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (iVar3 < 0x1389) {
    if (0x1f < param_2) {
      log_InlineLogERROR(&DAT_140a6a758);
      return;
    }
    uVar4 = FUN_140a5b430(param_1,param_2);
    if ((char)uVar4 == '\0') {
      log_InlineLogERROR(&DAT_140a6a758);
      return;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((0xf < iVar3) && ((*(uint *)(param_1 + 0xa8) >> (param_2 & 0x1f) & 1) != 0)) {
      cVar2 = FUN_140a51530(*(longlong *)(param_1 + 0x10));
      if (cVar2 != '\0') {
        FUN_140a605f0(param_1,(ushort)param_2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a6120a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),"cheat");
      return;
    }
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x18));
    (**(code **)*plVar1)(plVar1,*(undefined4 *)(param_1 + 0x18));
    log_InlineLogCHEAT("need kick: user[%s], account[%u], type[%s]");
  }
  return;
}




undefined1 FUN_140a61280(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  void *pvVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *local_d8 [4];
  void *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong *local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong *local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar4 = 0;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    if (iVar6 < 0x1389) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
      uVar4 = 0;
      if (cVar5 != '\0') {
        plVar1 = (longlong *)(param_1 + 0x20);
        FUN_140a60a00((longlong)plVar1,(undefined4 *)&stack0x00000028);
        if (8 < *(ulonglong *)(param_1 + 0x58)) {
          FUN_140a5de60((longlong)plVar1);
        }
        if (*(longlong *)(param_1 + 0x58) == 8) {
          local_98 = operator_new(8);
          local_d8[0] = (ulonglong *)0x0;
          if (local_98 != (ulonglong *)0x0) {
            *local_98 = (ulonglong)local_d8;
            local_d8[0] = local_98;
          }
          local_b8 = (void *)0x0;
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          lVar16 = 1;
          lVar13 = 1;
          lVar17 = 7;
          do {
            piVar7 = (int *)FUN_140a5ffa0(plVar1,lVar13 + -1);
            piVar8 = (int *)FUN_140a5ffa0(plVar1,lVar13);
            iVar6 = *piVar8;
            iVar2 = *piVar7;
            if ((((int)local_a8 + (int)local_a0 & 3U) == 0) && (local_b0 <= local_a0 + 4U >> 2)) {
              FUN_140a603a0((longlong)local_d8,1);
            }
            uVar12 = local_a0 + local_a8;
            uVar14 = uVar12 >> 2;
            if (local_b0 <= uVar14) {
              uVar14 = uVar14 - local_b0;
            }
            if (*(longlong *)((longlong)local_b8 + uVar14 * 8) == 0) {
              pvVar9 = operator_new(0x10);
              *(void **)((longlong)local_b8 + uVar14 * 8) = pvVar9;
            }
            piVar7 = (int *)(*(longlong *)((longlong)local_b8 + uVar14 * 8) + (ulonglong)((uint)uVar12 & 3) * 4);
            if (piVar7 != (int *)0x0) {
              *piVar7 = iVar6 - iVar2;
            }
            local_a0 = local_a0 + 1;
            lVar13 = lVar13 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar14 = 0;
          lVar13 = 6;
          uVar12 = uVar14;
          do {
            uVar15 = local_a8;
            if (local_a0 + local_a8 < local_a8) {
              _invalid_parameter_noinfo();
            }
            puVar3 = local_d8[0];
            local_98 = local_d8[0];
            uStack_90 = uVar15;
            if (local_d8[0] == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar10 = uVar14;
            }
            else {
              uVar10 = *local_d8[0];
            }
            if ((ulonglong)(*(longlong *)(uVar10 + 0x38) + *(longlong *)(uVar10 + 0x30)) < uVar15) {
LAB_140a614d9:
              _invalid_parameter_noinfo();
            }
            else {
              uVar10 = uVar14;
              if (puVar3 != (ulonglong *)0x0) {
                uVar10 = *puVar3;
              }
              if (uVar15 < *(ulonglong *)(uVar10 + 0x30)) goto LAB_140a614d9;
            }
            local_68 = local_98;
            uStack_60 = uStack_90;
            piVar7 = (int *)FUN_140a5c140((longlong *)&local_68);
            uVar15 = local_a8;
            if (local_a0 + local_a8 < local_a8) {
              _invalid_parameter_noinfo();
            }
            puVar3 = local_d8[0];
            local_78 = local_d8[0];
            uStack_70 = uVar15;
            local_78._0_4_ = SUB84(local_d8[0],0);
            local_78._4_4_ = (undefined4)((ulonglong)local_d8[0] >> 0x20);
            local_88 = (undefined4)local_78;
            uStack_84 = local_78._4_4_;
            uStack_80 = uVar15;
            local_78 = puVar3;
            if (local_d8[0] == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar10 = uVar14;
            }
            else {
              uVar10 = *local_d8[0];
            }
            uVar15 = uVar15 + lVar16;
            if ((ulonglong)(*(longlong *)(uVar10 + 0x38) + *(longlong *)(uVar10 + 0x30)) < uVar15) {
LAB_140a61577:
              _invalid_parameter_noinfo();
            }
            else {
              uVar10 = uVar14;
              if (puVar3 != (ulonglong *)0x0) {
                uVar10 = *puVar3;
              }
              if (uVar15 < *(ulonglong *)(uVar10 + 0x30)) goto LAB_140a61577;
            }
            local_58 = CONCAT44(uStack_84,local_88);
            uStack_80 = uVar15;
            uStack_50 = uVar15;
            piVar8 = (int *)FUN_140a5c140(&local_58);
            uVar11 = *piVar7 - *piVar8 >> 0x1f;
            if ((int)((*piVar7 - *piVar8 ^ uVar11) - uVar11) < 0x15) {
              uVar12 = (ulonglong)((int)uVar12 + 1);
            }
            lVar16 = lVar16 + 1;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          if ((int)uVar12 < 6) {
            pvVar9 = local_b8;
            uVar12 = local_b0;
            if (local_a0 != 0) {
              do {
                if (local_a0 == 0) goto joined_r0x000140a61674;
                local_a0 = local_a0 + -1;
              } while (local_a0 != 0);
              local_a8 = 0;
            }
joined_r0x000140a61674:
            while (uVar12 != 0) {
              uVar12 = uVar12 - 1;
              if (*(longlong *)((longlong)pvVar9 + uVar12 * 8) != 0) {
                operator_delete(*(void **)((longlong)pvVar9 + uVar12 * 8));
                pvVar9 = local_b8;
              }
            }
            if (pvVar9 != (void *)0x0) {
              operator_delete(pvVar9);
            }
            local_b0 = 0;
            local_b8 = (void *)0x0;
            operator_delete(local_d8[0]);
            if ((param_3 == 0) && (param_4 == 0)) {
              uVar4 = 1;
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            pvVar9 = local_b8;
            uVar12 = local_b0;
            if (local_a0 != 0) {
              do {
                if (local_a0 == 0) goto joined_r0x000140a615fd;
                local_a0 = local_a0 + -1;
              } while (local_a0 != 0);
              local_a8 = 0;
            }
joined_r0x000140a615fd:
            while (uVar12 != 0) {
              uVar12 = uVar12 - 1;
              if (*(longlong *)((longlong)pvVar9 + uVar12 * 8) != 0) {
                operator_delete(*(void **)((longlong)pvVar9 + uVar12 * 8));
                pvVar9 = local_b8;
              }
            }
            if (pvVar9 != (void *)0x0) {
              operator_delete(pvVar9);
            }
            local_b0 = 0;
            local_b8 = (void *)0x0;
            operator_delete(local_d8[0]);
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}




ulonglong FUN_140a61700(longlong param_1,undefined4 param_2,ushort param_3)

{
  char cVar1;
  ulong uVar2;
  ulonglong extraout_RAX;
  undefined7 extraout_var;
  ulonglong uVar3;
  char *pcVar4;
  
  if ((0x1f < param_3) && ((param_3 < 100 || (0x6b < param_3)))) {
                    /* WARNING: Could not recover jumptable at 0x000140a61748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CUserAntiCheat::StartKickOutTimer, kickout user[%u] error, invalid reason(%u)");
    return extraout_RAX;
  }
  cVar1 = FUN_140a51530(*(longlong *)(param_1 + 0x10));
  uVar3 = CONCAT71(extraout_var,cVar1);
  if (cVar1 != '\0') {
    uVar3 = FUN_140a605f0(param_1,param_3);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    if (param_3 < 0x20) {
      pcVar4 = (&PTR_s__TYPE_MAGIC_140a77240)[param_3];
    }
    else if ((ushort)(param_3 - 100) < 8) {
      pcVar4 = *(char **)(s___AVlength_error_std___140a77090 + (ulonglong)param_3 * 8);
    }
    else {
      pcVar4 = "Error StartKickOutTimer reason!";
    }
    *(char **)(param_1 + 0x70) = pcVar4;
    *(undefined4 *)(param_1 + 0x68) = param_2;
    uVar2 = tq::TimeGet(0);
    uVar3 = (ulonglong)uVar2 * 0x10624dd3 & 0xffffffff;
    *(uint *)(param_1 + 0x6c) = uVar2 / 1000;
  }
  return uVar3;
}




/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_140a617f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758,"IF_NOT","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\useranticheat.cpp");
    return;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if (cVar2 == '\0') {
      if (0x1f < param_2) {
        log_InlineLogERROR(&DAT_140a6a758,"CHECK","nType < 32","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\useranticheat.cpp");
        return;
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
      if (iVar3 < 0x1389) {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          log_InlineLogERROR(&DAT_140a6a758,"CHECK","m_pMgr","f:\\version\\cqserver-78.0.11-1204\\modules\\anticheat\\src\\useranticheat.cpp");
          return;
        }
        plVar1 = *(longlong **)(param_1 + 8);
        uVar4 = (**(code **)*plVar1)(plVar1,*(undefined4 *)(param_1 + 0x18));
        uVar5 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)(param_1 + 0x18));
        tq::MyLogSave("gmlog/cheater","Cheater found. Account[%u], User:[%s][%u], cheat type:[%s]",uVar5 & 0xffffffff,uVar4);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))();
        if (iVar3 == 1) {
          iVar3 = tq::RandGet(0x78);
          FUN_140a61700(param_1,iVar3 + 0xb4,(ushort)param_2);
        }
        else if (iVar3 == 2) {
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))();
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
            if (cVar2 == '\0') {
              FUN_140a51500(*(longlong *)(param_1 + 0x10),*(uint *)(param_1 + 0x18));
              return;
            }
          }
        }
      }
    }
  }
  return;
}




undefined1 FUN_140a61a00(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = param_2;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((((((cVar4 == '\0') &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0xd), cVar4 == '\0')) &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x12), cVar4 == '\0')) &&
         ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x9f), cVar4 == '\0' &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x31), cVar4 == '\0')))) &&
        ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x6c), cVar4 == '\0' &&
         ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x92), cVar4 == '\0' &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x96), cVar4 == '\0')))))) &&
       ((uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), uVar5 < 0x7e4 ||
        (uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), 0x7e8 < uVar5)))) {
      if (*(ulonglong *)(param_1 + 0x130) < 10) {
        FUN_140a60a00(param_1 + 0xf8,local_res10);
        uVar3 = 1;
      }
      else {
        if (*(longlong *)(param_1 + 0x130) != 0) {
          *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
          if ((ulonglong)(*(longlong *)(param_1 + 0x120) << 2) <= *(ulonglong *)(param_1 + 0x128)) {
            *(undefined8 *)(param_1 + 0x128) = 0;
          }
          plVar1 = (longlong *)(param_1 + 0x130);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            *(undefined8 *)(param_1 + 0x128) = 0;
          }
        }
        uVar3 = 0;
        FUN_140a60a00(param_1 + 0xf8,local_res10);
        uVar8 = 0;
        iVar7 = 9;
        while (0 < iVar7) {
          piVar6 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0xf8),(longlong)(iVar7 + -1));
          iVar2 = *piVar6;
          piVar6 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0xf8),(longlong)iVar7);
          uVar8 = (ulonglong)(uint)(((int)uVar8 - iVar2) + *piVar6);
          iVar7 = iVar7 + -1;
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        if ((cVar4 != '\0') || (0x282 < (uint)(uVar8 / 9))) {
          uVar3 = 1;
        }
      }
    }
    else {
      FUN_140a5f4c0(param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}




undefined1 FUN_140a61cb0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = param_2;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((((((cVar4 == '\0') &&
           (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0xd), cVar4 == '\0')) &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x12), cVar4 == '\0')) &&
         ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x9f), cVar4 == '\0' &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x31), cVar4 == '\0')))) &&
        ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x6c), cVar4 == '\0' &&
         ((cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x92), cVar4 == '\0' &&
          (cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x96), cVar4 == '\0')))))) &&
       ((uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), uVar5 < 0x7e4 ||
        (uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), 0x7e8 < uVar5)))) {
      if (*(ulonglong *)(param_1 + 0x170) < 4) {
        FUN_140a60a00(param_1 + 0x138,local_res10);
        uVar3 = 1;
      }
      else {
        if (*(longlong *)(param_1 + 0x170) != 0) {
          *(longlong *)(param_1 + 0x168) = *(longlong *)(param_1 + 0x168) + 1;
          if ((ulonglong)(*(longlong *)(param_1 + 0x160) << 2) <= *(ulonglong *)(param_1 + 0x168)) {
            *(undefined8 *)(param_1 + 0x168) = 0;
          }
          plVar1 = (longlong *)(param_1 + 0x170);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) {
            *(undefined8 *)(param_1 + 0x168) = 0;
          }
        }
        uVar3 = 0;
        FUN_140a60a00(param_1 + 0x138,local_res10);
        uVar8 = 0;
        iVar7 = 3;
        while (0 < iVar7) {
          piVar6 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x138),(longlong)(iVar7 + -1));
          iVar2 = *piVar6;
          piVar6 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x138),(longlong)iVar7);
          uVar8 = (ulonglong)(uint)(((int)uVar8 - iVar2) + *piVar6);
          iVar7 = iVar7 + -1;
        }
        cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        if ((cVar4 != '\0') || (0xd7 < (uint)(uVar8 / 3))) {
          uVar3 = 1;
        }
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_140a5dfb0(param_1 + 0x138);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}




undefined1 FUN_140a61f70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res10 [2];
  
  plVar2 = *(longlong **)(param_1 + 8);
  local_res10[0] = param_2;
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  cVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2,*(undefined4 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0xd);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x12);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x9f);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x31);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x6c);
            if (cVar3 == '\0') {
              cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x92);
              if (cVar3 == '\0') {
                cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x96);
                if (cVar3 == '\0') {
                  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
                  if (0x7e3 < uVar4) {
                    uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
                    if (uVar4 < 0x7e9) goto LAB_140a621be;
                  }
                  if (*(ulonglong *)(param_1 + 0x1b0) < 6) {
                    FUN_140a60a00(param_1 + 0x178,local_res10);
                    return 1;
                  }
                  FUN_140a5de60(param_1 + 0x178);
                  FUN_140a60a00(param_1 + 0x178,local_res10);
                  uVar6 = 0;
                  lVar7 = 5;
                  uVar4 = 0;
                  lVar8 = 5;
                  do {
                    piVar5 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x178),lVar7 + -1);
                    iVar1 = *piVar5;
                    piVar5 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x178),lVar7);
                    lVar7 = lVar7 + -1;
                    uVar4 = (uVar4 - iVar1) + *piVar5;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
                  if ((cVar3 != '\0') || (0xba < uVar4 / 5)) {
                    uVar6 = 1;
                  }
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140a621be:
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_140a5dfb0(param_1 + 0x178);
  }
  return 1;
}




undefined1 FUN_140a621e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res10 [2];
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_res10[0] = param_2;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  uVar9 = 0x98;
  cVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,*(undefined4 *)(param_1 + 0x18));
  if ((((((cVar2 != '\0') ||
         (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0xd), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x12), cVar2 != '\0')) ||
       ((cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x9f), cVar2 != '\0' ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x6c), cVar2 != '\0')))) ||
      ((cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x92), cVar2 != '\0' ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x96), cVar2 != '\0')))) ||
     ((uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), 0x7e3 < uVar4 &&
      (uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18)), uVar4 < 0x7e9)))) {
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      FUN_140a5dfb0(param_1 + 0x1b8);
    }
    return 1;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),0x31);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if (cVar2 == '\0') {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if (0 < iVar6) {
        uVar7 = tq::TimeGet(0);
        iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        if ((int)(uVar7 / 1000 - iVar6) < 6) {
          if (10 < iVar5) goto LAB_140a623eb;
          uVar9 = 0x46;
        }
        else {
          if (*(longlong *)(param_1 + 0x1f0) != 0) {
            FUN_140a5dfb0(param_1 + 0x1b8);
          }
          (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
        }
      }
    }
    else {
      iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
      if ((10 < iVar5) && (0 < iVar6)) {
LAB_140a623eb:
        if (*(longlong *)(param_1 + 0x1f0) != 0) {
          FUN_140a5dfb0(param_1 + 0x1b8);
        }
        return 1;
      }
      uVar9 = 0x46;
    }
  }
  if (*(ulonglong *)(param_1 + 0x1f0) < 6) {
    FUN_140a60a00(param_1 + 0x1b8,local_res10);
    uVar3 = 1;
  }
  else {
    FUN_140a5de60(param_1 + 0x1b8);
    FUN_140a60a00(param_1 + 0x1b8,local_res10);
    uVar3 = 0;
    lVar10 = 5;
    uVar4 = 0;
    lVar11 = 5;
    do {
      piVar8 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x1b8),lVar10 + -1);
      iVar5 = *piVar8;
      piVar8 = (int *)FUN_140a5ffa0((longlong *)(param_1 + 0x1b8),lVar10);
      lVar10 = lVar10 + -1;
      uVar4 = (uVar4 - iVar5) + *piVar8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((cVar2 != '\0') || (uVar9 <= uVar4 / 5)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}




undefined8 * FUN_140a62550(undefined8 *param_1)

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
  lVar2 = FUN_140a5e470();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x1d) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140a625d0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  lVar5 = param_1[4] - uVar1;
  lVar3 = 0;
  lVar6 = lVar5 >> 0x3f;
  lVar4 = lVar3;
  if (lVar5 / 0x14 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) / 0x14;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140a60c20((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar1 = param_1[3];
  if ((ulonglong)param_1[4] < uVar1) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2;
  uStack_20 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar3;
  }
  else {
    lVar6 = *plVar2;
  }
  uVar1 = uVar1 + lVar4 * 0x14;
  if (uVar1 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140a626f4;
  }
  _invalid_parameter_noinfo();
LAB_140a626f4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140a62730(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = anticheat::CUserAntiCheat::vftable;
  plVar5 = (longlong *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  plVar3 = operator_new(8);
  plVar4 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)(param_1 + 4);
    plVar4 = plVar3;
  }
  param_1[4] = plVar4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140a62550(param_1 + 0x17);
  plVar3 = operator_new(8);
  plVar4 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)(param_1 + 0x1f);
    plVar4 = plVar3;
  }
  param_1[0x1f] = plVar4;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  plVar3 = operator_new(8);
  plVar4 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)(param_1 + 0x27);
    plVar4 = plVar3;
  }
  param_1[0x27] = plVar4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  plVar3 = operator_new(8);
  plVar4 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)(param_1 + 0x2f);
    plVar4 = plVar3;
  }
  param_1[0x2f] = plVar4;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  plVar4 = operator_new(8);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)(param_1 + 0x37);
    plVar5 = plVar4;
  }
  param_1[0x37] = plVar5;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x234) = 1;
  FUN_140a5eb40((longlong)(param_1 + 0x17));
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x1e;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x40) = uVar1 / 1000;
  iVar2 = tq::RandGet(600);
  *(int *)((longlong)param_1 + 0x21c) = iVar2 + 600;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x44) = uVar1 / 1000;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x8a;
  *(undefined4 *)(param_1 + 0x46) = 0x5b;
  return param_1;
}




undefined8 * FUN_140a629e0(undefined8 *param_1,uint param_2)

{
  FUN_140a60ff0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140a5cb40(param_1);
  }
  return param_1;
}




undefined8 * FUN_140a62a10(longlong *param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  
  if (param_1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    local_res8 = (undefined8 *)FUN_140a5cae0(0x238);
    if (local_res8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140a62730(local_res8,param_3);
    }
    local_res8 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140a6a758);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140a5b2f0((longlong)puVar1,param_1,param_2);
      if ((char)uVar2 == '\0') {
        log_InlineLogERROR(&DAT_140a6a758);
        FUN_140a51f20(&local_res8);
        puVar1 = (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}




void FUN_140a62b90(longlong *param_1,undefined8 *param_2)

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
    uVar3 = (param_1[5] - (longlong)puVar1) / 0x14;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x14) < uVar3) {
    FUN_140a5e710(puVar2,1,param_2);
    param_1[4] = (longlong)puVar2 + 0x14;
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140a625d0(param_1,local_18,&local_28,param_2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a62c90(void)

{
  FILE *_File;
  size_t sVar1;
  uint uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38 [3];
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_140a775b0 ^ (ulonglong)auStack_68;
  builtin_strncpy(local_20,"verify.dat",0xb);
  _File = fopen(local_20,"rb");
  if (_File == (FILE *)0x0) {
    log_InlineLogERROR("Cannot open verify data file [%s]");
    return;
  }
  uVar2 = 0;
  do {
    while( true ) {
      uVar2 = uVar2 + 1;
      if (1000000 < uVar2) {
        local_48 = 0x52;
        log_InlineLogERROR(&DAT_140a6a758);
        goto LAB_140a62d7c;
      }
      sVar1 = fread(local_38,0x14,1,_File);
      if (sVar1 != 1) break;
      FUN_140a62b90(&DAT_140a77600,local_38);
    }
  } while (sVar1 != 0);
LAB_140a62d7c:
  fclose(_File);
  return;
}




CMsg * FUN_140a62da0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140a62dd0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140a62df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a62df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140a62e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a62e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140a62e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140a62e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140a62e20(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a62e50(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgAction::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x31),0x3d7,true);
  return param_1;
}




void FUN_140a62ed0(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a62f10(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    tq::CMsg::Init(param_1);
    **(undefined2 **)(param_1 + 0x408) = 0x2a;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_8;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
  }
  return param_2 != 0;
}




bool FUN_140a63000(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,char *param_7,undefined4 param_8,
                  undefined4 param_9)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    tq::CMsg::Init(param_1);
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar2;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_9;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    bVar1 = tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_7);
    uVar2 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
    uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    **(short **)(param_1 + 0x408) = (short)uVar3 + 0x29;
  }
  return bVar1;
}




undefined8 FUN_140a63110(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4,undefined2 param_5)

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
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0xc) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




bool FUN_140a631c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    if (bVar1) {
      return *(short *)(param_1 + 10) == 0x271a;
    }
  }
  return false;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a63200(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined7 extraout_var;
  undefined1 auStackY_548 [32];
  CMsg local_4e8 [1072];
  char local_b8;
  undefined1 local_b7 [126];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_140a775b0 ^ (ulonglong)auStackY_548;
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else if (param_4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x408);
    uVar1 = *(ushort *)(lVar3 + 0x18);
    if (uVar1 < 0x19b) {
      if (uVar1 == 0x19a) {
        (**(code **)(*param_3 + 0x60))(param_3,param_2,0x12,*(undefined4 *)(lVar3 + 0xc));
      }
      else {
        switch(uVar1) {
        case 0x5b:
          (**(code **)(*param_3 + 0x110))(param_3,param_2,0x5b);
          break;
        case 0x7f:
        case 0x81:
        case 0x83:
        case 0x85:
        case 0x88:
        case 0x8b:
        case 0x8d:
        case 0x8e:
        case 0x90:
        case 0x96:
          cVar5 = (**(code **)(*param_3 + 0x50))(param_3,param_2);
          if (cVar5 == '\0') {
            (**(code **)(*param_3 + 0x28))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc),0);
            lVar3 = *(longlong *)(param_1 + 0x408);
            uVar2 = *(uint *)(lVar3 + 0xc);
            if (((uVar2 != 0xd) && (uVar2 != 0x10)) && (uVar2 != 10)) {
              if (uVar2 == 0xc) {
                (**(code **)(*param_3 + 0x40))(param_3,param_2,0x3c,*(undefined2 *)(lVar3 + 0xc));
              }
              else if ((uVar2 == 0x17) || (0x17 < uVar2)) {
                lVar4 = *param_3;
                iVar7 = tq::RandGet(0x78);
                (**(code **)(lVar4 + 0x40))(param_3,param_2,iVar7 + 0x3c,*(undefined2 *)(lVar3 + 0xc));
              }
              else {
                local_b8 = '\0';
                memset(local_b7,0,0x7f);
                _snprintf(&local_b8,0x80,&DAT_140a6dbf0);
                local_39 = 0;
                lVar3 = *param_3;
                iVar7 = tq::RandGet(300);
                (**(code **)(lVar3 + 0x38))(param_3,param_2,iVar7 + 0x3c,&local_b8);
              }
            }
          }
          break;
        case 0x8a:
          (**(code **)(*param_3 + 0x110))(param_3,param_2,0x8a);
          break;
        case 0xcd:
          iVar7 = (**(code **)(*param_3 + 0x100))(param_3,param_2);
          if (iVar7 == 0) {
            (**(code **)(*param_3 + 0xf8))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14));
          }
          break;
        case 0xce:
          FUN_140a62e50(local_4e8);
          uVar8 = tq::TimeGet(0);
          bVar6 = FUN_140a63000(local_4e8,param_2,0,0,0,0xce,(char *)0x0,0,uVar8);
          if ((int)CONCAT71(extraout_var,bVar6) != 0) {
            (**(code **)(*param_4 + 0x98))(param_4,param_2,local_4e8);
          }
          FUN_140a62ed0((undefined8 *)local_4e8);
        }
      }
    }
    else if (uVar1 == 0x1a4) {
      (**(code **)(*param_3 + 0x60))(param_3,param_2,0x13,*(undefined4 *)(lVar3 + 0xc));
    }
    else if (uVar1 == 0x1ae) {
      (**(code **)(*param_3 + 0x60))(param_3,param_2,0x15,*(undefined4 *)(lVar3 + 0xc));
    }
  }
  return;
}




undefined8 * FUN_140a635e0(undefined8 *param_1,uint param_2)

{
  *param_1 = anticheat::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a63640(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgFuseCheat::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a63690(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgFuseCheat::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140a636c0(CMsg *param_1,undefined2 param_2,undefined2 param_3,ushort param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar2 = 0;
  }
  else if (param_4 < 0x41) {
    tq::CMsg::Init(param_1);
    uVar4 = (ulonglong)param_4;
    **(short **)(param_1 + 0x408) = (param_4 + 3) * 2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    if (param_4 != 0) {
      lVar3 = 6;
      do {
        iVar1 = tq::RandGet(0xffff);
        uVar4 = uVar4 - 1;
        *(short *)(lVar3 + *(longlong *)(param_1 + 0x408)) = (short)iVar1;
        lVar3 = lVar3 + 2;
      } while (uVar4 != 0);
    }
    uVar2 = 1;
  }
  else {
    log_InlineLogERROR(&DAT_140a6a758);
    uVar2 = 0;
  }
  return uVar2;
}




bool FUN_140a637d0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  return bVar1;
}




undefined8 * FUN_140a63800(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CMsgFuseCheat::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a63850(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgInteract::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a638a0(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgInteract::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a638d0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    if (bVar1) {
      return *(short *)(param_1 + 10) == 0x3fe;
    }
  }
  return false;
}




undefined8 FUN_140a63910(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulong uVar2;
  
  **(undefined2 **)(param_1 + 0x408) = 0x2c;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3fe;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar2;
  uVar2 = tq::TimeGet(0);
  *(ulong *)(*(longlong *)(param_1 + 0x408) + 8) = uVar2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_3;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 0x1c) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a639b0(longlong param_1,undefined4 param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined1 local_a7 [126];
  undefined1 local_29;
  ulonglong local_28;
  
  local_b0 = 0xfffffffffffffffe;
  local_28 = DAT_140a775b0 ^ (ulonglong)auStack_f8;
  local_b8 = param_1;
  if (param_3 == (longlong *)0x0) {
    local_d8 = 0x3e;
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else if (param_4 == 0) {
    local_d8 = 0x3f;
    log_InlineLogERROR(&DAT_140a6a758);
  }
  else {
    switch(*(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18)) {
    case 0x10:
    case 0x13:
    case 0x17:
    case 0x1e:
    case 0x21:
    case 0x22:
    case 0x26:
      cVar4 = (**(code **)(*param_3 + 0x50))(param_3,param_2);
      if (cVar4 == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x408);
        local_c0 = *(undefined4 *)(lVar2 + 0x20);
        local_c8 = *(undefined4 *)(lVar2 + 0x14);
        local_d0 = *(undefined4 *)(lVar2 + 0x10);
        local_d8 = *(undefined4 *)(lVar2 + 8);
        (**(code **)(*param_3 + 0x28))(param_3,param_2,*(undefined4 *)(lVar2 + 0x1c),0);
        lVar2 = *(longlong *)(param_1 + 0x408);
        uVar1 = *(uint *)(lVar2 + 0x1c);
        if (((uVar1 != 0xd) && (uVar1 != 0x10)) && (uVar1 != 10)) {
          if (uVar1 == 0xc) {
            (**(code **)(*param_3 + 0x40))(param_3,param_2,0x3c,*(undefined2 *)(lVar2 + 0x1c));
          }
          else if ((uVar1 == 0x17) || (0x17 < uVar1)) {
            lVar3 = *param_3;
            iVar5 = tq::RandGet(0x78);
            (**(code **)(lVar3 + 0x40))(param_3,param_2,iVar5 + 0x3c,*(undefined2 *)(lVar2 + 0x1c));
          }
          else {
            local_a8 = '\0';
            memset(local_a7,0,0x7f);
            _snprintf(&local_a8,0x80,&DAT_140a6dbf0);
            local_29 = 0;
            lVar2 = *param_3;
            iVar5 = tq::RandGet(300);
            (**(code **)(lVar2 + 0x38))(param_3,param_2,iVar5 + 0x3c,&local_a8);
          }
        }
      }
      break;
    case 0x38:
      (**(code **)(*param_3 + 0x60))(param_3,param_2,0x14,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c));
    }
  }
  return;
}




undefined8 * FUN_140a63c20(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CMsgInteract::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a63c70(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgKickOut::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a63cc0(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgKickOut::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a63cf0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x9d9;
}




void FUN_140a63d20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  if ((int)param_2 != 0) {
    if (param_4 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140a6a758);
      return;
    }
    if (*(longlong *)(param_1 + 0x408) == 0) {
      log_InlineLogERROR(&DAT_140a6a758);
      return;
    }
    (**(code **)(*param_4 + 0x20))(param_4,param_2,*(longlong *)(param_1 + 0x408) + 4);
  }
  return;
}




undefined8 * FUN_140a63db0(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CMsgKickOut::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a63e00(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a63e50(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140a63e80(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_140a63eb0(undefined8 param_1,int param_2,longlong *param_3)

{
  if ((param_2 != 0) && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x18))(param_3);
  }
  return;
}




undefined8 * FUN_140a63ed0(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140a63f20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = anticheat::CMsgVerify::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140a63f70(undefined8 *param_1)

{
  *param_1 = anticheat::CMsgVerify::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140a63fa0(CMsg *param_1,undefined2 param_2,undefined2 param_3)

{
  tq::CMsg::Init(param_1);
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x974;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  return 1;
}




undefined8 FUN_140a64020(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3fb < (ulonglong)*puVar2 + 0x14) {
    log_InlineLogERROR(&DAT_140a6a758);
    return 0;
  }
  *puVar2 = *puVar2 + 0x14;
  *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0xc + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0x14) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 5 + 5) * 4) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0x14) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0x14) = param_5;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 8);
  *piVar1 = *piVar1 + 1;
  return 1;
}




bool FUN_140a640e0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x974;
}




undefined4 FUN_140a64110(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8);
}




undefined8 * FUN_140a64130(undefined8 *param_1,byte param_2)

{
  *param_1 = anticheat::CMsgVerify::vftable;
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
  
  local_res10 = _decode_pointer(DAT_140a77be0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140a77be0);
    local_res18[0] = _decode_pointer(DAT_140a77bd8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140a77be0 = _encode_pointer(local_res10);
    DAT_140a77bd8 = _encode_pointer(local_res18[0]);
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
  if ((_StackCookie == DAT_140a775b0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




undefined8 FUN_140a64474(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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




bool FUN_140a64518(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140a77bd8 = _encode_pointer(puVar1);
  DAT_140a77be0 = DAT_140a77bd8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140a64b90();
    atexit(FUN_140a64bc8);
    atexit((_func_5014 *)&LAB_140a64b84);
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
    if (DAT_140a77630 < 1) {
      return 0;
    }
    DAT_140a77630 = DAT_140a77630 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140a77bc8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140a77bc8;
        pvVar3 = DAT_140a77bc8;
      }
      DAT_140a77bc8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140a645f2;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140a645f2:
    if (DAT_140a77bc0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140a77be0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140a77bd8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140a77be0);
            plVar12 = (longlong *)_decode_pointer(DAT_140a77bd8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140a77bd8 = _encoded_null();
        DAT_140a77be0 = DAT_140a77bd8;
      }
      DAT_140a77bc0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140a77bc8 = (void *)0x0;
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
      bVar13 = DAT_140a77bc8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140a77bc8;
        pvVar3 = DAT_140a77bc8;
      }
      DAT_140a77bc8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140a6471b;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140a6471b:
    if (DAT_140a77bc0 == 0) {
      DAT_140a77bc0 = 1;
      iVar4 = _initterm_e(&DAT_140a6a290,&DAT_140a6a2a0);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140a6a278,&DAT_140a6a288);
      DAT_140a77bc0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140a77bc8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140a77bd0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140a77bd0), BVar5 != 0)) {
      (*DAT_140a77bd0)(param_1,2,param_3);
    }
    DAT_140a77630 = DAT_140a77630 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140a64894) */
/* WARNING: Removing unreachable block (ram,0x000140a6482b) */
/* WARNING: Removing unreachable block (ram,0x000140a648cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140a77630 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140a775c0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140a775c0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140a5a400();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140a5a400();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140a775c0 = 0xffffffff;
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




undefined8 FUN_140a6494c(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140a776e0);
  local_30 = DAT_140a777d8;
  local_38 = RtlLookupFunctionEntry(DAT_140a777d8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140a77778 = local_res8;
    DAT_140a777d8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140a776e0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140a77650 = DAT_140a777d8;
  _DAT_140a77760 = local_res8[0];
  _DAT_140a77640 = 0xc0000409;
  _DAT_140a77644 = 1;
  local_20 = DAT_140a775b0;
  local_18 = DAT_140a775b8;
  DAT_140a776d8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140a6e248);
  if (DAT_140a776d8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140a64b90(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140a6ece8; puVar1 < &DAT_140a6ece8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140a64bc8(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140a6ecf8; puVar1 < &DAT_140a6ecf8; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140a50000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140a50000);
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
  if (DAT_140a775b0 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140a775b0 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140a775b0 == 0x2b992ddfa232) {
      DAT_140a775b0 = 0x2b992ddfa233;
    }
  }
  DAT_140a775b8 = ~DAT_140a775b0;
  return;
}




void Unwind_140a64e20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64e40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64e60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64e80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64ea0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a64ec0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64ee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a64f00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64f20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a64f40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64f60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a64f80(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64fa0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64fc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a64fe0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a65000(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65020(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65040(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a65060(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a650a0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a650c0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a650e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65100(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a65120(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65140(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65160(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a65180(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a651a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a651c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a651e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




undefined * Catch_140a65200(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return &DAT_140a52214;
}




undefined8 Catch_140a65240(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return 0x140a5229f;
}




undefined * Catch_140a65280(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return &DAT_140a522fd;
}




undefined8 Catch_140a652c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pConfigRes) @%s,%d");
  return 0x140a5232a;
}




void Unwind_140a65300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a65320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a65340(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a65360(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65380(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a653a0(void)

{
  FUN_140a51160();
  return;
}




void Catch_140a653c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a653f0(void)

{
  FUN_140a51160();
  return;
}




void Catch_140a65410(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140a65440(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140a65470(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a654a0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a654c0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a654e0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65500(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65520(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65540(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65560(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65580(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a655a0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a655c0(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140a655e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pCheaterList) @%s,%d");
  return &DAT_140a5329a;
}




void Unwind_140a65620(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65640(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65660(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65680(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a656a0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a656c0(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a656e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140a65700(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a65720(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a65740(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a65760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65780(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a657a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a657c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a657e0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140a65820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a65840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a65860(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a65880(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a658a0(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a658c0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a658e0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65900(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65920(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65940(undefined8 param_1,longlong param_2)

{
  FUN_140a63f70((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a65960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a65980(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a659a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140a659c0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a659e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65a00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140a65a20(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140a65a40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a65a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a65a80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140a65aa0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a65ac0(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65ae0(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65b00(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65b20(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65b40(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65b60(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65b80(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65ba0(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65bc0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65be0(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65c00(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65c20(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65c40(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65c60(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65c80(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65ca0(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140a65cc0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pUserAntiCheat) @%s,%d");
  return &DAT_140a55327;
}




undefined8 Catch_140a65d00(void)

{
  log_InlineLogCATCH_ERROR("CAntiCheatMgr::OnUserLogin, idUser:%u @%s,%d");
  return 0x140a553b3;
}




undefined * Catch_140a65d40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pUserAntiCheat) @%s,%d");
  return &DAT_140a5580c;
}




void Unwind_140a65d80(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65da0(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65dc0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65de0(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65e00(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65e20(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a65e40(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65e60(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65e80(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65ea0(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140a65ec0(void)

{
  log_InlineLogCATCH_ERROR("CAntiCheatMgr::OnTimer @%s,%d");
  return 0x140a56bdd;
}




void Unwind_140a65f00(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65f20(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65f40(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65f60(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65f80(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65fa0(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65fc0(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a65fe0(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66000(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66020(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66040(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66060(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66080(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a660a0(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a660c0(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a660e0(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66100(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66120(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66140(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66160(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66180(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a661a0(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a661c0(undefined8 param_1,longlong param_2)

{
  FUN_140a56c00(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a661e0(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66200(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66220(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66240(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66260(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66280(undefined8 param_1,longlong param_2)

{
  FUN_140a56c30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a662a0(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a662c0(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a662e0(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66300(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66320(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66340(undefined8 param_1,longlong param_2)

{
  FUN_140a56d60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140a66360(undefined8 param_1,longlong param_2)

{
  FUN_140a56d90((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_140a66380(undefined8 param_1,longlong param_2)

{
  FUN_140a56c30(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140a663a0(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a663c0(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a663e0(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a66400(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a66420(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a66440(undefined8 param_1,longlong param_2)

{
  FUN_140a56c00(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a66460(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66480(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a664a0(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a664c0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a664e0(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66500(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66520(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66540(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66560(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66580(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a665a0(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a665c0(undefined8 param_1,longlong param_2)

{
  FUN_140a56c00(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a665e0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66600(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66620(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66640(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66660(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66680(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a666a0(undefined8 param_1,longlong param_2)

{
  FUN_140a56c30(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a666c0(undefined8 param_1,longlong param_2)

{
  FUN_140a56d60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140a666e0(undefined8 param_1,longlong param_2)

{
  FUN_140a56d90((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_140a66700(undefined8 param_1,longlong param_2)

{
  FUN_140a56d60((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140a66720(undefined8 param_1,longlong param_2)

{
  FUN_140a56d90((longlong *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_140a66740(undefined8 param_1,longlong param_2)

{
  FUN_140a56c30(*(longlong **)(param_2 + 0x50));
  return;
}




void Unwind_140a66760(undefined8 param_1,longlong param_2)

{
  FUN_140a54de0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140a66780(undefined8 param_1,longlong param_2)

{
  FUN_140a53400(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140a667a0(undefined8 param_1,longlong param_2)

{
  FUN_140a53040(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140a667c0(undefined8 param_1,longlong param_2)

{
  FUN_140a52b40(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140a667e0(undefined8 param_1,longlong param_2)

{
  FUN_140a525e0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140a66800(undefined8 param_1,longlong param_2)

{
  FUN_140a56c00(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a66820(undefined8 param_1,longlong param_2)

{
  FUN_140a54dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66840(undefined8 param_1,longlong param_2)

{
  FUN_140a533e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66860(undefined8 param_1,longlong param_2)

{
  FUN_140a53020(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66880(undefined8 param_1,longlong param_2)

{
  FUN_140a52b20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a668a0(undefined8 param_1,longlong param_2)

{
  FUN_140a52550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a668c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_140a668e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAntiCheatMgr) @%s,%d");
  return 0x140a570db;
}




undefined * Catch_140a66920(void)

{
  log_InlineLogCATCH_ERROR("CAntiCheatMgr::CreateNew @%s,%d");
  return &DAT_140a570e4;
}




void Unwind_140a66960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a66980(void)

{
  DAT_140a775d8 = DAT_140a775d8 & 0xfffffffe;
  return;
}




void Unwind_140a669a0(void)

{
  DAT_140a775d8 = DAT_140a775d8 & 0xfffffffe;
  return;
}




void Unwind_140a669c0(void)

{
  DAT_140a775d8 = DAT_140a775d8 & 0xfffffffe;
  return;
}




void Unwind_140a669e0(void)

{
  DAT_140a775d8 = DAT_140a775d8 & 0xfffffffe;
  return;
}




void Unwind_140a66a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a66a20(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a66a40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a66a70(void)

{
  FUN_140a51160();
  return;
}




void Catch_140a66a90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a66ac0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66ae0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66b00(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a66b20(undefined8 param_1,longlong param_2)

{
  FUN_140a57a60(*(undefined8 *)(param_2 + 0x60),*(longlong **)(param_2 + 0x78));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a66b50(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66b70(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66b90(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66bb0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66bd0(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66bf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140a66c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a66c30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a66c50(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a66c70(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66c90(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66cb0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a66cf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a66d10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140a66d30(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a66d50(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66d70(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66d90(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66db0(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66dd0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66df0(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66e10(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66e30(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66e50(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66e70(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66e90(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66eb0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66ed0(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66ef0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a66f10(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66f30(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66f50(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66f70(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66f90(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a66fb0(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66fd0(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a66ff0(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67010(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67030(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67050(undefined8 param_1,longlong param_2)

{
  FUN_140a59360((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140a67070(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a67090(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a670b0(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a670d0(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a670f0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67110(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67130(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a67150(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67170(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67190(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a671b0(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a671d0(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a671f0(undefined8 param_1,longlong param_2)

{
  FUN_140a58e70(*(longlong **)(param_2 + 0x40));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a67220(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a67240(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67260(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67280(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a672a0(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a672c0(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a672e0(undefined8 param_1,longlong param_2)

{
  FUN_140a59360((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140a67300(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a67320(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67340(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67360(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67380(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a673a0(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a673c0(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a673e0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a67400(undefined8 param_1,longlong param_2)

{
  FUN_140a57830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67420(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67440(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67460(undefined8 param_1,longlong param_2)

{
  FUN_140a58150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67480(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a674a0(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a674c0(undefined8 param_1,longlong param_2)

{
  FUN_140a59360((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140a674e0(void)

{
  DAT_140a775d8 = DAT_140a775d8 & 0xfffffffe;
  return;
}




void Unwind_140a67500(undefined8 param_1,longlong param_2)

{
  FUN_140a576f0(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140a67520(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140a67540(undefined8 param_1,longlong param_2)

{
  FUN_140a59360((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140a67560(undefined8 param_1,longlong param_2)

{
  FUN_140a591a0((longlong *)(param_2 + 0x70));
  return;
}




void Unwind_140a67580(undefined8 param_1,longlong param_2)

{
  FUN_140a58ca0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140a675a0(undefined8 param_1,longlong param_2)

{
  FUN_140a58150((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140a675c0(undefined8 param_1,longlong param_2)

{
  FUN_140a57d80((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140a675e0(undefined8 param_1,longlong param_2)

{
  FUN_140a57a40((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140a67600(undefined8 param_1,longlong param_2)

{
  FUN_140a57830((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140a67620(void)

{
  log_InlineLogCATCH_ERROR("CCheaterList::Process @%s,%d");
  return 0x140a59a31;
}




void Unwind_140a67660(void)

{
  DAT_140a775e8 = DAT_140a775e8 & 0xfffffffe;
  return;
}




void Unwind_140a67680(void)

{
  DAT_140a775e8 = DAT_140a775e8 & 0xfffffffe;
  return;
}




void Unwind_140a676a0(void)

{
  DAT_140a775e8 = DAT_140a775e8 & 0xfffffffe;
  return;
}




void Unwind_140a676c0(void)

{
  DAT_140a775e8 = DAT_140a775e8 & 0xfffffffe;
  return;
}




void Unwind_140a676e0(void)

{
  DAT_140a775e8 = DAT_140a775e8 & 0xfffffffe;
  return;
}




void Unwind_140a67700(undefined8 param_1,longlong param_2)

{
  FUN_140a59be0(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_140a67720(undefined8 param_1,longlong param_2)

{
  FUN_140a63e50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a67740(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a67760(undefined8 param_1,longlong param_2)

{
  FUN_140a638a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a67780(undefined8 param_1,longlong param_2)

{
  FUN_140a63cc0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140a677a0(void)

{
  log_InlineLogCATCH_ERROR("anticheat::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140a5a298;
}




void Unwind_140a677f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140a67810(undefined8 param_1,longlong param_2)

{
  FUN_140a59f70(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140a67830(undefined8 param_1,longlong param_2)

{
  FUN_140a59f70(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140a67850(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140a5a4fa;
}




void Unwind_140a67890(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140a678b0(undefined8 param_1,longlong param_2)

{
  FUN_140a59f70(*(undefined8 **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140a678d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140a5a594;
}




undefined8 Catch_140a67910(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pAntiCheatMgr) @%s,%d");
  return 0x140a5b294;
}




void Unwind_140a67950(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140a67970(undefined8 param_1,longlong param_2)

{
  FUN_140a63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140a67990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140a679b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a679d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140a679f0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a67a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140a67a30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a67a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140a67a70(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a67a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140a67ab0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a67ad0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140a67af0(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140a67b10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67b30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67b50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67b70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67b90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67bb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67bd0(void)

{
  DAT_140a775f8 = DAT_140a775f8 & 0xfffffffe;
  return;
}




void Unwind_140a67bf0(void)

{
  DAT_140a775f8 = DAT_140a775f8 & 0xfffffffe;
  return;
}




void Unwind_140a67c10(void)

{
  DAT_140a775f8 = DAT_140a775f8 & 0xfffffffe;
  return;
}




void Unwind_140a67c30(void)

{
  DAT_140a775f8 = DAT_140a775f8 & 0xfffffffe;
  return;
}




undefined * Catch_140a67c50(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pVerifyDataDetector) @%s,%d");
  return &DAT_140a5cdc3;
}




undefined * Catch_140a67c90(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pOffLineDetector) @%s,%d");
  return &DAT_140a5cdf5;
}




undefined * Catch_140a67cd0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pOffLineDetector3) @%s,%d");
  return &DAT_140a5ce27;
}




undefined8 Catch_140a67d10(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pOffLineDetector4) @%s,%d");
  return 0x140a5ce57;
}




void Unwind_140a67d50(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a67d70(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a67d90(undefined8 param_1,longlong param_2)

{
  FUN_140a638a0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a67db0(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a67dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67df0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67e10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67e30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67e50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67e70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140a67e90(void)

{
  FUN_140a51160();
  return;
}




void Catch_140a67eb0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a67ed0(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_140a67ef0(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140a67f10(undefined8 param_1,longlong param_2)

{
  FUN_140a5d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67f30(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67f50(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67f70(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a67f90(void)

{
  FUN_140a51160();
  return;
}




void Catch_140a67fb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a67fe0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68000(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68020(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a68040(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a68070(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68090(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a680b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a680d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_140a680f0(void)

{
  log_InlineLogCATCH_ERROR("CUser KickOutSocket. @%s,%d");
  return 0x140a5eb27;
}




void Unwind_140a68130(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68150(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68170(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68190(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a681b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a681d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a681f0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68210(undefined8 param_1,longlong param_2)

{
  FUN_140a5d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68230(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68250(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68270(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68290(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a682b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a682d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a682f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a68310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140a68330(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140a68350(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68370(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68390(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a683b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a683d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a683f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68410(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68430(undefined8 param_1,longlong param_2)

{
  FUN_140a5d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68450(undefined8 param_1,longlong param_2)

{
  FUN_140a5dee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68470(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68490(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a684b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a684d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a684f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68510(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68530(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68550(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68570(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68590(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a685b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140a685d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a685f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140a68610(undefined8 param_1,longlong param_2)

{
  FUN_140a511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140a68630(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68650(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68670(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68690(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a686b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a686d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a686f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68710(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68730(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68750(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68770(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68790(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a687b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a687d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a687f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68810(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68830(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68850(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68870(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68890(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a688b0(undefined8 param_1,longlong param_2)

{
  FUN_140a60120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a688d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a688f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68910(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68930(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68950(undefined8 param_1,longlong param_2)

{
  FUN_140a5dee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68970(undefined8 param_1,longlong param_2)

{
  FUN_140a5d2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68990(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a689b0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a689d0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a689f0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68a10(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68a30(undefined8 param_1,longlong param_2)

{
  FUN_140a60120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140a68a50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140a68a80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140a68aa0(undefined8 param_1,longlong param_2)

{
  FUN_140a609d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a68ac0(undefined8 param_1,longlong param_2)

{
  FUN_140a60120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68ae0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68b00(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68b20(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68b40(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68b60(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_140a68b80(undefined8 param_1,longlong param_2)

{
  FUN_140a60fc0((longlong *)(*(longlong *)(param_2 + 0x40) + 0xb8));
  return;
}




void Unwind_140a68ba0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xf8));
  return;
}




void Unwind_140a68bc0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x138));
  return;
}




void Unwind_140a68be0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x178));
  return;
}




void Unwind_140a68c00(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1b8));
  return;
}




void Unwind_140a68c20(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68c40(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68c60(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68c80(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68ca0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68cc0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68ce0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68d00(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68d20(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68d40(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68d60(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68d80(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68da0(undefined8 param_1,longlong param_2)

{
  FUN_140a609d0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140a68dc0(undefined8 param_1,longlong param_2)

{
  FUN_140a60120(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68de0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68e00(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68e20(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68e40(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140a68e60(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68e80(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68ea0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a68ec0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a68ee0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68f00(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68f20(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68f40(undefined8 param_1,longlong param_2)

{
  FUN_140a5f630((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68f60(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68f80(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68fa0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68fc0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a68fe0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df20((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140a69000(undefined8 param_1,longlong param_2)

{
  FUN_140a5d300((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140a69020(void)

{
  log_InlineLogCATCH_ERROR("CUser::ChkJumpTimeStamp, %d @%s,%d");
  return &DAT_140a61c86;
}




undefined * Catch_140a69060(void)

{
  log_InlineLogCATCH_ERROR("CUser::ChkMountChargeTimeStamp, dwLastJump:%d @%s,%d");
  return &DAT_140a61f44;
}




void Unwind_140a690a0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a690c0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a690e0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69100(undefined8 param_1,longlong param_2)

{
  FUN_140a5ec30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69120(undefined8 param_1,longlong param_2)

{
  FUN_140a5f660(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69140(undefined8 param_1,longlong param_2)

{
  FUN_140a60120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69160(undefined8 param_1,longlong param_2)

{
  FUN_140a609d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140a69180(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a691a0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a691c0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a691e0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69200(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x20));
  return;
}




void Unwind_140a69220(undefined8 param_1,longlong param_2)

{
  FUN_140a60fc0((longlong *)(*(longlong *)(param_2 + 0x50) + 0xb8));
  return;
}




void Unwind_140a69240(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a69260(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69280(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a692a0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a692c0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0xf8));
  return;
}




void Unwind_140a692e0(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a69300(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69320(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69340(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69360(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x138));
  return;
}




void Unwind_140a69380(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a693a0(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a693c0(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a693e0(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69400(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x178));
  return;
}




void Unwind_140a69420(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a69440(undefined8 param_1,longlong param_2)

{
  FUN_140a5d250(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69460(undefined8 param_1,longlong param_2)

{
  FUN_140a5df00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a69480(undefined8 param_1,longlong param_2)

{
  FUN_140a5ebf0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_140a694a0(undefined8 param_1,longlong param_2)

{
  FUN_140a5f540((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x1b8));
  return;
}




void Unwind_140a694c0(undefined8 param_1,longlong param_2)

{
  FUN_140a5cb40(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140a694e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pAntiCheat) @%s,%d");
  return 0x140a62b78;
}




void Unwind_140a69520(void)

{
  FUN_140a51160();
  return;
}




void Unwind_140a69540(void)

{
  FUN_140a5d2f0(&DAT_140a77600);
  return;
}




void Unwind_140a69560(void)

{
  FUN_140a5dee0(&DAT_140a77600);
  return;
}




void Unwind_140a69580(void)

{
  FUN_140a5dee0(&DAT_140a77600);
  return;
}




void Unwind_140a695a0(void)

{
  FUN_140a5d2f0(&DAT_140a77600);
  return;
}




void Unwind_140a695c0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a695e0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140a69600(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69620(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140a69640(undefined8 param_1,longlong param_2)

{
  FUN_140a62ed0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140a69660(void)

{
  log_InlineLogCATCH_ERROR("booth::CMsgAction::Process [%d] @%s,%d");
  return 0x140a63530;
}




void Unwind_140a696b0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a696d0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140a696f0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69710(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140a69730(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69750(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69770(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140a69790(void)

{
  log_InlineLogCATCH_ERROR("switch(MSGINTERACT) [%d] @%s,%d");
  return 0x140a63bb7;
}




void Unwind_140a697e0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69800(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69820(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140a69840(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69860(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a69880(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140a698a0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a698c0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140a698e0(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140a69900(undefined8 param_1,longlong param_2)

{
  FUN_140a62dd0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140a69918(void)

{
  _unlock(8);
  return;
}




void FUN_140a69931(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a69961(void)

{
  _DAT_140a775c0 = 0xffffffff;
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




bool FUN_140a699f0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a69a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  DAT_140a77600 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &DAT_140a77600;
    DAT_140a77600 = puVar1;
  }
  DAT_140a77618 = 0;
  DAT_140a77620 = 0;
  _DAT_140a77628 = 0;
  atexit(FUN_140a69ac0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a69ac0(void)

{
  if (DAT_140a77618 != (void *)0x0) {
    operator_delete(DAT_140a77618);
  }
  DAT_140a77618 = (void *)0x0;
  DAT_140a77620 = 0;
  _DAT_140a77628 = 0;
  operator_delete(DAT_140a77600);
  return;
}




/* DONE: decompiled=1109 failed=3 total=1206 */
