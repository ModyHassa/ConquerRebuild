/* Decompiled by Ghidra 12.1.4 | program: DetainEquip.dll
   image base: 140c60000 | functions: 862 */


exception * FUN_140c61090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140c610d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140c610f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c61100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140c61160(void)

{
  return;
}




exception * FUN_140c61170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140c611c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c611f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140c61200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140c61220(exception *param_1,uint param_2)

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




exception * FUN_140c61280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140c612e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c6131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c61330(exception *param_1,uint param_2)

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




exception * FUN_140c613a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140c61400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c6143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c61450(exception *param_1,uint param_2)

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




void FUN_140c614c0(void)

{
  log_InlineLogERROR(&DAT_140c755b8);
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140c614f0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
  
  uStack_18 = 0x140c6150b;
  local_1040 = 0xfffffffffffffffe;
  local_28 = DAT_140c7e400 ^ (ulonglong)auStack_1068;
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




void FUN_140c615e0(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140c61604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}




undefined8 * FUN_140c61630(undefined8 *param_1,uint param_2)

{
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_140c61690(longlong param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x38) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return param_1;
}




void FUN_140c616e0(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000140c6170a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10));
  return;
}




void FUN_140c61720(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000140c61750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
  return;
}




longlong FUN_140c61760(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0xf0)) {
    return *(longlong *)(param_1 + 0xd8);
  }
  return param_1 + 0xd8;
}




undefined4 FUN_140c61780(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}




undefined4 FUN_140c61790(longlong param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




void FUN_140c617a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x90))();
  if (cVar1 != '\0') {
    FUN_140c6f470(local_418);
    uVar2 = FUN_140c6f4f0((longlong)local_418,1);
    if ((char)uVar2 == '\0') {
      FUN_140c6f4c0((undefined8 *)local_418);
    }
    else {
      lVar3 = FUN_140c6f520((longlong)local_418,param_3,param_4,0,0);
      if ((char)lVar3 == '\0') {
        FUN_140c6f4c0((undefined8 *)local_418);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0xf0))(*(longlong **)(param_1 + 0x100),param_2,local_418);
        FUN_140c6f4c0((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_140c61870(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  CMsg local_418 [1040];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x90))();
  if (cVar1 != '\0') {
    FUN_140c6f470(local_418);
    uVar2 = FUN_140c6f4f0((longlong)local_418,0);
    if ((char)uVar2 == '\0') {
      FUN_140c6f4c0((undefined8 *)local_418);
    }
    else {
      lVar3 = FUN_140c6f520((longlong)local_418,param_3,param_4,0,0);
      if ((char)lVar3 == '\0') {
        FUN_140c6f4c0((undefined8 *)local_418);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 0xf0))(*(longlong **)(param_1 + 0x100),param_2,local_418);
        FUN_140c6f4c0((undefined8 *)local_418);
      }
    }
  }
  return;
}




bool FUN_140c61980(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c619c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140c61a00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c61a40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140c61a80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c61aa2;
  }
  lVar2 = *plVar1;
LAB_140c61aa2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c61ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c61ae2;
  }
  lVar2 = *plVar1;
LAB_140c61ae2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140c61b00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c61b40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140c61b80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c61ba2;
  }
  lVar2 = *plVar1;
LAB_140c61ba2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c61bc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c61be2;
  }
  lVar2 = *plVar1;
LAB_140c61be2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




undefined4 * FUN_140c61c00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 4));
  param_1[0xe] = param_2[0xe];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x10));
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  return param_1;
}




void FUN_140c61d80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x91) == '\0') {
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




void FUN_140c61ee0(longlong param_1,longlong *param_2)

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




void FUN_140c62090(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c620b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c62120(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c7cd90);
}




exception * FUN_140c62190(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_140c621e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140c62240(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x91) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x91) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x91);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x91);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x91);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x91);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c62267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140c622e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_140c62350(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c62382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c623f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[1];
  if (*(char *)((longlong)plVar2 + 0x91) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x91) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x91);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x10) + 0x91);
        lVar3 = lVar4;
        lVar4 = *(longlong *)(lVar4 + 0x10);
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x91);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x91);
    }
    if (*(char *)(param_1[1] + 0x91) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x91) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c62428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




undefined4 * FUN_140c624b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 6),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 6));
  param_1[0x10] = param_2[0x10];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x12));
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  return param_1;
}




longlong * FUN_140c62540(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140c62570;
  }
  else {
LAB_140c62570:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140c62598;
  }
  _invalid_parameter_noinfo();
LAB_140c62598:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_140c625b0(longlong *param_1)

{
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)*param_1)();
    *param_1 = 0;
  }
  return;
}




void FUN_140c62610(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140c626a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140c62720(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x98)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_1 * 0x98);
  return;
}




void FUN_140c627a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_1 * 0x58);
  return;
}




exception * FUN_140c62870(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140c628a0(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000140c628d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
  return;
}




void * FUN_140c62920(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c629e0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c62a20(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c62ac0(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_140c62b00(void)

{
  if ((DAT_140c7e428 & 1) == 0) {
    DAT_140c7e428 = DAT_140c7e428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
    atexit((_func_5014 *)&LAB_140c74020);
  }
  return &DAT_140c7e420;
}




void FUN_140c62b60(__uint64 param_1)

{
  if ((DAT_140c7e428 & 1) == 0) {
    DAT_140c7e428 = DAT_140c7e428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
    atexit((_func_5014 *)&LAB_140c74020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c62bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140c7e420,param_1);
  return;
}




void FUN_140c62bc0(void *param_1)

{
  if ((DAT_140c7e428 & 1) == 0) {
    DAT_140c7e428 = DAT_140c7e428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
    atexit((_func_5014 *)&LAB_140c74020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c62c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140c7e420,param_1);
  return;
}




void FUN_140c62c20(void *param_1)

{
  if ((DAT_140c7e428 & 1) == 0) {
    DAT_140c7e428 = DAT_140c7e428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
    atexit((_func_5014 *)&LAB_140c74020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c62c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140c7e420,param_1);
  return;
}




longlong FUN_140c62ca0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c62cc2;
  }
  lVar2 = *plVar1;
LAB_140c62cc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




undefined4 * FUN_140c62ce0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = *param_2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  param_1[4] = param_3[2];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 6),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 4));
  param_1[0x10] = param_3[0xe];
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_3 + 0x10));
  param_1[0x1c] = param_3[0x1a];
  param_1[0x1d] = param_3[0x1b];
  return param_1;
}




void FUN_140c62d70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c62d90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x91) == '\0') {
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




void FUN_140c62df0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c62e10(longlong param_1,longlong param_2)

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




void FUN_140c62e70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140c62e80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c62ea2;
  }
  lVar2 = *plVar1;
LAB_140c62ea2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c62ec0(longlong *param_1)

{
  FUN_140c62090(param_1);
  return param_1;
}




longlong * FUN_140c62ee0(longlong *param_1)

{
  FUN_140c62240(param_1);
  return param_1;
}




void FUN_140c62f30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_2 * 4);
  return;
}




longlong * FUN_140c63050(longlong *param_1)

{
  FUN_140c62350(param_1);
  return param_1;
}




longlong * FUN_140c63080(longlong *param_1)

{
  FUN_140c623f0(param_1);
  return param_1;
}




void FUN_140c630a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140c63110(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x98)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_2 * 0x98);
  return;
}




void FUN_140c63190(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c7ce48);
  }
  operator_new(param_2 * 0x58);
  return;
}




longlong * FUN_140c63200(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c62090(param_1);
  return param_2;
}




longlong * FUN_140c63230(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c62240(param_1);
  return param_2;
}




longlong * FUN_140c63260(longlong *param_1,longlong param_2)

{
  FUN_140c62540(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140c63280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_140c624b0((undefined4 *)(param_1 + 3),param_5);
  *(undefined1 *)(param_1 + 0x12) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x91) = 0;
  return param_1;
}




undefined8 * FUN_140c632f0(undefined8 *param_1)

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




undefined8 * FUN_140c63330(undefined8 *param_1)

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




void * FUN_140c63380(void *param_1,uint param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x60));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((longlong)param_1 + 0x30));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void * FUN_140c63410(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c634a0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_140c634e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c63502;
  }
  lVar2 = *plVar1;
LAB_140c63502:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140c63520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c63542;
  }
  lVar2 = *plVar1;
LAB_140c63542:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c63560(longlong *param_1)

{
  FUN_140c62090(param_1);
  return param_1;
}




longlong FUN_140c63580(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c635a2;
  }
  lVar2 = *plVar1;
LAB_140c635a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140c635c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c635e2;
  }
  lVar2 = *plVar1;
LAB_140c635e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140c63600(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c63622;
  }
  lVar2 = *plVar1;
LAB_140c63622:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c63640(longlong *param_1)

{
  FUN_140c62240(param_1);
  return param_1;
}




longlong * FUN_140c63660(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c62240(param_1);
  return param_2;
}




void FUN_140c63690(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c636b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c636d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c636f0(longlong *param_1)

{
  FUN_140c62350(param_1);
  return param_1;
}




undefined8 * FUN_140c63710(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 FUN_140c63750(longlong param_1,ulonglong param_2)

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
      FUN_140c62120();
    }
    lVar1 = FUN_140c62f30(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140c637c0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_140c637f0(longlong *param_1)

{
  FUN_140c623f0(param_1);
  return param_1;
}




undefined8 * FUN_140c63810(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c63850(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140c638b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140c63910(undefined8 *param_1)

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




undefined8 * FUN_140c63950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    FUN_140c624b0((undefined4 *)(puVar1 + 3),param_5);
    *(undefined1 *)(puVar1 + 0x12) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x91) = 0;
  }
  return puVar1;
}




longlong * FUN_140c639e0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140c63a4a;
  }
  _invalid_parameter_noinfo();
LAB_140c63a4a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140c63a80(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x98);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x12) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x91) = 0;
  return;
}




void FUN_140c63af0(void)

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




undefined8 * FUN_140c63b50(undefined8 *param_1)

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




undefined8 * FUN_140c63ba0(undefined8 *param_1)

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




void * FUN_140c63bf0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c63c30(longlong param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000140c63c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x30));
  return;
}




void * FUN_140c63ca0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c63d30(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c63db0(undefined8 *param_1)

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




undefined8 * FUN_140c63df0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c63e40(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c63e90(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c63ee0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140c63f30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c63f50(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c63fb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000140c63fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x30));
  return;
}




undefined8 * FUN_140c64030(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c64070(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140c640d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140c641c0(undefined8 *param_1)

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




undefined8 * FUN_140c64210(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140c64250(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c63a80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x91) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140c64290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c63af0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140c642d0(undefined8 *param_1)

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




undefined8 * FUN_140c64320(undefined8 *param_1)

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




void * FUN_140c643b0(longlong param_1,longlong param_2,void *param_3)

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




void * FUN_140c64420(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c64460(longlong param_1)

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




longlong * FUN_140c644f0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x91) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x91) == '\0');
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




longlong * FUN_140c64600(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_140c646d0(undefined8 *param_1)

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




undefined8 * FUN_140c64730(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140c647c0(longlong *param_1)

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




void FUN_140c64880(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c648a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c648c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140c64950(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x91);
  while (cVar1 == '\0') {
    FUN_140c64950(param_1,(longlong *)param_2[2],param_3,param_4);
    plVar2 = (longlong *)*param_2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xc));
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 6));
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x91);
  }
  return;
}




undefined8 * FUN_140c649f0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
  
  if (0x222222222222220 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c7cd90);
  }
  plVar5 = FUN_140c63950(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x90);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x90) == '\0') {
        *(undefined1 *)(plVar2 + 0x12) = 1;
        *(undefined1 *)(lVar4 + 0x90) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x90) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x91) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x90) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x90) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x91) == '\0') {
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
      if (*(char *)(lVar4 + 0x90) == '\0') {
        *(undefined1 *)(plVar2 + 0x12) = 1;
        *(undefined1 *)(lVar4 + 0x90) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x90) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x91) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x90) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x90) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x91) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x90);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x90) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




undefined8 * FUN_140c64d70(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c64e00(undefined8 *param_1)

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




undefined8 * FUN_140c64e50(undefined8 *param_1)

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




void * FUN_140c64ea0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_140c64f40(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140c64f80(longlong param_1)

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




ulonglong FUN_140c64fd0(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong *extraout_RAX_04;
  longlong *plVar10;
  longlong *extraout_RAX_05;
  longlong *extraout_RAX_06;
  longlong *extraout_RAX_07;
  longlong *extraout_RAX_08;
  longlong *extraout_RAX_09;
  undefined8 *puVar11;
  uint *puVar12;
  longlong lVar13;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  
  puVar11 = (undefined8 *)((undefined8 *)param_1[0x16])[1];
  cVar1 = *(char *)((longlong)puVar11 + 0x51);
  puVar6 = (undefined8 *)param_1[0x16];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar11 + 3) < param_2) {
      puVar9 = (undefined8 *)puVar11[2];
      puVar11 = puVar6;
    }
    else {
      puVar9 = (undefined8 *)*puVar11;
    }
    puVar6 = puVar11;
    puVar11 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x51);
  }
  puVar11 = (undefined8 *)param_1[0x16];
  local_50 = puVar6;
  local_58 = param_1[0x10];
  if (param_1[0x10] == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar6 == puVar11) || (param_2 < *(uint *)(puVar6 + 3))) {
    plVar10 = &local_48;
    local_40 = param_1[0x16];
    local_48 = param_1[0x10];
  }
  else {
    plVar10 = &local_58;
  }
  plVar2 = (longlong *)*plVar10;
  plVar3 = (longlong *)param_1[0x16];
  local_38 = plVar2;
  plVar10 = (longlong *)plVar10[1];
  local_30 = plVar10;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0x10])) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX;
  }
  plVar5 = local_30;
  if (local_30 == plVar3) {
    return (ulonglong)plVar10 & 0xffffffffffffff00;
  }
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar13 = 0;
    plVar10 = extraout_RAX_00;
  }
  else {
    lVar13 = *plVar2;
  }
  if (plVar5 == *(longlong **)(lVar13 + 0x30)) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_01;
  }
  puVar12 = (uint *)plVar5[7];
  if ((uint *)plVar5[8] < puVar12) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_02;
  }
  puVar4 = (uint *)plVar5[8];
  plVar2 = (longlong *)plVar5[4];
  if (puVar4 < (uint *)plVar5[7]) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_03;
  }
  plVar3 = (longlong *)plVar5[4];
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_04;
    }
    if (puVar12 == puVar4) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar13 = 0;
    }
    else {
      lVar13 = *plVar2;
    }
    if (*(uint **)(lVar13 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
    }
    plVar10 = FUN_140c644f0(param_1,(longlong *)&local_38,puVar12);
    plVar7 = local_38;
    plVar5 = (longlong *)param_1[6];
    if ((local_38 == (longlong *)0x0) || (local_38 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_05;
    }
    plVar8 = local_30;
    if (local_30 != plVar5) {
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar13 = 0;
        plVar10 = extraout_RAX_06;
      }
      else {
        lVar13 = *plVar7;
      }
      if (plVar8 == *(longlong **)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
        plVar10 = extraout_RAX_07;
      }
      if (*(int *)((longlong)plVar8 + 0x8c) != -10) {
        return CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar13 = 0;
      plVar10 = extraout_RAX_08;
    }
    else {
      lVar13 = *plVar2;
    }
    if (*(uint **)(lVar13 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_09;
    }
    puVar12 = puVar12 + 1;
  }
  return (ulonglong)plVar10 & 0xffffffffffffff00;
}




ulonglong FUN_140c65200(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  longlong *extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong *extraout_RAX_04;
  longlong *plVar10;
  longlong *extraout_RAX_05;
  longlong *extraout_RAX_06;
  longlong *extraout_RAX_07;
  longlong *extraout_RAX_08;
  longlong *extraout_RAX_09;
  undefined8 *puVar11;
  uint *puVar12;
  longlong lVar13;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  
  puVar11 = (undefined8 *)((undefined8 *)param_1[0xe])[1];
  cVar1 = *(char *)((longlong)puVar11 + 0x51);
  puVar6 = (undefined8 *)param_1[0xe];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar11 + 3) < param_2) {
      puVar9 = (undefined8 *)puVar11[2];
      puVar11 = puVar6;
    }
    else {
      puVar9 = (undefined8 *)*puVar11;
    }
    puVar6 = puVar11;
    puVar11 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x51);
  }
  puVar11 = (undefined8 *)param_1[0xe];
  local_50 = puVar6;
  local_58 = param_1[8];
  if (param_1[8] == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar6 == puVar11) || (param_2 < *(uint *)(puVar6 + 3))) {
    plVar10 = &local_48;
    local_40 = param_1[0xe];
    local_48 = param_1[8];
  }
  else {
    plVar10 = &local_58;
  }
  plVar2 = (longlong *)*plVar10;
  plVar3 = (longlong *)param_1[0xe];
  local_38 = plVar2;
  plVar10 = (longlong *)plVar10[1];
  local_30 = plVar10;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[8])) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX;
  }
  plVar5 = local_30;
  if (local_30 == plVar3) {
    return (ulonglong)plVar10 & 0xffffffffffffff00;
  }
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar13 = 0;
    plVar10 = extraout_RAX_00;
  }
  else {
    lVar13 = *plVar2;
  }
  if (plVar5 == *(longlong **)(lVar13 + 0x30)) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_01;
  }
  puVar12 = (uint *)plVar5[7];
  if ((uint *)plVar5[8] < puVar12) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_02;
  }
  puVar4 = (uint *)plVar5[8];
  plVar2 = (longlong *)plVar5[4];
  if (puVar4 < (uint *)plVar5[7]) {
    _invalid_parameter_noinfo();
    plVar10 = extraout_RAX_03;
  }
  plVar3 = (longlong *)plVar5[4];
  while( true ) {
    if ((plVar2 == (longlong *)0x0) || (plVar2 != plVar3)) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_04;
    }
    if (puVar12 == puVar4) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar13 = 0;
    }
    else {
      lVar13 = *plVar2;
    }
    if (*(uint **)(lVar13 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
    }
    plVar10 = FUN_140c644f0(param_1,(longlong *)&local_38,puVar12);
    plVar7 = local_38;
    plVar5 = (longlong *)param_1[6];
    if ((local_38 == (longlong *)0x0) || (local_38 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_05;
    }
    plVar8 = local_30;
    if (local_30 != plVar5) {
      if (plVar7 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar13 = 0;
        plVar10 = extraout_RAX_06;
      }
      else {
        lVar13 = *plVar7;
      }
      if (plVar8 == *(longlong **)(lVar13 + 0x30)) {
        _invalid_parameter_noinfo();
        plVar10 = extraout_RAX_07;
      }
      if (*(int *)((longlong)plVar8 + 0x8c) < 1) {
        return CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar13 = 0;
      plVar10 = extraout_RAX_08;
    }
    else {
      lVar13 = *plVar2;
    }
    if (*(uint **)(lVar13 + 0x20) <= puVar12) {
      _invalid_parameter_noinfo();
      plVar10 = extraout_RAX_09;
    }
    puVar12 = puVar12 + 1;
  }
  return (ulonglong)plVar10 & 0xffffffffffffff00;
}




longlong * FUN_140c65420(longlong *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong local_28;
  undefined8 *local_20;
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0x91) == '\0') {
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
    } while (*(char *)((longlong)puVar1 + 0x91) == '\0');
  }
  local_28 = *param_1;
  local_20 = puVar3;
  if (bVar4 == false) {
LAB_140c654e2:
    if (*param_3 <= *(uint *)(local_20 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_28;
      goto LAB_140c6550c;
    }
  }
  else {
    puVar1 = *(undefined8 **)param_1[6];
    if (local_28 == 0) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 != puVar1) {
      FUN_140c623f0(&local_28);
      goto LAB_140c654e2;
    }
    bVar4 = true;
  }
  plVar2 = FUN_140c649f0(param_1,&local_28,bVar4,puVar3,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_20 = (undefined8 *)plVar2[1];
  *param_2 = *plVar2;
LAB_140c6550c:
  param_2[1] = (longlong)local_20;
  return param_2;
}




