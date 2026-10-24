/* Decompiled by Ghidra 12.1.4 | program: Training.dll
   image base: 1419e0000 | functions: 373 */


void FUN_1419e1000(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_1419e1010(void)

{
  return 0;
}




undefined8 FUN_1419e1020(void)

{
  return 0;
}




undefined8 FUN_1419e1030(void)

{
  return 0;
}




undefined8 FUN_1419e1040(void)

{
  return 0;
}




undefined8 * FUN_1419e1050(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419e1080(void)

{
  log_InlineLogERROR(&DAT_1419e8230);
  return;
}




void FUN_1419e10e0(undefined8 *param_1)

{
  *param_1 = training::CModule::vftable;
  FUN_1419e5420(param_1 + 0x107);
  FUN_1419e52e0(param_1 + 0x84);
  FUN_1419e51a0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_1419e1140(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




undefined1 FUN_1419e1160(longlong param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  longlong lVar3;
  
  puVar2 = FUN_1419e5020();
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x30))(*(longlong **)(param_1 + 0x830),0xf);
  if (lVar3 == 0) {
    log_InlineLogERROR(&DAT_1419e8230);
    return 0;
  }
  uVar1 = FUN_1419e1a10((longlong)puVar2,lVar3);
  return uVar1;
}




longlong * FUN_1419e11e0(longlong param_1,ushort *param_2,ushort param_3)

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
      if (uVar1 != 0x7fc) {
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




void FUN_1419e1250(void)

{
  return;
}




bool FUN_1419e1260(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = FUN_1419e5020();
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x7fc,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0x830) + 8))(*(longlong **)(param_1 + 0x830),0x3eb,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x18))(*(longlong **)(param_1 + 0x830),0xf,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_1419e12e0(void)

{
  return 1;
}




void FUN_1419e12f0(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 8))();
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_1419e1320(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = training::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_1419e5150((CMsg *)(param_1 + 2));
  FUN_1419e5290((CMsg *)(param_1 + 0x84));
  param_1[0x106] = param_2;
  FUN_1419e53d0((CMsg *)(param_1 + 0x107));
  return param_1;
}




undefined8 * FUN_1419e1390(undefined8 *param_1,uint param_2)

{
  *param_1 = training::CModule::vftable;
  FUN_1419e5420(param_1 + 0x107);
  FUN_1419e52e0(param_1 + 0x84);
  FUN_1419e51a0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1419e1410(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_1419e11e0(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x1470  1  ModuleCreate */
  puVar2 = operator_new(0xc48);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_1419e1320(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1419e1260((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




exception * FUN_1419e1580(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1419e15c0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001419e15e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419e15f0(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419e1650(void)

{
  return;
}




exception * FUN_1419e1660(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_1419e16b0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419e16e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_1419e16f0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_1419e1710(exception *param_1,uint param_2)

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




exception * FUN_1419e1770(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_1419e17d0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419e180d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419e1820(exception *param_1,uint param_2)

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




exception * FUN_1419e1890(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1419e18f0(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001419e192d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_1419e1940(exception *param_1,uint param_2)

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




undefined4 * FUN_1419e19d0(undefined4 *param_1)

{
  __time64_t _Var1;
  
  *param_1 = 0;
  _Var1 = _time64((__time64_t *)0x0);
  *(__time64_t *)(param_1 + 2) = _Var1;
  return param_1;
}




undefined1 FUN_1419e1a10(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419e8230);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




undefined8 FUN_1419e1a60(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if ((char)uVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2,param_3,1);
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}




void FUN_1419e1ac0(void)

{
  return;
}




void FUN_1419e1ad0(void)

{
  return;
}




ulonglong FUN_1419e1ae0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (param_2 != 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),9);
    if (cVar1 != '\0') {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (6 < iVar2) {
        iVar2 = 6;
      }
      return (ulonglong)(uint)((&DAT_1419e84c8)[iVar2] * 0x3c) / 100;
    }
  }
  return 0x5a;
}




void FUN_1419e1b70(longlong param_1,undefined4 param_2,int param_3,int *param_4,longlong *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),iVar1);
  if (0 < lVar4) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),iVar1);
    lVar6 = 1;
    if (lVar4 < 1) {
      lVar4 = 1;
    }
    else {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),iVar1);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),iVar1);
    lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    dVar7 = ((double)iVar3 * (double)param_3 * 10.0 * 0.125) / 100.0;
    *(double *)(param_1 + 0x10) = dVar7;
    dVar7 = dVar7 + ((double)lVar5 * (double)iVar2) / (double)lVar4;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      do {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),iVar2);
        if ((iVar3 < 1) || (dVar7 < (double)iVar3)) break;
        *param_4 = *param_4 + 1;
        iVar2 = iVar2 + 1;
        dVar7 = dVar7 + (0.0 - (double)iVar3);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      } while (iVar2 < iVar3);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),iVar1 + *param_4);
    iVar3 = 1;
    if (0 < iVar2) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),iVar1 + *param_4);
    }
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),*param_4 + iVar1);
    *param_5 = (longlong)(((double)lVar4 * dVar7) / (double)iVar3);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),iVar1 + *param_4);
    if (0 < lVar4) {
      lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),iVar1 + *param_4);
    }
    *param_6 = (int)(((double)*param_5 / (double)lVar6) * 10000000.0);
  }
  return;
}




bool FUN_1419e1dd0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_1419e1ef0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419e1f12;
  }
  lVar2 = *plVar1;
LAB_1419e1f12:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




