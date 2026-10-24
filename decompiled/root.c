/* Decompiled by Ghidra 12.1.4 | program: root.dll
   image base: 141670000 | functions: 791 */


exception * FUN_1416710a0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1416710e0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141671100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141671110(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141671170(void)

{
  return;
}




exception * FUN_141671180(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1416711d0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141671203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141671210(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141671230(exception *param_1,uint param_2)

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




exception * FUN_141671290(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1416712f0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014167132d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141671340(exception *param_1,uint param_2)

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




exception * FUN_1416713b0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141671410(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014167144d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141671460(exception *param_1,uint param_2)

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




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416714d0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1068 [32];
  undefined8 *local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  char local_1028;
  undefined1 local_1027 [4094];
  undefined1 local_29;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x1416714eb;
  local_1040 = 0xfffffffffffffffe;
  local_28 = DAT_141688288 ^ (ulonglong)auStack_1068;
  local_res18 = param_3;
  local_res20 = param_4;
  local_1048 = param_1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  if (param_2 != (char *)0x0) {
    local_1028 = '\0';
    memset(local_1027,0,0xfff);
    vsprintf_s(&local_1028,0xfff,param_2,(va_list)&local_res18);
    local_1038 = 0;
    local_29 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),&local_1028);
  }
  return param_1;
}




void FUN_1416715c0(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001416715e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}




undefined8 * FUN_141671610(undefined8 *param_1,uint param_2)

{
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141671670(void)

{
  log_InlineLogERROR(&DAT_141680650);
  return;
}




void FUN_1416716a0(undefined8 *param_1)

{
  *param_1 = root::IGame::vftable;
  return;
}




undefined8 * FUN_1416716b0(undefined8 *param_1,byte param_2)

{
  *param_1 = root::IGame::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_141671700(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return param_1;
}




void FUN_141671730(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014167174a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return;
}




undefined4 FUN_141671760(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 CurrentInstanceGet(void)

{
                    /* 0x1770  2  CurrentInstanceGet */
  return DAT_1416882b0;
}




longlong FUN_141671780(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416717a2;
  }
  lVar2 = *plVar1;
LAB_1416717a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416717c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416717e2;
  }
  lVar2 = *plVar1;
LAB_1416717e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




longlong FUN_141671800(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141671822;
  }
  lVar2 = *plVar1;
LAB_141671822:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141671840(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141671862;
  }
  lVar2 = *plVar1;
LAB_141671862:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x38;
  return param_1;
}




bool FUN_141671880(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416718c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_141671910(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141671950(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141671990(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416719b2;
  }
  lVar2 = *plVar1;
LAB_1416719b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416719d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416719f2;
  }
  lVar2 = *plVar1;
LAB_1416719f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141671b30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141671bc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141671c90(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}




exception * FUN_141671d00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_141671d50(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141671e40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141671e60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141671e70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x38;
}




void FUN_141671ed0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}




longlong FUN_141671f60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




undefined8 * FUN_141671fc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  return param_1;
}




longlong * FUN_1416720c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_1[1] + 8);
  param_1[1] = lVar1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)*param_1;
  }
  if (lVar1 == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1;
}




void FUN_1416721b0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
}




longlong * FUN_141672220(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141672250;
  }
  else {
LAB_141672250:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x38;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_141672278;
  }
  _invalid_parameter_noinfo();
LAB_141672278:
  param_1[1] = param_1[1] + param_2 * 0x38;
  return param_1;
}




longlong * FUN_141672290(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416722c0;
  }
  else {
LAB_1416722c0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416722e8;
  }
  _invalid_parameter_noinfo();
LAB_1416722e8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




bool FUN_141672340(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141672390(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_1416723c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    *param_1 = 0;
  }
  return;
}




void FUN_141672430(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x38);
  return;
}




void FUN_1416724b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141672520(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416725c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141672690(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x48)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 * 0x48);
  return;
}




void FUN_141672720(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_1 << 4);
  return;
}




exception * FUN_1416727c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_141672840(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141672950(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  return param_1;
}




longlong * FUN_141672980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != -4) {
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar1 = *param_1;
    if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
      lVar2 = lVar1 + 8;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 8);
    }
    if ((ulonglong)(param_1[1] + param_2) <= (ulonglong)(lVar2 + *(longlong *)(lVar1 + 0x18))) {
      if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
        uVar3 = lVar1 + 8;
      }
      else {
        uVar3 = *(ulonglong *)(lVar1 + 8);
      }
      if (uVar3 <= (ulonglong)(param_1[1] + param_2)) goto LAB_1416729e4;
    }
    _invalid_parameter_noinfo();
  }
LAB_1416729e4:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}




undefined1 * FUN_141672a00(char *param_1,char *param_2,undefined1 *param_3,undefined *param_4)

{
  undefined1 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = (*(code *)param_4)((int)*param_1);
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_3;
}




undefined8 * FUN_141672a60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    param_3 = param_3 + 7;
  }
  return param_3;
}




void * FUN_141672ad0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141672b20(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141672ba0(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 2));
  }
  return;
}




void * FUN_141672c10(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x10));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_141672c80(longlong param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -0x38) {
    param_3[-7] = *(undefined8 *)(param_2 + -0x38);
    param_3[-6] = *(undefined8 *)(param_2 + -0x30);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + -5),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + -0x28));
    param_3 = param_3 + -7;
  }
  return param_3;
}




void * FUN_141672d50(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_141672d90(void)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
  return &DAT_1416882b8;
}




void FUN_141672df0(__uint64 param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}




void FUN_141672e50(void *param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}




void FUN_141672eb0(void *param_1)