undefined8 * FUN_140c65530(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x91) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c7cea8);
  }
  FUN_140c62240(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x91) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x91) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x91) == '\0') {
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
        plVar3 = plVar2 + 0x12;
        plVar7 = plVar7 + 0x12;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_140c6573b;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x91) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x91) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x91);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x91);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x91) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x91);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x91);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_140c6573b:
  if ((char)plVar2[0x12] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[0x12] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[0x12] == '\0') {
            *(undefined1 *)(plVar8 + 0x12) = 1;
            *(undefined1 *)(plVar7 + 0x12) = 0;
            FUN_140c62d90((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x91) == '\0') {
            if ((*(char *)(*plVar8 + 0x90) != '\x01') || (*(char *)(plVar8[2] + 0x90) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x90) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x90) = 1;
                *(undefined1 *)(plVar8 + 0x12) = 0;
                FUN_140c61d80((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 0x12) = (char)plVar7[0x12];
              *(undefined1 *)(plVar7 + 0x12) = 1;
              *(undefined1 *)(plVar8[2] + 0x90) = 1;
              FUN_140c62d90((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x12) = 0;
          }
        }
        else {
          if ((char)plVar8[0x12] == '\0') {
            *(undefined1 *)(plVar8 + 0x12) = 1;
            *(undefined1 *)(plVar7 + 0x12) = 0;
            FUN_140c61d80((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x91) == '\0') {
            if ((*(char *)(plVar8[2] + 0x90) != '\x01') || (*(char *)(*plVar8 + 0x90) != '\x01')) {
              if (*(char *)(*plVar8 + 0x90) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x90) = 1;
                *(undefined1 *)(plVar8 + 0x12) = 0;
                FUN_140c62d90((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 0x12) = (char)plVar7[0x12];
              *(undefined1 *)(plVar7 + 0x12) = 1;
              *(undefined1 *)(*plVar8 + 0x90) = 1;
              FUN_140c61d80((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 0x12) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 0x12) = 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar2 + 0xc));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar2 + 6));
  operator_delete(plVar2);
  if (param_1[7] != 0) {
    param_1[7] = param_1[7] + -1;
  }
  lVar5 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar5;
  return param_2;
}




exception * FUN_140c659a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140c65a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c64950(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140c65a40(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)((longlong)puVar4[1] + 0x91) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x91) == '\0');
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




longlong * FUN_140c65b10(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140c65be0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c65c00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c65c20(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140c62120();
    }
    lVar2 = FUN_140c62f30(param_1 + 2,uVar4);
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
    pvVar3 = FUN_140c64ea0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




longlong * FUN_140c65d80(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c64950(param_1,*(longlong **)(param_1[6] + 8),plVar3,plVar4);
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
    FUN_140c62240(param_3);
    local_28 = lVar1;
    lStack_20 = lVar2;
    FUN_140c65530(param_1,local_18,&local_28);
  }
  lVar1 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar1;
  return param_2;
}




undefined8 * FUN_140c65ee0(undefined8 *param_1)

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




undefined8 * FUN_140c65f30(undefined8 *param_1)

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




void FUN_140c65f80(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140c62120();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140c62f30(param_1 + 0x10,uVar8);
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
      FUN_140c64f40(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140c64f40(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140c63ca0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined4 * FUN_140c66220(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140c65c20((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




void * FUN_140c66260(void *param_1,uint param_2)

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




undefined4 * FUN_140c662e0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_140c65c20((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




undefined8 * FUN_140c66310(undefined8 *param_1)

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
  lVar2 = FUN_140c63a80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x91) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140c66390(longlong *param_1)

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
  FUN_140c65d80(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140c66400(undefined8 *param_1)

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
  lVar2 = FUN_140c63af0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140c66480(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140c65f80((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140c66574;
  }
  _invalid_parameter_noinfo();
LAB_140c66574:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140c665b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140c65c20(param_1 + 4,(undefined8 *)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void FUN_140c66610(longlong param_1)

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




void FUN_140c66660(longlong *param_1)

{
  FUN_140c66390(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c66690(longlong *param_1,undefined4 *param_2)

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
  FUN_140c66480(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140c66740(undefined8 param_1,longlong param_2)

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




undefined8 * FUN_140c66790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140c65c20(puVar1 + 4,(undefined8 *)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_140c66830(longlong *param_1)

{
  FUN_140c66390(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c66860(undefined8 *param_1)

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
  lVar2 = FUN_140c63a80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x91) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c668e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c7cea8);
  }
  FUN_140c62090(param_3);
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
        goto LAB_140c66acc;
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
LAB_140c66acc:
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
            FUN_140c62e10((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140c61ee0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_140c62e10((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140c61ee0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140c62e10((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_140c61ee0((longlong)param_1,plVar7);
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




void FUN_140c66cd0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_140c66cd0(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_140c66d80(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c7cd90);
  }
  plVar5 = FUN_140c66790(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_140c670c0(undefined8 param_1,longlong *param_2,int param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  rsize_t _DstSize;
  undefined8 *puVar9;
  int *_Dst;
  longlong *plVar10;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  int *piStack_20;
  
  puVar9 = (undefined8 *)((undefined8 *)param_2[6])[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x51);
  puVar5 = (undefined8 *)param_2[6];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar9 + 3) < param_4) {
      puVar7 = (undefined8 *)puVar9[2];
      puVar9 = puVar5;
    }
    else {
      puVar7 = (undefined8 *)*puVar9;
    }
    puVar5 = puVar9;
    puVar9 = puVar7;
    cVar1 = *(char *)((longlong)puVar7 + 0x51);
  }
  puVar9 = (undefined8 *)param_2[6];
  local_40 = puVar5;
  local_48 = *param_2;
  if (*param_2 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar9) || (param_4 < *(uint *)(puVar5 + 3))) {
    plVar10 = &local_38;
    local_30 = param_2[6];
    local_38 = *param_2;
  }
  else {
    plVar10 = &local_48;
  }
  plVar2 = (longlong *)*plVar10;
  lVar8 = param_2[6];
  local_28 = plVar2;
  piStack_20 = (int *)plVar10[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_2)) {
    _invalid_parameter_noinfo();
  }
  piVar6 = piStack_20;
  if (piStack_20 != (int *)lVar8) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (piVar6 == (int *)*(longlong *)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    piVar3 = *(int **)((longlong)piVar6 + 0x40);
    if (piVar3 < *(int **)((longlong)piVar6 + 0x38)) {
      _invalid_parameter_noinfo();
    }
    piVar4 = *(int **)((longlong)piVar6 + 0x38);
    if (*(int **)((longlong)piVar6 + 0x40) < piVar4) {
      _invalid_parameter_noinfo();
    }
    local_28 = *(longlong **)((longlong)piVar6 + 0x20);
    for (_Dst = piVar4; (_Dst != piVar3 && (*_Dst != param_3)); _Dst = _Dst + 1) {
    }
    piVar3 = *(int **)((longlong)piVar6 + 0x40);
    piStack_20 = piVar4;
    if (piVar3 < *(int **)((longlong)piVar6 + 0x38)) {
      _invalid_parameter_noinfo();
    }
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)((longlong)piVar6 + 0x20))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst != piVar3) {
      lVar8 = *(longlong *)((longlong)piVar6 + 0x40) - (longlong)(_Dst + 1) >> 2;
      if (0 < lVar8) {
        _DstSize = lVar8 << 2;
        memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      *(longlong *)((longlong)piVar6 + 0x40) = *(longlong *)((longlong)piVar6 + 0x40) + -4;
      if ((_Dst < *(int **)((longlong)piVar6 + 0x38)) || (*(int **)((longlong)piVar6 + 0x40) < _Dst)) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong *)((longlong)piVar6 + 0x40) - *(longlong *)((longlong)piVar6 + 0x38) & 0xfffffffffffffffcU) == 0) {
        local_28 = (longlong *)*plVar10;
        piStack_20 = (int *)plVar10[1];
        FUN_140c668e0(param_2,&local_38,(longlong *)&local_28);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140c672c0(undefined8 *param_1,undefined4 param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_538 [32];
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_488;
  undefined4 local_484;
  longlong local_458;
  longlong local_450;
  undefined8 local_448 [2];
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_140c7e400 ^ (ulonglong)auStack_538;
  plVar3 = (longlong *)*param_4;
  if (plVar3 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar3 = (longlong *)*param_4;
    lVar1 = 0;
    if (plVar3 == (longlong *)0x0) goto LAB_140c67306;
  }
  lVar1 = *plVar3;
LAB_140c67306:
  if (param_4[1] == *(longlong *)(lVar1 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  lVar1 = param_4[1];
  uVar2 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],*(undefined4 *)(lVar1 + 0x24),&local_4c8);
  if (((char)uVar2 == '\0') ||
     (uVar2 = (**(code **)(*(longlong *)param_1[0x20] + 0xe8))((longlong *)param_1[0x20],*(undefined4 *)(lVar1 + 0x24)), (int)uVar2 != 3)) {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    if (param_3 == '\0') {
      uVar5 = *(uint *)(lVar1 + 0x58);
      plVar3 = param_1 + 0x10;
    }
    else {
      uVar5 = *(uint *)(lVar1 + 0x28);
      plVar3 = param_1 + 8;
    }
    FUN_140c670c0(param_1,plVar3,*(int *)(lVar1 + 0x20),uVar5);
    _snprintf(local_438,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
    local_39 = 0;
    plVar3 = (longlong *)InstanceGet();
    (**(code **)(*plVar3 + 0x30))(plVar3,local_438,0,1);
    if (param_3 == '\0') {
      local_4d8 = (**(code **)(*(longlong *)param_1[0x20] + 0x60))((longlong *)param_1[0x20],*(undefined4 *)(lVar1 + 0x24),0x18);
    }
    else {
      local_4d8 = (**(code **)(*(longlong *)param_1[0x20] + 0x60))((longlong *)param_1[0x20],*(undefined4 *)(lVar1 + 0x24),0x18);
    }
    local_4e0 = local_484;
    local_4e8 = local_488;
    local_4f0 = local_490;
    local_4f8 = local_4a0;
    local_500 = local_4a4;
    local_508 = local_494;
    local_510 = CONCAT44(local_510._4_4_,local_4c4);
    local_518 = CONCAT44(local_518._4_4_,local_4c8);
    tq::MyLogSave("gmlog/detain",
                  "%s(%u) delete item: [id=%u, type=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d, del_time=%d]");
    (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],local_4c8,0,1);
    local_458 = *param_4;
    local_450 = param_4[1];
    FUN_140c65530(param_1,local_448,&local_458);
    local_510 = param_1[0x17];
    local_518 = param_1[0xf];
    _snprintf(local_438,0x400,"m_mapPKItem[%d] m_mapTargetItem[%d] m_mapHunterItem[%d]");
    local_39 = 0;
    uVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0xf8))((longlong *)param_1[0x20],param_2,local_438);
    uVar2 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  return uVar2;
}




void FUN_140c67550(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  IStringManager *pIVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint in_R11D;
  longlong *plVar16;
  longlong lVar17;
  uint *puVar18;
  uint local_res10 [2];
  uint local_res18;
  longlong *local_res20;
  longlong *local_638;
  uint *puStack_630;
  undefined8 *local_628;
  longlong lStack_620;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  longlong *local_608 [3];
  int *local_5f0;
  int *local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  int *piStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  int *local_598;
  undefined8 local_588;
  int *piStack_580;
  undefined4 *local_578;
  longlong *local_568;
  uint *puStack_560;
  longlong *local_558;
  uint *puStack_550;
  undefined8 *local_548;
  longlong local_538;
  undefined8 local_528;
  int *piStack_520;
  longlong *local_518;
  undefined8 local_508;
  longlong *local_500;
  undefined8 local_4e8;
  int *piStack_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8 [28];
  CMsg local_458 [1056];
  
  local_508 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else {
    FUN_140c65b10(param_1 + 8,(longlong *)&local_628,local_res10);
    local_res18 = in_R11D & 0xffffff00;
    lVar17 = param_1[0xe];
    plVar9 = (longlong *)0x0;
    local_548 = (undefined8 *)param_1[8];
    if ((local_628 == (undefined8 *)0x0) || (local_628 != local_548)) {
      _invalid_parameter_noinfo();
    }
    if (lStack_620 != lVar17) {
      if (local_628 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
        plVar16 = plVar9;
      }
      else {
        plVar16 = (longlong *)*local_628;
      }
      if (lStack_620 == plVar16[6]) {
        _invalid_parameter_noinfo();
      }
      uVar1 = *(ulonglong *)(lStack_620 + 0x38);
      local_5d8 = (longlong *)0x0;
      if (*(ulonglong *)(lStack_620 + 0x40) < uVar1) {
        _invalid_parameter_noinfo();
      }
      uVar10 = *(undefined8 *)(lStack_620 + 0x20);
      local_5d8._0_4_ = (undefined4)uVar10;
      local_5d8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_5d0._0_4_ = (undefined4)uVar1;
      uStack_5d0._4_4_ = (undefined4)(uVar1 >> 0x20);
      local_618 = (undefined4)local_5d8;
      uStack_614 = local_5d8._4_4_;
      uStack_610 = (undefined4)uStack_5d0;
      uStack_60c = uStack_5d0._4_4_;
      puVar18 = *(uint **)(lStack_620 + 0x40);
      local_638 = (longlong *)0x0;
      local_5d8 = (longlong *)uVar10;
      uStack_5d0 = uVar1;
      if (puVar18 < *(uint **)(lStack_620 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      local_638 = *(longlong **)(lStack_620 + 0x20);
      puStack_630 = puVar18;
      local_568 = local_638;
      puStack_560 = puVar18;
      local_res20 = operator_new(8);
      if (local_res20 != (longlong *)0x0) {
        *local_res20 = (longlong)local_608;
        plVar9 = local_res20;
      }
      local_5f0 = (int *)0x0;
      local_5e8 = (int *)0x0;
      local_5e0 = 0;
      puVar18 = (uint *)CONCAT44(uStack_60c,uStack_610);
      plVar16 = (longlong *)CONCAT44(uStack_614,local_618);
      local_608[0] = plVar9;
      local_5d8 = local_res20;
      while( true ) {
        lVar17 = 0;
        if ((plVar16 == (longlong *)0x0) || (plVar16 != local_568)) {
          _invalid_parameter_noinfo();
        }
        piVar15 = local_5f0;
        if (puVar18 == puStack_560) break;
        if (plVar16 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar17 = *plVar16;
        }
        if (*(uint **)(lVar17 + 0x20) <= puVar18) {
          _invalid_parameter_noinfo();
        }
        FUN_140c65a40(param_1,(longlong *)&local_638,puVar18);
        plVar9 = local_638;
        puVar2 = (uint *)param_1[6];
        local_500 = (longlong *)*param_1;
        if ((local_638 == (longlong *)0x0) || (local_638 != local_500)) {
          _invalid_parameter_noinfo();
        }
        puVar5 = puStack_630;
        if (puStack_630 != puVar2) {
          if (plVar9 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar17 = 0;
          }
          else {
            lVar17 = *plVar9;
          }
          if (puVar5 == *(uint **)(lVar17 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          local_558 = local_638;
          puStack_550 = puStack_630;
          uVar10 = FUN_140c672c0(param_1,local_res10[0],'\0',(longlong *)&local_558);
          if ((char)uVar10 == '\0') {
            if ((int)puVar5[0x23] < 1) {
              puVar13 = (undefined4 *)0x0;
              local_578 = (undefined4 *)0x0;
              cVar6 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],puVar5[9],local_4c8);
              puVar14 = puVar13;
              if ((cVar6 != '\0') && (puVar14 = local_4c8, local_578 = local_4c8, puVar5[0x23] == 0xfffffff6)) {
                puVar14 = puVar13;
                local_578 = puVar13;
              }
              uVar7 = (**(code **)(*(longlong *)param_1[0x20] + 8))((longlong *)param_1[0x20],puVar5[9]);
              FUN_140c6ee50(local_458);
              uVar10 = FUN_140c6ef00(local_458,puVar14,uVar7,puVar5 + 8,0);
              uVar4 = local_res10[0];
              if ((char)uVar10 == '\0') {
                log_InlineLogERROR(&DAT_140c755b8);
              }
              else {
                (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],local_res10[0],local_458);
                if (puVar14 != (undefined4 *)0x0) {
                  (**(code **)(*(longlong *)param_1[0x20] + 0x108))((longlong *)param_1[0x20],uVar4,*puVar14);
                }
              }
              uVar4 = local_res18;
              if (((char)local_res18 == '\0') && (puVar5[0x23] == 0)) {
                iVar8 = tq::DateStamp(0);
                iVar8 = tq::DateStampDiff(puVar5[0x22],iVar8);
                local_res18 = uVar4 & 0xff;
                if (iVar8 < 8) {
                  local_res18 = 1;
                }
              }
              FUN_140c6eea0((undefined8 *)local_458);
            }
          }
          else {
            if (plVar16 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar16;
            }
            if (*(uint **)(lVar17 + 0x20) <= puVar18) {
              _invalid_parameter_noinfo();
            }
            FUN_140c66690((longlong *)local_608,puVar18);
          }
        }
        if (plVar16 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar17 = 0;
        }
        else {
          lVar17 = *plVar16;
        }
        if (*(uint **)(lVar17 + 0x20) <= puVar18) {
          _invalid_parameter_noinfo();
        }
        puVar18 = puVar18 + 1;
      }
      local_5a8 = (longlong *)0x0;
      if (local_5e8 < local_5f0) {
        _invalid_parameter_noinfo();
      }
      plVar9 = local_608[0];
      local_5a8 = local_608[0];
      uStack_5a0 = piVar15;
      local_5a8._0_4_ = SUB84(local_608[0],0);
      local_5a8._4_4_ = (undefined4)((ulonglong)local_608[0] >> 0x20);
      uStack_5a0._0_4_ = SUB84(piVar15,0);
      uStack_5a0._4_4_ = (undefined4)((ulonglong)piVar15 >> 0x20);
      local_618 = (undefined4)local_5a8;
      uStack_614 = local_5a8._4_4_;
      uStack_610 = (undefined4)uStack_5a0;
      uStack_60c = uStack_5a0._4_4_;
      local_5a8 = plVar9;
      uStack_5a0 = piVar15;
      while( true ) {
        piVar3 = local_5e8;
        local_518 = (longlong *)0x0;
        if (local_5e8 < local_5f0) {
          _invalid_parameter_noinfo();
        }
        local_518 = local_608[0];
        if ((plVar9 == (longlong *)0x0) || (plVar9 != local_608[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar15 == piVar3) break;
        piVar3 = *(int **)(lStack_620 + 0x40);
        local_5c8 = 0;
        if (piVar3 < *(int **)(lStack_620 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        uVar10 = *(undefined8 *)(lStack_620 + 0x20);
        local_5c8._0_4_ = (undefined4)uVar10;
        local_5c8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_5c0._0_4_ = SUB84(piVar3,0);
        uStack_5c0._4_4_ = (undefined4)((ulonglong)piVar3 >> 0x20);
        local_4d8 = (undefined4)local_5c8;
        uStack_4d4 = local_5c8._4_4_;
        uStack_4d0 = (undefined4)uStack_5c0;
        uStack_4cc = uStack_5c0._4_4_;
        piVar12 = *(int **)(lStack_620 + 0x38);
        local_588 = 0;
        local_5c8 = uVar10;
        uStack_5c0 = piVar3;
        if (*(int **)(lStack_620 + 0x40) < piVar12) {
          _invalid_parameter_noinfo();
        }
        uVar10 = *(undefined8 *)(lStack_620 + 0x20);
        local_588._0_4_ = (undefined4)uVar10;
        local_588._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_5b8 = (undefined4)local_588;
        uStack_5b4 = local_588._4_4_;
        piStack_5b0 = piVar12;
        local_588 = uVar10;
        piStack_580 = piVar12;
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar17 = 0;
        }
        else {
          lVar17 = *plVar9;
        }
        if (*(int **)(lVar17 + 0x20) <= piVar15) {
          _invalid_parameter_noinfo();
        }
        for (; (piVar12 != piVar3 && (*piVar12 != *piVar15)); piVar12 = piVar12 + 1) {
        }
        uVar10 = CONCAT44(uStack_5b4,local_5b8);
        piVar3 = *(int **)(lStack_620 + 0x40);
        local_538 = 0;
        piStack_5b0 = piVar12;
        local_598 = piVar12;
        local_4e8 = uVar10;
        piStack_4e0 = piVar12;
        if (piVar3 < *(int **)(lStack_620 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_538 = *(longlong *)(lStack_620 + 0x20);
        if ((CONCAT44(uStack_5b4,local_5b8) == 0) || (CONCAT44(uStack_5b4,local_5b8) != local_538)) {
          _invalid_parameter_noinfo();
        }
        if (piVar12 != piVar3) {
          local_528 = uVar10;
          piStack_520 = piVar12;
          FUN_140c64730((undefined8 *)(lStack_620 + 0x20),&local_558,(longlong)&local_528);
        }
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar17 = 0;
        }
        else {
          lVar17 = *plVar9;
        }
        if (*(int **)(lVar17 + 0x20) <= piVar15) {
          _invalid_parameter_noinfo();
        }
        piVar15 = piVar15 + 1;
      }
      if ((*(longlong *)(lStack_620 + 0x40) - *(longlong *)(lStack_620 + 0x38) & 0xfffffffffffffffcU) == 0) {
        FUN_140c668e0(param_1 + 8,&local_4e8,(longlong *)&local_628);
      }
      if (local_5f0 != (int *)0x0) {
        operator_delete(local_5f0);
      }
      local_5f0 = (int *)0x0;
      local_5e8 = (int *)0x0;
      local_5e0 = 0;
      operator_delete(local_608[0]);
      if ((char)local_res18 != '\0') {
        pIVar11 = theInstance();
        lVar17 = *(longlong *)param_1[0x20];
        uVar10 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_HAS_DETAIN_EQUIP");
        (**(code **)(lVar17 + 0xf8))(param_1[0x20],local_res10[0],uVar10);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c67c60(longlong *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  IStringManager *pIVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 auStack_e98 [32];
  uint local_e54 [3];
  uint *local_e48;
  int *piStack_e40;
  uint *local_e38;
  int *piStack_e30;
  uint *local_e28;
  int *piStack_e20;
  uint *local_e18;
  int *piStack_e10;
  longlong *local_e08;
  uint *local_df8 [3];
  int *local_de0;
  int *local_dd8;
  undefined8 local_dd0;
  undefined8 *local_dc8;
  longlong lStack_dc0;
  uint *local_db8;
  int *piStack_db0;
  int *local_da8;
  undefined4 *local_da0;
  uint *local_d98;
  longlong lStack_d90;
  longlong *local_d88;
  uint *local_d78;
  int *piStack_d70;
  uint *local_d68;
  undefined8 local_d58;
  uint *local_d50;
  uint *local_d38;
  int *piStack_d30;
  uint *local_d28;
  longlong lStack_d20;
  uint *local_d18;
  undefined **local_d08;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d00 [40];
  uint *local_cd8;
  int *piStack_cd0;
  undefined4 local_cc8 [28];
  CMsg local_c58 [1040];
  char local_848 [1023];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_d58 = 0xfffffffffffffffe;
  local_48 = DAT_140c7e400 ^ (ulonglong)auStack_e98;
  local_e54[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","ID_NONE != idUser","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
  }
  else {
    FUN_140c65b10(param_1 + 0x10,(longlong *)&local_dc8,local_e54);
    lVar16 = param_1[0x16];
    puVar18 = (uint *)0x0;
    local_e08 = (longlong *)param_1[0x10];
    if ((local_dc8 == (undefined8 *)0x0) || (local_dc8 != local_e08)) {
      _invalid_parameter_noinfo();
    }
    if (lStack_dc0 != lVar16) {
      local_e38 = operator_new(8);
      local_df8[0] = puVar18;
      if (local_e38 != (uint *)0x0) {
        *(uint ***)local_e38 = local_df8;
        local_df8[0] = local_e38;
      }
      local_de0 = (int *)0x0;
      local_dd8 = (int *)0x0;
      local_dd0 = 0;
      local_e28 = local_e38;
      if (local_dc8 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        puVar18 = (uint *)*local_dc8;
      }
      if (lStack_dc0 == *(longlong *)(puVar18 + 0xc)) {
        _invalid_parameter_noinfo();
      }
      puVar18 = *(uint **)(lStack_dc0 + 0x38);
      local_db8 = (uint *)0x0;
      local_e18 = puVar18;
      if (*(uint **)(lStack_dc0 + 0x40) < puVar18) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)(lStack_dc0 + 0x20);
      puVar15 = *(uint **)(lStack_dc0 + 0x40);
      local_d88 = (longlong *)0x0;
      local_e28 = puVar15;
      local_e08 = plVar6;
      local_db8 = (uint *)plVar6;
      if (puVar15 < *(uint **)(lStack_dc0 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      local_d88 = *(longlong **)(lStack_dc0 + 0x20);
      while( true ) {
        lVar16 = 0;
        if ((plVar6 == (longlong *)0x0) || (plVar6 != local_d88)) {
          _invalid_parameter_noinfo();
        }
        piVar17 = local_de0;
        if (puVar18 == puVar15) break;
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar19 = lVar16;
        }
        else {
          lVar19 = *plVar6;
        }
        if (*(uint **)(lVar19 + 0x20) <= puVar18) {
          _invalid_parameter_noinfo();
        }
        FUN_140c65a40(param_1,(longlong *)&local_e48,puVar18);
        puVar15 = local_e48;
        lVar19 = param_1[6];
        local_d68 = (uint *)*param_1;
        if ((local_e48 == (uint *)0x0) || (local_e48 != local_d68)) {
          _invalid_parameter_noinfo();
        }
        piVar17 = piStack_e40;
        plVar6 = local_e08;
        if (piStack_e40 != (int *)lVar19) {
          if (puVar15 == (uint *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar16 = *(longlong *)puVar15;
          }
          if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          piVar1 = piStack_e40;
          puVar2 = local_e48;
          puVar11 = (uint *)((longlong)piVar17 + 0x20);
          plVar6 = local_e08;
          local_e38 = puVar11;
          if (*(int *)((longlong)piVar17 + 0x8c) != -10) {
            local_d28 = local_e48;
            lStack_d20 = (longlong)piStack_e40;
            uVar5 = FUN_140c672c0(param_1,param_2,'\x01',(longlong *)&local_d28);
            plVar6 = local_e08;
            if ((char)uVar5 == '\0') {
              puVar13 = (undefined4 *)0x0;
              local_da0 = (undefined4 *)0x0;
              cVar3 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],*(undefined4 *)((longlong)piVar17 + 0x24),local_cc8);
              local_e54[0] = 0;
              puVar14 = puVar13;
              if ((cVar3 != '\0') && (puVar14 = local_cc8, local_da0 = local_cc8, 0 < *(int *)((longlong)piVar17 + 0x8c))) {
                puVar14 = puVar13;
                local_da0 = puVar13;
              }
              if (puVar15 == (uint *)0x0) {
                _invalid_parameter_noinfo();
                lVar16 = 0;
              }
              else {
                lVar16 = *(longlong *)puVar15;
              }
              if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              if (*(int *)((longlong)piVar17 + 0x8c) == 0) {
LAB_140c67fcf:
                if (puVar15 == (uint *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(longlong *)puVar15;
                }
                if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                iVar4 = tq::DateStamp(0);
                iVar4 = tq::DateStampDiff(*(int *)((longlong)piVar17 + 0x88),iVar4);
                if (7 < iVar4) {
                  if ((puVar14 != (undefined4 *)0x0) &&
                     (((cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x20))((longlong *)param_1[0x20],local_cc8[0]), cVar3 != '\0' ||
                       (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x28))((longlong *)param_1[0x20],local_cc8[0]), cVar3 == '\0')) ||
                      (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x30))((longlong *)param_1[0x20],local_cc8[0]), cVar3 != '\0')))) {
                    if (puVar15 == (uint *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(longlong *)puVar15;
                    }
                    if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    if (puVar15 == (uint *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(longlong *)puVar15;
                    }
                    if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    FUN_140c670c0(param_1,param_1 + 8,*puVar11,*(uint *)((longlong)piVar17 + 0x28));
                    if (puVar15 == (uint *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *(longlong *)puVar15;
                    }
                    if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    _snprintf(local_848,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1",(ulonglong)*puVar11);
                    local_449 = 0;
                    plVar6 = (longlong *)InstanceGet();
                    (**(code **)(*plVar6 + 0x30))(plVar6,local_848,0,1);
                    (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],local_cc8[0],1);
                    local_d98 = puVar2;
                    lStack_d90 = (longlong)piVar1;
                    FUN_140c65530(param_1,&local_d78,(longlong *)&local_d98);
                    plVar6 = local_e08;
                    if (local_e08 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = *local_e08;
                    }
                    if (*(uint **)(lVar16 + 0x20) <= puVar18) {
                      _invalid_parameter_noinfo();
                    }
                    FUN_140c66690((longlong *)local_df8,puVar18);
                    goto LAB_140c683e9;
                  }
                  pIVar7 = theInstance();
                  if ((ulonglong)param_1[0x1e] < 0x10) {
                    plVar6 = param_1 + 0x1b;
                  }
                  else {
                    plVar6 = (longlong *)param_1[0x1b];
                  }
                  if (puVar15 == (uint *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = *(longlong *)puVar15;
                  }
                  if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  if (*(ulonglong *)((longlong)piVar17 + 0x50) < 0x10) {
                    lVar16 = (longlong)piVar17 + 0x38;
                  }
                  else {
                    lVar16 = *(longlong *)((longlong)piVar17 + 0x38);
                  }
                  pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_HAS_EQUIP_BONUS");
                  puVar9 = FUN_140c614f0(&local_d08,pcVar8,lVar16,plVar6);
                  if ((ulonglong)puVar9[5] < 0x10) {
                    puVar9 = puVar9 + 2;
                  }
                  else {
                    puVar9 = (undefined8 *)puVar9[2];
                  }
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf8))((longlong *)param_1[0x20],param_2,puVar9);
                  local_d08 = tq::CString::vftable;
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                            (local_d00);
                  puVar11 = local_e38;
                  puVar18 = local_e18;
                }
              }
              else {
                if (puVar15 == (uint *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar16 = 0;
                }
                else {
                  lVar16 = *(longlong *)puVar15;
                }
                if (piVar17 == (int *)*(longlong *)(lVar16 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                if (*(int *)((longlong)piVar17 + 0x8c) == -1) goto LAB_140c67fcf;
              }
              uVar10 = 1;
              if (puVar14 == (undefined4 *)0x0) {
                uVar10 = 2;
              }
              else {
                local_e54[0] = (**(code **)(*(longlong *)param_1[0x20] + 8))((longlong *)param_1[0x20],*puVar14);
              }
              FUN_140c6ee50(local_c58);
              uVar5 = FUN_140c6ef00(local_c58,puVar14,local_e54[0],puVar11,uVar10);
              if ((char)uVar5 == '\0') {
                log_InlineLogERROR(&DAT_140c755b8,"IF_OK","msgDetainItemInfo.Create(pItemInfo, nRansom, rPKItemInfo, nAction)",
                                   "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
              }
              else {
                (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_2,local_c58);
                if (puVar14 != (undefined4 *)0x0) {
                  (**(code **)(*(longlong *)param_1[0x20] + 0x108))((longlong *)param_1[0x20],param_2,*puVar14);
                }
              }
              if (0 < (int)puVar11[0x1b]) {
                pIVar7 = theInstance();
                if (*(ulonglong *)(puVar11 + 0xc) < 0x10) {
                  puVar11 = puVar11 + 6;
                }
                else {
                  puVar11 = *(uint **)(puVar11 + 6);
                }
                pcVar8 = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_HAS_EMONEY_BONUS");
                _snprintf(local_448,0x400,pcVar8,puVar11);
                local_49 = 0;
                (**(code **)(*(longlong *)param_1[0x20] + 0xf8))((longlong *)param_1[0x20],param_2,local_448);
              }
              FUN_140c6eea0((undefined8 *)local_c58);
              plVar6 = local_e08;
            }
            else {
              if (local_e08 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar16 = 0;
              }
              else {
                lVar16 = *local_e08;
              }
              if (*(uint **)(lVar16 + 0x20) <= puVar18) {
                _invalid_parameter_noinfo();
              }
              FUN_140c66690((longlong *)local_df8,puVar18);
            }
          }
        }
LAB_140c683e9:
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar16 = 0;
        }
        else {
          lVar16 = *plVar6;
        }
        if (*(uint **)(lVar16 + 0x20) <= puVar18) {
          _invalid_parameter_noinfo();
        }
        puVar18 = puVar18 + 1;
        puVar15 = local_e28;
        local_e18 = puVar18;
      }
      local_e48 = (uint *)0x0;
      if (local_dd8 < local_de0) {
        _invalid_parameter_noinfo();
      }
      puVar18 = local_df8[0];
      local_e48 = local_df8[0];
      piStack_e40 = piVar17;
      local_db8 = local_df8[0];
      piStack_db0 = piVar17;
      while( true ) {
        piVar1 = local_dd8;
        local_d50 = (uint *)0x0;
        if (local_dd8 < local_de0) {
          _invalid_parameter_noinfo();
        }
        local_d50 = local_df8[0];
        if ((puVar18 == (uint *)0x0) || (puVar18 != local_df8[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar17 == piVar1) break;
        piVar1 = *(int **)(lStack_dc0 + 0x40);
        local_e28 = (uint *)0x0;
        if (piVar1 < *(int **)(lStack_dc0 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_e28 = *(uint **)(lStack_dc0 + 0x20);
        piVar12 = *(int **)(lStack_dc0 + 0x38);
        local_e38 = (uint *)0x0;
        piStack_e20 = piVar1;
        local_cd8 = local_e28;
        piStack_cd0 = piVar1;
        if (*(int **)(lStack_dc0 + 0x40) < piVar12) {
          _invalid_parameter_noinfo();
        }
        local_e38 = *(uint **)(lStack_dc0 + 0x20);
        piStack_e30 = piVar12;
        local_e18 = local_e38;
        piStack_e10 = piVar12;
        if (puVar18 == (uint *)0x0) {
          _invalid_parameter_noinfo();
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)puVar18;
        }
        if (*(int **)(lVar16 + 0x20) <= piVar17) {
          _invalid_parameter_noinfo();
        }
        for (; (puVar15 = local_e18, piVar12 != piVar1 && (*piVar12 != *piVar17)); piVar12 = piVar12 + 1) {
        }
        local_d38 = local_e18;
        piVar1 = *(int **)(lStack_dc0 + 0x40);
        local_d18 = (uint *)0x0;
        piStack_e10 = piVar12;
        local_da8 = piVar12;
        piStack_d30 = piVar12;
        if (piVar1 < *(int **)(lStack_dc0 + 0x38)) {
          _invalid_parameter_noinfo();
        }
        local_d18 = *(uint **)(lStack_dc0 + 0x20);
        if ((local_e18 == (uint *)0x0) || (local_e18 != local_d18)) {
          _invalid_parameter_noinfo();
        }
        if (piVar12 != piVar1) {
          local_d78 = puVar15;
          piStack_d70 = piVar12;
          FUN_140c64730((undefined8 *)(lStack_dc0 + 0x20),&local_d98,(longlong)&local_d78);
        }
        if (puVar18 == (uint *)0x0) {
          _invalid_parameter_noinfo();
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)puVar18;
        }
        if (*(int **)(lVar16 + 0x20) <= piVar17) {
          _invalid_parameter_noinfo();
        }
        piVar17 = piVar17 + 1;
      }
      if ((*(longlong *)(lStack_dc0 + 0x40) - *(longlong *)(lStack_dc0 + 0x38) & 0xfffffffffffffffcU) == 0) {
        FUN_140c668e0(param_1 + 0x10,&local_d38,(longlong *)&local_dc8);
      }
      if (local_de0 != (int *)0x0) {
        operator_delete(local_de0);
      }
      local_de0 = (int *)0x0;
      local_dd8 = (int *)0x0;
      local_dd0 = 0;
      operator_delete(local_df8[0]);
    }
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c686d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_11d8 [32];
  int local_11b8;
  undefined4 local_11b0;
  int local_11a8;
  undefined4 local_11a0;
  undefined4 local_1198;
  undefined4 local_1190;
  undefined4 local_1188;
  undefined4 local_1180;
  undefined4 local_1178;
  undefined1 local_1168;
  uint local_1164;
  longlong *local_1158;
  longlong *plStack_1150;
  longlong *local_1148;
  longlong *local_1140;
  longlong local_1138;
  longlong local_1130;
  longlong local_1128;
  longlong local_1120;
  longlong *local_1118;
  longlong local_1108;
  longlong local_10f8;
  undefined8 local_10e8;
  longlong *local_10d8;
  longlong *plStack_10d0;
  int local_10c8;
  undefined4 local_10c4;
  int local_10c0;
  undefined4 local_10a4;
  undefined4 local_10a0;
  undefined4 local_1090;
  undefined4 local_1088;
  undefined4 local_1084;
  undefined8 local_1058 [2];
  char local_1048 [1023];
  undefined1 local_c49;
  char local_c48 [1023];
  undefined1 local_849;
  char local_848 [1023];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_10e8 = 0xfffffffffffffffe;
  local_48 = DAT_140c7e400 ^ (ulonglong)auStack_11d8;
  if (param_1[7] != 0) {
    plVar7 = *(longlong **)param_1[6];
    local_1158 = (longlong *)*param_1;
    plStack_1150 = plVar7;
LAB_140c68760:
    plVar5 = (longlong *)param_1[6];
    local_1118 = (longlong *)*param_1;
    if ((local_1158 == (longlong *)0x0) || (local_1158 != local_1118)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 != plVar5) {
      if (local_1158 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *local_1158;
      }
      if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      iVar4 = tq::DateStamp(0);
      iVar4 = tq::DateStampDiff((int)plVar7[0x11],iVar4);
      bVar10 = false;
      local_1168 = 0;
      FUN_140c65b10(param_1 + 8,&local_1138,(uint *)(plVar7 + 5));
      lVar8 = param_1[0xe];
      local_10f8 = param_1[8];
      if ((local_1138 == 0) || (local_1138 != local_10f8)) {
        _invalid_parameter_noinfo();
      }
      local_1164 = (uint)(local_1130 != lVar8);
      FUN_140c65b10(param_1 + 0x10,&local_1128,(uint *)(plVar7 + 0xb));
      lVar8 = param_1[0x16];
      local_1108 = param_1[0x10];
      if ((local_1128 == 0) || (local_1128 != local_1108)) {
        _invalid_parameter_noinfo();
      }
      bVar9 = local_1120 != lVar8;
      cVar3 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24),&local_10c8);
      if (iVar4 < 8) {
        if (0xe < iVar4) goto LAB_140c68b0e;
LAB_140c68d49:
        if (local_1158 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar7 + 0x91) == '\0') {
          plVar5 = plVar7;
          plVar1 = (longlong *)plVar7[2];
          if (*(char *)(plVar7[2] + 0x91) == '\0') {
            do {
              plVar7 = plVar1;
              plVar1 = (longlong *)*plVar7;
              plStack_1150 = plVar7;
              local_1148 = plVar7;
            } while (*(char *)(*plVar7 + 0x91) == '\0');
          }
          else {
            do {
              plVar7 = (longlong *)plVar5[1];
              plStack_1150 = plVar7;
              if (*(char *)((longlong)plVar7 + 0x91) != '\0') break;
              bVar10 = plVar5 == (longlong *)plVar7[2];
              plVar5 = plVar7;
            } while (bVar10);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      }
      else {
        if (iVar4 < 0xf) {
          if ((((cVar3 == '\0') || (local_10c0 != (int)param_1[0x18])) || (*(int *)((longlong)plVar7 + 0x8c) != 0)) && (*(int *)((longlong)plVar7 + 0x8c) != -1)
             ) {
            if (*(int *)((longlong)plVar7 + 0x8c) == -10) {
              _snprintf(local_c48,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
              local_849 = 0;
              plVar5 = (longlong *)InstanceGet();
              (**(code **)(*plVar5 + 0x30))(plVar5,local_c48,0,1);
              if (bVar9) {
                FUN_140c670c0(param_1,param_1 + 0x10,(int)plVar7[4],*(uint *)(plVar7 + 0xb));
                FUN_140c617a0((longlong)param_1,(int)plVar7[0xb],(int)plVar7[4],iVar4);
              }
              bVar10 = true;
              local_1168 = 1;
            }
          }
          else {
            cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x20))((longlong *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24));
            if (((cVar3 == '\0') &&
                (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x28))((longlong *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24)), cVar3 != '\0'))
               && ((cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x30))((longlong *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24)), cVar3 == '\0'
                   && (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x118))(), cVar3 == '\0')))) {
              if (*(int *)((longlong)plVar7 + 0x8c) == 0) {
                *(undefined4 *)((longlong)plVar7 + 0x8c) = 0xffffffff;
                _snprintf(local_848,0x400,"UPDATE cq_pk_item set bonus=-1 WHERE id=%u LIMIT 1");
                local_449 = 0;
                plVar5 = (longlong *)InstanceGet();
                (**(code **)(*plVar5 + 0x30))(plVar5,local_848,0,1);
              }
            }
            else {
              _snprintf(local_1048,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
              local_c49 = 0;
              plVar5 = (longlong *)InstanceGet();
              (**(code **)(*plVar5 + 0x30))(plVar5,local_1048,0,1);
              (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24),1);
              if (bVar9) {
                FUN_140c670c0(param_1,param_1 + 0x10,(int)plVar7[4],*(uint *)(plVar7 + 0xb));
                FUN_140c617a0((longlong)param_1,(int)plVar7[0xb],(int)plVar7[4],iVar4);
              }
              bVar10 = true;
              local_1168 = 1;
            }
          }
          if ((char)local_1164 != '\0') {
            FUN_140c670c0(param_1,param_1 + 8,(int)plVar7[4],*(uint *)(plVar7 + 5));
            FUN_140c61870((longlong)param_1,(int)plVar7[5],(int)plVar7[4],iVar4);
          }
          if (!bVar10) goto LAB_140c68d49;
        }
        else {
LAB_140c68b0e:
          _snprintf(local_448,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
          local_49 = 0;
          plVar5 = (longlong *)InstanceGet();
          (**(code **)(*plVar5 + 0x30))(plVar5,local_448,0,1);
          (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],*(undefined4 *)((longlong)plVar7 + 0x24),1);
          if (bVar9) {
            FUN_140c670c0(param_1,param_1 + 0x10,(int)plVar7[4],*(uint *)(plVar7 + 0xb));
            FUN_140c617a0((longlong)param_1,(int)plVar7[0xb],(int)plVar7[4],iVar4);
          }
          if ((char)local_1164 != '\0') {
            FUN_140c670c0(param_1,param_1 + 8,(int)plVar7[4],*(uint *)(plVar7 + 5));
            FUN_140c61870((longlong)param_1,(int)plVar7[5],(int)plVar7[4],iVar4);
          }
          local_11b8 = *(int *)((longlong)plVar7 + 0x8c);
          if (local_11b8 < 1) {
            local_1178 = local_1084;
            local_1180 = local_1088;
            local_1188 = local_1090;
            local_1190 = local_10a0;
            local_1198 = local_10a4;
            local_11a0 = local_1088;
            local_11a8 = local_10c0;
            local_11b0 = local_10c4;
            local_11b8 = local_10c8;
            tq::MyLogSave("gmlog/detain",
                          "%s(%u) delete Expired pk item: [id=%u, type=%u, Owner id=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d]"
                         );
          }
          else {
            tq::MyLogSave("gmlog/detain","%s(%u) delete Expired pk Bonus: [Bonus=%d]");
          }
          local_1168 = 1;
        }
        plVar1 = plStack_1150;
        plVar5 = local_1158;
        if (local_1158 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar7 + 0x91) == '\0') {
          plVar6 = plVar7;
          plVar2 = (longlong *)plVar7[2];
          if (*(char *)(plVar7[2] + 0x91) == '\0') {
            do {
              plVar7 = plVar2;
              plVar2 = (longlong *)*plVar7;
              plStack_1150 = plVar7;
              local_1140 = plVar7;
            } while (*(char *)(*plVar7 + 0x91) == '\0');
          }
          else {
            do {
              plVar7 = (longlong *)plVar6[1];
              plStack_1150 = plVar7;
              if (*(char *)((longlong)plVar7 + 0x91) != '\0') break;
              bVar10 = plVar6 == (longlong *)plVar7[2];
              plVar6 = plVar7;
            } while (bVar10);
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
        local_10d8 = plVar5;
        plStack_10d0 = plVar1;
        FUN_140c65530(param_1,local_1058,(longlong *)&local_10d8);
      }
      goto LAB_140c68760;
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c68e20(longlong *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *plVar9;
  longlong *plVar10;
  IStringManager *pIVar11;
  char *_Format;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  rsize_t _DstSize;
  undefined8 *puVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined1 auStack_d98 [32];
  longlong *local_d18;
  longlong *plStack_d10;
  longlong *local_d08;
  longlong *plStack_d00;
  longlong *local_cf8;
  longlong *plStack_cf0;
  longlong **local_ce8;
  longlong *local_ce0;
  undefined8 *local_cd8;
  undefined8 local_cd0;
  int local_cc8;
  undefined4 local_cc4;
  CMsg local_c58 [1040];
  char local_848 [1023];
  undefined1 local_449;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_cd0 = 0xfffffffffffffffe;
  local_48 = DAT_140c7e400 ^ (ulonglong)auStack_d98;
  puVar16 = (undefined8 *)((undefined8 *)param_1[0x16])[1];
  cVar6 = *(char *)((longlong)puVar16 + 0x51);
  puVar2 = (undefined8 *)param_1[0x16];
  while (cVar6 == '\0') {
    if (*(uint *)(puVar16 + 3) < param_2) {
      puVar8 = (undefined8 *)puVar16[2];
      puVar16 = puVar2;
    }
    else {
      puVar8 = (undefined8 *)*puVar16;
    }
    puVar2 = puVar16;
    puVar16 = puVar8;
    cVar6 = *(char *)((longlong)puVar8 + 0x51);
  }
  local_cd8 = puVar2;
  local_ce0 = (longlong *)param_1[0x10];
  puVar16 = (undefined8 *)param_1[0x16];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 == puVar16) || (param_2 < *(uint *)(puVar2 + 3))) {
    plStack_cf0 = (longlong *)param_1[0x16];
    local_cf8 = (longlong *)param_1[0x10];
    local_ce8 = &local_cf8;
  }
  else {
    local_ce8 = &local_ce0;
  }
  plVar10 = *local_ce8;
  plVar9 = local_ce8[1];
  plVar17 = (longlong *)param_1[0x16];
  local_d08 = plVar10;
  plStack_d00 = plVar9;
  if ((plVar10 == (longlong *)0x0) || (plVar10 != (longlong *)param_1[0x10])) {
    _invalid_parameter_noinfo();
    plVar9 = extraout_RAX;
  }
  plVar4 = plStack_d00;
  if (plStack_d00 == plVar17) {
LAB_140c6941b:
    return (ulonglong)plVar9 & 0xffffffffffffff00;
  }
  if (plVar10 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar10;
  }
  if (plVar4 == *(longlong **)(lVar14 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  puVar18 = (uint *)plVar4[7];
  if ((uint *)plVar4[8] < puVar18) {
    _invalid_parameter_noinfo();
  }
  plVar10 = (longlong *)plVar4[4];
  puVar1 = (uint *)plVar4[8];
  if (puVar1 < (uint *)plVar4[7]) {
    _invalid_parameter_noinfo();
  }
  local_d18 = (longlong *)plVar4[4];
  do {
    if ((plVar10 == (longlong *)0x0) || (plVar9 = local_d18, plVar10 != local_d18)) {
      _invalid_parameter_noinfo();
      plVar9 = extraout_RAX_00;
    }
    if (puVar18 == puVar1) goto LAB_140c6941b;
    if (plVar10 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar10;
    }
    if (*(uint **)(lVar14 + 0x20) <= puVar18) {
      _invalid_parameter_noinfo();
    }
    FUN_140c65a40(param_1,(longlong *)&local_d08,puVar18);
    plVar17 = local_d08;
    plVar9 = (longlong *)param_1[6];
    if ((local_d08 == (longlong *)0x0) || (local_d08 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    plVar5 = plStack_d00;
    if (plStack_d00 != plVar9) {
      if (plVar17 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar17;
      }
      if (plVar5 == *(longlong **)(lVar14 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      cVar6 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],*(undefined4 *)((longlong)plVar5 + 0x24),&local_cc8);
      if (cVar6 != '\0') {
        lVar14 = plVar5[4];
        lVar3 = plVar5[0x11];
        if ((((local_cc8 == param_3) && (iVar7 = *(int *)((longlong)plVar5 + 0x8c), iVar7 < 1)) && (iVar7 != -10)) && (iVar7 != -0xb)) break;
      }
    }
    if (plVar10 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar14 = 0;
    }
    else {
      lVar14 = *plVar10;
    }
    if (*(uint **)(lVar14 + 0x20) <= puVar18) {
      _invalid_parameter_noinfo();
    }
    puVar18 = puVar18 + 1;
  } while( true );
  FUN_140c670c0(param_1,param_1 + 8,(int)lVar14,*(uint *)(plVar5 + 5));
  plVar10 = (longlong *)plVar4[8];
  if (plVar10 < (longlong *)plVar4[7]) {
    _invalid_parameter_noinfo();
  }
  plVar9 = (longlong *)plVar4[7];
  if ((longlong *)plVar4[8] < plVar9) {
    _invalid_parameter_noinfo();
  }
  local_d18 = (longlong *)plVar4[4];
  plVar17 = plVar9;
  if (plVar9 != plVar10) {
    do {
      if ((int)*plVar17 == (int)plVar5[4]) break;
      plVar17 = (longlong *)((longlong)plVar17 + 4);
    } while (plVar17 != plVar10);
  }
  plVar10 = (longlong *)plVar4[8];
  plStack_d10 = plVar9;
  if (plVar10 < (longlong *)plVar4[7]) {
    _invalid_parameter_noinfo();
  }
  if ((local_d18 == (longlong *)0x0) || (local_d18 != (longlong *)plVar4[4])) {
    _invalid_parameter_noinfo();
  }
  if (plVar17 != plVar10) {
    lVar15 = plVar4[8] - ((longlong)plVar17 + 4) >> 2;
    if (0 < lVar15) {
      _DstSize = lVar15 << 2;
      memmove_s(plVar17,_DstSize,(int *)((longlong)plVar17 + 4),_DstSize);
    }
    plVar4[8] = plVar4[8] + -4;
    if ((plVar17 < (longlong *)plVar4[7]) || ((longlong *)plVar4[8] < plVar17)) {
      _invalid_parameter_noinfo();
    }
  }
  if ((plVar4[8] - plVar4[7] & 0xfffffffffffffffcU) == 0) {
    local_d18 = *local_ce8;
    plStack_d10 = local_ce8[1];
    FUN_140c668e0(param_1 + 0x10,&local_cf8,(longlong *)&local_d18);
  }
  plVar10 = (longlong *)InstanceGet();
  _snprintf(local_448,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
  local_49 = 0;
  (**(code **)(*plVar10 + 0x30))(plVar10,local_448,0,1);
  tq::MyLogSave("gmlog/detain",
                "%s(%u) delete giveback pk item: [id=%u, type=%u, Owner id=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d]"
               );
  cVar6 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],param_2);
  if (cVar6 != '\0') {
    pIVar11 = theInstance();
    (**(code **)(*(longlong *)param_1[0x20] + 0x80))((longlong *)param_1[0x20],local_cc4);
    _Format = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_DEL_DETAIN_BY_GIVEBACK");
    _snprintf(local_848,0x400,_Format);
    local_449 = 0;
    (**(code **)(*(longlong *)param_1[0x20] + 0xf8))((longlong *)param_1[0x20],param_2,local_848);
    FUN_140c6f470(local_c58);
    uVar12 = FUN_140c6f4f0((longlong)local_c58,1);
    if ((char)uVar12 == '\0') {
      uVar13 = FUN_140c6f4c0((undefined8 *)local_c58);
      return uVar13 & 0xffffffffffffff00;
    }
    iVar7 = tq::DateStamp(0);
    iVar7 = tq::DateStampDiff((int)lVar3,iVar7);
    lVar14 = FUN_140c6f520((longlong)local_c58,(int)lVar14,iVar7,0,0);
    if ((char)lVar14 == '\0') {
      uVar13 = FUN_140c6f4c0((undefined8 *)local_c58);
      return uVar13 & 0xffffffffffffff00;
    }
    (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_2,local_c58);
    FUN_140c6f4c0((undefined8 *)local_c58);
  }
  local_cf8 = local_d08;
  plStack_cf0 = plStack_d00;
  FUN_140c65530(param_1,&local_ce0,(longlong *)&local_cf8);
  uVar12 = (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],param_3,1,0);
  return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
}




longlong * FUN_140c69450(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140c695ad:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140c695dc;
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
      goto LAB_140c695ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140c66d80(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140c695dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_140c69600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c66cd0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140c69640(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c66cd0(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_140c668e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140c69820(longlong *param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong extraout_RAX;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong extraout_RAX_00;
  __uint64 _Var13;
  undefined4 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong extraout_RAX_01;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_6d8 [32];
  undefined4 local_6b8;
  uint local_6a8;
  longlong *local_6a0;
  longlong local_698;
  uint local_690;
  longlong *local_688;
  void **local_680;
  undefined4 *local_678;
  longlong *local_670;
  undefined4 *local_668;
  longlong *local_660;
  longlong *local_658 [3];
  void *local_640;
  undefined8 local_638;
  undefined8 local_630;
  longlong *local_628 [3];
  void *local_610;
  undefined8 local_608;
  undefined8 local_600;
  longlong *local_5f8;
  longlong local_5f0;
  uint local_5e8 [2];
  void *local_5e0 [3];
  void *local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  uint local_5b0 [2];
  void *local_5a8 [3];
  void *local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_568 [40];
  undefined4 local_540;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_538 [40];
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 *local_508;
  undefined8 local_500;
  undefined4 *local_4f8;
  uint local_4f0 [2];
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4d8 [40];
  undefined4 local_4b0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4a8 [40];
  undefined4 local_480;
  undefined4 local_47c;
  longlong local_478 [3];
  longlong local_460 [2];
  longlong local_450 [3];
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_500 = 0xfffffffffffffffe;
  local_38 = DAT_140c7e400 ^ (ulonglong)auStack_6d8;
  local_688 = param_1;
  local_660 = param_1;
  if (param_1[0x20] == 0) {
    local_6b8 = 0x61;
    log_InlineLogERROR(&DAT_140c755b8,"CHECKF","m_pConsumer","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
    uVar7 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar8 = (longlong *)InstanceGet();
    plVar9 = (longlong *)(**(code **)(*(longlong *)param_1[0x20] + 0x120))((longlong *)param_1[0x20],12000,1);
    if ((plVar9 == (longlong *)0x0) || (lVar10 = (**(code **)(*plVar9 + 0x40))(plVar9), lVar10 == 0)) {
      if (plVar9 != (longlong *)0x0) {
        (**(code **)*plVar9)(plVar9);
      }
      log_InlineLogERROR(&DAT_140c76898,12000);
      uVar7 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,2);
      uVar4 = (**(code **)(*plVar11 + 0x40))(plVar11);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,3);
      uVar4 = (**(code **)(*plVar11 + 0x48))(plVar11);
      *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,4);
      uVar4 = (**(code **)(*plVar11 + 0x48))(plVar11);
      *(undefined4 *)(param_1 + 0x19) = uVar4;
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,7);
      pcVar12 = (char *)(**(code **)(*plVar11 + 0x78))(plVar11);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1a),pcVar12);
      (**(code **)*plVar9)(plVar9);
      _snprintf(local_438,0x400,
                "SELECT cq_pk_item.*, A.name AS target_by_user, B.name AS hunter_by_user FROM cq_pk_item LEFT JOIN cq_user AS A ON cq_pk_item.target = A.id LEFT JOIN cq_user AS B ON cq_pk_item.hunter = B.id ORDER BY cq_pk_item.id"
               );
      local_39 = 0;
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,local_438,2);
      if (plVar8 == (longlong *)0x0) {
        local_6b8 = 0x7e;
        log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","pRecSet != NULL","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
        uVar7 = extraout_RAX_00 & 0xffffffffffffff00;
      }
      else {
        uVar7 = 0;
        local_6a8 = 0;
        iVar5 = (**(code **)(*plVar8 + 0x40))(plVar8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (longlong)iVar5;
        _Var13 = SUB168(ZEXT816(4) * auVar2,0);
        if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
          _Var13 = 0xffffffffffffffff;
        }
        puVar14 = operator_new(_Var13);
        local_690 = 0;
        local_668 = puVar14;
        lVar10 = (**(code **)(*plVar8 + 0x40))(plVar8);
        if (lVar10 != 0) {
          local_4f8 = &local_4e8;
          local_508 = &local_4e8;
          local_678 = puVar14;
          do {
            lVar19 = 0;
            lVar18 = -1;
            (**(code **)(*plVar8 + 0x30))(plVar8,uVar7);
            plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,0);
            uVar6 = (**(code **)(*plVar9 + 0x40))(plVar9);
            local_574 = 0;
            local_570 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_568);
            local_540 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_538);
            local_510 = 0;
            local_50c = 0;
            local_4e8 = local_578;
            local_4e4 = local_574;
            local_4e0 = local_570;
            local_4f0[0] = uVar6;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      (local_4d8,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_568);
            local_4b0 = local_540;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      (local_4a8,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_538);
            local_480 = local_510;
            local_47c = local_50c;
            plVar9 = FUN_140c65420(param_1,local_450,local_4f0);
            local_5f8 = (longlong *)*plVar9;
            local_5f0 = plVar9[1];
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4a8);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_4d8);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_538);
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_568);
            plVar9 = local_5f8;
            lVar10 = param_1[6];
            if ((local_5f8 == (longlong *)0x0) || (local_5f8 != (longlong *)*param_1)) {
              _invalid_parameter_noinfo();
            }
            lVar3 = local_5f0;
            if (local_5f0 == lVar10) {
              local_6b8 = 0x8c;
              log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","iterPkItem != m_mapPKItem.end()",
                                 "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
            }
            else {
              if (plVar9 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
              }
              else {
                lVar19 = *plVar9;
              }
              if (lVar3 == *(longlong *)(lVar19 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,0);
              uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
              *(undefined4 *)(lVar3 + 0x20) = uVar4;
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,1);
              uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
              *(undefined4 *)(lVar3 + 0x24) = uVar4;
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,2);
              uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
              *(undefined4 *)(lVar3 + 0x28) = uVar4;
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,8);
              pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
              lVar10 = lVar18;
              do {
                if (lVar10 == 0) break;
                lVar10 = lVar10 + -1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              if (lVar10 == -2) {
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,3);
                pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x30),pcVar12);
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,8);
                pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x30),pcVar12);
              }
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,4);
              uVar4 = (**(code **)(*plVar9 + 0x40))(plVar9);
              *(undefined4 *)(lVar3 + 0x58) = uVar4;
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,9);
              pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
              do {
                if (lVar18 == 0) break;
                lVar18 = lVar18 + -1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              if (lVar18 == -2) {
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,5);
                pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x60),pcVar12);
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,9);
                pcVar12 = (char *)(**(code **)(*plVar9 + 0x78))(plVar9);
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 0x60),pcVar12);
              }
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,6);
              uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9);
              *(undefined4 *)(lVar3 + 0x88) = uVar4;
              plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,7);
              uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9);
              *(undefined4 *)(lVar3 + 0x8c) = uVar4;
              FUN_140c65b10(param_1 + 8,(longlong *)&local_6a0,(uint *)(lVar3 + 0x28));
              plVar9 = local_6a0;
              lVar10 = param_1[0xe];
              if ((local_6a0 == (longlong *)0x0) || (local_6a0 != (longlong *)param_1[8])) {
                _invalid_parameter_noinfo();
              }
              if (local_698 == lVar10) {
                local_680 = operator_new(8);
                if (local_680 == (void **)0x0) {
                  local_628[0] = (longlong *)0x0;
                }
                else {
                  *local_680 = local_628;
                  local_628[0] = (longlong *)local_680;
                }
                local_610 = (void *)0x0;
                local_608 = 0;
                local_600 = 0;
                local_5e8[0] = *(uint *)(lVar3 + 0x28);
                local_670 = (longlong *)local_680;
                FUN_140c65c20(local_5e0,local_628);
                plVar9 = FUN_140c69450(param_1 + 8,local_478,local_5e8);
                local_6a0 = (longlong *)*plVar9;
                local_698 = plVar9[1];
                local_680 = local_5e0;
                if (local_5c8 != (void *)0x0) {
                  operator_delete(local_5c8);
                }
                local_5c8 = (void *)0x0;
                local_5c0 = 0;
                local_5b8 = 0;
                operator_delete(local_5e0[0]);
                if (local_610 != (void *)0x0) {
                  operator_delete(local_610);
                }
                local_610 = (void *)0x0;
                local_608 = 0;
                local_600 = 0;
                operator_delete(local_628[0]);
                plVar9 = local_6a0;
              }
              lVar19 = local_698;
              lVar10 = param_1[0xe];
              if ((plVar9 == (longlong *)0x0) || (plVar9 != (longlong *)param_1[8])) {
                _invalid_parameter_noinfo();
              }
              if (lVar19 == lVar10) {
                local_6b8 = 0xb7;
                log_InlineLogERROR(&DAT_140c755b8,"IF_OK","iterUserItem != m_mapTargetItem.end()",
                                   "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
              }
              else {
                if (plVar9 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar10 = 0;
                }
                else {
                  lVar10 = *plVar9;
                }
                if (lVar19 == *(longlong *)(lVar10 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                FUN_140c66690((longlong *)(lVar19 + 0x20),(undefined4 *)(lVar3 + 0x20));
              }
              plVar11 = local_688;
              plVar15 = FUN_140c65b10(local_688 + 0x10,local_460,(uint *)(lVar3 + 0x58));
              plVar9 = (longlong *)*plVar15;
              local_698 = plVar15[1];
              lVar10 = plVar11[0x16];
              local_6a0 = plVar9;
              if ((plVar9 == (longlong *)0x0) || (plVar9 != (longlong *)plVar11[0x10])) {
                _invalid_parameter_noinfo();
              }
              if (local_698 == lVar10) {
                local_680 = operator_new(8);
                if (local_680 == (void **)0x0) {
                  local_658[0] = (longlong *)0x0;
                }
                else {
                  *local_680 = local_658;
                  local_658[0] = (longlong *)local_680;
                }
                local_640 = (void *)0x0;
                local_638 = 0;
                local_630 = 0;
                local_5b0[0] = *(uint *)(lVar3 + 0x58);
                local_670 = (longlong *)local_680;
                FUN_140c65c20(local_5a8,local_658);
                plVar9 = FUN_140c69450(plVar11 + 0x10,local_478,local_5b0);
                local_6a0 = (longlong *)*plVar9;
                local_698 = plVar9[1];
                local_680 = local_5a8;
                if (local_590 != (void *)0x0) {
                  operator_delete(local_590);
                }
                local_590 = (void *)0x0;
                local_588 = 0;
                local_580 = 0;
                operator_delete(local_5a8[0]);
                if (local_640 != (void *)0x0) {
                  operator_delete(local_640);
                }
                local_640 = (void *)0x0;
                local_638 = 0;
                local_630 = 0;
                operator_delete(local_658[0]);
                plVar9 = local_6a0;
              }
              lVar18 = local_698;
              lVar19 = 0;
              lVar10 = plVar11[0x16];
              if ((plVar9 == (longlong *)0x0) || (plVar9 != (longlong *)plVar11[0x10])) {
                _invalid_parameter_noinfo();
              }
              if (lVar18 == lVar10) {
                local_6b8 = 0xc3;
                log_InlineLogERROR(&DAT_140c755b8,"IF_OK","iterUserItem != m_mapHunterItem.end()",
                                   "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
              }
              else {
                if (plVar9 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                else {
                  lVar19 = *plVar9;
                }
                if (lVar18 == *(longlong *)(lVar19 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                FUN_140c66690((longlong *)(lVar18 + 0x20),(undefined4 *)(lVar3 + 0x20));
              }
              param_1 = local_688;
              if (*(int *)(lVar3 + 0x8c) < 1) {
                *local_678 = *(undefined4 *)(lVar3 + 0x24);
                local_6a8 = local_6a8 + 1;
                local_678 = local_678 + 1;
              }
            }
            local_690 = local_690 + 1;
            uVar7 = (ulonglong)local_690;
            uVar16 = (**(code **)(*plVar8 + 0x40))(plVar8);
          } while (uVar7 < uVar16);
          uVar7 = (ulonglong)local_6a8;
        }
        (**(code **)*plVar8)(plVar8);
        puVar14 = local_668;
        (**(code **)(*(longlong *)param_1[0x20] + 0x50))((longlong *)param_1[0x20],uVar7,local_668);
        operator_delete__(puVar14);
        uVar17 = FUN_140c686d0(param_1);
        uVar7 = CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
      }
    }
  }
  return uVar7;
}




void FUN_140c6a290(longlong *param_1,uint param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c67550(param_1,param_2);
  FUN_140c67c60(param_1,param_2);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6a300(void **param_1,uint param_2,uint param_3,int param_4)

{
  void **ppvVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  void **ppvVar7;
  char *pcVar8;
  longlong *plVar9;
  undefined8 uVar10;
  void **ppvVar11;
  longlong lVar12;
  undefined1 auStack_ba8 [32];
  void **local_b18 [2];
  longlong *local_b08;
  void **local_b00;
  int local_af8;
  uint local_af4;
  uint local_af0;
  void **local_ae8;
  int local_ae0;
  void **local_ad8 [3];
  void *local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  uint local_aa8 [2];
  void *local_aa0 [3];
  void *local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a60 [40];
  undefined4 local_a38;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_a30 [40];
  undefined4 local_a08;
  undefined4 local_a04;
  undefined8 local_a00;
  uint local_9f8 [2];
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9e0 [40];
  undefined4 local_9b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9b0 [40];
  undefined4 local_988;
  undefined4 local_984;
  longlong local_980 [3];
  undefined1 local_968 [112];
  longlong local_8f8 [4];
  undefined4 local_8d8 [28];
  CMsg local_868 [1040];
  char local_458 [1023];
  undefined1 local_59;
  ulonglong local_58;
  
  local_a00 = 0xfffffffffffffffe;
  local_58 = DAT_140c7e400 ^ (ulonglong)auStack_ba8;
  local_af8 = param_4;
  local_af4 = param_2;
  local_af0 = param_3;
  local_ae8 = param_1;
  cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x78))(param_1[0x20],param_3);
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x78))(param_1[0x20],param_4), cVar3 == '\0')) {
    if ((param_2 == 0) || ((param_3 == 0 || (param_4 == 0)))) {
      log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","idItem!=ID_NONE && idTarget!=ID_NONE && idHunter!=ID_NONE",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
    }
    else {
      cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))(param_1[0x20],param_3);
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))(param_1[0x20],param_4), cVar3 != '\0')) {
        (**(code **)(*(longlong *)param_1[0x20] + 0x68))(param_1[0x20],param_2,2,*(undefined4 *)(param_1 + 0x18));
        (**(code **)(*(longlong *)param_1[0x20] + 0x68))(param_1[0x20],param_2,7,0xcc);
        uVar4 = tq::TimeGet(3);
        local_ae0 = uVar4 + 19000000;
        plVar6 = param_1[0x20];
        (**(code **)(*plVar6 + 0x98))(plVar6,param_4);
        (**(code **)(*plVar6 + 0x98))(plVar6,param_3);
        _snprintf(local_458,0x400,
                  "insert into cq_pk_item(item, target, target_name, hunter, hunter_name, manhunt_time, bonus) values(%u, %u, \'%s\', %u, \'%s\', %u, %d)",
                  (ulonglong)param_2);
        local_59 = 0;
        plVar6 = (longlong *)InstanceGet();
        (**(code **)(*plVar6 + 0x30))(plVar6,local_458,1);
        ppvVar7 = (void **)(**(code **)(*plVar6 + 0x18))(plVar6);
        local_b18[0] = ppvVar7;
        cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x58))(param_1[0x20],param_2,local_968);
        if (cVar3 == '\0') {
          log_InlineLogERROR(&DAT_140c755b8,"IF_OK","m_pConsumer->GetItemInfo(idItem, itemInfo)",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
        }
        else {
          plVar6 = param_1[0x20];
          (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
          (**(code **)(*plVar6 + 0x98))(plVar6,param_4);
          uVar2 = local_af0;
          (**(code **)(*plVar6 + 0xb0))(plVar6,local_af0);
          (**(code **)(*plVar6 + 0xa8))(plVar6,uVar2);
          (**(code **)(*plVar6 + 0xa0))(plVar6,uVar2);
          param_3 = local_af0;
          uVar10 = (**(code **)(*plVar6 + 0x98))(plVar6,local_af0);
          tq::MyLogSave("gmlog/detain",
                        "%s(%u) be killed on map(%d) pos_x(%d) pos_y(%d) by %s(%u), impound item: [id=%u, type=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d, ransom=%d]"
                        ,uVar10,(ulonglong)param_3);
          param_1 = local_ae8;
          ppvVar7 = local_b18[0];
          param_4 = local_af8;
          param_2 = local_af4;
        }
        (**(code **)(*(longlong *)param_1[0x20] + 0x88))(param_1[0x20],param_3,param_2);
        cVar3 = (**(code **)(*(longlong *)param_1[0x20] + 0x18))(param_1[0x20],param_2);
        if (cVar3 == '\0') {
          log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","m_pConsumer->DetainItem(idItem)",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
          return;
        }
        local_a6c = 0;
        local_a68 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a60);
        local_a38 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a30);
        local_a08 = 0;
        local_a04 = 0;
        local_b18[0] = (void **)&local_9f0;
        local_9f0 = local_a70;
        local_9ec = local_a6c;
        local_9e8 = local_a68;
        local_9f8[0] = (uint)ppvVar7;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_9e0,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_a60);
        local_9b8 = local_a38;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_9b0,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_a30);
        local_988 = local_a08;
        local_984 = local_a04;
        plVar6 = FUN_140c65420((longlong *)param_1,local_8f8,local_9f8);
        local_b08 = (longlong *)*plVar6;
        local_b00 = (void **)plVar6[1];
        local_b18[0] = (void **)&local_9f0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_9b0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_9e0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a30);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_a60);
        plVar6 = local_b08;
        ppvVar11 = param_1[6];
        if ((local_b08 == (longlong *)0x0) || (local_b08 != *param_1)) {
          _invalid_parameter_noinfo();
        }
        ppvVar1 = local_b00;
        if (local_b00 == ppvVar11) {
          return;
        }
        if (plVar6 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar12 = 0;
        }
        else {
          lVar12 = *plVar6;
        }
        if (ppvVar1 == *(void ***)(lVar12 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        ppvVar11 = ppvVar1 + 4;
        *(uint *)ppvVar11 = (uint)ppvVar7;
        *(uint *)((longlong)ppvVar1 + 0x24) = param_2;
        *(uint *)(ppvVar1 + 5) = param_3;
        pcVar8 = (char *)(**(code **)(*(longlong *)param_1[0x20] + 0x98))(param_1[0x20],param_3);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(ppvVar1 + 6),pcVar8);
        *(int *)(ppvVar1 + 0xb) = param_4;
        pcVar8 = (char *)(**(code **)(*(longlong *)param_1[0x20] + 0x98))(param_1[0x20],param_4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(ppvVar1 + 0xc),pcVar8);
        *(int *)(ppvVar1 + 0x11) = local_ae0;
        *(undefined4 *)((longlong)ppvVar1 + 0x8c) = 0;
        FUN_140c65b10((longlong *)(param_1 + 8),(longlong *)&local_b08,(uint *)(ppvVar1 + 5));
        plVar6 = local_b08;
        local_b18[0] = param_1[0xe];
        if ((local_b08 == (longlong *)0x0) || (local_b08 != param_1[8])) {
          _invalid_parameter_noinfo();
        }
        if (local_b00 == local_b18[0]) {
          local_b18[0] = operator_new(8);
          if (local_b18[0] == (void **)0x0) {
            local_ad8[0] = (void **)0x0;
          }
          else {
            *local_b18[0] = local_ad8;
            local_ad8[0] = local_b18[0];
          }
          local_ac0 = (void *)0x0;
          local_ab8 = 0;
          local_ab0 = 0;
          local_aa8[0] = *(uint *)(ppvVar1 + 5);
          local_ae8 = local_b18[0];
          FUN_140c65c20(local_aa0,local_ad8);
          plVar6 = FUN_140c69450((longlong *)(param_1 + 8),local_980,local_aa8);
          local_b08 = (longlong *)*plVar6;
          local_b00 = (void **)plVar6[1];
          local_b18[0] = local_aa0;
          if (local_a88 != (void *)0x0) {
            operator_delete(local_a88);
          }
          local_a88 = (void *)0x0;
          local_a80 = 0;
          local_a78 = 0;
          operator_delete(local_aa0[0]);
          if (local_ac0 != (void *)0x0) {
            operator_delete(local_ac0);
          }
          local_ac0 = (void *)0x0;
          local_ab8 = 0;
          local_ab0 = 0;
          operator_delete(local_ad8[0]);
          plVar6 = local_b08;
        }
        ppvVar7 = local_b00;
        local_b18[0] = param_1[0xe];
        if ((plVar6 == (longlong *)0x0) || (plVar6 != param_1[8])) {
          _invalid_parameter_noinfo();
        }
        if (ppvVar7 == local_b18[0]) {
          log_InlineLogERROR(&DAT_140c755b8,"IF_OK","iterUserItem != m_mapTargetItem.end()",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
        }
        else {
          if (plVar6 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = 0;
          }
          else {
            lVar12 = *plVar6;
          }
          if (ppvVar7 == *(void ***)(lVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_140c66690((longlong *)(ppvVar7 + 4),(undefined4 *)ppvVar11);
        }
        plVar9 = FUN_140c65b10((longlong *)(param_1 + 0x10),(longlong *)local_b18,(uint *)(ppvVar1 + 0xb));
        plVar6 = (longlong *)*plVar9;
        local_b00 = (void **)plVar9[1];
        local_b18[0] = param_1[0x16];
        local_b08 = plVar6;
        if ((plVar6 == (longlong *)0x0) || (plVar6 != param_1[0x10])) {
          _invalid_parameter_noinfo();
        }
        if (local_b00 == local_b18[0]) {
          local_b18[0] = operator_new(8);
          if (local_b18[0] == (void **)0x0) {
            local_ad8[0] = (void **)0x0;
          }
          else {
            *local_b18[0] = local_ad8;
            local_ad8[0] = local_b18[0];
          }
          local_ac0 = (void *)0x0;
          local_ab8 = 0;
          local_ab0 = 0;
          local_aa8[0] = *(uint *)(ppvVar1 + 0xb);
          local_ae8 = local_b18[0];
          FUN_140c65c20(local_aa0,local_ad8);
          plVar6 = FUN_140c69450((longlong *)(param_1 + 0x10),local_980,local_aa8);
          local_b08 = (longlong *)*plVar6;
          local_b00 = (void **)plVar6[1];
          local_b18[0] = local_aa0;
          if (local_a88 != (void *)0x0) {
            operator_delete(local_a88);
          }
          local_a88 = (void *)0x0;
          local_a80 = 0;
          local_a78 = 0;
          operator_delete(local_aa0[0]);
          if (local_ac0 != (void *)0x0) {
            operator_delete(local_ac0);
          }
          local_ac0 = (void *)0x0;
          local_ab8 = 0;
          local_ab0 = 0;
          operator_delete(local_ad8[0]);
          plVar6 = local_b08;
        }
        ppvVar7 = local_b00;
        local_b18[0] = param_1[0x16];
        if ((plVar6 == (longlong *)0x0) || (plVar6 != param_1[0x10])) {
          _invalid_parameter_noinfo();
        }
        if (ppvVar7 == local_b18[0]) {
          log_InlineLogERROR(&DAT_140c755b8,"IF_OK","iterUserItem != m_mapHunterItem.end()",
                             "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
        }
        else {
          if (plVar6 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar12 = 0;
          }
          else {
            lVar12 = *plVar6;
          }
          if (ppvVar7 == *(void ***)(lVar12 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_140c66690((longlong *)(ppvVar7 + 4),(undefined4 *)ppvVar11);
        }
        (**(code **)(*(longlong *)param_1[0x20] + 0x110))(param_1[0x20],param_2,*(undefined4 *)(param_1 + 0x18));
        FUN_140c6ee50(local_868);
        cVar3 = (*(code *)**(undefined8 **)param_1[0x20])(param_1[0x20],param_2,local_8d8);
        if (cVar3 == '\0') {
          log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","bResult","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
          FUN_140c6eea0((undefined8 *)local_868);
          return;
        }
        uVar5 = (**(code **)(*(longlong *)param_1[0x20] + 8))(param_1[0x20],param_2);
        uVar10 = FUN_140c6ef00(local_868,local_8d8,uVar5,(undefined4 *)ppvVar11,0);
        if ((char)uVar10 != '\0') {
          (**(code **)(*(longlong *)param_1[0x20] + 0xf0))(param_1[0x20],param_3,local_868);
          (**(code **)(*(longlong *)param_1[0x20] + 0x108))(param_1[0x20],param_3,param_2);
        }
        uVar10 = FUN_140c6ef00(local_868,local_8d8,uVar5,(undefined4 *)ppvVar11,1);
        if ((char)uVar10 != '\0') {
          (**(code **)(*(longlong *)param_1[0x20] + 0xf0))(param_1[0x20],param_4,local_868);
          (**(code **)(*(longlong *)param_1[0x20] + 0x108))(param_1[0x20],param_4,param_2);
        }
        FUN_140c6eea0((undefined8 *)local_868);
        return;
      }
      log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","m_pConsumer->IsUserOnline(idTarget) && m_pConsumer->IsUserOnline(idHunter)",
                         "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp");
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6aef0(longlong *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  IStringManager *pIVar10;
  longlong *plVar11;
  ulonglong uVar12;
  char *pcVar13;
  longlong lVar14;
  rsize_t _DstSize;
  uint *_Dst;
  undefined1 auStackY_e08 [32];
  uint local_da8 [4];
  longlong *local_d98;
  uint *puStack_d90;
  uint *local_d88;
  uint local_d80;
  longlong *local_d78;
  longlong lStack_d70;
  undefined8 local_d68;
  undefined1 local_d58 [120];
  int local_ce0;
  CMsg local_c78 [1040];
  CMsg local_868 [1023];
  undefined1 local_469;
  CMsg local_458 [1023];
  undefined1 local_59;
  ulonglong local_48;
  
  local_d68 = 0xfffffffffffffffe;
  local_48 = DAT_140c7e400 ^ (ulonglong)auStackY_e08;
  local_da8[0] = param_3;
  local_d80 = param_2;
  if ((param_3 == 0) || (cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],param_3), cVar5 == '\0')) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else {
    FUN_140c65b10(param_1 + 8,(longlong *)&local_d78,local_da8);
    lVar9 = param_1[0xe];
    if ((local_d78 == (longlong *)0x0) || (local_d78 != (longlong *)param_1[8])) {
      _invalid_parameter_noinfo();
    }
    if (lStack_d70 != lVar9) {
      lVar9 = 0;
      if (local_d78 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar14 = lVar9;
      }
      else {
        lVar14 = *local_d78;
      }
      if (lStack_d70 == *(longlong *)(lVar14 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(uint **)(lStack_d70 + 0x40);
      if (puVar1 < *(uint **)(lStack_d70 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = *(uint **)(lStack_d70 + 0x38);
      if (*(uint **)(lStack_d70 + 0x40) < puVar2) {
        _invalid_parameter_noinfo();
      }
      local_d98 = *(longlong **)(lStack_d70 + 0x20);
      for (_Dst = puVar2; (_Dst != puVar1 && (*_Dst != param_2)); _Dst = _Dst + 1) {
      }
      puVar1 = *(uint **)(lStack_d70 + 0x40);
      puStack_d90 = puVar2;
      if (puVar1 < *(uint **)(lStack_d70 + 0x38)) {
        _invalid_parameter_noinfo();
      }
      plVar11 = local_d98;
      if ((local_d98 == (longlong *)0x0) || (local_d98 != *(longlong **)(lStack_d70 + 0x20))) {
        _invalid_parameter_noinfo();
      }
      if (_Dst != puVar1) {
        if (plVar11 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar14 = lVar9;
        }
        else {
          lVar14 = *plVar11;
        }
        if (*(uint **)(lVar14 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        FUN_140c65a40(param_1,(longlong *)&local_d98,_Dst);
        plVar11 = local_d98;
        local_d88 = (uint *)param_1[6];
        if ((local_d98 == (longlong *)0x0) || (local_d98 != (longlong *)*param_1)) {
          _invalid_parameter_noinfo();
        }
        puVar1 = puStack_d90;
        if (puStack_d90 != local_d88) {
          if (plVar11 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar9;
          }
          else {
            lVar14 = *plVar11;
          }
          if (puVar1 == *(uint **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (puVar1[10] == param_3) {
            iVar6 = tq::DateStamp(0);
            iVar6 = tq::DateStampDiff(puVar1[0x22],iVar6);
            if (iVar6 < 8) {
              cVar5 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],puVar1[9]);
              if ((((puVar1[0x23] != 0xfffffff6) && ((int)puVar1[0x23] < 1)) && (cVar5 != '\0')) && (local_ce0 == (int)param_1[0x18])) {
                local_d88 = (uint *)CONCAT44(local_d88._4_4_,puVar1[8]);
                local_da8[0] = puVar1[0x22];
                uVar7 = puVar1[0x16];
                uVar8 = FUN_140c672c0(param_1,param_3,'\0',(longlong *)&local_d98);
                if ((char)uVar8 == '\0') {
                  uVar7 = (**(code **)(*(longlong *)param_1[0x20] + 8))((longlong *)param_1[0x20],puVar1[9]);
                  lVar9 = (**(code **)(*(longlong *)param_1[0x20] + 0xb8))((longlong *)param_1[0x20],param_3);
                  if ((int)uVar7 <= lVar9) {
                    cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0xd0))((longlong *)param_1[0x20],param_3,1);
                    if (cVar5 == '\0') {
                      pIVar10 = theInstance();
                      lVar9 = *(longlong *)param_1[0x20];
                      uVar8 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_BAG_FULL");
                      (**(code **)(lVar9 + 0xf8))(param_1[0x20],param_3,uVar8);
                    }
                    else {
                      cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0xd8))((longlong *)param_1[0x20],param_3,puVar1[9]);
                      if ((cVar5 != '\0') &&
                         (cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0xc0))((longlong *)param_1[0x20],param_3,(longlong)(int)uVar7), cVar5 != '\0')) {
                        (**(code **)(*(longlong *)param_1[0x20] + 0xe0))((longlong *)param_1[0x20],0xd,param_3);
                        (**(code **)(*(longlong *)param_1[0x20] + 0x110))((longlong *)param_1[0x20],puVar1[9],param_3);
                        uVar3 = local_d80;
                        puVar1[0x23] = uVar7;
                        _snprintf((char *)local_458,0x400,"UPDATE cq_pk_item set bonus=%d WHERE id=%u LIMIT 1");
                        local_59 = 0;
                        plVar11 = (longlong *)InstanceGet();
                        (**(code **)(*plVar11 + 0x30))(plVar11,local_458,0,1);
                        FUN_140c6f1f0(local_c78);
                        uVar12 = FUN_140c6f270(local_c78,uVar3,0x20,puVar1[10],uVar7);
                        if ((char)uVar12 == '\0') {
                          log_InlineLogERROR(&DAT_140c755b8);
                        }
                        else {
                          (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_3,local_c78);
                        }
                        cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],puVar1[0x16]);
                        if (cVar5 != '\0') {
                          (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],puVar1[0x16],local_c78);
                          pIVar10 = theInstance();
                          (**(code **)(*(longlong *)param_1[0x20] + 0x98))((longlong *)param_1[0x20],param_3);
                          pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_HAS_EMONEY_BONUS");
                          _snprintf((char *)local_868,0x400,pcVar13);
                          local_469 = 0;
                          (**(code **)(*(longlong *)param_1[0x20] + 0xf8))((longlong *)param_1[0x20],puVar1[0x16],local_868);
                        }
                        pIVar10 = theInstance();
                        (**(code **)(*(longlong *)param_1[0x20] + 0x98))((longlong *)param_1[0x20],param_3);
                        pcVar13 = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_REDEEM_EQUIP");
                        _snprintf((char *)local_868,0x400,pcVar13);
                        local_469 = 0;
                        (**(code **)(*(longlong *)param_1[0x20] + 0x100))((longlong *)param_1[0x20],local_868);
                        cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0x58))((longlong *)param_1[0x20],puVar1[9],local_d58);
                        if (cVar5 != '\0') {
                          tq::MyLogSave("gmlog/detain",
                                        "%s(%u) redeem item: [id=%u, type=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d]")
                          ;
                        }
                        FUN_140c6f240((undefined8 *)local_c78);
                      }
                    }
                  }
                }
                else {
                  if (local_d78 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                    lVar14 = lVar9;
                  }
                  else {
                    lVar14 = *local_d78;
                  }
                  if (lStack_d70 == *(longlong *)(lVar14 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  lVar14 = *(longlong *)(lStack_d70 + 0x40) - (longlong)(_Dst + 1) >> 2;
                  if (0 < lVar14) {
                    _DstSize = lVar14 << 2;
                    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
                  }
                  *(longlong *)(lStack_d70 + 0x40) = *(longlong *)(lStack_d70 + 0x40) + -4;
                  if ((_Dst < *(uint **)(lStack_d70 + 0x38)) || (*(uint **)(lStack_d70 + 0x40) < _Dst)) {
                    _invalid_parameter_noinfo();
                  }
                  if (local_d78 == (longlong *)0x0) {
                    _invalid_parameter_noinfo();
                  }
                  else {
                    lVar9 = *local_d78;
                  }
                  if (lStack_d70 == *(longlong *)(lVar9 + 0x30)) {
                    _invalid_parameter_noinfo();
                  }
                  if ((*(longlong *)(lStack_d70 + 0x40) - *(longlong *)(lStack_d70 + 0x38) & 0xfffffffffffffffcU) == 0) {
                    FUN_140c668e0(param_1 + 8,&local_d98,(longlong *)&local_d78);
                  }
                  FUN_140c6f470(local_458);
                  uVar8 = FUN_140c6f4f0((longlong)local_458,0);
                  if ((char)uVar8 == '\0') {
                    FUN_140c6f4c0((undefined8 *)local_458);
                  }
                  else {
                    iVar6 = tq::DateStamp(0);
                    uVar3 = local_da8[0];
                    iVar6 = tq::DateStampDiff(local_da8[0],iVar6);
                    uVar4 = local_d88._0_4_;
                    lVar9 = FUN_140c6f520((longlong)local_458,local_d88._0_4_,iVar6,0,1);
                    if ((char)lVar9 == '\0') {
                      FUN_140c6f4c0((undefined8 *)local_458);
                    }
                    else {
                      (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_3,local_458);
                      cVar5 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],uVar7);
                      if (cVar5 != '\0') {
                        FUN_140c6f470(local_868);
                        uVar8 = FUN_140c6f4f0((longlong)local_868,1);
                        if ((char)uVar8 == '\0') {
                          FUN_140c6f4c0((undefined8 *)local_868);
                          FUN_140c6f4c0((undefined8 *)local_458);
                          return;
                        }
                        iVar6 = tq::DateStamp(0);
                        iVar6 = tq::DateStampDiff(uVar3,iVar6);
                        lVar9 = FUN_140c6f520((longlong)local_868,uVar4,iVar6,0,1);
                        if ((char)lVar9 == '\0') {
                          FUN_140c6f4c0((undefined8 *)local_868);
                          FUN_140c6f4c0((undefined8 *)local_458);
                          return;
                        }
                        (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],uVar7,local_868);
                        FUN_140c6f4c0((undefined8 *)local_868);
                      }
                      FUN_140c6f4c0((undefined8 *)local_458);
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




void FUN_140c6b7e0(longlong *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  rsize_t rVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  char cVar19;
  int *piVar20;
  uint local_res10 [2];
  longlong *local_8d8;
  int *piStack_8d0;
  longlong *local_8c8 [3];
  int *local_8b0;
  int *local_8a8;
  undefined8 local_8a0;
  longlong *local_898;
  int *piStack_890;
  uint *local_888;
  longlong *local_878;
  longlong lStack_870;
  uint *local_868;
  undefined8 local_860;
  CMsg local_858 [1040];
  CMsg local_448 [1040];
  
  local_860 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else if (param_3 == 0) {
    FUN_140c65b10(param_1 + 8,(longlong *)&local_898,local_res10);
    plVar5 = local_898;
    lVar11 = param_1[0xe];
    if ((local_898 == (longlong *)0x0) || (local_898 != (longlong *)param_1[8])) {
      _invalid_parameter_noinfo();
    }
    piVar6 = piStack_890;
    if (piStack_890 != (int *)lVar11) {
      plVar16 = (longlong *)0x0;
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar17 = plVar16;
      }
      else {
        plVar17 = (longlong *)*plVar5;
      }
      if (piVar6 == (int *)plVar17[6]) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong *)((longlong)piVar6 + 0x40) - *(longlong *)((longlong)piVar6 + 0x38) & 0xfffffffffffffffcU) != 0) {
        local_888 = operator_new(8);
        local_8c8[0] = plVar16;
        if (local_888 != (uint *)0x0) {
          *(longlong ***)local_888 = local_8c8;
          local_8c8[0] = (longlong *)local_888;
        }
        local_8b0 = (int *)0x0;
        local_8a8 = (int *)0x0;
        local_8a0 = 0;
        FUN_140c6f470(local_858);
        uVar10 = FUN_140c6f4f0((longlong)local_858,0);
        if ((char)uVar10 != '\0') {
          puVar15 = *(uint **)((longlong)piVar6 + 0x38);
          if (*(uint **)((longlong)piVar6 + 0x40) < puVar15) {
            _invalid_parameter_noinfo();
          }
          puVar3 = *(undefined8 **)((longlong)piVar6 + 0x20);
          puVar14 = *(uint **)((longlong)piVar6 + 0x40);
          local_888 = puVar14;
          if (puVar14 < *(uint **)((longlong)piVar6 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          local_868 = *(uint **)((longlong)piVar6 + 0x20);
          do {
            if ((puVar3 == (undefined8 *)0x0) || ((uint *)puVar3 != local_868)) {
              _invalid_parameter_noinfo();
            }
            if (puVar15 == puVar14) goto LAB_140c6c380;
            if (puVar3 == (undefined8 *)0x0) {
              _invalid_parameter_noinfo();
              plVar17 = plVar16;
            }
            else {
              plVar17 = (longlong *)*puVar3;
            }
            if ((uint *)plVar17[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            FUN_140c65a40(param_1,(longlong *)&local_8d8,puVar15);
            plVar17 = local_8d8;
            lVar11 = param_1[6];
            if ((local_8d8 == (longlong *)0x0) || (local_8d8 != (longlong *)*param_1)) {
              _invalid_parameter_noinfo();
            }
            piVar20 = piStack_8d0;
            if (piStack_8d0 != (int *)lVar11) {
              if (plVar17 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar16;
              }
              else {
                plVar17 = (longlong *)*plVar17;
              }
              if (piVar20 == (int *)plVar17[6]) {
                _invalid_parameter_noinfo();
              }
              cVar19 = '\x01';
              uVar1 = *(undefined4 *)((longlong)piVar20 + 0x20);
              iVar9 = *(int *)((longlong)piVar20 + 0x88);
              uVar2 = *(undefined4 *)((longlong)piVar20 + 0x58);
              local_878 = local_8d8;
              lStack_870 = (longlong)piStack_8d0;
              uVar10 = FUN_140c672c0(param_1,local_res10[0],'\0',(longlong *)&local_878);
              if ((char)uVar10 != '\0') {
                cVar19 = '\0';
                if (puVar3 == (undefined8 *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar17 = plVar16;
                }
                else {
                  plVar17 = (longlong *)*puVar3;
                }
                if ((uint *)plVar17[4] <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                FUN_140c66690((longlong *)local_8c8,puVar15);
              }
              if (*(uint *)((longlong)piVar20 + 0x28) == local_res10[0]) {
                iVar8 = tq::DateStamp(0);
                iVar8 = tq::DateStampDiff(iVar9,iVar8);
                lVar11 = FUN_140c6f520((longlong)local_858,uVar1,iVar8,cVar19,1);
                if ((char)lVar11 == '\0') {
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],local_res10[0],local_858);
                  FUN_140c6f4f0((longlong)local_858,0);
                }
                cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],uVar2);
                if ((cVar7 != '\0') && (cVar19 == '\0')) {
                  FUN_140c6f470(local_448);
                  uVar10 = FUN_140c6f4f0((longlong)local_448,1);
                  if ((char)uVar10 == '\0') {
                    FUN_140c6f4c0((undefined8 *)local_448);
                    goto LAB_140c6c380;
                  }
                  iVar8 = tq::DateStamp(0);
                  iVar9 = tq::DateStampDiff(iVar9,iVar8);
                  lVar11 = FUN_140c6f520((longlong)local_448,uVar1,iVar9,0,1);
                  if ((char)lVar11 == '\0') {
                    FUN_140c6f4c0((undefined8 *)local_448);
LAB_140c6c380:
                    piVar20 = local_8b0;
                    if (local_8a8 < local_8b0) {
                      _invalid_parameter_noinfo();
                    }
                    plVar17 = local_8c8[0];
                    local_8d8 = local_8c8[0];
                    piStack_8d0 = piVar20;
                    do {
                      piVar4 = local_8a8;
                      if (local_8a8 < local_8b0) {
                        _invalid_parameter_noinfo();
                      }
                      if ((plVar17 == (longlong *)0x0) || (plVar17 != local_8c8[0])) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar20 == piVar4) {
                        if (plVar5 == (longlong *)0x0) {
                          _invalid_parameter_noinfo();
                        }
                        else {
                          plVar16 = (longlong *)*plVar5;
                        }
                        if (piVar6 == (int *)plVar16[6]) {
                          _invalid_parameter_noinfo();
                        }
                        if ((*(longlong *)((longlong)piVar6 + 0x40) - *(longlong *)((longlong)piVar6 + 0x38) & 0xfffffffffffffffcU) == 0) {
                          local_878 = local_898;
                          lStack_870 = (longlong)piStack_890;
                          FUN_140c668e0(param_1 + 8,&local_8d8,(longlong *)&local_878);
                        }
                        (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],local_res10[0],local_858);
                        FUN_140c6f4c0((undefined8 *)local_858);
                        if (local_8b0 != (int *)0x0) {
                          operator_delete(local_8b0);
                        }
                        local_8b0 = (int *)0x0;
                        local_8a8 = (int *)0x0;
                        local_8a0 = 0;
                        operator_delete(local_8c8[0]);
                        return;
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar4 = *(int **)((longlong)piVar6 + 0x40);
                      if (piVar4 < *(int **)((longlong)piVar6 + 0x38)) {
                        _invalid_parameter_noinfo();
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar13 = *(int **)((longlong)piVar6 + 0x38);
                      if (*(int **)((longlong)piVar6 + 0x40) < piVar13) {
                        _invalid_parameter_noinfo();
                      }
                      lVar11 = *(longlong *)((longlong)piVar6 + 0x20);
                      if (plVar17 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar17;
                      }
                      if ((int *)plVar18[4] <= piVar20) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar13 != piVar4) {
                        do {
                          if (*piVar13 == *piVar20) break;
                          piVar13 = piVar13 + 1;
                        } while (piVar13 != piVar4);
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar4 = *(int **)((longlong)piVar6 + 0x40);
                      if (piVar4 < *(int **)((longlong)piVar6 + 0x38)) {
                        _invalid_parameter_noinfo();
                      }
                      if ((lVar11 == 0) || (lVar11 != *(longlong *)((longlong)piVar6 + 0x20))) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar13 != piVar4) {
                        if (plVar5 == (longlong *)0x0) {
                          _invalid_parameter_noinfo();
                          plVar18 = plVar16;
                        }
                        else {
                          plVar18 = (longlong *)*plVar5;
                        }
                        if (piVar6 == (int *)plVar18[6]) {
                          _invalid_parameter_noinfo();
                        }
                        lVar11 = *(longlong *)((longlong)piVar6 + 0x40) - (longlong)(piVar13 + 1) >> 2;
                        if (0 < lVar11) {
                          rVar12 = lVar11 << 2;
                          memmove_s(piVar13,rVar12,piVar13 + 1,rVar12);
                        }
                        *(longlong *)((longlong)piVar6 + 0x40) = *(longlong *)((longlong)piVar6 + 0x40) + -4;
                        if ((piVar13 < *(int **)((longlong)piVar6 + 0x38)) || (*(int **)((longlong)piVar6 + 0x40) < piVar13)) {
                          _invalid_parameter_noinfo();
                        }
                      }
                      if (plVar17 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar17;
                      }
                      if ((int *)plVar18[4] <= piVar20) {
                        _invalid_parameter_noinfo();
                      }
                      piVar20 = piVar20 + 1;
                    } while( true );
                  }
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],uVar2,local_448);
                  FUN_140c6f4c0((undefined8 *)local_448);
                }
              }
            }
            if (puVar3 == (undefined8 *)0x0) {
              _invalid_parameter_noinfo();
              plVar17 = plVar16;
            }
            else {
              plVar17 = (longlong *)*puVar3;
            }
            if ((uint *)plVar17[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            puVar15 = puVar15 + 1;
            puVar14 = local_888;
          } while( true );
        }
        log_InlineLogERROR(&DAT_140c755b8);
        FUN_140c6f4c0((undefined8 *)local_858);
        if (local_8b0 != (int *)0x0) {
          operator_delete(local_8b0);
        }
        local_8b0 = (int *)0x0;
        local_8a8 = (int *)0x0;
        local_8a0 = 0;
        operator_delete(local_8c8[0]);
      }
    }
  }
  else if (param_3 == 1) {
    FUN_140c65b10(param_1 + 0x10,(longlong *)&local_8d8,local_res10);
    plVar5 = local_8d8;
    lVar11 = param_1[0x16];
    if ((local_8d8 == (longlong *)0x0) || (local_8d8 != (longlong *)param_1[0x10])) {
      _invalid_parameter_noinfo();
    }
    piVar6 = piStack_8d0;
    if (piStack_8d0 != (int *)lVar11) {
      plVar16 = (longlong *)0x0;
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar17 = plVar16;
      }
      else {
        plVar17 = (longlong *)*plVar5;
      }
      if (piVar6 == (int *)plVar17[6]) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong *)((longlong)piVar6 + 0x40) - *(longlong *)((longlong)piVar6 + 0x38) & 0xfffffffffffffffcU) != 0) {
        local_888 = operator_new(8);
        local_8c8[0] = plVar16;
        if (local_888 != (uint *)0x0) {
          *(longlong ***)local_888 = local_8c8;
          local_8c8[0] = (longlong *)local_888;
        }
        local_8b0 = (int *)0x0;
        local_8a8 = (int *)0x0;
        local_8a0 = 0;
        FUN_140c6f470(local_448);
        uVar10 = FUN_140c6f4f0((longlong)local_448,1);
        if ((char)uVar10 != '\0') {
          puVar15 = *(uint **)((longlong)piVar6 + 0x38);
          if (*(uint **)((longlong)piVar6 + 0x40) < puVar15) {
            _invalid_parameter_noinfo();
          }
          puVar3 = *(undefined8 **)((longlong)piVar6 + 0x20);
          puVar14 = *(uint **)((longlong)piVar6 + 0x40);
          local_868 = puVar14;
          if (puVar14 < *(uint **)((longlong)piVar6 + 0x38)) {
            _invalid_parameter_noinfo();
          }
          local_888 = *(uint **)((longlong)piVar6 + 0x20);
          do {
            if ((puVar3 == (undefined8 *)0x0) || ((uint *)puVar3 != local_888)) {
              _invalid_parameter_noinfo();
            }
            if (puVar15 == puVar14) goto LAB_140c6bca2;
            if (puVar3 == (undefined8 *)0x0) {
              _invalid_parameter_noinfo();
              plVar17 = plVar16;
            }
            else {
              plVar17 = (longlong *)*puVar3;
            }
            if ((uint *)plVar17[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            FUN_140c65a40(param_1,(longlong *)&local_898,puVar15);
            plVar17 = local_898;
            lVar11 = param_1[6];
            if ((local_898 == (longlong *)0x0) || (local_898 != (longlong *)*param_1)) {
              _invalid_parameter_noinfo();
            }
            piVar20 = piStack_890;
            if (piStack_890 != (int *)lVar11) {
              if (plVar17 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                plVar17 = plVar16;
              }
              else {
                plVar17 = (longlong *)*plVar17;
              }
              if (piVar20 == (int *)plVar17[6]) {
                _invalid_parameter_noinfo();
              }
              cVar19 = '\x01';
              uVar1 = *(undefined4 *)((longlong)piVar20 + 0x20);
              iVar9 = *(int *)((longlong)piVar20 + 0x88);
              uVar2 = *(undefined4 *)((longlong)piVar20 + 0x28);
              local_878 = local_898;
              lStack_870 = (longlong)piStack_890;
              uVar10 = FUN_140c672c0(param_1,local_res10[0],'\x01',(longlong *)&local_878);
              if ((char)uVar10 != '\0') {
                cVar19 = '\0';
                if (puVar3 == (undefined8 *)0x0) {
                  _invalid_parameter_noinfo();
                  plVar17 = plVar16;
                }
                else {
                  plVar17 = (longlong *)*puVar3;
                }
                if ((uint *)plVar17[4] <= puVar15) {
                  _invalid_parameter_noinfo();
                }
                FUN_140c66690((longlong *)local_8c8,puVar15);
              }
              if (*(uint *)((longlong)piVar20 + 0x58) == local_res10[0]) {
                iVar8 = tq::DateStamp(0);
                iVar8 = tq::DateStampDiff(iVar9,iVar8);
                lVar11 = FUN_140c6f520((longlong)local_448,uVar1,iVar8,cVar19,1);
                if ((char)lVar11 == '\0') {
                  log_InlineLogERROR(&DAT_140c755b8);
                  goto LAB_140c6bca2;
                }
                cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))();
                if ((cVar7 != '\0') && (cVar19 == '\0')) {
                  FUN_140c6f470(local_858);
                  uVar10 = FUN_140c6f4f0((longlong)local_858,0);
                  if ((char)uVar10 == '\0') {
                    FUN_140c6f4c0((undefined8 *)local_858);
                    goto LAB_140c6bca2;
                  }
                  iVar8 = tq::DateStamp(0);
                  iVar9 = tq::DateStampDiff(iVar9,iVar8);
                  lVar11 = FUN_140c6f520((longlong)local_858,uVar1,iVar9,0,1);
                  if ((char)lVar11 == '\0') {
                    FUN_140c6f4c0((undefined8 *)local_858);
LAB_140c6bca2:
                    piVar20 = local_8b0;
                    if (local_8a8 < local_8b0) {
                      _invalid_parameter_noinfo();
                    }
                    plVar17 = local_8c8[0];
                    local_898 = local_8c8[0];
                    piStack_890 = piVar20;
                    do {
                      piVar4 = local_8a8;
                      if (local_8a8 < local_8b0) {
                        _invalid_parameter_noinfo();
                      }
                      if ((plVar17 == (longlong *)0x0) || (plVar17 != local_8c8[0])) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar20 == piVar4) {
                        if (plVar5 == (longlong *)0x0) {
                          _invalid_parameter_noinfo();
                        }
                        else {
                          plVar16 = (longlong *)*plVar5;
                        }
                        if (piVar6 == (int *)plVar16[6]) {
                          _invalid_parameter_noinfo();
                        }
                        if ((*(longlong *)((longlong)piVar6 + 0x40) - *(longlong *)((longlong)piVar6 + 0x38) & 0xfffffffffffffffcU) == 0) {
                          local_878 = local_8d8;
                          lStack_870 = (longlong)piStack_8d0;
                          FUN_140c668e0(param_1 + 0x10,&local_8d8,(longlong *)&local_878);
                        }
                        (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],local_res10[0],local_448);
                        FUN_140c6f4c0((undefined8 *)local_448);
                        if (local_8b0 != (int *)0x0) {
                          operator_delete(local_8b0);
                        }
                        local_8b0 = (int *)0x0;
                        local_8a8 = (int *)0x0;
                        local_8a0 = 0;
                        operator_delete(local_8c8[0]);
                        return;
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar4 = *(int **)((longlong)piVar6 + 0x40);
                      if (piVar4 < *(int **)((longlong)piVar6 + 0x38)) {
                        _invalid_parameter_noinfo();
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar13 = *(int **)((longlong)piVar6 + 0x38);
                      if (*(int **)((longlong)piVar6 + 0x40) < piVar13) {
                        _invalid_parameter_noinfo();
                      }
                      lVar11 = *(longlong *)((longlong)piVar6 + 0x20);
                      if (plVar17 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar17;
                      }
                      if ((int *)plVar18[4] <= piVar20) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar13 != piVar4) {
                        do {
                          if (*piVar13 == *piVar20) break;
                          piVar13 = piVar13 + 1;
                        } while (piVar13 != piVar4);
                      }
                      if (plVar5 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar5;
                      }
                      if (piVar6 == (int *)plVar18[6]) {
                        _invalid_parameter_noinfo();
                      }
                      piVar4 = *(int **)((longlong)piVar6 + 0x40);
                      if (piVar4 < *(int **)((longlong)piVar6 + 0x38)) {
                        _invalid_parameter_noinfo();
                      }
                      if ((lVar11 == 0) || (lVar11 != *(longlong *)((longlong)piVar6 + 0x20))) {
                        _invalid_parameter_noinfo();
                      }
                      if (piVar13 != piVar4) {
                        if (plVar5 == (longlong *)0x0) {
                          _invalid_parameter_noinfo();
                          plVar18 = plVar16;
                        }
                        else {
                          plVar18 = (longlong *)*plVar5;
                        }
                        if (piVar6 == (int *)plVar18[6]) {
                          _invalid_parameter_noinfo();
                        }
                        lVar11 = *(longlong *)((longlong)piVar6 + 0x40) - (longlong)(piVar13 + 1) >> 2;
                        if (0 < lVar11) {
                          rVar12 = lVar11 << 2;
                          memmove_s(piVar13,rVar12,piVar13 + 1,rVar12);
                        }
                        *(longlong *)((longlong)piVar6 + 0x40) = *(longlong *)((longlong)piVar6 + 0x40) + -4;
                        if ((piVar13 < *(int **)((longlong)piVar6 + 0x38)) || (*(int **)((longlong)piVar6 + 0x40) < piVar13)) {
                          _invalid_parameter_noinfo();
                        }
                      }
                      if (plVar17 == (longlong *)0x0) {
                        _invalid_parameter_noinfo();
                        plVar18 = plVar16;
                      }
                      else {
                        plVar18 = (longlong *)*plVar17;
                      }
                      if ((int *)plVar18[4] <= piVar20) {
                        _invalid_parameter_noinfo();
                      }
                      piVar20 = piVar20 + 1;
                    } while( true );
                  }
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],uVar2,local_858);
                  FUN_140c6f4c0((undefined8 *)local_858);
                }
              }
            }
            if (puVar3 == (undefined8 *)0x0) {
              _invalid_parameter_noinfo();
              plVar17 = plVar16;
            }
            else {
              plVar17 = (longlong *)*puVar3;
            }
            if ((uint *)plVar17[4] <= puVar15) {
              _invalid_parameter_noinfo();
            }
            puVar15 = puVar15 + 1;
            puVar14 = local_868;
          } while( true );
        }
        log_InlineLogERROR(&DAT_140c755b8);
        FUN_140c6f4c0((undefined8 *)local_448);
        if (local_8b0 != (int *)0x0) {
          operator_delete(local_8b0);
        }
        local_8b0 = (int *)0x0;
        local_8a8 = (int *)0x0;
        local_8a0 = 0;
        operator_delete(local_8c8[0]);
      }
    }
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6c630(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  rsize_t _DstSize;
  uint *_Dst;
  longlong *plVar8;
  undefined1 auStack_588 [32];
  undefined4 local_568;
  uint local_558 [4];
  longlong *local_548;
  longlong lStack_540;
  longlong *local_538;
  longlong lStack_530;
  longlong *local_528;
  longlong lStack_520;
  longlong *local_518;
  longlong *local_508;
  uint *puStack_500;
  longlong *local_4f8;
  uint *puStack_4f0;
  undefined8 local_4e8 [2];
  longlong *local_4d8;
  longlong lStack_4d0;
  undefined8 local_4c8 [2];
  undefined1 local_4b8 [8];
  int local_4b0;
  char local_448 [1023];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_140c7e400 ^ (ulonglong)auStack_588;
  local_558[0] = param_2;
  if ((param_2 == 0) || (cVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))(), cVar4 == '\0')) {
    local_568 = 0x335;
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else {
    plVar8 = param_1 + 8;
    local_518 = plVar8;
    FUN_140c65b10(plVar8,(longlong *)&local_538,local_558);
    plVar6 = local_538;
    lVar7 = param_1[0xe];
    if ((local_538 == (longlong *)0x0) || (local_538 != (longlong *)*plVar8)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = lStack_530;
    if (lStack_530 != lVar7) {
      if (plVar6 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar6;
      }
      if (lVar3 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      _Dst = *(uint **)(lVar3 + 0x38);
      if (((longlong)*(uint **)(lVar3 + 0x40) - (longlong)_Dst & 0xfffffffffffffffcU) != 0) {
        if (*(uint **)(lVar3 + 0x40) < _Dst) {
          _invalid_parameter_noinfo();
        }
        plVar8 = *(longlong **)(lVar3 + 0x20);
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                puVar1 = *(uint **)(lVar3 + 0x40);
                if (puVar1 < *(uint **)(lVar3 + 0x38)) {
                  _invalid_parameter_noinfo();
                }
                if ((plVar8 == (longlong *)0x0) || (plVar8 != *(longlong **)(lVar3 + 0x20))) {
                  _invalid_parameter_noinfo();
                }
                if (_Dst == puVar1) {
                  if ((*(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38) & 0xfffffffffffffffcU) != 0) {
                    return;
                  }
                  local_528 = local_538;
                  lStack_520 = lStack_530;
                  FUN_140c668e0(local_518,local_4e8,(longlong *)&local_528);
                  return;
                }
                if (plVar8 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar7 = 0;
                }
                else {
                  lVar7 = *plVar8;
                }
                if (*(uint **)(lVar7 + 0x20) <= _Dst) {
                  _invalid_parameter_noinfo();
                }
                FUN_140c65a40(param_1,(longlong *)&local_548,_Dst);
                plVar6 = local_548;
                lVar7 = param_1[6];
                if ((local_548 == (longlong *)0x0) || (local_548 != (longlong *)*param_1)) {
                  _invalid_parameter_noinfo();
                }
                lVar2 = lStack_540;
                if (lStack_540 != lVar7) break;
                if (plVar8 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar7 = 0;
                }
                else {
                  lVar7 = *plVar8;
                }
                if (*(uint **)(lVar7 + 0x20) <= _Dst) {
                  _invalid_parameter_noinfo();
                }
                _Dst = _Dst + 1;
              }
              if (plVar6 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar7 = 0;
              }
              else {
                lVar7 = *plVar6;
              }
              if (lVar2 == *(longlong *)(lVar7 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              if (*(uint *)(lVar2 + 0x28) == param_2) break;
              if (plVar8 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar7 = 0;
              }
              else {
                lVar7 = *plVar8;
              }
              if (*(uint **)(lVar7 + 0x20) <= _Dst) {
                _invalid_parameter_noinfo();
              }
              _Dst = _Dst + 1;
            }
            plVar6 = (longlong *)InstanceGet();
            iVar5 = tq::DateStamp(0);
            iVar5 = tq::DateStampDiff(*(int *)(lVar2 + 0x88),iVar5);
            if (7 < iVar5) break;
LAB_140c6c9a1:
            if (plVar8 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar7 = 0;
            }
            else {
              lVar7 = *plVar8;
            }
            if (*(uint **)(lVar7 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            _Dst = _Dst + 1;
          }
          cVar4 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],*(undefined4 *)(lVar2 + 0x24),local_4b8);
          if (*(int *)(lVar2 + 0x8c) != -10) {
            if (((*(int *)(lVar2 + 0x8c) == 0) && (cVar4 != '\0')) && (local_4b0 == (int)param_1[0x18])) {
              cVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0x20))((longlong *)param_1[0x20],*(undefined4 *)(lVar2 + 0x24));
              if (((cVar4 != '\0') ||
                  (cVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0x28))((longlong *)param_1[0x20],*(undefined4 *)(lVar2 + 0x24)), cVar4 == '\0')) ||
                 (cVar4 = (**(code **)(*(longlong *)param_1[0x20] + 0x30))((longlong *)param_1[0x20],*(undefined4 *)(lVar2 + 0x24)), cVar4 != '\0')) {
                FUN_140c670c0(param_1,param_1 + 0x10,*(int *)(lVar2 + 0x20),*(uint *)(lVar2 + 0x58));
                _snprintf(local_448,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
                local_49 = 0;
                (**(code **)(*plVar6 + 0x30))(plVar6,local_448,0,1);
                (**(code **)(*(longlong *)param_1[0x20] + 0x38))((longlong *)param_1[0x20],*(undefined4 *)(lVar2 + 0x24),1);
                local_528 = local_548;
                lStack_520 = lStack_540;
                FUN_140c65530(param_1,local_4e8,(longlong *)&local_528);
                goto LAB_140c6ca44;
              }
              *(undefined4 *)(lVar2 + 0x8c) = 0xffffffff;
              _snprintf(local_448,0x400,"UPDATE cq_pk_item set bonus=-1 WHERE id=%u LIMIT 1");
              local_49 = 0;
              (**(code **)(*plVar6 + 0x30))(plVar6,local_448,0,1);
            }
            goto LAB_140c6c9a1;
          }
          FUN_140c670c0(param_1,param_1 + 0x10,*(int *)(lVar2 + 0x20),*(uint *)(lVar2 + 0x58));
          _snprintf(local_448,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
          local_49 = 0;
          (**(code **)(*plVar6 + 0x30))(plVar6,local_448,0,1);
          local_4d8 = local_548;
          lStack_4d0 = lStack_540;
          FUN_140c65530(param_1,local_4c8,(longlong *)&local_4d8);
LAB_140c6ca44:
          lVar7 = *(longlong *)(lVar3 + 0x40) - (longlong)(_Dst + 1) >> 2;
          if (0 < lVar7) {
            _DstSize = lVar7 << 2;
            memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
          }
          *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + -4;
          if ((_Dst < *(uint **)(lVar3 + 0x38)) || (*(uint **)(lVar3 + 0x40) < _Dst)) {
            _invalid_parameter_noinfo();
          }
          plVar8 = *(longlong **)(lVar3 + 0x20);
          local_508 = plVar8;
          puStack_500 = _Dst;
          local_4f8 = plVar8;
          puStack_4f0 = _Dst;
        } while( true );
      }
    }
  }
  return;
}




