/* Decompiled by Ghidra 12.1.4 | program: Competion.dll
   image base: 140b50000 | functions: 1165 */


exception * FUN_140b51090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140b510d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140b510f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140b51100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140b51160(void)

{
  return;
}




exception * FUN_140b51170(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140b511c0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140b511f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140b51200(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140b51220(exception *param_1,uint param_2)

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




exception * FUN_140b51280(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140b512e0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140b5131d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140b51330(exception *param_1,uint param_2)

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




exception * FUN_140b513a0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140b51400(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140b5143d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140b51450(exception *param_1,uint param_2)

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




void FUN_140b514c0(void)

{
  log_InlineLogERROR(&DAT_140b6b6c0);
  return;
}




undefined8 * FUN_140b514f0(undefined8 *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  return param_1;
}




void FUN_140b51530(undefined8 *param_1)

{
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140b51554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}




longlong FUN_140b51560(longlong param_1,char *param_2)

{
  if (param_2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),param_2);
  }
  return param_1;
}




undefined8 * FUN_140b515b0(undefined8 *param_1,uint param_2)

{
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




int FUN_140b51630(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_140b6b470;
  do {
    if (param_2 < *puVar1) {
      return iVar2 + 1;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((longlong)puVar1 < 0x140b6b480);
  return 5;
}




bool FUN_140b51660(longlong param_1,int param_2)

{
  return *(int *)(param_1 + 0x130) == param_2;
}




undefined8 * FUN_140b51680(undefined8 *param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  *param_1 = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7));
  param_1[6] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd));
  param_1[0xc] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x13));
  param_1[0x12] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x19));
  param_1[0x18] = tq::CString::vftable;
  return param_1;
}




void FUN_140b51730(undefined8 *param_1)

{
  param_1[0x18] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x19));
  param_1[0x12] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x13));
  param_1[0xc] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xd));
  param_1[6] = tq::CString::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7));
  *param_1 = tq::CString::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140b517c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1));
  return;
}




ulonglong FUN_140b51800(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined4 extraout_var_01;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = *(ushort *)(param_1 + 1);
    in_RAX = (ulonglong)uVar1;
    if (*(ushort *)(param_2 + 1) < uVar1) {
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
    if (*(ushort *)(param_2 + 1) <= uVar1) {
      uVar1 = FUN_140b63ee0((longlong)param_1);
      uVar2 = FUN_140b63ee0((longlong)param_2);
      if (uVar1 < uVar2) {
        return CONCAT71((int7)(CONCAT62(extraout_var,uVar2) >> 8),1);
      }
      uVar1 = FUN_140b63ee0((longlong)param_1);
      uVar2 = FUN_140b63ee0((longlong)param_2);
      if (uVar2 < uVar1) {
        return CONCAT62(extraout_var_00,uVar2) & 0xffffffffffffff00;
      }
      uVar3 = FUN_140b63e40(param_1);
      uVar4 = FUN_140b63e40(param_2);
      return CONCAT71((int7)(CONCAT44(extraout_var_01,uVar4) >> 8),uVar3 < uVar4);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




longlong FUN_140b51900(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_140b51950(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 2) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 4;
}




bool FUN_140b519a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140b519e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140b51a20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140b51a70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140b51ab0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140b51bf0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51c12;
  }
  lVar2 = *plVar1;
LAB_140b51c12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b51c30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51c52;
  }
  lVar2 = *plVar1;
LAB_140b51c52:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140b51c70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140b51cd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51cf2;
  }
  lVar2 = *plVar1;
LAB_140b51cf2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b51d10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51d32;
  }
  lVar2 = *plVar1;
LAB_140b51d32:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong FUN_140b51d70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51d92;
  }
  lVar2 = *plVar1;
LAB_140b51d92:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b51db0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51dd2;
  }
  lVar2 = *plVar1;
LAB_140b51dd2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140b51df0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140b51e90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_140b51ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b51ef2;
  }
  lVar2 = *plVar1;
LAB_140b51ef2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 3;
  return param_1;
}




bool FUN_140b51f10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140b51f60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140b52120(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
}




exception * FUN_140b52190(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




void FUN_140b52200(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
}




void FUN_140b52270(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
}




longlong FUN_140b523a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong FUN_140b523e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b52402;
  }
  lVar2 = *plVar1;
LAB_140b52402:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140b52420(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140b52460(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
}




longlong FUN_140b524d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_140b52510(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
}




longlong FUN_140b525a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




longlong FUN_140b525e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b52602;
  }
  lVar2 = *plVar1;
LAB_140b52602:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_140b52620(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 3;
}




longlong FUN_140b52670(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b52692;
  }
  lVar2 = *plVar1;
LAB_140b52692:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140b526b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b526d2;
  }
  lVar2 = *plVar1;
LAB_140b526d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




exception * FUN_140b526f0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140b52840(longlong param_1,longlong *param_2)

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




bool FUN_140b528e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140b52930(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_140b52ad0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140b52b00;
  }
  else {
LAB_140b52b00:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140b52b28;
  }
  _invalid_parameter_noinfo();
LAB_140b52b28:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140b52b40(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140b52b70;
  }
  else {
LAB_140b52b70:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140b52b98;
  }
  _invalid_parameter_noinfo();
LAB_140b52b98:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




longlong * FUN_140b52bb0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140b52be0;
  }
  else {
LAB_140b52be0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140b52c08;
  }
  _invalid_parameter_noinfo();
LAB_140b52c08:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




longlong * FUN_140b52c20(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140b52c50;
  }
  else {
LAB_140b52c50:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140b52c78;
  }
  _invalid_parameter_noinfo();
LAB_140b52c78:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




longlong * FUN_140b52c90(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140b52cc0;
  }
  else {
LAB_140b52cc0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 3;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140b52ce8;
  }
  _invalid_parameter_noinfo();
LAB_140b52ce8:
  param_1[1] = param_1[1] + param_2 * 3;
  return param_1;
}




void FUN_140b52d70(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140b52e00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140b52e90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140b52f20(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140b52fb0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 3)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 * 3);
  return;
}




void FUN_140b53050(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140b530f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 * 0x58);
  return;
}




void FUN_140b53180(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140b53220(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_1 * 0x28);
  return;
}




exception * FUN_140b532d0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_140b53300(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_140b533e0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b53440(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b534a0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b53770(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b537b0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b537f0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b53830(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b53880(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b53b30(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b53b70(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b53bb0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b53bf0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140b53c30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    do {
      lVar2 = (param_2 + -1) / 2;
      cVar1 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar2 * 8),param_4);
      if (cVar1 == '\0') break;
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar2 * 8);
      param_2 = lVar2;
    } while (param_3 < lVar2);
    *(undefined8 *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(undefined8 *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




longlong FUN_140b53d20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53d42;
  }
  lVar2 = *plVar1;
LAB_140b53d42:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b53d60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53d82;
  }
  lVar2 = *plVar1;
LAB_140b53d82:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140b53da0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140b53de0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53e02;
  }
  lVar2 = *plVar1;
LAB_140b53e02:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b53e20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53e42;
  }
  lVar2 = *plVar1;
LAB_140b53e42:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




longlong FUN_140b53e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53e82;
  }
  lVar2 = *plVar1;
LAB_140b53e82:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140b53ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53ec2;
  }
  lVar2 = *plVar1;
LAB_140b53ec2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_140b53ee0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140b53f50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_140b53f90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b53fb2;
  }
  lVar2 = *plVar1;
LAB_140b53fb2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 3;
  return param_1;
}




bool FUN_140b53fd0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140b54050(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b54070(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b54080(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b54090(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b540a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b540f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140b54100(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b54122;
  }
  lVar2 = *plVar1;
LAB_140b54122:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140b54140(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b54150(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140b54160(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b54182;
  }
  lVar2 = *plVar1;
LAB_140b54182:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_140b541a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b541c2;
  }
  lVar2 = *plVar1;
LAB_140b541c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140b541e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b54202;
  }
  lVar2 = *plVar1;
LAB_140b54202:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140b54260(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140b54320(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140b543b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140b54470(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_140b54500(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 3)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 3);
  return;
}




void FUN_140b54570(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b54594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140b54690(longlong param_1,longlong param_2)

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




void FUN_140b546f0(longlong param_1,longlong *param_2)

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




void FUN_140b54750(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140b547d0(longlong param_1,longlong param_2)

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




void FUN_140b54840(longlong param_1,longlong param_2)

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




void FUN_140b548a0(longlong param_1,longlong *param_2)

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




longlong * FUN_140b54900(longlong *param_1,longlong param_2)

{
  FUN_140b52ad0(param_1,param_2);
  return param_1;
}




void FUN_140b54920(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b54952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140b549c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b549e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140b54a50(longlong *param_1,longlong param_2)

{
  FUN_140b52b40(param_1,param_2);
  return param_1;
}




longlong * FUN_140b54a70(longlong *param_1,longlong param_2)

{
  FUN_140b52bb0(param_1,param_2);
  return param_1;
}




longlong * FUN_140b54a90(longlong *param_1,longlong param_2)

{
  FUN_140b52c20(param_1,param_2);
  return param_1;
}




longlong * FUN_140b54ab0(longlong *param_1,longlong param_2)

{
  FUN_140b52c90(param_1,param_2);
  return param_1;
}




void FUN_140b54ad0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b54b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




undefined8 * FUN_140b54b70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140b54bb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b54be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140b54c50(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140b54c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140b54ce0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x58)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 0x58);
  return;
}




void FUN_140b54d60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140b54df0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140b74910);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_140b54e70(undefined8 *param_1)

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




undefined8 * FUN_140b54eb0(undefined8 *param_1)

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




undefined8 * FUN_140b54ef0(undefined8 *param_1)

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




void * FUN_140b55040(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b55080(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b550c0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b55110(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b55360(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b553a0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b553e0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b55420(void *param_1,longlong param_2,void *param_3)

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




void FUN_140b55460(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if ((cVar2 != '\0') && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_3,*param_2);
  if ((cVar2 != '\0') && (param_3 != param_2)) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if ((cVar2 != '\0') && (param_2 != param_1)) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}




void FUN_140b554f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined *param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    cVar2 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar3 * 8),*(undefined8 *)(param_1 + -8 + lVar3 * 8));
    if (cVar2 != '\0') {
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
    cVar2 = (*(code *)param_5)(*(undefined8 *)(param_1 + lVar3 * 8),param_4);
    if (cVar2 == '\0') break;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar3 * 8);
    lVar1 = lVar3;
  }
  *(undefined8 *)(param_1 + lVar1 * 8) = param_4;
  return;
}




void * FUN_140b555d0(void *param_1,longlong param_2,longlong param_3)

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




undefined2 * FUN_140b55610(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined2 *)((longlong)param_1 + 3)) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 1);
    }
    param_3 = (undefined2 *)((longlong)param_3 + 3);
  }
  return param_3;
}




void FUN_140b55660(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,undefined *param_5)

{
  *param_3 = *param_1;
  FUN_140b554f0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4,param_5);
  return;
}




longlong FUN_140b55690(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b556b2;
  }
  lVar2 = *plVar1;
LAB_140b556b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_140b556d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b556f2;
  }
  lVar2 = *plVar1;
LAB_140b556f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong FUN_140b55710(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140b55732;
  }
  lVar2 = *plVar1;