{
  if ((DAT_1416882c0 & 1) == 0) {
    DAT_1416882c0 = DAT_1416882c0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416882b8,"CGame");
    atexit((_func_5014 *)&LAB_14167f810);
  }
                    /* WARNING: Could not recover jumptable at 0x000141672f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416882b8,param_1);
  return;
}




bool FUN_141672f40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_141672fa0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141673000(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141673010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141673020(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673042;
  }
  lVar2 = *plVar1;
LAB_141673042:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141673060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673082;
  }
  lVar2 = *plVar1;
LAB_141673082:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_1;
}




void FUN_1416730b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416730c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416730f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141673150(longlong param_1,longlong param_2)

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




void FUN_1416731b0(longlong param_1,longlong *param_2)

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




void FUN_141673240(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x38);
  return;
}




longlong FUN_1416732c0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 4) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return param_2 * 0x10 + *(longlong *)(param_1 + 0x18);
}




void FUN_141673300(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141673324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141673390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_1[1] + 8);
  param_1[1] = lVar1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)*param_1;
  }
  if (lVar1 == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1;
}




longlong FUN_1416733e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673402;
  }
  lVar2 = *plVar1;
LAB_141673402:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}




void FUN_141673430(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1416734c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141673530(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong FUN_1416735b0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  ldiv_t lVar2;
  undefined4 local_res10;
  
  lVar2 = ldiv((*param_2 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res10 = lVar2.quot;
  iVar1 = lVar2.rem * 0x41a7 + local_res10 * -0xb14;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fffffff;
  }
  return (longlong)iVar1;
}




longlong * FUN_141673610(longlong *param_1,longlong param_2)

{
  FUN_141672220(param_1,param_2);
  return param_1;
}




void FUN_141673630(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141673662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1416736d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673707;
  }
  lVar2 = *plVar1;
LAB_141673707:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_2;
}




longlong * FUN_141673730(longlong *param_1,longlong param_2)

{
  FUN_141672290(param_1,param_2);
  return param_1;
}




void FUN_141673780(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x48)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 * 0x48);
  return;
}




undefined8 * FUN_141673800(undefined8 *param_1)

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




void FUN_141673840(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_141686a20);
  }
  operator_new(param_2 << 4);
  return;
}




bool FUN_1416738e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




undefined8 * FUN_141673920(undefined8 *param_1)

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




undefined8 * FUN_141673960(undefined8 *param_1)

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




longlong FUN_1416739d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  if (param_1 != param_2) {
    lVar1 = (longlong)param_1 - param_3;
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 0x10);
    do {
      *(undefined8 *)(this + -0x10) = *param_1;
      *(undefined8 *)(this + -8) = param_1[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(this + lVar1));
      param_1 = param_1 + 7;
      this = this + 0x38;
    } while (param_1 != param_2);
  }
  return (lVar2 / 0x38) * 0x38 + param_3;
}




void FUN_141673a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




void * FUN_141673af0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141673b80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




longlong * FUN_141673c00(longlong *param_1,longlong param_2)

{
  FUN_141672980(param_1,param_2);
  return param_1;
}




longlong FUN_141673c30(longlong param_1,longlong param_2,longlong param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 0x10);
    lVar2 = param_2;
    do {
      this = pbVar1 + -0x38;
      lVar3 = lVar2 + -0x38;
      *(undefined8 *)(pbVar1 + -0x48) = *(undefined8 *)(lVar2 + -0x38);
      *(undefined8 *)(pbVar1 + -0x40) = *(undefined8 *)(lVar2 + -0x30);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(this + (param_2 - param_3)));
      pbVar1 = this;
      lVar2 = lVar3;
    } while (lVar3 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0x38) * -0x38;
}




void FUN_141673d20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141673d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return;
}




void * FUN_141673d90(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_141673dd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}




longlong FUN_141673e20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673e42;
  }
  lVar2 = *plVar1;
LAB_141673e42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141673e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673e82;
  }
  lVar2 = *plVar1;
LAB_141673e82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = *(longlong *)param_1[1];
  return param_1;
}




void FUN_141673eb0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141673ed0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141673ef0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141673f10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141673f10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_141673f60(longlong param_1,ulonglong param_2)

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
      FUN_141671c90();
    }
    lVar1 = FUN_141673240(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x38 + lVar1;
  }
  return uVar2;
}




longlong FUN_141673fd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141673ff2;
  }
  lVar2 = *plVar1;
LAB_141673ff2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




undefined8 * FUN_141674010(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141674050(longlong *param_1)

{
  FUN_141673300(param_1);
  return param_1;
}




longlong FUN_141674070(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674092;
  }
  lVar2 = *plVar1;
LAB_141674092:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}




undefined8 FUN_1416740b0(longlong param_1,ulonglong param_2)

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
      FUN_141671ed0();
    }
    lVar1 = FUN_141673430(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141674110(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141674130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416741b0(undefined8 *param_1)

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




ulonglong FUN_141674230(longlong param_1,uint *param_2)

{
  int iVar1;
  ldiv_t lVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  
  lVar2 = ldiv((*param_2 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res8 = lVar2.quot;
  iVar1 = lVar2.rem * 0x41a7 + local_res8 * -0xb14;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7fffffff;
  }
  uVar3 = (longlong)iVar1 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar3) {
    uVar3 = uVar3 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  return uVar3;
}




undefined8 * FUN_1416742a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_141674300(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_14167436d;
  }
  _invalid_parameter_noinfo();
LAB_14167436d:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




longlong * FUN_1416743a0(longlong *param_1,longlong param_2)

{
  FUN_141672220(param_1,-param_2);
  return param_1;
}




longlong * FUN_1416743c0(longlong *param_1)

{
  FUN_141673630(param_1);
  return param_1;
}




undefined8 * FUN_1416743f0(undefined8 *param_1)

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




longlong * FUN_141674430(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14167449a;
  }
  _invalid_parameter_noinfo();
LAB_14167449a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416744d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141674540(void)

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




void FUN_1416745a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined8 *)((longlong)pvVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 8) = pvVar1;
  }
  return;
}




undefined8 FUN_1416745e0(longlong param_1,ulonglong param_2)

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
      FUN_1416721b0();
    }
    lVar1 = FUN_141673840(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x10 + lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_141674650(undefined8 *param_1)

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




longlong * FUN_1416746a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141673300(param_1);
  return param_2;
}




undefined8 * FUN_1416746e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141674740(longlong param_1,ulonglong param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  undefined **local_48 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [48];
  
  if (0x492492492492492U - *(longlong *)(param_1 + 0x30) < param_2) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"list<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
  }
  *(ulonglong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_2;
  return;
}




undefined8 * FUN_1416747d0(undefined8 *param_1)

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




undefined8 * FUN_141674820(undefined8 *param_1)

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




undefined8 * FUN_141674870(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416748d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  FUN_1416739d0(param_1,param_2,param_3);
  return;
}




void * FUN_141674900(void *param_1,longlong param_2,void *param_3)

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




void FUN_141674940(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
  }
  return;
}




void * FUN_1416749d0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141674a90(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141673c30(param_1,param_2,param_3);
  return;
}




void FUN_141674b00(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}




void FUN_141674b40(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000141674b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x10));
  return;
}




longlong * FUN_141674b70(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar2 != -4) {
    if (lVar2 == 0) {
      _invalid_parameter_noinfo();
    }
    puVar5 = (undefined8 *)(lVar2 + 8);
    puVar4 = puVar5;
    if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar1 = (undefined8 *)(lVar3 + param_3);
    if (puVar1 <= (undefined8 *)((longlong)puVar4 + *(longlong *)(lVar2 + 0x18))) {
      if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (puVar5 <= puVar1) goto LAB_141674bef;
    }
    _invalid_parameter_noinfo();
  }
LAB_141674bef:
  *param_2 = lVar2;
  param_2[1] = lVar3 + param_3;
  return param_2;
}




void * FUN_141674c70(void *param_1,longlong param_2,void *param_3)

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




void FUN_141674cb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_141674cd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_3 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_1 + 2));
    }
    param_3 = param_3 + 7;
  }
  return param_3;
}




void FUN_141674d80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141673f10(param_1,(longlong *)plVar2[2]);
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




longlong FUN_141674e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674e22;
  }
  lVar2 = *plVar1;
LAB_141674e22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141674e40(longlong *param_1)

{
  FUN_141673300(param_1);
  return param_1;
}




longlong FUN_141674e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141674e82;
  }
  lVar2 = *plVar1;
LAB_141674e82:
  if (param_1[1] == *(longlong *)(lVar2 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x10;
}




void FUN_141674ea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141674f00(undefined8 *param_1)

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




undefined8 * FUN_141674f50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_141674fb0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar3 = param_3 * -0x38 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_141675020;
  }
  _invalid_parameter_noinfo();
LAB_141675020:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_141675060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416750a0(longlong *param_1)

{
  FUN_141673630(param_1);
  return param_1;
}




void FUN_1416750c0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416750f0(undefined8 *param_1)

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




undefined8 * FUN_141675140(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416751a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416751c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141674540();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141675200(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141675260(undefined8 *param_1)

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




undefined8 * FUN_1416752d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141675310(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141675360(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416753b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141675440(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141675490(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141686a80);
  }
  FUN_141673300(param_3);
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
        goto LAB_14167567c;
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
LAB_14167567c:
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
            FUN_141673150((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416731b0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141673150((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416731b0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141673150((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416731b0((longlong)param_1,plVar7);
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




exception * FUN_141675850(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_1416758b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  *param_2 = 0;
  param_2[1] = uVar1;
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_1416758f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = uVar1;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_3;
  return param_2;
}




undefined8 * FUN_141675930(undefined8 *param_1)

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




undefined8 * FUN_141675980(undefined8 *param_1)

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




undefined8 * FUN_1416759d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141675a30(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_141673c30(param_1,param_2,param_3);
  return;
}




longlong FUN_141675a70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = param_2;
    do {
      lVar2 = lVar1 + -0x10;
      *(undefined8 *)((param_3 - param_2) + lVar2) = *(undefined8 *)(lVar1 + -0x10);
      *(undefined8 *)((param_3 - param_2) + 8 + lVar2) = *(undefined8 *)(lVar1 + -8);
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return param_3 - (param_2 - param_1 & 0xfffffffffffffff0U);
}




void FUN_141675ab0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_141674b00(param_1,param_2,param_3);
  return;
}




longlong * FUN_141675ad0(longlong *param_1,char *param_2,char *param_3,longlong *param_4,undefined *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  FUN_141674b70(param_4,param_1,(longlong)param_3 - (longlong)param_2);
  puVar1 = (undefined1 *)param_4[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar2 = (*(code *)param_5)((int)*param_2);
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}




void FUN_141675b50(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  }
  return;
}




void FUN_141675ba0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 2),
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 2));
    }
    param_1 = param_1 + 7;
  }
  return;
}




void * FUN_141675c30(longlong param_1,longlong param_2,void *param_3)

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




void * FUN_141675ca0(void *param_1,longlong param_2,void *param_3)

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




void FUN_141675ce0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}




void FUN_141675d00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}




longlong * FUN_141675d60(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141675e30(undefined8 *param_1)

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




undefined8 * FUN_141675e90(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141675ee0(undefined8 *param_1,undefined8 *param_2)

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




ulonglong FUN_141675f30(longlong *param_1)

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
  uVar1 = uVar1 - 0x38;
  if (uVar1 <= *(ulonglong *)(lVar3 + 0x20)) {
    lVar3 = lVar4;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_141675fa7;
  }
  _invalid_parameter_noinfo();
LAB_141675fa7:
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




undefined8 * FUN_141675fe0(undefined8 *param_1)

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




void FUN_141676040(undefined8 *param_1)

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




undefined8 * FUN_141676080(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416760d0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141676120(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141676140(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_141686968);
  }
  plVar5 = FUN_141674130(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_1416764c0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_1416765b0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141674d80((longlong)param_1);
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
    FUN_141675490(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141676760(longlong param_1,undefined8 *param_2,longlong param_3)

{
  param_2[1] = *(undefined8 *)(param_3 + 8);
  *param_2 = 0;
  if ((undefined8 *)(param_1 + 0x10) == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}




undefined8 * FUN_1416767a0(undefined8 *param_1)

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




undefined8 * FUN_1416767f0(undefined8 *param_1)

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




undefined8 * FUN_141676850(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416768a0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416768f0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141676950(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_141674b00(param_2,param_3,param_4);
  return param_2 + param_3 * 2;
}




longlong * FUN_1416769a0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,undefined *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong local_18;
  longlong local_10;
  
  local_18 = *param_4;
  pcVar1 = *(char **)(param_3 + 8);
  pcVar3 = *(char **)(param_2 + 8);
  local_10 = param_4[1];
  FUN_141674b70(&local_18,param_1,(longlong)pcVar1 - (longlong)pcVar3);
  if (pcVar3 != pcVar1) {
    lVar4 = local_10 - (longlong)pcVar3;
    do {
      cVar2 = (*(code *)param_5)((int)*pcVar3);
      pcVar3 = pcVar3 + 1;
      pcVar3[lVar4 + -1] = cVar2;
    } while (pcVar3 != pcVar1);
  }
  return param_1;
}




void FUN_141676a30(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  }
  return;
}




void FUN_141676a80(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_141675ba0(param_1,param_2,param_3);
  return;
}




void * FUN_141676aa0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_141676b40(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141676b80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141673dd0(param_1,param_2,param_3);
  return;
}




void FUN_141676ba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}




ulonglong FUN_141676bc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *extraout_RAX;
  longlong *plVar4;
  ulonglong extraout_RAX_00;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x70);
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x78);
    if (puVar2 < *(undefined8 **)(param_1 + 0x70)) {
      _invalid_parameter_noinfo();
    }
    plVar4 = *(longlong **)(param_1 + 0x58);
    if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar4)) {
      _invalid_parameter_noinfo();
      plVar4 = extraout_RAX;
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
    log_InlineLogMessage("Module %s init start...");
    cVar3 = (**(code **)(*(longlong *)*puVar5 + 0x10))();
    if (cVar3 == '\0') {
      log_InlineLogERROR("Module%d: %s init failed.");
      return extraout_RAX_00 & 0xffffffffffffff00;
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
    puVar5 = puVar5 + 7;
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
}




void FUN_141676d30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulong uVar3;
  ulong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x70) < plVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 < *(longlong **)(param_1 + 0x68)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x50))) {
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
    if (*plVar5 != 0) {
      uVar3 = tq::TimeGet(0);
      (**(code **)(*(longlong *)*plVar5 + 0x18))();
      uVar4 = tq::TimeGet(0);
      if (499 < uVar4 - uVar3) {
        log_InlineLogMessage("CGame::OnTimer module:%s OnTimer() cost %u ms");
      }
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
    plVar5 = plVar5 + 7;
  }
  return;
}




undefined8 FUN_141676e70(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x48))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
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
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x48);
    local_28 = *(longlong *)(param_1 + 0x18);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x48);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x18))) {
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




void FUN_141676f70(longlong param_1)

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




undefined8 FUN_141676fc0(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x1d8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x1d8);
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
  puVar8 = *(undefined8 **)(param_1 + 0x1d8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x1d8);
    local_28 = *(longlong *)(param_1 + 0x1a8);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x1d8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x1a8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 8))(*(longlong **)(param_1 + 0x1e8),param_2);
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




longlong * FUN_1416770f0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14167724d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14167727c;
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
      goto LAB_14167724d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141676140(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14167727c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_1416772e0(longlong *param_1)

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




void FUN_1416773a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416773c0(longlong *param_1)

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
  FUN_1416765b0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_141677430(undefined8 param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x10));
  }
  return;
}




void FUN_141677480(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    }
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141677500(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_141675ba0(param_2,param_3,param_4);
  return param_2 + param_3 * 7;
}




longlong * FUN_141677550(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ldiv_t lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8;
  undefined8 *puStack_40;
  
  lVar4 = ldiv((*param_3 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res8 = lVar4.quot;
  iVar3 = lVar4.rem * 0x41a7 + local_res8 * -0xb14;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7fffffff;
  }
  uVar5 = (longlong)iVar3 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
    uVar5 = uVar5 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar5) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  puStack_40 = *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 8 + uVar5 * 0x10);
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  lVar6 = 0;
  while( true ) {
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar5 + 1) {
      _invalid_parameter_noinfo();
    }
    if (*(undefined8 **)(*(longlong *)(param_1 + 0x60) + 8 + (uVar5 + 1) * 0x10) == puStack_40) {
      param_2[1] = *(longlong *)(param_1 + 0x38);
      *param_2 = *plVar1;
      return param_2;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puStack_40 == *(undefined8 **)(lVar7 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if (*param_3 <= *(uint *)(puStack_40 + 2)) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puStack_40 == *(undefined8 **)(lVar7 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puStack_40 = (undefined8 *)*puStack_40;
  }
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar6 = *plVar2;
  }
  if (puStack_40 == *(undefined8 **)(lVar6 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  if (*param_3 < *(uint *)(puStack_40 + 2)) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    *param_2 = *plVar1;
    param_2[1] = lVar6;
  }
  else {
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)puStack_40;
  }
  return param_2;
}




undefined8 * FUN_141677740(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141671ed0();
    }
    lVar2 = FUN_141673430(param_1 + 2,uVar4);
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
    pvVar3 = FUN_141676aa0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




undefined8 * FUN_1416778a0(undefined8 *param_1)

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




undefined8 * FUN_1416778f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
  }
  *param_1 = puVar1;
  uVar2 = FUN_1416745a0();
  param_1[5] = uVar2;
  param_1[6] = 0;
  return param_1;
}




void FUN_141677950(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_141677980(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141671ed0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141673430(param_1 + 0x10,uVar8);
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
      FUN_141676b40(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141676b40(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416749d0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




longlong * FUN_141677c30(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
    puVar6 = puVar3;
    while (puVar6 != puVar5) {
      puVar7 = puVar6 + 2;
      *(undefined8 *)((longlong)puVar4 + (-0x10 - (longlong)puVar3) + (longlong)puVar7) = *puVar6;
      *(undefined8 *)((longlong)puVar4 + (-8 - (longlong)puVar3) + (longlong)puVar7) = puVar6[1];
      puVar6 = puVar7;
    }
    param_1[4] = ((longlong)puVar5 - (longlong)puVar3 & 0xfffffffffffffff0U) + (longlong)puVar4;
  }
  return param_2;
}




void FUN_141677d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_141673dd0(param_2,param_3,param_4);
  return;
}




undefined4 * FUN_141677d70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_141677740((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




void FUN_141677db0(longlong param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




void FUN_141677e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141674cd0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_141677e20(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint local_38 [2];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_38[0] = param_2;
  local_30 = param_3;
  plVar1 = FUN_1416770f0((longlong *)(param_1 + 0x18),local_28,local_38);
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1e8) = param_3;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}




undefined8 FUN_141677e70(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint local_38 [2];
  undefined8 local_30;
  longlong local_28 [5];
  
  local_38[0] = param_2;
  local_30 = param_3;
  plVar1 = FUN_1416770f0((longlong *)(param_1 + 0x1a8),local_28,local_38);
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}




void FUN_141677ea0(longlong *param_1)

{
  FUN_1416773c0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141677ed0(undefined8 *param_1)

{
  FUN_141677480((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141677f00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = lVar1 - *(longlong *)(param_1 + 0x18);
  lVar3 = lVar2 >> 0x3f;
  if (lVar2 / 0x38 + lVar3 != lVar3) {
    for (lVar3 = lVar1 + -0x38; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x10));
    }
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -0x38;
  }
  return;
}




longlong * FUN_141677f80(longlong param_1,longlong *param_2,uint *param_3)

{
  FUN_141677550(param_1,param_2,param_3);
  return param_2;
}




undefined4 * FUN_141677fa0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_141677740((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




undefined8 * FUN_141677fd0(undefined8 *param_1)

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
  lVar2 = FUN_141674540();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_141678050(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
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
  puVar2 = *(undefined8 **)(param_4 + 8);
  if ((puVar2 < (undefined8 *)param_1[3]) || ((undefined8 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined8 *)param_2[1] != puVar2) {
    lVar4 = FUN_1416739d0(puVar2,(undefined8 *)param_1[4],param_2[1]);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 0x10));
    }
    param_1[4] = lVar4;
  }
  return param_2;
}




void FUN_141678170(undefined8 *param_1)

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




longlong * FUN_1416781b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141677980((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416782a4;
  }
  _invalid_parameter_noinfo();
LAB_1416782a4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416782e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(longlong *)(param_1 + 0x28) - lVar4 >> 4;
  }
  if (param_3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    lVar4 = (longlong)puVar2 - lVar4 >> 4;
    if (0xfffffffffffffffU - lVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1416721b0();
    }
    uVar6 = param_3 + lVar4;
    if (uVar5 < uVar6) {
      if (0xfffffffffffffff - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (uVar5 < uVar6) {
        uVar5 = uVar6;
      }
      puVar2 = (undefined8 *)FUN_141673840(param_1 + 0x10,uVar5);
      lVar4 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 4;
      FUN_141674b00(puVar2 + lVar4 * 2,param_3,param_4);
      FUN_141673dd0(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar2);
      FUN_141673dd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar2 + (lVar4 + param_3) * 2);
      pvVar1 = *(void **)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar2 + uVar5 * 2;
      *(undefined8 **)(param_1 + 0x20) = puVar2 + (param_3 + (lVar4 - (longlong)pvVar1 >> 4)) * 2;
      *(undefined8 **)(param_1 + 0x18) = puVar2;
    }
    else if ((ulonglong)((longlong)puVar2 - *(longlong *)(param_2 + 8) >> 4) < param_3) {
      local_38 = *param_4;
      local_30 = param_4[1];
      FUN_141673dd0(*(undefined8 **)(param_2 + 8),puVar2,*(undefined8 **)(param_2 + 8) + param_3 * 2);
      FUN_141674b00(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8) >> 4),&local_38);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x10;
      lVar4 = *(longlong *)(param_1 + 0x20);
      for (puVar2 = *(undefined8 **)(param_2 + 8); puVar2 != (undefined8 *)(lVar4 + param_3 * -0x10); puVar2 = puVar2 + 2) {
        *puVar2 = local_38;
        puVar2[1] = local_30;
      }
    }
    else {
      local_38 = *param_4;
      local_30 = param_4[1];
      puVar3 = FUN_141673dd0(puVar2 + param_3 * -2,puVar2,puVar2);
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      FUN_141675a70(*(longlong *)(param_2 + 8),(longlong)(puVar2 + param_3 * -2),(longlong)puVar2);
      puVar3 = *(undefined8 **)(param_2 + 8);
      puVar2 = puVar3 + param_3 * 2;
      for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
        *puVar3 = local_38;
        puVar3[1] = local_30;
      }
    }
  }
  return;
}




void FUN_1416785e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_141674cd0(param_2,param_3,param_4);
  return;
}




void FUN_141678620(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    FUN_141677740((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  }
  return;
}




void * FUN_141678660(void *param_1,uint param_2)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  operator_delete(*(void **)((longlong)param_1 + 0x18));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416786e0(longlong *param_1)

{
  FUN_1416773c0(param_1);
  operator_delete((void *)*param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort FUN_141678710(longlong param_1,undefined4 param_2,void *param_3,ushort param_4,ushort param_5,char param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_4c8 [32];
  ushort local_4a8;
  uint local_4a4 [3];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  longlong *local_478;
  longlong *local_468;
  undefined8 local_458;
  undefined2 local_448;
  ushort local_446;
  undefined1 local_444 [1020];
  ulonglong local_48;
  
  local_458 = 0xfffffffffffffffe;
  local_48 = DAT_141688288 ^ (ulonglong)auStack_4c8;
  if (param_6 == '\0') {
    lVar3 = param_1 + 0x80;
  }
  else {
    lVar3 = param_1 + 0x110;
  }
  local_4a4[0] = (uint)param_5;
  local_4a8 = param_4;
  FUN_141677550(lVar3,&local_498,local_4a4);
  lVar5 = *(longlong *)(lVar3 + 0x38);
  local_478 = *(longlong **)(lVar3 + 0x10);
  if ((local_498 == (longlong *)0x0) || (local_498 != local_478)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = (longlong)uStack_490;
  if (uStack_490 != (longlong *)lVar5) {
    if (local_498 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *local_498;
    }
    if (uStack_490 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if ((*(longlong *)((longlong)uStack_490 + 0x38) - *(longlong *)((longlong)uStack_490 + 0x30) & 0xfffffffffffffff8U) != 0) {
      local_448 = (ushort)local_448._1_1_ << 8;
      memset((void *)((longlong)&local_448 + 1),0,0x3ff);
      local_448 = param_4 + 4;
      local_446 = param_5;
      memcpy(local_444,param_3,(ulonglong)param_4);
      plVar4 = *(longlong **)((longlong)uStack_490 + 0x30);
      local_498 = (longlong *)0x0;
      if (*(longlong **)((longlong)uStack_490 + 0x38) < plVar4) {
        _invalid_parameter_noinfo();
      }
      plVar1 = *(longlong **)((longlong)uStack_490 + 0x18);
      local_498._0_4_ = SUB84(plVar1,0);
      local_498._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      uStack_490._0_4_ = SUB84(plVar4,0);
      uStack_490._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_488 = (undefined4)local_498;
      uStack_484 = local_498._4_4_;
      uStack_480 = (undefined4)uStack_490;
      uStack_47c = uStack_490._4_4_;
      local_498 = plVar1;
      uStack_490 = plVar4;
      while( true ) {
        plVar2 = *(longlong **)(lVar3 + 0x38);
        local_468 = (longlong *)0x0;
        if (plVar2 < *(longlong **)(lVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        local_468 = *(longlong **)(lVar3 + 0x18);
        if ((plVar1 == (longlong *)0x0) || (plVar1 != local_468)) {
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
        plVar2 = (longlong *)*plVar4;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_2,&local_448,local_448);
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
    }
  }
  return param_4;
}




undefined8 * FUN_141678960(undefined8 *param_1)

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
  lVar2 = FUN_141674540();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416789e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
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
    lVar4 = FUN_1416739d0(puVar1,(undefined8 *)param_1[4],(longlong)puVar2);
    lVar3 = param_1[4];
    for (lVar5 = lVar4; lVar5 != lVar3; lVar5 = lVar5 + 0x38) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar5 + 0x10));
    }
    param_1[4] = lVar4;
  }
  return;
}




void FUN_141678ad0(longlong *param_1,undefined8 *param_2)

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
  FUN_1416781b0(param_1,local_18,&local_28,param_2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141678b80(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_70 [40];
  ulonglong local_48;
  
  local_88 = 0xfffffffffffffffe;
  local_48 = DAT_141688288 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0x28) - lVar2) / 0x38;
  }
  if (param_3 != 0) {
    lVar2 = (*(longlong *)(param_1 + 0x20) - lVar2) / 0x38;
    local_b0 = param_2;
    local_a8 = param_1;
    local_a0 = param_3;
    local_90 = param_4;
    if (0x492492492492492U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_141671c90();
    }
    uVar1 = lVar2 + param_3;
    if (uVar6 < uVar1) {
      if (0x492492492492492 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar4 = (undefined8 *)FUN_141673240(param_1 + 0x10,uVar6);
      lVar2 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 0x38;
      local_b4 = 0;
      local_c0 = 0;
      local_c8 = local_b8;
      local_b0 = lVar2;
      local_98 = puVar4;
      FUN_141675ba0(puVar4 + lVar2 * 7,param_3,local_90);
      local_b4 = 1;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar4);
      local_b4 = 2;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar4 + (param_3 + lVar2) * 7);
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar2 != 0) {
        FUN_141677430(param_1,lVar2,*(longlong *)(param_1 + 0x20));
        operator_delete(*(void **)(param_1 + 0x18));
      }
      *(undefined8 **)(param_1 + 0x28) = puVar4 + uVar6 * 7;
      *(undefined8 **)(param_1 + 0x20) = puVar4 + (param_3 + (lVar3 - lVar2) / 0x38) * 7;
      *(undefined8 **)(param_1 + 0x18) = puVar4;
    }
    else if ((ulonglong)((*(longlong *)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38) < param_3) {
      local_80 = *param_4;
      local_78 = param_4[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_70,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141674cd0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),*(undefined8 **)(param_2 + 8) + param_3 * 7);
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141675ba0(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 0x38,&local_80);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 0x38;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (puVar4 = *(undefined8 **)(param_2 + 8); puVar4 != (undefined8 *)(lVar2 + param_3 * -0x38); puVar4 = puVar4 + 7) {
        *puVar4 = local_80;
        puVar4[1] = local_78;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar4 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70);
    }
    else {
      local_80 = *param_4;
      local_78 = param_4[1];
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_70,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_4 + 2));
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      local_c0 = 0;
      local_c8 = local_b8;
      puVar5 = FUN_141674cd0(puVar4 + param_3 * -7,puVar4,puVar4);
      *(undefined8 **)(param_1 + 0x20) = puVar5;
      local_c0 = 0;
      local_c8 = local_b8;
      FUN_141673c30(*(longlong *)(param_2 + 8),(longlong)(puVar4 + param_3 * -7),(longlong)puVar4);
      puVar5 = *(undefined8 **)(param_2 + 8);
      puVar4 = puVar5 + param_3 * 7;
      for (; puVar5 != puVar4; puVar5 = puVar5 + 7) {
        *puVar5 = local_80;
        puVar5[1] = local_78;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar5 + 2),
                   (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_70);
    }
  }
  return;
}




void FUN_141678f90(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  FUN_1416782e0(param_1,(longlong)&local_18,param_3,param_4);
  return;
}




void FUN_141678fc0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    FUN_141677740((undefined8 *)(param_2 + 2),(undefined8 *)(param_3 + 2));
  }
  return;
}




void FUN_141679000(longlong param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




longlong * FUN_141679050(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_141678b80((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_141679172;
  }
  _invalid_parameter_noinfo();
LAB_141679172:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




void FUN_1416791b0(undefined8 param_1,longlong param_2)

{
  if (*(void **)(param_2 + 0x30) != (void *)0x0) {
    operator_delete(*(void **)(param_2 + 0x30));
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  operator_delete(*(void **)(param_2 + 0x18));
  return;
}




void FUN_141679200(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_3;
  puVar1 = (undefined8 *)param_1[4];
  local_10 = param_3[1];
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
    puVar6 = puVar1;
    while (puVar6 != puVar4) {
      puVar7 = puVar6 + 2;
      *(undefined8 *)((longlong)puVar2 + (-0x10 - (longlong)puVar1) + (longlong)puVar7) = *puVar6;
      *(undefined8 *)((longlong)puVar2 + (-8 - (longlong)puVar1) + (longlong)puVar7) = puVar6[1];
      puVar6 = puVar7;
    }
    param_1[4] = ((longlong)puVar4 - (longlong)puVar1 & 0xfffffffffffffff0U) + (longlong)puVar2;
  }
  uVar5 = param_1[3];
  if ((ulonglong)param_1[4] < uVar5) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  uStack_20 = uVar5;
  FUN_1416782e0((longlong)param_1,(longlong)&local_28,param_2,&local_18);
  return;
}




undefined8 * FUN_141679330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = *param_4;
    FUN_141677740(puVar1 + 3,(undefined8 *)(param_4 + 2));
  }
  return puVar1;
}




void FUN_1416793d0(longlong *param_1,undefined8 *param_2)

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
    uVar3 = (param_1[5] - (longlong)puVar1) / 0x38;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 0x38) < uVar3) {
    FUN_141675ba0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 7);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_141679050(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416794d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  plVar2 = (longlong *)*plVar1;
  *plVar1 = (longlong)plVar1;
  *(longlong *)(*(longlong *)(param_1 + 0x28) + 8) = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar2 != *(longlong **)(param_1 + 0x28)) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((void *)plVar2[6] != (void *)0x0) {
        operator_delete((void *)plVar2[6]);
      }
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[8] = 0;
      operator_delete((void *)plVar2[3]);
      operator_delete(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x28));
  }
  return;
}




undefined8 * FUN_141679580(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)param_3[1];
  plVar2 = (longlong *)*param_3;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_3;
    lVar3 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_1416795d1;
  }
  lVar3 = *plVar2;
LAB_1416795d1:
  if (param_3[1] == *(longlong *)(lVar3 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  param_3[1] = *(longlong *)param_3[1];
  if (plVar1 != (longlong *)param_1[5]) {
    *(longlong *)plVar1[1] = *plVar1;
    *(longlong *)(*plVar1 + 8) = plVar1[1];
    if ((void *)plVar1[6] != (void *)0x0) {
      operator_delete((void *)plVar1[6]);
    }
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    operator_delete((void *)plVar1[3]);
    operator_delete(plVar1);
    param_1[6] = param_1[6] + -1;
  }
  param_2[1] = param_3[1];
  *param_2 = *param_1;
  return param_2;
}




void FUN_1416796a0(longlong param_1)

{
  FUN_1416794d0(param_1);
  operator_delete(*(void **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_1416796e0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  puVar2 = FUN_141679330(param_1,lVar1,*(undefined8 *)(lVar1 + 8),param_3);
  FUN_141674740(param_1,1);
  *(undefined8 **)(lVar1 + 8) = puVar2;
  *(undefined8 **)puVar2[1] = puVar2;
  return;
}




longlong * FUN_141679730(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  longlong local_20;
  undefined8 local_18 [2];
  
  lVar1 = *(longlong *)param_1[5];
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == lVar1) {
    lVar1 = param_1[5];
    if ((*param_4 == 0) || (*param_4 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar1) {
      FUN_1416794d0((longlong)param_1);
      param_2[1] = param_1[5];
      goto LAB_14167980e;
    }
  }
  while( true ) {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == param_4[1]) break;
    local_28 = *param_3;
    local_20 = param_3[1];
    plVar2 = FUN_141679580(param_1,local_18,&local_28);
    *param_3 = *plVar2;
    param_3[1] = plVar2[1];
  }
  param_2[1] = param_4[1];
LAB_14167980e:
  *param_2 = *param_1;
  return param_2;
}




void FUN_141679840(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined **local_a0 [3];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_88 [56];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [40];
  
  do {
    if ((*param_3 == 0) || (*param_3 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == param_4[1]) {
      return;
    }
    lVar4 = *(longlong *)(param_2 + 8);
    plVar3 = (longlong *)*param_3;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar3 = (longlong *)*param_3;
      lVar1 = 0;
      if (plVar3 != (longlong *)0x0) goto LAB_1416798e0;
    }
    else {
LAB_1416798e0:
      lVar1 = *plVar3;
    }
    if (param_3[1] == *(longlong *)(lVar1 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puVar2 = FUN_141679330(param_1,lVar4,*(undefined8 *)(lVar4 + 8),(undefined4 *)(param_3[1] + 0x10));
    if (*(longlong *)(param_1 + 0x30) == 0x492492492492492) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_50,"list<T> too long");
      std::exception::exception((exception *)local_a0);
      local_a0[0] = std::logic_error::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (local_88,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_50);
      local_a0[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a0,(ThrowInfo *)&DAT_141686968);
    }
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
    *(undefined8 **)(lVar4 + 8) = puVar2;
    *(undefined8 **)puVar2[1] = puVar2;
    plVar3 = (longlong *)*param_3;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar3 = (longlong *)*param_3;
      lVar4 = 0;
      if (plVar3 != (longlong *)0x0) goto LAB_1416799aa;
    }
    else {
LAB_1416799aa:
      lVar4 = *plVar3;
    }
    if (param_3[1] == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    param_3[1] = *(longlong *)param_3[1];
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416799f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  DWORD DVar3;
  int iVar4;
  CIni *this;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  undefined8 *puVar5;
  char *pcVar6;
  longlong *plVar7;
  __uint64 _Var8;
  HMODULE hModule;
  ulonglong extraout_RAX_00;
  ulonglong uVar9;
  FARPROC pFVar10;
  ulonglong extraout_RAX_01;
  INT_PTR IVar11;
  ulonglong extraout_RAX_02;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  char local_158;
  uint local_154;
  longlong local_150;
  longlong local_148;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined8 local_108;
  char *local_100;
  undefined **local_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [56];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98 [40];
  INT_PTR local_70;
  HMODULE local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [40];
  ulonglong local_38;
  
  local_118 = 0xfffffffffffffffe;
  local_38 = DAT_141688288 ^ (ulonglong)auStack_188;
  local_158 = param_2;
  local_150 = param_1;
  DVar3 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x10) = DVar3;
  this = tq::CIni::CreateNew("adapter_cfg.ini",true);
  if (this == (CIni *)0x0) {
    local_168 = 0x3a;
    log_InlineLogERROR(&DAT_141680650,"IF_NOT",&DAT_141681a34,"f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
    log_InlineLogERROR("adapter_cfg.ini loading failed at %s, %d","f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp",0x3b);
    uVar9 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_154 = tq::CIni::GetData(this,"Module","Amount");
    uVar9 = CONCAT44(extraout_var,local_154);
    for (uVar15 = 0; (int)uVar15 < (int)uVar9; uVar15 = uVar15 + 1) {
      puVar5 = FUN_1416714d0(&local_d8,"Module%d",(ulonglong)uVar15,param_4);
      if ((ulonglong)puVar5[5] < 0x10) {
        pcVar6 = (char *)(puVar5 + 2);
      }
      else {
        pcVar6 = (char *)puVar5[2];
      }
      pcVar6 = tq::CIni::GetString(this,"Module",pcVar6);
      local_d8 = tq::CString::vftable;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d0);
      if (pcVar6 != (char *)0x0) {
        if (param_2 == '\0') {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,pcVar6)
          ;
          plVar7 = (longlong *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(local_98);
          local_138 = *plVar7;
          local_130 = plVar7[1];
          puVar5 = (undefined8 *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(local_98);
          local_128 = *puVar5;
          local_120 = (char *)puVar5[1];
          puVar5 = (undefined8 *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin(local_98);
          pcVar2 = local_120;
          lVar1 = local_138;
          local_108 = *puVar5;
          pcVar13 = (char *)puVar5[1];
          local_148 = (longlong)local_120 - (longlong)pcVar13;
          lVar14 = local_130;
          local_100 = pcVar13;
          if (local_138 != -4) {
            if (local_138 == 0) {
              _invalid_parameter_noinfo();
            }
            lVar14 = local_130;
            if (*(ulonglong *)(lVar1 + 0x20) < 0x10) {
              lVar12 = lVar1 + 8;
            }
            else {
              lVar12 = *(longlong *)(lVar1 + 8);
            }
            puVar5 = (undefined8 *)(lVar1 + 8);
            if ((undefined8 *)(local_130 + local_148) <= (undefined8 *)(lVar12 + *(longlong *)(lVar1 + 0x18))) {
              if (0xf < *(ulonglong *)(lVar1 + 0x20)) {
                puVar5 = (undefined8 *)*puVar5;
              }
              if (puVar5 <= (undefined8 *)(local_130 + local_148)) goto LAB_141679c3a;
            }
            _invalid_parameter_noinfo();
          }
LAB_141679c3a:
          if (pcVar13 != pcVar2) {
            lVar14 = lVar14 - (longlong)pcVar13;
            do {
              iVar4 = tolower((int)*pcVar13);
              pcVar13[lVar14] = (char)iVar4;
              pcVar13 = pcVar13 + 1;
            } while (pcVar13 != pcVar2);
          }
          param_4 = 0xf;
          _Var8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find(local_98,"frontierflagwar",0,0xf);
          if (_Var8 != *(__uint64 *)npos_exref) {
            log_InlineLogMessage("GameServer Ignore Load Module[%s]!",pcVar6);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98);
            param_1 = local_150;
            param_2 = local_158;
            goto LAB_141679e14;
          }
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98);
          param_1 = local_150;
        }
        hModule = LoadLibraryA(pcVar6);
        if (hModule == (HMODULE)0x0) {
          local_168 = 0x56;
          log_InlineLogERROR("Module%d: %s loading failed at %s, %d. Check DLL dependency!",(ulonglong)uVar15,pcVar6,
                             "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_00;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        pFVar10 = GetProcAddress(hModule,"ModuleCreate");
        if (pFVar10 == (FARPROC)0x0) {
          local_168 = 0x61;
          log_InlineLogERROR("Module%d: %s loading failed at %s, %d. ModuleCreate() is not found!",(ulonglong)uVar15,pcVar6,
                             "f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_01;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        IVar11 = (*pFVar10)(param_1);
        if (IVar11 == 0) {
          local_168 = 0x69;
          log_InlineLogERROR("Module%d: %s create failed at %s, %d",(ulonglong)uVar15,pcVar6,"f:\\version\\cqserver-78.0.11-1204\\root\\src\\game.cpp");
          uVar9 = extraout_RAX_02;
          if (this != (CIni *)0x0) {
            uVar9 = (*(code *)**(undefined8 **)this)(this,1);
          }
          return uVar9 & 0xffffffffffffff00;
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
        local_70 = IVar11;
        local_68 = hModule;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(local_60,pcVar6);
        FUN_1416793d0((longlong *)(param_1 + 0x58),&local_70);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60);
        param_2 = local_158;
      }
LAB_141679e14:
      uVar9 = (ulonglong)local_154;
    }
    if (this != (CIni *)0x0) {
      uVar9 = (*(code *)**(undefined8 **)this)(this,1);
    }
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  }
  return uVar9;
}




void FUN_141679e70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  }
  local_18 = *puVar1;
  FUN_141679200((longlong *)(param_1 + 0x48),param_2 + 1,&local_18);
  *(longlong *)(param_1 + 0x80) = param_2;
  *(longlong *)(param_1 + 0x78) = param_2 + -1;
  return;
}




void FUN_141679ed0(undefined8 *param_1)

{
  FUN_1416794d0((longlong)param_1);
  operator_delete((void *)param_1[5]);
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141679f10(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = param_3[1];
  puVar2 = FUN_141679330(param_1,lVar1,*(undefined8 *)(lVar1 + 8),param_4);
  FUN_141674740((longlong)param_1,1);
  *(undefined8 **)(lVar1 + 8) = puVar2;
  *(undefined8 **)puVar2[1] = puVar2;
  if (*param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar1 = *(longlong *)(param_3[1] + 8);
  param_3[1] = lVar1;
  if ((longlong *)*param_3 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)*param_3;
  }
  if (lVar1 == *(longlong *)(lVar3 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  *param_2 = 0;
  param_2[1] = param_3[1];
  if (param_1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = *param_1;
  return param_2;
}




void FUN_14167a000(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

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
  FUN_141679840(param_1,(longlong)&local_18,&local_28,&local_38);
  return;
}




void FUN_14167a060(longlong param_1)

{
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  operator_delete(*(void **)(param_1 + 0x48));
  FUN_1416794d0(param_1 + 0x10);
  operator_delete(*(void **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_14167a0f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1416794d0(param_1 + 0x10);
  local_10 = *(undefined8 *)(param_1 + 0x38);
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  }
  local_18 = *puVar1;
  FUN_141679200((longlong *)(param_1 + 0x48),9,&local_18);
  *(undefined8 *)(param_1 + 0x78) = 7;
  *(undefined8 *)(param_1 + 0x80) = 8;
  return;
}




longlong FUN_14167a160(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_30;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 8) = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  local_30 = operator_new(8);
  plVar6 = (longlong *)0x0;
  plVar2 = plVar6;
  if (local_30 != (longlong *)0x0) {
    *local_30 = (longlong)puVar1;
    plVar2 = local_30;
  }
  *puVar1 = plVar2;
  uVar3 = FUN_1416745a0();
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar2 = (longlong *)(param_1 + 0x48);
  plVar4 = operator_new(8);
  plVar5 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)plVar2;
    plVar5 = plVar4;
  }
  *plVar2 = (longlong)plVar5;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x40800000;
  local_28 = *(undefined8 *)(param_1 + 0x38);
  if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
    plVar6 = *(longlong **)*puVar1;
  }
  local_30 = (longlong *)*plVar6;
  FUN_141679200(plVar2,9,&local_30);
  *(undefined8 *)(param_1 + 0x78) = 7;
  *(undefined8 *)(param_1 + 0x80) = 8;
  return param_1;
}




void FUN_14167a260(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  
  if (param_1 != param_3) {
    FUN_141674740(param_1,param_6);
    *(longlong *)(param_3 + 0x30) = *(longlong *)(param_3 + 0x30) - param_6;
  }
  **(undefined8 **)(*(longlong *)(param_4 + 8) + 8) = *(undefined8 *)(param_5 + 8);
  **(undefined8 **)(*(longlong *)(param_5 + 8) + 8) = *(undefined8 *)(param_2 + 8);
  **(undefined8 **)(*(longlong *)(param_2 + 8) + 8) = *(undefined8 *)(param_4 + 8);
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_2 + 8) + 8) = *(undefined8 *)(*(longlong *)(param_5 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_5 + 8) + 8) = *(undefined8 *)(*(longlong *)(param_4 + 8) + 8);
  *(undefined8 *)(*(longlong *)(param_4 + 8) + 8) = uVar1;
  return;
}




void FUN_14167a310(longlong param_1)

{
  FUN_14167a060(param_1);
  return;
}




void FUN_14167a330(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar8 = 0;
  do {
    lVar7 = *(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70);
    lVar10 = lVar7 >> 0x3f;
    if (lVar7 / 0x38 + lVar10 == lVar10) {
LAB_14167a407:
      plVar2 = *(longlong **)(param_1 + 0x1a8);
      plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x1d8);
      do {
        do {
          while( true ) {
            while( true ) {
              plVar9 = plVar3;
              plVar3 = *(longlong **)(param_1 + 0x1d8);
              if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x1a8))) {
                _invalid_parameter_noinfo();
              }
              if (plVar9 == plVar3) {
                puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0xc0);
                plVar2 = *(longlong **)(param_1 + 0x98);
                while( true ) {
                  puVar4 = *(undefined8 **)(param_1 + 0xc0);
                  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x98))) {
                    _invalid_parameter_noinfo();
                  }
                  if (puVar5 == puVar4) break;
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_1416772e0(puVar5 + 3);
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  puVar5 = (undefined8 *)*puVar5;
                }
                FUN_1416794d0(param_1 + 0x98);
                local_28 = *(undefined8 *)(param_1 + 0xc0);
                if (*(undefined8 **)(param_1 + 0x98) == (undefined8 *)0x0) {
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x98);
                }
                local_30 = *puVar5;
                FUN_141679200((longlong *)(param_1 + 0xd0),9,&local_30);
                *(undefined8 *)(param_1 + 0x100) = 7;
                *(undefined8 *)(param_1 + 0x108) = 8;
                puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x150);
                plVar2 = *(longlong **)(param_1 + 0x128);
                while( true ) {
                  puVar4 = *(undefined8 **)(param_1 + 0x150);
                  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x128))) {
                    _invalid_parameter_noinfo();
                  }
                  if (puVar5 == puVar4) break;
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  FUN_1416772e0(puVar5 + 3);
                  if (plVar2 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = *plVar2;
                  }
                  if (puVar5 == *(undefined8 **)(lVar10 + 0x28)) {
                    _invalid_parameter_noinfo();
                  }
                  puVar5 = (undefined8 *)*puVar5;
                }
                FUN_1416794d0(param_1 + 0x128);
                local_28 = *(undefined8 *)(param_1 + 0x150);
                if (*(undefined8 **)(param_1 + 0x128) == (undefined8 *)0x0) {
                  puVar5 = (undefined8 *)0x0;
                }
                else {
                  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x128);
                }
                local_30 = *puVar5;
                FUN_141679200((longlong *)(param_1 + 0x160),9,&local_30);
                *(undefined8 *)(param_1 + 400) = 7;
                *(undefined8 *)(param_1 + 0x198) = 8;
                FUN_1416789e0((longlong *)(param_1 + 0x58));
                plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 8);
                cVar1 = *(char *)((longlong)plVar2 + 0x29);
                while (cVar1 == '\0') {
                  FUN_141673f10(param_1 + 0x18,(longlong *)plVar2[2]);
                  plVar3 = (longlong *)*plVar2;
                  operator_delete(plVar2);
                  plVar2 = plVar3;
                  cVar1 = *(char *)((longlong)plVar3 + 0x29);
                }
                *(longlong *)(*(longlong *)(param_1 + 0x48) + 8) = *(longlong *)(param_1 + 0x48);
                *(undefined8 *)(param_1 + 0x50) = 0;
                *(undefined8 *)*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
                *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
                return;
              }
              if (plVar2 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar10 = 0;
              }
              else {
                lVar10 = *plVar2;
              }
              if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              (**(code **)(*(longlong *)(plVar9[4] + 8) + 8))();
              if (plVar2 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
              }
              if (*(char *)((longlong)plVar9 + 0x29) == '\0') break;
              _invalid_parameter_noinfo();
              plVar3 = plVar9;
            }
            plVar3 = (longlong *)plVar9[2];
            if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar9 = (longlong *)*plVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x29);
              plVar3 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          plVar3 = (longlong *)plVar9[1];
        } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
        do {
          plVar6 = plVar3;
          plVar3 = plVar6;
          if (plVar9 != (longlong *)plVar6[2]) break;
          plVar3 = (longlong *)plVar6[1];
          plVar9 = plVar6;
        } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
      } while( true );
    }
    uVar8 = uVar8 + 1;
    if (1000000 < uVar8) {
      log_InlineLogERROR(&DAT_141680650);
      goto LAB_14167a407;
    }
    puVar5 = (undefined8 *)FUN_141675f30((longlong *)(param_1 + 0x58));
    (**(code **)(*(longlong *)*puVar5 + 8))();
    FreeLibrary((HMODULE)puVar5[1]);
    FUN_141677f00(param_1 + 0x58);
  } while( true );
}




longlong FUN_14167a720(longlong param_1)

{
  undefined1 local_res18 [16];
  
  FUN_14167a160(param_1,local_res18);
  return param_1;
}




void FUN_14167a750(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = param_3[5];
  if ((*param_4 == 0) || (*param_4 != *param_3)) {
    _invalid_parameter_noinfo();
  }
  if (param_4[1] == lVar6) {
    return;
  }
  plVar1 = (longlong *)*param_4;
  plVar2 = (longlong *)param_4[1];
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar1;
  }
  if (plVar2 == *(longlong **)(lVar6 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  lVar6 = *plVar2;
  if (param_1 == param_3) {
    if ((*param_2 == 0) || (*param_2 != *param_4)) {
      _invalid_parameter_noinfo();
    }
    if (param_2[1] == param_4[1]) {
      return;
    }
    if (((longlong *)*param_2 == (longlong *)0x0) || ((longlong *)*param_2 != plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_2[1] == lVar6) {
      return;
    }
  }
  lVar3 = param_4[1];
  lVar4 = param_2[1];
  if (param_1 != param_3) {
    FUN_141674740((longlong)param_1,1);
    param_3[6] = param_3[6] + -1;
  }
  **(longlong **)(lVar3 + 8) = lVar6;
  **(longlong **)(lVar6 + 8) = lVar4;
  **(longlong **)(lVar4 + 8) = lVar3;
  uVar5 = *(undefined8 *)(lVar4 + 8);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar6 + 8);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar5;
  return;
}




undefined8 * FUN_14167a8b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *local_res18;
  longlong *local_res20;
  
  *param_1 = gs::IRoot::vftable;
  param_1[1] = root::IGame::vftable;
  *param_1 = root::CGame::vftable;
  param_1[1] = root::CGame::vftable;
  FUN_141678960(param_1 + 3);
  local_res18 = operator_new(8);
  plVar1 = (longlong *)0x0;
  if (local_res18 != (longlong *)0x0) {
    *local_res18 = (longlong)(param_1 + 0xb);
    plVar1 = local_res18;
  }
  param_1[0xb] = plVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_res20 = local_res18;
  FUN_14167a160((longlong)(param_1 + 0x11),(undefined1 *)&local_res18);
  local_res18 = param_1 + 0x23;
  FUN_14167a160((longlong)local_res18,(undefined1 *)&local_res20);
  FUN_141678960(param_1 + 0x35);
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 5000;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}




void FUN_14167a9a0(longlong param_1,uint param_2)

{
  FUN_14167b1f0((undefined8 *)(param_1 + -8),param_2);
  return;
}




void FUN_14167a9b0(undefined8 *param_1)

{
  *param_1 = root::CGame::vftable;
  param_1[1] = root::CGame::vftable;
  FUN_14167a330((longlong)param_1);
  FUN_1416773c0(param_1 + 0x35);
  operator_delete((void *)param_1[0x35]);
  FUN_14167a060((longlong)(param_1 + 0x23));
  FUN_14167a060((longlong)(param_1 + 0x11));
  FUN_141677480((longlong)(param_1 + 0xb));
  operator_delete((void *)param_1[0xb]);
  FUN_1416773c0(param_1 + 3);
  operator_delete((void *)param_1[3]);
  param_1[1] = root::IGame::vftable;
  return;
}




longlong * GameCreate(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  
                    /* 0xaa80  3  GameCreate */
  cVar5 = (char)param_4;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_141672df0(0x1f0);
    if (puVar2 == (undefined8 *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = FUN_14167a8b0(puVar2);
    }
    cVar1 = FUN_141672eb0(plVar3);
    if (cVar1 == '\0') {
      log_InlineLogERROR(&DAT_141680650);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)plVar3[1])(plVar3 + 1,1);
      }
      plVar3 = (longlong *)0x0;
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,0,param_1);
      if (cVar1 == '\0') {
        (**(code **)plVar3[1])(plVar3 + 1,1);
        plVar3 = (longlong *)0x0;
      }
      else {
        cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,1,param_2);
        if (cVar1 == '\0') {
          (**(code **)plVar3[1])(plVar3 + 1,1);
          plVar3 = (longlong *)0x0;
        }
        else {
          cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,2);
          if (cVar1 == '\0') {
            (**(code **)plVar3[1])(plVar3 + 1,1);
            plVar3 = (longlong *)0x0;
          }
          else {
            DAT_1416882b0 = plVar3;
            uVar4 = FUN_1416799f0((longlong)plVar3,cVar5,param_3,param_4);
            if ((char)uVar4 == '\0') {
              log_InlineLogERROR(&DAT_141680650);
              (**(code **)plVar3[1])(plVar3 + 1,1);
              plVar3 = (longlong *)0x0;
            }
            else {
              uVar4 = FUN_141676bc0((longlong)plVar3);
              if ((char)uVar4 == '\0') {
                log_InlineLogERROR(&DAT_141680650);
                (**(code **)plVar3[1])(plVar3 + 1,1);
                plVar3 = (longlong *)0x0;
              }
              else {
                plVar3 = plVar3 + 1;
              }
            }
          }
        }
      }
    }
  }
  return plVar3;
}