/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c6cb80(longlong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  IStringManager *pIVar11;
  char *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  rsize_t rVar15;
  uint uVar16;
  uint *_Dst;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStackY_1228 [32];
  longlong *local_11b8;
  uint *puStack_11b0;
  uint local_11a8;
  uint local_11a4 [3];
  longlong *local_1198;
  uint *puStack_1190;
  longlong *local_1188 [2];
  undefined8 local_1178;
  undefined1 local_1168 [120];
  int local_10f0;
  CMsg local_1088 [1040];
  CMsg local_c78 [1023];
  undefined1 local_879;
  CMsg local_868 [1023];
  undefined1 local_469;
  char local_458 [1023];
  undefined1 local_59;
  ulonglong local_58;
  
  local_1178 = 0xfffffffffffffffe;
  local_58 = DAT_140c7e400 ^ (ulonglong)auStackY_1228;
  local_11a8 = param_2;
  local_11a4[0] = param_3;
  if ((param_3 == 0) || (cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],param_3), cVar7 == '\0')) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else {
    FUN_140c65b10(param_1 + 0x10,(longlong *)&local_1198,local_11a4);
    plVar18 = local_1198;
    puVar2 = (uint *)param_1[0x16];
    if ((local_1198 == (longlong *)0x0) || (local_1198 != (longlong *)param_1[0x10])) {
      _invalid_parameter_noinfo();
    }
    puVar6 = puStack_1190;
    if (puStack_1190 != puVar2) {
      lVar14 = 0;
      if (plVar18 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar17 = lVar14;
      }
      else {
        lVar17 = *plVar18;
      }
      if (puVar6 == *(uint **)(lVar17 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = *(uint **)(puVar6 + 0x10);
      if (puVar2 < *(uint **)(puVar6 + 0xe)) {
        _invalid_parameter_noinfo();
      }
      puVar3 = *(uint **)(puVar6 + 0xe);
      if (*(uint **)(puVar6 + 0x10) < puVar3) {
        _invalid_parameter_noinfo();
      }
      local_11b8 = *(longlong **)(puVar6 + 8);
      for (_Dst = puVar3; (_Dst != puVar2 && (*_Dst != param_2)); _Dst = _Dst + 1) {
      }
      puVar2 = *(uint **)(puVar6 + 0x10);
      puStack_11b0 = puVar3;
      if (puVar2 < *(uint **)(puVar6 + 0xe)) {
        _invalid_parameter_noinfo();
      }
      plVar9 = local_11b8;
      if ((local_11b8 == (longlong *)0x0) || (local_11b8 != *(longlong **)(puVar6 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (_Dst != puVar2) {
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar14 = *plVar9;
        }
        if (*(uint **)(lVar14 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        FUN_140c65a40(param_1,(longlong *)&local_11b8,_Dst);
        plVar9 = local_11b8;
        puVar2 = (uint *)param_1[6];
        if ((local_11b8 == (longlong *)0x0) || (local_11b8 != (longlong *)*param_1)) {
          _invalid_parameter_noinfo();
        }
        puVar3 = puStack_11b0;
        if (puStack_11b0 != puVar2) {
          if (plVar9 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = 0;
          }
          else {
            lVar14 = *plVar9;
          }
          if (puVar3 == *(uint **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)InstanceGet();
          if (puVar3[0x16] == param_3) {
            local_1188[0] = plVar9;
            if ((int)puVar3[0x23] < 1) {
              iVar8 = tq::DateStamp(0);
              iVar8 = tq::DateStampDiff(puVar3[0x22],iVar8);
              if (7 < iVar8) {
                cVar7 = (*(code *)**(undefined8 **)param_1[0x20])((undefined8 *)param_1[0x20],puVar3[9]);
                puVar2 = puStack_11b0;
                plVar9 = local_11b8;
                if (cVar7 == '\0') {
                  log_InlineLogERROR(&DAT_140c755b8);
                }
                else {
                  uVar16 = puVar3[8];
                  local_11a4[0] = puVar3[0x22];
                  uVar1 = puVar3[10];
                  uVar13 = FUN_140c672c0(param_1,param_3,'\0',(longlong *)&local_11b8);
                  if ((char)uVar13 == '\0') {
                    if (((((local_10f0 == (int)param_1[0x18]) &&
                          (cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x20))((longlong *)param_1[0x20],puVar3[9]), cVar7 == '\0')) &&
                         (cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x28))((longlong *)param_1[0x20],puVar3[9]), cVar7 != '\0')) &&
                        ((cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x30))((longlong *)param_1[0x20],puVar3[9]), cVar7 == '\0' &&
                         ((int)puVar3[0x23] < 1)))) && (puVar3[0x23] != 0xfffffff6)) {
                      cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0xd0))((longlong *)param_1[0x20],param_3,1);
                      if (cVar7 == '\0') {
                        pIVar11 = theInstance();
                        lVar14 = *(longlong *)param_1[0x20];
                        uVar13 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_BAG_FULL");
                        (**(code **)(lVar14 + 0xf8))(param_1[0x20],param_3,uVar13);
                      }
                      else {
                        bVar4 = false;
                        cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x40))((longlong *)param_1[0x20],puVar3[9],2);
                        if ((cVar7 != '\0') ||
                           (cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x40))((longlong *)param_1[0x20],puVar3[9],1), plVar18 = local_1188[0],
                           cVar7 != '\0')) {
                          (**(code **)(*(longlong *)param_1[0x20] + 0x48))((longlong *)param_1[0x20],puVar3[9]);
                          _snprintf(local_458,0x400,"DELETE FROM GhostContract WHERE Item_id=%u AND owner_id=%u LIMIT 1");
                          plVar18 = local_1188[0];
                          local_59 = 0;
                          (**(code **)(*local_1188[0] + 0x30))(local_1188[0],local_458,0,1);
                        }
                        cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0xd8))((longlong *)param_1[0x20],param_3,puVar3[9]);
                        if (cVar7 != '\0') {
                          (**(code **)(*(longlong *)param_1[0x20] + 0x110))((longlong *)param_1[0x20],puVar3[9],param_3);
                          cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x58))((longlong *)param_1[0x20],puVar3[9],local_1168);
                          if (cVar7 != '\0') {
                            tq::MyLogSave("gmlog/detain",
                                          "PK_item hunter=%s(%u) target=%s(%u) item: [id=%u, type=%u, addition_level=%d, gem1=%d, gem2=%d, redue_dmg=%d, add_life=%d, anti_monster=%d]"
                                         );
                          }
                          uVar16 = local_11a8;
                          if (puVar3[0x23] == 0) {
                            puVar3[0x23] = 0xfffffff6;
                            _snprintf(local_458,0x400,"UPDATE cq_pk_item set bonus=-10 WHERE id=%u LIMIT 1");
                            local_59 = 0;
                            (**(code **)(*plVar18 + 0x30))(plVar18,local_458,0,1);
                          }
                          else if (puVar3[0x23] == 0xffffffff) {
                            lVar14 = *(longlong *)(puVar6 + 0x10) - (longlong)(_Dst + 1) >> 2;
                            if (0 < lVar14) {
                              rVar15 = lVar14 << 2;
                              memmove_s(_Dst,rVar15,_Dst + 1,rVar15);
                            }
                            *(longlong *)(puVar6 + 0x10) = *(longlong *)(puVar6 + 0x10) + -4;
                            if ((_Dst < *(uint **)(puVar6 + 0xe)) || (*(uint **)(puVar6 + 0x10) < _Dst)) {
                              _invalid_parameter_noinfo();
                            }
                            if ((*(longlong *)(puVar6 + 0x10) - *(longlong *)(puVar6 + 0xe) & 0xfffffffffffffffcU) == 0) {
                              local_11b8 = local_1198;
                              puStack_11b0 = puStack_1190;
                              FUN_140c668e0(param_1 + 0x10,&local_1198,(longlong *)&local_11b8);
                            }
                            uVar16 = local_11a8;
                            FUN_140c670c0(param_1,param_1 + 8,local_11a8,puVar3[10]);
                            bVar4 = true;
                            _snprintf(local_458,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
                            local_59 = 0;
                            (**(code **)(*plVar18 + 0x30))(plVar18,local_458,0,1);
                          }
                          FUN_140c6f1f0(local_1088);
                          uVar10 = FUN_140c6f270(local_1088,uVar16,0x21,puVar3[0x16],0);
                          if ((char)uVar10 == '\0') {
                            log_InlineLogERROR(&DAT_140c755b8);
                          }
                          else {
                            (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_3,local_1088);
                          }
                          cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],puVar3[10]);
                          if (cVar7 != '\0') {
                            (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],puVar3[10],local_1088);
                          }
                          pIVar11 = theInstance();
                          plVar18 = (longlong *)param_1[0x20];
                          (**(code **)(*plVar18 + 0x70))(plVar18,puVar3[9]);
                          (**(code **)(*plVar18 + 0x98))(plVar18,param_3);
                          pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_GET_EQUIP_BONUS");
                          _snprintf((char *)local_c78,0x400,pcVar12);
                          local_879 = 0;
                          (**(code **)(*(longlong *)param_1[0x20] + 0x100))((longlong *)param_1[0x20],local_c78);
                          if (bVar4) {
                            local_11b8 = plVar9;
                            puStack_11b0 = puVar2;
                            FUN_140c65530(param_1,&local_1198,(longlong *)&local_11b8);
                          }
                          FUN_140c6f240((undefined8 *)local_1088);
                        }
                      }
                    }
                  }
                  else {
                    if (plVar18 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                      lVar14 = 0;
                    }
                    else {
                      lVar14 = *plVar18;
                    }
                    lVar17 = 0;
                    if (puVar6 == *(uint **)(lVar14 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    lVar14 = *(longlong *)(puVar6 + 0x10) - (longlong)(_Dst + 1) >> 2;
                    if (0 < lVar14) {
                      rVar15 = lVar14 << 2;
                      memmove_s(_Dst,rVar15,_Dst + 1,rVar15);
                    }
                    *(longlong *)(puVar6 + 0x10) = *(longlong *)(puVar6 + 0x10) + -4;
                    if ((_Dst < *(uint **)(puVar6 + 0xe)) || (*(uint **)(puVar6 + 0x10) < _Dst)) {
                      _invalid_parameter_noinfo();
                    }
                    if (plVar18 == (longlong *)0x0) {
                      _invalid_parameter_noinfo();
                    }
                    else {
                      lVar17 = *plVar18;
                    }
                    if (puVar6 == *(uint **)(lVar17 + 0x30)) {
                      _invalid_parameter_noinfo();
                    }
                    if ((*(longlong *)(puVar6 + 0x10) - *(longlong *)(puVar6 + 0xe) & 0xfffffffffffffffcU) == 0) {
                      local_11b8 = local_1198;
                      puStack_11b0 = puStack_1190;
                      FUN_140c668e0(param_1 + 0x10,&local_1198,(longlong *)&local_11b8);
                    }
                    FUN_140c6f470(local_c78);
                    uVar13 = FUN_140c6f4f0((longlong)local_c78,1);
                    if ((char)uVar13 == '\0') {
                      FUN_140c6f4c0((undefined8 *)local_c78);
                    }
                    else {
                      iVar8 = tq::DateStamp(0);
                      uVar5 = local_11a4[0];
                      iVar8 = tq::DateStampDiff(local_11a4[0],iVar8);
                      lVar14 = FUN_140c6f520((longlong)local_c78,uVar16,iVar8,0,1);
                      if ((char)lVar14 == '\0') {
                        FUN_140c6f4c0((undefined8 *)local_c78);
                      }
                      else {
                        (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_3,local_c78);
                        cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))();
                        if (cVar7 != '\0') {
                          FUN_140c6f470(local_868);
                          uVar13 = FUN_140c6f4f0((longlong)local_868,0);
                          if ((char)uVar13 == '\0') {
                            FUN_140c6f4c0((undefined8 *)local_868);
                            FUN_140c6f4c0((undefined8 *)local_c78);
                            return;
                          }
                          iVar8 = tq::DateStamp(0);
                          iVar8 = tq::DateStampDiff(uVar5,iVar8);
                          lVar14 = FUN_140c6f520((longlong)local_868,uVar16,iVar8,0,1);
                          if ((char)lVar14 == '\0') {
                            FUN_140c6f4c0((undefined8 *)local_868);
                            FUN_140c6f4c0((undefined8 *)local_c78);
                            return;
                          }
                          (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],uVar1,local_868);
                          FUN_140c6f4c0((undefined8 *)local_868);
                        }
                        FUN_140c6f4c0((undefined8 *)local_c78);
                      }
                    }
                  }
                }
              }
            }
            else {
              cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 200))((longlong *)param_1[0x20],param_3,(longlong)(int)puVar3[0x23]);
              if (cVar7 != '\0') {
                (**(code **)(*(longlong *)param_1[0x20] + 0xe0))((longlong *)param_1[0x20],0xe,0,param_3);
                lVar14 = *(longlong *)(puVar6 + 0x10) - (longlong)(_Dst + 1) >> 2;
                if (0 < lVar14) {
                  rVar15 = lVar14 << 2;
                  memmove_s(_Dst,rVar15,_Dst + 1,rVar15);
                }
                *(longlong *)(puVar6 + 0x10) = *(longlong *)(puVar6 + 0x10) + -4;
                if ((_Dst < *(uint **)(puVar6 + 0xe)) || (*(uint **)(puVar6 + 0x10) < _Dst)) {
                  _invalid_parameter_noinfo();
                }
                if ((*(longlong *)(puVar6 + 0x10) - *(longlong *)(puVar6 + 0xe) & 0xfffffffffffffffcU) == 0) {
                  FUN_140c668e0(param_1 + 0x10,local_1188,(longlong *)&local_1198);
                }
                uVar16 = local_11a8;
                FUN_140c670c0(param_1,param_1 + 8,local_11a8,puVar3[10]);
                _snprintf((char *)local_868,0x400,"DELETE FROM cq_pk_item WHERE id=%u LIMIT 1");
                local_469 = 0;
                (**(code **)(*plVar9 + 0x30))(plVar9,local_868,0,1);
                FUN_140c6f1f0(local_1088);
                uVar10 = FUN_140c6f270(local_1088,uVar16,0x21,puVar3[0x16],0);
                if ((char)uVar10 == '\0') {
                  log_InlineLogERROR(&DAT_140c755b8);
                }
                else {
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],param_3,local_1088);
                }
                cVar7 = (**(code **)(*(longlong *)param_1[0x20] + 0x90))((longlong *)param_1[0x20],puVar3[10]);
                if (cVar7 != '\0') {
                  (**(code **)(*(longlong *)param_1[0x20] + 0xf0))((longlong *)param_1[0x20],puVar3[10],local_1088);
                }
                pIVar11 = theInstance();
                (**(code **)(*(longlong *)param_1[0x20] + 0x98))((longlong *)param_1[0x20],param_3);
                pcVar12 = (char *)(*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_GET_EMONEY_BONUS");
                _snprintf((char *)local_c78,0x400,pcVar12);
                local_879 = 0;
                (**(code **)(*(longlong *)param_1[0x20] + 0x100))((longlong *)param_1[0x20],local_c78);
                FUN_140c65530(param_1,&local_1198,(longlong *)&local_11b8);
                FUN_140c6f240((undefined8 *)local_1088);
              }
            }
          }
        }
      }
    }
  }
  return;
}




