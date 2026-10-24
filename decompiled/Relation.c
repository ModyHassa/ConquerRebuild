/* Decompiled by Ghidra 12.1.4 | program: Relation.dll
   image base: 141630000 | functions: 1524 */


exception * FUN_141631000(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_141631040(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141631060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141631070(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416310d0(void)

{
  return;
}




exception * FUN_141631170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1416311c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416311f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141631200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141631220(exception *param_1,uint param_2)

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




exception * FUN_141631280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1416312e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014163131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141631330(exception *param_1,uint param_2)

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




exception * FUN_1416313a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141631400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014163143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141631450(exception *param_1,uint param_2)

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




void FUN_1416314d0(void)

{
  log_InlineLogERROR(&DAT_141654618);
  return;
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> * FUN_141631500(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  return param_1;
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_141631530(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  if (param_2 == (char *)0x0) {
    log_InlineLogERROR(&DAT_141654618,"IF_OK",&DAT_141654688,"f:\\version\\cqserver-78.0.11-1204\\include\\basecode\\basetype.h",0xc);
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_1,param_2);
  }
  return param_1;
}




void FUN_1416315d0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001416315e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1);
  return;
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_1416315f0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,param_2);
  return param_1;
}




undefined1 FUN_141631620(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




void FUN_141631670(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014163168f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




undefined8 FUN_1416316a0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
switchD_1416316d0_caseD_0:
    return 0x32;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x140))();
  switch(uVar1) {
  case 0:
    goto switchD_1416316d0_caseD_0;
  case 1:
    return 0x37;
  case 2:
    return 0x3c;
  case 3:
    return 0x46;
  case 4:
    return 0x50;
  case 5:
    return 0x5a;
  case 6:
    return 100;
  default:
    return 0x96;
  }
}




bool FUN_141631740(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141631780(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141631880(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x30) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}




ulonglong FUN_141631920(longlong *param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if ((param_1[1] & 0xffffffff80000000U) != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x20) - *(longlong *)(*param_1 + 0x18);
    in_RAX = -(lVar1 >> 0x3f);
    if ((ulonglong)param_1[2] < (ulonglong)(lVar1 / 0x30)) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_141631970(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x7fffffff) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  *(ulonglong *)(param_1 + 8) = (ulonglong)(*(uint *)(param_1 + 8) & 0x7fffffff) - 1;
  return;
}




longlong FUN_141631a10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141631a32;
  }
  lVar2 = *plVar1;
LAB_141631a32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141631a50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141631a72;
  }
  lVar2 = *plVar1;
LAB_141631a72:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141631a90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141631b80(void)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_70,"invalid vector<T> subscript");
  std::exception::exception((exception *)local_48);
  local_48[0] = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
  local_48[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661b68);
}




exception * FUN_141631bf0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




undefined4 * FUN_141631c60(undefined4 *param_1)

{
  *param_1 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2));
  return param_1;
}




void FUN_141631ca0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
}




exception * FUN_141631d10(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_141631d90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_141631e30(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
}




void FUN_141631eb0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
}




longlong FUN_141631f30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141631f52;
  }
  lVar2 = *plVar1;
LAB_141631f52:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141631f70(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141631fa0;
  }
  else {
LAB_141631fa0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 0x30;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141631fcc;
  }
  _invalid_parameter_noinfo();
LAB_141631fcc:
  param_1[1] = param_1[1] + param_2 * 0x30;
  return param_1;
}




longlong FUN_141631ff0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x30;
}




bool FUN_141632050(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




undefined4 * FUN_141632090(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  return param_1;
}




longlong * FUN_141632140(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141632170;
  }
  else {
LAB_141632170:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141632198;
  }
  _invalid_parameter_noinfo();
LAB_141632198:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




bool FUN_1416321b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141632210(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416322a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_141632310(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141632390(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 * 0x58);
  return;
}




void FUN_141632410(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_1416324b0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined4 * FUN_1416324e0(undefined4 *param_1,undefined4 *param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),param_3);
  return param_1;
}




void * FUN_141632560(void *param_1,longlong param_2,void *param_3)

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




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_141632620(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(param_1,param_2);
  return param_1;
}




void * FUN_141632660(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1416326a0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  }
  return;
}




void * FUN_1416326e0(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_141632770(void *param_1,longlong param_2,void *param_3)

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




exception * FUN_1416327b0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined * FUN_141632810(void)

{
  if ((DAT_141663ab8 & 1) == 0) {
    DAT_141663ab8 = DAT_141663ab8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ab0,"CEnemyMgr");
    atexit((_func_5014 *)&LAB_141652630);
  }
  return &DAT_141663ab0;
}




void FUN_141632870(__uint64 param_1)

{
  if ((DAT_141663ab8 & 1) == 0) {
    DAT_141663ab8 = DAT_141663ab8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ab0,"CEnemyMgr");
    atexit((_func_5014 *)&LAB_141652630);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416328c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141663ab0,param_1);
  return;
}




void FUN_1416328d0(void *param_1)