bool FUN_1419e1f30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419e2000(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x31) == '\0') {
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




void FUN_1419e2060(longlong *param_1)

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
  if (*(char *)((longlong)plVar2 + 0x31) == '\0') {
    lVar3 = *plVar2;
    if (*(char *)(lVar3 + 0x31) == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x31);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      while (lVar5 = lVar4, cVar1 == '\0') {
        lVar4 = *(longlong *)(lVar5 + 0x10);
        cVar1 = *(char *)(lVar4 + 0x31);
        lVar3 = lVar5;
      }
      param_1[1] = lVar3;
      return;
    }
    plVar2 = (longlong *)plVar2[1];
    cVar1 = *(char *)((longlong)plVar2 + 0x31);
    while ((cVar1 == '\0' && (param_1[1] == *plVar2))) {
      param_1[1] = (longlong)plVar2;
      plVar2 = (longlong *)plVar2[1];
      cVar1 = *(char *)((longlong)plVar2 + 0x31);
    }
    if (*(char *)(param_1[1] + 0x31) == '\0') {
      param_1[1] = (longlong)plVar2;
      return;
    }
  }
  else {
    lVar3 = plVar2[2];
    param_1[1] = lVar3;
    if (*(char *)(lVar3 + 0x31) == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419e2092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419e2100(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x31) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (*(char *)((longlong)plVar3 + 0x31) != '\0') {
      lVar2 = *(longlong *)(lVar2 + 8);
      cVar1 = *(char *)(lVar2 + 0x31);
      while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
        param_1[1] = lVar2;
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x31);
      }
      param_1[1] = lVar2;
      return;
    }
    cVar1 = *(char *)(*plVar3 + 0x31);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x31);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
    param_1[1] = (longlong)plVar3;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419e2124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1419e2290(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419eb7b0);
  }
  operator_new(param_1 * 0x38);
  return;
}




void FUN_1419e2320(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419eb7b0);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_1419e2390(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1419e23d0(longlong param_1,int param_2,uint *param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  __time64_t _Var5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  uVar4 = FUN_1419e1ae0(param_1,param_2);
  if ((int)uVar4 < iVar3) {
    uVar4 = FUN_1419e1ae0(param_1,param_2);
    sVar2 = (short)uVar4;
  }
  else {
    sVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  }
  iVar3 = (uint)(ushort)(sVar2 * 10) + (int)((ulonglong)((longlong)(int)(uint)(ushort)(sVar2 * 10) * -0x77777777) >> 0x20);
  uVar10 = ((short)(iVar3 >> 3) - (short)(iVar3 >> 0x1f)) * 0xf;
  _Var5 = _time64((__time64_t *)0x0);
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
  lVar6 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var5 - lVar6),8) + (_Var5 - lVar6);
  uVar8 = (short)(lVar6 >> 5) - (short)(lVar6 >> 0x3f);
  uVar9 = uVar10;
  if (uVar8 < uVar10) {
    iVar3 = (uint)uVar8 + (int)((ulonglong)((longlong)(int)(uint)uVar8 * -0x77777777) >> 0x20);
    uVar9 = ((short)(iVar3 >> 3) - (short)(iVar3 >> 0x1f)) * 0xf;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2);
  uVar8 = uVar9;
  if (cVar1 == '\0') {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
    lVar6 = lVar6 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8);
    lVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),param_2);
    lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
    uVar8 = (short)((ulonglong)(uint)(((int)(lVar6 >> 5) - (int)(lVar6 >> 0x3f)) - ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f))) / 0xf) * 0xf;
    if (uVar9 < uVar8) {
      uVar8 = uVar9;
    }
  }
  *param_3 = (uint)uVar8;
  *param_4 = (uint)uVar10 - (uint)uVar8;
  return;
}




void FUN_1419e2580(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419e2590(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419e25b2;
  }
  lVar2 = *plVar1;
LAB_1419e25b2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419e2610(longlong *param_1)

{
  FUN_1419e2100(param_1);
  return param_1;
}




longlong * FUN_1419e2630(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_1419e2100(param_1);
  return param_2;
}




longlong * FUN_1419e2660(longlong *param_1)

{
  FUN_1419e2060(param_1);
  return param_1;
}




void FUN_1419e26a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x31) == '\0') {
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




undefined8 * FUN_1419e2710(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419e2750(longlong *param_1)

{
  FUN_1419e2060(param_1);
  return param_1;
}




void FUN_1419e2770(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x38)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419eb7b0);
  }
  operator_new(param_2 * 0x38);
  return;
}




void FUN_1419e27f0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419eb7b0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1419e2860(longlong *param_1)

{
  FUN_1419e2100(param_1);
  return param_1;
}




undefined1 FUN_1419e2880(longlong param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_438 [2];
  longlong local_430 [3];
  CMsg local_418 [1040];
  
  local_430[1] = 0xfffffffffffffffe;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_res8[0] = 0;
    local_438[0] = 0;
    local_res18[0] = 0;
    local_430[0] = 0;
    local_res20[0] = 0;
    FUN_1419e23d0(param_1,param_2,local_res8,local_438);
    FUN_1419e1b70(param_1,param_2,local_res8[0],local_res18,local_430,local_res20);
    FUN_1419e55b0(local_418);
    sVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),param_2);
    uVar4 = FUN_1419e5630((longlong)local_418,(undefined2)local_res8[0],(undefined2)local_438[0],sVar3 + (short)local_res18[0],local_res20[0]);
    if ((char)uVar4 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_418);
    }
    FUN_1419e5600((undefined8 *)local_418);
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1419e29a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419e29d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_1419e2a10(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x31);
  while (cVar1 == '\0') {
    FUN_1419e2a10(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x31);
  }
  return;
}




void FUN_1419e2a60(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 6) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x31) = 0;
  return;
}




undefined8 * FUN_1419e2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = *param_5;
    puVar1[4] = param_5[1];
    puVar1[5] = param_5[2];
    *(undefined1 *)(puVar1 + 6) = param_6;
    *(undefined1 *)((longlong)puVar1 + 0x31) = 0;
  }
  return puVar1;
}




undefined8 * FUN_1419e2b50(undefined8 *param_1)

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




void FUN_1419e2b90(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x31) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x31) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x31);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x31);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x31);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x31);
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