void FUN_140c6d860(longlong *param_1)

{
  int iVar1;
  
  iVar1 = tq::DateStamp(0);
  if ((int)param_1[0x1f] != iVar1) {
    iVar1 = tq::DateStamp(0);
    *(int *)(param_1 + 0x1f) = iVar1;
    FUN_140c686d0(param_1);
  }
  return;
}




void FUN_140c6d8a0(longlong *param_1)

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
  FUN_140c69640(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140c6d910(longlong *param_1)

{
  FUN_140c6d8a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c6d940(longlong *param_1)

{
  FUN_140c6d8a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c6d970(longlong *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1a));
  FUN_140c6d8a0(param_1 + 0x10);
  operator_delete((void *)param_1[0x10]);
  FUN_140c6d8a0(param_1 + 8);
  operator_delete((void *)param_1[8]);
  FUN_140c66390(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c6d9f0(longlong *param_1,uint param_2)

{
  FUN_140c6d970(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140c62bc0(param_1);
  }
  return param_1;
}




undefined8 * FUN_140c6da20(undefined8 *param_1)

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
  lVar2 = FUN_140c63af0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c6daa0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_140c66860(param_1);
  FUN_140c6da20(param_1 + 8);
  FUN_140c6da20(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1a));
  param_1[0x20] = param_2;
  iVar1 = tq::DateStamp(0);
  *(int *)(param_1 + 0x1f) = iVar1;
  return param_1;
}




void FUN_140c6db20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_68;
  undefined8 *puStack_60;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48 [2];
  
  lVar8 = 0;
  if (param_1[7] != 0) {
    FUN_140c64950(param_1,*(longlong **)(param_1[6] + 8),param_3,param_4);
    *(longlong *)(param_1[6] + 8) = param_1[6];
    param_1[7] = 0;
    *(longlong *)param_1[6] = param_1[6];
    *(longlong *)(param_1[6] + 0x10) = param_1[6];
  }
  if (param_1[0xf] != 0) {
    puVar2 = (undefined8 *)param_1[0xe];
    puVar6 = (undefined8 *)*puVar2;
    plVar3 = (longlong *)param_1[8];
    while( true ) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (puVar6 == puVar2) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *plVar3;
      }
      if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((puVar6[8] - puVar6[7] & 0xfffffffffffffffc) != 0) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar8;
        }
        else {
          lVar7 = *plVar3;
        }
        if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        FUN_140c647c0(puVar6 + 4);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar6 + 0x51) == '\0') {
        puVar4 = (undefined8 *)puVar6[2];
        if (*(char *)((longlong)puVar4 + 0x51) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x51);
          puVar6 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0x51);
            puVar6 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x51);
          puVar5 = (undefined8 *)puVar6[1];
          puVar4 = puVar6;
          while ((puVar6 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar6[2]))) {
            cVar1 = *(char *)((longlong)puVar6[1] + 0x51);
            puVar5 = (undefined8 *)puVar6[1];
            puVar4 = puVar6;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    FUN_140c66cd0(param_1 + 8,*(longlong **)(param_1[0xe] + 8),param_3,param_4);
    *(longlong *)(param_1[0xe] + 8) = param_1[0xe];
    param_1[0xf] = 0;
    *(longlong *)param_1[0xe] = param_1[0xe];
    *(longlong *)(param_1[0xe] + 0x10) = param_1[0xe];
  }
  if (param_1[0x17] != 0) {
    puVar2 = (undefined8 *)param_1[0x16];
    puVar6 = (undefined8 *)*puVar2;
    plVar3 = (longlong *)param_1[0x10];
    while( true ) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (puVar6 == puVar2) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar8;
      }
      else {
        lVar7 = *plVar3;
      }
      if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((puVar6[8] - puVar6[7] & 0xfffffffffffffffc) != 0) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar7 = lVar8;
        }
        else {
          lVar7 = *plVar3;
        }
        if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        FUN_140c647c0(puVar6 + 4);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar6 + 0x51) == '\0') {
        puVar4 = (undefined8 *)puVar6[2];
        if (*(char *)((longlong)puVar4 + 0x51) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x51);
          puVar6 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0x51);
            puVar6 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x51);
          puVar5 = (undefined8 *)puVar6[1];
          puVar4 = puVar6;
          while ((puVar6 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar6[2]))) {
            cVar1 = *(char *)((longlong)puVar6[1] + 0x51);
            puVar5 = (undefined8 *)puVar6[1];
            puVar4 = puVar6;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    FUN_140c66cd0(param_1 + 0x10,*(longlong **)(param_1[0x16] + 8),param_3,param_4);
    *(longlong *)(param_1[0x16] + 8) = param_1[0x16];
    param_1[0x17] = 0;
    *(longlong *)param_1[0x16] = param_1[0x16];
    *(longlong *)(param_1[0x16] + 0x10) = param_1[0x16];
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1a));
  plVar3 = param_1 + 0x10;
  puStack_60 = (undefined8 *)param_1[0x16];
  local_68 = *plVar3;
  puStack_50 = (undefined8 *)*puStack_60;
  local_58 = local_68;
  FUN_140c69640(plVar3,local_48,&local_58,&local_68);
  operator_delete((void *)param_1[0x16]);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  operator_delete((void *)*plVar3);
  plVar3 = param_1 + 8;
  puStack_50 = (undefined8 *)param_1[0xe];
  local_68 = *plVar3;
  puStack_60 = (undefined8 *)*puStack_50;
  local_58 = local_68;
  FUN_140c69640(plVar3,local_48,&local_68,&local_58);
  operator_delete((void *)param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  operator_delete((void *)*plVar3);
  puStack_50 = (undefined8 *)param_1[6];
  local_68 = *param_1;
  puStack_60 = (undefined8 *)*puStack_50;
  local_58 = local_68;
  FUN_140c65d80(param_1,local_48,&local_68,&local_58);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  if ((DAT_140c7e428 & 1) == 0) {
    DAT_140c7e428 = DAT_140c7e428 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
    atexit((_func_5014 *)&LAB_140c74020);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c6dfc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140c7e420,param_1);
  return;
}




