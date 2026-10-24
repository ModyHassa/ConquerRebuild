/* Decompiled by Ghidra 12.1.4 | program: Title.dll
   image base: 141970000 | functions: 376 */


void FUN_141971000(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141971010(void)

{
  return 0;
}




undefined8 FUN_141971020(void)

{
  return 0;
}




undefined8 FUN_141971030(void)

{
  return 0;
}




undefined8 FUN_141971040(void)

{
  return 0;
}




undefined8 * FUN_141971050(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141971080(void)

{
  log_InlineLogERROR(&DAT_141978310);
  return;
}




void FUN_1419710e0(undefined8 *param_1)

{
  *param_1 = title::CModule::vftable;
  FUN_141971ed0();
  FUN_141974ea0(param_1 + 0x106);
  FUN_141975080(param_1 + 0x84);
  FUN_141974bc0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  return;
}




void FUN_141971140(void)

{
  return;
}




ulonglong FUN_141971150(undefined8 *param_1)

{
  ulonglong in_RAX;
  
  if (param_1 != (undefined8 *)0x0) {
    in_RAX = (**(code **)*param_1)(param_1,1);
  }
  return in_RAX & 0xffffffffffff0000;
}




bool FUN_141971170(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0xc40) + 0x30))(*(longlong **)(param_1 + 0xc40),0xe);
  if (lVar2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    return false;
  }
  puVar3 = FUN_1419749f0();
  if (puVar3 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141978310);
    return false;
  }
  cVar1 = FUN_141973370((longlong)puVar3,lVar2);
  return cVar1 != '\0';
}




longlong * FUN_141971220(longlong param_1,ushort *param_2,ushort param_3)

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
      plVar3 = (longlong *)(param_1 + 0x830);
    }
    else {
      if (uVar1 != 0x46a) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)(param_1 + 0x420);
    }
    cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_2,*param_2);
    if (cVar2 == '\0') {
      plVar3 = (longlong *)0x0;
    }
    return plVar3;
  }
  return (longlong *)0x0;
}




bool FUN_141971290(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_1419749f0();
  if (puVar2 == (undefined8 *)0x0) {
    return false;
  }
  (**(code **)(**(longlong **)(param_1 + 0xc40) + 8))(*(longlong **)(param_1 + 0xc40),0x46a,param_1);
  (**(code **)(**(longlong **)(param_1 + 0xc40) + 8))(*(longlong **)(param_1 + 0xc40),0x3ea,param_1);
  (**(code **)(**(longlong **)(param_1 + 0xc40) + 8))(*(longlong **)(param_1 + 0xc40),0x3eb,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc40) + 0x18))(*(longlong **)(param_1 + 0xc40),0xe,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_141971320(void)

{
  return 1;
}




undefined8 * FUN_141971330(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = title::CModule::vftable;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_141974b70((CMsg *)(param_1 + 2));
  FUN_141975030((CMsg *)(param_1 + 0x84));
  FUN_141974e50((CMsg *)(param_1 + 0x106));
  param_1[0x188] = param_2;
  return param_1;
}




undefined8 * FUN_1419713a0(undefined8 *param_1,uint param_2)

{
  *param_1 = title::CModule::vftable;
  FUN_141971ed0();
  FUN_141974ea0(param_1 + 0x106);
  FUN_141975080(param_1 + 0x84);
  FUN_141974bc0(param_1 + 2);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




ulonglong FUN_141971420(longlong param_1,int param_2,ushort *param_3,ushort param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    uVar1 = 0xffffffff;
  }
  else {
    plVar2 = FUN_141971220(param_1,param_3,param_4);
    uVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      uVar1 = (ulonglong)*(ushort *)(plVar2 + 1);
    }
  }
  return uVar1;
}




longlong * ModuleCreate(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
                    /* 0x14b0  1  ModuleCreate */
  puVar2 = operator_new(0xc48);
  if (puVar2 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = FUN_141971330(puVar2,param_1,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141978310);
    plVar3 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_141971290((longlong)plVar3);
    if (!bVar1) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}




void FUN_141971580(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}




ulonglong FUN_1419715a0(longlong param_1,short param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined6 in_register_00000012;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (uVar1 = (int)CONCAT62(in_register_00000012,param_2) - 1, in_RAX = (ulonglong)uVar1, (ushort)uVar1 < 0x20)) {
    uVar1 = 1 << ((char)param_2 - 1U & 0x1f);
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (uVar1 == ((uint)uVar2 & uVar1)) {
      return uVar2 & 0xffffffffffffff00;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),(uint)uVar2 | uVar1);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




ulonglong FUN_141971620(longlong param_1,short param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined6 in_register_00000012;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (uVar1 = (int)CONCAT62(in_register_00000012,param_2) - 1, in_RAX = (ulonglong)uVar1, (ushort)uVar1 < 0x20)) {
    uVar1 = 1 << ((char)param_2 - 1U & 0x1f);
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if ((uVar1 & (uint)uVar2) == 0) {
      return uVar2 & 0xffffffffffffff00;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),~uVar1 & (uint)uVar2);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}