{
  if ((DAT_141663ab8 & 1) == 0) {
    DAT_141663ab8 = DAT_141663ab8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ab0,"CEnemyMgr");
    atexit((_func_5014 *)&LAB_141652630);
  }
                    /* WARNING: Could not recover jumptable at 0x000141632925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141663ab0,param_1);
  return;
}




void FUN_141632930(void *param_1)

{
  if ((DAT_141663ab8 & 1) == 0) {
    DAT_141663ab8 = DAT_141663ab8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ab0,"CEnemyMgr");
    atexit((_func_5014 *)&LAB_141652630);
  }
                    /* WARNING: Could not recover jumptable at 0x000141632985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141663ab0,param_1);
  return;
}




longlong FUN_141632a00(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x30) <= param_2) {
    log_InlineLogERROR(&DAT_141654618);
  }
  if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18)) / 0x30) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}




ulonglong FUN_141632ab0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = (uint)uVar1 & 0x7fffffff;
  if (uVar3 <= uVar2) {
    return (ulonglong)(uint3)(uVar3 >> 8) << 8;
  }
  if (((uVar1 & 0xffffffff80000000) != 0) && (uVar2 < (ulonglong)((*(longlong *)(*param_1 + 0x20) - *(longlong *)(*param_1 + 0x18)) / 0x30))) {
    param_1[2] = uVar2 + 1;
    return (ulonglong)((ulonglong)param_1[2] < (ulonglong)(*(uint *)(param_1 + 1) & 0x7fffffff));
  }
  param_1[1] = uVar1 - 0x80000000;
  return (ulonglong)((ulonglong)param_1[2] < (ulonglong)((uint)(uVar1 - 0x80000000) & 0x7fffffff));
}




longlong FUN_141632b40(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_141631920(param_1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_141654618);
  }
  uVar2 = param_1[2];
  lVar1 = *param_1;
  if ((ulonglong)((*(longlong *)(lVar1 + 0x20) - *(longlong *)(lVar1 + 0x18)) / 0x30) <= uVar2) {
    _invalid_parameter_noinfo();
  }
  return uVar2 * 0x30 + *(longlong *)(lVar1 + 0x18);
}




longlong FUN_141632bd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141632bf2;
  }
  lVar2 = *plVar1;
LAB_141632bf2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141632c10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141632c32;
  }
  lVar2 = *plVar1;
LAB_141632c32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141632c50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141632cb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141632cc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141632ce2;
  }
  lVar2 = *plVar1;
LAB_141632ce2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141632d00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141632d10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141632d60(longlong param_1,longlong param_2)

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




void FUN_141632dc0(longlong param_1,longlong *param_2)

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




void FUN_141632e30(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141632e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141632ed0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 8);
  return;
}




longlong FUN_141632f40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141632f62;
  }
  lVar2 = *plVar1;
LAB_141632f62:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141632f80(longlong *param_1,longlong param_2)

{
  FUN_141631f70(param_1,param_2);
  return param_1;
}




bool FUN_141632fa0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141633000(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_141633070(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1416330e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 0x58);
  return;
}




void FUN_141633150(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141633182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




undefined8 * FUN_141633200(undefined8 *param_1)

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




void FUN_141633240(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1416332c0(longlong *param_1,longlong param_2)

{
  FUN_141632140(param_1,param_2);
  return param_1;
}




bool FUN_141633310(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




undefined8 * FUN_141633350(undefined8 *param_1)

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

undefined4 * FUN_141633390(undefined4 *param_1,undefined4 param_2,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_28;
  undefined8 local_20;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_18;
  ulonglong local_10;
  
  local_20 = 0xfffffffffffffffe;
  local_10 = DAT_141663a88 ^ (ulonglong)auStack_58;
  local_38 = 0;
  *param_1 = param_2;
  local_28 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2);
  local_30 = param_1;
  local_18 = param_3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_28,param_3);
  local_38 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_3);
  return param_1;
}




void * FUN_141633450(void *param_1,longlong param_2,longlong param_3)

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




undefined4 * FUN_141633490(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  return param_1;
}




void FUN_1416334c0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




undefined4 * FUN_141633500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    param_3 = param_3 + 0xc;
  }
  return param_3;
}




void FUN_141633560(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014163357f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  return;
}




void * FUN_1416335c0(void *param_1,longlong param_2,void *param_3)

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




undefined4 * FUN_141633600(longlong param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x30) {
    param_3[-0xc] = *(undefined4 *)(param_2 + -0x30);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + -10),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + -0x28));
    param_3 = param_3 + -0xc;
  }
  return param_3;
}




longlong FUN_141633660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141633682;
  }
  lVar2 = *plVar1;
LAB_141633682:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1416336a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416336c2;
  }
  lVar2 = *plVar1;
LAB_1416336c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416336e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141633700(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141633720(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141633740(longlong *param_1)

{
  FUN_141632e30(param_1);
  return param_1;
}




undefined8 FUN_141633760(longlong param_1,ulonglong param_2)

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
      FUN_141631ca0();
    }
    lVar1 = FUN_141632ed0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




longlong * FUN_1416337c0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar3 = param_3 * 0x30 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_141633831;
  }
  _invalid_parameter_noinfo();
LAB_141633831:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_141633870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416338b0(longlong *param_1)

{
  FUN_141633150(param_1);
  return param_1;
}




undefined8 FUN_1416338d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_141631e30();
    }
    lVar1 = FUN_141633240(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x30 + lVar1;
  }
  return uVar2;
}




undefined8 * FUN_141633940(undefined8 *param_1)

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




undefined8 * FUN_1416339b0(undefined8 *param_1)

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




undefined8 * FUN_1416339f0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_141633a50(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_141633aba;
  }
  _invalid_parameter_noinfo();
LAB_141633aba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_141633af0(void)

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




longlong * FUN_141633b50(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141632e30(param_1);
  return param_2;
}




undefined8 * FUN_141633b80(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141633be0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141633c40(undefined8 *param_1)

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




void * FUN_141633c90(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141633d00(void *param_1,longlong param_2,longlong param_3)

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




longlong FUN_141633d40(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar1 = param_3 - (longlong)param_1;
    do {
      *(undefined4 *)(lVar1 + (longlong)param_1) = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2) + lVar1),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
      param_1 = param_1 + 0xc;
    } while (param_1 != param_2);
  }
  return (lVar2 / 0x30) * 0x30 + param_3;
}




void FUN_141633dd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_1 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




void FUN_141633e30(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141633e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  return;
}




undefined4 * FUN_141633e90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    }
    param_3 = param_3 + 0xc;
  }
  return param_3;
}




void * FUN_141633f20(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_141633f60(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = param_2;
    do {
      lVar2 = lVar1 + -0x30;
      *(undefined4 *)((param_3 - param_2) + lVar2) = *(undefined4 *)(lVar1 + -0x30);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(lVar1 + -0x28) + (param_3 - param_2)),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(lVar1 + -0x28));
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x30) * -0x30;
}




longlong * FUN_141633ff0(longlong *param_1)

{
  FUN_141632e30(param_1);
  return param_1;
}




void FUN_141634010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141634030(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141634070(longlong *param_1)

{
  FUN_141633150(param_1);
  return param_1;
}




undefined8 * FUN_141634090(undefined8 *param_1)

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




void FUN_1416340f0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141634120(undefined8 *param_1)

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




undefined8 * FUN_141634170(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416341d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141633af0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141634210(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141634270(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416342d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141634320(undefined8 *param_1)

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




void FUN_141634370(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  FUN_141633d40(param_1,param_2,param_3);
  return;
}




void FUN_1416343a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_1 = *param_3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




void FUN_141634430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_141633e90(param_1,param_2,param_3);
  return;
}




void FUN_141634450(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  }
  return;
}




void FUN_1416344b0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
    }
    param_1 = param_1 + 0xc;
  }
  return;
}




void * FUN_141634530(void *param_1,longlong param_2,void *param_3)

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




void FUN_141634570(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141633f60(param_1,param_2,param_3);
  return;
}




void FUN_141634590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_141633e90(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_1416345f0(undefined8 *param_1)

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




void FUN_141634650(undefined8 *param_1)

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




undefined8 * FUN_141634690(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416346e0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141634730(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141634790(undefined8 *param_1,undefined8 *param_2)

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




ulonglong FUN_1416347e0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = param_1[3];
  if ((ulonglong)((longlong)(param_1[4] - uVar3) / 0x30) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_141631b80();
  }
  if ((ulonglong)param_1[4] < uVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar4;
  }
  else {
    lVar2 = *plVar1;
  }
  uVar3 = uVar3 + param_2 * 0x30;
  if (uVar3 <= *(ulonglong *)(lVar2 + 0x20)) {
    lVar2 = lVar4;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar3) goto LAB_141634891;
  }
  _invalid_parameter_noinfo();
LAB_141634891:
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar4 = *plVar1;
  }
  if (*(ulonglong *)(lVar4 + 0x20) <= uVar3) {
    _invalid_parameter_noinfo();
  }
  return uVar3;
}




undefined8 * FUN_1416348d0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141634920(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141634970(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416349c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141634a20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141634a80(undefined8 *param_1)

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




void FUN_141634b00(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_141633e90(param_2,param_3,param_4);
  return;
}




void FUN_141634b40(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8));
  }
  return;
}




void FUN_141634ba0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  FUN_1416344b0(param_1,param_2,param_3);
  return;
}




void * FUN_141634bc0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141634c00(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141633f60(param_1,param_2,param_3);
  return;
}




void FUN_141634c30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_141633e90(param_1,param_2,param_3);
  return;
}




longlong * FUN_141634c50(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x51) == '\0');
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




void FUN_141634d20(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_141631920(param_1);
  if ((char)uVar1 == '\0') {
    log_InlineLogERROR(&DAT_141654618);
  }
  FUN_1416347e0((longlong *)*param_1,param_1[2]);
  return;
}




void FUN_141634d70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141634d90(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_141634eb0(undefined8 *param_1)

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




void FUN_141634f00(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 8));
  }
  return;
}




undefined4 * FUN_141634f60(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  FUN_1416344b0(param_2,param_3,param_4);
  return param_2 + param_3 * 0xc;
}




void FUN_141634fb0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_141631eb0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141633000(param_1 + 0x10,uVar8);
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
      FUN_141634bc0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_141634bc0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141633d00(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




longlong * FUN_141635250(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar1;
  puVar2 = *(undefined4 **)(param_4 + 8);
  if ((puVar2 < (undefined4 *)param_1[3]) || ((undefined4 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined4 *)param_2[1] != puVar2) {
    lVar4 = FUN_141633d40(puVar2,(undefined4 *)param_1[4],param_2[1]);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x30) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 8));
    }
    param_1[4] = lVar4;
  }
  return param_2;
}




void FUN_141635370(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
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
    lVar4 = FUN_141633d40(puVar1,(undefined4 *)param_1[4],(longlong)puVar2);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x30) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 8));
    }
    param_1[4] = lVar4;
  }
  return;
}




void FUN_141635470(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  FUN_141633e90(param_2,param_3,param_4);
  return;
}




longlong FUN_1416354b0(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar7;
  ulonglong uVar8;
  uint local_res10 [2];
  ulonglong *local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  FUN_141634c50((longlong *)(param_1 + 0x10),(longlong *)&local_48,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((local_48 == (ulonglong *)0x0) || (local_48 != *(ulonglong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  uVar1 = local_40;
  if (local_40 == lVar3) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    if (local_48 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar4;
    }
    else {
      uVar6 = *local_48;
    }
    if (local_40 == *(longlong *)(uVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar7 = (ulonglong *)(local_40 + 0x20);
    lVar3 = *(longlong *)(local_40 + 0x40) - *(longlong *)(local_40 + 0x38);
    local_38 = 0;
    lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
    uVar8 = (lVar3 >> 3) - (lVar3 >> 0x3f);
    uVar6 = uVar4;
    local_48 = puVar7;
    local_40 = uVar8;
    do {
      do {
        if (((uint)uVar8 & 0x7fffffff) <= uVar4) {
          return 0;
        }
        if (((uVar8 & 0xffffffff80000000) == 0) || ((ulonglong)((*(longlong *)(uVar1 + 0x40) - *(longlong *)(uVar1 + 0x38)) / 0x30) <= uVar4)) {
          uVar8 = uVar8 - 0x80000000;
          local_40 = uVar8;
        }
        else {
          uVar4 = uVar4 + 1;
          local_38 = uVar4;
        }
        if (((uint)uVar8 & 0x7fffffff) <= uVar4) {
          return 0;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        if (1000000 < uVar5) {
          log_InlineLogERROR(&DAT_141654618);
          return 0;
        }
        uVar2 = FUN_141631920((longlong *)&local_48);
        if ((char)uVar2 == '\0') {
          log_InlineLogERROR(&DAT_141654618);
        }
        uVar2 = FUN_1416347e0((longlong *)puVar7,uVar4);
      } while (uVar2 == 0);
      uVar2 = FUN_141631920((longlong *)&local_48);
      if ((char)uVar2 == '\0') {
        log_InlineLogERROR(&DAT_141654618);
      }
      if ((ulonglong)((*(longlong *)(uVar1 + 0x40) - *(longlong *)(uVar1 + 0x38)) / 0x30) <= uVar4) {
        _invalid_parameter_noinfo();
      }
    } while (*(int *)(*(longlong *)(uVar1 + 0x38) + uVar4 * 0x30) != param_3);
    lVar3 = FUN_141632b40((longlong *)&local_48);
    if (*(ulonglong *)(lVar3 + 0x28) < 0x10) {
      lVar3 = lVar3 + 0x10;
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x10);
    }
  }
  return lVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141635770(longlong param_1,uint param_2)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  char *_Source;
  int iVar8;
  uint uVar9;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  int local_498;
  uint local_494;
  uint local_490 [2];
  longlong *local_488;
  longlong local_480;
  undefined8 local_478;
  undefined8 local_470;
  CMsg local_468 [1040];
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48 [16];
  ulonglong local_38;
  
  local_470 = 0xfffffffffffffffe;
  local_38 = DAT_141663a88 ^ (ulonglong)auStack_4c8;
  local_490[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_4a8 = 0x175;
    log_InlineLogERROR(&DAT_141654618);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    local_4a8 = 0x179;
    log_InlineLogERROR(&DAT_141654618);
    uVar5 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    FUN_141634c50((longlong *)(param_1 + 0x10),(longlong *)&local_488,local_490);
    lVar7 = *(longlong *)(param_1 + 0x40);
    plVar2 = *(longlong **)(param_1 + 0x10);
    if ((local_488 == (longlong *)0x0) || (local_488 != plVar2)) {
      _invalid_parameter_noinfo();
      plVar2 = extraout_RAX_01;
    }
    if (local_480 == lVar7) {
      uVar5 = (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    else {
      if (local_488 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *local_488;
      }
      uVar9 = 0;
      if (local_480 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)(local_480 + 0x20);
      lVar7 = *(longlong *)(local_480 + 0x40) - *(longlong *)(local_480 + 0x38);
      lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
      iVar8 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
      uVar3 = FUN_1416316a0(param_1);
      FUN_1416493a0(local_468);
      uVar4 = FUN_141649450(local_468,param_2);
      if ((int)uVar4 == 0) {
        uVar5 = FUN_1416493f0((undefined8 *)local_468);
        uVar5 = uVar5 & 0xffffffffffffff00;
      }
      else {
        local_480 = (*(longlong *)(local_480 + 0x40) - *(longlong *)(local_480 + 0x38)) / 0x30;
        local_478 = 0;
        local_488 = plVar2;
        if ((int)uVar3 < iVar8) {
          for (iVar8 = iVar8 - (int)uVar3; local_498 = iVar8, 0 < iVar8; iVar8 = iVar8 + -1) {
            FUN_141632ab0((longlong *)&local_488);
          }
        }
        local_494 = 0;
        while (uVar5 = FUN_141632ab0((longlong *)&local_488), (char)uVar5 != '\0') {
          uVar9 = uVar9 + 1;
          local_494 = uVar9;
          if (1000000 < uVar9) {
            local_4a8 = 0x19d;
            log_InlineLogERROR(&DAT_141654618);
            break;
          }
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          local_48[0] = '\0';
          local_48[1] = '\0';
          local_48[2] = '\0';
          local_48[3] = '\0';
          local_48[4] = '\0';
          local_48[5] = '\0';
          local_48[6] = '\0';
          local_48[7] = '\0';
          local_48[8] = '\0';
          local_48[9] = '\0';
          local_48[10] = '\0';
          local_48[0xb] = '\0';
          local_48[0xc] = '\0';
          local_48[0xd] = '\0';
          local_48[0xe] = '\0';
          local_48[0xf] = '\0';
          puVar6 = (undefined4 *)FUN_141632b40((longlong *)&local_488);
          local_54 = *puVar6;
          lVar7 = FUN_141632b40((longlong *)&local_488);
          if (*(ulonglong *)(lVar7 + 0x28) < 0x10) {
            _Source = (char *)(lVar7 + 0x10);
          }
          else {
            _Source = *(char **)(lVar7 + 0x10);
          }
          strncpy(local_48,_Source,0x10);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_54);
          if (cVar1 == '\0') {
            local_50 = 0;
            local_4c = 0;
            local_58 = local_58 & 0xffffff00;
          }
          else {
            local_50 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),local_54);
            local_4c = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),local_54);
            local_58 = CONCAT31(local_58._1_3_,1);
          }
          uVar5 = FUN_1416494b0((longlong)local_468,&local_58);
          if ((char)uVar5 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_468);
            FUN_141649540((longlong)local_468);
            FUN_1416494b0((longlong)local_468,&local_58);
          }
        }
        iVar8 = FUN_141649650((longlong)local_468);
        if (0 < iVar8) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_468);
        }
        uVar3 = FUN_1416493f0((undefined8 *)local_468);
        uVar5 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
    }
  }
  return uVar5;
}




bool FUN_141635b20(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1416354b0(param_1,param_2,param_3);
  return lVar1 != 0;
}




void FUN_141635b40(longlong *param_1)

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




undefined8 * FUN_141635c00(undefined8 *param_1)

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
  lVar2 = FUN_141633af0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141635c80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_141633d40((undefined4 *)(*(longlong *)(param_3 + 8) + 0x30),(undefined4 *)param_1[4],*(longlong *)(param_3 + 8));
  lVar1 = param_1[4];
  for (lVar3 = lVar1 + -0x30; lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 8));
  }
  param_1[4] = param_1[4] + -0x30;
  uVar2 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if ((uVar2 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar2)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  param_2[1] = uVar2;
  return param_2;
}




void FUN_141635d60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    }
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_141635df0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_141634fb0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141635ee4;
  }
  _invalid_parameter_noinfo();
LAB_141635ee4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_141635f20(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = param_2[4] - param_2[3];
  lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
  lVar6 = lVar5 >> 3;
  lVar5 = lVar5 >> 0x3f;
  uVar7 = lVar6 - lVar5;
  if (lVar6 == lVar5) {
    FUN_141635370(param_1);
    plVar3 = param_1;
  }
  else {
    lVar5 = param_1[3];
    lVar6 = param_1[4] - lVar5;
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    uVar8 = (lVar6 >> 3) - (lVar6 >> 0x3f);
    if (uVar8 < uVar7) {
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (param_1[5] - lVar5) / 0x30;
      }
      if (uVar4 < uVar7) {
        if (lVar5 != 0) {
          FUN_141634f00(param_1,lVar5,param_1[4]);
          operator_delete((void *)param_1[3]);
        }
        plVar3 = param_1;
        uVar2 = FUN_1416338d0((longlong)param_1,(param_2[4] - param_2[3]) / 0x30);
        if ((char)uVar2 != '\0') {
          plVar3 = param_1;
          lVar5 = FUN_141634b00(param_1,(undefined4 *)param_2[3],(undefined4 *)param_2[4],(undefined4 *)param_1[3]);
          param_1[4] = lVar5;
        }
      }
      else {
        plVar3 = (longlong *)((undefined4 *)param_2[3] + uVar8 * 0xc);
        FUN_141633d40((undefined4 *)param_2[3],(undefined4 *)plVar3,lVar5);
        puVar1 = FUN_141633e90((undefined4 *)plVar3,(undefined4 *)param_2[4],(undefined4 *)param_1[4]);
        param_1[4] = (longlong)puVar1;
      }
    }
    else {
      lVar5 = FUN_141633d40((undefined4 *)param_2[3],(undefined4 *)param_2[4],lVar5);
      FUN_141634f00(param_1,lVar5,param_1[4]);
      plVar3 = (longlong *)(param_2[4] - param_2[3]);
      param_1[4] = ((longlong)plVar3 / 0x30) * 0x30 + param_1[3];
    }
  }
  return plVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141636120(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_68 [40];
  ulonglong local_40;
  
  local_78 = 0xfffffffffffffffe;
  local_40 = DAT_141663a88 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28) - lVar5;
    lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    uVar6 = (lVar4 >> 3) - (lVar4 >> 0x3f);
  }
  if (param_3 != 0) {
    lVar5 = (*(longlong *)(param_1 + 0x20) - lVar5) / 0x30;
    local_a0 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_4;
    local_98 = param_2;
    local_90 = param_1;
    local_80 = param_3;
    if (0x555555555555555U - lVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_141631e30();
    }
    uVar1 = lVar5 + param_3;
    if (uVar6 < uVar1) {
      if (0x555555555555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar2 = (undefined4 *)FUN_141633240(param_1 + 0x10,uVar6);
      lVar5 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18);
      lVar5 = lVar5 / 6 + (lVar5 >> 0x3f);
      lVar5 = (lVar5 >> 3) - (lVar5 >> 0x3f);
      local_a4 = 0;
      local_b0 = 0;
      local_b8 = local_a8;
      local_98 = lVar5;
      local_88 = puVar2;
      FUN_1416344b0(puVar2 + lVar5 * 0xc,param_3,(undefined4 *)local_a0);
      local_a4 = 1;
      local_b0 = 0;
      local_b8 = local_a8;
      FUN_141633e90(*(undefined4 **)(param_1 + 0x18),*(undefined4 **)(param_2 + 8),puVar2);
      local_a4 = 2;
      local_b0 = 0;
      local_b8 = local_a8;
      FUN_141633e90(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),puVar2 + (param_3 + lVar5) * 0xc);
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar5 != 0) {
        FUN_141634f00(param_1,lVar5,*(longlong *)(param_1 + 0x20));
        operator_delete(*(void **)(param_1 + 0x18));
      }
      *(undefined4 **)(param_1 + 0x28) = puVar2 + uVar6 * 0xc;
      *(undefined4 **)(param_1 + 0x20) = puVar2 + (param_3 + (lVar4 - lVar5) / 0x30) * 0xc;
      *(undefined4 **)(param_1 + 0x18) = puVar2;
    }
    else if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x30) < param_3) {
      local_70[0] = *param_4;
      local_a0 = local_68;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      local_b0 = 0;
      local_b8 = local_a8;
      FUN_141633e90(*(undefined4 **)(param_2 + 8),*(undefined4 **)(param_1 + 0x20),*(undefined4 **)(param_2 + 8) + param_3 * 0xc);
      local_b0 = 0;
      local_b8 = local_a8;
      FUN_1416344b0(*(undefined4 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined4 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x30,local_70);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x30;
      lVar5 = *(longlong *)(param_1 + 0x20);
      for (puVar2 = *(undefined4 **)(param_2 + 8); puVar2 != (undefined4 *)(lVar5 + param_3 * -0x30); puVar2 = puVar2 + 0xc) {
        *puVar2 = local_70[0];
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar2 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_68);
      }
      local_a0 = local_68;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_68);
    }
    else {
      local_70[0] = *param_4;
      local_a0 = local_68;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      local_b0 = 0;
      local_b8 = local_a8;
      puVar3 = FUN_141633e90(puVar2 + param_3 * -0xc,puVar2,puVar2);
      *(undefined4 **)(param_1 + 0x20) = puVar3;
      local_b0 = 0;
      local_b8 = local_a8;
      FUN_141633f60(*(longlong *)(param_2 + 8),(longlong)(puVar2 + param_3 * -0xc),(longlong)puVar2);
      puVar3 = *(undefined4 **)(param_2 + 8);
      puVar2 = puVar3 + param_3 * 0xc;
      for (; puVar3 != puVar2; puVar3 = puVar3 + 0xc) {
        *puVar3 = local_70[0];
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar3 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_68);
      }
      local_a0 = local_68;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_68);
    }
  }
  return;
}




void FUN_141636560(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res10 [2];
  undefined4 local_res18;
  uint local_res20;
  ulonglong *local_478;
  ulonglong local_470;
  ulonglong local_468;
  undefined8 local_460;
  CMsg local_458 [1048];
  
  local_460 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_141635770(param_1,param_2);
    FUN_141634c50((longlong *)(param_1 + 0x10),(longlong *)&local_478,local_res10);
    lVar9 = *(longlong *)(param_1 + 0x40);
    if ((local_478 == (ulonglong *)0x0) || (local_478 != *(ulonglong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    uVar2 = local_470;
    if (local_470 != lVar9) {
      uVar5 = 0;
      if (local_478 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar5;
      }
      else {
        uVar10 = *local_478;
      }
      if (local_470 == *(longlong *)(uVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      local_478 = (ulonglong *)(local_470 + 0x20);
      lVar9 = *(longlong *)(local_470 + 0x40) - *(longlong *)(local_470 + 0x38);
      lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
      uVar11 = (lVar9 >> 3) - (lVar9 >> 0x3f);
      local_468 = 0;
      uVar10 = uVar5;
      local_470 = uVar11;
      while (uVar10 < ((uint)uVar11 & 0x7fffffff)) {
        if (((uVar11 & 0xffffffff80000000) == 0) || ((ulonglong)((*(longlong *)(uVar2 + 0x40) - *(longlong *)(uVar2 + 0x38)) / 0x30) <= uVar10)) {
          uVar11 = uVar11 - 0x80000000;
          local_470 = uVar11;
        }
        else {
          uVar10 = uVar10 + 1;
          local_468 = uVar10;
        }
        if (((uint)uVar11 & 0x7fffffff) <= uVar10) {
          return;
        }
        local_res20 = (int)uVar5 + 1;
        if (1000000 < local_res20) {
          log_InlineLogERROR(&DAT_141654618);
          return;
        }
        uVar5 = FUN_141631920((longlong *)&local_478);
        if ((char)uVar5 == '\0') {
          log_InlineLogERROR(&DAT_141654618);
        }
        if ((ulonglong)((*(longlong *)(uVar2 + 0x40) - *(longlong *)(uVar2 + 0x38)) / 0x30) <= uVar10) {
          _invalid_parameter_noinfo();
        }
        local_res18 = *(undefined4 *)(*(longlong *)(uVar2 + 0x38) + uVar10 * 0x30);
        FUN_1416496b0(local_458);
        plVar1 = *(longlong **)(param_1 + 8);
        pcVar6 = (char *)(**(code **)(*plVar1 + 0x110))(plVar1,param_2);
        pcVar7 = (char *)(**(code **)(*plVar1 + 0x50))(plVar1,local_res10[0]);
        uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,local_res10[0]);
        uVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,local_res10[0]);
        param_2 = local_res10[0];
        uVar8 = FUN_141649760(local_458,0x10,local_res10[0],uVar4,uVar3,pcVar7,pcVar6,0);
        if ((int)uVar8 == 0) {
          log_InlineLogERROR(&DAT_141654618);
        }
        else {
          (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),local_458,local_res18);
        }
        FUN_141649700((undefined8 *)local_458);
        uVar5 = (ulonglong)local_res20;
      }
    }
  }
  return;
}




ulonglong FUN_1416368e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  if (((param_2[1] & 0xffffffff80000000U) == 0) ||
     (lVar3 = *(longlong *)(*param_2 + 0x20) - *(longlong *)(*param_2 + 0x18), in_RAX = -(lVar3 >> 0x3f), (ulonglong)(lVar3 / 0x30) <= (ulonglong)param_2[2])) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = param_1[3];
  if ((ulonglong)param_1[4] < uVar2) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  lVar3 = param_2[2];
  lVar5 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar5;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar2 = uVar2 + lVar3 * 0x30;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar5 = *plVar1;
    }
    if (*(ulonglong *)(lVar5 + 0x18) <= uVar2) goto LAB_14163699a;
  }
  _invalid_parameter_noinfo();
LAB_14163699a:
  uVar6 = 0;
  FUN_141633d40((undefined4 *)(uVar2 + 0x30),(undefined4 *)param_1[4],uVar2);
  lVar5 = param_1[4];
  for (lVar3 = lVar5 + -0x30; lVar3 != lVar5; lVar3 = lVar3 + 0x30) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 8));
  }
  param_1[4] = param_1[4] + -0x30;
  if ((uVar2 < (ulonglong)param_1[3]) || ((ulonglong)param_1[4] < uVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*(uint *)(param_2 + 1) & 0x7fffffff) == 0) {
    log_InlineLogERROR(&DAT_141654618,"MYASSERT","Size()","f:\\version\\cqserver-78.0.11-1204\\include\\basecode\\array.h",0x3b,uVar6);
  }
  lVar3 = (ulonglong)(*(uint *)(param_2 + 1) & 0x7fffffff) - 1;
  param_2[1] = lVar3;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




void FUN_141636a80(undefined8 *param_1)

{
  FUN_141635d60((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141636ab0(longlong *param_1,undefined4 *param_2)

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
  FUN_141635df0(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_141636b60(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = (longlong)puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_141635f20(param_1,param_2);
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141636bd0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_40;
  ulonglong local_38;
  
  local_58 = 0xfffffffffffffffe;
  local_38 = DAT_141663a88 ^ (ulonglong)auStack_98;
  uVar1 = param_1[4];
  uVar4 = param_1[3];
  uVar3 = (longlong)(uVar1 - uVar4) / 0x30;
  local_40 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_3;
  if (uVar3 < param_2) {
    if (uVar1 < uVar4) {
      _invalid_parameter_noinfo();
    }
    local_78 = (longlong *)*param_1;
    uStack_70 = uVar1;
    local_68 = local_78;
    uStack_60 = uVar1;
    FUN_141636120((longlong)param_1,(longlong)&local_68,param_2 - (param_1[4] - param_1[3]) / 0x30,param_3);
    goto LAB_141636d4b;
  }
  if (uVar3 <= param_2) goto LAB_141636d4b;
  if (uVar1 < uVar4) {
    _invalid_parameter_noinfo();
  }
  local_68 = (longlong *)*param_1;
  uVar4 = param_1[3];
  uStack_60 = uVar1;
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*param_1;
  lVar5 = 0;
  local_78 = plVar2;
  uStack_70 = uVar4;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar5;
  }
  else {
    lVar6 = *plVar2;
  }
  uVar4 = uVar4 + param_2 * 0x30;
  if (*(ulonglong *)(lVar6 + 0x20) < uVar4) {
LAB_141636d12:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      lVar5 = *plVar2;
    }
    if (uVar4 < *(ulonglong *)(lVar5 + 0x18)) goto LAB_141636d12;
  }
  uStack_70 = uVar4;
  FUN_141635250(param_1,local_50,(longlong)&local_78,(longlong)&local_68);
LAB_141636d4b:
  local_40 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_40);
  return;
}




longlong * FUN_141636d80(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *local_28;
  ulonglong uStack_20;
  
  uVar5 = param_1[3];
  lVar6 = param_1[4] - uVar5;
  lVar3 = 0;
  lVar2 = lVar6 >> 0x3f;
  lVar4 = lVar3;
  if (lVar6 / 0x30 + lVar2 != lVar2) {
    if ((ulonglong)param_1[4] < uVar5) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar2 = (longlong)(param_3[1] - uVar5) / 6 + ((longlong)(param_3[1] - uVar5) >> 0x3f);
    lVar4 = (lVar2 >> 3) - (lVar2 >> 0x3f);
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_141636120((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar5 = param_1[3];
  if ((ulonglong)param_1[4] < uVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar5;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar2 = lVar3;
  }
  else {
    lVar2 = *plVar1;
  }
  uVar5 = lVar4 * 0x30 + uVar5;
  if (uVar5 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar5) goto LAB_141636ea6;
  }
  _invalid_parameter_noinfo();
LAB_141636ea6:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar5;
  return param_2;
}




void FUN_141636ef0(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong *local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong uVar12;
  
  FUN_141635b40(param_3);
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x51);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar5 = (undefined8 *)puVar9[2];
      puVar9 = puVar3;
    }
    else {
      puVar5 = (undefined8 *)*puVar9;
    }
    puVar3 = puVar9;
    puVar9 = puVar5;
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  local_50 = puVar3;
  local_58 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar9) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_48;
    local_40 = *(undefined8 *)(param_1 + 0x40);
    local_48 = *(longlong *)(param_1 + 0x10);
  }
  else {
    plVar7 = &local_58;
  }
  puVar2 = (ulonglong *)*plVar7;
  lVar8 = *(longlong *)(param_1 + 0x40);
  local_38 = puVar2;
  local_30 = plVar7[1];
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  uVar4 = local_30;
  if (local_30 != lVar8) {
    uVar10 = 0;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar12 = uVar10;
    }
    else {
      uVar12 = *puVar2;
    }
    if (uVar4 == *(longlong *)(uVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    local_38 = (ulonglong *)(uVar4 + 0x20);
    lVar8 = *(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38);
    local_28 = 0;
    lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
    uVar13 = (lVar8 >> 3) - (lVar8 >> 0x3f);
    uVar12 = uVar10;
    local_30 = uVar13;
    while (uVar10 < ((uint)uVar13 & 0x7fffffff)) {
      if (((uVar13 & 0xffffffff80000000) == 0) || ((ulonglong)((*(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38)) / 0x30) <= uVar10)) {
        uVar13 = uVar13 - 0x80000000;
        local_30 = uVar13;
      }
      else {
        uVar10 = uVar10 + 1;
        local_28 = uVar10;
      }
      if (((uint)uVar13 & 0x7fffffff) <= uVar10) {
        return;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      if (1000000 < uVar11) {
        log_InlineLogERROR(&DAT_141654618);
        return;
      }
      uVar6 = FUN_141631920((longlong *)&local_38);
      if ((char)uVar6 == '\0') {
        log_InlineLogERROR(&DAT_141654618);
      }
      if ((ulonglong)((*(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38)) / 0x30) <= uVar10) {
        _invalid_parameter_noinfo();
      }
      FUN_141636ab0(param_3,(undefined4 *)(uVar10 * 0x30 + *(longlong *)(uVar4 + 0x38)));
    }
  }
  return;
}




void FUN_141637170(undefined8 *param_1)

{
  FUN_141635d60((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416371a0(longlong param_1)

{
  FUN_141635d60(param_1 + 8);
  operator_delete(*(void **)(param_1 + 8));
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416371e0(longlong param_1,int param_2,int param_3,char param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStackY_4d8 [32];
  longlong *local_498;
  ulonglong local_490;
  ulonglong local_488;
  uint local_480;
  longlong *local_478 [2];
  undefined8 local_468;
  CMsg local_458;
  undefined1 local_457 [1039];
  ulonglong local_48;
  
  local_468 = 0xfffffffffffffffe;
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_4d8;
  local_478[0] = (longlong *)CONCAT44(local_478[0]._4_4_,param_2);
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_141634c50((longlong *)(param_1 + 0x10),(longlong *)&local_498,(uint *)local_478);
    lVar7 = *(longlong *)(param_1 + 0x40);
    local_478[0] = *(longlong **)(param_1 + 0x10);
    if ((local_498 == (longlong *)0x0) || (local_498 != local_478[0])) {
      _invalid_parameter_noinfo();
    }
    if (local_490 != lVar7) {
      if (local_498 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *local_498;
      }
      if (local_490 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      local_498 = (longlong *)(local_490 + 0x20);
      local_490 = (*(longlong *)(local_490 + 0x40) - *(longlong *)(local_490 + 0x38)) / 0x30;
      local_488 = 0;
      uVar6 = 0;
      local_480 = 0;
      local_478[0] = local_498;
      do {
        uVar1 = FUN_141632ab0((longlong *)&local_498);
        uVar2 = local_488;
        plVar5 = local_498;
        if ((char)uVar1 == '\0') {
          return;
        }
        uVar6 = uVar6 + 1;
        local_480 = uVar6;
        if (1000000 < uVar6) {
          log_InlineLogERROR(&DAT_141654618);
          return;
        }
        if (((local_490 & 0xffffffff80000000) == 0) || ((ulonglong)((local_498[4] - local_498[3]) / 0x30) <= local_488)) {
          log_InlineLogERROR(&DAT_141654618);
        }
        uVar2 = FUN_1416347e0(plVar5,uVar2);
      } while ((uVar2 == 0) || (piVar3 = (int *)FUN_141632b40((longlong *)&local_498), *piVar3 != param_3));
      FUN_1416368e0(local_478[0],(longlong *)&local_498);
      FUN_1416496b0(&local_458);
      uVar4 = FUN_141649760(&local_458,0x12,param_3,0,0,"",(char *)0x0,0);
      if ((int)uVar4 == 0) {
        log_InlineLogERROR(&DAT_141654618);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,&local_458);
      }
      FUN_141649700((undefined8 *)&local_458);
      if (param_4 != '\0') {
        plVar5 = (longlong *)InstanceGet();
        local_458 = (CMsg)0x0;
        memset(local_457,0,0x3ff);
        _snprintf((char *)&local_458,0x3ff,"DELETE FROM cq_enemy WHERE userid=%lu && enemy=%lu LIMIT 1");
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_458,0,1);
      }
    }
  }
  return;
}




undefined4 * FUN_141637560(undefined4 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)(param_1 + 2);
  puVar2 = operator_new(8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar1;
    puVar3 = puVar2;
  }
  *plVar1 = (longlong)puVar3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_141635f20(plVar1,param_3);
  return param_1;
}




void FUN_1416375e0(longlong *param_1,ulonglong param_2)

{
  undefined4 local_40 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [48];
  
  local_40[0] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
  FUN_141636bd0(param_1,param_2,local_40);
  return;
}




void FUN_141637640(longlong *param_1,undefined4 *param_2)

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
    uVar4 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x30) < uVar4) {
    FUN_1416344b0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 0xc);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_141636d80(param_1,local_18,&local_28,param_2);
  return;
}




undefined4 * FUN_141637740(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  plVar1 = (longlong *)(param_1 + 2);
  puVar2 = operator_new(8);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar1;
    puVar3 = puVar2;
  }
  *plVar1 = (longlong)puVar3;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_141635f20(plVar1,(longlong *)(param_2 + 2));
  return param_1;
}




void FUN_1416377c0(longlong param_1)

{
  FUN_141635d60(param_1 + 0x20);
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




longlong * FUN_141637800(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_40 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38 [48];
  
  puVar1 = operator_new(8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar2 = puVar1;
  }
  *param_1 = (longlong)puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_40[0] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_38);
  FUN_141636bd0(param_1,param_2,local_40);
  return param_1;
}




undefined8 * FUN_1416378b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_141637740((undefined4 *)(param_1 + 3),param_5);
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void * FUN_141637900(void *param_1,uint param_2)

{
  FUN_141635d60((longlong)param_1 + 0x20);
  operator_delete(*(void **)((longlong)param_1 + 0x20));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_141637970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    FUN_141637740((undefined4 *)(puVar1 + 3),param_5);
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_141637a00(longlong param_1)

{
  FUN_141635d60(param_1 + 0x20);
  operator_delete(*(void **)(param_1 + 0x20));
  return;
}




undefined8 * FUN_141637a40(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
  }
  plVar5 = FUN_141637970(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_141637d80(undefined8 param_1,longlong param_2)

{
  FUN_141635d60(param_2 + 0x20);
  operator_delete(*(void **)(param_2 + 0x20));
  return;
}




undefined8 * FUN_141637dc0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141661b68);
  }
  FUN_141632e30(param_3);
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
        goto LAB_141637fac;
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
LAB_141637fac:
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
            FUN_141632d60((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_141632dc0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_141632d60((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_141632dc0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_141632d60((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_141632dc0((longlong)param_1,plVar7);
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
  FUN_141635d60((longlong)(plVar2 + 4));
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




longlong * FUN_1416381a0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x51) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_1416382fd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14163832c;
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
      if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x51);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x51);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x51);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x51) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x51) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_1416382fd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141637a40(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14163832c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_141638350(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_141638350(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    lVar4 = param_2[7];
    if (lVar4 != 0) {
      lVar3 = param_2[8];
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x30) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar4 + 8));
      }
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




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141638430(ulonglong param_1,uint param_2,uint param_3,char *param_4,char param_5,char param_6)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  void *pvVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStackY_988 [32];
  uint local_944;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_940;
  longlong local_938;
  ulonglong local_930;
  uint local_928;
  longlong *local_920;
  ulonglong local_918;
  ulonglong local_910;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_8f8;
  void *local_8e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_8e0 [16];
  void *local_8d0;
  void *local_8c8;
  undefined8 local_8c0;
  void *local_8b8;
  undefined8 local_8b0;
  undefined4 local_8a8 [2];
  void *local_8a0 [6];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_870;
  CMsg local_858;
  undefined1 local_857 [1039];
  char local_448;
  undefined1 local_447 [1023];
  ulonglong local_48;
  
  local_8b0 = 0xfffffffffffffffe;
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_988;
  local_944 = param_2;
  local_930 = param_1;
  local_8f8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_4;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618,"IF_NOT","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\relation\\src\\enemymgr.cpp");
  }
  else {
    bVar1 = true;
    plVar13 = (longlong *)(param_1 + 0x10);
    FUN_141634c50(plVar13,(longlong *)&local_940,&local_944);
    lVar15 = *(longlong *)(param_1 + 0x40);
    local_870 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)*plVar13;
    if ((local_940 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) || (local_940 != local_870)) {
      _invalid_parameter_noinfo();
    }
    lVar18 = local_938;
    if (local_938 == lVar15) {
      FUN_141637800((longlong *)&local_8e8,0);
      local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_920;
      pbVar9 = FUN_141631530((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_920,(char *)local_8f8);
      puVar10 = FUN_141633390(local_8a8,param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)pbVar9);
      FUN_141637640((longlong *)&local_8e8,puVar10);
      local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8a0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8a0);
      puVar8 = FUN_141637560(local_8a8,&local_944,(longlong *)&local_8e8);
      FUN_1416381a0(plVar13,(longlong *)&local_920,puVar8);
      local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_8a0;
      FUN_141635d60((longlong)local_8a0);
      operator_delete(local_8a0[0]);
      pvVar16 = local_8d0;
      if (local_8d0 != (void *)0x0) {
        for (; local_8b8 = pvVar16, pvVar16 != local_8c8; pvVar16 = (void *)((longlong)pvVar16 + 0x30)) {
          local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)pvVar16 + 8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_940);
        }
        operator_delete(local_8d0);
      }
      local_8d0 = (void *)0x0;
      local_8c8 = (void *)0x0;
      local_8c0 = 0;
      operator_delete(local_8e8);
    }
    else {
      if (local_940 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        _invalid_parameter_noinfo();
        lVar15 = 0;
      }
      else {
        lVar15 = *(longlong *)local_940;
      }
      if (lVar18 == *(longlong *)(lVar15 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar13 = (longlong *)(lVar18 + 0x20);
      local_918 = (*(longlong *)(lVar18 + 0x40) - *(longlong *)(lVar18 + 0x38)) / 0x30;
      local_928 = 0;
      uVar17 = 0;
      bVar1 = true;
      local_920 = plVar13;
      local_910 = 0;
      while (uVar6 = FUN_141632ab0((longlong *)&local_920), uVar7 = local_910, plVar2 = local_920, (char)uVar6 != '\0') {
        uVar17 = uVar17 + 1;
        local_928 = uVar17;
        if (1000000 < uVar17) {
          log_InlineLogERROR(&DAT_141654618,"DEAD_LOOP_BREAK","uLoopCount");
          break;
        }
        if (((local_918 & 0xffffffff80000000) == 0) || ((ulonglong)((local_920[4] - local_920[3]) / 0x30) <= local_910)) {
          log_InlineLogERROR(&DAT_141654618,"MYASSERT","IsValid()");
        }
        uVar7 = FUN_1416347e0(plVar2,uVar7);
        if ((uVar7 != 0) && (puVar8 = (uint *)FUN_141632b40((longlong *)&local_920), *puVar8 == param_3)) {
          uVar7 = FUN_1416368e0(plVar13,(longlong *)&local_920);
          if ((char)uVar7 == '\0') {
            log_InlineLogERROR("CEnemyMgr::Add delobj failed,arrayenemy userid=%d, enemy=%d ,bSynchro=%d, bUpdate=%d",(ulonglong)param_2,(ulonglong)param_3);
          }
          bVar1 = false;
        }
      }
      local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_920;
      pbVar9 = FUN_141631530((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_920,(char *)local_8f8);
      puVar10 = FUN_141633390((undefined4 *)&local_8e8,param_3,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)pbVar9);
      FUN_141637640(plVar13,puVar10);
      local_940 = local_8e0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_8e0);
    }
    uVar7 = local_930;
    if ((param_5 != '\0') && (cVar3 = (**(code **)(**(longlong **)(local_930 + 8) + 0x20))(), cVar3 != '\0')) {
      FUN_1416496b0(&local_858);
      plVar13 = *(longlong **)(uVar7 + 8);
      pcVar11 = (char *)(**(code **)(*plVar13 + 0x110))(plVar13,param_3);
      uVar4 = (**(code **)(*plVar13 + 0x48))(plVar13,param_3);
      uVar5 = (**(code **)(*plVar13 + 0x40))(plVar13,param_3);
      uVar12 = FUN_141649760(&local_858,0x13,param_3,uVar5,uVar4,(char *)local_8f8,pcVar11,1);
      if ((int)uVar12 != 0) {
        (**(code **)(**(longlong **)(uVar7 + 8) + 0x10))(*(longlong **)(uVar7 + 8),param_2,&local_858);
      }
      FUN_141649700((undefined8 *)&local_858);
    }
    if (param_6 != '\0') {
      plVar13 = (longlong *)InstanceGet();
      if (bVar1) {
        local_448 = '\0';
        memset(local_447,0,0x3ff);
        local_940 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)_time64((__time64_t *)0x0);
        _snprintf(&local_448,0x3ff,"INSERT cq_enemy VALUES(0, %lu, %lu, %u)",(ulonglong)param_2);
        (**(code **)(*plVar13 + 0x30))(plVar13,&local_448,0);
      }
      else {
        local_858 = (CMsg)0x0;
        memset(local_857,0,0x3ff);
        local_930 = _time64((__time64_t *)0x0);
        _snprintf((char *)&local_858,0x3ff,"UPDATE cq_enemy SET time=%u WHERE userid=%lu && enemy=%lu LIMIT 1",local_930 & 0xffffffff);
        (**(code **)(*plVar13 + 0x30))(plVar13,&local_858,0);
      }
    }
    FUN_141634c50((longlong *)(uVar7 + 0x10),(longlong *)&local_940,&local_944);
    pbVar9 = local_940;
    lVar15 = *(longlong *)(uVar7 + 0x40);
    lVar18 = 0;
    local_8f8 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(uVar7 + 0x10);
    if ((local_940 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) || (local_940 != local_8f8)) {
      _invalid_parameter_noinfo();
    }
    if (local_938 != lVar15) {
      if (pbVar9 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar18 = *(longlong *)pbVar9;
      }
      if (local_938 == *(longlong *)(lVar18 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (0x96 < (ulonglong)((*(longlong *)(local_938 + 0x40) - *(longlong *)(local_938 + 0x38)) / 0x30)) {
        piVar14 = (int *)FUN_141632a00(local_938 + 0x20,0);
        FUN_1416371e0(uVar7,param_2,*piVar14,'\x01');
      }
      uVar12 = FUN_1416316a0(uVar7);
      if ((param_5 != '\0') && ((int)uVar12 < (int)((*(longlong *)(local_938 + 0x40) - *(longlong *)(local_938 + 0x38)) / 0x30))) {
        lVar15 = *(longlong *)(local_938 + 0x40) - *(longlong *)(local_938 + 0x38);
        lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
        FUN_1416496b0(&local_858);
        piVar14 = (int *)FUN_141632a00(local_938 + 0x20,(longlong)((((int)(lVar15 >> 3) - (int)(lVar15 >> 0x3f)) - (int)uVar12) + -1));
        uVar12 = FUN_141649760(&local_858,0x12,*piVar14,0,0,"",(char *)0x0,0);
        if ((int)uVar12 == 0) {
          log_InlineLogERROR(&DAT_141654618,"IF_OK_",&DAT_141655504,"f:\\version\\cqserver-78.0.11-1204\\modules\\relation\\src\\enemymgr.cpp");
        }
        else {
          (**(code **)(**(longlong **)(uVar7 + 8) + 0x10))(*(longlong **)(uVar7 + 8),param_2,&local_858);
        }
        FUN_141649700((undefined8 *)&local_858);
      }
    }
  }
  return;
}




void FUN_141638be0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141638350(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_141638c20(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141638350(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_141637dc0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141638e00(ulonglong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 extraout_RAX;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 uVar10;
  undefined1 auStackY_b8 [32];
  longlong *local_88 [3];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_48 = 0xfffffffffffffffe;
  local_30 = DAT_141663a88 ^ (ulonglong)auStackY_b8;
  local_58 = operator_new(8);
  if (local_58 == (longlong *)0x0) {
    local_88[0] = (longlong *)0x0;
  }
  else {
    *local_58 = (longlong)local_88;
    local_88[0] = local_58;
  }
  lVar9 = 0;
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_40[0] = local_58;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),local_88,param_2,0xd);
  puVar8 = local_70;
  local_40[0] = (longlong *)0x0;
  if (local_68 < local_70) {
    _invalid_parameter_noinfo();
  }
  plVar1 = local_88[0];
  local_40[0] = local_88[0];
  do {
    puVar2 = local_68;
    local_58 = (longlong *)0x0;
    if (local_68 < local_70) {
      _invalid_parameter_noinfo();
    }
    local_58 = local_88[0];
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_88[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar2) {
      if (local_70 != (undefined8 *)0x0) {
        operator_delete(local_70);
      }
      local_70 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      operator_delete(local_88[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar9;
    }
    else {
      lVar6 = *plVar1;
    }
    uVar10 = puVar8 == *(undefined8 **)(lVar6 + 0x20);
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,&DAT_1416558c0);
    pcVar5 = (char *)(**(code **)(*plVar4 + 0x78))(plVar4);
    lVar6 = 1;
    pcVar7 = "";
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      uVar10 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while ((bool)uVar10);
    if ((bool)uVar10) {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      (**(code **)(*(longlong *)*puVar8 + 0x40))((longlong *)*puVar8,0);
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,&DAT_1416558c0);
      pcVar5 = (char *)(**(code **)(*plVar4 + 0x78))(plVar4);
      tq::StrCopy((char *)local_40,pcVar5,0x10);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar1;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)(**(code **)(*(longlong *)*puVar8 + 0x20))((longlong *)*puVar8,"enemy");
      uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
      FUN_141638430(param_1,param_2,uVar3,(char *)local_40,'\0','\0');
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar9;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    (*(code *)**(undefined8 **)*puVar8)((undefined8 *)*puVar8,1);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar9;
    }
    else {
      lVar6 = *plVar1;
    }
    if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
      _invalid_parameter_noinfo();
    }
    puVar8 = puVar8 + 1;
  } while( true );
}




void FUN_1416390e0(longlong *param_1)

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
  FUN_141638c20(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_141639150(longlong *param_1)

{
  FUN_1416390e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141639180(longlong *param_1)

{
  FUN_1416390e0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416391b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  
  *param_1 = relation::CEnemyMgr::vftable;
  plVar4 = *(longlong **)param_1[8];
  plVar1 = (longlong *)param_1[2];
  local_48 = plVar1;
  do {
    while( true ) {
      while( true ) {
        plVar5 = (longlong *)param_1[8];
        local_58 = (longlong *)param_1[2];
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_58)) {
          _invalid_parameter_noinfo();
        }
        if (plVar4 == plVar5) {
          FUN_141638350(param_1 + 2,*(longlong **)(param_1[8] + 8),param_3,param_4);
          *(undefined8 *)(param_1[8] + 8) = param_1[8];
          param_1[9] = 0;
          *(undefined8 *)param_1[8] = param_1[8];
          *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
          plVar4 = param_1 + 2;
          puStack_50 = (undefined8 *)param_1[8];
          local_58 = (longlong *)*plVar4;
          uStack_40 = *puStack_50;
          local_48 = local_58;
          FUN_141638c20(plVar4,(longlong *)&local_38,(longlong *)&local_48,(longlong *)&local_58);
          operator_delete((void *)param_1[8]);
          param_1[8] = 0;
          param_1[9] = 0;
          operator_delete((void *)*plVar4);
          return;
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
        local_30 = (plVar4[8] - plVar4[7]) / 0x30;
        local_28 = 0;
        local_38 = plVar4 + 4;
        while (uVar3 = FUN_141632ab0((longlong *)&local_38), (char)uVar3 != '\0') {
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
          FUN_1416368e0(plVar4 + 4,(longlong *)&local_38);
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar4 + 0x51) == '\0') break;
        _invalid_parameter_noinfo();
      }
      plVar5 = plVar4;
      plVar2 = (longlong *)plVar4[2];
      if (*(char *)(plVar4[2] + 0x51) != '\0') break;
      do {
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar4;
      } while (*(char *)(*plVar4 + 0x51) == '\0');
    }
    do {
      plVar4 = (longlong *)plVar5[1];
      if (*(char *)((longlong)plVar4 + 0x51) != '\0') break;
      bVar7 = plVar5 == (longlong *)plVar4[2];
      plVar5 = plVar4;
    } while (bVar7);
  } while( true );
}




undefined8 * FUN_1416393f0(undefined8 *param_1)

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
  lVar2 = FUN_141633af0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141639470(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416391b0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416328d0(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416394a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = relation::CEnemyMgr::vftable;
  param_1[1] = 0;
  FUN_1416393f0(param_1 + 2);
  FUN_141638350(param_1 + 2,*(longlong **)(param_1[8] + 8),param_3,param_4);
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  return param_1;
}




undefined8 FUN_141639560(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




ulonglong FUN_141639580(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  char *pcVar3;
  undefined7 extraout_var;
  
  if (param_2 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,"userid");
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,"friend");
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,&DAT_1416558c0);
  pcVar3 = (char *)(**(code **)(*plVar2 + 0x78))(plVar2);
  tq::StrCopy((char *)(param_1 + 0x10),pcVar3,0x10);
  return CONCAT71(extraout_var,1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141639620(longlong param_1,undefined4 param_2,undefined4 param_3,char *param_4,longlong *param_5)

{
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428;
  undefined1 local_427 [1022];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_141663a88 ^ (ulonglong)auStack_458;
  if (param_5 == (longlong *)0x0) {
    local_28 = local_28 & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    tq::SafeCopy((char *)(param_1 + 0x10),param_4,0x10);
    local_428 = '\0';
    memset(local_427,0,0x3ff);
    local_438 = param_3;
    _snprintf(&local_428,0x3ff,"INSERT cq_friend SET userid=\'%lu\',friend=\'%lu\'");
    local_29 = 0;
    local_28 = (**(code **)(*param_5 + 0x30))(param_5,&local_428,0,1);
  }
  return local_28;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416396e0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418;
  undefined1 local_417 [1022];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_141663a88 ^ (ulonglong)auStack_448;
  if (param_2 == (longlong *)0x0) {
    local_18 = local_18 & 0xffffffffffffff00;
  }
  else {
    local_418 = '\0';
    memset(local_417,0,0x3ff);
    local_428 = *(undefined4 *)(param_1 + 0xc);
    _snprintf(&local_418,0x3ff,"DELETE FROM cq_friend WHERE userid=%lu AND friend=%lu LIMIT 1");
    local_19 = 0;
    local_18 = (**(code **)(*param_2 + 0x30))(param_2,&local_418,0,1);
  }
  return local_18;
}




undefined4 FUN_1416397a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




longlong FUN_1416397b0(longlong param_1)

{
  return param_1 + 0x10;
}




undefined * FUN_1416397d0(void)

{
  if ((DAT_141663ac8 & 1) == 0) {
    DAT_141663ac8 = DAT_141663ac8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ac0,"CFriend");
    atexit((_func_5014 *)&LAB_141652640);
  }
  return &DAT_141663ac0;
}




void FUN_141639830(__uint64 param_1)

{
  if ((DAT_141663ac8 & 1) == 0) {
    DAT_141663ac8 = DAT_141663ac8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ac0,"CFriend");
    atexit((_func_5014 *)&LAB_141652640);
  }
                    /* WARNING: Could not recover jumptable at 0x000141639885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141663ac0,param_1);
  return;
}




void FUN_141639890(void *param_1)

{
  if ((DAT_141663ac8 & 1) == 0) {
    DAT_141663ac8 = DAT_141663ac8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ac0,"CFriend");
    atexit((_func_5014 *)&LAB_141652640);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416398e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141663ac0,param_1);
  return;
}




void FUN_1416398f0(void *param_1)

{
  if ((DAT_141663ac8 & 1) == 0) {
    DAT_141663ac8 = DAT_141663ac8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ac0,"CFriend");
    atexit((_func_5014 *)&LAB_141652640);
  }
                    /* WARNING: Could not recover jumptable at 0x000141639945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141663ac0,param_1);
  return;
}




undefined8 * FUN_141639950(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CFriend::vftable;
  if ((param_2 & 1) != 0) {
    FUN_141639890(param_1);
  }
  return param_1;
}




undefined8 * FUN_141639980(void)

{
  undefined8 *puVar1;
  
  if ((DAT_141663ac8 & 1) == 0) {
    DAT_141663ac8 = DAT_141663ac8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ac0,"CFriend");
    atexit((_func_5014 *)&LAB_141652640);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141663ac0,0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = relation::CFriend::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
  }
  return puVar1;
}




ulonglong FUN_141639a10(longlong param_1,longlong *param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_141639580(param_1,param_2);
  return uVar1;
}




undefined8 * FUN_141639a60(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return (undefined8 *)0x0;
  }
  puVar1 = FUN_141639980();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = *param_1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_1[1];
    *(undefined4 *)(puVar1 + 2) = param_1[2];
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_1[3];
    *(undefined4 *)(puVar1 + 3) = param_1[4];
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_1[5];
  }
  return puVar1;
}




undefined1 FUN_141639ae0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  *(longlong *)(param_1 + 0x48) = param_2;
  return 1;
}




bool FUN_141639b30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141639b70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141639bc0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




void FUN_141639ce0(longlong param_1,longlong *param_2)

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




longlong FUN_141639db0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141639dd2;
  }
  lVar2 = *plVar1;
LAB_141639dd2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141639df0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141639e12;
  }
  lVar2 = *plVar1;
LAB_141639e12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141639e30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141639ec0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141639ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141639f50(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
}




longlong * FUN_141639fe0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_14163a010;
  }
  else {
LAB_14163a010:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_14163a038;
  }
  _invalid_parameter_noinfo();
LAB_14163a038:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong FUN_14163a050(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_14163a0c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014163a0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_14163a170(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_14163a1d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_14163a250(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 * 0x58);
  return;
}




void * FUN_14163a310(void *param_1,longlong param_2,void *param_3)

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




void * FUN_14163a3c0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_14163a400(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14163a490(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_14163a4d0(void)

{
  if ((DAT_141663ad8 & 1) == 0) {
    DAT_141663ad8 = DAT_141663ad8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ad0,"CFriendMgr");
    atexit((_func_5014 *)&LAB_141652650);
  }
  return &DAT_141663ad0;
}




void FUN_14163a530(__uint64 param_1)

{
  if ((DAT_141663ad8 & 1) == 0) {
    DAT_141663ad8 = DAT_141663ad8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ad0,"CFriendMgr");
    atexit((_func_5014 *)&LAB_141652650);
  }
                    /* WARNING: Could not recover jumptable at 0x00014163a585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141663ad0,param_1);
  return;
}




void FUN_14163a590(void *param_1)

{
  if ((DAT_141663ad8 & 1) == 0) {
    DAT_141663ad8 = DAT_141663ad8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ad0,"CFriendMgr");
    atexit((_func_5014 *)&LAB_141652650);
  }
                    /* WARNING: Could not recover jumptable at 0x00014163a5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141663ad0,param_1);
  return;
}




void FUN_14163a5f0(void *param_1)

{
  if ((DAT_141663ad8 & 1) == 0) {
    DAT_141663ad8 = DAT_141663ad8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ad0,"CFriendMgr");
    atexit((_func_5014 *)&LAB_141652650);
  }
                    /* WARNING: Could not recover jumptable at 0x00014163a645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141663ad0,param_1);
  return;
}




longlong FUN_14163a650(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14163a672;
  }
  lVar2 = *plVar1;
LAB_14163a672:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14163a690(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14163a6b2;
  }
  lVar2 = *plVar1;
LAB_14163a6b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_14163a6d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_14163a710(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14163a730(longlong param_1,longlong param_2)

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




void FUN_14163a790(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14163a7a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14163a7c2;
  }
  lVar2 = *plVar1;
LAB_14163a7c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14163a7e0(longlong *param_1)

{
  FUN_141639ec0(param_1);
  return param_1;
}




void FUN_14163a800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_14163a810(longlong *param_1,longlong param_2)

{
  FUN_141639fe0(param_1,param_2);
  return param_1;
}




longlong * FUN_14163a880(longlong *param_1)

{
  FUN_14163a0c0(param_1);
  return param_1;
}




void FUN_14163a8b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_14163a940(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 0x58);
  return;
}




longlong * FUN_14163a9b0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141639ec0(param_1);
  return param_2;
}




undefined8 * FUN_14163a9f0(undefined8 *param_1)

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




void * FUN_14163aa50(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14163aad0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_14163ab10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14163ab32;
  }
  lVar2 = *plVar1;
LAB_14163ab32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_14163ab50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14163ab72;
  }
  lVar2 = *plVar1;
LAB_14163ab72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_14163ab90(longlong *param_1)

{
  FUN_141639ec0(param_1);
  return param_1;
}




longlong * FUN_14163abb0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14163ac1a;
  }
  _invalid_parameter_noinfo();
LAB_14163ac1a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_14163ac50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14163ac70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14163ac90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_14163acb0(longlong *param_1)

{
  FUN_14163a0c0(param_1);
  return param_1;
}




undefined8 FUN_14163acd0(longlong param_1,ulonglong param_2)

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
      FUN_141639f50();
    }
    lVar1 = FUN_14163a8b0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_14163ad40(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 FUN_14163ad70(longlong param_1,ulonglong param_2)

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
      FUN_141631eb0();
    }
    lVar1 = FUN_141633000(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_14163add0(undefined8 *param_1)

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




undefined8 * FUN_14163ae10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_14163ae50(undefined8 *param_1)

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




undefined8 * FUN_14163ae90(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14163aef0(void)

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




undefined8 * FUN_14163af50(undefined8 *param_1)

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




void * FUN_14163afa0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_14163b010(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14163b090(void *param_1,longlong param_2,void *param_3)

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




void FUN_14163b0d0(undefined8 *param_1)

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




void FUN_14163b110(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14163b130(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_14163b170(undefined8 *param_1)

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




undefined8 * FUN_14163b1c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14163b220(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_14163b250(undefined8 *param_1)

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




void FUN_14163b2a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14163aef0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14163b2e0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14163b330(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14163b380(undefined8 *param_1)

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




void * FUN_14163b3d0(longlong param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,*(void **)(param_1 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_14163b440(void *param_1,longlong param_2,void *param_3)

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




void FUN_14163b480(longlong param_1)

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




undefined8 * FUN_14163b510(undefined8 *param_1)

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




undefined8 * FUN_14163b570(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14163b5c0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14163b610(undefined8 *param_1)

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




void FUN_14163b670(undefined8 *param_1)

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




void FUN_14163b6b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14163b6d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_14163b760(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_14163b7c0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_14163b8b0(undefined8 *param_1)

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




void * FUN_14163b900(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 8) - (longlong)*(void **)(param_2 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,*(void **)(param_2 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




void * FUN_14163b9a0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_14163b9e0(longlong param_1)

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




longlong * FUN_14163ba30(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x51) == '\0');
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




undefined8 * FUN_14163bb00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_14163bb90(longlong *param_1)

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




void FUN_14163bc50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14163bc70(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = (longlong)(param_2[4] - param_2[3]) >> 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar4 != 0) {
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_141639f50();
    }
    lVar2 = FUN_14163a8b0(param_1 + 2,uVar4);
    param_1[3] = lVar2;
    param_1[4] = lVar2;
    param_1[5] = lVar2 + uVar4 * 8;
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
    pvVar3 = FUN_14163b900(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_14163bdd0(undefined8 *param_1)

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




void FUN_14163be20(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141639f50();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_14163a8b0(param_1 + 0x10,uVar8);
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
      FUN_14163b9a0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_14163b9a0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_14163b010(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined4 * FUN_14163c0d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_14163bc70((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




void * FUN_14163c110(void *param_1,uint param_2)

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




longlong FUN_14163c190(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x51);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
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
  lVar6 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar6) {
    lVar6 = 0;
  }
  else {
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
    lVar6 = *(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 3;
  }
  return lVar6;
}




undefined8 FUN_14163c2a0(longlong param_1,uint param_2,ulonglong param_3)

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
  cVar1 = *(char *)((longlong)puVar7 + 0x51);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
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
    if (param_3 < (ulonglong)(*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 3)) {
      return *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + param_3 * 8);
    }
    log_InlineLogERROR(&DAT_141654618);
  }
  return 0;
}




undefined8 FUN_14163c3f0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong *local_18;
  longlong local_10;
  
  puVar10 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar10 + 0x51);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar10 + 3) < param_2) {
      puVar7 = (undefined8 *)puVar10[2];
      puVar10 = puVar4;
    }
    else {
      puVar7 = (undefined8 *)*puVar10;
    }
    puVar4 = puVar10;
    puVar10 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x51);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar10) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar9 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar9 = &local_38;
  }
  puVar2 = (ulonglong *)*plVar9;
  lVar3 = *(longlong *)(param_1 + 0x38);
  local_18 = puVar2;
  local_10 = plVar9[1];
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_10;
  if (local_10 != lVar3) {
    uVar12 = 0;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar13 = uVar12;
    }
    else {
      uVar13 = *puVar2;
    }
    if (lVar5 == *(longlong *)(uVar13 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar8 = *(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3;
    uVar13 = uVar12;
    if (0 < (int)uVar8) {
      do {
        if (uVar8 <= uVar13) {
          _invalid_parameter_noinfo();
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + uVar13 * 8);
        iVar11 = (int)uVar12;
        if ((lVar3 != 0) && (iVar6 = FUN_1416397a0(lVar3), iVar6 == param_3)) {
          if ((ulonglong)(*(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3) <= (ulonglong)(longlong)iVar11) {
            _invalid_parameter_noinfo();
          }
          return *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar11 * 8);
        }
        uVar12 = (ulonglong)(iVar11 + 1U);
        uVar13 = uVar13 + 1;
        uVar8 = *(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3;
      } while ((int)(iVar11 + 1U) < (int)uVar8);
    }
  }
  return 0;
}




ulonglong FUN_14163c570(longlong param_1,uint param_2,int param_3)

{
  void *_Dst;
  char cVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  rsize_t _DstSize;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar16;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong *local_38;
  ulonglong local_30;
  ulonglong uVar15;
  
  plVar6 = (longlong *)InstanceGet();
  puVar11 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar11 + 0x51);
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar11 + 3) < param_2) {
      puVar13 = (undefined8 *)puVar11[2];
      puVar11 = puVar3;
    }
    else {
      puVar13 = (undefined8 *)*puVar11;
    }
    puVar3 = puVar11;
    puVar11 = puVar13;
    cVar1 = *(char *)((longlong)puVar13 + 0x51);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x38);
  local_50 = puVar3;
  local_58 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar11) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar9 = &local_48;
    local_40 = *(undefined8 *)(param_1 + 0x38);
    local_48 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar9 = &local_58;
  }
  puVar2 = (ulonglong *)*plVar9;
  uVar16 = *(ulonglong *)(param_1 + 0x38);
  local_38 = puVar2;
  uVar7 = plVar9[1];
  local_30 = uVar7;
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  uVar4 = local_30;
  if (local_30 != uVar16) {
    uVar16 = 0;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar16;
    }
    else {
      uVar7 = *puVar2;
    }
    if (uVar4 == *(ulonglong *)(uVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar7 = *(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38) >> 3;
    uVar12 = uVar16;
    uVar15 = uVar16;
    if (0 < (int)uVar7) {
      do {
        if ((ulonglong)(*(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38) >> 3) <= uVar12) {
          _invalid_parameter_noinfo();
        }
        puVar11 = *(undefined8 **)(*(longlong *)(uVar4 + 0x38) + uVar12 * 8);
        if ((puVar11 != (undefined8 *)0x0) && (iVar5 = FUN_1416397a0((longlong)puVar11), iVar5 == param_3)) {
          FUN_1416396e0((longlong)puVar11,plVar6);
          FUN_141639560(puVar11);
          uVar7 = *(ulonglong *)(uVar4 + 0x38);
          if (*(ulonglong *)(uVar4 + 0x40) < uVar7) {
            _invalid_parameter_noinfo();
          }
          puVar2 = *(ulonglong **)(uVar4 + 0x20);
          if (puVar2 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar12 = uVar16;
          }
          else {
            uVar12 = *puVar2;
          }
          _Dst = (void *)(uVar7 + (longlong)(int)uVar15 * 8);
          if (_Dst <= *(void **)(uVar12 + 0x20)) {
            if (puVar2 != (ulonglong *)0x0) {
              uVar16 = *puVar2;
            }
            if (*(void **)(uVar16 + 0x18) <= _Dst) goto LAB_14163c75e;
          }
          _invalid_parameter_noinfo();
LAB_14163c75e:
          lVar10 = *(longlong *)(uVar4 + 0x40) - ((longlong)_Dst + 8) >> 3;
          if (0 < lVar10) {
            _DstSize = lVar10 << 3;
            memmove_s(_Dst,_DstSize,(void *)((longlong)_Dst + 8),_DstSize);
          }
          *(longlong *)(uVar4 + 0x40) = *(longlong *)(uVar4 + 0x40) + -8;
          if ((_Dst < *(void **)(uVar4 + 0x38)) || (*(void **)(uVar4 + 0x40) < _Dst)) {
            _invalid_parameter_noinfo();
          }
          uVar8 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x130))(*(longlong **)(param_1 + 0x48),param_2,param_3,5);
          return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        uVar12 = uVar12 + 1;
        uVar7 = *(longlong *)(uVar4 + 0x40) - *(longlong *)(uVar4 + 0x38) >> 3;
      } while ((int)uVar14 < (int)uVar7);
    }
  }
  return uVar7 & 0xffffffffffffff00;
}




void FUN_14163c7c0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  uint local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  ulonglong *local_478;
  ulonglong local_470;
  undefined8 local_468;
  CMsg local_458 [1048];
  
  local_468 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_14163ba30((longlong *)(param_1 + 8),(longlong *)&local_478,local_res10);
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if ((local_478 == (ulonglong *)0x0) || (local_478 != *(ulonglong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    if (local_470 != uVar1) {
      puVar15 = (ulonglong *)0x0;
      if (local_478 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        local_478 = puVar15;
      }
      else {
        local_478 = (ulonglong *)*local_478;
      }
      if (local_470 == local_478[6]) {
        _invalid_parameter_noinfo();
      }
      puVar14 = (ulonglong *)(*(longlong *)(local_470 + 0x40) - *(longlong *)(local_470 + 0x38) >> 3);
      puVar13 = puVar15;
      local_478 = puVar14;
      if (puVar14 != (ulonglong *)0x0) {
        do {
          if ((ulonglong *)(*(longlong *)(local_470 + 0x40) - *(longlong *)(local_470 + 0x38) >> 3) <= puVar13) {
            _invalid_parameter_noinfo();
          }
          lVar2 = *(longlong *)(*(longlong *)(local_470 + 0x38) + (longlong)puVar13 * 8);
          if (lVar2 != 0) {
            iVar6 = FUN_1416397a0(lVar2);
            local_res20 = 0;
            local_res18 = 0;
            cVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),iVar6);
            if (cVar5 != '\0') {
              local_res20 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),iVar6);
              local_res18 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48),iVar6);
            }
            FUN_1416496b0(local_458);
            pcVar10 = (char *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x110))(*(longlong **)(param_1 + 0x48),iVar6);
            pcVar11 = (char *)FUN_1416397b0(lVar2);
            uVar12 = FUN_141649760(local_458,0xf,iVar6,local_res20,local_res18,pcVar11,pcVar10,cVar5);
            if ((int)uVar12 != 0) {
              (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48),local_res10[0],local_458);
            }
            FUN_141649700((undefined8 *)local_458);
          }
          puVar13 = (ulonglong *)((longlong)puVar13 + 1);
          param_2 = local_res10[0];
        } while (puVar13 < puVar14);
      }
      if (puVar14 != (ulonglong *)0x0) {
        do {
          if ((ulonglong *)(*(longlong *)(local_470 + 0x40) - *(longlong *)(local_470 + 0x38) >> 3) <= puVar15) {
            _invalid_parameter_noinfo();
          }
          lVar2 = *(longlong *)(*(longlong *)(local_470 + 0x38) + (longlong)puVar15 * 8);
          if (lVar2 != 0) {
            uVar7 = FUN_1416397a0(lVar2);
            FUN_1416496b0(local_458);
            plVar3 = *(longlong **)(param_1 + 0x48);
            pcVar10 = (char *)(**(code **)(*plVar3 + 0x110))(plVar3,param_2);
            pcVar11 = (char *)(**(code **)(*plVar3 + 0x50))(plVar3,local_res10[0]);
            uVar8 = (**(code **)(*plVar3 + 0x48))(plVar3,local_res10[0]);
            uVar4 = local_res10[0];
            uVar9 = (**(code **)(*plVar3 + 0x40))(plVar3,local_res10[0]);
            uVar12 = FUN_141649760(local_458,0xc,uVar4,uVar9,uVar8,pcVar11,pcVar10,0);
            if ((int)uVar12 == 0) {
              log_InlineLogERROR(&DAT_141654618);
            }
            else {
              (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),local_458,uVar7);
            }
            FUN_141649700((undefined8 *)local_458);
            puVar14 = local_478;
          }
          puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          param_2 = local_res10[0];
        } while (puVar15 < puVar14);
      }
    }
  }
  return;
}




undefined1 FUN_14163cb10(longlong param_1,uint param_2)

{
  FUN_14163c7c0(param_1,param_2);
  return 1;
}




void FUN_14163cb20(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  CMsg local_438 [1040];
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    uVar10 = 0;
    lVar5 = FUN_14163c190(param_1,param_2);
    if (lVar5 != 0) {
      do {
        lVar5 = FUN_14163c2a0(param_1,param_2,uVar10);
        if (lVar5 != 0) {
          uVar2 = FUN_1416397a0(lVar5);
          FUN_1416496b0(local_438);
          plVar1 = *(longlong **)(param_1 + 0x48);
          pcVar6 = (char *)(**(code **)(*plVar1 + 0x110))(plVar1,param_2);
          pcVar7 = (char *)(**(code **)(*plVar1 + 0x50))(plVar1,param_2);
          uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
          uVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
          uVar8 = FUN_141649760(local_438,0xd,param_2,uVar4,uVar3,pcVar7,pcVar6,0);
          if ((int)uVar8 == 0) {
            log_InlineLogERROR(&DAT_141654618);
          }
          else {
            (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),local_438,uVar2);
          }
          FUN_141649700((undefined8 *)local_438);
        }
        uVar10 = uVar10 + 1;
        uVar9 = FUN_14163c190(param_1,param_2);
      } while (uVar10 < uVar9);
    }
  }
  return;
}




void FUN_14163ccd0(longlong param_1,uint param_2)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_1d8;
  undefined8 local_1d0;
  ulonglong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  uint local_1a8;
  undefined4 local_1a4 [103];
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x51);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = puVar4;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    puVar4 = puVar9;
    puVar9 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x51);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_1b0 = puVar4;
  local_1b8 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar8 = &local_1d8;
    local_1d0 = *(undefined8 *)(param_1 + 0x38);
    local_1d8 = *(longlong *)(param_1 + 8);
  }
  else {
    plVar8 = &local_1b8;
  }
  puVar2 = (ulonglong *)*plVar8;
  lVar3 = *(longlong *)(param_1 + 0x38);
  local_1c8 = puVar2;
  local_1c0 = plVar8[1];
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_1c0;
  if (local_1c0 != lVar3) {
    uVar10 = 0;
    if (puVar2 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar11 = uVar10;
    }
    else {
      uVar11 = *puVar2;
    }
    if (lVar5 == *(longlong *)(uVar11 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar11 = *(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3;
    memset(local_1a4,0,400);
    local_1a8 = param_2;
    if (uVar11 != 0) {
      do {
        if ((ulonglong)(*(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) >> 3) <= uVar10) {
          _invalid_parameter_noinfo();
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + uVar10 * 8);
        if (lVar3 != 0) {
          uVar6 = FUN_1416397a0(lVar3);
          local_1a4[uVar10] = uVar6;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x128))(*(longlong **)(param_1 + 0x48),&local_1a8);
  }
  return;
}




void FUN_14163ce60(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint local_res10 [2];
  longlong *local_458;
  longlong local_450;
  undefined8 local_448;
  CMsg local_438 [1040];
  
  local_448 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_14163ba30((longlong *)(param_1 + 8),(longlong *)&local_458,local_res10);
    FUN_1416496b0(local_438);
    plVar9 = *(longlong **)(param_1 + 0x48);
    pcVar6 = (char *)(**(code **)(*plVar9 + 0x110))(plVar9,param_2);
    pcVar7 = (char *)(**(code **)(*plVar9 + 0x50))(plVar9,param_2);
    uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9,param_2);
    uVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,param_2);
    uVar8 = FUN_141649760(local_438,0x14,param_2,uVar5,uVar4,pcVar7,pcVar6,0);
    if ((int)uVar8 == 0) {
      FUN_141649700((undefined8 *)local_438);
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x38);
      if ((local_458 == (longlong *)0x0) || (local_458 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (local_450 != lVar10) {
        if (local_458 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *local_458;
        }
        if (local_450 == *(longlong *)(lVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar9 = *(longlong **)(local_450 + 0x38);
        if (*(longlong **)(local_450 + 0x40) < plVar9) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(local_450 + 0x20);
        while( true ) {
          plVar2 = *(longlong **)(local_450 + 0x40);
          if (plVar2 < *(longlong **)(local_450 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(local_450 + 0x20))) {
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
          if (*plVar9 != 0) {
            uVar4 = FUN_1416397a0(*plVar9);
            cVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),uVar4);
            if (cVar3 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48),uVar4,local_438);
            }
          }
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
          plVar9 = plVar9 + 1;
        }
      }
      FUN_141649700((undefined8 *)local_438);
    }
  }
  return;
}




undefined4 * FUN_14163d0a0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_14163bc70((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




undefined8 * FUN_14163d0d0(undefined8 *param_1)

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
  lVar2 = FUN_14163aef0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_14163d150(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_14163be20((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_14163d244;
  }
  _invalid_parameter_noinfo();
LAB_14163d244:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_14163d280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_14163bc70(param_1 + 4,(undefined8 *)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void FUN_14163d2e0(longlong param_1)

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




void FUN_14163d330(longlong *param_1,undefined8 *param_2)

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
  FUN_14163d150(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_14163d3e0(undefined8 param_1,longlong param_2)

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




undefined8 * FUN_14163d430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_14163bc70(puVar1 + 4,(undefined8 *)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_14163d4d0(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 local_res8 [2];
  longlong *local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  FUN_141635b40(param_3);
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x51);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
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
    cVar1 = *(char *)((longlong)puVar6 + 0x51);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  local_50 = puVar4;
  local_58 = *(longlong **)(param_1 + 8);
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar9) || (param_2 < *(uint *)(puVar4 + 3))) {
    pplVar8 = &local_48;
    plStack_40 = *(longlong **)(param_1 + 0x38);
    local_48 = *(longlong **)(param_1 + 8);
  }
  else {
    pplVar8 = &local_58;
  }
  plVar2 = *pplVar8;
  plVar3 = *(longlong **)(param_1 + 0x38);
  local_38 = plVar2;
  plStack_30 = pplVar8[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  plVar5 = plStack_30;
  if (plStack_30 != plVar3) {
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
    iVar13 = 0;
    uVar12 = 0;
    uVar7 = plVar5[8] - plVar5[7] >> 3;
    if (0 < (int)uVar7) {
      do {
        if (uVar7 <= uVar12) {
          _invalid_parameter_noinfo();
        }
        lVar10 = *(longlong *)(plVar5[7] + uVar12 * 8);
        if (lVar10 != 0) {
          local_res8[0] = FUN_1416397a0(lVar10);
          plVar2 = (longlong *)param_3[3];
          if (plVar2 == (longlong *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = param_3[5] - (longlong)plVar2 >> 2;
          }
          plVar3 = (longlong *)param_3[4];
          if ((ulonglong)((longlong)plVar3 - (longlong)plVar2 >> 2) < uVar7) {
            *(undefined4 *)plVar3 = local_res8[0];
            param_3[4] = (longlong)((longlong)plVar3 + 4);
          }
          else {
            if (plVar3 < plVar2) {
              _invalid_parameter_noinfo();
            }
            uVar7 = param_3[3];
            plVar2 = (longlong *)*param_3;
            local_38 = plVar2;
            plStack_30 = plVar3;
            if ((param_3[4] - uVar7 & 0xfffffffffffffffc) == 0) {
              lVar10 = 0;
            }
            else {
              if ((ulonglong)param_3[4] < uVar7) {
                _invalid_parameter_noinfo();
              }
              if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_3)) {
                _invalid_parameter_noinfo();
              }
              lVar10 = (longlong)((longlong)plVar3 - uVar7) >> 2;
            }
            local_48 = local_38;
            plStack_40 = plStack_30;
            FUN_141634fb0((longlong)param_3,(longlong)&local_48,1,local_res8);
            uVar7 = param_3[3];
            if ((ulonglong)param_3[4] < uVar7) {
              _invalid_parameter_noinfo();
            }
            plVar2 = (longlong *)*param_3;
            if (plVar2 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar2;
            }
            uVar7 = uVar7 + lVar10 * 4;
            if (uVar7 <= *(ulonglong *)(lVar11 + 0x20)) {
              if (plVar2 == (longlong *)0x0) {
                lVar10 = 0;
              }
              else {
                lVar10 = *plVar2;
              }
              if (*(ulonglong *)(lVar10 + 0x18) <= uVar7) goto LAB_14163d718;
            }
            _invalid_parameter_noinfo();
          }
        }
LAB_14163d718:
        iVar13 = iVar13 + 1;
        uVar12 = uVar12 + 1;
        uVar7 = plVar5[8] - plVar5[7] >> 3;
      } while (iVar13 < (int)uVar7);
    }
  }
  return;
}




void FUN_14163d750(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *local_res8;
  uint local_res10 [2];
  longlong *local_88;
  undefined4 *puStack_80;
  longlong *local_78;
  undefined4 *puStack_70;
  longlong *local_68 [3];
  undefined4 *local_50;
  undefined4 *local_48;
  longlong local_40;
  
  local_res10[0] = param_2;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 != 0) {
    FUN_14163ba30((longlong *)(param_1 + 8),(longlong *)&local_88,local_res10);
    plVar11 = local_88;
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    if ((local_88 == (longlong *)0x0) || (local_88 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
    }
    puVar2 = puStack_80;
    if (puStack_80 != puVar1) {
      plVar9 = (longlong *)0x0;
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar11 = plVar9;
      }
      else {
        plVar11 = (longlong *)*plVar11;
      }
      if (puVar2 == (undefined4 *)plVar11[6]) {
        _invalid_parameter_noinfo();
      }
      plVar11 = (longlong *)(*(longlong *)(puVar2 + 0x10) - *(longlong *)(puVar2 + 0xe) >> 3);
      local_res8 = operator_new(8);
      local_68[0] = plVar9;
      if (local_res8 != (longlong *)0x0) {
        *local_res8 = (longlong)local_68;
        local_68[0] = local_res8;
      }
      local_50 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      if (plVar11 != (longlong *)0x0) {
        do {
          uVar8 = 0;
          if ((longlong *)(*(longlong *)(puVar2 + 0x10) - *(longlong *)(puVar2 + 0xe) >> 3) <= plVar9) {
            _invalid_parameter_noinfo();
          }
          lVar10 = *(longlong *)(*(longlong *)(puVar2 + 0xe) + (longlong)plVar9 * 8);
          if (lVar10 != 0) {
            uVar6 = FUN_1416397a0(lVar10);
            cVar5 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),uVar6);
            if (cVar5 != '\0') {
              uVar6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48),uVar6);
              puVar1 = local_48;
              local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar6);
              if (local_50 != (undefined4 *)0x0) {
                uVar8 = local_40 - (longlong)local_50 >> 2;
              }
              if ((ulonglong)((longlong)local_48 - (longlong)local_50 >> 2) < uVar8) {
                *local_48 = uVar6;
                local_48 = local_48 + 1;
              }
              else {
                if (local_48 < local_50) {
                  _invalid_parameter_noinfo();
                }
                puVar4 = local_50;
                plVar3 = local_68[0];
                local_88 = local_68[0];
                puStack_80 = puVar1;
                if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) == 0) {
                  lVar10 = 0;
                }
                else {
                  if (local_48 < local_50) {
                    _invalid_parameter_noinfo();
                  }
                  if ((plVar3 == (longlong *)0x0) || (plVar3 != local_68[0])) {
                    _invalid_parameter_noinfo();
                  }
                  lVar10 = (longlong)puVar1 - (longlong)puVar4 >> 2;
                }
                local_78 = local_88;
                puStack_70 = puStack_80;
                FUN_141634fb0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res8);
                puVar1 = local_50;
                if (local_48 < local_50) {
                  _invalid_parameter_noinfo();
                }
                plVar3 = local_68[0];
                if (local_68[0] == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar7 = 0;
                }
                else {
                  lVar7 = *local_68[0];
                }
                if (puVar1 + lVar10 <= *(undefined4 **)(lVar7 + 0x20)) {
                  if (plVar3 == (longlong *)0x0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = *plVar3;
                  }
                  if (*(undefined4 **)(lVar7 + 0x18) <= puVar1 + lVar10) goto LAB_14163da06;
                }
                _invalid_parameter_noinfo();
              }
            }
          }
LAB_14163da06:
          plVar9 = (longlong *)((longlong)plVar9 + 1);
        } while (plVar9 < plVar11);
      }
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))(*(longlong **)(param_1 + 0x48),local_68,param_3);
      if (local_50 != (undefined4 *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
    }
  }
  return;
}




undefined8 * FUN_14163da70(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141661b68);
  }
  FUN_141639ec0(param_3);
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
        goto LAB_14163dc5c;
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
LAB_14163dc5c:
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
            FUN_14163a730((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_141639ce0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_14163a730((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_141639ce0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_14163a730((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_141639ce0((longlong)param_1,plVar7);
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




void FUN_14163de60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_14163de60(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_14163df10(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
  }
  plVar5 = FUN_14163d430(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_14163e250(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *plStack_30;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x51);
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar9[2];
      puVar9 = puVar5;
    }
    else {
      puVar6 = (undefined8 *)*puVar9;
    }
    puVar5 = puVar9;
    puVar9 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x51);
  }
  local_40 = puVar5;
  local_48 = *(longlong **)(param_1 + 8);
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar9) || (param_2 < *(uint *)(puVar5 + 3))) {
    plStack_30 = (longlong *)*(undefined8 *)(param_1 + 0x38);
    local_38 = *(longlong **)(param_1 + 8);
    pplVar8 = &local_38;
  }
  else {
    pplVar8 = &local_48;
  }
  plVar2 = *pplVar8;
  plVar3 = pplVar8[1];
  plVar4 = *(longlong **)(param_1 + 0x38);
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  if (plVar3 != plVar4) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    iVar10 = 0;
    if (plVar3 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    for (; iVar10 < (int)(plVar3[8] - plVar3[7] >> 3); iVar10 = iVar10 + 1) {
      if ((ulonglong)(plVar3[8] - plVar3[7] >> 3) <= (ulonglong)(longlong)iVar10) {
        _invalid_parameter_noinfo();
      }
      FUN_141639560(*(undefined8 **)(plVar3[7] + (longlong)iVar10 * 8));
      if ((ulonglong)(plVar3[8] - plVar3[7] >> 3) <= (ulonglong)(longlong)iVar10) {
        _invalid_parameter_noinfo();
      }
      *(undefined8 *)(plVar3[7] + (longlong)iVar10 * 8) = 0;
    }
    FUN_14163bb90(plVar3 + 4);
    local_38 = plVar2;
    plStack_30 = plVar3;
    FUN_14163da70((undefined8 *)(param_1 + 8),&local_48,(longlong *)&local_38);
  }
  return;
}




longlong * FUN_14163e420(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x51) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_14163e57d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14163e5ac;
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
      if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x51);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x51);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x51);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x51) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x51) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_14163e57d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14163df10(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14163e5ac:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_14163e5d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14163de60(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_14163e610(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14163de60(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_14163da70(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x00014163e957) */