void FUN_1419e2c60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419e2d00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419e2d50(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  if (*(char *)((longlong)plVar2 + 0x31) != '\0') {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_40,"invalid map/set<T> iterator");
    std::exception::exception((exception *)local_80);
    local_80[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_68,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_40);
    local_80[0] = std::out_of_range::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419eb838);
  }
  FUN_1419e2100(param_3);
  plVar8 = (longlong *)*plVar2;
  if (*(char *)((longlong)plVar8 + 0x31) == '\0') {
    plVar9 = plVar8;
    if (*(char *)(plVar2[2] + 0x31) == '\0') {
      plVar7 = (longlong *)param_3[1];
      plVar9 = (longlong *)plVar7[2];
      if (plVar7 != plVar2) {
        plVar8[1] = (longlong)plVar7;
        *plVar7 = *plVar2;
        plVar8 = plVar7;
        if (plVar7 != (longlong *)plVar2[2]) {
          plVar8 = (longlong *)plVar7[1];
          if (*(char *)((longlong)plVar9 + 0x31) == '\0') {
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
        plVar3 = plVar2 + 6;
        plVar7 = plVar7 + 6;
        if (plVar7 != plVar3) {
          lVar5 = *plVar7;
          *(char *)plVar7 = (char)*plVar3;
          *(char *)plVar3 = (char)lVar5;
        }
        goto LAB_1419e2f3c;
      }
    }
  }
  else {
    plVar9 = (longlong *)plVar2[2];
  }
  plVar8 = (longlong *)plVar2[1];
  if (*(char *)((longlong)plVar9 + 0x31) == '\0') {
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
    if (*(char *)((longlong)plVar9 + 0x31) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x31);
      plVar3 = (longlong *)*plVar9;
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)*plVar6;
        cVar1 = *(char *)((longlong)plVar3 + 0x31);
        plVar7 = plVar6;
      }
    }
    *(longlong **)param_1[6] = plVar7;
  }
  if (*(longlong **)(param_1[6] + 0x10) == plVar2) {
    plVar7 = plVar8;
    if (*(char *)((longlong)plVar9 + 0x31) == '\0') {
      cVar1 = *(char *)(plVar9[2] + 0x31);
      plVar3 = (longlong *)plVar9[2];
      plVar7 = plVar9;
      while (plVar6 = plVar3, cVar1 == '\0') {
        plVar3 = (longlong *)plVar6[2];
        cVar1 = *(char *)((longlong)plVar3 + 0x31);
        plVar7 = plVar6;
      }
    }
    *(longlong **)(param_1[6] + 0x10) = plVar7;
  }
LAB_1419e2f3c:
  if ((char)plVar2[6] == '\x01') {
    if (plVar9 != *(longlong **)(param_1[6] + 8)) {
      do {
        plVar7 = plVar8;
        if ((char)plVar9[6] != '\x01') break;
        plVar8 = (longlong *)*plVar7;
        if (plVar9 == plVar8) {
          plVar8 = (longlong *)plVar7[2];
          if ((char)plVar8[6] == '\0') {
            *(undefined1 *)(plVar8 + 6) = 1;
            *(undefined1 *)(plVar7 + 6) = 0;
            FUN_1419e26a0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x31) == '\0') {
            if ((*(char *)(*plVar8 + 0x30) != '\x01') || (*(char *)(plVar8[2] + 0x30) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x30) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x30) = 1;
                *(undefined1 *)(plVar8 + 6) = 0;
                FUN_1419e2000((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 6) = (char)plVar7[6];
              *(undefined1 *)(plVar7 + 6) = 1;
              *(undefined1 *)(plVar8[2] + 0x30) = 1;
              FUN_1419e26a0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 6) = 0;
          }
        }
        else {
          if ((char)plVar8[6] == '\0') {
            *(undefined1 *)(plVar8 + 6) = 1;
            *(undefined1 *)(plVar7 + 6) = 0;
            FUN_1419e2000((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x31) == '\0') {
            if ((*(char *)(plVar8[2] + 0x30) != '\x01') || (*(char *)(*plVar8 + 0x30) != '\x01')) {
              if (*(char *)(*plVar8 + 0x30) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x30) = 1;
                *(undefined1 *)(plVar8 + 6) = 0;
                FUN_1419e26a0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 6) = (char)plVar7[6];
              *(undefined1 *)(plVar7 + 6) = 1;
              *(undefined1 *)(*plVar8 + 0x30) = 1;
              FUN_1419e2000((longlong)param_1,plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 6) = 0;
          }
        }
        plVar8 = (longlong *)plVar7[1];
        plVar9 = plVar7;
      } while (plVar7 != *(longlong **)(param_1[6] + 8));
    }
    *(undefined1 *)(plVar9 + 6) = 1;
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




exception * FUN_1419e3110(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_1419e3160(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_1419e31c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x31);
  while (cVar1 == '\0') {
    FUN_1419e2a10(param_1,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x31);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  return;
}




undefined8 * FUN_1419e3240(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x31) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x31) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x31) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x31) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x31) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x31) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_1419e3320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419e2a60();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x31) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419e3360(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
  
  if (0xaaaaaaaaaaaaaa8 < (ulonglong)param_1[7]) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_70,"map/set<T> too long");
    std::exception::exception((exception *)local_48);
    local_48[0] = std::logic_error::vftable;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (local_30,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_70);
    local_48[0] = std::length_error::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419eb8c8);
  }
  plVar5 = FUN_1419e2ac0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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
  cVar1 = *(char *)(*plVar7 + 0x30);
  plVar6 = plVar5;
  while (cVar1 == '\0') {
    plVar2 = (longlong *)*plVar7;
    plVar3 = (longlong *)plVar2[1];
    if (plVar2 == (longlong *)*plVar3) {
      lVar4 = plVar3[2];
      if (*(char *)(lVar4 + 0x30) == '\0') {
        *(undefined1 *)(plVar2 + 6) = 1;
        *(undefined1 *)(lVar4 + 0x30) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x30) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)plVar2[2]) {
          plVar6 = (longlong *)plVar2[2];
          plVar2[2] = *plVar6;
          if (*(char *)(*plVar6 + 0x31) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x30) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x30) = 0;
        plVar7 = *(longlong **)(*plVar7 + 8);
        lVar4 = *plVar7;
        *plVar7 = *(longlong *)(lVar4 + 0x10);
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x31) == '\0') {
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
      if (*(char *)(lVar4 + 0x30) == '\0') {
        *(undefined1 *)(plVar2 + 6) = 1;
        *(undefined1 *)(lVar4 + 0x30) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x30) = 0;
        plVar6 = *(longlong **)(*plVar7 + 8);
      }
      else {
        if (plVar6 == (longlong *)*plVar2) {
          lVar4 = *plVar2;
          *plVar2 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x31) == '\0') {
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
        *(undefined1 *)(*plVar7 + 0x30) = 1;
        *(undefined1 *)(*(longlong *)(*plVar7 + 8) + 0x30) = 0;
        lVar4 = *(longlong *)(*plVar7 + 8);
        plVar7 = *(longlong **)(lVar4 + 0x10);
        *(longlong *)(lVar4 + 0x10) = *plVar7;
        if (*(char *)(*plVar7 + 0x31) == '\0') {
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
    cVar1 = *(char *)(*plVar7 + 0x30);
  }
  *(undefined1 *)(*(longlong *)(param_1[6] + 8) + 0x30) = 1;
  param_2[1] = plVar5;
  *param_2 = *param_1;
  return param_2;
}