LAB_140b55732:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140b55750(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b55770(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b55790(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b557b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b557d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b557f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b55810(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b55830(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140b55850(longlong param_1,ulonglong param_2)

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
      FUN_140b52120();
    }
    lVar1 = FUN_140b54320(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140b558b0(longlong param_1,ulonglong param_2)

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
      FUN_140b52200();
    }
    lVar1 = FUN_140b54260(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140b55910(longlong param_1,ulonglong param_2)

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
      FUN_140b52270();
    }
    lVar1 = FUN_140b543b0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140b55980(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_140b559b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140b559b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 FUN_140b55a00(longlong param_1,ulonglong param_2)

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
      FUN_140b52460();
    }
    lVar1 = FUN_140b54470(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_140b55a60(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 != 0) {
    if (0x5555555555555555 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140b52510();
    }
    lVar1 = FUN_140b54500(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 2;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    *(ulonglong *)(param_1 + 0x28) = param_2 + lVar1;
  }
  return uVar2;
}




longlong * FUN_140b55ad0(longlong *param_1)

{
  FUN_140b54570(param_1);
  return param_1;
}




undefined8 * FUN_140b55b00(undefined8 *param_1)

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




undefined8 * FUN_140b55b50(undefined8 *param_1)

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




undefined8 * FUN_140b55b90(undefined8 *param_1)

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




longlong * FUN_140b55bd0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140b55c3a;
  }
  _invalid_parameter_noinfo();
LAB_140b55c3a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b55c70(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b55ce0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140b55d20(longlong *param_1)

{
  FUN_140b549c0(param_1);
  return param_1;
}




longlong * FUN_140b55d40(longlong *param_1)

{
  FUN_140b54920(param_1);
  return param_1;
}




longlong * FUN_140b55d60(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140b55dca;
  }
  _invalid_parameter_noinfo();
LAB_140b55dca:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b55e00(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b55e70(undefined8 *param_1)

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




longlong * FUN_140b55eb0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140b55f1a;
  }
  _invalid_parameter_noinfo();
LAB_140b55f1a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b55f50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b55fb0(undefined8 *param_1)

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




longlong * FUN_140b55ff0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140b5605a;
  }
  _invalid_parameter_noinfo();
LAB_140b5605a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b56090(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140b560f0(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar1 = lVar3 + param_3 * 3;
  if (uVar1 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140b5615d;
  }
  _invalid_parameter_noinfo();
LAB_140b5615d:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b56190(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b56200(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140b56240(longlong *param_1)

{
  FUN_140b54ad0(param_1);
  return param_1;
}




undefined8 * FUN_140b56260(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140b562b0(longlong *param_1)

{
  FUN_140b54c50(param_1);
  return param_1;
}




longlong * FUN_140b562d0(longlong *param_1)

{
  FUN_140b54bb0(param_1);
  return param_1;
}




void FUN_140b562f0(void)

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




void FUN_140b56350(void)

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




undefined8 * FUN_140b563b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140b56430(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b56480(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b564d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140b56520(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140b74970);
  }
  FUN_140b54c50(param_3);
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
        goto LAB_140b5670c;
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
LAB_140b5670c:
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
            FUN_140b54840((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140b548a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_140b54840((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140b548a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140b54840((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_140b548a0((longlong)param_1,plVar7);
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




exception * FUN_140b568e0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140b56940(void)

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




undefined8 * FUN_140b569a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_140b56a20(longlong *param_1)

{
  FUN_140b54920(param_1);
  return param_1;
}




longlong * FUN_140b56a40(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140b549c0(param_1);
  return param_2;
}




longlong * FUN_140b56a70(longlong *param_1)

{
  FUN_140b54ad0(param_1);
  return param_1;
}




longlong * FUN_140b56a90(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140b54570(param_1);
  return param_2;
}




longlong * FUN_140b56ac0(longlong *param_1)

{
  FUN_140b54bb0(param_1);
  return param_1;
}




longlong * FUN_140b56ae0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140b54c50(param_1);
  return param_2;
}




void FUN_140b56b10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140b56b10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_140b56b60(undefined8 *param_1)

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




undefined8 * FUN_140b56bb0(undefined8 *param_1)

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




undefined8 * FUN_140b56c00(undefined8 *param_1)

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




void * FUN_140b56c50(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b56c90(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b56cd0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b56da0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b56e10(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b56e80(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140b56ef0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_140b56f70(longlong param_1,undefined8 *param_2)

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




void FUN_140b57030(longlong param_1,undefined1 *param_2,undefined *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined1 *)(param_1 + 1);
  if (puVar4 != param_2) {
    uVar5 = (longlong)puVar4 - param_1;
    do {
      uVar5 = uVar5 + 1;
      iVar2 = (*(code *)param_3)(uVar5 & 0xffffffff);
      puVar3 = (undefined1 *)((longlong)iVar2 % (longlong)uVar5 + param_1);
      if (puVar4 != puVar3) {
        uVar1 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != param_2);
  }
  return;
}




void FUN_140b570c0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_1 + 4);
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
    puVar1 = (undefined4 *)(param_1 + ((ulonglong)uVar3 % (ulonglong)uVar6) * 4);
    if (puVar7 != puVar1) {
      uVar2 = *puVar7;
      *puVar7 = *puVar1;
      *puVar1 = uVar2;
    }
    puVar7 = puVar7 + 1;
    uVar6 = uVar6 + 1;
  } while( true );
}




void FUN_140b57170(undefined2 *param_1,longlong param_2,undefined2 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = *param_3;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 1);
    }
    param_1 = (undefined2 *)((longlong)param_1 + 3);
  }
  return;
}




void * FUN_140b57300(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b57340(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b57380(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b573c0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140b57400(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_140b55460(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_140b55460(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_140b55460(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_140b55460(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_140b55460(param_1,param_2,param_3,param_4);
  return;
}




void FUN_140b574e0(longlong param_1,longlong param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_140b554f0(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
  }
  return;
}




void FUN_140b57560(undefined8 *param_1,undefined8 *param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 1, puVar5 != param_2)) {
    do {
      uVar1 = *puVar5;
      cVar3 = (*(code *)param_3)(uVar1,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(uVar1,puVar5[-1]);
        puVar2 = puVar5;
        while (cVar3 != '\0') {
          *puVar2 = puVar2[-1];
          cVar3 = (*(code *)param_3)(uVar1,puVar2[-2]);
          puVar2 = puVar2 + -1;
        }
        *puVar2 = uVar1;
      }
      else {
        lVar4 = (longlong)puVar5 - (longlong)param_1 >> 3;
        if (0 < lVar4) {
          memmove_s(puVar5 + (1 - lVar4),lVar4 * 8,param_1,lVar4 * 8);
        }
        *param_1 = uVar1;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != param_2);
  }
  return;
}




void FUN_140b57670(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  FUN_140b55610(param_1,param_2,param_3);
  return;
}




void FUN_140b57690(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_140b554f0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,uVar1,param_3);
  return;
}




void FUN_140b576c0(undefined8 *param_1)

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




void FUN_140b57700(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140b559b0(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_140b57780(longlong *param_1)

{
  FUN_140b54570(param_1);
  return param_1;
}




void FUN_140b577a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b577c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b577e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b57800(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140b57830(undefined8 *param_1)

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




void FUN_140b57880(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140b578b0(undefined8 *param_1)

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




undefined8 * FUN_140b57900(undefined8 *param_1)

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




undefined8 * FUN_140b579b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b57a10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140b57a50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140b57ab0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140b57ae0(undefined8 *param_1)

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




undefined8 * FUN_140b57b30(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b57b90(undefined8 *param_1)

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




undefined8 * FUN_140b57be0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b57c40(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140b57ca0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140b57ce0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140b562f0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x51) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140b57d40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140b56350();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140b57d80(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
  }
  plVar5 = FUN_140b563b0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140b580c0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140b58120(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140b581a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140b57700((longlong)param_1);
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
    FUN_140b56520(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_140b58350(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140b56940();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140b58390(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
  }
  plVar5 = FUN_140b569a0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140b586d0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140b58730(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140b58780(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140b587d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140b74970);
  }
  FUN_140b549c0(param_3);
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
        goto LAB_140b589bc;
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
LAB_140b589bc:
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
            FUN_140b547d0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140b52840((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140b547d0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140b52840((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140b547d0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140b52840((longlong)param_1,plVar7);
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




void FUN_140b58b90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140b56b10(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_140b58c10(undefined8 *param_1)

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




undefined8 * FUN_140b58c60(undefined8 *param_1)

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




undefined8 * FUN_140b58cb0(undefined8 *param_1)

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




void FUN_140b58d00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined8 *)param_1[1] != (undefined8 *)param_2[1]) {
    FUN_140b56f70(param_1[1],(undefined8 *)param_2[1]);
  }
  return;
}




void FUN_140b58d50(undefined1 *param_1,undefined1 *param_2,undefined *param_3)

{
  if (param_1 != param_2) {
    FUN_140b57030((longlong)param_1,param_2,param_3);
  }
  return;
}




void FUN_140b58d70(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)param_2[1]) {
    FUN_140b570c0(param_1[1],(undefined4 *)param_2[1]);
  }
  return;
}




void FUN_140b58e00(undefined2 *param_1,longlong param_2,undefined2 *param_3)

{
  FUN_140b57170(param_1,param_2,param_3);
  return;
}




longlong FUN_140b58e30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != param_2) {
    lVar1 = param_2;
    do {
      lVar2 = lVar1 + -3;
      *(undefined2 *)((param_3 - param_2) + lVar2) = *(undefined2 *)(lVar1 + -3);
      *(undefined1 *)((param_3 - param_2) + 2 + lVar2) = *(undefined1 *)(lVar1 + -1);
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 3) * -3;
}




void * FUN_140b58f50(longlong param_1,longlong param_2,void *param_3)

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




void * FUN_140b58f90(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b58fd0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b59010(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140b59050(void *param_1,longlong param_2,void *param_3)

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




void FUN_140b59090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar7 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_140b57400(param_2,puVar7,param_3 + -1,param_4);
  puVar8 = puVar7;
  while (puVar9 = puVar8, param_2 < puVar9) {
    cVar3 = (*(code *)param_4)(puVar9[-1],*puVar9);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(*puVar9,puVar9[-1]), puVar8 = puVar9 + -1, cVar3 != '\0')) break;
  }
  do {
    puVar7 = puVar7 + 1;
    puVar8 = puVar7;
    puVar4 = puVar9;
    if (param_3 <= puVar7) break;
    cVar3 = (*(code *)param_4)(*puVar7,*puVar9);
    if ((cVar3 != '\0') || (cVar3 = (*(code *)param_4)(*puVar9,*puVar7), cVar3 != '\0')) break;
  } while( true );
joined_r0x000140b59153:
  puVar2 = puVar8;
  puVar8 = puVar9;
  puVar5 = puVar4;
  if (param_3 <= puVar2) {
joined_r0x000140b59193:
    for (; param_2 < puVar9; puVar9 = puVar9 + -1) {
      puVar8 = puVar8 + -1;
      cVar3 = (*(code *)param_4)(*puVar8,*puVar5);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_4)(*puVar5,*puVar8);
        if (cVar3 != '\0') break;
        puVar5 = puVar5 + -1;
        if (puVar5 != puVar8) {
          uVar1 = *puVar5;
          *puVar5 = *puVar8;
          *puVar8 = uVar1;
        }
      }
    }
    if (puVar9 == param_2) {
      if (puVar2 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar7;
        return;
      }
      if ((puVar7 != puVar2) && (puVar5 != puVar7)) {
        uVar1 = *puVar5;
        *puVar5 = *puVar7;
        *puVar7 = uVar1;
      }
      puVar7 = puVar7 + 1;
      puVar8 = puVar2 + 1;
      puVar4 = puVar5 + 1;
      if (puVar5 != puVar2) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
    }
    else {
      puVar9 = puVar9 + -1;
      if (puVar2 == param_3) {
        puVar4 = puVar5 + -1;
        if (puVar9 != puVar4) {
          uVar1 = *puVar9;
          *puVar9 = *puVar4;
          *puVar4 = uVar1;
        }
        puVar7 = puVar7 + -1;
        puVar8 = puVar2;
        if (puVar4 != puVar7) {
          uVar1 = *puVar4;
          *puVar4 = *puVar7;
          *puVar7 = uVar1;
        }
      }
      else {
        if (puVar2 != puVar9) {
          uVar1 = *puVar2;
          *puVar2 = *puVar9;
          *puVar9 = uVar1;
        }
        puVar8 = puVar2 + 1;
        puVar4 = puVar5;
      }
    }
    goto joined_r0x000140b59153;
  }
  cVar3 = (*(code *)param_4)(*puVar4,*puVar2);
  puVar6 = puVar7;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)param_4)(*puVar2,*puVar4);
    if (cVar3 != '\0') goto joined_r0x000140b59193;
    puVar6 = puVar7 + 1;
    if (puVar7 != puVar2) {
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar1;
    }
  }
  puVar7 = puVar6;
  puVar8 = puVar2 + 1;
  goto joined_r0x000140b59153;
}




void FUN_140b592c0(longlong param_1,longlong param_2,undefined *param_3)

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
      FUN_140b554f0(param_1,lVar2,lVar3,*(undefined8 *)(param_1 + -8 + lVar1),param_3);
    }
  }
  return;
}




void FUN_140b59350(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  FUN_140b55610(param_1,param_2,param_3);
  return;
}




void FUN_140b59370(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    uVar1 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_140b554f0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,uVar1,param_3);
  }
  return;
}




undefined8 * FUN_140b59410(undefined8 *param_1)

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




void FUN_140b59470(undefined8 *param_1)

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




undefined8 * FUN_140b594b0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59500(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59550(undefined8 *param_1)

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




void FUN_140b595b0(undefined8 *param_1)

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




undefined8 * FUN_140b595f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59640(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59690(undefined8 *param_1)

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




undefined8 * FUN_140b596f0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59740(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59790(undefined8 *param_1)

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




void FUN_140b597f0(undefined8 *param_1)

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




undefined8 * FUN_140b59830(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59880(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b598d0(undefined8 *param_1)

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




undefined8 * FUN_140b59930(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140b59980(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140b599d0(longlong param_1)

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




void FUN_140b59a20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b59a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b59a60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140b59b00(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_140b59bf0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140b59ce0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140b59d40(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void FUN_140b59e30(longlong *param_1)

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
  FUN_140b581a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong FUN_140b59ea0(undefined8 param_1,undefined2 *param_2,longlong param_3,undefined2 *param_4)

{
  FUN_140b57170(param_2,param_3,param_4);
  return (longlong)param_2 + param_3 * 3;
}




longlong * FUN_140b59ef0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140b5a04d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140b5a07c;
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
      goto LAB_140b5a04d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140b57d80(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140b5a07c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140b5a0a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140b58b90((longlong)param_1);
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
    FUN_140b587d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140b5a250(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140b5a3ad:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140b5a3dc;
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
      goto LAB_140b5a3ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140b58390(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140b5a3dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140b5a410(undefined8 *param_1)

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




undefined8 * FUN_140b5a460(undefined8 *param_1)

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




undefined8 * FUN_140b5a4b0(undefined8 *param_1)

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




void * FUN_140b5a5c0(undefined8 param_1,longlong param_2,longlong param_3,void *param_4)

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




void * FUN_140b5a630(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140b5a670(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140b5a6b0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void * FUN_140b5a6f0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140b5a730(longlong param_1)

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




void FUN_140b5a780(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  FUN_140b55610(param_1,param_2,param_3);
  return;
}




void FUN_140b5a7a0(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_140b554f0((longlong)param_1,0,lVar2 + -8 >> 3,uVar1,param_3);
  }
  return;
}




void FUN_140b5a810(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar7 = *(undefined8 **)(param_1 + 0x180);
    if (*(undefined8 **)(param_1 + 0x188) < puVar7) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x168);
    while( true ) {
      puVar2 = *(undefined8 **)(param_1 + 0x188);
      if (puVar2 < *(undefined8 **)(param_1 + 0x180)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x168))) {
        _invalid_parameter_noinfo();
      }
      if (puVar7 == puVar2) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar3 = (undefined4 *)*puVar7;
      if ((puVar3 != (undefined4 *)0x0) && (cVar4 = FUN_140b63ef0((longlong)puVar3), cVar4 == '\0')) {
        FUN_140b63eb0((longlong)puVar3);
        *(short *)(puVar3 + 1) = *(short *)(puVar3 + 1) + 1;
        *(short *)((longlong)puVar3 + 0xe) = *(short *)((longlong)puVar3 + 0xe) + 0x1e;
        *(undefined2 *)((longlong)puVar3 + 10) = 2;
        puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
        uVar6 = FUN_140b63e40(puVar3);
        bVar5 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 8),uVar6);
        if (bVar5 < 0x79) {
          lVar8 = **(longlong **)(param_1 + 8);
          uVar6 = FUN_140b63e40(puVar3);
          (**(code **)(lVar8 + 0x38))(*(undefined8 *)(param_1 + 8),uVar6,10);
          puVar3[4] = puVar3[4] + 10;
        }
        else {
          lVar8 = **(longlong **)(param_1 + 8);
          uVar6 = FUN_140b63e40(puVar3);
          (**(code **)(lVar8 + 0x38))(*(undefined8 *)(param_1 + 8),uVar6,0x14);
          puVar3[4] = puVar3[4] + 0x14;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar1;
      }
      if (*(undefined8 **)(lVar8 + 0x20) <= puVar7) {
        _invalid_parameter_noinfo();
      }
      puVar7 = puVar7 + 1;
    }
  }
  return;
}




void FUN_140b5a9a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  CMsg local_448 [1072];
  
  if ((param_2 != 0) && ((*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) & 0xfffffffffffffff8U) != 0)) {
    iVar1 = *(int *)(param_1 + 0x224);
    if (iVar1 == 1) {
      puVar5 = (undefined8 *)FUN_140b51900(param_1 + 0x98,0);
      plVar6 = (longlong *)*puVar5;
    }
    else if (iVar1 == 2) {
      puVar5 = (undefined8 *)
               FUN_140b51900(param_1 + 0x98,
                             (ulonglong)*(uint *)(param_1 + 0x218) % (ulonglong)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3));
      plVar6 = (longlong *)*puVar5;
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      puVar5 = *(undefined8 **)(param_1 + 0xb8);
      if (puVar5 < *(undefined8 **)(param_1 + 0xb0)) {
        _invalid_parameter_noinfo();
      }
      lVar2 = *(longlong *)(param_1 + 0x98);
      puVar3 = *(undefined8 **)(param_1 + 0xb0);
      if (*(undefined8 **)(param_1 + 0xb8) < puVar3) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong *)(param_1 + 0x98) == 0) || (*(longlong *)(param_1 + 0x98) != lVar2)) {
        _invalid_parameter_noinfo();
      }
      if (puVar3 != puVar5) {
        FUN_140b56f70((longlong)puVar3,puVar5);
      }
      puVar5 = (undefined8 *)FUN_140b51900(param_1 + 0x98,0);
      plVar6 = (longlong *)*puVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,0);
      uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
      FUN_140b64d90(local_448);
      FUN_140b64e60(local_448,uVar4);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,local_448);
      FUN_140b64df0((undefined8 *)local_448);
    }
  }
  return;
}




undefined8 FUN_140b5ab30(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x180);
  if (*(undefined8 **)(param_1 + 0x188) < puVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x168);
  lVar6 = 0;
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x188);
    if (puVar2 < *(undefined8 **)(param_1 + 0x180)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x168))) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar6;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    iVar3 = FUN_140b63e40((undefined4 *)*puVar4);
    if (iVar3 == param_2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar6;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar6 = *plVar1;
  }
  if (*(undefined8 **)(lVar6 + 0x20) <= puVar4) {
    _invalid_parameter_noinfo();
  }
  return *puVar4;
}




undefined8 FUN_140b5ac30(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 0x1b0);
  if (*(undefined8 **)(param_1 + 0x1b8) < puVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  lVar6 = 0;
  while( true ) {
    puVar2 = *(undefined8 **)(param_1 + 0x1b8);
    if (puVar2 < *(undefined8 **)(param_1 + 0x1b0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x198))) {
      _invalid_parameter_noinfo();
    }
    if (puVar4 == puVar2) {
      return 0;
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar6;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    iVar3 = FUN_140b63e40((undefined4 *)*puVar4);
    if (iVar3 == param_2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = lVar6;
    }
    else {
      lVar5 = *plVar1;
    }
    if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
      _invalid_parameter_noinfo();
    }
    puVar4 = puVar4 + 1;
  }
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar6 = *plVar1;
  }
  if (*(undefined8 **)(lVar6 + 0x20) <= puVar4) {
    _invalid_parameter_noinfo();
  }
  return *puVar4;
}




longlong * FUN_140b5ad30(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140b5ae00(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140b5aed0(longlong *param_1)

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




void FUN_140b5af90(longlong *param_1)

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




undefined8 * FUN_140b5b050(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140b5b0e0(longlong *param_1)

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




void FUN_140b5b1a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b5b1c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b5b1e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140b5b200(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140b57d80(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140b57d80(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140b57d80(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140b57d80(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140b57d80(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140b57d80(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140b57d80(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140b59ef0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_140b5b520(longlong *param_1)

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
  FUN_140b5a0a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140b5b620(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140b58390(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140b58390(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_140b58390(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_140b58390(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_140b58390(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_140b58390(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_140b58390(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140b5a250(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_140b5b970(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (longlong *)0x0) || (uVar1 < (ulonglong)param_1[3])) || ((ulonglong)param_1[4] < uVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = lVar2;
  puVar3 = *(undefined2 **)(param_4 + 8);
  if ((puVar3 < (undefined2 *)param_1[3]) || ((undefined2 *)param_1[4] < puVar3)) {
    _invalid_parameter_noinfo();
  }
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  puVar4 = (undefined2 *)param_2[1];
  if (puVar4 != puVar3) {
    puVar5 = (undefined2 *)param_1[4];
    puVar6 = puVar3;
    while (puVar6 != puVar5) {
      puVar7 = (undefined2 *)((longlong)puVar6 + 3);
      *(undefined2 *)((longlong)puVar4 + (-3 - (longlong)puVar3) + (longlong)puVar7) = *puVar6;
      *(undefined1 *)((longlong)puVar4 + (-1 - (longlong)puVar3) + (longlong)puVar7) = *(undefined1 *)(puVar6 + 1);
      puVar6 = puVar7;
    }
    param_1[4] = (longlong)puVar4 + (((longlong)puVar5 - (longlong)puVar3) / 3) * 3;
  }
  return param_2;
}




void FUN_140b5ba90(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140b5bac0(undefined8 *param_1)

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




undefined8 * FUN_140b5bb10(undefined8 *param_1)

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




undefined8 * FUN_140b5bb60(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140b52120();
    }
    lVar2 = FUN_140b54320(param_1 + 2,uVar4);
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
    pvVar3 = FUN_140b5a5c0(param_1,(longlong)&local_28,(longlong)&local_38,(void *)param_1[3]);
    param_1[4] = pvVar3;
  }
  return param_1;
}




void FUN_140b5bc90(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140b52120();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140b54320(param_1 + 0x10,uVar8);
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
      FUN_140b5a630(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140b5a630(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140b56da0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140b5bf40(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140b52200();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140b54260(param_1 + 0x10,uVar8);
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
      FUN_140b5a670(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140b5a670(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140b56e10(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140b5c1e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140b52270();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140b543b0(param_1 + 0x10,uVar8);
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
      FUN_140b5a6b0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140b5a6b0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140b56e80(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_140b5c490(undefined8 *param_1)

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




void FUN_140b5c4e0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140b52460();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140b54470(param_1 + 0x10,uVar8);
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
      FUN_140b5a6f0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140b5a6f0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140b56ef0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined4 * FUN_140b5c780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_140b5bb60((undefined8 *)(param_1 + 2),(undefined8 *)(param_2 + 2));
  return param_1;
}




void FUN_140b5c7c0(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  FUN_140b55610(param_2,param_3,param_4);
  return;
}




void * FUN_140b5c800(void *param_1,uint param_2)

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




undefined8 FUN_140b5c890(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x88))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x88);
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
  puVar8 = *(undefined8 **)(param_1 + 0x88);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x88);
    local_28 = *(longlong *)(param_1 + 0x58);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x88);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x58))) {
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




void FUN_140b5c9a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) & 0xfffffffffffffff8U) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x180);
    if (*(undefined8 **)(param_1 + 0x188) < puVar4) {
      _invalid_parameter_noinfo();
    }
    plVar1 = *(longlong **)(param_1 + 0x168);
    while( true ) {
      puVar2 = *(undefined8 **)(param_1 + 0x188);
      if (puVar2 < *(undefined8 **)(param_1 + 0x180)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x168))) {
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
      if ((void *)*puVar4 != (void *)0x0) {
        FUN_140b64150((void *)*puVar4);
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
    FUN_140b5b0e0((longlong *)(param_1 + 0x168));
  }
  plVar1 = (longlong *)(param_1 + 0x198);
  if ((*(longlong *)(param_1 + 0x1b8) - *(longlong *)(param_1 + 0x1b0) & 0xfffffffffffffff8U) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x1b0);
    if (*(undefined8 **)(param_1 + 0x1b8) < puVar4) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)*plVar1;
    while( true ) {
      puVar2 = *(undefined8 **)(param_1 + 0x1b8);
      if (puVar2 < *(undefined8 **)(param_1 + 0x1b0)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar1)) {
        _invalid_parameter_noinfo();
      }
      if (puVar4 == puVar2) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar3;
      }
      if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      if ((void *)*puVar4 != (void *)0x0) {
        FUN_140b64150((void *)*puVar4);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar3;
      }
      if (*(undefined8 **)(lVar5 + 0x20) <= puVar4) {
        _invalid_parameter_noinfo();
      }
      puVar4 = puVar4 + 1;
    }
    FUN_140b5b0e0(plVar1);
  }
  return;
}




undefined8 * FUN_140b5cb70(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_140b5b200(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_140b5cc70(longlong *param_1)

{
  FUN_140b5b520(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140b5cca0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint local_res8;
  undefined1 local_resc;
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
  plVar5 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_res8 = *param_2;
    local_resc = 0;
    local_38 = plVar5;
    puStack_30 = puVar4;
    plVar3 = FUN_140b5b620(param_1,local_28,(longlong *)&local_38,&local_res8);
    plVar5 = (longlong *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
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




void FUN_140b5cda0(longlong *param_1)

{
  FUN_140b59e30(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b5cdd0(undefined8 *param_1)

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




void FUN_140b5ce10(longlong *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar1 = (undefined2 *)param_1[4];
  if (puVar1 < (undefined2 *)param_1[3]) {
    _invalid_parameter_noinfo();
  }
  puVar2 = (undefined2 *)param_1[3];
  if ((undefined2 *)param_1[4] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((puVar2 < (undefined2 *)param_1[3]) || ((undefined2 *)param_1[4] < puVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *param_1;
  if ((puVar1 < (undefined2 *)param_1[3]) || ((undefined2 *)param_1[4] < puVar1)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (puVar2 != puVar1) {
    puVar4 = (undefined2 *)param_1[4];
    puVar5 = puVar1;
    while (puVar5 != puVar4) {
      puVar6 = (undefined2 *)((longlong)puVar5 + 3);
      *(undefined2 *)((longlong)puVar2 + (-3 - (longlong)puVar1) + (longlong)puVar6) = *puVar5;
      *(undefined1 *)((longlong)puVar2 + (-1 - (longlong)puVar1) + (longlong)puVar6) = *(undefined1 *)(puVar5 + 1);
      puVar5 = puVar6;
    }
    param_1[4] = (longlong)puVar2 + (((longlong)puVar4 - (longlong)puVar1) / 3) * 3;
  }
  return;
}




undefined8 * FUN_140b5cf00(undefined8 *param_1)

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
  lVar2 = FUN_140b562f0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140b5cf80(undefined8 *param_1)

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
  lVar2 = FUN_140b56350();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140b5d000(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140b5bc90((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140b5d0f4;
  }
  _invalid_parameter_noinfo();
LAB_140b5d0f4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140b5d130(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140b5bf40((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140b5d224;
  }
  _invalid_parameter_noinfo();
LAB_140b5d224:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140b5d260(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140b5c1e0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140b5d354;
  }
  _invalid_parameter_noinfo();
LAB_140b5d354:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140b5d390(undefined8 *param_1)

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
  lVar2 = FUN_140b56940();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_140b5d410(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140b5c4e0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140b5d504;
  }
  _invalid_parameter_noinfo();
LAB_140b5d504:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined4 * FUN_140b5d540(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *param_1 = *param_2;
  FUN_140b5bb60((undefined8 *)(param_1 + 2),param_3);
  return param_1;
}




void FUN_140b5d570(longlong param_1,longlong param_2,ulonglong param_3,undefined3 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0x28) - lVar2) / 3;
  }
  if (param_3 != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x20);
    lVar2 = ((longlong)puVar4 - lVar2) / 3;
    if (0x5555555555555555U - lVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_140b52510();
    }
    uVar1 = lVar2 + param_3;
    if (uVar6 < uVar1) {
      if (0x5555555555555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (uVar6 < uVar1) {
        uVar6 = uVar1;
      }
      puVar4 = (undefined2 *)FUN_140b54500(param_1 + 0x10,uVar6);
      local_res8 = (*(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18)) / 3;
      FUN_140b57170((undefined2 *)((longlong)puVar4 + local_res8 * 3),param_3,(undefined2 *)param_4);
      FUN_140b55610(*(undefined2 **)(param_1 + 0x18),*(undefined2 **)(param_2 + 8),puVar4);
      FUN_140b55610(*(undefined2 **)(param_2 + 8),*(undefined2 **)(param_1 + 0x20),(undefined2 *)((longlong)puVar4 + (local_res8 + param_3) * 3));
      pvVar3 = *(void **)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      *(ulonglong *)(param_1 + 0x28) = (longlong)puVar4 + uVar6 * 3;
      *(ulonglong *)(param_1 + 0x20) = (longlong)puVar4 + (param_3 + (lVar2 - (longlong)pvVar3) / 3) * 3;
      *(undefined2 **)(param_1 + 0x18) = puVar4;
    }
    else if ((ulonglong)(((longlong)puVar4 - *(longlong *)(param_2 + 8)) / 3) < param_3) {
      local_res8 = CONCAT53(local_res8._3_5_,*param_4);
      FUN_140b55610(*(undefined2 **)(param_2 + 8),puVar4,(undefined2 *)((longlong)*(undefined2 **)(param_2 + 8) + param_3 * 3));
      FUN_140b57170(*(undefined2 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined2 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8)) / 3,
                    (undefined2 *)&local_res8);
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3 * 3;
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (puVar4 = *(undefined2 **)(param_2 + 8); puVar4 != (undefined2 *)(lVar2 + param_3 * -3); puVar4 = (undefined2 *)((longlong)puVar4 + 3)) {
        *puVar4 = (undefined2)local_res8;
        *(undefined1 *)(puVar4 + 1) = local_res8._2_1_;
      }
    }
    else {
      local_res8 = CONCAT53(local_res8._3_5_,*param_4);
      puVar7 = (undefined2 *)((longlong)puVar4 + param_3 * -3);
      puVar5 = FUN_140b55610(puVar7,puVar4,puVar4);
      *(undefined2 **)(param_1 + 0x20) = puVar5;
      FUN_140b58e30(*(longlong *)(param_2 + 8),(longlong)puVar7,(longlong)puVar4);
      puVar5 = *(undefined2 **)(param_2 + 8);
      puVar4 = (undefined2 *)((longlong)puVar5 + param_3 * 3);
      for (; puVar5 != puVar4; puVar5 = (undefined2 *)((longlong)puVar5 + 3)) {
        *puVar5 = (undefined2)local_res8;
        *(undefined1 *)(puVar5 + 1) = local_res8._2_1_;
      }
    }
  }
  return;
}




undefined8 * FUN_140b5d8c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = *param_5;
  FUN_140b5bb60(param_1 + 4,(undefined8 *)(param_5 + 2));
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0;
  return param_1;
}




void FUN_140b5d920(longlong param_1)

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




void FUN_140b5d970(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar1 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar1 = lVar1 >> 3;
    if (lVar1 < 0x21) {
LAB_140b5da35:
      if (1 < lVar1) {
        FUN_140b57560(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_140b592c0((longlong)param_1,(longlong)param_2,param_4);
        FUN_140b5a7a0(param_1,(longlong)param_2,param_4);
        return;
      }
      goto LAB_140b5da35;
    }
    FUN_140b59090(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_140b5d970(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_140b5d970(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_140b5da90(longlong *param_1)

{
  FUN_140b5b520(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b5dac0(longlong *param_1)

{
  FUN_140b59e30(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b5daf0(longlong param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  short sVar15;
  uint local_res8 [2];
  CMsg local_448 [1072];
  
  if ((*(int *)(param_1 + 0x10) == 2) && (param_3 == *(int *)(param_1 + 0x218) + 1)) {
    puVar12 = (undefined4 *)FUN_140b5ab30(param_1,param_2);
    if (puVar12 != (undefined4 *)0x0) {
      cVar4 = FUN_140b63ef0((longlong)puVar12);
      if (cVar4 == '\0') {
        local_res8[0] = *(uint *)(param_1 + 0x218);
        pcVar13 = (char *)FUN_140b5cca0((longlong *)(param_1 + 0x1c8),local_res8);
        if (*pcVar13 == param_4) {
          FUN_140b63ea0((longlong)puVar12);
          uVar6 = FUN_140b63ec0((longlong)puVar12);
          if ((ushort)(uVar6 - 1) < 0x1e) {
            sVar15 = *(short *)(&DAT_140b76026 + (ulonglong)uVar6 * 2);
          }
          else {
            sVar15 = 0;
          }
          *(short *)(puVar12 + 1) = *(short *)(puVar12 + 1) + sVar15;
          *(undefined2 *)((longlong)puVar12 + 10) = 1;
          *(undefined2 *)(puVar12 + 3) = 0;
          puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
          uVar9 = FUN_140b63e40(puVar12);
          bVar5 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 8),uVar9);
          if (bVar5 < 0x79) {
            *(undefined2 *)(puVar12 + 3) = 0x14;
            puVar12[4] = puVar12[4] + 0x14;
          }
          else {
            *(undefined2 *)(puVar12 + 3) = 0x28;
            puVar12[4] = puVar12[4] + 0x28;
          }
        }
        else {
          FUN_140b63eb0((longlong)puVar12);
          *(short *)(puVar12 + 1) = *(short *)(puVar12 + 1) + 1;
          *(undefined2 *)((longlong)puVar12 + 10) = 2;
          puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
          uVar9 = FUN_140b63e40(puVar12);
          bVar5 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 8),uVar9);
          if (bVar5 < 0x79) {
            *(undefined2 *)(puVar12 + 3) = 10;
            puVar12[4] = puVar12[4] + 10;
          }
          else {
            *(undefined2 *)(puVar12 + 3) = 0x14;
            puVar12[4] = puVar12[4] + 0x14;
          }
        }
        lVar3 = **(longlong **)(param_1 + 8);
        uVar7 = *(undefined2 *)(puVar12 + 3);
        uVar9 = FUN_140b63e40(puVar12);
        (**(code **)(lVar3 + 0x38))(*(undefined8 *)(param_1 + 8),uVar9,uVar7);
        DVar10 = timeGetTime();
        iVar1 = *(int *)(param_1 + 0x220);
        DVar11 = timeGetTime();
        *(short *)((longlong)puVar12 + 0xe) = *(short *)((longlong)puVar12 + 0xe) + (short)((ulonglong)(DVar11 - *(int *)(param_1 + 0x220)) / 1000);
        if ((ulonglong)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3) <= (ulonglong)(*(int *)(param_1 + 0x218) + 1)) {
          FUN_140b64210(local_448);
          uVar7 = FUN_140b63ee0((longlong)puVar12);
          uVar8 = FUN_140b63e50((longlong)puVar12);
          uVar14 = FUN_140b64490(local_448,uVar8,uVar7,*(undefined2 *)((longlong)puVar12 + 10),*(undefined2 *)(puVar12 + 4));
          if ((char)uVar14 == '\0') {
            log_InlineLogERROR(&DAT_140b6b6c0);
          }
          else {
            lVar3 = **(longlong **)(param_1 + 8);
            uVar9 = FUN_140b63e40(puVar12);
            (**(code **)(lVar3 + 0x60))(*(undefined8 *)(param_1 + 8),uVar9,local_448);
          }
          FUN_140b64290((undefined8 *)local_448);
        }
        if (3 < 0x1e - ((DVar10 - iVar1) / 1000 & 0xffff)) {
          FUN_140b5a9a0(param_1,param_2);
        }
        FUN_140b63f00((longlong)puVar12,1);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2);
      }
    }
  }
  return;
}




undefined8 * FUN_140b5dda0(undefined8 *param_1)

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
  lVar2 = FUN_140b56350();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140b5de20(longlong *param_1,undefined8 *param_2)

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
  FUN_140b5d000(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140b5ded0(longlong *param_1,undefined4 *param_2)

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
  FUN_140b5d130(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140b5df80(longlong *param_1,undefined8 *param_2)

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
  FUN_140b5d260(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_140b5e030(undefined8 *param_1)

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
  lVar2 = FUN_140b56940();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140b5e0b0(longlong *param_1,undefined4 *param_2)

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
  FUN_140b5d410(param_1,local_18,&local_28,param_2);
  return;
}




longlong * FUN_140b5e160(longlong *param_1,longlong *param_2,longlong *param_3,undefined3 *param_4)

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
  if (lVar5 / 3 + lVar6 != lVar6) {
    if ((ulonglong)param_1[4] < uVar1) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar4 = (longlong)(param_3[1] - uVar1) / 3;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_140b5d570((longlong)param_1,(longlong)&local_28,1,param_4);
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
  uVar1 = uVar1 + lVar4 * 3;
  if (uVar1 <= *(ulonglong *)(lVar6 + 0x20)) {
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140b5e278;
  }
  _invalid_parameter_noinfo();
LAB_140b5e278:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140b5e2c0(undefined8 param_1,longlong param_2)

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




undefined8 * FUN_140b5e310(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140b74970);
  }
  FUN_140b54570(param_3);
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
        goto LAB_140b5e4fc;
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
LAB_140b5e4fc:
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
            FUN_140b54690((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(*plVar8 + 0x50) != '\x01') || (*(char *)(plVar8[2] + 0x50) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x50) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140b546f0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(plVar8[2] + 0x50) = 1;
              FUN_140b54690((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 10) = 0;
          }
        }
        else {
          if ((char)plVar8[10] == '\0') {
            *(undefined1 *)(plVar8 + 10) = 1;
            *(undefined1 *)(plVar7 + 10) = 0;
            FUN_140b546f0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x51) == '\0') {
            if ((*(char *)(plVar8[2] + 0x50) != '\x01') || (*(char *)(*plVar8 + 0x50) != '\x01')) {
              if (*(char *)(*plVar8 + 0x50) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x50) = 1;
                *(undefined1 *)(plVar8 + 10) = 0;
                FUN_140b54690((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 10) = (char)plVar7[10];
              *(undefined1 *)(plVar7 + 10) = 1;
              *(undefined1 *)(*plVar8 + 0x50) = 1;
              FUN_140b546f0((longlong)param_1,plVar7);
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




undefined8 * FUN_140b5e700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    *(undefined4 *)(puVar1 + 3) = *param_5;
    FUN_140b5bb60(puVar1 + 4,(undefined8 *)(param_5 + 2));
    *(undefined1 *)(puVar1 + 10) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x51) = 0;
  }
  return puVar1;
}




void FUN_140b5e7a0(longlong *param_1,longlong *param_2,undefined *param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_140b5d970((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_140b5e800(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140b5de20((longlong *)*param_1,param_2);
  return param_1;
}




void FUN_140b5e820(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  short sVar13;
  int iVar14;
  CMsg local_458 [1072];
  
  if ((*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) & 0xfffffffffffffff8U) != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x188);
    if (puVar11 < *(undefined8 **)(param_1 + 0x180)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = *(longlong *)(param_1 + 0x168);
    puVar1 = *(undefined8 **)(param_1 + 0x180);
    if (*(undefined8 **)(param_1 + 0x188) < puVar1) {
      _invalid_parameter_noinfo();
    }
    if ((lVar10 == 0) || (lVar10 != *(longlong *)(param_1 + 0x168))) {
      _invalid_parameter_noinfo();
    }
    FUN_140b5d970(puVar1,puVar11,(longlong)puVar11 - (longlong)puVar1 >> 3,FUN_140b51800);
    puVar11 = *(undefined8 **)(param_1 + 0x180);
    if (*(undefined8 **)(param_1 + 0x188) < puVar11) {
      _invalid_parameter_noinfo();
    }
    plVar12 = *(longlong **)(param_1 + 0x168);
    FUN_140b64210(local_458);
    uVar8 = FUN_140b64430(local_458);
    if ((char)uVar8 == '\0') {
      log_InlineLogERROR(&DAT_140b6b6c0);
    }
    else {
      iVar14 = 0;
      do {
        puVar1 = *(undefined8 **)(param_1 + 0x188);
        if (puVar1 < *(undefined8 **)(param_1 + 0x180)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar12 == (longlong *)0x0) || (plVar12 != *(longlong **)(param_1 + 0x168))) {
          _invalid_parameter_noinfo();
        }
        if (puVar11 == puVar1) break;
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar12;
        }
        if (*(undefined8 **)(lVar10 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        puVar2 = (undefined4 *)*puVar11;
        if (puVar2 != (undefined4 *)0x0) {
          lVar10 = **(longlong **)(param_1 + 8);
          uVar5 = FUN_140b63ee0((longlong)puVar2);
          uVar6 = FUN_140b63e50((longlong)puVar2);
          uVar7 = FUN_140b63e40(puVar2);
          pcVar9 = (char *)(**(code **)(lVar10 + 0x48))(*(undefined8 *)(param_1 + 8),uVar7);
          FUN_140b64730((longlong)local_458,pcVar9,uVar6,uVar5);
        }
        iVar14 = iVar14 + 1;
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar12;
        }
        if (*(undefined8 **)(lVar10 + 0x20) <= puVar11) {
          _invalid_parameter_noinfo();
        }
        puVar11 = puVar11 + 1;
      } while (iVar14 < 3);
      plVar12 = *(longlong **)(param_1 + 0x180);
      if (*(longlong **)(param_1 + 0x188) < plVar12) {
        _invalid_parameter_noinfo();
      }
      plVar3 = *(longlong **)(param_1 + 0x168);
      sVar13 = 1;
      while( true ) {
        plVar4 = *(longlong **)(param_1 + 0x188);
        if (plVar4 < *(longlong **)(param_1 + 0x180)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 0x168))) {
          _invalid_parameter_noinfo();
        }
        if (plVar12 == plVar4) break;
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar3;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar3;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        uVar5 = FUN_140b63ee0(*plVar12);
        uVar6 = FUN_140b63e50(*plVar12);
        FUN_140b64910((longlong)local_458,sVar13,uVar6,uVar5);
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar3;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar4 = *(longlong **)(param_1 + 8);
        lVar10 = *plVar4;
        uVar7 = FUN_140b63e40((undefined4 *)*plVar12);
        (**(code **)(lVar10 + 0x60))(plVar4,uVar7,local_458);
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar3;
        }
        if (*(longlong **)(lVar10 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar12 = plVar12 + 1;
        sVar13 = sVar13 + 1;
      }
    }
    FUN_140b64290((undefined8 *)local_458);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b5eb80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  IStringManager *pIVar17;
  char *pcVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined1 auStackY_cd8 [32];
  CMsg local_c68 [1072];
  char local_838 [1023];
  undefined1 local_439;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_140b764b8 ^ (ulonglong)auStackY_cd8;
  if ((param_1[0x31] - param_1[0x30] & 0xfffffffffffffff8U) == 0) {
    return;
  }
  FUN_140b57700((longlong)(param_1 + 0x39));
  FUN_140b5aed0(param_1 + 0x27);
  FUN_140b5af90(param_1 + 0x1f);
  puVar1 = (undefined8 *)param_1[0x31];
  if (puVar1 < (undefined8 *)param_1[0x30]) {
    _invalid_parameter_noinfo();
  }
  lVar22 = param_1[0x2d];
  puVar2 = (undefined8 *)param_1[0x30];
  if ((undefined8 *)param_1[0x31] < puVar2) {
    _invalid_parameter_noinfo();
  }
  if ((lVar22 == 0) || (lVar22 != param_1[0x2d])) {
    _invalid_parameter_noinfo();
  }
  FUN_140b5d970(puVar2,puVar1,(longlong)puVar1 - (longlong)puVar2 >> 3,FUN_140b51800);
  plVar23 = (longlong *)param_1[0x30];
  if ((longlong *)param_1[0x31] < plVar23) {
    _invalid_parameter_noinfo();
  }
  plVar3 = (longlong *)param_1[0x2d];
  lVar22 = 0;
  if (plVar3 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    lVar22 = *plVar3;
  }
  if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
    _invalid_parameter_noinfo();
  }
  puVar4 = (undefined4 *)*plVar23;
  bVar5 = false;
  plVar16 = (longlong *)param_1[0x25];
  if (plVar16 != (longlong *)0x0) {
    if (puVar4 == (undefined4 *)0x0) goto LAB_140b5efaf;
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,2);
    iVar10 = (**(code **)(*plVar16 + 0x50))(plVar16);
    if (iVar10 == 0) {
      bVar5 = true;
    }
    else {
      plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],3);
      uVar11 = (**(code **)(*plVar16 + 0x50))(plVar16);
      uVar7 = FUN_140b63e50((longlong)puVar4);
      if (uVar11 < uVar7) {
        bVar5 = true;
      }
      else {
        plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],3);
        uVar11 = (**(code **)(*plVar16 + 0x50))(plVar16);
        uVar7 = FUN_140b63e50((longlong)puVar4);
        if (uVar7 == uVar11) {
          plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],4);
          uVar11 = (**(code **)(*plVar16 + 0x50))(plVar16);
          uVar7 = FUN_140b63ee0((longlong)puVar4);
          bVar5 = false;
          if (uVar7 < uVar11) {
            bVar5 = true;
          }
        }
      }
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    uVar12 = FUN_140b63e40(puVar4);
    *(undefined4 *)(param_1 + 0x26) = uVar12;
  }
  if (((bVar5) && (plVar16 = (longlong *)param_1[0x25], plVar16 != (longlong *)0x0)) && (puVar4 != (undefined4 *)0x0)) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,7);
    pIVar17 = theInstance();
    lVar22 = *(longlong *)param_1[1];
    (**(code **)(*plVar16 + 0x78))(plVar16);
    FUN_140b63e50((longlong)puVar4);
    FUN_140b63ee0((longlong)puVar4);
    FUN_140b63ee0((longlong)puVar4);
    uVar12 = FUN_140b63e40(puVar4);
    (**(code **)(lVar22 + 0x48))(param_1[1],uVar12);
    pcVar18 = (char *)(*(code *)**(undefined8 **)pIVar17)(pIVar17,"STR_COMPETION_HISTORY_UPDATE");
    _snprintf(local_438,0x400,pcVar18);
    local_39 = 0;
    (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],local_438,0xff0000,0x7db);
    plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],2);
    lVar22 = *plVar16;
    uVar12 = FUN_140b63e40(puVar4);
    (**(code **)(lVar22 + 0xb8))(plVar16,uVar12);
    plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],3);
    lVar22 = *plVar16;
    uVar6 = FUN_140b63e50((longlong)puVar4);
    (**(code **)(lVar22 + 200))(plVar16,uVar6);
    plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],4);
    lVar22 = *plVar16;
    uVar6 = FUN_140b63ee0((longlong)puVar4);
    (**(code **)(lVar22 + 200))(plVar16,uVar6);
    plVar16 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],7);
    lVar22 = *plVar16;
    lVar24 = *(longlong *)param_1[1];
    uVar12 = FUN_140b63e40(puVar4);
    uVar19 = (**(code **)(lVar24 + 0x48))(param_1[1],uVar12);
    (**(code **)(lVar22 + 0x80))(plVar16,uVar19);
    (**(code **)(*(longlong *)param_1[0x25] + 0x38))((longlong *)param_1[0x25],0);
  }
LAB_140b5efaf:
  iVar10 = 1;
  FUN_140b5e820((longlong)param_1);
  FUN_140b64210(local_c68);
  uVar19 = FUN_140b646e0(local_c68);
  plVar16 = (longlong *)param_1[0x25];
  if ((plVar16 != (longlong *)0x0) && ((char)uVar19 != '\0')) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x10))(plVar16,4);
    plVar20 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],3);
    plVar21 = (longlong *)(**(code **)(*(longlong *)param_1[0x25] + 0x10))((longlong *)param_1[0x25],7);
    (**(code **)(*plVar16 + 0x50))(plVar16);
    (**(code **)(*plVar20 + 0x50))(plVar20);
    (**(code **)(*plVar21 + 0x78))(plVar21);
    _snprintf(local_838,0x400,"%s %d %d");
    local_439 = 0;
    FUN_140b648b0((longlong)local_c68,local_838);
  }
  do {
    plVar16 = (longlong *)param_1[0x31];
    if (plVar16 < (longlong *)param_1[0x30]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)param_1[0x2d])) {
      _invalid_parameter_noinfo();
    }
    if (plVar23 == plVar16) {
      FUN_140b5c9a0((longlong)param_1);
      FUN_140b64290((undefined8 *)local_c68);
      return;
    }
    lVar22 = 0;
    uVar6 = 0;
    if (iVar10 == 1) {
      uVar6 = 900;
LAB_140b5f0f2:
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar22 = *plVar3;
      }
      if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      plVar16 = (longlong *)param_1[1];
      lVar22 = *plVar16;
      uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
      (**(code **)(lVar22 + 0x38))(plVar16,uVar12,uVar6);
    }
    else {
      if (iVar10 == 2) {
        uVar6 = 600;
        goto LAB_140b5f0f2;
      }
      if (iVar10 == 3) {
        uVar6 = 300;
        goto LAB_140b5f0f2;
      }
    }
    lVar22 = 0;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar24 = lVar22;
    }
    else {
      lVar24 = *plVar3;
    }
    if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    uVar7 = FUN_140b63ec0(*plVar23);
    if (4 < uVar7) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar24 = lVar22;
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      plVar16 = (longlong *)param_1[1];
      lVar24 = *plVar16;
      uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
      (**(code **)(lVar24 + 0x30))(plVar16,uVar12);
    }
    if ((char)uVar19 == '\0') {
      log_InlineLogERROR(&DAT_140b6b6c0);
    }
    else {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar24 = lVar22;
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar24 = lVar22;
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar24 = lVar22;
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      uVar8 = FUN_140b63e50(*plVar23);
      uVar9 = FUN_140b63ee0(*plVar23);
      FUN_140b64850((longlong)local_c68,*(undefined2 *)(*plVar23 + 0x10),uVar9,uVar8,(short)iVar10,uVar6);
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar24 = lVar22;
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      plVar16 = (longlong *)param_1[1];
      lVar24 = *plVar16;
      uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
      (**(code **)(lVar24 + 0x60))(plVar16,uVar12,local_c68);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar22 = *plVar3;
    }
    if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    plVar16 = (longlong *)param_1[1];
    lVar22 = *plVar16;
    uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
    iVar13 = (**(code **)(lVar22 + 8))(plVar16,uVar12);
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar22 = 0;
    }
    else {
      lVar22 = *plVar3;
    }
    lVar24 = 0;
    if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    lVar22 = *param_1;
    uVar7 = FUN_140b63e50(*plVar23);
    iVar14 = (**(code **)(lVar22 + 8))(param_1,(uint)uVar7 + iVar13);
    iVar15 = (**(code **)(*param_1 + 8))(param_1,iVar13);
    if (iVar15 < iVar14) {
      pIVar17 = theInstance();
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar24 = *plVar3;
      }
      if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      plVar16 = (longlong *)param_1[1];
      lVar22 = *plVar16;
      uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
      (**(code **)(lVar22 + 0x48))(plVar16,uVar12);
      pcVar18 = (char *)(*(code *)**(undefined8 **)pIVar17)(pIVar17,"STR_COMPETION_QUIZ_UPGRADE");
      _snprintf(local_838,0x400,pcVar18);
      local_439 = 0;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar22 = 0;
      }
      else {
        lVar22 = *plVar3;
      }
      if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
        _invalid_parameter_noinfo();
      }
      plVar16 = (longlong *)param_1[1];
      lVar22 = *plVar16;
      uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
      (**(code **)(lVar22 + 0x78))(plVar16,uVar12,local_838,0xff0000);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar22 = 0;
    }
    else {
      lVar22 = *plVar3;
    }
    lVar24 = 0;
    if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    uVar7 = FUN_140b63e50(*plVar23);
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar22 = lVar24;
    }
    else {
      lVar22 = *plVar3;
    }
    if (*(longlong **)(lVar22 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    plVar16 = (longlong *)param_1[1];
    lVar22 = *plVar16;
    uVar12 = FUN_140b63e40((undefined4 *)*plVar23);
    (**(code **)(lVar22 + 0x10))(plVar16,uVar12,iVar13 + (uint)uVar7);
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar24 = *plVar3;
    }
    if (*(longlong **)(lVar24 + 0x20) <= plVar23) {
      _invalid_parameter_noinfo();
    }
    plVar23 = plVar23 + 1;
    iVar10 = iVar10 + 1;
  } while( true );
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b5f4e0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  byte *pbVar9;
  ulonglong uVar10;
  char ****ppppcVar11;
  int iVar12;
  char ****ppppcVar13;
  char ****ppppcVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  longlong lVar17;
  undefined1 auStackY_5b8 [32];
  undefined8 local_578;
  undefined8 local_570 [4];
  undefined8 local_550;
  CMsg local_548 [1072];
  undefined **local_118;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_110 [8];
  char ***local_108 [3];
  ulonglong local_f0;
  undefined **local_e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_e0 [8];
  char ***local_d8 [3];
  ulonglong local_c0;
  undefined **local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_b0 [8];
  char ***local_a8 [3];
  ulonglong local_90;
  undefined **local_88;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [8];
  char ***local_78 [3];
  ulonglong local_60;
  undefined **local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_50 [8];
  char ***local_48 [3];
  ulonglong local_30;
  ulonglong local_28;
  
  local_550 = 0xfffffffffffffffe;
  local_28 = DAT_140b764b8 ^ (ulonglong)auStackY_5b8;
  if (*(int *)(param_1 + 0x10) == 2) {
    if ((((ulonglong)*(uint *)(param_1 + 0x218) < (ulonglong)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3)) &&
        (*(ulonglong *)(param_1 + 0x200) <= (ulonglong)*(uint *)(param_1 + 0x218))) &&
       ((*(longlong *)(param_1 + 0x188) - *(longlong *)(param_1 + 0x180) & 0xfffffffffffffff8U) != 0)) {
      FUN_140b51680(&local_118);
      plVar6 = (longlong *)FUN_140b51900(param_1 + 0x138,(ulonglong)*(uint *)(param_1 + 0x218));
      plVar6 = (longlong *)*plVar6;
      if (plVar6 == (longlong *)0x0) {
        log_InlineLogERROR("error CCompetionMgr::FeatchQuestion pRec is NULL!");
        FUN_140b51730(&local_118);
      }
      else {
        local_578 = (undefined ***)CONCAT44(local_578._4_4_,0x3020100);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,9);
        bVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
        FUN_140b57030((longlong)&local_578,(undefined1 *)((longlong)&local_578 + 4),RandGet_exref);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,5);
        local_570[0] = (**(code **)(*plVar7 + 0x78))(plVar7);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,6);
        local_570[1] = (**(code **)(*plVar7 + 0x78))(plVar7);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,7);
        local_570[2] = (**(code **)(*plVar7 + 0x78))(plVar7);
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,8);
        local_570[3] = (**(code **)(*plVar7 + 0x78))(plVar7);
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,4);
        pcVar8 = (char *)(**(code **)(*plVar6 + 0x78))(plVar6);
        if (pcVar8 != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_110,pcVar8);
        }
        if ((char *)local_570[(ulonglong)local_578 & 0xff] != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_e0,(char *)local_570[(ulonglong)local_578 & 0xff]);
        }
        if ((char *)local_570[(ulonglong)local_578 >> 8 & 0xff] != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_b0,(char *)local_570[(ulonglong)local_578 >> 8 & 0xff]);
        }
        if ((char *)local_570[(ulonglong)local_578 >> 0x10 & 0xff] != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_80,(char *)local_570[(ulonglong)local_578 >> 0x10 & 0xff]);
        }
        if ((char *)local_570[(ulonglong)local_578 >> 0x18 & 0xff] != (char *)0x0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_50,(char *)local_570[(ulonglong)local_578 >> 0x18 & 0xff]);
        }
        iVar12 = 0;
        do {
          if ((uint)*(byte *)((longlong)&local_578 + (longlong)iVar12) == bVar2 - 1) {
            bVar2 = (char)iVar12 + 1;
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 4);
        local_578 = (undefined ***)CONCAT44(local_578._4_4_,*(undefined4 *)(param_1 + 0x218));
        pbVar9 = (byte *)FUN_140b5cca0((longlong *)(param_1 + 0x1c8),(uint *)&local_578);
        *pbVar9 = bVar2;
        FUN_140b64210(local_548);
        ppppcVar16 = local_48;
        if (0xf < local_30) {
          ppppcVar16 = (char ****)local_48[0];
        }
        ppppcVar11 = local_78;
        if (0xf < local_60) {
          ppppcVar11 = (char ****)local_78[0];
        }
        ppppcVar15 = local_a8;
        if (0xf < local_90) {
          ppppcVar15 = (char ****)local_a8[0];
        }
        ppppcVar14 = local_d8;
        if (0xf < local_c0) {
          ppppcVar14 = (char ****)local_d8[0];
        }
        ppppcVar13 = local_108;
        if (0xf < local_f0) {
          ppppcVar13 = (char ****)local_108[0];
        }
        uVar10 = FUN_140b64540(local_548,(char *)ppppcVar13,(char *)ppppcVar14,(char *)ppppcVar15,(char *)ppppcVar11,(char *)ppppcVar16,
                               (short)*(undefined4 *)(param_1 + 0x218) + 1);
        plVar6 = *(longlong **)(param_1 + 0x180);
        if (*(longlong **)(param_1 + 0x188) < plVar6) {
          _invalid_parameter_noinfo();
        }
        plVar7 = *(longlong **)(param_1 + 0x168);
        while( true ) {
          plVar1 = *(longlong **)(param_1 + 0x188);
          if (plVar1 < *(longlong **)(param_1 + 0x180)) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != *(longlong **)(param_1 + 0x168))) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar1) break;
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar17 = 0;
          }
          else {
            lVar17 = *plVar7;
          }
          if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
            _invalid_parameter_noinfo();
          }
          FUN_140b63f00(*plVar6,0);
          if ((char)uVar10 == '\0') {
            log_InlineLogERROR(&DAT_140b6b6c0,"IF_OK","bCreated","f:\\version\\cqserver-78.0.11-1204\\modules\\competion\\src\\competionmgr.cpp");
          }
          else {
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar7;
            }
            if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
              _invalid_parameter_noinfo();
            }
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar7;
            }
            if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
              _invalid_parameter_noinfo();
            }
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar7;
            }
            if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
              _invalid_parameter_noinfo();
            }
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar7;
            }
            if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
              _invalid_parameter_noinfo();
            }
            lVar17 = *plVar6;
            uVar3 = FUN_140b63e50(lVar17);
            uVar4 = FUN_140b63ee0(*plVar6);
            FUN_140b64810((longlong)local_548,*(undefined2 *)(lVar17 + 10),*(undefined2 *)(lVar17 + 0x10),uVar4,uVar3);
            if (plVar7 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar7;
            }
            if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
              _invalid_parameter_noinfo();
            }
            plVar1 = *(longlong **)(param_1 + 8);
            lVar17 = *plVar1;
            uVar5 = FUN_140b63e40((undefined4 *)*plVar6);
            (**(code **)(lVar17 + 0x60))(plVar1,uVar5,local_548);
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar17 = 0;
          }
          else {
            lVar17 = *plVar7;
          }
          if (*(longlong **)(lVar17 + 0x20) <= plVar6) {
            _invalid_parameter_noinfo();
          }
          plVar6 = plVar6 + 1;
        }
        FUN_140b5e820(param_1);
        FUN_140b64290((undefined8 *)local_548);
        local_578 = &local_58;
        local_58 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_50);
        local_578 = &local_88;
        local_88 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_80);
        local_578 = &local_b8;
        local_b8 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_b0);
        local_578 = &local_e8;
        local_e8 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_e0);
        local_118 = tq::CString::vftable;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_110);
      }
    }
  }
  return;
}