longlong * FUN_14167ac80(longlong param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  ldiv_t lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  int local_res18;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58 [3];
  
  lVar4 = ldiv((*param_3 ^ 0xdeadbeef) & 0x7fffffff,0x1f31d);
  local_res18 = lVar4.quot;
  iVar3 = lVar4.rem * 0x41a7 + local_res18 * -0xb14;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7fffffff;
  }
  uVar8 = (longlong)iVar3 & *(ulonglong *)(param_1 + 0x78);
  if (*(ulonglong *)(param_1 + 0x80) <= uVar8) {
    uVar8 = uVar8 + (-1 - (*(ulonglong *)(param_1 + 0x78) >> 1));
  }
  if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8 + 1) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + (uVar8 + 1) * 0x10);
  plStack_70 = plVar9;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)*plVar1;
  lVar11 = uVar8 * 0x10;
  local_78 = plVar2;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8) {
      _invalid_parameter_noinfo();
    }
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar11);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9 == plVar6) goto LAB_14167ae54;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    plVar9 = (longlong *)plVar9[1];
    lVar10 = 0;
    lVar5 = lVar10;
    if (plVar2 != (longlong *)0x0) {
      lVar5 = *plVar2;
    }
    plStack_70 = plVar9;
    if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar10;
    }
    else {
      lVar5 = *plVar2;
    }
    if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
      _invalid_parameter_noinfo();
    }
  } while (*param_3 < *(uint *)(plVar9 + 2));
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar10;
  }
  else {
    lVar5 = *plVar2;
  }
  if (plVar9 == (longlong *)*(longlong *)(lVar5 + 0x28)) {
    _invalid_parameter_noinfo();
  }
  if (*(uint *)(plVar9 + 2) < *param_3) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar10 = *plVar2;
    }
    if (plVar9 == (longlong *)*(longlong *)(lVar10 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    plVar9 = (longlong *)*plVar9;
    plStack_70 = plVar9;
LAB_14167ae54:
    lVar10 = *(longlong *)(param_1 + 0x38);
    if ((*param_4 == 0) || (*param_4 != *plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] == lVar10) {
      local_68 = local_78;
      plStack_60 = plStack_70;
      plVar6 = FUN_141679f10(plVar1,local_58,(longlong *)&local_68,param_3);
      *param_4 = *plVar6;
      param_4[1] = plVar6[1];
    }
    else {
      local_68 = (longlong *)*param_4;
      plStack_60 = (longlong *)param_4[1];
      FUN_14167a750(plVar1,(longlong *)&local_78,plVar1,(longlong *)&local_68);
    }
    while( true ) {
      if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8 + lVar11);
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar9 != plVar6) break;
      local_78 = (longlong *)*param_4;
      plStack_70 = (longlong *)param_4[1];
      if (local_78 == (longlong *)0x0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)*local_78;
      }
      local_68 = (longlong *)*local_68;
      plStack_60 = plStack_70;
      if ((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4) <= uVar8) {
        _invalid_parameter_noinfo();
      }
      lVar10 = *(longlong *)(param_1 + 0x60);
      *(longlong **)(lVar10 + lVar11) = local_68;
      *(longlong **)(lVar10 + 8 + lVar11) = plStack_60;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      lVar11 = lVar11 + -0x10;
    }
    uVar8 = *(ulonglong *)(param_1 + 0x80);
    fVar12 = (float)*(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    fVar13 = (float)(longlong)uVar8;
    if ((longlong)uVar8 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    if (*(float *)(param_1 + 0x88) <= fVar12 / fVar13 && fVar12 / fVar13 != *(float *)(param_1 + 0x88)) {
      iVar3 = 0;
      do {
        if (0x7fffffffffffffe < uVar8) break;
        iVar3 = iVar3 + 1;
        uVar8 = uVar8 * 2;
      } while (iVar3 < 3);
      plStack_60 = *(longlong **)(param_1 + 0x38);
      if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = *(undefined8 **)*plVar1;
      }
      local_68 = (longlong *)*puVar7;
      FUN_141679200((longlong *)(param_1 + 0x48),uVar8 + 1,&local_68);
      *(ulonglong *)(param_1 + 0x78) = uVar8 - 1;
      *(ulonglong *)(param_1 + 0x80) = uVar8;
      FUN_14167b100(param_1);
    }
    *param_2 = *param_4;
    plStack_70 = (longlong *)param_4[1];
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x38);
    if ((*param_4 == 0) || (*param_4 != *plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (param_4[1] != lVar11) {
      local_68 = (longlong *)*param_4;
      plStack_60 = (longlong *)param_4[1];
      FUN_141679580(plVar1,local_58,(longlong *)&local_68);
    }
    *(undefined1 *)(param_2 + 2) = 0;
    *param_2 = (longlong)local_78;
  }
  param_2[1] = (longlong)plStack_70;
  return param_2;
}