exception * FUN_1419e36a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_1419e3700(undefined8 *param_1)

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




void FUN_1419e3750(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x31) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x31) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x31);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x31);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x31);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x31);
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




void FUN_1419e3840(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419e3860(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419e31c0((longlong)param_1);
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
    if (*(char *)(lVar4 + 0x31) == '\0') {
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (*(char *)((longlong)plVar6 + 0x31) == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x31);
        plVar5 = (longlong *)*plVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x31);
          plVar6 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        plVar6 = *(longlong **)(lVar4 + 8);
        cVar1 = *(char *)((longlong)plVar6 + 0x31);
        while ((cVar1 == '\0' && (param_3[1] == plVar6[2]))) {
          param_3[1] = (longlong)plVar6;
          plVar6 = (longlong *)plVar6[1];
          cVar1 = *(char *)((longlong)plVar6 + 0x31);
        }
      }
      param_3[1] = (longlong)plVar6;
    }
    else {
      _invalid_parameter_noinfo();
    }
    local_28 = lVar2;
    lStack_20 = lVar3;
    FUN_1419e2d50(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419e3a10(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1419e3240(param_1,param_2,param_3);
  return param_2;
}




void FUN_1419e3a30(longlong *param_1)

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
  FUN_1419e3860(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1419e3aa0(longlong *param_1,longlong *param_2,uint *param_3)

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
  if (*(char *)(plVar6[1] + 0x31) == '\0') {
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
    } while (*(char *)((longlong)plVar5 + 0x31) == '\0');
  }
  lVar2 = *param_1;
  plVar5 = plVar6;
  local_38 = lVar2;
  plVar4 = plVar6;
  if (bVar7 == false) {
LAB_1419e3bfd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419e3c2c;
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
      if (*(char *)((longlong)plVar6 + 0x31) == '\0') {
        plVar5 = (longlong *)*plVar6;
        if (*(char *)((longlong)plVar5 + 0x31) == '\0') {
          cVar1 = *(char *)(plVar5[2] + 0x31);
          plVar3 = (longlong *)plVar5[2];
          while (plVar4 = plVar5, cVar1 == '\0') {
            cVar1 = *(char *)(plVar3[2] + 0x31);
            plVar5 = plVar3;
            plVar3 = (longlong *)plVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(plVar6[1] + 0x31);
          plVar4 = (longlong *)plVar6[1];
          plVar3 = plVar6;
          while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
            cVar1 = *(char *)(plVar5[1] + 0x31);
            plVar4 = (longlong *)plVar5[1];
            plVar3 = plVar5;
            local_30 = plVar5;
          }
          plVar4 = plVar5;
          if (*(char *)((longlong)plVar3 + 0x31) != '\0') {
            _invalid_parameter_noinfo();
            plVar5 = plVar3;
            plVar4 = local_30;
          }
        }
      }
      else {
        plVar5 = (longlong *)plVar6[2];
        plVar4 = plVar5;
        if (*(char *)((longlong)plVar5 + 0x31) != '\0') {
          local_30 = plVar5;
          _invalid_parameter_noinfo();
          plVar4 = local_30;
        }
      }
      goto LAB_1419e3bfd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419e3360(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419e3c2c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419e3c50(undefined8 *param_1)

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




longlong FUN_1419e3ca0(longlong *param_1,uint *param_2)

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
  
  FUN_1419e3240(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x31) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x31) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x31);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x31);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x31);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x31);
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
  FUN_1419e3860(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




void FUN_1419e3de0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419e3e00(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_1419e3360(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_1419e3360(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_1419e3360(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
          if (*(char *)((longlong)local_30 + 0x31) == '\0') {
            plVar7 = (longlong *)*local_30;
            if (*(char *)((longlong)plVar7 + 0x31) == '\0') {
              cVar1 = *(char *)(plVar7[2] + 0x31);
              plVar9 = (longlong *)plVar7[2];
              while (local_30 = plVar7, cVar1 == '\0') {
                cVar1 = *(char *)(plVar9[2] + 0x31);
                plVar7 = plVar9;
                plVar9 = (longlong *)plVar9[2];
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x31);
              plVar5 = (longlong *)local_30[1];
              plVar9 = local_30;
              while ((plVar7 = plVar5, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
                cVar1 = *(char *)(plVar7[1] + 0x31);
                plVar5 = (longlong *)plVar7[1];
                plVar9 = plVar7;
              }
              local_30 = plVar7;
              if (*(char *)((longlong)plVar9 + 0x31) != '\0') {
                local_30 = plVar9;
                _invalid_parameter_noinfo();
                plVar7 = plVar9;
              }
            }
          }
          else {
            plVar7 = (longlong *)local_30[2];
            local_30 = plVar7;
            if (*(char *)((longlong)plVar7 + 0x31) != '\0') {
              _invalid_parameter_noinfo();
            }
          }
          uVar8 = *param_4;
          if (*(uint *)(plVar7 + 3) < uVar8) {
            if (*(char *)(plVar7[2] + 0x31) != '\0') {
              FUN_1419e3360(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_1419e3360(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
          if (*(char *)((longlong)local_30 + 0x31) == '\0') {
            plVar9 = (longlong *)local_30[2];
            if (*(char *)((longlong)plVar9 + 0x31) == '\0') {
              cVar1 = *(char *)(*plVar9 + 0x31);
              plVar5 = (longlong *)*plVar9;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*plVar5 + 0x31);
                plVar9 = plVar5;
                plVar5 = (longlong *)*plVar5;
              }
            }
            else {
              cVar1 = *(char *)(local_30[1] + 0x31);
              plVar6 = (longlong *)local_30[1];
              plVar5 = local_30;
              while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
                cVar1 = *(char *)(plVar9[1] + 0x31);
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
            if (*(char *)(((undefined8 *)param_3[1])[2] + 0x31) != '\0') {
              FUN_1419e3360(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_1419e3360(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1419e3aa0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




undefined8 * FUN_1419e4120(undefined8 *param_1)

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




undefined8 * FUN_1419e4170(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  uint local_38 [2];
  longlong local_30;
  __time64_t local_28;
  
  puVar4 = (undefined8 *)param_1[6];
  if (*(char *)((longlong)puVar4[1] + 0x31) == '\0') {
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
    } while (*(char *)((longlong)puVar2 + 0x31) == '\0');
  }
  plVar6 = (longlong *)*param_1;
  puVar1 = (undefined8 *)param_1[6];
  if (plVar6 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  lVar5 = 0;
  if ((puVar4 == puVar1) || (*param_2 < *(uint *)(puVar4 + 3))) {
    local_78 = SUB84(plVar6,0);
    uStack_74 = (undefined4)((ulonglong)plVar6 >> 0x20);
    uStack_70 = SUB84(puVar4,0);
    uStack_6c = (undefined4)((ulonglong)puVar4 >> 0x20);
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_28 = _time64((__time64_t *)0x0);
    local_38[0] = *param_2;
    local_30 = (ulonglong)uStack_64 << 0x20;
    plVar3 = FUN_1419e3e00(param_1,local_48,(longlong *)&local_58,local_38);
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




void FUN_1419e42a0(longlong *param_1)

{
  FUN_1419e3a30(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419e42d0(undefined8 *param_1)

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




void FUN_1419e4320(longlong *param_1)

{
  FUN_1419e3a30(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419e4350(undefined8 *param_1)

{
  *param_1 = training::CTrainingMgr::vftable;
  FUN_1419e3a30(param_1 + 3);
  operator_delete((void *)param_1[3]);
  return;
}




void FUN_1419e4390(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  __time64_t _Var3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint local_res10 [6];
  CMsg local_418 [1040];
  
  local_res10[0] = param_2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))();
  if (iVar2 == 0x259) {
LAB_1419e440c:
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2);
    if (iVar2 != 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
      if (cVar1 == '\0') {
        log_InlineLogERROR(&DAT_1419e8230);
      }
      else {
        FUN_1419e53d0(local_418);
        uVar5 = FUN_1419e5450((longlong)local_418,2,0);
        if ((char)uVar5 == '\0') {
          log_InlineLogERROR(&DAT_1419e8230);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_418);
        }
        FUN_1419e5420((undefined8 *)local_418);
      }
    }
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
      if (cVar1 != '\0') goto LAB_1419e440c;
    }
    _Var3 = _time64((__time64_t *)0x0);
    puVar4 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
    puVar4[1] = _Var3;
  }
  return;
}




ulonglong FUN_1419e44e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  __time64_t _Var8;
  undefined8 *puVar9;
  uint local_res10 [2];
  CMsg local_838 [1040];
  CMsg local_428 [1040];
  
  lVar1 = **(longlong **)(param_1 + 8);
  local_res10[0] = param_2;
  uVar4 = (**(code **)(lVar1 + 0xa0))(*(longlong **)(param_1 + 8));
  cVar2 = (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 8),uVar4);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
    if (cVar2 != '\0') {
      _Var8 = _time64((__time64_t *)0x0);
      puVar9 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
      puVar9[1] = _Var8;
    }
    _Var8 = _time64((__time64_t *)0x0);
    puVar9 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
    lVar1 = (_Var8 - puVar9[1]) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var8 - puVar9[1]),8);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
    uVar7 = FUN_1419e1ae0(param_1,param_2);
    if ((longlong)(int)uVar7 < (longlong)iVar5 + ((lVar1 >> 5) - (lVar1 >> 0x3f))) {
      uVar7 = FUN_1419e1ae0(param_1,param_2);
      bVar3 = (byte)uVar7;
    }
    else {
      _Var8 = _time64((__time64_t *)0x0);
      puVar9 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
      lVar1 = (_Var8 - puVar9[1]) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var8 - puVar9[1]),8);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
      bVar3 = cVar2 + ((char)(lVar1 >> 5) - (char)(lVar1 >> 0x3f));
    }
    FUN_1419e53d0(local_428);
    uVar6 = FUN_1419e5450((longlong)local_428,0,(uint)(ushort)((ushort)bVar3 * 10));
    if ((char)uVar6 == '\0') {
      log_InlineLogERROR(&DAT_1419e8230);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_428);
    }
    uVar6 = FUN_1419e5420((undefined8 *)local_428);
    uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  else {
    FUN_1419e53d0(local_838);
    uVar6 = FUN_1419e5450((longlong)local_838,5,0);
    if ((char)uVar6 == '\0') {
      log_InlineLogERROR(&DAT_1419e8230);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_838);
    }
    uVar7 = FUN_1419e5420((undefined8 *)local_838);
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}




undefined1 FUN_1419e4730(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  __time64_t _Var5;
  undefined8 *puVar6;
  longlong lVar7;
  char local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  local_res10[0] = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (cVar2 == '\0') {
    return 0;
  }
  local_res18[0] = 0;
  local_48 = 0;
  local_res20[0] = 0;
  local_38 = 0;
  FUN_1419e23d0(param_1,param_2,local_res18,&local_48);
  FUN_1419e1b70(param_1,param_2,local_res18[0],local_res20,&local_38,&local_44);
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),param_2,(int)*(double *)(param_1 + 0x10));
  _Var5 = _time64((__time64_t *)0x0);
  puVar6 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
  lVar1 = local_38;
  puVar6[1] = _Var5;
  local_res8[0] = '\0';
  if (local_res20[0] < 1) {
LAB_1419e483f:
    (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2,5,lVar1,1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),param_2,local_res20[0],local_res8);
    if (local_res8[0] == '\0') goto LAB_1419e483f;
    lVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8),param_2);
    if (lVar7 < lVar1) goto LAB_1419e483f;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,local_48 / 10 & 0xff,1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2,0,1);
  _Var5 = _time64((__time64_t *)0x0);
  puVar6 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
  puVar6[1] = _Var5;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
  if (cVar2 != '\0') {
    return 1;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))(*(longlong **)(param_1 + 8),param_2);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),&local_40,param_2);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),uVar4);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),uVar4,local_40,uStack_3c);
    if (cVar2 != '\0') goto LAB_1419e496d;
  }
  local_38 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),&local_38);
  local_40 = local_38._4_4_;
  uStack_3c = local_30;
  uVar4 = (undefined4)local_38;
