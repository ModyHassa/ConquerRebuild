/* Decompiled by Ghidra 12.1.4 | program: Status.dll
   image base: 1416b0000 | functions: 1619 */


void FUN_1416b1000(void)

{
  log_InlineLogERROR(&DAT_1416d8328);
  return;
}




void FUN_1416b1030(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1416b1040(void)

{
  return 0;
}




undefined8 FUN_1416b1050(void)

{
  return 0;
}




undefined8 FUN_1416b1060(void)

{
  return 0;
}




undefined8 FUN_1416b1070(void)

{
  return 0;
}




undefined8 * FUN_1416b1080(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416b10e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = status::CModule::vftable;
  if (param_1[0x85] != 0) {
    plVar1 = (longlong *)param_1[0x85];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x150))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[0x85] = 0;
    param_1[0x85] = 0;
  }
  FUN_1416cf8d0(param_1 + 0x86);
  FUN_1416cf770(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_1416b1170(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_1416b1190(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong extraout_RAX;
  undefined8 uVar2;
  
  puVar1 = FUN_1416c1c80();
  *(undefined8 **)(param_1 + 0x428) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  (**(code **)(**(longlong **)(param_1 + 0x420) + 8))(*(longlong **)(param_1 + 0x420),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x420) + 8))(*(longlong **)(param_1 + 0x420),0x816,param_1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x18))(*(longlong **)(param_1 + 0x420),0x14,*(undefined8 *)(param_1 + 0x428));
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_1416b1230(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x420) + 0x30))(*(longlong **)(param_1 + 0x420),0x14);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x428) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1416b72f0(*(longlong *)(param_1 + 0x428),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_1416b1310(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3ea) {
      plVar2 = (longlong *)(param_1 + 0x10);
    }
    else {
      if (param_2[1] != 0x816) {
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




void FUN_1416b1380(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x428) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
  }
  else {
    FUN_1416bbe70(*(longlong *)(param_1 + 0x428));
  }
  return;
}




undefined8 FUN_1416b13e0(void)

{
  return 1;
}




undefined8 * FUN_1416b13f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = status::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_1416cf720((CMsg *)(param_1 + 2));
  param_1[0x84] = param_2;
  FUN_1416cf880((CMsg *)(param_1 + 0x86));
  param_1[0x85] = 0;
  return param_1;
}




undefined8 * FUN_1416b1460(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416b10e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
                    /* 0x1490  1  ModuleCreate */
  puVar1 = operator_new(0x840);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = FUN_1416b13f0(puVar1,param_1,param_2);
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar3 = FUN_1416b1190((longlong)plVar2);
    if ((char)uVar3 == '\0') {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined2 FUN_1416b1510(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1416b1310(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x428));
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




exception * FUN_1416b1610(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1416b1650(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001416b1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416b1680(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416b16e0(void)

{
  return;
}




exception * FUN_1416b16f0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1416b1740(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416b1773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1416b1780(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1416b17a0(exception *param_1,uint param_2)

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




exception * FUN_1416b1800(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1416b1860(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416b189d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416b18b0(exception *param_1,uint param_2)

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




exception * FUN_1416b1920(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1416b1980(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001416b19bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1416b19d0(exception *param_1,uint param_2)

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




void * FUN_1416b1a60(void *param_1,uint param_2)

{
  FUN_1416b6240();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_1416b1ab0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b1ad2;
  }
  lVar2 = *plVar1;
LAB_1416b1ad2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416b1af0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b1b12;
  }
  lVar2 = *plVar1;
LAB_1416b1b12:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




int FUN_1416b1b30(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_1416b1b60(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




void FUN_1416b1c70(longlong param_1,longlong *param_2)

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




bool FUN_1416b1d20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416b1dc0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1416b1e50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b1e72;
  }
  lVar2 = *plVar1;
LAB_1416b1e72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416b1e90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b1eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b1f20(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
}




exception * FUN_1416b1f90(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_1416b1fe0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_1416b2040(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_1416b20c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b20f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1416b2190(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416b21c0;
  }
  else {
LAB_1416b21c0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416b21e8;
  }
  _invalid_parameter_noinfo();
LAB_1416b21e8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




int FUN_1416b2200(int *param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] < 1) {
    return 0;
  }
  iVar3 = *param_1;
  uVar1 = tq::TimeGet(0);
  if ((uint)param_1[1] < uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    iVar3 = iVar3 + (param_1[1] - uVar1 / 1000);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}




void FUN_1416b22b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_1416b2340(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416b23b0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_1416b2450(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_1416b2500(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416b2580(void *param_1,longlong param_2,void *param_3)

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




undefined8 FUN_1416b25c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_1416b6240();
    operator_delete(param_1);
  }
  return 0;
}




undefined * FUN_1416b2600(void)

{
  if ((DAT_1416e7308 & 1) == 0) {
    DAT_1416e7308 = DAT_1416e7308 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7300,"CMonsterStatus");
    atexit((_func_5014 *)&LAB_1416d7370);
  }
  return &DAT_1416e7300;
}




void FUN_1416b2660(__uint64 param_1)

{
  if ((DAT_1416e7308 & 1) == 0) {
    DAT_1416e7308 = DAT_1416e7308 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7300,"CMonsterStatus");
    atexit((_func_5014 *)&LAB_1416d7370);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b26b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416e7300,param_1);
  return;
}




void FUN_1416b26c0(void *param_1)

{
  if ((DAT_1416e7308 & 1) == 0) {
    DAT_1416e7308 = DAT_1416e7308 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7300,"CMonsterStatus");
    atexit((_func_5014 *)&LAB_1416d7370);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b2715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416e7300,param_1);
  return;
}




void FUN_1416b2720(void *param_1)

{
  if ((DAT_1416e7308 & 1) == 0) {
    DAT_1416e7308 = DAT_1416e7308 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7300,"CMonsterStatus");
    atexit((_func_5014 *)&LAB_1416d7370);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b2775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416e7300,param_1);
  return;
}




ulonglong FUN_1416b2780(int *param_1)

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




bool FUN_1416b27e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1416b2820(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b2842;
  }
  lVar2 = *plVar1;
LAB_1416b2842:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416b2860(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b2882;
  }
  lVar2 = *plVar1;
LAB_1416b2882:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_1416b28a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416b28f0(longlong param_1,longlong param_2)

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




void FUN_1416b2950(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1416b2970(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b2992;
  }
  lVar2 = *plVar1;
LAB_1416b2992:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b29b0(longlong *param_1)

{
  FUN_1416b1e90(param_1);
  return param_1;
}




void FUN_1416b29d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b2a30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 4);
  return;
}




longlong * FUN_1416b2aa0(longlong *param_1)

{
  FUN_1416b20c0(param_1);
  return param_1;
}




void FUN_1416b2af0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1416b2b60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1416b2bd0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416b1e90(param_1);
  return param_2;
}




longlong * FUN_1416b2c00(longlong *param_1,longlong param_2)

{
  FUN_1416b2190(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1416b2c30(undefined8 *param_1)

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




void * FUN_1416b2c90(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416b2d00(void *param_1,longlong param_2,void *param_3)

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




ulonglong FUN_1416b2d40(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x10) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




longlong FUN_1416b2da0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b2dc2;
  }
  lVar2 = *plVar1;
LAB_1416b2dc2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b2de0(longlong *param_1)

{
  FUN_1416b1e90(param_1);
  return param_1;
}




void FUN_1416b2e00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b2e20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b2e40(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b2e40(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_1416b2e90(longlong *param_1)

{
  FUN_1416b20c0(param_1);
  return param_1;
}




undefined8 FUN_1416b2eb0(longlong param_1,ulonglong param_2)

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
      FUN_1416b1f20();
    }
    lVar1 = FUN_1416b2a30(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_1416b2f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416b2f90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416b2fe0(undefined8 *param_1)

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




longlong * FUN_1416b3020(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416b308a;
  }
  _invalid_parameter_noinfo();
LAB_1416b308a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416b30c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416b3120(void)

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




undefined8 * FUN_1416b3180(undefined8 *param_1)

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




void * FUN_1416b3200(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416b3270(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416b32b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b2e40(param_1,(longlong *)plVar2[2]);
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




void FUN_1416b3330(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416b3350(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1416b3390(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416b33c0(undefined8 *param_1)

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




undefined8 * FUN_1416b3410(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416b3470(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416b3120();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416b34b0(undefined8 *param_1)

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




void * FUN_1416b3530(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_1416b35b0(undefined8 *param_1)

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




void FUN_1416b3610(undefined8 *param_1)

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




undefined8 * FUN_1416b3650(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416b36a0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1416b36f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416b3710(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416b37a0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416b2f10(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416b3ae0(undefined8 *param_1)

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




void * FUN_1416b3b60(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_1416b3ba0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar6 = plVar3;
          plVar3 = (longlong *)param_1[6];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar3) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[6] + 8) + 0x29);
            plVar2 = *(longlong **)(param_1[6] + 8);
            while (cVar1 == '\0') {
              FUN_1416b2e40(param_1,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(longlong *)(param_1[6] + 8) = param_1[6];
            param_1[7] = 0;
            *(longlong *)param_1[6] = param_1[6];
            *(longlong *)(param_1[6] + 0x10) = param_1[6];
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
          pvVar4 = (void *)plVar6[4];
          if (pvVar4 != (void *)0x0) {
            FUN_1416b6240();
            operator_delete(pvVar4);
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
      plVar5 = plVar3;
      plVar3 = plVar5;
      if (plVar6 != (longlong *)plVar5[2]) break;
      plVar3 = (longlong *)plVar5[1];
      plVar6 = plVar5;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_1416b3d00(longlong *param_1,longlong *param_2,int *param_3)

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
      bVar7 = *param_3 < (int)plVar6[3];
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
LAB_1416b3e5d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416b3e8c;
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
      goto LAB_1416b3e5d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416b37a0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416b3e8c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1416b3eb0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416b1e90(param_3);
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
        goto LAB_1416b409c;
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
LAB_1416b409c:
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
            FUN_1416b28f0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b1c70((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416b28f0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416b1c70((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b28f0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416b1c70((longlong)param_1,plVar7);
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




exception * FUN_1416b4270(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_1416b42d0(longlong *param_1,longlong *param_2,int *param_3)

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
      if (*(int *)(puVar1 + 3) < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < *(int *)(puVar4 + 3))) {
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




void FUN_1416b43a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1416b43f0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416b32b0((longlong)param_1);
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
    FUN_1416b3eb0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416b45a0(undefined8 *param_1)

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




void FUN_1416b45f0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_1416b1f20();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1416b2a30(param_1 + 0x10,uVar8);
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
      FUN_1416b3b60(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_1416b3b60(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416b3200(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 FUN_1416b4890(longlong *param_1,int param_2)

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
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(int *)(puVar8 + 3) < param_2) {
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
  puVar8 = (undefined8 *)param_1[6];
  local_30 = puVar3;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(int *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = param_1[6];
    local_28 = *param_1;
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = param_1[6];
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
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




undefined1 FUN_1416b4990(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int local_40 [2];
  undefined1 *local_38;
  longlong local_30 [3];
  
  cVar1 = (**(code **)(*(longlong *)param_1[9] + 0x88))((longlong *)param_1[9],(int)param_1[8],param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_1416b4890(param_1,param_2);
    if (pcVar4 == (char *)0x0) {
      puVar5 = operator_new(0x20);
      if (puVar5 == (undefined1 *)0x0) {
        local_38 = (undefined1 *)0x0;
      }
      else {
        local_38 = FUN_1416b62f0(puVar5,param_2,param_3,param_4,param_5);
      }
      if (local_38 != (undefined1 *)0x0) {
        local_40[0] = param_2;
        FUN_1416b3d00(param_1,local_30,local_40);
        (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],(int)param_1[8],param_2,1);
        if (param_5 == 0) {
          if (param_2 == 0x1c) {
            (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],(int)param_1[8],0x11,(longlong)param_4);
          }
          else if (param_2 == 0x1b) {
            (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],(int)param_1[8],0x14,(longlong)param_4);
          }
        }
      }
    }
    else {
      FUN_1416b6460(pcVar4,param_3,param_4,param_5);
      if (param_2 == 0x1c) {
        iVar3 = FUN_1416b2200((int *)(pcVar4 + 0xc));
        (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],(int)param_1[8],0x11,(longlong)iVar3);
      }
      else if (param_2 == 0x1b) {
        iVar3 = FUN_1416b2200((int *)(pcVar4 + 0xc));
        (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],(int)param_1[8],0x14,(longlong)iVar3);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1416b4b10(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  
  puVar7 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar4 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(int *)(puVar7 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    puVar7 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x29);
  }
  puVar7 = (undefined8 *)param_1[6];
  local_40 = puVar4;
  local_48 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(int *)(puVar4 + 3))) {
    plVar9 = &local_38;
    local_30 = param_1[6];
    local_38 = *param_1;
  }
  else {
    plVar9 = &local_48;
  }
  plVar2 = (longlong *)*plVar9;
  lVar8 = param_1[6];
  local_28 = plVar2;
  local_20 = plVar9[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_20;
  if (local_20 != lVar8) {
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
    pvVar3 = *(void **)(lVar5 + 0x20);
    if (pvVar3 != (void *)0x0) {
      if (param_2 < 0xc0) {
        (**(code **)(*(longlong *)param_1[9] + 0x48))((longlong *)param_1[9],(int)param_1[8],param_2);
      }
      FUN_1416b6240();
      operator_delete(pvVar3);
    }
    local_28 = (longlong *)*plVar9;
    local_20 = plVar9[1];
    FUN_1416b3eb0(param_1,&local_38,(longlong *)&local_28);
  }
  return;
}




undefined8 * FUN_1416b4c70(undefined8 *param_1)

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
  lVar2 = FUN_1416b3120();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416b4cf0(longlong *param_1)

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
  FUN_1416b43f0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1416b4d60(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_1416b45f0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416b4e54;
  }
  _invalid_parameter_noinfo();
LAB_1416b4e54:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416b4e90(longlong *param_1)

{
  FUN_1416b4cf0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b4ec0(longlong *param_1,undefined4 *param_2)

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
  FUN_1416b4d60(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416b4f70(longlong *param_1)

{
  FUN_1416b4cf0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b4fa0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  plVar2 = (longlong *)*param_1;
  plVar3 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar6 = plVar3;
          plVar3 = (longlong *)param_1[6];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar3) {
            cVar1 = *(char *)((longlong)*(longlong **)(param_1[6] + 8) + 0x29);
            plVar2 = *(longlong **)(param_1[6] + 8);
            while (cVar1 == '\0') {
              FUN_1416b2e40(param_1,(longlong *)plVar2[2]);
              plVar3 = (longlong *)*plVar2;
              operator_delete(plVar2);
              plVar2 = plVar3;
              cVar1 = *(char *)((longlong)plVar3 + 0x29);
            }
            *(longlong *)(param_1[6] + 8) = param_1[6];
            param_1[7] = 0;
            *(longlong *)param_1[6] = param_1[6];
            *(longlong *)(param_1[6] + 0x10) = param_1[6];
            puStack_30 = (undefined8 *)param_1[6];
            local_38 = *param_1;
            uStack_20 = *puStack_30;
            local_28 = local_38;
            FUN_1416b43f0(param_1,local_18,&local_28,&local_38);
            operator_delete((void *)param_1[6]);
            param_1[6] = 0;
            param_1[7] = 0;
            operator_delete((void *)*param_1);
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
          pvVar4 = (void *)plVar6[4];
          if (pvVar4 != (void *)0x0) {
            FUN_1416b6240();
            operator_delete(pvVar4);
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
      plVar5 = plVar3;
      plVar3 = plVar5;
      if (plVar6 != (longlong *)plVar5[2]) break;
      plVar3 = (longlong *)plVar5[1];
      plVar6 = plVar5;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




void FUN_1416b5180(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar10 = (longlong *)0x0;
  local_58[0] = plVar10;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar7 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar6 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar8 = local_40;
    if (plVar7 == plVar6) {
      plVar7 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar7 = local_58[0];
      }
      while( true ) {
        piVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar8 == piVar4) break;
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar8) {
          _invalid_parameter_noinfo();
        }
        FUN_1416b4b10(param_1,*piVar8);
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar8) {
          _invalid_parameter_noinfo();
        }
        piVar8 = piVar8 + 1;
      }
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar6 = plVar10;
    }
    else {
      plVar6 = (longlong *)*puVar3;
    }
    if (plVar7 == (longlong *)plVar6[6]) {
      _invalid_parameter_noinfo();
    }
    piVar8 = local_38;
    iVar2 = (int)plVar7[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if ((iVar2 != 1) && (((iVar2 == 2 || (iVar2 == 0x13)) || (iVar2 == 0x2b)))) {
      plVar6 = plVar10;
      if (local_40 != (int *)0x0) {
        plVar6 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar6) {
        *local_38 = iVar2;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_40;
        plVar6 = local_58[0];
        plVar9 = plVar10;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar6 == (longlong *)0x0) || (plVar6 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)((longlong)piVar8 - (longlong)piVar4 >> 2);
        }
        local_68 = plVar6;
        piStack_60 = piVar8;
        FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        piVar8 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar6 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar10;
        }
        else {
          plVar5 = (longlong *)*local_58[0];
        }
        if (piVar8 + (longlong)plVar9 <= (int *)plVar5[4]) {
          plVar5 = plVar10;
          if (plVar6 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar6;
          }
          if ((int *)plVar5[3] <= piVar8 + (longlong)plVar9) goto LAB_1416b5377;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_1416b5377:
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar6 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar7 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x29);
          plVar7 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar9 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar7 = plVar9, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar9 = (longlong *)plVar7[1];
          plVar6 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416b54c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_78;
  int *piStack_70;
  longlong *local_68 [3];
  int *local_50;
  int *local_48;
  longlong local_40;
  
  local_res10 = operator_new(8);
  plVar10 = (longlong *)0x0;
  local_68[0] = plVar10;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_68;
    local_68[0] = local_res10;
  }
  local_50 = (int *)0x0;
  local_48 = (int *)0x0;
  local_40 = 0;
  plVar7 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar6 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_50;
    if (plVar7 == plVar6) {
      plVar7 = local_68[0];
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
        plVar7 = local_68[0];
      }
      while( true ) {
        piVar4 = local_48;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar9 == piVar4) break;
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        FUN_1416b4b10(param_1,*piVar9);
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        piVar9 = piVar9 + 1;
      }
      if (local_50 != (int *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (int *)0x0;
      local_48 = (int *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar6 = plVar10;
    }
    else {
      plVar6 = (longlong *)*puVar3;
    }
    if (plVar7 == (longlong *)plVar6[6]) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_48;
    iVar2 = (int)plVar7[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if (iVar2 != 1) {
      switch(iVar2) {
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x2c:
      case 0x59:
      case 0x74:
      case 0x7d:
        plVar6 = plVar10;
        if (local_50 != (int *)0x0) {
          plVar6 = (longlong *)(local_40 - (longlong)local_50 >> 2);
        }
        if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar6) {
          *local_48 = iVar2;
          local_48 = local_48 + 1;
        }
        else {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          piVar4 = local_50;
          plVar6 = local_68[0];
          plVar8 = plVar10;
          if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            if ((plVar6 == (longlong *)0x0) || (plVar6 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            plVar8 = (longlong *)((longlong)piVar9 - (longlong)piVar4 >> 2);
          }
          local_78 = plVar6;
          piStack_70 = piVar9;
          FUN_1416b45f0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res10);
          piVar9 = local_50;
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          plVar6 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar5 = plVar10;
          }
          else {
            plVar5 = (longlong *)*local_68[0];
          }
          if (piVar9 + (longlong)plVar8 <= (int *)plVar5[4]) {
            plVar5 = plVar10;
            if (plVar6 != (longlong *)0x0) {
              plVar5 = (longlong *)*plVar6;
            }
            if ((int *)plVar5[3] <= piVar9 + (longlong)plVar8) break;
          }
          _invalid_parameter_noinfo();
        }
      }
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar6 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar7 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x29);
          plVar7 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar8 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar7 = plVar8, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar8 = (longlong *)plVar7[1];
          plVar6 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416b58a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar10 = (longlong *)0x0;
  local_58[0] = plVar10;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar7 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar6 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar8 = local_40;
    if (plVar7 == plVar6) {
      plVar7 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar7 = local_58[0];
      }
      while( true ) {
        piVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar8 == piVar4) break;
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar8) {
          _invalid_parameter_noinfo();
        }
        FUN_1416b4b10(param_1,*piVar8);
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar6 = plVar10;
        }
        else {
          plVar6 = (longlong *)*plVar7;
        }
        if ((int *)plVar6[4] <= piVar8) {
          _invalid_parameter_noinfo();
        }
        piVar8 = piVar8 + 1;
      }
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar6 = plVar10;
    }
    else {
      plVar6 = (longlong *)*puVar3;
    }
    if (plVar7 == (longlong *)plVar6[6]) {
      _invalid_parameter_noinfo();
    }
    piVar8 = local_38;
    iVar2 = (int)plVar7[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if ((0x84 < iVar2) && (iVar2 < 0x91)) {
      plVar6 = plVar10;
      if (local_40 != (int *)0x0) {
        plVar6 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar6) {
        *local_38 = iVar2;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_40;
        plVar6 = local_58[0];
        plVar9 = plVar10;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar6 == (longlong *)0x0) || (plVar6 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)((longlong)piVar8 - (longlong)piVar4 >> 2);
        }
        local_68 = plVar6;
        piStack_60 = piVar8;
        FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        piVar8 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar6 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar10;
        }
        else {
          plVar5 = (longlong *)*local_58[0];
        }
        if (piVar8 + (longlong)plVar9 <= (int *)plVar5[4]) {
          plVar5 = plVar10;
          if (plVar6 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar6;
          }
          if ((int *)plVar5[3] <= piVar8 + (longlong)plVar9) goto LAB_1416b5a93;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_1416b5a93:
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar6 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x29);
        plVar7 = plVar6;
        plVar6 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x29);
          plVar7 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar9 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        while ((plVar7 = plVar9, cVar1 == '\0' && (plVar6 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar9 = (longlong *)plVar7[1];
          plVar6 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416b5c00(longlong *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar13 = (longlong *)0x0;
  local_58[0] = plVar13;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar10 = *(longlong **)param_1[6];
  puVar1 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar9 = (longlong *)param_1[6];
    if ((puVar1 == (undefined8 *)0x0) || (puVar1 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar11 = local_40;
    if (plVar10 == plVar9) {
      plVar10 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar10 = local_58[0];
      }
      while( true ) {
        piVar3 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar10 == (longlong *)0x0) || (plVar10 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar11 == piVar3) break;
        if (plVar10 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar13;
        }
        else {
          plVar9 = (longlong *)*plVar10;
        }
        if ((int *)plVar9[4] <= piVar11) {
          _invalid_parameter_noinfo();
        }
        FUN_1416b4b10(param_1,*piVar11);
        if (plVar10 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar9 = plVar13;
        }
        else {
          plVar9 = (longlong *)*plVar10;
        }
        if ((int *)plVar9[4] <= piVar11) {
          _invalid_parameter_noinfo();
        }
        piVar11 = piVar11 + 1;
      }
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar9 = plVar13;
    }
    else {
      plVar9 = (longlong *)*puVar1;
    }
    if (plVar10 == (longlong *)plVar9[6]) {
      _invalid_parameter_noinfo();
    }
    pcVar2 = (char *)plVar10[4];
    if (pcVar2 != (char *)0x0) {
      if (puVar1 == (undefined8 *)0x0) {
        _invalid_parameter_noinfo();
        plVar9 = plVar13;
      }
      else {
        plVar9 = (longlong *)*puVar1;
      }
      if (plVar10 == (longlong *)plVar9[6]) {
        _invalid_parameter_noinfo();
      }
      iVar6 = (int)plVar10[3];
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar6);
      bVar4 = FUN_1416b63e0(pcVar2);
      piVar11 = local_38;
      if (bVar4) {
        if ((iVar6 == 0xd) || (iVar6 == 0x12)) {
          if ((*(byte *)(param_1 + 10) & 1) == 0) {
            iVar6 = FUN_1416b2200((int *)(pcVar2 + 0xc));
            (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],(int)param_1[8],0x1e,(longlong)iVar6);
          }
        }
        else if (((iVar6 == 2) || (iVar6 == 0x2b)) && (uVar8 = FUN_1416b2d40((longlong)pcVar2), (char)uVar8 != '\0')) {
          if (0 < *(int *)(pcVar2 + 0x14)) {
            FUN_1416b6250((longlong)pcVar2);
          }
          iVar6 = (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],(int)param_1[8],iVar6,*(undefined4 *)(pcVar2 + 4));
          if (0 < iVar6) {
            (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x271a,(int)param_1[8],iVar6);
            cVar5 = (**(code **)(*(longlong *)param_1[9] + 0x90))((longlong *)param_1[9],(int)param_1[8]);
            if (cVar5 == '\0') {
              (**(code **)(*(longlong *)param_1[9] + 0xa0))((longlong *)param_1[9],(int)param_1[8]);
            }
          }
        }
      }
      else {
        plVar9 = plVar13;
        if (local_40 != (int *)0x0) {
          plVar9 = (longlong *)(local_30 - (longlong)local_40 >> 2);
        }
        if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar9) {
          *local_38 = iVar6;
          local_38 = local_38 + 1;
        }
        else {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          piVar3 = local_40;
          plVar9 = local_58[0];
          plVar12 = plVar13;
          if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
            if (local_38 < local_40) {
              _invalid_parameter_noinfo();
            }
            if ((plVar9 == (longlong *)0x0) || (plVar9 != local_58[0])) {
              _invalid_parameter_noinfo();
            }
            plVar12 = (longlong *)((longlong)piVar11 - (longlong)piVar3 >> 2);
          }
          local_68 = plVar9;
          piStack_60 = piVar11;
          FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
          piVar11 = local_40;
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          plVar9 = local_58[0];
          if (local_58[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar7 = plVar13;
          }
          else {
            plVar7 = (longlong *)*local_58[0];
          }
          if (piVar11 + (longlong)plVar12 <= (int *)plVar7[4]) {
            plVar7 = plVar13;
            if (plVar9 != (longlong *)0x0) {
              plVar7 = (longlong *)*plVar9;
            }
            if ((int *)plVar7[3] <= piVar11 + (longlong)plVar12) goto LAB_1416b5f0d;
          }
          _invalid_parameter_noinfo();
        }
      }
    }
LAB_1416b5f0d:
    if (puVar1 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar10 + 0x29) == '\0') {
      plVar9 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
        cVar5 = *(char *)(*plVar9 + 0x29);
        plVar10 = plVar9;
        plVar9 = (longlong *)*plVar9;
        while (cVar5 == '\0') {
          cVar5 = *(char *)(*plVar9 + 0x29);
          plVar10 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      else {
        cVar5 = *(char *)(plVar10[1] + 0x29);
        plVar12 = (longlong *)plVar10[1];
        plVar9 = plVar10;
        while ((plVar10 = plVar12, cVar5 == '\0' && (plVar9 == (longlong *)plVar10[2]))) {
          cVar5 = *(char *)(plVar10[1] + 0x29);
          plVar12 = (longlong *)plVar10[1];
          plVar9 = plVar10;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined8 * FUN_1416b6090(undefined8 *param_1)

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
  lVar2 = FUN_1416b3120();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416b6110(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1416b6090(param_1);
  param_1[9] = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}




undefined8 * FUN_1416b6160(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if ((DAT_1416e7308 & 1) == 0) {
    DAT_1416e7308 = DAT_1416e7308 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7300,"CMonsterStatus");
    atexit((_func_5014 *)&LAB_1416d7370);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_1416e7300,0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1416b6090(puVar1);
    puVar1[9] = param_2;
    *(undefined4 *)(puVar1 + 8) = param_1;
    *(undefined4 *)(puVar1 + 10) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328,"CHECKF","pMonsterStatu","f:\\version\\cqserver-78.0.11-1204\\modules\\status\\src\\monsterstatus.cpp",0x29);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_1416b6240(void)

{
  return;
}




void FUN_1416b6250(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return;
}




int FUN_1416b6280(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined1 * FUN_1416b62f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(int *)(param_1 + 0x14) = param_5;
  if (0 < param_5) {
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = param_4;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x10) = uVar1 / 1000;
  return param_1;
}




ulonglong FUN_1416b6350(int *param_1)

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




bool FUN_1416b63e0(char *param_1)

{
  ulong uVar1;
  
  if (*param_1 == '\0') {
    return 0 < *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = tq::TimeGet(0);
    if ((uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) <= uVar1 / 1000) {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      return false;
    }
  }
  return true;
}




undefined8 FUN_1416b6460(char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  
  if (*param_1 == '\0') {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x14) < param_4) {
        *(int *)(param_1 + 4) = param_2;
        *(int *)(param_1 + 0xc) = param_3;
        *(int *)(param_1 + 0x14) = param_4;
      }
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (param_4 < iVar1) {
      *(int *)(param_1 + 0x14) = iVar1 - param_4;
      return (ulonglong)(uint3)((uint)(iVar1 - param_4) >> 8) << 8;
    }
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  if (0 < param_2) {
    iVar1 = FUN_1416b2200((int *)(param_1 + 0xc));
    uVar4 = CONCAT44(extraout_var,iVar1);
    if (iVar1 <= param_3) {
      *(int *)(param_1 + 4) = param_2;
      *(int *)(param_1 + 0xc) = param_3;
      uVar2 = tq::TimeGet(0);
      uVar4 = (ulonglong)uVar2 * 0x10624dd3 & 0xffffffff;
      *(uint *)(param_1 + 0x10) = uVar2 / 1000;
    }
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  if (param_2 < 0) {
    iVar1 = FUN_1416b2200((int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = iVar1 + param_3;
    uVar2 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x10) = uVar2 / 1000;
    return (ulonglong)uVar2 * 0x10624dd3 & 0xffffff00;
  }
  iVar3 = *(int *)(param_1 + 0xc) - param_3;
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  return (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
}




ulonglong FUN_1416b6590(char *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  
  if (*param_1 != '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar2 = param_2 + iVar1;
    if (iVar2 <= param_3) {
      param_3 = iVar2;
    }
    *(int *)(param_1 + 0xc) = param_3;
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_1416b65d0(longlong param_1)

{
  uint uVar1;
  ulonglong extraout_RAX;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return (ulonglong)(uVar1 & 1);
}




ulonglong FUN_1416b6630(longlong param_1)

{
  uint uVar1;
  ulonglong extraout_RAX;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return (ulonglong)(uVar1 >> 1 & 1);
}




ulonglong FUN_1416b6690(longlong param_1)

{
  uint uVar1;
  ulonglong extraout_RAX;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return (ulonglong)(uVar1 >> 2 & 1);
}




void FUN_1416b66f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = status::CStatusData::vftable;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(char *)(param_1 + 1) == '\0') || (*(char *)(param_1 + 4) != '\0')) {
      (**(code **)*puVar1)(puVar1,0,param_3,param_4,0xfffffffffffffffe);
    }
    else {
      (*(code *)**(undefined8 **)param_1[5])((undefined8 *)param_1[5],1);
      param_1[5] = 0;
      param_1[5] = 0;
    }
  }
  return;
}




bool FUN_1416b6760(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x28) = param_2;
  return param_2 != 0;
}




undefined8 FUN_1416b6770(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 < 10)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001416b6794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
    return uVar2;
  }
  return 0;
}




void FUN_1416b67a0(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 < 10)) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
    if ((param_4 != '\0') && ((*(char *)(param_1 + 8) != '\0' && (*(char *)(param_1 + 0x20) == '\0')))) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),0);
    }
  }
  return;
}




undefined8 FUN_1416b6810(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong extraout_RAX;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    uVar4 = (ulonglong)((uVar1 >> 9) << 8);
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1416b691f;
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),6);
      uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if ((int)uVar4 < 1) goto LAB_1416b691f;
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar4 = extraout_RAX;
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
    uVar4 = (ulonglong)((uVar1 >> 10) << 8);
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        iVar2 = 0;
      }
      else {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),7);
        iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
      }
      uVar4 = _time64((__time64_t *)0x0);
      if (iVar2 <= (int)uVar4) {
LAB_1416b691f:
        return uVar4 & 0xffffffffffffff00;
      }
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}




ulonglong FUN_1416b6940(longlong param_1)

{
  undefined8 in_RAX;
  ulonglong extraout_RAX;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b6996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))(*(longlong **)(param_1 + 0x28),0);
  return uVar1;
}




undefined1 FUN_1416b69a0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 1;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))(*(longlong **)(param_1 + 0x28),1);
  return uVar1;
}




undefined * FUN_1416b6a00(void)

{
  if ((DAT_1416e7318 & 1) == 0) {
    DAT_1416e7318 = DAT_1416e7318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7310,"CStatusData");
    atexit((_func_5014 *)&LAB_1416d7380);
  }
  return &DAT_1416e7310;
}




void FUN_1416b6a60(__uint64 param_1)

{
  if ((DAT_1416e7318 & 1) == 0) {
    DAT_1416e7318 = DAT_1416e7318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7310,"CStatusData");
    atexit((_func_5014 *)&LAB_1416d7380);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b6ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416e7310,param_1);
  return;
}




void FUN_1416b6ac0(void *param_1)

{
  if ((DAT_1416e7318 & 1) == 0) {
    DAT_1416e7318 = DAT_1416e7318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7310,"CStatusData");
    atexit((_func_5014 *)&LAB_1416d7380);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b6b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416e7310,param_1);
  return;
}




void FUN_1416b6b20(void *param_1)

{
  if ((DAT_1416e7318 & 1) == 0) {
    DAT_1416e7318 = DAT_1416e7318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7310,"CStatusData");
    atexit((_func_5014 *)&LAB_1416d7380);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b6b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416e7310,param_1);
  return;
}




undefined8 * FUN_1416b6b80(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = status::CStatusData::vftable;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3c;
  *(undefined1 *)(param_1 + 4) = param_2;
  return param_1;
}




undefined8 * FUN_1416b6bb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416b66f0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1416b6ac0(param_1);
  }
  return param_1;
}




undefined8 FUN_1416b6be0(longlong param_1,undefined4 param_2)

{
  ulong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = tq::TimeGet(0);
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar3 = (ulonglong)uVar1 * 0x10624dd3 & 0xffffffff;
  *(uint *)(param_1 + 0x10) = uVar1 / 1000;
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,8);
    uVar3 = (**(code **)(*plVar2 + 0xb0))(plVar2,param_2);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




ulonglong FUN_1416b6c40(longlong param_1)

{
  int iVar1;
  undefined8 in_RAX;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = FUN_1416b2200((int *)(param_1 + 0xc));
      in_RAX = CONCAT44(extraout_var,iVar1);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),8);
        in_RAX = (**(code **)(*plVar2 + 0xb0))(plVar2,iVar1);
      }
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001416b6cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),0);
      return uVar3;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}