undefined8 FUN_140b5fad0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 extraout_RAX;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_78;
  undefined8 *puStack_70;
  longlong *local_68 [3];
  undefined4 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  
  local_res10 = operator_new(8);
  plVar10 = (longlong *)0x0;
  local_68[0] = plVar10;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_68;
    local_68[0] = local_res10;
  }
  local_50 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  local_res18 = local_res10;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_68);
  puVar8 = local_50;
  plVar5 = local_68[0];
  if (local_48 < local_50) {
    _invalid_parameter_noinfo();
    plVar5 = local_68[0];
  }
  do {
    puVar6 = local_48;
    if (local_48 < local_50) {
      _invalid_parameter_noinfo();
    }
    if ((plVar5 == (longlong *)0x0) || (plVar5 != local_68[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar6) {
      *(undefined4 *)(param_1 + 0x218) = 0;
      tq::CTimer::SetInterval((CTimer *)(param_1 + 0x208),0x1e);
      tq::CTimer::Startup((CTimer *)(param_1 + 0x208),0x1e);
      if (local_50 != (undefined4 *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar10;
    }
    else {
      plVar7 = (longlong *)*plVar5;
    }
    if ((undefined4 *)plVar7[4] <= puVar8) {
      _invalid_parameter_noinfo();
    }
    local_res10 = (longlong *)FUN_140b640b0(*puVar8);
    if (local_res10 != (longlong *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x180);
      plVar7 = plVar10;
      if (puVar1 != (undefined8 *)0x0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 400) - (longlong)puVar1 >> 3);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x188);
      if ((longlong *)((longlong)puVar2 - (longlong)puVar1 >> 3) < plVar7) {
        *puVar2 = local_res10;
        *(undefined8 **)(param_1 + 0x188) = puVar2 + 1;
      }
      else {
        if (puVar2 < puVar1) {
          _invalid_parameter_noinfo();
        }
        lVar3 = *(longlong *)(param_1 + 0x168);
        uVar4 = *(ulonglong *)(param_1 + 0x180);
        plVar7 = plVar10;
        if ((*(ulonglong *)(param_1 + 0x188) - uVar4 & 0xfffffffffffffff8) != 0) {
          if (*(ulonglong *)(param_1 + 0x188) < uVar4) {
            _invalid_parameter_noinfo();
          }
          if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0x168))) {
            _invalid_parameter_noinfo();
          }
          plVar7 = (longlong *)((longlong)((longlong)puVar2 - uVar4) >> 3);
        }
        local_78 = lVar3;
        puStack_70 = puVar2;
        FUN_140b5c1e0(param_1 + 0x168,(longlong)&local_78,1,&local_res10);
        uVar4 = *(ulonglong *)(param_1 + 0x180);
        if (*(ulonglong *)(param_1 + 0x188) < uVar4) {
          _invalid_parameter_noinfo();
        }
        puVar1 = *(undefined8 **)(param_1 + 0x168);
        if (puVar1 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar10;
        }
        else {
          plVar9 = (longlong *)*puVar1;
        }
        uVar4 = uVar4 + (longlong)plVar7 * 8;
        if (uVar4 <= (ulonglong)plVar9[4]) {
          plVar7 = plVar10;
          if (puVar1 != (undefined8 *)0x0) {
            plVar7 = (longlong *)*puVar1;
          }
          if ((ulonglong)plVar7[3] <= uVar4) goto LAB_140b5fcf9;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140b5fcf9:
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar10;
    }
    else {
      plVar7 = (longlong *)*plVar5;
    }
    if ((undefined4 *)plVar7[4] <= puVar8) {
      _invalid_parameter_noinfo();
    }
    puVar8 = puVar8 + 1;
  } while( true );
}