LAB_1419e496d:
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),param_2,uVar4,CONCAT44(uStack_3c,local_40));
  return uVar3;
}




void FUN_1419e49a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  __time64_t _Var6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res10 [2];
  CMsg local_828 [1040];
  CMsg local_418 [1040];
  
  lVar1 = **(longlong **)(param_1 + 8);
  local_res10[0] = param_2;
  uVar3 = (**(code **)(lVar1 + 0xa0))(*(longlong **)(param_1 + 8));
  cVar2 = (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 8),uVar3);
  if (cVar2 == '\0') {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2);
    if (iVar4 == 0x259) {
      FUN_1419e53d0(local_828);
      uVar5 = FUN_1419e5450((longlong)local_828,1,0);
      if ((char)uVar5 == '\0') {
        log_InlineLogERROR(&DAT_1419e8230);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_828);
      }
      FUN_1419e5420((undefined8 *)local_828);
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2);
      if (cVar2 != '\0') {
        _Var6 = _time64((__time64_t *)0x0);
        puVar7 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
        lVar1 = (_Var6 - puVar7[1]) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var6 - puVar7[1]),8);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
        uVar9 = ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) + iVar4;
        uVar8 = FUN_1419e1ae0(param_1,param_2);
        if ((uint)uVar8 < uVar9) {
          uVar8 = FUN_1419e1ae0(param_1,param_2);
          uVar8 = uVar8 & 0xffffffff;
        }
        else {
          uVar8 = (ulonglong)(byte)uVar9;
        }
        (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,uVar8 & 0xff,0);
        _Var6 = _time64((__time64_t *)0x0);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,_Var6,0);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
        FUN_1419e53d0(local_418);
        uVar5 = FUN_1419e5450((longlong)local_418,1,0);
        if ((char)uVar5 == '\0') {
          log_InlineLogERROR(&DAT_1419e8230);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_418);
        }
        FUN_1419e5420((undefined8 *)local_418);
      }
    }
  }
  else {
    FUN_1419e53d0(local_828);
    uVar5 = FUN_1419e5450((longlong)local_828,5,0);
    if ((char)uVar5 == '\0') {
      log_InlineLogERROR(&DAT_1419e8230);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 8) + 200))(*(longlong **)(param_1 + 8),param_2,local_828);
    }
    FUN_1419e5420((undefined8 *)local_828);
  }
  return;
}