void FUN_14167b100(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [4];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  while( true ) {
    plVar2 = (longlong *)*plVar1;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 4 == 0) {
      _invalid_parameter_noinfo();
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 8);
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (lVar3 == lVar4) break;
    local_48 = SUB84(plVar2,0);
    uStack_44 = (undefined4)((ulonglong)plVar2 >> 0x20);
    uStack_40 = (undefined4)lVar3;
    uStack_3c = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_14167ac80(param_1,local_28,(uint *)(lVar3 + 0x10),(longlong *)&local_38);
  }
  return;
}




undefined8 * FUN_14167b1f0(undefined8 *param_1,uint param_2)

{
  FUN_14167a9b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141672e50(param_1);
  }
  return param_1;
}




longlong * FUN_14167b220(longlong param_1,longlong *param_2,uint *param_3)

{
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_1 + 0x38);
  local_18 = *(longlong *)(param_1 + 0x10);
  FUN_14167ac80(param_1,param_2,param_3,&local_18);
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x00014167b364) */
/* WARNING: Removing unreachable block (ram,0x00014167b32b) */
/* WARNING: Removing unreachable block (ram,0x00014167b34b) */
/* WARNING: Removing unreachable block (ram,0x00014167b399) */
/* WARNING: Removing unreachable block (ram,0x00014167b39e) */
/* WARNING: Removing unreachable block (ram,0x00014167b3a9) */
/* WARNING: Removing unreachable block (ram,0x00014167b3ae) */
/* WARNING: Removing unreachable block (ram,0x00014167b3b3) */
/* WARNING: Removing unreachable block (ram,0x00014167b3b9) */