void FUN_140b5fda0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  rsize_t _DstSize;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_res8;
  longlong local_28;
  longlong *plStack_20;
  
  plVar8 = *(longlong **)(param_1 + 0x180);
  if (*(longlong **)(param_1 + 0x188) < plVar8) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(ulonglong **)(param_1 + 0x168);
  uVar11 = 0;
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 0x188);
    if (plVar2 < *(longlong **)(param_1 + 0x180)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != *(ulonglong **)(param_1 + 0x168))) {
      _invalid_parameter_noinfo();
    }
    if (plVar8 == plVar2) {
      return;
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar11;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(longlong **)(uVar6 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    iVar5 = FUN_140b63e40((undefined4 *)*plVar8);
    if (iVar5 == param_2) break;
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar6 = uVar11;
    }
    else {
      uVar6 = *puVar1;
    }
    if (*(longlong **)(uVar6 + 0x20) <= plVar8) {
      _invalid_parameter_noinfo();
    }
    plVar8 = plVar8 + 1;
  }
  if (puVar1 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar6 = uVar11;
  }
  else {
    uVar6 = *puVar1;
  }
  if (*(longlong **)(uVar6 + 0x20) <= plVar8) {
    _invalid_parameter_noinfo();
  }
  lVar3 = *plVar8;
  lVar7 = *(longlong *)(param_1 + 0x188) - (longlong)(plVar8 + 1) >> 3;
  local_res8 = lVar3;
  if (0 < lVar7) {
    _DstSize = lVar7 << 3;
    memmove_s(plVar8,_DstSize,plVar8 + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + -8;
  if ((plVar8 < *(longlong **)(param_1 + 0x180)) || (*(longlong **)(param_1 + 0x188) < plVar8)) {
    _invalid_parameter_noinfo();
  }
  if (lVar3 != 0) {
    plVar8 = (longlong *)(param_1 + 0x198);
    plVar2 = *(longlong **)(param_1 + 0x1b0);
    uVar6 = uVar11;
    if (plVar2 != (longlong *)0x0) {
      uVar6 = *(longlong *)(param_1 + 0x1c0) - (longlong)plVar2 >> 3;
    }
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if ((ulonglong)((longlong)plVar4 - (longlong)plVar2 >> 3) < uVar6) {
      *plVar4 = lVar3;
      *(longlong **)(param_1 + 0x1b8) = plVar4 + 1;
    }
    else {
      if (plVar4 < plVar2) {
        _invalid_parameter_noinfo();
      }
      uVar6 = *(ulonglong *)(param_1 + 0x1b0);
      lVar3 = *plVar8;
      uVar9 = uVar11;
      local_28 = lVar3;
      plStack_20 = plVar4;
      if ((*(ulonglong *)(param_1 + 0x1b8) - uVar6 & 0xfffffffffffffff8) != 0) {
        if (*(ulonglong *)(param_1 + 0x1b8) < uVar6) {
          _invalid_parameter_noinfo();
        }
        if ((lVar3 == 0) || (lVar3 != *plVar8)) {
          _invalid_parameter_noinfo();
        }
        uVar9 = (longlong)((longlong)plVar4 - uVar6) >> 3;
      }
      FUN_140b5c1e0((longlong)plVar8,(longlong)&local_28,1,&local_res8);
      uVar6 = *(ulonglong *)(param_1 + 0x1b0);
      if (*(ulonglong *)(param_1 + 0x1b8) < uVar6) {
        _invalid_parameter_noinfo();
      }
      puVar1 = (ulonglong *)*plVar8;
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar10 = uVar11;
      }
      else {
        uVar10 = *puVar1;
      }
      uVar6 = uVar6 + uVar9 * 8;
      if (uVar6 <= *(ulonglong *)(uVar10 + 0x20)) {
        if (puVar1 != (ulonglong *)0x0) {
          uVar11 = *puVar1;
        }
        if (*(ulonglong *)(uVar11 + 0x18) <= uVar6) {
          return;
        }
      }
      _invalid_parameter_noinfo();
    }
  }
  return;
}




void FUN_140b60000(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res8;
  longlong *local_78;
  undefined4 *puStack_70;
  longlong *local_68 [3];
  undefined4 *local_50;
  undefined4 *local_48;
  longlong local_40;
  
  puVar8 = *(undefined8 **)(param_1 + 0x180);
  if (*(undefined8 **)(param_1 + 0x188) < puVar8) {
    _invalid_parameter_noinfo();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  local_res8 = operator_new(8);
  plVar10 = (longlong *)0x0;
  local_68[0] = plVar10;
  if (local_res8 != (longlong *)0x0) {
    *local_res8 = (longlong)local_68;
    local_68[0] = local_res8;
  }
  local_50 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  do {
    puVar2 = *(undefined8 **)(param_1 + 0x188);
    if (puVar2 < *(undefined8 **)(param_1 + 0x180)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (undefined8 *)0x0) || (puVar1 != *(undefined8 **)(param_1 + 0x168))) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar2) {
      if ((longlong)local_48 - (longlong)local_50 >> 2 != 0) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),local_68,param_2);
      }
      if (local_50 != (undefined4 *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar10;
    }
    else {
      plVar7 = (longlong *)*puVar1;
    }
    if ((undefined8 *)plVar7[4] <= puVar8) {
      _invalid_parameter_noinfo();
    }
    uVar5 = FUN_140b63e40((undefined4 *)*puVar8);
    puVar4 = local_48;
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar5);
    plVar7 = plVar10;
    if (local_50 != (undefined4 *)0x0) {
      plVar7 = (longlong *)(local_40 - (longlong)local_50 >> 2);
    }
    if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar7) {
      *local_48 = uVar5;
      local_48 = local_48 + 1;
    }
    else {
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
      }
      puVar3 = local_50;
      plVar7 = local_68[0];
      plVar9 = plVar10;
      if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        plVar9 = (longlong *)((longlong)puVar4 - (longlong)puVar3 >> 2);
      }
      local_78 = plVar7;
      puStack_70 = puVar4;
      FUN_140b5c4e0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res8);
      puVar4 = local_50;
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
      }
      plVar7 = local_68[0];
      if (local_68[0] == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar6 = plVar10;
      }
      else {
        plVar6 = (longlong *)*local_68[0];
      }
      if (puVar4 + (longlong)plVar9 <= (undefined4 *)plVar6[4]) {
        plVar6 = plVar10;
        if (plVar7 != (longlong *)0x0) {
          plVar6 = (longlong *)*plVar7;
        }
        if ((undefined4 *)plVar6[3] <= puVar4 + (longlong)plVar9) goto LAB_140b6020f;
      }
      _invalid_parameter_noinfo();
    }
LAB_140b6020f:
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar10;
    }
    else {
      plVar7 = (longlong *)*puVar1;
    }
    if ((undefined8 *)plVar7[4] <= puVar8) {
      _invalid_parameter_noinfo();
    }
    puVar8 = puVar8 + 1;
  } while( true );
}