/* WARNING: Removing unreachable block (ram,0x00014163e92d) */
/* WARNING: Removing unreachable block (ram,0x00014163e93e) */
/* WARNING: Removing unreachable block (ram,0x00014163e98c) */
/* WARNING: Removing unreachable block (ram,0x00014163e991) */
/* WARNING: Removing unreachable block (ram,0x00014163e99c) */
/* WARNING: Removing unreachable block (ram,0x00014163e9a1) */
/* WARNING: Removing unreachable block (ram,0x00014163e9a6) */
/* WARNING: Removing unreachable block (ram,0x00014163e9ac) */

undefined8 FUN_14163e7f0(longlong param_1,uint param_2,undefined4 param_3,char *param_4)

{
  longlong lVar1;
  void **ppvVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint local_res10 [2];
  undefined4 local_res18;
  void **local_c8 [3];
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void **local_98;
  longlong lStack_90;
  undefined8 *local_78;
  uint local_70 [2];
  void *local_68 [3];
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  void **local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  puVar5 = FUN_141639980();
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  local_78 = puVar5;
  plVar6 = (longlong *)InstanceGet();
  uVar7 = FUN_141639620((longlong)puVar5,param_2,param_3,param_4,plVar6);
  if ((char)uVar7 == '\0') {
    uVar7 = FUN_141639560(puVar5);
    return uVar7 & 0xffffffffffffff00;
  }
  FUN_14163ba30((longlong *)(param_1 + 8),(longlong *)&local_98,local_res10);
  ppvVar2 = local_98;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((local_98 == (void **)0x0) || (local_98 != *(void ***)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = lStack_90;
  if (lStack_90 != lVar1) {
    if (ppvVar2 == (void **)0x0) {
      _invalid_parameter_noinfo();
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = *ppvVar2;
    }
    if (lVar4 == *(longlong *)((longlong)pvVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_14163d330((longlong *)(lVar4 + 0x20),&local_78);
    goto LAB_14163eac7;
  }
  local_38 = operator_new(8);
  if (local_38 == (void **)0x0) {
    local_c8[0] = (void **)0x0;
  }
  else {
    *local_38 = local_c8;
    local_c8[0] = local_38;
  }
  pvVar8 = (void *)0x0;
  lStack_90 = 0;
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_98 = local_c8[0];
  FUN_14163be20((longlong)local_c8,(longlong)&local_98,1,&local_78);
  pvVar3 = local_b0;
  if (local_a8 < local_b0) {
    _invalid_parameter_noinfo();
  }
  ppvVar2 = local_c8[0];
  if (local_c8[0] == (void **)0x0) {
    _invalid_parameter_noinfo();
    pvVar10 = pvVar8;
  }
  else {
    pvVar10 = *local_c8[0];
  }
  if (*(void **)((longlong)pvVar10 + 0x20) < pvVar3) {
LAB_14163ea22:
    _invalid_parameter_noinfo();
  }
  else {
    if (ppvVar2 != (void **)0x0) {
      pvVar8 = *ppvVar2;
    }
    if (pvVar3 < *(void **)((longlong)pvVar8 + 0x18)) goto LAB_14163ea22;
  }
  local_70[0] = param_2;
  FUN_14163bc70(local_68,local_c8);
  FUN_14163e420((longlong *)(param_1 + 8),(longlong *)&local_98,local_70);
  local_98 = local_68;
  if (local_50 != (void *)0x0) {
    operator_delete(local_50);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  operator_delete(local_68[0]);
  if (local_b0 != (void *)0x0) {
    operator_delete(local_b0);
  }
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
LAB_14163eac7:
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x130))(*(longlong **)(param_1 + 0x48),param_2,local_res18,4);
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}




undefined8 FUN_14163eb20(longlong param_1,uint param_2)

{
  void *pvVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  char *pcVar6;
  void **ppvVar7;
  ulonglong uVar8;
  undefined8 extraout_RAX;
  longlong lVar9;
  void **ppvVar10;
  void **ppvVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined1 uVar14;
  uint local_res10 [2];
  void **local_res18;
  void **local_res20;
  void **local_110 [3];
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  void **local_e0 [3];
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  void *local_a8;
  void **local_a0;
  uint local_90 [2];
  void *local_88 [3];
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50 [3];
  
  local_58 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = operator_new(8);
  if (local_res18 == (void **)0x0) {
    local_110[0] = (void **)0x0;
  }
  else {
    *local_res18 = local_110;
    local_110[0] = local_res18;
  }
  ppvVar11 = (void **)0x0;
  local_f8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  local_e8 = 0;
  local_res20 = local_res18;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x138))(*(longlong **)(param_1 + 0x48),local_110,param_2,0xb);
  plVar13 = local_f8;
  ppvVar2 = local_110[0];
  if (local_f0 < local_f8) {
    _invalid_parameter_noinfo();
    ppvVar2 = local_110[0];
  }
  do {
    plVar5 = local_f0;
    local_a0 = (void **)0x0;
    if (local_f0 < local_f8) {
      _invalid_parameter_noinfo();
    }
    local_a0 = local_110[0];
    if ((ppvVar2 == (void **)0x0) || (ppvVar2 != local_110[0])) {
      _invalid_parameter_noinfo();
    }
    if (plVar13 == plVar5) {
      if (local_f8 != (longlong *)0x0) {
        operator_delete(local_f8);
      }
      local_f8 = (longlong *)0x0;
      local_f0 = (longlong *)0x0;
      local_e8 = 0;
      operator_delete(local_110[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    if (ppvVar2 == (void **)0x0) {
      _invalid_parameter_noinfo();
      ppvVar7 = ppvVar11;
    }
    else {
      ppvVar7 = *ppvVar2;
    }
    if (ppvVar7[4] <= plVar13) {
      _invalid_parameter_noinfo();
    }
    if (*plVar13 != 0) {
      if (ppvVar2 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar7 = ppvVar11;
      }
      else {
        ppvVar7 = *ppvVar2;
      }
      uVar14 = plVar13 == ppvVar7[4];
      if (ppvVar7[4] <= plVar13) {
        _invalid_parameter_noinfo();
      }
      plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar13 + 0x20))((longlong *)*plVar13,&DAT_1416558c0);
      pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
      lVar9 = 1;
      pcVar12 = "";
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        uVar14 = *pcVar6 == *pcVar12;
        pcVar6 = pcVar6 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((bool)uVar14);
      if ((bool)uVar14) {
        if (ppvVar2 == (void **)0x0) {
          _invalid_parameter_noinfo();
          ppvVar7 = ppvVar11;
        }
        else {
          ppvVar7 = *ppvVar2;
        }
        if (ppvVar7[4] <= plVar13) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(*(longlong *)*plVar13 + 0x40))((longlong *)*plVar13,0);
      }
      else {
        ppvVar7 = (void **)FUN_141639980();
        local_res18 = ppvVar7;
        if (ppvVar7 != (void **)0x0) {
          if (ppvVar2 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar2;
          }
          if (ppvVar10[4] <= plVar13) {
            _invalid_parameter_noinfo();
          }
          uVar8 = FUN_141639a10((longlong)ppvVar7,(longlong *)*plVar13);
          if ((char)uVar8 == '\0') {
            FUN_141639560(ppvVar7);
          }
          else {
            FUN_14163ba30((longlong *)(param_1 + 8),(longlong *)&local_b0,local_res10);
            puVar3 = local_b0;
            pvVar1 = *(void **)(param_1 + 0x38);
            local_50[0] = *(undefined8 **)(param_1 + 8);
            if ((local_b0 == (undefined8 *)0x0) || (local_b0 != local_50[0])) {
              _invalid_parameter_noinfo();
            }
            pvVar4 = local_a8;
            if (local_a8 == pvVar1) {
              local_res20 = operator_new(8);
              local_e0[0] = ppvVar11;
              if (local_res20 != (void **)0x0) {
                *local_res20 = local_e0;
                local_e0[0] = local_res20;
              }
              local_c8 = (void *)0x0;
              local_c0 = 0;
              local_b8 = 0;
              local_a0 = local_res20;
              FUN_14163d330((longlong *)local_e0,&local_res18);
              local_90[0] = local_res10[0];
              FUN_14163bc70(local_88,local_e0);
              FUN_14163e420((longlong *)(param_1 + 8),(longlong *)local_50,local_90);
              local_res20 = local_88;
              if (local_70 != (void *)0x0) {
                operator_delete(local_70);
              }
              local_70 = (void *)0x0;
              local_68 = 0;
              local_60 = 0;
              operator_delete(local_88[0]);
              if (local_c8 != (void *)0x0) {
                operator_delete(local_c8);
              }
              local_c8 = (void *)0x0;
              local_c0 = 0;
              local_b8 = 0;
              operator_delete(local_e0[0]);
            }
            else {
              if (puVar3 == (undefined8 *)0x0) {
                _invalid_parameter_noinfo();
                ppvVar7 = ppvVar11;
              }
              else {
                ppvVar7 = (void **)*puVar3;
              }
              if (pvVar4 == ppvVar7[6]) {
                _invalid_parameter_noinfo();
              }
              FUN_14163d330((longlong *)((longlong)pvVar4 + 0x20),&local_res18);
            }
          }
        }
      }
      if (ppvVar2 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar7 = ppvVar11;
      }
      else {
        ppvVar7 = *ppvVar2;
      }
      if (ppvVar7[4] <= plVar13) {
        _invalid_parameter_noinfo();
      }
      if (*plVar13 != 0) {
        (*(code *)**(undefined8 **)*plVar13)((undefined8 *)*plVar13,1);
        *plVar13 = 0;
      }
    }
    if (ppvVar2 == (void **)0x0) {
      _invalid_parameter_noinfo();
      ppvVar7 = ppvVar11;
    }
    else {
      ppvVar7 = *ppvVar2;
    }
    if (ppvVar7[4] <= plVar13) {
      _invalid_parameter_noinfo();
    }
    plVar13 = plVar13 + 1;
  } while( true );
}




/* WARNING: Removing unreachable block (ram,0x00014163f13a) */
/* WARNING: Removing unreachable block (ram,0x00014163f101) */
/* WARNING: Removing unreachable block (ram,0x00014163f121) */
/* WARNING: Removing unreachable block (ram,0x00014163f16f) */
/* WARNING: Removing unreachable block (ram,0x00014163f174) */
/* WARNING: Removing unreachable block (ram,0x00014163f17f) */
/* WARNING: Removing unreachable block (ram,0x00014163f184) */
/* WARNING: Removing unreachable block (ram,0x00014163f189) */
/* WARNING: Removing unreachable block (ram,0x00014163f18f) */

undefined8 FUN_14163ef90(longlong param_1,uint param_2,uint *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 extraout_RAX_01;
  longlong lVar6;
  longlong *plVar7;
  uint local_res10 [2];
  void **local_res18;
  longlong *local_res20;
  longlong *local_b8 [3];
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong lStack_80;
  uint local_68 [2];
  void *local_60 [3];
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_3 == (uint *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*param_3 != param_2) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  local_res18 = (void **)FUN_141639a60(param_3);
  if (local_res18 == (void **)0x0) {
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 8);
  FUN_14163ba30(plVar1,(longlong *)&local_88,local_res10);
  lVar6 = *(longlong *)(param_1 + 0x38);
  if ((local_88 == (longlong *)0x0) || (local_88 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (lStack_80 != lVar6) {
    if (local_88 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *local_88;
    }
    if (lStack_80 == *(longlong *)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar4 = FUN_14163d330((longlong *)(lStack_80 + 0x20),&local_res18);
    goto LAB_14163f2ad;
  }
  local_res20 = operator_new(8);
  plVar5 = (longlong *)0x0;
  local_b8[0] = plVar5;
  if (local_res20 != (longlong *)0x0) {
    *local_res20 = (longlong)local_b8;
    local_b8[0] = local_res20;
  }
  lStack_80 = 0;
  local_90 = 0;
  local_98 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_88 = local_b8[0];
  FUN_14163be20((longlong)local_b8,(longlong)&local_88,1,&local_res18);
  pvVar3 = local_a0;
  if (local_98 < local_a0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = local_b8[0];
  if (local_b8[0] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar7 = plVar5;
  }
  else {
    plVar7 = (longlong *)*local_b8[0];
  }
  if ((void *)plVar7[4] < pvVar3) {
LAB_14163f206:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      plVar5 = (longlong *)*plVar2;
    }
    if (pvVar3 < (void *)plVar5[3]) goto LAB_14163f206;
  }
  local_68[0] = param_2;
  FUN_14163bc70(local_60,local_b8);
  FUN_14163e420(plVar1,(longlong *)&local_88,local_68);
  local_res18 = local_60;
  if (local_48 != (void *)0x0) {
    operator_delete(local_48);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  operator_delete(local_60[0]);
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
  operator_delete(local_b8[0]);
  uVar4 = extraout_RAX_01;
LAB_14163f2ad:
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}




void FUN_14163f2d0(longlong *param_1)

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
  FUN_14163e610(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_14163f340(longlong *param_1)

{
  FUN_14163f2d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14163f370(longlong *param_1)

{
  FUN_14163f2d0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14163f3a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  *param_1 = relation::CFriendMgr::vftable;
  plVar6 = *(longlong **)param_1[7];
  plVar2 = (longlong *)param_1[1];
  local_48 = plVar2;
  plStack_40 = plVar6;
  while( true ) {
    plVar3 = (longlong *)param_1[7];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[1])) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar3) break;
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
    puVar7 = (undefined8 *)plVar6[7];
    if ((undefined8 *)plVar6[8] < puVar7) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)plVar6[4];
    local_38 = plVar3;
    while( true ) {
      puStack_30 = puVar7;
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
      puVar4 = (undefined8 *)plVar6[8];
      if (puVar4 < (undefined8 *)plVar6[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)plVar6[4])) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 == puVar4) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
        FUN_141639560((undefined8 *)*puVar7);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar7 = puVar7 + 1;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x51);
        plVar6 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_40 = plVar6, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x51);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x51);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar5, plStack_40 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = param_1 + 1;
  FUN_14163de60(plVar6,*(longlong **)(param_1[7] + 8),param_3,param_4);
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  puStack_30 = (undefined8 *)param_1[7];
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_14163e610(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete((void *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  operator_delete((void *)*plVar6);
  return;
}




undefined8 * FUN_14163f650(undefined8 *param_1)

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
  lVar2 = FUN_14163aef0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14163f6d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = relation::CFriendMgr::vftable;
  FUN_14163f650(param_1 + 1);
  param_1[9] = 0;
  FUN_14163de60(param_1 + 1,*(longlong **)(param_1[7] + 8),param_3,param_4);
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  return param_1;
}




undefined8 * FUN_14163f750(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14163f3a0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_14163a590(param_1);
  }
  return param_1;
}




void FUN_14163f780(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_14163f7a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014163f7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_14163f7b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014163f7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_14163f7c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014163f7c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_14163f7d0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_14163f800(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_14163f810(void)

{
  return 0;
}




undefined8 FUN_14163f820(void)

{
  return 0;
}




undefined8 FUN_14163f830(void)

{
  return 0;
}




undefined8 FUN_14163f840(void)

{
  return 0;
}




undefined8 * FUN_14163f850(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_14163f880(undefined8 *param_1)

{
  *param_1 = relation::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 * FUN_14163f8b0(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgLog::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




bool FUN_14163f910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))(*(longlong **)(param_1 + 0x838),0x20);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (*(longlong *)(param_1 + 0x420) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  uVar2 = FUN_14163fed0(*(longlong *)(param_1 + 0x420),lVar1,param_3,param_4);
  return (char)uVar2 != '\0';
}




longlong * FUN_14163f9c0(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 < 0x7f2) {
      if (uVar1 == 0x7f1) {
        plVar3 = (longlong *)(param_1 + 0xc50);
      }
      else {
        if (uVar1 < 0x3ea) {
          return (longlong *)0x0;
        }
        if (uVar1 < 0x3ec) {
          plVar3 = (longlong *)(param_1 + 0x10);
        }
        else if (uVar1 == 0x3fb) {
          plVar3 = (longlong *)(param_1 + 0x428);
        }
        else {
          if (uVar1 != 0x411) {
            return (longlong *)0x0;
          }
          plVar3 = (longlong *)(param_1 + 0x840);
        }
      }
    }
    else if (uVar1 == 0x7fe) {
      plVar3 = (longlong *)(param_1 + 0x1060);
    }
    else {
      if (uVar1 != 0x7ff) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x1470);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




void FUN_14163fa70(void)

{
  return;
}




bool FUN_14163fa80(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = operator_new(0x28);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_141643070(puVar2);
  }
  *(undefined8 **)(param_1 + 0x420) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    bVar3 = false;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x3ea,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x3eb,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x7fe,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x3fb,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x411,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x7f1,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x838) + 8))(*(longlong **)(param_1 + 0x838),0x7ff,param_1);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x18))(*(longlong **)(param_1 + 0x838),0x20,*(undefined8 *)(param_1 + 0x420));
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}