longlong * FUN_140c6dfd0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","pConsumer != NULL","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp",0x27);
    plVar2 = (longlong *)0x0;
  }
  else {
    if ((DAT_140c7e428 & 1) == 0) {
      DAT_140c7e428 = DAT_140c7e428 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_140c7e420,"CDetain");
      atexit((_func_5014 *)&LAB_140c74020);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140c7e420,0x108);
    if (puVar1 == (undefined8 *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = FUN_140c6daa0(puVar1,param_1);
    }
    if (plVar2 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140c755b8,"IF_NOT","pDetain != NULL","f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp",0x2d);
      plVar2 = (longlong *)0x0;
    }
    else {
      uVar3 = FUN_140c69820(plVar2);
      if ((char)uVar3 == '\0') {
        pcVar6 = "f:\\version\\cqserver-78.0.11-1204\\modules\\detainequip\\src\\detain.cpp";
        pcVar5 = "pDetain->Init()";
        pcVar4 = "IF_NOT";
        log_InlineLogERROR(&DAT_140c755b8);
        FUN_140c6db20(plVar2,pcVar4,pcVar5,pcVar6);
        plVar2 = (longlong *)0x0;
      }
    }
  }
  return plVar2;
}




void FUN_140c6e100(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140c6e110(void)

{
  return 0;
}




undefined8 FUN_140c6e120(void)

{
  return 0;
}




undefined8 FUN_140c6e130(void)

{
  return 0;
}




undefined8 FUN_140c6e140(void)

{
  return 0;
}




undefined8 * FUN_140c6e150(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140c6e1b0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140c6e1d0(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x30))(*(longlong **)(param_1 + 0x858),0x13);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x420) == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_140c6e690(*(longlong *)(param_1 + 0x420),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_140c6e2b0(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3f1) {
      plVar2 = (longlong *)(param_1 + 0xc);
    }
    else {
      if (param_2[1] != 0x271a) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x428);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




void FUN_140c6e320(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x420) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c6e331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CModule::OnTimer ElitePKArenic module doesn\'t have provider");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c6e342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x420) + 0x58))();
  return;
}