void FUN_1419e4c40(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  __time64_t _Var5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x98))();
  if (cVar2 != '\0') {
    lVar1 = **(longlong **)(param_1 + 8);
    uVar3 = (**(code **)(lVar1 + 0xa0))(*(longlong **)(param_1 + 8),param_2);
    cVar2 = (**(code **)(lVar1 + 0x90))(*(undefined8 *)(param_1 + 8),uVar3);
    if (((cVar2 == '\0') && (iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))(*(longlong **)(param_1 + 8),param_2), iVar4 != 0x259)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),param_2), cVar2 != '\0')) {
      _Var5 = _time64((__time64_t *)0x0);
      puVar6 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
      lVar1 = (_Var5 - puVar6[1]) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var5 - puVar6[1]),8);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
      uVar8 = ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) + iVar4;
      uVar7 = FUN_1419e1ae0(param_1,param_2);
      if ((uint)uVar7 < uVar8) {
        uVar7 = FUN_1419e1ae0(param_1,param_2);
        uVar7 = uVar7 & 0xffffffff;
      }
      else {
        uVar7 = (ulonglong)(byte)uVar8;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,uVar7 & 0xff,0);
      _Var5 = _time64((__time64_t *)0x0);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),param_2,_Var5,0);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2,1);
    }
  }
  return;
}




undefined8 * FUN_1419e4d90(undefined8 *param_1)

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
  lVar2 = FUN_1419e2a60();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x31) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419e4e10(undefined8 *param_1,uint param_2)