void FUN_14167b260(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *local_c8 [3];
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  
  local_60 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  FUN_141677550(param_1 + 0x88,(longlong *)&local_d8,local_res10);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if ((local_d8 == (longlong *)0x0) || (local_d8 != *(longlong **)(param_1 + 0x98))) {
    _invalid_parameter_noinfo();
  }
  if (lStack_d0 != lVar4) {
    if (local_d8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_d8;
    }
    if (lStack_d0 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_141678ad0((longlong *)(lStack_d0 + 0x18),&local_res18);
    return;
  }
  local_res20 = operator_new(8);
  plVar3 = (longlong *)0x0;
  local_d8 = plVar3;
  if (local_res20 != (longlong *)0x0) {
    *local_res20 = (longlong)local_c8;
    local_d8 = local_res20;
  }
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  lStack_d0 = 0;
  local_c8[0] = local_d8;
  FUN_141677980((longlong)local_c8,(longlong)&local_d8,1,&local_res18);
  pvVar2 = local_b0;
  if (local_a8 < local_b0) {
    _invalid_parameter_noinfo();
  }
  plVar1 = local_c8[0];
  if (local_c8[0] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar5 = plVar3;
  }
  else {
    plVar5 = (longlong *)*local_c8[0];
  }
  if (pvVar2 <= (void *)plVar5[4]) {
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)*plVar1;
    }
    if ((void *)plVar3[3] <= pvVar2) goto LAB_14167b436;
  }
  _invalid_parameter_noinfo();