void FUN_140b602b0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  rsize_t _DstSize;
  int *piVar13;
  longlong *_Dst;
  ulonglong uVar14;
  undefined4 *local_res8;
  CMsg local_448 [1072];
  
  cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  if (cVar6 != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x118);
  if (piVar1 < *(int **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  piVar13 = *(int **)(param_1 + 0x110);
  if (*(int **)(param_1 + 0x118) < piVar13) {
    _invalid_parameter_noinfo();
  }
  lVar12 = *(longlong *)(param_1 + 0xf8);
  piVar2 = *(int **)(param_1 + 0x118);
  if (piVar2 < *(int **)(param_1 + 0x110)) {
    _invalid_parameter_noinfo();
  }
  for (; (piVar13 != piVar1 && (*piVar13 != param_2)); piVar13 = piVar13 + 1) {
  }
  if ((lVar12 == 0) || (lVar12 != *(longlong *)(param_1 + 0xf8))) {
    _invalid_parameter_noinfo();
  }
  if (piVar13 != piVar2) {
    return;
  }
  _Dst = *(longlong **)(param_1 + 0x1b0);
  if (*(longlong **)(param_1 + 0x1b8) < _Dst) {
    _invalid_parameter_noinfo();
  }
  puVar3 = *(ulonglong **)(param_1 + 0x198);
  uVar14 = 0;
  while( true ) {
    plVar4 = *(longlong **)(param_1 + 0x1b8);
    if (plVar4 < *(longlong **)(param_1 + 0x1b0)) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == (ulonglong *)0x0) || (puVar3 != *(ulonglong **)(param_1 + 0x198))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == plVar4) goto LAB_140b604ad;
    if (puVar3 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar11 = uVar14;
    }
    else {
      uVar11 = *puVar3;
    }
    if (*(longlong **)(uVar11 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    iVar7 = FUN_140b63e40((undefined4 *)*_Dst);
    if (iVar7 == param_2) break;
    if (puVar3 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar11 = uVar14;
    }
    else {
      uVar11 = *puVar3;
    }
    if (*(longlong **)(uVar11 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  }
  if (puVar3 == (ulonglong *)0x0) {
    _invalid_parameter_noinfo();
    uVar11 = uVar14;
  }
  else {
    uVar11 = *puVar3;
  }
  if (*(longlong **)(uVar11 + 0x20) <= _Dst) {
    _invalid_parameter_noinfo();
  }
  puVar5 = (undefined4 *)*_Dst;
  lVar12 = *(longlong *)(param_1 + 0x1b8) - (longlong)(_Dst + 1) >> 3;
  local_res8 = puVar5;
  if (0 < lVar12) {
    _DstSize = lVar12 << 3;
    memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
  }
  *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_1 + 0x1b8) + -8;
  if ((_Dst < *(longlong **)(param_1 + 0x1b0)) || (*(longlong **)(param_1 + 0x1b8) < _Dst)) {
    _invalid_parameter_noinfo();
  }
  if (puVar5 == (undefined4 *)0x0) {
LAB_140b604ad:
    local_res8 = FUN_140b640b0(param_2);
    if (local_res8 != (undefined4 *)0x0) goto LAB_140b604c2;
  }
  else {
LAB_140b604c2:
    FUN_140b5df80((longlong *)(param_1 + 0x168),&local_res8);
  }
  FUN_140b64210(local_448);
  uVar11 = 0x14;
  if (*(int *)(param_1 + 0x10) == 1) {
    DVar8 = timeGetTime();
    uVar10 = (*(int *)(param_1 + 0x21c) - DVar8) / 1000;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 2) goto LAB_140b60537;
    DVar8 = timeGetTime();
    uVar10 = 0x1e - (DVar8 - *(int *)(param_1 + 0x220)) / 1000;
  }
  uVar11 = (ulonglong)uVar10;
  if ((int)uVar10 < 0) {
    uVar11 = uVar14;
  }
LAB_140b60537:
  uVar9 = FUN_140b64330(local_448,(short)uVar11,(short)(*(longlong *)(param_1 + 0x158) - *(longlong *)(param_1 + 0x150) >> 3),0x1e);
  if ((char)uVar9 == '\0') {
    log_InlineLogERROR(&DAT_140b6b6c0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,local_448);
  }
  FUN_140b64290((undefined8 *)local_448);
  return;
}




void FUN_140b605d0(longlong *param_1,undefined3 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined2 *puStack_20;
  longlong local_18 [2];
  
  puVar1 = (undefined2 *)param_1[3];
  if (puVar1 == (undefined2 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (param_1[5] - (longlong)puVar1) / 3;
  }
  puVar2 = (undefined2 *)param_1[4];
  if ((ulonglong)(((longlong)puVar2 - (longlong)puVar1) / 3) < uVar3) {
    FUN_140b57170(puVar2,1,(undefined2 *)param_2);
    param_1[4] = (longlong)puVar2 + 3;
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_140b5e160(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140b606c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  while (cVar1 == '\0') {
    FUN_140b606c0(param_1,(longlong *)param_2[2],param_3,param_4);
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




undefined8 * FUN_140b60770(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined4 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140b74858);
  }
  plVar5 = FUN_140b5e700(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140b60ab0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    FUN_140b5de20(param_4,param_2);
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  *param_1 = param_4;
  return param_1;
}




ulonglong FUN_140b60b20(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined4 extraout_var_01;
  ulonglong uVar6;
  undefined7 extraout_var_00;
  IStringManager *pIVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar2 = (int)param_1[2];
  if (iVar2 == 0) {
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 2) = 1;
      return in_RAX;
    }
  }
  else if (iVar2 == 1) {
    bVar4 = tq::CTimer::IsTimeOut((CTimer *)(param_1 + 0x41));
    in_RAX = CONCAT71(extraout_var_00,bVar4);
    if (bVar4) {
      in_RAX = FUN_140b5fad0((longlong)param_1);
      if ((char)in_RAX == '\0') {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 2) = 2;
        tq::CTimer::Startup((CTimer *)(param_1 + 0x41),0x1e);
        DVar5 = timeGetTime();
        *(DWORD *)(param_1 + 0x44) = DVar5;
        in_RAX = FUN_140b5f4e0((longlong)param_1);
      }
    }
    if ((char)param_1[0x45] != '\0') {
      bVar1 = *(byte *)(param_1 + 0x45);
      DVar5 = timeGetTime();
      uVar9 = *(int *)((longlong)param_1 + 0x21c) - DVar5;
      in_RAX = (ulonglong)uVar9 * 0x45e7b273 & 0xffffffff;
      uVar10 = (uint)bVar1;
      if (uVar9 / 60000 < uVar10) {
        if (uVar10 == 1) {
          pIVar7 = theInstance();
          lVar3 = *(longlong *)param_1[1];
          uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_COMPETION_BEGIN_TIP_1");
          in_RAX = (**(code **)(lVar3 + 0x68))(param_1[1],uVar8,0xff0000,0x7db);
        }
        else {
          if (uVar10 == 2) {
            pIVar7 = theInstance();
            lVar3 = *(longlong *)param_1[1];
            uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_COMPETION_BEGIN_TIP_2");
            uVar6 = (**(code **)(lVar3 + 0x68))(param_1[1],uVar8,0xff0000,0x7db);
            *(char *)(param_1 + 0x45) = (char)param_1[0x45] + -1;
            return uVar6;
          }
          if (uVar10 == 3) {
            pIVar7 = theInstance();
            lVar3 = *(longlong *)param_1[1];
            uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_COMPETION_BEGIN_TIP_3");
            uVar6 = (**(code **)(lVar3 + 0x68))(param_1[1],uVar8,0xff0000,0x7db);
            *(char *)(param_1 + 0x45) = (char)param_1[0x45] + -1;
            return uVar6;
          }
        }
        *(char *)(param_1 + 0x45) = (char)param_1[0x45] + -1;
        return in_RAX;
      }
    }
  }
  else if (iVar2 == 2) {
    if (param_2 == 2) {
      FUN_140b5eb80(param_1);
      *(undefined4 *)(param_1 + 2) = 0;
    }
    bVar4 = tq::CTimer::IsTimeOut((CTimer *)(param_1 + 0x41));
    in_RAX = CONCAT71(extraout_var,bVar4);
    if (bVar4) {
      FUN_140b5a810((longlong)param_1);
      uVar9 = (int)param_1[0x43] + 1;
      if ((ulonglong)(param_1[0x2b] - param_1[0x2a] >> 3) <= (ulonglong)uVar9) {
        uVar6 = FUN_140b5eb80(param_1);
        *(undefined4 *)(param_1 + 2) = 0;
        return uVar6;
      }
      *(uint *)(param_1 + 0x43) = uVar9;
      FUN_140b5f4e0((longlong)param_1);
      tq::CTimer::ToNextTime((CTimer *)(param_1 + 0x41));
      DVar5 = timeGetTime();
      in_RAX = CONCAT44(extraout_var_01,DVar5);
      *(DWORD *)(param_1 + 0x44) = DVar5;
    }
  }
  return in_RAX;
}




void FUN_140b60d60(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  rsize_t _DstSize;
  longlong *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  longlong local_38;
  int *piStack_30;
  longlong local_28 [2];
  
  if ((param_1[0x31] - param_1[0x30] & 0xfffffffffffffff8U) == 0) {
    return;
  }
  _Dst = (longlong *)param_1[0x30];
  if ((longlong *)param_1[0x31] < _Dst) {
    _invalid_parameter_noinfo();
  }
  puVar1 = (ulonglong *)param_1[0x2d];
  uVar8 = 0;
  do {
    plVar2 = (longlong *)param_1[0x31];
    if (plVar2 < (longlong *)param_1[0x30]) {
      _invalid_parameter_noinfo();
    }
    if ((puVar1 == (ulonglong *)0x0) || (puVar1 != (ulonglong *)param_1[0x2d])) {
      _invalid_parameter_noinfo();
    }
    if (_Dst == plVar2) goto LAB_140b60f60;
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar8;
    }
    else {
      uVar7 = *puVar1;
    }
    if (*(longlong **)(uVar7 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    if (*_Dst != 0) {
      if (puVar1 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar7 = uVar8;
      }
      else {
        uVar7 = *puVar1;
      }
      if (*(longlong **)(uVar7 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      iVar5 = FUN_140b63e40((undefined4 *)*_Dst);
      if (iVar5 == param_2) {
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar7 = uVar8;
        }
        else {
          uVar7 = *puVar1;
        }
        if (*(longlong **)(uVar7 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        FUN_140b64150((void *)*_Dst);
        lVar6 = param_1[0x31] - (longlong)(_Dst + 1) >> 3;
        if (0 < lVar6) {
          _DstSize = lVar6 << 3;
          memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
        }
        param_1[0x31] = param_1[0x31] + -8;
        if ((_Dst < (longlong *)param_1[0x30]) || ((longlong *)param_1[0x31] < _Dst)) {
          _invalid_parameter_noinfo();
        }
        piVar3 = (int *)param_1[0x22];
        if (piVar3 != (int *)0x0) {
          uVar8 = param_1[0x24] - (longlong)piVar3 >> 2;
        }
        piVar4 = (int *)param_1[0x23];
        local_res8[0] = param_2;
        if ((ulonglong)((longlong)piVar4 - (longlong)piVar3 >> 2) < uVar8) {
          *piVar4 = param_2;
          param_1[0x23] = (longlong)(piVar4 + 1);
        }
        else {
          if (piVar4 < piVar3) {
            _invalid_parameter_noinfo();
          }
          local_38 = param_1[0x1f];
          piStack_30 = piVar4;
          FUN_140b5d130(param_1 + 0x1f,local_28,&local_38,local_res8);
        }
LAB_140b60f60:
        if ((param_1[0x31] - param_1[0x30] & 0xfffffffffffffff8U) != 0) {
          return;
        }
        FUN_140b60b20(param_1,2);
        return;
      }
    }
    if (puVar1 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar7 = uVar8;
    }
    else {
      uVar7 = *puVar1;
    }
    if (*(longlong **)(uVar7 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    _Dst = _Dst + 1;
  } while( true );
}




void FUN_140b60fa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140b606c0(param_1,*(longlong **)(*(longlong *)(param_1 + 0x30) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




longlong * FUN_140b60fe0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140b6113d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140b6116c;
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
      goto LAB_140b6113d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140b60770(param_1,&local_38,bVar7,plVar6,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140b6116c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_140b61190(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140b606c0(param_1,*(longlong **)(param_1[6] + 8),plVar5,plVar6);
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
    FUN_140b5e310(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140b61370(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_3 + 8);
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 == puVar1) {
    *param_1 = param_4;
  }
  else {
    do {
      FUN_140b5de20(param_4,puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    *param_1 = param_4;
  }
  return param_1;
}




void FUN_140b613e0(longlong *param_1)

{
  FUN_140b60b20(param_1,0);
  return;
}




longlong * FUN_140b61400(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_140b60770(param_1,param_2,'\x01',(undefined8 *)param_1[6],param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_140b60770(param_1,param_2,'\x01',puVar3,param_4);
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
          FUN_140b60770(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),param_4);
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
          if (*(char *)((longlong)local_30 + 0x51) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x51) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x51);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x51);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x51);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x51);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x51) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x51) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x51) != '\0') {
              FUN_140b60770(param_1,param_2,'\0',plVar7,param_4);
              return param_2;
            }
            FUN_140b60770(param_1,param_2,'\x01',(undefined8 *)param_3[1],param_4);
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
          if (*(char *)((longlong)local_30 + 0x51) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x51) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x51);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x51);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x51);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x51);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x51) != '\0') {
              FUN_140b60770(param_1,param_2,'\0',(undefined8 *)param_3[1],param_4);
              return param_2;
            }
            FUN_140b60770(param_1,param_2,'\x01',plVar9,param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_140b60fe0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




void FUN_140b61720(longlong *param_1)

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
  FUN_140b61190(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140b61790(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_c8 [3];
  void *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  void *local_90 [3];
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_48 = 0xfffffffffffffffe;
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x51) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x51) == '\0');
  }
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[6];
  if (puVar1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  plVar5 = (longlong *)0x0;
  if ((puVar4 == puVar2) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_58 = puVar1;
    puStack_50 = puVar4;
    plVar3 = operator_new(8);
    local_c8[0] = plVar5;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)local_c8;
      local_c8[0] = plVar3;
    }
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_98[0] = *param_2;
    FUN_140b5bb60(local_90,local_c8);
    plVar3 = FUN_140b61400(param_1,local_40,(longlong *)&local_58,local_98);
    puVar1 = (undefined8 *)*plVar3;
    puVar4 = (undefined8 *)plVar3[1];
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
    local_a8 = 0;
    local_a0 = 0;
    operator_delete(local_c8[0]);
  }
  if (puVar1 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  else {
    plVar5 = (longlong *)*puVar1;
  }
  if (puVar4 == (undefined8 *)plVar5[6]) {
    _invalid_parameter_noinfo();
  }
  return puVar4 + 4;
}




void FUN_140b61970(longlong *param_1)

{
  FUN_140b61720(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140b619a0(longlong *param_1)

{
  FUN_140b61720(param_1);
  operator_delete((void *)*param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140b619d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  ulonglong extraout_RAX;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  tm *ptVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_508 [32];
  int local_4e8;
  uint local_4d8 [2];
  longlong *local_4d0;
  __time32_t local_4c8 [2];
  longlong local_4c0;
  longlong *local_4b8;
  longlong local_4a8;
  undefined8 *puStack_4a0;
  longlong local_498;
  uint *puStack_490;
  longlong local_488;
  uint *puStack_480;
  longlong local_478;
  undefined8 *puStack_470;
  undefined8 local_468;
  longlong local_460 [2];
  longlong local_450 [3];
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_38;
  
  local_468 = 0xfffffffffffffffe;
  local_38 = DAT_140b764b8 ^ (ulonglong)auStack_508;
  local_4c0 = param_1;
  if (param_2 == 0) {
    local_4e8 = 0x4c;
    log_InlineLogERROR(&DAT_140b6b6c0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  FUN_140b606c0(param_1 + 0x18,*(longlong **)(*(longlong *)(param_1 + 0x48) + 8),param_3,param_4);
  *(longlong *)(*(longlong *)(param_1 + 0x48) + 8) = *(longlong *)(param_1 + 0x48);
  uVar16 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
  plVar6 = (longlong *)InstanceGet();
  local_4b8 = plVar6;
  _snprintf(local_438,0x400,PTR_s_SELECT___FROM_cq_quiz_140b76008);
  local_39 = 0;
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_438,1);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
  uVar14 = uVar16;
  if (lVar7 != 0) {
    do {
      (**(code **)(*plVar6 + 0x30))(plVar6,uVar14);
      plVar8 = (longlong *)(**(code **)(*plVar6 + 0x38))(plVar6);
      local_4d0 = plVar8;
      if (plVar8 == (longlong *)0x0) {
        local_4e8 = 0x67;
        log_InlineLogERROR(&DAT_140b6b6c0);
      }
      else {
        plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,1);
        plVar10 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,2);
        bVar4 = (**(code **)(*plVar9 + 0x20))(plVar9);
        bVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
        local_4d8[0] = (uint)(ushort)((ushort)bVar5 + (ushort)bVar4 * 1000);
        plVar9 = FUN_140b61790((longlong *)(param_1 + 0x18),local_4d8);
        puVar11 = (undefined8 *)plVar9[4];
        puVar3 = (undefined8 *)plVar9[3];
        if ((puVar3 == (undefined8 *)0x0) || ((ulonglong)(plVar9[5] - (longlong)puVar3 >> 3) <= (ulonglong)((longlong)puVar11 - (longlong)puVar3 >> 3))) {
          if (puVar11 < puVar3) {
            _invalid_parameter_noinfo();
          }
          local_4a8 = *plVar9;
          puStack_4a0 = puVar11;
          local_478 = local_4a8;
          puStack_470 = puVar11;
          FUN_140b5d000(plVar9,local_460,&local_478,&local_4d0);
        }
        else {
          *puVar11 = plVar8;
          plVar9[4] = (longlong)(puVar11 + 1);
        }
        plVar9 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,0);
        local_4d8[0] = (**(code **)(*plVar9 + 0x50))(plVar9);
        puVar11 = FUN_140b5cb70((longlong *)(param_1 + 0x58),local_4d8);
        *puVar11 = plVar8;
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,0);
        local_4d8[0] = (**(code **)(*plVar8 + 0x50))(plVar8);
        puVar1 = *(uint **)(param_1 + 0xe8);
        puVar2 = *(uint **)(param_1 + 0xe0);
        if ((puVar2 == (uint *)0x0) ||
           ((ulonglong)(*(longlong *)(param_1 + 0xf0) - (longlong)puVar2 >> 2) <= (ulonglong)((longlong)puVar1 - (longlong)puVar2 >> 2))) {
          if (puVar1 < puVar2) {
            _invalid_parameter_noinfo();
          }
          local_498 = *(longlong *)(param_1 + 200);
          puStack_490 = puVar1;
          local_488 = local_498;
          puStack_480 = puVar1;
          FUN_140b5d130((longlong *)(param_1 + 200),local_450,&local_488,local_4d8);
        }
        else {
          *puVar1 = local_4d8[0];
          *(uint **)(param_1 + 0xe8) = puVar1 + 1;
        }
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
      uVar12 = (**(code **)(*plVar6 + 0x40))(plVar6);
    } while (uVar14 < uVar12);
  }
  (**(code **)*plVar6)(plVar6);
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8),0x7d1,1);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
  if (lVar7 == 0) {
    plVar8 = (longlong *)(**(code **)(*local_4b8 + 0x20))(local_4b8,"cq_config");
    *(longlong **)(param_1 + 0x128) = plVar8;
    if (plVar8 == (longlong *)0x0) {
      local_4e8 = 0x80;
      log_InlineLogERROR(&DAT_140b6b6c0);
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8,1);
      (**(code **)(*plVar8 + 0xb0))(plVar8,0x7d1);
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x128) + 0x10))(*(longlong **)(param_1 + 0x128),2);
      (**(code **)(*plVar8 + 0xb0))(plVar8,0);
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x128) + 0x10))(*(longlong **)(param_1 + 0x128),3);
      (**(code **)(*plVar8 + 0xb0))(plVar8,0);
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x128) + 0x10))(*(longlong **)(param_1 + 0x128),4);
      (**(code **)(*plVar8 + 0xb0))(plVar8,0);
      (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))(*(longlong **)(param_1 + 0x128),1);
    }
  }
  else {
    (**(code **)(*plVar6 + 0x30))(plVar6,0);
    uVar15 = (**(code **)(*plVar6 + 0x38))(plVar6);
    *(undefined8 *)(param_1 + 0x128) = uVar15;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  (**(code **)*plVar6)(plVar6);
  local_4c8[0] = _time32((__time32_t *)0x0);
  ptVar13 = _localtime32(local_4c8);
  if (ptVar13 == (tm *)0x0) {
    return 0;
  }
  iVar17 = (ptVar13->tm_year * 100 + 0x2e631 + ptVar13->tm_mon) * 100 + ptVar13->tm_mday;
  local_4e8 = iVar17;
  _snprintf(local_438,0x400,"SELECT * FROM cq_sponsor WHERE cq_sponsor.showtime_begin <= %u && cq_sponsor.showtime_over >= %u && cq_sponsor.mod = 1");
  plVar6 = local_4b8;
  local_39 = 0;
  plVar8 = (longlong *)(**(code **)(*local_4b8 + 0x10))(local_4b8,local_438,1);
  if (plVar8 == (longlong *)0x0) {
    local_4e8 = iVar17;
    _snprintf(local_438,0x400,"SELECT * FROM cq_sponsor WHERE showtime_begin <= %u && showtime_over >= %u && mod = 2");
    local_39 = 0;
    plVar8 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_438,1);
    if (plVar8 == (longlong *)0x0) {
      local_4e8 = iVar17;
      _snprintf(local_438,0x400,&DAT_140b6cef0);
      local_39 = 0;
      plVar8 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_438,1);
      uVar15 = 0;
      if (plVar8 == (longlong *)0x0) goto LAB_140b6220d;
      lVar7 = (**(code **)(*plVar8 + 0x40))(plVar8);
      if (lVar7 != 0) {
        do {
          (**(code **)(*plVar8 + 0x30))(plVar8,uVar16);
          local_4d0 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8);
          if (local_4d0 == (longlong *)0x0) {
            local_4e8 = 0xe1;
            log_InlineLogERROR(&DAT_140b6b6c0);
          }
          else {
            FUN_140b5de20((longlong *)(param_1 + 0x98),&local_4d0);
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar14 = (**(code **)(*plVar8 + 0x40))(plVar8);
        } while (uVar16 < uVar14);
      }
      if ((*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) & 0xfffffffffffffff8U) != 0) {
        *(undefined4 *)(param_1 + 0x224) = 3;
      }
    }
    else {
      lVar7 = (**(code **)(*plVar8 + 0x40))(plVar8);
      if (lVar7 != 0) {
        do {
          (**(code **)(*plVar8 + 0x30))(plVar8,uVar16);
          local_4d0 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8);
          if (local_4d0 == (longlong *)0x0) {
            local_4e8 = 0xc6;
            log_InlineLogERROR(&DAT_140b6b6c0);
          }
          else {
            FUN_140b5de20((longlong *)(param_1 + 0x98),&local_4d0);
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
          uVar14 = (**(code **)(*plVar8 + 0x40))(plVar8);
        } while (uVar16 < uVar14);
      }
      if ((*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) & 0xfffffffffffffff8U) != 0) {
        puVar11 = *(undefined8 **)(param_1 + 0xb8);
        if (puVar11 < *(undefined8 **)(param_1 + 0xb0)) {
          _invalid_parameter_noinfo();
        }
        lVar7 = *(longlong *)(param_1 + 0x98);
        puVar3 = *(undefined8 **)(param_1 + 0xb0);
        if (*(undefined8 **)(param_1 + 0xb8) < puVar3) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong *)(param_1 + 0x98) == 0) || (*(longlong *)(param_1 + 0x98) != lVar7)) {
          _invalid_parameter_noinfo();
        }
        if (puVar3 != puVar11) {
          FUN_140b56f70((longlong)puVar3,puVar11);
        }
        *(undefined4 *)(param_1 + 0x224) = 2;
      }
    }
  }
  else {
    lVar7 = (**(code **)(*plVar8 + 0x40))(plVar8);
    if (lVar7 != 0) {
      do {
        (**(code **)(*plVar8 + 0x30))(plVar8,uVar16);
        local_4d0 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8);
        if (local_4d0 == (longlong *)0x0) {
          local_4e8 = 0xac;
          log_InlineLogERROR(&DAT_140b6b6c0);
        }
        else {
          FUN_140b5de20((longlong *)(param_1 + 0x98),&local_4d0);
        }
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar14 = (**(code **)(*plVar8 + 0x40))(plVar8);
      } while (uVar16 < uVar14);
    }
    if ((*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) & 0xfffffffffffffff8U) != 0) {
      *(undefined4 *)(param_1 + 0x224) = 1;
    }
  }
  uVar15 = (**(code **)*plVar8)(plVar8);