bool FUN_140c6e350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140c6eb60(puVar2);
  }
  *(undefined8 **)(param_1 + 0x420) = puVar2;
  (**(code **)(**(longlong **)(param_1 + 0x858) + 8))(*(longlong **)(param_1 + 0x858),0x3f1,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x858) + 8))(*(longlong **)(param_1 + 0x858),0x271a,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))(*(longlong **)(param_1 + 0x858),0x13,*(undefined8 *)(param_1 + 0x420));
  return cVar1 != '\0';
}




undefined8 FUN_140c6e3e0(void)

{
  return 1;
}




void FUN_140c6e3f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    *param_1 = 0;
  }
  return;
}




void FUN_140c6e420(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140c6e450(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = detainequip::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_140c6f1f0((CMsg *)((longlong)param_1 + 0xc));
  param_1[0x84] = 0;
  FUN_140c6ecc0((CMsg *)(param_1 + 0x85));
  *(undefined4 *)(param_1 + 0x10a) = 0;
  param_1[0x10b] = param_2;
  return param_1;
}




void FUN_140c6e4d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = detainequip::CModule::vftable;
  plVar1 = (longlong *)param_1[0x84];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_140c6ed20(param_1 + 0x85);
  FUN_140c6f240((undefined8 *)((longlong)param_1 + 0xc));
  *param_1 = gs::IModule::vftable;
  return;
}