undefined8 FUN_14163fbb0(void)

{
  return 1;
}




void FUN_14163fbc0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x210))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_14163fbf0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_14163fc20(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = relation::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_14164a530((CMsg *)(param_1 + 2));
  param_1[0x84] = 0;
  FUN_1416496b0((CMsg *)(param_1 + 0x85));
  param_1[0x107] = param_2;
  FUN_1416493a0((CMsg *)(param_1 + 0x108));
  FUN_14164a2e0((CMsg *)(param_1 + 0x18a));
  FUN_14164a6f0((CMsg *)(param_1 + 0x20c));
  FUN_14164b180((CMsg *)(param_1 + 0x28e));
  return param_1;
}




ulonglong FUN_14163fcd0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




void FUN_14163fcf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = relation::CModule::vftable;
  plVar1 = (longlong *)param_1[0x84];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x210))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_14164b1d0(param_1 + 0x28e);
  FUN_14164a740(param_1 + 0x20c);
  FUN_14164a330(param_1 + 0x18a);
  FUN_1416493f0(param_1 + 0x108);
  FUN_141649700(param_1 + 0x85);
  param_1[2] = relation::CMsgLog::vftable;
  param_1[2] = tq::CMsg::vftable;
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_14163fda0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  longlong *plVar1;
  
  plVar1 = FUN_14163f9c0(param_1,param_3,param_4);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,*(undefined8 *)(param_1 + 0x420));
  return (short)plVar1[1];
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0xfe10  1  ModuleCreate */
  puVar2 = operator_new(0x1880);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_14163fc20(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_14163fa80((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined8 * FUN_14163fe90(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14163fcf0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_14163fed0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  undefined8 *puVar5;
  ulonglong extraout_RAX_04;
  undefined7 extraout_var;
  ulonglong extraout_RAX_05;
  longlong lVar6;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 8) = param_2;
    puVar3 = (undefined8 *)FUN_141644870(0x50);
    puVar5 = (undefined8 *)0x0;
    puVar4 = puVar5;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = FUN_1416492b0(puVar3,param_2,param_3,param_4);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141654618);
      uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 8);
      cVar1 = FUN_141643e80((longlong)puVar4,lVar6);
      if (cVar1 == '\0') {
        log_InlineLogERROR(&DAT_141654618);
        uVar2 = extraout_RAX_01 & 0xffffffffffffff00;
      }
      else {
        puVar3 = (undefined8 *)FUN_14163a530(0x50);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
          puVar4 = FUN_14163f6d0(puVar3,lVar6,param_3,param_4);
        }
        *(undefined8 **)(param_1 + 0x18) = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_141654618);
          uVar2 = extraout_RAX_02 & 0xffffffffffffff00;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 8);
          cVar1 = FUN_141639ae0((longlong)puVar4,lVar6);
          if (cVar1 == '\0') {
            log_InlineLogERROR(&DAT_141654618);
            uVar2 = extraout_RAX_03 & 0xffffffffffffff00;
          }
          else {
            puVar4 = (undefined8 *)FUN_141632870(0x50);
            if (puVar4 != (undefined8 *)0x0) {
              puVar5 = FUN_1416394a0(puVar4,lVar6,param_3,param_4);
            }
            *(undefined8 **)(param_1 + 0x20) = puVar5;
            if (puVar5 == (undefined8 *)0x0) {
              log_InlineLogERROR(&DAT_141654618);
              uVar2 = extraout_RAX_04 & 0xffffffffffffff00;
            }
            else {
              cVar1 = FUN_141631620((longlong)puVar5,*(longlong *)(param_1 + 8));
              if (cVar1 == '\0') {
                log_InlineLogERROR(&DAT_141654618);
                uVar2 = extraout_RAX_05 & 0xffffffffffffff00;
              }
              else {
                uVar2 = CONCAT71(extraout_var,1);
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}




ulonglong FUN_141640100(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x00014164017c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))();
  return uVar1;
}




undefined8 FUN_141640180(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0x32;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0x32;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  return uVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141640210(longlong param_1,int param_2,char *param_3,undefined8 param_4)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  char local_428 [1023];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_141663a88 ^ (ulonglong)auStack_458;
  if (param_3 != (char *)0x0) {
    local_res20 = param_4;
    if (*(longlong *)(param_1 + 8) != 0) {
      if (param_2 == 0) {
        local_438 = 0xa9;
        log_InlineLogERROR(&DAT_141654618);
        return extraout_RAX_00 & 0xffffffffffffff00;
      }
      _vsnprintf(local_428,0x400,param_3,(va_list)&local_res20);
      local_29 = 0;
      uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2,local_428);
      return uVar1;
    }
    local_438 = 0xa5;
    log_InlineLogERROR(&DAT_141654618);
    local_28 = extraout_RAX;
  }
  return local_28 & 0xffffffffffffff00;
}




void FUN_141640300(longlong param_1,int param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416403ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  return;
}




ulonglong FUN_1416403b0(longlong param_1,int param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x00014164042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return uVar1;
}




ulonglong FUN_141640430(longlong param_1,int param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416404e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))();
  return uVar1;
}




void FUN_1416404f0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014164059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  return;
}




undefined8 FUN_1416405b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014164062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
  return uVar1;
}




ulonglong FUN_141640640(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416406f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
  return uVar1;
}




void FUN_141640700(longlong param_1,int param_2,int param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416407ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))();
  return;
}




undefined8 FUN_1416407c0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014164083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  return uVar1;
}




undefined8 FUN_141640840(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416408bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
  return uVar1;
}




ulonglong FUN_1416408c0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    lVar3 = -1;
    pcVar4 = (char *)0x0;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (lVar3 == -2) {
      log_InlineLogERROR(&DAT_141654618);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
  return uVar2;
}




undefined8 FUN_1416409c0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0xffffffff;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  return uVar1;
}




ulonglong FUN_141640a50(longlong param_1,int param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))();
  return uVar1;
}




undefined8 FUN_141640b10(longlong param_1,int param_2)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141640b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))();
  return uVar1;
}




undefined8 FUN_141640ba0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return uVar1;
}




undefined8 FUN_141640c20(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  return uVar1;
}




void FUN_141640ca0(longlong param_1,int param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141640d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 200))();
  return;
}




void FUN_141640d60(longlong param_1,int param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == 0) {
    lVar2 = -1;
    pcVar3 = (char *)0x0;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (lVar2 == -2) {
      log_InlineLogERROR(&DAT_141654618);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141640e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))();
  return;
}




ulonglong FUN_141640e40(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong extraout_RAX;
  longlong lVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) || (param_2 == 0)) || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_141654618);
    uVar3 = extraout_RAX;
  }
  else {
    lVar2 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
    uVar3 = 0;
    if (lVar2 != 0) {
      iVar1 = FUN_141643780(lVar2);
      uVar3 = CONCAT44(extraout_var,iVar1);
      if (iVar1 == 0) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




bool FUN_141640ee0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  lVar1 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return lVar1 != 0;
}




longlong FUN_141640fa0(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar1 = FUN_141646d00(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_141643770(lVar1);
      return lVar1;
    }
  }
  return 0;
}




undefined4 FUN_141641030(longlong param_1,uint param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar2 = FUN_141646d00(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if (lVar2 != 0) {
      uVar1 = FUN_141643760(lVar2);
      return uVar1;
    }
  }
  return 0;
}




void FUN_1416410c0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_1416462e0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141641140(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  CMsg local_458 [1048];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    lVar12 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if (lVar12 != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_3);
      if (cVar2 != '\0') {
        FUN_14164b180(local_458);
        plVar1 = *(longlong **)(param_1 + 8);
        uVar7 = (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
        uVar8 = (**(code **)(*plVar1 + 0x40))(plVar1,param_3);
        pcVar13 = (char *)(**(code **)(*plVar1 + 0xf8))(plVar1,param_3);
        bVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_3);
        uVar9 = (**(code **)(*plVar1 + 0x100))(plVar1,param_3);
        uVar10 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_3);
        uVar6 = (**(code **)(*plVar1 + 0xe0))(plVar1,param_3);
        uVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,param_3);
        uVar5 = (**(code **)(*plVar1 + 0xd0))(plVar1,param_3);
        uVar11 = (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
        uVar14 = FUN_14164b200((longlong)local_458,param_3,uVar11,uVar5,uVar4,uVar6,uVar10,uVar9,(ushort)bVar3,pcVar13,uVar8,uVar7);
        if ((char)uVar14 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_458);
        }
        FUN_14164b1d0((undefined8 *)local_458);
      }
    }
  }
  return;
}