LAB_14167b436:
  local_98[0] = param_2;
  FUN_141677740(local_90,local_c8);
  lStack_d0 = *(undefined8 *)(param_1 + 0xc0);
  local_d8 = *(longlong **)(param_1 + 0x98);
  FUN_14167ac80(param_1 + 0x88,local_58,local_98,(longlong *)&local_d8);
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
  local_a8 = (void *)0x0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00014167b634) */
/* WARNING: Removing unreachable block (ram,0x00014167b5fb) */
/* WARNING: Removing unreachable block (ram,0x00014167b61b) */
/* WARNING: Removing unreachable block (ram,0x00014167b669) */
/* WARNING: Removing unreachable block (ram,0x00014167b66e) */
/* WARNING: Removing unreachable block (ram,0x00014167b679) */
/* WARNING: Removing unreachable block (ram,0x00014167b67e) */
/* WARNING: Removing unreachable block (ram,0x00014167b683) */
/* WARNING: Removing unreachable block (ram,0x00014167b689) */

void FUN_14167b530(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_d8;
  longlong lStack_d0;
  longlong *local_c8 [3];
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  
  local_60 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18 = param_3;
  FUN_141677550(param_1 + 0x118,(longlong *)&local_d8,local_res10);
  lVar4 = *(longlong *)(param_1 + 0x150);
  if ((local_d8 == (longlong *)0x0) || (local_d8 != *(longlong **)(param_1 + 0x128))) {
    _invalid_parameter_noinfo();
  }
  if (lStack_d0 != lVar4) {
    if (local_d8 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *local_d8;
    }
    if (lStack_d0 == *(longlong *)(lVar4 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    FUN_141678ad0((longlong *)(lStack_d0 + 0x18),&local_res18);
    return;
  }
  local_res20 = operator_new(8);
  plVar3 = (longlong *)0x0;
  local_d8 = plVar3;
  if (local_res20 != (longlong *)0x0) {
    *local_res20 = (longlong)local_c8;
    local_d8 = local_res20;
  }
  local_a0 = 0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  lStack_d0 = 0;
  local_c8[0] = local_d8;
  FUN_141677980((longlong)local_c8,(longlong)&local_d8,1,&local_res18);
  pvVar2 = local_b0;
  if (local_a8 < local_b0) {
    _invalid_parameter_noinfo();
  }
  plVar1 = local_c8[0];
  if (local_c8[0] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar5 = plVar3;
  }
  else {
    plVar5 = (longlong *)*local_c8[0];
  }
  if (pvVar2 <= (void *)plVar5[4]) {
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)*plVar1;
    }
    if ((void *)plVar3[3] <= pvVar2) goto LAB_14167b706;
  }
  _invalid_parameter_noinfo();
LAB_14167b706:
  local_98[0] = param_2;
  FUN_141677740(local_90,local_c8);
  lStack_d0 = *(undefined8 *)(param_1 + 0x150);
  local_d8 = *(longlong **)(param_1 + 0x128);
  FUN_14167ac80(param_1 + 0x118,local_58,local_98,(longlong *)&local_d8);
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
  local_a8 = (void *)0x0;
  local_a0 = 0;
  operator_delete(local_c8[0]);
  return;
}