undefined8 FUN_1416b6cf0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  __time64_t _Var5;
  
  iVar2 = 0;
  iVar1 = iVar2;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),2);
    uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
    iVar1 = (int)uVar4;
    if ((((((iVar1 == 0x91) || (iVar1 == 0x93)) || (iVar1 == 0x94)) || ((iVar1 == 0xa1 || (iVar1 == 0xa2)))) ||
        ((iVar1 == 0xa3 || ((iVar1 == 0xa4 || (iVar1 == 0xa5)))))) || (iVar1 == 0xac)) goto LAB_1416b6e3a;
    if (iVar1 == 0xad) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  uVar4 = FUN_1416b6690(param_1);
  if ((char)uVar4 != '\0') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),7);
      iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    _Var5 = _time64((__time64_t *)0x0);
    if ((iVar2 <= (int)_Var5) && (uVar4 = (ulonglong)(iVar1 - 0x31U), 8 < iVar1 - 0x31U)) goto LAB_1416b6e1b;
  }
  uVar4 = FUN_1416b65d0(param_1);
  if (((char)uVar4 == '\0') || (uVar4 = (ulonglong)(iVar1 - 0x31U), iVar1 - 0x31U < 9)) {
    uVar4 = FUN_1416b6350((int *)(param_1 + 0xc));
    if ((char)uVar4 == '\0') {
LAB_1416b6e3a:
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),5);
    uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (0 < (int)uVar4) goto LAB_1416b6e3a;
  }
LAB_1416b6e1b:
  return uVar4 & 0xffffffffffffff00;
}




ulonglong FUN_1416b6e50(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulonglong extraout_RAX;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  int iVar6;
  
  if (param_3 < 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  iVar2 = 0;
  if (plVar4 == (longlong *)0x0) {
    iVar1 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,2);
    iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
  }
  uVar5 = FUN_1416b65d0(param_1);
  if (((char)uVar5 == '\0') || (uVar5 = (ulonglong)(iVar1 - 0x31U), iVar1 - 0x31U < 9)) {
    if ((param_2 < 1) && (8 < iVar1 - 0x31U)) {
      if (param_2 < 0) {
        iVar2 = FUN_1416b2200((int *)(param_1 + 0xc));
        plVar4 = *(longlong **)(param_1 + 0x28);
        *(int *)(param_1 + 0xc) = param_3 + iVar2;
        if (plVar4 != (longlong *)0x0) {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,8);
          (**(code **)(*plVar4 + 0xb0))(plVar4,param_3 + iVar2);
        }
        iVar2 = FUN_1416b1b30(param_1 + 0xc);
        return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
      }
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 == (longlong *)0x0) {
        iVar1 = 0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,8);
        iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
      }
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,8);
        iVar6 = 0;
        if (-1 < iVar1 - param_3) {
          iVar6 = iVar1 - param_3;
        }
        (**(code **)(*plVar4 + 0xb0))(plVar4,iVar6);
      }
      iVar1 = *(int *)(param_1 + 0xc) - param_3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0xc) = iVar2;
      return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
    }
    iVar2 = FUN_1416b2200((int *)(param_1 + 0xc));
    if (param_3 <= iVar2) {
      param_3 = FUN_1416b2200((int *)(param_1 + 0xc));
    }
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,3);
      (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
    }
    *(int *)(param_1 + 0xc) = param_3;
    uVar3 = tq::TimeGet(0);
    plVar4 = *(longlong **)(param_1 + 0x28);
    uVar5 = (ulonglong)uVar3 * 0x10624dd3 & 0xffffffff;
    *(uint *)(param_1 + 0x10) = uVar3 / 1000;
    if (plVar4 == (longlong *)0x0) goto LAB_1416b7115;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,8);
    param_4 = param_3;
  }
  else {
    if (param_2 == 0) {
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 == (longlong *)0x0) {
        iVar1 = 0;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
        uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
        iVar1 = (int)uVar5;
      }
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
        if (-1 < iVar1 - param_4) {
          iVar2 = iVar1 - param_4;
        }
        uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,iVar2);
      }
      return uVar5 & 0xffffffffffffff00;
    }
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
      uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
      iVar2 = (int)uVar5;
    }
    if (param_4 <= iVar2) goto LAB_1416b7115;
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,3);
      uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
    }
    plVar4 = *(longlong **)(param_1 + 0x28);
    *(int *)(param_1 + 0xc) = param_3;
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,8);
      uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_3);
    }
    plVar4 = *(longlong **)(param_1 + 0x28);
    if (plVar4 == (longlong *)0x0) goto LAB_1416b7115;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,5);
  }
  uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_4);
LAB_1416b7115:
  return CONCAT71((int7)(uVar5 >> 8),1);
}