void FUN_1416413f0(longlong param_1,uint param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_141647e50(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




bool FUN_141641470(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  lVar1 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return lVar1 != 0;
}




longlong FUN_141641530(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  lVar1 = FUN_141646bf0(*(longlong *)(param_1 + 0x10),param_2);
  return lVar1;
}




void FUN_1416415b0(longlong param_1,uint param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_1416473b0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




ulonglong FUN_141641630(longlong param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  if (param_4 == (char *)0x0) {
    lVar3 = -1;
    pcVar4 = (char *)0x0;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (lVar3 == -2) {
      log_InlineLogERROR(&DAT_141654618);
      return extraout_RAX_02 & 0xffffffffffffff00;
    }
  }
  uVar2 = FUN_141648440(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return uVar2;
}




ulonglong FUN_141641740(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar1 = FUN_141646820(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




bool FUN_141641800(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  lVar1 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return lVar1 != 0;
}




longlong FUN_1416418c0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    if (param_3 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar1 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_141643770(lVar1);
      return lVar1;
    }
  }
  return 0;
}




void FUN_141641980(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  lVar1 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
  if (lVar1 != 0) {
    FUN_141643790(lVar1);
  }
  return;
}




undefined4 FUN_141641a40(longlong param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    if (param_3 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar2 = FUN_141646a40(*(longlong *)(param_1 + 0x10),param_2,param_3);
    if (lVar2 != 0) {
      uVar1 = FUN_141643780(lVar2);
      return uVar1;
    }
  }
  return 0;
}




ulonglong FUN_141641b00(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar1 = FUN_141648a60(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_141641b80(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_141646e50(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141641c00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141641c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x80))();
  return;
}




longlong FUN_141641c10(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  lVar1 = FUN_14163c190(*(longlong *)(param_1 + 0x18),param_2);
  return lVar1;
}




void FUN_141641c90(longlong param_1,uint param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_14163d4d0(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return;
}




longlong FUN_141641d10(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar1 = FUN_14163c2a0(*(longlong *)(param_1 + 0x18),param_2,(longlong)param_3);
    if (lVar1 != 0) {
      lVar1 = FUN_1416397b0(lVar1);
      return lVar1;
    }
  }
  return 0;
}




undefined4 FUN_141641da0(longlong param_1,uint param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141654618);
      return 0;
    }
    lVar2 = FUN_14163c2a0(*(longlong *)(param_1 + 0x18),param_2,param_3);
    if (lVar2 != 0) {
      uVar1 = FUN_1416397a0(lVar2);
      return uVar1;
    }
  }
  return 0;
}




void FUN_141641e30(longlong param_1,uint param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_14163d750(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return;
}




undefined1 FUN_141641eb0(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  uVar1 = FUN_14163cb10(*(longlong *)(param_1 + 0x18),param_2);
  return uVar1;
}




ulonglong FUN_141641f30(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar1 = FUN_14163eb20(*(longlong *)(param_1 + 0x18),param_2);
  return uVar1;
}




void FUN_141641fb0(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined7 extraout_var;
  CMsg local_458 [1048];
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    lVar11 = FUN_14163c3f0(*(longlong *)(param_1 + 0x18),param_2,param_3);
    if (lVar11 != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_3);
      if (cVar2 != '\0') {
        FUN_14164a2e0(local_458);
        plVar1 = *(longlong **)(param_1 + 8);
        pcVar12 = (char *)(**(code **)(*plVar1 + 0xf8))(plVar1,param_3);
        bVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_3);
        uVar8 = (**(code **)(*plVar1 + 0x100))(plVar1,param_3);
        uVar9 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_3);
        uVar7 = (**(code **)(*plVar1 + 0xe0))(plVar1,param_3);
        uVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,param_3);
        uVar5 = (**(code **)(*plVar1 + 0xd0))(plVar1,param_3);
        uVar10 = (**(code **)(*plVar1 + 0x58))(plVar1);
        bVar6 = FUN_14164a360(local_458,0,param_3,uVar10,uVar5,uVar4,uVar7,uVar9,uVar8,(ushort)bVar3,pcVar12);
        if ((int)CONCAT71(extraout_var,bVar6) == 0) {
          log_InlineLogERROR(&DAT_141654618);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_458);
        }
        FUN_14164a330((undefined8 *)local_458);
      }
    }
  }
  return;
}




bool FUN_141642250(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  lVar1 = FUN_14163c3f0(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return lVar1 != 0;
}




void FUN_141642310(longlong param_1,uint param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_14163e250(*(longlong *)(param_1 + 0x18),param_2);
  return;
}




ulonglong FUN_141642390(longlong param_1,uint param_2,uint *param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == (uint *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar1 = FUN_14163ef90(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return uVar1;
}




ulonglong FUN_141642450(longlong param_1,uint param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_4 == (char *)0x0) {
    lVar3 = -1;
    pcVar4 = (char *)0x0;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (lVar3 == -2) {
      log_InlineLogERROR(&DAT_141654618);
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
  }
  uVar2 = FUN_14163e7f0(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4);
  return uVar2;
}




longlong FUN_141642530(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  lVar1 = FUN_14163c3f0(*(longlong *)(param_1 + 0x18),param_2,param_3);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  lVar1 = FUN_1416397b0(lVar1);
  return lVar1;
}




ulonglong FUN_141642620(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar1 = FUN_14163c570(*(longlong *)(param_1 + 0x18),param_2,param_3);
  return uVar1;
}




void FUN_1416426e0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_14163cb20(*(longlong *)(param_1 + 0x18),param_2);
  return;
}




void FUN_141642760(longlong param_1,uint param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_141636ef0(*(longlong *)(param_1 + 0x20),param_2,param_3);
  return;
}




void FUN_1416427e0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_141636560(*(longlong *)(param_1 + 0x20),param_2);
  return;
}




void FUN_141642860(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined7 extraout_var;
  CMsg local_458 [1048];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    lVar11 = FUN_1416354b0(*(longlong *)(param_1 + 0x20),param_2,param_3);
    if (lVar11 != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_3);
      if (cVar2 != '\0') {
        FUN_14164a2e0(local_458);
        plVar1 = *(longlong **)(param_1 + 8);
        pcVar12 = (char *)(**(code **)(*plVar1 + 0xf8))(plVar1,param_3);
        bVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_3);
        uVar8 = (**(code **)(*plVar1 + 0x100))(plVar1,param_3);
        uVar9 = (**(code **)(*plVar1 + 0xe8))(plVar1,param_3);
        uVar7 = (**(code **)(*plVar1 + 0xe0))(plVar1,param_3);
        uVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1,param_3);
        uVar5 = (**(code **)(*plVar1 + 0xd0))(plVar1,param_3);
        uVar10 = (**(code **)(*plVar1 + 0x58))(plVar1,param_3);
        bVar6 = FUN_14164a360(local_458,1,param_3,uVar10,uVar5,uVar4,uVar7,uVar9,uVar8,(ushort)bVar3,pcVar12);
        if ((int)CONCAT71(extraout_var,bVar6) == 0) {
          log_InlineLogERROR(&DAT_141654618);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_458);
        }
        FUN_14164a330((undefined8 *)local_458);
      }
    }
  }
  return;
}




bool FUN_141642b00(longlong param_1,uint param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return false;
  }
  bVar1 = FUN_141635b20(*(longlong *)(param_1 + 0x20),param_2,param_3);
  return bVar1;
}




ulonglong FUN_141642bc0(longlong param_1,uint param_2,uint param_3,char *param_4,char param_5,char param_6)

{
  char cVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  if (*(ulonglong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  if (param_4 == (char *)0x0) {
    lVar3 = -1;
    pcVar4 = (char *)0x0;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (lVar3 == -2) {
      log_InlineLogERROR(&DAT_141654618);
      return extraout_RAX_02 & 0xffffffffffffff00;
    }
  }
  uVar2 = FUN_141638430(*(ulonglong *)(param_1 + 0x20),param_2,param_3,param_4,param_5,param_6);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_141642ce0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar1 = FUN_141635770(*(longlong *)(param_1 + 0x20),param_2);
  return uVar1;
}




ulonglong FUN_141642d60(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(ulonglong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar1 = FUN_141638e00(*(ulonglong *)(param_1 + 0x20),param_2);
  return uVar1;
}




void FUN_141642de0(longlong param_1,int param_2,int param_3,char param_4)

{
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  FUN_1416371e0(*(longlong *)(param_1 + 0x20),param_2,param_3,param_4);
  return;
}




void FUN_141642e90(longlong param_1,uint param_2)

{
  FUN_14163ccd0(*(longlong *)(param_1 + 0x18),param_2);
  return;
}




undefined8 FUN_141642ea0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141642ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x110))();
  return uVar1;
}




ulonglong FUN_141642ef0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    log_InlineLogERROR(&DAT_141654618);
    uVar1 = extraout_RAX;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x118))();
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_14163ce60(*(longlong *)(param_1 + 0x18),param_2);
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}




undefined8 FUN_141642f90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000141642fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x120))();
  return uVar1;
}