/* public: class CRoot & __ptr64 __cdecl CRoot::operator=(class CRoot const & __ptr64) __ptr64 */

CRoot * __thiscall CRoot::operator=(CRoot *this,CRoot *param_1)

{
                    /* 0xb800  1  ??4CRoot@@QEAAAEAV0@AEBV0@@Z */
  return this;
}




undefined8 FUN_14167b810(void)

{
  return 1;
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




undefined8 FUN_14167b958(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_141688288) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_141688870);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_141688870);
    local_res18[0] = _decode_pointer(DAT_141688868);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_141688870 = _encode_pointer(local_res10);
    DAT_141688868 = _encode_pointer(local_res18[0]);
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




bool FUN_14167bb34(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_141688868 = _encode_pointer(puVar1);
  DAT_141688870 = DAT_141688868;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14167c230();
    atexit(FUN_14167c268);
    atexit((_func_5014 *)&LAB_14167c224);
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
    if (DAT_1416882c4 < 1) {
      return 0;
    }
    DAT_1416882c4 = DAT_1416882c4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_141688858 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141688858;
        pvVar3 = DAT_141688858;
      }
      DAT_141688858 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14167bc0e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14167bc0e:
    if (DAT_141688850 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_141688870);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_141688868);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_141688870);
            plVar12 = (longlong *)_decode_pointer(DAT_141688868);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_141688868 = _encoded_null();
        DAT_141688870 = DAT_141688868;
      }
      DAT_141688850 = 0;
      if (!bVar2) {
        LOCK();
        DAT_141688858 = (void *)0x0;
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
      bVar13 = DAT_141688858 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_141688858;
        pvVar3 = DAT_141688858;
      }
      DAT_141688858 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14167bd37;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14167bd37:
    if (DAT_141688850 == 0) {
      DAT_141688850 = 1;
      iVar4 = _initterm_e(&DAT_141680288,&DAT_141680298);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141680278,&DAT_141680280);
      DAT_141688850 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_141688858 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_141688860 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_141688860), BVar5 != 0)) {
      (*DAT_141688860)(param_1,2,param_3);
    }
    DAT_1416882c4 = DAT_1416882c4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014167beb0) */