{
  *param_1 = training::CTrainingMgr::vftable;
  FUN_1419e3a30(param_1 + 3);
  operator_delete((void *)param_1[3]);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1419e4e80(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  __time64_t _Var4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res10 [2];
  
  local_res10[0] = param_2;
  FUN_1419e4c40(param_1,param_2);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))(*(longlong **)(param_1 + 8),param_2);
  if (cVar2 == '\0') {
    _Var4 = _time64((__time64_t *)0x0);
    puVar5 = FUN_1419e4170((longlong *)(param_1 + 0x18),local_res10);
    lVar1 = (_Var4 - puVar5[1]) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(_Var4 - puVar5[1]),8);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2);
    uVar7 = ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) + iVar3;
    uVar6 = FUN_1419e1ae0(param_1,param_2);
    if ((uint)uVar6 < uVar7) {
      uVar6 = FUN_1419e1ae0(param_1,param_2);
      uVar6 = uVar6 & 0xffffffff;
    }
    else {
      uVar6 = (ulonglong)(byte)uVar7;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),param_2,uVar6 & 0xff,1);
  }
  FUN_1419e3ca0((longlong *)(param_1 + 0x18),local_res10);
  return;
}




undefined8 * FUN_1419e4f60(undefined8 *param_1)

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
  lVar2 = FUN_1419e2a60();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x31) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1419e4fe0(undefined8 *param_1)