int FUN_1419716a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar3 = 0;
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  uVar2 = 1;
  lVar4 = 0x20;
  do {
    if (uVar2 == (uVar1 & uVar2)) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return iVar3;
}




undefined4 FUN_1419716f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}




void FUN_141971700(longlong param_1)

{
  ulong uVar1;
  
  uVar1 = tq::TimeGet(0);
  *(ulong *)(param_1 + 0x14) = uVar1;
  return;
}




bool FUN_141971720(longlong param_1,ushort param_2)

{
  uint uVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) && ((ushort)(param_2 - 1) < 0x20)) {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    return (uVar1 >> ((byte)((char)param_2 - 1) & 0x1f) & 1) != 0;
  }
  return false;
}




undefined * FUN_141971770(void)

{
  if ((DAT_14197d298 & 1) == 0) {
    DAT_14197d298 = DAT_14197d298 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d290,"CTitle");
    atexit((_func_5014 *)&LAB_141977560);
  }
  return &DAT_14197d290;
}




void FUN_1419717d0(__uint64 param_1)

{
  if ((DAT_14197d298 & 1) == 0) {
    DAT_14197d298 = DAT_14197d298 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d290,"CTitle");
    atexit((_func_5014 *)&LAB_141977560);
  }
                    /* WARNING: Could not recover jumptable at 0x000141971825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14197d290,param_1);
  return;
}




void FUN_141971830(void *param_1)

{
  if ((DAT_14197d298 & 1) == 0) {
    DAT_14197d298 = DAT_14197d298 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d290,"CTitle");
    atexit((_func_5014 *)&LAB_141977560);
  }
                    /* WARNING: Could not recover jumptable at 0x000141971885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14197d290,param_1);
  return;
}




void FUN_141971890(void *param_1)

{
  if ((DAT_14197d298 & 1) == 0) {
    DAT_14197d298 = DAT_14197d298 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d290,"CTitle");
    atexit((_func_5014 *)&LAB_141977560);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419718e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14197d290,param_1);
  return;
}




undefined8 * FUN_1419718f0(int param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    puVar1 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_1419717d0(0x18);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = title::CTitle::vftable;
      *(int *)(puVar1 + 2) = param_1;
      puVar1[1] = param_2;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    }
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141978310);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




undefined8 * FUN_1419719e0(undefined8 *param_1,byte param_2)

{
  *param_1 = title::CTitle::vftable;
  if ((param_2 & 1) != 0) {
    FUN_141971830(param_1);
  }
  return param_1;
}




exception * FUN_141971aa0(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_141971ae0(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141971b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141971b10(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141971b70(void)

{
  return;
}




exception * FUN_141971b80(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141971bd0(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141971c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141971c10(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141971c30(exception *param_1,uint param_2)

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




exception * FUN_141971c90(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141971cf0(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141971d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141971d40(exception *param_1,uint param_2)

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




exception * FUN_141971db0(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141971e10(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141971e4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141971e60(exception *param_1,uint param_2)

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




void FUN_141971ed0(void)

{
  if (DAT_14197d2a0 != (longlong *)0x0) {
    (**(code **)(*DAT_14197d2a0 + 0x20))(DAT_14197d2a0,1);
  }
  return;
}




undefined1 * FUN_141971f00(longlong *param_1,int param_2,short param_3)

{
  ulonglong extraout_RAX;
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  CMsg local_418 [1040];
  
  puVar2 = (undefined1 *)register0x00000020;
  if (param_1[9] != 0) {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141978310);
      puVar2 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0x28))();
      puVar2 = (undefined1 *)0x0;
      if ((lVar1 != 0) && (puVar2 = (undefined1 *)FUN_1419715a0(lVar1,param_3), (char)puVar2 != '\0')) {
        FUN_141975030(local_418);
        uVar3 = FUN_1419750b0(local_418,'\x01',param_2,(char)param_3);
        if ((char)uVar3 != '\0') {
          (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],param_2,local_418);
        }
        uVar4 = FUN_141975080((undefined8 *)local_418);
        puVar2 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
    }
  }
  return puVar2;
}




undefined1 * FUN_141971fe0(longlong *param_1,int param_2,ushort param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong extraout_RAX;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  CMsg local_418 [1040];
  
  puVar4 = (undefined1 *)register0x00000020;
  if (param_1[9] != 0) {
    if (param_2 == 0) {
      log_InlineLogERROR(&DAT_141978310);
      puVar4 = (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
    }
    else {
      lVar3 = (**(code **)(*param_1 + 0x28))();
      puVar4 = (undefined1 *)0x0;
      if ((lVar3 != 0) && (puVar4 = (undefined1 *)FUN_141971620(lVar3,param_3), (char)puVar4 != '\0')) {
        FUN_141975030(local_418);
        uVar5 = FUN_1419750b0(local_418,'\x02',param_2,(char)param_3);
        if ((char)uVar5 != '\0') {
          (**(code **)(*(longlong *)param_1[9] + 0x28))((longlong *)param_1[9],param_2,local_418);
        }
        uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],param_2);
        if (uVar2 == param_3) {
          (**(code **)(*(longlong *)param_1[9] + 0x18))((longlong *)param_1[9],param_2,0);
          uVar5 = FUN_1419750b0(local_418,'\x03',param_2,0);
          if ((char)uVar5 != '\0') {
            (**(code **)(*(longlong *)param_1[9] + 0x38))((longlong *)param_1[9],param_2,local_418);
          }
        }
        cVar1 = (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],param_2);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x30))(param_1,param_2);
        }
        uVar6 = FUN_141975080((undefined8 *)local_418);
        puVar4 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
    }
  }
  return puVar4;
}




bool FUN_141972130(longlong *param_1,int param_2,ushort param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x28))();
    if (lVar2 != 0) {
      bVar1 = FUN_141971720(lVar2,param_3);
      return bVar1;
    }
  }
  return false;
}




int FUN_1419721a0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x28))();
    if (lVar2 != 0) {
      iVar1 = FUN_1419716a0(lVar2);
      return iVar1;
    }
  }
  return 0;
}




undefined8 FUN_1419721d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}




bool FUN_1419721e0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141972220(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141972330(longlong param_1,longlong *param_2)

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




longlong FUN_141972430(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141972452;
  }
  lVar2 = *plVar1;
LAB_141972452:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




void FUN_141972470(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141972494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141972510(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141972542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141972670(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14197b8c8);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141972700(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14197b8c8);
  }
  operator_new(param_1 << 3);
  return;
}




exception * FUN_141972770(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




undefined * FUN_1419727a0(void)

{
  if ((DAT_14197d2b0 & 1) == 0) {
    DAT_14197d2b0 = DAT_14197d2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d2a8,"CTitleMgr");
    atexit((_func_5014 *)&LAB_141977570);
  }
  return &DAT_14197d2a8;
}




void FUN_141972800(__uint64 param_1)

{
  if ((DAT_14197d2b0 & 1) == 0) {
    DAT_14197d2b0 = DAT_14197d2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d2a8,"CTitleMgr");
    atexit((_func_5014 *)&LAB_141977570);
  }
                    /* WARNING: Could not recover jumptable at 0x000141972855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14197d2a8,param_1);
  return;
}




void FUN_141972860(void *param_1)

{
  if ((DAT_14197d2b0 & 1) == 0) {
    DAT_14197d2b0 = DAT_14197d2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d2a8,"CTitleMgr");
    atexit((_func_5014 *)&LAB_141977570);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419728b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14197d2a8,param_1);
  return;
}




void FUN_1419728c0(void *param_1)

{
  if ((DAT_14197d2b0 & 1) == 0) {
    DAT_14197d2b0 = DAT_14197d2b0 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d2a8,"CTitleMgr");
    atexit((_func_5014 *)&LAB_141977570);
  }
                    /* WARNING: Could not recover jumptable at 0x000141972915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14197d2a8,param_1);
  return;
}




void FUN_141972930(longlong param_1,longlong param_2)

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




void FUN_141972990(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_1419729b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1419729d2;
  }
  lVar2 = *plVar1;
LAB_1419729d2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1419729f0(longlong *param_1)

{
  FUN_141972470(param_1);
  return param_1;
}




longlong * FUN_141972a50(longlong *param_1)

{
  FUN_141972510(param_1);
  return param_1;
}




longlong * FUN_141972a90(longlong *param_1)

{
  FUN_141972510(param_1);
  return param_1;
}




longlong * FUN_141972ab0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141972470(param_1);
  return param_2;
}




void FUN_141972ae0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14197b8c8);
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_141972b60(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_14197b8c8);
  }
  operator_new(param_2 * 8);
  return;
}




longlong FUN_141972bd0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141972bf2;
  }
  lVar2 = *plVar1;
LAB_141972bf2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141972c10(longlong *param_1)

{
  FUN_141972470(param_1);
  return param_1;
}




void FUN_141972c30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141972c50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141972c50(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




undefined8 * FUN_141972cb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141972cf0(void)

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




undefined8 * FUN_141972d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_141972dd0(undefined8 *param_1)

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




void FUN_141972e10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141972c50(param_1,(longlong *)plVar2[2]);
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




void FUN_141972e90(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141972eb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




void FUN_141972ef0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141972cf0();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141972f30(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_14197b950);
  }
  plVar5 = FUN_141972d50(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




exception * FUN_141973270(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_1419732c0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




undefined8 * FUN_141973320(undefined8 *param_1)

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




undefined1 FUN_141973370(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x48) = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    return 0;
  }
  FUN_141972e10(param_1 + 8);
  return 1;
}




void FUN_141973400(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141973420(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




longlong * FUN_1419734b0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14197360d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14197363c;
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
      goto LAB_14197360d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141972f30(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14197363c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_141973660(undefined8 *param_1)

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




undefined8 * FUN_1419736b0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_14197b9e0);
  }
  FUN_141972470(param_3);
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
        goto LAB_14197389c;
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
LAB_14197389c:
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
            FUN_141972930((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141972330((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141972930((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141972330((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141972930((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141972330((longlong)param_1,plVar7);
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




exception * FUN_141973a70(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong * FUN_141973ad0(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_141973ba0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




longlong * FUN_141973bc0(longlong *param_1,longlong *param_2,longlong *param_3,uint *param_4)

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
    FUN_141972f30(param_1,param_2,'\x01',(undefined8 *)param_1[6],(undefined8 *)param_4);
  }
  else {
    puVar2 = *(undefined8 **)param_1[6];
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    puVar3 = (undefined8 *)param_3[1];
    if (puVar3 == puVar2) {
      if (*param_4 < *(uint *)(puVar3 + 3)) {
        FUN_141972f30(param_1,param_2,'\x01',puVar3,(undefined8 *)param_4);
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
          FUN_141972f30(param_1,param_2,'\0',*(undefined8 **)(param_1[6] + 0x10),(undefined8 *)param_4);
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
              FUN_141972f30(param_1,param_2,'\0',plVar7,(undefined8 *)param_4);
              return param_2;
            }
            FUN_141972f30(param_1,param_2,'\x01',(undefined8 *)param_3[1],(undefined8 *)param_4);
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
              FUN_141972f30(param_1,param_2,'\0',(undefined8 *)param_3[1],(undefined8 *)param_4);
              return param_2;
            }
            FUN_141972f30(param_1,param_2,'\x01',plVar9,(undefined8 *)param_4);
            return param_2;
          }
        }
      }
    }
    plVar7 = FUN_1419734b0(param_1,&local_38,param_4);
    *param_2 = *plVar7;
    param_2[1] = plVar7[1];
  }
  return param_2;
}




longlong * FUN_141973ee0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_141972e10((longlong)param_1);
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
    FUN_1419736b0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141974090(undefined8 *param_1)

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




ulonglong FUN_1419740e0(longlong param_1,uint param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  longlong *extraout_RAX_00;
  longlong lVar3;
  undefined8 *puVar4;
  uint local_res10 [2];
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28 [2];
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    plVar2 = FUN_141973ad0((longlong *)(param_1 + 8),(longlong *)&local_38,local_res10);
    lVar3 = *(longlong *)(param_1 + 0x38);
    if ((local_38 == (longlong *)0x0) || (local_38 != *(longlong **)(param_1 + 8))) {
      _invalid_parameter_noinfo();
      plVar2 = extraout_RAX_00;
    }
    if (lStack_30 == lVar3) {
      uVar1 = (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    else {
      if (local_38 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar3 = 0;
      }
      else {
        lVar3 = *local_38;
      }
      if (lStack_30 == *(longlong *)(lVar3 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      if (*(longlong *)(lStack_30 + 0x20) != 0) {
        if (local_38 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar3 = 0;
        }
        else {
          lVar3 = *local_38;
        }
        if (lStack_30 == *(longlong *)(lVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        FUN_141971580(*(undefined8 **)(lStack_30 + 0x20));
        if (local_38 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar3 = 0;
        }
        else {
          lVar3 = *local_38;
        }
        if (lStack_30 == *(longlong *)(lVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        *(undefined8 *)(lStack_30 + 0x20) = 0;
        if (local_38 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar3 = 0;
        }
        else {
          lVar3 = *local_38;
        }
        if (lStack_30 == *(longlong *)(lVar3 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        *(undefined8 *)(lStack_30 + 0x20) = 0;
      }
      puVar4 = FUN_1419736b0((undefined8 *)(param_1 + 8),local_28,(longlong *)&local_38);
      uVar1 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
    }
  }
  return uVar1;
}




undefined8 * FUN_141974260(longlong *param_1,uint *param_2)

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
    plVar3 = FUN_141973bc0(param_1,local_28,(longlong *)&local_38,local_48);
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




void FUN_141974360(longlong *param_1)

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
  FUN_141973ee0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




undefined8 * FUN_1419743d0(undefined8 *param_1)

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




undefined8 * FUN_141974420(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint local_res10 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10[0] = param_2;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
    return (undefined8 *)0x0;
  }
  FUN_141973ad0((longlong *)(param_1 + 8),(longlong *)&local_28,local_res10);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((local_28 == (longlong *)0x0) || (local_28 != *(longlong **)(param_1 + 8))) {
    _invalid_parameter_noinfo();
  }
  if (local_20 == lVar3) {
    puVar1 = FUN_1419718f0(param_2,*(longlong *)(param_1 + 0x48));
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141978310);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar2 = FUN_141974260((longlong *)(param_1 + 8),local_res10);
      *puVar2 = puVar1;
    }
  }
  else {
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
    puVar1 = *(undefined8 **)(local_20 + 0x20);
  }
  return puVar1;
}




void FUN_141974550(longlong *param_1)

{
  FUN_141974360(param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141974580(undefined8 *param_1)

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
  lVar2 = FUN_141972cf0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_141974600(longlong *param_1)

{
  FUN_141974360(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141974630(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28 [2];
  
  *param_1 = title::CTitleMgr::vftable;
  plVar5 = *(longlong **)param_1[7];
  plVar2 = (longlong *)param_1[1];
  lVar6 = 0;
  local_48 = plVar2;
  plStack_40 = plVar5;
  while( true ) {
    plVar3 = (longlong *)param_1[7];
    if ((plVar2 == (longlong *)0x0) || (plVar2 != (longlong *)param_1[1])) {
      _invalid_parameter_noinfo();
    }
    if (plVar5 == plVar3) break;
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
    if (plVar5[4] == 0) {
      log_InlineLogERROR(&DAT_141978310);
    }
    else {
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
      if (plVar5[4] != 0) {
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
        FUN_141971580((undefined8 *)plVar5[4]);
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
        plVar5[4] = 0;
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
        plVar5[4] = 0;
      }
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
        while (plStack_40 = plVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x29);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x29);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, plStack_40 = plVar5, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
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
  plVar5 = param_1 + 1;
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[7] + 8) + 0x29);
  plVar2 = *(longlong **)(param_1[7] + 8);
  while (cVar1 == '\0') {
    FUN_141972c50(plVar5,(longlong *)plVar2[2]);
    plVar3 = (longlong *)*plVar2;
    operator_delete(plVar2);
    plVar2 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x29);
  }
  *(undefined8 *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  *(undefined8 *)param_1[7] = param_1[7];
  *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
  plStack_40 = (longlong *)param_1[7];
  local_48 = (longlong *)*plVar5;
  uStack_30 = *plStack_40;
  local_38 = local_48;
  FUN_141973ee0(plVar5,local_28,(longlong *)&local_38,(longlong *)&local_48);
  operator_delete((void *)param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  operator_delete((void *)*plVar5);
  return;
}




undefined8 * FUN_141974900(undefined8 *param_1)

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
  lVar2 = FUN_141972cf0();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_141974980(undefined8 *param_1)

{
  *param_1 = title::CTitleMgr::vftable;
  FUN_141974900(param_1 + 1);
  param_1[9] = 0;
  return param_1;
}




undefined8 * FUN_1419749c0(undefined8 *param_1,uint param_2)

{
  FUN_141974630(param_1);
  if ((param_2 & 1) != 0) {
    FUN_141972860(param_1);
  }
  return param_1;
}




undefined8 * FUN_1419749f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14197d2a0;
  if (DAT_14197d2a0 == (undefined8 *)0x0) {
    if ((DAT_14197d2b0 & 1) == 0) {
      DAT_14197d2b0 = DAT_14197d2b0 | 1;
      CMyHeap::CMyHeap((CMyHeap *)&DAT_14197d2a8,"CTitleMgr");
      atexit((_func_5014 *)&LAB_141977570);
    }
    puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_14197d2a8,0x50);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = title::CTitleMgr::vftable;
      FUN_141974900(puVar1 + 1);
      puVar1[9] = 0;
    }
    DAT_14197d2a0 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      log_InlineLogERROR(&DAT_141978310,"IF_NOT","m_pInstance","f:\\version\\cqserver-78.0.11-1204\\modules\\title\\src\\titlemgr.cpp",0x16);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}




CMsg * FUN_141974ad0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_141974b00(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_141974b10(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141974b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_141974b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141974b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_141974b30(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141974b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_141974b40(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141974b70(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = title::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141974bc0(undefined8 *param_1)

{
  *param_1 = title::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141974c30(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_141974c60(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  CMsg local_418 [1040];
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
  }
  else {
    plVar3 = FUN_1419749f0();
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141978310);
    }
    else {
      plVar4 = (longlong *)FUN_1419721d0((longlong)plVar3);
      if (plVar4 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_141978310);
      }
      else {
        lVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
        if (lVar5 == 0) {
          log_InlineLogERROR(&DAT_141978310);
        }
        else {
          FUN_141975030(local_418);
          uVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
          uVar6 = FUN_1419750b0(local_418,'\x03',param_2,uVar1);
          if ((char)uVar6 == '\0') {
            FUN_141975080((undefined8 *)local_418);
          }
          else {
            iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
            if (iVar2 == 0) {
              (**(code **)(*plVar4 + 0x28))(plVar4,param_2,local_418);
            }
            else {
              (**(code **)(*plVar4 + 0x38))(plVar4,param_2,local_418);
            }
            FUN_141975080((undefined8 *)local_418);
          }
        }
      }
    }
  }
  return;
}




undefined8 * FUN_141974e00(undefined8 *param_1,byte param_2)

{
  *param_1 = title::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141974e50(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = title::CMsgLogout::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141974ea0(undefined8 *param_1)

{
  *param_1 = title::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_141974f10(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3eb;
}




void FUN_141974f40(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
  }
  else {
    plVar1 = FUN_1419749f0();
    if (plVar1 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141978310);
    }
    else {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    }
  }
  return;
}




undefined8 * FUN_141974fe0(undefined8 *param_1,byte param_2)

{
  *param_1 = title::CMsgLogout::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_141975030(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = title::CMsgTitle::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_141975080(undefined8 *param_1)

{
  *param_1 = title::CMsgTitle::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_1419750b0(CMsg *param_1,char param_2,int param_3,undefined1 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong extraout_RAX;
  
  if ((param_2 == '\0') || (param_3 == 0)) {
    log_InlineLogERROR(&DAT_141978310);
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    tq::CMsg::Init(param_1);
    **(undefined2 **)(param_1 + 0x408) = 0xc;
    *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x46a;
    *(int *)(*(longlong *)(param_1 + 0x408) + 4) = param_3;
    *(char *)(*(longlong *)(param_1 + 0x408) + 9) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8) = param_4;
    lVar1 = *(longlong *)(param_1 + 0x408);
    *(undefined1 *)(lVar1 + 10) = 0;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




bool FUN_141975170(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x46a;
}




ulonglong FUN_1419751a0(longlong param_1,undefined1 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ushort *puVar3;
  ushort uVar4;
  
  uVar2 = *(ulonglong *)(param_1 + 0x408);
  if ((uVar2 != 0) && (uVar4 = *(byte *)(uVar2 + 10) + 0xc, uVar4 < 0x401)) {
    *(undefined1 *)((ulonglong)*(byte *)(uVar2 + 10) + 0xb + uVar2) = param_2;
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x408) + 10);
    *pcVar1 = *pcVar1 + '\x01';
    puVar3 = *(ushort **)(param_1 + 0x408);
    *puVar3 = uVar4;
    return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}




undefined8 * FUN_141975210(undefined8 *param_1,byte param_2)

{
  *param_1 = title::CMsgTitle::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_141975260(CMsg *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  IStringManager *pIVar9;
  undefined8 uVar10;
  uint uVar11;
  CMsg local_438 [1032];
  longlong local_30;
  
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141978310);
  }
  else {
    plVar5 = FUN_1419749f0();
    if (plVar5 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141978310);
    }
    else {
      plVar6 = (longlong *)FUN_1419721d0((longlong)plVar5);
      if (plVar6 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_141978310);
      }
      else {
        lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
        if (lVar7 == 0) {
          log_InlineLogERROR(&DAT_141978310);
        }
        else {
          cVar1 = *(char *)(*(longlong *)(param_1 + 0x408) + 9);
          if (cVar1 == '\x02') {
            bVar2 = FUN_141971720(lVar7,(ushort)*(byte *)(*(longlong *)(param_1 + 0x408) + 8));
            if ((bVar2) && (*(byte *)(*(longlong *)(param_1 + 0x408) + 8) != 0)) {
              uVar10 = FUN_141971620(lVar7,(ushort)*(byte *)(*(longlong *)(param_1 + 0x408) + 8));
              if ((char)uVar10 == '\0') {
                log_InlineLogERROR(&DAT_141978310);
              }
              else {
                (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_1);
                uVar11 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
                if (uVar11 == *(byte *)(*(longlong *)(param_1 + 0x408) + 8)) {
                  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0);
                  uVar8 = FUN_1419750b0(param_1,'\x03',param_2,0);
                  if ((char)uVar8 != '\0') {
                    (**(code **)(*plVar6 + 0x38))(plVar6,param_2,param_1);
                  }
                }
              }
            }
          }
          else if (cVar1 == '\x03') {
            uVar11 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
            if (uVar11 != *(byte *)(*(longlong *)(param_1 + 0x408) + 8)) {
              iVar3 = FUN_1419716f0(lVar7);
              uVar4 = tq::TimeGet(0);
              if (uVar4 - iVar3 < 5000) {
                pIVar9 = theInstance();
                lVar7 = *plVar6;
                uVar10 = (*(code *)**(undefined8 **)pIVar9)(pIVar9,"STR_TITLE_EDIT_TOOMANY");
                (**(code **)(lVar7 + 0x30))(plVar6,param_2,uVar10,0xff0000,0x7d5);
              }
              else if (*(byte *)(*(longlong *)(param_1 + 0x408) + 8) == 0) {
                (**(code **)(*plVar6 + 0x18))(plVar6,param_2,0);
                uVar8 = FUN_1419750b0(param_1,'\x03',param_2,0);
                if ((char)uVar8 != '\0') {
                  (**(code **)(*plVar6 + 0x38))(plVar6,param_2,param_1);
                }
              }
              else {
                bVar2 = FUN_141971720(lVar7,(ushort)*(byte *)(*(longlong *)(param_1 + 0x408) + 8));
                if (bVar2) {
                  (**(code **)(*plVar6 + 0x18))(plVar6,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8));
                  FUN_141971700(lVar7);
                  uVar8 = FUN_1419750b0(param_1,'\x03',param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 8));
                  if ((char)uVar8 != '\0') {
                    (**(code **)(*plVar6 + 0x38))(plVar6,param_2,param_1);
                  }
                }
              }
            }
          }
          else if (cVar1 == '\x04') {
            FUN_141975030(local_438);
            uVar8 = FUN_1419750b0(local_438,'\x04',param_2,0);
            if ((char)uVar8 != '\0') {
              for (uVar11 = 1; uVar11 < 0x21; uVar11 = uVar11 + 1) {
                bVar2 = FUN_141971720(lVar7,(ushort)uVar11);
                if (bVar2) {
                  FUN_1419751a0((longlong)local_438,(char)uVar11);
                }
              }
              if ((local_30 != 0) && (*(char *)(local_30 + 10) != '\0')) {
                (**(code **)(*plVar6 + 0x28))(plVar6,param_2,local_438);
              }
            }
          }
        }
      }
    }
  }
  return;
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
  
  local_res10 = _decode_pointer(DAT_14197d2e8);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_14197d2e8);
    local_res18[0] = _decode_pointer(DAT_14197d2e0);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_14197d2e8 = _encode_pointer(local_res10);
    DAT_14197d2e0 = _encode_pointer(local_res18[0]);
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




bool FUN_141975834(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_14197d2e0 = _encode_pointer(puVar1);
  DAT_14197d2e8 = DAT_14197d2e0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_141975d60();
    atexit(FUN_141975d98);
    atexit((_func_5014 *)&LAB_141975d54);
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
    if (DAT_14197d2b4 < 1) {
      return 0;
    }
    DAT_14197d2b4 = DAT_14197d2b4 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14197d2d0 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14197d2d0;
        pvVar3 = DAT_14197d2d0;
      }
      DAT_14197d2d0 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14197590e;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14197590e:
    if (DAT_14197d2c8 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_14197d2e8);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_14197d2e0);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_14197d2e8);
            plVar12 = (longlong *)_decode_pointer(DAT_14197d2e0);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_14197d2e0 = _encoded_null();
        DAT_14197d2e8 = DAT_14197d2e0;
      }
      DAT_14197d2c8 = 0;
      if (!bVar2) {
        LOCK();
        DAT_14197d2d0 = (void *)0x0;
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
      bVar13 = DAT_14197d2d0 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14197d2d0;
        pvVar3 = DAT_14197d2d0;
      }
      DAT_14197d2d0 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_141975a37;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_141975a37:
    if (DAT_14197d2c8 == 0) {
      DAT_14197d2c8 = 1;
      iVar4 = _initterm_e(&DAT_1419781b0,&DAT_1419781c0);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_1419781a0,&DAT_1419781a8);
      DAT_14197d2c8 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_14197d2d0 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_14197d2d8 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14197d2d8), BVar5 != 0)) {
      (*DAT_14197d2d8)(param_1,2,param_3);
    }
    DAT_14197d2b4 = DAT_14197d2b4 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x000141975bb0) */