/* WARNING: Removing unreachable block (ram,0x00014167be47) */
/* WARNING: Removing unreachable block (ram,0x00014167beeb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1416882c4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1416882a4 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1416882a4 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_14167b810();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_14167b810();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1416882a4 = 0xffffffff;
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




undefined8 FUN_14167bf68(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_141688370);
  local_30 = DAT_141688468;
  local_38 = RtlLookupFunctionEntry(DAT_141688468,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_141688408 = local_res8;
    DAT_141688468 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_141688370,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1416882e0 = DAT_141688468;
  _DAT_1416883f0 = local_res8[0];
  _DAT_1416882d0 = 0xc0000409;
  _DAT_1416882d4 = 1;
  local_20 = DAT_141688288;
  local_18 = DAT_141688290;
  DAT_141688368 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141681d30);
  if (DAT_141688368 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14167c230(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416824f0; puVar1 < &DAT_1416824f0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14167c268(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141682500; puVar1 < &DAT_141682500; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141670000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141670000);
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
  if (DAT_141688288 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_141688288 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_141688288 == 0x2b992ddfa232) {
      DAT_141688288 = 0x2b992ddfa233;
    }
  }
  DAT_141688290 = ~DAT_141688288;
  return;
}




/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}




void Unwind_14167c520(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c540(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c560(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c5c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c5e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c680(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c6a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c6c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c6e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c700(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c720(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c740(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c760(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c780(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c7a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c7c0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c7e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c800(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c820(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c840(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167c880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




undefined * Catch_14167c8a0(void)

{
  return &DAT_14167158e;
}




void Unwind_14167c8c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167c8e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167c900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167c920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167c940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14167c960(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167c980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14167c9a0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167c9c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167c9e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167ca00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167ca20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167ca40(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167ca60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14167ca80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167caa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14167cac0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167cae0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167cb00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14167cb20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167cb40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14167cb60(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167cb80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cbc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cbe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cc00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cc20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cc40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167cc60(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167cc80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Unwind_14167cca0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167ccc0(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}




void Unwind_14167cce0(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}




void Unwind_14167cd00(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}




void Unwind_14167cd20(void)

{
  DAT_1416882c0 = DAT_1416882c0 & 0xfffffffe;
  return;
}




void Unwind_14167cd40(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cd60(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cd80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cda0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cdc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167cde0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167ce00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167ce20(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167ce40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_14167ce60(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167ce80(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167cea0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167cec0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x58) + 0x10));
  return;
}




void Unwind_14167cee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Catch_14167cf00(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167cf20(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cf40(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cf60(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cf80(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cfa0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167cfc0(void)

{
  FUN_141671170();
  return;
}




void Catch_14167cfe0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167d010(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d030(void)

{
  FUN_141671170();
  return;
}




void Catch_14167d050(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14167d080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167d0b0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d0d0(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d0f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14167d110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167d130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14167d150(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14167d170(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d190(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d1b0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d1d0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14167d1f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167d210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_14167d230(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}




void Catch_14167d270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167d2c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 0x10));
  return;
}




void Unwind_14167d2e0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d300(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d320(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d340(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d360(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d380(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d3a0(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d3c0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d3e0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d400(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d420(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d440(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d460(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167d480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14167d4a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_14167d4c0(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_14167d4e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167d500(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167d520(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14167d540(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d560(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d580(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d5a0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d5c0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d5e0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d600(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167d620(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d640(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}




void Catch_14167d660(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x50);
  while (lVar2 != lVar1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 0x10));
    lVar2 = lVar2 + 0x38;
    *(longlong *)(param_2 + 0x20) = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167d6b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 0x10));
  return;
}




void Unwind_14167d6d0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d6f0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d710(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d730(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d750(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d770(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d790(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d7b0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d7d0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d7f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d810(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_14167d850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14167d870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167d890(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_14167d8b0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d8d0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d8f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d910(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d930(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167d950(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d970(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d990(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167d9b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




undefined8 Catch_14167d9d0(void)

{
  log_InlineLogCATCH_ERROR("CGame::Init() Exception @%s,%d");
  return 0x141676d0e;
}




undefined * Catch_14167da10(void)

{
  log_InlineLogCATCH_ERROR("CGame::OnTimer exception for module:%s");
  return &DAT_141676e1a;
}




void Unwind_14167da50(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167da70(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167da90(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dab0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dad0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167daf0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167db10(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167db30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_14167db50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167db70(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167dba0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_14167dbc0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_14167dbe0(undefined8 param_1,longlong param_2)

{
  FUN_1416750c0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167dc10(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167dc30(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dc50(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dc70(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dc90(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dcb0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167dcd0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dcf0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dd10(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dd30(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14167dd50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14167dd80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167dda0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167ddc0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_14167dde0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167de00(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167de20(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167de40(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167de60(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167de80(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dea0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dec0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dee0(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167df00(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167df20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167df40(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167df60(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167df80(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dfa0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dfc0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167dfe0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e000(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x70) + 0x10));
  return;
}




void Unwind_14167e040(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e060(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_14167e080(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_14167e0b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167e0d0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167e0f0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14167e110(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_14167e130(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167e150(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e170(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e190(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14167e1b0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e1d0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e1f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e210(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e230(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_14167e250(void)

{
  log_InlineLogCATCH_ERROR("CGame::Process(), MsgType: %d @%s,%d");
  return &DAT_14167892d;
}




void Unwind_14167e290(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167e2b0(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e2d0(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e2f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e310(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e330(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e350(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_14167e370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 0x10));
  return;
}




void Catch_14167e390(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 < 2) {
    pvVar4 = *(void **)(param_2 + 0x50);
    lVar2 = *(longlong *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x38);
    pvVar4 = *(void **)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    FUN_141677430(uVar3,(longlong)pvVar4,(longlong)(lVar2 * 0x38 + (longlong)pvVar4));
  }
  if (0 < iVar1) {
    FUN_141677430(uVar3,(longlong)((longlong)pvVar4 + lVar2 * 0x38),(longlong)((*(longlong *)(param_2 + 0x48) + lVar2) * 0x38 + (longlong)pvVar4));
  }
  operator_delete(pvVar4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167e420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167e440(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x68);
  return;
}




void Catch_14167e460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48) * 0x38;
  FUN_141677430(*(longlong *)(param_2 + 0x40),*(longlong *)(*(longlong *)(param_2 + 0x38) + 8) + lVar1,
                lVar1 + *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167e4b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167e4d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167e4f0(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x68);
  return;
}




void Unwind_14167e510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_14167e530(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167e550(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x58) + 8));
  return;
}




void Unwind_14167e570(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x40) + 0x10);
  return;
}




void Unwind_14167e590(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167e5b0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e5d0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167e5f0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x48) + 0x10);
  return;
}




void Unwind_14167e610(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_14167e630(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167e650(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167e670(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167e690(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Catch_14167e6b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x28));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167e6e0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x50) + 0x10);
  return;
}




void Unwind_14167e700(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14167e720(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14167e740(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14167e760(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(*(longlong *)(param_2 + 0x60) + 0x10);
  return;
}




void Unwind_14167e780(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_14167e7a0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_14167e7c0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_14167e7e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x98));
  return;
}




void Unwind_14167e800(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x48));
  return;
}




void Unwind_14167e820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}




void Unwind_14167e840(undefined8 param_1,longlong param_2)

{
  FUN_1416711d0((exception *)(param_2 + 0x48));
  return;
}




void Catch_14167e860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  plVar1 = *(longlong **)(param_2 + 0x100);
  puVar2 = *(undefined8 **)(param_2 + 0xf0);
  puVar3 = *(undefined8 **)(param_2 + 0xf8);
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  plVar4 = *(longlong **)(param_2 + 0x20);
  while( true ) {
    if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (puVar7 == (undefined8 *)plVar1[1]) break;
    *(undefined8 *)(param_2 + 0x20) = *puVar3;
    *(undefined8 *)(param_2 + 0x28) = puVar3[1];
    plVar5 = *(longlong **)(param_2 + 0x20);
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    *(longlong *)(param_2 + 0x28) = lVar8;
    if (plVar5 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar5;
    }
    if (lVar8 == *(longlong *)(lVar6 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x28);
    FUN_141679580(puVar2,(undefined8 *)(param_2 + 0x88),(longlong *)(param_2 + 0x30));
    if (plVar4 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar4;
    }
    if (puVar7 == *(undefined8 **)(lVar8 + 0x28)) {
      _invalid_parameter_noinfo();
    }
    puVar7 = (undefined8 *)*puVar7;
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_14167e960(undefined8 param_1,longlong param_2)

{
  FUN_1416715c0((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_14167e980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb8));
  return;
}




void Unwind_14167e9a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xf0));
  return;
}




undefined8 Catch_14167e9c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679d0c;
}




undefined8 Catch_14167ea00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679d61;
}




undefined8 Catch_14167ea40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679db5;
}




void Unwind_14167ea80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}




void Unwind_14167eaa0(undefined8 param_1,longlong param_2)

{
  FUN_141671730(param_2 + 0x118);
  return;
}




void Unwind_14167eac0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}




undefined8 Catch_14167eae0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pIni) @%s,%d");
  return 0x141679e33;
}




void Unwind_14167eb20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167eb40(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167eb60(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167eb80(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167eba0(undefined8 param_1,longlong param_2)

{
  FUN_141679ed0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_14167ebc0(undefined8 param_1,longlong param_2)

{
  FUN_141678170((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_14167ebe0(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167ec00(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167ec20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167ec40(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167ec60(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167ec80(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14167eca0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167ecc0(undefined8 param_1,longlong param_2)

{
  FUN_141671e40(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167ece0(undefined8 param_1,longlong param_2)

{
  FUN_1416730f0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167ed00(undefined8 param_1,longlong param_2)

{
  FUN_141674110(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167ed20(undefined8 param_1,longlong param_2)

{
  FUN_1416751a0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167ed40(undefined8 param_1,longlong param_2)

{
  FUN_141679ed0((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10));
  return;
}




void Unwind_14167ed60(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167ed80(undefined8 param_1,longlong param_2)

{
  FUN_141671e60(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167eda0(undefined8 param_1,longlong param_2)

{
  FUN_1416730c0(*(undefined8 **)(param_2 + 0x68));
  return;
}




void Unwind_14167edc0(undefined8 param_1,longlong param_2)

{
  FUN_141678170((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x48));
  return;
}




void Unwind_14167ede0(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x40));
  return;
}




undefined * Catch_14167ee00(void)

{
  log_InlineLogCATCH_ERROR("Exception: Module[%s] release fail!");
  return &DAT_14167a3e6;
}




void Unwind_14167ee50(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x40));
  return;
}




void Unwind_14167ee70(undefined8 param_1,longlong param_2)

{
  FUN_1416716a0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_14167ee90(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_14167eeb0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167eed0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14167eef0(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_14167ef10(undefined8 param_1,longlong param_2)

{
  FUN_141677ed0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_14167ef30(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x28));
  return;
}




void Unwind_14167ef50(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x50) + 0x88);
  return;
}




void Unwind_14167ef70(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x60));
  return;
}




void Unwind_14167ef90(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x50) + 0x118);
  return;
}




void Unwind_14167efb0(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x1a8));
  return;
}




void Unwind_14167efd0(undefined8 param_1,longlong param_2)

{
  FUN_1416716a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_14167eff0(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14167f010(undefined8 param_1,longlong param_2)

{
  FUN_141677ed0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x58));
  return;
}




void Unwind_14167f030(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x40) + 0x88);
  return;
}




void Unwind_14167f050(undefined8 param_1,longlong param_2)

{
  FUN_14167a310(*(longlong *)(param_2 + 0x40) + 0x118);
  return;
}




void Unwind_14167f070(undefined8 param_1,longlong param_2)

{
  FUN_1416786e0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x1a8));
  return;
}




void Unwind_14167f090(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_14167f0b0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f0d0(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f0f0(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f110(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f130(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f150(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x48));
  return;
}




void Unwind_14167f170(undefined8 param_1,longlong param_2)

{
  FUN_14167a060(*(longlong *)(param_2 + 0x48));
  return;
}




void Unwind_14167f190(undefined8 param_1,longlong param_2)

{
  FUN_141673eb0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f1b0(undefined8 param_1,longlong param_2)

{
  FUN_141673010(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f1d0(undefined8 param_1,longlong param_2)

{
  FUN_141677ea0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_14167f1f0(undefined8 param_1,longlong param_2)

{
  FUN_1416773a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f210(undefined8 param_1,longlong param_2)

{
  FUN_141676120(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f230(undefined8 param_1,longlong param_2)

{
  FUN_141674ea0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f250(undefined8 param_1,longlong param_2)

{
  FUN_141673ef0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f270(undefined8 param_1,longlong param_2)

{
  FUN_141673000(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_14167f290(undefined8 param_1,longlong param_2)

{
  FUN_141672e50(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_14167f2b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab33;
}




undefined8 Catch_14167f2f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab5b;
}




undefined8 Catch_14167f330(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ab86;
}




undefined8 Catch_14167f370(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167abb1;
}




undefined8 Catch_14167f3b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ac09;
}




undefined8 Catch_14167f3f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pGame) @%s,%d");
  return 0x14167ac53;
}




void Unwind_14167f430(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167f460(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f480(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f4a0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f4c0(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14167f4e0(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(param_2 + 0x60);
  return;
}




void Unwind_14167f500(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14167f520(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_14167f540(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_14167f560(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f580(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f5a0(void)

{
  FUN_141671170();
  return;
}




void Unwind_14167f5d0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f5f0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f610(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f630(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14167f650(undefined8 param_1,longlong param_2)

{
  FUN_141676f70(param_2 + 0x60);
  return;
}




void Unwind_14167f670(undefined8 param_1,longlong param_2)

{
  FUN_141676040((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_14167f690(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_14167f6b0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_14167f6d0(undefined8 param_1,longlong param_2)

{
  FUN_141673ed0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_14167f6f0(undefined8 param_1,longlong param_2)

{
  FUN_1416730b0((undefined8 *)(param_2 + 0x30));
  return;
}




void FUN_14167f708(void)

{
  _unlock(8);
  return;
}




void FUN_14167f721(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14167f751(void)

{
  _DAT_1416882a4 = 0xffffffff;
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




bool FUN_14167f7e0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=699 failed=0 total=791 */