undefined2 FUN_140c6e540(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_140c6e2b0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x420));
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
                    /* 0xe5b0  1  ModuleCreate */
  puVar2 = operator_new(0x860);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    param_3 = param_2 & 0xffffffff;
    plVar3 = FUN_140c6e450(puVar2,param_1,(int)param_2);
    uVar4 = param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140c6e350((longlong)plVar3,uVar4,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined8 * FUN_140c6e630(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c6e4d0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140c6e690(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  longlong *plVar1;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  plVar1 = FUN_140c6dfd0(param_2);
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}




void FUN_140c6e720(longlong param_1,uint param_2,uint param_3,int param_4)

{
  if (*(void ***)(param_1 + 8) == (void **)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6a300(*(void ***)(param_1 + 8),param_2,param_3,param_4);
  return;
}




void FUN_140c6e770(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6cb80(*(longlong **)(param_1 + 8),param_2,param_3);
  return;
}




ulonglong FUN_140c6e7c0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140c64fd0(*(longlong **)(param_1 + 8),param_2);
  return uVar1;
}




ulonglong FUN_140c6e810(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140c65200(*(longlong **)(param_1 + 8),param_2);
  return uVar1;
}




void FUN_140c6e860(longlong param_1,uint param_2)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6a290(*(longlong **)(param_1 + 8),param_2);
  return;
}




void FUN_140c6e8b0(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6aef0(*(longlong **)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_140c6e900(longlong param_1,uint param_2,int param_3)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6b7e0(*(longlong **)(param_1 + 8),param_2,param_3);
  return;
}




void FUN_140c6e950(longlong param_1,uint param_2)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6c630(*(longlong **)(param_1 + 8),param_2);
  return;
}




longlong FUN_140c6e9a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return 0;
  }
  lVar1 = FUN_140c61760(*(longlong *)(param_1 + 8));
  return lVar1;
}




ulonglong FUN_140c6e9f0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong extraout_RAX;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140c61790(*(longlong *)(param_1 + 8));
  uVar2 = FUN_140c61780(*(longlong *)(param_1 + 8));
  *param_2 = CONCAT22((short)uVar1,(short)uVar2);
  *(undefined2 *)(param_2 + 1) = 0;
  return 1;
}




ulonglong FUN_140c6ea90(longlong param_1,uint param_2,int param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_140c68e20(*(longlong **)(param_1 + 8),param_2,param_3);
  return uVar1;
}




void FUN_140c6eae0(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  FUN_140c6d860(*(longlong **)(param_1 + 8));
  return;
}




void FUN_140c6eb30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_140c6db20((longlong *)*param_1,param_2,param_3,param_4);
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_140c6eb60(undefined8 *param_1)