LAB_140b6220d:
  return CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
}




undefined8 FUN_140b62240(longlong param_1,int *param_2,longlong param_3,longlong param_4,int param_5,uint param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong extraout_RAX;
  byte *pbVar8;
  undefined8 *puVar9;
  ulonglong extraout_RAX_00;
  undefined8 extraout_RAX_01;
  ulonglong uVar10;
  byte **ppbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  byte *pbVar23;
  int iVar24;
  longlong lVar25;
  undefined8 local_f8;
  byte *local_f0 [3];
  byte *local_d8;
  byte *local_d0;
  longlong local_c8;
  byte *local_b8;
  byte *pbStack_b0;
  byte *local_a8;
  byte *pbStack_a0;
  byte *local_98;
  byte *local_90 [3];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  byte *local_58;
  byte *pbStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f8 = operator_new(8);
  if (local_f8 == (byte *)0x0) {
    local_f0[0] = (byte *)0x0;
  }
  else {
    *(byte ***)local_f8 = local_f0;
    local_f0[0] = local_f8;
  }
  local_d8 = (byte *)0x0;
  local_d0 = (byte *)0x0;
  local_c8 = 0;
  local_98 = local_f8;
  uVar6 = _time32((__time32_t *)0x0);
  srand(uVar6);
  lVar25 = 0;
  if (0 < param_5) {
    lVar21 = param_3 - (longlong)param_2;
    lVar14 = param_4 - (longlong)param_2;
    pbVar18 = local_d8;
    pbVar23 = local_d0;
    do {
      pbVar19 = local_f8;
      iVar24 = *param_2;
      if (iVar24 != 0xff) {
        if (iVar24 == 0) {
          FUN_140b5ce10((longlong *)local_f0);
          break;
        }
        local_f8._3_5_ = SUB85(pbVar19,3);
        local_f8._0_3_ = CONCAT12(*(undefined1 *)((longlong)param_2 + lVar14),CONCAT11(*(undefined1 *)(lVar21 + (longlong)param_2),(char)iVar24));
        if (pbVar18 == (byte *)0x0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (local_c8 - (longlong)pbVar18) / 3;
        }
        if ((ulonglong)(((longlong)pbVar23 - (longlong)pbVar18) / 3) < uVar22) {
          FUN_140b57170((undefined2 *)pbVar23,1,(undefined2 *)&local_f8);
          local_d0 = pbVar23 + 3;
          pbVar18 = local_d8;
          pbVar23 = local_d0;
        }
        else {
          pbVar19 = pbVar23;
          if (pbVar23 < pbVar18) {
            _invalid_parameter_noinfo();
            pbVar18 = local_d8;
            pbVar19 = local_d0;
          }
          pbVar5 = local_f0[0];
          local_b8 = local_f0[0];
          lVar15 = (longlong)pbVar19 - (longlong)pbVar18 >> 0x3f;
          pbStack_b0 = pbVar23;
          if (((longlong)pbVar19 - (longlong)pbVar18) / 3 + lVar15 == lVar15) {
            lVar15 = 0;
          }
          else {
            if (pbVar19 < pbVar18) {
              _invalid_parameter_noinfo();
            }
            if ((pbVar5 == (byte *)0x0) || (pbVar5 != local_f0[0])) {
              _invalid_parameter_noinfo();
            }
            lVar15 = ((longlong)pbVar23 - (longlong)pbVar18) / 3;
          }
          local_a8 = local_b8;
          pbStack_a0 = pbStack_b0;
          FUN_140b5d570((longlong)local_f0,(longlong)&local_a8,1,(undefined3 *)&local_f8);
          pbVar19 = local_d8;
          if (local_d0 < local_d8) {
            _invalid_parameter_noinfo();
          }
          pbVar18 = local_f0[0];
          if (local_f0[0] == (byte *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)local_f0[0];
          }
          if (pbVar19 + lVar15 * 3 <= *(byte **)(lVar7 + 0x20)) {
            if (pbVar18 == (byte *)0x0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)pbVar18;
            }
            pbVar18 = local_d8;
            pbVar23 = local_d0;
            if (*(byte **)(lVar7 + 0x18) <= pbVar19 + lVar15 * 3) goto LAB_140b624de;
          }
          _invalid_parameter_noinfo();
          pbVar18 = local_d8;
          pbVar23 = local_d0;
        }
      }
LAB_140b624de:
      lVar25 = lVar25 + 1;
      param_2 = param_2 + 1;
    } while (lVar25 < param_5);
  }
  pbVar18 = (byte *)(param_1 + 0x138);
  local_98 = pbVar18;
  FUN_140b5aed0((longlong *)pbVar18);
  pbVar23 = local_d8;
  lVar25 = (longlong)local_d0 - (longlong)local_d8 >> 0x3f;
  if (((longlong)local_d0 - (longlong)local_d8) / 3 + lVar25 == lVar25) {
    uVar22 = (ulonglong)param_6;
    if ((ulonglong)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 2) < uVar22) {
      log_InlineLogERROR("error CCompetionMgr::BuildCompetitionQuestion Question is Less %d!");
      if (local_d8 != (byte *)0x0) {
        operator_delete(local_d8);
      }
      local_d8 = (byte *)0x0;
      local_d0 = (byte *)0x0;
      local_c8 = 0;
      operator_delete(local_f0[0]);
      return extraout_RAX & 0xffffffffffffff00;
    }
    puVar2 = *(undefined4 **)(param_1 + 0xe8);
    if (puVar2 < *(undefined4 **)(param_1 + 0xe0)) {
      _invalid_parameter_noinfo();
    }
    lVar25 = *(longlong *)(param_1 + 200);
    puVar3 = *(undefined4 **)(param_1 + 0xe0);
    if (*(undefined4 **)(param_1 + 0xe8) < puVar3) {
      _invalid_parameter_noinfo();
    }
    if ((*(longlong *)(param_1 + 200) == 0) || (*(longlong *)(param_1 + 200) != lVar25)) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 != puVar2) {
      FUN_140b570c0((longlong)puVar3,puVar2);
    }
    uVar16 = 0;
    if (0 < (int)param_6) {
      do {
        if ((ulonglong)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 2) <= uVar16) {
          _invalid_parameter_noinfo();
        }
        local_f8 = (byte *)FUN_140b5c890(param_1,*(uint *)(*(longlong *)(param_1 + 0xe0) + uVar16 * 4));
        if (local_f8 != (byte *)0x0) {
          pbVar23 = *(byte **)(param_1 + 0x150);
          if (pbVar23 == (byte *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(longlong *)(param_1 + 0x160) - (longlong)pbVar23 >> 3;
          }
          pbVar19 = *(byte **)(param_1 + 0x158);
          if ((ulonglong)((longlong)pbVar19 - (longlong)pbVar23 >> 3) < uVar10) {
            *(byte **)pbVar19 = local_f8;
            *(byte **)(param_1 + 0x158) = pbVar19 + 8;
          }
          else {
            if (pbVar19 < pbVar23) {
              _invalid_parameter_noinfo();
            }
            pbVar23 = *(byte **)pbVar18;
            uVar10 = *(ulonglong *)(param_1 + 0x150);
            local_b8 = pbVar23;
            pbStack_b0 = pbVar19;
            if ((*(ulonglong *)(param_1 + 0x158) - uVar10 & 0xfffffffffffffff8) == 0) {
              lVar25 = 0;
            }
            else {
              if (*(ulonglong *)(param_1 + 0x158) < uVar10) {
                _invalid_parameter_noinfo();
              }
              if ((pbVar23 == (byte *)0x0) || (pbVar23 != *(byte **)pbVar18)) {
                _invalid_parameter_noinfo();
              }
              lVar25 = (longlong)((longlong)pbVar19 - uVar10) >> 3;
            }
            local_a8 = local_b8;
            pbStack_a0 = pbStack_b0;
            FUN_140b5bc90((longlong)pbVar18,(longlong)&local_a8,1,&local_f8);
            uVar10 = *(ulonglong *)(param_1 + 0x150);
            if (*(ulonglong *)(param_1 + 0x158) < uVar10) {
              _invalid_parameter_noinfo();
            }
            plVar4 = *(longlong **)pbVar18;
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar14 = 0;
            }
            else {
              lVar14 = *plVar4;
            }
            uVar10 = uVar10 + lVar25 * 8;
            if (uVar10 <= *(ulonglong *)(lVar14 + 0x20)) {
              if (plVar4 == (longlong *)0x0) {
                lVar25 = 0;
              }
              else {
                lVar25 = *plVar4;
              }
              if (*(ulonglong *)(lVar25 + 0x18) <= uVar10) goto LAB_140b62760;
            }
            _invalid_parameter_noinfo();
          }
        }
LAB_140b62760:
        uVar16 = uVar16 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  else {
    if (local_d0 < local_d8) {
      _invalid_parameter_noinfo();
    }
    pbVar18 = local_f0[0];
    local_f8 = operator_new(8);
    if (local_f8 == (byte *)0x0) {
      local_90[0] = (byte *)0x0;
    }
    else {
      *(byte ***)local_f8 = local_90;
      local_90[0] = local_f8;
    }
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_b8 = local_f8;
    while( true ) {
      pbVar19 = local_d0;
      if (local_d0 < local_d8) {
        _invalid_parameter_noinfo();
      }
      if ((pbVar18 == (byte *)0x0) || (pbVar18 != local_f0[0])) {
        _invalid_parameter_noinfo();
      }
      puVar20 = local_70;
      if (pbVar23 == pbVar19) break;
      if (pbVar18 == (byte *)0x0) {
        _invalid_parameter_noinfo();
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)pbVar18;
      }
      if (*(byte **)(lVar25 + 0x20) <= pbVar23) {
        _invalid_parameter_noinfo();
      }
      uVar6 = (uint)pbVar23[1];
      while( true ) {
        if (pbVar18 == (byte *)0x0) {
          _invalid_parameter_noinfo();
          lVar25 = 0;
        }
        else {
          lVar25 = *(longlong *)pbVar18;
        }
        if (*(byte **)(lVar25 + 0x20) <= pbVar23) {
          _invalid_parameter_noinfo();
        }
        if ((int)(uint)pbVar23[2] < (int)uVar6) break;
        if (pbVar18 == (byte *)0x0) {
          _invalid_parameter_noinfo();
          lVar25 = 0;
        }
        else {
          lVar25 = *(longlong *)pbVar18;
        }
        if (*(byte **)(lVar25 + 0x20) <= pbVar23) {
          _invalid_parameter_noinfo();
        }
        local_f8 = *(byte **)(param_1 + 0x48);
        pbVar19 = *(byte **)(param_1 + 0x18);
        uVar17 = (uint)(ushort)((ushort)*pbVar23 * 1000 + (short)uVar6);
        bVar1 = (*(byte **)(local_f8 + 8))[0x51];
        pbVar5 = local_f8;
        pbVar12 = *(byte **)(local_f8 + 8);
        while (bVar1 == 0) {
          if (*(uint *)(pbVar12 + 0x18) < uVar17) {
            pbVar8 = *(byte **)(pbVar12 + 0x10);
            pbVar12 = pbVar5;
          }
          else {
            pbVar8 = *(byte **)pbVar12;
          }
          pbVar5 = pbVar12;
          pbVar12 = pbVar8;
          bVar1 = pbVar8[0x51];
        }
        pbStack_b0 = pbVar5;
        local_b8 = pbVar19;
        pbVar12 = *(byte **)(param_1 + 0x48);
        if (pbVar19 == (byte *)0x0) {
          _invalid_parameter_noinfo();
        }
        if ((pbVar5 == pbVar12) || (uVar17 < *(uint *)(pbVar5 + 0x18))) {
          pbStack_50 = *(byte **)(param_1 + 0x48);
          local_58 = *(byte **)(param_1 + 0x18);
          ppbVar11 = &local_58;
        }
        else {
          ppbVar11 = &local_b8;
        }
        local_a8 = *ppbVar11;
        pbStack_a0 = ppbVar11[1];
        if ((local_a8 == (byte *)0x0) || (local_a8 != pbVar19)) {
          _invalid_parameter_noinfo();
        }
        if (pbStack_a0 != local_f8) {
          local_f8 = (byte *)CONCAT44(local_f8._4_4_,uVar17);
          puVar9 = FUN_140b61790((longlong *)(param_1 + 0x18),(uint *)&local_f8);
          puVar20 = (undefined8 *)puVar9[4];
          if (puVar20 < (undefined8 *)puVar9[3]) {
            _invalid_parameter_noinfo();
          }
          puVar13 = (undefined8 *)puVar9[3];
          if ((undefined8 *)puVar9[4] < puVar13) {
            _invalid_parameter_noinfo();
          }
          for (; puVar13 != puVar20; puVar13 = puVar13 + 1) {
            FUN_140b5de20((longlong *)local_90,puVar13);
          }
        }
        uVar6 = uVar6 + 1;
      }
      if (pbVar18 == (byte *)0x0) {
        _invalid_parameter_noinfo();
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)pbVar18;
      }
      if (*(byte **)(lVar25 + 0x20) <= pbVar23) {
        _invalid_parameter_noinfo();
      }
      pbVar23 = pbVar23 + 3;
    }
    if ((ulonglong)((longlong)local_70 - (longlong)local_78 >> 3) < (ulonglong)param_6) {
      log_InlineLogERROR("error CCompetionMgr::BuildCompetitionQuestion Question is Less %d!");
      if (local_78 != (undefined8 *)0x0) {
        operator_delete(local_78);
      }
      local_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_68 = 0;
      operator_delete(local_90[0]);
      if (local_d8 != (byte *)0x0) {
        operator_delete(local_d8);
      }
      local_d8 = (byte *)0x0;
      local_d0 = (byte *)0x0;
      local_c8 = 0;
      operator_delete(local_f0[0]);
      return extraout_RAX_00 & 0xffffffffffffff00;
    }
    if (local_70 < local_78) {
      _invalid_parameter_noinfo();
    }
    puVar9 = local_78;
    pbVar18 = local_90[0];
    if (local_70 < local_78) {
      _invalid_parameter_noinfo();
    }
    if ((local_90[0] == (byte *)0x0) || (local_90[0] != pbVar18)) {
      _invalid_parameter_noinfo();
    }
    if (puVar9 != puVar20) {
      FUN_140b56f70((longlong)puVar9,puVar20);
    }
    puVar20 = local_78;
    if (local_70 < local_78) {
      _invalid_parameter_noinfo();
    }
    pbVar23 = local_90[0];
    pbVar18 = local_98;
    iVar24 = 0;
    while( true ) {
      puVar9 = local_70;
      if (local_70 < local_78) {
        _invalid_parameter_noinfo();
      }
      if ((pbVar23 == (byte *)0x0) || (pbVar23 != local_90[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar20 == puVar9) break;
      if (pbVar23 == (byte *)0x0) {
        _invalid_parameter_noinfo();
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)pbVar23;
      }
      if (*(undefined8 **)(lVar25 + 0x20) <= puVar20) {
        _invalid_parameter_noinfo();
      }
      local_98 = (byte *)*puVar20;
      if (local_98 != (byte *)0x0) {
        pbVar19 = *(byte **)(pbVar18 + 0x18);
        if (pbVar19 == (byte *)0x0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(longlong *)(pbVar18 + 0x28) - (longlong)pbVar19 >> 3;
        }
        pbVar5 = *(byte **)(pbVar18 + 0x20);
        if ((ulonglong)((longlong)pbVar5 - (longlong)pbVar19 >> 3) < uVar22) {
          *(byte **)pbVar5 = local_98;
          *(byte **)(pbVar18 + 0x20) = pbVar5 + 8;
        }
        else {
          if (pbVar5 < pbVar19) {
            _invalid_parameter_noinfo();
          }
          pbVar19 = *(byte **)pbVar18;
          uVar22 = *(ulonglong *)(pbVar18 + 0x18);
          local_a8 = pbVar19;
          pbStack_a0 = pbVar5;
          if ((*(ulonglong *)(pbVar18 + 0x20) - uVar22 & 0xfffffffffffffff8) == 0) {
            lVar25 = 0;
          }
          else {
            if (*(ulonglong *)(pbVar18 + 0x20) < uVar22) {
              _invalid_parameter_noinfo();
            }
            if ((pbVar19 == (byte *)0x0) || (pbVar19 != *(byte **)pbVar18)) {
              _invalid_parameter_noinfo();
            }
            lVar25 = (longlong)((longlong)pbVar5 - uVar22) >> 3;
          }
          local_58 = local_a8;
          pbStack_50 = pbStack_a0;
          FUN_140b5bc90((longlong)pbVar18,(longlong)&local_58,1,&local_98);
          uVar22 = *(ulonglong *)(pbVar18 + 0x18);
          if (*(ulonglong *)(pbVar18 + 0x20) < uVar22) {
            _invalid_parameter_noinfo();
          }
          plVar4 = *(longlong **)pbVar18;
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = 0;
          }
          else {
            lVar14 = *plVar4;
          }
          uVar22 = uVar22 + lVar25 * 8;
          if (uVar22 <= *(ulonglong *)(lVar14 + 0x20)) {
            if (plVar4 == (longlong *)0x0) {
              lVar25 = 0;
            }
            else {
              lVar25 = *plVar4;
            }
            if (*(ulonglong *)(lVar25 + 0x18) <= uVar22) goto LAB_140b62ca6;
          }
          _invalid_parameter_noinfo();
        }
LAB_140b62ca6:
        iVar24 = iVar24 + 1;
      }
      if ((int)param_6 <= iVar24) break;
      if (pbVar23 == (byte *)0x0) {
        _invalid_parameter_noinfo();
        lVar25 = 0;
      }
      else {
        lVar25 = *(longlong *)pbVar23;
      }
      if (*(undefined8 **)(lVar25 + 0x20) <= puVar20) {
        _invalid_parameter_noinfo();
      }
      puVar20 = puVar20 + 1;
    }
    if (local_78 != (undefined8 *)0x0) {
      operator_delete(local_78);
    }
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    operator_delete(local_90[0]);
  }
  if (local_d8 != (byte *)0x0) {
    operator_delete(local_d8);
  }
  local_d8 = (byte *)0x0;
  local_d0 = (byte *)0x0;
  local_c8 = 0;
  operator_delete(local_f0[0]);
  return CONCAT71((int7)((ulonglong)extraout_RAX_01 >> 8),1);
}