void FUN_141642fe0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141643010(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141643040(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_141643070(undefined8 *param_1)

{
  *param_1 = relation::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




void FUN_141643090(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = relation::CProvider::vftable;
  if (param_1[2] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[4] = 0;
  }
  return;
}




undefined8 * FUN_141643130(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141643090(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141643160(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  IStringManager *pIVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  undefined1 auStackY_608 [32];
  ulonglong *local_5c8;
  ulonglong *local_5c0 [3];
  undefined4 *local_5a8;
  undefined4 *local_5a0;
  longlong local_598;
  ulonglong *local_588;
  undefined4 *puStack_580;
  ulonglong *local_578;
  undefined4 *puStack_570;
  undefined8 local_568;
  CMsg local_558 [1040];
  char local_148 [255];
  undefined1 local_49;
  ulonglong local_48;
  
  local_568 = 0xfffffffffffffffe;
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_608;
  if (param_1[1] == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_1[2] == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_14164a6f0(local_558);
    puVar16 = (ulonglong *)0x0;
    pcVar7 = (char *)(**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],param_2);
    uVar8 = FUN_14164a7a0((longlong)local_558,6,param_2,pcVar7,1,0,0);
    if ((char)uVar8 == '\0') {
      log_InlineLogERROR(&DAT_141654618);
    }
    else {
      local_588 = operator_new(8);
      local_5c0[0] = puVar16;
      if (local_588 != (ulonglong *)0x0) {
        *local_588 = (ulonglong)local_5c0;
        local_5c0[0] = local_588;
      }
      local_5a8 = (undefined4 *)0x0;
      local_5a0 = (undefined4 *)0x0;
      local_598 = 0;
      local_5c8 = (ulonglong *)0x0;
      lVar9 = (**(code **)(*param_1 + 0xf0))(param_1,param_2);
      if (lVar9 != 0) {
        do {
          uVar8 = 0;
          lVar9 = FUN_141646d00(param_1[2],param_2,(ulonglong)puVar16);
          if (lVar9 != 0) {
            plVar1 = (longlong *)param_1[1];
            lVar2 = *plVar1;
            uVar6 = FUN_141643760(lVar9);
            cVar5 = (**(code **)(lVar2 + 0x20))(plVar1,uVar6);
            if (cVar5 == '\0') {
              pIVar10 = theInstance();
              (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],param_2);
              pcVar7 = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_TRADE_BUDDY_DEL_ROLE");
              _snprintf(local_148,0x100,pcVar7);
              local_49 = 0;
              plVar1 = (longlong *)param_1[1];
              lVar2 = *plVar1;
              (**(code **)(lVar2 + 0x58))(plVar1,param_2);
              uVar6 = FUN_141643760(lVar9);
              uVar11 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
              (**(code **)(lVar2 + 0xb0))(plVar1,uVar11,uVar6,local_148);
              puVar16 = local_5c8;
            }
            else {
              lVar2 = *param_1;
              uVar6 = FUN_141643760(lVar9);
              (**(code **)(lVar2 + 0x108))(param_1,param_2,uVar6);
              uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2);
              puVar4 = local_5a0;
              local_5c8 = (ulonglong *)CONCAT44(local_5c8._4_4_,uVar6);
              uVar14 = uVar8;
              if (local_5a8 != (undefined4 *)0x0) {
                uVar14 = local_598 - (longlong)local_5a8 >> 2;
              }
              if ((ulonglong)((longlong)local_5a0 - (longlong)local_5a8 >> 2) < uVar14) {
                *local_5a0 = uVar6;
                local_5a0 = local_5a0 + 1;
              }
              else {
                if (local_5a0 < local_5a8) {
                  _invalid_parameter_noinfo();
                }
                puVar3 = local_5a8;
                puVar13 = local_5c0[0];
                local_588 = local_5c0[0];
                puStack_580 = puVar4;
                uVar14 = uVar8;
                if (((longlong)local_5a0 - (longlong)local_5a8 & 0xfffffffffffffffcU) != 0) {
                  if (local_5a0 < local_5a8) {
                    _invalid_parameter_noinfo();
                  }
                  if ((puVar13 == (ulonglong *)0x0) || (puVar13 != local_5c0[0])) {
                    _invalid_parameter_noinfo();
                  }
                  uVar14 = (longlong)puVar4 - (longlong)puVar3 >> 2;
                }
                local_578 = local_588;
                puStack_570 = puStack_580;
                FUN_141634fb0((longlong)local_5c0,(longlong)&local_578,1,(undefined4 *)&local_5c8);
                puVar4 = local_5a8;
                if (local_5a0 < local_5a8) {
                  _invalid_parameter_noinfo();
                }
                puVar13 = local_5c0[0];
                if (local_5c0[0] == (ulonglong *)0x0) {
                  _invalid_parameter_noinfo();
                  uVar15 = uVar8;
                }
                else {
                  uVar15 = *local_5c0[0];
                }
                if (puVar4 + uVar14 <= *(undefined4 **)(uVar15 + 0x20)) {
                  if (puVar13 != (ulonglong *)0x0) {
                    uVar8 = *puVar13;
                  }
                  if (*(undefined4 **)(uVar8 + 0x18) <= puVar4 + uVar14) goto LAB_14164346e;
                }
                _invalid_parameter_noinfo();
              }
LAB_14164346e:
              pIVar10 = theInstance();
              plVar1 = (longlong *)param_1[1];
              lVar2 = *plVar1;
              uVar11 = (**(code **)(lVar2 + 0x50))(plVar1,param_2);
              uVar12 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_TRADE_BUDDY_DEL_ROLE");
              uVar6 = FUN_141643760(lVar9);
              (**(code **)(lVar2 + 0x68))(plVar1,uVar6,uVar12,uVar11);
            }
          }
          puVar16 = (ulonglong *)((longlong)puVar16 + 1);
          local_5c8 = puVar16;
          puVar13 = (ulonglong *)(**(code **)(*param_1 + 0xf0))(param_1,param_2);
        } while (puVar16 < puVar13);
      }
      (**(code **)(*(longlong *)param_1[1] + 0x38))((longlong *)param_1[1],local_5c0,local_558);
      if (local_5a8 != (undefined4 *)0x0) {
        operator_delete(local_5a8);
      }
      local_5a8 = (undefined4 *)0x0;
      local_5a0 = (undefined4 *)0x0;
      local_598 = 0;
      operator_delete(local_5c0[0]);
    }
    FUN_14164a740((undefined8 *)local_558);
  }
  return;
}




ulonglong FUN_141643640(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  ulonglong extraout_RAX;
  longlong *plVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (param_2 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141654618);
      return extraout_RAX & 0xffffffffffffff00;
    }
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,&DAT_1416575dc);
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    *(undefined4 *)(param_1 + 8) = uVar1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,"userid");
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,"business");
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,&DAT_1416558c0);
    pcVar3 = (char *)(**(code **)(*plVar2 + 0x78))(plVar2);
    tq::StrCopy((char *)(param_1 + 0x14),pcVar3,0x10);
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,&DAT_1416575c8);
    in_RAX = (**(code **)(*plVar2 + 0x50))(plVar2);
    *(int *)(param_1 + 0x24) = (int)in_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined4 FUN_141643760(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




longlong FUN_141643770(longlong param_1)

{
  return param_1 + 0x14;
}




undefined4 FUN_141643780(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_141643790(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416437a0(longlong param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5,longlong *param_6)

{
  undefined8 uVar1;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined4 local_440;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_141663a88 ^ (ulonglong)auStack_468;
  if (param_6 == (longlong *)0x0) {
    local_448 = 0x88;
    log_InlineLogERROR(&DAT_141654618);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    tq::SafeCopy((char *)(param_1 + 0x14),param_4,0x10);
    local_440 = param_5;
    *(undefined4 *)(param_1 + 0x24) = param_5;
    local_448 = param_3;
    _snprintf(local_438,0x400,"insert into cq_business(userid, business, date) values(%lu, %lu, %u)");
    local_39 = 0;
    (**(code **)(*param_6 + 0x30))(param_6,local_438,1);
    uVar1 = (**(code **)(*param_6 + 0x18))(param_6);
    *(int *)(param_1 + 8) = (int)uVar1;
  }
  return uVar1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141643890(undefined8 param_1,longlong *param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  char local_418 [1023];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_141663a88 ^ (ulonglong)auStack_448;
  if (param_2 == (longlong *)0x0) {
    local_428 = 0xa0;
    log_InlineLogERROR(&DAT_141654618);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    _snprintf(local_418,0x400,"delete from cq_business where id=%lu LIMIT 1");
    local_19 = 0;
    uVar1 = (**(code **)(*param_2 + 0x30))(param_2,local_418,0,1);
  }
  return uVar1;
}




undefined8 FUN_141643940(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




void FUN_141643960(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




undefined * FUN_141643990(void)

{
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
  return &DAT_141663ae0;
}




void FUN_1416439f0(__uint64 param_1)

{
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
                    /* WARNING: Could not recover jumptable at 0x000141643a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141663ae0,param_1);
  return;
}




void FUN_141643a50(void *param_1)

{
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
                    /* WARNING: Could not recover jumptable at 0x000141643aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141663ae0,param_1);
  return;
}




void FUN_141643ab0(void *param_1)

{
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
                    /* WARNING: Could not recover jumptable at 0x000141643b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141663ae0,param_1);
  return;
}




undefined8 * FUN_141643b10(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CTradeBuddy::vftable;
  if ((param_2 & 1) != 0) {
    FUN_141643a50(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_141643b40(longlong param_1,int param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_468 [32];
  undefined4 local_448;
  undefined1 local_438;
  undefined8 local_430;
  char local_428 [1023];
  undefined1 local_29;
  ulonglong local_28;
  
  local_430 = 0xfffffffffffffffe;
  local_28 = DAT_141663a88 ^ (ulonglong)auStack_468;
  if (param_2 == 0) {
    local_448 = 0x1d;
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 == (longlong *)0x0) {
    local_448 = 0x1e;
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    _snprintf(local_428,0x400,"select * from cq_business where id = %lu limit 1");
    local_29 = 0;
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3,local_428,1);
    if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2), lVar3 != 0)) {
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x38))(plVar2);
      uVar1 = 0;
      local_438 = 0;
      if (plVar4 != (longlong *)0x0) {
        uVar5 = FUN_141643640(param_1,plVar4);
        uVar1 = (undefined1)uVar5;
        local_438 = uVar1;
        (**(code **)*plVar4)(plVar4,1);
      }
      (**(code **)*plVar2)(plVar2);
      return uVar1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  return 0;
}




ulonglong FUN_141643cb0(longlong param_1,longlong *param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_141643640(param_1,param_2);
  return uVar1;
}




undefined8 * FUN_141643d00(void)

{
  undefined8 *puVar1;
  
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141663ae0,0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = relation::CTradeBuddy::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  }
  return puVar1;
}




undefined8 * FUN_141643d90(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_141663ae8 & 1) == 0) {
    DAT_141663ae8 = DAT_141663ae8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663ae0,"CTradeBuddy");
    atexit((_func_5014 *)&LAB_141652660);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_141663ae0,0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = relation::CTradeBuddy::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = *param_1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = param_1[1];
    *(undefined4 *)(puVar1 + 2) = param_1[2];
    *(undefined4 *)((longlong)puVar1 + 0x14) = param_1[3];
    *(undefined4 *)(puVar1 + 3) = param_1[4];
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_1[5];
    *(undefined4 *)(puVar1 + 4) = param_1[6];
    *(undefined4 *)((longlong)puVar1 + 0x24) = param_1[7];
  }
  return puVar1;
}




undefined1 FUN_141643e80(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




bool FUN_141643ed0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141643f10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141643f60(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




void FUN_141644070(longlong param_1,longlong *param_2)

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




longlong FUN_141644140(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141644162;
  }
  lVar2 = *plVar1;
LAB_141644162:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141644180(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416441a2;
  }
  lVar2 = *plVar1;
LAB_1416441a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416441c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141644240(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141644264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416442d0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
}




longlong FUN_141644360(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_1416443d0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141644402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141644480(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416444b0;
  }
  else {
LAB_1416444b0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416444d8;
  }
  _invalid_parameter_noinfo();
LAB_1416444d8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141644510(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141644590(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_1 * 0x58);
  return;
}




void * FUN_141644650(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141644700(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141644740(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416447d0(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_141644810(void)

{
  if ((DAT_141663af8 & 1) == 0) {
    DAT_141663af8 = DAT_141663af8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663af0,"CTradeBuddyMgr");
    atexit((_func_5014 *)&LAB_141652670);
  }
  return &DAT_141663af0;
}




void FUN_141644870(__uint64 param_1)

{
  if ((DAT_141663af8 & 1) == 0) {
    DAT_141663af8 = DAT_141663af8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663af0,"CTradeBuddyMgr");
    atexit((_func_5014 *)&LAB_141652670);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416448c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_141663af0,param_1);
  return;
}




void FUN_1416448d0(void *param_1)

{
  if ((DAT_141663af8 & 1) == 0) {
    DAT_141663af8 = DAT_141663af8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663af0,"CTradeBuddyMgr");
    atexit((_func_5014 *)&LAB_141652670);
  }
                    /* WARNING: Could not recover jumptable at 0x000141644925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_141663af0,param_1);
  return;
}




void FUN_141644930(void *param_1)

{
  if ((DAT_141663af8 & 1) == 0) {
    DAT_141663af8 = DAT_141663af8 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_141663af0,"CTradeBuddyMgr");
    atexit((_func_5014 *)&LAB_141652670);
  }
                    /* WARNING: Could not recover jumptable at 0x000141644985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_141663af0,param_1);
  return;
}




longlong FUN_141644990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416449b2;
  }
  lVar2 = *plVar1;
LAB_1416449b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416449d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416449f2;
  }
  lVar2 = *plVar1;
LAB_1416449f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141644a10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141644a60(longlong param_1,longlong param_2)

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




void FUN_141644ac0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141644ad0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141644af2;
  }
  lVar2 = *plVar1;
LAB_141644af2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141644b10(longlong *param_1)

{
  FUN_141644240(param_1);
  return param_1;
}




void FUN_141644b30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141644b90(longlong *param_1)

{
  FUN_1416443d0(param_1);
  return param_1;
}




void FUN_141644bc0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141644c50(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141661c88);
  }
  operator_new(param_2 * 0x58);
  return;
}




longlong * FUN_141644cc0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141644240(param_1);
  return param_2;
}




longlong * FUN_141644cf0(longlong *param_1,longlong param_2)

{
  FUN_141644480(param_1,param_2);
  return param_1;
}




undefined8 * FUN_141644d20(undefined8 *param_1)

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




void * FUN_141644d80(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141644e00(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_141644e40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141644e62;
  }
  lVar2 = *plVar1;
LAB_141644e62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141644e80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141644ea2;
  }
  lVar2 = *plVar1;
LAB_141644ea2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141644ec0(longlong *param_1)

{
  FUN_141644240(param_1);
  return param_1;
}




void FUN_141644ee0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141644f00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141644f20(longlong *param_1)

{
  FUN_1416443d0(param_1);
  return param_1;
}




undefined8 FUN_141644f40(longlong param_1,ulonglong param_2)

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
      FUN_1416442d0();
    }
    lVar1 = FUN_141644bc0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141644fb0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141644fe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141645020(undefined8 *param_1)

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




longlong * FUN_141645060(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416450ca;
  }
  _invalid_parameter_noinfo();
LAB_1416450ca:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141645100(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141645160(void)

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




undefined8 * FUN_1416451c0(undefined8 *param_1)

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




void * FUN_141645210(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141645280(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141645300(void *param_1,longlong param_2,void *param_3)

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




void FUN_141645340(undefined8 *param_1)

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




void FUN_141645380(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416453a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416453e0(undefined8 *param_1)

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




undefined8 * FUN_141645430(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141645490(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141645160();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416454d0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141645520(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141645570(undefined8 *param_1)

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




void * FUN_1416455c0(longlong param_1,longlong param_2,void *param_3)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8) - (longlong)*(void **)(param_1 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_3,_DstSize,*(void **)(param_1 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_3);
}




void * FUN_141645630(void *param_1,longlong param_2,void *param_3)

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




void FUN_141645670(longlong param_1)

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




undefined8 * FUN_141645700(undefined8 *param_1)

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




undefined8 * FUN_141645760(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416457b0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141645800(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141645820(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416458b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141645910(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_141645a00(undefined8 *param_1)

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




void * FUN_141645a50(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

{
  rsize_t _DstSize;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_3 + 8) - (longlong)*(void **)(param_2 + 8) >> 3;
  _DstSize = lVar1 * 8;
  if (lVar1 != 0) {
    memmove_s(param_4,_DstSize,*(void **)(param_2 + 8),_DstSize);
  }
  return (void *)(_DstSize + (longlong)param_4);
}




void * FUN_141645af0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141645b30(longlong param_1)

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




longlong * FUN_141645b80(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x51) == '\0');
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




undefined8 * FUN_141645c50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_141645ce0(longlong *param_1)

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




void FUN_141645da0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141645dc0(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = (longlong)(param_2[4] - param_2[3]) >> 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (uVar4 != 0) {
    if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1416442d0();
    }
    lVar2 = FUN_141644bc0(param_1 + 2,uVar4);
    param_1[3] = lVar2;
    param_1[4] = lVar2;
    param_1[5] = lVar2 + uVar4 * 8;
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
    pvVar3 = FUN_141645a50(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_141645f20(undefined8 *param_1)

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




void FUN_141645f70(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1416442d0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141644bc0(param_1 + 0x10,uVar8);
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
      FUN_141645af0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141645af0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141645280(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined4 * FUN_141646220(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_141645dc0((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




void * FUN_141646260(void *param_1,uint param_2)

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




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416462e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulonglong uVar10;
  IStringManager *pIVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackY_ce8 [32];
  uint local_ca4;
  uint local_ca0;
  int local_c9c;
  undefined4 local_c98;
  longlong local_c90;
  longlong *local_c88;
  longlong local_c80;
  undefined8 local_c78;
  CMsg local_c68 [1040];
  CMsg local_858 [1040];
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_c78 = 0xfffffffffffffffe;
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_ce8;
  local_ca4 = param_2;
  local_ca0 = param_2;
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    FUN_14164a6f0(local_858);
    plVar14 = *(longlong **)(param_1 + 8);
    pcVar9 = (char *)(**(code **)(*plVar14 + 0x50))(plVar14,param_2);
    iVar6 = (**(code **)(*plVar14 + 0x70))(plVar14,param_2);
    uVar10 = FUN_14164a7a0((longlong)local_858,8,iVar6,pcVar9,1,0,0);
    if ((char)uVar10 == '\0') {
      FUN_14164a740((undefined8 *)local_858);
    }
    else {
      FUN_141645b80((longlong *)(param_1 + 0x10),(longlong *)&local_c88,&local_ca4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if ((local_c88 == (longlong *)0x0) || (local_c88 != *(longlong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (local_c80 == lVar15) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_858);
        FUN_14164a740((undefined8 *)local_858);
      }
      else {
        if (local_c88 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar15 = 0;
        }
        else {
          lVar15 = *local_c88;
        }
        uVar16 = 0;
        if (local_c80 == *(longlong *)(lVar15 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (0x14 < (ulonglong)(*(longlong *)(local_c80 + 0x40) - *(longlong *)(local_c80 + 0x38) >> 3)) {
          log_InlineLogERROR("UserID[%u] vecTradeBuddy.size() = %u  > _MAX_TRADE_BUDDY_SIZE ");
        }
        plVar14 = *(longlong **)(local_c80 + 0x38);
        if (*(longlong **)(local_c80 + 0x40) < plVar14) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(local_c80 + 0x20);
        local_c88 = (longlong *)_time64((__time64_t *)0x0);
        local_ca4 = 0;
        while( true ) {
          lVar15 = 0;
          plVar2 = *(longlong **)(local_c80 + 0x40);
          if (plVar2 < *(longlong **)(local_c80 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(local_c80 + 0x20))) {
            _invalid_parameter_noinfo();
          }
          if (plVar14 == plVar2) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar15 = *plVar1;
          }
          if (*(longlong **)(lVar15 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          lVar15 = *plVar14;
          local_c90 = lVar15;
          if (lVar15 != 0) {
            local_c9c = FUN_141643760(lVar15);
            uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_c9c);
            iVar7 = FUN_141643780(lVar15);
            iVar6 = 0;
            local_c98 = 0;
            cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_c9c);
            if (cVar5 != '\0') {
              local_c98 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),local_c9c);
            }
            if (iVar7 != 0) {
              iVar6 = ((iVar7 - (int)local_c88) + 0x3f480) / 0x3c;
              if (iVar6 < 1) {
                iVar6 = 0;
                FUN_141643790(lVar15);
                pIVar11 = theInstance();
                lVar15 = **(longlong **)(param_1 + 8);
                lVar12 = FUN_141643770(local_c90);
                uVar13 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_FORM_TRADE_BUDDY");
                (**(code **)(lVar15 + 0x68))(*(undefined8 *)(param_1 + 8),local_ca0,uVar13,lVar12);
                lVar15 = local_c90;
                uVar16 = local_ca4;
              }
            }
            FUN_14164a6f0(local_c68);
            pcVar9 = (char *)FUN_141643770(lVar15);
            uVar10 = FUN_14164a7a0((longlong)local_c68,5,local_c9c,pcVar9,uVar4,(short)iVar6,local_c98);
            param_2 = local_ca0;
            if ((char)uVar10 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),local_ca0,local_c68);
            }
            FUN_14164a740((undefined8 *)local_c68);
          }
          uVar16 = uVar16 + 1;
          local_ca4 = uVar16;
          if (0x13 < (int)uVar16) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar15 = 0;
          }
          else {
            lVar15 = *plVar1;
          }
          if (*(longlong **)(lVar15 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          plVar14 = plVar14 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2,local_858);
        plVar14 = (longlong *)InstanceGet();
        _snprintf(local_448,0x400,"update cq_business set date=0 where (259200 + date) <= %u and userid=%lu");
        local_49 = 0;
        (**(code **)(*plVar14 + 0x30))(plVar14,local_448,0,0);
        plVar14 = *(longlong **)(local_c80 + 0x38);
        if (*(longlong **)(local_c80 + 0x40) < plVar14) {
          _invalid_parameter_noinfo();
        }
        plVar1 = *(longlong **)(local_c80 + 0x20);
        while( true ) {
          plVar2 = *(longlong **)(local_c80 + 0x40);
          if (plVar2 < *(longlong **)(local_c80 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(local_c80 + 0x20))) {
            _invalid_parameter_noinfo();
          }
          if (plVar14 == plVar2) break;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar15 = 0;
          }
          else {
            lVar15 = *plVar1;
          }
          if (*(longlong **)(lVar15 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          lVar15 = *plVar14;
          if (lVar15 != 0) {
            FUN_14164a6f0(local_c68);
            pcVar9 = (char *)(**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
            uVar10 = FUN_14164a7a0((longlong)local_c68,2,param_2,pcVar9,1,0,0);
            if ((char)uVar10 != '\0') {
              puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 8);
              uVar8 = FUN_141643760(lVar15);
              (*(code *)*puVar3)(*(undefined8 *)(param_1 + 8),local_c68,uVar8);
            }
            FUN_14164a740((undefined8 *)local_c68);
          }
          lVar15 = 0;
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar15 = *plVar1;
          }
          if (*(longlong **)(lVar15 + 0x20) <= plVar14) {
            _invalid_parameter_noinfo();
          }
          plVar14 = plVar14 + 1;
        }
        FUN_14164a740((undefined8 *)local_858);
      }
    }
  }
  return;
}




ulonglong FUN_141646820(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  errno_t eVar5;
  undefined8 *puVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  ulonglong extraout_RAX_04;
  ulonglong extraout_RAX_05;
  undefined4 extraout_var;
  undefined8 uVar8;
  undefined4 extraout_var_00;
  undefined8 extraout_RAX_06;
  ulonglong extraout_RAX_07;
  ulonglong extraout_RAX_08;
  longlong *plVar9;
  longlong lVar10;
  rsize_t _DstSize;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong *local_30;
  undefined8 *local_28;
  
  puVar11 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar11 + 0x51);
  puVar12 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar11 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar11[2];
      puVar11 = puVar12;
    }
    else {
      puVar6 = (undefined8 *)*puVar11;
    }
    puVar12 = puVar11;
    puVar11 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x51);
  }
  local_48 = puVar12;
  local_50 = *(longlong *)(param_1 + 0x10);
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar12 == puVar11) || (param_2 < *(uint *)(puVar12 + 3))) {
    local_38 = *(undefined8 *)(param_1 + 0x40);
    local_40 = *(longlong *)(param_1 + 0x10);
    plVar9 = &local_40;
  }
  else {
    plVar9 = &local_50;
  }
  puVar2 = (ulonglong *)*plVar9;
  local_30 = puVar2;
  uVar7 = plVar9[1];
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  local_28 = (undefined8 *)uVar7;
  if ((puVar2 == (ulonglong *)0x0) || (puVar2 != *(ulonglong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX;
  }
  puVar11 = local_28;
  if (local_28 == (undefined8 *)uVar3) {
    return uVar7 & 0xffffffffffffff00;
  }
  if (puVar2 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar2;
  }
  if (puVar11 == (undefined8 *)*(ulonglong *)(uVar7 + 0x30)) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX_00;
  }
  puVar12 = *(undefined8 **)((longlong)puVar11 + 0x38);
  if (*(undefined8 **)((longlong)puVar11 + 0x40) < puVar12) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX_01;
  }
  plVar9 = *(longlong **)((longlong)puVar11 + 0x20U);
  while( true ) {
    puVar6 = *(undefined8 **)((longlong)puVar11 + 0x40);
    local_28 = puVar12;
    if (puVar6 < *(undefined8 **)((longlong)puVar11 + 0x38)) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_02;
    }
    if ((plVar9 == (longlong *)0x0) || (plVar9 != *(longlong **)((longlong)puVar11 + 0x20U))) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_03;
    }
    if (puVar12 == puVar6) break;
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_04;
    }
    else {
      lVar10 = *plVar9;
    }
    if (*(undefined8 **)(lVar10 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_05;
    }
    puVar6 = (undefined8 *)*puVar12;
    if (puVar6 != (undefined8 *)0x0) {
      iVar4 = FUN_141643760((longlong)puVar6);
      uVar7 = CONCAT44(extraout_var,iVar4);
      if (iVar4 == param_3) {
        uVar8 = FUN_141643940(puVar6);
        lVar10 = *(longlong *)((longlong)puVar11 + 0x40) - (longlong)(puVar12 + 1) >> 3;
        if (0 < lVar10) {
          _DstSize = lVar10 << 3;
          eVar5 = memmove_s(puVar12,_DstSize,puVar12 + 1,_DstSize);
          uVar8 = CONCAT44(extraout_var_00,eVar5);
        }
        *(longlong *)((longlong)puVar11 + 0x40U) = *(longlong *)((longlong)puVar11 + 0x40U) + -8;
        if ((puVar12 < *(undefined8 **)((longlong)puVar11 + 0x38)) || (*(undefined8 **)((longlong)puVar11 + 0x40) < puVar12)) {
          _invalid_parameter_noinfo();
          uVar8 = extraout_RAX_06;
        }
        return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
    }
    if (plVar9 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar7 = extraout_RAX_07;
    }
    else {
      lVar10 = *plVar9;
    }
    if (*(undefined8 **)(lVar10 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
      uVar7 = extraout_RAX_08;
    }
    puVar12 = puVar12 + 1;
  }
  return uVar7 & 0xffffffffffffff00;
}




longlong FUN_141646a40(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar10 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar10 + 0x51);
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar10 + 3) < param_2) {
      puVar7 = (undefined8 *)puVar10[2];
      puVar10 = puVar4;
    }
    else {
      puVar7 = (undefined8 *)*puVar10;
    }
    puVar4 = puVar10;
    puVar10 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x51);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x40);
  local_30 = puVar4;
  local_38 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar10) || (param_2 < *(uint *)(puVar4 + 3))) {
    plVar9 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x40);
    local_28 = *(longlong *)(param_1 + 0x10);
  }
  else {
    plVar9 = &local_38;
  }
  plVar2 = (longlong *)*plVar9;
  lVar8 = *(longlong *)(param_1 + 0x40);
  local_18 = plVar2;
  local_10 = plVar9[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_10;
  if (local_10 == lVar8) {
LAB_141646bc4:
    lVar8 = 0;
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
    plVar9 = *(longlong **)(lVar5 + 0x38);
    if (*(longlong **)(lVar5 + 0x40) < plVar9) {
      _invalid_parameter_noinfo();
    }
    plVar2 = *(longlong **)(lVar5 + 0x20);
    while( true ) {
      plVar3 = *(longlong **)(lVar5 + 0x40);
      if (plVar3 < *(longlong **)(lVar5 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(lVar5 + 0x20))) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 == plVar3) goto LAB_141646bc4;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      lVar8 = *plVar9;
      if ((lVar8 != 0) && (iVar6 = FUN_141643760(lVar8), iVar6 == param_3)) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar2;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar9) {
        _invalid_parameter_noinfo();
      }
      plVar9 = plVar9 + 1;
    }
  }
  return lVar8;
}




longlong FUN_141646bf0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x51);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
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
  lVar6 = *(longlong *)(param_1 + 0x40);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar6) {
    lVar6 = 0;
  }
  else {
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
    lVar6 = *(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 3;
  }
  return lVar6;
}




undefined8 FUN_141646d00(longlong param_1,uint param_2,ulonglong param_3)

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
  cVar1 = *(char *)((longlong)puVar7 + 0x51);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
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
    if (param_3 < (ulonglong)(*(longlong *)(lVar4 + 0x40) - *(longlong *)(lVar4 + 0x38) >> 3)) {
      return *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + param_3 * 8);
    }
    log_InlineLogERROR(&DAT_141654618);
  }
  return 0;
}




void FUN_141646e50(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  CMsg local_428 [1040];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    uVar6 = 0;
    lVar3 = FUN_141646bf0(param_1,param_2);
    if (lVar3 != 0) {
      do {
        lVar3 = FUN_141646d00(param_1,param_2,uVar6);
        if (lVar3 != 0) {
          FUN_14164a6f0(local_428);
          pcVar4 = (char *)(**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
          uVar5 = FUN_14164a7a0((longlong)local_428,3,param_2,pcVar4,0,0,0);
          if ((char)uVar5 != '\0') {
            puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
            uVar2 = FUN_141643760(lVar3);
            (*(code *)*puVar1)(*(undefined8 *)(param_1 + 8),local_428,uVar2);
          }
          FUN_14164a740((undefined8 *)local_428);
        }
        uVar6 = uVar6 + 1;
        uVar5 = FUN_141646bf0(param_1,param_2);
      } while (uVar6 < uVar5);
    }
  }
  return;
}




undefined4 * FUN_141646f80(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_141645dc0((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




undefined8 * FUN_141646fb0(undefined8 *param_1)

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
  lVar2 = FUN_141645160();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141647030(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141645f70((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141647124;
  }
  _invalid_parameter_noinfo();
LAB_141647124:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141647160(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_141645dc0(param_1 + 4,(undefined8 *)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void FUN_1416471c0(longlong param_1)

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




void FUN_141647210(longlong *param_1,undefined8 *param_2)

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
  FUN_141647030(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416472c0(undefined8 param_1,longlong param_2)

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




undefined8 * FUN_141647310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_141645dc0(puVar1 + 4,(undefined8 *)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_1416473b0(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 local_res8 [2];
  longlong *local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  FUN_141635b40(param_3);
  puVar10 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar10 + 0x51);
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar10 + 3) < param_2) {
      puVar7 = (undefined8 *)puVar10[2];
      puVar10 = puVar5;
    }
    else {
      puVar7 = (undefined8 *)*puVar10;
    }
    puVar5 = puVar10;
    puVar10 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x51);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x40);
  local_50 = puVar5;
  local_58 = *(longlong **)(param_1 + 0x10);
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar10) || (param_2 < *(uint *)(puVar5 + 3))) {
    pplVar8 = &local_48;
    plStack_40 = *(longlong **)(param_1 + 0x40);
    local_48 = *(longlong **)(param_1 + 0x10);
  }
  else {
    pplVar8 = &local_58;
  }
  plVar11 = *pplVar8;
  plVar2 = *(longlong **)(param_1 + 0x40);
  local_38 = plVar11;
  plStack_30 = pplVar8[1];
  if ((plVar11 == (longlong *)0x0) || (plVar11 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  plVar6 = plStack_30;
  if (plStack_30 != plVar2) {
    if (plVar11 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar12 = 0;
    }
    else {
      lVar12 = *plVar11;
    }
    if (plVar6 == *(longlong **)(lVar12 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar11 = (longlong *)plVar6[7];
    if ((longlong *)plVar6[8] < plVar11) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)plVar6[4];
    while( true ) {
      plVar3 = (longlong *)plVar6[8];
      if (plVar3 < (longlong *)plVar6[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)plVar6[4])) {
        _invalid_parameter_noinfo();
      }
      if (plVar11 == plVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar2;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar11) {
        _invalid_parameter_noinfo();
      }
      if (*plVar11 != 0) {
        local_res8[0] = FUN_141643760(*plVar11);
        plVar3 = (longlong *)param_3[3];
        if (plVar3 == (longlong *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = param_3[5] - (longlong)plVar3 >> 2;
        }
        plVar4 = (longlong *)param_3[4];
        if ((ulonglong)((longlong)plVar4 - (longlong)plVar3 >> 2) < uVar9) {
          *(undefined4 *)plVar4 = local_res8[0];
          param_3[4] = (longlong)((longlong)plVar4 + 4);
        }
        else {
          if (plVar4 < plVar3) {
            _invalid_parameter_noinfo();
          }
          uVar9 = param_3[3];
          plVar3 = (longlong *)*param_3;
          local_38 = plVar3;
          plStack_30 = plVar4;
          if ((param_3[4] - uVar9 & 0xfffffffffffffffc) == 0) {
            lVar12 = 0;
          }
          else {
            if ((ulonglong)param_3[4] < uVar9) {
              _invalid_parameter_noinfo();
            }
            if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_3)) {
              _invalid_parameter_noinfo();
            }
            lVar12 = (longlong)((longlong)plVar4 - uVar9) >> 2;
          }
          local_48 = local_38;
          plStack_40 = plStack_30;
          FUN_141634fb0((longlong)param_3,(longlong)&local_48,1,local_res8);
          uVar9 = param_3[3];
          if ((ulonglong)param_3[4] < uVar9) {
            _invalid_parameter_noinfo();
          }
          plVar3 = (longlong *)*param_3;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar13 = 0;
          }
          else {
            lVar13 = *plVar3;
          }
          uVar9 = uVar9 + lVar12 * 4;
          if (uVar9 <= *(ulonglong *)(lVar13 + 0x20)) {
            if (plVar3 == (longlong *)0x0) {
              lVar12 = 0;
            }
            else {
              lVar12 = *plVar3;
            }
            if (*(ulonglong *)(lVar12 + 0x18) <= uVar9) goto LAB_141647623;
          }
          _invalid_parameter_noinfo();
        }
      }
LAB_141647623:
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar2;
      }
      if (*(longlong **)(lVar12 + 0x20) <= plVar11) {
        _invalid_parameter_noinfo();
      }
      plVar11 = plVar11 + 1;
    }
  }
  return;
}




undefined8 * FUN_141647670(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141661b68);
  }
  FUN_141644240(param_3);
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
        goto LAB_14164785c;
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
LAB_14164785c:
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
            FUN_141644a60((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_141644070((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_141644a60((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_141644070((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_141644a60((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_141644070((longlong)param_1,plVar7);
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




void FUN_141647a60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_141647a60(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_141647b10(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141661c20);
  }
  plVar5 = FUN_141647310(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_141647e50(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x51);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x51);
  }
  local_58 = puVar3;
  local_60 = *(longlong **)(param_1 + 0x10);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plStack_30 = (longlong *)*(undefined8 *)(param_1 + 0x40);
    local_38 = *(longlong **)(param_1 + 0x10);
    pplVar7 = &local_38;
  }
  else {
    pplVar7 = &local_60;
  }
  plVar10 = *pplVar7;
  local_48 = plVar10;
  plStack_40 = pplVar7[1];
  plVar2 = *(longlong **)(param_1 + 0x40);
  if ((plVar10 == (longlong *)0x0) || (plVar10 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  plVar4 = plStack_40;
  if (plStack_40 != plVar2) {
    if (plVar10 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar10;
    }
    lVar9 = 0;
    if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar10 = plVar4 + 4;
    puVar8 = (undefined8 *)plVar4[7];
    if ((undefined8 *)plVar4[8] < puVar8) {
      _invalid_parameter_noinfo();
    }
    plVar2 = (longlong *)*plVar10;
    local_60 = plVar2;
    while( true ) {
      puVar3 = (undefined8 *)plVar4[8];
      local_58 = puVar8;
      if (puVar3 < (undefined8 *)plVar4[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar10)) {
        _invalid_parameter_noinfo();
      }
      if (puVar8 == puVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      FUN_141643940((undefined8 *)*puVar8);
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      *puVar8 = 0;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar9;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(undefined8 **)(lVar6 + 0x20) <= puVar8) {
        _invalid_parameter_noinfo();
      }
      puVar8 = puVar8 + 1;
    }
    FUN_141645ce0(plVar10);
    local_38 = local_48;
    plStack_30 = plStack_40;
    FUN_141647670((undefined8 *)(param_1 + 0x10),&local_48,(longlong *)&local_38);
  }
  return;
}




longlong * FUN_141648070(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x51) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_1416481cd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416481fc;
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
      if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x51) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x51);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x51);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x51);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x51) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x51) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_1416481cd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141647b10(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416481fc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_141648220(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141647a60(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_141648260(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141647a60(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_141647670(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001416488b3) */
/* WARNING: Removing unreachable block (ram,0x0001416485dc) */
/* WARNING: Removing unreachable block (ram,0x0001416485b2) */
/* WARNING: Removing unreachable block (ram,0x0001416485c3) */
/* WARNING: Removing unreachable block (ram,0x00014164889a) */
/* WARNING: Removing unreachable block (ram,0x0001416488e8) */
/* WARNING: Removing unreachable block (ram,0x000141648616) */
/* WARNING: Removing unreachable block (ram,0x000141648611) */
/* WARNING: Removing unreachable block (ram,0x000141648621) */
/* WARNING: Removing unreachable block (ram,0x000141648626) */
/* WARNING: Removing unreachable block (ram,0x00014164862b) */
/* WARNING: Removing unreachable block (ram,0x000141648631) */
/* WARNING: Removing unreachable block (ram,0x000141648889) */
/* WARNING: Removing unreachable block (ram,0x0001416488ed) */
/* WARNING: Removing unreachable block (ram,0x0001416488f8) */
/* WARNING: Removing unreachable block (ram,0x0001416488fd) */
/* WARNING: Removing unreachable block (ram,0x000141648902) */
/* WARNING: Removing unreachable block (ram,0x000141648908) */

undefined8 FUN_141648440(longlong param_1,uint param_2,uint param_3,char *param_4)

{
  void **ppvVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  __time64_t _Var5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  void **ppvVar9;
  undefined8 extraout_RAX;
  ulonglong uVar10;
  void **ppvVar11;
  void *pvVar12;
  undefined1 auStackY_158 [32];
  void **local_120 [3];
  void **local_108;
  void **local_100;
  void **local_f8;
  void **local_e8;
  void *pvStack_e0;
  undefined8 *local_c8;
  uint local_c0 [2];
  void **local_b8;
  void **local_b0;
  uint local_a8 [2];
  void *local_a0 [3];
  void **local_88;
  void **local_80;
  void **local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  char local_5c [16];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_70 = 0xfffffffffffffffe;
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_158;
  local_b0 = (void **)CONCAT44(local_b0._4_4_,param_2);
  local_c0[0] = param_3;
  local_b8 = (void **)param_1;
  puVar3 = FUN_141643d00();
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  local_c8 = puVar3;
  plVar4 = (longlong *)InstanceGet();
  _Var5 = _time64((__time64_t *)0x0);
  uVar6 = FUN_1416437a0((longlong)puVar3,param_2,param_3,param_4,(int)_Var5,plVar4);
  if ((int)uVar6 == 0) {
    uVar10 = FUN_141643940(puVar3);
    return uVar10 & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)(param_1 + 0x10);
  FUN_141645b80(plVar4,(longlong *)&local_e8,(uint *)&local_b0);
  ppvVar11 = local_e8;
  pvVar7 = *(void **)(param_1 + 0x40);
  if ((local_e8 == (void **)0x0) || (local_e8 != (void **)*plVar4)) {
    _invalid_parameter_noinfo();
  }
  pvVar12 = pvStack_e0;
  if (pvStack_e0 == pvVar7) {
    local_b0 = operator_new(8);
    if (local_b0 == (void **)0x0) {
      local_120[0] = (void **)0x0;
    }
    else {
      *local_b0 = local_120;
      local_120[0] = local_b0;
    }
    pvVar7 = (void *)0x0;
    pvStack_e0 = (void *)0x0;
    local_f8 = (void **)0x0;
    local_100 = (void *)0x0;
    local_108 = (void *)0x0;
    local_e8 = local_120[0];
    FUN_141645f70((longlong)local_120,(longlong)&local_e8,1,&local_c8);
    ppvVar11 = local_108;
    if (local_100 < local_108) {
      _invalid_parameter_noinfo();
    }
    ppvVar1 = local_120[0];
    if (local_120[0] == (void **)0x0) {
      _invalid_parameter_noinfo();
      pvVar12 = pvVar7;
    }
    else {
      pvVar12 = *local_120[0];
    }
    if (*(void **)((longlong)pvVar12 + 0x20) < ppvVar11) {
LAB_1416486a7:
      _invalid_parameter_noinfo();
    }
    else {
      if (ppvVar1 != (void **)0x0) {
        pvVar7 = *ppvVar1;
      }
      if (ppvVar11 < *(void **)((longlong)pvVar7 + 0x18)) goto LAB_1416486a7;
    }
    local_a8[0] = param_2;
    FUN_141645dc0(local_a0,local_120);
    FUN_141648070(plVar4,(longlong *)&local_e8,local_a8);
    local_e8 = local_a0;
    if (local_88 != (void *)0x0) {
      operator_delete(local_88);
    }
    local_88 = (void *)0x0;
    local_80 = (void **)0x0;
    local_78 = (void **)0x0;
    operator_delete(local_a0[0]);
    if (local_108 != (void *)0x0) {
      operator_delete(local_108);
    }
    local_108 = (void **)0x0;
    local_100 = (void **)0x0;
    local_f8 = (void **)0x0;
    operator_delete(local_120[0]);
  }
  else {
    if (ppvVar11 == (void **)0x0) {
      _invalid_parameter_noinfo();
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = *ppvVar11;
    }
    if (pvVar12 == *(void **)((longlong)pvVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    FUN_141647210((longlong *)((longlong)pvVar12 + 0x20),&local_c8);
  }
  ppvVar11 = (void **)0x0;
  local_68 = FUN_141643760((longlong)puVar3);
  local_64 = param_3;
  local_60 = param_2;
  pcVar8 = (char *)(**(code **)(**(longlong **)((longlong)local_b8 + 8) + 0x50))(*(longlong **)((longlong)local_b8 + 8),param_2);
  tq::SafeCopy(local_5c,pcVar8,0x10);
  local_4c = FUN_141643780((longlong)puVar3);
  local_c8 = FUN_141643d90(&local_68);
  FUN_141645b80(plVar4,(longlong *)&local_e8,local_c0);
  ppvVar1 = local_e8;
  pvVar7 = *(void **)(param_1 + 0x40);
  if ((local_e8 == (void **)0x0) || (local_e8 != (void **)*plVar4)) {
    _invalid_parameter_noinfo();
  }
  pvVar12 = pvStack_e0;
  if (pvStack_e0 != pvVar7) {
    if (ppvVar1 == (void **)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      ppvVar11 = *ppvVar1;
    }
    if (pvVar12 == ppvVar11[6]) {
      _invalid_parameter_noinfo();
    }
    uVar6 = FUN_141647210((longlong *)((longlong)pvVar12 + 0x20),&local_c8);
    goto LAB_141648a25;
  }
  local_b8 = operator_new(8);
  local_120[0] = ppvVar11;
  if (local_b8 != (void **)0x0) {
    *local_b8 = local_120;
    local_120[0] = local_b8;
  }
  pvStack_e0 = (void *)0x0;
  local_f8 = (void **)0x0;
  local_100 = (void *)0x0;
  local_108 = (void *)0x0;
  local_e8 = local_120[0];
  FUN_141645f70((longlong)local_120,(longlong)&local_e8,1,&local_c8);
  ppvVar1 = local_108;
  if (local_100 < local_108) {
    _invalid_parameter_noinfo();
  }
  ppvVar2 = local_120[0];
  if (local_120[0] == (void **)0x0) {
    _invalid_parameter_noinfo();
    ppvVar9 = ppvVar11;
  }
  else {
    ppvVar9 = *local_120[0];
  }
  if (ppvVar9[4] < ppvVar1) {
LAB_14164897e:
    _invalid_parameter_noinfo();
  }
  else {
    ppvVar9 = ppvVar11;
    if (ppvVar2 != (void **)0x0) {
      ppvVar9 = *ppvVar2;
    }
    if (ppvVar1 < ppvVar9[3]) goto LAB_14164897e;
  }
  local_a8[0] = param_3;
  FUN_141645dc0(local_a0,local_120);
  FUN_141648070(plVar4,(longlong *)&local_e8,local_a8);
  local_e8 = local_a0;
  if (local_88 != (void *)0x0) {
    operator_delete(local_88);
  }
  local_88 = ppvVar11;
  local_80 = ppvVar11;
  local_78 = ppvVar11;
  operator_delete(local_a0[0]);
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
  }
  local_108 = ppvVar11;
  local_100 = ppvVar11;
  local_f8 = ppvVar11;
  operator_delete(local_120[0]);
  uVar6 = extraout_RAX;
LAB_141648a25:
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}




undefined8 FUN_141648a60(longlong param_1,uint param_2)

{
  void *pvVar1;
  void **ppvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  char *pcVar6;
  void **ppvVar7;
  ulonglong uVar8;
  undefined8 extraout_RAX;
  longlong lVar9;
  void **ppvVar10;
  void **ppvVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined1 uVar14;
  uint local_res10 [2];
  void **local_res18;
  void **local_res20;
  void **local_118 [3];
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  void **local_e8 [3];
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  void *local_b0;
  void **local_a8;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58 [4];
  
  local_60 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = operator_new(8);
  if (local_res18 == (void **)0x0) {
    local_118[0] = (void **)0x0;
  }
  else {
    *local_res18 = local_118;
    local_118[0] = local_res18;
  }
  ppvVar11 = (void **)0x0;
  local_100 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_res20 = local_res18;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x138))(*(longlong **)(param_1 + 8),local_118,param_2,0xc);
  plVar13 = local_100;
  ppvVar2 = local_118[0];
  if (local_f8 < local_100) {
    _invalid_parameter_noinfo();
    ppvVar2 = local_118[0];
  }
  do {
    plVar5 = local_f8;
    local_a8 = (void **)0x0;
    if (local_f8 < local_100) {
      _invalid_parameter_noinfo();
    }
    local_a8 = local_118[0];
    if ((ppvVar2 == (void **)0x0) || (ppvVar2 != local_118[0])) {
      _invalid_parameter_noinfo();
    }
    if (plVar13 == plVar5) {
      if (local_100 != (longlong *)0x0) {
        operator_delete(local_100);
      }
      local_100 = (longlong *)0x0;
      local_f8 = (longlong *)0x0;
      local_f0 = 0;
      operator_delete(local_118[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    if (ppvVar2 == (void **)0x0) {
      _invalid_parameter_noinfo();
      ppvVar7 = ppvVar11;
    }
    else {
      ppvVar7 = *ppvVar2;
    }
    if (ppvVar7[4] <= plVar13) {
      _invalid_parameter_noinfo();
    }
    if (*plVar13 != 0) {
      if (ppvVar2 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar7 = ppvVar11;
      }
      else {
        ppvVar7 = *ppvVar2;
      }
      uVar14 = plVar13 == ppvVar7[4];
      if (ppvVar7[4] <= plVar13) {
        _invalid_parameter_noinfo();
      }
      plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar13 + 0x20))((longlong *)*plVar13,&DAT_1416558c0);
      pcVar6 = (char *)(**(code **)(*plVar5 + 0x78))(plVar5);
      lVar9 = 1;
      pcVar12 = "";
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        uVar14 = *pcVar6 == *pcVar12;
        pcVar6 = pcVar6 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((bool)uVar14);
      if ((bool)uVar14) {
        if (ppvVar2 == (void **)0x0) {
          _invalid_parameter_noinfo();
          ppvVar7 = ppvVar11;
        }
        else {
          ppvVar7 = *ppvVar2;
        }
        if (ppvVar7[4] <= plVar13) {
          _invalid_parameter_noinfo();
        }
        (**(code **)(*(longlong *)*plVar13 + 0x40))((longlong *)*plVar13,0);
      }
      else {
        ppvVar7 = (void **)FUN_141643d00();
        local_res18 = ppvVar7;
        if (ppvVar7 != (void **)0x0) {
          if (ppvVar2 == (void **)0x0) {
            _invalid_parameter_noinfo();
            ppvVar10 = ppvVar11;
          }
          else {
            ppvVar10 = *ppvVar2;
          }
          if (ppvVar10[4] <= plVar13) {
            _invalid_parameter_noinfo();
          }
          uVar8 = FUN_141643cb0((longlong)ppvVar7,(longlong *)*plVar13);
          if ((char)uVar8 == '\0') {
            FUN_141643940(ppvVar7);
            local_res18 = (void **)0x0;
          }
          else {
            FUN_141645b80((longlong *)(param_1 + 0x10),(longlong *)&local_b8,local_res10);
            puVar3 = local_b8;
            pvVar1 = *(void **)(param_1 + 0x40);
            local_58[0] = *(undefined8 **)(param_1 + 0x10);
            if ((local_b8 == (undefined8 *)0x0) || (local_b8 != local_58[0])) {
              _invalid_parameter_noinfo();
            }
            pvVar4 = local_b0;
            if (local_b0 == pvVar1) {
              local_res20 = operator_new(8);
              local_e8[0] = ppvVar11;
              if (local_res20 != (void **)0x0) {
                *local_res20 = local_e8;
                local_e8[0] = local_res20;
              }
              local_d0 = (void *)0x0;
              local_c8 = 0;
              local_c0 = 0;
              local_a8 = local_res20;
              FUN_141647210((longlong *)local_e8,&local_res18);
              local_98[0] = local_res10[0];
              FUN_141645dc0(local_90,local_e8);
              FUN_141648070((longlong *)(param_1 + 0x10),(longlong *)local_58,local_98);
              local_res20 = local_90;
              if (local_78 != (void *)0x0) {
                operator_delete(local_78);
              }
              local_78 = (void *)0x0;
              local_70 = 0;
              local_68 = 0;
              operator_delete(local_90[0]);
              if (local_d0 != (void *)0x0) {
                operator_delete(local_d0);
              }
              local_d0 = (void *)0x0;
              local_c8 = 0;
              local_c0 = 0;
              operator_delete(local_e8[0]);
            }
            else {
              if (puVar3 == (undefined8 *)0x0) {
                _invalid_parameter_noinfo();
                ppvVar7 = ppvVar11;
              }
              else {
                ppvVar7 = (void **)*puVar3;
              }
              if (pvVar4 == ppvVar7[6]) {
                _invalid_parameter_noinfo();
              }
              FUN_141647210((longlong *)((longlong)pvVar4 + 0x20),&local_res18);
            }
          }
        }
      }
      if (ppvVar2 == (void **)0x0) {
        _invalid_parameter_noinfo();
        ppvVar7 = ppvVar11;
      }
      else {
        ppvVar7 = *ppvVar2;
      }
      if (ppvVar7[4] <= plVar13) {
        _invalid_parameter_noinfo();
      }
      (*(code *)**(undefined8 **)*plVar13)((undefined8 *)*plVar13,1);
    }
    if (ppvVar2 == (void **)0x0) {
      _invalid_parameter_noinfo();
      ppvVar7 = ppvVar11;
    }
    else {
      ppvVar7 = *ppvVar2;
    }
    if (ppvVar7[4] <= plVar13) {
      _invalid_parameter_noinfo();
    }
    plVar13 = plVar13 + 1;
  } while( true );
}




void FUN_141648eb0(longlong *param_1)

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
  FUN_141648260(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_141648f20(longlong *param_1)

{
  FUN_141648eb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141648f50(longlong *param_1)

{
  FUN_141648eb0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141648f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  *param_1 = relation::CTradeBuddyMgr::vftable;
  plVar6 = *(longlong **)param_1[8];
  plVar2 = (longlong *)param_1[2];
  local_48 = plVar2;
  plStack_40 = plVar6;
  while( true ) {
    plVar3 = (longlong *)param_1[8];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[2])) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar3) break;
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
    puVar7 = (undefined8 *)plVar6[7];
    if ((undefined8 *)plVar6[8] < puVar7) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)plVar6[4];
    local_38 = plVar3;
    while( true ) {
      puStack_30 = puVar7;
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
      puVar4 = (undefined8 *)plVar6[8];
      if (puVar4 < (undefined8 *)plVar6[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)plVar6[4])) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 == puVar4) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
        FUN_141643940((undefined8 *)*puVar7);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar7 = puVar7 + 1;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
      plVar3 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar3 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x51);
        plVar6 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_40 = plVar6, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x51);
          plVar6 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x51);
        plVar5 = (longlong *)plVar6[1];
        plVar3 = plVar6;
        while ((plVar6 = plVar5, plStack_40 = plVar6, cVar1 == '\0' && (plVar3 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar5 = (longlong *)plVar6[1];
          plVar3 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar6 = param_1 + 2;
  FUN_141647a60(plVar6,*(longlong **)(param_1[8] + 8),param_3,param_4);
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  puStack_30 = (undefined8 *)param_1[8];
  local_48 = (longlong *)*plVar6;
  plStack_40 = (longlong *)*puStack_30;
  local_38 = local_48;
  FUN_141648260(plVar6,local_28,(longlong *)&local_48,(longlong *)&local_38);
  operator_delete((void *)param_1[8]);
  param_1[8] = 0;
  param_1[9] = 0;
  operator_delete((void *)*plVar6);
  return;
}




undefined8 * FUN_141649230(undefined8 *param_1)

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
  lVar2 = FUN_141645160();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416492b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = relation::CTradeBuddyMgr::vftable;
  param_1[1] = 0;
  FUN_141649230(param_1 + 2);
  FUN_141647a60(param_1 + 2,*(longlong **)(param_1[8] + 8),param_3,param_4);
  *(undefined8 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(undefined8 *)param_1[8] = param_1[8];
  *(undefined8 *)(param_1[8] + 0x10) = param_1[8];
  return param_1;
}




undefined8 * FUN_141649330(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141648f80(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416448d0(param_1);
  }
  return param_1;
}




CMsg * FUN_141649360(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




CMsg * FUN_1416493a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgEnemyList::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1416493f0(undefined8 *param_1)

{
  *param_1 = relation::CMsgEnemyList::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141649420(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x411;
}




undefined8 FUN_141649450(CMsg *param_1,undefined4 param_2)

{
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x411;
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = 0;
  return 1;
}




ulonglong FUN_1416494b0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3ff < (ulonglong)*puVar2 + 0x20) {
    return (ulonglong)puVar2 & 0xffffffffffffff00;
  }
  *puVar2 = puVar2[4] * 0x20 + 0x2c;
  lVar3 = *(longlong *)(param_1 + 0x408);
  lVar4 = (longlong)*(int *)(lVar3 + 8) * 0x20;
  *(undefined4 *)(lVar4 + 0xc + lVar3) = *param_2;
  *(undefined4 *)(lVar4 + 0x10 + lVar3) = param_2[1];
  *(undefined4 *)(lVar4 + 0x14 + lVar3) = param_2[2];
  *(undefined4 *)(lVar4 + 0x18 + lVar3) = param_2[3];
  *(undefined4 *)(lVar4 + 0x1c + lVar3) = param_2[4];
  *(undefined4 *)(lVar4 + 0x20 + lVar3) = param_2[5];
  *(undefined4 *)(lVar4 + 0x24 + lVar3) = param_2[6];
  *(undefined4 *)(lVar4 + 0x28 + lVar3) = param_2[7];
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




void FUN_141649540(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = 0;
  **(undefined2 **)(param_1 + 0x408) = 0xc;
  return;
}




void FUN_1416495a0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x408) == 0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  cVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (cVar1 != '\0') {
    (**(code **)(*param_3 + 0x1f8))(param_3,param_2);
  }
  return;
}




undefined4 FUN_141649650(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8);
}




undefined8 * FUN_141649660(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgEnemyList::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1416496b0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgFriend::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141649700(undefined8 *param_1)

{
  *param_1 = relation::CMsgFriend::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141649730(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3fb;
}




undefined8 FUN_141649760(CMsg *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,char *param_6,char *param_7,undefined1 param_8)

{
  undefined8 uVar1;
  
  if (((param_3 == 0) || (param_2 == 0)) || (param_6 == (char *)0x0)) {
    log_InlineLogERROR(&DAT_141654618);
    uVar1 = 0;
  }
  else {
    tq::CMsg::Init(param_1);
    *(int *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    *(char *)(*(longlong *)(param_1 + 0x408) + 8) = (char)param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 9) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
    strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x14),param_6,0x10);
    if (param_7 != (char *)0x0) {
      strncpy((char *)(*(longlong *)(param_1 + 0x408) + 0x24),param_7,0x20);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x3fb;
    **(undefined2 **)(param_1 + 0x408) = 0x44;
    uVar1 = 1;
  }
  return uVar1;
}




ulonglong FUN_141649890(undefined8 param_1,int param_2,int param_3,longlong *param_4,char param_5)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_2 == param_3)) {
LAB_1416498e4:
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_4 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    in_RAX = extraout_RAX;
    goto LAB_1416498e4;
  }
  uVar2 = (**(code **)(*param_4 + 0xa8))(param_4);
  if ((char)uVar2 == '\0') {
    uVar2 = (**(code **)(*param_4 + 0x30))(param_4,param_2,param_3,1);
    if ((char)uVar2 == '\0') goto LAB_1416499eb;
    uVar1 = (**(code **)(*param_4 + 0x10))(param_4,param_2);
    uVar2 = (**(code **)(*param_4 + 0x148))(param_4,param_2);
    if (uVar2 < uVar1) {
      uVar2 = (**(code **)(*param_4 + 0x170))(param_4,param_2,param_3);
      if ((char)uVar2 == '\0') {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      if (param_5 == '\0') goto LAB_1416499eb;
      pIVar3 = theInstance();
      lVar6 = *param_4;
      pcVar5 = "STR_YOUR_FRIEND_ALREADY";
      puVar7 = *(undefined8 **)pIVar3;
    }
    else {
      if (param_5 != '\0') {
        pIVar3 = theInstance();
        lVar6 = *param_4;
        uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_FRIEND_LIST_FULL");
        uVar2 = (**(code **)(lVar6 + 0x18))(param_4,param_2,uVar4);
        return uVar2 & 0xffffffffffffff00;
      }
      pIVar3 = theInstance();
      lVar6 = *param_4;
      pcVar5 = "STR_TARGET_FRIEND_LIST_FULL";
      puVar7 = *(undefined8 **)pIVar3;
    }
  }
  else {
    if (param_5 == '\0') goto LAB_1416499eb;
    pIVar3 = theInstance();
    lVar6 = *param_4;
    pcVar5 = "STR_MAP_FORBID_ADDFRIEND";
    puVar7 = *(undefined8 **)pIVar3;
  }
  uVar4 = (*(code *)*puVar7)(pIVar3,pcVar5);
  uVar2 = (**(code **)(lVar6 + 0x18))(param_4,param_2,uVar4);
LAB_1416499eb:
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_141649a10(CMsg *param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  IStringManager *pIVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar4 = FUN_141649890(param_1,param_2,param_3,param_4,'\x01');
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  (**(code **)(*param_4 + 0x50))(param_4,param_3,param_2);
  pIVar5 = theInstance();
  lVar1 = *param_4;
  uVar4 = (**(code **)(lVar1 + 0x58))(param_4,param_2);
  uVar6 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_TO_MAKE_FRIEND");
  (**(code **)(lVar1 + 0x18))(param_4,param_3,uVar6,uVar4);
  pIVar5 = theInstance();
  lVar1 = *param_4;
  uVar4 = (*(code *)**(undefined8 **)pIVar5)(pIVar5,"STR_MAKE_FRIEND_SENT");
  (**(code **)(lVar1 + 0x18))(param_4,param_2,uVar4);
  pcVar7 = (char *)(**(code **)(*param_4 + 0x1b8))(param_4,param_2);
  pcVar8 = (char *)(**(code **)(*param_4 + 0x58))(param_4,param_2);
  uVar2 = (**(code **)(*param_4 + 0x88))(param_4,param_2);
  uVar3 = (**(code **)(*param_4 + 0x80))(param_4,param_2);
  uVar4 = FUN_141649760(param_1,10,param_2,uVar3,uVar2,pcVar8,pcVar7,1);
  if ((int)uVar4 != 0) {
    uVar4 = (**(code **)(*param_4 + 0x20))(param_4,param_3,param_1);
  }
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}




undefined8 * FUN_141649b70(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgFriend::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141649bc0(CMsg *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  IStringManager *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStackY_498 [32];
  char local_458 [1039];
  undefined1 local_49;
  ulonglong local_48;
  
  if (param_2 == 0) {
    return;
  }
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_498;
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
    return;
  }
  cVar1 = (**(code **)(*param_3 + 8))(param_3);
  if (cVar1 == '\0') {
    pIVar6 = theInstance();
    lVar12 = *param_3;
    uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_DIE");
    (**(code **)(lVar12 + 0x18))(param_3,param_2,uVar7);
    return;
  }
  lVar12 = *(longlong *)(param_1 + 0x408);
  switch(*(undefined1 *)(lVar12 + 8)) {
  case 10:
    iVar5 = *(int *)(lVar12 + 4);
LAB_14164a25d:
    FUN_141649a10(param_1,param_2,iVar5,param_3);
    break;
  case 0xb:
    iVar5 = *(int *)(lVar12 + 4);
    uVar7 = FUN_141649890(param_1,param_2,iVar5,param_3,'\x01');
    if (((char)uVar7 != '\0') && (uVar7 = FUN_141649890(param_1,iVar5,param_2,param_3,'\0'), (char)uVar7 != '\0')) {
      lVar12 = *param_3;
      uVar7 = (**(code **)(lVar12 + 0x58))(param_3,iVar5);
      cVar1 = (**(code **)(lVar12 + 0x1a0))(param_3,param_2,iVar5,uVar7);
      if (cVar1 != '\0') {
        lVar12 = *param_3;
        uVar7 = (**(code **)(lVar12 + 0x58))(param_3,param_2);
        cVar1 = (**(code **)(lVar12 + 0x1a0))(param_3,iVar5,param_2,uVar7);
        if (cVar1 != '\0') {
          pcVar9 = (char *)(**(code **)(*param_3 + 0x1b8))(param_3,iVar5);
          pcVar10 = (char *)(**(code **)(*param_3 + 0x58))(param_3,iVar5);
          uVar2 = (**(code **)(*param_3 + 0x88))(param_3,iVar5);
          uVar3 = (**(code **)(*param_3 + 0x80))(param_3,iVar5);
          uVar7 = FUN_141649760(param_1,0xf,iVar5,uVar3,uVar2,pcVar10,pcVar9,1);
          if ((int)uVar7 != 0) {
            (**(code **)(*param_3 + 0x20))(param_3,param_2,param_1);
          }
          pcVar9 = (char *)(**(code **)(*param_3 + 0x1b8))(param_3,param_2);
          pcVar10 = (char *)(**(code **)(*param_3 + 0x58))(param_3,param_2);
          uVar2 = (**(code **)(*param_3 + 0x88))(param_3,param_2);
          uVar3 = (**(code **)(*param_3 + 0x80))(param_3,param_2);
          uVar7 = FUN_141649760(param_1,0xf,param_2,uVar3,uVar2,pcVar10,pcVar9,1);
          if ((int)uVar7 != 0) {
            (**(code **)(*param_3 + 0x20))(param_3,iVar5,param_1);
          }
          local_458[0x10] = 0;
          memset(local_458 + 0x11,0,0x3ff);
          pIVar6 = theInstance();
          (**(code **)(*param_3 + 0x58))(param_3,iVar5);
          (**(code **)(*param_3 + 0x58))(param_3,param_2);
          pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_MAKE_FRIEND");
          _snprintf(local_458 + 0x10,0x3ff,pcVar9);
          (**(code **)(*param_3 + 0x90))(param_3,param_2,local_458 + 0x10,1);
          break;
        }
      }
      log_InlineLogERROR("Error: add friend failed");
    }
    break;
  case 0xc:
    log_InlineLogERROR(&DAT_141654618);
    break;
  case 0xd:
    log_InlineLogERROR(&DAT_141654618);
    break;
  case 0xe:
    uVar2 = *(undefined4 *)(lVar12 + 4);
    cVar1 = (**(code **)(*param_3 + 0x170))(param_3,param_2,uVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_3 + 0x28))(param_3,uVar2);
      if (cVar1 != '\0') {
        pIVar6 = theInstance();
        lVar12 = *param_3;
        uVar7 = (**(code **)(lVar12 + 0x58))(param_3,uVar2);
        uVar8 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_NOT_YOUR_FRIEND");
        (**(code **)(lVar12 + 0x18))(param_3,param_2,uVar8,uVar7);
      }
    }
    else {
      local_458[1] = '\0';
      local_458[2] = '\0';
      local_458[3] = '\0';
      local_458[4] = '\0';
      local_458[5] = '\0';
      local_458[6] = '\0';
      local_458[7] = '\0';
      local_458[8] = '\0';
      local_458[9] = '\0';
      local_458[10] = '\0';
      local_458[0xb] = '\0';
      local_458[0xc] = '\0';
      local_458[0xd] = '\0';
      local_458[0xe] = '\0';
      local_458[0xf] = 0;
      local_458[0] = '\0';
      pcVar9 = (char *)(**(code **)(*param_3 + 0x158))(param_3,param_2,uVar2);
      tq::SafeCopy(local_458,pcVar9,0x10);
      cVar1 = (**(code **)(*param_3 + 0x1a8))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4));
      if (cVar1 != '\0') {
        local_458[0x10] = 0;
        memset(local_458 + 0x11,0,0x3ff);
        pIVar6 = theInstance();
        (**(code **)(*param_3 + 0x58))(param_3,param_2);
        pcVar9 = (char *)(*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_BREAK_FRIEND");
        _snprintf(local_458 + 0x10,0x3ff,pcVar9);
        (**(code **)(*param_3 + 0x90))(param_3,param_2,local_458 + 0x10,1);
        (**(code **)(*param_3 + 0x20))(param_3,param_2,param_1);
      }
      cVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (cVar1 == '\0') {
        plVar11 = (longlong *)InstanceGet();
        local_458[0x10] = 0;
        memset(local_458 + 0x11,0,0x3ff);
        _snprintf(local_458 + 0x10,0x3ff,"DELETE FROM cq_friend WHERE userid=%lu AND friend=%lu LIMIT 1");
        local_49 = 0;
        (**(code **)(*plVar11 + 0x30))(plVar11,local_458 + 0x10,0,1);
        *(int *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_2;
      }
      else {
        cVar1 = (**(code **)(*param_3 + 0x1a8))(param_3,uVar2,param_2);
        if (cVar1 != '\0') {
          pcVar9 = (char *)(**(code **)(*param_3 + 0x1b8))(param_3,param_2);
          pcVar10 = (char *)(**(code **)(*param_3 + 0x58))(param_3,param_2);
          uVar3 = (**(code **)(*param_3 + 0x88))(param_3,param_2);
          uVar4 = (**(code **)(*param_3 + 0x80))(param_3,param_2);
          uVar7 = FUN_141649760(param_1,0xe,param_2,uVar4,uVar3,pcVar10,pcVar9,0);
          if ((int)uVar7 != 0) {
            (**(code **)(*param_3 + 0x20))(param_3,uVar2,param_1);
          }
        }
      }
    }
    break;
  case 0xf:
    log_InlineLogERROR(&DAT_141654618);
    break;
  case 0x10:
  case 0x11:
  case 0x13:
    break;
  case 0x12:
    (**(code **)(*param_3 + 0x208))(param_3,param_2,*(undefined4 *)(lVar12 + 4),1);
    break;
  case 0x14:
    if (*(char *)(lVar12 + 0x24) != '\0') {
      *(undefined1 *)(lVar12 + 0x43) = 0;
      (**(code **)(*param_3 + 0x1c0))(param_3,param_2,*(longlong *)(param_1 + 0x408) + 0x24);
    }
    break;
  case 0x15:
    *(undefined1 *)(lVar12 + 0x23) = 0;
    lVar12 = -1;
    pcVar9 = (char *)(*(longlong *)(param_1 + 0x408) + 0x14);
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (lVar12 != -2) {
      iVar5 = (**(code **)(*param_3 + 0x1c8))(param_3,*(longlong *)(param_1 + 0x408) + 0x14);
      goto LAB_14164a25d;
    }
    break;
  default:
    goto LAB_14164a2a7;
  }
LAB_14164a2a7:
  return;
}




CMsg * FUN_14164a2e0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgFriendInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14164a330(undefined8 *param_1)

{
  *param_1 = relation::CMsgFriendInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14164a360(CMsg *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,undefined1 param_6,undefined2 param_7,
                  undefined4 param_8,undefined4 param_9,undefined2 param_10,char *param_11)

{
  if (param_11 != (char *)0x0) {
    tq::CMsg::Init(param_1);
    **(undefined2 **)(param_1 + 0x408) = 0x2c;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7f1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xd) = param_6;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_7;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_9;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_10;
    tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x1a),param_11,0x10);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x2a) = param_2;
  }
  return param_11 != (char *)0x0;
}