{
  *param_1 = detainequip::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




void FUN_140c6eb80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = detainequip::CProvider::vftable;
  if (param_1[1] == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else if (param_1[1] != 0) {
    FUN_140c6db20((longlong *)param_1[1],param_2,param_3,param_4);
    param_1[1] = 0;
  }
  return;
}




undefined8 * FUN_140c6ebf0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c6eb80(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c6ec20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140c6ec50(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140c6ec60(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c6ec67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140c6ec70(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c6ec77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140c6ec80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c6ec87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140c6ec90(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c6ecc0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = detainequip::CMsgAction::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140c6ed20(undefined8 *param_1)

{
  *param_1 = detainequip::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140c6ed60(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x271a;
}




void FUN_140c6ed90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
    return;
  }
  if (*(short *)(*(longlong *)(param_1 + 0x408) + 0x1c) == 0x99) {
    (**(code **)(*param_3 + 0x30))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10));
  }
  return;
}




undefined8 * FUN_140c6edf0(undefined8 *param_1,uint param_2)

{
  *param_1 = detainequip::CMsgAction::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c6ee50(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = detainequip::CMsgDetainItemInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140c6eea0(undefined8 *param_1)

{
  *param_1 = detainequip::CMsgDetainItemInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140c6eed0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x40a;
}




undefined8 FUN_140c6ef00(CMsg *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(param_1 + 10) = 0x40a;
  *(undefined2 *)(param_1 + 8) = 0x70;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4[1];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x38) = param_4[2];
  if (*(ulonglong *)(param_4 + 0xc) < 0x10) {
    pcVar3 = (char *)(param_4 + 6);
  }
  else {
    pcVar3 = *(char **)(param_4 + 6);
  }
  tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x3c),pcVar3,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x4c) = param_4[0xe];
  if (*(ulonglong *)(param_4 + 0x18) < 0x10) {
    pcVar3 = (char *)(param_4 + 0x12);
  }
  else {
    pcVar3 = *(char **)(param_4 + 0x12);
  }
  tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x50),pcVar3,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x60) = param_4[0x1a];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 100) = param_4[0x1b];
  if (0 < (int)param_4[0x1b]) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x68) = param_4[0x1b];
  }
  iVar1 = tq::DateStamp(0);
  iVar1 = tq::DateStampDiff(param_4[0x1a],iVar1);
  *(int *)(*(longlong *)(param_1 + 0x408) + 0x6c) = iVar1;
  lVar2 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_5;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = *param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_2[1];
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x10) = *(undefined2 *)(param_2 + 4);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x12) = *(undefined2 *)(param_2 + 5);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x15) = *(undefined1 *)(param_2 + 6);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x16) = *(undefined1 *)(param_2 + 7);
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_2[8];
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x1d) = *(undefined1 *)(param_2 + 10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_2[0xb];
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x24) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x25) = *(undefined1 *)(param_2 + 0xd);
    if ((*(byte *)(*(longlong *)(param_1 + 0x408) + 0x15) & 1) != 0) {
      if (param_2[9] != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = 0xff;
      }
      if (param_2[10] != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x1d) = 0xff;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x24) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x25) = 0;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x26) = *(undefined1 *)(param_2 + 0xe);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x27) = *(undefined1 *)(param_2 + 0xf);
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x28) = *(undefined1 *)(param_2 + 0x10);
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c) = param_2[0x11];
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x30) = *(undefined2 *)(param_2 + 0x12);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x32) = *(undefined2 *)((longlong)param_2 + 0x4a);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x34) = *(undefined2 *)(param_2 + 0x13);
    lVar2 = *(longlong *)(param_1 + 0x408);
    *(undefined4 *)(lVar2 + 0x68) = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




undefined8 * FUN_140c6f1a0(undefined8 *param_1,byte param_2)

{
  *param_1 = detainequip::CMsgDetainItemInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c6f1f0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = detainequip::CMsgItem::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140c6f240(undefined8 *param_1)

{
  *param_1 = detainequip::CMsgItem::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140c6f270(CMsg *param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

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
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_3;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_5;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined4 *)(lVar1 + 0x1a) = 0;
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}




ulonglong FUN_140c6f320(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (param_2 != (char *)0x0) {
    bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
    in_RAX = CONCAT71(extraout_var,bVar1);
    if (bVar1) {
      return CONCAT71(3,*(short *)(param_1 + 10) == 0x3f1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_140c6f360(longlong param_1,int param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140c755b8);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x408);
    sVar1 = *(short *)(lVar2 + 0x14);
    if (sVar1 == 0x20) {
      (**(code **)(*param_3 + 0x28))(param_3,*(undefined4 *)(lVar2 + 8),param_2);
    }
    else if (sVar1 == 0x21) {
      (**(code **)(*param_3 + 8))(param_3,*(undefined4 *)(lVar2 + 8),param_2);
    }
    else if (sVar1 == 0x22) {
      (**(code **)(*param_3 + 0x38))(param_3);
    }
  }
  return;
}




undefined8 * FUN_140c6f420(undefined8 *param_1,byte param_2)

{
  *param_1 = detainequip::CMsgItem::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c6f470(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = detainequip::CMsgUpdateDetainEquipExpired::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140c6f4c0(undefined8 *param_1)

{
  *param_1 = detainequip::CMsgUpdateDetainEquipExpired::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140c6f4f0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 8) = 0x18;
  *(undefined2 *)(param_1 + 10) = 0x40b;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined4 *)(lVar1 + 8) = 0;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




longlong FUN_140c6f520(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x408) + 8);
  iVar4 = uVar2 + 3;
  iVar5 = iVar4 * 0xc;
  if (0x400 < iVar5) {
    return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((ulonglong)uVar2 * 3 + 3) * 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0xc) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x14 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0xc) = param_4;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x15 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 8) * 0xc) = param_5;
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  *(short *)(param_1 + 8) = (short)iVar5;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined8 * FUN_140c6f5b0(undefined8 *param_1,byte param_2)

{
  *param_1 = detainequip::CMsgUpdateDetainEquipExpired::vftable;
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




undefined8 FUN_140c6f730(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_140c7e400) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_140c7e9d0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140c7e9d0);
    local_res18[0] = _decode_pointer(DAT_140c7e9c8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140c7e9d0 = _encode_pointer(local_res10);
    DAT_140c7e9c8 = _encode_pointer(local_res18[0]);
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




bool FUN_140c6f98c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140c7e9c8 = _encode_pointer(puVar1);
  DAT_140c7e9d0 = DAT_140c7e9c8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140c70004();
    atexit(FUN_140c7003c);
    atexit((_func_5014 *)&LAB_140c6fff8);
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
    if (DAT_140c7e42c < 1) {
      return 0;
    }
    DAT_140c7e42c = DAT_140c7e42c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140c7e9b8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140c7e9b8;
        pvVar3 = DAT_140c7e9b8;
      }
      DAT_140c7e9b8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140c6fa66;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140c6fa66:
    if (DAT_140c7e9b0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140c7e9d0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140c7e9c8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140c7e9d0);
            plVar12 = (longlong *)_decode_pointer(DAT_140c7e9c8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140c7e9c8 = _encoded_null();
        DAT_140c7e9d0 = DAT_140c7e9c8;
      }
      DAT_140c7e9b0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140c7e9b8 = (void *)0x0;
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
      bVar13 = DAT_140c7e9b8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140c7e9b8;
        pvVar3 = DAT_140c7e9b8;
      }
      DAT_140c7e9b8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140c6fb8f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140c6fb8f:
    if (DAT_140c7e9b0 == 0) {
      DAT_140c7e9b0 = 1;
      iVar4 = _initterm_e(&DAT_140c75278,&DAT_140c75288);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140c75268,&DAT_140c75270);
      DAT_140c7e9b0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140c7e9b8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140c7e9c0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140c7e9c0), BVar5 != 0)) {
      (*DAT_140c7e9c0)(param_1,2,param_3);
    }
    DAT_140c7e42c = DAT_140c7e42c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140c6fd08) */
/* WARNING: Removing unreachable block (ram,0x000140c6fc9f) */
/* WARNING: Removing unreachable block (ram,0x000140c6fd43) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140c7e42c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140c7e410 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140c7e410 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140c6e3e0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140c6e3e0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140c7e410 = 0xffffffff;
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




undefined8 FUN_140c6fdc0(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140c7e4d0);
  local_30 = DAT_140c7e5c8;
  local_38 = RtlLookupFunctionEntry(DAT_140c7e5c8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140c7e568 = local_res8;
    DAT_140c7e5c8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140c7e4d0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140c7e440 = DAT_140c7e5c8;
  _DAT_140c7e550 = local_res8[0];
  _DAT_140c7e430 = 0xc0000409;
  _DAT_140c7e434 = 1;
  local_20 = DAT_140c7e400;
  local_18 = DAT_140c7e408;
  DAT_140c7e4c8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140c77b78);
  if (DAT_140c7e4c8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140c70004(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140c785e0; puVar1 < &DAT_140c785e0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140c7003c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140c785f0; puVar1 < &DAT_140c785f0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140c60000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140c60000);
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
  if (DAT_140c7e400 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140c7e400 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140c7e400 == 0x2b992ddfa232) {
      DAT_140c7e400 = 0x2b992ddfa233;
    }
  }
  DAT_140c7e408 = ~DAT_140c7e400;
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




void Unwind_140c702f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70310(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70350(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70370(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c703b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c703d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c703f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70410(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70430(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70450(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70470(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c704b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c704d0(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c704f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70570(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70590(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c705b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c705d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c705f0(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x20) + 8));
  return;
}




undefined * Catch_140c70670(void)

{
  return &DAT_140c615ae;
}




void Unwind_140c70690(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c706b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c706d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c706f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70710(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70730(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70750(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c70770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c707b0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c707d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c707f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70810(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140c70850(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c70870(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140c70890(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c708b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c708d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c708f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70910(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c70930(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140c70970(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140c70990(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c709b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c709d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c709f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70a10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70a30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c70a50(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c70a70(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c70a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70ab0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70ad0(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c70af0(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c70b10(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c70b30(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c70b50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140c70b70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140c70b90(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c70bb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70bd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70bf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c70c30(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c70c50(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70c70(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70c90(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c70cb0(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c70cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70cf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70d10(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70d30(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70d50(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70d70(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70d90(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70db0(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140c70dd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c70e00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c70e30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c70e60(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70e80(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70ea0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c70ec0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70ee0(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c70f00(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x40) + 8);
  return;
}




void Unwind_140c70f20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c70f40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c70f60(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70f80(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70fa0(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70fc0(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c70fe0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71000(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71020(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140c71040(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_140c71060(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140c71080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140c710a0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c710c0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c710e0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71100(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71120(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71140(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71160(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71180(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c711a0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c711c0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c711e0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71200(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71220(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71240(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71260(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71280(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c712a0(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c712c0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c712e0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71300(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71320(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140c71340(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0x48) + 8);
  return;
}




void Unwind_140c71360(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}




void Unwind_140c71380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 0x40));
  return;
}




void Unwind_140c713a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c713c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c713e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c71400(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c71420(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71440(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71460(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71480(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c714a0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c714c0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c714e0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71500(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71520(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c71540(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c71560(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71580(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c715a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c715c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c715e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c71600(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c71620(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140c71640(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(*(longlong *)(param_2 + 0xd0) + 8);
  return;
}




void Unwind_140c71660(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 0x10));
  return;
}




void Unwind_140c71680(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xd0) + 0x40));
  return;
}




void Unwind_140c716a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c716c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c716e0(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c71700(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71720(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71740(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71760(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71780(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c717a0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c717c0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c717e0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71800(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71830(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c71850(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_140c71870(undefined8 param_1,longlong param_2)

{
  FUN_140c637c0(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c718a0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c718c0(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c718e0(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71900(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71920(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71940(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71960(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71980(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c719a0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c719c0(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140c719e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c71a10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c71a30(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c71a50(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c71a70(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c71a90(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71ab0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71ad0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c71af0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71b10(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71b30(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71b50(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71b70(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71b90(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71bb0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71bd0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71bf0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71c10(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71c30(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71c50(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71c70(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140c71c90(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c71cb0(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140c71cd0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140c71cf0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71d10(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71d30(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71d50(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71d70(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71d90(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71db0(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71dd0(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140c71df0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140c71e10(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c71e30(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c71e50(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71e70(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140c71e90(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140c71eb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c71ee0(undefined8 param_1,longlong param_2)

{
  FUN_140c66660(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c71f00(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71f20(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71f40(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71f60(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71f80(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71fa0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c71fc0(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c71fe0(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c72000(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c72020(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c72040(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c72060(undefined8 param_1,longlong param_2)

{
  FUN_140c66660(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c72080(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c720a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c720c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c720e0(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c72100(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140c72120(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140c72140(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140c72160(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140c72180(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140c721a0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140c721c0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c721e0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c72200(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c72220(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c72240(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c72260(undefined8 param_1,longlong param_2)

{
  FUN_140c611c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c72280(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c722b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c722d0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c722f0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c72310(undefined8 param_1,longlong param_2)

{
  FUN_140c6eea0((undefined8 *)(param_2 + 0x220));
  return;
}




void Unwind_140c72330(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c72350(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x70));
  return;
}




undefined8 Catch_140c72370(void)

{
  log_InlineLogCATCH_ERROR("CDetain::ProcessTargetLogin crash. @%s,%d");
  return 0x140c67c40;
}




void Unwind_140c723b0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c723d0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140c723f0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140c72410(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140c72430(undefined8 param_1,longlong param_2)

{
  FUN_140c615e0((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_140c72450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x198));
  return;
}




void Unwind_140c72470(undefined8 param_1,longlong param_2)

{
  FUN_140c6eea0((undefined8 *)(param_2 + 0x240));
  return;
}




void Unwind_140c72490(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xa0));
  return;
}




void Unwind_140c724b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xa0));
  return;
}




undefined8 Catch_140c724d0(void)

{
  log_InlineLogCATCH_ERROR("CDetain::ProcessHunterLogin crash. @%s,%d");
  return 0x140c68699;
}




undefined8 Catch_140c72510(void)

{
  log_InlineLogCATCH_ERROR("CDetain::ProcessDetainEquipExpired crash. @%s,%d");
  return 0x140c68de0;
}




void Unwind_140c72550(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x140));
  return;
}




undefined8 Catch_140c72570(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRes) @%s,%d");
  return 0x140c6a241;
}




void Unwind_140c725b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x170));
  return;
}




void Unwind_140c725d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1a0));
  return;
}




void Unwind_140c725f0(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x160);
  return;
}




void Unwind_140c72610(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x1e0) + 0x10));
  return;
}




void Unwind_140c72630(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x1e0) + 0x40));
  return;
}




void Unwind_140c72650(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x1f0);
  return;
}




void Unwind_140c72670(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(param_2 + 0x1e8);
  return;
}




void Unwind_140c72690(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x1f0);
  return;
}




void Unwind_140c726b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x1d0) + 0x10));
  return;
}




void Unwind_140c726d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x1d0) + 0x40));
  return;
}




void Unwind_140c726f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x170));
  return;
}




void Unwind_140c72710(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x1a0));
  return;
}




void Unwind_140c72730(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c72750(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140c72770(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140c72790(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140c727b0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xf8));
  return;
}




void Unwind_140c727d0(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(param_2 + 0xf0);
  return;
}




void Unwind_140c727f0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xf8));
  return;
}




void Unwind_140c72810(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140c72830(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140c72850(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140c72870(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xb0));
  return;
}




void Unwind_140c72890(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c728b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140c728d0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140c728f0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140c72910(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x130));
  return;
}




void Unwind_140c72930(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(param_2 + 0x128);
  return;
}




void Unwind_140c72950(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x130));
  return;
}




void Unwind_140c72970(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140c72990(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140c729b0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_140c729d0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x80));
  return;
}




undefined * Catch_140c729f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pRecSet) @%s,%d");
  return &DAT_140c6a1fe;
}




void Unwind_140c72a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x148));
  return;
}




void Unwind_140c72a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x178));
  return;
}




void Unwind_140c72a70(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x138);
  return;
}




void Unwind_140c72a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Unwind_140c72ab0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x90) + 0x40));
  return;
}




void Unwind_140c72ad0(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x1b8);
  return;
}




void Unwind_140c72af0(undefined8 param_1,longlong param_2)

{
  FUN_140c61720(param_2 + 0x1b0);
  return;
}




void Unwind_140c72b10(undefined8 param_1,longlong param_2)

{
  FUN_140c616e0(param_2 + 0x1b8);
  return;
}




void Unwind_140c72b30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Unwind_140c72b50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x90) + 0x40));
  return;
}




void Unwind_140c72b70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x148));
  return;
}




void Unwind_140c72b90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x178));
  return;
}




void Unwind_140c72bb0(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c72be0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72c00(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72c20(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72c40(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x108));
  return;
}




void Unwind_140c72c60(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(param_2 + 0x100);
  return;
}




void Unwind_140c72c80(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x108));
  return;
}




void Unwind_140c72ca0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c72cc0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c72ce0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72d00(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72d20(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c72d50(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72d70(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72d90(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72db0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x108));
  return;
}




void Unwind_140c72dd0(undefined8 param_1,longlong param_2)

{
  FUN_140c64460(param_2 + 0x100);
  return;
}




void Unwind_140c72df0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x108));
  return;
}




void Unwind_140c72e10(undefined8 param_1,longlong param_2)

{
  FUN_140c63690(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c72e30(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c72e50(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72e70(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0xd0));
  return;
}




void Unwind_140c72e90(undefined8 param_1,longlong param_2)

{
  FUN_140c6eea0((undefined8 *)(param_2 + 0x340));
  return;
}




void Unwind_140c72eb0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x9b0));
  return;
}




void Unwind_140c72ed0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x5a0));
  return;
}




void Unwind_140c72ef0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f240((undefined8 *)(param_2 + 400));
  return;
}




void Unwind_140c72f10(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c72f40(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c72f60(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c72f80(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c72fa0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_140c72fc0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c72fe0(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73000(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x4d0));
  return;
}




void Unwind_140c73020(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73040(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73060(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c73090(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c730b0(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c730d0(undefined8 param_1,longlong param_2)

{
  FUN_140c63db0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c730f0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x4d0));
  return;
}




void Unwind_140c73110(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73130(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73150(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_140c73170(undefined8 param_1,longlong param_2)

{
  FUN_140c63690((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c73190(undefined8 param_1,longlong param_2)

{
  FUN_140c62d70((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c731b0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f240((undefined8 *)(param_2 + 0x1a0));
  return;
}




void Unwind_140c731d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x5b0));
  return;
}




void Unwind_140c731f0(undefined8 param_1,longlong param_2)

{
  FUN_140c6f4c0((undefined8 *)(param_2 + 0x9c0));
  return;
}




void Unwind_140c73210(undefined8 param_1,longlong param_2)

{
  FUN_140c6f240((undefined8 *)(param_2 + 0x1a0));
  return;
}




void Unwind_140c73230(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73250(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73270(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73290(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c732b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c732d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c732f0(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73310(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73330(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73350(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73370(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73390(undefined8 param_1,longlong param_2)

{
  FUN_140c66830(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c733b0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c733d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x80));
  return;
}




void Unwind_140c733f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_140c73410(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140c73430(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73450(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73470(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73490(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c734b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c734d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_140c734f0(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73510(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73530(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73550(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73570(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140c73590(undefined8 param_1,longlong param_2)

{
  FUN_140c66660(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c735b0(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c735d0(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c735f0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73610(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73630(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73650(void)

{
  FUN_140c61160();
  return;
}




void Unwind_140c73670(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73690(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c736b0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c736d0(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c736f0(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73710(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c73730(undefined8 param_1,longlong param_2)

{
  FUN_140c66830(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c73750(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_140c73770(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0x40) + 0x80));
  return;
}




void Unwind_140c73790(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0xd0));
  return;
}




void Unwind_140c737b0(undefined8 param_1,longlong param_2)

{
  FUN_140c66830(*(longlong **)(param_2 + 0xa0));
  return;
}




void Unwind_140c737d0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x40));
  return;
}




void Unwind_140c737f0(undefined8 param_1,longlong param_2)

{
  FUN_140c6d940((longlong *)(*(longlong *)(param_2 + 0xa0) + 0x80));
  return;
}




void Unwind_140c73820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0xa0) + 0xd0));
  return;
}




void Unwind_140c73850(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73870(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73890(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c738b0(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c738d0(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c738f0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73910(undefined8 param_1,longlong param_2)

{
  FUN_140c6d910(*(longlong **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73930(undefined8 param_1,longlong param_2)

{
  FUN_140c65c00(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73950(undefined8 param_1,longlong param_2)

{
  FUN_140c648a0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73970(undefined8 param_1,longlong param_2)

{
  FUN_140c63f50(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c73990(undefined8 param_1,longlong param_2)

{
  FUN_140c636d0(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c739b0(undefined8 param_1,longlong param_2)

{
  FUN_140c62e70(*(undefined8 **)(param_2 + 0xa8));
  return;
}




void Unwind_140c739d0(undefined8 param_1,longlong param_2)

{
  FUN_140c66660(*(longlong **)(param_2 + 0xa0));
  return;
}




void Unwind_140c739f0(undefined8 param_1,longlong param_2)

{
  FUN_140c65be0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140c73a10(undefined8 param_1,longlong param_2)

{
  FUN_140c64880(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140c73a30(undefined8 param_1,longlong param_2)

{
  FUN_140c63f30(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140c73a50(undefined8 param_1,longlong param_2)

{
  FUN_140c636b0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140c73a70(undefined8 param_1,longlong param_2)

{
  FUN_140c62df0(*(undefined8 **)(param_2 + 0xa0));
  return;
}




void Unwind_140c73a90(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c73ab0(void)

{
  DAT_140c7e428 = DAT_140c7e428 & 0xfffffffe;
  return;
}




void Unwind_140c73ad0(undefined8 param_1,longlong param_2)

{
  FUN_140c62bc0(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140c73af0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140c73b10(undefined8 param_1,longlong param_2)

{
  FUN_140c6e100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73b30(undefined8 param_1,longlong param_2)

{
  FUN_140c6f240((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc));
  return;
}




void Unwind_140c73b50(undefined8 param_1,longlong param_2)

{
  FUN_140c6ed20((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




void Unwind_140c73b70(undefined8 param_1,longlong param_2)

{
  FUN_140c6e100(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73b90(undefined8 param_1,longlong param_2)

{
  FUN_140c6f240((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc));
  return;
}




void Unwind_140c73bb0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ed20((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x428));
  return;
}




undefined * Catch_140c73bd0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE(pProvider) @%s,%d");
  return &DAT_140c6e50a;
}




undefined * Catch_140c73c10(void)

{
  log_InlineLogCATCH_ERROR("detainequip::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_140c6e592;
}




void Unwind_140c73c60(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140c73c80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x140c6e611;
}




undefined8 Catch_140c73cc0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(m_pDetain) @%s,%d");
  return 0x140c6ebe7;
}




void Unwind_140c73d00(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73d20(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140c73d40(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73d60(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140c73d80(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73da0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140c73dc0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73de0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140c73e00(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73e20(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73e40(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140c73e60(void)

{
  log_InlineLogCATCH_ERROR("DetainEquip/CMsgItem/Process @%s,%d");
  return 0x140c6f41a;
}




void Unwind_140c73ea0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73ec0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c73ee0(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140c73f00(undefined8 param_1,longlong param_2)

{
  FUN_140c6ec50(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140c73f18(void)

{
  _unlock(8);
  return;
}




void FUN_140c73f31(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c73f61(void)

{
  _DAT_140c7e410 = 0xffffffff;
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




bool FUN_140c73ff0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=769 failed=0 total=862 */
