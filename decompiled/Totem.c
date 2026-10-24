/* Decompiled by Ghidra 12.1.4 | program: Totem.dll
   image base: 141990000 | functions: 1214 */


void FUN_141991000(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141991010(void)

{
  return 0;
}




undefined8 FUN_141991020(void)

{
  return 0;
}




undefined8 FUN_141991030(void)

{
  return 0;
}




undefined8 FUN_141991040(void)

{
  return 0;
}




undefined8 * FUN_141991050(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141991080(void)

{
  log_InlineLogERROR(&DAT_1419ad2d0);
  return;
}




void FUN_1419910e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *param_1 = totem::CModule::vftable;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  FUN_1419a6b40(param_1 + 0x108);
  FUN_1419a6d70(param_1 + 0x86);
  FUN_1419a6660(param_1 + 4);
  *param_1 = gs::IModule::vftable;
  return;
}




void FUN_141991160(void)

{
  return;
}




ulonglong FUN_141991170(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




ulonglong FUN_141991190(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  undefined8 uVar2;
  ulonglong extraout_RAX_01;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(*(longlong **)(param_1 + 0x18),0x15);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  uVar2 = FUN_1419915c0(*(longlong *)(param_1 + 0x10),lVar1);
  if ((char)uVar2 == '\0') {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




longlong * FUN_141991260(longlong param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    uVar1 = param_2[1];
    if (uVar1 == 0x89a) {
      plVar3 = (longlong *)(param_1 + 0x430);
    }
    else if (uVar1 == 0x89b) {
      plVar3 = (longlong *)(param_1 + 0x20);
    }
    else {
      if (uVar1 != 0x89c) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x840);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




bool FUN_1419912d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_141991c60(puVar2);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  bVar3 = false;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),0x89b,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),0x89a,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),0x89c,param_1);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),0x15,*(undefined8 *)(param_1 + 0x10));
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}




undefined8 FUN_141991360(void)

{
  return 1;
}




undefined8 * FUN_141991370(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = totem::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = param_2;
  FUN_1419a6610((CMsg *)(param_1 + 4));
  FUN_1419a6d20((CMsg *)(param_1 + 0x86));
  FUN_1419a6af0((CMsg *)(param_1 + 0x108));
  return param_1;
}




undefined8 * FUN_1419913e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1419910e0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_141991410(longlong param_1,int param_2,ushort *param_3,ushort param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar1 = 0xffffffff;
  }
  else {
    plVar2 = FUN_141991260(param_1,param_3,param_4);
    uVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2,*(undefined8 *)(param_1 + 0x10));
      uVar1 = (ulonglong)*(ushort *)(plVar2 + 1);
    }
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
                    /* 0x14b0  1  ModuleCreate */
  puVar2 = operator_new(0xc50);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    param_3 = param_2 & 0xffffffff;
    plVar3 = FUN_141991370(puVar2,param_1,(int)param_2);
    uVar4 = param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1419912d0((longlong)plVar3,uVar4,param_3,param_4);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




void FUN_141991560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = totem::CProvider::vftable;
  if (param_1[2] != 0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
    }
    param_1[2] = 0;
    param_1[2] = 0;
  }
  return;
}




ulonglong FUN_1419915c0(longlong param_1,longlong param_2)