undefined8 FUN_1416b7130(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
  }
  else {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),4);
    uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
    if ((uVar3 & 1) != 0) {
      return CONCAT71((int7)((uVar3 & 0xffffffffffffff01) >> 8),(byte)uVar3 & 1 ^ (byte)(uVar3 & 0xffffffffffffff01));
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = param_2 + iVar1;
  if (iVar4 <= param_3) {
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




longlong * FUN_1416b71e0(longlong *param_1,uint param_2)

{
  FUN_1416b4fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1416b26c0(param_1);
  }
  return param_1;
}




undefined8 FUN_1416b7230(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),3);
                    /* WARNING: Could not recover jumptable at 0x0001416b7285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




longlong * FUN_1416b7290(longlong *param_1,uint param_2)

{
  FUN_1416cb7c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1416c4990(param_1);
  }
  return param_1;
}




undefined8 FUN_1416b72f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  plVar1 = (longlong *)FUN_1416c3550();
  *(longlong **)(param_1 + 0x90) = plVar1;
  uVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1416c36b0(plVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_1416b7330(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,param_2,0xa8);
  if (iVar1 == 1) {
    return 0xa8;
  }
  if (iVar1 == 2) {
    return 0xa9;
  }
  if (iVar1 == 3) {
    return 0xaa;
  }
  if (iVar1 != 4) {
    return 0;
  }
  return 0xab;
}




longlong FUN_1416b7390(undefined8 param_1,int param_2)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(uint3)(param_2 - 0x31U >> 8);
  if ((param_2 - 0x31U < 9) && (param_2 != 0x35)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}




bool FUN_1416b73b0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    lVar2 = FUN_1416c2e20(*(longlong **)(param_1 + 0x90),param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_1416c1f00(lVar2);
      return bVar1;
    }
  }
  return false;
}




bool FUN_1416b73e0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    lVar2 = FUN_1416c2e20(*(longlong **)(param_1 + 0x90),param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_1416c1ed0(lVar2);
      return bVar1;
    }
  }
  return false;
}




void FUN_1416b7510(longlong param_1,longlong *param_2)

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




void FUN_1416b7680(longlong param_1,longlong *param_2)

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




bool FUN_1416b7710(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416b7760(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1416b78c0(longlong param_1,longlong *param_2)

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




bool FUN_1416b7970(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416b79d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1416b7a50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b7a72;
  }
  lVar2 = *plVar1;
LAB_1416b7a72:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416b7a90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b7ab2;
  }
  lVar2 = *plVar1;
LAB_1416b7ab2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416b7ad0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1416b7b50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b7b72;
  }
  lVar2 = *plVar1;
LAB_1416b7b72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416b7b90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b7bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1416b7c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b7c42;
  }
  lVar2 = *plVar1;
LAB_1416b7c42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416b7c60(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b7c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1416b7d10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b7d32;
  }
  lVar2 = *plVar1;
LAB_1416b7d32:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416b7d50(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b7d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b7e30(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
}




longlong FUN_1416b7ec0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_1416b7f70(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b7fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b8010(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b8042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b80c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b80f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b8270(longlong param_1,longlong param_2)

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




void FUN_1416b8300(longlong param_1,longlong *param_2)

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




longlong * FUN_1416b8370(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416b83a0;
  }
  else {
LAB_1416b83a0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416b83c8;
  }
  _invalid_parameter_noinfo();
LAB_1416b83c8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_1416b8460(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416b84e0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1416b8560(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1416b85e0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1416b86d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_1416b8820(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416b88a0(void *param_1,longlong param_2,void *param_3)

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




undefined8 FUN_1416b88e0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_1416b4fa0(param_1);
    FUN_1416b26c0(param_1);
  }
  return 0;
}




undefined8 FUN_1416b8920(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_1416cb7c0(param_1);
    FUN_1416c4990(param_1);
  }
  return 0;
}




bool FUN_1416b8950(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1416b8990(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1416b89d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1416b8a10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1416b8a50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8a72;
  }
  lVar2 = *plVar1;
LAB_1416b8a72:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416b8a90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8ab2;
  }
  lVar2 = *plVar1;
LAB_1416b8ab2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416b8ad0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416b8b20(longlong param_1,longlong param_2)

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




void FUN_1416b8b80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b8bb0(longlong param_1,longlong param_2)

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




void FUN_1416b8c10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1416b8c30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8c52;
  }
  lVar2 = *plVar1;
LAB_1416b8c52:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b8c70(longlong *param_1)

{
  FUN_1416b7b90(param_1);
  return param_1;
}




longlong FUN_1416b8c90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8cb2;
  }
  lVar2 = *plVar1;
LAB_1416b8cb2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b8cd0(longlong *param_1)

{
  FUN_1416b7c60(param_1);
  return param_1;
}




void FUN_1416b8d00(longlong param_1,longlong param_2)

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




void FUN_1416b8d60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1416b8d80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8da2;
  }
  lVar2 = *plVar1;
LAB_1416b8da2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b8dc0(longlong *param_1)

{
  FUN_1416b7d50(param_1);
  return param_1;
}




void FUN_1416b8df0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b8e00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1416b8eb0(longlong *param_1)

{
  FUN_1416b7f70(param_1);
  return param_1;
}




longlong * FUN_1416b8ed0(longlong *param_1)

{
  FUN_1416b8010(param_1);
  return param_1;
}




longlong * FUN_1416b8f40(longlong *param_1)

{
  FUN_1416b80c0(param_1);
  return param_1;
}




longlong FUN_1416b8f70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b8f92;
  }
  lVar2 = *plVar1;
LAB_1416b8f92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416b8fb0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416b8fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416b9050(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_1416b9110(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_1416b9180(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1416b91f0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416b7b90(param_1);
  return param_2;
}




longlong * FUN_1416b9220(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416b7c60(param_1);
  return param_2;
}




void FUN_1416b9250(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1416b92c0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416b7d50(param_1);
  return param_2;
}




longlong * FUN_1416b92f0(longlong *param_1,longlong param_2)

{
  FUN_1416b8370(param_1,param_2);
  return param_1;
}




void FUN_1416b9330(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b9330(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1416b9390(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_1416b9420(undefined8 *param_1)

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




undefined8 * FUN_1416b9460(undefined8 *param_1)

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




undefined8 * FUN_1416b94a0(undefined8 *param_1)

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




undefined8 * FUN_1416b94e0(undefined8 *param_1)

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




void * FUN_1416b9540(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416b95b0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_1416b95f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b9612;
  }
  lVar2 = *plVar1;
LAB_1416b9612:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b9630(longlong *param_1)

{
  FUN_1416b7b90(param_1);
  return param_1;
}




longlong FUN_1416b9650(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b9672;
  }
  lVar2 = *plVar1;
LAB_1416b9672:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b9690(longlong *param_1)

{
  FUN_1416b7c60(param_1);
  return param_1;
}




longlong FUN_1416b96b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b96d2;
  }
  lVar2 = *plVar1;
LAB_1416b96d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b96f0(longlong *param_1)

{
  FUN_1416b7d50(param_1);
  return param_1;
}




void FUN_1416b9710(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b9730(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b9750(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b9770(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b9790(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416b97b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b97b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1416b9800(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b9800(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_1416b9850(longlong *param_1)

{
  FUN_1416b7f70(param_1);
  return param_1;
}




longlong * FUN_1416b9870(longlong *param_1)

{
  FUN_1416b8010(param_1);
  return param_1;
}




longlong * FUN_1416b9890(longlong *param_1)

{
  FUN_1416b80c0(param_1);
  return param_1;
}




longlong FUN_1416b98b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416b98d2;
  }
  lVar2 = *plVar1;
LAB_1416b98d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416b98f0(longlong *param_1)

{
  FUN_1416b8fb0(param_1);
  return param_1;
}




undefined8 FUN_1416b9910(longlong param_1,ulonglong param_2)

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
      FUN_1416b7e30();
    }
    lVar1 = FUN_1416b9050(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_1416b9970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416b99f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416b9a70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416b9ab0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416b9af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416b9b70(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416b9bb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416b9c00(undefined8 *param_1)

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




longlong * FUN_1416b9c40(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416b9caa;
  }
  _invalid_parameter_noinfo();
LAB_1416b9caa:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416b9ce0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416b9d40(void)

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




void FUN_1416b9da0(void)

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




void FUN_1416b9e00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b9330(param_1,(longlong *)plVar2[2]);
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




void FUN_1416b9e80(void)

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




void FUN_1416b9ee0(void)

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




longlong * FUN_1416b9f40(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416b8fb0(param_1);
  return param_2;
}




void FUN_1416b9f70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1416b9f70(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 * FUN_1416b9fc0(undefined8 *param_1)

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




undefined8 * FUN_1416ba010(undefined8 *param_1)

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




undefined8 * FUN_1416ba060(undefined8 *param_1)

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




undefined8 * FUN_1416ba0b0(undefined8 *param_1)

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




void * FUN_1416ba130(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416ba1a0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416ba1e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b97b0(param_1,(longlong *)plVar2[2]);
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




void FUN_1416ba260(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416b9800(param_1,(longlong *)plVar2[2]);
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




longlong FUN_1416ba2e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416ba302;
  }
  lVar2 = *plVar1;
LAB_1416ba302:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416ba320(longlong *param_1)

{
  FUN_1416b8fb0(param_1);
  return param_1;
}




void FUN_1416ba340(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416ba360(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416ba380(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416ba3a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416ba3c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416ba400(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416ba440(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416ba480(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1416ba4c0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416ba4f0(undefined8 *param_1)

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




undefined8 * FUN_1416ba540(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1416ba5a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416b9d40();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1416ba5e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416b9da0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1416ba620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416b9e80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1416ba660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416b9ee0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416ba6a0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416ba6f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416b8fb0(param_3);
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
        goto LAB_1416ba8dc;
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
LAB_1416ba8dc:
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
            FUN_1416b8270((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1416b8300((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1416b8270((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1416b8300((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1416b8270((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1416b8300((longlong)param_1,plVar7);
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




void FUN_1416baab0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1416b9f70(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_1416bab30(undefined8 *param_1)

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




undefined8 * FUN_1416bab80(undefined8 *param_1)

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




undefined8 * FUN_1416babd0(undefined8 *param_1)

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




undefined8 * FUN_1416bac20(undefined8 *param_1)

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




void * FUN_1416baca0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_1416bade0(undefined8 *param_1)

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




void FUN_1416bae40(undefined8 *param_1)

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




undefined8 * FUN_1416bae80(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416baed0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1416baf20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416baf40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416baf60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416baf80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416bafa0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416bb030(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416b9970(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416bb370(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416bb400(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416b99f0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416bb740(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416bb7d0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416b9af0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_1416bbb10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416baab0((longlong)param_1);
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
    FUN_1416ba6f0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416bbcc0(undefined8 *param_1)

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




undefined8 * FUN_1416bbd10(undefined8 *param_1)

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




undefined8 * FUN_1416bbd60(undefined8 *param_1)

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




undefined8 * FUN_1416bbdb0(undefined8 *param_1)

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




void * FUN_1416bbe30(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_1416bbe70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x40);
  while( true ) {
    plVar5 = *(longlong **)(param_1 + 0x40);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar2;
    }
    if (plVar4 == *(longlong **)(lVar6 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((longlong *)plVar4[4] != (longlong *)0x0) {
      FUN_1416cbf10((longlong *)plVar4[4]);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar4 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x29);
        plVar3 = (longlong *)plVar4[1];
        plVar5 = plVar4;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar5 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x29);
          plVar3 = (longlong *)plVar4[1];
          plVar5 = plVar4;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x80);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar4;
          plVar4 = *(longlong **)(param_1 + 0x80);
          if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x50))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar4) {
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
          if ((longlong *)plVar5[4] != (longlong *)0x0) {
            FUN_1416b5c00((longlong *)plVar5[4]);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar5 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar4 = plVar5;
        }
        plVar4 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar5 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar4 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      plVar4 = (longlong *)plVar5[1];
    } while (*(char *)((longlong)plVar4 + 0x29) != '\0');
    do {
      plVar3 = plVar4;
      plVar4 = plVar3;
      if (plVar5 != (longlong *)plVar3[2]) break;
      plVar4 = (longlong *)plVar3[1];
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar4 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_1416bc030(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1416bc18d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416bc1bc;
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
      goto LAB_1416bc18d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416bb030(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416bc1bc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1416bc1e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416b7b90(param_3);
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
        goto LAB_1416bc3cc;
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
LAB_1416bc3cc:
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
            FUN_1416b8b20((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b7510((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416b8b20((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416b7510((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b8b20((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416b7510((longlong)param_1,plVar7);
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




longlong * FUN_1416bc5a0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_1416bc670(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1416bc7cd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416bc7fc;
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
      goto LAB_1416bc7cd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416bb400(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416bc7fc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1416bc820(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416b7c60(param_3);
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
        goto LAB_1416bca0c;
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
LAB_1416bca0c:
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
            FUN_1416b8bb0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b7680((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416b8bb0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416b7680((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b8bb0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416b7680((longlong)param_1,plVar7);
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




longlong * FUN_1416bcbe0(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_1416bccb0(longlong *param_1,longlong *param_2,int *param_3)

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
      bVar7 = *param_3 < (int)plVar6[3];
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
LAB_1416bce0d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416bce3c;
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
      goto LAB_1416bce0d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416bb7d0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416bce3c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1416bce60(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416b7d50(param_3);
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
        goto LAB_1416bd04c;
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
LAB_1416bd04c:
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
            FUN_1416b8d00((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b78c0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416b8d00((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416b78c0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416b8d00((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416b78c0((longlong)param_1,plVar7);
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




longlong * FUN_1416bd220(longlong *param_1,longlong *param_2,int *param_3)

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
      if (*(int *)(puVar1 + 3) < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < *(int *)(puVar4 + 3))) {
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




void FUN_1416bd2f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416bd310(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416bd330(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416bd350(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416bd370(longlong *param_1)

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
  FUN_1416bbb10(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1416bd410(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416ba1e0((longlong)param_1);
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
    FUN_1416bc1e0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416bd5c0(undefined8 *param_1)

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




longlong * FUN_1416bd610(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416ba260((longlong)param_1);
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
    FUN_1416bc820(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416bd7c0(undefined8 *param_1)

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




longlong * FUN_1416bd810(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416b9e00((longlong)param_1);
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
    FUN_1416bce60(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416bd9c0(undefined8 *param_1)

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




undefined8 * FUN_1416bda10(undefined8 *param_1)

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




void FUN_1416bda60(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1416b7e30();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1416b9050(param_1 + 0x10,uVar8);
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
      FUN_1416bbe30(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_1416bbe30(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416ba130(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_1416bdd10(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_38 [2];
  longlong *local_30;
  longlong local_28 [4];
  
  if (((param_2 != 0) && (local_30 = FUN_1416ce710(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90),0), local_30 != (longlong *)0x0)) &&
     (uVar1 = FUN_1416cb9d0(local_30), (char)uVar1 != '\0')) {
    local_38[0] = param_2;
    FUN_1416bc030((longlong *)(param_1 + 0x10),local_28,local_38);
  }
  return;
}




void FUN_1416bdd80(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_res10 [2];
  longlong *local_58;
  longlong lStack_50;
  longlong *local_48;
  longlong *local_38 [2];
  longlong *local_28;
  longlong lStack_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      plVar1 = (longlong *)(param_1 + 0x10);
      FUN_1416bc5a0(plVar1,(longlong *)&local_58,local_res10);
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar5 = 0;
      local_48 = (longlong *)*plVar1;
      if ((local_58 == (longlong *)0x0) || (local_58 != local_48)) {
        _invalid_parameter_noinfo();
      }
      if (lStack_50 != lVar2) {
        if (local_58 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar5 = *local_58;
        }
        if (lStack_50 == *(longlong *)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar3 = *(longlong **)(lStack_50 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          FUN_1416cb7c0(plVar3);
          FUN_1416c4990(plVar3);
        }
        FUN_1416bc1e0(plVar1,&local_28,(longlong *)&local_58);
      }
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x50);
      FUN_1416bcbe0(plVar1,(longlong *)&local_58,local_res10);
      plVar3 = local_58;
      lVar2 = *(longlong *)(param_1 + 0x80);
      lVar5 = 0;
      local_38[0] = (longlong *)*plVar1;
      if ((local_58 == (longlong *)0x0) || (local_58 != local_38[0])) {
        _invalid_parameter_noinfo();
      }
      lVar4 = lStack_50;
      if (lStack_50 != lVar2) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar5 = *plVar3;
        }
        if (lVar4 == *(longlong *)(lVar5 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar3 = *(longlong **)(lVar4 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          FUN_1416b4fa0(plVar3);
          FUN_1416b26c0(plVar3);
        }
        local_28 = local_58;
        lStack_20 = lStack_50;
        FUN_1416bc820(plVar1,local_38,(longlong *)&local_28);
      }
    }
  }
  return;
}




void FUN_1416bdf20(longlong param_1,uint param_2)

{
  uint local_38 [2];
  undefined8 *local_30;
  longlong local_28 [4];
  
  if ((param_2 != 0) && (local_30 = FUN_1416ce710(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90),1), local_30 != (undefined8 *)0x0)) {
    local_38[0] = param_2;
    FUN_1416bc030((longlong *)(param_1 + 0x10),local_28,local_38);
  }
  return;
}




void FUN_1416bdf80(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416c72c0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




undefined1
FUN_1416be020(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined1 param_9,short param_10,
             undefined4 param_11)

{
  undefined1 uVar1;
  char cVar2;
  __time64_t _Var3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint local_res10 [2];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  char local_40;
  undefined1 local_3f;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30;
  undefined4 local_2c;
  
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_60,local_res10);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if ((local_60 == (longlong *)0x0) || (local_60 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_58 != (longlong *)lVar4) {
      lVar4 = 0;
      if (local_60 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar4 = *local_60;
      }
      if (local_58 == (longlong *)*(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)((longlong)local_58 + 0x20);
      if (plVar6 != (longlong *)0x0) {
        if (param_3 == 0x12) {
          param_5 = param_5 + 1;
        }
        local_50._0_4_ = 0;
        local_3f = (undefined1)param_6;
        local_30 = param_9;
        local_40 = '\0';
        local_50._4_4_ = param_2;
        local_48 = param_3;
        local_34 = param_5;
        _Var3 = _time64((__time64_t *)0x0);
        local_38 = (int)_Var3 + param_8;
        local_3c = param_7;
        local_2c = param_11;
        local_44 = param_4;
        if (param_10 == 0) {
          lVar4 = FUN_1416c9120(plVar6,param_3);
          if (lVar4 == 0) {
            if (0 < param_6) {
              local_40 = '\x01';
            }
          }
          else {
            uVar5 = FUN_1416b6770(lVar4,4);
            local_40 = (char)uVar5;
          }
        }
        else if (param_10 == 1) {
          if (param_6 != 0) {
            local_40 = local_40 + '\x01';
          }
          if (param_7 != 0) {
            local_40 = local_40 + '\x02';
          }
          if (param_8 != 0) {
            local_40 = local_40 + '\x04';
          }
        }
        else if (local_40 == '\x02') {
          local_40 = '\x04';
        }
        uVar1 = FUN_1416ce7f0(plVar6,(longlong)&local_50,'\0');
        return uVar1;
      }
    }
  }
  else {
    if (param_2 - 0xdbba1 < 99999) {
      return 0;
    }
    if (((param_3 != 1) && (param_3 != 0x13)) && (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))(), cVar2 != '\0')) {
      return 0;
    }
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_60,local_res10);
    lVar4 = *(longlong *)(param_1 + 0x80);
    if ((local_60 == (longlong *)0x0) || (local_60 != *(longlong **)(param_1 + 0x50))) {
      _invalid_parameter_noinfo();
    }
    if (local_58 == (longlong *)lVar4) {
      local_60 = (longlong *)FUN_1416b2660(0x58);
      if (local_60 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = FUN_1416b6110(local_60,param_2,*(undefined8 *)(param_1 + 8));
      }
      if (plVar6 != (longlong *)0x0) {
        local_60 = (longlong *)CONCAT44(local_60._4_4_,param_2);
        local_58 = plVar6;
        FUN_1416bc670((longlong *)(param_1 + 0x50),&local_50,(uint *)&local_60);
        uVar1 = FUN_1416b4990(plVar6,param_3,param_4,param_5,param_6);
        return uVar1;
      }
    }
    else {
      if (local_60 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = 0;
      }
      else {
        lVar4 = *local_60;
      }
      if (local_58 == (longlong *)*(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)((longlong)local_58 + 0x20) != (longlong *)0x0) {
        uVar1 = FUN_1416b4990(*(longlong **)((longlong)local_58 + 0x20),param_3,param_4,param_5,param_6);
        return uVar1;
      }
    }
  }
  return 1;
}




void FUN_1416be330(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    plVar1 = local_28;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 == lVar2) {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
      lVar2 = *(longlong *)(param_1 + 0x80);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x50))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar2) {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar2 = 0;
        }
        else {
          lVar2 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar2 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
          FUN_1416b4b10(*(longlong **)(local_20 + 0x20),param_3);
        }
      }
    }
    else {
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar1;
      }
      if (local_20 == *(longlong *)(lVar2 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        FUN_1416c9220(*(longlong **)(local_20 + 0x20),param_3);
      }
    }
  }
  return;
}




void FUN_1416be450(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416cc760(*(longlong **)(local_10 + 0x20),-1);
          return;
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416b3ba0(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




bool FUN_1416be580(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 == 0) {
    return false;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      lVar1 = 0;
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3);
        return lVar1 != 0;
      }
    }
  }
  else {
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x50))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      lVar1 = 0;
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        lVar1 = FUN_1416b4890(*(longlong **)(local_20 + 0x20),param_3);
        return lVar1 != 0;
      }
    }
  }
  return false;
}




void FUN_1416be6d0(longlong param_1,uint param_2)

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
    plVar6 = *(longlong **)(lVar4 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      FUN_1416cb9d0(plVar6);
    }
  }
  return;
}




void FUN_1416be7e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416ce120(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




void FUN_1416be890(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416cce50(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416b5180(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




void FUN_1416be9c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416cd560(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416b54c0(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




void FUN_1416beaf0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416cd1c0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




void FUN_1416beba0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416cd980(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
        if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
          FUN_1416b58a0(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




void FUN_1416becd0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416cdcf0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




void FUN_1416bed80(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416c74a0(*(longlong **)(local_10 + 0x20),param_3);
      }
    }
  }
  return;
}




ulonglong FUN_1416bee40(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_10 + 0x20),param_3), lVar1 != 0)) {
        uVar2 = FUN_1416b7230(lVar1);
        return uVar2;
      }
    }
  }
  else {
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416b4890(*(longlong **)(local_10 + 0x20),param_3), lVar1 != 0)) {
        return (ulonglong)*(uint *)(lVar1 + 4);
      }
    }
  }
  return 0;
}




int FUN_1416bef80(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
    if (*(longlong **)(local_10 + 0x20) == (longlong *)0x0) {
      return 0;
    }
    lVar2 = FUN_1416c9120(*(longlong **)(local_10 + 0x20),param_3);
  }
  else {
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
    if (*(longlong **)(local_10 + 0x20) == (longlong *)0x0) {
      return 0;
    }
    lVar2 = FUN_1416b4890(*(longlong **)(local_10 + 0x20),param_3);
  }
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_1416b2200((int *)(lVar2 + 0xc));
  return iVar1;
}




void FUN_1416bf0c0(longlong param_1,uint param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  char *pcVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar1) {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar1 = 0;
        }
        else {
          lVar1 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar1 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
          FUN_1416b7130(lVar1,param_4,param_5);
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x50))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar1) {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar1 = 0;
        }
        else {
          lVar1 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar1 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) &&
           (pcVar2 = (char *)FUN_1416b4890(*(longlong **)(local_20 + 0x20),param_3), pcVar2 != (char *)0x0)) {
          FUN_1416b6590(pcVar2,param_4,param_5);
        }
      }
    }
  }
  return;
}




void FUN_1416bf220(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  char *pcVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar1) {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar1 = 0;
        }
        else {
          lVar1 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar1 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
          FUN_1416b6e50(lVar1,param_4,param_5,param_6);
        }
      }
    }
    else {
      FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x50))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar1) {
        if (local_28 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar1 = 0;
        }
        else {
          lVar1 = *local_28;
        }
        if (local_20 == *(longlong *)(lVar1 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) &&
           (pcVar2 = (char *)FUN_1416b4890(*(longlong **)(local_20 + 0x20),param_3), pcVar2 != (char *)0x0)) {
          FUN_1416b6460(pcVar2,param_4,param_5,param_6);
        }
      }
    }
  }
  return;
}




ulonglong FUN_1416bf390(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong *extraout_RAX;
  longlong *extraout_RAX_00;
  longlong *extraout_RAX_01;
  ulonglong uVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  plVar1 = (longlong *)(ulonglong)(param_2 - 1000000);
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    plVar1 = FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
      plVar1 = extraout_RAX;
    }
    if (local_10 != lVar3) {
      if (local_18 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar3 = 0;
        plVar1 = extraout_RAX_00;
      }
      else {
        lVar3 = *local_18;
      }
      if (local_10 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
        plVar1 = extraout_RAX_01;
      }
      if (*(longlong *)(local_10 + 0x20) != 0) {
        uVar2 = FUN_1416c7660(*(longlong *)(local_10 + 0x20),param_3);
        return uVar2;
      }
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




void FUN_1416bf450(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar1 = 0;
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
        FUN_1416b67a0(lVar1,3,param_4,'\0');
      }
    }
  }
  return;
}




void FUN_1416bf520(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_30,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    lVar2 = 0;
    local_20 = *(longlong **)(param_1 + 0x10);
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
      if (*(longlong **)(local_28 + 0x20) != (longlong *)0x0) {
        FUN_1416cb240(*(longlong **)(local_28 + 0x20));
      }
    }
  }
  return;
}




void FUN_1416bf5e0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416cb2c0(*(longlong **)(local_10 + 0x20),param_3);
      }
    }
  }
  return;
}




uint FUN_1416bf690(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_10 != lVar2) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        uVar1 = FUN_1416ca320(*(longlong **)(local_10 + 0x20));
        return uVar1;
      }
    }
  }
  return 0xffffffff;
}




void FUN_1416bf740(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416c71c0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




ulonglong FUN_1416bf7f0(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_10 + 0x20),param_3), lVar1 != 0)) {
        uVar2 = FUN_1416b6770(lVar1,9);
        return uVar2;
      }
    }
  }
  else {
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416b4890(*(longlong **)(local_10 + 0x20),param_3), lVar1 != 0)) {
        return (ulonglong)*(uint *)(lVar1 + 0x1c);
      }
    }
  }
  return 0;
}




void FUN_1416bf940(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar1 = 0;
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3);
        if (lVar1 != 0) {
          FUN_1416b67a0(lVar1,9,param_4,'\0');
        }
      }
    }
  }
  else {
    FUN_1416bcbe0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x50))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar1 = 0;
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        lVar1 = FUN_1416b4890(*(longlong **)(local_20 + 0x20),param_3);
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x1c) = param_4;
        }
      }
    }
  }
  return;
}




bool FUN_1416bfa80(longlong param_1,uint param_2,longlong param_3,uint param_4,int *param_5)

{
  bool bVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 < 0x28)) {
    return false;
  }
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar2) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar2 = 0;
      }
      else {
        lVar2 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar2 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)(local_20 + 0x20) != (longlong *)0x0) {
        bVar1 = FUN_1416c7880(*(longlong **)(local_20 + 0x20),param_2,param_3,param_4,param_5);
        return bVar1;
      }
    }
  }
  return false;
}




ulonglong FUN_1416bfb70(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint local_res10 [2];
  ulonglong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    uVar2 = 0;
    if (param_2 - 1000000 < 0xee5be5c0) {
      local_res10[0] = param_2;
      FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((local_28 == (ulonglong *)0x0) || (local_28 != *(ulonglong **)(param_1 + 0x10))) {
        _invalid_parameter_noinfo();
      }
      if (local_20 != lVar1) {
        if (local_28 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar3 = uVar2;
        }
        else {
          uVar3 = *local_28;
        }
        if (local_20 == *(longlong *)(uVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
          uVar2 = FUN_1416b6770(lVar1,7);
          uVar2 = uVar2 & 0xffffffff;
        }
      }
    }
    return uVar2;
  }
  return 0;
}




void FUN_1416bfc50(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 != lVar1) {
      if (local_28 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar1 = 0;
      }
      else {
        lVar1 = *local_28;
      }
      if (local_20 == *(longlong *)(lVar1 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_1416c9120(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
        FUN_1416b67a0(lVar1,7,param_4,'\0');
      }
    }
  }
  return;
}




ulonglong FUN_1416bfd30(longlong param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong *extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong *extraout_RAX_04;
  ulonglong extraout_RAX_05;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  uVar3 = (ulonglong)param_4;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
  lVar4 = *(longlong *)(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if ((local_28 == (longlong *)0x0) || (local_28 != plVar2)) {
    _invalid_parameter_noinfo();
    plVar2 = extraout_RAX_01;
  }
  if (local_20 == lVar4) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_02 & 0xffffffffffffff00;
  }
  if (local_28 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = 0;
    plVar2 = extraout_RAX_03;
  }
  else {
    lVar4 = *local_28;
  }
  if (local_20 == *(longlong *)(lVar4 + 0x30)) {
    _invalid_parameter_noinfo();
    plVar2 = extraout_RAX_04;
  }
  plVar1 = *(longlong **)(local_20 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    if (0 < (int)param_4) {
      do {
        if (param_3 != (undefined4 *)0x0) {
          plVar2 = (longlong *)FUN_1416ca710(plVar1,param_3);
        }
        param_3 = param_3 + 10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
  }
  log_InlineLogERROR(&DAT_1416d8328);
  return extraout_RAX_05 & 0xffffffffffffff00;
}




undefined8 FUN_1416bfee0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
    if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
      lVar1 = FUN_1416c7b30(*(longlong **)(local_10 + 0x20));
      if (lVar1 != 0) {
        uVar2 = FUN_1416b6770(lVar1,9);
        return uVar2;
      }
    }
  }
  return 0;
}




int FUN_1416bffa0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return -1;
  }
  local_res10[0] = param_2;
  FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
    if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
      lVar1 = FUN_1416c7b30(*(longlong **)(local_10 + 0x20));
      if (lVar1 != 0) {
        uVar2 = FUN_1416b6770(lVar1,2);
        if (0 < (int)uVar2) {
          return (int)uVar2 + -0xa1;
        }
      }
    }
  }
  return -1;
}




bool FUN_1416c0070(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return false;
  }
  local_res10[0] = param_2;
  FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
  }
  if (local_10 != lVar1) {
    lVar1 = 0;
    if (local_18 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    else {
      lVar1 = *local_18;
    }
    if (local_10 == *(longlong *)(lVar1 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
      lVar1 = FUN_1416c7b30(*(longlong **)(local_10 + 0x20));
      return lVar1 != 0;
    }
  }
  return false;
}




void FUN_1416c0130(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
      if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
        FUN_1416cb620(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




undefined8 FUN_1416c01d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  FUN_1416bc5a0((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x10))) {
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
    if (*(longlong **)(local_10 + 0x20) != (longlong *)0x0) {
      lVar1 = FUN_1416c7b30(*(longlong **)(local_10 + 0x20));
      if (lVar1 != 0) {
        uVar2 = FUN_1416b6770(lVar1,3);
        return uVar2;
      }
    }
  }
  return 0;
}




void FUN_1416c0290(longlong *param_1)

{
  FUN_1416bd370(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416c02c0(undefined8 *param_1)

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
  lVar2 = FUN_1416b9d40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416c0340(longlong *param_1)

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
  FUN_1416bd410(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416c03b0(undefined8 *param_1)

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
  lVar2 = FUN_1416b9da0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416c0430(longlong *param_1)

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
  FUN_1416bd610(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416c04a0(undefined8 *param_1)

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
  lVar2 = FUN_1416b9e80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416c0520(longlong *param_1)

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
  FUN_1416bd810(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416c0590(undefined8 *param_1)

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
  lVar2 = FUN_1416b9ee0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_1416c0610(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1416bda60((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416c0704;
  }
  _invalid_parameter_noinfo();
LAB_1416c0704:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416c0740(longlong *param_1)

{
  FUN_1416bd370(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c0770(longlong *param_1)

{
  FUN_1416c0340(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c07a0(longlong *param_1)

{
  FUN_1416c0430(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c07d0(longlong *param_1)

{
  FUN_1416c0520(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416c0800(undefined8 *param_1)

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
  lVar2 = FUN_1416b9ee0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416c0880(longlong *param_1,undefined8 *param_2)

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
  FUN_1416c0610(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416c0930(longlong *param_1)

{
  FUN_1416c0340(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c0960(longlong *param_1)

{
  FUN_1416c0430(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c0990(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_58;
  undefined8 *puStack_50;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  *param_1 = (longlong)status::CStatusMgr::vftable;
  plVar1 = param_1 + 2;
  plVar7 = *(longlong **)param_1[8];
  plVar6 = (longlong *)*plVar1;
  plVar4 = param_1;
  while( true ) {
    plVar5 = (longlong *)param_1[8];
    if ((plVar6 == (longlong *)0x0) || (plVar6 != (longlong *)*plVar1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar5) break;
    if (plVar6 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar6;
    }
    if (plVar7 == *(longlong **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar5 = (longlong *)plVar7[4];
    if (plVar5 != (longlong *)0x0) {
      FUN_1416cb7c0(plVar5);
      FUN_1416c4990(plVar5);
      plVar4 = plVar5;
    }
    if (plVar6 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar2 = *(char *)(plVar7[1] + 0x29);
        plVar8 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar8, cVar2 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar2 = *(char *)(plVar7[1] + 0x29);
          plVar8 = (longlong *)plVar7[1];
          plVar5 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar2 = *(char *)((longlong)*(longlong **)(param_1[8] + 8) + 0x29);
  plVar7 = *(longlong **)(param_1[8] + 8);
  while (plVar6 = plVar7, cVar2 == '\0') {
    param_2 = (longlong *)plVar6[2];
    FUN_1416b97b0(plVar1,param_2);
    plVar7 = (longlong *)*plVar6;
    operator_delete(plVar6);
    cVar2 = *(char *)((longlong)plVar7 + 0x29);
    plVar4 = plVar6;
  }
  *(longlong *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  *(longlong *)param_1[8] = param_1[8];
  *(longlong *)(param_1[8] + 0x10) = param_1[8];
  plVar5 = param_1 + 10;
  plVar7 = (longlong *)*plVar5;
  plVar6 = *(longlong **)param_1[0x10];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar8 = plVar6;
          plVar6 = (longlong *)param_1[0x10];
          if ((plVar7 == (longlong *)0x0) || (plVar7 != (longlong *)*plVar5)) {
            _invalid_parameter_noinfo();
          }
          if (plVar8 == plVar6) {
            cVar2 = *(char *)((longlong)*(longlong **)(param_1[0x10] + 8) + 0x29);
            plVar7 = *(longlong **)(param_1[0x10] + 8);
            while (plVar6 = plVar7, cVar2 == '\0') {
              param_2 = (longlong *)plVar6[2];
              FUN_1416b9800(plVar5,param_2);
              plVar7 = (longlong *)*plVar6;
              operator_delete(plVar6);
              cVar2 = *(char *)((longlong)plVar7 + 0x29);
              plVar4 = plVar6;
            }
            *(longlong *)(param_1[0x10] + 8) = param_1[0x10];
            param_1[0x11] = 0;
            *(longlong *)param_1[0x10] = param_1[0x10];
            *(longlong *)(param_1[0x10] + 0x10) = param_1[0x10];
            FUN_1416c3680(plVar4,param_2,param_3,param_4);
            puStack_50 = (undefined8 *)param_1[0x10];
            local_58 = *plVar5;
            puStack_40 = (undefined8 *)*puStack_50;
            local_48 = local_58;
            FUN_1416bd610(plVar5,local_38,&local_48,&local_58);
            operator_delete((void *)param_1[0x10]);
            param_1[0x10] = 0;
            param_1[0x11] = 0;
            operator_delete((void *)*plVar5);
            puStack_40 = (undefined8 *)param_1[8];
            local_58 = *plVar1;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_1416bd410(plVar1,local_38,&local_58,&local_48);
            operator_delete((void *)param_1[8]);
            param_1[8] = 0;
            param_1[9] = 0;
            operator_delete((void *)*plVar1);
            return;
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar7;
          }
          if (plVar8 == *(longlong **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar6 = (longlong *)plVar8[4];
          if (plVar6 != (longlong *)0x0) {
            FUN_1416b4fa0(plVar6);
            FUN_1416b26c0(plVar6);
            plVar4 = plVar6;
          }
          if (plVar7 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar6 = plVar8;
        }
        plVar6 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar6 + 0x29) != '\0') break;
        cVar2 = *(char *)(*plVar6 + 0x29);
        plVar8 = (longlong *)*plVar6;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar8 + 0x29);
          plVar6 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      plVar6 = (longlong *)plVar8[1];
    } while (*(char *)((longlong)plVar6 + 0x29) != '\0');
    do {
      plVar3 = plVar6;
      plVar6 = plVar3;
      if (plVar8 != (longlong *)plVar3[2]) break;
      plVar6 = (longlong *)plVar3[1];
      plVar8 = plVar3;
    } while (*(char *)((longlong)plVar6 + 0x29) == '\0');
  } while( true );
}




void FUN_1416c0d20(longlong *param_1)

{
  FUN_1416c0520(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416c0d50(undefined8 *param_1)

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
  lVar2 = FUN_1416b9d40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416c0dd0(undefined8 *param_1)

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
  lVar2 = FUN_1416b9da0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416c0e50(undefined8 *param_1)

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
  lVar2 = FUN_1416b9e80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416c0ed0(undefined8 *param_1)

{
  *param_1 = status::CStatusMgr::vftable;
  param_1[1] = 0;
  FUN_1416c0d50(param_1 + 2);
  FUN_1416c0dd0(param_1 + 10);
  param_1[0x12] = 0;
  FUN_1416ba1e0((longlong)(param_1 + 2));
  FUN_1416ba260((longlong)(param_1 + 10));
  return param_1;
}




longlong * FUN_1416c0f50(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416c0990(param_1,param_2,param_3,param_4);
  if (((ulonglong)param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_1416c0f80(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 *puVar6;
  ulonglong extraout_RAX_01;
  ulonglong extraout_RAX_02;
  longlong *plVar7;
  longlong lVar8;
  undefined8 extraout_RAX_03;
  longlong **pplVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *local_188;
  longlong *plStack_180;
  longlong *local_178;
  longlong lStack_170;
  longlong *local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong *plStack_150;
  longlong *local_148;
  longlong *plStack_140;
  longlong *local_138 [6];
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8 [3];
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8 [6];
  undefined8 *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [3];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar15 = (longlong)param_4;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar10 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar10 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    local_188 = operator_new(8);
    plVar12 = (longlong *)0x0;
    local_138[0] = plVar12;
    if (local_188 != (longlong *)0x0) {
      *local_188 = (longlong)local_138;
      local_138[0] = local_188;
    }
    local_178 = local_188;
    local_108 = (longlong *)FUN_1416b9e80();
    *(undefined1 *)((longlong)local_108 + 0x29) = 1;
    local_108[1] = (longlong)local_108;
    *local_108 = (longlong)local_108;
    local_108[2] = (longlong)local_108;
    local_100 = 0;
    if (0 < lVar15) {
      do {
        if (param_3 != 0) {
          local_188 = (longlong *)CONCAT44(local_188._4_4_,*(undefined4 *)(param_3 + 8));
          plStack_180 = (longlong *)param_3;
          FUN_1416bccb0((longlong *)local_138,local_48,(int *)&local_188);
        }
        param_3 = param_3 + 0x28;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    local_188 = operator_new(8);
    local_c8[0] = plVar12;
    if (local_188 != (longlong *)0x0) {
      *local_188 = (longlong)local_c8;
      local_c8[0] = local_188;
    }
    local_178 = local_188;
    local_98 = (undefined8 *)FUN_1416b9ee0();
    *(undefined1 *)((longlong)local_98 + 0x21) = 1;
    local_98[1] = local_98;
    *local_98 = local_98;
    local_98[2] = local_98;
    local_90 = 0;
    puVar11 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
    cVar5 = *(char *)((longlong)puVar11 + 0x29);
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    while (cVar5 == '\0') {
      if (*(uint *)(puVar11 + 3) < param_2) {
        puVar6 = (undefined8 *)puVar11[2];
        puVar11 = puVar3;
      }
      else {
        puVar6 = (undefined8 *)*puVar11;
      }
      puVar3 = puVar11;
      puVar11 = puVar6;
      cVar5 = *(char *)((longlong)puVar6 + 0x29);
    }
    plStack_180 = puVar3;
    local_188 = *(longlong **)(param_1 + 0x10);
    puVar11 = *(undefined8 **)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar11) || (param_2 < *(uint *)(puVar3 + 3))) {
      lStack_170 = *(undefined8 *)(param_1 + 0x40);
      local_178 = *(longlong **)(param_1 + 0x10);
      pplVar9 = &local_178;
    }
    else {
      pplVar9 = &local_188;
    }
    plVar17 = *pplVar9;
    local_80 = pplVar9[1];
    plVar7 = *(longlong **)(param_1 + 0x40);
    local_88 = plVar17;
    if ((plVar17 == (longlong *)0x0) || (plVar17 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    plVar4 = local_80;
    if (local_80 == plVar7) {
      log_InlineLogERROR(&DAT_1416d8328);
      plStack_180 = local_98;
      local_188 = local_c8[0];
      lStack_170 = *local_98;
      local_178 = local_c8[0];
      local_158 = local_c8[0];
      plStack_150 = local_98;
      local_168 = local_c8[0];
      plStack_160 = (longlong *)lStack_170;
      FUN_1416bbb10((longlong *)local_c8,(longlong *)&local_148,(longlong *)&local_168,(longlong *)&local_158);
      operator_delete(local_98);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      operator_delete(local_c8[0]);
      plStack_180 = local_108;
      local_188 = local_138[0];
      lStack_170 = *local_108;
      local_178 = local_138[0];
      local_158 = local_138[0];
      plStack_150 = local_108;
      local_168 = local_138[0];
      plStack_160 = (longlong *)lStack_170;
      FUN_1416bd810((longlong *)local_138,(longlong *)&local_148,(longlong *)&local_168,(longlong *)&local_158);
      operator_delete(local_108);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      operator_delete(local_138[0]);
      uVar10 = extraout_RAX_01 & 0xffffffffffffff00;
    }
    else {
      if (plVar17 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar17 = plVar12;
      }
      else {
        plVar17 = (longlong *)*plVar17;
      }
      if (plVar4 == (longlong *)plVar17[6]) {
        _invalid_parameter_noinfo();
      }
      plVar7 = (longlong *)plVar4[4];
      local_178 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        FUN_1416ca5d0(plVar7,(longlong *)local_c8);
        plVar17 = local_c8[0];
        puVar11 = (undefined8 *)*local_98;
        local_188 = operator_new(8);
        local_f8[0] = plVar12;
        if (local_188 != (longlong *)0x0) {
          *local_188 = (longlong)local_f8;
          local_f8[0] = local_188;
        }
        local_e0 = (longlong *)0x0;
        local_d8 = (longlong *)0x0;
        local_d0 = 0;
        local_88 = local_188;
        while( true ) {
          puVar3 = local_98;
          lVar15 = 0;
          if ((plVar17 == (longlong *)0x0) || (plVar17 != local_c8[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar11 == puVar3) goto LAB_1416c1941;
          iVar13 = (int)plVar12 + 1;
          local_88 = (longlong *)CONCAT44(local_88._4_4_,iVar13);
          if (5000 < iVar13) break;
          if (plVar17 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar14 = lVar15;
          }
          else {
            lVar14 = *plVar17;
          }
          if (puVar11 == *(undefined8 **)(lVar14 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar13 = *(int *)(puVar11 + 3);
          if (plVar17 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          else {
            lVar15 = *plVar17;
          }
          if (puVar11 == *(undefined8 **)(lVar15 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar1 = *(int *)((longlong)puVar11 + 0x1c);
          cVar5 = FUN_1416c39d0(plVar7,iVar13);
          plVar12 = local_108;
          if (cVar5 == '\0') {
            cVar5 = *(char *)(local_108[1] + 0x29);
            plVar7 = (longlong *)local_108[1];
            plVar4 = local_108;
            while (plVar16 = plVar7, cVar5 == '\0') {
              if ((int)plVar16[3] < iVar13) {
                plVar7 = (longlong *)plVar16[2];
                plVar16 = plVar4;
              }
              else {
                plVar7 = (longlong *)*plVar16;
              }
              cVar5 = *(char *)((longlong)plVar7 + 0x29);
              plVar4 = plVar16;
            }
            local_50 = plVar4;
            local_58 = local_138[0];
            if (local_138[0] == (longlong *)0x0) {
              _invalid_parameter_noinfo();
            }
            plVar7 = local_108;
            if ((plVar4 == plVar12) || (iVar13 < (int)plVar4[3])) {
              local_60 = local_108;
              local_68 = local_138[0];
              pplVar9 = &local_68;
            }
            else {
              pplVar9 = &local_58;
            }
            plVar12 = *pplVar9;
            local_168 = plVar12;
            plStack_160 = pplVar9[1];
            if ((plVar12 == (longlong *)0x0) || (plVar12 != local_138[0])) {
              _invalid_parameter_noinfo();
            }
            plVar4 = plStack_160;
            if (plStack_160 != plVar7) {
              if (plVar12 == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar15 = 0;
              }
              else {
                lVar15 = *plVar12;
              }
              if (plVar4 == *(longlong **)(lVar15 + 0x30)) {
                _invalid_parameter_noinfo();
              }
              plVar7 = local_178;
              piVar2 = (int *)plVar4[4];
              if ((piVar2 != (int *)0x0) && (*piVar2 == iVar1)) {
                FUN_1416ca3a0(local_178,param_2,piVar2);
                local_78 = *pplVar9;
                plStack_70 = pplVar9[1];
                FUN_1416bce60(local_138,local_48,(longlong *)&local_78);
                goto LAB_1416c186b;
              }
            }
            plVar7 = local_178;
            local_188 = (longlong *)FUN_1416c9120(local_178,iVar13);
            plVar12 = local_d8;
            if (local_188 == (longlong *)0x0) {
              log_InlineLogERROR(&DAT_1416d8328);
LAB_1416c1941:
              plVar17 = local_e0;
              lVar15 = 0;
              plVar12 = local_f8[0];
              if (local_d8 < local_e0) {
                _invalid_parameter_noinfo();
                plVar12 = local_f8[0];
              }
              while( true ) {
                plVar4 = local_d8;
                if (local_d8 < local_e0) {
                  _invalid_parameter_noinfo();
                }
                if ((plVar12 == (longlong *)0x0) || (plVar12 != local_f8[0])) {
                  _invalid_parameter_noinfo();
                }
                plVar16 = local_138[0];
                if (plVar17 == plVar4) break;
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar14 = lVar15;
                }
                else {
                  lVar14 = *plVar12;
                }
                if (*(longlong **)(lVar14 + 0x20) <= plVar17) {
                  _invalid_parameter_noinfo();
                }
                if (*plVar17 != 0) {
                  FUN_1416caf20(plVar7,*plVar17);
                }
                if (plVar12 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar14 = lVar15;
                }
                else {
                  lVar14 = *plVar12;
                }
                if (*(longlong **)(lVar14 + 0x20) <= plVar17) {
                  _invalid_parameter_noinfo();
                }
                plVar17 = plVar17 + 1;
              }
              plVar12 = (longlong *)*local_108;
              while( true ) {
                plVar17 = local_108;
                if ((plVar16 == (longlong *)0x0) || (plVar16 != local_138[0])) {
                  _invalid_parameter_noinfo();
                }
                if (plVar12 == plVar17) break;
                if (plVar16 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                  lVar14 = lVar15;
                }
                else {
                  lVar14 = *plVar16;
                }
                if (plVar12 == *(longlong **)(lVar14 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                lVar14 = plVar12[4];
                if (lVar14 != 0) {
                  if (((0xa0 < *(int *)(lVar14 + 8)) && (*(int *)(lVar14 + 8) < 0xa6)) && (lVar8 = FUN_1416c7b30(plVar7), lVar8 != 0)) {
                    FUN_1416cb620(plVar7);
                  }
                  FUN_1416ce7f0(plVar7,lVar14,'\0');
                }
                if (plVar16 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                if (*(char *)((longlong)plVar12 + 0x29) == '\0') {
                  plVar17 = (longlong *)plVar12[2];
                  if (*(char *)((longlong)plVar17 + 0x29) == '\0') {
                    cVar5 = *(char *)(*plVar17 + 0x29);
                    plVar12 = plVar17;
                    plVar17 = (longlong *)*plVar17;
                    while (cVar5 == '\0') {
                      cVar5 = *(char *)(*plVar17 + 0x29);
                      plVar12 = plVar17;
                      plVar17 = (longlong *)*plVar17;
                    }
                  }
                  else {
                    cVar5 = *(char *)(plVar12[1] + 0x29);
                    plVar4 = (longlong *)plVar12[1];
                    plVar17 = plVar12;
                    while ((plVar12 = plVar4, cVar5 == '\0' && (plVar17 == (longlong *)plVar12[2]))) {
                      cVar5 = *(char *)(plVar12[1] + 0x29);
                      plVar4 = (longlong *)plVar12[1];
                      plVar17 = plVar12;
                    }
                  }
                }
                else {
                  _invalid_parameter_noinfo();
                }
              }
              if (local_e0 != (longlong *)0x0) {
                operator_delete(local_e0);
              }
              local_e0 = (longlong *)0x0;
              local_d8 = (longlong *)0x0;
              local_d0 = 0;
              operator_delete(local_f8[0]);
              plStack_150 = local_98;
              local_158 = local_c8[0];
              plStack_160 = (longlong *)*local_98;
              local_168 = local_c8[0];
              local_148 = local_c8[0];
              plStack_140 = local_98;
              local_78 = local_c8[0];
              plStack_70 = plStack_160;
              FUN_1416bbb10((longlong *)local_c8,local_48,(longlong *)&local_78,(longlong *)&local_148);
              operator_delete(local_98);
              local_98 = (undefined8 *)0x0;
              local_90 = 0;
              operator_delete(local_c8[0]);
              plStack_150 = local_108;
              local_158 = local_138[0];
              plStack_160 = (longlong *)*local_108;
              local_168 = local_138[0];
              local_148 = local_138[0];
              plStack_140 = local_108;
              local_78 = local_138[0];
              plStack_70 = plStack_160;
              FUN_1416bd810((longlong *)local_138,local_48,(longlong *)&local_78,(longlong *)&local_148);
              operator_delete(local_108);
              local_108 = (longlong *)0x0;
              local_100 = 0;
              operator_delete(local_138[0]);
              return CONCAT71((int7)((ulonglong)extraout_RAX_03 >> 8),1);
            }
            if (local_e0 == (longlong *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = local_d0 - (longlong)local_e0 >> 3;
            }
            lVar15 = 0;
            if ((ulonglong)((longlong)local_d8 - (longlong)local_e0 >> 3) < uVar10) {
              *local_d8 = (longlong)local_188;
              local_d8 = local_d8 + 1;
            }
            else {
              if (local_d8 < local_e0) {
                _invalid_parameter_noinfo();
              }
              plVar4 = local_e0;
              plVar7 = local_f8[0];
              local_158 = local_f8[0];
              plStack_150 = plVar12;
              lVar14 = lVar15;
              if (((longlong)local_d8 - (longlong)local_e0 & 0xfffffffffffffff8U) != 0) {
                if (local_d8 < local_e0) {
                  _invalid_parameter_noinfo();
                }
                if ((plVar7 == (longlong *)0x0) || (plVar7 != local_f8[0])) {
                  _invalid_parameter_noinfo();
                }
                lVar14 = (longlong)plVar12 - (longlong)plVar4 >> 3;
              }
              local_148 = local_158;
              plStack_140 = plStack_150;
              FUN_1416bda60((longlong)local_f8,(longlong)&local_148,1,&local_188);
              plVar12 = local_e0;
              if (local_d8 < local_e0) {
                _invalid_parameter_noinfo();
              }
              plVar7 = local_f8[0];
              if (local_f8[0] == (longlong *)0x0) {
                _invalid_parameter_noinfo();
                lVar8 = lVar15;
              }
              else {
                lVar8 = *local_f8[0];
              }
              if (plVar12 + lVar14 <= *(longlong **)(lVar8 + 0x20)) {
                if (plVar7 != (longlong *)0x0) {
                  lVar15 = *plVar7;
                }
                plVar7 = local_178;
                if (*(longlong **)(lVar15 + 0x18) <= plVar12 + lVar14) goto LAB_1416c186b;
              }
              _invalid_parameter_noinfo();
              plVar7 = local_178;
            }
          }
LAB_1416c186b:
          if (plVar17 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar11 + 0x21) == '\0') {
            puVar3 = (undefined8 *)puVar11[2];
            if (*(char *)((longlong)puVar3 + 0x21) == '\0') {
              cVar5 = *(char *)((longlong)*puVar3 + 0x21);
              puVar11 = puVar3;
              puVar3 = (undefined8 *)*puVar3;
              while (cVar5 == '\0') {
                cVar5 = *(char *)((longlong)*puVar3 + 0x21);
                puVar11 = puVar3;
                puVar3 = (undefined8 *)*puVar3;
              }
              plVar12 = (longlong *)((ulonglong)local_88 & 0xffffffff);
            }
            else {
              cVar5 = *(char *)((longlong)puVar11[1] + 0x21);
              puVar6 = (undefined8 *)puVar11[1];
              puVar3 = puVar11;
              while ((puVar11 = puVar6, cVar5 == '\0' && (puVar3 == (undefined8 *)puVar11[2]))) {
                cVar5 = *(char *)((longlong)puVar11[1] + 0x21);
                puVar6 = (undefined8 *)puVar11[1];
                puVar3 = puVar11;
              }
              plVar12 = (longlong *)((ulonglong)local_88 & 0xffffffff);
            }
          }
          else {
            _invalid_parameter_noinfo();
            plVar12 = (longlong *)((ulonglong)local_88 & 0xffffffff);
          }
        }
        log_InlineLogERROR(&DAT_1416d8328);
        goto LAB_1416c1941;
      }
      log_InlineLogERROR(&DAT_1416d8328);
      plStack_180 = local_98;
      local_188 = local_c8[0];
      lStack_170 = *local_98;
      local_178 = local_c8[0];
      local_158 = local_c8[0];
      plStack_150 = local_98;
      local_168 = local_c8[0];
      plStack_160 = (longlong *)lStack_170;
      FUN_1416bbb10((longlong *)local_c8,(longlong *)&local_148,(longlong *)&local_168,(longlong *)&local_158);
      operator_delete(local_98);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      operator_delete(local_c8[0]);
      plStack_180 = local_108;
      local_188 = local_138[0];
      lStack_170 = *local_108;
      local_178 = local_138[0];
      local_158 = local_138[0];
      plStack_150 = local_108;
      local_168 = local_138[0];
      plStack_160 = (longlong *)lStack_170;
      FUN_1416bd810((longlong *)local_138,(longlong *)&local_148,(longlong *)&local_168,(longlong *)&local_158);
      operator_delete(local_108);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      operator_delete(local_138[0]);
      uVar10 = extraout_RAX_02 & 0xffffffffffffff00;
    }
  }
  return uVar10;
}




undefined8 * FUN_1416c1c80(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x98);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1416c0ed0(puVar1);
  }
  return puVar1;
}




void FUN_1416c1cf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = status::CStatusTypeData::vftable;
  if (param_1[1] != 0) {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    param_1[1] = 0;
  }
  return;
}




undefined1 FUN_1416c1d40(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




void FUN_1416c1d90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001416c1da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}




void FUN_1416c1db0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001416c1dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




undefined8 * FUN_1416c1dd0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416c1cf0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1416c1e00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = status::CStatusTypeData::vftable;
    puVar1[1] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_1 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    log_InlineLogERROR(&DAT_1416d8328);
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = param_1;
  }
  return puVar1;
}




bool FUN_1416c1ed0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return iVar1 == 3;
}




bool FUN_1416c1f00(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return iVar1 == 2;
}




void FUN_1416c1f30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x0001416c1f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




void FUN_1416c1f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}




longlong FUN_1416c1fa0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_1416c2010(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c2032;
  }
  lVar2 = *plVar1;
LAB_1416c2032:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416c2050(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c2072;
  }
  lVar2 = *plVar1;
LAB_1416c2072:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416c2090(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1416c20d0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
}




longlong FUN_1416c2160(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong * FUN_1416c21c0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416c21f0;
  }
  else {
LAB_1416c21f0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416c2218;
  }
  _invalid_parameter_noinfo();
LAB_1416c2218:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_1416c2240(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 << 3);
  return;
}




void * FUN_1416c22d0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416c2370(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c23f0(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_1416c2430(longlong param_1)

{
  return *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3;
}




undefined8 FUN_1416c2440(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((-1 < param_2) && (uVar1 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3, param_2 < (int)uVar1)) {
    if (uVar1 <= (ulonglong)(longlong)param_2) {
      _invalid_parameter_noinfo();
    }
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  }
  return 0;
}




longlong FUN_1416c2490(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c24b2;
  }
  lVar2 = *plVar1;
LAB_1416c24b2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416c24d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c24f2;
  }
  lVar2 = *plVar1;
LAB_1416c24f2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416c2510(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416c2550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c2570(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1416c25f0(longlong *param_1,longlong param_2)

{
  FUN_1416c21c0(param_1,param_2);
  return param_1;
}




void * FUN_1416c2630(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c26a0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416c26e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_1416c2700(longlong param_1,ulonglong param_2)

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
      FUN_1416c20d0();
    }
    lVar1 = FUN_1416c2570(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_1416c2770(undefined8 *param_1)

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




longlong * FUN_1416c27b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416c281a;
  }
  _invalid_parameter_noinfo();
LAB_1416c281a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416c2850(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_1416c28b0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416c2920(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c2990(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416c29d0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_1416c2a00(undefined8 *param_1)

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




undefined8 * FUN_1416c2a50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416c2ab0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void * FUN_1416c2b40(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_1416c2b80(undefined8 *param_1)

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




void FUN_1416c2be0(undefined8 *param_1)

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




undefined8 * FUN_1416c2c20(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416c2c70(undefined8 *param_1,undefined8 *param_2)

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




longlong * FUN_1416c2cc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_1416c2de0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




longlong FUN_1416c2e20(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
  if ((longlong *)param_1[4] < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  while( true ) {
    plVar3 = (longlong *)param_1[4];
    if (plVar3 < (longlong *)param_1[3]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar3) break;
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
    if (lVar5 != 0) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x10))(*(longlong **)(lVar5 + 8),0);
      iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (param_2 == iVar2) {
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




void FUN_1416c2f10(longlong *param_1)

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




void FUN_1416c3000(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1416c20d0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1416c2570(param_1 + 0x10,uVar8);
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
      FUN_1416c2de0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_1416c2de0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416c2920(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




longlong * FUN_1416c32b0(longlong *param_1)

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
  FUN_1416c2f10(param_1);
  return param_1;
}




void FUN_1416c3310(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)param_1[3];
  if ((undefined8 *)param_1[4] < puVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  while( true ) {
    puVar2 = (undefined8 *)param_1[4];
    if (puVar2 < (undefined8 *)param_1[3]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    if (puVar3 == puVar2) break;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
      FUN_1416c1f60((undefined8 *)*puVar3,param_2,param_3,param_4);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(undefined8 **)(lVar4 + 0x20) <= puVar3) {
      _invalid_parameter_noinfo();
    }
    puVar3 = puVar3 + 1;
  }
  FUN_1416c2f10(param_1);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1416c3420(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1416c3000((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416c3514;
  }
  _invalid_parameter_noinfo();
LAB_1416c3514:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1416c3550(void)

{
  longlong *plVar1;
  
  if (DAT_1416e7320 == (longlong *)0x0) {
    plVar1 = operator_new(0x30);
    if (plVar1 == (longlong *)0x0) {
      DAT_1416e7320 = (longlong *)0x0;
    }
    else {
      DAT_1416e7320 = FUN_1416c32b0(plVar1);
    }
  }
  return;
}




longlong * FUN_1416c35a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1416c3310(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1416c35d0(longlong *param_1,undefined8 *param_2)

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
  FUN_1416c3420(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416c3680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = DAT_1416e7320;
  if (DAT_1416e7320 != (longlong *)0x0) {
    FUN_1416c3310(DAT_1416e7320,param_2,param_3,param_4);
    operator_delete(plVar1);
  }
  return;
}




undefined8 FUN_1416c36b0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *local_res20;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38 [3];
  
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,"SELECT * FROM cq_statustype",1);
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    uVar6 = 0;
    while( true ) {
      uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
      if (uVar3 <= uVar6) break;
      (**(code **)(*plVar2 + 0x30))(plVar2,(ulonglong)uVar6);
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x38))(plVar2);
      if (puVar4 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_1416d8328);
      }
      else {
        local_res20 = FUN_1416c1e00((longlong)puVar4);
        if (local_res20 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_1416d8328);
          (**(code **)*puVar4)(puVar4,1);
        }
        else {
          puVar4 = (undefined8 *)param_1[4];
          puVar1 = (undefined8 *)param_1[3];
          if ((puVar1 == (undefined8 *)0x0) || ((ulonglong)(param_1[5] - (longlong)puVar1 >> 3) <= (ulonglong)((longlong)puVar4 - (longlong)puVar1 >> 3))) {
            if (puVar4 < puVar1) {
              _invalid_parameter_noinfo();
            }
            local_48 = *param_1;
            puStack_40 = puVar4;
            FUN_1416c3420(param_1,local_38,&local_48,&local_res20);
          }
          else {
            *puVar4 = local_res20;
            param_1[4] = (longlong)(puVar4 + 1);
          }
        }
      }
      uVar6 = uVar6 + 1;
    }
    uVar5 = (**(code **)*plVar2)(plVar2);
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar5;
}




undefined8 * FUN_1416c38d0(undefined1 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1416b6a60(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1416b6b80(puVar1,param_1);
  }
  return puVar1;
}




undefined8 FUN_1416c3920(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




undefined8 FUN_1416c3940(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




undefined8 FUN_1416c3960(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),9);
                    /* WARNING: Could not recover jumptable at 0x0001416c39b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined1 FUN_1416c39d0(undefined8 param_1,int param_2)

{
  if ((((param_2 != 1000) && (param_2 != 0x3e9)) && (param_2 != 0x3ea)) && (param_2 != 0x3eb)) {
    return 0;
  }
  return 1;
}




int FUN_1416c3a00(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 % 1000;
  if (param_2 == 0x3e9) {
    return 1;
  }
  if (iVar1 == 0x3ea) {
    iVar1 = 2;
  }
  return iVar1;
}




void FUN_1416c3bb0(longlong param_1,longlong *param_2)

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




void FUN_1416c3d20(longlong param_1,longlong *param_2)

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




bool FUN_1416c3de0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1416c3e50(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1416c3ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c3ec2;
  }
  lVar2 = *plVar1;
LAB_1416c3ec2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416c3ee0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c3f02;
  }
  lVar2 = *plVar1;
LAB_1416c3f02:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416c3f20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_1416c3ff0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
}




longlong FUN_1416c4080(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c40a2;
  }
  lVar2 = *plVar1;
LAB_1416c40a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_1416c40c0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416c40e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416c4150(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416c4174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1416c41e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_1416c4290(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416c42c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416c43b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416c43e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_1416c4450(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1416c4480;
  }
  else {
LAB_1416c4480:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_1416c44a8;
  }
  _invalid_parameter_noinfo();
LAB_1416c44a8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_1416c4540(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1416c45c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1416c4670(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_1416c4750(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416c4800(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c4890(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_1416c48d0(void)

{
  if ((DAT_1416e7330 & 1) == 0) {
    DAT_1416e7330 = DAT_1416e7330 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7328,"CUserStatus");
    atexit((_func_5014 *)&LAB_1416d7390);
  }
  return &DAT_1416e7328;
}




void FUN_1416c4930(__uint64 param_1)

{
  if ((DAT_1416e7330 & 1) == 0) {
    DAT_1416e7330 = DAT_1416e7330 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7328,"CUserStatus");
    atexit((_func_5014 *)&LAB_1416d7390);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416c4985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1416e7328,param_1);
  return;
}




void FUN_1416c4990(void *param_1)

{
  if ((DAT_1416e7330 & 1) == 0) {
    DAT_1416e7330 = DAT_1416e7330 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7328,"CUserStatus");
    atexit((_func_5014 *)&LAB_1416d7390);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416c49e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1416e7328,param_1);
  return;
}




void FUN_1416c49f0(void *param_1)

{
  if ((DAT_1416e7330 & 1) == 0) {
    DAT_1416e7330 = DAT_1416e7330 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7328,"CUserStatus");
    atexit((_func_5014 *)&LAB_1416d7390);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416c4a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1416e7328,param_1);
  return;
}




undefined1 FUN_1416c4a50(longlong param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if ((((param_2 != 1000) && (param_2 != 0x3e9)) && (param_2 != 0x3ea)) && (param_2 != 0x3eb)) {
    return 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x90))(*(longlong **)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x40));
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = 0xff;
  if (param_2 == 1000) {
    uVar3 = 0x1c9c382;
  }
  else if (param_2 == 0x3e9) {
    uVar3 = 0x1c9c3e6;
  }
  else if (param_2 == 0x3ea) {
    uVar3 = 0x1c9c44a;
  }
  else if (param_2 == 0x3eb) {
    uVar3 = 0x1c9c4ae;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416c4b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xb0))(*(longlong **)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x40),param_2,uVar3);
  return uVar2;
}




undefined8 FUN_1416c4b10(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 < -1) {
    return 0xffffffff;
  }
  iVar5 = 0;
  lVar2 = FUN_1416c2430(*(longlong *)(param_1 + 0xb8));
  if (0 < (int)lVar2) {
    do {
      lVar2 = FUN_1416c2440(*(longlong *)(param_1 + 0xb8),iVar5);
      if (lVar2 != 0) {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),0);
        iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
        if (param_2 == iVar1) {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 8) + 0x10))(*(longlong **)(lVar2 + 8),3);
          uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3);
          return uVar4;
        }
      }
      iVar5 = iVar5 + 1;
      lVar2 = FUN_1416c2430(*(longlong *)(param_1 + 0xb8));
    } while (iVar5 < (int)lVar2);
  }
  return 0xffffffff;
}




bool FUN_1416c4c00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1416c4c40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_1416c4c80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c4ca2;
  }
  lVar2 = *plVar1;
LAB_1416c4ca2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1416c4cc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c4ce2;
  }
  lVar2 = *plVar1;
LAB_1416c4ce2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1416c4d00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1416c4d60(longlong param_1,longlong param_2)

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




void FUN_1416c4dc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c4de0(longlong param_1,longlong param_2)

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




void FUN_1416c4e40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c4e60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1416c4e70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c4e92;
  }
  lVar2 = *plVar1;
LAB_1416c4e92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416c4eb0(longlong *param_1)

{
  FUN_1416c40c0(param_1);
  return param_1;
}




longlong FUN_1416c4ed0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c4ef2;
  }
  lVar2 = *plVar1;
LAB_1416c4ef2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416c4f10(longlong *param_1)

{
  FUN_1416c4150(param_1);
  return param_1;
}




void FUN_1416c4fc0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1416c5030(longlong *param_1)

{
  FUN_1416c4290(param_1);
  return param_1;
}




void FUN_1416c5090(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1416c5110(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416c40c0(param_1);
  return param_2;
}




longlong * FUN_1416c5140(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1416c4150(param_1);
  return param_2;
}




longlong * FUN_1416c5170(longlong *param_1)

{
  FUN_1416c43b0(param_1);
  return param_1;
}




longlong * FUN_1416c5190(longlong *param_1,longlong param_2)

{
  FUN_1416c4450(param_1,param_2);
  return param_1;
}




void FUN_1416c51b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001416c51e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1416c5250(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416c5250(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1416c52b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1416e5a50);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_1416c5330(undefined8 *param_1)

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




undefined8 * FUN_1416c5370(undefined8 *param_1)

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




void * FUN_1416c53e0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c5460(void *param_1,longlong param_2,void *param_3)

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




int FUN_1416c54a0(longlong param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0x10) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_1416c54d0(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x18) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




ulonglong FUN_1416c5530(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x10) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




longlong FUN_1416c5590(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c55b2;
  }
  lVar2 = *plVar1;
LAB_1416c55b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416c55d0(longlong *param_1)

{
  FUN_1416c40c0(param_1);
  return param_1;
}




longlong FUN_1416c55f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1416c5612;
  }
  lVar2 = *plVar1;
LAB_1416c5612:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1416c5630(longlong *param_1)

{
  FUN_1416c4150(param_1);
  return param_1;
}




void FUN_1416c5650(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c5670(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c5690(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c56b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1416c56b0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 FUN_1416c5700(longlong param_1,ulonglong param_2)

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
      FUN_1416c3ff0();
    }
    lVar1 = FUN_1416c4fc0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_1416c5770(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_1416c57a0(longlong *param_1)

{
  FUN_1416c4290(param_1);
  return param_1;
}




undefined8 * FUN_1416c57c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416c5840(undefined8 *param_1)

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




undefined8 * FUN_1416c5880(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416c58c0(longlong *param_1)

{
  FUN_1416c43b0(param_1);
  return param_1;
}




undefined8 * FUN_1416c58e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1416c5920(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1416c598a;
  }
  _invalid_parameter_noinfo();
LAB_1416c598a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416c59c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1416c5a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




longlong * FUN_1416c5aa0(longlong *param_1)

{
  FUN_1416c51b0(param_1);
  return param_1;
}




void FUN_1416c5ac0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1416c5250(param_1,(longlong *)plVar2[2]);
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




void FUN_1416c5b40(void)

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




void FUN_1416c5ba0(void)

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




undefined8 * FUN_1416c5c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1416c5c80(undefined8 *param_1)

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




undefined8 * FUN_1416c5cd0(undefined8 *param_1)

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




void * FUN_1416c5d20(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1416c5d90(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1416c5e10(void *param_1,longlong param_2,void *param_3)

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




void FUN_1416c5e50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_1416c56b0(param_1,(longlong *)plVar2[2]);
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




void FUN_1416c5ed0(undefined8 *param_1)

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




void FUN_1416c5f10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c5f30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416c5f50(undefined8 *param_1)

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




undefined8 * FUN_1416c5fa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416c5fe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1416c6020(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_1416c6080(longlong *param_1)

{
  FUN_1416c51b0(param_1);
  return param_1;
}




void FUN_1416c60a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c5b40();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_1416c60e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c5ba0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1416c6120(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416c5c00(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416c6460(undefined8 *param_1)

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




undefined8 * FUN_1416c64b0(undefined8 *param_1)

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




void * FUN_1416c6570(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_1416c6630(undefined8 *param_1)

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




undefined8 * FUN_1416c6690(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1416c66e0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_1416c6730(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c6750(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1416c6770(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416c6800(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416c57c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416c6b40(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1416c6b90(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  puVar2 = (undefined8 *)param_1[6];
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x21) == '\0') {
    puVar4 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar4;
      bVar3 = *(int *)(*param_3 + 4) < *(int *)(puVar2[3] + 4);
      if (bVar3) {
        puVar4 = (undefined8 *)*puVar2;
      }
      else {
        puVar4 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar4 + 0x21) == '\0');
  }
  puVar2 = FUN_1416c6120(param_1,local_18,bVar3,puVar2,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416c6c20(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1416c6c80(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_1416c6d70(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1416e5998);
  }
  plVar5 = FUN_1416c5a20(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1416c70b0(undefined8 *param_1)

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




undefined8 * FUN_1416c7100(undefined8 *param_1)

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




void * FUN_1416c7180(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 FUN_1416c71c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)*param_1;
  puVar3 = (undefined8 *)param_1[6];
  puVar4 = *(undefined8 **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          puVar5 = puVar4;
          puVar4 = (undefined8 *)param_1[6];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
            puVar3 = extraout_RAX;
          }
          if (puVar5 == puVar4) {
            return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar2;
          }
          if (puVar5 == *(undefined8 **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (puVar5[4] != 0) {
            FUN_1416b6c40(puVar5[4]);
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar5 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar3 = extraout_RAX_00;
          puVar4 = puVar5;
        }
        puVar4 = (undefined8 *)puVar5[2];
        if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar3 = (undefined8 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar3 + 0x29);
          puVar4 = puVar3;
          puVar3 = (undefined8 *)*puVar3;
        }
      }
      puVar3 = (undefined8 *)puVar5[1];
      puVar4 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) != '\0');
    do {
      puVar4 = puVar3;
      puVar3 = puVar4;
      if (puVar5 != (undefined8 *)puVar4[2]) break;
      puVar3 = (undefined8 *)puVar4[1];
      puVar5 = puVar4;
      puVar4 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  } while( true );
}




void FUN_1416c72c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  CMsg local_418 [1040];
  
  if ((int)param_1[8] != 0) {
    cVar4 = (**(code **)(*(longlong *)param_1[0x18] + 0x90))();
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],0xffffffff,1);
    }
    plVar8 = *(longlong **)param_1[6];
    plVar1 = (longlong *)*param_1;
    while( true ) {
      plVar2 = (longlong *)param_1[6];
      if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar2) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar1;
      }
      if (plVar8 == *(longlong **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar9 = plVar8[4];
      if (lVar9 != 0) {
        uVar6 = FUN_1416b6770(lVar9,2);
        iVar5 = (int)uVar6;
        if (iVar5 < 0xc0) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],uVar6 & 0xffffffff,1);
        }
        else if (999 < iVar5) {
          FUN_1416cf880(local_418);
          uVar7 = FUN_1416b6770(lVar9,3);
          uVar6 = FUN_1416cf900(local_418,(int)param_1[8],1,iVar5,(int)uVar7);
          if ((char)uVar6 != '\0') {
            (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_418,1);
          }
          FUN_1416cf8d0((undefined8 *)local_418);
        }
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
        plVar2 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
          cVar4 = *(char *)(*plVar2 + 0x29);
          plVar8 = plVar2;
          plVar2 = (longlong *)*plVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*plVar2 + 0x29);
            plVar8 = plVar2;
            plVar2 = (longlong *)*plVar2;
          }
        }
        else {
          cVar4 = *(char *)(plVar8[1] + 0x29);
          plVar3 = (longlong *)plVar8[1];
          plVar2 = plVar8;
          while ((plVar8 = plVar3, cVar4 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
            cVar4 = *(char *)(plVar8[1] + 0x29);
            plVar3 = (longlong *)plVar8[1];
            plVar2 = plVar8;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  return;
}




void FUN_1416c74a0(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  CMsg local_428 [1040];
  
  if (((int)param_1[8] != 0) && (param_1[7] != 0)) {
    plVar8 = *(longlong **)param_1[6];
    plVar2 = (longlong *)*param_1;
    while( true ) {
      plVar3 = (longlong *)param_1[6];
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar8 == plVar3) break;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar2;
      }
      if (plVar8 == *(longlong **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar9 = plVar8[4];
      if (lVar9 != 0) {
        uVar6 = FUN_1416b6770(lVar9,2);
        iVar5 = (int)uVar6;
        if ((0xbf < iVar5) && (999 < iVar5)) {
          FUN_1416cf880(local_428);
          uVar6 = FUN_1416b6770(lVar9,3);
          uVar7 = FUN_1416cf900(local_428,(int)param_1[8],1,iVar5,(int)uVar6);
          if ((char)uVar7 != '\0') {
            if (param_2 == 0) {
              (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_428,1);
            }
            else {
              (**(code **)(*(longlong *)param_1[0x18] + 0x10))((longlong *)param_1[0x18],param_2,local_428);
            }
          }
          FUN_1416cf8d0((undefined8 *)local_428);
        }
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar8[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar8 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar8 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar4 = (longlong *)plVar8[1];
          plVar3 = plVar8;
          while ((plVar8 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
            cVar1 = *(char *)(plVar8[1] + 0x29);
            plVar4 = (longlong *)plVar8[1];
            plVar3 = plVar8;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
  }
  return;
}




ulonglong FUN_1416c7660(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar7;
  longlong *extraout_RAX_01;
  longlong *extraout_RAX_02;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((param_2 < -1) || (*(longlong *)(param_1 + 0x80) == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar6 = FUN_1416c4b10(param_1,param_2);
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar9 = (longlong *)**(longlong **)(param_1 + 0x78);
  if (plVar3 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar10 = 0;
    uVar7 = extraout_RAX;
  }
  else {
    lVar10 = *plVar3;
    uVar7 = uVar6;
  }
  if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
    _invalid_parameter_noinfo();
    uVar7 = extraout_RAX_00;
  }
  if (plVar9[3] == 0) {
    return uVar7 & 0xffffffffffffff00;
  }
  if (plVar3 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar3;
  }
  if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  plVar8 = (longlong *)plVar9[3];
  iVar2 = *(int *)((longlong)plVar8 + 4);
  do {
    plVar4 = *(longlong **)(param_1 + 0x78);
    if ((plVar3 == (longlong *)0x0) || (plVar3 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
      plVar8 = extraout_RAX_01;
    }
    if (plVar9 == plVar4) goto LAB_1416c786e;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar3;
    }
    if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar9[3] != 0) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar3;
      }
      if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(int *)plVar9[3] == param_2) {
        return CONCAT71((int7)((ulonglong)plVar9[3] >> 8),1);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar3;
      }
      if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar8 = (longlong *)plVar9[3];
      if (iVar2 != *(int *)((longlong)plVar8 + 4)) {
LAB_1416c786e:
        return (ulonglong)plVar8 & 0xffffffffffffff00;
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar3;
      }
      if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar8 = (longlong *)plVar9[3];
      if (*(int *)((longlong)plVar8 + 4) < (int)uVar6) goto LAB_1416c786e;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x21) == '\0') {
      plVar4 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar4 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x21);
        plVar8 = (longlong *)*plVar4;
        while (plVar9 = plVar4, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x21);
          plVar4 = plVar8;
          plVar8 = (longlong *)*plVar8;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x21);
        plVar5 = (longlong *)plVar9[1];
        plVar4 = plVar9;
        while ((plVar8 = plVar5, plVar9 = plVar8, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x21);
          plVar5 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      plVar8 = extraout_RAX_02;
    }
  } while( true );
}




bool FUN_1416c7880(longlong *param_1,int param_2,longlong param_3,uint param_4,int *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  
  if (((param_2 != 0) && (param_3 != 0)) && (0x27 < param_4)) {
    iVar10 = 1;
    puVar8 = (undefined4 *)(param_3 + 0xc);
    *param_5 = 0;
    plVar2 = (longlong *)*param_1;
    plVar7 = *(longlong **)param_1[6];
    while( true ) {
      plVar3 = (longlong *)param_1[6];
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 == plVar3) break;
      if ((ulonglong)param_4 < (ulonglong)((longlong)iVar10 * 0x28)) {
        return false;
      }
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
      lVar9 = plVar7[4];
      if (lVar9 != 0) {
        uVar6 = FUN_1416b6770(lVar9,2);
        iVar5 = (int)uVar6;
        if (((iVar5 != 1000) && (iVar5 != 0x3e9)) && ((iVar5 != 0x3ea && ((iVar5 != 0x3eb && (puVar8 + -3 != (undefined4 *)0x0)))))) {
          uVar6 = FUN_1416b6770(lVar9,0);
          puVar8[-3] = (int)uVar6;
          uVar6 = FUN_1416b6770(lVar9,1);
          puVar8[-2] = (int)uVar6;
          uVar6 = FUN_1416b6770(lVar9,2);
          puVar8[-1] = (int)uVar6;
          uVar6 = FUN_1416b6770(lVar9,3);
          *puVar8 = (int)uVar6;
          uVar6 = FUN_1416b6770(lVar9,4);
          *(char *)(puVar8 + 1) = (char)uVar6;
          uVar6 = FUN_1416b6770(lVar9,5);
          *(char *)((longlong)puVar8 + 5) = (char)uVar6;
          uVar6 = FUN_1416b6770(lVar9,6);
          puVar8[2] = (int)uVar6;
          uVar6 = FUN_1416b6770(lVar9,7);
          puVar8[3] = (int)uVar6;
          *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(lVar9 + 8);
          uVar6 = FUN_1416b6770(lVar9,9);
          puVar8[6] = (int)uVar6;
          iVar5 = puVar8[-1];
          if ((iVar5 == 0x94) || ((iVar5 == 0xac || (iVar5 == 0xad)))) {
            uVar6 = FUN_1416b6770(lVar9,8);
            puVar8[4] = (int)uVar6;
          }
          else {
            iVar5 = FUN_1416b2200((int *)(lVar9 + 0xc));
            puVar8[4] = iVar5;
          }
          *param_5 = *param_5 + 1;
          iVar10 = iVar10 + 1;
          puVar8 = puVar8 + 10;
        }
      }
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar3 + 0x29);
            plVar7 = plVar3;
            plVar3 = (longlong *)*plVar3;
          }
        }
        else {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
          while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
            cVar1 = *(char *)(plVar7[1] + 0x29);
            plVar4 = (longlong *)plVar7[1];
            plVar3 = plVar7;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    return 0 < *param_5;
  }
  return false;
}




longlong FUN_1416c7b30(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar2 = (longlong *)*param_1;
  plVar7 = *(longlong **)param_1[6];
  do {
    plVar3 = (longlong *)param_1[6];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar3) {
      return 0;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar8 = 0;
    }
    else {
      lVar8 = *plVar2;
    }
    if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = plVar7[4];
    if (lVar8 != 0) {
      uVar6 = FUN_1416b6770(lVar8,2);
      iVar5 = (int)uVar6;
      if (iVar5 == 0xa1) {
        return lVar8;
      }
      if (iVar5 == 0xa2) {
        return lVar8;
      }
      if (iVar5 == 0xa3) {
        return lVar8;
      }
      if (iVar5 == 0xa4) {
        return lVar8;
      }
      if (iVar5 == 0xa5) {
        return lVar8;
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar7 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar4 = (longlong *)plVar7[1];
        plVar3 = plVar7;
        while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




longlong * FUN_1416c7c70(longlong *param_1,longlong *param_2,int *param_3)

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
      bVar7 = *param_3 < (int)plVar6[3];
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
LAB_1416c7dcd:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416c7dfc;
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
      goto LAB_1416c7dcd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416c6800(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416c7dfc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1416c7e20(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416c40c0(param_3);
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
        goto LAB_1416c800c;
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
LAB_1416c800c:
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
            FUN_1416c4d60((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416c3bb0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1416c4d60((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_1416c3bb0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1416c4d60((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_1416c3bb0((longlong)param_1,plVar7);
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




longlong * FUN_1416c81e0(longlong *param_1,longlong *param_2,int *param_3)

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
      if (*(int *)(puVar1 + 3) < *param_3) {
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
  if ((puVar4 == puVar1) || (*param_3 < *(int *)(puVar4 + 3))) {
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




undefined8 * FUN_1416c82b0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  puVar2 = (undefined8 *)param_1[6];
  bVar3 = true;
  if (*(char *)((longlong)puVar2[1] + 0x21) == '\0') {
    puVar4 = (undefined8 *)puVar2[1];
    do {
      puVar2 = puVar4;
      bVar3 = *(int *)(*param_3 + 4) < *(int *)(puVar2[3] + 4);
      if (bVar3) {
        puVar4 = (undefined8 *)*puVar2;
      }
      else {
        puVar4 = (undefined8 *)puVar2[2];
      }
    } while (*(char *)((longlong)puVar4 + 0x21) == '\0');
  }
  puVar2 = FUN_1416c6120(param_1,local_18,bVar3,puVar2,param_3);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_1416c8340(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1416e5ab0);
  }
  FUN_1416c4150(param_3);
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
        goto LAB_1416c852c;
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
LAB_1416c852c:
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
            FUN_1416c4de0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1416c3d20((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_1416c4de0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_1416c3d20((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_1416c4de0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_1416c3d20((longlong)param_1,plVar7);
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




undefined8 * FUN_1416c8700(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1416c8790(longlong *param_1)

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




longlong * FUN_1416c8850(longlong *param_1,longlong *param_2,int *param_3)

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
      bVar7 = *param_3 < (int)plVar6[3];
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
LAB_1416c89ad:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1416c89dc;
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
      goto LAB_1416c89ad;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1416c6d70(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1416c89dc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




void FUN_1416c8a00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416c8a20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1416c8a70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416c5ac0((longlong)param_1);
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
    FUN_1416c7e20(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416c8c20(undefined8 *param_1)

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




longlong * FUN_1416c8c70(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1416c5e50((longlong)param_1);
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
    FUN_1416c8340(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1416c8e20(undefined8 *param_1)

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




void FUN_1416c8e70(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_1416c3ff0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_1416c4fc0(param_1 + 0x10,uVar8);
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
      FUN_1416c7180(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_1416c7180(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1416c5d90(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




longlong FUN_1416c9120(longlong *param_1,int param_2)

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
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x29);
  puVar3 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(int *)(puVar7 + 3) < param_2) {
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
  puVar7 = (undefined8 *)param_1[6];
  local_30 = puVar3;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(int *)(puVar3 + 3))) {
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
  }
  return 0;
}




void FUN_1416c9220(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c9120(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_1416cacd0(param_1,lVar1);
  return;
}




longlong FUN_1416c9250(longlong *param_1,uint param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  if (param_2 < 0x80000000) {
    uVar4 = uVar1;
    uVar5 = param_2;
    if (param_3 != '\0') {
      for (; uVar5 = uVar4, param_2 != 0; param_2 = param_2 - 1) {
        uVar1 = uVar1 + 1;
        if (10000 < uVar1) {
          log_InlineLogERROR(&DAT_1416d8328);
          break;
        }
        uVar4 = uVar4 + 1;
      }
    }
    if ((int)uVar5 < 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1416c9120(param_1,uVar5);
      if ((((lVar2 != 0) && (uVar5 - 0x31 < 9)) && (uVar5 != 0x35)) && (uVar3 = FUN_1416c7660((longlong)param_1,uVar5), (char)uVar3 == '\0')) {
        lVar2 = 0;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}




void FUN_1416c9340(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  plVar5 = (longlong *)**(longlong **)(param_1 + 0x78);
  lVar6 = 0;
  local_38 = plVar2;
  plStack_30 = plVar5;
  do {
    plVar3 = *(longlong **)(param_1 + 0x78);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) {
      return;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = lVar6;
    }
    else {
      lVar7 = *plVar2;
    }
    if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar5[3] != 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = lVar6;
      }
      else {
        lVar7 = *plVar2;
      }
      if (plVar5 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (param_2 == *(int *)plVar5[3]) {
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar6 = *plVar2;
        }
        if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        operator_delete((void *)plVar5[3]);
        FUN_1416c8340((longlong *)(param_1 + 0x48),local_28,(longlong *)&local_38);
        return;
      }
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x21) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x21) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x21);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_30 = plVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x21);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x21);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, plStack_30 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x21);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416c94c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  rsize_t _DstSize;
  longlong *_Dst;
  longlong lVar3;
  longlong *plVar4;
  
  if ((((*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) & 0xfffffffffffffff8U) != 0) && (param_2 - 0x31U < 9)) && (param_2 != 0x35)) {
    _Dst = *(longlong **)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0xa8) < _Dst) {
      _invalid_parameter_noinfo();
    }
    plVar4 = *(longlong **)(param_1 + 0x88);
    lVar3 = 0;
    while( true ) {
      plVar1 = *(longlong **)(param_1 + 0xa8);
      if (plVar1 < *(longlong **)(param_1 + 0xa0)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 0x88))) {
        _invalid_parameter_noinfo();
      }
      if (_Dst == plVar1) break;
      if (plVar4 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar2 = lVar3;
      }
      else {
        lVar2 = *plVar4;
      }
      if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      if (*_Dst != 0) {
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar2 = lVar3;
        }
        else {
          lVar2 = *plVar4;
        }
        if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        if (*(int *)*_Dst == param_2) {
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar2 = lVar3;
          }
          else {
            lVar2 = *plVar4;
          }
          if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          if (*_Dst != 0) {
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar2 = lVar3;
            }
            else {
              lVar2 = *plVar4;
            }
            if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            operator_delete((void *)*_Dst);
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar2 = lVar3;
            }
            else {
              lVar2 = *plVar4;
            }
            if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            *_Dst = 0;
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar2 = lVar3;
            }
            else {
              lVar2 = *plVar4;
            }
            if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            *_Dst = 0;
          }
          lVar2 = *(longlong *)(param_1 + 0xa8) - (longlong)(_Dst + 1) >> 3;
          if (0 < lVar2) {
            _DstSize = lVar2 << 3;
            memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
          }
          *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -8;
          if ((_Dst < *(longlong **)(param_1 + 0xa0)) || (*(longlong **)(param_1 + 0xa8) < _Dst)) {
            _invalid_parameter_noinfo();
          }
          plVar4 = *(longlong **)(param_1 + 0x88);
        }
        else {
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar2 = lVar3;
          }
          else {
            lVar2 = *plVar4;
          }
          if (*(longlong **)(lVar2 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          _Dst = _Dst + 1;
        }
      }
    }
  }
  return;
}




undefined8 FUN_1416c9750(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_3 + 8);
  uVar4 = 0;
  iVar1 = 0;
  if (*(longlong *)(param_2 + 0x28) == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x28) + 0x10))(*(longlong **)(param_2 + 0x28),3);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  if (*(int *)(param_3 + 0xc) < iVar1) {
    iVar2 = FUN_1416b2200((int *)(param_2 + 0xc));
    if (iVar2 <= *(int *)(param_3 + 0x1c)) {
      uVar4 = 3;
    }
  }
  else {
    iVar1 = FUN_1416b2200((int *)(param_2 + 0xc));
    if (*(int *)(param_3 + 0x1c) < iVar1) {
      uVar4 = 2;
    }
    else {
      FUN_1416c94c0(param_1,iVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}




void FUN_1416c9820(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  rsize_t _DstSize;
  longlong *_Dst;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 != 0) {
    uVar3 = FUN_1416b6770(param_2,2);
    if (-1 < (int)uVar3) {
      uVar5 = 0;
      bVar2 = false;
      _Dst = *(longlong **)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0xa8) < _Dst) {
        _invalid_parameter_noinfo();
      }
      puVar7 = *(ulonglong **)(param_1 + 0x88);
      uVar8 = uVar5;
      do {
        while( true ) {
          do {
            plVar1 = *(longlong **)(param_1 + 0xa8);
            if (plVar1 < *(longlong **)(param_1 + 0xa0)) {
              _invalid_parameter_noinfo();
            }
            if ((puVar7 == (ulonglong *)0x0) || (puVar7 != *(ulonglong **)(param_1 + 0x88))) {
              _invalid_parameter_noinfo();
            }
            iVar11 = (int)uVar8;
            if (_Dst == plVar1) {
              if (!bVar2) {
                return;
              }
              if (iVar11 == 0) {
                return;
              }
              FUN_1416b67a0(param_2,3,iVar11,'\0');
              uVar3 = FUN_1416b6770(param_2,2);
              if ((int)uVar3 == 0x34) {
                (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x78))(*(longlong **)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x40),0x34,uVar8,0);
              }
              lVar6 = **(longlong **)(param_1 + 0xc0);
              uVar5 = FUN_1416b6770(param_2,2);
              (**(code **)(lVar6 + 0x40))(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x40),uVar5 & 0xffffffff,1);
              return;
            }
            if (puVar7 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar9 = uVar5;
            }
            else {
              uVar9 = *puVar7;
            }
            if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
          } while (*_Dst == 0);
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          iVar10 = param_3 - *(int *)(*_Dst + 0xc);
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          *(int *)(*_Dst + 0xc) = param_3;
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          *(int *)(*_Dst + 8) = *(int *)(*_Dst + 8) - iVar10;
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          if ((int)uVar3 == *(int *)*_Dst) break;
LAB_1416c9be4:
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          _Dst = _Dst + 1;
        }
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar5;
        }
        else {
          uVar9 = *puVar7;
        }
        if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        if (iVar11 < *(int *)(*_Dst + 4)) {
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          uVar4 = FUN_1416b7230(param_2);
          if (*(int *)(*_Dst + 4) != (int)uVar4) {
            if (puVar7 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar8 = uVar5;
            }
            else {
              uVar8 = *puVar7;
            }
            if (*(longlong **)(uVar8 + 0x20) <= _Dst) {
              _invalid_parameter_noinfo();
            }
            uVar8 = (ulonglong)*(uint *)(*_Dst + 4);
          }
        }
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar5;
        }
        else {
          uVar9 = *puVar7;
        }
        if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        if (iVar10 < *(int *)(*_Dst + 8)) goto LAB_1416c9be4;
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar5;
        }
        else {
          uVar9 = *puVar7;
        }
        if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        uVar4 = FUN_1416b7230(param_2);
        if (*(int *)(*_Dst + 4) == (int)uVar4) {
          bVar2 = true;
        }
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar5;
        }
        else {
          uVar9 = *puVar7;
        }
        if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
          _invalid_parameter_noinfo();
        }
        if (*_Dst != 0) {
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          operator_delete((void *)*_Dst);
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          *_Dst = 0;
          if (puVar7 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar5;
          }
          else {
            uVar9 = *puVar7;
          }
          if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
            _invalid_parameter_noinfo();
          }
          *_Dst = 0;
        }
        lVar6 = *(longlong *)(param_1 + 0xa8) - (longlong)(_Dst + 1) >> 3;
        if (0 < lVar6) {
          _DstSize = lVar6 << 3;
          memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
        }
        *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -8;
        if ((_Dst < *(longlong **)(param_1 + 0xa0)) || (*(longlong **)(param_1 + 0xa8) < _Dst)) {
          _invalid_parameter_noinfo();
        }
        puVar7 = *(ulonglong **)(param_1 + 0x88);
      } while( true );
    }
  }
  return;
}




void FUN_1416c9ca0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar4 = *(longlong **)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0xa8) < plVar4) {
    _invalid_parameter_noinfo();
  }
  plVar2 = *(longlong **)(param_1 + 0x88);
  lVar7 = 0;
  while( true ) {
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar5 < *(longlong **)(param_1 + 0xa0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x88))) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == plVar5) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar7;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    if (*plVar4 != 0) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar7;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      operator_delete((void *)*plVar4);
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar7;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      *plVar4 = 0;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = lVar7;
      }
      else {
        lVar6 = *plVar2;
      }
      if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
        _invalid_parameter_noinfo();
      }
      *plVar4 = 0;
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar6 = lVar7;
    }
    else {
      lVar6 = *plVar2;
    }
    if (*(longlong **)(lVar6 + 0x20) <= plVar4) {
      _invalid_parameter_noinfo();
    }
    plVar4 = plVar4 + 1;
  }
  FUN_1416c8790((longlong *)(param_1 + 0x88));
  plVar4 = *(longlong **)(param_1 + 0x48);
  plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x78);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar2;
          plVar2 = *(longlong **)(param_1 + 0x78);
          if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 0x48))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar2) {
            plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 8);
            cVar1 = *(char *)((longlong)plVar4 + 0x21);
            while (cVar1 == '\0') {
              FUN_1416c56b0(param_1 + 0x48,(longlong *)plVar4[2]);
              plVar2 = (longlong *)*plVar4;
              operator_delete(plVar4);
              plVar4 = plVar2;
              cVar1 = *(char *)((longlong)plVar2 + 0x21);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x78) + 8) = *(longlong *)(param_1 + 0x78);
            *(undefined8 *)(param_1 + 0x80) = 0;
            *(undefined8 *)*(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x78);
            *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10) = *(longlong *)(param_1 + 0x78);
            return;
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = lVar7;
          }
          else {
            lVar6 = *plVar4;
          }
          if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (plVar5[3] != 0) {
            if (plVar4 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar6 = lVar7;
            }
            else {
              lVar6 = *plVar4;
            }
            if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            operator_delete((void *)plVar5[3]);
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar5 + 0x21) == '\0') break;
          _invalid_parameter_noinfo();
          plVar2 = plVar5;
        }
        plVar2 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar2 + 0x21) != '\0') break;
        cVar1 = *(char *)(*plVar2 + 0x21);
        plVar5 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x21);
          plVar2 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      plVar2 = (longlong *)plVar5[1];
    } while (*(char *)((longlong)plVar2 + 0x21) != '\0');
    do {
      plVar3 = plVar2;
      plVar2 = plVar3;
      if (plVar5 != (longlong *)plVar3[2]) break;
      plVar2 = (longlong *)plVar3[1];
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar2 + 0x21) == '\0');
  } while( true );
}




void FUN_1416c9f70(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_stack_ffffffffffffffe8;
  
  if (param_2 != 0) {
    uVar3 = FUN_1416b6770(param_2,1);
    uVar3 = uVar3 & 0xffffffff;
    uVar4 = FUN_1416b6770(param_2,2);
    if (((int)uVar4 == 0x12) && (iVar2 = FUN_1416b2200((int *)(param_2 + 0xc)), iVar2 < 2)) {
      (**(code **)(*(longlong *)param_1[0x18] + 0x48))((longlong *)param_1[0x18],(int)param_1[8],0x12);
    }
    uVar5 = FUN_1416b65d0(param_2);
    if ((char)uVar5 == '\0') {
      uVar5 = FUN_1416b6770(param_2,2);
      iVar2 = (int)uVar5;
      if (((iVar2 == 0xd) || (iVar2 == 0x12)) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
        FUN_1416b2200((int *)(param_2 + 0xc));
        (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],uVar3,0x1e);
      }
      if (iVar2 == 0x94) {
        uVar5 = FUN_1416c5530(param_2);
        if ((char)uVar5 != '\0') {
          uVar4 = FUN_1416b7230(param_2);
          iVar2 = (int)uVar4;
          lVar7 = FUN_1416c9120(param_1,0x9f);
          if (lVar7 != 0) {
            uVar4 = FUN_1416c3960(param_2);
            iVar2 = ((int)uVar4 * iVar2) / 100;
          }
          cVar1 = (**(code **)(*(longlong *)param_1[0x18] + 0xe0))((longlong *)param_1[0x18],uVar3,8,(longlong)iVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(longlong *)param_1[0x18] + 0xe8))((longlong *)param_1[0x18],0x1e,"leedragonblood",uVar3);
          }
        }
      }
      else if (((iVar2 == 0xac) || (iVar2 == 0xad)) && (uVar6 = FUN_1416c5530(param_2), (char)uVar6 != '\0')) {
        uVar4 = FUN_1416c3960(param_2);
        uVar8 = FUN_1416b7230(param_2);
        uVar9 = FUN_1416c3960(param_2);
        if ((int)uVar4 % 1000 + (int)uVar8 < (int)uVar9 / 1000) {
          uVar4 = FUN_1416c3960(param_2);
          uVar8 = FUN_1416b7230(param_2);
          iVar2 = (int)uVar4 % 1000 + (int)uVar8;
        }
        else {
          uVar4 = FUN_1416c3960(param_2);
          iVar2 = (int)uVar4 / 1000;
        }
        FUN_1416b67a0(param_2,3,iVar2,'\0');
        (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],uVar3,uVar5 & 0xffffffff,1);
      }
    }
    else {
      uVar4 = FUN_1416b6cf0(param_2);
      if (((char)uVar4 != '\0') && (uVar5 = FUN_1416c5530(param_2), (char)uVar5 != '\0')) {
        iVar2 = FUN_1416b2200((int *)(param_2 + 0xc));
        FUN_1416b67a0(param_2,8,iVar2,'\0');
        uVar4 = FUN_1416b6770(param_2,5);
        FUN_1416b67a0(param_2,5,(int)uVar4 + -1,'\0');
        if (*(char *)(param_2 + 8) == '\x01') {
          FUN_1416b6c40(param_2);
        }
        uVar5 = FUN_1416b6770(param_2,2);
        if (((int)uVar5 == 2) || ((int)uVar5 == 0x2b)) {
          lVar7 = *(longlong *)param_1[0x18];
          uVar6 = FUN_1416b6770(param_2,3);
          iVar2 = (**(code **)(lVar7 + 0x78))(param_1[0x18],uVar3,uVar5 & 0xffffffff,uVar6 & 0xffffffff,in_stack_ffffffffffffffe8 & 0xffffff00);
          if (iVar2 != 0) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],uVar3,0x271a,uVar3,iVar2);
            cVar1 = (**(code **)(*(longlong *)param_1[0x18] + 0x90))((longlong *)param_1[0x18],uVar3);
            if (cVar1 == '\0') {
              (**(code **)(*(longlong *)param_1[0x18] + 0xa0))((longlong *)param_1[0x18],uVar3);
            }
          }
        }
        else {
          uVar4 = FUN_1416b6770(param_2,2);
          if ((int)uVar4 == 0x27) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],uVar3,uVar5 & 0xffffffff,1,in_stack_ffffffffffffffe8 & 0xffffff00);
          }
        }
      }
    }
  }
  return;
}




uint FUN_1416ca320(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c9120(param_1,1000);
  if (lVar1 != 0) {
    return 1000;
  }
  lVar1 = FUN_1416c9120(param_1,0x3ea);
  if (lVar1 != 0) {
    return 0x3ea;
  }
  lVar1 = FUN_1416c9120(param_1,0x3e9);
  if (lVar1 != 0) {
    return 0x3e9;
  }
  lVar1 = FUN_1416c9120(param_1,0x3eb);
  return -(uint)(lVar1 != 0) & 0x3eb;
}




ulonglong FUN_1416ca3a0(longlong *param_1,int param_2,int *param_3)

{
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  longlong lVar1;
  ulonglong extraout_RAX_01;
  undefined8 uVar2;
  ulonglong extraout_RAX_02;
  ulonglong extraout_RAX_03;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (param_3 == (int *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  lVar1 = FUN_1416c9120(param_1,param_3[2]);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1416b6770(lVar1,0);
  if (*param_3 != (int)uVar2) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_02 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1416b6770(lVar1,2);
  if (param_3[2] != (int)uVar2) {
    log_InlineLogERROR(&DAT_1416d8328);
    return extraout_RAX_03 & 0xffffffffffffff00;
  }
  FUN_1416b67a0(lVar1,1,(int)param_1[8],'\0');
  FUN_1416b67a0(lVar1,3,param_3[3],'\0');
  FUN_1416b67a0(lVar1,4,(uint)*(byte *)(param_3 + 4),'\0');
  FUN_1416b67a0(lVar1,5,(uint)*(byte *)((longlong)param_3 + 0x11),'\0');
  FUN_1416b67a0(lVar1,6,param_3[5],'\0');
  FUN_1416b67a0(lVar1,7,param_3[6],'\0');
  FUN_1416b67a0(lVar1,8,param_3[7],'\0');
  *(char *)(lVar1 + 8) = (char)param_3[8];
  uVar2 = FUN_1416b67a0(lVar1,9,param_3[9],'\0');
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




bool FUN_1416ca5d0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int local_res8;
  undefined4 local_resc;
  longlong local_48 [4];
  
  FUN_1416baab0((longlong)param_2);
  plVar2 = (longlong *)*param_1;
  plVar7 = *(longlong **)param_1[6];
  while( true ) {
    plVar3 = (longlong *)param_1[6];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
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
    if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar8 = plVar7[4];
    if (lVar8 != 0) {
      uVar5 = FUN_1416b6770(lVar8,0);
      uVar6 = FUN_1416b6770(lVar8,2);
      local_resc = (undefined4)uVar5;
      local_res8 = (int)uVar6;
      FUN_1416c8850(param_2,local_48,&local_res8);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar7 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar4 = (longlong *)plVar7[1];
        plVar3 = plVar7;
        while ((plVar7 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
          plVar4 = (longlong *)plVar7[1];
          plVar3 = plVar7;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return param_2[7] == 0;
}




ulonglong FUN_1416ca710(longlong *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong extraout_RAX_01;
  longlong *plVar6;
  longlong lVar7;
  ulonglong extraout_RAX_02;
  ulonglong uVar8;
  undefined8 local_40;
  undefined8 *local_38;
  longlong local_30 [3];
  
  if (param_2 == (undefined4 *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar8 = extraout_RAX;
  }
  else {
    FUN_1416c81e0(param_1,&local_40,param_2 + 2);
    lVar7 = param_1[6];
    puVar5 = (undefined8 *)0x0;
    local_30[0] = *param_1;
    if ((CONCAT44(local_40._4_4_,(int)local_40) == 0) || (CONCAT44(local_40._4_4_,(int)local_40) != local_30[0])) {
      _invalid_parameter_noinfo();
    }
    if (local_38 == (undefined8 *)lVar7) {
      uVar1 = *(undefined1 *)((longlong)param_1 + 0xcc);
      puVar4 = (undefined8 *)FUN_1416b6a60(0x30);
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = FUN_1416b6b80(puVar4,uVar1);
      }
      if (puVar5 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_1416d8328);
        uVar8 = extraout_RAX_01;
      }
      else {
        plVar6 = (longlong *)InstanceGet();
        lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,"cq_status");
        if (lVar7 == 0) {
          log_InlineLogERROR(&DAT_1416d8328);
          log_InlineLogOSERROR("CUserStatus::AppendOSUserStatus create record failed.");
          uVar8 = extraout_RAX_02;
        }
        else {
          bVar2 = FUN_1416b6760((longlong)puVar5,lVar7);
          if (bVar2) {
            FUN_1416b67a0((longlong)puVar5,0,*param_2,'\0');
            FUN_1416b67a0((longlong)puVar5,1,(int)param_1[8],'\0');
            FUN_1416b67a0((longlong)puVar5,2,param_2[2],'\0');
            FUN_1416b67a0((longlong)puVar5,3,param_2[3],'\0');
            FUN_1416b67a0((longlong)puVar5,4,(uint)*(byte *)(param_2 + 4),'\0');
            FUN_1416b67a0((longlong)puVar5,5,(uint)*(byte *)((longlong)param_2 + 0x11),'\0');
            FUN_1416b67a0((longlong)puVar5,6,param_2[5],'\0');
            FUN_1416b67a0((longlong)puVar5,7,param_2[6],'\0');
            FUN_1416b67a0((longlong)puVar5,8,param_2[7],'\0');
            FUN_1416b67a0((longlong)puVar5,9,param_2[9],'\0');
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_2 + 8);
            local_40._0_4_ = param_2[2];
            local_38 = puVar5;
            FUN_1416c7c70(param_1,local_30,(int *)&local_40);
            *(undefined4 *)((longlong)puVar5 + 0xc) = param_2[7];
            uVar3 = tq::TimeGet(0);
            uVar8 = (ulonglong)uVar3 * 0x10624dd3 & 0xffffffff;
            *(uint *)(puVar5 + 2) = uVar3 / 1000;
          }
          else {
            log_InlineLogOSERROR("CUserStatus::AppendOSUserStatus CStatusData create failed.");
            uVar8 = (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
    }
    else {
      log_InlineLogOSERROR("CUserStatus::AppendOSUserStatus statue type repeat.");
      uVar8 = extraout_RAX_00;
    }
  }
  return uVar8;
}




undefined8 * FUN_1416ca9c0(undefined8 *param_1)

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
  lVar2 = FUN_1416c5b40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416caa40(longlong *param_1)

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
  FUN_1416c8a70(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1416caab0(undefined8 *param_1)

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
  lVar2 = FUN_1416c5ba0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1416cab30(longlong *param_1)

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
  FUN_1416c8c70(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1416caba0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1416c8e70((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1416cac94;
  }
  _invalid_parameter_noinfo();
LAB_1416cac94:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




ulonglong FUN_1416cacd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res18 [2];
  longlong *local_468;
  longlong lStack_460;
  longlong *local_458 [2];
  undefined8 local_448;
  CMsg local_438 [1040];
  
  local_448 = 0xfffffffffffffffe;
  if (param_1[0x18] == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(param_2 + 8) == '\x01') {
      FUN_1416b6940(param_2);
    }
    uVar4 = FUN_1416b6770(param_2,2);
    iVar3 = (int)uVar4;
    local_res18[0] = iVar3;
    uVar5 = FUN_1416b6770(param_2,3);
    if (iVar3 < 0xc0) {
      (**(code **)(*(longlong *)param_1[0x18] + 0x48))((longlong *)param_1[0x18],(int)param_1[8],uVar4 & 0xffffffff);
      if ((iVar3 - 0x31U < 9) && (iVar3 != 0x35)) {
        FUN_1416c9340((longlong)param_1,iVar3);
        (**(code **)(*(longlong *)param_1[0x18] + 0x50))((longlong *)param_1[0x18],(int)param_1[8],uVar4 & 0xffffffff);
      }
    }
    else if (999 < iVar3) {
      FUN_1416cf880(local_438);
      uVar6 = FUN_1416cf900(local_438,(int)param_1[8],2,iVar3,(int)uVar5);
      if ((char)uVar6 != '\0') {
        (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_438,1);
      }
      FUN_1416cf8d0((undefined8 *)local_438);
    }
    FUN_1416c81e0(param_1,(longlong *)&local_468,local_res18);
    lVar1 = param_1[6];
    lVar7 = 0;
    local_458[0] = (longlong *)*param_1;
    if ((local_468 == (longlong *)0x0) || (local_468 != local_458[0])) {
      _invalid_parameter_noinfo();
    }
    if (lStack_460 != lVar1) {
      if (local_468 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar7 = *local_468;
      }
      if (lStack_460 == *(longlong *)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar2 = *(undefined8 **)(lStack_460 + 0x20);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      FUN_1416c7e20(param_1,local_458,(longlong *)&local_468);
    }
    if (iVar3 == 0x2f) {
      (**(code **)(*(longlong *)param_1[0x18] + 0xd0))((longlong *)param_1[0x18],(int)param_1[8]);
    }
    else if (iVar3 == 0x91) {
      FUN_1416c9220(param_1,0x92);
      FUN_1416c9220(param_1,0x93);
    }
    uVar5 = (**(code **)(*(longlong *)param_1[0x18] + 0xd8))((longlong *)param_1[0x18],(int)param_1[8],uVar4 & 0xffffffff);
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar4;
}




void * FUN_1416caf20(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_458;
  undefined8 *local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  undefined8 *local_430;
  undefined8 local_428;
  CMsg local_418 [1040];
  
  local_428 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    uVar5 = FUN_1416b6770(param_2,2);
    iVar4 = (int)uVar5;
    if (iVar4 < 0xc0) {
      (**(code **)(*(longlong *)param_1[0x18] + 0x48))((longlong *)param_1[0x18],(int)param_1[8],uVar5 & 0xffffffff);
      if ((iVar4 - 0x31U < 9) && (iVar4 != 0x35)) {
        FUN_1416c9340((longlong)param_1,iVar4);
        (**(code **)(*(longlong *)param_1[0x18] + 0x50))((longlong *)param_1[0x18],(int)param_1[8],uVar5 & 0xffffffff);
      }
    }
    else if (999 < iVar4) {
      FUN_1416cf880(local_418);
      uVar6 = FUN_1416b6770(param_2,3);
      uVar5 = FUN_1416cf900(local_418,(int)param_1[8],2,iVar4,(int)uVar6);
      if ((char)uVar5 != '\0') {
        (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_418,1);
      }
      FUN_1416cf8d0((undefined8 *)local_418);
    }
    puVar8 = (undefined8 *)((undefined8 *)param_1[6])[1];
    cVar1 = *(char *)((longlong)puVar8 + 0x29);
    puVar3 = (undefined8 *)param_1[6];
    while (cVar1 == '\0') {
      if (*(int *)(puVar8 + 3) < iVar4) {
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
    local_430 = puVar3;
    local_438 = *param_1;
    puVar8 = (undefined8 *)param_1[6];
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar3 == puVar8) || (iVar4 < *(int *)(puVar3 + 3))) {
      local_440 = param_1[6];
      local_448 = *param_1;
      plVar9 = &local_448;
    }
    else {
      plVar9 = &local_438;
    }
    plVar2 = (longlong *)*plVar9;
    puVar8 = (undefined8 *)plVar9[1];
    puVar3 = (undefined8 *)param_1[6];
    local_458 = plVar2;
    local_450 = puVar8;
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      puVar8 = extraout_RAX;
    }
    puVar7 = local_450;
    if (local_450 != puVar3) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
        puVar8 = extraout_RAX_00;
      }
      else {
        lVar10 = *plVar2;
      }
      if (puVar7 == *(undefined8 **)(lVar10 + 0x30)) {
        _invalid_parameter_noinfo();
        puVar8 = extraout_RAX_01;
      }
      puVar3 = (undefined8 *)puVar7[4];
      if ((puVar3 != (undefined8 *)0x0) && (*(char *)(puVar3 + 1) == '\0')) {
        (**(code **)*puVar3)(puVar3,1);
        local_458 = (longlong *)*plVar9;
        local_450 = (undefined8 *)plVar9[1];
        puVar8 = FUN_1416c7e20(param_1,&local_448,(longlong *)&local_458);
      }
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
  }
  return register0x00000020;
}




void FUN_1416cb140(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 1000) {
    lVar1 = FUN_1416c9120(param_1,1000);
    if (lVar1 != 0) {
      FUN_1416cacd0(param_1,lVar1);
    }
  }
  if (param_2 != 0x3ea) {
    lVar1 = FUN_1416c9120(param_1,0x3ea);
    if (lVar1 != 0) {
      FUN_1416cacd0(param_1,lVar1);
    }
  }
  if (param_2 != 0x3e9) {
    lVar1 = FUN_1416c9120(param_1,0x3e9);
    if (lVar1 != 0) {
      FUN_1416cacd0(param_1,lVar1);
    }
  }
  if (param_2 != 0x3eb) {
    lVar1 = FUN_1416c9120(param_1,0x3eb);
    if (lVar1 != 0) {
      FUN_1416cacd0(param_1,lVar1);
    }
  }
  uVar2 = 0xff;
  if (param_2 == 1000) {
    uVar2 = 0x1c9c382;
  }
  else if (param_2 == 0x3e9) {
    uVar2 = 0x1c9c3e6;
  }
  else if (param_2 == 0x3ea) {
    uVar2 = 0x1c9c44a;
  }
  else if (param_2 == 0x3eb) {
    uVar2 = 0x1c9c4ae;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416cb237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x18] + 0xb8))((longlong *)param_1[0x18],(int)param_1[8],param_2,uVar2);
  return;
}




void FUN_1416cb240(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c9120(param_1,1000);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  lVar1 = FUN_1416c9120(param_1,0x3ea);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  lVar1 = FUN_1416c9120(param_1,0x3e9);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  lVar1 = FUN_1416c9120(param_1,0x3eb);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  return;
}




void FUN_1416cb2c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 1000;
  }
  else if (param_2 == 1) {
    iVar2 = 0x3e9;
  }
  else if (param_2 == 2) {
    iVar2 = 0x3ea;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar2 = 0x3eb;
  }
  lVar1 = FUN_1416c9120(param_1,iVar2);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  return;
}




ulonglong FUN_1416cb320(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulong uVar2;
  int iVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_458 [2];
  longlong local_450;
  undefined8 local_448;
  longlong local_440 [3];
  CMsg local_428 [1040];
  
  local_448 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar4 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    uVar4 = FUN_1416b6770(param_2,2);
    iVar3 = (int)uVar4;
    local_458[0] = iVar3;
    local_450 = param_2;
    FUN_1416c7c70(param_1,local_440,local_458);
    *(undefined1 *)(param_2 + 8) = 1;
    uVar5 = FUN_1416b6770(param_2,8);
    *(int *)(param_2 + 0xc) = (int)uVar5;
    uVar2 = tq::TimeGet(0);
    uVar7 = (ulonglong)uVar2 * 0x10624dd3 & 0xffffffff;
    *(uint *)(param_2 + 0x10) = uVar2 / 1000;
    if ((iVar3 == 0x1b) || (iVar3 == 0x95)) {
      _Var6 = _time64((__time64_t *)0x0);
      uVar5 = FUN_1416b6770(param_2,8);
      uVar7 = FUN_1416b67a0(param_2,7,(int)uVar5 + (int)_Var6,'\0');
    }
    if (iVar3 < 0xc0) {
      uVar7 = (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],uVar4 & 0xffffffff,0);
      if (iVar3 == 0x8a) {
        uVar5 = FUN_1416b7230(param_2);
        iVar3 = FUN_1416b2200((int *)(param_2 + 0xc));
        uVar7 = (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0x40,uVar4 & 0xffffffff,iVar3,(int)uVar5);
      }
      else if (iVar3 == 0x1c) {
        lVar1 = *(longlong *)param_1[0x18];
        uVar5 = FUN_1416b6770(param_2,8);
        uVar7 = (**(code **)(lVar1 + 0x28))(param_1[0x18],(int)param_1[8],0x11,(longlong)(int)uVar5);
      }
      else if (iVar3 == 0x1b) {
        lVar1 = *(longlong *)param_1[0x18];
        uVar5 = FUN_1416b6770(param_2,8);
        uVar7 = (**(code **)(lVar1 + 0x28))(param_1[0x18],(int)param_1[8],0x14,(longlong)(int)uVar5);
      }
      else if (iVar3 == 0x57) {
        uVar5 = FUN_1416b6770(param_2,3);
        uVar8 = FUN_1416b6770(param_2,8);
        uVar7 = (**(code **)(*(longlong *)param_1[0x18] + 0x28))
                          ((longlong *)param_1[0x18],(int)param_1[8],0x30,(longlong)(int)uVar8 + ((longlong)(int)uVar5 << 0x20));
      }
      else if (iVar3 == 0x95) {
        lVar1 = *(longlong *)param_1[0x18];
        uVar5 = FUN_1416b6770(param_2,8);
        uVar7 = (**(code **)(lVar1 + 0x30))(param_1[0x18],(int)param_1[8],0x49,0,(int)uVar5,0);
      }
    }
    else if (999 < iVar3) {
      FUN_1416cf880(local_428);
      uVar5 = FUN_1416b6770(param_2,3);
      uVar4 = FUN_1416cf900(local_428,(int)param_1[8],1,iVar3,(int)uVar5);
      if ((char)uVar4 != '\0') {
        (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_428,1);
      }
      if ((((iVar3 == 1000) || (iVar3 == 0x3e9)) || (iVar3 == 0x3ea)) || (iVar3 == 0x3eb)) {
        FUN_1416cb140(param_1,iVar3);
      }
      uVar7 = FUN_1416cf8d0((undefined8 *)local_428);
    }
    uVar4 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  return uVar4;
}




void FUN_1416cb620(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416c7b30(param_1);
  if (lVar1 != 0) {
    FUN_1416cacd0(param_1,lVar1);
  }
  return;
}




void FUN_1416cb650(longlong *param_1)

{
  FUN_1416caa40(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416cb680(longlong *param_1)

{
  FUN_1416cab30(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416cb6b0(longlong *param_1,undefined8 *param_2)

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
  FUN_1416caba0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_1416cb760(longlong *param_1)

{
  FUN_1416caa40(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416cb790(longlong *param_1)

{
  FUN_1416cab30(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1416cb7c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38;
  undefined8 *puStack_30;
  longlong local_28 [2];
  
  FUN_1416c9ca0((longlong)param_1);
  plVar6 = *(longlong **)param_1[6];
  plVar2 = (longlong *)*param_1;
  while( true ) {
    plVar3 = (longlong *)param_1[6];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
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
      (**(code **)*puVar4)(puVar4,1);
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
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete((void *)param_1[0x14]);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  operator_delete((void *)param_1[0x11]);
  plVar6 = param_1 + 9;
  puStack_40 = (undefined8 *)param_1[0xf];
  local_48 = *plVar6;
  puStack_30 = (undefined8 *)*puStack_40;
  local_38 = local_48;
  FUN_1416c8c70(plVar6,local_28,&local_38,&local_48);
  operator_delete((void *)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  operator_delete((void *)*plVar6);
  puStack_30 = (undefined8 *)param_1[6];
  local_48 = *param_1;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_1416c8a70(param_1,local_28,&local_48,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416cb9d0(longlong *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  char local_128;
  undefined1 local_127 [255];
  ulonglong local_28;
  
  local_140 = 0xfffffffffffffffe;
  local_28 = DAT_1416e72e0 ^ (ulonglong)auStack_168;
  local_128 = '\0';
  memset(local_127,0,0xff);
  _snprintf(&local_128,0xff,"SELECT * FROM cq_status WHERE owner_id=%lu");
  plVar4 = (longlong *)InstanceGet();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_128,2);
  uVar8 = 0;
  if (plVar4 != (longlong *)0x0) {
    local_148 = plVar4;
    for (iVar9 = 0; iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar9 < iVar3; iVar9 = iVar9 + 1) {
      (**(code **)(*plVar4 + 0x30))(plVar4,(longlong)iVar9);
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x38))(plVar4);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      uVar1 = *(undefined1 *)((longlong)param_1 + 0xcc);
      local_138 = (undefined8 *)FUN_1416b6a60(0x30);
      if (local_138 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        puVar6 = FUN_1416b6b80(local_138,uVar1);
      }
      if (puVar6 == (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
        uVar7 = (**(code **)*plVar4)(plVar4);
        return uVar7 & 0xffffffffffffff00;
      }
      bVar2 = FUN_1416b6760((longlong)puVar6,(longlong)puVar5);
      if (!bVar2) {
        (**(code **)*puVar6)(puVar6,1);
        uVar7 = (**(code **)*plVar4)(plVar4);
        return uVar7 & 0xffffffffffffff00;
      }
      uVar8 = FUN_1416b6cf0((longlong)puVar6);
      if ((char)uVar8 == '\0') {
        FUN_1416b6940((longlong)puVar6);
        (**(code **)*puVar6)(puVar6,1);
      }
      else {
        FUN_1416cb320(param_1,(longlong)puVar6);
      }
    }
    uVar8 = (**(code **)*plVar4)(plVar4);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  return uVar8;
}




undefined8 FUN_1416cbb90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 extraout_RAX;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong *local_d8 [3];
  int *local_c0;
  int *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar11 = param_1[7];
  local_res18 = (longlong *)lVar11;
  local_res10 = operator_new(8);
  if (local_res10 == (longlong *)0x0) {
    local_d8[0] = (longlong *)0x0;
  }
  else {
    *local_res10 = (longlong)local_d8;
    local_d8[0] = local_res10;
  }
  lVar12 = 0;
  local_c0 = (int *)0x0;
  local_b8 = (int *)0x0;
  local_b0 = 0;
  plVar7 = *(longlong **)param_1[6];
  plVar1 = (longlong *)*param_1;
  local_res18 = local_res10;
  local_58 = plVar1;
  do {
    plVar8 = (longlong *)param_1[6];
    local_78 = (longlong *)*param_1;
    if ((plVar1 == (longlong *)0x0) || (plVar1 != local_78)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar8) {
LAB_1416cbdcd:
      piVar9 = local_c0;
      local_a8 = (longlong *)0x0;
      if (local_b8 < local_c0) {
        _invalid_parameter_noinfo();
      }
      plVar7 = local_d8[0];
      local_a8 = local_d8[0];
      uStack_a0 = piVar9;
      local_a8._0_4_ = SUB84(local_d8[0],0);
      local_a8._4_4_ = (undefined4)((ulonglong)local_d8[0] >> 0x20);
      uStack_a0._0_4_ = SUB84(piVar9,0);
      uStack_a0._4_4_ = (undefined4)((ulonglong)piVar9 >> 0x20);
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = (undefined4)uStack_a0;
      uStack_7c = uStack_a0._4_4_;
      local_a8 = plVar7;
      uStack_a0 = piVar9;
      while( true ) {
        piVar2 = local_b8;
        local_68 = (longlong *)0x0;
        if (local_b8 < local_c0) {
          _invalid_parameter_noinfo();
        }
        local_68 = local_d8[0];
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_d8[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar9 == piVar2) break;
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = lVar12;
        }
        else {
          lVar11 = *plVar7;
        }
        if (*(int **)(lVar11 + 0x20) <= piVar9) {
          _invalid_parameter_noinfo();
        }
        iVar4 = *piVar9;
        FUN_1416c9220(param_1,iVar4);
        (**(code **)(*(longlong *)param_1[0x18] + 0x58))((longlong *)param_1[0x18],(int)param_1[8],iVar4);
        if (plVar7 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = lVar12;
        }
        else {
          lVar11 = *plVar7;
        }
        if (*(int **)(lVar11 + 0x20) <= piVar9) {
          _invalid_parameter_noinfo();
        }
        piVar9 = piVar9 + 1;
      }
      if (local_c0 != (int *)0x0) {
        operator_delete(local_c0);
      }
      local_c0 = (int *)0x0;
      local_b8 = (int *)0x0;
      local_b0 = 0;
      operator_delete(local_d8[0]);
      return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
    }
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = lVar12;
    }
    else {
      lVar10 = *plVar1;
    }
    if (plVar7 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = plVar7[4];
    if (((lVar10 != 0) && (uVar5 = FUN_1416b6630(lVar10), (char)uVar5 != '\0')) && (uVar5 = FUN_1416c54d0(lVar10), (char)uVar5 != '\0')) {
      uVar6 = FUN_1416b6810(lVar10);
      if ((char)uVar6 == '\0') {
        uVar5 = FUN_1416b6770(lVar10,2);
        iVar4 = (int)uVar5;
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar4);
        FUN_1416b4ec0((longlong *)local_d8,(undefined4 *)&local_res10);
        if ((iVar4 < 0xc0) &&
           (((((iVar4 == 0xd || (iVar4 == 0x12)) || ((iVar4 == 0x27 || ((iVar4 == 0x28 || (iVar4 == 0x1c)))))) || (iVar4 == 0x96)) || (iVar4 == 0x9f)))) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],(int)param_1[8],uVar5 & 0xffffffff,0,0);
        }
      }
      else {
        uVar6 = FUN_1416b6770(lVar10,6);
        FUN_1416b67a0(lVar10,6,(int)uVar6 + -0x3c,'\0');
      }
    }
    local_res20 = param_1[7];
    if ((int)lVar11 != (int)local_res20) goto LAB_1416cbdcd;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar8 = plVar7;
      plVar3 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x29) == '\0') {
        do {
          plVar7 = plVar3;
          plVar3 = (longlong *)*plVar7;
          local_98 = plVar7;
        } while (*(char *)(*plVar7 + 0x29) == '\0');
      }
      else {
        do {
          plVar7 = (longlong *)plVar8[1];
          if (*(char *)((longlong)plVar7 + 0x29) != '\0') break;
          bVar13 = plVar8 == (longlong *)plVar7[2];
          plVar8 = plVar7;
        } while (bVar13);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416cbf10(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  longlong *local_res10;
  uint local_res18;
  longlong *local_res20;
  uint in_stack_fffffffffffffa68;
  undefined2 uVar19;
  longlong *local_578 [3];
  int *local_560;
  int *local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  longlong local_528;
  longlong *local_518;
  int *piStack_510;
  longlong *local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  int *local_4e8;
  undefined8 *local_4e0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  longlong *local_4b8;
  longlong *local_4a8;
  longlong *local_498;
  undefined8 local_488;
  undefined8 *local_480;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  CMsg local_448 [1040];
  
  local_488 = 0xfffffffffffffffe;
  FUN_1416cbb90(param_1);
  uVar7 = tq::TimeGet(0);
  local_res18 = uVar7 / 1000;
  cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x90))((longlong *)param_1[0x18],(int)param_1[8]);
  if (cVar3 == '\0') {
    FUN_1416c81e0(param_1,&local_548,(int *)&DAT_1416da748);
    plVar17 = local_548;
    piVar13 = (int *)param_1[6];
    lVar15 = 0;
    local_498 = (longlong *)*param_1;
    if ((local_548 == (longlong *)0x0) || (local_548 != local_498)) {
      _invalid_parameter_noinfo();
    }
    piVar12 = uStack_540;
    if (uStack_540 != piVar13) {
      if (plVar17 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar15 = *plVar17;
      }
      if (piVar12 == *(int **)(lVar15 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar15 = *(longlong *)(piVar12 + 8);
      uVar9 = FUN_1416b6cf0(lVar15);
      if ((char)uVar9 == '\0') {
        FUN_1416cacd0(param_1,lVar15);
      }
    }
  }
  plVar17 = (longlong *)0x0;
  local_res20 = (longlong *)param_1[7];
  local_538 = local_res20;
  local_res10 = operator_new(8);
  local_578[0] = plVar17;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_578;
    local_578[0] = local_res10;
  }
  local_560 = (int *)0x0;
  local_558 = (int *)0x0;
  local_550 = 0;
  plVar16 = *(longlong **)param_1[6];
  puVar14 = (undefined8 *)*param_1;
  local_res20 = local_res10;
  local_4e0 = puVar14;
  do {
    plVar11 = (longlong *)param_1[6];
    local_480 = (undefined8 *)*param_1;
    if ((puVar14 == (undefined8 *)0x0) || (puVar14 != local_480)) {
      _invalid_parameter_noinfo();
    }
    if (plVar16 == plVar11) goto LAB_1416cc42e;
    if (puVar14 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar11 = plVar17;
    }
    else {
      plVar11 = (longlong *)*puVar14;
    }
    if (plVar16 == (longlong *)plVar11[6]) {
      _invalid_parameter_noinfo();
    }
    plVar11 = (longlong *)plVar16[4];
    local_res20 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      uVar10 = FUN_1416b6770((longlong)plVar11,2);
      iVar8 = (int)uVar10;
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar8);
      uVar9 = FUN_1416b6cf0((longlong)plVar11);
      if (((char)uVar9 == '\0') && (FUN_1416b4ec0((longlong *)local_578,(undefined4 *)&local_res10), iVar8 < 0xc0)) {
        if (((iVar8 == 0xd) || ((((iVar8 == 0x12 || (iVar8 == 0x27)) || (iVar8 == 0x28)) || ((iVar8 == 0x1c || (iVar8 == 0x96)))))) || (iVar8 == 0x9f)) {
          in_stack_fffffffffffffa68 = in_stack_fffffffffffffa68 & 0xffffff00;
          (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],(int)param_1[8],uVar10 & 0xffffffff,0,in_stack_fffffffffffffa68);
        }
        if (iVar8 == 0x16) {
          FUN_1416cf440(local_448);
          uVar19 = (undefined2)(in_stack_fffffffffffffa68 >> 0x10);
          plVar11 = (longlong *)param_1[0x18];
          uVar4 = (**(code **)(*plVar11 + 0x70))(plVar11,(int)param_1[8]);
          uVar5 = (**(code **)(*plVar11 + 0x68))(plVar11,(int)param_1[8]);
          uVar6 = (**(code **)(*plVar11 + 0x60))(plVar11,(int)param_1[8]);
          in_stack_fffffffffffffa68 = CONCAT22(uVar19,uVar4);
          uVar10 = FUN_1416cf4c0(local_448,(int)param_1[8],uVar6,uVar5,uVar4,0x9d,1);
          if ((char)uVar10 == '\0') {
            in_stack_fffffffffffffa68 = 700;
            log_InlineLogERROR(&DAT_1416d8328);
          }
          else {
            (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_448);
          }
          FUN_1416cf490((undefined8 *)local_448);
          plVar11 = local_res20;
        }
      }
      FUN_1416c9f70(param_1,(longlong)plVar11);
      piVar13 = local_558;
      local_528 = param_1[7];
      if ((int)local_538 != (int)local_528) {
LAB_1416cc42e:
        piVar13 = local_560;
        local_538 = (longlong *)0x0;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        plVar16 = local_578[0];
        local_538 = local_578[0];
        uStack_530 = piVar13;
        local_538._0_4_ = (int)local_578[0];
        local_538._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_530._0_4_ = SUB84(piVar13,0);
        uStack_530._4_4_ = (undefined4)((ulonglong)piVar13 >> 0x20);
        local_4c8 = (int)local_538;
        uStack_4c4 = local_538._4_4_;
        uStack_4c0 = (undefined4)uStack_530;
        uStack_4bc = uStack_530._4_4_;
        local_538 = plVar16;
        uStack_530 = piVar13;
        while( true ) {
          piVar12 = local_558;
          local_4b8 = (longlong *)0x0;
          if (local_558 < local_560) {
            _invalid_parameter_noinfo();
          }
          local_4b8 = local_578[0];
          if ((plVar16 == (longlong *)0x0) || (plVar16 != local_578[0])) {
            _invalid_parameter_noinfo();
          }
          if (piVar13 == piVar12) break;
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar11 = plVar17;
          }
          else {
            plVar11 = (longlong *)*plVar16;
          }
          if ((int *)plVar11[4] <= piVar13) {
            _invalid_parameter_noinfo();
          }
          iVar8 = *piVar13;
          FUN_1416c9220(param_1,iVar8);
          (**(code **)(*(longlong *)param_1[0x18] + 0x58))((longlong *)param_1[0x18],(int)param_1[8],iVar8);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar11 = plVar17;
          }
          else {
            plVar11 = (longlong *)*plVar16;
          }
          if ((int *)plVar11[4] <= piVar13) {
            _invalid_parameter_noinfo();
          }
          piVar13 = piVar13 + 1;
        }
        *(int *)(param_1 + 0x19) = (int)param_1[0x19] + 1;
        if (local_560 != (int *)0x0) {
          operator_delete(local_560);
        }
        local_560 = (int *)0x0;
        local_558 = (int *)0x0;
        local_550 = 0;
        operator_delete(local_578[0]);
        return;
      }
      if (((iVar8 == 0x31) || (iVar8 == 0x34)) || (iVar8 == 0x32)) {
        local_4f8 = (longlong *)0x0;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        piVar12 = local_560;
        local_4f8 = local_578[0];
        plVar11 = local_4f8;
        uStack_4f0 = piVar13;
        local_4f8._0_4_ = SUB84(local_578[0],0);
        local_4f8._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_4f0._0_4_ = SUB84(piVar13,0);
        uStack_4f0._4_4_ = (undefined4)((ulonglong)piVar13 >> 0x20);
        local_468 = (undefined4)local_4f8;
        uStack_464 = local_4f8._4_4_;
        uStack_460 = (undefined4)uStack_4f0;
        uStack_45c = uStack_4f0._4_4_;
        local_518 = (longlong *)0x0;
        local_4f8 = plVar11;
        uStack_4f0 = piVar13;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        piVar1 = local_558;
        local_518 = local_578[0];
        piStack_510 = piVar12;
        local_548 = local_578[0];
        plVar11 = local_548;
        for (; (piVar12 != piVar13 && (*piVar12 != iVar8)); piVar12 = piVar12 + 1) {
        }
        local_548._0_4_ = SUB84(local_578[0],0);
        local_548._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_540._0_4_ = SUB84(piVar12,0);
        uStack_540._4_4_ = (undefined4)((ulonglong)piVar12 >> 0x20);
        local_458 = (undefined4)local_548;
        uStack_454 = local_548._4_4_;
        uStack_450 = (undefined4)uStack_540;
        uStack_44c = uStack_540._4_4_;
        local_4a8 = (longlong *)0x0;
        local_548 = plVar11;
        uStack_540 = piVar12;
        local_4e8 = piVar12;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        local_4a8 = local_578[0];
        if ((local_548 == (longlong *)0x0) || (local_548 != local_578[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar12 == piVar1) {
          FUN_1416c9820((longlong)param_1,(longlong)local_res20,local_res18);
        }
      }
      cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x90))((longlong *)param_1[0x18],(int)param_1[8]);
      puVar14 = local_4e0;
      if (cVar3 == '\0') goto LAB_1416cc42e;
    }
    if (puVar14 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar16 + 0x29) == '\0') {
      plVar11 = plVar16;
      plVar2 = (longlong *)plVar16[2];
      if (*(char *)(plVar16[2] + 0x29) == '\0') {
        do {
          plVar16 = plVar2;
          plVar2 = (longlong *)*plVar16;
          local_508 = plVar16;
        } while (*(char *)(*plVar16 + 0x29) == '\0');
      }
      else {
        do {
          plVar16 = (longlong *)plVar11[1];
          if (*(char *)((longlong)plVar16 + 0x29) != '\0') break;
          bVar18 = plVar11 == (longlong *)plVar16[2];
          plVar11 = plVar16;
        } while (bVar18);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined1 FUN_1416cc580(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 *local_res20;
  
  uVar4 = FUN_1416c9750(param_1,param_2,param_3);
  bVar1 = false;
  bVar2 = false;
  uVar6 = 0;
  uVar3 = tq::TimeGet(0);
  iVar5 = (int)uVar4;
  if (iVar5 == 1) {
    FUN_1416b6e50(param_2,*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x1c),(uint)*(byte *)(param_3 + 0x11));
    uVar6 = 1;
  }
  else if (iVar5 == 2) {
    bVar1 = true;
    uVar6 = 1;
  }
  else if (iVar5 == 3) {
    FUN_1416b6be0(param_2,*(undefined4 *)(param_3 + 0x1c));
    bVar2 = true;
  }
  else if (iVar5 == 0) goto LAB_1416cc6c3;
  local_res20 = operator_new(0x10);
  if (local_res20 == (undefined4 *)0x0) {
    local_res20 = (undefined4 *)0x0;
  }
  else {
    *local_res20 = 0xffffffff;
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
  }
  if (local_res20 == (undefined4 *)0x0) {
    return 0;
  }
  *local_res20 = *(undefined4 *)(param_3 + 8);
  local_res20[1] = *(undefined4 *)(param_3 + 0xc);
  local_res20[2] = *(undefined4 *)(param_3 + 0x1c);
  local_res20[3] = uVar3 / 1000;
  FUN_1416cb6b0((longlong *)(param_1 + 0x88),&local_res20);
  if (bVar1) {
    FUN_1416b67a0(param_2,3,*(undefined4 *)(param_3 + 0xc),'\0');
  }
  if (bVar2) {
    FUN_1416b67a0(param_2,8,*(undefined4 *)(param_3 + 0x1c),'\0');
  }
LAB_1416cc6c3:
  FUN_1416b67a0(param_2,5,(uint)*(byte *)(param_3 + 0x11),'\0');
  FUN_1416b67a0(param_2,1,*(undefined4 *)(param_1 + 0x40),'\0');
  FUN_1416b67a0(param_2,4,(uint)*(byte *)(param_3 + 0x10),'\0');
  FUN_1416b67a0(param_2,6,*(undefined4 *)(param_3 + 0x14),'\0');
  if (bVar2) {
    FUN_1416b67a0(param_2,7,*(undefined4 *)(param_3 + 0x18),'\0');
  }
  FUN_1416b67a0(param_2,9,*(undefined4 *)(param_3 + 0x24),'\0');
  return uVar6;
}




void FUN_1416cc760(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_88;
  int *piStack_80;
  longlong *local_78;
  int *piStack_70;
  longlong *local_68 [3];
  int *local_50;
  int *local_48;
  longlong local_40;
  
  local_res18 = operator_new(8);
  if (local_res18 == (longlong *)0x0) {
    local_68[0] = (longlong *)0x0;
  }
  else {
    *local_res18 = (longlong)local_68;
    local_68[0] = local_res18;
  }
  local_50 = (int *)0x0;
  local_48 = (int *)0x0;
  local_40 = 0;
  plVar12 = *(longlong **)param_1[6];
  plVar3 = (longlong *)*param_1;
  piVar9 = (int *)0x0;
  piVar11 = (int *)0x0;
  local_res20 = local_res18;
  do {
    plVar4 = (longlong *)param_1[6];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      piVar9 = local_48;
      piVar11 = local_50;
    }
    if (plVar12 == plVar4) {
      piVar8 = piVar11;
      plVar12 = local_68[0];
      if (piVar9 < piVar11) {
        _invalid_parameter_noinfo();
        piVar9 = local_48;
        piVar8 = local_50;
        plVar12 = local_68[0];
      }
      while( true ) {
        if (piVar9 < piVar8) {
          _invalid_parameter_noinfo();
        }
        if ((plVar12 == (longlong *)0x0) || (plVar12 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar11 == piVar9) break;
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar12;
        }
        if (*(int **)(lVar10 + 0x20) <= piVar11) {
          _invalid_parameter_noinfo();
        }
        lVar10 = FUN_1416c9120(param_1,*piVar11);
        FUN_1416caf20(param_1,lVar10);
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar12;
        }
        if (*(int **)(lVar10 + 0x20) <= piVar11) {
          _invalid_parameter_noinfo();
        }
        piVar11 = piVar11 + 1;
        piVar9 = local_48;
        piVar8 = local_50;
      }
      if (local_50 != (int *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (int *)0x0;
      local_48 = (int *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      piVar9 = local_48;
      piVar11 = local_50;
    }
    else {
      lVar10 = *plVar3;
    }
    if (plVar12 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      piVar9 = local_48;
      piVar11 = local_50;
    }
    iVar2 = (int)plVar12[3];
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar2);
    if (param_2 == -1) {
      if (((((((((iVar2 != -1) && (iVar2 != 0x57)) && (iVar2 != 0x85)) && ((iVar2 != 0x86 && (iVar2 != 0x87)))) && (iVar2 != 0x88)) &&
            (((iVar2 != 0x89 && (iVar2 != 0x8a)) && ((iVar2 != 0x8b && (((iVar2 != 0x8c && (iVar2 != 0x8d)) && (iVar2 != 0x8e)))))))) &&
           ((iVar2 != 0x8f && (iVar2 != 0x90)))) &&
          ((iVar2 != 0x91 && (((iVar2 != 0xa0 && (iVar2 != 0x94)) && ((iVar2 != 0xa1 && (((iVar2 != 0xa2 && (iVar2 != 0xa3)) && (iVar2 != 0xa4)))))))))) &&
         (((iVar2 != 0xa5 && (iVar2 != 0xac)) && (iVar2 != 0xad)))) {
        if (piVar11 == (int *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = local_40 - (longlong)piVar11 >> 2;
        }
        if ((ulonglong)((longlong)piVar9 - (longlong)piVar11 >> 2) < uVar7) {
          *piVar9 = iVar2;
          local_48 = piVar9 + 1;
          piVar9 = local_48;
          piVar11 = local_50;
        }
        else {
          piVar8 = piVar9;
          if (piVar9 < piVar11) {
            _invalid_parameter_noinfo();
            piVar8 = local_48;
            piVar11 = local_50;
          }
          plVar4 = local_68[0];
          if (((longlong)piVar8 - (longlong)piVar11 & 0xfffffffffffffffcU) == 0) {
            lVar10 = 0;
          }
          else {
            if (piVar8 < piVar11) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            lVar10 = (longlong)piVar9 - (longlong)piVar11 >> 2;
          }
          local_78 = plVar4;
          piStack_70 = piVar9;
          FUN_1416b45f0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res18);
          piVar8 = local_50;
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          plVar4 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *local_68[0];
          }
          if (piVar8 + lVar10 <= *(int **)(lVar6 + 0x20)) {
            if (plVar4 == (longlong *)0x0) {
              lVar6 = 0;
            }
            else {
              lVar6 = *plVar4;
            }
            piVar9 = local_48;
            piVar11 = local_50;
            if (*(int **)(lVar6 + 0x18) <= piVar8 + lVar10) goto LAB_1416ccc82;
          }
          _invalid_parameter_noinfo();
          piVar9 = local_48;
          piVar11 = local_50;
        }
      }
    }
    else if ((iVar2 != 1) && (iVar2 != 0x57)) {
      if (piVar11 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = local_40 - (longlong)piVar11 >> 2;
      }
      if ((ulonglong)((longlong)piVar9 - (longlong)piVar11 >> 2) < uVar7) {
        *piVar9 = iVar2;
        local_48 = piVar9 + 1;
        piVar9 = local_48;
        piVar11 = local_50;
      }
      else {
        piVar8 = piVar9;
        if (piVar9 < piVar11) {
          _invalid_parameter_noinfo();
          piVar8 = local_48;
          piVar11 = local_50;
        }
        plVar4 = local_68[0];
        if (((longlong)piVar8 - (longlong)piVar11 & 0xfffffffffffffffcU) == 0) {
          lVar10 = 0;
        }
        else {
          if (piVar8 < piVar11) {
            _invalid_parameter_noinfo();
          }
          if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68[0])) {
            _invalid_parameter_noinfo();
          }
          lVar10 = (longlong)piVar9 - (longlong)piVar11 >> 2;
        }
        local_88 = plVar4;
        piStack_80 = piVar9;
        FUN_1416b45f0((longlong)local_68,(longlong)&local_88,1,(undefined4 *)&local_res18);
        piVar8 = local_50;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        plVar4 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *local_68[0];
        }
        if (piVar8 + lVar10 <= *(int **)(lVar6 + 0x20)) {
          if (plVar4 == (longlong *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar4;
          }
          piVar9 = local_48;
          piVar11 = local_50;
          if (*(int **)(lVar6 + 0x18) <= piVar8 + lVar10) goto LAB_1416ccc82;
        }
        _invalid_parameter_noinfo();
        piVar9 = local_48;
        piVar11 = local_50;
      }
    }
LAB_1416ccc82:
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      piVar9 = local_48;
      piVar11 = local_50;
    }
    if (*(char *)((longlong)plVar12 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar12[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar12 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar12 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar12[1] + 0x29);
        plVar5 = (longlong *)plVar12[1];
        plVar4 = plVar12;
        while ((plVar12 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar12[2]))) {
          cVar1 = *(char *)(plVar12[1] + 0x29);
          plVar5 = (longlong *)plVar12[1];
          plVar4 = plVar12;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      piVar9 = local_48;
      piVar11 = local_50;
    }
  } while( true );
}




void FUN_1416cce50(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar11 = (longlong *)0x0;
  local_58[0] = plVar11;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar8 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_40;
    if (plVar8 == plVar7) {
      plVar8 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar8 = local_58[0];
      }
      while( true ) {
        piVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar8 == (longlong *)0x0) || (plVar8 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar9 == piVar4) break;
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar9);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        piVar9 = piVar9 + 1;
      }
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar11;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar8 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_38;
    iVar2 = (int)plVar8[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if ((iVar2 != 1) && (((iVar2 == 2 || (iVar2 == 0x13)) || (iVar2 == 0x2b)))) {
      plVar7 = plVar11;
      if (local_40 != (int *)0x0) {
        plVar7 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar7) {
        *local_38 = iVar2;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_40;
        plVar7 = local_58[0];
        plVar10 = plVar11;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar10 = (longlong *)((longlong)piVar9 - (longlong)piVar4 >> 2);
        }
        local_68 = plVar7;
        piStack_60 = piVar9;
        FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        piVar9 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar11;
        }
        else {
          plVar5 = (longlong *)*local_58[0];
        }
        if (piVar9 + (longlong)plVar10 <= (int *)plVar5[4]) {
          plVar5 = plVar11;
          if (plVar7 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar7;
          }
          if ((int *)plVar5[3] <= piVar9 + (longlong)plVar10) goto LAB_1416cd047;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_1416cd047:
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar10 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar8 = plVar10, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar10 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416cd1c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar12 = (longlong *)0x0;
  local_58[0] = plVar12;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar9 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar11 = local_40;
    if (plVar9 == plVar7) {
      plVar9 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar9 = local_58[0];
      }
      while( true ) {
        piVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar9 == (longlong *)0x0) || (plVar9 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar11 == piVar4) break;
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar12;
        }
        else {
          plVar7 = (longlong *)*plVar9;
        }
        if ((int *)plVar7[4] <= piVar11) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar11);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar12;
        }
        else {
          plVar7 = (longlong *)*plVar9;
        }
        if ((int *)plVar7[4] <= piVar11) {
          _invalid_parameter_noinfo();
        }
        piVar11 = piVar11 + 1;
      }
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar12;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar9 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    iVar2 = (int)plVar9[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    lVar6 = FUN_1416c2e20((longlong *)param_1[0x17],iVar2);
    if (((iVar2 == 0x2a) || (iVar2 == 0x2b)) || (iVar2 == 0x9e)) {
LAB_1416cd2c6:
      piVar11 = local_38;
      plVar7 = plVar12;
      if (local_40 != (int *)0x0) {
        plVar7 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar7) {
        *local_38 = iVar2;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_40;
        plVar7 = local_58[0];
        plVar10 = plVar12;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar10 = (longlong *)((longlong)piVar11 - (longlong)piVar4 >> 2);
        }
        local_68 = plVar7;
        piStack_60 = piVar11;
        FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        piVar11 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar8 = plVar12;
        }
        else {
          plVar8 = (longlong *)*local_58[0];
        }
        if (piVar11 + (longlong)plVar10 <= (int *)plVar8[4]) {
          plVar8 = plVar12;
          if (plVar7 != (longlong *)0x0) {
            plVar8 = (longlong *)*plVar7;
          }
          if ((int *)plVar8[3] <= piVar11 + (longlong)plVar10) goto LAB_1416cd3e4;
        }
        _invalid_parameter_noinfo();
      }
    }
    else if (lVar6 != 0) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 8) + 0x10))(*(longlong **)(lVar6 + 8),2);
      iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if (iVar5 == 2) goto LAB_1416cd2c6;
    }
LAB_1416cd3e4:
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar9[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar9 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar9 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar9[1] + 0x29);
        plVar10 = (longlong *)plVar9[1];
        plVar7 = plVar9;
        while ((plVar9 = plVar10, cVar1 == '\0' && (plVar7 == (longlong *)plVar9[2]))) {
          cVar1 = *(char *)(plVar9[1] + 0x29);
          plVar10 = (longlong *)plVar9[1];
          plVar7 = plVar9;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416cd560(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_78;
  int *piStack_70;
  longlong *local_68 [3];
  int *local_50;
  int *local_48;
  longlong local_40;
  
  local_res10 = operator_new(8);
  plVar11 = (longlong *)0x0;
  local_68[0] = plVar11;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_68;
    local_68[0] = local_res10;
  }
  local_50 = (int *)0x0;
  local_48 = (int *)0x0;
  local_40 = 0;
  plVar8 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_50;
    if (plVar8 == plVar7) {
      plVar8 = local_68[0];
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
        plVar8 = local_68[0];
      }
      while( true ) {
        piVar4 = local_48;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar8 == (longlong *)0x0) || (plVar8 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar10 == piVar4) break;
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar10);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        piVar10 = piVar10 + 1;
      }
      if (local_50 != (int *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (int *)0x0;
      local_48 = (int *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar11;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar8 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_48;
    iVar2 = (int)plVar8[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if (iVar2 != 1) {
      switch(iVar2) {
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x2c:
      case 0x59:
      case 0x74:
      case 0x7d:
        plVar7 = plVar11;
        if (local_50 != (int *)0x0) {
          plVar7 = (longlong *)(local_40 - (longlong)local_50 >> 2);
        }
        if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar7) {
          *local_48 = iVar2;
          local_48 = local_48 + 1;
        }
        else {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          piVar4 = local_50;
          plVar7 = local_68[0];
          plVar9 = plVar11;
          if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
            if (local_48 < local_50) {
              _invalid_parameter_noinfo();
            }
            if ((plVar7 == (longlong *)0x0) || (plVar7 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            plVar9 = (longlong *)((longlong)piVar10 - (longlong)piVar4 >> 2);
          }
          local_78 = plVar7;
          piStack_70 = piVar10;
          FUN_1416b45f0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res10);
          piVar10 = local_50;
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          plVar7 = local_68[0];
          if (local_68[0] == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar5 = plVar11;
          }
          else {
            plVar5 = (longlong *)*local_68[0];
          }
          if (piVar10 + (longlong)plVar9 <= (int *)plVar5[4]) {
            plVar5 = plVar11;
            if (plVar7 != (longlong *)0x0) {
              plVar5 = (longlong *)*plVar7;
            }
            if ((int *)plVar5[3] <= piVar10 + (longlong)plVar9) break;
          }
          _invalid_parameter_noinfo();
        }
      }
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar9 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar8 = plVar9, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar9 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416cd980(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  int *piStack_60;
  longlong *local_58 [3];
  int *local_40;
  int *local_38;
  longlong local_30;
  
  local_res10 = operator_new(8);
  plVar11 = (longlong *)0x0;
  local_58[0] = plVar11;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_58;
    local_58[0] = local_res10;
  }
  local_40 = (int *)0x0;
  local_38 = (int *)0x0;
  local_30 = 0;
  plVar8 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_40;
    if (plVar8 == plVar7) {
      plVar8 = local_58[0];
      if (local_38 < local_40) {
        _invalid_parameter_noinfo();
        plVar8 = local_58[0];
      }
      while( true ) {
        piVar4 = local_38;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        if ((plVar8 == (longlong *)0x0) || (plVar8 != local_58[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar9 == piVar4) break;
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar9);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar9) {
          _invalid_parameter_noinfo();
        }
        piVar9 = piVar9 + 1;
      }
      if (local_40 != (int *)0x0) {
        operator_delete(local_40);
      }
      local_40 = (int *)0x0;
      local_38 = (int *)0x0;
      local_30 = 0;
      operator_delete(local_58[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar11;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar8 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    piVar9 = local_38;
    iVar2 = (int)plVar8[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    if ((0x84 < iVar2) && (iVar2 < 0x91)) {
      plVar7 = plVar11;
      if (local_40 != (int *)0x0) {
        plVar7 = (longlong *)(local_30 - (longlong)local_40 >> 2);
      }
      if ((longlong *)((longlong)local_38 - (longlong)local_40 >> 2) < plVar7) {
        *local_38 = iVar2;
        local_38 = local_38 + 1;
      }
      else {
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_40;
        plVar7 = local_58[0];
        plVar10 = plVar11;
        if (((longlong)local_38 - (longlong)local_40 & 0xfffffffffffffffcU) != 0) {
          if (local_38 < local_40) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_58[0])) {
            _invalid_parameter_noinfo();
          }
          plVar10 = (longlong *)((longlong)piVar9 - (longlong)piVar4 >> 2);
        }
        local_68 = plVar7;
        piStack_60 = piVar9;
        FUN_1416b45f0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
        piVar9 = local_40;
        if (local_38 < local_40) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar11;
        }
        else {
          plVar5 = (longlong *)*local_58[0];
        }
        if (piVar9 + (longlong)plVar10 <= (int *)plVar5[4]) {
          plVar5 = plVar11;
          if (plVar7 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar7;
          }
          if ((int *)plVar5[3] <= piVar9 + (longlong)plVar10) goto LAB_1416cdb73;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_1416cdb73:
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar10 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar8 = plVar10, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar10 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416cdcf0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_78;
  int *piStack_70;
  longlong *local_68 [3];
  int *local_50;
  int *local_48;
  longlong local_40;
  
  local_res10 = operator_new(8);
  plVar11 = (longlong *)0x0;
  local_68[0] = plVar11;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_68;
    local_68[0] = local_res10;
  }
  local_50 = (int *)0x0;
  local_48 = (int *)0x0;
  local_40 = 0;
  plVar8 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_50;
    if (plVar8 == plVar7) {
      plVar8 = local_68[0];
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
        plVar8 = local_68[0];
      }
      while( true ) {
        piVar4 = local_48;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar8 == (longlong *)0x0) || (plVar8 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar10 == piVar4) break;
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar10);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        piVar10 = piVar10 + 1;
      }
      if (local_50 != (int *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (int *)0x0;
      local_48 = (int *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar11;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar8 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_48;
    iVar2 = (int)plVar8[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    switch(iVar2) {
    case 5:
    case 0xd:
    case 0x12:
    case 0x27:
    case 0x28:
    case 0x2c:
    case 0x58:
    case 0x6c:
    case 0x74:
    case 0x77:
    case 0x78:
    case 0x92:
    case 0x96:
    case 0x9f:
      plVar7 = plVar11;
      if (local_50 != (int *)0x0) {
        plVar7 = (longlong *)(local_40 - (longlong)local_50 >> 2);
      }
      if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar7) {
        *local_48 = iVar2;
        local_48 = local_48 + 1;
      }
      else {
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_50;
        plVar7 = local_68[0];
        plVar9 = plVar11;
        if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_68[0])) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)((longlong)piVar10 - (longlong)piVar4 >> 2);
        }
        local_78 = plVar7;
        piStack_70 = piVar10;
        FUN_1416b45f0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res10);
        piVar10 = local_50;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar11;
        }
        else {
          plVar5 = (longlong *)*local_68[0];
        }
        if (piVar10 + (longlong)plVar9 <= (int *)plVar5[4]) {
          plVar5 = plVar11;
          if (plVar7 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar7;
          }
          if ((int *)plVar5[3] <= piVar10 + (longlong)plVar9) break;
        }
        _invalid_parameter_noinfo();
      }
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar9 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar8 = plVar9, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar9 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_1416ce120(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_78;
  int *piStack_70;
  longlong *local_68 [3];
  int *local_50;
  int *local_48;
  longlong local_40;
  
  local_res10 = operator_new(8);
  plVar11 = (longlong *)0x0;
  local_68[0] = plVar11;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_68;
    local_68[0] = local_res10;
  }
  local_50 = (int *)0x0;
  local_48 = (int *)0x0;
  local_40 = 0;
  plVar8 = *(longlong **)param_1[6];
  puVar3 = (undefined8 *)*param_1;
  local_res18 = local_res10;
  do {
    plVar7 = (longlong *)param_1[6];
    if ((puVar3 == (undefined8 *)0x0) || (puVar3 != (undefined8 *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_50;
    if (plVar8 == plVar7) {
      plVar8 = local_68[0];
      if (local_48 < local_50) {
        _invalid_parameter_noinfo();
        plVar8 = local_68[0];
      }
      while( true ) {
        piVar4 = local_48;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        if ((plVar8 == (longlong *)0x0) || (plVar8 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar10 == piVar4) break;
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        lVar6 = FUN_1416c9120(param_1,*piVar10);
        if (lVar6 != 0) {
          FUN_1416cacd0(param_1,lVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar7 = plVar11;
        }
        else {
          plVar7 = (longlong *)*plVar8;
        }
        if ((int *)plVar7[4] <= piVar10) {
          _invalid_parameter_noinfo();
        }
        piVar10 = piVar10 + 1;
      }
      if (local_50 != (int *)0x0) {
        operator_delete(local_50);
      }
      local_50 = (int *)0x0;
      local_48 = (int *)0x0;
      local_40 = 0;
      operator_delete(local_68[0]);
      return;
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar7 = plVar11;
    }
    else {
      plVar7 = (longlong *)*puVar3;
    }
    if (plVar8 == (longlong *)plVar7[6]) {
      _invalid_parameter_noinfo();
    }
    piVar10 = local_48;
    iVar2 = (int)plVar8[3];
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar2);
    switch(iVar2) {
    case 0xd:
    case 0x12:
    case 0x31:
    case 0x6c:
    case 0x92:
    case 0x96:
    case 0x9f:
      plVar7 = plVar11;
      if (local_50 != (int *)0x0) {
        plVar7 = (longlong *)(local_40 - (longlong)local_50 >> 2);
      }
      if ((longlong *)((longlong)local_48 - (longlong)local_50 >> 2) < plVar7) {
        *local_48 = iVar2;
        local_48 = local_48 + 1;
      }
      else {
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        piVar4 = local_50;
        plVar7 = local_68[0];
        plVar9 = plVar11;
        if (((longlong)local_48 - (longlong)local_50 & 0xfffffffffffffffcU) != 0) {
          if (local_48 < local_50) {
            _invalid_parameter_noinfo();
          }
          if ((plVar7 == (longlong *)0x0) || (plVar7 != local_68[0])) {
            _invalid_parameter_noinfo();
          }
          plVar9 = (longlong *)((longlong)piVar10 - (longlong)piVar4 >> 2);
        }
        local_78 = plVar7;
        piStack_70 = piVar10;
        FUN_1416b45f0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res10);
        piVar10 = local_50;
        if (local_48 < local_50) {
          _invalid_parameter_noinfo();
        }
        plVar7 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar11;
        }
        else {
          plVar5 = (longlong *)*local_68[0];
        }
        if (piVar10 + (longlong)plVar9 <= (int *)plVar5[4]) {
          plVar5 = plVar11;
          if (plVar7 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar7;
          }
          if ((int *)plVar5[3] <= piVar10 + (longlong)plVar9) break;
        }
        _invalid_parameter_noinfo();
      }
    }
    if (puVar3 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
      plVar7 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x29);
        plVar8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x29);
        plVar9 = (longlong *)plVar8[1];
        plVar7 = plVar8;
        while ((plVar8 = plVar9, cVar1 == '\0' && (plVar7 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x29);
          plVar9 = (longlong *)plVar8[1];
          plVar7 = plVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




undefined8 * FUN_1416ce540(undefined8 *param_1)

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
  lVar2 = FUN_1416c5b40();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416ce5c0(undefined8 *param_1)

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
  lVar2 = FUN_1416c5ba0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1416ce640(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1416ce540(param_1);
  FUN_1416ce5c0(param_1 + 9);
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x11);
    plVar2 = plVar1;
  }
  param_1[0x11] = plVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  param_1[0x18] = param_3;
  param_1[0x17] = param_4;
  FUN_1416c5e50((longlong)(param_1 + 9));
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = param_5;
  return param_1;
}




undefined8 * FUN_1416ce710(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  
  if ((DAT_1416e7330 & 1) == 0) {
    DAT_1416e7330 = DAT_1416e7330 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1416e7328,"CUserStatus");
    atexit((_func_5014 *)&LAB_1416d7390);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_1416e7328,0xd0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1416ce640(puVar1,param_1,param_2,param_3,param_4);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1416d8328,"CHECKF","pStatus","f:\\version\\cqserver-78.0.11-1204\\modules\\status\\src\\userstatus.cpp",0x2d);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




undefined1 FUN_1416ce7f0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  __time64_t _Var12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *local_res20;
  uint in_stack_fffffffffffffb68;
  undefined8 *local_480;
  int local_478 [2];
  undefined8 *local_470;
  undefined8 local_468;
  longlong local_460 [3];
  CMsg local_448 [1040];
  
  local_468 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar2 = 0;
  }
  else if (param_1[0x18] == 0) {
    log_InlineLogERROR(&DAT_1416d8328);
    uVar2 = 0;
  }
  else if (param_1[0x17] == 0) {
    uVar2 = 0;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x88))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8));
    uVar2 = 0;
    if (cVar3 != '\0') {
      iVar5 = *(int *)(param_2 + 8);
      bVar1 = iVar5 < 0xc0;
      if ((iVar5 - 0x31U < 9) && (iVar5 != 0x35)) {
        lVar8 = FUN_1416c2e20((longlong *)param_1[0x17],iVar5);
        if (lVar8 == 0) {
          log_InlineLogERROR(&DAT_1416d8328);
          return 0;
        }
        lVar9 = FUN_1416c9120(param_1,0x36);
        if (lVar9 != 0) {
          plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 8) + 0x10))(*(longlong **)(lVar8 + 8),2);
          iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
          if (iVar5 == 2) {
            return 0;
          }
        }
        if (*(int *)(param_2 + 8) == 0x36) {
          for (iVar5 = 0x31; iVar5 < 0x3a; iVar5 = iVar5 + 1) {
            lVar8 = FUN_1416c2e20((longlong *)param_1[0x17],iVar5);
            if ((lVar8 != 0) && (lVar9 = FUN_1416c9120(param_1,iVar5), lVar9 != 0)) {
              plVar10 = (longlong *)(**(code **)(**(longlong **)(lVar8 + 8) + 0x10))(*(longlong **)(lVar8 + 8),2);
              iVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
              if (iVar6 == 2) {
                FUN_1416c9220(param_1,iVar5);
              }
            }
          }
        }
      }
      puVar17 = (undefined8 *)0x0;
      if (*(int *)(param_2 + 8) == 0x35) {
        lVar8 = FUN_1416c9120(param_1,0x34);
        in_stack_fffffffffffffb68 = CONCAT31((int3)(in_stack_fffffffffffffb68 >> 8),lVar8 != 0);
        (**(code **)(*(longlong *)param_1[0x18] + 0x78))
                  ((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),in_stack_fffffffffffffb68);
      }
      lVar8 = FUN_1416c9120(param_1,*(int *)(param_2 + 8));
      if (lVar8 == 0) {
        if (!bVar1) {
          iVar5 = *(int *)(param_2 + 8);
          plVar10 = param_1;
          cVar3 = FUN_1416c39d0(param_1,iVar5);
          if ((cVar3 != '\0') && (cVar3 = FUN_1416c4a50((longlong)plVar10,iVar5), cVar3 == '\0')) {
            return 0;
          }
        }
        uVar2 = *(undefined1 *)((longlong)param_1 + 0xcc);
        local_res20 = (undefined8 *)FUN_1416b6a60(0x30);
        puVar13 = puVar17;
        if (local_res20 != (undefined8 *)0x0) {
          puVar13 = FUN_1416b6b80(local_res20,uVar2);
        }
        if (puVar13 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_1416d8328);
          uVar2 = 0;
        }
        else {
          plVar10 = (longlong *)InstanceGet();
          lVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,"cq_status");
          if (lVar8 == 0) {
            log_InlineLogERROR(&DAT_1416d8328);
            uVar2 = 0;
          }
          else {
            bVar4 = FUN_1416b6760((longlong)puVar13,lVar8);
            if (bVar4) {
              FUN_1416b67a0((longlong)puVar13,1,(int)param_1[8],'\0');
              FUN_1416b67a0((longlong)puVar13,2,*(undefined4 *)(param_2 + 8),'\0');
              FUN_1416b67a0((longlong)puVar13,3,*(undefined4 *)(param_2 + 0xc),'\0');
              FUN_1416b67a0((longlong)puVar13,4,(uint)*(byte *)(param_2 + 0x10),'\0');
              FUN_1416b67a0((longlong)puVar13,5,(uint)*(byte *)(param_2 + 0x11),'\0');
              FUN_1416b67a0((longlong)puVar13,6,*(undefined4 *)(param_2 + 0x14),'\0');
              FUN_1416b67a0((longlong)puVar13,7,*(undefined4 *)(param_2 + 0x18),'\0');
              FUN_1416b67a0((longlong)puVar13,8,*(undefined4 *)(param_2 + 0x1c),'\0');
              FUN_1416b67a0((longlong)puVar13,9,*(undefined4 *)(param_2 + 0x24),'\0');
              *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(param_2 + 0x20);
              if (*(char *)(param_2 + 0x20) == '\x01') {
                FUN_1416b69a0((longlong)puVar13);
              }
              local_478[0] = *(int *)(param_2 + 8);
              local_470 = puVar13;
              FUN_1416c7c70(param_1,local_460,local_478);
              *(int *)((longlong)puVar13 + 0xc) = *(int *)(param_2 + 0x1c);
              uVar7 = tq::TimeGet(0);
              *(uint *)(puVar13 + 2) = uVar7 / 1000;
              if (bVar1) {
                (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),1);
              }
              if ((*(int *)(param_2 + 8) - 0x31U < 9) && (*(int *)(param_2 + 8) != 0x35)) {
                puVar14 = operator_new(8);
                puVar16 = puVar17;
                if (puVar14 != (undefined8 *)0x0) {
                  *(undefined4 *)puVar14 = 0xffffffff;
                  *(undefined4 *)((longlong)puVar14 + 4) = 0;
                  puVar16 = puVar14;
                }
                if (puVar16 == (undefined8 *)0x0) {
                  return 0;
                }
                *(undefined4 *)puVar16 = *(undefined4 *)(param_2 + 8);
                local_res20 = puVar16;
                uVar11 = FUN_1416c4b10((longlong)param_1,*(int *)(param_2 + 8));
                *(int *)((longlong)puVar16 + 4) = (int)uVar11;
                FUN_1416c82b0(param_1 + 9,(undefined8 *)local_478,(longlong *)&local_res20);
                iVar5 = *(int *)(param_2 + 8);
                if (((iVar5 == 0x34) || (iVar5 == 0x31)) || (iVar5 == 0x32)) {
                  uVar7 = tq::TimeGet(0);
                  local_res20 = operator_new(0x10);
                  if (local_res20 != (undefined8 *)0x0) {
                    *(undefined4 *)local_res20 = 0xffffffff;
                    *(undefined4 *)((longlong)local_res20 + 4) = 0;
                    *(undefined4 *)(local_res20 + 1) = 0;
                    *(undefined4 *)((longlong)local_res20 + 0xc) = 0;
                    puVar17 = local_res20;
                  }
                  if (puVar17 == (undefined8 *)0x0) {
                    return 0;
                  }
                  *(undefined4 *)puVar17 = *(undefined4 *)(param_2 + 8);
                  *(undefined4 *)((longlong)puVar17 + 4) = *(undefined4 *)(param_2 + 0xc);
                  *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(param_2 + 0x1c);
                  *(uint *)((longlong)puVar17 + 0xc) = uVar7 / 1000;
                  local_480 = puVar17;
                  FUN_1416cb6b0(param_1 + 0x11,&local_480);
                }
                (**(code **)(*(longlong *)param_1[0x18] + 0x40))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),0);
              }
              if (*(int *)(param_2 + 8) == 0x34) {
                in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffff00;
                (**(code **)(*(longlong *)param_1[0x18] + 0x78))
                          ((longlong *)param_1[0x18],(int)param_1[8],0x34,*(undefined4 *)(param_2 + 0xc),in_stack_fffffffffffffb68);
              }
              if (bVar1) {
                iVar5 = *(int *)(param_2 + 8);
                if (iVar5 == 0x1c) {
                  (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x11,(longlong)*(int *)(param_2 + 0x1c));
                }
                else if (iVar5 == 0x1b) {
                  (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x14,(longlong)*(int *)(param_2 + 0x1c));
                }
                else if (iVar5 == 0x57) {
                  (**(code **)(*(longlong *)param_1[0x18] + 0x28))
                            ((longlong *)param_1[0x18],(int)param_1[8],0x30,((longlong)*(int *)(param_2 + 0xc) << 0x20) + (ulonglong)*(byte *)(param_2 + 0x11));
                }
                else if (iVar5 == 0x76) {
                  (**(code **)(*(longlong *)param_1[0x18] + 0x28))
                            ((longlong *)param_1[0x18],(int)param_1[8],0x37,((ulonglong)*(uint *)(param_2 + 0x24) << 0x20) + (longlong)*(int *)(param_2 + 0x1c))
                  ;
                }
                else if (iVar5 == 0x95) {
                  in_stack_fffffffffffffb68 = *(uint *)(param_2 + 0x1c);
                  (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0x49,0,in_stack_fffffffffffffb68,0);
                }
                else if (iVar5 == 0xa0) {
                  in_stack_fffffffffffffb68 = FUN_1416b2200((int *)((longlong)puVar13 + 0xc));
                  (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0x4b,0,in_stack_fffffffffffffb68,0);
                }
              }
              else if (999 < *(int *)(param_2 + 8)) {
                FUN_1416cf880(local_448);
                in_stack_fffffffffffffb68 = *(uint *)(param_2 + 0xc);
                uVar15 = FUN_1416cf900(local_448,(int)param_1[8],1,*(undefined4 *)(param_2 + 8),in_stack_fffffffffffffb68);
                if ((char)uVar15 != '\0') {
                  (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],(int)param_1[8],local_448,1);
                }
                iVar5 = *(int *)(param_2 + 8);
                plVar10 = param_1;
                cVar3 = FUN_1416c39d0(param_1,iVar5);
                if (cVar3 != '\0') {
                  if (param_3 == '\0') {
                    iVar5 = FUN_1416c3a00(plVar10,iVar5);
                    (**(code **)(*(longlong *)param_1[0x18] + 0xa8))((longlong *)param_1[0x18],(int)param_1[8],iVar5);
                  }
                  FUN_1416cb140(param_1,*(int *)(param_2 + 8));
                }
                FUN_1416cf8d0((undefined8 *)local_448);
              }
              if (*(int *)(param_2 + 8) == 0x2f) {
                (**(code **)(*(longlong *)param_1[0x18] + 200))((longlong *)param_1[0x18],(int)param_1[8]);
              }
              if (*(int *)(param_2 + 8) == 0x92) {
                (**(code **)(*(longlong *)param_1[0x18] + 0x78))
                          ((longlong *)param_1[0x18],(int)param_1[8],0x92,*(undefined4 *)(param_2 + 0xc),in_stack_fffffffffffffb68 & 0xffffff00);
              }
              uVar2 = 1;
            }
            else {
              (**(code **)*puVar13)(puVar13,1);
              uVar2 = 0;
            }
          }
        }
      }
      else {
        cVar3 = '\0';
        iVar5 = *(int *)(param_2 + 8);
        if (((iVar5 == 0x31) || (iVar5 == 0x32)) || (iVar5 == 0x34)) {
          cVar3 = FUN_1416cc580((longlong)param_1,lVar8,param_2);
        }
        else {
          FUN_1416b6e50(lVar8,*(int *)(param_2 + 0xc),*(int *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x11));
          FUN_1416b67a0(lVar8,1,(int)param_1[8],'\0');
          FUN_1416b67a0(lVar8,4,(uint)*(byte *)(param_2 + 0x10),'\0');
          FUN_1416b67a0(lVar8,6,*(undefined4 *)(param_2 + 0x14),'\0');
          uVar11 = FUN_1416b6770(lVar8,7);
          _Var12 = _time64((__time64_t *)0x0);
          if (((int)_Var12 < (int)uVar11) && (0 < *(int *)(param_2 + 0x1c))) {
            FUN_1416b67a0(lVar8,7,*(int *)(param_2 + 0x1c) + (int)uVar11,'\0');
          }
          else {
            FUN_1416b67a0(lVar8,7,*(undefined4 *)(param_2 + 0x18),'\0');
          }
          FUN_1416b67a0(lVar8,9,*(undefined4 *)(param_2 + 0x24),'\0');
        }
        if (*(char *)(lVar8 + 8) == '\x01') {
          if (*(char *)(param_2 + 0x20) == '\0') {
            FUN_1416b6940(lVar8);
          }
          else if (*(char *)(param_2 + 0x20) == '\x01') {
            FUN_1416b6c40(lVar8);
          }
        }
        else if ((*(char *)(lVar8 + 8) == '\0') && (*(char *)(param_2 + 0x20) == '\x01')) {
          FUN_1416b69a0(lVar8);
        }
        *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(param_2 + 0x20);
        iVar5 = *(int *)(param_2 + 8);
        if ((iVar5 - 0x31U < 9) && (iVar5 != 0x35)) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],iVar5,1);
          (**(code **)(*(longlong *)param_1[0x18] + 0x40))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),0);
        }
        if (bVar1) {
          iVar5 = *(int *)(param_2 + 8);
          if (iVar5 == 0x1c) {
            iVar5 = FUN_1416b2200((int *)(lVar8 + 0xc));
            (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x11,(longlong)iVar5);
          }
          else if (iVar5 == 0x1b) {
            iVar5 = FUN_1416b2200((int *)(lVar8 + 0xc));
            (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x14,(longlong)iVar5);
          }
          else if (iVar5 == 0x57) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x28))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x30,((longlong)*(int *)(param_2 + 0xc) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
          }
          else if ((((((iVar5 == 0x59) || (iVar5 == 0x6d)) || (iVar5 == 0x7d)) ||
                    (((iVar5 == 0x85 || (iVar5 == 0x86)) || ((iVar5 == 0x87 || ((iVar5 == 0x88 || (iVar5 == 0x89)))))))) || (iVar5 == 0x8a)) ||
                  (((((iVar5 == 0x8b || (iVar5 == 0x8c)) || (iVar5 == 0x8d)) || ((iVar5 == 0x8e || (iVar5 == 0x8f)))) ||
                   ((iVar5 == 0x90 || ((iVar5 == 0x9e || (iVar5 == 0x94)))))))) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],iVar5,1);
          }
          else if (iVar5 == 0x76) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x28))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x37,((ulonglong)*(uint *)(param_2 + 0x24) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
          }
          else if (iVar5 == 0x95) {
            in_stack_fffffffffffffb68 = FUN_1416b2200((int *)(lVar8 + 0xc));
            (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0x49,0,in_stack_fffffffffffffb68,0);
          }
          else if (iVar5 == 0xa0) {
            in_stack_fffffffffffffb68 = FUN_1416b2200((int *)(lVar8 + 0xc));
            (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0x4b,0,in_stack_fffffffffffffb68,0);
          }
        }
        if (((cVar3 != '\0') && (*(int *)(param_2 + 8) == 0x34)) && (lVar8 = FUN_1416c9120(param_1,0x2f), lVar8 != 0)) {
          in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffff00;
          (**(code **)(*(longlong *)param_1[0x18] + 0x78))
                    ((longlong *)param_1[0x18],(int)param_1[8],0x34,*(undefined4 *)(param_2 + 0xc),in_stack_fffffffffffffb68);
        }
        if (*(int *)(param_2 + 8) == 0x92) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x78))
                    ((longlong *)param_1[0x18],(int)param_1[8],0x92,*(undefined4 *)(param_2 + 0xc),in_stack_fffffffffffffb68 & 0xffffff00);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




CMsg * FUN_1416cf3a0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1416cf3d0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1416cf3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001416cf3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1416cf3f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001416cf3f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1416cf400(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001416cf407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1416cf410(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1416cf440(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = status::CMsgAction::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1416cf490(undefined8 *param_1)

{
  *param_1 = status::CMsgAction::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1416cf4c0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined4 param_7)

{
  ulong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    **(undefined2 **)(param_1 + 0x408) = 0x28;
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
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    uVar2 = CONCAT71((uint7)(byte)((ushort)param_6 >> 8),1);
  }
  return uVar2;
}




ulonglong FUN_1416cf5a0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,
                       undefined2 param_8,undefined4 param_9)

{
  ulong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    **(undefined2 **)(param_1 + 0x408) = 0x28;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x271a;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 4) = uVar1;
    uVar1 = tq::TimeGet(0);
    *(ulong *)(*(longlong *)(param_1 + 0x408) + 0x14) = uVar1;
    *(int *)(*(longlong *)(param_1 + 0x408) + 8) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_3;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1e) = param_4;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x1a) = param_5;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
    uVar2 = CONCAT71((uint7)(uint3)((uint)param_9 >> 8),1);
  }
  return uVar2;
}




bool FUN_1416cf6a0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x271a;
}




undefined8 * FUN_1416cf6d0(undefined8 *param_1,byte param_2)

{
  *param_1 = status::CMsgAction::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1416cf720(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = status::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1416cf770(undefined8 *param_1)

{
  *param_1 = status::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1416cf7a0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_1416cf7d0(undefined8 param_1,int param_2,longlong *param_3)

{
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1416d8328);
    }
    else {
      (**(code **)(*param_3 + 0x48))(param_3);
    }
  }
  return;
}




undefined8 * FUN_1416cf830(undefined8 *param_1,byte param_2)

{
  *param_1 = status::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1416cf880(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = status::CMsgSuitStatus::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1416cf8d0(undefined8 *param_1)

{
  *param_1 = status::CMsgSuitStatus::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1416cf900(CMsg *param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x816;
    **(undefined2 **)(param_1 + 0x408) = 0x14;
    *(int *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_5;
    uVar1 = CONCAT71((uint7)(uint3)((uint)param_5 >> 8),1);
  }
  return uVar1;
}




bool FUN_1416cf990(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x816;
}




void FUN_1416cf9c0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (param_2 != 0) {
    if (param_3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1416d8328);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x408);
      if (*(short *)(lVar1 + 4) == 1) {
        (**(code **)(*param_3 + 8))(param_3,param_2,*(undefined4 *)(lVar1 + 0xc),0,0x15180,0,0,0x15180,0,2,0);
      }
      else if (*(short *)(lVar1 + 4) == 2) {
        cVar2 = (**(code **)(*param_3 + 0x60))(param_3,param_2,*(undefined4 *)(lVar1 + 0xc));
        if (cVar2 != '\0') {
          (**(code **)(*param_3 + 0x10))(param_3,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc));
        }
      }
    }
  }
  return;
}




undefined8 * FUN_1416cfac0(undefined8 *param_1,byte param_2)

{
  *param_1 = status::CMsgSuitStatus::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1416e78e0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1416e78e0);
    local_res18[0] = _decode_pointer(DAT_1416e78d8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1416e78e0 = _encode_pointer(local_res10);
    DAT_1416e78d8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_1416cfcf4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_1416e72e0) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




bool FUN_1416cfdd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1416e78d8 = _encode_pointer(puVar1);
  DAT_1416e78e0 = DAT_1416e78d8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1416d04d0();
    atexit(FUN_1416d0508);
    atexit((_func_5014 *)&LAB_1416d04c4);
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
    if (DAT_1416e7334 < 1) {
      return 0;
    }
    DAT_1416e7334 = DAT_1416e7334 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1416e78c8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1416e78c8;
        pvVar3 = DAT_1416e78c8;
      }
      DAT_1416e78c8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1416cfeae;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1416cfeae:
    if (DAT_1416e78c0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1416e78e0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1416e78d8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1416e78e0);
            plVar12 = (longlong *)_decode_pointer(DAT_1416e78d8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1416e78d8 = _encoded_null();
        DAT_1416e78e0 = DAT_1416e78d8;
      }
      DAT_1416e78c0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1416e78c8 = (void *)0x0;
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
      bVar13 = DAT_1416e78c8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1416e78c8;
        pvVar3 = DAT_1416e78c8;
      }
      DAT_1416e78c8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1416cffd7;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1416cffd7:
    if (DAT_1416e78c0 == 0) {
      DAT_1416e78c0 = 1;
      iVar4 = _initterm_e(&DAT_1416d8228,&DAT_1416d8238);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1416d8218,&DAT_1416d8220);
      DAT_1416e78c0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1416e78c8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1416e78d0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1416e78d0), BVar5 != 0)) {
      (*DAT_1416e78d0)(param_1,2,param_3);
    }
    DAT_1416e7334 = DAT_1416e7334 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001416d0150) */