void FUN_140b62d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  
  *param_1 = competion::CCompetionMgr::vftable;
  plVar6 = *(longlong **)param_1[9];
  plVar2 = (longlong *)param_1[3];
  lVar9 = 0;
  local_58 = plVar2;
  plStack_50 = plVar6;
  while( true ) {
    plVar7 = (longlong *)param_1[9];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[3])) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar7) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar7 = (longlong *)plVar6[7];
    if ((longlong *)plVar6[8] < plVar7) {
      _invalid_parameter_noinfo();
    }
    plVar3 = (longlong *)plVar6[4];
    local_48 = plVar3;
    while( true ) {
      plStack_40 = plVar7;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar9;
      }
      else {
        lVar8 = *plVar2;
      }
      if (plVar6 == *(longlong **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar4 = (longlong *)plVar6[8];
      if (plVar4 < (longlong *)plVar6[7]) {
        _invalid_parameter_noinfo();
      }
      if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)plVar6[4])) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar4) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar9;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      puVar5 = (undefined8 *)*plVar7;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = lVar9;
      }
      else {
        lVar8 = *plVar3;
      }
      if (*(longlong **)(lVar8 + 0x20) <= plVar7) {
        _invalid_parameter_noinfo();
      }
      plVar7 = plVar7 + 1;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x51) == '\0') {
      plVar7 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar7 + 0x51) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x51);
        plVar6 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (plStack_50 = plVar6, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x51);
          plVar6 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x51);
        plVar3 = (longlong *)plVar6[1];
        plVar7 = plVar6;
        while ((plVar6 = plVar3, plStack_50 = plVar6, cVar1 == '\0' && (plVar7 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x51);
          plVar3 = (longlong *)plVar6[1];
          plVar7 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  FUN_140b606c0(param_1 + 3,*(longlong **)(param_1[9] + 8),param_3,param_4);
  *(undefined8 *)(param_1[9] + 8) = param_1[9];
  param_1[10] = 0;
  *(undefined8 *)param_1[9] = param_1[9];
  *(undefined8 *)(param_1[9] + 0x10) = param_1[9];
  plVar6 = (longlong *)param_1[0x16];
  if ((longlong *)param_1[0x17] < plVar6) {
    _invalid_parameter_noinfo();
  }
  plVar2 = (longlong *)param_1[0x13];
  local_48 = plVar2;
  while( true ) {
    plVar7 = (longlong *)param_1[0x17];
    plStack_40 = plVar6;
    if (plVar7 < (longlong *)param_1[0x16]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[0x13])) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar7) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
      _invalid_parameter_noinfo();
    }
    puVar5 = (undefined8 *)*plVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = lVar9;
    }
    else {
      lVar8 = *plVar2;
    }
    if (*(longlong **)(lVar8 + 0x20) <= plVar6) {
      _invalid_parameter_noinfo();
    }
    plVar6 = plVar6 + 1;
  }
  FUN_140b5aed0(param_1 + 0x13);
  puVar5 = (undefined8 *)param_1[0x25];
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  FUN_140b5c9a0((longlong)param_1);
  plVar6 = param_1 + 0x39;
  plStack_40 = (longlong *)param_1[0x3f];
  local_58 = (longlong *)*plVar6;
  plStack_50 = (longlong *)*plStack_40;
  local_48 = local_58;
  FUN_140b581a0(plVar6,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[0x3f]);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  operator_delete((void *)*plVar6);
  if ((void *)param_1[0x36] != (void *)0x0) {
    operator_delete((void *)param_1[0x36]);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  operator_delete((void *)param_1[0x33]);
  if ((void *)param_1[0x30] != (void *)0x0) {
    operator_delete((void *)param_1[0x30]);
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  operator_delete((void *)param_1[0x2d]);
  if ((void *)param_1[0x2a] != (void *)0x0) {
    operator_delete((void *)param_1[0x2a]);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  operator_delete((void *)param_1[0x27]);
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete((void *)param_1[0x22]);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  operator_delete((void *)param_1[0x1f]);
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete((void *)param_1[0x1c]);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  operator_delete((void *)param_1[0x19]);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  operator_delete((void *)param_1[0x13]);
  plVar6 = param_1 + 0xb;
  plStack_40 = (longlong *)param_1[0x11];
  local_58 = (longlong *)*plVar6;
  plStack_50 = (longlong *)*plStack_40;
  local_48 = local_58;
  FUN_140b5a0a0(plVar6,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[0x11]);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  operator_delete((void *)*plVar6);
  plVar6 = param_1 + 3;
  plStack_40 = (longlong *)param_1[9];
  local_58 = (longlong *)*plVar6;
  plStack_50 = (longlong *)*plStack_40;
  local_48 = local_58;
  FUN_140b61190(plVar6,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  operator_delete((void *)*plVar6);
  return;
}




undefined8 * FUN_140b63320(undefined8 *param_1)

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
  lVar2 = FUN_140b562f0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x51) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140b633a0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140b62d70(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140b633d0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = competion::CCompetionMgr::vftable;
  FUN_140b63320(param_1 + 3);
  FUN_140b5dda0(param_1 + 0xb);
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x13);
    plVar2 = plVar1;
  }
  param_1[0x13] = plVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x19);
    plVar2 = plVar1;
  }
  param_1[0x19] = plVar2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x1f);
    plVar2 = plVar1;
  }
  param_1[0x1f] = plVar2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x27);
    plVar2 = plVar1;
  }
  param_1[0x27] = plVar2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  plVar1 = operator_new(8);
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x2d);
    plVar2 = plVar1;
  }
  param_1[0x2d] = plVar2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0x33);
    plVar3 = plVar2;
  }
  param_1[0x33] = plVar3;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_140b5e030(param_1 + 0x39);
  tq::CTimer::CTimer((CTimer *)(param_1 + 0x41),0);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0x45) = 3;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  tq::CTimer::Clear((CTimer *)(param_1 + 0x41));
  return param_1;
}




longlong FUN_140b635e0(longlong *param_1,ushort param_2,ushort param_3,int *param_4,longlong param_5,longlong param_6,int param_7)

{
  DWORD DVar1;
  uint7 uVar4;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar5;
  CMsg local_438 [1072];
  
  uVar4 = (uint7)((ulonglong)&stack0x00000000 >> 8);
  if ((int)param_1[2] == 0) {
    if (param_2 < 0x1f) {
      FUN_140b5aed0(param_1 + 0x27);
      FUN_140b57700((longlong)(param_1 + 0x39));
      FUN_140b5af90(param_1 + 0x1f);
      FUN_140b5c9a0((longlong)param_1);
      FUN_140b62240((longlong)param_1,param_4,param_5,param_6,param_7,(uint)param_2);
      *(undefined4 *)(param_1 + 0x43) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      uVar5 = (undefined1)(param_3 / 0x3c);
      if (3 < param_3 / 0x3c) {
        uVar5 = 3;
      }
      *(undefined1 *)(param_1 + 0x45) = uVar5;
      DVar1 = timeGetTime();
      *(DWORD *)((longlong)param_1 + 0x21c) = DVar1 + (uint)*(byte *)(param_1 + 0x45) * 60000;
      tq::CTimer::SetInterval((CTimer *)(param_1 + 0x41),(uint)param_3);
      tq::CTimer::Startup((CTimer *)(param_1 + 0x41),(uint)param_3);
      FUN_140b64210(local_438);
      uVar3 = FUN_140b64330(local_438,param_3,(short)(param_1[0x2b] - param_1[0x2a] >> 3),0x1e);
      if ((char)uVar3 == '\0') {
        log_InlineLogERROR(&DAT_140b6b6c0,"IF_OK","msg.CreateBeginMsg(unDelaySec, (USHORT) m_setCompetQuestion.size())",
                           "f:\\version\\cqserver-78.0.11-1204\\modules\\competion\\src\\competionmgr.cpp",0x259);
      }
      else {
        (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],local_438);
      }
      FUN_140b60b20(param_1,1);
      uVar3 = FUN_140b64290((undefined8 *)local_438);
      lVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    else {
      lVar2 = (ulonglong)uVar4 << 8;
    }
  }
  else {
    lVar2 = (ulonglong)uVar4 << 8;
  }
  return lVar2;
}




undefined8 * FUN_140b637a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_140b764e0;
  if (DAT_140b764e0 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x230);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FUN_140b633d0(puVar1);
    }
    DAT_140b764e0 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140b6b6c0);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




void FUN_140b63820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_140b764e0;
  if (DAT_140b764e0 != (undefined8 *)0x0) {
    if (DAT_140b764e0 != (undefined8 *)0x0) {
      FUN_140b62d70(DAT_140b764e0,param_2,param_3,param_4);
      operator_delete(puVar1);
    }
    DAT_140b764e0 = (undefined8 *)0x0;
  }
  return;
}




void FUN_140b638a0(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140b638b0(void)

{
  return 0;
}




undefined8 FUN_140b638c0(void)

{
  return 0;
}




undefined8 FUN_140b638d0(void)

{
  return 0;
}




undefined8 FUN_140b638e0(void)

{
  return 0;
}




undefined8 * FUN_140b638f0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140b63930(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = competion::CModule::vftable;
  FUN_140b63820(param_1,param_2,param_3,param_4);
  FUN_140b64290(param_1 + 0x107);
  FUN_140b64c40(param_1 + 0x84);
  FUN_140b64a90(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_140b63990(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_140b639b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX_00;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),5);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140b6b6c0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  puVar2 = FUN_140b637a0();
  uVar3 = FUN_140b619d0((longlong)puVar2,lVar1,param_3,param_4);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_140b6b6c0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




longlong * FUN_140b63a50(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 == 0x3ea) {
      plVar3 = (longlong *)(param_1 + 0x10);
    }
    else if (uVar1 == 0x3eb) {
      plVar3 = (longlong *)(param_1 + 0x420);
    }
    else {
      if (uVar1 != 0x814) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x838);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




void FUN_140b63ac0(void)

{
  longlong *plVar1;
  
  plVar1 = FUN_140b637a0();
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140b6b6c0);
    return;
  }
  FUN_140b613e0(plVar1);
  return;
}




bool FUN_140b63b10(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_140b637a0();
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140b6b6c0);
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x814,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3eb,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x18))(*(longlong **)(param_1 + 0x830),5,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_140b63bd0(void)

{
  return 1;
}




undefined8 * FUN_140b63be0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = competion::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_140b64a40((CMsg *)(param_1 + 2));
  FUN_140b64bf0((CMsg *)(param_1 + 0x84));
  param_1[0x106] = param_2;
  FUN_140b64210((CMsg *)(param_1 + 0x107));
  return param_1;
}




undefined8 * FUN_140b63c50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = competion::CModule::vftable;
  FUN_140b63820(param_1,param_2,param_3,param_4);
  FUN_140b64290(param_1 + 0x107);
  FUN_140b64c40(param_1 + 0x84);
  FUN_140b64a90(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_140b63cd0(longlong param_1,int param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140b6b6c0);
    uVar1 = 0;
  }
  else {
    plVar2 = FUN_140b63a50(param_1,param_3,param_4);
    uVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      uVar1 = (undefined2)plVar2[1];
    }
  }
  return uVar1;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x13d60  1  ModuleCreate */
  puVar2 = operator_new(0xc60);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_140b63be0(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_140b6b6c0);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_140b63b10((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




undefined4 FUN_140b63e40(undefined4 *param_1)

{
  return *param_1;
}




undefined2 FUN_140b63e50(longlong param_1)

{
  return *(undefined2 *)(param_1 + 4);
}




void FUN_140b63ea0(longlong param_1)

{
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  return;
}




void FUN_140b63eb0(longlong param_1)

{
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  return;
}




undefined2 FUN_140b63ec0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 6);
}




undefined2 FUN_140b63ee0(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xe);
}




undefined1 FUN_140b63ef0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}




void FUN_140b63f00(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}




undefined * FUN_140b63f10(void)

{
  if ((DAT_140b764f0 & 1) == 0) {
    DAT_140b764f0 = DAT_140b764f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140b764e8,"CCompetionPlayer");
    atexit((_func_5014 *)&LAB_140b6a410);
  }
  return &DAT_140b764e8;
}




void FUN_140b63f70(__uint64 param_1)

{
  if ((DAT_140b764f0 & 1) == 0) {
    DAT_140b764f0 = DAT_140b764f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140b764e8,"CCompetionPlayer");
    atexit((_func_5014 *)&LAB_140b6a410);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b63fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_140b764e8,param_1);
  return;
}




void FUN_140b63fd0(void *param_1)

{
  if ((DAT_140b764f0 & 1) == 0) {
    DAT_140b764f0 = DAT_140b764f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140b764e8,"CCompetionPlayer");
    atexit((_func_5014 *)&LAB_140b6a410);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b64025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_140b764e8,param_1);
  return;
}




void FUN_140b64030(void *param_1)

{
  if ((DAT_140b764f0 & 1) == 0) {
    DAT_140b764f0 = DAT_140b764f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140b764e8,"CCompetionPlayer");
    atexit((_func_5014 *)&LAB_140b6a410);
  }
                    /* WARNING: Could not recover jumptable at 0x000140b64085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_140b764e8,param_1);
  return;
}




void * FUN_140b64090(void *param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_140b63fd0(param_1);
  }
  return param_1;
}




undefined4 * FUN_140b640b0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  if ((DAT_140b764f0 & 1) == 0) {
    DAT_140b764f0 = DAT_140b764f0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_140b764e8,"CCompetionPlayer");
    atexit((_func_5014 *)&LAB_140b6a410);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_140b764e8,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_1;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined2 *)((longlong)puVar1 + 6) = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((longlong)puVar1 + 10) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xe) = 0;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  return puVar1;
}




void FUN_140b64150(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_140b63fd0(param_1);
  }
  return;
}




CMsg * FUN_140b64170(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140b641a0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140b641b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140b641b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140b641c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140b641c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140b641d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140b641d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140b641e0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140b64210(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = competion::CMsgCompetion::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x20),0x3d5,true);
  return param_1;
}




void FUN_140b64290(undefined8 *param_1)

{
  *param_1 = competion::CMsgCompetion::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_140b642d0(CMsg *param_1,undefined1 param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0x2b;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




undefined8 FUN_140b64330(CMsg *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = 900;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = 600;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x10) = 300;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0x2b;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




bool FUN_140b64400(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x814;
}




undefined8 FUN_140b64430(CMsg *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  tq::CMsg::Init(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = 0;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0x2b;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




undefined8 FUN_140b64490(CMsg *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  tq::CMsg::Init(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 7;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0x2b;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




ulonglong FUN_140b64540(CMsg *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,undefined2 param_7)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  char *pcVar6;
  
  if (param_2 != (char *)0x0) {
    uVar5 = 0xffffffffffffffff;
    in_RAX = 0;
    uVar4 = 0;
    pcVar6 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((~uVar5 - 1 < 0x100) && (param_3 != (char *)0x0)) {
      uVar5 = 0xffffffffffffffff;
      pcVar6 = param_3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if ((~uVar5 - 1 < 0x65) && (in_RAX = uVar4, param_4 != (char *)0x0)) {
        uVar4 = 0xffffffffffffffff;
        pcVar6 = param_4;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if ((~uVar4 - 1 < 0x65) && (param_5 != (char *)0x0)) {
          uVar4 = 0xffffffffffffffff;
          pcVar6 = param_5;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if ((~uVar4 - 1 < 0x65) && (param_6 != (char *)0x0)) {
            uVar4 = 0xffffffffffffffff;
            pcVar6 = param_6;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (~uVar4 - 1 < 0x65) {
              tq::CMsg::Init(param_1);
              *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 2;
              *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
              *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_7;
              tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
              tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_3);
              tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_4);
              tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_5);
              tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_6);
              uVar3 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
              sVar2 = (short)uVar3 + 0x2b;
              **(short **)(param_1 + 0x408) = sVar2;
              return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar3) >> 0x10),sVar2) >> 8),1);
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}




undefined8 FUN_140b646e0(CMsg *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  tq::CMsg::Init(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 5;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x814;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0x2b;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140b64730(longlong param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140b764b8 ^ (ulonglong)auStack_48;
  **(short **)(param_1 + 0x408) = (*(short **)(param_1 + 0x408))[10] * 0x14 + 0x2c;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (param_2 != (char *)0x0) {
    strncpy((char *)&local_28,param_2,0x10);
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  local_18 = CONCAT22(param_4,param_3);
  lVar3 = (longlong)*(int *)(lVar2 + 0x14);
  *(undefined8 *)(lVar2 + 0x18 + lVar3 * 0x14) = local_28;
  *(undefined8 *)(lVar2 + 0x20 + lVar3 * 0x14) = local_20;
  *(undefined4 *)(lVar2 + 0x28 + lVar3 * 0x14) = local_18;
  lVar2 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar2 + 0x14);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




ulonglong FUN_140b64810(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x408);
  if (*(char *)(uVar1 + 4) != '\x02') {
    return uVar1 & 0xffffffffffffff00;
  }
  *(undefined2 *)(uVar1 + 8) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_5;
  return CONCAT71((uint7)(byte)((ushort)param_5 >> 8),1);
}




ulonglong FUN_140b64850(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x408);
  if (*(char *)(uVar1 + 4) != '\x05') {
    return uVar1 & 0xffffffffffffff00;
  }
  *(undefined2 *)(uVar1 + 6) = param_5;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_6;
  return CONCAT71((uint7)(byte)((ushort)param_6 >> 8),1);
}




ulonglong FUN_140b648b0(longlong param_1,char *param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  if ((*(char *)(*(ulonglong *)(param_1 + 0x408) + 4) == '\x05') && (param_2 != (char *)0x0)) {
    tq::CStringPacker::AddString((CStringPacker *)(param_1 + 0x410),param_2);
    uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
    sVar1 = (short)uVar2 + 0x2b;
    **(short **)(param_1 + 0x408) = sVar1;
    return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
  }
  return *(ulonglong *)(param_1 + 0x408) & 0xffffffffffffff00;
}




ulonglong FUN_140b64910(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x408);
  if (*(char *)(uVar1 + 4) != '\x04') {
    return uVar1 & 0xffffffffffffff00;
  }
  *(undefined2 *)(uVar1 + 6) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  lVar2 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar2 + 10) = param_2;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}




void FUN_140b64940(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = FUN_140b637a0();
    if (plVar2 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_140b6b6c0);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x408);
      if (*(char *)(lVar1 + 4) == '\x03') {
        FUN_140b5daf0((longlong)plVar2,param_2,(uint)*(ushort *)(lVar1 + 6),*(char *)(lVar1 + 8));
      }
      else if (*(char *)(lVar1 + 4) == '\b') {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      }
    }
  }
  return;
}




undefined8 * FUN_140b649e0(undefined8 *param_1,uint param_2)

{
  *param_1 = competion::CMsgCompetion::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140b64a40(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = competion::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140b64a90(undefined8 *param_1)

{
  *param_1 = competion::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140b64b00(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_140b64b30(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = FUN_140b637a0();
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140b6b6c0);
    }
    else {
      FUN_140b602b0((longlong)puVar1,param_2);
    }
  }
  return;
}




undefined8 * FUN_140b64ba0(undefined8 *param_1,byte param_2)

{
  *param_1 = competion::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140b64bf0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = competion::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140b64c40(undefined8 *param_1)

{
  *param_1 = competion::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140b64cb0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_140b64ce0(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = FUN_140b637a0();
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_140b6b6c0);
      return;
    }
    FUN_140b5fda0((longlong)puVar1,param_2);
  }
  return;
}




undefined8 * FUN_140b64d40(undefined8 *param_1,byte param_2)

{
  *param_1 = competion::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140b64d90(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = competion::CMsgSponsor::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140b64df0(undefined8 *param_1)

{
  *param_1 = competion::CMsgSponsor::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_140b64e30(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x428;
}




undefined8 FUN_140b64e60(CMsg *param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x428;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 8;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




undefined8 * FUN_140b64eb0(undefined8 *param_1,uint param_2)

{
  *param_1 = competion::CMsgSponsor::vftable;
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




undefined8 FUN_140b6508c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_140b764b8) && ((short)(_StackCookie >> 0x30) == 0)) {
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
  
  local_res10 = _decode_pointer(DAT_140b76aa0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140b76aa0);
    local_res18[0] = _decode_pointer(DAT_140b76a98);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140b76aa0 = _encode_pointer(local_res10);
    DAT_140b76a98 = _encode_pointer(local_res18[0]);
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




bool FUN_140b652d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140b76a98 = _encode_pointer(puVar1);
  DAT_140b76aa0 = DAT_140b76a98;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140b65948();
    atexit(FUN_140b65980);
    atexit((_func_5014 *)&LAB_140b6593c);
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
    if (DAT_140b764f4 < 1) {
      return 0;
    }
    DAT_140b764f4 = DAT_140b764f4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140b76a88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140b76a88;
        pvVar3 = DAT_140b76a88;
      }
      DAT_140b76a88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140b653aa;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140b653aa:
    if (DAT_140b76a80 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140b76aa0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140b76a98);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140b76aa0);
            plVar12 = (longlong *)_decode_pointer(DAT_140b76a98);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140b76a98 = _encoded_null();
        DAT_140b76aa0 = DAT_140b76a98;
      }
      DAT_140b76a80 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140b76a88 = (void *)0x0;
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
      bVar13 = DAT_140b76a88 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140b76a88;
        pvVar3 = DAT_140b76a88;
      }
      DAT_140b76a88 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140b654d3;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140b654d3:
    if (DAT_140b76a80 == 0) {
      DAT_140b76a80 = 1;
      iVar4 = _initterm_e(&DAT_140b6b2b8,&DAT_140b6b2c8);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140b6b2a8,&DAT_140b6b2b0);
      DAT_140b76a80 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140b76a88 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140b76a90 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140b76a90), BVar5 != 0)) {
      (*DAT_140b76a90)(param_1,2,param_3);
    }
    DAT_140b764f4 = DAT_140b764f4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140b6564c) */