bool FUN_14164a470(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7f1;
}




void FUN_14164a4a0(void)

{
  log_InlineLogERROR(&DAT_141654618);
  return;
}




undefined8 * FUN_14164a4e0(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgFriendInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14164a530(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgLog::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




ulonglong FUN_14164a580(CMsg *param_1,char *param_2,ushort param_3)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  bVar3 = tq::CMsg::Create(param_1,param_2,param_3);
  uVar4 = CONCAT71(extraout_var,bVar3);
  if (bVar3) {
    uVar1 = *(ushort *)(param_1 + 10);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 == 0x3ea) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 0;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if (uVar1 == 0x3eb) {
      lVar2 = *(longlong *)(param_1 + 0x408);
      *(undefined4 *)(lVar2 + 8) = 1;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}




void FUN_14164a5e0(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141654618);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x408) + 8);
    if (iVar1 == 0) {
      cVar2 = (**(code **)(*param_3 + 0x188))(param_3);
      if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_3 + 0x130))(param_3,param_2), cVar2 != '\0')) {
        (**(code **)(*param_3 + 0x200))(param_3,param_2);
      }
    }
    else if (iVar1 == 1) {
      (**(code **)(*param_3 + 0x1b0))(param_3);
      (**(code **)(*param_3 + 0x138))(param_3,param_2);
    }
  }
  return;
}




CMsg * FUN_14164a6f0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgTradeBuddy::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14164a740(undefined8 *param_1)

{
  *param_1 = relation::CMsgTradeBuddy::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14164a770(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7fe;
}




ulonglong FUN_14164a7a0(longlong param_1,undefined1 param_2,int param_3,char *param_4,undefined1 param_5,undefined2 param_6,undefined4 param_7)

{
  undefined7 extraout_var;
  ulonglong extraout_RAX;
  
  if ((param_3 != 0) && (param_4 != (char *)0x0)) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fe;
    **(undefined2 **)(param_1 + 0x408) = 0x20;
    *(int *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 9) = param_5;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_6;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x10),param_4,0x10);
    return CONCAT71(extraout_var,1);
  }
  log_InlineLogERROR(&DAT_141654618);
  return extraout_RAX & 0xffffffffffffff00;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14164a870(longlong param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  IStringManager *pIVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_9b8 [32];
  __time64_t local_958 [2];
  char local_948 [255];
  undefined1 local_849;
  char local_848 [1023];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_141663a88 ^ (ulonglong)auStackY_9b8;
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141654618);
    }
    else {
      cVar5 = (**(code **)(*param_3 + 8))(param_3);
      if (cVar5 == '\0') {
        pIVar8 = theInstance();
        lVar4 = *param_3;
        uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_DIE");
        (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x408);
        cVar5 = *(char *)(lVar4 + 8);
        if (cVar5 == '\0') {
          cVar5 = (**(code **)(*param_3 + 0xb8))(param_3,param_2,*(undefined4 *)(lVar4 + 4));
          if (cVar5 == '\0') {
            uVar13 = (**(code **)(*param_3 + 0xf0))(param_3,param_2);
            if (uVar13 < 0x14) {
              cVar5 = (**(code **)(*param_3 + 0x140))(param_3,param_2);
              if (cVar5 != '\0') {
                uVar3 = *(uint *)(*(longlong *)(param_1 + 0x408) + 4);
                cVar5 = (**(code **)(*param_3 + 0x28))(param_3,uVar3);
                if (cVar5 == '\0') {
                  pIVar8 = theInstance();
                  lVar4 = *param_3;
                  uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_TARGET_OFFLINE");
                  (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
                }
                else {
                  cVar5 = (**(code **)(*param_3 + 0x30))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4),0);
                  if (cVar5 != '\0') {
                    uVar13 = (**(code **)(*param_3 + 0xf0))(param_3,uVar3);
                    if (uVar13 < 0x14) {
                      uVar7 = (**(code **)(*param_3 + 0x48))(param_3,uVar3,8);
                      if (uVar7 == param_2) {
                        if (param_2 < uVar3) {
                          lVar4 = *param_3;
                          uVar9 = (**(code **)(lVar4 + 0x58))(param_3,uVar3);
                          cVar5 = (**(code **)(lVar4 + 0x100))(param_3,param_2,uVar3,uVar9);
                        }
                        else {
                          lVar4 = *param_3;
                          uVar9 = (**(code **)(lVar4 + 0x58))(param_3,param_2);
                          cVar5 = (**(code **)(lVar4 + 0x100))(param_3,uVar3,param_2,uVar9);
                        }
                        if (cVar5 != '\0') {
                          pcVar12 = (char *)(**(code **)(*param_3 + 0x58))(param_3,uVar3);
                          uVar13 = FUN_14164a7a0(param_1,5,uVar3,pcVar12,1,0x10e0,0);
                          if ((char)uVar13 != '\0') {
                            (**(code **)(*param_3 + 0x20))(param_3,param_2,param_1);
                          }
                          pcVar12 = (char *)(**(code **)(*param_3 + 0x58))(param_3,param_2);
                          uVar13 = FUN_14164a7a0(param_1,5,param_2,pcVar12,1,0x10e0,0);
                          if ((char)uVar13 != '\0') {
                            (**(code **)(*param_3 + 0x20))(param_3,uVar3,param_1);
                          }
                          pIVar8 = theInstance();
                          lVar4 = *param_3;
                          uVar9 = (**(code **)(lVar4 + 0x58))(param_3,uVar3);
                          uVar10 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_SUCCESS");
                          (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar10,uVar9);
                          pIVar8 = theInstance();
                          lVar4 = *param_3;
                          uVar9 = (**(code **)(lVar4 + 0x58))(param_3,param_2);
                          uVar10 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_ACCEPT");
                          (**(code **)(lVar4 + 0x18))(param_3,uVar3,uVar10,uVar9);
                        }
                      }
                      else {
                        (**(code **)(*param_3 + 0x50))(param_3,uVar3,param_2);
                        (**(code **)(*param_3 + 0x38))(param_3,param_2,8,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4));
                        pcVar12 = (char *)(**(code **)(*param_3 + 0x58))(param_3);
                        uVar13 = FUN_14164a7a0(param_1,0,param_2,pcVar12,1,0,0);
                        if ((char)uVar13 != '\0') {
                          (**(code **)(*param_3 + 0x20))(param_3,uVar3,param_1);
                        }
                        pIVar8 = theInstance();
                        lVar4 = *param_3;
                        uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_MAKE_TRADE_BUDDY_SEND");
                        (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
                      }
                    }
                    else {
                      pIVar8 = theInstance();
                      lVar4 = *param_3;
                      uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TARGET_TRADE_BUDDY_FULL");
                      (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
                    }
                  }
                }
              }
            }
            else {
              pIVar8 = theInstance();
              lVar4 = *param_3;
              uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_FULL");
              (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
            }
          }
          else {
            pIVar8 = theInstance();
            lVar4 = *param_3;
            uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_YOUR_TRADE_BUDDY_ALREADY");
            (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9);
          }
        }
        else if (cVar5 == '\x01') {
          uVar2 = *(undefined4 *)(lVar4 + 4);
          cVar5 = (**(code **)(*param_3 + 0x28))(param_3,uVar2);
          if (cVar5 != '\0') {
            pIVar8 = theInstance();
            lVar4 = *param_3;
            uVar9 = (**(code **)(lVar4 + 0x58))(param_3,param_2);
            uVar10 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_REFUSE");
            (**(code **)(lVar4 + 0x18))(param_3,uVar2,uVar10,uVar9);
            (**(code **)(*param_3 + 0x40))(param_3,uVar2,8,param_2);
          }
        }
        else if (cVar5 == '\x04') {
          uVar2 = *(undefined4 *)(lVar4 + 4);
          cVar5 = (**(code **)(*param_3 + 0x110))(param_3,param_2,uVar2);
          if (cVar5 != '\0') {
            pcVar12 = (char *)(**(code **)(*param_3 + 0x118))(param_3,param_2,uVar2);
            tq::SafeCopy((char *)local_958,pcVar12,0x10);
            cVar5 = (**(code **)(*param_3 + 0x108))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4));
            if (cVar5 != '\0') {
              plVar11 = (longlong *)InstanceGet();
              if (param_2 < *(uint *)(*(longlong *)(param_1 + 0x408) + 4)) {
                _snprintf(local_848,0x400,"delete from cq_business where userid=%lu and business=%lu limit 1");
              }
              else {
                _snprintf(local_848,0x400,"delete from cq_business where userid=%lu and business=%lu limit 1");
              }
              local_449 = 0;
              (**(code **)(*plVar11 + 0x30))(plVar11,local_848,0,1);
              (**(code **)(*param_3 + 0x20))(param_3,param_2,param_1);
              pIVar8 = theInstance();
              lVar4 = *param_3;
              uVar9 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_BREAD_TRADE_BUDDY");
              (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar9,local_958);
              cVar5 = (**(code **)(*param_3 + 0x110))(param_3,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4),param_2);
              if (cVar5 == '\0') {
                pIVar8 = theInstance();
                (**(code **)(*param_3 + 0x58))(param_3,param_2);
                pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_BREAK");
                _snprintf(local_948,0x100,pcVar12);
                local_849 = 0;
                lVar4 = *param_3;
                (**(code **)(lVar4 + 0x60))(param_3,param_2);
                uVar9 = (**(code **)(*param_3 + 0x58))(param_3,param_2);
                (**(code **)(lVar4 + 0x68))(param_3,uVar9,uVar2,local_948);
                *(uint *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_2;
              }
              else {
                cVar5 = (**(code **)(*param_3 + 0x108))(param_3,uVar2,param_2);
                if (cVar5 != '\0') {
                  pcVar12 = (char *)(**(code **)(*param_3 + 0x58))(param_3,param_2);
                  uVar13 = FUN_14164a7a0(param_1,4,param_2,pcVar12,0,0,0);
                  if ((char)uVar13 != '\0') {
                    (**(code **)(*param_3 + 0x20))(param_3,uVar2,param_1);
                  }
                  pIVar8 = theInstance();
                  lVar4 = *param_3;
                  uVar9 = (**(code **)(lVar4 + 0x58))(param_3,param_2);
                  uVar10 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_TRADE_BUDDY_BREAK");
                  (**(code **)(lVar4 + 0x18))(param_3,uVar2,uVar10,uVar9);
                }
              }
            }
          }
        }
        else if (cVar5 == '\a') {
          iVar1 = *(int *)(lVar4 + 4);
          cVar5 = (**(code **)(*param_3 + 0x110))(param_3,param_2,iVar1);
          if (cVar5 != '\0') {
            iVar6 = (**(code **)(*param_3 + 0x128))(param_3,param_2,iVar1);
            local_958[0] = _time64((__time64_t *)0x0);
            iVar14 = 0;
            if ((iVar6 != 0) && (iVar14 = ((iVar6 - (int)local_958[0]) + 0x3f480) / 0x3c, iVar14 < 1)) {
              iVar14 = 0;
              (**(code **)(*param_3 + 0x120))(param_3,param_2,iVar1);
              pIVar8 = theInstance();
              lVar4 = *param_3;
              uVar9 = (**(code **)(lVar4 + 0x118))(param_3,param_2,iVar1);
              uVar10 = (*(code *)**(undefined8 **)pIVar8)(pIVar8,"STR_FORM_TRADE_BUDDY");
              (**(code **)(lVar4 + 0x18))(param_3,param_2,uVar10,uVar9);
              plVar11 = (longlong *)InstanceGet();
              _snprintf(local_448,0x400,"update cq_business set date=0 where userid=%lu and business=%lu LIMIT 1");
              local_49 = 0;
              (**(code **)(*plVar11 + 0x30))(plVar11,local_448,0,1);
            }
            pcVar12 = (char *)(**(code **)(*param_3 + 0x118))(param_3,param_2,iVar1);
            uVar13 = FUN_14164a7a0(param_1,7,iVar1,pcVar12,0,(short)iVar14,0);
            if ((char)uVar13 != '\0') {
              (**(code **)(*param_3 + 0x20))(param_3,param_2,param_1);
            }
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_14164b130(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgTradeBuddy::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14164b180(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = relation::CMsgTradeBuddyInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14164b1d0(undefined8 *param_1)

{
  *param_1 = relation::CMsgTradeBuddyInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_14164b200(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5,undefined2 param_6,undefined4 param_7,
                       undefined4 param_8,undefined2 param_9,char *param_10,undefined4 param_11,undefined4 param_12)

{
  ulonglong in_RAX;
  
  if (param_10 == (char *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7ff;
  **(undefined2 **)(param_1 + 0x408) = 0x34;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0xd) = param_5;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_8;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_9;
  tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x1a),param_10,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_11;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30) = param_12;
  return CONCAT71((uint7)(uint3)((uint)param_12 >> 8),1);
}




bool FUN_14164b2f0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7ff;
}




undefined8 * FUN_14164b320(undefined8 *param_1,byte param_2)

{
  *param_1 = relation::CMsgTradeBuddyInfo::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1416640a0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1416640a0);
    local_res18[0] = _decode_pointer(DAT_141664098);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1416640a0 = _encode_pointer(local_res10);
    DAT_141664098 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_14164b568(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_141663a88) && ((short)(_StackCookie >> 0x30) == 0)) {
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




bool FUN_14164b6d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141664098 = _encode_pointer(puVar1);
  DAT_1416640a0 = DAT_141664098;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14164bd54();
    atexit(FUN_14164bd8c);
    atexit((_func_5014 *)&LAB_14164bd48);
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
    if (DAT_141663afc < 1) {
      return 0;
    }
    DAT_141663afc = DAT_141663afc + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_141664088 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141664088;
        pvVar3 = DAT_141664088;
      }
      DAT_141664088 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14164b7b2;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14164b7b2:
    if (DAT_141664080 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1416640a0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_141664098);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1416640a0);
            plVar12 = (longlong *)_decode_pointer(DAT_141664098);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_141664098 = _encoded_null();
        DAT_1416640a0 = DAT_141664098;
      }
      DAT_141664080 = 0;
      if (!bVar2) {
        LOCK();
        DAT_141664088 = (void *)0x0;
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
      bVar13 = DAT_141664088 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141664088;
        pvVar3 = DAT_141664088;
      }
      DAT_141664088 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14164b8db;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14164b8db:
    if (DAT_141664080 == 0) {
      DAT_141664080 = 1;
      iVar4 = _initterm_e(&DAT_141653258,&DAT_141653268);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141653248,&DAT_141653250);
      DAT_141664080 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_141664088 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_141664090 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141664090), BVar5 != 0)) {
      (*DAT_141664090)(param_1,2,param_3);
    }
    DAT_141663afc = DAT_141663afc + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014164ba54) */