/* WARNING: Removing unreachable block (ram,0x0001416d00e7) */
/* WARNING: Removing unreachable block (ram,0x0001416d018b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1416e7334 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1416e72f0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1416e72f0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1416b13e0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1416b13e0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1416e72f0 = 0xffffffff;
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




undefined8 FUN_1416d0208(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1416e73e0);
  local_30 = DAT_1416e74d8;
  local_38 = RtlLookupFunctionEntry(DAT_1416e74d8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_1416e7478 = local_res8;
    DAT_1416e74d8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1416e73e0,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1416e7350 = DAT_1416e74d8;
  _DAT_1416e7460 = local_res8[0];
  _DAT_1416e7340 = 0xc0000409;
  _DAT_1416e7344 = 1;
  local_20 = DAT_1416e72e0;
  local_18 = DAT_1416e72e8;
  DAT_1416e73d8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1416dbbe0);
  if (DAT_1416e73d8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_1416d04d0(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416dc408; puVar1 < &DAT_1416dc408; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1416d0508(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1416dc418; puVar1 < &DAT_1416dc418; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1416b0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1416b0000);
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
  if (DAT_1416e72e0 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1416e72e0 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1416e72e0 == 0x2b992ddfa232) {
      DAT_1416e72e0 = 0x2b992ddfa233;
    }
  }
  DAT_1416e72e8 = ~DAT_1416e72e0;
  return;
}




void Unwind_1416d0760(undefined8 param_1,longlong param_2)

{
  FUN_1416b1030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0780(undefined8 param_1,longlong param_2)

{
  FUN_1416cf770((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1416d07a0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




undefined * Catch_1416d07c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1416b1131;
}




undefined8 Catch_1416d0800(void)

{
  log_InlineLogCATCH_ERROR("status module ontimer  @%s,%d");
  return 0x1416b13d0;
}




void Unwind_1416d0840(undefined8 param_1,longlong param_2)

{
  FUN_1416b1030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0860(undefined8 param_1,longlong param_2)

{
  FUN_1416cf770((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1416d0880(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_1416d08a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_1416d08c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1416b14f1;
}




undefined * Catch_1416d0900(void)

{
  log_InlineLogCATCH_ERROR("status::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_1416b1562;
}




void Unwind_1416d0950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d09b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d09d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d09f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0a30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0a50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0a70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0a90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0ab0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0ad0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0af0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0b10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0b30(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0b50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0b70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0b90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0bb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0bd0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0bf0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0c10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0c30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0c50(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0c70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0c90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0cb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0cd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d0cf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1416d0d10(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d0d30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0d50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0d70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0d90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d0db0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0df0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0e10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0e30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0e50(void)

{
  DAT_1416e7308 = DAT_1416e7308 & 0xfffffffe;
  return;
}




void Unwind_1416d0e70(void)

{
  DAT_1416e7308 = DAT_1416e7308 & 0xfffffffe;
  return;
}




void Unwind_1416d0e90(void)

{
  DAT_1416e7308 = DAT_1416e7308 & 0xfffffffe;
  return;
}




void Unwind_1416d0eb0(void)

{
  DAT_1416e7308 = DAT_1416e7308 & 0xfffffffe;
  return;
}




void Unwind_1416d0ed0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0ef0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0f10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d0f30(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d0f50(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0f70(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d0f90(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d0fb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d0fe0(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d1000(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d1030(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1050(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1070(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1090(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d10b0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d10d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d10f0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1110(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1130(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1150(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1170(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1190(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d11b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d11d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d11f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1210(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1230(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d1270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1290(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d12b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d12d0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d12f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1310(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1330(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1350(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d1370(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d1390(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d13b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d13d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d13f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1416d1410(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1430(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1450(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1470(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1490(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d14b0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d14d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d14f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1510(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1530(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1416d1550(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d1580(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d15a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_1416d15c0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d15e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1600(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1620(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1640(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1660(undefined8 param_1,longlong param_2)

{
  FUN_1416b43a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1680(undefined8 param_1,longlong param_2)

{
  FUN_1416b43a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d16a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d16c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d16e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1700(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1720(undefined8 param_1,longlong param_2)

{
  FUN_1416b4e90(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1740(undefined8 param_1,longlong param_2)

{
  FUN_1416b43a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1760(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1780(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d17a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d17c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d17e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b4f70(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_1416d1800(undefined8 param_1,longlong param_2)

{
  FUN_1416b4e90(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_1416d1820(undefined8 param_1,longlong param_2)

{
  FUN_1416b43a0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1416d1840(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1416d1860(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1416d1880(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1416d18a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1416d18c0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d18f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1910(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1930(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1950(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1970(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1990(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d19c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d19e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1a00(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1a20(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1a40(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1a60(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1a90(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1ab0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1ad0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1af0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1b10(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1b30(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1b60(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1b80(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1ba0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1bc0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1be0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d1c00(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d1c20(undefined8 param_1,longlong param_2)

{
  FUN_1416b2950(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1c40(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1c60(undefined8 param_1,longlong param_2)

{
  FUN_1416b3330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1c80(undefined8 param_1,longlong param_2)

{
  FUN_1416b36f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1ca0(undefined8 param_1,longlong param_2)

{
  FUN_1416b43a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416b4e90(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1ce0(undefined8 param_1,longlong param_2)

{
  FUN_1416b4f70(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d1d00(void)

{
  DAT_1416e7308 = DAT_1416e7308 & 0xfffffffe;
  return;
}




void Unwind_1416d1d20(undefined8 param_1,longlong param_2)

{
  FUN_1416b26c0(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1416d1d40(undefined8 param_1,longlong param_2)

{
  FUN_1416b4f70(*(longlong **)(param_2 + 0x60));
  return;
}




undefined * Catch_1416d1d60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416b673a;
}




void Unwind_1416d1da0(void)

{
  DAT_1416e7318 = DAT_1416e7318 & 0xfffffffe;
  return;
}




void Unwind_1416d1dc0(void)

{
  DAT_1416e7318 = DAT_1416e7318 & 0xfffffffe;
  return;
}




void Unwind_1416d1de0(void)

{
  DAT_1416e7318 = DAT_1416e7318 & 0xfffffffe;
  return;
}




void Unwind_1416d1e00(void)

{
  DAT_1416e7318 = DAT_1416e7318 & 0xfffffffe;
  return;
}




void Unwind_1416d1e20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1e40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1e60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1416d1e80(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d1ea0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1ec0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1ee0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1f00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1f20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1f40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1f60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1f80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1fa0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1fc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d1fe0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2000(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2020(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2040(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2060(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2080(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d20a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d20c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d20e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2100(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d2120(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d2150(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d2170(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d21a0(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d21c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d21f0(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d2210(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d2240(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d2270(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d22a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d22d0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d22f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2310(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2330(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2350(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2370(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2390(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d23b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d23d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d23f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2410(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2430(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2450(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2470(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2490(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d24b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d24d0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d24f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d2570(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2590(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d25b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d25d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d25f0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2610(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2630(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2650(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2670(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2690(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d26b0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d26d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d26f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2710(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2730(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2750(undefined8 param_1,longlong param_2)

{
  FUN_1416b9710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2770(undefined8 param_1,longlong param_2)

{
  FUN_1416b9710(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2790(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d27b0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d27d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d27f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2810(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2830(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2850(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2870(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2890(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d28b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d28d0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d28f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2910(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2930(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d2970(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2990(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d29b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d29d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d29f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2a10(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d2a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2a50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d2a70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2a90(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d2ab0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2ad0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2af0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2b10(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2b30(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2b50(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2b70(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2b90(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2bb0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2bd0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2bf0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2c10(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2c30(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d2c50(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2c70(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2c90(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2cb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2cd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2cf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d2d10(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2d30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2d50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2d70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d2d90(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2db0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d2dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2df0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d2e10(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d2e30(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2e50(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2e70(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2e90(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2eb0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2ed0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2ef0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2f10(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2f30(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2f50(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2f70(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2f90(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2fb0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2fd0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d2ff0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3010(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3030(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3050(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3070(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3090(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d30b0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d30d0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d30f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3110(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3130(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3150(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3170(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3190(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d31b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d31d0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d31f0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3210(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3230(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3250(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3270(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3290(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1416d32b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d32e0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_1416d3300(void)

{
  log_InlineLogCATCH_ERROR("CStatusMgr::OnRoleLogout Role[%u] @%s,%d");
  return 0x1416bdeff;
}




void Unwind_1416d3340(undefined8 param_1,longlong param_2)

{
  FUN_1416b26c0(*(void **)(param_2 + 0x38));
  return;
}




undefined8 Catch_1416d3360(void)

{
  log_InlineLogCATCH_ERROR("CStatusMgr::ClearFlowerSuitStatus @%s,%d");
  return 0x1416bf5c2;
}




void Unwind_1416d33a0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d33c0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d33e0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3400(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3420(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3440(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3460(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3480(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d34a0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d34c0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d34e0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3500(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3520(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3540(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3560(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3580(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d35a0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d35c0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d35e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3600(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3620(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3640(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3660(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3680(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d36a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d36c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d36e0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3700(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3720(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3740(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3760(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3780(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d37a0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d37c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d37e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3800(undefined8 param_1,longlong param_2)

{
  FUN_1416bd2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3820(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3840(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3860(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3880(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d38a0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d38c0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d38e0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3900(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3920(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3940(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3960(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3980(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d39a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d39c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d39e0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3a00(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3a20(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3a40(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3a60(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3a80(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3aa0(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3ac0(undefined8 param_1,longlong param_2)

{
  FUN_1416c0770(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3ae0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3b00(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3b20(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3b40(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3b60(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3b80(undefined8 param_1,longlong param_2)

{
  FUN_1416c07a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3ba0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3bc0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3be0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3c00(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3c20(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3c40(undefined8 param_1,longlong param_2)

{
  FUN_1416c0930((longlong *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Unwind_1416d3c60(undefined8 param_1,longlong param_2)

{
  FUN_1416c0960((longlong *)(*(longlong *)(param_2 + 0x90) + 0x50));
  return;
}




void Unwind_1416d3c80(undefined8 param_1,longlong param_2)

{
  FUN_1416c07a0(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3ca0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd310(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3ce0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3d00(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3d20(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1416d3d40(undefined8 param_1,longlong param_2)

{
  FUN_1416c0770(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3d60(undefined8 param_1,longlong param_2)

{
  FUN_1416bd2f0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3d80(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3da0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3dc0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3de0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1416d3e00(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3e20(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3e40(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3e60(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3e80(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3ea0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3ec0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3ee0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8b80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3f00(undefined8 param_1,longlong param_2)

{
  FUN_1416b9730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3f20(undefined8 param_1,longlong param_2)

{
  FUN_1416ba340(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3f40(undefined8 param_1,longlong param_2)

{
  FUN_1416baf20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3f60(undefined8 param_1,longlong param_2)

{
  FUN_1416bd2f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3f80(undefined8 param_1,longlong param_2)

{
  FUN_1416c0770(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3fa0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d3fc0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8c10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d3fe0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4000(undefined8 param_1,longlong param_2)

{
  FUN_1416ba360(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4020(undefined8 param_1,longlong param_2)

{
  FUN_1416baf40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4040(undefined8 param_1,longlong param_2)

{
  FUN_1416bd310(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4060(undefined8 param_1,longlong param_2)

{
  FUN_1416c07a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4080(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d40a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d40c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d40e0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4100(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4120(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4140(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4160(undefined8 param_1,longlong param_2)

{
  FUN_1416c0930((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1416d4180(undefined8 param_1,longlong param_2)

{
  FUN_1416c0960((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_1416d41a0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d41c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d41e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4200(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4220(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4240(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4260(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4280(undefined8 param_1,longlong param_2)

{
  FUN_1416c0d20((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1416d42a0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d42c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d42e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4300(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4320(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4340(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4360(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4380(undefined8 param_1,longlong param_2)

{
  FUN_1416c0740((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d43a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d43c0(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d43e0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4400(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4420(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4440(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4460(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4480(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d44a0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d44c0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d44e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4500(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4520(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4540(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4560(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4580(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d45a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d45c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d45e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4600(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4620(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4640(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4660(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4680(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d46a0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d46c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_1416d46e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9710((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_1416d4700(undefined8 param_1,longlong param_2)

{
  FUN_1416bae40((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_1416d4720(undefined8 param_1,longlong param_2)

{
  FUN_1416b9710((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_1416d4740(undefined8 param_1,longlong param_2)

{
  FUN_1416b8e00((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_1416d4760(undefined8 param_1,longlong param_2)

{
  FUN_1416c0290((longlong *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4780(undefined8 param_1,longlong param_2)

{
  FUN_1416bd350((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d47a0(undefined8 param_1,longlong param_2)

{
  FUN_1416baf80((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d47c0(undefined8 param_1,longlong param_2)

{
  FUN_1416ba3a0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d47e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9790((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4800(undefined8 param_1,longlong param_2)

{
  FUN_1416b8df0((undefined8 *)(param_2 + 0xf0));
  return;
}




void Unwind_1416d4820(undefined8 param_1,longlong param_2)

{
  FUN_1416c07d0((longlong *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4840(undefined8 param_1,longlong param_2)

{
  FUN_1416bd330((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4860(undefined8 param_1,longlong param_2)

{
  FUN_1416baf60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d4880(undefined8 param_1,longlong param_2)

{
  FUN_1416ba380((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d48a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b9770((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d48c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b8d60((undefined8 *)(param_2 + 0x80));
  return;
}




void Unwind_1416d48e0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




undefined * Catch_1416d4900(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416c1d2c;
}




void Unwind_1416d4940(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_1416d4960(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x1416c1eb3;
}




undefined8 Catch_1416d49a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x1416c1f7d;
}




void Unwind_1416d49e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4a00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d4a20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1416d4a40(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d4a60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4aa0(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4ac0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4ae0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4b00(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4b20(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4b40(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4b60(undefined8 param_1,longlong param_2)

{
  FUN_1416c26e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4b80(undefined8 param_1,longlong param_2)

{
  FUN_1416c26e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4ba0(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1416d4bc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d4bf0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d4c10(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4c30(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4c50(undefined8 param_1,longlong param_2)

{
  FUN_1416c26e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4c70(undefined8 param_1,longlong param_2)

{
  FUN_1416c2be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4c90(undefined8 param_1,longlong param_2)

{
  FUN_1416c2be0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4cb0(undefined8 param_1,longlong param_2)

{
  FUN_1416c26e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4cd0(undefined8 param_1,longlong param_2)

{
  FUN_1416c2550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4cf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




undefined * Catch_1416d4d10(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416c37b8;
}




undefined8 Catch_1416d4d50(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1416c385e;
}




void Unwind_1416d4d90(undefined8 param_1,longlong param_2)

{
  FUN_1416b6ac0(*(void **)(param_2 + 0x48));
  return;
}




void Unwind_1416d4db0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d4df0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1416d4e10(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1416d4e30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4e50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4e70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4e90(void)

{
  DAT_1416e7330 = DAT_1416e7330 & 0xfffffffe;
  return;
}




void Unwind_1416d4eb0(void)

{
  DAT_1416e7330 = DAT_1416e7330 & 0xfffffffe;
  return;
}




void Unwind_1416d4ed0(void)

{
  DAT_1416e7330 = DAT_1416e7330 & 0xfffffffe;
  return;
}




void Unwind_1416d4ef0(void)

{
  DAT_1416e7330 = DAT_1416e7330 & 0xfffffffe;
  return;
}




void Unwind_1416d4f10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4f30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4f50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1416d4f70(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4f90(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d4fb0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4fd0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d4ff0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5010(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d5030(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d5060(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5080(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d50a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d50d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d5100(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d5130(void)

{
  FUN_1416b16e0();
  return;
}




void Catch_1416d5150(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1416d5180(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d51a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d51c0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d51e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5200(undefined8 param_1,longlong param_2)

{
  FUN_1416c5650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5220(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5240(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5260(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5280(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d52a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d52c0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d52e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d5320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d5340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d5360(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d5380(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d53a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d53c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d53e0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5400(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5420(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5440(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5460(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5480(undefined8 param_1,longlong param_2)

{
  FUN_1416c5650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d54a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d54c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d54e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5500(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5520(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5540(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d5580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d55a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d55c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d55e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1416d5600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d5620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d5640(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1416d5660(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5680(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d56a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d56c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d56e0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5700(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5720(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5740(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5760(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d5780(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d57a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d57c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d57e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d5800(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d5820(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1416d5840(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d5860(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1416d5880(undefined8 param_1,longlong param_2)

{
  FUN_1416b1740((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1416d58a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d58c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d58e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5900(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5920(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5940(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5960(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5980(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d59a0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d59c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d59e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5a00(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5a20(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5a40(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5a60(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5a80(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5aa0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5ac0(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1416d5ae0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1416d5b10(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined * Catch_1416d5b30(void)

{
  log_InlineLogCATCH_ERROR("CStatus::QueryStatusByType.(UserID = %u) @%s,%d");
  return &DAT_1416c9323;
}




undefined * Catch_1416d5b70(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1416c964a;
}




undefined * Catch_1416d5bb0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1416c9b24;
}




undefined * Catch_1416d5bf0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1416c9d96;
}




void Unwind_1416d5c30(undefined8 param_1,longlong param_2)

{
  FUN_1416b6ac0(*(void **)(param_2 + 0x90));
  return;
}




undefined8 Catch_1416d5c50(void)

{
  log_InlineLogCATCH_ERROR("CUserStatus::AppendOSUserStatus catch user[%d] attach statu[%d] @%s,%d");
  return 0x1416ca9a7;
}




void Unwind_1416d5ca0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5ce0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5d00(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5d20(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5d40(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5d60(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d5d80(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5da0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5dc0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5de0(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5e00(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5e20(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_1416d5e40(undefined8 param_1,longlong param_2)

{
  FUN_1416b6770(*(longlong *)(param_2 + 0x4a8),2);
  log_InlineLogCATCH_ERROR("Erase Status(%d) User(%d) Catch @%s,%d");
  return 0x1416caefc;
}




void Unwind_1416d5ea0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d5ec0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1416d5ee0(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5f00(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5f20(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5f40(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5f60(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5f80(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5fa0(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5fc0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d5fe0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6000(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6020(undefined8 param_1,longlong param_2)

{
  FUN_1416cb650(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6040(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6060(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6080(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d60a0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d60c0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d60e0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb680(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6100(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6120(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6140(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6160(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6180(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d61a0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb760(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1416d61c0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb790((longlong *)(*(longlong *)(param_2 + 0x80) + 0x48));
  return;
}




void Unwind_1416d61e0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5ed0((undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x88));
  return;
}




void Unwind_1416d6210(undefined8 param_1,longlong param_2)

{
  FUN_1416c5650(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d6230(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d6250(undefined8 param_1,longlong param_2)

{
  FUN_1416cb680(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_1416d6270(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a20(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d6290(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d62b0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d62d0(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d62f0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_1416d6310(undefined8 param_1,longlong param_2)

{
  FUN_1416cb650(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_1416d6330(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a00(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416d6350(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416d6370(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416d6390(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416d63b0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_1416d63d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b6ac0(*(void **)(param_2 + 0x30));
  return;
}




undefined * Catch_1416d63f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1416cbadb;
}




undefined8 Catch_1416d6430(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1416cbae9;
}




undefined8 Catch_1416d6470(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1416cbb13;
}




undefined8 Catch_1416d64b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1416cbb57;
}




void Unwind_1416d64f0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6520(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416d6540(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416d6560(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416d6580(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1416d65a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_1416d65c0(void)

{
  log_InlineLogCATCH_ERROR("CStatus::UpdateStatusRemainTime.(UserID = %u) @%s,%d");
  return &DAT_1416cbef9;
}




void Unwind_1416d6610(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6640(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d6660(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d6680(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d66a0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf490((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_1416d66c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1416d66e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_1416d6700(void)

{
  log_InlineLogCATCH_ERROR("CStatus::OnTimer.(UserID = %u) @%s,%d");
  return 0x1416cc56b;
}




void Unwind_1416d6750(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_1416d6770(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d67a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d67c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d67e0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d6800(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d6820(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1416d6840(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6870(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6890(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d68b0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d68d0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d68f0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6910(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6940(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6960(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6980(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d69a0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d69c0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d69e0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6a10(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6a30(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6a50(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6a70(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6a90(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6ab0(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6ae0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6b00(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6b20(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6b40(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6b60(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6b80(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6bb0(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6bd0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6bf0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6c10(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6c30(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6c50(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6c80(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6ca0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6cc0(undefined8 param_1,longlong param_2)

{
  FUN_1416b3610((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6ce0(undefined8 param_1,longlong param_2)

{
  FUN_1416b2e00((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6d00(undefined8 param_1,longlong param_2)

{
  FUN_1416b29d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1416d6d20(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6d40(undefined8 param_1,longlong param_2)

{
  FUN_1416c4dc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6d60(undefined8 param_1,longlong param_2)

{
  FUN_1416c5670(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6d80(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6da0(undefined8 param_1,longlong param_2)

{
  FUN_1416c6730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6dc0(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6de0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb650(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6e00(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6e20(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6e40(undefined8 param_1,longlong param_2)

{
  FUN_1416c5690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6e60(undefined8 param_1,longlong param_2)

{
  FUN_1416c5f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6e80(undefined8 param_1,longlong param_2)

{
  FUN_1416c6750(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6ea0(undefined8 param_1,longlong param_2)

{
  FUN_1416c8a20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6ec0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb680(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1416d6ee0(undefined8 param_1,longlong param_2)

{
  FUN_1416cb760(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_1416d6f00(undefined8 param_1,longlong param_2)

{
  FUN_1416cb790((longlong *)(*(longlong *)(param_2 + 0x70) + 0x48));
  return;
}




void Unwind_1416d6f20(void)

{
  FUN_1416b16e0();
  return;
}




void Unwind_1416d6f40(undefined8 param_1,longlong param_2)

{
  FUN_1416c4e60(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_1416d6f60(undefined8 param_1,longlong param_2)

{
  FUN_1416c5650(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_1416d6f80(undefined8 param_1,longlong param_2)

{
  FUN_1416c5ed0((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x88));
  return;
}




void Unwind_1416d6fa0(void)

{
  DAT_1416e7330 = DAT_1416e7330 & 0xfffffffe;
  return;
}




void Unwind_1416d6fc0(undefined8 param_1,longlong param_2)

{
  FUN_1416c4990(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_1416d6fe0(undefined8 param_1,longlong param_2)

{
  FUN_1416b6ac0(*(void **)(param_2 + 0x4d8));
  return;
}




void Unwind_1416d7000(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x4d8));
  return;
}




void Unwind_1416d7020(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x4d8));
  return;
}




void Unwind_1416d7040(undefined8 param_1,longlong param_2)

{
  FUN_1416cf8d0((undefined8 *)(param_2 + 0x70));
  return;
}




undefined * Catch_1416d7060(void)

{
  log_InlineLogCATCH_ERROR("user[%d] attach statu[%d] @%s,%d");
  return &DAT_1416cf383;
}




void Unwind_1416d70b0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d70d0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1416d70f0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d7110(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d7130(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1416d7150(void)

{
  log_InlineLogCATCH_ERROR("Status::CMsgLogIn::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x1416cf825;
}




void Unwind_1416d71a0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d71c0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1416d71e0(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1416d7200(void)

{
  log_InlineLogCATCH_ERROR("Status::CMsgSuitStatus::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x1416cfaa9;
}




void Unwind_1416d7250(undefined8 param_1,longlong param_2)

{
  FUN_1416cf3d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1416d7268(void)

{
  _unlock(8);
  return;
}




void FUN_1416d7281(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416d72b1(void)

{
  _DAT_1416e72f0 = 0xffffffff;
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




bool FUN_1416d7340(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1538 failed=0 total=1619 */
