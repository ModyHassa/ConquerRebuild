/* Decompiled by Ghidra 12.1.4 | program: CrossStatus.dll
   image base: 140c40000 | functions: 1140 */


void FUN_140c41000(void)

{
  log_InlineLogERROR(&DAT_140c5c2b8);
  return;
}




void FUN_140c41030(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_140c41040(void)

{
  return 0;
}




undefined8 FUN_140c41050(void)

{
  return 0;
}




undefined8 FUN_140c41060(void)

{
  return 0;
}




undefined8 FUN_140c41070(void)

{
  return 0;
}




undefined8 * FUN_140c41080(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140c410c0(undefined8 *param_1)

{
  *param_1 = crossstatus::CModule::vftable;
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_140c410f0(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




undefined8 FUN_140c41110(longlong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = FUN_140c4b680();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),1000,puVar1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




ulonglong FUN_140c41140(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX_00;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),1000);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  puVar2 = FUN_140c4b680();
  uVar3 = FUN_140c45ff0((longlong)puVar2,lVar1);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_140c5c2b8);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




undefined8 FUN_140c411e0(void)

{
  return 0;
}




void FUN_140c41200(void)

{
  undefined *puVar1;
  
  puVar1 = FUN_140c4b680();
  FUN_140c47ff0((longlong)puVar1);
  return;
}




undefined8 FUN_140c41230(void)

{
  return 1;
}




undefined8 * FUN_140c41240(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = crossstatus::CModule::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}




undefined8 * FUN_140c41280(undefined8 *param_1,byte param_2)

{
  *param_1 = crossstatus::CModule::vftable;
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
                    /* 0x12d0  1  ModuleCreate */
  uVar4 = 0xfffffffffffffffe;
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = gs::IModule::vftable;
    *puVar2 = crossstatus::CModule::vftable;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = param_2;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar3 = FUN_140c4b680();
    lVar1 = *(longlong *)puVar2[1];
    (**(code **)(lVar1 + 0x18))((longlong *)puVar2[1],1000,puVar3,lVar1,uVar4);
  }
  return puVar2;
}




exception * FUN_140c41360(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_140c413a0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000140c413c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c413d0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140c41430(void)

{
  return;
}




exception * FUN_140c414d0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_140c41520(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c41553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_140c41560(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_140c41580(exception *param_1,uint param_2)

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




exception * FUN_140c415e0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_140c41640(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c4167d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c41690(exception *param_1,uint param_2)

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




exception * FUN_140c41700(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_140c41760(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000140c4179d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_140c417b0(exception *param_1,uint param_2)

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




void * FUN_140c41840(void *param_1,uint param_2)

{
  FUN_140c456b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong FUN_140c41880(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c418a2;
  }
  lVar2 = *plVar1;
LAB_140c418a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c418c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c418e2;
  }
  lVar2 = *plVar1;
LAB_140c418e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




int FUN_140c41900(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 4) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_140c41930(int *param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  return CONCAT71((int7)((ulonglong)uVar1 * 0x10624dd3 >> 8),(uint)(param_1[1] + *param_1) <= uVar1 / 1000) & 0xffffffff;
}




void FUN_140c41a40(longlong param_1,longlong *param_2)

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




bool FUN_140c41af0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c41b90(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140c41c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c41c42;
  }
  lVar2 = *plVar1;
LAB_140c41c42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140c41c60(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c41c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c41cf0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
}




exception * FUN_140c41d60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_140c41db0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_140c41e10(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_140c41e90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c41ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140c41f60(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140c41f90;
  }
  else {
LAB_140c41f90:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140c41fb8;
  }
  _invalid_parameter_noinfo();
LAB_140c41fb8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




int FUN_140c41fd0(int *param_1)

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




void FUN_140c42080(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_140c42110(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140c42180(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_140c42220(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void * FUN_140c422d0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c42350(void *param_1,longlong param_2,void *param_3)

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




undefined8 FUN_140c42390(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_140c456b0();
    operator_delete(param_1);
  }
  return 0;
}




ulonglong FUN_140c423d0(int *param_1)

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




bool FUN_140c42430(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140c42470(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140c424c0(longlong param_1,longlong param_2)

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




void FUN_140c42520(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140c42540(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c42562;
  }
  lVar2 = *plVar1;
LAB_140c42562:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c42580(longlong *param_1)

{
  FUN_140c41c60(param_1);
  return param_1;
}




void FUN_140c425a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c42600(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 4);
  return;
}




longlong * FUN_140c42670(longlong *param_1)

{
  FUN_140c41e90(param_1);
  return param_1;
}




void FUN_140c426c0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_140c42730(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140c427a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c41c60(param_1);
  return param_2;
}




longlong * FUN_140c427d0(longlong *param_1,longlong param_2)

{
  FUN_140c41f60(param_1,param_2);
  return param_1;
}




undefined8 * FUN_140c42800(undefined8 *param_1)

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




void * FUN_140c42860(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c428d0(void *param_1,longlong param_2,void *param_3)

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




ulonglong FUN_140c42910(longlong param_1)

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




longlong FUN_140c42970(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c42992;
  }
  lVar2 = *plVar1;
LAB_140c42992:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c429b0(longlong *param_1)

{
  FUN_140c41c60(param_1);
  return param_1;
}




void FUN_140c429d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c429f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c42a10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c42a10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_140c42a60(longlong *param_1)

{
  FUN_140c41e90(param_1);
  return param_1;
}




undefined8 FUN_140c42a80(longlong param_1,ulonglong param_2)

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
      FUN_140c41cf0();
    }
    lVar1 = FUN_140c42600(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140c42ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140c42b60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c42bb0(undefined8 *param_1)

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




undefined8 * FUN_140c42bf0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




longlong * FUN_140c42c50(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140c42cba;
  }
  _invalid_parameter_noinfo();
LAB_140c42cba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140c42cf0(void)

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




undefined8 * FUN_140c42d50(undefined8 *param_1)

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




void * FUN_140c42dd0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c42e40(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c42e80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c42a10(param_1,(longlong *)plVar2[2]);
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




void FUN_140c42f00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c42f20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140c42f60(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140c42f90(undefined8 *param_1)

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




undefined8 * FUN_140c42fe0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140c43040(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c42cf0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140c43080(undefined8 *param_1)

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




void * FUN_140c43100(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140c43180(undefined8 *param_1)

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




void FUN_140c431e0(undefined8 *param_1)

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




undefined8 * FUN_140c43220(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c43270(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140c432c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c432e0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c43370(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
  }
  plVar5 = FUN_140c42ae0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140c436b0(undefined8 *param_1)

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




void * FUN_140c43730(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_140c43770(longlong *param_1)

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
              FUN_140c42a10(param_1,(longlong *)plVar2[2]);
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
            FUN_140c456b0();
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




void FUN_140c438d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar9 = plVar2;
          plVar2 = (longlong *)param_1[6];
          if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar9 == plVar2) {
            *(int *)(param_1 + 10) = (int)param_1[10] + 1;
            return;
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar10 = 0;
          }
          else {
            lVar10 = *plVar1;
          }
          if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          pcVar3 = (char *)plVar9[4];
          if ((pcVar3 != (char *)0x0) && (bVar4 = FUN_140c45850(pcVar3), bVar4)) {
            if (plVar1 == (longlong *)0x0) {
              _invalid_parameter_noinfo();
              lVar10 = 0;
            }
            else {
              lVar10 = *plVar1;
            }
            if (plVar9 == *(longlong **)(lVar10 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            iVar6 = (int)plVar9[3];
            if ((iVar6 == 0xd) || (iVar6 == 0x12)) {
              if ((*(byte *)(param_1 + 10) & 1) == 0) {
                iVar6 = FUN_140c41fd0((int *)(pcVar3 + 0xc));
                (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x1e,(longlong)iVar6);
              }
            }
            else if (((iVar6 == 2) || (iVar6 == 0x2b)) && (uVar7 = FUN_140c42910((longlong)pcVar3), (char)uVar7 != '\0')) {
              if (0 < *(int *)(pcVar3 + 0x14)) {
                FUN_140c456c0((longlong)pcVar3);
              }
              iVar6 = (**(code **)(*(longlong *)param_1[9] + 0x68))((longlong *)param_1[9],(int)param_1[8],iVar6,*(undefined4 *)(pcVar3 + 4));
              if (0 < iVar6) {
                (**(code **)(*(longlong *)param_1[9] + 0x18))((longlong *)param_1[9],(int)param_1[8],0x271a,(int)param_1[8],iVar6);
                cVar5 = (**(code **)(*(longlong *)param_1[9] + 0x78))((longlong *)param_1[9],(int)param_1[8]);
                if (cVar5 == '\0') {
                  (**(code **)(*(longlong *)param_1[9] + 0x88))((longlong *)param_1[9],(int)param_1[8]);
                }
              }
            }
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar9 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar2 = plVar9;
        }
        plVar2 = (longlong *)plVar9[2];
        if (*(char *)((longlong)plVar2 + 0x29) != '\0') break;
        cVar5 = *(char *)(*plVar2 + 0x29);
        plVar9 = (longlong *)*plVar2;
        while (cVar5 == '\0') {
          cVar5 = *(char *)(*plVar9 + 0x29);
          plVar2 = plVar9;
          plVar9 = (longlong *)*plVar9;
        }
      }
      plVar2 = (longlong *)plVar9[1];
    } while (*(char *)((longlong)plVar2 + 0x29) != '\0');
    do {
      plVar8 = plVar2;
      plVar2 = plVar8;
      if (plVar9 != (longlong *)plVar8[2]) break;
      plVar2 = (longlong *)plVar8[1];
      plVar9 = plVar8;
    } while (*(char *)((longlong)plVar2 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_140c43ad0(longlong *param_1,longlong *param_2,int *param_3)

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
LAB_140c43c2d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140c43c5c;
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
      goto LAB_140c43c2d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140c43370(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140c43c5c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140c43c80(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c65778);
  }
  FUN_140c41c60(param_3);
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
        goto LAB_140c43e6c;
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
LAB_140c43e6c:
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
            FUN_140c424c0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c41a40((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140c424c0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140c41a40((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c424c0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140c41a40((longlong)param_1,plVar7);
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




exception * FUN_140c44040(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_140c440a0(longlong *param_1,longlong *param_2,int *param_3)

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




void FUN_140c44170(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c441c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c42e80((longlong)param_1);
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
    FUN_140c43c80(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140c44370(undefined8 *param_1)

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




void FUN_140c443c0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_140c41cf0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140c42600(param_1 + 0x10,uVar8);
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
      FUN_140c43730(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_140c43730(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140c42dd0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 FUN_140c44660(longlong *param_1,int param_2)

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




undefined1 FUN_140c44760(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int local_40 [2];
  undefined1 *local_38;
  longlong local_30 [3];
  
  cVar1 = (**(code **)(*(longlong *)param_1[9] + 0x70))((longlong *)param_1[9],(int)param_1[8],param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    pcVar4 = (char *)FUN_140c44660(param_1,param_2);
    if (pcVar4 == (char *)0x0) {
      puVar5 = operator_new(0x20);
      if (puVar5 == (undefined1 *)0x0) {
        local_38 = (undefined1 *)0x0;
      }
      else {
        local_38 = FUN_140c45760(puVar5,param_2,param_3,param_4,param_5);
      }
      if (local_38 != (undefined1 *)0x0) {
        local_40[0] = param_2;
        FUN_140c43ad0(param_1,local_30,local_40);
        (**(code **)(*(longlong *)param_1[9] + 0x30))((longlong *)param_1[9],(int)param_1[8],param_2,1);
        if (param_5 == 0) {
          if (param_2 == 0x1c) {
            (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x11,(longlong)param_4);
          }
          else if (param_2 == 0x1b) {
            (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x14,(longlong)param_4);
          }
        }
      }
    }
    else {
      FUN_140c458d0(pcVar4,param_3,param_4,param_5);
      if (param_2 == 0x1c) {
        iVar3 = FUN_140c41fd0((int *)(pcVar4 + 0xc));
        (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x11,(longlong)iVar3);
      }
      else if (param_2 == 0x1b) {
        iVar3 = FUN_140c41fd0((int *)(pcVar4 + 0xc));
        (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],(int)param_1[8],0x14,(longlong)iVar3);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_140c448e0(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
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
  local_30 = puVar4;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar4 == puVar7) || (param_2 < *(int *)(puVar4 + 3))) {
    plVar8 = &local_28;
    local_20 = param_1[6];
    local_28 = *param_1;
  }
  else {
    plVar8 = &local_38;
  }
  plVar2 = (longlong *)*plVar8;
  lVar9 = param_1[6];
  local_18 = plVar2;
  local_10 = plVar8[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
  }
  lVar5 = local_10;
  if (local_10 != lVar9) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar5 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    pvVar3 = *(void **)(lVar5 + 0x20);
    if (pvVar3 != (void *)0x0) {
      FUN_140c456b0();
      operator_delete(pvVar3);
    }
    local_18 = (longlong *)*plVar8;
    local_10 = plVar8[1];
    FUN_140c43c80(param_1,&local_28,(longlong *)&local_18);
  }
  return;
}




void FUN_140c44a20(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar6 = plVar4;
          plVar4 = (longlong *)param_1[6];
          if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar6 == plVar4) {
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar3;
          }
          if (plVar6 == *(longlong **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          iVar2 = (int)plVar6[3];
          if ((iVar2 != 1) && (((iVar2 == 2 || (iVar2 == 0x13)) || (iVar2 == 0x2b)))) {
            FUN_140c448e0(param_1,iVar2);
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar6 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar4 = plVar6;
        }
        plVar4 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar6 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar6 + 0x29);
          plVar4 = plVar6;
          plVar6 = (longlong *)*plVar6;
        }
      }
      plVar4 = (longlong *)plVar6[1];
    } while (*(char *)((longlong)plVar4 + 0x29) != '\0');
    do {
      plVar5 = plVar4;
      plVar4 = plVar5;
      if (plVar6 != (longlong *)plVar5[2]) break;
      plVar4 = (longlong *)plVar5[1];
      plVar6 = plVar5;
    } while (*(char *)((longlong)plVar4 + 0x29) == '\0');
  } while( true );
}




void FUN_140c44b20(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)*param_1;
  plVar6 = *(longlong **)param_1[6];
  while( true ) {
    plVar4 = (longlong *)param_1[6];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar4) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar3;
    }
    if (plVar6 == *(longlong **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    iVar2 = (int)plVar6[3];
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
        FUN_140c448e0(param_1,iVar2);
      }
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar6 + 0x29) == '\0') {
      plVar4 = (longlong *)plVar6[2];
      if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x29);
        plVar6 = plVar4;
        plVar4 = (longlong *)*plVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar6 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
      }
      else {
        cVar1 = *(char *)(plVar6[1] + 0x29);
        plVar5 = (longlong *)plVar6[1];
        plVar4 = plVar6;
        while ((plVar6 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar6[2]))) {
          cVar1 = *(char *)(plVar6[1] + 0x29);
          plVar5 = (longlong *)plVar6[1];
          plVar4 = plVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return;
}




undefined8 * FUN_140c44cd0(undefined8 *param_1)

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
  lVar2 = FUN_140c42cf0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140c44d50(longlong *param_1)

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
  FUN_140c441c0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140c44dc0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_140c443c0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140c44eb4;
  }
  _invalid_parameter_noinfo();
LAB_140c44eb4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_140c44ef0(longlong *param_1)

{
  FUN_140c44d50(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c44f20(longlong *param_1,undefined4 *param_2)

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
  FUN_140c44dc0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140c44fd0(longlong *param_1)

{
  FUN_140c44d50(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c45000(longlong *param_1)

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
              FUN_140c42a10(param_1,(longlong *)plVar2[2]);
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
            FUN_140c441c0(param_1,local_18,&local_28,&local_38);
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
            FUN_140c456b0();
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




void FUN_140c451e0(longlong *param_1)

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
        FUN_140c448e0(param_1,*piVar8);
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
        FUN_140c443c0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
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
          if ((int *)plVar5[3] <= piVar8 + (longlong)plVar9) goto LAB_140c453d3;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140c453d3:
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




undefined8 * FUN_140c45540(undefined8 *param_1)

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
  lVar2 = FUN_140c42cf0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c455c0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140c45540(param_1);
  param_1[9] = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}




undefined8 * FUN_140c45610(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_140c45540(puVar1);
    puVar1[9] = param_2;
    *(undefined4 *)(puVar1 + 8) = param_1;
    *(undefined4 *)(puVar1 + 10) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_140c456b0(void)

{
  return;
}




void FUN_140c456c0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return;
}




int FUN_140c456f0(undefined4 *param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = tq::TimeGet(0);
  param_1[1] = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




undefined1 * FUN_140c45760(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

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




ulonglong FUN_140c457c0(int *param_1)

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




bool FUN_140c45850(char *param_1)

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




undefined8 FUN_140c458d0(char *param_1,int param_2,int param_3,int param_4)

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
    iVar1 = FUN_140c41fd0((int *)(param_1 + 0xc));
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
    iVar1 = FUN_140c41fd0((int *)(param_1 + 0xc));
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




ulonglong FUN_140c45a00(char *param_1,int param_2,int param_3)

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




void FUN_140c45a30(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = param_2[1];
  *(undefined4 *)(param_1 + 0x24) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[3];
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x30) = param_2[5];
  *(undefined4 *)(param_1 + 0x34) = param_2[6];
  *(undefined4 *)(param_1 + 0x38) = param_2[7];
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x40) = param_2[9];
  return;
}




uint FUN_140c45a80(longlong param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(uint *)(param_1 + 0x1c);
  case 1:
    return *(uint *)(param_1 + 0x20);
  case 2:
    return *(uint *)(param_1 + 0x24);
  case 3:
    return *(uint *)(param_1 + 0x28);
  case 4:
    return (uint)*(byte *)(param_1 + 0x2c);
  case 5:
    return (uint)*(byte *)(param_1 + 0x2d);
  case 6:
    return *(uint *)(param_1 + 0x30);
  case 7:
    return *(uint *)(param_1 + 0x34);
  case 8:
    return *(uint *)(param_1 + 0x38);
  case 9:
    return *(uint *)(param_1 + 0x40);
  default:
    return 0;
  }
}




void FUN_140c45b00(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x20) = param_3;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x28) = param_3;
    return;
  case 4:
    *(char *)(param_1 + 0x2c) = (char)param_3;
    return;
  case 5:
    *(char *)(param_1 + 0x2d) = (char)param_3;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x30) = param_3;
    return;
  case 7:
    *(undefined4 *)(param_1 + 0x34) = param_3;
    return;
  case 8:
    *(undefined4 *)(param_1 + 0x38) = param_3;
    return;
  case 9:
    *(undefined4 *)(param_1 + 0x40) = param_3;
  }
  return;
}




undefined8 * FUN_140c45bc0(undefined8 *param_1)

{
  *param_1 = crossstatus::CStatusData::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = 0x3c;
  return param_1;
}




undefined8 * FUN_140c45c00(undefined8 *param_1,byte param_2)

{
  *param_1 = crossstatus::CStatusData::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_140c45c30(longlong param_1)

{
  int iVar1;
  __time32_t _Var2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (((*(byte *)(param_1 + 0x2c) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x30) < 1)) {
LAB_140c45c67:
    return uVar3 & 0xffffffffffffff00;
  }
  if ((*(byte *)(param_1 + 0x2c) >> 2 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    _Var2 = _time32((__time32_t *)0x0);
    uVar3 = CONCAT44(extraout_var,_Var2);
    if (iVar1 <= _Var2) goto LAB_140c45c67;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}




undefined8 FUN_140c45c80(longlong param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = tq::TimeGet(0);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1 / 1000;
  return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
}




ulonglong FUN_140c45cc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  __time32_t _Var3;
  ulonglong in_RAX;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((((iVar1 != 0x91) && (iVar1 != 0x93)) && (iVar1 != 0x94)) && ((iVar1 != 0xac && (iVar1 != 0xad)))) {
    if ((*(byte *)(param_1 + 0x2c) >> 2 & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x34);
      _Var3 = _time32((__time32_t *)0x0);
      if ((iVar2 <= _Var3) && (in_RAX = (ulonglong)(iVar1 - 0x31U), 8 < iVar1 - 0x31U)) goto LAB_140c45d3c;
    }
    if (((*(byte *)(param_1 + 0x2c) & 1) == 0) || (iVar1 - 0x31U < 9)) {
      in_RAX = FUN_140c457c0((int *)(param_1 + 8));
      if ((char)in_RAX == '\0') goto LAB_140c45d56;
    }
    else {
      in_RAX = 0;
      if (*(char *)(param_1 + 0x2d) != '\0') goto LAB_140c45d56;
    }
LAB_140c45d3c:
    return in_RAX & 0xffffffffffffff00;
  }
LAB_140c45d56:
  return CONCAT71((int7)(in_RAX >> 8),1);
}




ulonglong FUN_140c45d70(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulonglong extraout_RAX;
  undefined4 extraout_var;
  ulonglong uVar4;
  
  if (param_3 < 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (((*(byte *)(param_1 + 0x2c) & 1) == 0) || (*(int *)(param_1 + 0x24) - 0x31U < 9)) {
    if ((param_2 < 1) && (8 < *(int *)(param_1 + 0x24) - 0x31U)) {
      if (param_2 < 0) {
        iVar2 = FUN_140c41fd0((int *)(param_1 + 8));
        *(int *)(param_1 + 8) = iVar2 + param_3;
        *(int *)(param_1 + 0x38) = iVar2 + param_3;
        iVar2 = FUN_140c41900(param_1 + 8);
        return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
      }
      iVar1 = *(int *)(param_1 + 0x38) - param_3;
      iVar2 = 0;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x38) = iVar2;
      iVar1 = *(int *)(param_1 + 8) - param_3;
      iVar2 = 0;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 8) = iVar2;
      return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
    }
    iVar2 = FUN_140c41fd0((int *)(param_1 + 8));
    if (param_3 <= iVar2) {
      param_3 = FUN_140c41fd0((int *)(param_1 + 8));
    }
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 8) = param_3;
    uVar3 = tq::TimeGet(0);
    *(int *)(param_1 + 0x38) = param_3;
    uVar4 = (ulonglong)uVar3 * 0x10624dd3 & 0xffffffff;
    *(uint *)(param_1 + 0xc) = uVar3 / 1000;
  }
  else {
    if (param_2 == 0) {
      iVar1 = (uint)*(byte *)(param_1 + 0x2d) - param_4;
      iVar2 = 0;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      *(char *)(param_1 + 0x2d) = (char)iVar2;
      return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
    }
    uVar4 = 0;
    if ((int)(uint)*(byte *)(param_1 + 0x2d) < param_4) {
      *(int *)(param_1 + 0x28) = param_2;
      *(int *)(param_1 + 8) = param_3;
      *(int *)(param_1 + 0x38) = param_3;
      *(char *)(param_1 + 0x2d) = (char)param_4;
      return 1;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}




undefined8 FUN_140c45f00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = param_2 + iVar1;
  if (iVar2 <= param_3) {
    param_3 = iVar2;
  }
  *(int *)(param_1 + 8) = param_3;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}




longlong * FUN_140c45f60(longlong *param_1,uint param_2)

{
  FUN_140c53830(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




longlong * FUN_140c45fb0(longlong *param_1,uint param_2)

{
  FUN_140c45000(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 FUN_140c45ff0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  plVar1 = (longlong *)FUN_140c4cd60();
  *(longlong **)(param_1 + 0x90) = plVar1;
  uVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140c4d100(plVar1);
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_140c46030(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2,0xa8);
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




longlong FUN_140c46090(undefined8 param_1,int param_2)

{
  uint7 uVar1;
  
  uVar1 = (uint7)(uint3)(param_2 - 0x31U >> 8);
  if ((param_2 - 0x31U < 9) && (param_2 != 0x35)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}




bool FUN_140c460b0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    lVar2 = FUN_140c4c8d0(*(longlong **)(param_1 + 0x90),param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_140c4b950(lVar2);
      return bVar1;
    }
  }
  return false;
}




bool FUN_140c460e0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (-1 < param_2) {
    lVar2 = FUN_140c4c8d0(*(longlong **)(param_1 + 0x90),param_2);
    if (lVar2 != 0) {
      bVar1 = FUN_140c4b920(lVar2);
      return bVar1;
    }
  }
  return false;
}




void FUN_140c46200(longlong param_1,longlong *param_2)

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




void FUN_140c46370(longlong param_1,longlong *param_2)

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




bool FUN_140c46400(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c46450(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140c46520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46542;
  }
  lVar2 = *plVar1;
LAB_140c46542:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140c46560(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c46584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140c465f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46612;
  }
  lVar2 = *plVar1;
LAB_140c46612:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140c46630(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c46654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c46700(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c46732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c467a0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c467d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c468f0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140c46970(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 * 0x30);
  return;
}




undefined8 FUN_140c46a50(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_140c53830(param_1);
    operator_delete(param_1);
  }
  return 0;
}




undefined8 FUN_140c46a80(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_140c45000(param_1);
    operator_delete(param_1);
  }
  return 0;
}




bool FUN_140c46ab0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140c46af0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140c46b40(longlong param_1,longlong param_2)

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




void FUN_140c46ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c46bd0(longlong param_1,longlong param_2)

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




void FUN_140c46c30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140c46c50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46c72;
  }
  lVar2 = *plVar1;
LAB_140c46c72:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c46c90(longlong *param_1)

{
  FUN_140c46560(param_1);
  return param_1;
}




longlong FUN_140c46cb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46cd2;
  }
  lVar2 = *plVar1;
LAB_140c46cd2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c46cf0(longlong *param_1)

{
  FUN_140c46630(param_1);
  return param_1;
}




longlong * FUN_140c46db0(longlong *param_1)

{
  FUN_140c46700(param_1);
  return param_1;
}




longlong * FUN_140c46dd0(longlong *param_1)

{
  FUN_140c467a0(param_1);
  return param_1;
}




void FUN_140c46e10(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_140c46e80(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140c46ef0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c46560(param_1);
  return param_2;
}




longlong * FUN_140c46f20(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c46630(param_1);
  return param_2;
}




longlong FUN_140c46f70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46f92;
  }
  lVar2 = *plVar1;
LAB_140c46f92:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c46fb0(longlong *param_1)

{
  FUN_140c46560(param_1);
  return param_1;
}




longlong FUN_140c46fd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c46ff2;
  }
  lVar2 = *plVar1;
LAB_140c46ff2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c47010(longlong *param_1)

{
  FUN_140c46630(param_1);
  return param_1;
}




void FUN_140c47030(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c47050(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c47070(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c47070(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140c470c0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c470c0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_140c47110(longlong *param_1)

{
  FUN_140c46700(param_1);
  return param_1;
}




longlong * FUN_140c47130(longlong *param_1)

{
  FUN_140c467a0(param_1);
  return param_1;
}




undefined8 * FUN_140c47150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140c471d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140c47250(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c47290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140c472d0(void)

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




void FUN_140c47330(void)

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




undefined8 * FUN_140c47390(undefined8 *param_1)

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




undefined8 * FUN_140c473d0(undefined8 *param_1)

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




void FUN_140c47410(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c47070(param_1,(longlong *)plVar2[2]);
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




void FUN_140c47490(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c470c0(param_1,(longlong *)plVar2[2]);
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




void FUN_140c47510(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c47530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c47550(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c47590(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_140c475d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c472d0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140c47610(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c47330();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140c47650(undefined8 *param_1)

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




undefined8 * FUN_140c476a0(undefined8 *param_1)

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




void FUN_140c47770(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c47790(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c477b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c47840(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
  }
  plVar5 = FUN_140c47150(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140c47b80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c47c10(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
  }
  plVar5 = FUN_140c471d0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140c47f50(undefined8 *param_1)

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




undefined8 * FUN_140c47fa0(undefined8 *param_1)

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




void FUN_140c47ff0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  CTickAnalyst local_20 [24];
  
  CTickAnalyst::CTickAnalyst(local_20,0x71);
  plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x10);
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
      FUN_140c53e00((longlong *)plVar4[4]);
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
  CTickAnalyst::~CTickAnalyst(local_20);
  CTickAnalyst::CTickAnalyst(local_20,0x72);
  plVar4 = *(longlong **)(param_1 + 0x50);
  plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x80);
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar2;
          plVar2 = *(longlong **)(param_1 + 0x80);
          if ((plVar4 == (longlong *)0x0) || (plVar4 != *(longlong **)(param_1 + 0x50))) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar2) {
            CTickAnalyst::~CTickAnalyst(local_20);
            return;
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar4;
          }
          if (plVar5 == *(longlong **)(lVar6 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if ((longlong *)plVar5[4] != (longlong *)0x0) {
            FUN_140c438d0((longlong *)plVar5[4]);
          }
          if (plVar4 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar5 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar2 = plVar5;
        }
        plVar2 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar2 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar5 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar2 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      plVar2 = (longlong *)plVar5[1];
    } while (*(char *)((longlong)plVar2 + 0x29) != '\0');
    do {
      plVar3 = plVar2;
      plVar2 = plVar3;
      if (plVar5 != (longlong *)plVar3[2]) break;
      plVar2 = (longlong *)plVar3[1];
      plVar5 = plVar3;
    } while (*(char *)((longlong)plVar2 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_140c48200(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140c4835d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140c4838c;
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
      goto LAB_140c4835d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140c47840(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140c4838c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140c483b0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c65778);
  }
  FUN_140c46560(param_3);
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
        goto LAB_140c4859c;
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
LAB_140c4859c:
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
            FUN_140c46b40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c46200((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140c46b40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140c46200((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c46b40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140c46200((longlong)param_1,plVar7);
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




longlong * FUN_140c48770(longlong *param_1,longlong *param_2,uint *param_3)

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




longlong * FUN_140c48840(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_140c4899d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140c489cc;
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
      goto LAB_140c4899d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140c47c10(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140c489cc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140c489f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c65778);
  }
  FUN_140c46630(param_3);
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
        goto LAB_140c48bdc;
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
LAB_140c48bdc:
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
            FUN_140c46bd0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c46370((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140c46bd0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140c46370((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c46bd0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140c46370((longlong)param_1,plVar7);
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




longlong * FUN_140c48db0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_140c48e80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c48ea0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c48ec0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c47410((longlong)param_1);
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
    FUN_140c483b0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




longlong * FUN_140c49070(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c47490((longlong)param_1);
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
    FUN_140c489f0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140c49220(undefined8 *param_1)

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




undefined8 * FUN_140c49270(undefined8 *param_1)

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




ulonglong FUN_140c492c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  longlong *plVar2;
  ulonglong uVar3;
  uint local_res10 [2];
  uint local_38;
  undefined4 uStack_34;
  undefined8 *local_30;
  longlong local_28 [4];
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_38,local_res10);
  uVar3 = CONCAT44(uStack_34,local_38);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((uVar3 == 0) || (uVar3 != *(ulonglong *)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
    uVar3 = extraout_RAX;
  }
  if (local_30 == (undefined8 *)lVar1) {
    local_30 = FUN_140c55ce0(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x90));
    uVar3 = 0;
    if (local_30 != (undefined8 *)0x0) {
      local_38 = param_2;
      plVar2 = FUN_140c48200((longlong *)(param_1 + 0x10),local_28,&local_38);
      return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}




ulonglong FUN_140c49380(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined1 param_7,
                       undefined1 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12,undefined4 param_13)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0x40))[1];
  cVar1 = *(char *)((longlong)puVar9 + 0x29);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  local_70 = puVar3;
  local_78 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar9) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar8 = &local_68;
    local_60 = *(undefined8 *)(param_1 + 0x40);
    local_68 = *(longlong *)(param_1 + 0x10);
  }
  else {
    plVar8 = &local_78;
  }
  plVar2 = (longlong *)*plVar8;
  uVar7 = *(ulonglong *)(param_1 + 0x40);
  local_58 = plVar2;
  uVar6 = plVar8[1];
  local_50 = uVar6;
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x10))) {
    _invalid_parameter_noinfo();
    uVar6 = extraout_RAX;
  }
  uVar4 = local_50;
  if (local_50 != uVar7) {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
      uVar6 = extraout_RAX_00;
    }
    else {
      lVar10 = *plVar2;
    }
    if (uVar4 == *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
      uVar6 = extraout_RAX_01;
    }
    plVar8 = *(longlong **)(uVar4 + 0x20);
    if (plVar8 != (longlong *)0x0) {
      local_2c = param_11;
      local_37 = param_8;
      local_28 = param_12;
      local_38 = param_7;
      local_40 = param_5;
      local_30 = param_10;
      local_3c = param_6;
      local_34 = param_9;
      local_24 = param_13;
      local_48 = param_3;
      local_44 = param_4;
      uVar7 = FUN_140c51eb0(plVar8,&local_48);
      return uVar7;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}




void FUN_140c49520(longlong param_1,uint param_2)

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
      FUN_140c48770(plVar1,(longlong *)&local_58,local_res10);
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
          FUN_140c53830(plVar3);
          operator_delete(plVar3);
        }
        FUN_140c483b0(plVar1,&local_28,(longlong *)&local_58);
      }
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x50);
      FUN_140c48db0(plVar1,(longlong *)&local_58,local_res10);
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
          FUN_140c45000(plVar3);
          operator_delete(plVar3);
        }
        local_28 = local_58;
        lStack_20 = lStack_50;
        FUN_140c489f0(plVar1,local_38,(longlong *)&local_28);
      }
    }
  }
  return;
}




void FUN_140c496c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
        FUN_140c504d0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




undefined1
FUN_140c49760(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,undefined1 param_9,short param_10,
             undefined4 param_11)

{
  undefined1 uVar1;
  char cVar2;
  __time32_t _Var3;
  uint uVar4;
  longlong lVar5;
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
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_60,local_res10);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if ((local_60 == (longlong *)0x0) || (local_60 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_58 != (longlong *)lVar5) {
      lVar5 = 0;
      if (local_60 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar5 = *local_60;
      }
      if (local_58 == (longlong *)*(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      plVar6 = *(longlong **)((longlong)local_58 + 0x20);
      if (plVar6 != (longlong *)0x0) {
        local_50._0_4_ = 0;
        local_34 = param_5;
        local_3f = (undefined1)param_6;
        local_30 = param_9;
        local_40 = '\0';
        local_50._4_4_ = param_2;
        local_48 = param_3;
        _Var3 = _time32((__time32_t *)0x0);
        local_38 = _Var3 + param_8;
        local_3c = param_7;
        local_2c = param_11;
        local_44 = param_4;
        if (param_10 == 0) {
          lVar5 = FUN_140c51db0(plVar6,param_3);
          if (lVar5 == 0) {
            if (0 < param_6) {
              local_40 = '\x01';
            }
          }
          else {
            uVar4 = FUN_140c45a80(lVar5,4);
            local_40 = (char)uVar4;
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
        uVar1 = FUN_140c55d70(plVar6,(longlong)&local_50);
        return uVar1;
      }
    }
  }
  else {
    if (param_2 - 0xdbba1 < 99999) {
      return 0;
    }
    if (((param_3 != 1) && (param_3 != 0x13)) && (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(), cVar2 != '\0')) {
      return 0;
    }
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_60,local_res10);
    lVar5 = *(longlong *)(param_1 + 0x80);
    if ((local_60 == (longlong *)0x0) || (local_60 != *(longlong **)(param_1 + 0x50))) {
      _invalid_parameter_noinfo();
    }
    if (local_58 == (longlong *)lVar5) {
      local_60 = operator_new(0x58);
      if (local_60 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = FUN_140c455c0(local_60,param_2,*(undefined8 *)(param_1 + 8));
      }
      if (plVar6 != (longlong *)0x0) {
        local_60 = (longlong *)CONCAT44(local_60._4_4_,param_2);
        local_58 = plVar6;
        FUN_140c48840((longlong *)(param_1 + 0x50),&local_50,(uint *)&local_60);
        uVar1 = FUN_140c44760(plVar6,param_3,param_4,param_5,param_6);
        return uVar1;
      }
    }
    else {
      if (local_60 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *local_60;
      }
      if (local_58 == (longlong *)*(longlong *)(lVar5 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong **)((longlong)local_58 + 0x20) != (longlong *)0x0) {
        uVar1 = FUN_140c44760(*(longlong **)((longlong)local_58 + 0x20),param_3,param_4,param_5,param_6);
        return uVar1;
      }
    }
  }
  return 1;
}




void FUN_140c49a60(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
    plVar1 = local_28;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 0x10))) {
      _invalid_parameter_noinfo();
    }
    if (local_20 == lVar2) {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
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
          FUN_140c448e0(*(longlong **)(local_20 + 0x20),param_3);
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
        FUN_140c53a40(*(longlong **)(local_20 + 0x20),param_3);
      }
    }
  }
  return;
}




void FUN_140c49b80(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
          FUN_140c54640(*(longlong **)(local_10 + 0x20),-1);
          return;
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
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
          FUN_140c43770(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




bool FUN_140c49cb0(longlong param_1,uint param_2,int param_3)

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
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
        lVar1 = FUN_140c51db0(*(longlong **)(local_20 + 0x20),param_3);
        return lVar1 != 0;
      }
    }
  }
  else {
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
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
        lVar1 = FUN_140c44660(*(longlong **)(local_20 + 0x20),param_3);
        return lVar1 != 0;
      }
    }
  }
  return false;
}




void FUN_140c49e00(longlong param_1,uint param_2)

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
  }
  return;
}




void FUN_140c49f00(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
          FUN_140c54cd0(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
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
          FUN_140c44a20(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




void FUN_140c4a030(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
          FUN_140c553a0(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
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
          FUN_140c44b20(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




void FUN_140c4a160(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if ((param_2 != 0) && (param_2 - 1000000 < 0xee5be5c0)) {
    local_res10[0] = param_2;
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
        FUN_140c55020(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




void FUN_140c4a210(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
          FUN_140c557a0(*(longlong **)(local_10 + 0x20));
          return;
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
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
          FUN_140c451e0(*(longlong **)(local_10 + 0x20));
        }
      }
    }
  }
  return;
}




uint FUN_140c4a340(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c51db0(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        uVar1 = FUN_140c45a80(lVar2,3);
        return uVar1;
      }
    }
  }
  else {
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c44660(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        return *(uint *)(lVar2 + 4);
      }
    }
  }
  return 0;
}




int FUN_140c4a490(longlong param_1,uint param_2,int param_3)

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
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c51db0(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        iVar1 = FUN_140c41fd0((int *)(lVar2 + 8));
        return iVar1;
      }
    }
  }
  else {
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c44660(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        iVar1 = FUN_140c41fd0((int *)(lVar2 + 0xc));
        return iVar1;
      }
    }
  }
  return 0;
}




void FUN_140c4a5e0(longlong param_1,uint param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  char *pcVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_140c51db0(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
          FUN_140c45f00(lVar1,param_4,param_5);
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
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
           (pcVar2 = (char *)FUN_140c44660(*(longlong **)(local_20 + 0x20),param_3), pcVar2 != (char *)0x0)) {
          FUN_140c45a00(pcVar2,param_4,param_5);
        }
      }
    }
  }
  return;
}




void FUN_140c4a740(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  char *pcVar2;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (param_2 - 1000000 < 0xee5be5c0) {
      FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
        if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_140c51db0(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
          FUN_140c45d70(lVar1,param_4,param_5,param_6);
        }
      }
    }
    else {
      FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
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
           (pcVar2 = (char *)FUN_140c44660(*(longlong **)(local_20 + 0x20),param_3), pcVar2 != (char *)0x0)) {
          FUN_140c458d0(pcVar2,param_4,param_5,param_6);
        }
      }
    }
  }
  return;
}




ulonglong FUN_140c4a8b0(longlong param_1,uint param_2,int param_3)

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
    plVar1 = FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
        uVar2 = FUN_140c50620(*(longlong *)(local_10 + 0x20),param_3);
        return uVar2;
      }
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}




void FUN_140c4a970(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
      if ((*(longlong **)(local_20 + 0x20) != (longlong *)0x0) && (lVar1 = FUN_140c51db0(*(longlong **)(local_20 + 0x20),param_3), lVar1 != 0)) {
        FUN_140c45b00(lVar1,3,param_4);
      }
    }
  }
  return;
}




void FUN_140c4aa40(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 - 1000000 < 0xee5be5c0) {
    local_res10[0] = param_2;
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
        FUN_140c503f0(*(longlong **)(local_10 + 0x20));
      }
    }
  }
  return;
}




uint FUN_140c4aaf0(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  uint local_res10 [2];
  longlong *local_18;
  longlong local_10;
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_18,local_res10);
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c51db0(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        uVar1 = FUN_140c45a80(lVar2,9);
        return uVar1;
      }
    }
  }
  else {
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_18,local_res10);
    lVar2 = *(longlong *)(param_1 + 0x80);
    if ((local_18 == (longlong *)0x0) || (local_18 != *(longlong **)(param_1 + 0x50))) {
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
      if ((*(longlong **)(local_10 + 0x20) != (longlong *)0x0) && (lVar2 = FUN_140c44660(*(longlong **)(local_10 + 0x20),param_3), lVar2 != 0)) {
        return *(uint *)(lVar2 + 0x1c);
      }
    }
  }
  return 0;
}