/* WARNING: Removing unreachable block (ram,0x000141975b47) */
/* WARNING: Removing unreachable block (ram,0x000141975beb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14197d2b4 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_14197d278 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_14197d278 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141971320();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141971320();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_14197d278 = 0xffffffff;
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




undefined8 FUN_141975c68(undefined8 *param_1)

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




void FUN_141975d60(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141979ba0; puVar1 < &DAT_141979ba0; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_141975d98(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141979bb0; puVar1 < &DAT_141979bb0; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141970000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141970000);
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
  if (DAT_14197d280 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_14197d280 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_14197d280 == 0x2b992ddfa232) {
      DAT_14197d280 = 0x2b992ddfa233;
    }
  }
  _DAT_14197d288 = ~DAT_14197d280;
  return;
}




void Unwind_141975fc0(undefined8 param_1,longlong param_2)

{
  FUN_141971000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141975fe0(undefined8 param_1,longlong param_2)

{
  FUN_141974bc0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141976000(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_141976020(undefined8 param_1,longlong param_2)

{
  FUN_141974ea0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x830));
  return;
}




void Unwind_141976040(undefined8 param_1,longlong param_2)

{
  FUN_141971000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976060(undefined8 param_1,longlong param_2)

{
  FUN_141974bc0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141976080(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_1419760a0(undefined8 param_1,longlong param_2)

{
  FUN_141974ea0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x830));
  return;
}




void Unwind_1419760c0(undefined8 param_1,longlong param_2)

{
  FUN_141971000(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419760e0(undefined8 param_1,longlong param_2)

{
  FUN_141974bc0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  return;
}




void Unwind_141976100(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x420));
  return;
}




void Unwind_141976120(undefined8 param_1,longlong param_2)

{
  FUN_141974ea0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x830));
  return;
}




undefined * Catch_141976140(void)

{
  log_InlineLogCATCH_ERROR("Title::pMsg->Process(idActor),MsgType:%d @%s,%d");
  return &DAT_141971493;
}




void Unwind_141976180(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x60));
  return;
}




undefined8 Catch_1419761a0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14197153b;
}




void Unwind_1419761e0(void)

{
  DAT_14197d298 = DAT_14197d298 & 0xfffffffe;
  return;
}




void Unwind_141976200(void)

{
  DAT_14197d298 = DAT_14197d298 & 0xfffffffe;
  return;
}




void Unwind_141976220(void)

{
  DAT_14197d298 = DAT_14197d298 & 0xfffffffe;
  return;
}




void Unwind_141976240(void)

{
  DAT_14197d298 = DAT_14197d298 & 0xfffffffe;
  return;
}




void Unwind_141976260(undefined8 param_1,longlong param_2)

{
  FUN_141971830(*(void **)(param_2 + 0x60));
  return;
}




void Unwind_141976280(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419762a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419762c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419762e0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976300(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976320(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976340(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976360(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976380(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419763a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419763c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419763e0(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976400(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976420(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976440(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976460(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976480(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419764a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419764c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419764e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976500(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976520(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976540(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976560(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976580(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419765a0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419765c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1419765e0(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141976600(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_141976620(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141976640(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141976660(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976680(void)

{
  DAT_14197d2b0 = DAT_14197d2b0 & 0xfffffffe;
  return;
}




void Unwind_1419766a0(void)

{
  DAT_14197d2b0 = DAT_14197d2b0 & 0xfffffffe;
  return;
}




void Unwind_1419766c0(void)

{
  DAT_14197d2b0 = DAT_14197d2b0 & 0xfffffffe;
  return;
}




void Unwind_1419766e0(void)

{
  DAT_14197d2b0 = DAT_14197d2b0 & 0xfffffffe;
  return;
}




void Unwind_141976700(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141976720(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141976740(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141976760(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141976790(void)

{
  FUN_141971b70();
  return;
}




void Catch_1419767b0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1419767e0(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976800(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976820(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976840(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141976860(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141976880(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_1419768a0(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1419768c0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1419768e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976900(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976920(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976940(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976960(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976980(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419769a0(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419769c0(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419769e0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976a00(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976a20(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976a40(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976a60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141976a80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141976aa0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141976ac0(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141976ae0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976b00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141976b20(undefined8 param_1,longlong param_2)

{
  FUN_141971bd0(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141976b40(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976b60(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976b80(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976ba0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976bc0(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976be0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976c00(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976c20(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141976c40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1419741f1;
}




void Unwind_141976c80(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976ca0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976cc0(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976ce0(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976d00(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976d20(undefined8 param_1,longlong param_2)

{
  FUN_141973ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976d40(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976d60(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976d80(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976da0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976dc0(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141976de0(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976e00(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976e20(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976e40(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976e60(undefined8 param_1,longlong param_2)

{
  FUN_141973ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976e80(undefined8 param_1,longlong param_2)

{
  FUN_141974550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141976ea0(undefined8 param_1,longlong param_2)

{
  FUN_141973ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976ec0(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976ee0(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976f00(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976f20(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141976f40(undefined8 param_1,longlong param_2)

{
  FUN_141974600((longlong *)(*(longlong *)(param_2 + 0x90) + 8));
  return;
}




undefined * Catch_141976f60(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14197475f;
}




void Unwind_141976fa0(undefined8 param_1,longlong param_2)

{
  FUN_141974550(*(longlong **)(param_2 + 0x90));
  return;
}




void Unwind_141976fc0(undefined8 param_1,longlong param_2)

{
  FUN_141973ba0(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141976fe0(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141977000(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141977020(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141977040(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x90));
  return;
}




void Unwind_141977060(void)

{
  FUN_141971b70();
  return;
}




void Unwind_141977080(undefined8 param_1,longlong param_2)

{
  FUN_141972990(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419770a0(undefined8 param_1,longlong param_2)

{
  FUN_141972c30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419770c0(undefined8 param_1,longlong param_2)

{
  FUN_141972e90(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419770e0(undefined8 param_1,longlong param_2)

{
  FUN_141973400(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141977100(undefined8 param_1,longlong param_2)

{
  FUN_141973ba0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141977120(undefined8 param_1,longlong param_2)

{
  FUN_141974550(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141977140(undefined8 param_1,longlong param_2)

{
  FUN_141974600((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141977160(void)

{
  DAT_14197d2b0 = DAT_14197d2b0 & 0xfffffffe;
  return;
}




void Unwind_141977180(undefined8 param_1,longlong param_2)

{
  FUN_141972860(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_1419771a0(undefined8 param_1,longlong param_2)

{
  FUN_141974600((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_1419771c0(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419771e0(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141977200(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141977220(void)

{
  log_InlineLogCATCH_ERROR("Title::Actor:%d,MsgType:%d @%s,%d");
  return 0x141974de4;
}




void Unwind_141977270(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141977290(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419772b0(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_1419772d0(void)

{
  log_InlineLogCATCH_ERROR("Title::Actor:%d,MsgType:%d @%s,%d");
  return 0x141974fcb;
}




void Unwind_141977320(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141977340(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141977360(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141977380(undefined8 param_1,longlong param_2)

{
  FUN_141974b00(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1419773a0(undefined8 param_1,longlong param_2)

{
  FUN_141975080((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419773c0(undefined8 param_1,longlong param_2)

{
  FUN_141974b00((undefined8 *)(param_2 + 0x40));
  return;
}




void Unwind_1419773e0(undefined8 param_1,longlong param_2)

{
  FUN_141974b00((undefined8 *)(param_2 + 0x40));
  return;
}




undefined8 Catch_141977400(void)

{
  log_InlineLogCATCH_ERROR("Title::Actor:%d,MsgType:%d,Action:%d @%s,%d");
  return 0x141975638;
}




void FUN_14197745d(void)

{
  _unlock(8);
  return;
}




void FUN_141977476(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1419774a6(void)

{
  _DAT_14197d278 = 0xffffffff;
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




bool FUN_141977530(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* DONE: decompiled=314 failed=0 total=376 */