{
  *param_1 = training::CTrainingMgr::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1419e4f60(param_1 + 3);
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1419e5020(void)

{
  if ((DAT_1419ec328 & 1) == 0) {
    DAT_1419ec328 = DAT_1419ec328 | 1;
    _DAT_1419ec2d0 = training::CTrainingMgr::vftable;
    _DAT_1419ec2d8 = 0;
    _DAT_1419ec2e0 = 0;
    FUN_1419e4f60(&DAT_1419ec2e8);
    atexit(FUN_1419e7620);
  }
  return &DAT_1419ec2d0;
}




CMsg * FUN_1419e50b0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1419e50e0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1419e50f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419e50f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1419e5100(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419e5107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1419e5110(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419e5117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1419e5120(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419e5150(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = training::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419e51a0(undefined8 *param_1)

{
  *param_1 = training::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1419e51d0(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_1419e5200(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1419e5020();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  return;
}




undefined8 * FUN_1419e5240(undefined8 *param_1,byte param_2)

{
  *param_1 = training::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419e5290(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = training::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419e52e0(undefined8 *param_1)

{
  *param_1 = training::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_1419e5310(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_1419e5340(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1419e5020();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return;
}




undefined8 * FUN_1419e5380(undefined8 *param_1,byte param_2)

{
  *param_1 = training::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419e53d0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = training::CMsgTraining::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419e5420(undefined8 *param_1)

{
  *param_1 = training::CMsgTraining::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419e5450(longlong param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fc;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0xc;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




bool FUN_1419e5490(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7fc;
}




void FUN_1419e54c0(longlong param_1,undefined4 param_2)

{
  short sVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1419e5020();
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x408) + 4);
  if (sVar1 == 0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  else {
    if (sVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001419e5538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      return;
    }
    if (sVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001419e5522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      return;
    }
    if (sVar1 == 4) {
                    /* WARNING: Could not recover jumptable at 0x0001419e550c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
      return;
    }
  }
  return;
}




undefined8 * FUN_1419e5560(undefined8 *param_1,byte param_2)

{
  *param_1 = training::CMsgTraining::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419e55b0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = training::CMsgTrainingInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419e5600(undefined8 *param_1)

{
  *param_1 = training::CMsgTrainingInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419e5630(longlong param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5)

{
  **(undefined2 **)(param_1 + 0x408) = 0x10;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x7fb;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 6) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_5;
  return CONCAT71((uint7)(uint3)((uint)param_5 >> 8),1);
}




bool FUN_1419e5690(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x7fb;
}




undefined8 * FUN_1419e56c0(undefined8 *param_1,byte param_2)

{
  *param_1 = training::CMsgTrainingInfo::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1419ec360);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1419ec360);
    local_res18[0] = _decode_pointer(DAT_1419ec358);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1419ec360 = _encode_pointer(local_res10);
    DAT_1419ec358 = _encode_pointer(local_res18[0]);
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




bool FUN_1419e58c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1419ec358 = _encode_pointer(puVar1);
  DAT_1419ec360 = DAT_1419ec358;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1419e5df4();
    atexit(FUN_1419e5e2c);
    atexit((_func_5014 *)&LAB_1419e5de8);
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
    if (DAT_1419ec32c < 1) {
      return 0;
    }
    DAT_1419ec32c = DAT_1419ec32c + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1419ec348 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419ec348;
        pvVar3 = DAT_1419ec348;
      }
      DAT_1419ec348 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419e59a2;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419e59a2:
    if (DAT_1419ec340 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1419ec360);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1419ec358);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1419ec360);
            plVar12 = (longlong *)_decode_pointer(DAT_1419ec358);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1419ec358 = _encoded_null();
        DAT_1419ec360 = DAT_1419ec358;
      }
      DAT_1419ec340 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1419ec348 = (void *)0x0;
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
      bVar13 = DAT_1419ec348 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419ec348;
        pvVar3 = DAT_1419ec348;
      }
      DAT_1419ec348 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419e5acb;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419e5acb:
    if (DAT_1419ec340 == 0) {
      DAT_1419ec340 = 1;
      iVar4 = _initterm_e(&DAT_1419e8180,&DAT_1419e8190);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1419e8170,&DAT_1419e8178);
      DAT_1419ec340 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1419ec348 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1419ec350 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1419ec350), BVar5 != 0)) {
      (*DAT_1419ec350)(param_1,2,param_3);
    }
    DAT_1419ec32c = DAT_1419ec32c + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001419e5c44) */
/* WARNING: Removing unreachable block (ram,0x0001419e5bdb) */
/* WARNING: Removing unreachable block (ram,0x0001419e5c7f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1419ec32c == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1419ec2ac = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1419ec2ac = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_1419e12e0();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_1419e12e0();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1419ec2ac = 0xffffffff;
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




undefined8 FUN_1419e5cfc(undefined8 *param_1)

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




void FUN_1419e5df4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419e9b18; puVar1 < &DAT_1419e9b18; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1419e5e2c(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419e9b28; puVar1 < &DAT_1419e9b28; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_1419e0000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_1419e0000);
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
  if (DAT_1419ec2b8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1419ec2b8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1419ec2b8 == 0x2b992ddfa232) {
      DAT_1419ec2b8 = 0x2b992ddfa233;
    }
  }
  _DAT_1419ec2c0 = ~DAT_1419ec2b8;
  return;
}




void Unwind_1419e6050(undefined8 param_1,longlong param_2)

{
  FUN_1419e1000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6070(undefined8 param_1,longlong param_2)

{
  FUN_1419e51a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1419e6090(undefined8 param_1,longlong param_2)

{
  FUN_1419e52e0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1419e60b0(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_1419e60d0(undefined8 param_1,longlong param_2)

{
  FUN_1419e1000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e60f0(undefined8 param_1,longlong param_2)

{
  FUN_1419e51a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1419e6110(undefined8 param_1,longlong param_2)

{
  FUN_1419e52e0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1419e6130(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




void Unwind_1419e6150(undefined8 param_1,longlong param_2)

{
  FUN_1419e1000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6170(undefined8 param_1,longlong param_2)

{
  FUN_1419e51a0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_1419e6190(undefined8 param_1,longlong param_2)

{
  FUN_1419e52e0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1419e61b0(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x838));
  return;
}




undefined * Catch_1419e61d0(void)

{
  log_InlineLogCATCH_ERROR("training::pMsg->Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return &DAT_1419e1453;
}




void Unwind_1419e6220(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




undefined8 Catch_1419e6240(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE(pModule) @%s,%d");
  return 0x1419e14d1;
}




void Unwind_1419e6280(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e62a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e62c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e62e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6360(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e63a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e63c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e63e0(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6400(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6420(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6440(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6460(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e64a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e64c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e64e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6500(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6520(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6540(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6580(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e65a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e65c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e65e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419e6600(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419e6620(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419e6660(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419e6680(undefined8 param_1,longlong param_2)

{
  FUN_1419e5600((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_1419e66a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419e66c0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419e66f0(void)

{
  FUN_1419e1650();
  return;
}




void Catch_1419e6710(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419e6740(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e6760(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6780(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e67a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419e67c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419e67e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419e6800(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419e6820(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e68a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e68c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419e68e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419e6900(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419e6920(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419e6940(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6960(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6980(undefined8 param_1,longlong param_2)

{
  FUN_1419e16b0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419e69a0(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e69c0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e69e0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6a00(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6a20(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6a40(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e6a60(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6a80(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6aa0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ac0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ae0(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6b00(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6b20(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e6b40(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6b60(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6b80(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ba0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6bc0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6be0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6c00(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6c20(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6c40(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e6c60(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6c80(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ca0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6cc0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ce0(undefined8 param_1,longlong param_2)

{
  FUN_1419e42a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6d00(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6d20(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6d40(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6d60(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6d80(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6da0(undefined8 param_1,longlong param_2)

{
  FUN_1419e4320((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e6dc0(undefined8 param_1,longlong param_2)

{
  FUN_1419e42a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6de0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6e00(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6e20(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6e40(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6e60(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6e80(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ea0(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419e6ec0(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1419e6ee0(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419e6f00(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419e6f20(undefined8 param_1,longlong param_2)

{
  FUN_1419e5420((undefined8 *)(param_2 + 0x450));
  return;
}




void Unwind_1419e6f40(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e6f60(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6f80(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6fa0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6fc0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e6fe0(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7000(undefined8 param_1,longlong param_2)

{
  FUN_1419e4320((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e7020(undefined8 param_1,longlong param_2)

{
  FUN_1419e42a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7040(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7060(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7080(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e70a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e70c0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e70e0(void)

{
  FUN_1419e1650();
  return;
}




void Unwind_1419e7100(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7120(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7140(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7160(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7180(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e71a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e42a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419e71c0(undefined8 param_1,longlong param_2)

{
  FUN_1419e4320((longlong *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419e71e0(void)

{
  DAT_1419ec328 = DAT_1419ec328 & 0xfffffffe;
  return;
}




void Unwind_1419e7200(void)

{
  FUN_1419e4320(&DAT_1419ec2e8);
  return;
}




void Unwind_1419e7220(void)

{
  FUN_1419e4320(&DAT_1419ec2e8);
  return;
}




void Unwind_1419e7240(undefined8 param_1,longlong param_2)

{
  FUN_1419e42a0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7260(undefined8 param_1,longlong param_2)

{
  FUN_1419e3de0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7280(undefined8 param_1,longlong param_2)

{
  FUN_1419e3840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e72a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2c60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e72c0(undefined8 param_1,longlong param_2)

{
  FUN_1419e29a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e72e0(undefined8 param_1,longlong param_2)

{
  FUN_1419e2580(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7300(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7320(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1419e7340(void)

{
  log_InlineLogCATCH_ERROR("Training CMsgLogin::Process idActor:%d, msgType:%d @%s,%d");
  return 0x1419e522b;
}




void Unwind_1419e7390(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e73b0(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e73d0(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1419e73f0(void)

{
  log_InlineLogCATCH_ERROR("Training::Actor:%d,MsgType:%d @%s,%d");
  return 0x1419e536b;
}




void Unwind_1419e7440(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7460(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e7480(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419e74a0(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e74c0(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419e74e0(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419e7500(undefined8 param_1,longlong param_2)

{
  FUN_1419e50e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1419e7518(void)

{
  _unlock(8);
  return;
}




void FUN_1419e7531(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419e7561(void)

{
  _DAT_1419ec2ac = 0xffffffff;
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




bool FUN_1419e75f0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419e7620(void)

{
  _DAT_1419ec2d0 = training::CTrainingMgr::vftable;
  FUN_1419e3a30((longlong *)&DAT_1419ec2e8);
  operator_delete(DAT_1419ec2e8);
  return;
}




/* DONE: decompiled=317 failed=0 total=373 */