void FUN_140c4ac40(longlong param_1,uint param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (param_2 - 1000000 < 0xee5be5c0) {
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
        lVar1 = FUN_140c51db0(*(longlong **)(local_20 + 0x20),param_3);
        if (lVar1 != 0) {
          FUN_140c45b00(lVar1,9,param_4);
        }
      }
    }
  }
  else {
    FUN_140c48db0((longlong *)(param_1 + 0x50),(longlong *)&local_28,local_res10);
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
        lVar1 = FUN_140c44660(*(longlong **)(local_20 + 0x20),param_3);
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0x1c) = param_4;
        }
      }
    }
  }
  return;
}




bool FUN_140c4ad70(longlong param_1,uint param_2,longlong param_3,uint param_4,int *param_5)

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
    FUN_140c48770((longlong *)(param_1 + 0x10),(longlong *)&local_28,local_res10);
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
        bVar1 = FUN_140c50840(*(longlong **)(local_20 + 0x20),param_2,param_3,param_4,param_5);
        return bVar1;
      }
    }
  }
  return false;
}




void FUN_140c4ae60(longlong *param_1)

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
  FUN_140c48ec0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_140c4aed0(longlong *param_1)

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
  FUN_140c49070(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140c4af40(undefined8 *param_1)

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




undefined8 * FUN_140c4af90(undefined8 *param_1)

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




void FUN_140c4afe0(longlong *param_1)

{
  FUN_140c4ae60(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4b010(longlong *param_1)

{
  FUN_140c4aed0(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c4b040(undefined8 *param_1)

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
  lVar2 = FUN_140c472d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c4b0c0(undefined8 *param_1)

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
  lVar2 = FUN_140c47330();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140c4b140(longlong *param_1)

{
  FUN_140c4ae60(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4b170(longlong *param_1)

{
  FUN_140c4aed0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4b1a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  
  *param_1 = (longlong)crossstatus::CStatusMgr::vftable;
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
      FUN_140c53830(plVar5);
      operator_delete(plVar5);
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
    FUN_140c47070(plVar1,param_2);
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
              FUN_140c470c0(plVar5,param_2);
              plVar7 = (longlong *)*plVar6;
              operator_delete(plVar6);
              cVar2 = *(char *)((longlong)plVar7 + 0x29);
              plVar4 = plVar6;
            }
            *(longlong *)(param_1[0x10] + 8) = param_1[0x10];
            param_1[0x11] = 0;
            *(longlong *)param_1[0x10] = param_1[0x10];
            *(longlong *)(param_1[0x10] + 0x10) = param_1[0x10];
            FUN_140c4d0d0(plVar4,param_2,param_3,param_4);
            puStack_50 = (undefined8 *)param_1[0x10];
            local_58 = *plVar5;
            puStack_40 = (undefined8 *)*puStack_50;
            local_48 = local_58;
            FUN_140c49070(plVar5,local_38,&local_48,&local_58);
            operator_delete((void *)param_1[0x10]);
            param_1[0x10] = 0;
            param_1[0x11] = 0;
            operator_delete((void *)*plVar5);
            puStack_40 = (undefined8 *)param_1[8];
            local_58 = *plVar1;
            puStack_50 = (undefined8 *)*puStack_40;
            local_48 = local_58;
            FUN_140c48ec0(plVar1,local_38,&local_58,&local_48);
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
            FUN_140c45000(plVar6);
            operator_delete(plVar6);
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




undefined8 * FUN_140c4b530(undefined8 *param_1)

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
  lVar2 = FUN_140c472d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c4b5b0(undefined8 *param_1)

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
  lVar2 = FUN_140c47330();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c4b630(undefined8 *param_1)

{
  *param_1 = crossstatus::CStatusMgr::vftable;
  param_1[1] = 0;
  FUN_140c4b530(param_1 + 2);
  FUN_140c4b5b0(param_1 + 10);
  param_1[0x12] = 0;
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c4b680(void)

{
  if ((DAT_140c66358 & 1) == 0) {
    DAT_140c66358 = DAT_140c66358 | 1;
    _DAT_140c662c0 = crossstatus::CStatusMgr::vftable;
    _DAT_140c662c8 = 0;
    FUN_140c4b530((undefined8 *)&DAT_140c662d0);
    FUN_140c4b5b0((undefined8 *)&DAT_140c66310);
    _DAT_140c66350 = 0;
    atexit((_func_5014 *)&LAB_140c5bc10);
  }
  return &DAT_140c662c0;
}




void FUN_140c4b740(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = crossstatus::CStatusTypeData::vftable;
  if (param_1[1] != 0) {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    param_1[1] = 0;
  }
  return;
}




undefined1 FUN_140c4b790(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




void FUN_140c4b7e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140c4b7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}




void FUN_140c4b800(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000140c4b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




undefined8 * FUN_140c4b820(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c4b740(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_140c4b850(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = crossstatus::CStatusTypeData::vftable;
    puVar1[1] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_1 == 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    log_InlineLogERROR(&DAT_140c5c2b8);
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[1] = param_1;
  }
  return puVar1;
}




bool FUN_140c4b920(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return iVar1 == 3;
}




bool FUN_140c4b950(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
  iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  return iVar1 == 2;
}




void FUN_140c4b980(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x000140c4b99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




void FUN_140c4b9b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}




longlong FUN_140c4b9f0(longlong param_1,ulonglong param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) <= param_2) {
    _invalid_parameter_noinfo();
  }
  return *(longlong *)(param_1 + 0x18) + param_2 * 8;
}




longlong FUN_140c4ba60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4ba82;
  }
  lVar2 = *plVar1;
LAB_140c4ba82:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c4baa0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4bac2;
  }
  lVar2 = *plVar1;
LAB_140c4bac2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140c4bae0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140c4bb20(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
}




longlong FUN_140c4bbb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




longlong * FUN_140c4bc10(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140c4bc40;
  }
  else {
LAB_140c4bc40:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140c4bc68;
  }
  _invalid_parameter_noinfo();
LAB_140c4bc68:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140c4bc90(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 << 3);
  return;
}




void * FUN_140c4bd20(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c4bdc0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4be40(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_140c4be80(longlong param_1)

{
  return *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3;
}




undefined8 FUN_140c4be90(longlong param_1,int param_2)

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




longlong FUN_140c4bee0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4bf02;
  }
  lVar2 = *plVar1;
LAB_140c4bf02:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c4bf20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4bf42;
  }
  lVar2 = *plVar1;
LAB_140c4bf42:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140c4bf60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140c4bfa0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4bfc0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140c4c040(longlong *param_1,longlong param_2)

{
  FUN_140c4bc10(param_1,param_2);
  return param_1;
}




void * FUN_140c4c080(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4c0f0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c4c130(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 FUN_140c4c150(longlong param_1,ulonglong param_2)

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
      FUN_140c4bb20();
    }
    lVar1 = FUN_140c4bfc0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_140c4c1c0(undefined8 *param_1)

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




longlong * FUN_140c4c200(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140c4c26a;
  }
  _invalid_parameter_noinfo();
LAB_140c4c26a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140c4c2a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void * FUN_140c4c300(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c4c370(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4c3e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c4c420(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_140c4c450(undefined8 *param_1)

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




undefined8 * FUN_140c4c4a0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_140c4c500(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void * FUN_140c4c590(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140c4c5d0(undefined8 *param_1)

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




void FUN_140c4c630(undefined8 *param_1)

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




undefined8 * FUN_140c4c670(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c4c6c0(undefined8 *param_1,undefined8 *param_2)

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




longlong * FUN_140c4c710(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




void * FUN_140c4c830(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 * FUN_140c4c870(undefined8 *param_1)

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




longlong FUN_140c4c8d0(longlong *param_1,int param_2)

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




void FUN_140c4c9c0(longlong *param_1)

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




void FUN_140c4cab0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140c4bb20();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140c4bfc0(param_1 + 0x10,uVar8);
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
      FUN_140c4c830(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140c4c830(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140c4c370(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_140c4cd60(void)

{
  undefined8 *puVar1;
  
  if (DAT_140c66360 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x30);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_140c66360 = (undefined8 *)0x0;
    }
    else {
      DAT_140c66360 = FUN_140c4c870(puVar1);
    }
  }
  return;
}




void FUN_140c4cdb0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
      FUN_140c4b9b0((undefined8 *)*puVar3,param_2,param_3,param_4);
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
  FUN_140c4c9c0(param_1);
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c4cec0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140c4cab0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140c4cfb4;
  }
  _invalid_parameter_noinfo();
LAB_140c4cfb4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_140c4cff0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140c4cdb0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_140c4d020(longlong *param_1,undefined8 *param_2)

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
  FUN_140c4cec0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140c4d0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = DAT_140c66360;
  if (DAT_140c66360 != (longlong *)0x0) {
    FUN_140c4cdb0(DAT_140c66360,param_2,param_3,param_4);
    operator_delete(plVar1);
  }
  return;
}




undefined8 FUN_140c4d100(longlong *param_1)

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
        log_InlineLogERROR(&DAT_140c5c2b8);
      }
      else {
        local_res20 = FUN_140c4b850((longlong)puVar4);
        if (local_res20 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_140c5c2b8);
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
            FUN_140c4cec0(param_1,local_38,&local_48,&local_res20);
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




undefined8 * FUN_140c4d310(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_140c45bc0(puVar1);
  }
  return puVar1;
}




undefined8 FUN_140c4d370(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




longlong FUN_140c4d420(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4d442;
  }
  lVar2 = *plVar1;
LAB_140c4d442:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c4d460(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4d482;
  }
  lVar2 = *plVar1;
LAB_140c4d482:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




void FUN_140c4d570(longlong param_1,longlong *param_2)

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




void FUN_140c4d6e0(longlong param_1,longlong *param_2)

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




bool FUN_140c4d7a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_140c4d810(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_140c4d860(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4d882;
  }
  lVar2 = *plVar1;
LAB_140c4d882:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c4d8a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4d8c2;
  }
  lVar2 = *plVar1;
LAB_140c4d8c2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140c4d8e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_140c4d970(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
}




longlong FUN_140c4da00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4da22;
  }
  lVar2 = *plVar1;
LAB_140c4da22:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_140c4da40(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c4da64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c4dad0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c4daf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_140c4db60(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_140c4dc10(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c4dc42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_140c4dcf0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000140c4dd22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_140c4dd90(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_140c4ddc0;
  }
  else {
LAB_140c4ddc0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_140c4dde8;
  }
  _invalid_parameter_noinfo();
LAB_140c4dde8:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_140c4de80(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_140c4df00(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_140c4dfb0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_1 * 0x28);
  return;
}




void * FUN_140c4e090(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c4e140(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4e1d0(void *param_1,longlong param_2,void *param_3)

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




undefined8 FUN_140c4e210(longlong param_1,int param_2)

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
  lVar2 = FUN_140c4be80(*(longlong *)(param_1 + 0xb8));
  if (0 < (int)lVar2) {
    do {
      lVar2 = FUN_140c4be90(*(longlong *)(param_1 + 0xb8),iVar5);
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
      lVar2 = FUN_140c4be80(*(longlong *)(param_1 + 0xb8));
    } while (iVar5 < (int)lVar2);
  }
  return 0xffffffff;
}




bool FUN_140c4e300(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_140c4e340(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_140c4e380(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4e3a2;
  }
  lVar2 = *plVar1;
LAB_140c4e3a2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_140c4e3c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4e3e2;
  }
  lVar2 = *plVar1;
LAB_140c4e3e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_140c4e400(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_140c4e450(longlong param_1,longlong param_2)

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




void FUN_140c4e4b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4e4d0(longlong param_1,longlong param_2)

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




void FUN_140c4e530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4e550(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_140c4e560(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4e582;
  }
  lVar2 = *plVar1;
LAB_140c4e582:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c4e5a0(longlong *param_1)

{
  FUN_140c4da40(param_1);
  return param_1;
}




longlong FUN_140c4e5c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4e5e2;
  }
  lVar2 = *plVar1;
LAB_140c4e5e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c4e600(longlong *param_1)

{
  FUN_140c4dad0(param_1);
  return param_1;
}




void FUN_140c4e6a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_140c4e710(longlong *param_1)

{
  FUN_140c4dc10(param_1);
  return param_1;
}




void FUN_140c4e760(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_140c4e7e0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c4da40(param_1);
  return param_2;
}




longlong * FUN_140c4e810(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_140c4dad0(param_1);
  return param_2;
}




longlong * FUN_140c4e840(longlong *param_1)

{
  FUN_140c4dcf0(param_1);
  return param_1;
}




longlong * FUN_140c4e860(longlong *param_1,longlong param_2)

{
  FUN_140c4dd90(param_1,param_2);
  return param_1;
}




void FUN_140c4e880(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c4e880(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_140c4e8e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_140c65718);
  }
  operator_new(param_2 * 0x28);
  return;
}




undefined8 * FUN_140c4e960(undefined8 *param_1)

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




undefined8 * FUN_140c4e9a0(undefined8 *param_1)

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




void * FUN_140c4ea10(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4ea90(void *param_1,longlong param_2,void *param_3)

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




int FUN_140c4ead0(longlong param_1,undefined4 param_2)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = tq::TimeGet(0);
  *(uint *)(param_1 + 0xc) = uVar1 / 1000;
  return uVar1 * 0x10624dd3;
}




ulonglong FUN_140c4eb00(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0x14) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




ulonglong FUN_140c4eb60(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  if ((uint)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8)) <= uVar1 / 1000) {
    uVar1 = tq::TimeGet(0);
    *(uint *)(param_1 + 0xc) = uVar1 / 1000;
    return CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return (ulonglong)uVar1 * 0x10624dd3 & 0xffffff00;
}




longlong FUN_140c4ebc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4ebe2;
  }
  lVar2 = *plVar1;
LAB_140c4ebe2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c4ec00(longlong *param_1)

{
  FUN_140c4da40(param_1);
  return param_1;
}




longlong FUN_140c4ec20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_140c4ec42;
  }
  lVar2 = *plVar1;
LAB_140c4ec42:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_140c4ec60(longlong *param_1)

{
  FUN_140c4dad0(param_1);
  return param_1;
}




void FUN_140c4ec80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4eca0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4ecc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4ece0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140c4ece0(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




undefined8 FUN_140c4ed30(longlong param_1,ulonglong param_2)

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
      FUN_140c4d970();
    }
    lVar1 = FUN_140c4e6a0(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_140c4eda0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




longlong * FUN_140c4edd0(longlong *param_1)

{
  FUN_140c4dc10(param_1);
  return param_1;
}




undefined8 * FUN_140c4edf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140c4ee70(undefined8 *param_1)

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




undefined8 * FUN_140c4eeb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140c4eef0(longlong *param_1)

{
  FUN_140c4dcf0(param_1);
  return param_1;
}




undefined8 * FUN_140c4ef10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_140c4ef50(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_140c4efba;
  }
  _invalid_parameter_noinfo();
LAB_140c4efba:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140c4eff0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140c4f050(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_140c4e880(param_1,(longlong *)plVar2[2]);
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




void FUN_140c4f0d0(void)

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




void FUN_140c4f130(void)

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




undefined8 * FUN_140c4f190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_140c4f210(undefined8 *param_1)

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




undefined8 * FUN_140c4f260(undefined8 *param_1)

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




void * FUN_140c4f2b0(void *param_1,longlong param_2,void *param_3)

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




void * FUN_140c4f320(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_140c4f3a0(void *param_1,longlong param_2,void *param_3)

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




void FUN_140c4f3e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_140c4ece0(param_1,(longlong *)plVar2[2]);
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




void FUN_140c4f460(undefined8 *param_1)

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




void FUN_140c4f4a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4f4c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c4f4e0(undefined8 *param_1)

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




undefined8 * FUN_140c4f530(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c4f570(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_140c4f5b0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_140c4f610(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c4f0d0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_140c4f650(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c4f130();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_140c4f690(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
  }
  plVar5 = FUN_140c4f190(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140c4f9d0(undefined8 *param_1)

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




undefined8 * FUN_140c4fa20(undefined8 *param_1)

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




void * FUN_140c4fae0(void *param_1,longlong param_2,void *param_3)

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




undefined8 * FUN_140c4fba0(undefined8 *param_1)

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




undefined8 * FUN_140c4fc00(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_140c4fc50(undefined8 *param_1,undefined8 *param_2)

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




void FUN_140c4fca0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c4fcc0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_140c4fce0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c4fd70(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_140c65660);
  }
  plVar5 = FUN_140c4edf0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_140c500b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_140c50100(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  puVar2 = FUN_140c4f690(param_1,local_18,bVar3,puVar2,param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140c50190(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_140c501f0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_140c502e0(undefined8 *param_1)

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




undefined8 * FUN_140c50330(undefined8 *param_1)

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




void * FUN_140c503b0(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




undefined8 FUN_140c503f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar5 = (undefined8 *)param_1[6];
  plVar2 = (longlong *)*param_1;
  puVar6 = (undefined8 *)*puVar5;
  while( true ) {
    puVar3 = (undefined8 *)param_1[6];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX;
    }
    if (puVar6 == puVar3) break;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar2;
    }
    if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
      puVar3 = (undefined8 *)puVar6[2];
      if (*(char *)((longlong)puVar3 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar3 + 0x29);
        puVar5 = (undefined8 *)*puVar3;
        while (puVar6 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar5 + 0x29);
          puVar3 = puVar5;
          puVar5 = (undefined8 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
        puVar4 = (undefined8 *)puVar6[1];
        puVar3 = puVar6;
        while ((puVar5 = puVar4, puVar6 = puVar5, cVar1 == '\0' && (puVar3 == (undefined8 *)puVar5[2]))) {
          cVar1 = *(char *)((longlong)puVar5[1] + 0x29);
          puVar4 = (undefined8 *)puVar5[1];
          puVar3 = puVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX_00;
    }
  }
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
}




void FUN_140c504d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((int)param_1[8] != 0) {
    cVar4 = (**(code **)(*(longlong *)param_1[0x18] + 0x78))();
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],0xffffffff,1);
    }
    plVar1 = (longlong *)*param_1;
    plVar6 = *(longlong **)param_1[6];
    while( true ) {
      plVar2 = (longlong *)param_1[6];
      if ((plVar1 == (longlong *)0x0) || (plVar1 != (longlong *)*param_1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar6 == plVar2) break;
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar1;
      }
      if (plVar6 == *(longlong **)(lVar7 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if ((plVar6[4] != 0) && (uVar5 = FUN_140c45a80(plVar6[4],2), (int)uVar5 < 0xc0)) {
        (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],uVar5,1);
      }
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
  }
  return;
}




ulonglong FUN_140c50620(longlong param_1,int param_2)

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
  uVar6 = FUN_140c4e210(param_1,param_2);
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
    if (plVar9 == plVar4) goto LAB_140c5082e;
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
LAB_140c5082e:
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
      if (*(int *)((longlong)plVar8 + 4) < (int)uVar6) goto LAB_140c5082e;
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




bool FUN_140c50840(longlong *param_1,int param_2,longlong param_3,uint param_4,int *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  
  if (((param_2 != 0) && (param_3 != 0)) && (0x27 < param_4)) {
    iVar9 = 1;
    puVar7 = (uint *)(param_3 + 0xc);
    *param_5 = 0;
    plVar2 = (longlong *)*param_1;
    plVar6 = *(longlong **)param_1[6];
    while( true ) {
      plVar3 = (longlong *)param_1[6];
      if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
        _invalid_parameter_noinfo();
      }
      if (plVar6 == plVar3) break;
      if ((ulonglong)param_4 < (ulonglong)((longlong)iVar9 * 0x28)) {
        return false;
      }
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
      if ((lVar8 != 0) && (puVar7 + -3 != (uint *)0x0)) {
        uVar5 = FUN_140c45a80(lVar8,0);
        puVar7[-3] = uVar5;
        uVar5 = FUN_140c45a80(lVar8,1);
        puVar7[-2] = uVar5;
        uVar5 = FUN_140c45a80(lVar8,2);
        puVar7[-1] = uVar5;
        uVar5 = FUN_140c45a80(lVar8,3);
        *puVar7 = uVar5;
        uVar5 = FUN_140c45a80(lVar8,4);
        *(char *)(puVar7 + 1) = (char)uVar5;
        uVar5 = FUN_140c45a80(lVar8,5);
        *(char *)((longlong)puVar7 + 5) = (char)uVar5;
        uVar5 = FUN_140c45a80(lVar8,6);
        puVar7[2] = uVar5;
        uVar5 = FUN_140c45a80(lVar8,7);
        puVar7[3] = uVar5;
        *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(lVar8 + 0x3c);
        uVar5 = FUN_140c45a80(lVar8,9);
        puVar7[6] = uVar5;
        uVar5 = puVar7[-1];
        if ((uVar5 == 0x94) || ((uVar5 == 0xac || (uVar5 == 0xad)))) {
          uVar5 = FUN_140c45a80(lVar8,8);
          puVar7[4] = uVar5;
        }
        else {
          uVar5 = FUN_140c41fd0((int *)(lVar8 + 8));
          puVar7[4] = uVar5;
        }
        *param_5 = *param_5 + 1;
        iVar9 = iVar9 + 1;
        puVar7 = puVar7 + 10;
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
    return 0 < *param_5;
  }
  return false;
}




longlong * FUN_140c50ab0(longlong *param_1,longlong *param_2,int *param_3)

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
LAB_140c50c0d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_140c50c3c;
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
      goto LAB_140c50c0d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_140c4fd70(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_140c50c3c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_140c50c60(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c65778);
  }
  FUN_140c4da40(param_3);
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
        goto LAB_140c50e4c;
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
LAB_140c50e4c:
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
            FUN_140c4e450((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c4d570((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_140c4e450((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_140c4d570((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_140c4e450((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_140c4d570((longlong)param_1,plVar7);
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




longlong * FUN_140c51020(longlong *param_1,longlong *param_2,int *param_3)

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




undefined8 * FUN_140c510f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  puVar2 = FUN_140c4f690(param_1,local_18,bVar3,puVar2,param_3);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_140c51180(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_140c65778);
  }
  FUN_140c4dad0(param_3);
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
        goto LAB_140c5136c;
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
LAB_140c5136c:
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
            FUN_140c4e4d0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140c4d6e0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_140c4e4d0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_140c4d6e0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_140c4e4d0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_140c4d6e0((longlong)param_1,plVar7);
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




undefined8 * FUN_140c51540(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_140c515d0(longlong *param_1)

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




void FUN_140c51690(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c516b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_140c51700(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c4f050((longlong)param_1);
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
    FUN_140c50c60(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140c518b0(undefined8 *param_1)

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




longlong * FUN_140c51900(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_140c4f3e0((longlong)param_1);
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
    FUN_140c51180(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_140c51ab0(undefined8 *param_1)

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




void FUN_140c51b00(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_140c4d970();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_140c4e6a0(param_1 + 0x10,uVar8);
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
      FUN_140c503b0(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_140c503b0(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_140c4f320(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




longlong FUN_140c51db0(longlong *param_1,int param_2)

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




ulonglong FUN_140c51eb0(longlong *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  int local_30 [2];
  undefined8 *local_28;
  longlong local_20 [3];
  
  puVar2 = operator_new(0x48);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_140c45bc0(puVar2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_140c45a30((longlong)puVar2,param_2);
    local_30[0] = param_2[2];
    local_28 = puVar2;
    FUN_140c50ab0(param_1,local_20,local_30);
    *(undefined4 *)(puVar2 + 1) = param_2[7];
    uVar1 = tq::TimeGet(0);
    *(uint *)((longlong)puVar2 + 0xc) = uVar1 / 1000;
    uVar3 = CONCAT71((uint7)((ulonglong)uVar1 * 0x10624dd3 >> 8) & 0xffffff,1);
  }
  return uVar3;
}




longlong FUN_140c51f90(longlong *param_1,uint param_2,char param_3)

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
          log_InlineLogERROR(&DAT_140c5c2b8);
          break;
        }
        uVar4 = uVar4 + 1;
      }
    }
    if ((int)uVar5 < 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140c51db0(param_1,uVar5);
      if ((((lVar2 != 0) && (uVar5 - 0x31 < 9)) && (uVar5 != 0x35)) && (uVar3 = FUN_140c50620((longlong)param_1,uVar5), (char)uVar3 == '\0')) {
        lVar2 = 0;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}




void FUN_140c52080(longlong param_1,int param_2)

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
        FUN_140c51180((longlong *)(param_1 + 0x48),local_28,(longlong *)&local_38);
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




void FUN_140c52200(longlong param_1,int param_2)

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




undefined4 FUN_140c52490(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_3 + 8);
  uVar1 = FUN_140c45a80(param_2,3);
  if (*(int *)(param_3 + 0xc) < (int)uVar1) {
    iVar3 = FUN_140c41fd0((int *)(param_2 + 8));
    uVar4 = 0;
    if (iVar3 <= *(int *)(param_3 + 0x1c)) {
      uVar4 = 3;
    }
  }
  else {
    iVar2 = FUN_140c41fd0((int *)(param_2 + 8));
    if (*(int *)(param_3 + 0x1c) < iVar2) {
      uVar4 = 2;
    }
    else {
      FUN_140c52200(param_1,iVar3);
      uVar4 = 1;
    }
  }
  return uVar4;
}




void FUN_140c52520(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  rsize_t _DstSize;
  longlong *_Dst;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if ((param_2 == 0) || (uVar3 = FUN_140c45a80(param_2,2), (int)uVar3 < 0)) {
    return;
  }
  uVar10 = 0;
  bVar2 = false;
  _Dst = *(longlong **)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0xa8) < _Dst) {
    _invalid_parameter_noinfo();
  }
  puVar7 = *(ulonglong **)(param_1 + 0x88);
  uVar8 = uVar10;
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
          FUN_140c45b00(param_2,3,iVar11);
          uVar3 = FUN_140c45a80(param_2,2);
          if (uVar3 != 0x34) {
            return;
          }
          (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x60))(*(longlong **)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x40),0x34,uVar8,0);
          return;
        }
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar9 = uVar10;
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
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar7;
      }
      if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      iVar6 = param_3 - *(int *)(*_Dst + 0xc);
      if (puVar7 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar10;
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
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar7;
      }
      if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      *(int *)(*_Dst + 8) = *(int *)(*_Dst + 8) - iVar6;
      if (puVar7 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar7;
      }
      if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      if (uVar3 == *(uint *)*_Dst) break;
LAB_140c528e8:
      if (puVar7 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar9 = uVar10;
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
      uVar9 = uVar10;
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
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar7;
      }
      if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      uVar4 = FUN_140c45a80(param_2,3);
      if (*(uint *)(*_Dst + 4) != uVar4) {
        if (puVar7 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar8 = uVar10;
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
      uVar9 = uVar10;
    }
    else {
      uVar9 = *puVar7;
    }
    if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    if (iVar6 < *(int *)(*_Dst + 8)) goto LAB_140c528e8;
    if (puVar7 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar9 = uVar10;
    }
    else {
      uVar9 = *puVar7;
    }
    if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
      _invalid_parameter_noinfo();
    }
    uVar4 = FUN_140c45a80(param_2,3);
    if (*(uint *)(*_Dst + 4) == uVar4) {
      bVar2 = true;
    }
    if (puVar7 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
      uVar9 = uVar10;
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
        uVar9 = uVar10;
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
        uVar9 = uVar10;
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
        uVar9 = uVar10;
      }
      else {
        uVar9 = *puVar7;
      }
      if (*(longlong **)(uVar9 + 0x20) <= _Dst) {
        _invalid_parameter_noinfo();
      }
      *_Dst = 0;
    }
    lVar5 = *(longlong *)(param_1 + 0xa8) - (longlong)(_Dst + 1) >> 3;
    if (0 < lVar5) {
      _DstSize = lVar5 << 3;
      memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + -8;
    if ((_Dst < *(longlong **)(param_1 + 0xa0)) || (*(longlong **)(param_1 + 0xa8) < _Dst)) {
      _invalid_parameter_noinfo();
    }
    puVar7 = *(ulonglong **)(param_1 + 0x88);
  } while( true );
}




void FUN_140c52980(longlong param_1)

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
  FUN_140c515d0((longlong *)(param_1 + 0x88));
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
              FUN_140c4ece0(param_1 + 0x48,(longlong *)plVar4[2]);
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




void FUN_140c52c50(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint in_stack_ffffffffffffffd8;
  
  if (param_2 != 0) {
    uVar2 = FUN_140c45a80(param_2,1);
    uVar3 = FUN_140c45a80(param_2,2);
    if ((uVar3 == 0x12) && (iVar4 = FUN_140c41fd0((int *)(param_2 + 8)), iVar4 < 2)) {
      (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],0x12);
    }
    uVar3 = FUN_140c45a80(param_2,4);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_140c45a80(param_2,2);
      if (((uVar3 == 0xd) || (uVar3 == 0x12)) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
        iVar4 = FUN_140c41fd0((int *)(param_2 + 8));
        (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],uVar2,0x1e,(longlong)iVar4);
      }
      if (uVar3 == 0x94) {
        uVar9 = FUN_140c4eb60(param_2);
        if ((char)uVar9 != '\0') {
          uVar3 = FUN_140c45a80(param_2,3);
          lVar10 = FUN_140c51db0(param_1,0x9f);
          if (lVar10 != 0) {
            uVar5 = FUN_140c45a80(param_2,9);
            uVar3 = (int)(uVar5 * uVar3) / 100;
          }
          cVar1 = (**(code **)(*(longlong *)param_1[0x18] + 0xb0))((longlong *)param_1[0x18],uVar2,8,(longlong)(int)uVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(longlong *)param_1[0x18] + 0xb8))((longlong *)param_1[0x18],0x1e,"leedragonblood",uVar2);
          }
        }
      }
      else if (((uVar3 == 0xac) || (uVar3 == 0xad)) && (uVar9 = FUN_140c4eb60(param_2), (char)uVar9 != '\0')) {
        uVar5 = FUN_140c45a80(param_2,9);
        uVar6 = FUN_140c45a80(param_2,3);
        uVar7 = FUN_140c45a80(param_2,9);
        if ((int)(uVar6 + ((int)uVar5 / 1000) * -1000 + uVar5) < (int)uVar7 / 1000) {
          uVar5 = FUN_140c45a80(param_2,9);
          uVar6 = FUN_140c45a80(param_2,3);
          iVar4 = uVar6 + (int)uVar5 % 1000;
        }
        else {
          uVar5 = FUN_140c45a80(param_2,9);
          iVar4 = (int)uVar5 / 1000;
        }
        FUN_140c45b00(param_2,3,iVar4);
        (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],uVar2,uVar3,1);
      }
    }
    else {
      uVar8 = FUN_140c45cc0(param_2);
      if (((char)uVar8 != '\0') && (uVar9 = FUN_140c4eb60(param_2), (char)uVar9 != '\0')) {
        iVar4 = FUN_140c41fd0((int *)(param_2 + 8));
        FUN_140c45b00(param_2,8,iVar4);
        uVar3 = FUN_140c45a80(param_2,5);
        FUN_140c45b00(param_2,5,uVar3 - 1);
        uVar3 = FUN_140c45a80(param_2,2);
        if ((uVar3 == 2) || (uVar3 == 0x2b)) {
          lVar10 = *(longlong *)param_1[0x18];
          uVar5 = FUN_140c45a80(param_2,3);
          iVar4 = (**(code **)(lVar10 + 0x60))(param_1[0x18],(int)param_1[8],uVar3,uVar5,in_stack_ffffffffffffffd8 & 0xffffff00);
          if (iVar4 != 0) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x18))((longlong *)param_1[0x18],uVar2,0x271a,uVar2,iVar4);
            cVar1 = (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],(int)param_1[8]);
            if (cVar1 == '\0') {
              (**(code **)(*(longlong *)param_1[0x18] + 0x88))((longlong *)param_1[0x18],(int)param_1[8]);
            }
          }
        }
        else {
          uVar2 = FUN_140c45a80(param_2,2);
          if (uVar2 == 0x27) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x60))((longlong *)param_1[0x18],(int)param_1[8],uVar3,1,in_stack_ffffffffffffffd8 & 0xffffff00);
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_140c53030(undefined8 *param_1)

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
  lVar2 = FUN_140c4f0d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140c530b0(longlong *param_1)

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
  FUN_140c51700(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_140c53120(undefined8 *param_1)

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
  lVar2 = FUN_140c4f130();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_140c531a0(longlong *param_1)

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
  FUN_140c51900(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_140c53210(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_140c51b00((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_140c53304;
  }
  _invalid_parameter_noinfo();
LAB_140c53304:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




ulonglong FUN_140c53340(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res18 [2];
  longlong *local_38;
  longlong lStack_30;
  longlong *local_28 [2];
  
  if (param_1[0x18] == 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    uVar3 = extraout_RAX & 0xffffffffffffff00;
  }
  else if (param_2 == 0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar2 = FUN_140c45a80(param_2,2);
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,uVar2);
    FUN_140c45a80(param_2,3);
    if ((int)uVar2 < 0xc0) {
      (**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],uVar2);
      if ((uVar2 - 0x31 < 9) && (uVar2 != 0x35)) {
        FUN_140c52080((longlong)param_1,uVar2);
      }
    }
    FUN_140c51020(param_1,(longlong *)&local_38,(int *)local_res18);
    local_res18[0] = param_1[6];
    local_28[0] = (longlong *)*param_1;
    if ((local_38 == (longlong *)0x0) || (local_38 != local_28[0])) {
      _invalid_parameter_noinfo();
    }
    if (lStack_30 != local_res18[0]) {
      if (local_38 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar4 = 0;
      }
      else {
        lVar4 = *local_38;
      }
      if (lStack_30 == *(longlong *)(lVar4 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar1 = *(undefined8 **)(lStack_30 + 0x20);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      FUN_140c50c60(param_1,local_28,(longlong *)&local_38);
    }
    if (uVar2 == 0x2f) {
      (**(code **)(*(longlong *)param_1[0x18] + 0xa0))((longlong *)param_1[0x18],(int)param_1[8]);
    }
    else if (uVar2 == 0x91) {
      lVar4 = FUN_140c51db0(param_1,0x92);
      if (lVar4 != 0) {
        FUN_140c53340(param_1,lVar4);
      }
      lVar4 = FUN_140c51db0(param_1,0x93);
      if (lVar4 != 0) {
        FUN_140c53340(param_1,lVar4);
      }
    }
    uVar5 = (**(code **)(*(longlong *)param_1[0x18] + 0xa8))((longlong *)param_1[0x18],(int)param_1[8],uVar2);
    uVar3 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
  return uVar3;
}




undefined8 FUN_140c53530(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *extraout_RAX;
  undefined8 *extraout_RAX_00;
  undefined8 *extraout_RAX_01;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  longlong local_20;
  longlong *local_18;
  undefined8 *local_10;
  
  if (param_2 != 0) {
    uVar3 = FUN_140c45a80(param_2,2);
    if ((((int)uVar3 < 0xc0) && ((**(code **)(*(longlong *)param_1[0x18] + 0x38))((longlong *)param_1[0x18],(int)param_1[8],uVar3), uVar3 - 0x31 < 9)) &&
       (uVar3 != 0x35)) {
      FUN_140c52080((longlong)param_1,uVar3);
    }
    puVar7 = (undefined8 *)((undefined8 *)param_1[6])[1];
    cVar1 = *(char *)((longlong)puVar7 + 0x29);
    puVar5 = (undefined8 *)param_1[6];
    while (cVar1 == '\0') {
      if (*(int *)(puVar7 + 3) < (int)uVar3) {
        puVar4 = (undefined8 *)puVar7[2];
        puVar7 = puVar5;
      }
      else {
        puVar4 = (undefined8 *)*puVar7;
      }
      puVar5 = puVar7;
      puVar7 = puVar4;
      cVar1 = *(char *)((longlong)puVar4 + 0x29);
    }
    puVar7 = (undefined8 *)param_1[6];
    local_30 = puVar5;
    local_38 = *param_1;
    if (*param_1 == 0) {
      _invalid_parameter_noinfo();
    }
    if ((puVar5 == puVar7) || ((int)uVar3 < *(int *)(puVar5 + 3))) {
      plVar6 = &local_28;
      local_20 = param_1[6];
      local_28 = *param_1;
    }
    else {
      plVar6 = &local_38;
    }
    plVar2 = (longlong *)*plVar6;
    puVar7 = (undefined8 *)param_1[6];
    local_18 = plVar2;
    puVar5 = (undefined8 *)plVar6[1];
    local_10 = puVar5;
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      puVar5 = extraout_RAX;
    }
    puVar4 = local_10;
    if (local_10 != puVar7) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar8 = 0;
        puVar5 = extraout_RAX_00;
      }
      else {
        lVar8 = *plVar2;
      }
      if (puVar4 == *(undefined8 **)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
        puVar5 = extraout_RAX_01;
      }
      puVar7 = (undefined8 *)puVar4[4];
      if ((puVar7 != (undefined8 *)0x0) && (*(char *)((longlong)puVar7 + 0x3c) == '\0')) {
        (**(code **)*puVar7)(puVar7,1);
        local_18 = (longlong *)*plVar6;
        local_10 = (undefined8 *)plVar6[1];
        puVar5 = FUN_140c50c60(param_1,&local_28,(longlong *)&local_18);
      }
    }
    return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  return 0;
}




void FUN_140c536c0(longlong *param_1)

{
  FUN_140c530b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c536f0(longlong *param_1)

{
  FUN_140c531a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c53720(longlong *param_1,undefined8 *param_2)

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
  FUN_140c53210(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_140c537d0(longlong *param_1)

{
  FUN_140c530b0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c53800(longlong *param_1)

{
  FUN_140c531a0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c53830(longlong *param_1)

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
  
  FUN_140c52980((longlong)param_1);
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
  FUN_140c51900(plVar6,local_28,&local_38,&local_48);
  operator_delete((void *)param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  operator_delete((void *)*plVar6);
  puStack_30 = (undefined8 *)param_1[6];
  local_48 = *param_1;
  puStack_40 = (undefined8 *)*puStack_30;
  local_38 = local_48;
  FUN_140c51700(param_1,local_28,&local_48,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  return;
}




void FUN_140c53a40(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140c51db0(param_1,param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_140c53340(param_1,lVar1);
  return;
}




undefined8 FUN_140c53a70(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
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
  plVar2 = (longlong *)*param_1;
  local_res18 = local_res10;
  local_58 = plVar2;
  do {
    plVar8 = (longlong *)param_1[6];
    local_78 = (longlong *)*param_1;
    if ((plVar2 == (longlong *)0x0) || (plVar2 != local_78)) {
      _invalid_parameter_noinfo();
    }
    if (plVar7 == plVar8) {
LAB_140c53cbd:
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
        piVar3 = local_b8;
        local_68 = (longlong *)0x0;
        if (local_b8 < local_c0) {
          _invalid_parameter_noinfo();
        }
        local_68 = local_d8[0];
        if ((plVar7 == (longlong *)0x0) || (plVar7 != local_d8[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar9 == piVar3) break;
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
        iVar1 = *piVar9;
        FUN_140c53a40(param_1,iVar1);
        (**(code **)(*(longlong *)param_1[0x18] + 0x40))((longlong *)param_1[0x18],(int)param_1[8],iVar1);
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
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = lVar12;
    }
    else {
      lVar10 = *plVar2;
    }
    if (plVar7 == *(longlong **)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    lVar10 = plVar7[4];
    if (((lVar10 != 0) && (uVar5 = FUN_140c45a80(lVar10,4), (uVar5 >> 1 & 1) != 0)) && (uVar6 = FUN_140c4eb00(lVar10), (char)uVar6 != '\0')) {
      uVar6 = FUN_140c45c30(lVar10);
      if ((char)uVar6 == '\0') {
        uVar5 = FUN_140c45a80(lVar10,2);
        local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar5);
        FUN_140c44f20((longlong *)local_d8,(undefined4 *)&local_res10);
        if (((int)uVar5 < 0xc0) &&
           (((((uVar5 == 0xd || (uVar5 == 0x12)) || ((uVar5 == 0x27 || ((uVar5 == 0x28 || (uVar5 == 0x1c)))))) || (uVar5 == 0x96)) || (uVar5 == 0x9f)))) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x60))((longlong *)param_1[0x18],(int)param_1[8],uVar5,0,0);
        }
      }
      else {
        uVar5 = FUN_140c45a80(lVar10,6);
        FUN_140c45b00(lVar10,6,uVar5 - 0x3c);
      }
    }
    local_res20 = param_1[7];
    if ((int)lVar11 != (int)local_res20) goto LAB_140c53cbd;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar8 = plVar7;
      plVar4 = (longlong *)plVar7[2];
      if (*(char *)(plVar7[2] + 0x29) == '\0') {
        do {
          plVar7 = plVar4;
          plVar4 = (longlong *)*plVar7;
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




void FUN_140c53e00(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint *puVar12;
  uint *puVar13;
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
  uint *local_560;
  uint *local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  longlong local_528;
  longlong *local_518;
  uint *puStack_510;
  longlong *local_508;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint *local_4e8;
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
  FUN_140c53a70(param_1);
  uVar7 = tq::TimeGet(0);
  local_res18 = uVar7 / 1000;
  cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],(int)param_1[8]);
  if (cVar3 == '\0') {
    FUN_140c51020(param_1,&local_548,(int *)&DAT_140c5db8c);
    plVar17 = local_548;
    puVar13 = (uint *)param_1[6];
    lVar15 = 0;
    local_498 = (longlong *)*param_1;
    if ((local_548 == (longlong *)0x0) || (local_548 != local_498)) {
      _invalid_parameter_noinfo();
    }
    puVar12 = uStack_540;
    if (uStack_540 != puVar13) {
      if (plVar17 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar15 = *plVar17;
      }
      if (puVar12 == *(uint **)(lVar15 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      lVar15 = *(longlong *)(puVar12 + 8);
      uVar9 = FUN_140c45cc0(lVar15);
      if ((char)uVar9 == '\0') {
        FUN_140c53340(param_1,lVar15);
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
  local_560 = (uint *)0x0;
  local_558 = (uint *)0x0;
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
    if (plVar16 == plVar11) goto LAB_140c5431e;
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
      uVar8 = FUN_140c45a80((longlong)plVar11,2);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar8);
      uVar9 = FUN_140c45cc0((longlong)plVar11);
      if (((char)uVar9 == '\0') && (FUN_140c44f20((longlong *)local_578,(undefined4 *)&local_res10), (int)uVar8 < 0xc0)) {
        if (((uVar8 == 0xd) || ((((uVar8 == 0x12 || (uVar8 == 0x27)) || (uVar8 == 0x28)) || ((uVar8 == 0x1c || (uVar8 == 0x96)))))) || (uVar8 == 0x9f)) {
          in_stack_fffffffffffffa68 = in_stack_fffffffffffffa68 & 0xffffff00;
          (**(code **)(*(longlong *)param_1[0x18] + 0x60))((longlong *)param_1[0x18],(int)param_1[8],uVar8,0,in_stack_fffffffffffffa68);
        }
        if (uVar8 == 0x16) {
          FUN_140c56760(local_448);
          uVar19 = (undefined2)(in_stack_fffffffffffffa68 >> 0x10);
          plVar11 = (longlong *)param_1[0x18];
          uVar4 = (**(code **)(*plVar11 + 0x58))(plVar11,(int)param_1[8]);
          uVar5 = (**(code **)(*plVar11 + 0x50))(plVar11,(int)param_1[8]);
          uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11,(int)param_1[8]);
          in_stack_fffffffffffffa68 = CONCAT22(uVar19,uVar4);
          uVar10 = FUN_140c567e0(local_448,(int)param_1[8],uVar6,uVar5,uVar4,0x9d,1);
          if ((char)uVar10 == '\0') {
            in_stack_fffffffffffffa68 = 0x27a;
            log_InlineLogERROR(&DAT_140c5c2b8);
          }
          else {
            (**(code **)(*(longlong *)param_1[0x18] + 0x10))((longlong *)param_1[0x18],(int)param_1[8],local_448);
          }
          FUN_140c567b0((undefined8 *)local_448);
          plVar11 = local_res20;
        }
      }
      FUN_140c52c50(param_1,(longlong)plVar11);
      puVar13 = local_558;
      local_528 = param_1[7];
      if ((int)local_538 != (int)local_528) {
LAB_140c5431e:
        puVar13 = local_560;
        local_538 = (longlong *)0x0;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        plVar16 = local_578[0];
        local_538 = local_578[0];
        uStack_530 = puVar13;
        local_538._0_4_ = (int)local_578[0];
        local_538._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_530._0_4_ = SUB84(puVar13,0);
        uStack_530._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
        local_4c8 = (int)local_538;
        uStack_4c4 = local_538._4_4_;
        uStack_4c0 = (undefined4)uStack_530;
        uStack_4bc = uStack_530._4_4_;
        local_538 = plVar16;
        uStack_530 = puVar13;
        while( true ) {
          puVar12 = local_558;
          local_4b8 = (longlong *)0x0;
          if (local_558 < local_560) {
            _invalid_parameter_noinfo();
          }
          local_4b8 = local_578[0];
          if ((plVar16 == (longlong *)0x0) || (plVar16 != local_578[0])) {
            _invalid_parameter_noinfo();
          }
          if (puVar13 == puVar12) break;
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar11 = plVar17;
          }
          else {
            plVar11 = (longlong *)*plVar16;
          }
          if ((uint *)plVar11[4] <= puVar13) {
            _invalid_parameter_noinfo();
          }
          uVar8 = *puVar13;
          FUN_140c53a40(param_1,uVar8);
          (**(code **)(*(longlong *)param_1[0x18] + 0x40))((longlong *)param_1[0x18],(int)param_1[8],uVar8);
          if (plVar16 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            plVar11 = plVar17;
          }
          else {
            plVar11 = (longlong *)*plVar16;
          }
          if ((uint *)plVar11[4] <= puVar13) {
            _invalid_parameter_noinfo();
          }
          puVar13 = puVar13 + 1;
        }
        *(int *)(param_1 + 0x19) = (int)param_1[0x19] + 1;
        if (local_560 != (uint *)0x0) {
          operator_delete(local_560);
        }
        local_560 = (uint *)0x0;
        local_558 = (uint *)0x0;
        local_550 = 0;
        operator_delete(local_578[0]);
        return;
      }
      if (((uVar8 == 0x31) || (uVar8 == 0x34)) || (uVar8 == 0x32)) {
        local_4f8 = (longlong *)0x0;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        puVar12 = local_560;
        local_4f8 = local_578[0];
        plVar11 = local_4f8;
        uStack_4f0 = puVar13;
        local_4f8._0_4_ = SUB84(local_578[0],0);
        local_4f8._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_4f0._0_4_ = SUB84(puVar13,0);
        uStack_4f0._4_4_ = (undefined4)((ulonglong)puVar13 >> 0x20);
        local_468 = (undefined4)local_4f8;
        uStack_464 = local_4f8._4_4_;
        uStack_460 = (undefined4)uStack_4f0;
        uStack_45c = uStack_4f0._4_4_;
        local_518 = (longlong *)0x0;
        local_4f8 = plVar11;
        uStack_4f0 = puVar13;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        puVar1 = local_558;
        local_518 = local_578[0];
        puStack_510 = puVar12;
        local_548 = local_578[0];
        plVar11 = local_548;
        for (; (puVar12 != puVar13 && (*puVar12 != uVar8)); puVar12 = puVar12 + 1) {
        }
        local_548._0_4_ = SUB84(local_578[0],0);
        local_548._4_4_ = (undefined4)((ulonglong)local_578[0] >> 0x20);
        uStack_540._0_4_ = SUB84(puVar12,0);
        uStack_540._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
        local_458 = (undefined4)local_548;
        uStack_454 = local_548._4_4_;
        uStack_450 = (undefined4)uStack_540;
        uStack_44c = uStack_540._4_4_;
        local_4a8 = (longlong *)0x0;
        local_548 = plVar11;
        uStack_540 = puVar12;
        local_4e8 = puVar12;
        if (local_558 < local_560) {
          _invalid_parameter_noinfo();
        }
        local_4a8 = local_578[0];
        if ((local_548 == (longlong *)0x0) || (local_548 != local_578[0])) {
          _invalid_parameter_noinfo();
        }
        if (puVar12 == puVar1) {
          FUN_140c52520((longlong)param_1,(longlong)local_res20,local_res18);
        }
      }
      cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x78))((longlong *)param_1[0x18],(int)param_1[8]);
      puVar14 = local_4e0;
      if (cVar3 == '\0') goto LAB_140c5431e;
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




undefined1 FUN_140c54470(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined4 *local_res20;
  
  iVar3 = FUN_140c52490(param_1,param_2,param_3);
  bVar1 = false;
  bVar2 = false;
  uVar5 = 0;
  uVar4 = tq::TimeGet(0);
  if (iVar3 == 1) {
    FUN_140c45d70(param_2,*(int *)(param_3 + 0xc),*(int *)(param_3 + 0x1c),(uint)*(byte *)(param_3 + 0x11));
    uVar5 = 1;
  }
  else if (iVar3 == 2) {
    bVar1 = true;
    uVar5 = 1;
  }
  else if (iVar3 == 3) {
    FUN_140c45c80(param_2,*(undefined4 *)(param_3 + 0x1c));
    bVar2 = true;
  }
  else if (iVar3 == 0) goto LAB_140c545af;
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
  local_res20[3] = uVar4 / 1000;
  FUN_140c53720((longlong *)(param_1 + 0x88),&local_res20);
  if (bVar1) {
    FUN_140c45b00(param_2,3,*(undefined4 *)(param_3 + 0xc));
  }
  if (bVar2) {
    FUN_140c45b00(param_2,8,*(undefined4 *)(param_3 + 0x1c));
  }
LAB_140c545af:
  FUN_140c45b00(param_2,5,(uint)*(byte *)(param_3 + 0x11));
  FUN_140c45b00(param_2,1,*(undefined4 *)(param_1 + 0x40));
  FUN_140c45b00(param_2,4,(uint)*(byte *)(param_3 + 0x10));
  FUN_140c45b00(param_2,6,*(undefined4 *)(param_3 + 0x14));
  if (bVar2) {
    FUN_140c45b00(param_2,7,*(undefined4 *)(param_3 + 0x18));
  }
  FUN_140c45b00(param_2,9,*(undefined4 *)(param_3 + 0x24));
  return uVar5;
}




void FUN_140c54640(longlong *param_1,int param_2)

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
  int *piVar10;
  longlong lVar11;
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
  piVar8 = (int *)0x0;
  piVar10 = (int *)0x0;
  local_res20 = local_res18;
  do {
    plVar4 = (longlong *)param_1[6];
    if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*param_1)) {
      _invalid_parameter_noinfo();
      piVar8 = local_50;
      piVar10 = local_48;
    }
    if (plVar12 == plVar4) {
      piVar9 = piVar8;
      plVar12 = local_68[0];
      if (piVar10 < piVar8) {
        _invalid_parameter_noinfo();
        piVar9 = local_50;
        piVar10 = local_48;
        plVar12 = local_68[0];
      }
      while( true ) {
        if (piVar10 < piVar9) {
          _invalid_parameter_noinfo();
        }
        if ((plVar12 == (longlong *)0x0) || (plVar12 != local_68[0])) {
          _invalid_parameter_noinfo();
        }
        if (piVar8 == piVar10) break;
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar12;
        }
        if (*(int **)(lVar11 + 0x20) <= piVar8) {
          _invalid_parameter_noinfo();
        }
        lVar11 = FUN_140c51db0(param_1,*piVar8);
        FUN_140c53530(param_1,lVar11);
        if (plVar12 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar12;
        }
        if (*(int **)(lVar11 + 0x20) <= piVar8) {
          _invalid_parameter_noinfo();
        }
        piVar8 = piVar8 + 1;
        piVar9 = local_50;
        piVar10 = local_48;
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
      lVar11 = 0;
      piVar8 = local_50;
      piVar10 = local_48;
    }
    else {
      lVar11 = *plVar3;
    }
    if (plVar12 == *(longlong **)(lVar11 + 0x30)) {
      _invalid_parameter_noinfo();
      piVar8 = local_50;
      piVar10 = local_48;
    }
    iVar2 = (int)plVar12[3];
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar2);
    if (param_2 == -1) {
      if (((((((iVar2 != -1) && (iVar2 != 0x57)) && (iVar2 != 0x85)) && ((iVar2 != 0x86 && (iVar2 != 0x87)))) &&
           (((iVar2 != 0x88 && ((iVar2 != 0x89 && (iVar2 != 0x8a)))) && (iVar2 != 0x8b)))) &&
          ((((iVar2 != 0x8c && (iVar2 != 0x8d)) && (iVar2 != 0x8e)) &&
           (((iVar2 != 0x8f && (iVar2 != 0x90)) && ((iVar2 != 0x91 && ((iVar2 != 0xa0 && (iVar2 != 0x94)))))))))) && ((iVar2 != 0xad && (iVar2 != 0xac)))) {
        if (piVar8 == (int *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = local_40 - (longlong)piVar8 >> 2;
        }
        if ((ulonglong)((longlong)piVar10 - (longlong)piVar8 >> 2) < uVar7) {
          *piVar10 = iVar2;
          local_48 = piVar10 + 1;
          piVar8 = local_50;
          piVar10 = local_48;
        }
        else {
          piVar9 = piVar10;
          if (piVar10 < piVar8) {
            _invalid_parameter_noinfo();
            piVar8 = local_50;
            piVar9 = local_48;
          }
          plVar4 = local_68[0];
          if (((longlong)piVar9 - (longlong)piVar8 & 0xfffffffffffffffcU) == 0) {
            lVar11 = 0;
          }
          else {
            if (piVar9 < piVar8) {
              _invalid_parameter_noinfo();
            }
            if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68[0])) {
              _invalid_parameter_noinfo();
            }
            lVar11 = (longlong)piVar10 - (longlong)piVar8 >> 2;
          }
          local_78 = plVar4;
          piStack_70 = piVar10;
          FUN_140c443c0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res18);
          piVar9 = local_50;
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
          if (piVar9 + lVar11 <= *(int **)(lVar6 + 0x20)) {
            if (plVar4 == (longlong *)0x0) {
              lVar6 = 0;
            }
            else {
              lVar6 = *plVar4;
            }
            piVar8 = local_50;
            piVar10 = local_48;
            if (*(int **)(lVar6 + 0x18) <= piVar9 + lVar11) goto LAB_140c54b24;
          }
          _invalid_parameter_noinfo();
          piVar8 = local_50;
          piVar10 = local_48;
        }
      }
    }
    else if ((iVar2 != 1) && (iVar2 != 0x57)) {
      if (piVar8 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = local_40 - (longlong)piVar8 >> 2;
      }
      if ((ulonglong)((longlong)piVar10 - (longlong)piVar8 >> 2) < uVar7) {
        *piVar10 = iVar2;
        local_48 = piVar10 + 1;
        piVar8 = local_50;
        piVar10 = local_48;
      }
      else {
        piVar9 = piVar10;
        if (piVar10 < piVar8) {
          _invalid_parameter_noinfo();
          piVar8 = local_50;
          piVar9 = local_48;
        }
        plVar4 = local_68[0];
        if (((longlong)piVar9 - (longlong)piVar8 & 0xfffffffffffffffcU) == 0) {
          lVar11 = 0;
        }
        else {
          if (piVar9 < piVar8) {
            _invalid_parameter_noinfo();
          }
          if ((plVar4 == (longlong *)0x0) || (plVar4 != local_68[0])) {
            _invalid_parameter_noinfo();
          }
          lVar11 = (longlong)piVar10 - (longlong)piVar8 >> 2;
        }
        local_88 = plVar4;
        piStack_80 = piVar10;
        FUN_140c443c0((longlong)local_68,(longlong)&local_88,1,(undefined4 *)&local_res18);
        piVar9 = local_50;
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
        if (piVar9 + lVar11 <= *(int **)(lVar6 + 0x20)) {
          if (plVar4 == (longlong *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar4;
          }
          piVar8 = local_50;
          piVar10 = local_48;
          if (*(int **)(lVar6 + 0x18) <= piVar9 + lVar11) goto LAB_140c54b24;
        }
        _invalid_parameter_noinfo();
        piVar8 = local_50;
        piVar10 = local_48;
      }
    }
LAB_140c54b24:
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      piVar8 = local_50;
      piVar10 = local_48;
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
      piVar8 = local_50;
      piVar10 = local_48;
    }
  } while( true );
}




void FUN_140c54cd0(longlong *param_1)

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
        lVar6 = FUN_140c51db0(param_1,*piVar9);
        if (lVar6 != 0) {
          FUN_140c53340(param_1,lVar6);
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
        FUN_140c443c0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
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
          if ((int *)plVar5[3] <= piVar9 + (longlong)plVar10) goto LAB_140c54ec7;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140c54ec7:
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




void FUN_140c55020(longlong *param_1)

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
        lVar6 = FUN_140c51db0(param_1,*piVar11);
        if (lVar6 != 0) {
          FUN_140c53340(param_1,lVar6);
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
    lVar6 = FUN_140c4c8d0((longlong *)param_1[0x17],iVar2);
    if (((iVar2 == 0x2a) || (iVar2 == 0x2b)) || (iVar2 == 0x9e)) {
LAB_140c55126:
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
        FUN_140c443c0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
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
          if ((int *)plVar8[3] <= piVar11 + (longlong)plVar10) goto LAB_140c55244;
        }
        _invalid_parameter_noinfo();
      }
    }
    else if (lVar6 != 0) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(lVar6 + 8) + 0x10))(*(longlong **)(lVar6 + 8),2);
      iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
      if (iVar5 == 2) goto LAB_140c55126;
    }
LAB_140c55244:
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




void FUN_140c553a0(longlong *param_1)

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
        lVar6 = FUN_140c51db0(param_1,*piVar10);
        if (lVar6 != 0) {
          FUN_140c53340(param_1,lVar6);
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
          FUN_140c443c0((longlong)local_68,(longlong)&local_78,1,(undefined4 *)&local_res10);
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




void FUN_140c557a0(longlong *param_1)

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
        lVar6 = FUN_140c51db0(param_1,*piVar9);
        if (lVar6 != 0) {
          FUN_140c53340(param_1,lVar6);
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
        FUN_140c443c0((longlong)local_58,(longlong)&local_68,1,(undefined4 *)&local_res10);
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
          if ((int *)plVar5[3] <= piVar9 + (longlong)plVar10) goto LAB_140c55993;
        }
        _invalid_parameter_noinfo();
      }
    }
LAB_140c55993:
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




undefined8 * FUN_140c55b10(undefined8 *param_1)

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
  lVar2 = FUN_140c4f0d0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c55b90(undefined8 *param_1)

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
  lVar2 = FUN_140c4f130();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_140c55c10(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140c55b10(param_1);
  FUN_140c55b90(param_1 + 9);
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
  FUN_140c4f3e0((longlong)(param_1 + 9));
  *(undefined4 *)(param_1 + 0x19) = 0;
  return param_1;
}




undefined8 * FUN_140c55ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xd0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_140c55c10(puVar1,param_1,param_2,param_3);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




undefined1 FUN_140c55d70(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  __time32_t _Var7;
  ulong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *local_res8;
  undefined8 *local_res20;
  uint in_stack_ffffffffffffff88;
  int local_58 [2];
  undefined8 *local_50;
  longlong local_48 [4];
  
  if (param_1[0x18] == 0) {
    log_InlineLogERROR(&DAT_140c5c2b8);
    uVar2 = 0;
  }
  else if (param_1[0x17] == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x70))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8));
    uVar2 = 0;
    if (cVar3 != '\0') {
      iVar4 = *(int *)(param_2 + 8);
      bVar1 = iVar4 < 0xc0;
      if ((iVar4 - 0x31U < 9) && (iVar4 != 0x35)) {
        lVar9 = FUN_140c4c8d0((longlong *)param_1[0x17],iVar4);
        if (lVar9 == 0) {
          log_InlineLogERROR(&DAT_140c5c2b8);
          return 0;
        }
        lVar10 = FUN_140c51db0(param_1,0x36);
        if (lVar10 != 0) {
          plVar11 = (longlong *)(**(code **)(**(longlong **)(lVar9 + 8) + 0x10))(*(longlong **)(lVar9 + 8),2);
          iVar4 = (**(code **)(*plVar11 + 0x48))(plVar11);
          if (iVar4 == 2) {
            return 0;
          }
        }
        if (*(int *)(param_2 + 8) == 0x36) {
          for (iVar4 = 0x31; iVar4 < 0x3a; iVar4 = iVar4 + 1) {
            lVar9 = FUN_140c4c8d0((longlong *)param_1[0x17],iVar4);
            if ((lVar9 != 0) && (lVar10 = FUN_140c51db0(param_1,iVar4), lVar10 != 0)) {
              plVar11 = (longlong *)(**(code **)(**(longlong **)(lVar9 + 8) + 0x10))(*(longlong **)(lVar9 + 8),2);
              iVar5 = (**(code **)(*plVar11 + 0x48))(plVar11);
              if (iVar5 == 2) {
                FUN_140c53a40(param_1,iVar4);
              }
            }
          }
        }
      }
      puVar16 = (undefined8 *)0x0;
      if (*(int *)(param_2 + 8) == 0x35) {
        lVar9 = FUN_140c51db0(param_1,0x34);
        in_stack_ffffffffffffff88 = CONCAT31((int3)(in_stack_ffffffffffffff88 >> 8),lVar9 != 0);
        (**(code **)(*(longlong *)param_1[0x18] + 0x60))
                  ((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),in_stack_ffffffffffffff88);
      }
      lVar9 = FUN_140c51db0(param_1,*(int *)(param_2 + 8));
      if (lVar9 == 0) {
        local_res8 = operator_new(0x48);
        puVar12 = puVar16;
        if (local_res8 != (undefined8 *)0x0) {
          puVar12 = FUN_140c45bc0(local_res8);
        }
        if (puVar12 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_140c5c2b8);
          uVar2 = 0;
        }
        else {
          FUN_140c45b00((longlong)puVar12,1,(int)param_1[8]);
          FUN_140c45b00((longlong)puVar12,2,*(undefined4 *)(param_2 + 8));
          FUN_140c45b00((longlong)puVar12,3,*(undefined4 *)(param_2 + 0xc));
          FUN_140c45b00((longlong)puVar12,4,(uint)*(byte *)(param_2 + 0x10));
          FUN_140c45b00((longlong)puVar12,5,(uint)*(byte *)(param_2 + 0x11));
          FUN_140c45b00((longlong)puVar12,6,*(undefined4 *)(param_2 + 0x14));
          FUN_140c45b00((longlong)puVar12,7,*(undefined4 *)(param_2 + 0x18));
          FUN_140c45b00((longlong)puVar12,8,*(undefined4 *)(param_2 + 0x1c));
          FUN_140c45b00((longlong)puVar12,9,*(undefined4 *)(param_2 + 0x24));
          *(undefined1 *)((longlong)puVar12 + 0x3c) = *(undefined1 *)(param_2 + 0x20);
          local_58[0] = *(int *)(param_2 + 8);
          local_50 = puVar12;
          FUN_140c50ab0(param_1,local_48,local_58);
          *(int *)(puVar12 + 1) = *(int *)(param_2 + 0x1c);
          uVar8 = tq::TimeGet(0);
          *(uint *)((longlong)puVar12 + 0xc) = uVar8 / 1000;
          if (bVar1) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],*(undefined4 *)(param_2 + 8),1);
          }
          if ((*(int *)(param_2 + 8) - 0x31U < 9) && (*(int *)(param_2 + 8) != 0x35)) {
            puVar13 = operator_new(8);
            puVar15 = puVar16;
            if (puVar13 != (undefined8 *)0x0) {
              *(undefined4 *)puVar13 = 0xffffffff;
              *(undefined4 *)((longlong)puVar13 + 4) = 0;
              puVar15 = puVar13;
            }
            if (puVar15 == (undefined8 *)0x0) {
              return 0;
            }
            *(undefined4 *)puVar15 = *(undefined4 *)(param_2 + 8);
            local_res8 = puVar15;
            uVar14 = FUN_140c4e210((longlong)param_1,*(int *)(param_2 + 8));
            *(int *)((longlong)puVar15 + 4) = (int)uVar14;
            FUN_140c510f0(param_1 + 9,(undefined8 *)local_58,(longlong *)&local_res8);
            iVar4 = *(int *)(param_2 + 8);
            if (((iVar4 == 0x34) || (iVar4 == 0x31)) || (iVar4 == 0x32)) {
              uVar8 = tq::TimeGet(0);
              local_res8 = operator_new(0x10);
              if (local_res8 != (undefined8 *)0x0) {
                *(undefined4 *)local_res8 = 0xffffffff;
                *(undefined4 *)((longlong)local_res8 + 4) = 0;
                *(undefined4 *)(local_res8 + 1) = 0;
                *(undefined4 *)((longlong)local_res8 + 0xc) = 0;
                puVar16 = local_res8;
              }
              if (puVar16 == (undefined8 *)0x0) {
                return 0;
              }
              *(undefined4 *)puVar16 = *(undefined4 *)(param_2 + 8);
              *(undefined4 *)((longlong)puVar16 + 4) = *(undefined4 *)(param_2 + 0xc);
              *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(param_2 + 0x1c);
              *(uint *)((longlong)puVar16 + 0xc) = uVar8 / 1000;
              local_res20 = puVar16;
              FUN_140c53720(param_1 + 0x11,&local_res20);
            }
          }
          if (*(int *)(param_2 + 8) == 0x34) {
            in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
            (**(code **)(*(longlong *)param_1[0x18] + 0x60))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x34,*(undefined4 *)(param_2 + 0xc),in_stack_ffffffffffffff88);
          }
          if (bVar1) {
            iVar4 = *(int *)(param_2 + 8);
            if (iVar4 == 0x1c) {
              (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],(int)param_1[8],0x11,(longlong)*(int *)(param_2 + 0x1c));
            }
            else if (iVar4 == 0x1b) {
              (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],(int)param_1[8],0x14,(longlong)*(int *)(param_2 + 0x1c));
            }
            else if (iVar4 == 0x57) {
              (**(code **)(*(longlong *)param_1[0x18] + 0x20))
                        ((longlong *)param_1[0x18],(int)param_1[8],0x30,((longlong)*(int *)(param_2 + 0xc) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
            }
            else if (iVar4 == 0x76) {
              (**(code **)(*(longlong *)param_1[0x18] + 0x20))
                        ((longlong *)param_1[0x18],(int)param_1[8],0x37,((ulonglong)*(uint *)(param_2 + 0x24) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
            }
            else if (iVar4 == 0xa0) {
              in_stack_ffffffffffffff88 = FUN_140c41fd0((int *)(puVar12 + 1));
              (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x4b,0,in_stack_ffffffffffffff88,0);
            }
          }
          if (*(int *)(param_2 + 8) == 0x2f) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x98))((longlong *)param_1[0x18],(int)param_1[8]);
          }
          if (*(int *)(param_2 + 8) == 0x92) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x60))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x92,*(undefined4 *)(param_2 + 0xc),in_stack_ffffffffffffff88 & 0xffffff00);
          }
          uVar2 = 1;
        }
      }
      else {
        cVar3 = '\0';
        iVar4 = *(int *)(param_2 + 8);
        if (((iVar4 == 0x31) || (iVar4 == 0x32)) || (iVar4 == 0x34)) {
          cVar3 = FUN_140c54470((longlong)param_1,lVar9,param_2);
        }
        else {
          FUN_140c45d70(lVar9,*(int *)(param_2 + 0xc),*(int *)(param_2 + 0x1c),(uint)*(byte *)(param_2 + 0x11));
          FUN_140c45b00(lVar9,1,(int)param_1[8]);
          FUN_140c45b00(lVar9,4,(uint)*(byte *)(param_2 + 0x10));
          FUN_140c45b00(lVar9,6,*(undefined4 *)(param_2 + 0x14));
          uVar6 = FUN_140c45a80(lVar9,7);
          _Var7 = _time32((__time32_t *)0x0);
          if ((_Var7 < (int)uVar6) && (0 < *(int *)(param_2 + 0x1c))) {
            FUN_140c45b00(lVar9,7,*(int *)(param_2 + 0x1c) + uVar6);
          }
          else {
            FUN_140c45b00(lVar9,7,*(undefined4 *)(param_2 + 0x18));
          }
          FUN_140c45b00(lVar9,9,*(undefined4 *)(param_2 + 0x24));
        }
        *(undefined1 *)(lVar9 + 0x3c) = *(undefined1 *)(param_2 + 0x20);
        iVar4 = *(int *)(param_2 + 8);
        if ((iVar4 - 0x31U < 9) && (iVar4 != 0x35)) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],iVar4,1);
        }
        if (bVar1) {
          iVar4 = *(int *)(param_2 + 8);
          if (iVar4 == 0x1c) {
            iVar4 = FUN_140c41fd0((int *)(lVar9 + 8));
            (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],(int)param_1[8],0x11,(longlong)iVar4);
          }
          else if (iVar4 == 0x1b) {
            iVar4 = FUN_140c41fd0((int *)(lVar9 + 8));
            (**(code **)(*(longlong *)param_1[0x18] + 0x20))((longlong *)param_1[0x18],(int)param_1[8],0x14,(longlong)iVar4);
          }
          else if (iVar4 == 0x57) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x20))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x30,((longlong)*(int *)(param_2 + 0xc) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
          }
          else if ((((((iVar4 == 0x59) || (iVar4 == 0x6d)) || (iVar4 == 0x7d)) ||
                    (((iVar4 == 0x85 || (iVar4 == 0x86)) || ((iVar4 == 0x87 || ((iVar4 == 0x88 || (iVar4 == 0x89)))))))) || (iVar4 == 0x8a)) ||
                  (((((iVar4 == 0x8b || (iVar4 == 0x8c)) || (iVar4 == 0x8d)) || ((iVar4 == 0x8e || (iVar4 == 0x8f)))) ||
                   ((iVar4 == 0x90 || ((iVar4 == 0x9e || (iVar4 == 0x94)))))))) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],(int)param_1[8],iVar4,1);
          }
          else if (iVar4 == 0x76) {
            (**(code **)(*(longlong *)param_1[0x18] + 0x20))
                      ((longlong *)param_1[0x18],(int)param_1[8],0x37,((ulonglong)*(uint *)(param_2 + 0x24) << 0x20) + (longlong)*(int *)(param_2 + 0x1c));
          }
          else if (iVar4 == 0xa0) {
            in_stack_ffffffffffffff88 = FUN_140c41fd0((int *)(lVar9 + 8));
            (**(code **)(*(longlong *)param_1[0x18] + 0x28))((longlong *)param_1[0x18],(int)param_1[8],0x4b,0,in_stack_ffffffffffffff88,0);
          }
        }
        if (((cVar3 != '\0') && (*(int *)(param_2 + 8) == 0x34)) && (lVar9 = FUN_140c51db0(param_1,0x2f), lVar9 != 0)) {
          in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
          (**(code **)(*(longlong *)param_1[0x18] + 0x60))
                    ((longlong *)param_1[0x18],(int)param_1[8],0x34,*(undefined4 *)(param_2 + 0xc),in_stack_ffffffffffffff88);
        }
        if (*(int *)(param_2 + 8) == 0x92) {
          (**(code **)(*(longlong *)param_1[0x18] + 0x60))
                    ((longlong *)param_1[0x18],(int)param_1[8],0x92,*(undefined4 *)(param_2 + 0xc),in_stack_ffffffffffffff88 & 0xffffff00);
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




CMsg * FUN_140c566b0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_140c566e0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_140c56700(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c56707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_140c56710(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c56717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_140c56720(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140c56727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_140c56730(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_140c56760(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = crossstatus::CMsgAction::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_140c567b0(undefined8 *param_1)

{
  *param_1 = crossstatus::CMsgAction::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_140c567e0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined4 param_7)

{
  ulong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
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
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    uVar2 = CONCAT71((uint7)(byte)((ushort)param_6 >> 8),1);
  }
  return uVar2;
}




ulonglong FUN_140c568c0(CMsg *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,
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
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_7;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 0xe) = param_8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
    uVar2 = CONCAT71((uint7)(uint3)((uint)param_9 >> 8),1);
  }
  return uVar2;
}




bool FUN_140c569c0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x271a;
}




void FUN_140c569f0(void)

{
  return;
}




undefined8 * FUN_140c56a00(undefined8 *param_1,byte param_2)

{
  *param_1 = crossstatus::CMsgAction::vftable;
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
  
  local_res10 = _decode_pointer(DAT_140c663a0);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_140c663a0);
    local_res18[0] = _decode_pointer(DAT_140c66398);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_140c663a0 = _encode_pointer(local_res10);
    DAT_140c66398 = _encode_pointer(local_res18[0]);
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




bool FUN_140c56c28(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_140c66398 = _encode_pointer(puVar1);
  DAT_140c663a0 = DAT_140c66398;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_140c57154();
    atexit(FUN_140c5718c);
    atexit((_func_5014 *)&LAB_140c57148);
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
    if (DAT_140c66368 < 1) {
      return 0;
    }
    DAT_140c66368 = DAT_140c66368 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_140c66388 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140c66388;
        pvVar3 = DAT_140c66388;
      }
      DAT_140c66388 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140c56d02;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140c56d02:
    if (DAT_140c66380 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_140c663a0);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_140c66398);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_140c663a0);
            plVar12 = (longlong *)_decode_pointer(DAT_140c66398);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_140c66398 = _encoded_null();
        DAT_140c663a0 = DAT_140c66398;
      }
      DAT_140c66380 = 0;
      if (!bVar2) {
        LOCK();
        DAT_140c66388 = (void *)0x0;
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
      bVar13 = DAT_140c66388 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_140c66388;
        pvVar3 = DAT_140c66388;
      }
      DAT_140c66388 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_140c56e2b;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_140c56e2b:
    if (DAT_140c66380 == 0) {
      DAT_140c66380 = 1;
      iVar4 = _initterm_e(&DAT_140c5c1b8,&DAT_140c5c1c8);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_140c5c1a8,&DAT_140c5c1b0);
      DAT_140c66380 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_140c66388 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_140c66390 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_140c66390), BVar5 != 0)) {
      (*DAT_140c66390)(param_1,2,param_3);
    }
    DAT_140c66368 = DAT_140c66368 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000140c56fa4) */
/* WARNING: Removing unreachable block (ram,0x000140c56f3b) */
/* WARNING: Removing unreachable block (ram,0x000140c56fdf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_140c66368 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_140c662a0 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_140c662a0 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_140c41230();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_140c41230();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_140c662a0 = 0xffffffff;
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




undefined8 FUN_140c5705c(undefined8 *param_1)

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




void FUN_140c57154(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140c5f090; puVar1 < &DAT_140c5f090; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_140c5718c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_140c5f0a0; puVar1 < &DAT_140c5f0a0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_140c40000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_140c40000);
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  if (DAT_140c662a8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_140c662a8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_140c662a8 == 0x2b992ddfa232) {
      DAT_140c662a8 = 0x2b992ddfa233;
    }
  }
  _DAT_140c662b0 = ~DAT_140c662a8;
  return;
}




void Unwind_140c573b0(undefined8 param_1,longlong param_2)

{
  FUN_140c41030(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_140c573d0(void)

{
  log_InlineLogCATCH_ERROR("status module ontimer  @%s,%d");
  return 0x140c4121c;
}




void Unwind_140c57410(undefined8 param_1,longlong param_2)

{
  FUN_140c41030(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140c57430(undefined8 param_1,longlong param_2)

{
  FUN_140c41030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57450(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_140c57470(undefined8 param_1,longlong param_2)

{
  FUN_140c41030(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_140c57490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c574b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c574d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c574f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57510(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57530(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57550(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57590(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c575b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c575d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c575f0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57610(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57630(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57650(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57670(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57690(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c576b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c576d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c576f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57710(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57730(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57750(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57770(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57790(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c577b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c577d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c577f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140c57810(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c57830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140c57850(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c57870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57890(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c578b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c578d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c578f0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57910(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c57930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c57950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c57970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c579b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c579d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c579f0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57a10(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57a30(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57a50(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c57a70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c57aa0(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c57ac0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c57af0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57b10(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57b30(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57b50(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57b70(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57b90(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57bb0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57bd0(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57bf0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57c10(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57c30(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57c50(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57c70(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57c90(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57cb0(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57cd0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57cf0(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57d10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c57d30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c57d50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c57d70(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c57d90(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57db0(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57dd0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57df0(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57e10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c57e30(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c57e50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c57e70(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c57e90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57eb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_140c57ed0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_140c57ef0(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57f10(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57f30(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57f50(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57f70(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c57f90(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57fb0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57fd0(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c57ff0(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140c58010(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c58040(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c58060(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
  return;
}




void Unwind_140c58080(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c580a0(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c580c0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c580e0(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58100(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58120(undefined8 param_1,longlong param_2)

{
  FUN_140c44170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58140(undefined8 param_1,longlong param_2)

{
  FUN_140c44170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58160(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58180(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c581a0(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c581c0(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c581e0(undefined8 param_1,longlong param_2)

{
  FUN_140c44ef0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c58200(undefined8 param_1,longlong param_2)

{
  FUN_140c44170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58220(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58240(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58260(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58280(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c582a0(undefined8 param_1,longlong param_2)

{
  FUN_140c44fd0(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_140c582c0(undefined8 param_1,longlong param_2)

{
  FUN_140c44ef0(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_140c582e0(undefined8 param_1,longlong param_2)

{
  FUN_140c44170(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140c58300(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140c58320(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140c58340(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140c58360(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_140c58380(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c583b0(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c583d0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c583f0(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c58410(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c58430(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c58450(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58470(undefined8 param_1,longlong param_2)

{
  FUN_140c42520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58490(undefined8 param_1,longlong param_2)

{
  FUN_140c429f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c584b0(undefined8 param_1,longlong param_2)

{
  FUN_140c42f00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c584d0(undefined8 param_1,longlong param_2)

{
  FUN_140c432c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c584f0(undefined8 param_1,longlong param_2)

{
  FUN_140c44170(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58510(undefined8 param_1,longlong param_2)

{
  FUN_140c44ef0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c58530(undefined8 param_1,longlong param_2)

{
  FUN_140c44fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c58550(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_140c58570(undefined8 param_1,longlong param_2)

{
  FUN_140c44fd0(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_140c58590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c585b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c585d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c585f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c58610(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58630(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58650(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c58670(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c586a0(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c586c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c586f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c58720(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c58750(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58770(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58790(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c587b0(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c587d0(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c587f0(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58810(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58830(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58850(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58870(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58890(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c588b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c588d0(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c588f0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58910(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58930(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c58970(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c58990(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c589b0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c589d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c589f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c58a10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c58a30(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c58a50(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58a70(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58a90(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58ab0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58ad0(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58af0(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58b10(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x28));
  return;
}




void Unwind_140c58b30(undefined8 param_1,longlong param_2)

{
  CTickAnalyst::~CTickAnalyst((CTickAnalyst *)(param_2 + 0x28));
  return;
}




void Unwind_140c58b50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c58b70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c58b90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c58bb0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c58bd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c58bf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c58c10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c58c30(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c58c50(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58c70(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58c90(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58cb0(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58cd0(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58cf0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58d10(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58d30(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58d50(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58d70(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58d90(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58db0(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58dd0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58df0(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58e10(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58e30(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140c58e50(void)

{
  log_InlineLogCATCH_ERROR("CStatusMgr::OnRoleLogout Role[%u] @%s,%d");
  return 0x140c4969f;
}




void Unwind_140c58e90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38));
  return;
}




void Unwind_140c58eb0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58ed0(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58ef0(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58f10(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58f30(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58f50(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c58f70(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58f90(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58fb0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58fd0(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c58ff0(undefined8 param_1,longlong param_2)

{
  FUN_140c48e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59010(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59030(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59050(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59070(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59090(undefined8 param_1,longlong param_2)

{
  FUN_140c48ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c590b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c590d0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c590f0(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59110(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59130(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59150(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59170(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59190(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c591b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c591d0(undefined8 param_1,longlong param_2)

{
  FUN_140c48e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c591f0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59210(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59230(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59250(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59270(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59290(undefined8 param_1,longlong param_2)

{
  FUN_140c48ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c592b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4afe0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c592d0(undefined8 param_1,longlong param_2)

{
  FUN_140c48e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c592f0(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59310(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59330(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59350(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59370(undefined8 param_1,longlong param_2)

{
  FUN_140c4b010(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c59390(undefined8 param_1,longlong param_2)

{
  FUN_140c48ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c593b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c593d0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c593f0(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59410(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59430(undefined8 param_1,longlong param_2)

{
  FUN_140c4b140((longlong *)(*(longlong *)(param_2 + 0x90) + 0x10));
  return;
}




void Unwind_140c59450(undefined8 param_1,longlong param_2)

{
  FUN_140c4b170((longlong *)(*(longlong *)(param_2 + 0x90) + 0x50));
  return;
}




void Unwind_140c59470(undefined8 param_1,longlong param_2)

{
  FUN_140c4b010(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_140c59490(undefined8 param_1,longlong param_2)

{
  FUN_140c48ea0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140c594b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140c594d0(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140c594f0(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140c59510(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_140c59530(undefined8 param_1,longlong param_2)

{
  FUN_140c4afe0(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_140c59550(undefined8 param_1,longlong param_2)

{
  FUN_140c48e80(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c59570(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c59590(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c595b0(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c595d0(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_140c595f0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59610(undefined8 param_1,longlong param_2)

{
  FUN_140c46ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59630(undefined8 param_1,longlong param_2)

{
  FUN_140c47030(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59650(undefined8 param_1,longlong param_2)

{
  FUN_140c47510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59670(undefined8 param_1,longlong param_2)

{
  FUN_140c47770(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59690(undefined8 param_1,longlong param_2)

{
  FUN_140c48e80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c596b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4afe0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c596d0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c596f0(undefined8 param_1,longlong param_2)

{
  FUN_140c46c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59710(undefined8 param_1,longlong param_2)

{
  FUN_140c47050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59730(undefined8 param_1,longlong param_2)

{
  FUN_140c47530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59750(undefined8 param_1,longlong param_2)

{
  FUN_140c47790(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59770(undefined8 param_1,longlong param_2)

{
  FUN_140c48ea0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59790(undefined8 param_1,longlong param_2)

{
  FUN_140c4b010(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c597b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4b140((longlong *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_140c597d0(undefined8 param_1,longlong param_2)

{
  FUN_140c4b170((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_140c597f0(void)

{
  DAT_140c66358 = DAT_140c66358 & 0xfffffffe;
  return;
}




void Unwind_140c59810(void)

{
  FUN_140c4b140((longlong *)&DAT_140c662d0);
  return;
}




void Unwind_140c59830(void)

{
  FUN_140c4b170((longlong *)&DAT_140c66310);
  return;
}




undefined * Catch_140c59850(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140c4b77c;
}




void Unwind_140c59890(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_140c598b0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x140c4b903;
}




undefined8 Catch_140c598f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return 0x140c4b9cd;
}




void Unwind_140c59930(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140c59950(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c59970(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140c59990(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c599b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c599d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c599f0(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59a10(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59a30(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59a50(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59a70(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59a90(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59ab0(undefined8 param_1,longlong param_2)

{
  FUN_140c4c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59ad0(undefined8 param_1,longlong param_2)

{
  FUN_140c4c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59af0(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59b10(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59b30(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59b50(undefined8 param_1,longlong param_2)

{
  FUN_140c4c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59b70(undefined8 param_1,longlong param_2)

{
  FUN_140c4c630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140c59b90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c59bc0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c59be0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140c59c00(undefined8 param_1,longlong param_2)

{
  FUN_140c4c630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59c20(undefined8 param_1,longlong param_2)

{
  FUN_140c4c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59c40(undefined8 param_1,longlong param_2)

{
  FUN_140c4bfa0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_140c59c60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_140c4d208;
}




undefined8 Catch_140c59ca0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x140c4d2ae;
}




void Unwind_140c59ce0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_140c59d00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_140c59d20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c59d40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_140c59d60(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x50));
  return;
}




void Unwind_140c59d80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59da0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59dc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59de0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59e00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59e20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_140c59e40(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59e60(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c59e80(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59ea0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59ec0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c59ee0(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c59f00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c59f30(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c59f50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c59f80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c59fb0(void)

{
  FUN_140c41430();
  return;
}




void Catch_140c59fd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c5a000(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a020(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a040(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a060(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a080(undefined8 param_1,longlong param_2)

{
  FUN_140c4ec80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a0a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a0c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a0e0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a100(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a120(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a140(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a160(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a1a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c5a1c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c5a1e0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c5a200(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a220(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a240(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a260(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a280(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a2a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a2c0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a2e0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a300(undefined8 param_1,longlong param_2)

{
  FUN_140c4ec80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a320(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a340(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a360(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a380(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a3a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a3c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a3e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a400(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c5a420(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c5a440(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x60));
  return;
}




void Unwind_140c5a460(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a480(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a4a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a4c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a4e0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a500(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a520(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a540(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c5a580(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a5a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c5a5c0(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a5e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_140c5a600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a620(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_140c5a640(undefined8 param_1,longlong param_2)

{
  FUN_140c41520((exception *)(param_2 + 0x38));
  return;
}




void Unwind_140c5a660(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a680(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a6a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a6c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a6e0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a700(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a720(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a740(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a760(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a780(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a7a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a7c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a7e0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a800(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5a820(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a840(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a860(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5a880(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_140c5a8a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_140c5a8d0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_140c5a8f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
  return;
}




undefined * Catch_140c5a910(void)

{
  log_InlineLogCATCH_ERROR("CStatus::QueryStatusByType.(UserID = %u) @%s,%d");
  return &DAT_140c52063;
}




undefined * Catch_140c5a950(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140c5238a;
}




undefined * Catch_140c5a990(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140c52827;
}




undefined * Catch_140c5a9d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_140c52a76;
}




void Unwind_140c5aa10(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5aa30(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aa50(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aa70(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aa90(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aab0(undefined8 param_1,longlong param_2)

{
  FUN_140c51690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aad0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5aaf0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ab10(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ab30(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ab50(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ab70(undefined8 param_1,longlong param_2)

{
  FUN_140c516b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined8 Catch_140c5ab90(undefined8 param_1,longlong param_2)

{
  FUN_140c45a80(*(longlong *)(param_2 + 0x88),2);
  log_InlineLogCATCH_ERROR("Erase Status(%d) User(%d) Catch @%s,%d");
  return 0x140c53519;
}




void Unwind_140c5abf0(undefined8 param_1,longlong param_2)

{
  FUN_140c51690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ac10(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ac30(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ac50(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ac70(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ac90(undefined8 param_1,longlong param_2)

{
  FUN_140c516b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5acb0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5acd0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5acf0(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ad10(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ad30(undefined8 param_1,longlong param_2)

{
  FUN_140c536c0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ad50(undefined8 param_1,longlong param_2)

{
  FUN_140c51690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ad70(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ad90(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5adb0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5add0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5adf0(undefined8 param_1,longlong param_2)

{
  FUN_140c536f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ae10(undefined8 param_1,longlong param_2)

{
  FUN_140c516b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ae30(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ae50(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ae70(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5ae90(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5aeb0(undefined8 param_1,longlong param_2)

{
  FUN_140c537d0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140c5aed0(undefined8 param_1,longlong param_2)

{
  FUN_140c53800((longlong *)(*(longlong *)(param_2 + 0x80) + 0x48));
  return;
}




void Unwind_140c5aef0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f460((undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x88));
  return;
}




void Unwind_140c5af20(undefined8 param_1,longlong param_2)

{
  FUN_140c4ec80(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5af40(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5af60(undefined8 param_1,longlong param_2)

{
  FUN_140c536f0(*(longlong **)(param_2 + 0x88));
  return;
}




void Unwind_140c5af80(undefined8 param_1,longlong param_2)

{
  FUN_140c516b0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5afa0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5afc0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5afe0(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5b000(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x88));
  return;
}




void Unwind_140c5b020(undefined8 param_1,longlong param_2)

{
  FUN_140c536c0(*(longlong **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b040(undefined8 param_1,longlong param_2)

{
  FUN_140c51690(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b060(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b080(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b0a0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b0c0(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x80));
  return;
}




void Unwind_140c5b0e0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b110(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140c5b130(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140c5b150(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140c5b170(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_140c5b190(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x30));
  return;
}




undefined * Catch_140c5b1b0(void)

{
  log_InlineLogCATCH_ERROR("CStatus::UpdateStatusRemainTime.(UserID = %u) @%s,%d");
  return &DAT_140c53de9;
}




void Unwind_140c5b200(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b230(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c5b250(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c5b270(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c5b290(undefined8 param_1,longlong param_2)

{
  FUN_140c567b0((undefined8 *)(param_2 + 0x170));
  return;
}




void Unwind_140c5b2b0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_140c5b2d0(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_140c5b2f0(void)

{
  log_InlineLogCATCH_ERROR("CStatus::OnTimer.(UserID = %u) @%s,%d");
  return 0x140c5445b;
}




void Unwind_140c5b340(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x78));
  return;
}




void Unwind_140c5b360(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b390(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c5b3b0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c5b3d0(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c5b3f0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c5b410(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_140c5b430(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b460(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b480(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b4a0(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b4c0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b4e0(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b500(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b530(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b550(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b570(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b590(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b5b0(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b5d0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b600(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b620(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b640(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b660(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b680(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b6a0(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b6d0(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b6f0(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b710(undefined8 param_1,longlong param_2)

{
  FUN_140c431e0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b730(undefined8 param_1,longlong param_2)

{
  FUN_140c429d0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b750(undefined8 param_1,longlong param_2)

{
  FUN_140c425a0((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_140c5b770(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b790(undefined8 param_1,longlong param_2)

{
  FUN_140c4e4b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b7b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4eca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b7d0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b7f0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fca0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b810(undefined8 param_1,longlong param_2)

{
  FUN_140c51690(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b830(undefined8 param_1,longlong param_2)

{
  FUN_140c536c0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b850(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b870(undefined8 param_1,longlong param_2)

{
  FUN_140c4e530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b890(undefined8 param_1,longlong param_2)

{
  FUN_140c4ecc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b8b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f4c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b8d0(undefined8 param_1,longlong param_2)

{
  FUN_140c4fcc0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b8f0(undefined8 param_1,longlong param_2)

{
  FUN_140c516b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b910(undefined8 param_1,longlong param_2)

{
  FUN_140c536f0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_140c5b930(undefined8 param_1,longlong param_2)

{
  FUN_140c537d0(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_140c5b950(undefined8 param_1,longlong param_2)

{
  FUN_140c53800((longlong *)(*(longlong *)(param_2 + 0x70) + 0x48));
  return;
}




void Unwind_140c5b970(void)

{
  FUN_140c41430();
  return;
}




void Unwind_140c5b990(undefined8 param_1,longlong param_2)

{
  FUN_140c4e550(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140c5b9b0(undefined8 param_1,longlong param_2)

{
  FUN_140c4ec80(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_140c5b9d0(undefined8 param_1,longlong param_2)

{
  FUN_140c4f460((undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x88));
  return;
}




void Unwind_140c5b9f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_140c5ba10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0xa0));
  return;
}




void Unwind_140c5ba30(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0xa0));
  return;
}




void Unwind_140c5ba50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0xa0));
  return;
}




undefined * Catch_140c5ba70(void)

{
  log_InlineLogCATCH_ERROR("CUserStatus::AttachUserStatus @%s,%d");
  return &DAT_140c56691;
}




void Unwind_140c5bab0(undefined8 param_1,longlong param_2)

{
  FUN_140c566e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_140c5bad0(undefined8 param_1,longlong param_2)

{
  FUN_140c566e0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_140c5baf0(undefined8 param_1,longlong param_2)

{
  FUN_140c566e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_140c5bb08(void)

{
  _unlock(8);
  return;
}




void FUN_140c5bb21(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5bb51(void)

{
  _DAT_140c662a0 = 0xffffffff;
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




bool FUN_140c5bbe0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=1079 failed=0 total=1140 */