/* WARNING: Removing unreachable block (ram,0x000140b655e3) */
/* WARNING: Removing unreachable block (ram,0x000140b65687) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140b764f4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140b764d0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140b764d0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140b63bd0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140b63bd0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140b764d0 = 0xffffffff;
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




undefined8 FUN_140b65704(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_140b765a0);
  local_30 = DAT_140b76698;
  local_38 = RtlLookupFunctionEntry(DAT_140b76698,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_140b76638 = local_res8;
    DAT_140b76698 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_140b765a0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_140b76510 = DAT_140b76698;
  _DAT_140b76620 = local_res8[0];
  _DAT_140b76500 = 0xc0000409;
  _DAT_140b76504 = 1;
  local_20 = DAT_140b764b8;
  local_18 = DAT_140b764c0;
  DAT_140b76598 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_140b6da98);
  if (DAT_140b76598 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_140b65948(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140b6e500; puVar1 < &DAT_140b6e500; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140b65980(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140b6e510; puVar1 < &DAT_140b6e510; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140b50000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140b50000);
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
  if (DAT_140b764b8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140b764b8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140b764b8 == 0x2b992ddfa232) {
      DAT_140b764b8 = 0x2b992ddfa233;
    }
  }
  DAT_140b764c0 = ~DAT_140b764b8;
  return;
}




void Unwind_140b65bd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65bf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65c30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65c50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65c70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65c90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65cb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65cf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65d10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65d30(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65d50(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65d70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65d90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65db0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65df0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65e10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65e30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65e50(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65e70(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65e90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65eb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65ed0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65ef0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b65f10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b65f30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b65f50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b65f70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b65f90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b65fb0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b65fd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b65ff0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_140b66010(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b66030(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_140b66050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b66070(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_140b66090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b660b0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc0));
  return;
}




void Unwind_140b660d0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b660f0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x30));
  return;
}




void Unwind_140b66110(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x60));
  return;
}




void Unwind_140b66130(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_140b66150(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xc0));
  return;
}




void Unwind_140b66170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b66190(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b661b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b661d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b661f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b66210(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140b66230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140b66270(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b662b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b662d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140b662f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140b66330(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66350(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140b66370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66390(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140b663b0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b663d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140b663f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66410(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140b66430(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66450(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140b66470(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b66490(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140b664b0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140b664d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b664f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b66510(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b66530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66550(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b665b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b665d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b665f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66610(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66630(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66650(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b66670(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b666b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b666d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b666f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66710(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66730(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66750(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66770(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140b66790(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b667b0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b667d0(void)

{
  FUN_140b51160();
  return;
}




void Catch_140b667f0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66810(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66830(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66850(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66870(undefined8 param_1,longlong param_2)

{
  FUN_140b54140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66890(undefined8 param_1,longlong param_2)

{
  FUN_140b54150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b668b0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b668d0(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b668f0(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66910(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66930(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66950(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66970(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66990(void)

{
  FUN_140b51160();
  return;
}




void Catch_140b669b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b669e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66a10(void)

{
  FUN_140b51160();
  return;
}




void Catch_140b66a30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66a60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b66a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b66aa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140b66ac0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b66ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140b66b00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140b66b20(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0(*(exception **)(param_2 + 0x40));
  return;
}




void Catch_140b66b40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66b70(void)

{
  FUN_140b51160();
  return;
}




void Catch_140b66b90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66bc0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66be0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66c00(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66c20(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66c40(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66c60(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140b66c80(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b66ca0(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66cc0(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66ce0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66d00(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66d20(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66d40(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66d60(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66d80(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66da0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66dc0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66de0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66e00(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66e20(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66e40(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66e60(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66e80(undefined8 param_1,longlong param_2)

{
  FUN_140b54140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66ea0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b66ec0(undefined8 param_1,longlong param_2)

{
  FUN_140b54150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b66ee0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140b66f00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140b66f20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b66f40(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140b66f60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140b66f80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140b66fa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b66fc0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140b66fe0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b67000(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b67020(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140b67040(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b67060(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67080(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b670a0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b670c0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b670e0(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67100(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67120(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67140(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67160(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67180(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b671a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b671c0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b671e0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67200(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67220(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67240(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67260(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67280(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b672a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b672c0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b672e0(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67300(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67320(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67340(undefined8 param_1,longlong param_2)

{
  FUN_140b54140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67360(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67380(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b673a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54140(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b673c0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b673e0(undefined8 param_1,longlong param_2)

{
  FUN_140b54150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67400(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67420(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b67440(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67460(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67480(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b674a0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b674c0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b674e0(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67500(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67520(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67540(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67560(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67580(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b675a0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b675c0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b675e0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67600(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67620(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67640(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67660(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67680(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b676a0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b676c0(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b676e0(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67700(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67720(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140b67740(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b67760(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67780(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b677a0(undefined8 param_1,longlong param_2)

{
  FUN_140b64df0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b677c0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b677e0(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67800(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67820(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67840(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67860(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67880(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b678a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b678c0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b678e0(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67900(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67920(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67940(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67960(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67980(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b679a0(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b679c0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b679e0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67a00(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67a20(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67a40(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67a60(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67a80(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67ab0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b67ad0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Catch_140b67af0(undefined8 param_1,longlong param_2)

{
  FUN_140b57800(*(longlong *)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67b20(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67b50(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67b70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67ba0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67bc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67bf0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b67c10(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67c30(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67c50(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67c70(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67c90(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140b67cb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b67ce0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b67d00(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b67d20(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140b67d40(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b67d60(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67d80(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67da0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67dc0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67de0(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67e00(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67e20(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67e40(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67e60(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67e80(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67ea0(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67ec0(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67ee0(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67f00(undefined8 param_1,longlong param_2)

{
  FUN_140b54150(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67f20(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b67f40(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67f60(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67f80(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67fa0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67fc0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b67fe0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68000(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68020(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68040(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68060(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68080(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b680a0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b680c0(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b680e0(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68100(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68120(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68140(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68160(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Catch_140b68180(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140b681b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b681d0(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b681f0(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140b68210(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}




void Unwind_140b68230(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b68250(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68270(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68290(undefined8 param_1,longlong param_2)

{
  FUN_140b5cc70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b682b0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b682d0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b682f0(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68310(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68330(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68350(undefined8 param_1,longlong param_2)

{
  FUN_140b5cda0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b68370(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68390(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b683b0(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b683d0(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b683f0(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68410(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140b68430(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68450(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68470(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68490(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b684b0(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b684d0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b684f0(undefined8 param_1,longlong param_2)

{
  FUN_140b5cc70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b68510(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68530(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68550(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68570(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68590(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b685b0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b685d0(undefined8 param_1,longlong param_2)

{
  FUN_140b5cda0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b685f0(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140b68610(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b68630(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140b68650(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140b68670(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b68690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b686b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140b686d0(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140b686f0(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0xd0) + 0x18);
  return;
}




void Unwind_140b68710(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0xd0) + 8));
  return;
}




void Unwind_140b68730(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140b68750(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0xd0));
  return;
}




void Unwind_140b68770(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68790(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x38) + 8));
  return;
}




void Unwind_140b687b0(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}




void Catch_140b687d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140b68800(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68820(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140b68840(undefined8 param_1,longlong param_2)

{
  FUN_140b51730((undefined8 *)(param_2 + 0x4a0));
  return;
}




void Unwind_140b68860(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140b68880(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(param_2 + 0x4a0));
  return;
}




void Unwind_140b688a0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(param_2 + 0x4d0));
  return;
}




void Unwind_140b688c0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(param_2 + 0x500));
  return;
}




void Unwind_140b688e0(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(param_2 + 0x530));
  return;
}




void Unwind_140b68910(undefined8 param_1,longlong param_2)

{
  FUN_140b51530((undefined8 *)(param_2 + 0x560));
  return;
}




void Unwind_140b68940(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b68960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b68980(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b689a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_140b689c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x4a8));
  return;
}




void Unwind_140b689e0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68a10(undefined8 param_1,longlong param_2)

{
  FUN_140b54140((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68a30(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68a50(undefined8 param_1,longlong param_2)

{
  FUN_140b597f0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68a70(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68a90(undefined8 param_1,longlong param_2)

{
  FUN_140b54140((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68ab0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68ae0(undefined8 param_1,longlong param_2)

{
  FUN_140b54140((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68b00(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68b20(undefined8 param_1,longlong param_2)

{
  FUN_140b597f0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68b40(undefined8 param_1,longlong param_2)

{
  FUN_140b557b0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68b60(undefined8 param_1,longlong param_2)

{
  FUN_140b54140((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68b80(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140b68ba0(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(*(longlong *)(param_2 + 0x48) + 0x18);
  return;
}




void Unwind_140b68bc0(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x48) + 8));
  return;
}




void Unwind_140b68be0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140b68c00(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_140b68c20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140b68c40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140b68c60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140b68c80(undefined8 param_1,longlong param_2)

{
  FUN_140b511c0((exception *)(param_2 + 0x60));
  return;
}




undefined8 Catch_140b68ca0(void)

{
  log_InlineLogCATCH_ERROR("error CCompetionMgr::OnTimer Status %d in %s, %d");
  return 0x140b613fa;
}




void Unwind_140b68ce0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b68d10(undefined8 param_1,longlong param_2)

{
  FUN_140b54080((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b68d30(undefined8 param_1,longlong param_2)

{
  FUN_140b55750((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b68d50(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b68d70(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_140b68d90(undefined8 param_1,longlong param_2)

{
  FUN_140b599d0(param_2 + 0x60);
  return;
}




void Unwind_140b68db0(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_140b68dd0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_140b68df0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x100));
  return;
}




void Unwind_140b68e10(undefined8 param_1,longlong param_2)

{
  FUN_140b55750((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b68e30(undefined8 param_1,longlong param_2)

{
  FUN_140b54080((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140b68e50(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68e70(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68e90(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68eb0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68ed0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68ef0(undefined8 param_1,longlong param_2)

{
  FUN_140b61970(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b68f10(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68f30(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68f50(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68f70(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b68f90(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140b68fb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140b61d15;
}




undefined * Catch_140b68ff0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140b61e66;
}




undefined8 Catch_140b69030(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140b6220d;
}




void Unwind_140b69070(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69090(undefined8 param_1,longlong param_2)

{
  FUN_140b54150((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b690b0(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b690d0(undefined8 param_1,longlong param_2)

{
  FUN_140b5cdd0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b690f0(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b69110(undefined8 param_1,longlong param_2)

{
  FUN_140b54150((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b69130(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69150(undefined8 param_1,longlong param_2)

{
  FUN_140b54080((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b69170(undefined8 param_1,longlong param_2)

{
  FUN_140b55750((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b69190(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b691b0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b691d0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b691f0(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b69210(undefined8 param_1,longlong param_2)

{
  FUN_140b54150((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b69230(undefined8 param_1,longlong param_2)

{
  FUN_140b55750((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b69250(undefined8 param_1,longlong param_2)

{
  FUN_140b54080((undefined8 *)(param_2 + 0x98));
  return;
}




void Unwind_140b69270(undefined8 param_1,longlong param_2)

{
  FUN_140b557d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b69290(undefined8 param_1,longlong param_2)

{
  FUN_140b54150((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_140b692b0(undefined8 param_1,longlong param_2)

{
  FUN_140b619a0((longlong *)(*(longlong *)(param_2 + 0x90) + 0x18));
  return;
}




void Unwind_140b692d0(undefined8 param_1,longlong param_2)

{
  FUN_140b5da90((longlong *)(*(longlong *)(param_2 + 0x90) + 0x58));
  return;
}




void Unwind_140b692f0(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x98));
  return;
}




void Unwind_140b69320(undefined8 param_1,longlong param_2)

{
  FUN_140b595b0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 200));
  return;
}




void Unwind_140b69350(undefined8 param_1,longlong param_2)

{
  FUN_140b595b0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0xf8));
  return;
}




void Unwind_140b69380(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x138));
  return;
}




void Unwind_140b693b0(undefined8 param_1,longlong param_2)

{
  FUN_140b576c0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x168));
  return;
}




void Unwind_140b693e0(undefined8 param_1,longlong param_2)

{
  FUN_140b576c0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x198));
  return;
}




void Unwind_140b69410(undefined8 param_1,longlong param_2)

{
  FUN_140b5dac0((longlong *)(*(longlong *)(param_2 + 0x90) + 0x1c8));
  return;
}




undefined * Catch_140b69440(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140b62e97;
}




undefined * Catch_140b69480(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140b63020;
}




void Unwind_140b694c0(undefined8 param_1,longlong param_2)

{
  FUN_140b5cda0(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_140b694e0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1e0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69500(undefined8 param_1,longlong param_2)

{
  FUN_140b59a60(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69520(undefined8 param_1,longlong param_2)

{
  FUN_140b577e0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69540(undefined8 param_1,longlong param_2)

{
  FUN_140b55830(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69560(undefined8 param_1,longlong param_2)

{
  FUN_140b540f0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69580(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b695a0(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b695c0(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b695e0(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69600(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69620(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69640(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69660(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69680(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b696a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b696c0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b696e0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69700(undefined8 param_1,longlong param_2)

{
  FUN_140b5cc70(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_140b69720(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1c0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69740(undefined8 param_1,longlong param_2)

{
  FUN_140b59a40(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69760(undefined8 param_1,longlong param_2)

{
  FUN_140b577c0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b69780(undefined8 param_1,longlong param_2)

{
  FUN_140b55810(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b697a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54070(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140b697c0(undefined8 param_1,longlong param_2)

{
  FUN_140b61970(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_140b697e0(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1a0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b69800(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b69820(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b69840(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b69860(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140b69880(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b698a0(undefined8 param_1,longlong param_2)

{
  FUN_140b54050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b698c0(undefined8 param_1,longlong param_2)

{
  FUN_140b557f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b698e0(undefined8 param_1,longlong param_2)

{
  FUN_140b577a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69900(undefined8 param_1,longlong param_2)

{
  FUN_140b59a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69920(undefined8 param_1,longlong param_2)

{
  FUN_140b5b1a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69940(undefined8 param_1,longlong param_2)

{
  FUN_140b61970(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140b69960(undefined8 param_1,longlong param_2)

{
  FUN_140b619a0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_140b69980(undefined8 param_1,longlong param_2)

{
  FUN_140b5da90((longlong *)(*(longlong *)(param_2 + 0x50) + 0x58));
  return;
}




void Unwind_140b699a0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b699c0(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b699e0(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69a00(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x98));
  return;
}




void Unwind_140b69a20(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69a40(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69a60(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69a80(undefined8 param_1,longlong param_2)

{
  FUN_140b595b0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 200));
  return;
}




void Unwind_140b69aa0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69ac0(undefined8 param_1,longlong param_2)

{
  FUN_140b54090(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69ae0(undefined8 param_1,longlong param_2)

{
  FUN_140b55770(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69b00(undefined8 param_1,longlong param_2)

{
  FUN_140b595b0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0xf8));
  return;
}




void Unwind_140b69b20(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69b40(undefined8 param_1,longlong param_2)

{
  FUN_140b54080(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69b60(undefined8 param_1,longlong param_2)

{
  FUN_140b55750(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69b80(undefined8 param_1,longlong param_2)

{
  FUN_140b59470((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x138));
  return;
}




void Unwind_140b69ba0(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69bc0(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69be0(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69c00(undefined8 param_1,longlong param_2)

{
  FUN_140b576c0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x168));
  return;
}




void Unwind_140b69c20(void)

{
  FUN_140b51160();
  return;
}




void Unwind_140b69c40(undefined8 param_1,longlong param_2)

{
  FUN_140b540a0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69c60(undefined8 param_1,longlong param_2)

{
  FUN_140b55790(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_140b69c80(undefined8 param_1,longlong param_2)

{
  FUN_140b576c0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x198));
  return;
}




void Unwind_140b69ca0(undefined8 param_1,longlong param_2)

{
  FUN_140b5dac0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x1c8));
  return;
}




void Unwind_140b69cc0(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140b69ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_140b69d00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x140b63860;
}




void Unwind_140b69d40(undefined8 param_1,longlong param_2)

{
  FUN_140b638a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69d60(undefined8 param_1,longlong param_2)

{
  FUN_140b64a90((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140b69d80(undefined8 param_1,longlong param_2)

{
  FUN_140b64c40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_140b69da0(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_140b69dc0(undefined8 param_1,longlong param_2)

{
  FUN_140b638a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69de0(undefined8 param_1,longlong param_2)

{
  FUN_140b64a90((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140b69e00(undefined8 param_1,longlong param_2)

{
  FUN_140b64c40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_140b69e20(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_140b69e40(undefined8 param_1,longlong param_2)

{
  FUN_140b638a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b69e60(undefined8 param_1,longlong param_2)

{
  FUN_140b64a90((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140b69e80(undefined8 param_1,longlong param_2)

{
  FUN_140b64c40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_140b69ea0(undefined8 param_1,longlong param_2)

{
  FUN_140b64290((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




undefined * Catch_140b69ec0(void)

{
  log_InlineLogCATCH_ERROR("Competion::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_140b63d42;
}




void Unwind_140b69f00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_140b69f20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140b63deb;
}




void Unwind_140b69f60(void)

{
  DAT_140b764f0 = DAT_140b764f0 & 0xfffffffe;
  return;
}




void Unwind_140b69f80(void)

{
  DAT_140b764f0 = DAT_140b764f0 & 0xfffffffe;
  return;
}




void Unwind_140b69fa0(void)

{
  DAT_140b764f0 = DAT_140b764f0 & 0xfffffffe;
  return;
}




void Unwind_140b69fc0(void)

{
  DAT_140b764f0 = DAT_140b764f0 & 0xfffffffe;
  return;
}




void Unwind_140b69fe0(void)

{
  DAT_140b764f0 = DAT_140b764f0 & 0xfffffffe;
  return;
}




void Unwind_140b6a000(undefined8 param_1,longlong param_2)

{
  FUN_140b63fd0(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_140b6a020(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a040(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140b6a060(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a080(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




undefined8 Catch_140b6a0a0(void)

{
  log_InlineLogCATCH_ERROR("Competion::Actor:%d,MsgType:%d,Action:%d @%s,%d");
  return 0x140b649ce;
}




void Unwind_140b6a100(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a120(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140b6a140(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a160(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140b6a180(void)

{
  log_InlineLogCATCH_ERROR("competion::Actor:%d,MsgType:%d @%s,%d");
  return 0x140b64b8e;
}




void Unwind_140b6a1d0(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a1f0(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a210(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140b6a230(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a250(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a270(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140b6a290(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a2b0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_140b6a2d0(undefined8 param_1,longlong param_2)

{
  FUN_140b641a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140b6a2f0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void FUN_140b6a310(void)

{
  _unlock(8);
  return;
}




void FUN_140b6a329(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b6a359(void)

{
  _DAT_140b764d0 = 0xffffffff;
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




bool FUN_140b6a3e0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1068 failed=0 total=1165 */