/* WARNING: Removing unreachable block (ram,0x00014164b9eb) */
/* WARNING: Removing unreachable block (ram,0x00014164ba8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_141663afc == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_141663aa0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_141663aa0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_14163fbb0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_14163fbb0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_141663aa0 = 0xffffffff;
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




undefined8 FUN_14164bb0c(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_141663ba0);
  local_30 = DAT_141663c98;
  local_38 = RtlLookupFunctionEntry(DAT_141663c98,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141663c38 = local_res8;
    DAT_141663c98 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_141663ba0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_141663b10 = DAT_141663c98;
  _DAT_141663c20 = local_res8[0];
  _DAT_141663b00 = 0xc0000409;
  _DAT_141663b04 = 1;
  local_20 = DAT_141663a88;
  local_18 = DAT_141663a90;
  DAT_141663b98 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141658b30);
  if (DAT_141663b98 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14164bd54(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141659648; puVar1 < &DAT_141659648; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14164bd8c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141659658; puVar1 < &DAT_141659658; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141630000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141630000);
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
  if (DAT_141663a88 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141663a88 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_141663a88 == 0x2b992ddfa232) {
      DAT_141663a88 = 0x2b992ddfa233;
    }
  }
  DAT_141663a90 = ~DAT_141663a88;
  return;
}




void Unwind_14164bfe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c000(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c020(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c040(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c080(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c0a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c0c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c0e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c100(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c120(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c140(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c160(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c180(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c1a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c1c0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c1e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c200(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c220(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c240(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c260(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c280(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c2a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c2c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c2e0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c300(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c320(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164c360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50));
  return;
}




void Unwind_14164c380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164c3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164c3c0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164c3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164c400(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14164c420(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c440(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14164c460(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c4c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164c4e0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164c500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14164c520(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c540(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14164c560(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c5c0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c5e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14164c600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14164c640(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14164c680(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c6a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14164c6c0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164c6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164c700(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164c720(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c740(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c780(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c7a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c7c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c7e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164c800(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164c820(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164c840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x58));
  return;
}




void Unwind_14164c860(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14164c880(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164c8a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164c8c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c8e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14164c900(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14164c920(void)

{
  DAT_141663ab8 = DAT_141663ab8 & 0xfffffffe;
  return;
}




void Unwind_14164c940(void)

{
  DAT_141663ab8 = DAT_141663ab8 & 0xfffffffe;
  return;
}




void Unwind_14164c960(void)

{
  DAT_141663ab8 = DAT_141663ab8 & 0xfffffffe;
  return;
}




void Unwind_14164c980(void)

{
  DAT_141663ab8 = DAT_141663ab8 & 0xfffffffe;
  return;
}




void Unwind_14164c9a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164c9e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ca00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ca20(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ca40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ca60(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ca80(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0(*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164caa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x30));
  return;
}




void Unwind_14164cac0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x28) + 8));
  return;
}




void Unwind_14164cae0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_141631670(*(longlong *)(param_2 + 0x28));
  }
  return;
}




void Unwind_14164cb10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164cb30(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cb50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28));
  return;
}




void Unwind_14164cb70(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_14164cb90(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164cbb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164cbd0(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cbf0(undefined8 param_1,longlong param_2)

{
  FUN_141632d10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cc10(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cc30(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cc50(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cc70(void)

{
  FUN_1416310d0();
  return;
}




void Catch_14164cc90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164ccc0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cce0(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cd00(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164cd20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164cd40(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cd60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164cd80(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Catch_14164cda0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x70);
  while (lVar2 != lVar1) {
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40) =
         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    lVar2 = lVar2 + 0x30;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164cdf0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_14164ce10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164ce30(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ce50(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ce70(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ce90(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ceb0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ced0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cef0(undefined8 param_1,longlong param_2)

{
  FUN_141632d10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cf10(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cf30(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cf50(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164cf70(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164cf90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164cfb0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164cfd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164cff0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Catch_14164d010(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar2 != lVar1) {
    *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40) =
         (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8));
    lVar2 = lVar2 + 0x30;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164d060(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




void Unwind_14164d080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164d0a0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164d0c0(undefined8 param_1,longlong param_2)

{
  FUN_141632d10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d0e0(undefined8 param_1,longlong param_2)

{
  FUN_141633700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d100(undefined8 param_1,longlong param_2)

{
  FUN_141633700(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d120(undefined8 param_1,longlong param_2)

{
  FUN_141632d10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d140(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d160(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d180(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d1a0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164d1c0(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d1e0(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d200(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d220(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164d240(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Unwind_14164d260(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d280(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d2a0(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d2c0(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d2e0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164d300(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d320(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d340(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d360(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d380(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164d3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Catch_14164d3c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14164d3f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164d410(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




void Unwind_14164d430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x70));
  return;
}




void Unwind_14164d450(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14164d470(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x50));
  return;
}




void Unwind_14164d490(undefined8 param_1,longlong param_2)

{
  FUN_1416493f0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined * Catch_14164d4b0(void)

{
  log_InlineLogCATCH_ERROR("CEnemyMgr::SendEnemyList @%s,%d");
  return &DAT_141635ae7;
}




void Unwind_14164d4f0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164d510(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d530(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d550(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d570(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d590(undefined8 param_1,longlong param_2)

{
  FUN_141634d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d5b0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x70) + 8));
  return;
}




void Unwind_14164d5d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x70));
  return;
}




void Unwind_14164d5f0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164d610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x40));
  return;
}




void Catch_14164d630(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 2) {
    pvVar2 = *(void **)(param_2 + 0x50);
    lVar4 = *(longlong *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x40);
    pvVar2 = *(void **)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    FUN_141634f00(uVar3,(longlong)pvVar2,(longlong)(lVar4 * 0x30 + (longlong)pvVar2));
  }
  if (0 < iVar1) {
    FUN_141634f00(uVar3,(longlong)(lVar4 * 0x30 + (longlong)pvVar2),(longlong)((*(longlong *)(param_2 + 0x58) + lVar4) * 0x30 + (longlong)pvVar2));
  }
  operator_delete(pvVar2);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164d6d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x38));
  return;
}




void Unwind_14164d6f0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_14164d710(undefined8 param_1,longlong param_2)

{
  FUN_141631670(param_2 + 0x68);
  return;
}




void Catch_14164d730(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x58) * 0x30;
  FUN_141634f00(*(longlong *)(param_2 + 0x48),*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + lVar1,
                lVar1 + *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164d780(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_14164d7a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x38));
  return;
}




void Unwind_14164d7c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x38));
  return;
}




void Unwind_14164d7e0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_14164d800(undefined8 param_1,longlong param_2)

{
  FUN_141631670(param_2 + 0x68);
  return;
}




void Unwind_14164d820(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x70));
  return;
}




void Unwind_14164d840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x38));
  return;
}




void Unwind_14164d860(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164d880(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_14164d8a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x68));
  return;
}




void Unwind_14164d8c0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d8e0(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d900(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164d920(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d940(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d960(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164d980(undefined8 param_1,longlong param_2)

{
  FUN_141631670(*(longlong *)(param_2 + 0x58));
  return;
}




void Unwind_14164d9a0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_14164d9c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x58));
  return;
}




void Unwind_14164d9e0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164da00(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164da20(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164da40(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164da60(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164da80(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164daa0(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164dac0(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x80));
  return;
}




undefined8 Catch_14164dae0(void)

{
  log_InlineLogCATCH_ERROR("CEnemyMgr::Del crash. @%s,%d");
  return 0x14163753a;
}




void Unwind_14164db20(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164db40(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164db60(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164db80(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164dba0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14164dbc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x88));
  return;
}




void Unwind_14164dbe0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}




void Unwind_14164dc00(undefined8 param_1,longlong param_2)

{
  FUN_141631670(*(longlong *)(param_2 + 0x80));
  return;
}




void Unwind_14164dc20(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164dc40(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164dc60(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164dc80(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14164dca0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14164dcc0(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164dce0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164dd00(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164dd20(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164dd40(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164dd60(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164dd90(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_14164ddb0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_14164ddd0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_14164ddf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x88));
  return;
}




void Unwind_14164de10(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}




void Unwind_14164de30(undefined8 param_1,longlong param_2)

{
  FUN_141631670(*(longlong *)(param_2 + 0x80));
  return;
}




void Unwind_14164de50(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164de70(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164de90(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164deb0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ded0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164def0(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164df10(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164df30(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_14164df50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164df80(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164dfa0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164dfc0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164dfe0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e000(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14164e040(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14164e060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14164e080(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14164e0a0(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_14164e0c0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164e0e0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e100(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e120(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e140(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14164e160(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14164e180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14164e1a0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14164e1c0(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_14164e1e0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_14164e200(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_14164e220(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_14164e240(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_14164e260(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(*(longlong *)(param_2 + 0x68) + 0x18);
  return;
}




void Unwind_14164e280(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_14164e2a0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_14164e2c0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_14164e2e0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x68) + 8));
  return;
}




void Unwind_14164e300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x68));
  return;
}




void Unwind_14164e320(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x78));
  return;
}




void Unwind_14164e340(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0(*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164e360(undefined8 param_1,longlong param_2)

{
  FUN_141631670(param_2 + 0xa0);
  return;
}




void Unwind_14164e380(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xa8));
  return;
}




void Unwind_14164e3a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164e3c0(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_14164e3e0(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0(*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164e400(undefined8 param_1,longlong param_2)

{
  FUN_141631670(param_2 + 0xe0);
  return;
}




void Unwind_14164e420(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xe8));
  return;
}




void Unwind_14164e440(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164e460(undefined8 param_1,longlong param_2)

{
  FUN_1416371a0(param_2 + 0xe0);
  return;
}




void Unwind_14164e480(undefined8 param_1,longlong param_2)

{
  FUN_141637170((undefined8 *)(param_2 + 0xe8));
  return;
}




void Unwind_14164e4a0(undefined8 param_1,longlong param_2)

{
  FUN_141636a80(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e4c0(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e4e0(undefined8 param_1,longlong param_2)

{
  FUN_141632d00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164e500(undefined8 param_1,longlong param_2)

{
  FUN_141636a80((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_14164e520(undefined8 param_1,longlong param_2)

{
  FUN_1416336e0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_14164e540(undefined8 param_1,longlong param_2)

{
  FUN_1416315d0((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_14164e560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48));
  return;
}




void Unwind_14164e580(undefined8 param_1,longlong param_2)

{
  FUN_141632d00((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_14164e5a0(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x130));
  return;
}




void Unwind_14164e5c0(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x130));
  return;
}




undefined8 Catch_14164e5e0(void)

{
  log_InlineLogCATCH_ERROR("CEnemyMgr::Add crash. @%s,%d");
  return 0x141638bb8;
}




void Unwind_14164e620(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164e640(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164e660(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164e680(undefined8 param_1,longlong param_2)

{
  FUN_141634650((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164e6a0(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164e6c0(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_14164e6e0(void)

{
  log_InlineLogCATCH_ERROR("CEnemyMgr::CreateAllEnemy crash. @%s,%d");
  return &DAT_1416390b0;
}




void Unwind_14164e720(undefined8 param_1,longlong param_2)

{
  FUN_141634d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e740(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e760(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e780(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e7a0(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e7c0(undefined8 param_1,longlong param_2)

{
  FUN_141639150(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14164e7e0(undefined8 param_1,longlong param_2)

{
  FUN_141634d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e800(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e820(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e840(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e860(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e880(undefined8 param_1,longlong param_2)

{
  FUN_141639180((longlong *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




undefined * Catch_14164e8a0(void)

{
  log_InlineLogCATCH_ERROR("CEnemyMgr::CEnemyMgr crash. @%s,%d");
  return &DAT_14163935b;
}




void Unwind_14164e8e0(undefined8 param_1,longlong param_2)

{
  FUN_141639150(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_14164e900(undefined8 param_1,longlong param_2)

{
  FUN_141634d70(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164e920(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164e940(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164e960(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164e980(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164e9a0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164e9c0(undefined8 param_1,longlong param_2)

{
  FUN_141632cb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164e9e0(undefined8 param_1,longlong param_2)

{
  FUN_141633720(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ea00(undefined8 param_1,longlong param_2)

{
  FUN_141634010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ea20(undefined8 param_1,longlong param_2)

{
  FUN_141634730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ea40(undefined8 param_1,longlong param_2)

{
  FUN_141634d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ea60(undefined8 param_1,longlong param_2)

{
  FUN_141639150(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14164ea80(undefined8 param_1,longlong param_2)

{
  FUN_141639180((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14164eaa0(void)

{
  DAT_141663ac8 = DAT_141663ac8 & 0xfffffffe;
  return;
}




void Unwind_14164eac0(void)

{
  DAT_141663ac8 = DAT_141663ac8 & 0xfffffffe;
  return;
}




void Unwind_14164eae0(void)

{
  DAT_141663ac8 = DAT_141663ac8 & 0xfffffffe;
  return;
}




void Unwind_14164eb00(void)

{
  DAT_141663ac8 = DAT_141663ac8 & 0xfffffffe;
  return;
}




void Unwind_14164eb20(void)

{
  DAT_141663ac8 = DAT_141663ac8 & 0xfffffffe;
  return;
}




void Unwind_14164eb40(undefined8 param_1,longlong param_2)

{
  FUN_141639890(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_14164eb60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14164eb80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164eba0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14164ebc0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14164ebe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ec00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ec20(void)

{
  DAT_141663ad8 = DAT_141663ad8 & 0xfffffffe;
  return;
}




void Unwind_14164ec40(void)

{
  DAT_141663ad8 = DAT_141663ad8 & 0xfffffffe;
  return;
}




void Unwind_14164ec60(void)

{
  DAT_141663ad8 = DAT_141663ad8 & 0xfffffffe;
  return;
}




void Unwind_14164ec80(void)

{
  DAT_141663ad8 = DAT_141663ad8 & 0xfffffffe;
  return;
}




void Unwind_14164eca0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ecc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14164ece0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ed00(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ed20(undefined8 param_1,longlong param_2)

{
  FUN_14163a710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ed40(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ed60(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ed80(void)

{
  FUN_1416310d0();
  return;
}




void Catch_14164eda0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164edd0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164edf0(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ee10(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ee30(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ee50(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ee70(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ee90(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164eeb0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164eed0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164eef0(undefined8 param_1,longlong param_2)

{
  FUN_14163a710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ef10(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ef30(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ef50(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164ef70(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164ef90(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164efb0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164efd0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164eff0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f010(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f030(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f050(undefined8 param_1,longlong param_2)

{
  FUN_14163a710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f070(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f090(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f0b0(undefined8 param_1,longlong param_2)

{
  FUN_14163a710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f0d0(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f0f0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f110(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f130(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f150(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f170(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f190(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f1b0(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164f1d0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164f1f0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f210(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f230(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f250(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f270(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f290(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f2b0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f2e0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14164f300(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_14164f320(undefined8 param_1,longlong param_2)

{
  FUN_14163ad40(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164f350(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f370(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f390(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f3b0(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f3d0(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14164f3f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14164f420(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164f440(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164f460(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164f480(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164f4a0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f4c0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f4e0(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f500(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f520(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_14164f540(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f560(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164f580(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f5a0(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f5c0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f5e0(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f600(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f620(undefined8 param_1,longlong param_2)

{
  FUN_14163bc50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f640(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164f660(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164f680(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_14164f6a0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14164f6c0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f6e0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14164f700(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_14164f720(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164f740(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164f760(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164f780(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f7a0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_14164f7c0(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_14164f7e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14164f810(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164f840(undefined8 param_1,longlong param_2)

{
  FUN_14163a710((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f860(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f880(undefined8 param_1,longlong param_2)

{
  FUN_14163b670((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f8a0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f8c0(undefined8 param_1,longlong param_2)

{
  FUN_14163a710((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_14164f8e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14164f900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14164f920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14164f940(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14164f960(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_14164f980(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_14164f9a0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_14164f9c0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_14164f9e0(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_14164fa00(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14164fa20(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164fa40(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14164fa60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14164fa80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14164faa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14164fac0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x60));
  return;
}




undefined * Catch_14164fae0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(vecFriend[i]) @%s,%d");
  return &DAT_14163e39a;
}




void Unwind_14164fb20(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164fb40(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164fb60(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164fb80(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164fba0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14164fbc0(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(param_2 + 0x88);
  return;
}




void Unwind_14164fbe0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_14164fc00(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_14164fc20(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_14164fc40(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164fc60(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_14164fc80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pFriend) @%s,%d");
  return 0x14163eaf2;
}




void Unwind_14164fcc0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164fcf0(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14164fd10(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14164fd30(undefined8 param_1,longlong param_2)

{
  FUN_141634650((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14164fd50(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164fd80(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14164fda0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14164fdc0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14164fde0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14164fe00(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(param_2 + 0xb8);
  return;
}




void Unwind_14164fe20(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_14164fe40(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_14164fe60(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_14164fe80(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14164fea0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x68));
  return;
}




undefined * Catch_14164fec0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE((*iter)) @%s,%d");
  return &DAT_14163eef8;
}




void Unwind_14164ff00(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_14164ff20(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x38));
  return;
}




undefined * Catch_14164ff40(void)

{
  log_InlineLogCATCH_ERROR("CFriendMgr::CreateAllFriend crash. @%s,%d");
  return &DAT_14163ef70;
}




void Unwind_14164ff80(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_14164ffa0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164ffc0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14164ffe0(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141650000(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x88));
  return;
}




void Unwind_141650020(undefined8 param_1,longlong param_2)

{
  FUN_14163b480(param_2 + 0x80);
  return;
}




void Unwind_141650040(undefined8 param_1,longlong param_2)

{
  FUN_14163b0d0((undefined8 *)(param_2 + 0x88));
  return;
}




void Unwind_141650060(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_141650080(undefined8 param_1,longlong param_2)

{
  FUN_14163a800(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_1416500a0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac50((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416500c0(undefined8 param_1,longlong param_2)

{
  FUN_14163a800((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416500e0(undefined8 param_1,longlong param_2)

{
  FUN_14163bc50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650100(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650120(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650140(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650160(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650180(undefined8 param_1,longlong param_2)

{
  FUN_14163f340(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416501a0(undefined8 param_1,longlong param_2)

{
  FUN_14163bc50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416501c0(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416501e0(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650200(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650220(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650240(undefined8 param_1,longlong param_2)

{
  FUN_14163f370((longlong *)(*(longlong *)(param_2 + 0x80) + 8));
  return;
}




undefined * Catch_141650260(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pFriend) @%s,%d");
  return &DAT_14163f4c5;
}




void Unwind_1416502a0(undefined8 param_1,longlong param_2)

{
  FUN_14163f340(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1416502c0(undefined8 param_1,longlong param_2)

{
  FUN_14163bc50(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416502e0(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141650300(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141650320(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141650340(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141650360(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650380(undefined8 param_1,longlong param_2)

{
  FUN_14163a790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416503a0(undefined8 param_1,longlong param_2)

{
  FUN_14163ac90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416503c0(undefined8 param_1,longlong param_2)

{
  FUN_14163b110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416503e0(undefined8 param_1,longlong param_2)

{
  FUN_14163b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650400(undefined8 param_1,longlong param_2)

{
  FUN_14163bc50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650420(undefined8 param_1,longlong param_2)

{
  FUN_14163f340(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141650440(undefined8 param_1,longlong param_2)

{
  FUN_14163f370((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141650460(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141650480(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416504a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1416504c0(undefined8 param_1,longlong param_2)

{
  FUN_14163f800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416504e0(undefined8 param_1,longlong param_2)

{
  FUN_14163f880((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141650500(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_141650520(undefined8 param_1,longlong param_2)

{
  FUN_1416493f0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




void Unwind_141650540(undefined8 param_1,longlong param_2)

{
  FUN_14164a330((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc50));
  return;
}




void Unwind_141650560(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1060));
  return;
}




void Unwind_141650580(undefined8 param_1,longlong param_2)

{
  FUN_14164b1d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1470));
  return;
}




void Unwind_1416505a0(undefined8 param_1,longlong param_2)

{
  FUN_14163f800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416505c0(undefined8 param_1,longlong param_2)

{
  FUN_14163f880((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1416505e0(undefined8 param_1,longlong param_2)

{
  FUN_141649700((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_141650600(undefined8 param_1,longlong param_2)

{
  FUN_1416493f0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




void Unwind_141650620(undefined8 param_1,longlong param_2)

{
  FUN_14164a330((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc50));
  return;
}




void Unwind_141650640(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1060));
  return;
}




void Unwind_141650660(undefined8 param_1,longlong param_2)

{
  FUN_14164b1d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x1470));
  return;
}




undefined * Catch_141650680(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_14163fd2d;
}




void Unwind_1416506c0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1416506e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_141650700(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x14163fe71;
}




void Unwind_141650740(undefined8 param_1,longlong param_2)

{
  FUN_1416448d0(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_141650760(undefined8 param_1,longlong param_2)

{
  FUN_14163a590(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_141650780(undefined8 param_1,longlong param_2)

{
  FUN_1416328d0(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1416507a0(undefined8 param_1,longlong param_2)

{
  FUN_14164b1d0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_1416507c0(undefined8 param_1,longlong param_2)

{
  FUN_14164a330((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416507e0(undefined8 param_1,longlong param_2)

{
  FUN_14164a330((undefined8 *)(param_2 + 0x80));
  return;
}




undefined * Catch_141650800(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pTradeBuddyMgr) @%s,%d");
  return &DAT_1416430d4;
}




undefined * Catch_141650840(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pFriendMgr) @%s,%d");
  return &DAT_1416430fd;
}




undefined8 Catch_141650880(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(m_pEnemyMgr) @%s,%d");
  return 0x141643124;
}




void Unwind_1416508c0(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_1416508e0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650900(undefined8 param_1,longlong param_2)

{
  FUN_14163a710((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_141650920(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_141650940(undefined8 param_1,longlong param_2)

{
  FUN_14163b670((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_141650960(undefined8 param_1,longlong param_2)

{
  FUN_14163ac70((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_141650980(undefined8 param_1,longlong param_2)

{
  FUN_14163a710((undefined8 *)(param_2 + 0x48));
  return;
}




void Unwind_1416509a0(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




void Unwind_1416509c0(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




void Unwind_1416509e0(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




void Unwind_141650a00(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




undefined8 Catch_141650a20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return 0x141643c86;
}




undefined * Catch_141650a60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return &DAT_141643c6e;
}




void Unwind_141650aa0(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




void Unwind_141650ac0(undefined8 param_1,longlong param_2)

{
  FUN_141643a50(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_141650ae0(void)

{
  DAT_141663ae8 = DAT_141663ae8 & 0xfffffffe;
  return;
}




void Unwind_141650b00(undefined8 param_1,longlong param_2)

{
  FUN_141643a50(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_141650b20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141650b40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141650b60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_141650b80(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141650ba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141650bc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141650be0(void)

{
  DAT_141663af8 = DAT_141663af8 & 0xfffffffe;
  return;
}




void Unwind_141650c00(void)

{
  DAT_141663af8 = DAT_141663af8 & 0xfffffffe;
  return;
}




void Unwind_141650c20(void)

{
  DAT_141663af8 = DAT_141663af8 & 0xfffffffe;
  return;
}




void Unwind_141650c40(void)

{
  DAT_141663af8 = DAT_141663af8 & 0xfffffffe;
  return;
}




void Unwind_141650c60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141650c80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141650ca0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650cc0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650ce0(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650d00(void)

{
  FUN_1416310d0();
  return;
}




void Catch_141650d20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141650d50(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650d70(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650d90(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650db0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650dd0(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650df0(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650e10(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650e30(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650e50(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650e70(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650e90(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650eb0(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141650ed0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650ef0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650f10(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650f30(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650f50(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650f70(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650f90(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650fb0(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141650fd0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141650ff0(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651010(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651030(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651050(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141651070(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141651090(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416510b0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416510d0(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416510f0(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651110(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651130(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651150(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651180(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416511a0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_1416511c0(undefined8 param_1,longlong param_2)

{
  FUN_141644fb0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416511f0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651210(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651230(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651250(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651270(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141651290(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416512c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416512e0(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141651300(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141651320(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141651340(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651360(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651380(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(param_2 + 0x490));
  return;
}




void Unwind_1416513a0(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416513c0(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(param_2 + 0x80));
  return;
}




undefined * Catch_1416513e0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pTradeBuddy) @%s,%d");
  return &DAT_1416469a9;
}




void Unwind_141651420(undefined8 param_1,longlong param_2)

{
  FUN_14164a740((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141651440(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141651460(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651480(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416514a0(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416514c0(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416514e0(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651500(undefined8 param_1,longlong param_2)

{
  FUN_141645da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651520(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141651540(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141651560(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_141651580(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1416515a0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416515c0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416515e0(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_141651600(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141651620(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141651640(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141651660(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651680(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_1416516a0(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_1416516c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416516f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141651710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141651730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141651750(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141651770(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_141651790(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_1416517b0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_1416517d0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_1416517f0(undefined8 param_1,longlong param_2)

{
  FUN_141645670(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_141651810(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_141651830(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141651850(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141651870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141651890(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416518b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416518d0(undefined8 param_1,longlong param_2)

{
  FUN_1416311c0((exception *)(param_2 + 0x60));
  return;
}




undefined * Catch_1416518f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER((*iterVec)) @%s,%d");
  return &DAT_141647fc6;
}




void Unwind_141651930(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651950(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651970(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651990(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1416519b0(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_1416519d0(undefined8 param_1,longlong param_2)

{
  FUN_141645670(param_2 + 0xb0);
  return;
}




void Unwind_1416519f0(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_141651a10(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141651a30(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141651a50(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651a70(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651a90(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651ab0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651ad0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651af0(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651b10(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_141651b30(undefined8 param_1,longlong param_2)

{
  FUN_141645670(param_2 + 0xb0);
  return;
}




void Unwind_141651b50(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_141651b70(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141651b90(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_141651bb0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_141651bd0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_141651bf0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pTradeBuddy) @%s,%d");
  return 0x141648a32;
}




void Unwind_141651c30(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651c60(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141651c80(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141651ca0(undefined8 param_1,longlong param_2)

{
  FUN_141634650((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141651cc0(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141651cf0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141651d10(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141651d30(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141651d50(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_141651d70(undefined8 param_1,longlong param_2)

{
  FUN_141645670(param_2 + 0xb0);
  return;
}




void Unwind_141651d90(undefined8 param_1,longlong param_2)

{
  FUN_141645340((undefined8 *)(param_2 + 0xb8));
  return;
}




void Unwind_141651db0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_141651dd0(undefined8 param_1,longlong param_2)

{
  FUN_141644b30(*(undefined8 **)(param_2 + 0x168));
  return;
}




void Unwind_141651df0(undefined8 param_1,longlong param_2)

{
  FUN_141644ee0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_141651e10(undefined8 param_1,longlong param_2)

{
  FUN_141644b30((undefined8 *)(param_2 + 0x60));
  return;
}




undefined * Catch_141651e30(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pTradeBuddy) @%s,%d");
  return &DAT_141648dbc;
}




void Unwind_141651e70(undefined8 param_1,longlong param_2)

{
  FUN_141633700((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141651e90(undefined8 param_1,longlong param_2)

{
  FUN_141632d10((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_141651eb0(void)

{
  log_InlineLogCATCH_ERROR("CTradeBuddyMgr::CreateAllTradeBuddy crash. @%s,%d");
  return &DAT_141648e8b;
}




void Unwind_141651ef0(undefined8 param_1,longlong param_2)

{
  FUN_141645da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651f10(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651f30(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651f50(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651f70(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651f90(undefined8 param_1,longlong param_2)

{
  FUN_141648f20(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141651fb0(undefined8 param_1,longlong param_2)

{
  FUN_141645da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651fd0(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141651ff0(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652010(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652030(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652050(undefined8 param_1,longlong param_2)

{
  FUN_141648f50((longlong *)(*(longlong *)(param_2 + 0x80) + 0x10));
  return;
}




undefined * Catch_141652070(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASEBYOWNER(pTradeBuddy) @%s,%d");
  return &DAT_1416490a5;
}




void Unwind_1416520b0(undefined8 param_1,longlong param_2)

{
  FUN_141648f20(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1416520d0(undefined8 param_1,longlong param_2)

{
  FUN_141645da0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416520f0(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141652110(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141652130(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141652150(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_141652170(void)

{
  FUN_1416310d0();
  return;
}




void Unwind_141652190(undefined8 param_1,longlong param_2)

{
  FUN_141644ac0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416521b0(undefined8 param_1,longlong param_2)

{
  FUN_141644f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416521d0(undefined8 param_1,longlong param_2)

{
  FUN_141645380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416521f0(undefined8 param_1,longlong param_2)

{
  FUN_141645800(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652210(undefined8 param_1,longlong param_2)

{
  FUN_141645da0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652230(undefined8 param_1,longlong param_2)

{
  FUN_141648f20(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141652250(undefined8 param_1,longlong param_2)

{
  FUN_141648f50((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141652270(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652290(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1416522b0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416522d0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416522f0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141652310(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652330(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652350(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141652370(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652390(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_1416523b0(void)

{
  log_InlineLogCATCH_ERROR("relation::CMsgLog::Process(idActor), idActor:%d, Type:%d, MsgType:%d @%s,%d");
  return 0x14164a6ca;
}




void Unwind_141652410(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141652430(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141652450(void)

{
  log_InlineLogCATCH_ERROR("CMsgTradeBuddy::Actor:%d,MsgType:%d,Action:%d @%s,%d");
  return 0x14164b0fd;
}




void Unwind_1416524b0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416524d0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416524f0(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141652510(undefined8 param_1,longlong param_2)

{
  FUN_14163f780(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_141652528(void)

{
  _unlock(8);
  return;
}




void FUN_141652541(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141652571(void)

{
  _DAT_141663aa0 = 0xffffffff;
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




bool FUN_141652600(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1437 failed=0 total=1524 */