{
  ulonglong extraout_RAX;
  undefined8 *puVar1;
  ulonglong extraout_RAX_00;
  undefined *puVar2;
  ulonglong extraout_RAX_01;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *(longlong *)(param_1 + 8) = param_2;
  puVar1 = FUN_1419a40a0(param_2);
  *(undefined8 **)(param_1 + 0x10) = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  puVar2 = FUN_1419a5800();
  if (puVar2 == (undefined *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  FUN_1419a5810((longlong)puVar2,param_2);
  uVar3 = FUN_1419a4130(*(longlong *)(param_1 + 0x10));
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




ulonglong FUN_1419916c0(longlong param_1,uint param_2,uint param_3)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_1419a4c30(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined1 FUN_141991710(longlong param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  uVar1 = FUN_1419a5410(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




uint FUN_141991760(longlong param_1,uint param_2,byte param_3,longlong param_4)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_EAX & 0xffffff00;
  }
  uVar1 = FUN_1419a55a0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return uVar1;
}




uint FUN_1419917b0(longlong param_1,uint param_2,uint param_3)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_EAX & 0xffffff00;
  }
  uVar1 = FUN_1419a3140(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




undefined1 FUN_141991800(longlong param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  uVar1 = FUN_1419a3470(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return uVar1;
}




void FUN_141991850(longlong param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a37e0(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return;
}




void FUN_1419918a0(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a3890(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_1419918f0(longlong param_1,undefined8 param_2,longlong **param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a2480(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}




undefined4 FUN_141991940(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  uVar1 = FUN_1419a2a20(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_141991990(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a39a0(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




uint FUN_1419919e0(longlong param_1,int param_2,uint param_3)

{
  uint extraout_EAX;
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_EAX & 0xffffff00;
  }
  uVar1 = FUN_1419a3b20(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return uVar1;
}




void FUN_141991a30(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a3c20(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141991a80(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a3d60(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




undefined4 FUN_141991ad0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  uVar1 = FUN_1419a2a50(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




void FUN_141991b20(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a26e0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141991b70(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a38f0(*(longlong *)(param_1 + 0x10),param_2);
  return;
}




void FUN_141991bc0(longlong param_1,uint param_2,uint param_3)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a3970(*(longlong *)(param_1 + 0x10),param_2,param_3);
  return;
}




ulonglong FUN_141991c10(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  uVar1 = FUN_1419a3040(*(longlong *)(param_1 + 0x10),param_2);
  return uVar1;
}




undefined8 * FUN_141991c60(undefined8 *param_1)

{
  *param_1 = totem::CProvider::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_141991c80(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141991560(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




exception * FUN_141991cb0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141991d00(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141991d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141991d40(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141991d60(exception *param_1,uint param_2)

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




exception * FUN_141991dc0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141991e20(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141991e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141991e70(exception *param_1,uint param_2)

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




exception * FUN_141991ee0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141991f40(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141991f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141991f90(exception *param_1,uint param_2)

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




exception * FUN_141992090(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_1419920d0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x0001419920f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141992100(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141992160(void)

{
  return;
}




void FUN_141992170(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined4 FUN_141992190(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}




ulonglong FUN_1419921a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong extraout_RAX;
  longlong *plVar3;
  ulonglong extraout_RAX_00;
  longlong *plVar4;
  ulonglong extraout_RAX_01;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x38))(param_2);
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,1);
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
  if (iVar1 != iVar2) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_01 & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    log_InlineLogERROR("CTotem::CreateTotemAdd2, type:%d, idSyn:%u, m_pTotemAdd is Exist.");
    uVar5 = (**(code **)*plVar3)(plVar3,1);
    return uVar5 & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,4);
  iVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  iVar1 = tq::DateStamp(0);
  if (iVar2 < iVar1) {
    (**(code **)(*plVar3 + 0x40))(plVar3,0);
    uVar6 = (**(code **)*plVar3)(plVar3,1);
    return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  *(longlong **)(param_1 + 200) = plVar3;
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
}




undefined8 FUN_141992340(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong extraout_RAX;
  
  if (1 < param_2 - 1U) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(param_1 + 200);
  if (plVar3 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
    (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0xc4));
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),1);
    (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined4 *)(param_1 + 0xc0));
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
    (**(code **)(*plVar3 + 0xb0))(plVar3,param_2);
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),4);
    lVar1 = *plVar3;
    iVar2 = tq::DateStamp(0);
    iVar2 = tq::DateStampPass(iVar2,0x1e);
    (**(code **)(lVar1 + 0xb0))(plVar3,iVar2);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x38))(*(longlong **)(param_1 + 200),0);
    return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  plVar3 = (longlong *)InstanceGet();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,"cq_totem_add");
  *(longlong **)(param_1 + 200) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,2);
  (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined4 *)(param_1 + 0xc4));
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,*(undefined4 *)(param_1 + 0xc0));
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
  (**(code **)(*plVar3 + 0xb0))(plVar3,param_2);
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),4);
  lVar1 = *plVar3;
  iVar2 = tq::DateStamp(0);
  iVar2 = tq::DateStampPass(iVar2,0x1e);
  (**(code **)(lVar1 + 0xb0))(plVar3,iVar2);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x50))(*(longlong **)(param_1 + 200),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}




void FUN_141992560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0,param_3,param_4,0xfffffffffffffffe);
    if (*(longlong *)(param_1 + 200) != 0) {
      (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200),1);
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
    }
  }
  return;
}




undefined8 FUN_1419925d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 200) == 0) {
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),4);
                    /* WARNING: Could not recover jumptable at 0x000141992601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined8 FUN_141992610(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 200) == 0) {
    return 0;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
                    /* WARNING: Could not recover jumptable at 0x000141992641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  return uVar2;
}




undefined4 FUN_141992650(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}




int FUN_141992670(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = 0;
  iVar1 = iVar2;
  if (*(longlong *)(param_1 + 200) != 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
    iVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  if (2 < iVar1 + *(int *)(param_1 + 0xb8)) {
    return 3;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
    iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
  }
  return iVar2 + *(int *)(param_1 + 0xb8);
}




bool FUN_141992700(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return true;
  }
  iVar1 = FUN_1419a6080(param_2);
  iVar2 = FUN_1419a6080(param_3);
  if (iVar1 != iVar2) {
    iVar1 = FUN_1419a6080(param_2);
    iVar2 = FUN_1419a6080(param_3);
    return iVar2 < iVar1;
  }
  uVar3 = FUN_1419a5f80(param_2);
  uVar4 = FUN_1419a5f80(param_3);
  return uVar4 < uVar3;
}




undefined4 FUN_1419927b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}




bool FUN_141992920(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_141992970(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141992992;
  }
  lVar2 = *plVar1;
LAB_141992992:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_1419929b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419929d2;
  }
  lVar2 = *plVar1;
LAB_1419929d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_1419929f0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141992a30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141992b20(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
}




exception * FUN_141992b90(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_141992be0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




longlong FUN_141992cb0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void FUN_141992df0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141992e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141992e90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141992ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141992ff0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141993020;
  }
  else {
LAB_141993020:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 8;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_141993048;
  }
  _invalid_parameter_noinfo();
LAB_141993048:
  param_1[1] = param_1[1] + param_2 * 8;
  return param_1;
}




void FUN_141993060(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141993084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141993140(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1419931d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141993250(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_1419932d0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 * 0x28);
  return;
}




exception * FUN_1419933a0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_1419933d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 3;
}




void * FUN_141993460(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141993520(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_141993610(void *param_1,longlong param_2,void *param_3)

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




void FUN_141993650(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_3 < param_2) {
    do {
      lVar7 = (param_2 + -1) / 2;
      lVar1 = *(longlong *)(param_1 + lVar7 * 8);
      if (lVar1 == 0) break;
      if (param_4 != 0) {
        iVar3 = FUN_1419a6080(lVar1);
        iVar4 = FUN_1419a6080(param_4);
        if (iVar3 == iVar4) {
          uVar5 = FUN_1419a5f80(lVar1);
          uVar6 = FUN_1419a5f80(param_4);
          bVar2 = uVar6 < uVar5;
        }
        else {
          iVar3 = FUN_1419a6080(lVar1);
          iVar4 = FUN_1419a6080(param_4);
          bVar2 = iVar4 < iVar3;
        }
        if (!bVar2) break;
      }
      *(undefined8 *)(param_1 + param_2 * 8) = *(undefined8 *)(param_1 + lVar7 * 8);
      param_2 = lVar7;
    } while (param_3 < lVar7);
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  else {
    *(longlong *)(param_1 + param_2 * 8) = param_4;
  }
  return;
}




undefined * FUN_141993740(void)

{
  if ((DAT_1419b9328 & 1) == 0) {
    DAT_1419b9328 = DAT_1419b9328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9320,"CTotem");
    atexit((_func_5014 *)&LAB_1419ac850);
  }
  return &DAT_1419b9320;
}




void FUN_1419937a0(__uint64 param_1)

{
  if ((DAT_1419b9328 & 1) == 0) {
    DAT_1419b9328 = DAT_1419b9328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9320,"CTotem");
    atexit((_func_5014 *)&LAB_1419ac850);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419937f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1419b9320,param_1);
  return;
}




void FUN_141993800(void *param_1)

{
  if ((DAT_1419b9328 & 1) == 0) {
    DAT_1419b9328 = DAT_1419b9328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9320,"CTotem");
    atexit((_func_5014 *)&LAB_1419ac850);
  }
                    /* WARNING: Could not recover jumptable at 0x000141993855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1419b9320,param_1);
  return;
}




void FUN_141993860(void *param_1)

{
  if ((DAT_1419b9328 & 1) == 0) {
    DAT_1419b9328 = DAT_1419b9328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9320,"CTotem");
    atexit((_func_5014 *)&LAB_1419ac850);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419938b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1419b9320,param_1);
  return;
}




bool FUN_1419938d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141993910(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141993932;
  }
  lVar2 = *plVar1;
LAB_141993932:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141993950(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141993972;
  }
  lVar2 = *plVar1;
LAB_141993972:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 8;
  return param_1;
}




bool FUN_141993990(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




bool FUN_1419939d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141993a30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141993a40(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141993a70(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_141993a80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141993aa2;
  }
  lVar2 = *plVar1;
LAB_141993aa2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141993ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141993ae2;
  }
  lVar2 = *plVar1;
LAB_141993ae2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141993b40(longlong param_1,longlong param_2)

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




void FUN_141993ba0(longlong param_1,longlong *param_2)

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




void FUN_141993c30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141993ce0(longlong param_1,longlong param_2)

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




void FUN_141993d40(longlong param_1,longlong *param_2)

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




longlong * FUN_141993dc0(longlong *param_1)

{
  FUN_141992df0(param_1);
  return param_1;
}




void FUN_141993de0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141993e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141993e70(longlong *param_1)

{
  FUN_141992e90(param_1);
  return param_1;
}




void FUN_141993ec0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141993f30(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_141993fa0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x28)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 0x28);
  return;
}




longlong * FUN_141994010(longlong *param_1,longlong param_2)

{
  FUN_141992ff0(param_1,param_2);
  return param_1;
}




longlong * FUN_141994030(longlong *param_1)

{
  FUN_141993060(param_1);
  return param_1;
}




undefined8 * FUN_141994070(undefined8 *param_1)

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




undefined8 * FUN_1419940b0(undefined8 *param_1)

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




void * FUN_141994120(void *param_1,longlong param_2,longlong param_3)

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




longlong * FUN_141994160(longlong *param_1)

{
  FUN_141993060(param_1);
  return param_1;
}




void * FUN_1419941e0(void *param_1,longlong param_2,void *param_3)

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




void FUN_141994220(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  bVar2 = FUN_141992700(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  bVar2 = FUN_141992700(local_res20,*param_3,*param_2);
  if ((bVar2) && (param_3 != param_2)) {
    lVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = lVar1;
  }
  bVar2 = FUN_141992700(local_res20,*param_2,*param_1);
  if ((bVar2) && (param_2 != param_1)) {
    lVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = lVar1;
  }
  return;
}




void FUN_1419942c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = param_2;
  do {
    lVar8 = lVar9 * 2 + 2;
    if (param_3 <= lVar8) {
      if (lVar8 == param_3) {
        *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
        lVar9 = param_3 + -1;
      }
      FUN_141993650(param_1,lVar9,param_2,param_4);
      return;
    }
    lVar1 = *(longlong *)(param_1 + lVar8 * 8);
    lVar2 = *(longlong *)(param_1 + -8 + lVar8 * 8);
    if (lVar1 != 0) {
      if (lVar2 != 0) {
        iVar4 = FUN_1419a6080(lVar1);
        iVar5 = FUN_1419a6080(lVar2);
        if (iVar4 == iVar5) {
          uVar6 = FUN_1419a5f80(lVar1);
          uVar7 = FUN_1419a5f80(lVar2);
          bVar3 = uVar7 < uVar6;
        }
        else {
          iVar4 = FUN_1419a6080(lVar1);
          iVar5 = FUN_1419a6080(lVar2);
          bVar3 = iVar5 < iVar4;
        }
        if (!bVar3) goto LAB_141994362;
      }
      lVar8 = lVar9 * 2 + 1;
    }
LAB_141994362:
    *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + lVar8 * 8);
    lVar9 = lVar8;
  } while( true );
}




void * FUN_1419943d0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141994410(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  *param_3 = *param_1;
  FUN_1419942c0((longlong)param_1,0,param_2 - (longlong)param_1 >> 3,param_4);
  return;
}




longlong FUN_141994440(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141994462;
  }
  lVar2 = *plVar1;
LAB_141994462:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141994480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419944a2;
  }
  lVar2 = *plVar1;
LAB_1419944a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419944c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419944e2;
  }
  lVar2 = *plVar1;
LAB_1419944e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141994500(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141994520(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141994540(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141994560(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141994560(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 FUN_1419945b0(longlong param_1,ulonglong param_2)

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
      FUN_141992b20();
    }
    lVar1 = FUN_141993c30(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 8;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




void FUN_141994620(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_141994650(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x21);
  while (cVar1 == '\0') {
    FUN_141994650(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x21);
  }
  return;
}




longlong * FUN_1419946a0(longlong *param_1)

{
  FUN_141992df0(param_1);
  return param_1;
}




longlong * FUN_1419946c0(longlong *param_1)

{
  FUN_141993de0(param_1);
  return param_1;
}




longlong * FUN_1419946e0(longlong *param_1)

{
  FUN_141992e90(param_1);
  return param_1;
}




undefined8 * FUN_141994700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_141994780(undefined8 *param_1)

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




undefined8 * FUN_1419947c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_141994840(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141994880(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141993de0(param_1);
  return param_2;
}




longlong * FUN_1419948b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14199491a;
  }
  _invalid_parameter_noinfo();
LAB_14199491a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141994950(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1419949b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419949f0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141993060(param_1);
  return param_2;
}




void FUN_141994a20(void)

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




void FUN_141994a80(void)

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




undefined8 * FUN_141994ae0(undefined8 *param_1)

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




undefined8 * FUN_141994b30(undefined8 *param_1)

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




void * FUN_141994b80(void *param_1,longlong param_2,void *param_3)

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




void * FUN_141994bf0(void *param_1,longlong param_2,longlong param_3)

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




void FUN_141994c40(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_141994d40(void *param_1,longlong param_2,void *param_3)

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




void FUN_141994d80(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141994220(param_1,param_1 + lVar1,param_1 + lVar1 * 2,param_4);
    FUN_141994220(param_2 + -lVar1,param_2,param_2 + lVar1,param_4);
    FUN_141994220(param_3 + lVar1 * -2,param_3 + -lVar1,param_3,param_4);
    FUN_141994220(param_1 + lVar1,param_2,param_3 + -lVar1,param_4);
    return;
  }
  FUN_141994220(param_1,param_2,param_3,param_4);
  return;
}




void FUN_141994e60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  lVar2 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  while (0 < lVar2) {
    lVar1 = lVar2 * 8;
    lVar2 = lVar2 + -1;
    FUN_1419942c0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
  }
  return;
}




void FUN_141994ee0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((param_1 != param_2) && (plVar9 = param_1 + 1, plVar9 != param_2)) {
    lVar10 = (longlong)plVar9 - (longlong)param_1;
    do {
      lVar1 = *plVar9;
      lVar7 = *param_1;
      plVar8 = plVar9;
      if (lVar1 == 0) {
LAB_141994fc0:
        while( true ) {
          lVar7 = plVar8[-1];
          if (lVar1 == 0) break;
          if (lVar7 != 0) {
            iVar3 = FUN_1419a6080(lVar7);
            iVar4 = FUN_1419a6080(lVar1);
            if (iVar4 == iVar3) {
              uVar5 = FUN_1419a5f80(lVar7);
              uVar6 = FUN_1419a5f80(lVar1);
              bVar2 = uVar5 < uVar6;
            }
            else {
              iVar3 = FUN_1419a6080(lVar7);
              iVar4 = FUN_1419a6080(lVar1);
              bVar2 = iVar3 < iVar4;
            }
            if (!bVar2) break;
          }
          *plVar8 = plVar8[-1];
          plVar8 = plVar8 + -1;
        }
        *plVar8 = lVar1;
      }
      else {
        if (lVar7 != 0) {
          iVar3 = FUN_1419a6080(lVar7);
          iVar4 = FUN_1419a6080(lVar1);
          if (iVar4 == iVar3) {
            uVar5 = FUN_1419a5f80(lVar7);
            uVar6 = FUN_1419a5f80(lVar1);
            bVar2 = uVar5 < uVar6;
          }
          else {
            iVar3 = FUN_1419a6080(lVar7);
            iVar4 = FUN_1419a6080(lVar1);
            bVar2 = iVar3 < iVar4;
          }
          if (!bVar2) goto LAB_141994fc0;
        }
        lVar7 = lVar10 >> 3;
        if (0 < lVar7) {
          memmove_s(plVar9 + (1 - lVar7),lVar7 * 8,param_1,lVar7 * 8);
        }
        *param_1 = lVar1;
      }
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (plVar9 != param_2);
  }
  return;
}




void FUN_141995070(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -8);
  *(undefined8 *)(param_2 + -8) = *param_1;
  FUN_1419942c0((longlong)param_1,0,(param_2 - (longlong)param_1) + -8 >> 3,lVar1);
  return;
}




void FUN_1419950a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141994560(param_1,(longlong *)plVar2[2]);
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




void FUN_141995120(undefined8 *param_1)

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




void FUN_141995160(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x21);
  while (cVar1 == '\0') {
    FUN_141994650(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_1419951e0(longlong *param_1)

{
  FUN_141993de0(param_1);
  return param_1;
}




void FUN_141995200(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141995220(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141995240(undefined8 *param_1)

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




undefined8 * FUN_141995290(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419952d0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_141995330(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141995370(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419953c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419b7ea0);
  }
  FUN_141993de0(param_3);
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
        goto LAB_1419955ac;
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
LAB_1419955ac:
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
            FUN_141993b40((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141993ba0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141993b40((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141993ba0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141993b40((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141993ba0((longlong)param_1,plVar7);
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




exception * FUN_141995780(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




undefined8 * FUN_1419957e0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_1419958c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141994a20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141995900(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141995950(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419b7ea0);
  }
  FUN_141993060(param_3);
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
        goto LAB_141995b3c;
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
LAB_141995b3c:
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
            FUN_141993ce0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(*plVar8 + 0x20) != '\x01') || (*(char *)(plVar8[2] + 0x20) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x20) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_141993d40((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(plVar8[2] + 0x20) = 1;
              FUN_141993ce0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 4) = 0;
          }
        }
        else {
          if ((char)plVar8[4] == '\0') {
            *(undefined1 *)(plVar8 + 4) = 1;
            *(undefined1 *)(plVar7 + 4) = 0;
            FUN_141993d40((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x21) == '\0') {
            if ((*(char *)(plVar8[2] + 0x20) != '\x01') || (*(char *)(*plVar8 + 0x20) != '\x01')) {
              if (*(char *)(*plVar8 + 0x20) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x20) = 1;
                *(undefined1 *)(plVar8 + 4) = 0;
                FUN_141993ce0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 4) = (char)plVar7[4];
              *(undefined1 *)(plVar7 + 4) = 1;
              *(undefined1 *)(*plVar8 + 0x20) = 1;
              FUN_141993d40((longlong)param_1,plVar7);
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




undefined8 * FUN_141995d10(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_141995df0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141994a80();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x21) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141995e30(undefined8 *param_1)

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




undefined8 * FUN_141995e80(undefined8 *param_1)

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




void FUN_141995f10(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_141996000(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
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




void * FUN_141996100(void *param_1,longlong param_2,void *param_3)

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




void FUN_141996140(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar12 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 3) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_141994d80(param_2,plVar12,param_3 + -1,param_4);
  plVar9 = plVar12;
  do {
    do {
      plVar13 = plVar9;
      if (plVar13 <= param_2) goto joined_r0x000141996267;
      lVar1 = plVar13[-1];
      lVar2 = *plVar13;
      plVar9 = plVar13 + -1;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141996267;
        iVar5 = FUN_1419a6080(lVar1);
        iVar6 = FUN_1419a6080(lVar2);
        if (iVar5 == iVar6) {
          uVar7 = FUN_1419a5f80(lVar1);
          uVar8 = FUN_1419a5f80(lVar2);
          bVar3 = uVar8 < uVar7;
        }
        else {
          iVar5 = FUN_1419a6080(lVar1);
          iVar6 = FUN_1419a6080(lVar2);
          bVar3 = iVar6 < iVar5;
        }
        if (bVar3) goto joined_r0x000141996267;
      }
      lVar1 = *plVar13;
      lVar2 = *plVar9;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar5 = FUN_1419a6080(lVar1);
    iVar6 = FUN_1419a6080(lVar2);
    if (iVar5 == iVar6) {
      uVar7 = FUN_1419a5f80(lVar1);
      uVar8 = FUN_1419a5f80(lVar2);
      bVar3 = uVar8 < uVar7;
    }
    else {
      iVar5 = FUN_1419a6080(lVar1);
      iVar6 = FUN_1419a6080(lVar2);
      bVar3 = iVar6 < iVar5;
    }
  } while (!bVar3);
joined_r0x000141996267:
  do {
    do {
      plVar12 = plVar12 + 1;
      plVar9 = plVar12;
      plVar11 = plVar13;
      if (param_3 <= plVar12) goto joined_r0x000141996343;
      lVar1 = *plVar12;
      lVar2 = *plVar13;
      if (lVar1 != 0) {
        if (lVar2 == 0) goto joined_r0x000141996343;
        iVar5 = FUN_1419a6080(lVar1);
        iVar6 = FUN_1419a6080(lVar2);
        if (iVar5 == iVar6) {
          uVar7 = FUN_1419a5f80(lVar1);
          uVar8 = FUN_1419a5f80(lVar2);
          bVar3 = uVar8 < uVar7;
        }
        else {
          iVar5 = FUN_1419a6080(lVar1);
          iVar6 = FUN_1419a6080(lVar2);
          bVar3 = iVar6 < iVar5;
        }
        if (bVar3) goto joined_r0x000141996343;
      }
      lVar1 = *plVar13;
      lVar2 = *plVar12;
    } while (lVar1 == 0);
    if (lVar2 == 0) break;
    iVar5 = FUN_1419a6080(lVar1);
    iVar6 = FUN_1419a6080(lVar2);
    if (iVar5 == iVar6) {
      uVar7 = FUN_1419a5f80(lVar1);
      uVar8 = FUN_1419a5f80(lVar2);
      bVar3 = uVar8 < uVar7;
    }
    else {
      iVar5 = FUN_1419a6080(lVar1);
      iVar6 = FUN_1419a6080(lVar2);
      bVar3 = iVar6 < iVar5;
    }
  } while (!bVar3);
joined_r0x000141996343:
  do {
    plVar10 = plVar11;
    plVar4 = plVar9;
    plVar9 = plVar13;
    if (param_3 <= plVar4) goto joined_r0x00014199642f;
    lVar1 = *plVar10;
    lVar2 = *plVar4;
    if (lVar1 == 0) {
LAB_1419963ab:
      lVar1 = *plVar4;
      lVar2 = *plVar10;
      if (lVar1 != 0) {
        if (lVar2 != 0) {
          iVar5 = FUN_1419a6080(lVar1);
          iVar6 = FUN_1419a6080(lVar2);
          if (iVar5 == iVar6) {
            uVar7 = FUN_1419a5f80(lVar1);
            uVar8 = FUN_1419a5f80(lVar2);
            bVar3 = uVar8 < uVar7;
          }
          else {
            iVar5 = FUN_1419a6080(lVar1);
            iVar6 = FUN_1419a6080(lVar2);
            bVar3 = iVar6 < iVar5;
          }
          if (!bVar3) goto LAB_141996402;
        }
joined_r0x00014199642f:
        for (; param_2 < plVar13; plVar13 = plVar13 + -1) {
          plVar9 = plVar9 + -1;
          lVar1 = *plVar9;
          lVar2 = *plVar10;
          if (lVar1 == 0) {
LAB_14199649c:
            lVar1 = *plVar10;
            lVar2 = *plVar9;
            if (lVar1 != 0) {
              if (lVar2 == 0) break;
              iVar5 = FUN_1419a6080(lVar1);
              iVar6 = FUN_1419a6080(lVar2);
              if (iVar5 == iVar6) {
                uVar7 = FUN_1419a5f80(lVar1);
                uVar8 = FUN_1419a5f80(lVar2);
                bVar3 = uVar8 < uVar7;
              }
              else {
                iVar5 = FUN_1419a6080(lVar1);
                iVar6 = FUN_1419a6080(lVar2);
                bVar3 = iVar6 < iVar5;
              }
              if (bVar3) break;
            }
            plVar10 = plVar10 + -1;
            if (plVar10 != plVar9) {
              lVar1 = *plVar10;
              *plVar10 = *plVar9;
              *plVar9 = lVar1;
            }
          }
          else if (lVar2 != 0) {
            iVar5 = FUN_1419a6080(lVar1);
            iVar6 = FUN_1419a6080(lVar2);
            if (iVar5 == iVar6) {
              uVar7 = FUN_1419a5f80(lVar1);
              uVar8 = FUN_1419a5f80(lVar2);
              bVar3 = uVar8 < uVar7;
            }
            else {
              iVar5 = FUN_1419a6080(lVar1);
              iVar6 = FUN_1419a6080(lVar2);
              bVar3 = iVar6 < iVar5;
            }
            if (!bVar3) goto LAB_14199649c;
          }
        }
        if (plVar13 == param_2) {
          if (plVar4 == param_3) {
            *param_1 = plVar10;
            param_1[1] = plVar12;
            return;
          }
          if ((plVar12 != plVar4) && (plVar10 != plVar12)) {
            lVar1 = *plVar10;
            *plVar10 = *plVar12;
            *plVar12 = lVar1;
          }
          plVar12 = plVar12 + 1;
          plVar9 = plVar4 + 1;
          plVar11 = plVar10 + 1;
          if (plVar10 != plVar4) {
            lVar1 = *plVar10;
            *plVar10 = *plVar4;
            *plVar4 = lVar1;
          }
        }
        else {
          plVar13 = plVar13 + -1;
          if (plVar4 == param_3) {
            plVar11 = plVar10 + -1;
            if (plVar13 != plVar11) {
              lVar1 = *plVar13;
              *plVar13 = *plVar11;
              *plVar11 = lVar1;
            }
            plVar12 = plVar12 + -1;
            plVar9 = plVar4;
            if (plVar11 != plVar12) {
              lVar1 = *plVar11;
              *plVar11 = *plVar12;
              *plVar12 = lVar1;
            }
          }
          else {
            if (plVar4 != plVar13) {
              lVar1 = *plVar4;
              *plVar4 = *plVar13;
              *plVar13 = lVar1;
            }
            plVar9 = plVar4 + 1;
            plVar11 = plVar10;
          }
        }
        goto joined_r0x000141996343;
      }
LAB_141996402:
      plVar11 = plVar12 + 1;
      if (plVar12 != plVar4) {
        lVar1 = *plVar12;
        *plVar12 = *plVar4;
        *plVar4 = lVar1;
      }
    }
    else {
      plVar11 = plVar12;
      if (lVar2 != 0) {
        iVar5 = FUN_1419a6080(lVar1);
        iVar6 = FUN_1419a6080(lVar2);
        if (iVar5 == iVar6) {
          uVar7 = FUN_1419a5f80(lVar1);
          uVar8 = FUN_1419a5f80(lVar2);
          bVar3 = uVar8 < uVar7;
        }
        else {
          iVar5 = FUN_1419a6080(lVar1);
          iVar6 = FUN_1419a6080(lVar2);
          bVar3 = iVar6 < iVar5;
        }
        if (!bVar3) goto LAB_1419963ab;
      }
    }
    plVar9 = plVar4 + 1;
    plVar12 = plVar11;
    plVar11 = plVar10;
  } while( true );
}




void FUN_141996600(longlong param_1,longlong param_2)

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
      FUN_1419942c0(param_1,lVar2,lVar3,*(longlong *)(param_1 + -8 + lVar1));
    }
  }
  return;
}




void FUN_141996680(longlong *param_1,longlong *param_2)

{
  FUN_141994ee0(param_1,param_2);
  return;
}




void FUN_1419966a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (8 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
    lVar1 = *(longlong *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1419942c0((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 8U) >> 3,lVar1);
  }
  return;
}




undefined8 * FUN_141996720(undefined8 *param_1)

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




undefined8 * FUN_141996780(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_1419967d0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141996840(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141996860(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141996880(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419950a0((longlong)param_1);
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
    FUN_1419953c0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141996a70(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1419957e0(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_141996a90(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
  }
  plVar5 = FUN_141994700(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_141996dd0(longlong *param_1)

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
  FUN_141996880(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141996e40(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_141996ea0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




longlong * FUN_141996fb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141995160((longlong)param_1);
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
    FUN_141995950(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_1419971a0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141995d10(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1419971c0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
  }
  plVar5 = FUN_1419947c0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




void FUN_141997500(longlong *param_1)

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
  FUN_141996fb0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_141997570(undefined8 *param_1)

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




undefined8 * FUN_1419975c0(undefined8 *param_1)

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




void FUN_141997610(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
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




void * FUN_141997730(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_141997770(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar2 = param_2 - (longlong)param_1; 1 < lVar2 >> 3; lVar2 = lVar2 + -8) {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2 + -8);
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = *param_1;
    FUN_1419942c0((longlong)param_1,0,lVar2 + -8 >> 3,lVar1);
  }
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419977e0(longlong param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_4f8 [32];
  CMsg local_488 [1040];
  undefined4 local_78;
  uint local_74;
  char local_70 [16];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_1419b9300 ^ (ulonglong)auStackY_4f8;
  if ((param_3 == 0) || (param_4 <= param_3)) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_1419a6d20(local_488);
  if (*(longlong *)(param_1 + 200) == 0) {
    uVar4 = 0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),4);
    uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 200) + 0x10))(*(longlong **)(param_1 + 200),3);
    uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
  }
  FUN_1419a6da0(local_488,0,param_3,param_4,(int)*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),uVar5,uVar4,
                *(undefined4 *)(param_1 + 0xbc));
  plVar6 = *(longlong **)(param_1 + 0x60);
  if (*(longlong **)(param_1 + 0x68) < plVar6) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 < *(longlong **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  uVar9 = 1;
  do {
    if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar3)) {
      _invalid_parameter_noinfo();
    }
    if (plVar6 == plVar2) goto LAB_141997a5f;
    if (uVar9 < param_3) {
      if (param_4 < uVar9) goto LAB_141997a5f;
    }
    else {
      if (param_4 < uVar9) {
LAB_141997a5f:
        FUN_1419a7070((longlong)local_488);
        (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x38))(*(longlong **)(param_1 + 0xd0),param_2,local_488);
        FUN_1419a6d70((undefined8 *)local_488);
        return;
      }
      if (plVar1 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar1;
      }
      if (*(longlong **)(lVar10 + 0x20) <= plVar6) {
        _invalid_parameter_noinfo();
      }
      lVar10 = *plVar6;
      if (lVar10 == 0) {
        log_InlineLogERROR("CTotem::SendWeaponsInfo NULL Weapons");
      }
      else {
        memset(&local_78,0,0x28);
        local_78 = FUN_1419a5f80(lVar10);
        local_74 = uVar9;
        pcVar7 = (char *)FUN_1419a5f90(lVar10);
        tq::SafeCopy(local_70,pcVar7,0x10);
        local_60 = FUN_1419a5fb0(lVar10);
        local_5b = FUN_1419a6000(lVar10);
        local_5c = FUN_1419a5fe0(lVar10);
        local_5a = FUN_1419a6020(lVar10);
        local_59 = FUN_1419a6040(lVar10);
        local_58 = FUN_1419a6220(lVar10);
        local_54 = FUN_1419a6080(lVar10);
        uVar8 = FUN_1419a6e80((longlong)local_488,&local_78);
        if ((char)uVar8 == '\0') goto LAB_141997a5f;
      }
    }
    uVar9 = uVar9 + 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar1;
    }
    if (*(longlong **)(lVar10 + 0x20) <= plVar6) {
      _invalid_parameter_noinfo();
    }
    plVar6 = plVar6 + 1;
  } while( true );
}




void FUN_141997ae0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 8);
  puVar4 = (undefined8 *)*puVar2;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar7 = puVar4;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (puVar7 == puVar2) {
            iVar5 = *(int *)(param_1 + 0xbc);
            if (iVar5 < 10000000) {
              if (iVar5 < 4000000) {
                if (1999999 < iVar5) {
                  *(undefined4 *)(param_1 + 0xb8) = 1;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0xb8) = 2;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0xb8) = 3;
            }
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar3;
          }
          if (puVar7 == *(undefined8 **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (puVar7[4] != 0) {
            iVar5 = FUN_1419a6080(puVar7[4]);
            *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + iVar5;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar4 = puVar7;
        }
        puVar4 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar7 = (undefined8 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x29);
          puVar4 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      puVar4 = (undefined8 *)puVar7[1];
    } while (*(char *)((longlong)puVar4 + 0x29) != '\0');
    do {
      puVar6 = puVar4;
      puVar4 = puVar6;
      if (puVar7 != (undefined8 *)puVar6[2]) break;
      puVar4 = (undefined8 *)puVar6[1];
      puVar7 = puVar6;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  } while( true );
}




int FUN_141997c40(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 8);
  iVar8 = 0;
  puVar4 = (undefined8 *)*puVar2;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar7 = puVar4;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (puVar7 == puVar2) {
            return iVar8;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar3;
          }
          if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          lVar9 = puVar7[4];
          if ((lVar9 != 0) && (iVar5 = FUN_1419a5fc0(lVar9), param_2 == iVar5)) {
            iVar5 = FUN_1419a6080(lVar9);
            iVar8 = iVar8 + iVar5;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar4 = puVar7;
        }
        puVar4 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar7 = (undefined8 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x29);
          puVar4 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      puVar4 = (undefined8 *)puVar7[1];
    } while (*(char *)((longlong)puVar4 + 0x29) != '\0');
    do {
      puVar6 = puVar4;
      puVar4 = puVar6;
      if (puVar7 != (undefined8 *)puVar6[2]) break;
      puVar4 = (undefined8 *)puVar6[1];
      puVar7 = puVar6;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_141997d60(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_141997ebd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_141997eec;
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
      goto LAB_141997ebd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141996a90(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_141997eec:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_141997f10(longlong *param_1,uint *param_2)

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
  
  FUN_1419957e0(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
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
  FUN_141996880(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_141998050(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141998120(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




void FUN_1419981b0(longlong *param_1)

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




longlong * FUN_141998270(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419983cd:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419983fc;
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
      goto LAB_1419983cd;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419971c0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419983fc:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong FUN_141998420(longlong *param_1,uint *param_2)

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
  
  FUN_141995d10(param_1,&local_38,param_2);
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
  FUN_141996fb0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




longlong * FUN_141998560(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_141998630(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141998650(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419986a0(undefined8 *param_1)

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




void FUN_1419986f0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141992b20();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_141993c30(param_1 + 0x10,uVar8);
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
      FUN_141997730(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 8));
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
      pvVar2 = FUN_141997730(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_141994bf0(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined8 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 * FUN_1419989a0(undefined8 *param_1)

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




void FUN_1419989f0(undefined8 *param_1,longlong param_2)

{
  FUN_141997770(param_1,param_2);
  return;
}




void FUN_141998a00(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200),1);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  plVar7 = (longlong *)FUN_1419a5800();
  if (plVar7 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    puVar8 = (undefined8 *)*puVar2;
    plVar3 = *(longlong **)(param_1 + 8);
    while( true ) {
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (puVar8 == puVar2) break;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar3;
      }
      if (puVar8 == *(undefined8 **)(lVar9 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (puVar8[4] != 0) {
        uVar6 = FUN_1419a5f80(puVar8[4]);
        FUN_1419a5ba0(plVar7,uVar6);
      }
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      if (*(char *)((longlong)puVar8 + 0x29) == '\0') {
        puVar4 = (undefined8 *)puVar8[2];
        if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x29);
          puVar8 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((longlong)*puVar4 + 0x29);
            puVar8 = puVar4;
            puVar4 = (undefined8 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
          puVar5 = (undefined8 *)puVar8[1];
          puVar4 = puVar8;
          while ((puVar8 = puVar5, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar8[2]))) {
            cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
            puVar5 = (undefined8 *)puVar8[1];
            puVar4 = puVar8;
          }
        }
      }
      else {
        _invalid_parameter_noinfo();
      }
    }
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
    cVar1 = *(char *)((longlong)plVar7 + 0x29);
    while (cVar1 == '\0') {
      FUN_141994560(param_1 + 8,(longlong *)plVar7[2]);
      plVar3 = (longlong *)*plVar7;
      operator_delete(plVar7);
      plVar7 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x29);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
    FUN_1419981b0((longlong *)(param_1 + 0x48));
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 8);
    cVar1 = *(char *)((longlong)plVar7 + 0x21);
    while (cVar1 == '\0') {
      FUN_141994650(param_1 + 0x78,(longlong *)plVar7[2]);
      plVar3 = (longlong *)*plVar7;
      operator_delete(plVar7);
      plVar7 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x21);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8) = *(longlong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)*(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}




undefined8 FUN_141998c60(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
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
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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




void FUN_141998d60(longlong param_1,uint param_2)

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
  
  plVar1 = (longlong *)(param_1 + 0x78);
  puVar9 = (undefined8 *)(*(undefined8 **)(param_1 + 0xa8))[1];
  cVar3 = *(char *)((longlong)puVar9 + 0x21);
  puVar5 = *(undefined8 **)(param_1 + 0xa8);
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
  puVar9 = *(undefined8 **)(param_1 + 0xa8);
  local_50 = puVar5;
  local_58 = *plVar1;
  if (*plVar1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar5 == puVar9) || (param_2 < *(uint *)(puVar5 + 3))) {
    plVar8 = &local_48;
    local_40 = *(undefined8 *)(param_1 + 0xa8);
    local_48 = *plVar1;
  }
  else {
    plVar8 = &local_58;
  }
  plVar4 = (longlong *)*plVar8;
  lVar10 = *(longlong *)(param_1 + 0xa8);
  local_38 = plVar4;
  local_30 = plVar8[1];
  if ((plVar4 == (longlong *)0x0) || (plVar4 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  lVar6 = local_30;
  if (local_30 == lVar10) {
    local_res8[1] = 1;
    local_res8[0] = param_2;
    FUN_141998270(plVar1,(longlong *)&local_38,local_res8);
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




void FUN_141998e80(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar7 = (undefined8 *)(*(undefined8 **)(param_1 + 0xa8))[1];
  cVar1 = *(char *)((longlong)puVar7 + 0x21);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x21);
  }
  puVar7 = *(undefined8 **)(param_1 + 0xa8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar7) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar6 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xa8);
    local_28 = *(longlong *)(param_1 + 0x78);
  }
  else {
    plVar6 = &local_38;
  }
  plVar2 = (longlong *)*plVar6;
  lVar8 = *(longlong *)(param_1 + 0xa8);
  local_18 = plVar2;
  local_10 = plVar6[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x78))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 != lVar8) {
    lVar8 = 0;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = lVar8;
    }
    else {
      lVar9 = *plVar2;
    }
    if (lVar4 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if (0 < *(int *)(lVar4 + 0x1c)) {
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
      }
      else {
        lVar8 = *plVar2;
      }
      if (lVar4 == *(longlong *)(lVar8 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + -1;
      return;
    }
  }
  log_InlineLogERROR("CTotem::ReduceRegNum, num = 0, idUser:%u");
  return;
}




undefined4 FUN_141998fd0(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0xa8))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x21);
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x21);
  }
  puVar8 = *(undefined8 **)(param_1 + 0xa8);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0xa8);
    local_28 = *(longlong *)(param_1 + 0x78);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0xa8);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x78))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar5 = 0;
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
    uVar5 = *(undefined4 *)(lVar4 + 0x1c);
  }
  return uVar5;
}




ulonglong FUN_1419990e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  rsize_t _DstSize;
  longlong *_Dst;
  uint local_res10 [2];
  
  if (param_2 != 0) {
    uVar1 = FUN_1419a5f80(param_2);
    local_res10[0] = uVar1;
    FUN_141997f10((longlong *)(param_1 + 8),local_res10);
    plVar2 = *(longlong **)(param_1 + 0x68);
    if (plVar2 < *(longlong **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    _Dst = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x68) < _Dst) {
      _invalid_parameter_noinfo();
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    for (; (_Dst != plVar2 && (*_Dst != param_2)); _Dst = _Dst + 1) {
    }
    plVar2 = *(longlong **)(param_1 + 0x68);
    if (plVar2 < *(longlong **)(param_1 + 0x60)) {
      _invalid_parameter_noinfo();
    }
    if ((lVar4 == 0) || (lVar4 != *(longlong *)(param_1 + 0x48))) {
      _invalid_parameter_noinfo();
    }
    if (_Dst != plVar2) {
      lVar4 = *(longlong *)(param_1 + 0x68) - (longlong)(_Dst + 1) >> 3;
      if (0 < lVar4) {
        _DstSize = lVar4 << 3;
        memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -8;
      if ((_Dst < *(longlong **)(param_1 + 0x60)) || (*(longlong **)(param_1 + 0x68) < _Dst)) {
        _invalid_parameter_noinfo();
      }
    }
    plVar2 = (longlong *)FUN_1419a5800();
    uVar3 = FUN_1419a5ba0(plVar2,uVar1);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




void FUN_141999210(longlong *param_1)

{
  FUN_141996dd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141999240(longlong *param_1)

{
  FUN_141997500(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141999270(undefined8 *param_1)

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
  lVar2 = FUN_141994a20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_1419992f0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1419986f0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1419993e4;
  }
  _invalid_parameter_noinfo();
LAB_1419993e4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141999420(undefined8 *param_1)

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
  lVar2 = FUN_141994a80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419994a0(longlong *param_1,longlong *param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  longlong *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 3;
    if (lVar2 < 0x21) {
LAB_141999577:
      if (1 < lVar2) {
        FUN_141994ee0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        FUN_141996600((longlong)param_1,(longlong)param_2);
        FUN_141997770(param_1,(longlong)param_2);
        return;
      }
      goto LAB_141999577;
    }
    FUN_141996140(&local_18,param_1,param_2,param_4);
    plVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff8U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff8U)) {
      FUN_1419994a0(param_1,local_18,param_3,param_4);
      param_1 = plVar1;
    }
    else {
      FUN_1419994a0(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_1419995d0(longlong *param_1)

{
  FUN_141996dd0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141999600(longlong *param_1)

{
  FUN_141997500(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141999630(undefined8 *param_1)

{
  *param_1 = totem::CTotem::vftable;
  FUN_141997500(param_1 + 0xf);
  operator_delete((void *)param_1[0xf]);
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  operator_delete((void *)param_1[9]);
  FUN_141996dd0(param_1 + 1);
  operator_delete((void *)param_1[1]);
  return;
}




undefined8 * FUN_1419996d0(undefined8 *param_1)

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
  lVar2 = FUN_141994a20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141999750(longlong *param_1,undefined8 *param_2)

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
  FUN_1419992f0(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_141999800(undefined8 *param_1)

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
  lVar2 = FUN_141994a80();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x21) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141999880(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_1419994a0((longlong *)param_1[1],(longlong *)param_2[1],param_2[1] - param_1[1] >> 3,param_3);
  return;
}




undefined8 * FUN_1419998e0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = totem::CTotem::vftable;
  FUN_1419996d0(param_1 + 1);
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 9);
    plVar2 = plVar1;
  }
  param_1[9] = plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_141999800(param_1 + 0xf);
  param_1[0x1a] = param_4;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  return param_1;
}




undefined8 * FUN_1419999c0(undefined8 *param_1,uint param_2)

{
  FUN_141999630(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141993800(param_1);
  }
  return param_1;
}




undefined8 * FUN_1419999f0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if ((DAT_1419b9328 & 1) == 0) {
    DAT_1419b9328 = DAT_1419b9328 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9320,"CTotem");
    atexit((_func_5014 *)&LAB_1419ac850);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_1419b9320,0xd8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1419998e0(puVar1,param_1,param_2,param_3);
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0,"CHECKF","pTotem","f:\\version\\cqserver-78.0.11-1204\\modules\\totem\\src\\totem.cpp",0x29);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_141999ac0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 < *(longlong **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x68) < plVar2) {
    _invalid_parameter_noinfo();
  }
  if ((lVar3 == 0) || (lVar3 != *(longlong *)(param_1 + 0x48))) {
    _invalid_parameter_noinfo();
  }
  FUN_1419994a0(plVar2,plVar1,(longlong)plVar1 - (longlong)plVar2 >> 3,0);
  return;
}




void FUN_141999b50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_c0 [3];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_80;
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
  }
  else {
    bVar2 = false;
    plVar9 = (longlong *)**(undefined8 **)(param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 8);
    plVar11 = *(longlong **)(param_1 + 0x38);
    local_res20 = plVar11;
    local_90 = plVar1;
    local_78 = plVar1;
    local_res18 = operator_new(8);
    if (local_res18 == (longlong *)0x0) {
      local_c0[0] = (longlong *)0x0;
    }
    else {
      *local_res18 = (longlong)local_c0;
      local_c0[0] = local_res18;
    }
    local_a8 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    local_98 = 0;
    local_78 = local_res18;
    puVar8 = FUN_1419a5800();
    plVar12 = plVar1;
    if (puVar8 == (undefined *)0x0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      if (local_a8 != (longlong *)0x0) {
        operator_delete(local_a8);
      }
      local_a8 = (longlong *)0x0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      operator_delete(local_c0[0]);
    }
    else {
LAB_141999c90:
      if ((plVar1 == (longlong *)0x0) || (plVar1 != plVar12)) {
        _invalid_parameter_noinfo();
      }
      plVar12 = local_a8;
      if (plVar9 != plVar11) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar1;
        }
        if (plVar9 == *(longlong **)(lVar13 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar12 = (longlong *)plVar9[4];
        local_res18 = plVar12;
        if (plVar12 != (longlong *)0x0) {
          uVar5 = FUN_1419a5f80((longlong)plVar12);
          uVar6 = FUN_1419a5fc0((longlong)plVar12);
          if (uVar6 == param_2) {
            FUN_141999750((longlong *)local_c0,&local_res18);
            bVar2 = true;
          }
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x70))(*(longlong **)(param_1 + 0xd0),param_2);
          plVar11 = local_res20;
          if ((cVar4 != '\0') &&
             (cVar4 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 8))(*(longlong **)(param_1 + 0xd0),param_2,uVar5), plVar11 = local_res20, cVar4 != '\0')) {
            (**(code **)**(undefined8 **)(param_1 + 0xd0))(*(undefined8 **)(param_1 + 0xd0),uVar5,0,1,1);
            iVar7 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x20))(*(longlong **)(param_1 + 0xd0),uVar5,7,1);
            if (((200 < iVar7) && (iVar7 < 0xcc)) || (iVar7 == 0xd0)) {
              (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x78))(*(longlong **)(param_1 + 0xd0),param_2,uVar5);
            }
            tq::MyLogSave("gmlog/totem","CTotem::EraseUserInfo user:%u, WriteOff item:%u");
            plVar11 = local_res20;
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)plVar9 + 0x29) == '\0') {
          plVar10 = plVar9;
          plVar3 = (longlong *)plVar9[2];
          plVar12 = local_90;
          if (*(char *)(plVar9[2] + 0x29) == '\0') {
            do {
              plVar9 = plVar3;
              plVar3 = (longlong *)*plVar9;
              local_80 = plVar9;
            } while (*(char *)(*plVar9 + 0x29) == '\0');
          }
          else {
            do {
              plVar9 = (longlong *)plVar10[1];
              if (*(char *)((longlong)plVar9 + 0x29) != '\0') break;
              bVar14 = plVar10 == (longlong *)plVar9[2];
              plVar10 = plVar9;
            } while (bVar14);
          }
        }
        else {
          _invalid_parameter_noinfo();
          plVar12 = local_90;
        }
        goto LAB_141999c90;
      }
      local_58 = (longlong *)0x0;
      if (local_a0 < local_a8) {
        _invalid_parameter_noinfo();
      }
      plVar1 = local_a0;
      plVar9 = local_c0[0];
      local_58 = local_c0[0];
      local_68 = (longlong *)0x0;
      if (local_a0 < local_a8) {
        _invalid_parameter_noinfo();
      }
      plVar11 = local_c0[0];
      local_68 = local_c0[0];
      while( true ) {
        if ((plVar9 == (longlong *)0x0) || (plVar9 != plVar11)) {
          _invalid_parameter_noinfo();
        }
        if (plVar12 == plVar1) break;
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar9;
        }
        if (*(longlong **)(lVar13 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        FUN_1419990e0(param_1,*plVar12);
        if (plVar9 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar9;
        }
        if (*(longlong **)(lVar13 + 0x20) <= plVar12) {
          _invalid_parameter_noinfo();
        }
        plVar12 = plVar12 + 1;
      }
      if (bVar2) {
        FUN_141997ae0(param_1);
        FUN_141999ac0(param_1);
      }
      FUN_141998420((longlong *)(param_1 + 0x78),local_res10);
      if (local_a8 != (longlong *)0x0) {
        operator_delete(local_a8);
      }
      local_a8 = (longlong *)0x0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      operator_delete(local_c0[0]);
    }
  }
  return;
}




ulonglong FUN_141999f60(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong local_res10;
  uint local_38 [2];
  longlong local_30;
  longlong local_28 [2];
  char local_18;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  local_38[0] = FUN_1419a5f80(param_2);
  local_30 = param_2;
  FUN_141997d60((longlong *)(param_1 + 8),local_28,local_38);
  if (local_18 == '\0') {
    log_InlineLogERROR("CTotem::AddWeapons Weapons exist, id:%u");
    uVar2 = extraout_RAX_00 & 0xffffffffffffff00;
  }
  else {
    FUN_141999750((longlong *)(param_1 + 0x48),&local_res10);
    uVar1 = FUN_1419a5fc0(param_2);
    uVar3 = FUN_141998d60(param_1,uVar1);
    if (param_3 == '\0') {
      FUN_141997ae0(param_1);
      uVar3 = FUN_141999ac0(param_1);
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar2;
}




ulonglong FUN_14199a060(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong extraout_RAX;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX_00;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  lVar2 = FUN_141998c60(param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_1419a5fc0(lVar2);
  uVar3 = FUN_1419990e0(param_1,lVar2);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  FUN_141997ae0(param_1);
  FUN_141997c40(param_1,uVar1);
  FUN_141998e80(param_1,uVar1);
  uVar3 = FUN_141999ac0(param_1);
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




undefined4 FUN_14199a150(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}




undefined4 FUN_14199a170(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}




undefined4 FUN_14199a180(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}




bool FUN_14199a250(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_14199a2f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199a312;
  }
  lVar2 = *plVar1;
LAB_14199a312:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14199a330(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199a352;
  }
  lVar2 = *plVar1;
LAB_14199a352:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_14199a370(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong FUN_14199a3b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199a3d2;
  }
  lVar2 = *plVar1;
LAB_14199a3d2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14199a3f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199a412;
  }
  lVar2 = *plVar1;
LAB_14199a412:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_14199a430(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_14199a500(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
}




longlong FUN_14199a570(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_14199a5b0(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
}




longlong * FUN_14199a700(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_14199a730;
  }
  else {
LAB_14199a730:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_14199a758;
  }
  _invalid_parameter_noinfo();
LAB_14199a758:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_14199a780(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_14199a810(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 << 2);
  return;
}




void FUN_14199a8a0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 * 0x30);
  return;
}




longlong FUN_14199a940(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void * FUN_14199aa30(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14199ab20(void *param_1,longlong param_2,void *param_3)

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




undefined * FUN_14199abb0(void)

{
  if ((DAT_1419b9338 & 1) == 0) {
    DAT_1419b9338 = DAT_1419b9338 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9330,"CTotemPole");
    atexit((_func_5014 *)&LAB_1419ac860);
  }
  return &DAT_1419b9330;
}




void FUN_14199ac10(__uint64 param_1)

{
  if ((DAT_1419b9338 & 1) == 0) {
    DAT_1419b9338 = DAT_1419b9338 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9330,"CTotemPole");
    atexit((_func_5014 *)&LAB_1419ac860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014199ac65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1419b9330,param_1);
  return;
}




void FUN_14199ac70(void *param_1)

{
  if ((DAT_1419b9338 & 1) == 0) {
    DAT_1419b9338 = DAT_1419b9338 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9330,"CTotemPole");
    atexit((_func_5014 *)&LAB_1419ac860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014199acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1419b9330,param_1);
  return;
}




void FUN_14199acd0(void *param_1)

{
  if ((DAT_1419b9338 & 1) == 0) {
    DAT_1419b9338 = DAT_1419b9338 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9330,"CTotemPole");
    atexit((_func_5014 *)&LAB_1419ac860);
  }
                    /* WARNING: Could not recover jumptable at 0x00014199ad25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1419b9330,param_1);
  return;
}




undefined8 FUN_14199ad30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




bool FUN_14199ad40(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_14199ad80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199ada2;
  }
  lVar2 = *plVar1;
LAB_14199ada2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14199adc0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199ade2;
  }
  lVar2 = *plVar1;
LAB_14199ade2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_14199ae00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_14199ae40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199ae62;
  }
  lVar2 = *plVar1;
LAB_14199ae62:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_14199ae80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199aea2;
  }
  lVar2 = *plVar1;
LAB_14199aea2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 4;
  return param_1;
}




bool FUN_14199aec0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_14199af00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199af30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14199af40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199af62;
  }
  lVar2 = *plVar1;
LAB_14199af62:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14199af80(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199af90(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_14199b040(longlong param_1,longlong param_2)

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




void FUN_14199b0a0(longlong param_1,longlong *param_2)

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




void FUN_14199b120(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 4)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 4);
  return;
}




void FUN_14199b190(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014199b1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_14199b270(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_14199b2e0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014199b312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_14199b380(longlong *param_1,longlong param_2)

{
  FUN_14199a700(param_1,param_2);
  return param_1;
}




undefined8 * FUN_14199b3b0(undefined8 *param_1)

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




void * FUN_14199b420(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14199b4c0(void *param_1,longlong param_2,void *param_3)

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




void FUN_14199b540(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_2;
  while( true ) {
    lVar3 = lVar1 * 2 + 2;
    if (param_3 <= lVar3) break;
    if (*(int *)(param_1 + lVar3 * 4) < *(int *)(param_1 + -4 + lVar3 * 4)) {
      lVar3 = lVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar3 * 4);
    lVar1 = lVar3;
  }
  if (lVar3 == param_3) {
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar1 = param_3 + -1;
  }
  while (param_2 < lVar1) {
    lVar3 = (lVar1 + -1) / 2;
    iVar2 = *(int *)(param_1 + lVar3 * 4);
    if (param_4 <= iVar2) break;
    *(int *)(param_1 + lVar1 * 4) = iVar2;
    lVar1 = lVar3;
  }
  *(int *)(param_1 + lVar1 * 4) = param_4;
  return;
}




void * FUN_14199b5d0(void *param_1,longlong param_2,longlong param_3)

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




longlong FUN_14199b630(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199b652;
  }
  lVar2 = *plVar1;
LAB_14199b652:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_14199b670(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_14199b692;
  }
  lVar2 = *plVar1;
LAB_14199b692:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_14199b6b0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199b6d0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199b6f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199b710(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14199b710(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




longlong * FUN_14199b760(longlong *param_1)

{
  FUN_14199b190(param_1);
  return param_1;
}




undefined8 FUN_14199b780(longlong param_1,ulonglong param_2)

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
      FUN_14199a500();
    }
    lVar1 = FUN_14199b120(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 FUN_14199b7e0(longlong param_1,ulonglong param_2)

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
      FUN_14199a5b0();
    }
    lVar1 = FUN_14199af90(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    lVar1 = lVar1 + param_2 * 4;
    *(longlong *)(param_1 + 0x28) = lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_14199b840(undefined8 *param_1)

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




undefined8 * FUN_14199b880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_14199b900(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_14199b940(longlong *param_1)

{
  FUN_14199b2e0(param_1);
  return param_1;
}




undefined8 * FUN_14199b970(undefined8 *param_1)

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




longlong * FUN_14199b9b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_14199ba1a;
  }
  _invalid_parameter_noinfo();
LAB_14199ba1a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_14199ba50(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_14199bac0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14199bb20(void)

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




longlong * FUN_14199bb80(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14199b190(param_1);
  return param_2;
}




undefined8 * FUN_14199bbb0(undefined8 *param_1)

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




void * FUN_14199bc30(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_14199bce0(void *param_1,longlong param_2,void *param_3)

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




void FUN_14199bd20(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    iVar2 = *param_2;
    if ((iVar2 < *param_1) && (param_2 != param_1)) {
      *param_2 = *param_1;
      *param_1 = iVar2;
    }
    iVar2 = *param_3;
    if ((iVar2 < *param_2) && (param_3 != param_2)) {
      *param_3 = *param_2;
      *param_2 = iVar2;
    }
    iVar2 = *param_2;
    if ((iVar2 < *param_1) && (param_2 != param_1)) {
      *param_2 = *param_1;
      *param_1 = iVar2;
    }
  }
  else {
    lVar3 = lVar3 + 1;
    lVar3 = (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 7)) >> 3;
    iVar2 = param_1[lVar3];
    piVar1 = param_1 + lVar3;
    piVar5 = param_1 + lVar3 * 2;
    if ((iVar2 < *param_1) && (piVar1 != param_1)) {
      *piVar1 = *param_1;
      *param_1 = iVar2;
    }
    iVar2 = *piVar5;
    if ((iVar2 < *piVar1) && (piVar5 != piVar1)) {
      *piVar5 = *piVar1;
      *piVar1 = iVar2;
    }
    iVar2 = *piVar1;
    if ((iVar2 < *param_1) && (piVar1 != param_1)) {
      *piVar1 = *param_1;
      *param_1 = iVar2;
    }
    iVar2 = *param_2;
    piVar5 = param_2 + lVar3;
    piVar4 = param_2 + -lVar3;
    if ((iVar2 < *piVar4) && (param_2 != piVar4)) {
      *param_2 = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = *piVar5;
    if ((iVar2 < *param_2) && (piVar5 != param_2)) {
      *piVar5 = *param_2;
      *param_2 = iVar2;
    }
    iVar2 = *param_2;
    if ((iVar2 < *piVar4) && (param_2 != piVar4)) {
      *param_2 = *piVar4;
      *piVar4 = iVar2;
    }
    piVar5 = param_3 + -lVar3;
    piVar4 = param_3 + lVar3 * -2;
    iVar2 = *piVar5;
    if ((iVar2 < *piVar4) && (piVar5 != piVar4)) {
      *piVar5 = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = *param_3;
    if ((iVar2 < *piVar5) && (param_3 != piVar5)) {
      *param_3 = *piVar5;
      *piVar5 = iVar2;
    }
    iVar2 = *piVar5;
    if ((iVar2 < *piVar4) && (piVar5 != piVar4)) {
      *piVar5 = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = *param_2;
    if ((iVar2 < *piVar1) && (param_2 != piVar1)) {
      *param_2 = *piVar1;
      *piVar1 = iVar2;
    }
    iVar2 = *piVar5;
    if ((iVar2 < *param_2) && (piVar5 != param_2)) {
      *piVar5 = *param_2;
      *param_2 = iVar2;
    }
    iVar2 = *param_2;
    if ((iVar2 < *piVar1) && (param_2 != piVar1)) {
      *param_2 = *piVar1;
      *piVar1 = iVar2;
      return;
    }
  }
  return;
}




void FUN_14199bed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_2 - param_1 >> 2;
  lVar4 = lVar7 - (param_2 - param_1 >> 0x3f) >> 1;
  if (0 < lVar4) {
    lVar6 = lVar4 * 2 + 2;
    do {
      iVar2 = *(int *)(param_1 + -4 + lVar4 * 4);
      lVar4 = lVar4 + -1;
      lVar6 = lVar6 + -2;
      lVar1 = lVar4;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        if (*(int *)(param_1 + lVar5 * 4) < *(int *)(param_1 + -4 + lVar5 * 4)) {
          lVar5 = lVar5 + -1;
        }
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
        lVar1 = lVar5;
      }
      if (lVar5 == lVar7) {
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + lVar7 * 4);
        lVar1 = lVar7 + -1;
      }
      while (lVar4 < lVar1) {
        lVar5 = (lVar1 + -1) / 2;
        iVar3 = *(int *)(param_1 + lVar5 * 4);
        if (iVar2 <= iVar3) break;
        *(int *)(param_1 + lVar1 * 4) = iVar3;
        lVar1 = lVar5;
      }
      *(int *)(param_1 + lVar1 * 4) = iVar2;
    } while (0 < lVar4);
  }
  return;
}




void FUN_14199bfb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar1 = *piVar5;
      if (iVar1 < *param_1) {
        lVar4 = (longlong)piVar5 - (longlong)param_1 >> 2;
        if (0 < lVar4) {
          memmove_s(piVar5 + (1 - lVar4),lVar4 * 4,param_1,lVar4 * 4);
        }
        *param_1 = iVar1;
      }
      else {
        iVar2 = piVar5[-1];
        piVar3 = piVar5;
        while (iVar1 < iVar2) {
          *piVar3 = iVar2;
          iVar2 = piVar3[-2];
          piVar3 = piVar3 + -1;
        }
        *piVar3 = iVar1;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}




void FUN_14199c090(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_14199b710(param_1,(longlong *)plVar2[2]);
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




longlong * FUN_14199c110(longlong *param_1)

{
  FUN_14199b190(param_1);
  return param_1;
}




void FUN_14199c130(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14199c150(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_14199c190(longlong *param_1)

{
  FUN_14199b2e0(param_1);
  return param_1;
}




void FUN_14199c1b0(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_14199c1e0(undefined8 *param_1)

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




undefined8 * FUN_14199c230(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14199c290(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_14199c2c0(undefined8 *param_1)

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




undefined8 * FUN_14199c310(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_14199c370(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14199bb20();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_14199c3b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_14199c400(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419b7ea0);
  }
  FUN_14199b190(param_3);
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
        goto LAB_14199c5ec;
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
LAB_14199c5ec:
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
            FUN_14199b040((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14199b0a0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_14199b040((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_14199b0a0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14199b040((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_14199b0a0((longlong)param_1,plVar7);
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




undefined8 * FUN_14199c7c0(undefined8 *param_1)

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




void * FUN_14199c870(void *param_1,longlong param_2,void *param_3)

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




ulonglong * FUN_14199c8b0(ulonglong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar6 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 2) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_14199bd20(param_2,piVar6,param_3 + -1);
  piVar7 = piVar6 + 1;
  while (piVar9 = piVar6, param_2 < piVar9) {
    if ((piVar9[-1] < *piVar9) || (piVar6 = piVar9 + -1, *piVar9 < piVar9[-1])) break;
  }
  piVar6 = piVar7;
  piVar4 = piVar9;
  if (piVar7 < param_3) {
    do {
      piVar6 = piVar7;
      if ((*piVar7 < *piVar9) || (*piVar9 < *piVar7)) break;
      piVar7 = piVar7 + 1;
      piVar6 = piVar7;
    } while (piVar7 < param_3);
  }
joined_r0x00014199c93b:
  do {
    piVar3 = piVar6;
    piVar6 = piVar9;
    piVar5 = piVar4;
    if (param_3 <= piVar3) {
joined_r0x00014199c96b:
      for (; param_2 < piVar9; piVar9 = piVar9 + -1) {
        piVar6 = piVar6 + -1;
        iVar1 = *piVar6;
        if (*piVar5 <= iVar1) {
          if (*piVar5 < iVar1) break;
          piVar5 = piVar5 + -1;
          if (piVar5 != piVar6) {
            iVar2 = *piVar5;
            *piVar5 = iVar1;
            *piVar6 = iVar2;
          }
        }
      }
      if (piVar9 == param_2) {
        if (piVar3 == param_3) {
          *param_1 = (ulonglong)piVar5;
          param_1[1] = (ulonglong)piVar7;
          return param_1;
        }
        if ((piVar7 != piVar3) && (piVar5 != piVar7)) {
          iVar1 = *piVar5;
          *piVar5 = *piVar7;
          *piVar7 = iVar1;
        }
        piVar7 = piVar7 + 1;
        piVar6 = piVar3 + 1;
        piVar4 = piVar5 + 1;
        if (piVar5 != piVar3) {
          iVar1 = *piVar5;
          *piVar5 = *piVar3;
          *piVar3 = iVar1;
        }
      }
      else {
        piVar9 = piVar9 + -1;
        if (piVar3 == param_3) {
          piVar4 = piVar5 + -1;
          if (piVar9 != piVar4) {
            iVar1 = *piVar9;
            *piVar9 = *piVar4;
            *piVar4 = iVar1;
          }
          piVar7 = piVar7 + -1;
          piVar6 = piVar3;
          if (piVar4 != piVar7) {
            iVar1 = *piVar4;
            *piVar4 = *piVar7;
            *piVar7 = iVar1;
          }
        }
        else {
          if (piVar3 != piVar9) {
            iVar1 = *piVar3;
            *piVar3 = *piVar9;
            *piVar9 = iVar1;
          }
          piVar6 = piVar3 + 1;
          piVar4 = piVar5;
        }
      }
      goto joined_r0x00014199c93b;
    }
    iVar1 = *piVar3;
    piVar8 = piVar7;
    if (iVar1 <= *piVar4) {
      if (iVar1 < *piVar4) goto joined_r0x00014199c96b;
      piVar8 = piVar7 + 1;
      if (piVar7 != piVar3) {
        iVar2 = *piVar7;
        *piVar7 = iVar1;
        *piVar3 = iVar2;
      }
    }
    piVar6 = piVar3 + 1;
    piVar7 = piVar8;
  } while( true );
}




void FUN_14199ca60(longlong param_1,longlong param_2)

{
  if (4 < (longlong)(param_2 - param_1 & 0xfffffffffffffffcU)) {
    FUN_14199bed0(param_1,param_2);
  }
  return;
}




void FUN_14199caa0(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  
  if (4 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
    iVar1 = *(int *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    FUN_14199b540((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 4U) >> 2,iVar1);
  }
  return;
}




undefined8 * FUN_14199cb20(undefined8 *param_1)

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




void FUN_14199cb80(undefined8 *param_1)

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




undefined8 * FUN_14199cbc0(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14199cc10(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14199cc60(undefined8 *param_1)

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




void FUN_14199ccc0(undefined8 *param_1)

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




undefined8 * FUN_14199cd00(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_14199cd50(undefined8 *param_1,undefined8 *param_2)

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




void FUN_14199cda0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14199ce00(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
  }
  plVar5 = FUN_14199b880(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_14199d140(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_14199c090((longlong)param_1);
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
    FUN_14199c400(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_14199d2f0(undefined8 *param_1)

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




void * FUN_14199d370(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




void FUN_14199d3b0(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = param_2 - (longlong)param_1;
  do {
    if (lVar6 >> 2 < 2) {
      return;
    }
    iVar1 = *(int *)((longlong)param_1 + lVar6 + -4);
    lVar4 = lVar6 + -4 >> 2;
    lVar2 = 2;
    lVar3 = 0;
    bVar7 = lVar4 == 2;
    *(undefined4 *)((longlong)param_1 + lVar6 + -4) = *param_1;
    lVar5 = lVar3;
    if (2 < lVar4) {
      do {
        lVar3 = lVar2;
        if ((int)param_1[lVar2] < (int)param_1[lVar2 + -1]) {
          lVar3 = lVar2 + -1;
        }
        param_1[lVar5] = param_1[lVar3];
        lVar2 = lVar3 * 2 + 2;
        bVar7 = lVar2 == lVar4;
        lVar5 = lVar3;
      } while (lVar2 < lVar4);
    }
    if (bVar7) {
      param_1[lVar3] = param_1[lVar4 + -1];
      lVar3 = lVar4 + -1;
    }
    while (0 < lVar3) {
      lVar2 = (lVar3 + -1) / 2;
      if (iVar1 <= (int)param_1[lVar2]) break;
      param_1[lVar3] = param_1[lVar2];
      lVar3 = lVar2;
    }
    lVar6 = lVar6 + -4;
    param_1[lVar3] = iVar1;
  } while( true );
}




undefined1 FUN_14199d470(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  
  plVar2 = (longlong *)*param_1;
  uVar9 = 0;
  uVar6 = param_2;
  plVar3 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar7 = plVar3;
          plVar3 = (longlong *)param_1[6];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar7 == plVar3) {
            return uVar9;
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
          if (lVar8 == 0) {
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x11);
            log_InlineLogERROR("CTotemPole::ClearOldTotemAdd, NULL Data, idSyn:%u");
          }
          else {
            uVar4 = FUN_1419925d0(lVar8);
            if ((int)uVar4 <= (int)param_2) {
              uVar9 = 1;
              FUN_141992560(lVar8,uVar6,param_3,param_4);
            }
          }
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar7;
        }
        plVar3 = (longlong *)plVar7[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar7 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar7 + 0x29);
          plVar3 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      plVar3 = (longlong *)plVar7[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar5 = plVar3;
      plVar3 = plVar5;
      if (plVar7 != (longlong *)plVar5[2]) break;
      plVar3 = (longlong *)plVar5[1];
      plVar7 = plVar5;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




void FUN_14199d5b0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  
  puVar2 = (undefined8 *)param_1[6];
  plVar3 = (longlong *)*param_1;
  iVar8 = 0;
  puVar4 = (undefined8 *)*puVar2;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar7 = puVar4;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (puVar7 == puVar2) {
            *(int *)(param_1 + 0x10) = iVar8;
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar9 = 0;
          }
          else {
            lVar9 = *plVar3;
          }
          if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if ((puVar7[4] != 0) && (iVar5 = FUN_1419927b0(puVar7[4]), 4999999 < iVar5)) {
            iVar8 = iVar8 + 1;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar7 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar4 = puVar7;
        }
        puVar4 = (undefined8 *)puVar7[2];
        if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar7 = (undefined8 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar7 + 0x29);
          puVar4 = puVar7;
          puVar7 = (undefined8 *)*puVar7;
        }
      }
      puVar4 = (undefined8 *)puVar7[1];
    } while (*(char *)((longlong)puVar4 + 0x29) != '\0');
    do {
      puVar6 = puVar4;
      puVar4 = puVar6;
      if (puVar7 != (undefined8 *)puVar6[2]) break;
      puVar4 = (undefined8 *)puVar6[1];
      puVar7 = puVar6;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  } while( true );
}




void FUN_14199d6c0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = *(longlong **)param_1[6];
  do {
    do {
      while( true ) {
        while( true ) {
          plVar5 = plVar3;
          plVar3 = (longlong *)param_1[6];
          if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)*param_1)) {
            _invalid_parameter_noinfo();
          }
          if (plVar5 == plVar3) {
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
          FUN_141999ac0(plVar5[4]);
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
          FUN_141997ae0(plVar5[4]);
          if (plVar2 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar5 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          plVar3 = plVar5;
        }
        plVar3 = (longlong *)plVar5[2];
        if (*(char *)((longlong)plVar3 + 0x29) != '\0') break;
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar3 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      plVar3 = (longlong *)plVar5[1];
    } while (*(char *)((longlong)plVar3 + 0x29) != '\0');
    do {
      plVar4 = plVar3;
      plVar3 = plVar4;
      if (plVar5 != (longlong *)plVar4[2]) break;
      plVar3 = (longlong *)plVar4[1];
      plVar5 = plVar4;
    } while (*(char *)((longlong)plVar3 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_14199d7e0(longlong *param_1,longlong *param_2,int *param_3)

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
LAB_14199d93d:
    local_30 = plVar4;
    if (*param_3 <= (int)plVar5[3]) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14199d96c;
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
      goto LAB_14199d93d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_14199ce00(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14199d96c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




longlong * FUN_14199d990(longlong *param_1,longlong *param_2,int *param_3)

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




void FUN_14199da60(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199da80(longlong *param_1)

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
  FUN_14199d140(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_14199db20(undefined8 *param_1)

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




void FUN_14199db70(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_14199a500();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_14199b120(param_1 + 0x10,uVar8);
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
      FUN_14199d370(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_14199d370(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_14199bc30(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




undefined8 FUN_14199de20(longlong *param_1,int param_2)

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




ulonglong FUN_14199df20(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  int local_38 [2];
  longlong local_30;
  longlong local_28 [4];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar2 = extraout_RAX;
  }
  else {
    iVar1 = FUN_141992190(param_2);
    uVar2 = FUN_14199de20(param_1,iVar1);
    if (uVar2 == 0) {
      local_38[0] = FUN_141992190(param_2);
      local_30 = param_2;
      plVar3 = FUN_14199d7e0(param_1,local_28,local_38);
      return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 FUN_14199dfc0(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14199de20(param_1,param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_141998c60(lVar1,param_3);
    return uVar2;
  }
  return 0;
}




bool FUN_14199dff0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14199de20(param_1,param_2);
  return lVar1 != 0;
}




undefined4 FUN_14199e010(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  longlong *local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x70))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x21);
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((longlong)puVar6 + 0x21);
  }
  puVar8 = *(undefined8 **)(param_1 + 0x70);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x70);
    local_28 = *(longlong *)(param_1 + 0x40);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x70);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x40))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 == lVar9) {
    uVar5 = 0;
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
    uVar5 = *(undefined4 *)(lVar4 + 0x1c);
  }
  return uVar5;
}




void FUN_14199e110(longlong *param_1)

{
  FUN_14199da80(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_14199e140(undefined8 *param_1)

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
  lVar2 = FUN_14199bb20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_14199e1c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_14199db70((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_14199e2b4;
  }
  _invalid_parameter_noinfo();
LAB_14199e2b4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_14199e2f0(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int *local_18;
  int *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 2;
    if (lVar2 < 0x21) {
LAB_14199e3aa:
      if (1 < lVar2) {
        FUN_14199bfb0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        if (4 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffcU)) {
          FUN_14199bed0((longlong)param_1,(longlong)param_2);
        }
        FUN_14199d3b0(param_1,(longlong)param_2);
        return;
      }
      goto LAB_14199e3aa;
    }
    FUN_14199c8b0((ulonglong *)&local_18,param_1,param_2);
    piVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffffcU) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffffcU)) {
      FUN_14199e2f0(param_1,local_18,param_3);
      param_1 = piVar1;
    }
    else {
      FUN_14199e2f0(local_10,param_2,param_3);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_14199e410(longlong *param_1)

{
  FUN_14199da80(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14199e440(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  puVar2 = (undefined8 *)param_1[6];
  puVar8 = (undefined8 *)*puVar2;
  plVar3 = (longlong *)*param_1;
  local_58 = plVar3;
  puStack_50 = puVar8;
  local_48 = plVar3;
  puStack_40 = puVar2;
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar8 == puVar2) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar3;
    }
    if (puVar8 == *(undefined8 **)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar4 = (undefined8 *)puVar8[4];
    if (puVar4 != (undefined8 *)0x0) {
      FUN_141998a00((longlong)puVar4);
      FUN_141992170(puVar4);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar8 + 0x29) == '\0') {
      puVar4 = (undefined8 *)puVar8[2];
      if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar8 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
        while (puStack_50 = puVar8, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x29);
          puVar8 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
        puVar7 = (undefined8 *)puVar8[1];
        puVar4 = puVar8;
        while ((puVar8 = puVar7, puStack_50 = puVar8, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar8[2]))) {
          cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
          puVar7 = (undefined8 *)puVar8[1];
          puVar4 = puVar8;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[6] + 8) + 0x29);
  plVar3 = *(longlong **)(param_1[6] + 8);
  while (cVar1 == '\0') {
    FUN_14199b710(param_1,(longlong *)plVar3[2]);
    plVar5 = (longlong *)*plVar3;
    operator_delete(plVar3);
    plVar3 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x29);
  }
  *(longlong *)(param_1[6] + 8) = param_1[6];
  param_1[7] = 0;
  *(longlong *)param_1[6] = param_1[6];
  *(longlong *)(param_1[6] + 0x10) = param_1[6];
  plVar3 = param_1 + 8;
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[0xe] + 8) + 0x21);
  plVar5 = *(longlong **)(param_1[0xe] + 8);
  while (cVar1 == '\0') {
    FUN_141994650(plVar3,(longlong *)plVar5[2]);
    plVar6 = (longlong *)*plVar5;
    operator_delete(plVar5);
    plVar5 = plVar6;
    cVar1 = *(char *)((longlong)plVar6 + 0x21);
  }
  *(longlong *)(param_1[0xe] + 8) = param_1[0xe];
  param_1[0xf] = 0;
  *(longlong *)param_1[0xe] = param_1[0xe];
  *(longlong *)(param_1[0xe] + 0x10) = param_1[0xe];
  puStack_40 = (undefined8 *)param_1[0xe];
  local_58 = (longlong *)*plVar3;
  puStack_50 = (undefined8 *)*puStack_40;
  local_48 = local_58;
  FUN_141996fb0(plVar3,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  operator_delete((void *)*plVar3);
  puStack_40 = (undefined8 *)param_1[6];
  local_58 = (longlong *)*param_1;
  puStack_50 = (undefined8 *)*puStack_40;
  local_48 = local_58;
  FUN_14199d140(param_1,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_14199e720(longlong *param_1,uint param_2)

{
  FUN_14199e440(param_1);
  if ((param_2 & 1) != 0) {
    FUN_14199ac70(param_1);
  }
  return param_1;
}




void FUN_14199e750(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 local_434;
  int local_430;
  undefined8 local_428;
  CMsg local_418 [1040];
  
  local_428 = 0xfffffffffffffffe;
  FUN_1419a6870(local_418);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x84);
  uVar3 = (**(code **)(*(longlong *)param_1[0x12] + 0x48))((longlong *)param_1[0x12],param_2);
  uVar4 = FUN_14199e010((longlong)param_1,param_2);
  uVar5 = FUN_1419a68f0(local_418,0,uVar1,uVar4,uVar3);
  if ((char)uVar5 == '\0') {
    log_InlineLogERROR(&DAT_1419ad2d0);
    FUN_1419a68c0((undefined8 *)local_418);
  }
  else {
    local_430 = 0;
    while (iVar2 = local_430, local_430 < 8) {
      lVar6 = FUN_14199de20(param_1,local_430);
      local_448 = iVar2;
      if (lVar6 != 0) {
        local_444 = FUN_141992650(lVar6);
        uVar5 = FUN_141992610(lVar6);
        local_440 = (undefined4)uVar5;
        local_43c = FUN_1419927b0(lVar6);
        uVar5 = FUN_1419925d0(lVar6);
        local_438 = (undefined4)uVar5;
      }
      else {
        local_444 = 0;
        local_440 = 0;
        local_43c = 0;
        local_438 = 0;
      }
      local_434 = lVar6 != 0;
      uVar7 = FUN_1419a6990((longlong)local_418,&local_448);
      if ((char)uVar7 == '\0') break;
      local_430 = iVar2 + 1;
    }
    FUN_1419a6a80((longlong)local_418);
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))((longlong *)param_1[0x12],param_2,local_418);
    FUN_1419a68c0((undefined8 *)local_418);
  }
  return;
}




void FUN_14199e8e0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  bool bVar11;
  uint local_res10 [2];
  int local_res18;
  uint local_res20;
  int local_res24;
  ulonglong *local_70;
  longlong local_68;
  ulonglong *local_60;
  ulonglong *local_50 [3];
  
  local_res10[0] = param_2;
  local_res18 = FUN_14199e010((longlong)param_1,param_2);
  puVar1 = (undefined8 *)param_1[6];
  puVar8 = (undefined8 *)*puVar1;
  puVar2 = (ulonglong *)*param_1;
  uVar7 = 0;
  local_70 = puVar2;
  local_60 = puVar2;
  do {
    while( true ) {
      while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        iVar6 = (int)uVar7;
        if (puVar8 == puVar1) {
          FUN_141998560(param_1 + 8,(longlong *)&local_70,local_res10);
          puVar2 = local_70;
          lVar3 = param_1[0xe];
          local_50[0] = (ulonglong *)param_1[8];
          if ((local_70 == (ulonglong *)0x0) || (local_70 != local_50[0])) {
            _invalid_parameter_noinfo();
          }
          if (local_68 == lVar3) {
            local_res20 = param_2;
            local_res24 = iVar6;
            FUN_141998270(param_1 + 8,(longlong *)local_50,&local_res20);
          }
          else {
            if (puVar2 == (ulonglong *)0x0) {
              _invalid_parameter_noinfo();
              uVar7 = 0;
            }
            else {
              uVar7 = *puVar2;
            }
            if (local_68 == *(longlong *)(uVar7 + 0x30)) {
              _invalid_parameter_noinfo();
            }
            *(int *)(local_68 + 0x1c) = iVar6;
          }
          iVar6 = FUN_14199e010((longlong)param_1,param_2);
          if (iVar6 != local_res18) {
            (**(code **)(*(longlong *)param_1[0x12] + 0xd0))((longlong *)param_1[0x12],param_2,iVar6);
          }
          return;
        }
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar2;
        }
        if (puVar8 == *(undefined8 **)(uVar10 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (puVar8[4] == 0) {
          log_InlineLogERROR("CTotemPole::CalcUserContribute, NULL Data, idSyn:%u");
        }
        else {
          iVar5 = FUN_141997c40(puVar8[4],param_2);
          uVar7 = (ulonglong)(uint)(iVar6 + iVar5);
        }
        if (puVar2 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar8 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar9 = puVar8;
      puVar4 = (undefined8 *)puVar8[2];
      if (*(char *)((longlong)puVar8[2] + 0x29) != '\0') break;
      do {
        puVar8 = puVar4;
        puVar4 = (undefined8 *)*puVar8;
      } while (*(char *)((longlong)*puVar8 + 0x29) == '\0');
    }
    do {
      puVar8 = (undefined8 *)puVar9[1];
      if (*(char *)((longlong)puVar8 + 0x29) != '\0') break;
      bVar11 = puVar9 == (undefined8 *)puVar8[2];
      puVar9 = puVar8;
    } while (bVar11);
  } while( true );
}




undefined8 * FUN_14199eae0(undefined8 *param_1)

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
  lVar2 = FUN_14199bb20();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14199eb60(longlong *param_1,undefined4 *param_2)

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
  FUN_14199e1c0(param_1,local_18,&local_28,param_2);
  return;
}




void FUN_14199ec10(longlong *param_1,longlong *param_2)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_14199e2f0((int *)param_1[1],(int *)param_2[1],param_2[1] - param_1[1] >> 2);
  return;
}




undefined8 * FUN_14199ec60(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_14199eae0(param_1);
  FUN_141999800(param_1 + 8);
  param_1[0x12] = param_3;
  *(undefined4 *)(param_1 + 0x11) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}




undefined8 * FUN_14199ecd0(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if ((DAT_1419b9338 & 1) == 0) {
    DAT_1419b9338 = DAT_1419b9338 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9330,"CTotemPole");
    atexit((_func_5014 *)&LAB_1419ac860);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_1419b9330,0x98);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_14199eae0(puVar1);
    FUN_141999800(puVar1 + 8);
    puVar1[0x12] = param_2;
    *(undefined4 *)(puVar1 + 0x11) = param_1;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0,"CHECKF","pTotemPole","f:\\version\\cqserver-78.0.11-1204\\modules\\totem\\src\\totempole.cpp",0x34);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




void FUN_14199edc0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_14199e440(param_1);
    FUN_14199ac70(param_1);
  }
  return;
}




void FUN_14199edf0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  bool bVar20;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_198 [3];
  int *local_180;
  int *local_178;
  undefined8 local_170;
  uint local_168;
  int local_164;
  longlong *local_160 [3];
  undefined4 *local_148;
  undefined4 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int *local_e8;
  undefined8 *local_e0;
  int *local_d8;
  undefined8 *local_d0;
  longlong *local_c0;
  longlong *local_b0;
  longlong *local_a0;
  longlong *local_90;
  undefined8 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_70 = 0xfffffffffffffffe;
  iVar1 = *(int *)((longlong)param_1 + 0x84);
  puVar3 = (undefined8 *)param_1[6];
  puVar10 = (undefined8 *)*puVar3;
  puVar4 = (undefined8 *)*param_1;
  local_d0 = puVar4;
  local_80 = puVar4;
  local_res10 = operator_new(8);
  local_198[0] = (longlong *)0x0;
  if (local_res10 != (longlong *)0x0) {
    *local_res10 = (longlong)local_198;
    local_198[0] = local_res10;
  }
  local_180 = (int *)0x0;
  local_178 = (int *)0x0;
  local_170 = 0;
  local_res18 = local_res10;
LAB_14199ee83:
  if (puVar4 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  piVar14 = local_178;
  if (puVar10 != puVar3) {
    if (puVar4 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)*puVar4;
    }
    if (puVar10 == (undefined8 *)plVar16[6]) {
      _invalid_parameter_noinfo();
    }
    if (puVar10[4] == 0) {
      log_InlineLogERROR("CTotemPole::CalcBattleEffect, NULL Data, idSyn:%u");
    }
    else {
      iVar9 = FUN_141992670(puVar10[4]);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,iVar9);
      FUN_14199eb60((longlong *)local_198,(undefined4 *)&local_res10);
    }
    if (puVar4 == (undefined8 *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar10 + 0x29) == '\0') {
      puVar11 = puVar10;
      puVar8 = (undefined8 *)puVar10[2];
      if (*(char *)((longlong)puVar10[2] + 0x29) == '\0') {
        do {
          puVar10 = puVar8;
          puVar8 = (undefined8 *)*puVar10;
          local_e0 = puVar10;
        } while (*(char *)((longlong)*puVar10 + 0x29) == '\0');
      }
      else {
        do {
          puVar10 = (undefined8 *)puVar11[1];
          if (*(char *)((longlong)puVar10 + 0x29) != '\0') break;
          bVar20 = puVar11 == (undefined8 *)puVar10[2];
          puVar11 = puVar10;
        } while (bVar20);
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
    goto LAB_14199ee83;
  }
  local_128 = (longlong *)0x0;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  piVar12 = local_180;
  plVar16 = local_198[0];
  local_128 = local_198[0];
  uStack_120 = piVar14;
  local_128._0_4_ = SUB84(local_198[0],0);
  local_128._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
  uStack_120._0_4_ = SUB84(piVar14,0);
  uStack_120._4_4_ = (undefined4)((ulonglong)piVar14 >> 0x20);
  local_68 = (undefined4)local_128;
  uStack_64 = local_128._4_4_;
  uStack_60 = (undefined4)uStack_120;
  uStack_5c = uStack_120._4_4_;
  local_f8 = (longlong *)0x0;
  local_128 = plVar16;
  uStack_120 = piVar14;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  local_f8 = local_198[0];
  plVar5 = local_f8;
  uStack_f0 = piVar12;
  local_f8._0_4_ = SUB84(local_198[0],0);
  local_f8._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
  uStack_f0._0_4_ = SUB84(piVar12,0);
  uStack_f0._4_4_ = (undefined4)((ulonglong)piVar12 >> 0x20);
  local_58 = (undefined4)local_f8;
  uStack_54 = local_f8._4_4_;
  uStack_50 = (undefined4)uStack_f0;
  uStack_4c = uStack_f0._4_4_;
  local_f8 = plVar5;
  uStack_f0 = piVar12;
  if ((plVar16 == (longlong *)0x0) || (plVar16 != local_198[0])) {
    _invalid_parameter_noinfo();
  }
  FUN_14199e2f0(piVar12,piVar14,(longlong)piVar14 - (longlong)piVar12 >> 2);
  piVar14 = local_178;
  local_118 = (longlong *)0x0;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  piVar12 = local_180;
  local_118 = local_198[0];
  plVar16 = local_118;
  uStack_110 = piVar14;
  local_118._0_4_ = SUB84(local_198[0],0);
  local_118._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
  uStack_110._0_4_ = SUB84(piVar14,0);
  uStack_110._4_4_ = (undefined4)((ulonglong)piVar14 >> 0x20);
  local_38 = (undefined4)local_118;
  uStack_34 = local_118._4_4_;
  uStack_30 = (undefined4)uStack_110;
  uStack_2c = uStack_110._4_4_;
  local_108 = (longlong *)0x0;
  local_118 = plVar16;
  uStack_110 = piVar14;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  piVar15 = local_180;
  local_108 = local_198[0];
  plVar16 = local_108;
  uStack_100 = piVar12;
  piVar7 = uStack_100;
  local_108._0_4_ = SUB84(local_198[0],0);
  local_108._4_4_ = (undefined4)((ulonglong)local_198[0] >> 0x20);
  uStack_100._0_4_ = SUB84(piVar12,0);
  uStack_100._4_4_ = (undefined4)((ulonglong)piVar12 >> 0x20);
  local_48 = (undefined4)local_108;
  uStack_44 = local_108._4_4_;
  uStack_40 = (undefined4)uStack_100;
  uStack_3c = uStack_100._4_4_;
  for (; piVar12 < piVar14; piVar12 = piVar12 + 1) {
    piVar14 = piVar14 + -1;
    if (piVar12 != piVar14) {
      iVar9 = *piVar12;
      *piVar12 = *piVar14;
      *piVar14 = iVar9;
    }
  }
  local_90 = (longlong *)0x0;
  local_108 = plVar16;
  uStack_100 = piVar7;
  local_e8 = piVar14;
  local_d8 = piVar12;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  piVar14 = local_178;
  plVar16 = local_198[0];
  local_90 = local_198[0];
  local_a0 = (longlong *)0x0;
  if (local_178 < local_180) {
    _invalid_parameter_noinfo();
  }
  plVar5 = local_198[0];
  local_a0 = local_198[0];
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  iVar9 = 0;
  local_164 = 0;
  while( true ) {
    if ((plVar16 == (longlong *)0x0) || (plVar16 != plVar5)) {
      _invalid_parameter_noinfo();
    }
    if ((piVar15 == piVar14) || (4 < iVar9)) break;
    if (plVar16 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar17 = 0;
    }
    else {
      lVar17 = *plVar16;
    }
    if (*(int **)(lVar17 + 0x20) <= piVar15) {
      _invalid_parameter_noinfo();
    }
    *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + *piVar15;
    iVar9 = iVar9 + 1;
    local_164 = iVar9;
    if (plVar16 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar17 = 0;
    }
    else {
      lVar17 = *plVar16;
    }
    if (*(int **)(lVar17 + 0x20) <= piVar15) {
      _invalid_parameter_noinfo();
    }
    piVar15 = piVar15 + 1;
  }
  plVar16 = (longlong *)0x0;
  local_168 = 0;
  if (*(int *)((longlong)param_1 + 0x84) != iVar1) {
    local_res10 = operator_new(8);
    local_160[0] = plVar16;
    if (local_res10 != (longlong *)0x0) {
      *local_res10 = (longlong)local_160;
      local_160[0] = local_res10;
    }
    local_148 = (undefined4 *)0x0;
    local_140 = (undefined4 *)0x0;
    local_138 = 0;
    local_res18 = local_res10;
    (**(code **)(*(longlong *)param_1[0x12] + 0x68))((longlong *)param_1[0x12],*(undefined4 *)(param_1 + 0x11),local_160);
    puVar13 = local_148;
    local_c0 = (longlong *)0x0;
    if (local_140 < local_148) {
      _invalid_parameter_noinfo();
    }
    plVar5 = local_160[0];
    local_c0 = local_160[0];
    plVar19 = plVar16;
    while( true ) {
      puVar6 = local_140;
      local_b0 = (longlong *)0x0;
      if (local_140 < local_148) {
        _invalid_parameter_noinfo();
      }
      local_b0 = local_160[0];
      if ((plVar5 == (longlong *)0x0) || (plVar5 != local_160[0])) {
        _invalid_parameter_noinfo();
      }
      if (puVar13 == puVar6) goto LAB_14199f38f;
      local_168 = (int)plVar19 + 1;
      plVar19 = (longlong *)(ulonglong)local_168;
      if (1000000 < local_168) break;
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar18 = plVar16;
      }
      else {
        plVar18 = (longlong *)*plVar5;
      }
      if ((undefined4 *)plVar18[4] <= puVar13) {
        _invalid_parameter_noinfo();
      }
      uVar2 = *puVar13;
      (**(code **)(*(longlong *)param_1[0x12] + 0xa8))((longlong *)param_1[0x12],uVar2);
      (**(code **)(*(longlong *)param_1[0x12] + 0x50))((longlong *)param_1[0x12],uVar2,*(undefined4 *)((longlong)param_1 + 0x84));
      if (plVar5 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        plVar18 = plVar16;
      }
      else {
        plVar18 = (longlong *)*plVar5;
      }
      if ((undefined4 *)plVar18[4] <= puVar13) {
        _invalid_parameter_noinfo();
      }
      puVar13 = puVar13 + 1;
    }
    log_InlineLogERROR(&DAT_1419ad2d0);
LAB_14199f38f:
    if (local_148 != (undefined4 *)0x0) {
      operator_delete(local_148);
    }
    local_148 = (undefined4 *)0x0;
    local_140 = (undefined4 *)0x0;
    local_138 = 0;
    operator_delete(local_160[0]);
  }
  if (local_180 != (int *)0x0) {
    operator_delete(local_180);
  }
  local_180 = (int *)0x0;
  local_178 = (int *)0x0;
  local_170 = 0;
  operator_delete(local_198[0]);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14199f410(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_488 [32];
  uint local_468 [2];
  undefined8 *local_460;
  undefined8 local_458;
  longlong *local_450;
  longlong *local_440;
  char local_428;
  undefined1 local_427 [1022];
  undefined1 local_29;
  ulonglong local_28;
  
  local_458 = 0xfffffffffffffffe;
  local_28 = DAT_1419b9300 ^ (ulonglong)auStack_488;
  local_468[0] = (uint)param_2;
  (**(code **)(*(longlong *)param_1[0x12] + 0x50))((longlong *)param_1[0x12],param_2,0);
  local_428 = '\0';
  memset(local_427,0,0x3ff);
  _snprintf(&local_428,0x400,"update cq_item SET syndicate=0 WHERE player_id=%d and syndicate<>0");
  local_29 = 0;
  plVar3 = (longlong *)InstanceGet();
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_428,0,0);
  puVar1 = (undefined8 *)param_1[6];
  puVar4 = (undefined8 *)*puVar1;
  plVar3 = (longlong *)*param_1;
  local_450 = plVar3;
  local_440 = plVar3;
  do {
    while( true ) {
      while( true ) {
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar4 == puVar1) {
          FUN_141998420(param_1 + 8,local_468);
          FUN_14199edf0(param_1);
          return;
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar3;
        }
        if (puVar4 == *(undefined8 **)(lVar6 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if (puVar4[4] != 0) {
          FUN_141999b50(puVar4[4],(uint)param_2);
        }
        if (plVar3 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar4 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar5 = puVar4;
      puVar2 = (undefined8 *)puVar4[2];
      if (*(char *)((longlong)puVar4[2] + 0x29) != '\0') break;
      do {
        puVar4 = puVar2;
        puVar2 = (undefined8 *)*puVar4;
        local_460 = puVar4;
      } while (*(char *)((longlong)*puVar4 + 0x29) == '\0');
    }
    do {
      puVar4 = (undefined8 *)puVar5[1];
      if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
      bVar7 = puVar5 == (undefined8 *)puVar4[2];
      puVar5 = puVar4;
    } while (bVar7);
  } while( true );
}




void FUN_14199f5d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  longlong *local_b0 [3];
  uint *local_98;
  uint *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_68;
  undefined8 *local_58;
  longlong *local_48;
  undefined8 local_38;
  longlong *plVar9;
  
  local_38 = 0xfffffffffffffffe;
  plVar12 = (longlong *)0x0;
  plVar5 = operator_new(8);
  local_b0[0] = plVar12;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)local_b0;
    local_b0[0] = plVar5;
  }
  local_98 = (uint *)0x0;
  local_90 = (uint *)0x0;
  local_88 = 0;
  (**(code **)(*(longlong *)param_1[0x12] + 0x68))((longlong *)param_1[0x12],(int)param_1[0x11],local_b0);
  puVar10 = local_98;
  local_78 = (longlong *)0x0;
  if (local_90 < local_98) {
    _invalid_parameter_noinfo();
  }
  plVar5 = local_b0[0];
  local_78 = local_b0[0];
  plVar9 = plVar12;
  while( true ) {
    puVar3 = local_90;
    local_48 = (longlong *)0x0;
    if (local_90 < local_98) {
      _invalid_parameter_noinfo();
    }
    local_48 = local_b0[0];
    if ((plVar5 == (longlong *)0x0) || (plVar5 != local_b0[0])) {
      _invalid_parameter_noinfo();
    }
    if (puVar10 == puVar3) goto LAB_14199f763;
    uVar8 = (int)plVar9 + 1;
    plVar9 = (longlong *)(ulonglong)uVar8;
    if (1000000 < uVar8) break;
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar11 = plVar12;
    }
    else {
      plVar11 = (longlong *)*plVar5;
    }
    if ((uint *)plVar11[4] <= puVar10) {
      _invalid_parameter_noinfo();
    }
    FUN_14199f410(param_1,(ulonglong)*puVar10);
    if (plVar5 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      plVar11 = plVar12;
    }
    else {
      plVar11 = (longlong *)*plVar5;
    }
    if ((uint *)plVar11[4] <= puVar10) {
      _invalid_parameter_noinfo();
    }
    puVar10 = puVar10 + 1;
  }
  log_InlineLogERROR(&DAT_1419ad2d0);
LAB_14199f763:
  puVar1 = (undefined8 *)param_1[6];
  puVar6 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*param_1;
  local_68 = puVar2;
  local_58 = puVar2;
  do {
    while( true ) {
      while( true ) {
        if (puVar2 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar6 == puVar1) {
          FUN_14199c090((longlong)param_1);
          FUN_141995160((longlong)(param_1 + 8));
          *(undefined4 *)((longlong)param_1 + 0x84) = 0;
          if (local_98 != (uint *)0x0) {
            operator_delete(local_98);
          }
          local_98 = (uint *)0x0;
          local_90 = (uint *)0x0;
          local_88 = 0;
          operator_delete(local_b0[0]);
          return;
        }
        if (puVar2 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
          plVar5 = plVar12;
        }
        else {
          plVar5 = (longlong *)*puVar2;
        }
        if (puVar6 == (undefined8 *)plVar5[6]) {
          _invalid_parameter_noinfo();
        }
        puVar7 = (undefined8 *)puVar6[4];
        if (puVar7 != (undefined8 *)0x0) {
          FUN_141998a00((longlong)puVar7);
          FUN_141992170(puVar7);
        }
        if (puVar2 == (undefined8 *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar6 + 0x29) == '\0') break;
        _invalid_parameter_noinfo();
      }
      puVar7 = puVar6;
      puVar4 = (undefined8 *)puVar6[2];
      if (*(char *)((longlong)puVar6[2] + 0x29) != '\0') break;
      do {
        puVar6 = puVar4;
        puVar4 = (undefined8 *)*puVar6;
        local_80 = puVar6;
      } while (*(char *)((longlong)*puVar6 + 0x29) == '\0');
    }
    do {
      puVar6 = (undefined8 *)puVar7[1];
      if (*(char *)((longlong)puVar6 + 0x29) != '\0') break;
      bVar13 = puVar7 == (undefined8 *)puVar6[2];
      puVar7 = puVar6;
    } while (bVar13);
  } while( true );
}




void FUN_14199f8c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




void FUN_14199f8e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = tq::DateStamp(0);
  *(int *)(param_1 + 0xa8) = iVar1;
  return;
}




void FUN_14199f900(undefined8 param_1,undefined4 param_2)

{
  IStringManager *pIVar1;
  
  switch(param_2) {
  case 0:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f93a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_HELMET");
    return;
  case 1:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_ARMOR");
    return;
  case 2:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f96e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_WEAPON");
    return;
  case 3:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_RING");
    return;
  case 4:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_SHOES");
    return;
  case 5:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_NECKLACE");
    return;
  case 6:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_TALISMAN_FAN");
    return;
  case 7:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_TALISMAN_GIRDLE");
    return;
  default:
    pIVar1 = theInstance();
                    /* WARNING: Could not recover jumptable at 0x00014199fa0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,"STR_TOTEMPOLE_NAME_TALISMAN_ERROR");
    return;
  }
}




undefined4 FUN_14199fa30(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x58))();
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x60))(*(longlong **)(param_1 + 0xb0),param_2);
  if (1 < iVar1) {
    return 0x1e;
  }
  if (iVar1 == 1) {
    return 0x15;
  }
  uVar3 = 7;
  if (99 < iVar2) {
    uVar3 = 0xe;
  }
  return uVar3;
}




undefined4 FUN_14199fb00(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    return 0;
  }
  if (param_2 == 3) {
    return 1;
  }
  if (((param_2 == 4) || (param_2 == 6)) || (param_2 == 5)) {
    return 2;
  }
  if (param_2 == 7) {
    return 3;
  }
  if (param_2 == 8) {
    return 4;
  }
  if (param_2 == 2) {
    return 5;
  }
  if (param_2 == 0xc) {
    return 6;
  }
  uVar1 = 0xffffffff;
  if (param_2 == 0xd) {
    uVar1 = 7;
  }
  return uVar1;
}




void FUN_14199fc40(longlong param_1,longlong *param_2)

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




bool FUN_14199fd00(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_14199fd90(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014199fdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_14199fe20(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}




void FUN_14199fe80(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014199feb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_14199ff80(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_14199ffb0;
  }
  else {
LAB_14199ffb0:
    lVar4 = *plVar1;
  }
  uVar2 = param_1[1] + param_2 * 4;
  if (uVar2 <= *(ulonglong *)(lVar4 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar2) goto LAB_14199ffd8;
  }
  _invalid_parameter_noinfo();
LAB_14199ffd8:
  param_1[1] = param_1[1] + param_2 * 4;
  return param_1;
}




void FUN_1419a0020(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_1 * 0x30);
  return;
}




void * FUN_1419a0100(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419a01a0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419a0230(void *param_1,longlong param_2,void *param_3)

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




bool FUN_1419a0270(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_1419a02c0(longlong param_1,longlong param_2)

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




void FUN_1419a0320(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419a0340(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419a0362;
  }
  lVar2 = *plVar1;
LAB_1419a0362:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419a0380(longlong *param_1)

{
  FUN_14199fd90(param_1);
  return param_1;
}




longlong * FUN_1419a03f0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14199fd90(param_1);
  return param_2;
}




longlong * FUN_1419a0420(longlong *param_1)

{
  FUN_14199fe80(param_1);
  return param_1;
}




void FUN_1419a0450(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419a0450(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1419a04a0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1419b7e40);
  }
  operator_new(param_2 * 0x30);
  return;
}




longlong * FUN_1419a0510(longlong *param_1,longlong param_2)

{
  FUN_14199ff80(param_1,param_2);
  return param_1;
}




undefined8 * FUN_1419a0540(undefined8 *param_1)

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




void * FUN_1419a05a0(void *param_1,longlong param_2,longlong param_3)

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




void * FUN_1419a0620(void *param_1,longlong param_2,void *param_3)

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




longlong FUN_1419a0660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419a0682;
  }
  lVar2 = *plVar1;
LAB_1419a0682:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419a06a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419a06c2;
  }
  lVar2 = *plVar1;
LAB_1419a06c2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419a06e0(longlong *param_1)

{
  FUN_14199fd90(param_1);
  return param_1;
}




longlong * FUN_1419a0700(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_14199fd90(param_1);
  return param_2;
}




void FUN_1419a0730(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419a0750(longlong *param_1)

{
  FUN_14199fe80(param_1);
  return param_1;
}




void FUN_1419a0770(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_1419a0450(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_1419a07f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_1419a0870(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1419a08b0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar1) goto LAB_1419a091a;
  }
  _invalid_parameter_noinfo();
LAB_1419a091a:
  *param_2 = (longlong)plVar2;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1419a0950(void)

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




undefined8 * FUN_1419a09b0(undefined8 *param_1)

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




void * FUN_1419a0a00(void *param_1,longlong param_2,void *param_3)

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




void * FUN_1419a0a70(void *param_1,longlong param_2,longlong param_3)

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




void FUN_1419a0ac0(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)(lVar2 + 0x29) == '\0') {
      plVar3 = *(longlong **)(lVar2 + 0x10);
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar4 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x29);
          plVar3 = plVar4;
          plVar4 = (longlong *)*plVar4;
        }
        param_1[1] = (longlong)plVar3;
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 8);
        cVar1 = *(char *)(lVar2 + 0x29);
        while ((cVar1 == '\0' && (param_1[1] == *(longlong *)(lVar2 + 0x10)))) {
          param_1[1] = lVar2;
          lVar2 = *(longlong *)(lVar2 + 8);
          cVar1 = *(char *)(lVar2 + 0x29);
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




void * FUN_1419a0bc0(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419a0c00(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419a0c20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_1419a0c60(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[6];
  puVar5 = puVar4;
  if (*(char *)((longlong)puVar4[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar4[1];
    do {
      if (*(uint *)(puVar2 + 3) < *param_3) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      else {
        if ((*(char *)((longlong)puVar4 + 0x29) != '\0') && (*param_3 < *(uint *)(puVar2 + 3))) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined8 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
    puVar2 = (undefined8 *)*puVar4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[6] + 8);
  }
  if (*(char *)((longlong)puVar2 + 0x29) == '\0') {
    do {
      if (*param_3 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar3 = (undefined8 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((longlong)puVar3 + 0x29) == '\0');
  }
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = puVar5;
  param_2[2] = uVar1;
  param_2[3] = puVar4;
  return param_2;
}




void FUN_1419a0d40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1419a0950();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_1419a0d80(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419a0de0(undefined8 *param_1)

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




void FUN_1419a0e70(longlong *param_1,longlong *param_2,longlong *param_3)

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
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar5 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x29);
        plVar7 = plVar5;
        plVar5 = (longlong *)*plVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar5 + 0x29);
          plVar7 = plVar5;
          plVar5 = (longlong *)*plVar5;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar5 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
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




void * FUN_1419a0f90(void *param_1,longlong param_2,void *param_3)

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




void FUN_1419a1010(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419a1030(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1419a10c0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1419a0c60(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1419a10e0(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1419b7d88);
  }
  plVar5 = FUN_1419a07f0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




longlong * FUN_1419a1420(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

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




undefined8 * FUN_1419a1510(undefined8 *param_1)

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




void * FUN_1419a1590(undefined8 param_1,void *param_2,longlong param_3,void *param_4)

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




bool FUN_1419a15d0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 < *(int **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(int **)(param_1 + 0x68) < piVar3) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  for (; (piVar3 != piVar1 && (*piVar3 != param_2)); piVar3 = piVar3 + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 < *(int **)(param_1 + 0x60)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x48))) {
    _invalid_parameter_noinfo();
  }
  return piVar3 != piVar1;
}




bool FUN_1419a1680(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 < *(int **)(param_1 + 0x90)) {
    _invalid_parameter_noinfo();
  }
  piVar3 = *(int **)(param_1 + 0x90);
  if (*(int **)(param_1 + 0x98) < piVar3) {
    _invalid_parameter_noinfo();
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  for (; (piVar3 != piVar1 && (*piVar3 != param_2)); piVar3 = piVar3 + 1) {
  }
  piVar1 = *(int **)(param_1 + 0x98);
  if (piVar1 < *(int **)(param_1 + 0x90)) {
    _invalid_parameter_noinfo();
  }
  if ((lVar2 == 0) || (lVar2 != *(longlong *)(param_1 + 0x78))) {
    _invalid_parameter_noinfo();
  }
  return piVar3 != piVar1;
}




void FUN_1419a1740(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  plVar3 = *(longlong **)(param_1 + 8);
  puVar4 = (undefined8 *)*puVar2;
  do {
    do {
      while( true ) {
        while( true ) {
          puVar6 = puVar4;
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (puVar6 == puVar2) {
            return;
          }
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar7 = 0;
          }
          else {
            lVar7 = *plVar3;
          }
          if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          FUN_14199d6c0((longlong *)puVar6[4]);
          if (plVar3 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar6 + 0x29) == '\0') break;
          _invalid_parameter_noinfo();
          puVar4 = puVar6;
        }
        puVar4 = (undefined8 *)puVar6[2];
        if (*(char *)((longlong)puVar4 + 0x29) != '\0') break;
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar6 = (undefined8 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar6 + 0x29);
          puVar4 = puVar6;
          puVar6 = (undefined8 *)*puVar6;
        }
      }
      puVar4 = (undefined8 *)puVar6[1];
    } while (*(char *)((longlong)puVar4 + 0x29) != '\0');
    do {
      puVar5 = puVar4;
      puVar4 = puVar5;
      if (puVar6 != (undefined8 *)puVar5[2]) break;
      puVar4 = (undefined8 *)puVar5[1];
      puVar6 = puVar5;
    } while (*(char *)((longlong)puVar4 + 0x29) == '\0');
  } while( true );
}




longlong * FUN_1419a1820(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_1419a197d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_1419a19ac;
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
      goto LAB_1419a197d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_1419a10e0(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_1419a19ac:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_1419a19d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_1419b7ea0);
  }
  FUN_14199fd90(param_3);
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
        goto LAB_1419a1bbc;
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
LAB_1419a1bbc:
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
            FUN_1419a02c0((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_14199fc40((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_1419a02c0((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_14199fc40((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_1419a02c0((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_14199fc40((longlong)param_1,plVar7);
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




longlong * FUN_1419a1d90(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1419a1e60(longlong *param_1)

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




void FUN_1419a1f20(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_1419a1f40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1419a0770((longlong)param_1);
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
    FUN_1419a19d0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_1419a20f0(longlong *param_1)

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
  FUN_1419a1f40(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1419a2190(undefined8 *param_1)

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




void FUN_1419a21e0(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

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
      FUN_14199a5b0();
    }
    uVar10 = param_3 + lVar3;
    if (uVar4 < uVar10) {
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar8 = uVar4 + (uVar4 >> 1);
      }
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      pvVar2 = (void *)FUN_14199af90(param_1 + 0x10,uVar8);
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
      FUN_1419a1590(param_1,*(void **)(param_2 + 8),lVar6,(void *)((longlong)*(void **)(param_2 + 8) + param_3 * 4));
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
      pvVar2 = FUN_1419a1590(param_1,pvVar9,lVar6,(void *)lVar6);
      *(void **)(param_1 + 0x20) = pvVar2;
      FUN_1419a0a70(*(void **)(param_2 + 8),(longlong)pvVar9,lVar6);
      puVar11 = *(undefined4 **)(param_2 + 8);
      puVar5 = puVar11 + param_3;
      for (; puVar11 != puVar5; puVar11 = puVar11 + 1) {
        *puVar11 = uVar1;
      }
    }
  }
  return;
}




void FUN_1419a2480(longlong param_1,undefined8 param_2,longlong **param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plStack_60;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38 [4];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar5 = tq::DateStamp(0);
    if (*(int *)(param_1 + 0xa8) < (int)uVar5) {
      *(uint *)(param_1 + 0xa8) = uVar5;
      plVar7 = (longlong *)**(longlong **)(param_1 + 0x38);
      plVar1 = *(longlong **)(param_1 + 8);
      plStack_60 = plVar7;
LAB_1419a2500:
      plVar3 = plStack_60;
      plVar6 = *(longlong **)(param_1 + 0x38);
      if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 8))) {
        _invalid_parameter_noinfo();
      }
      if (plVar7 != plVar6) {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar1;
        }
        if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar6 = (longlong *)plVar7[4];
        if (plVar6 == (longlong *)0x0) {
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar1;
          }
          if (plVar7 == *(longlong **)(lVar8 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          log_InlineLogERROR("CTotemPoleMgr::OnTimer, NULL Data, idSyn=%u");
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
            plVar6 = plVar7;
            plVar2 = (longlong *)plVar7[2];
            if (*(char *)(plVar7[2] + 0x29) == '\0') {
              do {
                plVar7 = plVar2;
                plVar2 = (longlong *)*plVar7;
                plStack_60 = plVar7;
              } while (*(char *)(*plVar7 + 0x29) == '\0');
            }
            else {
              do {
                plVar7 = (longlong *)plVar6[1];
                plStack_60 = plVar7;
                if (*(char *)((longlong)plVar7 + 0x29) != '\0') break;
                bVar9 = plVar6 == (longlong *)plVar7[2];
                plVar6 = plVar7;
              } while (bVar9);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          plStack_40 = plVar3;
          param_3 = &local_48;
          local_48 = plVar1;
          FUN_1419a19d0((undefined8 *)(param_1 + 8),local_38,(longlong *)param_3);
        }
        else {
          cVar4 = FUN_14199d470(plVar6,(ulonglong)uVar5,param_3,param_4);
          if (cVar4 != '\0') {
            FUN_14199edf0(plVar6);
          }
          if (plVar1 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
            plVar6 = plVar7;
            plVar3 = (longlong *)plVar7[2];
            if (*(char *)(plVar7[2] + 0x29) == '\0') {
              do {
                plVar7 = plVar3;
                plVar3 = (longlong *)*plVar7;
                plStack_60 = plVar7;
              } while (*(char *)(*plVar7 + 0x29) == '\0');
            }
            else {
              do {
                plVar7 = (longlong *)plVar6[1];
                plStack_60 = plVar7;
                if (*(char *)((longlong)plVar7 + 0x29) != '\0') break;
                bVar9 = plVar6 == (longlong *)plVar7[2];
                plVar6 = plVar7;
              } while (bVar9);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
        }
        goto LAB_1419a2500;
      }
      FUN_1419a1e60((longlong *)(param_1 + 0x78));
      FUN_1419a1e60((longlong *)(param_1 + 0x48));
    }
  }
  return;
}




void FUN_1419a26e0(longlong param_1,uint param_2)

{
  uint local_38 [2];
  undefined8 *local_30;
  longlong local_28 [4];
  
  local_30 = FUN_14199ecd0(param_2,*(undefined8 *)(param_1 + 0xb0));
  if (local_30 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  local_38[0] = param_2;
  FUN_1419a1820((longlong *)(param_1 + 8),local_28,local_38);
  return;
}




undefined8 FUN_1419a2760(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
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
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
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




undefined8 * FUN_1419a2860(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint local_38 [2];
  undefined8 *local_30;
  longlong local_28 [4];
  
  puVar1 = (undefined8 *)FUN_1419a2760(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = FUN_14199ecd0(param_2,*(undefined8 *)(param_1 + 0xb0));
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      return (undefined8 *)0x0;
    }
    local_38[0] = param_2;
    local_30 = puVar1;
    FUN_1419a1820((longlong *)(param_1 + 8),local_28,local_38);
  }
  return puVar1;
}




undefined8 FUN_1419a2900(longlong param_1,uint param_2,int param_3)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
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
    cVar1 = *(char *)((longlong)puVar5 + 0x29);
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
  lVar9 = *(longlong *)(param_1 + 0x38);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (local_10 != lVar9) {
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
    plVar7 = *(longlong **)(lVar4 + 0x20);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_14199de20(plVar7,param_3);
      return uVar6;
    }
  }
  return 0;
}




undefined4 FUN_1419a2a20(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1419a2760(param_1,param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_14199a150(lVar2);
    return uVar1;
  }
  return 0;
}




undefined4 FUN_1419a2a50(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  lVar2 = FUN_1419a2760(param_1,param_2);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  uVar1 = FUN_14199a170(lVar2);
  return uVar1;
}




void FUN_1419a2ad0(longlong *param_1)

{
  FUN_1419a20f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419a2b00(longlong *param_1,uint *param_2)

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
  
  FUN_1419a0c60(param_1,&local_38,param_2);
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
    if (*(char *)((longlong)plVar7 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar7[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar7 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar7 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar7[1] + 0x29);
        plVar6 = (longlong *)plVar7[1];
        plVar2 = plVar7;
        while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
          cVar1 = *(char *)(plVar7[1] + 0x29);
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
  FUN_1419a1f40(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




undefined8 * FUN_1419a2c40(undefined8 *param_1)

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
  lVar2 = FUN_1419a0950();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_1419a2cc0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

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
  FUN_1419a21e0((longlong)param_1,(longlong)&local_28,1,param_4);
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
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar1) goto LAB_1419a2db4;
  }
  _invalid_parameter_noinfo();
LAB_1419a2db4:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar1;
  return param_2;
}




void FUN_1419a2df0(longlong *param_1)

{
  FUN_1419a20f0(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_1419a2e20(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *local_58;
  undefined8 *puStack_50;
  longlong *local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  
  *param_1 = totem::CTotemPoleMgr::vftable;
  puVar2 = (undefined8 *)param_1[7];
  puVar6 = (undefined8 *)*puVar2;
  plVar3 = (longlong *)param_1[1];
  local_58 = plVar3;
  puStack_50 = puVar6;
  local_48 = plVar3;
  puStack_40 = puVar2;
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (puVar6 == puVar2) break;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar3;
    }
    if (puVar6 == *(undefined8 **)(lVar7 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    if ((longlong *)puVar6[4] != (longlong *)0x0) {
      FUN_14199edc0((longlong *)puVar6[4]);
    }
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)puVar6 + 0x29) == '\0') {
      puVar4 = (undefined8 *)puVar6[2];
      if (*(char *)((longlong)puVar4 + 0x29) == '\0') {
        cVar1 = *(char *)((longlong)*puVar4 + 0x29);
        puVar6 = puVar4;
        puVar4 = (undefined8 *)*puVar4;
        while (puStack_50 = puVar6, cVar1 == '\0') {
          cVar1 = *(char *)((longlong)*puVar4 + 0x29);
          puVar6 = puVar4;
          puVar4 = (undefined8 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
        puVar5 = (undefined8 *)puVar6[1];
        puVar4 = puVar6;
        while ((puVar6 = puVar5, puStack_50 = puVar6, cVar1 == '\0' && (puVar4 == (undefined8 *)puVar6[2]))) {
          cVar1 = *(char *)((longlong)puVar6[1] + 0x29);
          puVar5 = (undefined8 *)puVar6[1];
          puVar4 = puVar6;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete((void *)param_1[0x12]);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  operator_delete((void *)param_1[0xf]);
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  operator_delete((void *)param_1[9]);
  plVar3 = param_1 + 1;
  puStack_40 = (undefined8 *)param_1[7];
  local_58 = (longlong *)*plVar3;
  puStack_50 = (undefined8 *)*puStack_40;
  local_48 = local_58;
  FUN_1419a1f40(plVar3,local_38,(longlong *)&local_58,(longlong *)&local_48);
  operator_delete((void *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  operator_delete((void *)*plVar3);
  return;
}




ulonglong FUN_1419a3040(longlong param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *extraout_RAX_00;
  int iVar5;
  
  plVar1 = FUN_1419a2860(param_1,param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR("CTotemPoleMgr::CreateTotemPole() get CTotemPole error idSyn=%u");
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar3 = plVar1;
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0xa0))(*(longlong **)(param_1 + 0xb0),param_2);
      if (0 < (int)(1 << ((byte)iVar5 & 0x1f) & (uint)plVar3)) {
        puVar4 = FUN_1419999f0(param_2,iVar5,*(undefined8 *)(param_1 + 0xb0));
        if (puVar4 == (undefined8 *)0x0) {
          log_InlineLogERROR("CTotemPoleMgr::CreateTotemPole() CTotem createnew error idSyn=%u, type=%d");
          plVar3 = extraout_RAX_00;
        }
        else {
          plVar3 = (longlong *)FUN_14199df20(plVar1,(longlong)puVar4);
          if ((char)plVar3 == '\0') {
            log_InlineLogERROR("CTotemPoleMgr::CreateTotemPole() CTotem createnew error idSyn=%u, type=%d");
            plVar3 = (longlong *)FUN_141992170(puVar4);
          }
        }
      }
    }
    uVar2 = CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
  return uVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1419a3140(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EAX_01;
  uint extraout_EAX_02;
  uint extraout_EAX_03;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char *_Format;
  undefined8 uVar8;
  IStringManager *pIVar9;
  undefined1 auStackY_4a8 [32];
  CMsg local_458 [1040];
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1419b9300 ^ (ulonglong)auStackY_4a8;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = extraout_EAX & 0xffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = extraout_EAX_00 & 0xffffff00;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    uVar3 = 0;
    if (uVar2 != 0) {
      plVar6 = (longlong *)FUN_1419a5800();
      lVar7 = FUN_1419a5a10(plVar6,param_3);
      uVar3 = 0;
      if (lVar7 != 0) {
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
        local_48[0xf] = 0;
        _Format = (char *)FUN_1419a6300(lVar7);
        _snprintf(local_48,0x10,_Format);
        local_48[0xf] = 0;
        uVar3 = FUN_1419a5fc0(lVar7);
        if (uVar3 == param_2) {
          (**(code **)**(undefined8 **)(param_1 + 0xb0))(*(undefined8 **)(param_1 + 0xb0),param_3,0,1);
          iVar4 = FUN_1419a5fa0(lVar7);
          if (iVar4 == -1) {
            log_InlineLogERROR(&DAT_1419ad2d0);
            uVar3 = extraout_EAX_01 & 0xffffff00;
          }
          else {
            plVar6 = FUN_1419a2860(param_1,uVar2);
            if (plVar6 == (longlong *)0x0) {
              log_InlineLogERROR(&DAT_1419ad2d0);
              uVar3 = extraout_EAX_02 & 0xffffff00;
            }
            else {
              lVar7 = FUN_14199de20(plVar6,iVar4);
              if (lVar7 == 0) {
                log_InlineLogERROR(&DAT_1419ad2d0);
                uVar3 = extraout_EAX_03 & 0xffffff00;
              }
              else {
                FUN_14199a060(lVar7,param_3);
                FUN_14199edf0(plVar6);
                FUN_14199e8e0(plVar6,param_2);
                tq::MyLogSave("gmlog/totem","CTotemPoleMgr::OnWriteOffWeapons user:%u, WriteOff item:%u");
                FUN_1419a6610(local_458);
                uVar8 = FUN_1419a6690(local_458,2,param_3,0,0,0,0);
                if ((char)uVar8 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_458);
                }
                pIVar9 = theInstance();
                lVar1 = **(longlong **)(param_1 + 0xb0);
                uVar5 = FUN_141992190(lVar7);
                FUN_14199f900(param_1,uVar5);
                uVar8 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TOTEM_WRITEOFF_OK");
                (**(code **)(lVar1 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar8,local_48);
                uVar8 = FUN_1419a6660((undefined8 *)local_458);
                uVar3 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              }
            }
          }
        }
        else {
          uVar3 = uVar3 & 0xffffff00;
        }
      }
    }
  }
  return uVar3;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1419a3470(longlong param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *_Format;
  int iVar10;
  undefined1 auStackY_6a8 [32];
  CMsg local_658 [1040];
  char local_248;
  undefined1 local_247 [510];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_1419b9300 ^ (ulonglong)auStackY_6a8;
  if (param_4 < 1) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = 0;
  }
  else if (param_3 < 8) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    plVar6 = FUN_1419a2860(param_1,uVar4);
    if (plVar6 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      uVar3 = 0;
    }
    else {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xa8))(*(longlong **)(param_1 + 0xb0),param_2);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xf0))(*(longlong **)(param_1 + 0xb0),uVar5);
      if (cVar1 == '\0') {
        bVar2 = FUN_14199dff0(plVar6,param_3);
        uVar3 = 0;
        if (bVar2) {
          if (param_4 < 3) {
            if (param_4 == 1) {
              iVar10 = 60000000;
            }
            else {
              if (param_4 != 2) {
                log_InlineLogERROR("CTotemPoleMgr::OnBuyTotemAdd, nAdd=%d error");
                return 0;
              }
              iVar10 = 100000000;
            }
            lVar9 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xb0))(*(longlong **)(param_1 + 0xb0),uVar4);
            if (lVar9 < iVar10) {
              uVar3 = 0;
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xb8))(*(longlong **)(param_1 + 0xb0),uVar4,-iVar10);
              lVar9 = FUN_14199de20(plVar6,param_3);
              if (lVar9 == 0) {
                log_InlineLogERROR(&DAT_1419ad2d0);
                uVar3 = 0;
              }
              else {
                FUN_141992340(lVar9,param_4);
                FUN_14199edf0(plVar6);
                local_248 = '\0';
                memset(local_247,0,0x1ff);
                pIVar7 = theInstance();
                FUN_14199f900(param_1,param_3);
                _Format = (char *)(*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_TOTEMPOLE_ADD_OK");
                _snprintf(&local_248,0x200,_Format);
                local_49 = 0;
                (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xe0))(*(longlong **)(param_1 + 0xb0),uVar4);
                (**(code **)(**(longlong **)(param_1 + 0xb0) + 200))(*(longlong **)(param_1 + 0xb0),param_2);
                FUN_1419a6610(local_658);
                uVar5 = FUN_141992190(lVar9);
                uVar8 = FUN_1419925d0(lVar9);
                uVar8 = FUN_1419a6690(local_658,3,0,0,param_4,(int)uVar8,uVar5);
                if ((char)uVar8 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_658);
                }
                FUN_1419a6660((undefined8 *)local_658);
                uVar3 = 1;
              }
            }
          }
          else {
            pIVar7 = theInstance();
            lVar9 = **(longlong **)(param_1 + 0xb0);
            uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_TOTEMPOLE_ADD_ABOVE_2");
            (**(code **)(lVar9 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar8);
            uVar3 = 0;
          }
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_1419a37e0(longlong param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 < 8) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    if (uVar1 != 0) {
      lVar2 = FUN_1419a2900(param_1,uVar1,param_3);
      if (lVar2 != 0) {
        FUN_1419977e0(lVar2,param_2,param_4,param_5);
      }
    }
  }
  else {
    log_InlineLogERROR(&DAT_1419ad2d0);
  }
  return;
}




void FUN_1419a3890(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
  if (uVar1 != 0) {
    plVar2 = (longlong *)FUN_1419a2760(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_14199e750(plVar2,param_2);
    }
  }
  return;
}




void FUN_1419a38f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint local_res10 [6];
  
  local_res10[0] = param_2;
  plVar1 = (longlong *)FUN_1419a2760(param_1,param_2);
  if (plVar1 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  FUN_14199f5d0(plVar1);
  FUN_14199edc0(plVar1);
  FUN_1419a2b00((longlong *)(param_1 + 8),local_res10);
  return;
}




void FUN_1419a3970(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1419a2760(param_1,param_2);
  if (plVar1 != (longlong *)0x0) {
    FUN_14199f410(plVar1,(ulonglong)param_3);
  }
  return;
}




void FUN_1419a39a0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    if (uVar1 != 0) {
      plVar3 = FUN_1419a2860(param_1,uVar1);
      if (plVar3 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
      }
      else {
        plVar4 = (longlong *)FUN_1419a5800();
        lVar5 = FUN_1419a5a10(plVar4,param_3);
        if (lVar5 != 0) {
          iVar2 = FUN_1419a5fa0(lVar5);
          lVar5 = FUN_14199de20(plVar3,iVar2);
          if (lVar5 != 0) {
            FUN_14199a060(lVar5,param_3);
            FUN_14199edf0(plVar3);
            FUN_14199e8e0(plVar3,param_2);
            (**(code **)**(undefined8 **)(param_1 + 0xb0))(*(undefined8 **)(param_1 + 0xb0),param_3,0,1,1);
            tq::MyLogSave("gmlog/totem","CTotemPoleMgr::OnWriteOffWeapons user:%u, WriteOff item:%u");
          }
        }
      }
    }
  }
  return;
}




uint FUN_1419a3b20(longlong param_1,int param_2,uint param_3)

{
  uint extraout_EAX;
  uint uVar1;
  uint extraout_EAX_00;
  uint uVar2;
  uint extraout_EAX_01;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar1 = extraout_EAX & 0xffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar1 = extraout_EAX_00 & 0xffffff00;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    uVar1 = 0;
    if (uVar2 != 0) {
      puVar3 = FUN_1419a2860(param_1,uVar2);
      if (puVar3 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
        uVar1 = extraout_EAX_01 & 0xffffff00;
      }
      else {
        plVar4 = (longlong *)FUN_1419a5800();
        lVar5 = FUN_1419a5a10(plVar4,param_3);
        if (lVar5 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = (uint)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        }
      }
    }
  }
  return uVar1;
}




void FUN_1419a3c20(longlong param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  CMsg local_418 [1040];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
  if (uVar2 != 0) {
    lVar5 = FUN_1419a2760(param_1,uVar2);
    if (lVar5 == 0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
    }
    else {
      uVar3 = FUN_14199a150(lVar5);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xa8))(*(longlong **)(param_1 + 0xb0),param_2);
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x50))(*(longlong **)(param_1 + 0xb0),param_2,uVar3);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xe8))(*(longlong **)(param_1 + 0xb0),uVar4);
      if (cVar1 != '\0') {
        FUN_1419a6610(local_418);
        uVar6 = FUN_1419a6690(local_418,5,0,uVar3,0,0,0);
        if ((char)uVar6 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_418);
        }
        FUN_1419a6660((undefined8 *)local_418);
      }
    }
  }
  return;
}




void FUN_1419a3d60(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    if (uVar1 != 0) {
      plVar3 = (longlong *)FUN_1419a2760(param_1,uVar1);
      if (plVar3 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
      }
      else {
        plVar4 = (longlong *)FUN_1419a5800();
        lVar5 = FUN_1419a5a10(plVar4,param_3);
        if (lVar5 != 0) {
          iVar2 = FUN_1419a5fa0(lVar5);
          lVar6 = FUN_14199de20(plVar3,iVar2);
          if (lVar6 != 0) {
            FUN_1419a6230(lVar5,param_3);
            FUN_141997ae0(lVar6);
            FUN_141999ac0(lVar6);
            FUN_14199edf0(plVar3);
            FUN_14199e8e0(plVar3,param_2);
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_1419a3e70(undefined8 *param_1)

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
  lVar2 = FUN_1419a0950();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_1419a3ef0(longlong *param_1,undefined4 *param_2)

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
  FUN_1419a2cc0(param_1,local_18,&local_28,param_2);
  return;
}




undefined8 * FUN_1419a3fa0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = totem::CTotemPoleMgr::vftable;
  FUN_1419a3e70(param_1 + 1);
  plVar1 = operator_new(8);
  plVar3 = (longlong *)0x0;
  plVar2 = plVar3;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 9);
    plVar2 = plVar1;
  }
  param_1[9] = plVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar2 = operator_new(8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)(param_1 + 0xf);
    plVar3 = plVar2;
  }
  param_1[0xf] = plVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = param_2;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}




undefined8 * FUN_1419a4070(undefined8 *param_1,uint param_2)

{
  FUN_1419a2e20(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined8 * FUN_1419a40a0(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0xb8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = FUN_1419a3fa0(puVar2,param_1);
  }
  if (puVar2 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    iVar1 = tq::DateStamp(0);
    *(int *)(puVar2 + 0x15) = iVar1;
  }
  return puVar2;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1419a4130(longlong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong extraout_RAX;
  ulonglong uVar9;
  ulonglong extraout_RAX_00;
  longlong *plVar10;
  ulonglong extraout_RAX_01;
  longlong *plVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong extraout_RAX_02;
  undefined8 extraout_RAX_03;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_328 [32];
  undefined1 local_2f8;
  uint local_2f4;
  ulonglong *local_2c8 [6];
  undefined8 *local_298;
  undefined8 local_290;
  ulonglong *local_288;
  undefined8 uStack_280;
  ulonglong *local_278;
  undefined8 *puStack_270;
  ulonglong *local_268;
  undefined8 uStack_260;
  ulonglong *local_258;
  undefined8 *puStack_250;
  undefined8 *local_248;
  ulonglong *local_238;
  undefined8 uStack_230;
  ulonglong *local_228;
  undefined8 uStack_220;
  ulonglong *local_208;
  undefined8 uStack_200;
  ulonglong *local_1f8;
  undefined8 *puStack_1f0;
  undefined8 *local_1e8;
  uint local_1e0 [2];
  longlong *local_1d8;
  ulonglong *local_1d0 [3];
  ulonglong *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 local_1a8;
  ulonglong *local_198;
  undefined8 uStack_190;
  ulonglong *local_188;
  undefined8 *puStack_180;
  ulonglong *local_178;
  undefined8 uStack_170;
  ulonglong *local_168;
  undefined8 uStack_160;
  ulonglong *local_158;
  ulonglong *local_148;
  ulonglong *local_138;
  ulonglong *local_128;
  undefined8 *puStack_120;
  ulonglong *local_118;
  undefined8 *puStack_110;
  uint local_108;
  undefined4 local_104;
  uint local_fc;
  uint local_a8;
  undefined8 local_98;
  undefined8 local_90;
  char local_88 [32];
  char local_68 [48];
  ulonglong local_38;
  
  local_1a8 = 0xfffffffffffffffe;
  local_38 = DAT_1419b9300 ^ (ulonglong)auStack_328;
  local_278 = (ulonglong *)param_1;
  plVar8 = (longlong *)FUN_1419a5800();
  if (plVar8 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar9 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x88))();
    builtin_strncpy(local_68,"SELECT * FROM cq_item WHERE syndicate > 0",0x2a);
    FUN_1419a3e70(local_2c8);
    local_268 = (ulonglong *)InstanceGet();
    local_258 = (ulonglong *)(**(code **)(*local_268 + 0x10))(local_268,local_68,2);
    if (local_258 == (ulonglong *)0x0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      puStack_270 = local_298;
      local_278 = local_2c8[0];
      uStack_260 = *local_298;
      local_268 = local_2c8[0];
      local_1b8 = local_2c8[0];
      puStack_1b0 = local_298;
      local_168 = local_2c8[0];
      uStack_160 = uStack_260;
      FUN_1419a1f40((longlong *)local_2c8,(longlong *)&local_228,(longlong *)&local_168,(longlong *)&local_1b8);
      operator_delete(local_298);
      local_298 = (undefined8 *)0x0;
      local_290 = 0;
      operator_delete(local_2c8[0]);
      uVar9 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else {
      uVar18 = 0;
      local_2f4 = 0;
      uVar9 = uVar18;
      while( true ) {
        puVar1 = local_258;
        iVar5 = (**(code **)(*local_258 + 0x40))(local_258);
        if (iVar5 <= (int)uVar9) break;
        (**(code **)(*puVar1 + 0x30))(puVar1,(longlong)(int)uVar9);
        plVar10 = (longlong *)(**(code **)(*puVar1 + 0x38))(puVar1);
        if (plVar10 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_1419ad2d0);
        }
        else {
          local_98 = 0;
          local_90 = 0;
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))(*(longlong **)(param_1 + 0xb0),&local_108,plVar10);
          uVar2 = local_a8;
          uVar7 = local_fc;
          if (cVar4 == '\0') {
            (**(code **)*plVar10)(plVar10,1);
            puStack_250 = local_298;
            local_258 = local_2c8[0];
            uStack_280 = *local_298;
            local_288 = local_2c8[0];
            local_128 = local_2c8[0];
            puStack_120 = local_298;
            local_198 = local_2c8[0];
            uStack_190 = uStack_280;
            FUN_1419a1f40((longlong *)local_2c8,(longlong *)&local_228,(longlong *)&local_198,(longlong *)&local_128);
            operator_delete(local_298);
            local_298 = (undefined8 *)0x0;
            local_290 = 0;
            operator_delete(local_2c8[0]);
            return extraout_RAX_01 & 0xffffffffffffff00;
          }
          if (local_a8 == 0) {
            log_InlineLogERROR("CTotemPoleMgr::Create() select error, %s");
            (**(code **)*plVar10)(plVar10,1);
          }
          else if (local_fc == 0) {
            (**(code **)*plVar10)(plVar10,1);
          }
          else {
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0),local_fc,local_a8);
            if (cVar4 == '\0') {
              plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0x17);
              (**(code **)(*plVar11 + 0xb0))(plVar11,0);
              plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
              (**(code **)(*plVar11 + 0x40))(plVar11);
              tq::MyLogSave("gmlog/totem","CTotemPoleMgr::Create user:%u, WriteOff item:%u");
              (**(code **)(*plVar10 + 0x38))(plVar10,0);
              (**(code **)*plVar10)(plVar10,1);
            }
            else {
              iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0),local_104);
              iVar6 = FUN_14199fb00(param_1,iVar5);
              if ((iVar5 == 5) ||
                 ((iVar5 == 4 && (iVar5 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))(*(longlong **)(param_1 + 0xb0),local_104), iVar5 == 21000)))) {
                local_2f8 = 1;
              }
              else {
                local_2f8 = 0;
              }
              puVar12 = FUN_1419a5b10(plVar8,local_108);
              local_288 = puVar12;
              if (puVar12 == (undefined8 *)0x0) {
                log_InlineLogERROR("CTotemPoleMgr::Create() CWeapons createnew error");
                (**(code **)*plVar10)(plVar10,1);
              }
              else {
                pcVar13 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x98))(*(longlong **)(param_1 + 0xb0),uVar7);
                uVar14 = FUN_1419a64c0((longlong)puVar12,&local_108,pcVar13,iVar6,local_2f8);
                if ((char)uVar14 == '\0') {
                  plVar11 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10,0);
                  (**(code **)(*plVar11 + 0x40))(plVar11);
                  log_InlineLogERROR("CTotemPoleMgr::Create() CWeapons create error, id:%u");
                  FUN_1419a5ba0(plVar8,local_108);
                  (**(code **)*plVar10)(plVar10,1);
                }
                else {
                  plVar11 = (longlong *)FUN_1419a2760(param_1,uVar2);
                  if (plVar11 == (longlong *)0x0) {
                    log_InlineLogERROR("CTotemPoleMgr::Create() QueryTotemPole error, idSyn:%u, type:%d");
                    FUN_1419a5ba0(plVar8,local_108);
                    (**(code **)*plVar10)(plVar10,1);
                  }
                  else {
                    lVar15 = FUN_14199de20(plVar11,iVar6);
                    if (lVar15 == 0) {
                      log_InlineLogERROR("CTotemPoleMgr::Create() QueryTotem error, idSyn:%u, type:%d");
                      FUN_1419a5ba0(plVar8,local_108);
                      (**(code **)*plVar10)(plVar10,1);
                    }
                    else {
                      FUN_141999f60(lVar15,(longlong)local_288,'\x01');
                      (**(code **)*plVar10)(plVar10,1);
                      local_1e0[0] = uVar7;
                      local_1d8 = plVar11;
                      FUN_1419a1820((longlong *)local_2c8,(longlong *)&local_228,local_1e0);
                    }
                  }
                }
              }
            }
          }
        }
        local_2f4 = local_2f4 + 1;
        uVar9 = (ulonglong)local_2f4;
      }
      (**(code **)*puVar1)(puVar1);
      FUN_1419a1740(param_1);
      builtin_strncpy(local_88,"SELECT * FROM cq_totem_add",0x1b);
      plVar8 = (longlong *)(**(code **)(*local_268 + 0x10))(local_268,local_88,2);
      uVar9 = uVar18;
      if (plVar8 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
        uStack_200 = *local_298;
        local_208 = local_2c8[0];
        local_118 = local_2c8[0];
        puStack_110 = local_298;
        local_178 = local_2c8[0];
        uStack_170 = uStack_200;
        FUN_1419a1f40((longlong *)local_2c8,(longlong *)&local_228,(longlong *)&local_178,(longlong *)&local_118);
        operator_delete(local_298);
        local_298 = (undefined8 *)0x0;
        local_290 = 0;
        operator_delete(local_2c8[0]);
        uVar9 = extraout_RAX_02 & 0xffffffffffffff00;
      }
      else {
        while( true ) {
          iVar5 = (**(code **)(*plVar8 + 0x40))(plVar8);
          iVar6 = (int)uVar9;
          if (iVar5 <= iVar6) break;
          (**(code **)(*plVar8 + 0x30))(plVar8,(longlong)iVar6);
          plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,2);
          uVar7 = (**(code **)(*plVar10 + 0x40))(plVar10);
          plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,1);
          iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
          lVar15 = FUN_1419a2900(param_1,uVar7,iVar5);
          if (lVar15 != 0) {
            FUN_1419921a0(lVar15,plVar8);
          }
          uVar9 = (ulonglong)(iVar6 + 1);
        }
        (**(code **)*plVar8)(plVar8);
        puVar16 = local_298;
        puVar1 = local_2c8[0];
        puVar12 = (undefined8 *)*local_298;
        local_138 = local_2c8[0];
        local_158 = local_2c8[0];
LAB_1419a4970:
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar12 != puVar16) {
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar18;
          }
          else {
            uVar9 = *puVar1;
          }
          if (puVar12 == *(undefined8 **)(uVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          uVar7 = *(uint *)(puVar12 + 3);
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar18;
          }
          else {
            uVar9 = *puVar1;
          }
          if (puVar12 == *(undefined8 **)(uVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          if (((longlong *)puVar12[4] != (longlong *)0x0) && (uVar7 != 0)) {
            FUN_14199e8e0((longlong *)puVar12[4],uVar7);
          }
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar12 + 0x29) == '\0') {
            puVar17 = puVar12;
            puVar3 = (undefined8 *)puVar12[2];
            if (*(char *)((longlong)puVar12[2] + 0x29) == '\0') {
              do {
                puVar12 = puVar3;
                puVar3 = (undefined8 *)*puVar12;
                local_248 = puVar12;
              } while (*(char *)((longlong)*puVar12 + 0x29) == '\0');
            }
            else {
              do {
                puVar12 = (undefined8 *)puVar17[1];
                if (*(char *)((longlong)puVar12 + 0x29) != '\0') break;
                bVar19 = puVar17 == (undefined8 *)puVar12[2];
                puVar17 = puVar12;
              } while (bVar19);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_1419a4970;
        }
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))();
        puVar12 = *(undefined8 **)(param_1 + 0x38);
        puVar16 = (undefined8 *)*puVar12;
        puVar1 = *(ulonglong **)(param_1 + 8);
        local_1d0[0] = puVar1;
        local_148 = puVar1;
LAB_1419a4a90:
        if (puVar1 == (ulonglong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar16 != puVar12) {
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar9 = uVar18;
          }
          else {
            uVar9 = *puVar1;
          }
          if (puVar16 == *(undefined8 **)(uVar9 + 0x30)) {
            _invalid_parameter_noinfo();
          }
          plVar8 = (longlong *)puVar16[4];
          if (plVar8 != (longlong *)0x0) {
            FUN_14199edf0(plVar8);
            FUN_14199d5b0(plVar8);
          }
          if (puVar1 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
          }
          if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
            puVar17 = puVar16;
            puVar3 = (undefined8 *)puVar16[2];
            if (*(char *)((longlong)puVar16[2] + 0x29) == '\0') {
              do {
                puVar16 = puVar3;
                puVar3 = (undefined8 *)*puVar16;
                local_1e8 = puVar16;
              } while (*(char *)((longlong)*puVar16 + 0x29) == '\0');
            }
            else {
              do {
                puVar16 = (undefined8 *)puVar17[1];
                if (*(char *)((longlong)puVar16 + 0x29) != '\0') break;
                bVar19 = puVar17 == (undefined8 *)puVar16[2];
                puVar17 = puVar16;
              } while (bVar19);
            }
          }
          else {
            _invalid_parameter_noinfo();
          }
          goto LAB_1419a4a90;
        }
        puStack_1f0 = local_298;
        local_1f8 = local_2c8[0];
        uStack_230 = *local_298;
        local_238 = local_2c8[0];
        local_188 = local_2c8[0];
        puStack_180 = local_298;
        local_228 = local_2c8[0];
        uStack_220 = uStack_230;
        FUN_1419a1f40((longlong *)local_2c8,(longlong *)local_1d0,(longlong *)&local_228,(longlong *)&local_188);
        operator_delete(local_298);
        local_298 = (undefined8 *)0x0;
        local_290 = 0;
        operator_delete(local_2c8[0]);
        uVar9 = CONCAT71((int7)((ulonglong)extraout_RAX_03 >> 8),1);
      }
    }
  }
  return uVar9;
}




ulonglong FUN_1419a4c30(longlong param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  IStringManager *pIVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  int iVar11;
  uint local_res20 [2];
  
  if (param_3 < 8) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    local_res20[0] = uVar3;
    plVar5 = FUN_1419a2860(param_1,uVar3);
    if (plVar5 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      uVar8 = extraout_RAX & 0xffffffffffffff00;
    }
    else {
      bVar1 = FUN_14199dff0(plVar5,param_3);
      if (bVar1) {
        pIVar6 = theInstance();
        lVar9 = **(longlong **)(param_1 + 0xb0);
        uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TOTEMPOLE_IS_OPEN");
        uVar8 = (**(code **)(lVar9 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar7);
        uVar8 = uVar8 & 0xffffffffffffff00;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xa8))(*(longlong **)(param_1 + 0xb0),param_2);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xf0))(*(longlong **)(param_1 + 0xb0),uVar4);
        if (cVar2 == '\0') {
          bVar1 = FUN_1419a1680(param_1,uVar3);
          if (bVar1) {
            pIVar6 = theInstance();
            lVar9 = **(longlong **)(param_1 + 0xb0);
            uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TOTEMPOLE_OPENED_TODAY");
            uVar8 = (**(code **)(lVar9 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar7);
            uVar8 = uVar8 & 0xffffffffffffff00;
          }
          else {
            uVar7 = FUN_14199ad30((longlong)plVar5);
            switch(uVar7) {
            case 0:
            case 1:
              iVar11 = 5000000;
              break;
            case 2:
            case 3:
            case 4:
              iVar11 = 10000000;
              break;
            case 5:
            case 6:
              iVar11 = 15000000;
              break;
            default:
              iVar11 = 20000000;
            }
            lVar9 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xb0))(*(longlong **)(param_1 + 0xb0),uVar3);
            if (lVar9 < iVar11) {
              pIVar6 = theInstance();
              lVar9 = **(longlong **)(param_1 + 0xb0);
              uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TOTEMPOLE_MONEY_NOT_ENOUGH");
              uVar8 = (**(code **)(lVar9 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar7);
              uVar8 = uVar8 & 0xffffffffffffff00;
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xb8))(*(longlong **)(param_1 + 0xb0),uVar3,-iVar11);
              (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xc0))(*(longlong **)(param_1 + 0xb0),uVar3,param_3);
              (**(code **)(**(longlong **)(param_1 + 0xb0) + 200))(*(longlong **)(param_1 + 0xb0),param_2);
              FUN_1419a3ef0((longlong *)(param_1 + 0x78),local_res20);
              puVar10 = FUN_1419999f0(uVar3,param_3,*(undefined8 *)(param_1 + 0xb0));
              if (puVar10 == (undefined8 *)0x0) {
                log_InlineLogERROR(&DAT_1419ad2d0);
                uVar8 = extraout_RAX_00 & 0xffffffffffffff00;
              }
              else {
                FUN_14199df20(plVar5,(longlong)puVar10);
                uVar7 = FUN_1419a3890(param_1,param_2);
                uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              }
            }
          }
        }
        else {
          pIVar6 = theInstance();
          lVar9 = **(longlong **)(param_1 + 0xb0);
          uVar7 = (*(code *)**(undefined8 **)pIVar6)(pIVar6,"STR_TOTEMPOLE_NOT_OPEN_FOR_RANK");
          uVar8 = (**(code **)(lVar9 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_2,uVar7);
          uVar8 = uVar8 & 0xffffffffffffff00;
        }
      }
    }
  }
  else {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar8 = extraout_RAX_01 & 0xffffffffffffff00;
  }
  return uVar8;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1419a4f50(longlong param_1,longlong *param_2,uint param_3,uint param_4,char param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  undefined1 auStack_508 [32];
  uint local_4d4 [4];
  uint local_4c4;
  int local_468;
  undefined8 local_458;
  undefined8 local_450;
  char local_448;
  undefined1 local_447 [1022];
  undefined1 local_49;
  ulonglong local_48;
  
  local_4d4[1] = 0xfffffffe;
  local_4d4[2] = 0xffffffff;
  local_48 = DAT_1419b9300 ^ (ulonglong)auStack_508;
  local_4d4[0] = param_4;
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  if (param_4 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  local_458 = 0;
  local_450 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0),local_4d4 + 3,param_4);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0),local_4c4);
  iVar5 = FUN_14199fb00(param_1,iVar4);
  if (iVar5 == -1) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  if (local_468 != 0) {
    return 0;
  }
  if (local_4c4 % 10 < 8) {
    if (param_5 != '\0') {
      pIVar9 = theInstance();
      lVar12 = **(longlong **)(param_1 + 0xb0);
      uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TOTEMPOLE_QUALITY");
      (**(code **)(lVar12 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_3,uVar10);
    }
    return 0;
  }
  bVar3 = FUN_1419a15d0(param_1,param_4);
  if (!bVar3) {
    local_448 = FUN_14199dff0(param_2,iVar5);
    if (!(bool)local_448) {
      if (param_5 != '\0') {
        memset(local_447,0,0x3ff);
        pIVar9 = theInstance();
        FUN_14199f900(param_1,iVar5);
        pcVar11 = (char *)(*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TOTEMPOLE_REGISTER_NOT_OPEN");
        _snprintf(&local_448,0x400,pcVar11);
        local_49 = 0;
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x40))(*(longlong **)(param_1 + 0xb0),param_3,&local_448);
      }
      return 0;
    }
    lVar12 = FUN_14199de20(param_2,iVar5);
    if (lVar12 == 0) {
      log_InlineLogERROR(&DAT_1419ad2d0);
      return 0;
    }
    iVar6 = FUN_14199fa30(param_1,param_3);
    iVar7 = FUN_141998fd0(lVar12,param_3);
    if (iVar6 <= iVar7) {
      if (param_5 != '\0') {
        pIVar9 = theInstance();
        lVar13 = **(longlong **)(param_1 + 0xb0);
        uVar8 = FUN_141998fd0(lVar12,param_3);
        uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TOTEMPOLE_REGISTER_LIMIT");
        (**(code **)(lVar13 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_3,uVar10,uVar8);
      }
      return 0;
    }
    lVar13 = FUN_141998c60(lVar12,param_4);
    if (lVar13 == 0) {
      if ((iVar4 == 5) ||
         ((iVar4 == 4 && (iVar4 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))(*(longlong **)(param_1 + 0xb0),local_4c4), iVar4 == 21000)))) {
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
      }
      plVar14 = (longlong *)FUN_1419a5800();
      puVar15 = FUN_1419a5b10(plVar14,local_4d4[3]);
      if (puVar15 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
        uVar16 = 0;
      }
      else {
        pcVar11 = (char *)(**(code **)(**(longlong **)(param_1 + 0xb0) + 0x98))(*(longlong **)(param_1 + 0xb0),param_3);
        uVar10 = FUN_1419a64c0((longlong)puVar15,local_4d4 + 3,pcVar11,iVar5,uVar16);
        if ((char)uVar10 == '\0') {
          plVar14 = (longlong *)FUN_1419a5800();
          FUN_1419a5ba0(plVar14,local_4d4[3]);
          uVar16 = 0;
        }
        else {
          puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0xb0);
          uVar8 = FUN_14199a180((longlong)param_2);
          (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0xb0),param_4,uVar8,1);
          FUN_1419a3ef0((longlong *)(param_1 + 0x48),local_4d4);
          FUN_141999f60(lVar12,(longlong)puVar15,'\0');
          uVar16 = 1;
        }
      }
      return uVar16;
    }
    return 0;
  }
  if (param_5 != '\0') {
    pIVar9 = theInstance();
    lVar12 = **(longlong **)(param_1 + 0xb0);
    uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TOTEMPOLE_REGISTERED_TODAY");
    (**(code **)(lVar12 + 0x40))(*(undefined8 *)(param_1 + 0xb0),param_3,uVar10);
  }
  return 0;
}




undefined1 FUN_1419a5410(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar2 = 0;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar2 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    uVar2 = 0;
    if (uVar3 != 0) {
      plVar4 = FUN_1419a2860(param_1,uVar3);
      if (plVar4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
        uVar2 = 0;
      }
      else {
        cVar1 = FUN_1419a4f50(param_1,plVar4,param_2,param_3,'\x01');
        uVar2 = 0;
        if (cVar1 != '\0') {
          FUN_14199edf0(plVar4);
          FUN_14199e8e0(plVar4,param_2);
          FUN_1419a6610(local_418);
          uVar5 = FUN_1419a6690(local_418,1,param_3,0,0,0,0);
          if ((char)uVar5 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_418);
          }
          FUN_1419a6660((undefined8 *)local_418);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}




uint FUN_1419a55a0(longlong param_1,uint param_2,byte param_3,longlong param_4)

{
  char cVar1;
  uint extraout_EAX;
  uint extraout_EAX_00;
  uint extraout_EAX_01;
  uint uVar2;
  uint extraout_EAX_02;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  CMsg local_428 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = extraout_EAX & 0xffffff00;
  }
  else if (param_3 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = extraout_EAX_00 & 0xffffff00;
  }
  else if (param_4 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    uVar3 = extraout_EAX_01 & 0xffffff00;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x80))();
    uVar3 = 0;
    if (uVar2 != 0) {
      plVar4 = FUN_1419a2860(param_1,uVar2);
      if (plVar4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_1419ad2d0);
        uVar3 = extraout_EAX_02 & 0xffffff00;
      }
      else {
        FUN_1419a6af0(local_428);
        uVar5 = FUN_1419a6b70(local_428);
        if ((char)uVar5 == '\0') {
          log_InlineLogERROR(&DAT_1419ad2d0);
          uVar3 = FUN_1419a6b40((undefined8 *)local_428);
          uVar3 = uVar3 & 0xffffff00;
        }
        else {
          for (bVar7 = 0; bVar7 < param_3; bVar7 = bVar7 + 1) {
            uVar3 = *(uint *)(param_4 + (ulonglong)bVar7 * 4);
            if (((uVar3 != 0) && (cVar1 = FUN_1419a4f50(param_1,plVar4,param_2,uVar3,'\0'), cVar1 != '\0')) &&
               (uVar6 = FUN_1419a6bb0((longlong)local_428,uVar3), (char)uVar6 == '\0')) {
              (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_428);
              FUN_1419a6b70(local_428);
              FUN_1419a6bb0((longlong)local_428,uVar3);
            }
          }
          FUN_14199edf0(plVar4);
          FUN_14199e8e0(plVar4,param_2);
          (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))(*(longlong **)(param_1 + 0xb0),param_2,local_428);
          uVar5 = FUN_1419a6b40((undefined8 *)local_428);
          uVar3 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar3;
}




undefined * FUN_1419a5800(void)

{
  return &DAT_1419b9340;
}




undefined1 FUN_1419a5810(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return 0;
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  return 1;
}




longlong FUN_1419a5860(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419a5882;
  }
  lVar2 = *plVar1;
LAB_1419a5882:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_1419a58c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419a58e2;
  }
  lVar2 = *plVar1;
LAB_1419a58e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419a5940(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 FUN_1419a5a10(longlong *param_1,uint param_2)

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
  puVar8 = (undefined8 *)param_1[6];
  local_30 = puVar3;
  local_38 = *param_1;
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
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
  if (((longlong *)*param_1 == (longlong *)0x0) || ((longlong *)*param_1 != plVar2)) {
    _invalid_parameter_noinfo();
  }
  lVar4 = local_10;
  if (lVar9 == local_10) {
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




undefined8 * FUN_1419a5b10(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint local_30 [2];
  undefined8 *local_28;
  longlong local_20 [2];
  char local_10;
  
  puVar1 = (undefined8 *)FUN_1419a6370(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FUN_1419a5ec0(puVar1,param_1[8]);
  }
  local_30[0] = param_2;
  local_28 = puVar1;
  FUN_141997d60(param_1,local_20,local_30);
  if (local_10 == '\0') {
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1419a5f60(puVar1);
    }
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}




ulonglong FUN_1419a5ba0(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *extraout_RAX;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  puVar8 = (undefined8 *)((undefined8 *)param_1[6])[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar6 = (undefined8 *)param_1[6];
  while (cVar1 == '\0') {
    if (*(uint *)(puVar8 + 3) < param_2) {
      puVar4 = (undefined8 *)puVar8[2];
      puVar8 = puVar6;
    }
    else {
      puVar4 = (undefined8 *)*puVar8;
    }
    puVar6 = puVar8;
    puVar8 = puVar4;
    cVar1 = *(char *)((longlong)puVar4 + 0x29);
  }
  local_20 = puVar6;
  local_28 = *param_1;
  puVar8 = (undefined8 *)param_1[6];
  if (*param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar6 == puVar8) || (param_2 < *(uint *)(puVar6 + 3))) {
    local_10 = param_1[6];
    local_18 = *param_1;
    plVar9 = &local_18;
  }
  else {
    plVar9 = &local_28;
  }
  plVar2 = (longlong *)*plVar9;
  local_30 = plVar9[1];
  lVar10 = param_1[6];
  plVar5 = (longlong *)*param_1;
  local_38 = plVar2;
  if ((plVar5 == (longlong *)0x0) || (plVar5 != plVar2)) {
    _invalid_parameter_noinfo();
    plVar5 = extraout_RAX;
  }
  lVar3 = local_30;
  if (lVar10 == local_30) {
    uVar7 = (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar2;
    }
    if (lVar3 == *(longlong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    puVar8 = *(undefined8 **)(lVar3 + 0x20);
    local_38 = (longlong *)*plVar9;
    local_30 = plVar9[1];
    puVar6 = FUN_1419953c0(param_1,&local_18,(longlong *)&local_38);
    if (puVar8 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_1419a5f60(puVar8);
    }
    uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  return uVar7;
}




void FUN_1419a5cf0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  plVar5 = *(longlong **)param_1[6];
  plVar2 = (longlong *)*param_1;
  local_38 = plVar2;
  plStack_30 = plVar5;
  while( true ) {
    plVar3 = (longlong *)param_1[6];
    if (((longlong *)*param_1 == (longlong *)0x0) || ((longlong *)*param_1 != plVar2)) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == plVar5) break;
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
    if ((undefined8 *)plVar5[4] != (undefined8 *)0x0) {
      FUN_1419a5f60((undefined8 *)plVar5[4]);
    }
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar5 + 0x29) == '\0') {
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x29);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (plStack_30 = plVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, plStack_30 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x29);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  plStack_30 = (longlong *)param_1[6];
  local_38 = (longlong *)*param_1;
  uStack_20 = *plStack_30;
  local_28 = local_38;
  FUN_141996880(param_1,local_18,(longlong *)&local_28,(longlong *)&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_1419a5e90(undefined8 *param_1)

{
  FUN_1419996d0(param_1);
  param_1[8] = 0;
  return param_1;
}




undefined8 * FUN_1419a5ec0(undefined8 *param_1,longlong param_2)

{
  param_1[10] = param_2;
  *param_1 = totem::CWeapons::vftable;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return param_1;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return param_1;
}




void FUN_1419a5f60(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




undefined4 FUN_1419a5f80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




longlong FUN_1419a5f90(longlong param_1)

{
  return param_1 + 0xc;
}




undefined4 FUN_1419a5fa0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined4 FUN_1419a5fb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




undefined4 FUN_1419a5fc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




undefined1 FUN_1419a5fe0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}




undefined1 FUN_1419a6000(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}




undefined1 FUN_1419a6020(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3e);
}




undefined1 FUN_1419a6040(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3f);
}




undefined4 FUN_1419a6080(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




void FUN_1419a60a0(longlong param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(byte *)(param_1 + 0x3c) < 9) {
    if (7 < *(byte *)(param_1 + 0x3c)) {
      *(undefined4 *)(param_1 + 0x40) = 1000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x4114;
  }
  switch(*(undefined1 *)(param_1 + 0x3d)) {
  case 1:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x5a;
    break;
  case 2:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x1ea;
    break;
  case 3:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x546;
    break;
  case 4:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0xfe6;
    break;
  case 5:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x3034;
    break;
  case 6:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x90a6;
    break;
  case 7:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x1b206;
    break;
  case 8:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x51612;
    break;
  case 9:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1000000;
    break;
  case 10:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0xfc472;
    break;
  case 0xb:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x10cdae;
    break;
  case 0xc:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x127fb4;
  }
  cVar1 = *(char *)(param_1 + 0x3e) != '\0';
  if (*(char *)(param_1 + 0x3f) != '\0') {
    cVar1 = cVar1 + '\x01';
  }
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x8232;
  }
  else if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 0x208d2;
    return;
  }
  return;
}




void FUN_1419a61b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x3c) - 5;
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(byte *)(param_1 + 0x3e) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  if (*(char *)(param_1 + 0x3f) != '\0') {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  if ((uint)*(byte *)(param_1 + 0x3e) % 10 == 3) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (uint)*(byte *)(param_1 + 0x3d);
  if (*(char *)(param_1 + 0x48) != '\0') {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * 2;
  }
  return;
}




undefined4 FUN_1419a6220(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419a6230(longlong param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_74;
  undefined1 local_70;
  undefined1 local_64;
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1419b9300 ^ (ulonglong)auStack_b8;
  if (param_2 == *(int *)(param_1 + 8)) {
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = '\0';
    local_28[5] = '\0';
    local_28[6] = '\0';
    local_28[7] = '\0';
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    local_28[0xc] = '\0';
    local_28[0xd] = '\0';
    local_28[0xe] = '\0';
    local_28[0xf] = '\0';
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),local_98,param_2);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x2c) = local_94;
      *(undefined1 *)(param_1 + 0x3d) = local_64;
      *(char *)(param_1 + 0x3c) = (char)local_94 + (char)(local_94 / 10) * -10;
      *(undefined1 *)(param_1 + 0x3e) = local_74;
      *(undefined1 *)(param_1 + 0x3f) = local_70;
      _snprintf((char *)(param_1 + 0x1c),0x10,local_28);
      *(undefined1 *)(param_1 + 0x2b) = 0;
      FUN_1419a60a0(param_1);
      FUN_1419a61b0(param_1);
    }
  }
  return;
}




longlong FUN_1419a6300(longlong param_1)

{
  return param_1 + 0x1c;
}




undefined * FUN_1419a6310(void)

{
  if ((DAT_1419b9390 & 1) == 0) {
    DAT_1419b9390 = DAT_1419b9390 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9388,"CWeapons");
    atexit((_func_5014 *)&LAB_1419ac880);
  }
  return &DAT_1419b9388;
}




void FUN_1419a6370(__uint64 param_1)

{
  if ((DAT_1419b9390 & 1) == 0) {
    DAT_1419b9390 = DAT_1419b9390 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9388,"CWeapons");
    atexit((_func_5014 *)&LAB_1419ac880);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a63c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_1419b9388,param_1);
  return;
}




void FUN_1419a63d0(void *param_1)

{
  if ((DAT_1419b9390 & 1) == 0) {
    DAT_1419b9390 = DAT_1419b9390 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9388,"CWeapons");
    atexit((_func_5014 *)&LAB_1419ac880);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a6425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_1419b9388,param_1);
  return;
}




void FUN_1419a6430(void *param_1)

{
  if ((DAT_1419b9390 & 1) == 0) {
    DAT_1419b9390 = DAT_1419b9390 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_1419b9388,"CWeapons");
    atexit((_func_5014 *)&LAB_1419ac880);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a6485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_1419b9388,param_1);
  return;
}




undefined8 * FUN_1419a6490(undefined8 *param_1,byte param_2)

{
  *param_1 = totem::CWeapons::vftable;
  if ((param_2 & 1) != 0) {
    FUN_1419a63d0(param_1);
  }
  return param_1;
}




undefined8 FUN_1419a64c0(longlong param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined1 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[3];
  *(undefined4 *)(param_1 + 0x38) = param_2[0x18];
  *(char *)(param_1 + 0x3c) = (char)param_2[1] + (char)((ulonglong)(uint)param_2[1] / 10) * -10;
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 9);
  uVar1 = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined1 *)(param_1 + 0x3f) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = param_5;
  tq::SafeCopy((char *)(param_1 + 0xc),param_3,0x10);
  tq::SafeCopy((char *)(param_1 + 0x1c),(char *)(param_2 + 0x1c),0x10);
  FUN_1419a60a0(param_1);
  uVar2 = FUN_1419a61b0(param_1);
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}




CMsg * FUN_1419a6570(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_1419a65a0(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_1419a65b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a65b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_1419a65c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a65c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_1419a65d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419a65d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_1419a65e0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419a6610(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = totem::CMsgTotemPole::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419a6660(undefined8 *param_1)

{
  *param_1 = totem::CMsgTotemPole::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419a6690(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_7;
  **(undefined2 **)(param_1 + 0x408) = 0x1c;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x89b;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




void FUN_1419a6740(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  sVar1 = *(short *)(lVar2 + 4);
  if (sVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419a680e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_3)(param_3,param_2,*(undefined4 *)(lVar2 + 8));
    return;
  }
  if (sVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001419a67fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3,param_2,*(undefined4 *)(lVar2 + 0xc));
    return;
  }
  if (sVar1 != 2) {
    if (sVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001419a67d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,param_2,*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0x10));
      return;
    }
    if (sVar1 != 4) {
                    /* WARNING: Could not recover jumptable at 0x0001419a67b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      log_InlineLogERROR("CMsgTotemPole::Process, usAction:%d error");
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001419a67c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x30))(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001419a67ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x18))(param_3,param_2,*(undefined4 *)(lVar2 + 0xc));
  return;
}




undefined8 * FUN_1419a6820(undefined8 *param_1,byte param_2)

{
  *param_1 = totem::CMsgTotemPole::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419a6870(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = totem::CMsgTotemPoleInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419a68c0(undefined8 *param_1)

{
  *param_1 = totem::CMsgTotemPoleInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419a68f0(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = 0;
  **(undefined2 **)(param_1 + 0x408) = 0x30;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x899;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_1419a6990(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3fb < (ulonglong)*puVar2 + 0x18) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x18;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 3 + 3) * 8) = *param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 0x18) = param_2[1];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 0x18) = param_2[2];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 0x18) = param_2[3];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 0x18) = param_2[4];
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x2c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x14) * 0x18) = *(undefined1 *)(param_2 + 5);
  lVar3 = *(longlong *)(param_1 + 0x408);
  piVar1 = (int *)(lVar3 + 0x14);
  *piVar1 = *piVar1 + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




undefined4 FUN_1419a6a80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14);
}




undefined8 * FUN_1419a6aa0(undefined8 *param_1,byte param_2)

{
  *param_1 = totem::CMsgTotemPoleInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419a6af0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = totem::CMsgTotemsRegister::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419a6b40(undefined8 *param_1)

{
  *param_1 = totem::CMsgTotemsRegister::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8 FUN_1419a6b70(CMsg *param_1)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4) = 0;
  **(undefined2 **)(param_1 + 0x408) = 5;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x89c;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_1419a6bb0(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3fb < (ulonglong)*puVar2 + 4) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 5 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x408) + 4) * 4) = param_2;
  lVar3 = *(longlong *)(param_1 + 0x408);
  pcVar1 = (char *)(lVar3 + 4);
  *pcVar1 = *pcVar1 + '\x01';
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}




void FUN_1419a6c40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x408) + 4);
  if ((bVar1 == 0) || ((longlong)(int)(bVar1 - 1) * 4 + 9U < 0x3fd)) {
    (**(code **)(*param_3 + 0x10))(param_3,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 4),*(longlong *)(param_1 + 0x408) + 5);
  }
  return;
}




undefined8 * FUN_1419a6cd0(undefined8 *param_1,byte param_2)

{
  *param_1 = totem::CMsgTotemsRegister::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_1419a6d20(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = totem::CMsgWeaponsInfo::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_1419a6d70(undefined8 *param_1)

{
  *param_1 = totem::CMsgWeaponsInfo::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




undefined8
FUN_1419a6da0(CMsg *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8
             ,undefined4 param_9,undefined4 param_10)

{
  longlong lVar1;
  
  tq::CMsg::Init(param_1);
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0xc) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x14) = param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x18) = param_7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x1c) = param_8;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20) = param_9;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x24) = param_10;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28) = 0;
  **(undefined2 **)(param_1 + 0x408) = 0x54;
  lVar1 = *(longlong *)(param_1 + 0x408);
  *(undefined2 *)(lVar1 + 2) = 0x89a;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}




ulonglong FUN_1419a6e80(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  ulonglong extraout_RAX;
  undefined7 extraout_var;
  
  puVar2 = *(ushort **)(param_1 + 0x408);
  if (0x3fb < (ulonglong)*puVar2 + 0x28) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return extraout_RAX & 0xffffffffffffff00;
  }
  *puVar2 = *puVar2 + 0x28;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x2c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) = *param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x30 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) = param_2[1];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x44 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) = param_2[6];
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x48 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x49 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) =
       *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x4a + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) =
       *(undefined1 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 0x4b + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) =
       *(undefined1 *)((longlong)param_2 + 0x1f);
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x4c + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28) = param_2[8];
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 5 + 10) * 8) = param_2[9];
  tq::SafeCopy((char *)(*(longlong *)(param_1 + 0x408) + 0x34 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x28) * 0x28),(char *)(param_2 + 2),0x10);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x408) + 0x28);
  *piVar1 = *piVar1 + 1;
  return CONCAT71(extraout_var,1);
}




void FUN_1419a6fe0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (param_3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_1419ad2d0);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (*(short *)(lVar1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419a703b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    log_InlineLogERROR("CMsgWeaponsInfo::Process, usAction:%d error");
    return;
  }
  (**(code **)(*param_3 + 0x28))(param_3,param_2,*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0xc));
  return;
}




undefined4 FUN_1419a7070(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x28);
}




undefined8 * FUN_1419a7090(undefined8 *param_1,byte param_2)

{
  *param_1 = totem::CMsgWeaponsInfo::vftable;
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
  
  local_res10 = _decode_pointer(DAT_1419b9940);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_1419b9940);
    local_res18[0] = _decode_pointer(DAT_1419b9938);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_1419b9940 = _encode_pointer(local_res10);
    DAT_1419b9938 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_1419a72d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_1419b9300) && ((short)(_StackCookie >> 0x30) == 0)) {
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




bool FUN_1419a742c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_1419b9938 = _encode_pointer(puVar1);
  DAT_1419b9940 = DAT_1419b9938;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_1419a7aa4();
    atexit(FUN_1419a7adc);
    atexit((_func_5014 *)&LAB_1419a7a98);
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
    if (DAT_1419b9394 < 1) {
      return 0;
    }
    DAT_1419b9394 = DAT_1419b9394 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_1419b9928 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419b9928;
        pvVar3 = DAT_1419b9928;
      }
      DAT_1419b9928 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419a7506;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419a7506:
    if (DAT_1419b9920 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_1419b9940);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_1419b9938);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_1419b9940);
            plVar12 = (longlong *)_decode_pointer(DAT_1419b9938);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_1419b9938 = _encoded_null();
        DAT_1419b9940 = DAT_1419b9938;
      }
      DAT_1419b9920 = 0;
      if (!bVar2) {
        LOCK();
        DAT_1419b9928 = (void *)0x0;
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
      bVar13 = DAT_1419b9928 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_1419b9928;
        pvVar3 = DAT_1419b9928;
      }
      DAT_1419b9928 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_1419a762f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_1419a762f:
    if (DAT_1419b9920 == 0) {
      DAT_1419b9920 = 1;
      iVar4 = _initterm_e(&DAT_1419ad240,&DAT_1419ad250);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1419ad228,&DAT_1419ad238);
      DAT_1419b9920 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_1419b9928 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_1419b9930 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_1419b9930), BVar5 != 0)) {
      (*DAT_1419b9930)(param_1,2,param_3);
    }
    DAT_1419b9394 = DAT_1419b9394 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0001419a77a8) */
/* WARNING: Removing unreachable block (ram,0x0001419a773f) */
/* WARNING: Removing unreachable block (ram,0x0001419a77e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_1419b9394 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_1419b9310 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_1419b9310 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141991360();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141991360();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_1419b9310 = 0xffffffff;
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




undefined8 FUN_1419a7860(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_1419b9440);
  local_30 = DAT_1419b9538;
  local_38 = RtlLookupFunctionEntry(DAT_1419b9538,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_1419b94d8 = local_res8;
    DAT_1419b9538 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_1419b9440,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_1419b93b0 = DAT_1419b9538;
  _DAT_1419b94c0 = local_res8[0];
  _DAT_1419b93a0 = 0xc0000409;
  _DAT_1419b93a4 = 1;
  local_20 = DAT_1419b9300;
  local_18 = DAT_1419b9308;
  DAT_1419b9438 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_1419b08a0);
  if (DAT_1419b9438 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_1419a7aa4(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419b11c0; puVar1 < &DAT_1419b11c0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_1419a7adc(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1419b11d0; puVar1 < &DAT_1419b11d0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141990000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141990000);
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
  if (DAT_1419b9300 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_1419b9300 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_1419b9300 == 0x2b992ddfa232) {
      DAT_1419b9300 = 0x2b992ddfa233;
    }
  }
  DAT_1419b9308 = ~DAT_1419b9300;
  return;
}




void Unwind_1419a7d30(undefined8 param_1,longlong param_2)

{
  FUN_141991000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a7d50(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1419a7d70(undefined8 param_1,longlong param_2)

{
  FUN_1419a6d70((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_1419a7d90(undefined8 param_1,longlong param_2)

{
  FUN_1419a6b40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




undefined * Catch_1419a7db0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_14199111a;
}




void Unwind_1419a7df0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40));
  return;
}




void Unwind_1419a7e10(undefined8 param_1,longlong param_2)

{
  FUN_141991000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a7e30(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20));
  return;
}




void Unwind_1419a7e50(undefined8 param_1,longlong param_2)

{
  FUN_1419a6d70((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x430));
  return;
}




void Unwind_1419a7e70(undefined8 param_1,longlong param_2)

{
  FUN_1419a6b40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x840));
  return;
}




undefined * Catch_1419a7e90(void)

{
  log_InlineLogCATCH_ERROR("totem::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_14199148f;
}




void Unwind_1419a7ed0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419a7ef0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14199153b;
}




undefined * Catch_1419a7f30(void)

{
  log_InlineLogCATCH_ERROR("SAFE_DELETE @%s,%d");
  return &DAT_1419915a4;
}




void Unwind_1419a7f70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a7f90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a7fb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a7fd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a7ff0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8010(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8030(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8070(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8090(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a80b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a80d0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a80f0(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8150(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8170(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8190(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a81b0(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a81d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a81f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8210(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8250(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8290(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a82b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




undefined * Catch_1419a82d0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419925af;
}




void Unwind_1419a8310(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8330(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a8350(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1419a8370(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a8390(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a83b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a83d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a83f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a8410(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8430(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8450(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8470(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8490(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a84b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a84d0(void)

{
  DAT_1419b9328 = DAT_1419b9328 & 0xfffffffe;
  return;
}




void Unwind_1419a84f0(void)

{
  DAT_1419b9328 = DAT_1419b9328 & 0xfffffffe;
  return;
}




void Unwind_1419a8510(void)

{
  DAT_1419b9328 = DAT_1419b9328 & 0xfffffffe;
  return;
}




void Unwind_1419a8530(void)

{
  DAT_1419b9328 = DAT_1419b9328 & 0xfffffffe;
  return;
}




void Unwind_1419a8550(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8570(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a8590(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a85b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a85d0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a85f0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8610(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8630(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8650(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8670(void)

{
  FUN_141992160();
  return;
}




void Catch_1419a8690(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419a86c0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a86e0(void)

{
  FUN_141992160();
  return;
}




void Catch_1419a8700(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419a8730(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419a8760(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419a8790(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a87b0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a87d0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a87f0(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8810(undefined8 param_1,longlong param_2)

{
  FUN_141994500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8830(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8850(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8870(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8890(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a88b0(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a88d0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a88f0(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8910(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419a8930(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8950(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419a8970(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8990(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a89b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419a89d0(undefined8 param_1,longlong param_2)

{
  FUN_141991d00(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419a89f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419a8a10(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8a30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419a8a50(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8a70(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8a90(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8ab0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8ad0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8af0(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8b10(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8b30(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8b50(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8b70(undefined8 param_1,longlong param_2)

{
  FUN_141994500(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8b90(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8bb0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8bd0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8bf0(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8c10(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8c30(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8c50(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8c70(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419a8c90(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419a8cb0(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419a8cd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419a8cf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419a8d10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419a8d30(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419a8d50(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8d70(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8d90(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8db0(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8dd0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8df0(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8e10(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8e30(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8e50(undefined8 param_1,longlong param_2)

{
  FUN_1419a6d70((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_1419a8e70(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8e90(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8eb0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8ed0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8ef0(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8f10(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8f30(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8f50(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8f70(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a8f90(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8fb0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8fd0(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a8ff0(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419a9010(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419a9040(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419a9060(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9080(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a90a0(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a90c0(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a90e0(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1419a9100(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141998a4f;
}




void Unwind_1419a9140(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9160(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9180(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a91a0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a91c0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a91e0(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9200(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9220(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9240(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9260(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9280(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a92a0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a92c0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a92e0(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9300(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9320(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9340(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9360(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9380(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a93a0(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a93c0(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a93e0(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9400(undefined8 param_1,longlong param_2)

{
  FUN_141999210(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9420(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9440(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9460(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9480(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a94a0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a94c0(undefined8 param_1,longlong param_2)

{
  FUN_141999240(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419a94e0(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9500(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9520(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9540(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9560(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9580(undefined8 param_1,longlong param_2)

{
  FUN_1419995d0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_1419a95a0(undefined8 param_1,longlong param_2)

{
  FUN_141995120((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x48));
  return;
}




void Unwind_1419a95c0(undefined8 param_1,longlong param_2)

{
  FUN_141999600((longlong *)(*(longlong *)(param_2 + 0x40) + 0x78));
  return;
}




void Unwind_1419a95e0(undefined8 param_1,longlong param_2)

{
  FUN_141999240(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_1419a9600(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a9620(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a9640(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a9660(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a9680(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a96a0(undefined8 param_1,longlong param_2)

{
  FUN_141994500(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a96c0(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1419a96e0(undefined8 param_1,longlong param_2)

{
  FUN_141999210(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9700(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9720(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9740(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9760(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9780(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a97a0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a97c0(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a97e0(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9800(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9820(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9840(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9860(undefined8 param_1,longlong param_2)

{
  FUN_141999210(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9880(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a98a0(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a98c0(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a98e0(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9900(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9920(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9940(undefined8 param_1,longlong param_2)

{
  FUN_141999240(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9960(undefined8 param_1,longlong param_2)

{
  FUN_1419995d0((longlong *)(*(longlong *)(param_2 + 0x60) + 8));
  return;
}




void Unwind_1419a9980(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a99a0(undefined8 param_1,longlong param_2)

{
  FUN_141993a40(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_1419a99c0(undefined8 param_1,longlong param_2)

{
  FUN_141994500(*(undefined8 **)(param_2 + 0x28));
  return;
}




void Unwind_1419a99e0(undefined8 param_1,longlong param_2)

{
  FUN_141995120((undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x48));
  return;
}




void Unwind_1419a9a00(undefined8 param_1,longlong param_2)

{
  FUN_141999600((longlong *)(*(longlong *)(param_2 + 0x60) + 0x78));
  return;
}




void Unwind_1419a9a20(void)

{
  DAT_1419b9328 = DAT_1419b9328 & 0xfffffffe;
  return;
}




void Unwind_1419a9a40(undefined8 param_1,longlong param_2)

{
  FUN_141993800(*(void **)(param_2 + 0x68));
  return;
}




void Unwind_1419a9a60(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9a90(undefined8 param_1,longlong param_2)

{
  FUN_141993a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9ab0(undefined8 param_1,longlong param_2)

{
  FUN_141994500((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9ad0(undefined8 param_1,longlong param_2)

{
  FUN_141995120((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9af0(undefined8 param_1,longlong param_2)

{
  FUN_141994500((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9b10(undefined8 param_1,longlong param_2)

{
  FUN_141993a40((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9b30(undefined8 param_1,longlong param_2)

{
  FUN_141994500((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419a9b50(undefined8 param_1,longlong param_2)

{
  FUN_141993a40((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_1419a9b70(void)

{
  log_InlineLogCATCH_ERROR("CTotem::EraseUserInfo crash @%s,%d");
  return 0x141999f44;
}




void Unwind_1419a9bb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9bd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a9bf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1419a9c10(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a9c30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9c50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a9c70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1419a9c90(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1419a9cb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9cd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9cf0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9d10(void)

{
  DAT_1419b9338 = DAT_1419b9338 & 0xfffffffe;
  return;
}




void Unwind_1419a9d30(void)

{
  DAT_1419b9338 = DAT_1419b9338 & 0xfffffffe;
  return;
}




void Unwind_1419a9d50(void)

{
  DAT_1419b9338 = DAT_1419b9338 & 0xfffffffe;
  return;
}




void Unwind_1419a9d70(void)

{
  DAT_1419b9338 = DAT_1419b9338 & 0xfffffffe;
  return;
}




void Unwind_1419a9d90(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9db0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9dd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419a9df0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9e10(undefined8 param_1,longlong param_2)

{
  FUN_14199af80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9e30(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9e50(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9e70(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9e90(void)

{
  FUN_141992160();
  return;
}




void Catch_1419a9eb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419a9ee0(void)

{
  FUN_141992160();
  return;
}




void Catch_1419a9f00(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419a9f30(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9f50(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9f70(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9f90(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9fb0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419a9fd0(undefined8 param_1,longlong param_2)

{
  FUN_14199af80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419a9ff0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa010(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa030(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419aa050(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419aa070(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419aa090(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419aa0b0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa0d0(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa0f0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa110(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa130(undefined8 param_1,longlong param_2)

{
  FUN_14199af80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa150(undefined8 param_1,longlong param_2)

{
  FUN_14199b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa170(undefined8 param_1,longlong param_2)

{
  FUN_14199b6b0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa190(undefined8 param_1,longlong param_2)

{
  FUN_14199af80(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa1b0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa1d0(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa1f0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa210(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa230(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa250(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa270(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa290(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa2b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419aa2d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419aa2f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419aa310(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419aa330(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa350(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa370(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa390(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa3b0(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa3d0(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa3f0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa410(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa430(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa450(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa470(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa490(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa4b0(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419aa4d0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419aa500(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419aa520(undefined8 param_1,longlong param_2)

{
  FUN_14199da60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa540(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa560(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa580(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa5a0(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa5c0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aa5e0(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa600(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa620(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa640(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa660(undefined8 param_1,longlong param_2)

{
  FUN_14199da60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa680(undefined8 param_1,longlong param_2)

{
  FUN_14199e110(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa6a0(undefined8 param_1,longlong param_2)

{
  FUN_14199da60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa6c0(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa6e0(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa700(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa720(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aa740(undefined8 param_1,longlong param_2)

{
  FUN_14199e410(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa760(undefined8 param_1,longlong param_2)

{
  FUN_141999600((longlong *)(*(longlong *)(param_2 + 0x90) + 0x40));
  return;
}




undefined * Catch_1419aa780(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14199e4e5;
}




void Unwind_1419aa7c0(undefined8 param_1,longlong param_2)

{
  FUN_141999240(*(longlong **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa7e0(undefined8 param_1,longlong param_2)

{
  FUN_141998650(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa800(undefined8 param_1,longlong param_2)

{
  FUN_141996860(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa820(undefined8 param_1,longlong param_2)

{
  FUN_141995220(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa840(undefined8 param_1,longlong param_2)

{
  FUN_141994540(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa860(undefined8 param_1,longlong param_2)

{
  FUN_141993a70(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419aa880(undefined8 param_1,longlong param_2)

{
  FUN_14199e110(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa8a0(undefined8 param_1,longlong param_2)

{
  FUN_14199da60(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa8c0(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa8e0(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa900(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa920(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419aa940(undefined8 param_1,longlong param_2)

{
  FUN_1419a68c0((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419aa960(void)

{
  log_InlineLogCATCH_ERROR("CTotemPole::SendTotemInfo crash! @%s,%d");
  return 0x14199e8bf;
}




undefined8 Catch_1419aa9a0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPole::CalcUserContribute crash! @%s,%d");
  return 0x14199eaca;
}




void Unwind_1419aa9e0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aaa00(undefined8 param_1,longlong param_2)

{
  FUN_14199af30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaa20(undefined8 param_1,longlong param_2)

{
  FUN_14199b6f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaa40(undefined8 param_1,longlong param_2)

{
  FUN_14199c130(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaa60(undefined8 param_1,longlong param_2)

{
  FUN_14199cda0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaa80(undefined8 param_1,longlong param_2)

{
  FUN_14199da60(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaaa0(undefined8 param_1,longlong param_2)

{
  FUN_14199e110(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaac0(undefined8 param_1,longlong param_2)

{
  FUN_14199e410(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaae0(undefined8 param_1,longlong param_2)

{
  FUN_141999600((longlong *)(*(longlong *)(param_2 + 0x40) + 0x40));
  return;
}




void Unwind_1419aab00(void)

{
  DAT_1419b9338 = DAT_1419b9338 & 0xfffffffe;
  return;
}




void Unwind_1419aab20(undefined8 param_1,longlong param_2)

{
  FUN_14199ac70(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_1419aab40(undefined8 param_1,longlong param_2)

{
  FUN_14199e410(*(longlong **)(param_2 + 0x60));
  return;
}




void Unwind_1419aab60(undefined8 param_1,longlong param_2)

{
  FUN_141999600((longlong *)(*(longlong *)(param_2 + 0x60) + 0x40));
  return;
}




void Unwind_1419aab80(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aabb0(undefined8 param_1,longlong param_2)

{
  FUN_14199af80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419aabd0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419aabf0(undefined8 param_1,longlong param_2)

{
  FUN_14199cb80((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419aac10(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aac40(undefined8 param_1,longlong param_2)

{
  FUN_14199af00((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1419aac60(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1419aac80(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1419aaca0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1419aacc0(undefined8 param_1,longlong param_2)

{
  FUN_14199af00((undefined8 *)(param_2 + 0x68));
  return;
}




void Unwind_1419aace0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6b0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1419aad00(undefined8 param_1,longlong param_2)

{
  FUN_14199af80((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_1419aad20(void)

{
  log_InlineLogCATCH_ERROR("CTotemPole::CalcBattleEffect crash! @%s,%d");
  return 0x14199f3ed;
}




undefined8 Catch_1419aad60(void)

{
  log_InlineLogCATCH_ERROR("CTotemPole::EraseUserInfo crash! @%s,%d");
  return 0x14199f5a4;
}




void Unwind_1419aada0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aadd0(undefined8 param_1,longlong param_2)

{
  FUN_14199af00((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419aadf0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419aae10(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419aae30(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0((undefined8 *)(param_2 + 0x38));
  return;
}




void Unwind_1419aae50(undefined8 param_1,longlong param_2)

{
  FUN_14199af00((undefined8 *)(param_2 + 0x38));
  return;
}




undefined8 Catch_1419aae70(void)

{
  log_InlineLogCATCH_ERROR("CTotemPole::CalcUserContribute crash ! @%s,%d");
  return 0x14199f88e;
}




void Unwind_1419aaeb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419aaed0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1419aaef0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aaf10(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaf30(void)

{
  FUN_141992160();
  return;
}




void Catch_1419aaf50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419aaf80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419aafb0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419aafd0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419aaff0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab010(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab030(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419ab050(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab070(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab090(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab0b0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab0d0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab0f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1419ab110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419ab130(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419ab150(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419ab170(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419ab190(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab1b0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab1d0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab1f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419ab210(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419ab230(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_1419ab250(undefined8 param_1,longlong param_2)

{
  FUN_141991d00((exception *)(param_2 + 0x38));
  return;
}




void Unwind_1419ab270(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab290(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab2b0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab2d0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab2f0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419ab310(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab330(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab350(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab370(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_1419ab390(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x90));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1419ab3c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




undefined8 Catch_1419ab3e0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnTimer crash @%s,%d");
  return 0x1419a26b7;
}




void Unwind_1419ab420(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab440(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab460(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab480(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab4a0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab4c0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419ab4e0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab500(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab520(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab540(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab560(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab580(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab5a0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab5c0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab5e0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab600(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab620(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ab640(undefined8 param_1,longlong param_2)

{
  FUN_1419a2df0((longlong *)(*(longlong *)(param_2 + 0x90) + 8));
  return;
}




void Unwind_1419ab660(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x48));
  return;
}




void Unwind_1419ab680(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x78));
  return;
}




undefined * Catch_1419ab6a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419a2ebf;
}




void Unwind_1419ab6e0(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419ab700(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419ab720(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419ab740(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x98));
  return;
}




void Unwind_1419ab760(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_1419ab780(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419ab7a0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419ab7c0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419ab7e0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_1419ab800(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x90));
  return;
}




undefined * Catch_1419ab820(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::CreateTotemPole crash! @%s,%d");
  return &DAT_1419a3121;
}




void Unwind_1419ab860(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_1419ab880(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnWriteOffWeapon crash @%s,%d");
  return &DAT_1419a3440;
}




void Unwind_1419ab8c0(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_1419ab8e0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnBuyTotemAdd crash @%s,%d");
  return &DAT_1419a37b3;
}




undefined * Catch_1419ab920(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnShowWeaponsInfo, idUser:%u, type:%d @%s,%d");
  return &DAT_1419a384e;
}




undefined8 Catch_1419ab970(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnShowTotemPoleInfo, idUser:%u @%s,%d");
  return 0x1419a38da;
}




undefined8 Catch_1419ab9b0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnEraseItem crash! @%s,%d");
  return 0x1419a3afd;
}




undefined8 Catch_1419ab9f0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnEraseItem crash! @%s,%d");
  return 0x1419a3c0a;
}




void Unwind_1419aba30(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_1419aba50(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnUserLogin @%s,%d");
  return 0x1419a3d38;
}




undefined8 Catch_1419aba90(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnUpdateWeapons crash @%s,%d");
  return 0x1419a3e51;
}




void Unwind_1419abad0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419abaf0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419abb10(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419abb30(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419abb50(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419abb70(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419abb90(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419abbb0(undefined8 param_1,longlong param_2)

{
  FUN_1419a2df0((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_1419abbd0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419abbf0(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1419abc10(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1419abc30(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x48));
  return;
}




void Unwind_1419abc50(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419abc70(undefined8 param_1,longlong param_2)

{
  FUN_14199af00(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1419abc90(undefined8 param_1,longlong param_2)

{
  FUN_14199b6d0(*(undefined8 **)(param_2 + 0x60));
  return;
}




void Unwind_1419abcb0(undefined8 param_1,longlong param_2)

{
  FUN_14199ccc0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x78));
  return;
}




void Unwind_1419abcd0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58));
  return;
}




void Unwind_1419abcf0(undefined8 param_1,longlong param_2)

{
  FUN_1419a2df0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1419abd10(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1419abd30(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abd50(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abd70(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abd90(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abdb0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abdd0(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1419abdf0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abe10(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abe30(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abe50(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abe70(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abe90(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1419abeb0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abed0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abef0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abf10(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abf30(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320((undefined8 *)(param_2 + 0x60));
  return;
}




undefined * Catch_1419abf50(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419a4934;
}




void Unwind_1419abf90(undefined8 param_1,longlong param_2)

{
  FUN_1419a2ad0((longlong *)(param_2 + 0x60));
  return;
}




void Unwind_1419abfb0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1f20((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abfd0(undefined8 param_1,longlong param_2)

{
  FUN_1419a1010((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419abff0(undefined8 param_1,longlong param_2)

{
  FUN_1419a0c00((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419ac010(undefined8 param_1,longlong param_2)

{
  FUN_1419a0730((undefined8 *)(param_2 + 0x60));
  return;
}




void Unwind_1419ac030(undefined8 param_1,longlong param_2)

{
  FUN_1419a0320((undefined8 *)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419ac050(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::Create crash @%s,%d");
  return 0x1419a4bf9;
}




undefined8 Catch_1419ac090(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnOpenTotemPole crash @%s,%d");
  return 0x1419a4f0c;
}




undefined * Catch_1419ac0d0(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::RegisterWeapon @%s,%d");
  return &DAT_1419a53e9;
}




void Unwind_1419ac110(undefined8 param_1,longlong param_2)

{
  FUN_1419a6660((undefined8 *)(param_2 + 0x50));
  return;
}




undefined * Catch_1419ac130(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnRegisterWeapons crash @%s,%d");
  return &DAT_1419a5580;
}




void Unwind_1419ac170(undefined8 param_1,longlong param_2)

{
  FUN_1419a6b40((undefined8 *)(param_2 + 0x40));
  return;
}




undefined * Catch_1419ac190(void)

{
  log_InlineLogCATCH_ERROR("CTotemPoleMgr::OnRegisterAllWeapons @%s,%d");
  return &DAT_1419a57d5;
}




void Unwind_1419ac1d0(undefined8 param_1,longlong param_2)

{
  FUN_1419a63d0(*(void **)(param_2 + 0x70));
  return;
}




undefined8 Catch_1419ac1f0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1419a5b85;
}




undefined8 Catch_1419ac230(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1419a5cce;
}




void Unwind_1419ac270(undefined8 param_1,longlong param_2)

{
  FUN_1419995d0(*(longlong **)(param_2 + 0x70));
  return;
}




undefined * Catch_1419ac290(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419a5d80;
}




void Unwind_1419ac2d0(undefined8 param_1,longlong param_2)

{
  FUN_141999210(*(longlong **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac2f0(undefined8 param_1,longlong param_2)

{
  FUN_141998630(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac310(undefined8 param_1,longlong param_2)

{
  FUN_141996840(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac330(undefined8 param_1,longlong param_2)

{
  FUN_141995200(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac350(undefined8 param_1,longlong param_2)

{
  FUN_141994520(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac370(undefined8 param_1,longlong param_2)

{
  FUN_141993a30(*(undefined8 **)(param_2 + 0x70));
  return;
}




void Unwind_1419ac390(undefined8 param_1,longlong param_2)

{
  FUN_1419995d0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac3b0(void)

{
  FUN_141992160();
  return;
}




void Unwind_1419ac3d0(void)

{
  FUN_141993a30((undefined8 *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac3f0(void)

{
  FUN_141994520((undefined8 *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac410(void)

{
  FUN_141995200((undefined8 *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac430(void)

{
  FUN_141996840((undefined8 *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac450(void)

{
  FUN_141998630((undefined8 *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac470(void)

{
  FUN_141999210((longlong *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac490(void)

{
  FUN_1419995d0((longlong *)&DAT_1419b9340);
  return;
}




void Unwind_1419ac4b0(void)

{
  DAT_1419b9390 = DAT_1419b9390 & 0xfffffffe;
  return;
}




void Unwind_1419ac4d0(void)

{
  DAT_1419b9390 = DAT_1419b9390 & 0xfffffffe;
  return;
}




void Unwind_1419ac4f0(void)

{
  DAT_1419b9390 = DAT_1419b9390 & 0xfffffffe;
  return;
}




void Unwind_1419ac510(void)

{
  DAT_1419b9390 = DAT_1419b9390 & 0xfffffffe;
  return;
}




void Unwind_1419ac530(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac550(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419ac570(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac590(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac5b0(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419ac5d0(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac5f0(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac610(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419ac630(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac650(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419ac670(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_1419ac690(undefined8 param_1,longlong param_2)

{
  FUN_1419a65a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_1419ac6a8(void)

{
  _unlock(8);
  return;
}




void FUN_1419ac6c1(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419ac6f1(void)

{
  _DAT_1419b9310 = 0xffffffff;
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




bool FUN_1419ac780(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419ac7b0(void)

{
  _DAT_1419b9340 = operator_new(8);
  if (_DAT_1419b9340 == (undefined8 *)0x0) {
    _DAT_1419b9340 = (undefined8 *)0x0;
  }
  else {
    *_DAT_1419b9340 = &DAT_1419b9340;
  }
  DAT_1419b9370 = FUN_141994a20();
  *(undefined1 *)(DAT_1419b9370 + 0x29) = 1;
  *(longlong *)(DAT_1419b9370 + 8) = DAT_1419b9370;
  *(longlong *)DAT_1419b9370 = DAT_1419b9370;
  *(longlong *)(DAT_1419b9370 + 0x10) = DAT_1419b9370;
  _DAT_1419b9378 = 0;
  _DAT_1419b9380 = 0;
  atexit((_func_5014 *)&LAB_1419ac870);
  return;
}




/* DONE: decompiled=1131 failed=0 total=1214 */
