/* Decompiled by Ghidra 12.1.4 | program: Pigeon.dll
   image base: 141570000 | functions: 767 */


void FUN_141571000(void)

{
  log_InlineLogERROR(&DAT_141583310);
  return;
}




void FUN_141571050(undefined8 *param_1)

{
  *param_1 = gs::IModule::vftable;
  return;
}




undefined8 FUN_141571060(void)

{
  return 0;
}




undefined8 FUN_141571070(void)

{
  return 0;
}




undefined8 FUN_141571080(void)

{
  return 0;
}




undefined8 FUN_141571090(void)

{
  return 0;
}




undefined8 * FUN_1415710a0(undefined8 *param_1,byte param_2)

{
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1415710e0(undefined8 *param_1)

{
  *param_1 = pigeon::CModule::vftable;
  FUN_14157e220(param_1 + 0x88);
  FUN_14157e3d0(param_1 + 3);
  *param_1 = gs::IModule::vftable;
  return;
}




ulonglong FUN_141571130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  
  puVar1 = FUN_14157c7c0();
  uVar2 = FUN_1415788e0((longlong)puVar1,param_2,param_3,param_4);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*param_1)(param_1,1);
  }
  return uVar2 & 0xffffffffffff0000;
}




ulonglong FUN_141571170(longlong param_1)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong extraout_RAX_00;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),0xc);
  if (lVar1 == 0) {
    log_InlineLogERROR(&DAT_141583310);
    return extraout_RAX & 0xffffffffffffff00;
  }
  puVar2 = FUN_14157c7c0();
  uVar3 = FUN_14157abb0((longlong)puVar2,lVar1);
  if ((char)uVar3 == '\0') {
    log_InlineLogERROR(&DAT_141583310);
    return extraout_RAX_00 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}




longlong * FUN_141571210(longlong param_1,ushort *param_2,ushort param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != (ushort *)0x0) && (*param_2 <= param_3)) {
    if (param_2[1] == 0x3ea) {
      plVar2 = (longlong *)(param_1 + 0x440);
    }
    else {
      if (param_2[1] != 0x802) {
        return (longlong *)0x0;
      }
      plVar2 = (longlong *)(param_1 + 0x18);
    }
    cVar1 = (**(code **)(*plVar2 + 8))();
    if (cVar1 == '\0') {
      plVar2 = (longlong *)0x0;
    }
    return plVar2;
  }
  return (longlong *)0x0;
}




void FUN_141571280(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14157c7c0();
                    /* WARNING: Could not recover jumptable at 0x000141571293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1);
  return;
}




bool FUN_1415712a0(longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = FUN_14157c7c0();
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x802,param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),0x3ea,param_1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),0xc,puVar2);
  return cVar1 != '\0';
}




undefined8 FUN_141571300(void)

{
  return 1;
}




undefined8 * FUN_141571310(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = gs::IModule::vftable;
  *param_1 = pigeon::CModule::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_14157e350((CMsg *)(param_1 + 3));
  FUN_14157e1d0((CMsg *)(param_1 + 0x88));
  FUN_14157c7c0();
  return param_1;
}




undefined8 * FUN_141571370(undefined8 *param_1,uint param_2)

{
  *param_1 = pigeon::CModule::vftable;
  FUN_14157e220(param_1 + 0x88);
  FUN_14157e3d0(param_1 + 3);
  *param_1 = gs::IModule::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




undefined2 FUN_1415713e0(longlong param_1,undefined4 param_2,ushort *param_3,ushort param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  
  plVar2 = FUN_141571210(param_1,param_3,param_4);
  uVar1 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    uVar1 = (undefined2)plVar2[1];
  }
  return uVar1;
}




longlong * ModuleCreate(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong *plVar2;
  
                    /* 0x1440  1  ModuleCreate */
  plVar2 = operator_new(0x850);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = (longlong)gs::IModule::vftable;
    *plVar2 = (longlong)pigeon::CModule::vftable;
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 2) = param_2;
    FUN_14157e350((CMsg *)(plVar2 + 3));
    FUN_14157e1d0((CMsg *)(plVar2 + 0x88));
    FUN_14157c7c0();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    bVar1 = FUN_1415712a0((longlong)plVar2);
    if (!bVar1) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}




undefined8 FUN_1415714f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}




undefined1 FUN_141571510(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141583310);
    return 0;
  }
  *(longlong *)(param_1 + 8) = param_2;
  return 1;
}




void FUN_1415715a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x0001415715ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_1415715c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
                    /* WARNING: Could not recover jumptable at 0x0001415715dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_1415715f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),2);
                    /* WARNING: Could not recover jumptable at 0x00014157160d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}




void FUN_141571620(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
                    /* WARNING: Could not recover jumptable at 0x00014157163d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




void FUN_141571650(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
                    /* WARNING: Could not recover jumptable at 0x00014157166d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return;
}




void FUN_141571680(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),5);
                    /* WARNING: Could not recover jumptable at 0x00014157169d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1);
  return;
}




void FUN_1415716b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),4);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001415716f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




void FUN_141571700(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),1);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141571740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  return;
}




void FUN_141571750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),3);
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),0);
  }
  return;
}




void FUN_1415717a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = pigeon::CPigeon::vftable;
  if (param_1[1] != 0) {
    (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],1,param_3,param_4,0xfffffffffffffffe);
    param_1[1] = 0;
    param_1[1] = 0;
  }
  return;
}




undefined * FUN_1415717f0(void)

{
  if ((DAT_14158b318 & 1) == 0) {
    DAT_14158b318 = DAT_14158b318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14158b310,"CPigeon");
    atexit((_func_5014 *)&LAB_141582340);
  }
  return &DAT_14158b310;
}




void FUN_141571850(__uint64 param_1)

{
  if ((DAT_14158b318 & 1) == 0) {
    DAT_14158b318 = DAT_14158b318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14158b310,"CPigeon");
    atexit((_func_5014 *)&LAB_141582340);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415718a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Alloc((CMyHeap *)&DAT_14158b310,param_1);
  return;
}




void FUN_1415718b0(void *param_1)

{
  if ((DAT_14158b318 & 1) == 0) {
    DAT_14158b318 = DAT_14158b318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14158b310,"CPigeon");
    atexit((_func_5014 *)&LAB_141582340);
  }
                    /* WARNING: Could not recover jumptable at 0x000141571905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::Free((CMyHeap *)&DAT_14158b310,param_1);
  return;
}




void FUN_141571910(void *param_1)

{
  if ((DAT_14158b318 & 1) == 0) {
    DAT_14158b318 = DAT_14158b318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14158b310,"CPigeon");
    atexit((_func_5014 *)&LAB_141582340);
  }
                    /* WARNING: Could not recover jumptable at 0x000141571965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CMyHeap::IsValidPt((CMyHeap *)&DAT_14158b310,param_1);
  return;
}




undefined8 * FUN_141571970(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_14158b318 & 1) == 0) {
    DAT_14158b318 = DAT_14158b318 | 1;
    CMyHeap::CMyHeap((CMyHeap *)&DAT_14158b310,"CPigeon");
    atexit((_func_5014 *)&LAB_141582340);
  }
  puVar1 = CMyHeap::Alloc((CMyHeap *)&DAT_14158b310,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = pigeon::CPigeon::vftable;
    puVar1[1] = 0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    log_InlineLogERROR(&DAT_141583310,"IF_OK","pPigeon","f:\\version\\cqserver-78.0.11-1204\\modules\\pigeon\\src\\pigeon.cpp",0x19);
  }
  else {
    if (param_1 != 0) {
      puVar1[1] = param_1;
      return puVar1;
    }
    log_InlineLogERROR(&DAT_141583310,"IF_NOT",&DAT_141583624,"f:\\version\\cqserver-78.0.11-1204\\modules\\pigeon\\src\\pigeon.cpp",0x51);
    log_InlineLogERROR(&DAT_141583310,"IF_OK","pPigeon->Create(pRec)","f:\\version\\cqserver-78.0.11-1204\\modules\\pigeon\\src\\pigeon.cpp",0x1b);
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_141571aa0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)InstanceGet();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,PTR_s_ad_queue_14158b068);
  if (plVar2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141583310);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0);
    (**(code **)(*plVar3 + 0xb8))(plVar3,0);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,1);
    (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,2);
    (**(code **)(*plVar3 + 0xb8))(plVar3,param_2);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,3);
    (**(code **)(*plVar3 + 0x80))(plVar3,param_3);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,4);
    (**(code **)(*plVar3 + 200))(plVar3,0);
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,5);
    (**(code **)(*plVar3 + 0x80))(plVar3,param_4);
    cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,1);
    if (cVar1 == '\0') {
      log_InlineLogERROR(&DAT_141583310);
      (**(code **)*plVar2)(plVar2,1);
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)FUN_141571850(0x10);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *puVar4 = pigeon::CPigeon::vftable;
        puVar4[1] = 0;
      }
      if (puVar4 == (undefined8 *)0x0) {
        log_InlineLogERROR(&DAT_141583310);
        (**(code **)*plVar2)(plVar2,1);
        puVar4 = (undefined8 *)0x0;
      }
      else {
        cVar1 = FUN_141571510((longlong)puVar4,(longlong)plVar2);
        if (cVar1 == '\0') {
          (**(code **)*plVar2)(plVar2,1);
          (**(code **)*puVar4)(puVar4,1);
          puVar4 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar4;
}




undefined8 * FUN_141571cf0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1415717a0(param_1,param_2,param_3,param_4);
  if ((param_2 & 1) != 0) {
    FUN_1415718b0(param_1);
  }
  return param_1;
}




exception * FUN_141571d20(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}




void FUN_141571d70(exception *param_1)

{
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141571da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




longlong FUN_141571db0(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x38)) {
    return *(longlong *)(param_1 + 0x20);
  }
  return param_1 + 0x20;
}




exception * FUN_141571dd0(exception *param_1,uint param_2)

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




exception * FUN_141571e30(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141571e90(exception *param_1)

{
  *(undefined ***)param_1 = std::length_error::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141571ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141571ee0(exception *param_1,uint param_2)

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




exception * FUN_141571f50(exception *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  std::exception::exception(param_1);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),param_2);
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




void FUN_141571fb0(exception *param_1)

{
  *(undefined ***)param_1 = std::out_of_range::vftable;
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141571fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141572000(exception *param_1,uint param_2)

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




exception * FUN_141572100(exception *param_1,char *param_2)

{
  char *local_res10 [3];
  
  local_res10[0] = param_2;
  std::exception::exception(param_1,local_res10);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




void FUN_141572140(exception *param_1)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
                    /* WARNING: Could not recover jumptable at 0x000141572160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::exception::~exception(param_1);
  return;
}




exception * FUN_141572170(exception *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  std::exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_1415721d0(void)

{
  return;
}




void FUN_141572230(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x120) != 0)) && (*(int *)(param_1 + 0xd8) != 0)) {
    if (*(ulonglong *)(param_1 + 0x128) < 0x10) {
      lVar6 = param_1 + 0x110;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x110);
    }
    if (*(ulonglong *)(param_1 + 0x100) < 0x10) {
      lVar5 = param_1 + 0xe8;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    plVar1 = *(longlong **)(param_1 + 0x48);
    lVar2 = *plVar1;
    uVar3 = (**(code **)(lVar2 + 0x88))(plVar1);
    uVar4 = (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined4 *)(param_1 + 0xd8));
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(param_1 + 0x48),param_2,lVar5,lVar6,uVar4,uVar3);
  }
  return;
}




void FUN_141572320(longlong param_1,char *param_2,char *param_3,undefined4 param_4)

{
  if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
    log_InlineLogERROR(&DAT_141583310,"IF_NOT","szUserName && szWords","f:\\version\\cqserver-78.0.11-1204\\modules\\pigeon\\src\\pigeonmgr.cpp",0x2ef);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x108),param_3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xe0),param_2);
    *(undefined4 *)(param_1 + 0xd8) = param_4;
  }
  return;
}




bool FUN_1415723d0(longlong param_1)

{
  __time64_t _Var1;
  
  _Var1 = _time64((__time64_t *)0x0);
  return 0x3b < _Var1 - *(longlong *)(param_1 + 0xd0);
}




basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_141572400(undefined8 param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4,
             basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_5)

{
  __uint64 _Var1;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_2,param_3);
  _Var1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find(param_2,param_4,0);
  if (_Var1 != *(__uint64 *)npos_exref) {
    do {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::replace(param_2,_Var1,*(__uint64 *)(param_4 + 0x18),param_5);
      _Var1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::find(param_2,param_4,*(longlong *)(param_5 + 0x18) + _Var1);
    } while (_Var1 != *(__uint64 *)npos_exref);
  }
  return param_2;
}




void FUN_1415724b0(int param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  tm *ptVar8;
  __time64_t local_res10;
  
  if (((param_2 == 0) || (param_4 == 0)) || (param_1 == 0)) {
    log_InlineLogERROR(&DAT_141583310);
  }
  else {
    plVar6 = (longlong *)InstanceGet();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,PTR_s_ad_log_14158b0b0);
    if (plVar6 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,0);
      (**(code **)(*plVar7 + 0xb8))(plVar7,0);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,1);
      (**(code **)(*plVar7 + 0xb8))(plVar7,param_1);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,2);
      (**(code **)(*plVar7 + 0x80))(plVar7,param_2);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,4);
      (**(code **)(*plVar7 + 0xb8))(plVar7,param_3);
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,5);
      (**(code **)(*plVar7 + 0x80))(plVar7,param_4);
      local_res10 = _time64((__time64_t *)0x0);
      ptVar8 = _localtime64(&local_res10);
      if (ptVar8 == (tm *)0x0) {
        log_InlineLogERROR(&DAT_141583310);
      }
      else {
        iVar1 = ptVar8->tm_year;
        iVar2 = ptVar8->tm_mon;
        iVar3 = ptVar8->tm_mday;
        iVar4 = ptVar8->tm_hour;
        iVar5 = ptVar8->tm_min;
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,3);
        (**(code **)(*plVar7 + 0xa8))(plVar7,(((((iVar1 + 0x76c) % 100) * 100 + 1 + iVar2) * 100 + iVar3) * 100 + iVar4) * 100 + iVar5);
        (**(code **)(*plVar6 + 0x50))(plVar6,0);
        (**(code **)*plVar6)(plVar6,1);
      }
    }
  }
  return;
}




ulonglong FUN_1415726e0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415726ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x58))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}




char FUN_141572700(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  IStringManager *pIVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return '\0';
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))();
  if (cVar2 != '\0') {
    pIVar3 = theInstance();
    lVar1 = **(longlong **)(param_1 + 0x48);
    uVar4 = (*(code *)**(undefined8 **)pIVar3)(pIVar3,"STR_PIGEON_FORBID");
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar4,0xff0000,0x7d5);
    return cVar2;
  }
  return '\0';
}




bool FUN_1415727c0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_141572800(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong FUN_141572850(longlong *param_1)

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
  uVar6 = uVar1 >> 1;
  lVar3 = lVar5;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_1;
    lVar4 = lVar5;
    if (plVar2 == (longlong *)0x0) goto LAB_14157289f;
  }
  lVar4 = *plVar2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = lVar4;
  }
LAB_14157289f:
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
  return *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8) + (ulonglong)((uint)uVar1 & 1) * 8;
}




longlong * FUN_141572910(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_141572943;
  }
  lVar2 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = lVar2;
  }
LAB_141572943:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 1;
  return param_1;
}




bool FUN_141572970(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




bool FUN_1415729b0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141572ac0(longlong param_1,longlong *param_2)

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




void FUN_141572c30(longlong param_1,longlong *param_2)

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




bool FUN_141572cf0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




longlong * FUN_141572d40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141572d62;
  }
  lVar2 = *plVar1;
LAB_141572d62:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -1;
  return param_1;
}




longlong FUN_141572d80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}




longlong FUN_141572e00(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141572e22;
  }
  lVar2 = *plVar1;
LAB_141572e22:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141572e40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141572e62;
  }
  lVar2 = *plVar1;
LAB_141572e62:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x10;
  return param_1;
}




bool FUN_141572e80(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] == param_2[1];
}




void FUN_141572f30(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1415896e8);
}




exception * FUN_141572fa0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  return param_1;
}




exception * FUN_141572ff0(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::length_error::vftable;
  return param_1;
}




void FUN_141573080(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001415730a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_141573110(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141573134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong FUN_1415731a0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1];
}




longlong * FUN_1415731e0(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_141573210;
  }
  else {
LAB_141573210:
    lVar4 = *plVar1;
    if (plVar1 != (longlong *)0x0) {
      lVar2 = lVar4;
    }
  }
  if ((ulonglong)(param_1[1] + param_2) <= (ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= (ulonglong)(param_1[1] + param_2)) goto LAB_141573248;
  }
  _invalid_parameter_noinfo();
LAB_141573248:
  param_1[1] = param_1[1] + param_2;
  return param_1;
}




void FUN_141573290(void)

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
  _CxxThrowException(local_48,(ThrowInfo *)&DAT_1415896e8);
}




longlong FUN_141573320(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}




void FUN_1415733b0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001415733e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




void FUN_1415734f0(longlong *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000141573522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _invalid_parameter_noinfo();
  return;
}




longlong * FUN_141573590(longlong *param_1,longlong param_2)

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
    if (plVar1 != (longlong *)0x0) goto LAB_1415735c0;
  }
  else {
LAB_1415735c0:
    lVar2 = *plVar1;
  }
  uVar4 = param_1[1] + param_2 * 0x10;
  if (uVar4 <= *(ulonglong *)(lVar2 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x18) <= uVar4) goto LAB_1415735e8;
  }
  _invalid_parameter_noinfo();
LAB_1415735e8:
  param_1[1] = param_1[1] + param_2 * 0x10;
  return param_1;
}




void FUN_141573670(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_141573730(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1415737c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 << 4);
  return;
}




void FUN_141573840(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 << 3);
  return;
}




void FUN_1415738c0(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 * 0x30);
  return;
}




void FUN_141573950(ulonglong param_1)

{
  undefined1 auVar1 [16];
  char *local_res8 [4];
  undefined **local_20 [4];
  
  if ((param_1 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_1, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res8[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res8);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_1 * 0x30);
  return;
}




exception * FUN_141573a00(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::bad_alloc::vftable;
  return param_1;
}




longlong FUN_141573a30(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}




void * FUN_141573ac0(void *param_1,longlong param_2,void *param_3)

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




void FUN_141573b70(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    _invalid_parameter_noinfo();
    param_1[1] = param_2[1];
    return;
  }
  param_1[1] = param_2[1];
  return;
}




longlong FUN_141573bc0(longlong *param_1)

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
  uVar6 = uVar1 >> 1;
  lVar3 = lVar5;
  if (plVar2 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar2 = (longlong *)*param_1;
    lVar4 = lVar5;
    if (plVar2 == (longlong *)0x0) goto LAB_141573c0f;
  }
  lVar4 = *plVar2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = lVar4;
  }
LAB_141573c0f:
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
  return *(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar6 * 8) + (ulonglong)((uint)uVar1 & 1) * 8;
}




void FUN_141573da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return;
}




void FUN_141573e10(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  while ((param_3 < param_2 && (lVar1 = (param_2 + -1) / 2, *(uint *)(param_1 + 8 + lVar1 * 0x10) < *(uint *)(param_4 + 1)))) {
    *(undefined8 *)(param_1 + param_2 * 0x10) = *(undefined8 *)(param_1 + lVar1 * 0x10);
    *(undefined8 *)(param_1 + 8 + param_2 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar1 * 0x10);
    param_2 = lVar1;
  }
  *(undefined8 *)(param_1 + param_2 * 0x10) = *param_4;
  *(undefined8 *)(param_1 + 8 + param_2 * 0x10) = param_4[1];
  return;
}




void FUN_141573ea0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_1415724b0(iVar2,lVar5,(uint)uVar1,lVar4);
  lVar4 = **(longlong **)(param_1 + 0x48);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(lVar4 + 0x88))(*(undefined8 *)(param_1 + 0x48),uVar3);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(lVar4 + 0x80))(*(undefined8 *)(param_1 + 0x48),uVar3);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  pcVar6 = (char *)(**(code **)(*param_2 + 0x30))(param_2);
  pcVar7 = (char *)(**(code **)(*param_2 + 0x20))(param_2);
  FUN_141572320(param_1,pcVar7,pcVar6,uVar3);
  pcVar6 = (char *)(**(code **)(*param_2 + 0x30))(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x108),pcVar6);
  pcVar6 = (char *)(**(code **)(*param_2 + 0x20))(param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xe0),pcVar6);
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  return;
}




bool FUN_141573ff0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




longlong * FUN_141574040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_141574073;
  }
  lVar2 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = lVar2;
  }
LAB_141574073:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 1;
  return param_1;
}




longlong * FUN_1415740a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = lVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_1415740e9;
  }
  lVar2 = *plVar1;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = lVar2;
  }
LAB_1415740e9:
  if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 1;
  return param_2;
}




longlong * FUN_141574120(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141574142;
  }
  lVar2 = *plVar1;
LAB_141574142:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -1;
  return param_1;
}




longlong * FUN_141574160(longlong *param_1,longlong *param_2)

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
    if (plVar1 == (longlong *)0x0) goto LAB_141574197;
  }
  lVar2 = *plVar1;
LAB_141574197:
  if ((ulonglong)param_1[1] <= *(ulonglong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + -1;
  return param_2;
}




longlong FUN_1415741c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415741e2;
  }
  lVar2 = *plVar1;
LAB_1415741e2:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  return param_1[1];
}




longlong * FUN_141574200(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141574222;
  }
  lVar2 = *plVar1;
LAB_141574222:
  if (*(ulonglong *)(lVar2 + 0x20) <= (ulonglong)param_1[1]) {
    _invalid_parameter_noinfo();
  }
  param_1[1] = param_1[1] + 0x10;
  return param_1;
}




bool FUN_141574240(longlong *param_1,longlong *param_2)

{
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] != param_2[1];
}




void FUN_141574280(longlong param_1,longlong param_2)

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




void FUN_1415742e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141574310(longlong param_1,longlong param_2)

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




void FUN_141574380(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141574390(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong FUN_141574420(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141574442;
  }
  lVar2 = *plVar1;
LAB_141574442:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141574460(longlong *param_1)

{
  FUN_141573080(param_1);
  return param_1;
}




longlong FUN_141574480(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415744a2;
  }
  lVar2 = *plVar1;
LAB_1415744a2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1415744c0(longlong *param_1)

{
  FUN_141573110(param_1);
  return param_1;
}




longlong * FUN_1415744e0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_141574556;
  }
  _invalid_parameter_noinfo();
LAB_141574556:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}




void FUN_141574590(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141574660(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 * 8);
  return;
}




longlong * FUN_1415746e0(longlong *param_1)

{
  FUN_1415733b0(param_1);
  return param_1;
}




longlong * FUN_141574700(longlong *param_1,longlong param_2)

{
  FUN_1415731e0(param_1,param_2);
  return param_1;
}




longlong * FUN_141574720(longlong *param_1,longlong param_2)

{
  FUN_1415731e0(param_1,-param_2);
  return param_1;
}




void FUN_141574750(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x10)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 << 4);
  return;
}




void FUN_1415747e0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 8)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 * 8);
  return;
}




void FUN_141574850(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_1415748c0(undefined8 *param_1)

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




undefined8 * FUN_141574900(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_141574940(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141573110(param_1);
  return param_2;
}




longlong * FUN_141574970(longlong *param_1)

{
  FUN_1415734f0(param_1);
  return param_1;
}




longlong * FUN_141574990(longlong *param_1,longlong param_2)

{
  FUN_141573590(param_1,param_2);
  return param_1;
}




void FUN_1415749b0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  char *local_res10 [3];
  undefined **local_20 [4];
  
  if ((param_2 != 0) && (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < 0x30)) {
    local_res10[0] = (char *)0x0;
    std::exception::exception((exception *)local_20,local_res10);
    local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_20,(ThrowInfo *)&DAT_1415897a0);
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 * FUN_141574a40(undefined8 *param_1)

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




void FUN_141574a90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[1];
  if (*param_1 != *param_2) {
    _invalid_parameter_noinfo();
    param_1[1] = lVar1;
    return;
  }
  param_1[1] = lVar1;
  return;
}




void FUN_141574ae0(longlong *param_1,longlong *param_2,longlong *param_3)

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




longlong * FUN_141574c50(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  while (param_2[1] != *(longlong *)(param_3 + 8)) {
    puVar1 = (undefined8 *)FUN_141573bc0(param_2);
    puVar2 = (undefined8 *)FUN_141573bc0(param_4);
    *puVar2 = *puVar1;
    param_4[1] = param_4[1] + 1;
    param_2[1] = param_2[1] + 1;
  }
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return param_1;
}




void FUN_141574d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return;
}




void FUN_141574dc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1)) && (param_2 != param_1)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if ((*(uint *)(param_3 + 1) < *(uint *)(param_2 + 1)) && (param_3 != param_2)) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  if ((*(uint *)(param_2 + 1) < *(uint *)(param_1 + 1)) && (param_2 != param_1)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}




void FUN_141574e90(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_10;
  
  lVar4 = param_2;
  while( true ) {
    lVar3 = lVar4 * 2 + 2;
    if (param_3 <= lVar3) break;
    if (*(uint *)(param_1 + 8 + lVar3 * 0x10) < *(uint *)(param_1 + -8 + lVar3 * 0x10)) {
      lVar3 = lVar4 * 2 + 1;
    }
    *(undefined8 *)(param_1 + lVar4 * 0x10) = *(undefined8 *)(param_1 + lVar3 * 0x10);
    *(undefined8 *)(param_1 + 8 + lVar4 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar3 * 0x10);
    lVar4 = lVar3;
  }
  if (lVar3 == param_3) {
    *(undefined8 *)(param_1 + lVar4 * 0x10) = *(undefined8 *)(param_1 + -0x10 + param_3 * 0x10);
    *(undefined8 *)(param_1 + 8 + lVar4 * 0x10) = *(undefined8 *)(param_1 + -8 + param_3 * 0x10);
    lVar4 = param_3 + -1;
  }
  uVar1 = *param_4;
  uVar2 = param_4[1];
  if (param_2 < lVar4) {
    local_10 = (uint)uVar2;
    do {
      lVar3 = (lVar4 + -1) / 2;
      if (local_10 <= *(uint *)(param_1 + 8 + lVar3 * 0x10)) break;
      *(undefined8 *)(param_1 + lVar4 * 0x10) = *(undefined8 *)(param_1 + lVar3 * 0x10);
      *(undefined8 *)(param_1 + 8 + lVar4 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar3 * 0x10);
      lVar4 = lVar3;
    } while (param_2 < lVar3);
  }
  *(undefined8 *)(param_1 + lVar4 * 0x10) = uVar1;
  *(undefined8 *)(param_1 + 8 + lVar4 * 0x10) = uVar2;
  return;
}




undefined8 * FUN_141574ff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_141575040(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_18;
  undefined8 local_10;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  local_18 = *param_4;
  local_10 = param_4[1];
  FUN_141574e90((longlong)param_1,0,param_2 - (longlong)param_1 >> 4,&local_18);
  return;
}




longlong FUN_1415750c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415750e2;
  }
  lVar2 = *plVar1;
LAB_1415750e2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141575100(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141575122;
  }
  lVar2 = *plVar1;
LAB_141575122:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141575140(longlong *param_1)

{
  FUN_141573080(param_1);
  return param_1;
}




longlong FUN_141575160(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141575182;
  }
  lVar2 = *plVar1;
LAB_141575182:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_1415751a0(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141573080(param_1);
  return param_2;
}




longlong FUN_1415751d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_1415751f2;
  }
  lVar2 = *plVar1;
LAB_1415751f2:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong FUN_141575210(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    plVar1 = (longlong *)*param_1;
    lVar2 = 0;
    if (plVar1 == (longlong *)0x0) goto LAB_141575232;
  }
  lVar2 = *plVar1;
LAB_141575232:
  if (param_1[1] == *(longlong *)(lVar2 + 0x30)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] + 0x18;
}




longlong * FUN_141575250(longlong *param_1)

{
  FUN_141573110(param_1);
  return param_1;
}




longlong * FUN_141575270(longlong *param_1,longlong *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  FUN_141573110(param_1);
  return param_2;
}




void FUN_1415752a0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1415752c0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_1415752e0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141575300(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141575320(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575320(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_141575370(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575370(param_1,(longlong *)param_2[2]);
    plVar2 = (longlong *)*param_2;
    operator_delete(param_2);
    param_2 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  return;
}




void FUN_1415753c0(longlong param_1)

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




longlong * FUN_141575460(longlong *param_1)

{
  FUN_1415733b0(param_1);
  return param_1;
}




undefined8 * FUN_141575480(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1415754c0(longlong *param_1,longlong *param_2,longlong param_3)

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
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_141575536;
  }
  _invalid_parameter_noinfo();
LAB_141575536:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}




longlong * FUN_141575570(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar4 = lVar2 - param_3;
  if (uVar4 <= (ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar4) goto LAB_1415755e9;
  }
  _invalid_parameter_noinfo();
LAB_1415755e9:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar4;
  return param_2;
}




undefined8 * FUN_141575630(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 FUN_141575690(longlong param_1,ulonglong param_2)

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
      FUN_141573290();
    }
    lVar1 = FUN_141574750(param_1 + 0x10,param_2);
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
    *(ulonglong *)(param_1 + 0x28) = param_2 * 0x10 + lVar1;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}




undefined8 * FUN_141575700(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




undefined8 * FUN_1415757e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




undefined8 * FUN_141575860(undefined8 *param_1)

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




undefined8 * FUN_1415758b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




longlong * FUN_1415758f0(longlong *param_1)

{
  FUN_1415734f0(param_1);
  return param_1;
}




undefined8 * FUN_141575910(undefined8 *param_1)

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




longlong * FUN_141575950(longlong *param_1,longlong *param_2,longlong param_3)

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
  uVar3 = param_3 * 0x10 + lVar2;
  if (uVar3 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x18) <= uVar3) goto LAB_1415759bd;
  }
  _invalid_parameter_noinfo();
LAB_1415759bd:
  *param_2 = (longlong)plVar1;
  param_2[1] = uVar3;
  return param_2;
}




undefined8 * FUN_1415759f0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_141575a50(void)

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




undefined8 * FUN_141575ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,undefined1 param_6)

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




void FUN_141575b30(void)

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




undefined8 * FUN_141575b90(undefined8 *param_1)

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




undefined8 * FUN_141575be0(undefined8 *param_1)

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




void FUN_141575c30(longlong *param_1,longlong *param_2,longlong *param_3)

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




void * FUN_141575d20(void *param_1,longlong param_2,void *param_3)

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




longlong * FUN_141575d90(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  
  while (param_2[1] != *(longlong *)(param_3 + 8)) {
    plVar1 = (longlong *)FUN_141573bc0(param_2);
    if (*plVar1 == *param_4) break;
    param_2[1] = param_2[1] + 1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}




void FUN_141575e10(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_141575ee0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

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




longlong * FUN_141575f70(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  while (*(longlong *)(param_2 + 8) != param_3[1]) {
    param_3[1] = param_3[1] + -1;
    puVar1 = (undefined8 *)FUN_141573bc0(param_3);
    param_4[1] = param_4[1] + -1;
    puVar2 = (undefined8 *)FUN_141573bc0(param_4);
    *puVar2 = *puVar1;
  }
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  return param_1;
}




void FUN_141576050(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 - (longlong)param_1 >> 4;
  if (0x28 < lVar1) {
    lVar1 = lVar1 + 1;
    lVar1 = (longlong)(lVar1 + (ulonglong)((uint)(lVar1 >> 0x3f) & 7)) >> 3;
    FUN_141574dc0(param_1,param_1 + lVar1 * 2,param_1 + lVar1 * 4);
    FUN_141574dc0(param_2 + lVar1 * -2,param_2,param_2 + lVar1 * 2);
    FUN_141574dc0(param_3 + lVar1 * -4,param_3 + lVar1 * -2,param_3);
    FUN_141574dc0(param_1 + lVar1 * 2,param_2,param_3 + lVar1 * -2);
    return;
  }
  FUN_141574dc0(param_1,param_2,param_3);
  return;
}




void FUN_141576120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = param_2 - param_1 >> 4;
  lVar1 = lVar3 - (param_2 - param_1 >> 0x3f) >> 1;
  if (0 < lVar1) {
    lVar2 = lVar1 * 0x10 + param_1;
    do {
      local_18 = *(undefined8 *)(lVar2 + -0x10);
      local_10 = *(undefined8 *)(lVar2 + -8);
      lVar1 = lVar1 + -1;
      FUN_141574e90(param_1,lVar1,lVar3,&local_18);
      lVar2 = lVar2 + -0x10;
    } while (0 < lVar1);
  }
  return;
}




void FUN_1415761b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint local_10;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar5 + 2, puVar4 != param_2) {
      uVar2 = *puVar4;
      uVar3 = puVar5[3];
      local_10 = (uint)uVar3;
      puVar6 = puVar4;
      if (local_10 < *(uint *)(param_1 + 1)) {
        for (; param_1 != puVar6; puVar6 = puVar6 + -2) {
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
        }
        *param_1 = uVar2;
        param_1[1] = uVar3;
        puVar5 = puVar4;
      }
      else {
        uVar1 = *(uint *)(puVar5 + 1);
        puVar5 = puVar4;
        while (local_10 < uVar1) {
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
          uVar1 = *(uint *)(puVar5 + -3);
          puVar5 = puVar5 + -2;
        }
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar4;
      }
    }
  }
  return;
}




void FUN_141576280(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141574ff0(param_1,param_2,param_3);
  return;
}




void FUN_1415762a0(undefined8 *param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)(param_2 + -0x10);
  uStack_10 = *(undefined8 *)(param_2 + -8);
  *(undefined8 *)(param_2 + -0x10) = *param_1;
  *(undefined8 *)(param_2 + -8) = param_1[1];
  FUN_141574e90((longlong)param_1,0,(param_2 - (longlong)param_1) + -0x10 >> 4,&local_18);
  return;
}




void FUN_1415762f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575320(param_1,(longlong *)plVar2[2]);
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




void FUN_1415763b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 8);
  cVar1 = *(char *)((longlong)plVar2 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575370(param_1,(longlong *)plVar2[2]);
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




undefined8 * FUN_141576430(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141576480(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[6];
  uVar1 = uVar2 + param_1[7];
  *param_2 = 0;
  if (uVar1 < uVar2) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}




void FUN_1415764f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141576510(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141576530(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141576550(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_1415765a0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141575700(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_1415765c0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




undefined8 * FUN_1415766e0(undefined8 *param_1)

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




undefined8 * FUN_141576730(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == (undefined8 *)0x0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = *param_3;
  return param_1;
}




undefined8 * FUN_141576770(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




undefined8 * FUN_1415767d0(undefined8 *param_1)

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




undefined8 * FUN_141576820(undefined8 *param_1,ulonglong param_2,undefined8 *param_3)

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




void FUN_1415768c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141575a50();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141576900(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1415896e8);
  }
  plVar5 = FUN_141575ab0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_141576c40(undefined8 *param_1,undefined8 *param_2,uint *param_3)

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




void FUN_141576d20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141575b30();
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(lVar1 + 0x29) = 1;
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




undefined8 * FUN_141576d60(undefined8 *param_1)

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




undefined8 * FUN_141576db0(undefined8 *param_1)

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




void FUN_141576e00(longlong *param_1,longlong *param_2,longlong *param_3)

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




void FUN_141576ef0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  FUN_141575ee0(param_1,param_2,param_3);
  return;
}




longlong FUN_141576f20(longlong param_1,longlong param_2,longlong param_3)

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




ulonglong * FUN_141576f90(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar9 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 4) - ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1) * 2;
  FUN_141576050(param_2,puVar9,param_3 + -2);
  puVar7 = puVar9 + 2;
  for (; ((param_2 < puVar9 && (uVar1 = *(uint *)(puVar9 + -1), uVar2 = *(uint *)(puVar9 + 1), uVar1 > uVar2 || uVar2 == uVar1)) && (uVar1 <= uVar2));
      puVar9 = puVar9 + -2) {
  }
  puVar8 = puVar7;
  puVar11 = puVar9;
  if (puVar7 < param_3) {
    uVar1 = *(uint *)(puVar9 + 1);
    do {
      uVar2 = *(uint *)(puVar7 + 1);
      puVar8 = puVar7;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar7 = puVar7 + 2;
      puVar8 = puVar7;
    } while (puVar7 < param_3);
  }
joined_r0x000141577023:
  do {
    puVar10 = puVar11;
    puVar6 = puVar8;
    puVar5 = puVar7;
    puVar7 = puVar9;
    puVar8 = puVar6;
    if (param_3 <= puVar5) {
joined_r0x00014157708a:
      for (; param_2 < puVar9; puVar9 = puVar9 + -2) {
        puVar12 = puVar7 + -2;
        puVar11 = puVar10;
        if (*(uint *)(puVar10 + 1) <= *(uint *)(puVar7 + -1)) {
          if (*(uint *)(puVar10 + 1) < *(uint *)(puVar7 + -1)) break;
          puVar11 = puVar10 + -2;
          if (puVar11 != puVar12) {
            uVar3 = *puVar11;
            uVar4 = puVar10[-1];
            *puVar11 = *puVar12;
            puVar10[-1] = puVar7[-1];
            *puVar12 = uVar3;
            puVar7[-1] = uVar4;
          }
        }
        puVar10 = puVar11;
        puVar7 = puVar12;
      }
      if (puVar9 == param_2) {
        if (puVar5 == param_3) {
          *param_1 = (ulonglong)puVar10;
          param_1[1] = (ulonglong)puVar6;
          return param_1;
        }
        if ((puVar6 != puVar5) && (puVar10 != puVar6)) {
          uVar3 = *puVar10;
          uVar4 = puVar10[1];
          *puVar10 = *puVar6;
          puVar10[1] = puVar6[1];
          *puVar6 = uVar3;
          puVar6[1] = uVar4;
        }
        puVar7 = puVar5 + 2;
        puVar8 = puVar6 + 2;
        puVar11 = puVar10 + 2;
        if (puVar10 != puVar5) {
          uVar3 = *puVar10;
          uVar4 = puVar10[1];
          *puVar10 = *puVar5;
          puVar10[1] = puVar5[1];
          *puVar5 = uVar3;
          puVar5[1] = uVar4;
        }
      }
      else {
        puVar12 = puVar9 + -2;
        if (puVar5 == param_3) {
          puVar11 = puVar10 + -2;
          if (puVar12 != puVar11) {
            uVar3 = *puVar12;
            uVar4 = puVar9[-1];
            *puVar12 = *puVar11;
            puVar9[-1] = puVar10[-1];
            *puVar11 = uVar3;
            puVar10[-1] = uVar4;
          }
          puVar8 = puVar6 + -2;
          puVar7 = puVar5;
          puVar9 = puVar12;
          if (puVar11 != puVar8) {
            uVar3 = *puVar11;
            uVar4 = puVar10[-1];
            *puVar11 = *puVar8;
            puVar10[-1] = puVar6[-1];
            *puVar8 = uVar3;
            puVar6[-1] = uVar4;
          }
        }
        else {
          if (puVar5 != puVar12) {
            uVar3 = *puVar5;
            uVar4 = puVar5[1];
            *puVar5 = *puVar12;
            puVar5[1] = puVar9[-1];
            *puVar12 = uVar3;
            puVar9[-1] = uVar4;
          }
          puVar7 = puVar5 + 2;
          puVar9 = puVar12;
          puVar11 = puVar10;
        }
      }
      goto joined_r0x000141577023;
    }
    if (*(uint *)(puVar5 + 1) <= *(uint *)(puVar10 + 1)) {
      if (*(uint *)(puVar5 + 1) < *(uint *)(puVar10 + 1)) goto joined_r0x00014157708a;
      puVar8 = puVar6 + 2;
      if (puVar6 != puVar5) {
        uVar3 = *puVar6;
        uVar4 = puVar6[1];
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar5 = uVar3;
        puVar5[1] = uVar4;
      }
    }
    puVar7 = puVar5 + 2;
    puVar11 = puVar10;
  } while( true );
}




void FUN_141577290(longlong param_1,longlong param_2)

{
  if (0x10 < (longlong)(param_2 - param_1 & 0xfffffffffffffff0U)) {
    FUN_141576120(param_1,param_2);
  }
  return;
}




void FUN_1415772d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141574ff0(param_1,param_2,param_3);
  return;
}




void FUN_141577330(undefined8 *param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (0x10 < (longlong)(param_2 - (longlong)param_1 & 0xfffffffffffffff0U)) {
    local_18 = *(undefined8 *)(param_2 + -0x10);
    uStack_10 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -0x10) = *param_1;
    *(undefined8 *)(param_2 + -8) = param_1[1];
    FUN_141574e90((longlong)param_1,0,(longlong)((param_2 - (longlong)param_1) - 0x10U) >> 4,&local_18);
  }
  return;
}




longlong * FUN_141577390(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (param_2 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141583310);
    return (longlong *)0x0;
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 0x80);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x50))) {
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
    plVar3 = (longlong *)plVar7[4];
    if (plVar3 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
    }
    else {
      iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
      iVar6 = (**(code **)(*param_2 + 8))(param_2);
      if (iVar5 == iVar6) {
        return plVar3;
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
  return (longlong *)0x0;
}




int FUN_141577530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return -1;
  }
  uVar3 = *(ulonglong *)(param_1 + 0xc0);
  iVar5 = 0;
  if (uVar3 + *(longlong *)(param_1 + 200) < uVar3) {
    _invalid_parameter_noinfo();
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  while( true ) {
    uVar4 = *(ulonglong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 200);
    if (uVar4 < *(ulonglong *)(param_1 + 0xc0)) {
      _invalid_parameter_noinfo();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar1 != *(longlong **)(param_1 + 0x90))) {
      _invalid_parameter_noinfo();
    }
    if (uVar3 == uVar4) {
      return -1;
    }
    uVar4 = uVar3 >> 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar3) {
      _invalid_parameter_noinfo();
    }
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x28) <= uVar4) {
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *plVar1;
      }
      uVar4 = uVar4 - *(longlong *)(lVar2 + 0x28);
    }
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar3 & 1) * 8) == param_2) break;
    iVar5 = iVar5 + 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar2 + 0x38) + *(longlong *)(lVar2 + 0x30)) <= uVar3) {
      _invalid_parameter_noinfo();
    }
    uVar3 = uVar3 + 1;
  }
  return iVar5;
}




undefined8 * FUN_1415776a0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141589800);
  }
  FUN_141573110(param_3);
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
        goto LAB_14157788c;
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
LAB_14157788c:
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
            FUN_141574280((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141572ac0((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141574280((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141572ac0((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141574280((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141572ac0((longlong)param_1,plVar7);
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




exception * FUN_141577a60(exception *param_1,exception *param_2)

{
  std::exception::exception(param_1,param_2);
  *(undefined ***)param_1 = std::logic_error::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)(param_2 + 0x18));
  *(undefined ***)param_1 = std::out_of_range::vftable;
  return param_1;
}




longlong FUN_141577ac0(undefined8 *param_1,uint *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  FUN_141575700(param_1,&local_28,param_2);
  lVar5 = 0;
  plVar4 = local_20;
  while( true ) {
    if ((local_28 == 0) || (local_28 != local_18)) {
      _invalid_parameter_noinfo();
    }
    if (plVar4 == local_10) break;
    lVar5 = lVar5 + 1;
    if (local_28 == 0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar4 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar4[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar4 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar4 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar4[1] + 0x29);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
        while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
          cVar1 = *(char *)(plVar4[1] + 0x29);
          plVar3 = (longlong *)plVar4[1];
          plVar2 = plVar4;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  }
  return lVar5;
}




undefined8 * FUN_141577bb0(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_1415765c0(param_1,param_2,param_3);
  return param_2;
}




longlong * FUN_141577c10(longlong *param_1,longlong *param_2,uint *param_3)

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




undefined8 * FUN_141577ce0(undefined8 *param_1)

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




void FUN_141577d40(undefined8 *param_1)

{
  FUN_1415753c0((longlong)param_1);
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141577d70(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141577dc0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[6];
  uVar1 = uVar2 + param_1[7];
  *param_2 = 0;
  if (uVar1 < uVar2) {
    _invalid_parameter_noinfo();
  }
  uVar3 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar3;
  return param_2;
}




undefined8 * FUN_141577e10(undefined8 *param_1)

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




undefined8 * FUN_141577e70(undefined8 *param_1,undefined8 *param_2)

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




undefined8 * FUN_141577ec0(undefined8 *param_1,undefined8 *param_2)

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




void FUN_141577f10(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141577f30(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




undefined8 * FUN_141577f50(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_18 [2];
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *param_3 < *(uint *)(puVar3 + 3);
      if (bVar4) {
        puVar2 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = (undefined8 *)puVar3[2];
      }
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar3 = FUN_141576900(param_1,local_18,bVar4,puVar3,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}




undefined8 * FUN_141577fc0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

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




undefined8 * FUN_141578050(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  FUN_141576c40(param_1,param_2,param_3);
  return param_2;
}




undefined8 * FUN_141578070(undefined8 *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,undefined8 *param_5)

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
    _CxxThrowException(local_48,(ThrowInfo *)&DAT_1415896e8);
  }
  plVar5 = FUN_1415757e0(param_1,param_1[6],param_4,param_1[6],param_5,0);
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




undefined8 * FUN_1415783b0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  *param_2 = 0;
  if (((param_1 == (undefined8 *)0x0) || (uVar1 < (ulonglong)param_1[6])) || ((ulonglong)(param_1[6] + param_1[7]) < uVar1)) {
    _invalid_parameter_noinfo();
  }
  uVar2 = *param_1;
  param_2[1] = uVar1;
  *param_2 = uVar2;
  return param_2;
}




void FUN_141578410(longlong *param_1)

{
  ulonglong uVar1;
  longlong local_18;
  ulonglong local_10;
  
  uVar1 = param_1[6];
  if (uVar1 + param_1[7] < uVar1) {
    _invalid_parameter_noinfo();
  }
  local_18 = *param_1;
  local_10 = uVar1;
  FUN_141572850(&local_18);
  return;
}




void FUN_141578460(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  ulonglong uStack_10;
  
  uVar2 = param_1[6] + param_1[7];
  if (uVar2 < (ulonglong)param_1[6]) {
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
  uVar2 = uVar2 - 1;
  if (uVar2 <= (ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar3 = *plVar1;
    }
    if (*(ulonglong *)(lVar3 + 0x30) <= uVar2) goto LAB_1415784e0;
  }
  _invalid_parameter_noinfo();
LAB_1415784e0:
  uStack_10 = uVar2;
  FUN_141572850((longlong *)&local_18);
  return;
}




undefined8 * FUN_141578510(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  FUN_141575ee0(param_2,param_3,param_4);
  return param_2 + param_3 * 2;
}




longlong * FUN_141578560(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1415762f0((longlong)param_1);
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
    FUN_1415776a0(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




undefined8 * FUN_141578720(undefined8 *param_1)

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




undefined8 * FUN_141578770(undefined8 *param_1)

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




void FUN_1415787f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_141574ff0(param_1,param_2,param_3);
  return;
}




void FUN_141578850(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  for (lVar1 = param_2 - (longlong)param_1; 1 < lVar1 >> 4; lVar1 = lVar1 + -0x10) {
    local_18 = *(undefined8 *)((longlong)param_1 + lVar1 + -0x10);
    uStack_10 = *(undefined8 *)((longlong)param_1 + lVar1 + -8);
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x10) = *param_1;
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = param_1[1];
    FUN_141574e90((longlong)param_1,0,lVar1 + -0x10 >> 4,&local_18);
  }
  return;
}




void FUN_1415788e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x80);
  plVar2 = *(longlong **)(param_1 + 0x50);
  while( true ) {
    plVar3 = *(longlong **)(param_1 + 0x80);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x50))) {
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
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 8);
  cVar1 = *(char *)((longlong)plVar6 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575370(param_1 + 0x50,(longlong *)plVar6[2]);
    plVar2 = (longlong *)*plVar6;
    operator_delete(plVar6);
    plVar6 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x80) + 8) = *(longlong *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) = *(longlong *)(param_1 + 0x80);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 8);
  cVar1 = *(char *)((longlong)plVar6 + 0x29);
  while (cVar1 == '\0') {
    FUN_141575320(param_1 + 8,(longlong *)plVar6[2]);
    plVar2 = (longlong *)*plVar6;
    operator_delete(plVar6);
    plVar6 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x29);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) = *(longlong *)(param_1 + 0x38);
  FUN_1415753c0(param_1 + 0x90);
  return;
}




undefined8 FUN_141578b00(longlong param_1,uint param_2)

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
  
  puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x80))[1];
  cVar1 = *(char *)((longlong)puVar8 + 0x29);
  puVar3 = *(undefined8 **)(param_1 + 0x80);
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
  puVar8 = *(undefined8 **)(param_1 + 0x80);
  local_30 = puVar3;
  local_38 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar3 == puVar8) || (param_2 < *(uint *)(puVar3 + 3))) {
    plVar7 = &local_28;
    local_20 = *(undefined8 *)(param_1 + 0x80);
    local_28 = *(longlong *)(param_1 + 0x50);
  }
  else {
    plVar7 = &local_38;
  }
  plVar2 = (longlong *)*plVar7;
  lVar9 = *(longlong *)(param_1 + 0x80);
  local_18 = plVar2;
  local_10 = plVar7[1];
  if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x50))) {
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




undefined8 FUN_141578c10(longlong param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  short local_res18;
  longlong *local_468;
  ulonglong local_460;
  undefined8 local_458;
  CMsg local_448 [1040];
  
  local_458 = 0xfffffffffffffffe;
  uVar12 = *(longlong *)(param_1 + 200) + 9;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar12;
  uVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar4,0);
  if ((ulonglong)param_3 <= uVar12 / 10) {
    FUN_14157e7c0(local_448);
    uVar8 = FUN_14157e870((longlong)local_448,param_3,0);
    if ((char)uVar8 != '\0') {
      uVar11 = 0;
      local_res18 = 0;
      uVar12 = *(ulonglong *)(param_1 + 0xc0);
      if (uVar12 + *(longlong *)(param_1 + 200) < uVar12) {
        _invalid_parameter_noinfo();
      }
      plVar2 = *(longlong **)(param_1 + 0x90);
      local_468 = plVar2;
      while( true ) {
        uVar1 = *(ulonglong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 200);
        local_460 = uVar12;
        if (uVar1 < *(ulonglong *)(param_1 + 0xc0)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar2 == (longlong *)0x0) || (plVar2 != *(longlong **)(param_1 + 0x90))) {
          _invalid_parameter_noinfo();
        }
        if (uVar12 == uVar1) break;
        if (param_3 * 10 <= uVar11) {
          if (param_3 * 10 + 10 <= uVar11) break;
          puVar9 = (undefined8 *)FUN_141572850((longlong *)&local_468);
          plVar3 = (longlong *)*puVar9;
          if (plVar3 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_141583310);
          }
          else {
            lVar10 = **(longlong **)(param_1 + 0x48);
            uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
            uVar6 = (**(code **)(lVar10 + 0x80))(*(undefined8 *)(param_1 + 0x48),uVar6);
            lVar10 = **(longlong **)(param_1 + 0x48);
            uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3);
            uVar5 = (**(code **)(lVar10 + 0x88))(*(undefined8 *)(param_1 + 0x48),uVar7);
            lVar10 = FUN_14157e8c0((longlong)local_448,plVar3,uVar11,uVar6,uVar5);
            if ((char)lVar10 == '\0') {
              (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),param_2,local_448);
              local_res18 = local_res18 + 1;
              uVar8 = FUN_14157e870((longlong)local_448,param_3,local_res18);
              if ((char)uVar8 == '\0') {
                log_InlineLogERROR(&DAT_141583310);
                uVar8 = FUN_14157e810((undefined8 *)local_448);
                return uVar8;
              }
              lVar10 = FUN_14157e8c0((longlong)local_448,plVar3,uVar11,uVar6,uVar5);
              if ((char)lVar10 == '\0') {
                log_InlineLogERROR(&DAT_141583310);
                uVar8 = FUN_14157e810((undefined8 *)local_448);
                return uVar8;
              }
            }
          }
        }
        uVar11 = uVar11 + 1;
        lVar10 = 0;
        if (plVar2 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        else {
          lVar10 = *plVar2;
        }
        if ((ulonglong)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar10 + 0x30)) <= uVar12) {
          _invalid_parameter_noinfo();
        }
        uVar12 = uVar12 + 1;
      }
      (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),param_2,local_448);
      uVar8 = FUN_14157e810((undefined8 *)local_448);
      return uVar8;
    }
    log_InlineLogERROR(&DAT_141583310);
    uVar8 = FUN_14157e810((undefined8 *)local_448);
  }
  return uVar8;
}




undefined8 * FUN_141578f40(undefined8 *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_18 [2];
  
  puVar3 = (undefined8 *)param_1[6];
  bVar4 = true;
  if (*(char *)((longlong)puVar3[1] + 0x29) == '\0') {
    puVar2 = (undefined8 *)puVar3[1];
    do {
      puVar3 = puVar2;
      bVar4 = *param_3 < *(uint *)(puVar3 + 3);
      if (bVar4) {
        puVar2 = (undefined8 *)*puVar3;
      }
      else {
        puVar2 = (undefined8 *)puVar3[2];
      }
    } while (*(char *)((longlong)puVar2 + 0x29) == '\0');
  }
  puVar3 = FUN_141576900(param_1,local_18,bVar4,puVar3,(undefined8 *)param_3);
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  return param_2;
}




longlong * FUN_141578fb0(longlong *param_1,longlong *param_2,uint *param_3)

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
LAB_14157910d:
    local_30 = plVar4;
    if (*param_3 <= *(uint *)(plVar5 + 3)) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_38;
      goto LAB_14157913c;
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
      goto LAB_14157910d;
    }
    bVar7 = true;
  }
  plVar6 = FUN_141578070(param_1,&local_38,bVar7,plVar6,(undefined8 *)param_3);
  *(undefined1 *)(param_2 + 2) = 1;
  local_30 = (longlong *)plVar6[1];
  *param_2 = *plVar6;
LAB_14157913c:
  param_2[1] = (longlong)local_30;
  return param_2;
}




undefined8 * FUN_141579160(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
    _CxxThrowException(local_80,(ThrowInfo *)&DAT_141589800);
  }
  FUN_141573080(param_3);
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
        goto LAB_14157934c;
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
LAB_14157934c:
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
            FUN_141574310((longlong)param_1,(longlong)plVar7);
            plVar8 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(*plVar8 + 0x28) != '\x01') || (*(char *)(plVar8[2] + 0x28) != '\x01')) {
              if (*(char *)(plVar8[2] + 0x28) == '\x01') {
                *(undefined1 *)(*plVar8 + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141572c30((longlong)param_1,plVar8);
                plVar8 = (longlong *)plVar7[2];
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(plVar8[2] + 0x28) = 1;
              FUN_141574310((longlong)param_1,(longlong)plVar7);
              break;
            }
            *(undefined1 *)(plVar8 + 5) = 0;
          }
        }
        else {
          if ((char)plVar8[5] == '\0') {
            *(undefined1 *)(plVar8 + 5) = 1;
            *(undefined1 *)(plVar7 + 5) = 0;
            FUN_141572c30((longlong)param_1,plVar7);
            plVar8 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar8 + 0x29) == '\0') {
            if ((*(char *)(plVar8[2] + 0x28) != '\x01') || (*(char *)(*plVar8 + 0x28) != '\x01')) {
              if (*(char *)(*plVar8 + 0x28) == '\x01') {
                *(undefined1 *)(plVar8[2] + 0x28) = 1;
                *(undefined1 *)(plVar8 + 5) = 0;
                FUN_141574310((longlong)param_1,(longlong)plVar8);
                plVar8 = (longlong *)*plVar7;
              }
              *(char *)(plVar8 + 5) = (char)plVar7[5];
              *(undefined1 *)(plVar7 + 5) = 1;
              *(undefined1 *)(*plVar8 + 0x28) = 1;
              FUN_141572c30((longlong)param_1,plVar7);
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




longlong * FUN_141579520(longlong *param_1,longlong *param_2,uint *param_3)

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




void FUN_1415795f0(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141579610(undefined8 *param_1)

{
  operator_delete((void *)*param_1);
  return;
}




void FUN_141579630(longlong *param_1)

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
  FUN_141578560(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




longlong * FUN_1415796a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
      FUN_1415763b0((longlong)param_1);
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
    FUN_141579160(param_1,local_18,&local_28);
  }
  lVar2 = param_3[1];
  *param_2 = *param_1;
  param_2[1] = lVar2;
  return param_2;
}




void FUN_141579850(longlong *param_1)

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
  FUN_1415796a0(param_1,local_18,&local_28,&local_38);
  operator_delete((void *)param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}




void FUN_1415798c0(longlong param_1,ulonglong param_2)

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
    FUN_141572f30();
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 < 8) {
    uVar3 = 8;
  }
  if ((param_2 < uVar3) && (uVar2 <= 0xfffffffffffffff - uVar3)) {
    param_2 = uVar3;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x30) >> 1;
  _Dst_00 = (void *)FUN_141574660(param_1 + 0x10,uVar2 + param_2);
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




void FUN_141579a80(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




undefined8 * FUN_141579ab0(undefined8 *param_1)

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




undefined8 * FUN_141579b00(undefined8 *param_1)

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




void FUN_141579b50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  FUN_141574ff0(param_2,param_3,param_4);
  return;
}




longlong * FUN_141579bd0(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  FUN_1415754c0(param_4,param_1,*(longlong *)(param_3 + 8) - param_2[1]);
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)*param_4;
  }
  plVar3 = (longlong *)*plVar3;
  uVar9 = param_4[1];
  uVar1 = *(ulonglong *)(param_3 + 8);
  plVar2 = (longlong *)*param_2;
  for (uVar6 = param_2[1]; uVar6 != uVar1; uVar6 = uVar6 + 1) {
    uVar7 = uVar6 >> 1;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) <= uVar6) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    if (*(ulonglong *)(lVar4 + 0x28) <= uVar7) {
      if (plVar2 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar2;
      }
      uVar7 = uVar7 - *(longlong *)(lVar4 + 0x28);
    }
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar2;
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + uVar7 * 8);
    uVar8 = (uint)uVar9;
    uVar7 = uVar9 >> 1;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) <= uVar9) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    if (*(ulonglong *)(lVar5 + 0x28) <= uVar7) {
      if (plVar3 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar3;
      }
      uVar7 = uVar7 - *(longlong *)(lVar5 + 0x28);
    }
    if (plVar3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    uVar9 = uVar9 + 1;
    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar7 * 8) + (ulonglong)(uVar8 & 1) * 8) =
         *(undefined8 *)(lVar4 + (ulonglong)((uint)uVar6 & 1) * 8);
  }
  return param_1;
}




longlong * FUN_141579db0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  FUN_141575570(param_4,param_1,param_3[1] - *(longlong *)(param_2 + 8));
  if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)*param_4;
  }
  plVar3 = (longlong *)*plVar3;
  uVar8 = param_4[1];
  plVar1 = (longlong *)*param_3;
  uVar6 = param_3[1];
  uVar2 = *(ulonglong *)(param_2 + 8);
  while (uVar2 != uVar6) {
    uVar6 = uVar6 - 1;
    uVar7 = uVar6 >> 1;
    if (plVar1 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if ((ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30)) <= uVar6) {
      _invalid_parameter_noinfo();
    }
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    if (*(ulonglong *)(lVar4 + 0x28) <= uVar7) {
      if (plVar1 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar1;
      }
      uVar7 = uVar7 - *(longlong *)(lVar4 + 0x28);
    }
    if (plVar1 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar1;
    }
    uVar8 = uVar8 - 1;
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + uVar7 * 8);
    uVar7 = uVar8 >> 1;
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) <= uVar8) {
      _invalid_parameter_noinfo();
    }
    if (plVar3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    if (*(ulonglong *)(lVar5 + 0x28) <= uVar7) {
      if (plVar3 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar3;
      }
      uVar7 = uVar7 - *(longlong *)(lVar5 + 0x28);
    }
    if (plVar3 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar3;
    }
    *(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + uVar7 * 8) + (ulonglong)((uint)uVar8 & 1) * 8) =
         *(undefined8 *)(lVar4 + (ulonglong)((uint)uVar6 & 1) * 8);
  }
  return param_1;
}




void FUN_141579fa0(longlong *param_1)

{
  FUN_141579630(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_141579fd0(longlong *param_1)

{
  FUN_141579850(param_1);
  operator_delete((void *)*param_1);
  return;
}




longlong FUN_14157a000(longlong *param_1,uint *param_2)

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
  
  FUN_141576c40(param_1,&local_38,param_2);
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
  FUN_1415796a0(param_1,&local_38,&local_48,&local_58);
  return lVar8;
}




void FUN_14157a140(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) && (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 2U >> 1)) {
    FUN_1415798c0(param_1,1);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x28) * 2;
  }
  uVar5 = lVar4 - 1;
  uVar3 = uVar5 >> 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) = pvVar2;
  }
  puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 8) + (ulonglong)((uint)uVar5 & 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  *(ulonglong *)(param_1 + 0x30) = uVar5;
  return;
}




void FUN_14157a1f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(char *)(param_1 + 0x30) + (char)*(longlong *)(param_1 + 0x38) & 1U) == 0) &&
     (*(ulonglong *)(param_1 + 0x28) <= *(longlong *)(param_1 + 0x38) + 2U >> 1)) {
    FUN_1415798c0(param_1,1);
  }
  uVar3 = *(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x38);
  uVar4 = uVar3 >> 1;
  if (*(ulonglong *)(param_1 + 0x28) <= uVar4) {
    uVar4 = uVar4 - *(ulonglong *)(param_1 + 0x28);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) = pvVar2;
  }
  puVar1 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar3 & 1) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  return;
}




void FUN_14157a2a0(undefined8 *param_1)

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




undefined8 * FUN_14157a2e0(undefined8 *param_1)

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
  lVar2 = FUN_141575a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14157a360(undefined8 *param_1)

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
  lVar2 = FUN_141575b30();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




void FUN_14157a3e0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

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
      FUN_141573290();
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
      puVar2 = (undefined8 *)FUN_141574750(param_1 + 0x10,uVar5);
      lVar4 = *(longlong *)(param_2 + 8) - *(longlong *)(param_1 + 0x18) >> 4;
      FUN_141575ee0(puVar2 + lVar4 * 2,param_3,param_4);
      FUN_141574ff0(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_2 + 8),puVar2);
      FUN_141574ff0(*(undefined8 **)(param_2 + 8),*(undefined8 **)(param_1 + 0x20),puVar2 + (lVar4 + param_3) * 2);
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
      FUN_141574ff0(*(undefined8 **)(param_2 + 8),puVar2,*(undefined8 **)(param_2 + 8) + param_3 * 2);
      FUN_141575ee0(*(undefined8 **)(param_1 + 0x20),param_3 - ((longlong)*(undefined8 **)(param_1 + 0x20) - *(longlong *)(param_2 + 8) >> 4),&local_38);
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
      puVar3 = FUN_141574ff0(puVar2 + param_3 * -2,puVar2,puVar2);
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      FUN_141576f20(*(longlong *)(param_2 + 8),(longlong)(puVar2 + param_3 * -2),(longlong)puVar2);
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




longlong * FUN_14157a6e0(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)*param_2;
  }
  plVar2 = (longlong *)*plVar2;
  for (uVar5 = param_2[1]; uVar5 != uVar1; uVar5 = uVar5 + 1) {
    uVar4 = uVar5 >> 1;
    if (plVar2 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    if ((ulonglong)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x30)) <= uVar5) {
      _invalid_parameter_noinfo();
    }
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    if (*(ulonglong *)(lVar3 + 0x28) <= uVar4) {
      if (plVar2 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar2;
      }
      uVar4 = uVar4 - *(longlong *)(lVar3 + 0x28);
    }
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar4 * 8) + (ulonglong)((uint)uVar5 & 1) * 8) == *param_4) break;
  }
  if ((longlong *)*param_2 != plVar2) {
    _invalid_parameter_noinfo();
  }
  param_2[1] = uVar5;
  *param_1 = *param_2;
  param_1[1] = uVar5;
  return param_1;
}




longlong * FUN_14157a810(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *param_4;
  local_20 = param_4[1];
  plVar2 = (longlong *)0x0;
  plVar1 = plVar2;
  if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)*param_3;
  }
  local_18 = *plVar1;
  lStack_10 = param_3[1];
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)*param_2;
  }
  local_38 = *plVar2;
  uStack_30 = param_2[1];
  FUN_141579bd0(param_1,&local_38,(longlong)&local_18,&local_28);
  return param_1;
}




longlong * FUN_14157a8d0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong lStack_10;
  
  local_28 = *param_4;
  local_20 = param_4[1];
  plVar2 = (longlong *)0x0;
  plVar1 = plVar2;
  if ((undefined8 *)*param_3 != (undefined8 *)0x0) {
    plVar1 = *(longlong **)*param_3;
  }
  local_18 = *plVar1;
  lStack_10 = param_3[1];
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)*param_2;
  }
  local_38 = *plVar2;
  uStack_30 = param_2[1];
  FUN_141579db0(param_1,(longlong)&local_38,&local_18,&local_28);
  return param_1;
}




void FUN_14157a990(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  lVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    lVar2 = lVar2 >> 4;
    if (lVar2 < 0x21) {
LAB_14157aa4a:
      if (1 < lVar2) {
        FUN_1415761b0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar2) {
        if (0x10 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U)) {
          FUN_141576120((longlong)param_1,(longlong)param_2);
        }
        FUN_141578850(param_1,(longlong)param_2);
        return;
      }
      goto LAB_14157aa4a;
    }
    FUN_141576f90((ulonglong *)&local_18,param_1,param_2);
    puVar1 = local_10;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)((longlong)local_18 - (longlong)param_1 & 0xfffffffffffffff0U) < (longlong)((longlong)param_2 - (longlong)local_10 & 0xfffffffffffffff0U)) {
      FUN_14157a990(param_1,local_18,param_3);
      param_1 = puVar1;
    }
    else {
      FUN_14157a990(local_10,param_2,param_3);
      param_2 = local_18;
    }
    lVar2 = (longlong)param_2 - (longlong)param_1;
  } while( true );
}




void FUN_14157aab0(longlong *param_1)

{
  FUN_141579630(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14157aae0(longlong *param_1)

{
  FUN_141579850(param_1);
  operator_delete((void *)*param_1);
  return;
}




void FUN_14157ab10(undefined8 *param_1)

{
  *param_1 = pigeon::CPigeonMgr::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x21));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1c));
  FUN_1415753c0((longlong)(param_1 + 0x12));
  operator_delete((void *)param_1[0x12]);
  FUN_141579850(param_1 + 10);
  operator_delete((void *)param_1[10]);
  FUN_141579630(param_1 + 1);
  operator_delete((void *)param_1[1]);
  return;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14157abb0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong extraout_RAX;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStackY_158 [32];
  longlong *local_110;
  longlong *local_108;
  uint local_100 [2];
  longlong *local_f8;
  uint local_f0 [2];
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  longlong local_c8 [4];
  char local_a8;
  undefined1 local_a7 [127];
  ulonglong local_28;
  
  local_e0 = 0xfffffffffffffffe;
  local_28 = DAT_14158b2e8 ^ (ulonglong)auStackY_158;
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141583310);
    uVar5 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 0x48) = param_2;
    plVar6 = (longlong *)InstanceGet();
    local_a8 = '\0';
    memset(local_a7,0,0x7f);
    _snprintf(&local_a8,0x7f,PTR_s_SELECT___FROM_ad_queue_ORDER_BY_a_14158b0b8);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_a8,2);
    uVar5 = 0;
    if (plVar6 != (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      plVar12 = plVar11;
      local_108 = plVar6;
      while( true ) {
        plVar7 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
        if (plVar7 <= plVar11) break;
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar11);
        puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x38))(plVar6);
        if (puVar8 == (undefined8 *)0x0) {
          log_InlineLogERROR(&DAT_141583310);
          plVar7 = plVar12;
        }
        else {
          plVar7 = FUN_141571970((longlong)puVar8);
          local_110 = plVar7;
          if (plVar7 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_141583310);
            (**(code **)*puVar8)(puVar8,1);
            plVar7 = plVar12;
          }
          else {
            local_f0[0] = (**(code **)(*plVar7 + 8))(plVar7);
            local_e8 = plVar7;
            FUN_141578fb0((longlong *)(param_1 + 0x50),local_c8,local_f0);
            local_100[0] = (**(code **)(*plVar7 + 0x18))(plVar7);
            puVar8 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
            bVar13 = true;
            cVar1 = *(char *)((longlong)puVar8 + 0x29);
            puVar3 = *(undefined8 **)(param_1 + 0x38);
            while (cVar1 == '\0') {
              bVar13 = local_100[0] < *(uint *)(puVar8 + 3);
              if (bVar13) {
                puVar10 = (undefined8 *)*puVar8;
              }
              else {
                puVar10 = (undefined8 *)puVar8[2];
              }
              puVar3 = puVar8;
              puVar8 = puVar10;
              cVar1 = *(char *)((longlong)puVar10 + 0x29);
            }
            local_f8 = plVar7;
            FUN_141576900((undefined8 *)(param_1 + 8),local_d8,bVar13,puVar3,(undefined8 *)local_100);
            if (plVar12 != (longlong *)0x0) {
              lVar2 = *plVar12;
              uVar4 = (**(code **)(*plVar7 + 8))(plVar7);
              (**(code **)(lVar2 + 0x40))(plVar12,uVar4);
            }
            FUN_14157a1f0(param_1 + 0x90,&local_110);
          }
        }
        plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
        plVar12 = plVar7;
      }
      uVar9 = (**(code **)*plVar6)(plVar6);
      uVar5 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    }
  }
  return uVar5;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14157ae80(longlong param_1,int param_2,char param_3,char *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong extraout_RAX;
  char *pcVar8;
  ulonglong extraout_RAX_00;
  longlong lVar9;
  IStringManager *pIVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char *_Format;
  __time64_t _Var13;
  longlong *plVar14;
  ulonglong extraout_RAX_01;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined1 auStackY_568 [32];
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  undefined8 local_520;
  CMsg local_518 [1072];
  undefined1 local_e8 [9];
  undefined8 local_df;
  undefined8 local_d7;
  undefined4 local_cf;
  undefined2 local_cb;
  undefined1 local_c9;
  char local_c8;
  undefined1 local_c7 [98];
  undefined1 local_65;
  ulonglong local_58;
  
  local_520 = 0xfffffffffffffffe;
  local_58 = DAT_14158b2e8 ^ (ulonglong)auStackY_568;
  local_528 = (longlong *)CONCAT44(local_528._4_4_,param_2);
  if (param_2 == 0) {
    log_InlineLogERROR(&DAT_141583310);
    uVar12 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    pcVar8 = (char *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))();
    if (pcVar8 == (char *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
      uVar12 = extraout_RAX_00 & 0xffffffffffffff00;
    }
    else if (param_3 == '\x01') {
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))(*(longlong **)(param_1 + 0x48),param_2);
      if (lVar9 < 5) {
        pIVar10 = theInstance();
        lVar9 = **(longlong **)(param_1 + 0x48);
        uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_ERR_NOEMONEY");
        uVar12 = (**(code **)(lVar9 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xff0000);
        uVar12 = uVar12 & 0xffffffffffffff00;
      }
      else {
        if (param_4 != (char *)0x0) {
          uVar12 = 0xffffffffffffffff;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar4 = *param_4;
            param_4 = param_4 + 1;
          } while (cVar4 != '\0');
          if (~uVar12 != 1) {
            if (0x50 < ~uVar12 - 1) {
              pIVar10 = theInstance();
              lVar9 = **(longlong **)(param_1 + 0x48);
              uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_ERR_STRING_TOOLONG");
              uVar12 = (**(code **)(lVar9 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xff0000);
              return uVar12 & 0xffffffffffffff00;
            }
            uVar12 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48),param_2);
            if ((uint)uVar12 < 0x32) {
              return uVar12 & 0xffffffffffffff00;
            }
            uVar12 = FUN_141577ac0((undefined8 *)(param_1 + 8),(uint *)&local_528);
            if (4 < uVar12) {
              pIVar10 = theInstance();
              lVar9 = **(longlong **)(param_1 + 0x48);
              uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_OVER_5_PIECES");
              uVar12 = (**(code **)(lVar9 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xffffff);
              return uVar12 & 0xffffffffffffff00;
            }
            lVar9 = 0;
            cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),param_2,5,0x259);
            if (cVar4 != '\0') {
              pIVar10 = theInstance();
              lVar1 = **(longlong **)(param_1 + 0x48);
              uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_PIGEON_PRODUCE_PROMPT");
              (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xff0000);
              local_c8 = '\0';
              memset(local_c7,0,99);
              cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x68))(*(longlong **)(param_1 + 0x48),param_2);
              if ((cVar4 == '\0') || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))(*(longlong **)(param_1 + 0x48),param_2), cVar4 != '\0')) {
                _snprintf(&local_c8,100,"%s");
              }
              else {
                local_e8[0] = '\0';
                local_e8._1_8_ = 0;
                local_df = 0;
                local_d7 = 0;
                local_cf = 0;
                local_cb = 0;
                local_c9 = 0;
                pIVar10 = theInstance();
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))(*(longlong **)(param_1 + 0x48),param_2);
                _Format = (char *)(*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_SHIELDED_TIMES");
                _snprintf(local_e8,0x20,_Format);
                local_c9 = 0;
                _snprintf(&local_c8,100,"%s%s");
                local_65 = 0;
              }
              if ((*(longlong *)(param_1 + 200) == 0) && (bVar5 = FUN_1415723d0(param_1), bVar5)) {
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))(*(longlong **)(param_1 + 0x48),param_2);
                (**(code **)(**(longlong **)(param_1 + 0x48) + 0x88))(*(longlong **)(param_1 + 0x48),param_2);
                FUN_141572320(param_1,pcVar8,&local_c8,param_2);
                FUN_1415724b0(param_2,(longlong)pcVar8,0,(longlong)&local_c8);
                _Var13 = _time64((__time64_t *)0x0);
                *(__time64_t *)(param_1 + 0xd0) = _Var13;
                return CONCAT71((int7)((ulonglong)_Var13 >> 8),1);
              }
              plVar14 = FUN_141571aa0(0,param_2,pcVar8,&local_c8);
              local_528 = plVar14;
              if (plVar14 == (longlong *)0x0) {
                log_InlineLogERROR(&DAT_141583310);
                return extraout_RAX_01 & 0xffffffffffffff00;
              }
              local_538._0_4_ = (**(code **)(*plVar14 + 8))(plVar14);
              local_530 = plVar14;
              FUN_141578fb0((longlong *)(param_1 + 0x50),(longlong *)local_e8,(uint *)&local_538);
              uVar6 = (**(code **)(*plVar14 + 0x18))(plVar14);
              local_538 = (longlong *)CONCAT44(local_538._4_4_,uVar6);
              puVar2 = (undefined8 *)(*(undefined8 **)(param_1 + 0x38))[1];
              bVar5 = true;
              cVar4 = *(char *)((longlong)puVar2 + 0x29);
              puVar3 = *(undefined8 **)(param_1 + 0x38);
              while (cVar4 == '\0') {
                bVar5 = uVar6 < *(uint *)(puVar2 + 3);
                if (bVar5) {
                  puVar16 = (undefined8 *)*puVar2;
                }
                else {
                  puVar16 = (undefined8 *)puVar2[2];
                }
                puVar3 = puVar2;
                puVar2 = puVar16;
                cVar4 = *(char *)((longlong)puVar16 + 0x29);
              }
              local_530 = plVar14;
              FUN_141576900((undefined8 *)(param_1 + 8),(undefined8 *)local_e8,bVar5,puVar3,&local_538);
              if (*(longlong *)(param_1 + 200) != 0) {
                uVar12 = *(ulonglong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 200);
                if (uVar12 < *(ulonglong *)(param_1 + 0xc0)) {
                  _invalid_parameter_noinfo();
                }
                local_538 = *(longlong **)(param_1 + 0x90);
                if (local_538 == (longlong *)0x0) {
                  _invalid_parameter_noinfo();
                }
                else {
                  lVar9 = *local_538;
                }
                if (uVar12 <= *(ulonglong *)(lVar9 + 0x30)) {
                  _invalid_parameter_noinfo();
                }
                local_530 = (longlong *)(uVar12 - 1);
                plVar15 = (longlong *)FUN_141572850((longlong *)&local_538);
                plVar15 = (longlong *)*plVar15;
                if (plVar15 == (longlong *)0x0) {
                  log_InlineLogERROR(&DAT_141583310);
                }
                else {
                  lVar9 = *plVar15;
                  uVar7 = (**(code **)(*plVar14 + 8))(plVar14);
                  (**(code **)(lVar9 + 0x40))(plVar15,uVar7);
                }
              }
              FUN_14157a1f0(param_1 + 0x90,&local_528);
              FUN_14157e350(local_518);
              uVar12 = FUN_14157e410((longlong)local_518,3,*(undefined4 *)(param_1 + 200));
              if ((char)uVar12 != '\0') {
                (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),param_2,local_518);
              }
              uVar11 = FUN_14157e3d0((undefined8 *)local_518);
              return CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
            }
            pIVar10 = theInstance();
            lVar9 = **(longlong **)(param_1 + 0x48);
            uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_ERR_NOEMONEY");
            uVar12 = (**(code **)(lVar9 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xff0000);
            return uVar12 & 0xffffffffffffff00;
          }
        }
        pIVar10 = theInstance();
        lVar9 = **(longlong **)(param_1 + 0x48);
        uVar11 = (*(code *)**(undefined8 **)pIVar10)(pIVar10,"STR_PIGEON_SEND_ERR_EMPTYSTRING");
        uVar12 = (**(code **)(lVar9 + 8))(*(undefined8 *)(param_1 + 0x48),param_2,uVar11,0xff0000);
        uVar12 = uVar12 & 0xffffffffffffff00;
      }
    }
    else {
      uVar12 = (ulonglong)pcVar8 & 0xffffffffffffff00;
    }
  }
  return uVar12;
}




void FUN_14157b4e0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  __time64_t _Var9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint local_res8 [2];
  longlong *local_48;
  undefined8 *puStack_40;
  undefined8 local_38 [2];
  
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0xc0);
    if (uVar2 + *(longlong *)(param_1 + 200) < uVar2) {
      _invalid_parameter_noinfo();
    }
    local_48 = *(longlong **)(param_1 + 0x90);
    puStack_40 = (undefined8 *)uVar2;
    puVar8 = (undefined8 *)FUN_141572850((longlong *)&local_48);
    plVar3 = (longlong *)*puVar8;
    if (*(longlong *)(param_1 + 200) != 0) {
      *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
      if ((ulonglong)(*(longlong *)(param_1 + 0xb8) * 2) <= *(ulonglong *)(param_1 + 0xc0)) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      lVar13 = *(longlong *)(param_1 + 200) + -1;
      *(longlong *)(param_1 + 200) = lVar13;
      if (lVar13 == 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_141573ea0(param_1,plVar3);
      local_res8[0] = (**(code **)(*plVar3 + 8))(plVar3);
      FUN_14157a000((longlong *)(param_1 + 0x50),local_res8);
      uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      cVar1 = *(char *)((longlong)puVar8[1] + 0x29);
      puVar12 = puVar8;
      puVar10 = (undefined8 *)puVar8[1];
      while (cVar1 == '\0') {
        if (*(uint *)(puVar10 + 3) < uVar5) {
          puVar11 = (undefined8 *)puVar10[2];
          puVar10 = puVar12;
        }
        else {
          if ((*(char *)((longlong)puVar8 + 0x29) != '\0') && (uVar5 < *(uint *)(puVar10 + 3))) {
            puVar8 = puVar10;
          }
          puVar11 = (undefined8 *)*puVar10;
        }
        puVar12 = puVar10;
        puVar10 = puVar11;
        cVar1 = *(char *)((longlong)puVar11 + 0x29);
      }
      if (*(char *)((longlong)puVar8 + 0x29) == '\0') {
        puVar10 = (undefined8 *)*puVar8;
      }
      else {
        puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8);
      }
      cVar1 = *(char *)((longlong)puVar10 + 0x29);
      while (cVar1 == '\0') {
        if (uVar5 < *(uint *)(puVar10 + 3)) {
          puVar11 = (undefined8 *)*puVar10;
          puVar8 = puVar10;
        }
        else {
          puVar11 = (undefined8 *)puVar10[2];
        }
        puVar10 = puVar11;
        cVar1 = *(char *)((longlong)puVar11 + 0x29);
      }
      plVar4 = *(longlong **)(param_1 + 8);
      local_48 = plVar4;
      puStack_40 = puVar12;
      do {
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar12 == puVar8) goto LAB_14157b7be;
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar4;
        }
        if (puVar12 == *(undefined8 **)(lVar13 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        if ((longlong *)puVar12[4] == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_141583310);
        }
        else {
          iVar6 = (**(code **)(*(longlong *)puVar12[4] + 8))();
          iVar7 = (**(code **)(*plVar3 + 8))(plVar3);
          if (iVar6 == iVar7) {
            FUN_1415776a0((undefined8 *)(param_1 + 8),local_38,(longlong *)&local_48);
LAB_14157b7be:
            _Var9 = _time64((__time64_t *)0x0);
            *(__time64_t *)(param_1 + 0xd0) = _Var9;
            (**(code **)(*(longlong *)plVar3[1] + 0x40))((longlong *)plVar3[1],0);
            (**(code **)*plVar3)(plVar3,1);
            return;
          }
        }
        if (plVar4 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar12 + 0x29) == '\0') {
          puVar10 = (undefined8 *)puVar12[2];
          if (*(char *)((longlong)puVar10 + 0x29) == '\0') {
            cVar1 = *(char *)((longlong)*puVar10 + 0x29);
            puVar12 = puVar10;
            puVar10 = (undefined8 *)*puVar10;
            while (puStack_40 = puVar12, cVar1 == '\0') {
              cVar1 = *(char *)((longlong)*puVar10 + 0x29);
              puVar12 = puVar10;
              puVar10 = (undefined8 *)*puVar10;
            }
          }
          else {
            cVar1 = *(char *)((longlong)puVar12[1] + 0x29);
            puVar11 = (undefined8 *)puVar12[1];
            puVar10 = puVar12;
            while ((puVar12 = puVar11, puStack_40 = puVar12, cVar1 == '\0' && (puVar10 == (undefined8 *)puVar12[2]))) {
              cVar1 = *(char *)((longlong)puVar12[1] + 0x29);
              puVar11 = (undefined8 *)puVar12[1];
              puVar10 = puVar12;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      } while( true );
    }
    log_InlineLogERROR(&DAT_141583310);
  }
  return;
}




void FUN_14157b810(longlong param_1)

{
  ulonglong uVar1;
  CMsg local_438 [1072];
  
  FUN_14157e350(local_438);
  uVar1 = FUN_14157e410((longlong)local_438,6,0);
  if ((char)uVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))(*(longlong **)(param_1 + 0x48),local_438);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_14157b4e0(param_1);
  FUN_14157e3d0((undefined8 *)local_438);
  return;
}




undefined8 * FUN_14157b880(undefined8 *param_1)

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
  lVar2 = FUN_141575a50();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_14157b900(undefined8 *param_1)

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
  lVar2 = FUN_141575b30();
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x29) = 1;
  *(undefined8 *)(param_1[6] + 8) = param_1[6];
  *(undefined8 *)param_1[6] = param_1[6];
  *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
  param_1[7] = 0;
  return param_1;
}




longlong * FUN_14157b980(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  longlong *local_38;
  ulonglong uStack_30;
  
  uVar8 = param_1[6];
  if (uVar8 + param_1[7] < uVar8) {
    _invalid_parameter_noinfo();
  }
  if ((*param_3 == 0) || (*param_3 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  if (param_3[1] == uVar8) {
    FUN_14157a140((longlong)param_1,param_4);
    uVar8 = param_1[6];
    *param_2 = 0;
    if ((ulonglong)param_1[6] <= uVar8) {
      uVar6 = param_1[6] + param_1[7];
      bVar9 = uVar8 < uVar6;
      bVar10 = uVar8 == uVar6;
LAB_14157bf8b:
      if (bVar9 || bVar10) goto LAB_14157bf93;
    }
  }
  else {
    uVar8 = param_1[6] + param_1[7];
    if (uVar8 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    if (param_3[1] == uVar8) {
      FUN_14157a1f0((longlong)param_1,param_4);
      uStack_60 = param_1[6] + param_1[7];
      if (uStack_60 < (ulonglong)param_1[6]) {
        _invalid_parameter_noinfo();
      }
      local_68 = (longlong *)*param_1;
      FUN_141575570((longlong *)&local_68,param_2,1);
      return param_2;
    }
    uVar8 = param_1[6];
    if (uVar8 + param_1[7] < uVar8) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    uVar8 = param_3[1] - uVar8;
    uVar1 = *param_4;
    if (uVar8 < (ulonglong)param_1[7] >> 1) {
      puVar4 = (undefined8 *)FUN_141578410(param_1);
      FUN_14157a140((longlong)param_1,puVar4);
      uVar6 = param_1[6];
      if (param_1[7] + uVar6 < uVar6) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*param_1;
      local_78 = plVar2;
      uStack_70 = uVar6;
      local_68 = plVar2;
      uStack_60 = uVar6;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      uVar6 = uVar6 + uVar8;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar6) {
LAB_14157bb52:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar2;
        }
        if (uVar6 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157bb52;
      }
      plVar2 = local_78;
      uVar8 = param_1[6];
      local_68 = local_78;
      uStack_70 = uVar6;
      uStack_60 = uVar6;
      if (uVar8 + param_1[7] < uVar8) {
        _invalid_parameter_noinfo();
      }
      plVar3 = (longlong *)*param_1;
      local_58 = plVar3;
      uStack_50 = uVar8;
      local_48 = plVar3;
      uStack_40 = uVar8;
      if (plVar3 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar3;
      }
      uVar8 = uVar8 + 1;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar8) {
LAB_14157bbd1:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar3 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar3;
        }
        if (uVar8 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157bbd1;
      }
      plVar3 = local_78;
      local_38 = plVar2;
      uStack_40 = uVar8;
      uStack_30 = uVar6;
      if (local_78 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *local_78;
      }
      uVar6 = uVar6 + 1;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar6) {
LAB_14157bc2c:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar3 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar3;
        }
        if (uVar6 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157bc2c;
      }
      uVar8 = param_1[6];
      if (uVar8 + param_1[7] < uVar8) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*param_1;
      local_58 = plVar2;
      uStack_50 = uVar8;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      uVar8 = uVar8 + 2;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar8) {
LAB_14157bc9c:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar2;
        }
        if (uVar8 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157bc9c;
      }
      local_78 = local_48;
      uStack_70 = uStack_40;
      if (local_38 == (longlong *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*local_38;
      }
      local_38 = (longlong *)*puVar4;
      if (local_58 == (longlong *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*local_58;
      }
      local_48 = (longlong *)*puVar4;
      uStack_40 = uVar8;
      uStack_30 = uVar6;
      FUN_141579bd0((longlong *)&local_58,(longlong *)&local_48,(longlong)&local_38,(longlong *)&local_78);
    }
    else {
      puVar4 = (undefined8 *)FUN_141578460(param_1);
      FUN_14157a1f0((longlong)param_1,puVar4);
      uVar6 = param_1[6];
      if (param_1[7] + uVar6 < uVar6) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*param_1;
      local_78 = plVar2;
      uStack_70 = uVar6;
      local_48 = plVar2;
      uStack_40 = uVar6;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      uVar6 = uVar6 + uVar8;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar6) {
LAB_14157bdbf:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar2;
        }
        if (uVar6 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157bdbf;
      }
      local_68 = local_78;
      uVar8 = param_1[6] + param_1[7];
      uStack_70 = uVar6;
      uStack_60 = uVar6;
      if (uVar8 < (ulonglong)param_1[6]) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*param_1;
      local_58 = plVar2;
      uStack_50 = uVar8;
      local_48 = plVar2;
      uStack_40 = uVar8;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      uVar8 = uVar8 - 1;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar8) {
LAB_14157be3e:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar2;
        }
        if (uVar8 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157be3e;
      }
      uVar7 = param_1[6] + param_1[7];
      uStack_50 = uVar8;
      if (uVar7 < (ulonglong)param_1[6]) {
        _invalid_parameter_noinfo();
      }
      plVar2 = (longlong *)*param_1;
      local_48 = plVar2;
      uStack_40 = uVar7;
      local_38 = plVar2;
      uStack_30 = uVar7;
      if (plVar2 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar2;
      }
      uVar7 = uVar7 - 2;
      if ((ulonglong)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar5 + 0x30)) < uVar7) {
LAB_14157beb6:
        _invalid_parameter_noinfo();
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar2;
        }
        if (uVar7 < *(ulonglong *)(lVar5 + 0x30)) goto LAB_14157beb6;
      }
      if (local_38 == (longlong *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*local_38;
      }
      local_38 = (longlong *)*puVar4;
      if (local_78 == (longlong *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*local_78;
      }
      local_48 = (longlong *)*puVar4;
      uStack_40 = uVar6;
      uStack_30 = uVar7;
      FUN_141579db0((longlong *)&local_78,(longlong)&local_48,(longlong *)&local_38,(longlong *)&local_58);
    }
    puVar4 = (undefined8 *)FUN_141572850((longlong *)&local_68);
    *puVar4 = uVar1;
    *param_2 = 0;
    uVar8 = uStack_60;
    if ((ulonglong)param_1[6] <= uStack_60) {
      uVar6 = param_1[6] + param_1[7];
      bVar9 = uStack_60 < uVar6;
      bVar10 = uStack_60 == uVar6;
      goto LAB_14157bf8b;
    }
  }
  _invalid_parameter_noinfo();
LAB_14157bf93:
  lVar5 = *param_1;
  param_2[1] = uVar8;
  *param_2 = lVar5;
  return param_2;
}




longlong * FUN_14157bfc0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *local_68;
  ulonglong uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  longlong local_38 [2];
  
  local_58 = (longlong *)*param_3;
  uVar2 = param_3[1];
  if (((param_1 == (longlong *)0x0) || (uVar2 < (ulonglong)param_1[6])) || ((ulonglong)(param_1[6] + param_1[7]) < uVar2)) {
    uStack_50 = uVar2;
    _invalid_parameter_noinfo();
  }
  local_68 = (longlong *)*param_4;
  plVar5 = (longlong *)*param_1;
  uVar8 = param_4[1];
  local_58 = plVar5;
  if ((uVar8 < (ulonglong)param_1[6]) || (uStack_50 = uVar2, (ulonglong)(param_1[6] + param_1[7]) < uVar8)) {
    uStack_60 = uVar8;
    uStack_50 = uVar2;
    _invalid_parameter_noinfo();
  }
  uVar3 = param_1[6];
  plVar4 = (longlong *)*param_1;
  local_68 = plVar4;
  uStack_60 = uVar8;
  if (uVar3 + param_1[7] < uVar3) {
    _invalid_parameter_noinfo();
  }
  if ((plVar5 == (longlong *)0x0) || (plVar5 != (longlong *)*param_1)) {
    _invalid_parameter_noinfo();
  }
  if ((plVar4 == (longlong *)0x0) || (plVar4 != plVar5)) {
    _invalid_parameter_noinfo();
  }
  uVar1 = param_1[6] + param_1[7];
  lVar7 = uVar8 - uVar2;
  if (uVar1 < (ulonglong)param_1[6]) {
    _invalid_parameter_noinfo();
  }
  if (((longlong *)*param_1 == (longlong *)0x0) || ((longlong *)*param_1 != plVar4)) {
    _invalid_parameter_noinfo();
  }
  if (uVar2 - uVar3 < uVar1 - uVar8) {
    uVar8 = param_1[6];
    if (uVar8 + param_1[7] < uVar8) {
      _invalid_parameter_noinfo();
    }
    plVar4 = (longlong *)0x0;
    local_58 = local_68;
    uStack_50 = uStack_60;
    local_48 = plVar4;
    if (plVar5 != (longlong *)0x0) {
      local_48 = (longlong *)*plVar5;
    }
    local_48 = (longlong *)*local_48;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      plVar4 = *(longlong **)*param_1;
    }
    local_68 = (longlong *)*plVar4;
    uStack_60 = uVar8;
    uStack_40 = uVar2;
    FUN_141579db0(local_38,(longlong)&local_68,(longlong *)&local_48,(longlong *)&local_58);
    if (lVar7 != 0) {
      lVar6 = param_1[7];
      do {
        if (lVar6 != 0) {
          param_1[6] = param_1[6] + 1;
          if ((ulonglong)(param_1[5] * 2) <= (ulonglong)param_1[6]) {
            param_1[6] = 0;
          }
          lVar6 = lVar6 + -1;
          if (lVar6 == 0) {
            param_1[6] = 0;
          }
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      param_1[7] = lVar6;
    }
  }
  else {
    uVar1 = param_1[6] + param_1[7];
    if (uVar1 < (ulonglong)param_1[6]) {
      _invalid_parameter_noinfo();
    }
    plVar5 = (longlong *)0x0;
    local_48 = local_58;
    uStack_40 = uStack_50;
    local_68 = plVar5;
    if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
      local_68 = *(longlong **)*param_1;
    }
    local_68 = (longlong *)*local_68;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)*plVar4;
    }
    local_58 = (longlong *)*plVar5;
    uStack_60 = uVar1;
    uStack_50 = uVar8;
    FUN_141579bd0(local_38,(longlong *)&local_58,(longlong)&local_68,(longlong *)&local_48);
    if (lVar7 != 0) {
      lVar6 = param_1[7];
      do {
        if ((lVar6 != 0) && (lVar6 = lVar6 + -1, lVar6 == 0)) {
          param_1[6] = 0;
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      param_1[7] = lVar6;
    }
  }
  lVar7 = 0;
  uVar8 = param_1[6];
  if (uVar8 + param_1[7] < uVar8) {
    _invalid_parameter_noinfo();
  }
  plVar5 = (longlong *)*param_1;
  local_58 = plVar5;
  uStack_50 = uVar8;
  if (plVar5 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar6 = lVar7;
  }
  else {
    lVar6 = *plVar5;
  }
  uVar8 = uVar8 + (uVar2 - uVar3);
  if (uVar8 <= (ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30))) {
    if (plVar5 != (longlong *)0x0) {
      lVar7 = *plVar5;
    }
    if (*(ulonglong *)(lVar7 + 0x30) <= uVar8) goto LAB_14157c2fd;
  }
  _invalid_parameter_noinfo();
LAB_14157c2fd:
  *param_2 = (longlong)local_58;
  param_2[1] = uVar8;
  return param_2;
}




longlong * FUN_14157c350(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *local_28;
  ulonglong uStack_20;
  
  lVar2 = 0;
  uVar4 = param_1[3];
  lVar3 = lVar2;
  if ((param_1[4] - uVar4 & 0xfffffffffffffff0) != 0) {
    if ((ulonglong)param_1[4] < uVar4) {
      _invalid_parameter_noinfo();
    }
    if ((*param_3 == 0) || (*param_3 != *param_1)) {
      _invalid_parameter_noinfo();
    }
    lVar3 = (longlong)(param_3[1] - uVar4) >> 4;
  }
  local_28 = (longlong *)*param_3;
  uStack_20 = param_3[1];
  FUN_14157a3e0((longlong)param_1,(longlong)&local_28,1,param_4);
  uVar4 = param_1[3];
  if ((ulonglong)param_1[4] < uVar4) {
    _invalid_parameter_noinfo();
  }
  plVar1 = (longlong *)*param_1;
  local_28 = plVar1;
  uStack_20 = uVar4;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar5 = lVar2;
  }
  else {
    lVar5 = *plVar1;
  }
  uVar4 = lVar3 * 0x10 + uVar4;
  if (uVar4 <= *(ulonglong *)(lVar5 + 0x20)) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x18) <= uVar4) goto LAB_14157c447;
  }
  _invalid_parameter_noinfo();
LAB_14157c447:
  *param_2 = (longlong)local_28;
  param_2[1] = uVar4;
  return param_2;
}




void FUN_14157c490(longlong *param_1,longlong *param_2)

{
  if ((*param_2 == 0) || (*param_2 != *param_1)) {
    _invalid_parameter_noinfo();
  }
  FUN_14157a990((undefined8 *)param_1[1],(undefined8 *)param_2[1],param_2[1] - param_1[1] >> 4);
  return;
}




undefined8 * FUN_14157c4e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  __time64_t _Var3;
  
  *param_1 = pigeon::CPigeonMgr::vftable;
  FUN_14157b880(param_1 + 1);
  FUN_14157b900(param_1 + 10);
  plVar1 = operator_new(8);
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)(param_1 + 0x12);
    plVar2 = plVar1;
  }
  param_1[0x12] = plVar2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x1c));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x21));
  param_1[9] = 0;
  _Var3 = _time64((__time64_t *)0x0);
  param_1[0x1a] = _Var3;
  return param_1;
}




undefined8 * FUN_14157c5a0(undefined8 *param_1,uint param_2)

{
  FUN_14157ab10(param_1);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




void FUN_14157c5d0(longlong param_1)

{
  __time64_t _Var1;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    _Var1 = _time64((__time64_t *)0x0);
    if (0x3b < _Var1 - *(longlong *)(param_1 + 0xd0)) {
      FUN_14157b4e0(param_1);
    }
  }
  return;
}




longlong * FUN_14157c610(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *local_38;
  ulonglong uStack_30;
  longlong local_28;
  longlong local_20;
  
  plVar1 = (longlong *)*param_3;
  uStack_30 = param_3[1];
  lVar2 = 0;
  local_38 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar4 = lVar2;
  }
  else {
    lVar4 = *plVar1;
  }
  uVar3 = uStack_30 + 1;
  if (uVar3 <= (ulonglong)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(lVar4 + 0x30))) {
    if (plVar1 != (longlong *)0x0) {
      lVar2 = *plVar1;
    }
    if (*(ulonglong *)(lVar2 + 0x30) <= uVar3) goto LAB_14157c68d;
  }
  _invalid_parameter_noinfo();
LAB_14157c68d:
  local_28 = *param_3;
  local_20 = param_3[1];
  uStack_30 = uVar3;
  FUN_14157bfc0(param_1,param_2,&local_28,&local_38);
  return param_2;
}




void FUN_14157c6f0(longlong *param_1,undefined8 *param_2)

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
    uVar3 = param_1[5] - (longlong)puVar1 >> 4;
  }
  puVar2 = (undefined8 *)param_1[4];
  if ((ulonglong)((longlong)puVar2 - (longlong)puVar1 >> 4) < uVar3) {
    FUN_141575ee0(puVar2,1,param_2);
    param_1[4] = (longlong)(puVar2 + 2);
    return;
  }
  if (puVar2 < puVar1) {
    _invalid_parameter_noinfo();
  }
  local_28 = *param_1;
  puStack_20 = puVar2;
  FUN_14157c350(param_1,local_18,&local_28,param_2);
  return;
}




undefined * FUN_14157c7c0(void)

{
  if ((DAT_14158b450 & 1) == 0) {
    DAT_14158b450 = DAT_14158b450 | 1;
    FUN_14157c4e0((undefined8 *)&DAT_14158b320);
    atexit(FUN_141582350);
  }
  return &DAT_14158b320;
}




ulonglong FUN_14157c810(longlong *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  IStringManager *pIVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong extraout_RAX_01;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *local_498;
  ulonglong uStack_490;
  longlong *local_488;
  ulonglong uStack_480;
  longlong *local_478;
  ulonglong uStack_470;
  longlong *local_468;
  undefined8 local_460;
  CMsg local_458 [1072];
  
  local_460 = 0xfffffffffffffffe;
  if (param_3 == '\x01') {
    lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x30))();
    if (lVar6 < 0xf) {
      pIVar7 = theInstance();
      lVar6 = *(longlong *)param_1[9];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_PIGEON_URGENT_ERR_NOEMONEY");
      uVar9 = (**(code **)(lVar6 + 8))(param_1[9],param_2,uVar8,0xff0000,0x7d5);
      return uVar9 & 0xffffffffffffff00;
    }
  }
  else {
    if (param_3 != '\x02') {
      log_InlineLogERROR("CPigeonMgr::BringtoTop: INVALID MONEY TYPE: type[%d], user_id[%u]");
      return extraout_RAX_01 & 0xffffffffffffff00;
    }
    lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x38))();
    if (lVar6 < 0xf) {
      pIVar7 = theInstance();
      lVar6 = *(longlong *)param_1[9];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_PIGEON_URGENT_ERR_NOEMONEY");
      uVar9 = (**(code **)(lVar6 + 8))(param_1[9],param_2,uVar8,0xff0000,0x7d5);
      return uVar9 & 0xffffffffffffff00;
    }
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,param_4);
  local_468 = plVar10;
  if (plVar10 == (longlong *)0x0) {
    pIVar7 = theInstance();
    lVar6 = *(longlong *)param_1[9];
    uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_PIGEON_URGENT_SENT_ALREADY");
    uVar9 = (**(code **)(lVar6 + 8))(param_1[9],param_2,uVar8,0xff0000,0x7d5);
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    plVar11 = FUN_141577390((longlong)param_1,plVar10);
    uVar3 = (**(code **)(*plVar10 + 0x10))(plVar10);
    if (param_3 == '\x01') {
      cVar1 = (**(code **)(*(longlong *)param_1[9] + 0x40))((longlong *)param_1[9],param_2,0xf,0x25b,1);
      if (cVar1 == '\0') {
        pIVar7 = theInstance();
        lVar6 = *(longlong *)param_1[9];
        uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_PIGEON_URGENT_ERR_NOEMONEY");
        uVar9 = (**(code **)(lVar6 + 8))(param_1[9],param_2,uVar8,0xff0000,0x7d5);
        return uVar9 & 0xffffffffffffff00;
      }
    }
    else if ((param_3 == '\x02') && (cVar1 = (**(code **)(*(longlong *)param_1[9] + 0x48))((longlong *)param_1[9],param_2,0xf,0x25b,1), cVar1 == '\0')) {
      pIVar7 = theInstance();
      lVar6 = *(longlong *)param_1[9];
      uVar8 = (*(code *)**(undefined8 **)pIVar7)(pIVar7,"STR_PIGEON_URGENT_ERR_NOEMONEY");
      uVar9 = (**(code **)(lVar6 + 8))(param_1[9],param_2,uVar8,0xff0000,0x7d5);
      return uVar9 & 0xffffffffffffff00;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x40))(plVar11,uVar3);
    }
    uVar9 = param_1[0x18] + param_1[0x19];
    if (uVar9 < (ulonglong)param_1[0x18]) {
      _invalid_parameter_noinfo();
    }
    local_498 = (longlong *)param_1[0x12];
    uVar14 = param_1[0x18];
    if (uVar14 + param_1[0x19] < uVar14) {
      _invalid_parameter_noinfo();
    }
    local_488 = (longlong *)param_1[0x12];
    if (local_488 == (longlong *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)*local_488;
    }
    plVar11 = (longlong *)*puVar12;
    local_498 = plVar11;
    uStack_490 = uVar14;
    uStack_480 = uVar14;
    local_478 = local_488;
    uStack_470 = uVar14;
    for (; uVar14 != uVar9; uVar14 = uVar14 + 1) {
      uVar13 = uVar14 >> 1;
      if (plVar11 == (longlong *)0x0) {
        _invalid_parameter_noinfo();
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar11;
      }
      if ((ulonglong)(*(longlong *)(lVar6 + 0x38) + *(longlong *)(lVar6 + 0x30)) <= uVar14) {
        _invalid_parameter_noinfo();
      }
      if (plVar11 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar11;
      }
      if (*(ulonglong *)(lVar6 + 0x28) <= uVar13) {
        if (plVar11 == (longlong *)0x0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *plVar11;
        }
        uVar13 = uVar13 - *(longlong *)(lVar6 + 0x28);
      }
      if (plVar11 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar11;
      }
      if (*(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + uVar13 * 8) + (ulonglong)((uint)uVar14 & 1) * 8) == plVar10) break;
    }
    if (local_478 != plVar11) {
      _invalid_parameter_noinfo();
    }
    uVar9 = param_1[0x18] + param_1[0x19];
    uStack_480 = uVar14;
    if (uVar9 < (ulonglong)param_1[0x18]) {
      _invalid_parameter_noinfo();
    }
    if ((local_488 == (longlong *)0x0) || (plVar11 = local_488, local_488 != (longlong *)param_1[0x12])) {
      _invalid_parameter_noinfo();
      plVar11 = extraout_RAX;
    }
    if (uVar14 == uVar9) {
      uVar9 = (ulonglong)plVar11 & 0xffffffffffffff00;
    }
    else {
      uVar9 = param_1[0x18];
      if (uVar9 + param_1[0x19] < uVar9) {
        _invalid_parameter_noinfo();
      }
      local_498 = (longlong *)param_1[0x12];
      uStack_490 = uVar9;
      plVar11 = (longlong *)FUN_141572850((longlong *)&local_498);
      plVar11 = (longlong *)*plVar11;
      if (plVar11 == (longlong *)0x0) {
        log_InlineLogERROR(&DAT_141583310);
        uVar9 = extraout_RAX_00 & 0xffffffffffffff00;
      }
      else {
        iVar4 = (**(code **)(*plVar11 + 8))(plVar11);
        iVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        if (iVar4 != iVar5) {
          lVar6 = *plVar10;
          uVar3 = (**(code **)(*plVar11 + 8))(plVar11);
          (**(code **)(lVar6 + 0x40))(plVar10,uVar3);
          local_498 = local_488;
          uStack_490 = uStack_480;
          FUN_14157c610(param_1 + 0x12,(longlong *)&local_488,(longlong *)&local_498);
          FUN_14157a140((longlong)(param_1 + 0x12),&local_468);
        }
        lVar6 = *plVar10;
        uVar2 = (**(code **)(lVar6 + 0x28))(plVar10);
        (**(code **)(lVar6 + 0x38))(plVar10,uVar2 + 0xf);
        FUN_14157e350(local_458);
        uVar9 = FUN_14157e410((longlong)local_458,4,0);
        if ((char)uVar9 != '\0') {
          (*(code *)**(undefined8 **)param_1[9])((undefined8 *)param_1[9],param_2,local_458);
        }
        uVar8 = FUN_14157e3d0((undefined8 *)local_458);
        uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
    }
  }
  return uVar9;
}




void FUN_14157cd20(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong *puVar16;
  uint uVar17;
  uint local_res10 [2];
  uint local_res18;
  ulonglong *local_res20;
  ulonglong *local_4e8 [3];
  longlong *local_4d0;
  longlong *local_4c8;
  longlong local_4c0;
  ulonglong *local_4b8;
  longlong *plStack_4b0;
  ulonglong *local_4a8;
  int local_4a0;
  ulonglong *local_498;
  longlong *plStack_490;
  undefined8 local_488;
  ulonglong *local_480;
  longlong *local_478;
  ulonglong *local_470;
  longlong *local_468;
  CMsg local_458 [1048];
  
  local_488 = 0xfffffffffffffffe;
  uVar10 = (ulonglong)param_3;
  local_res10[0] = param_2;
  local_res18 = param_3;
  lVar9 = FUN_141577ac0((undefined8 *)(param_1 + 8),local_res10);
  if ((lVar9 + 9U) / 10 < uVar10) {
    return;
  }
  puVar16 = (ulonglong *)0x0;
  FUN_1415765c0((undefined8 *)(param_1 + 8),&local_480,local_res10);
  local_4b8 = local_480;
  plStack_4b0 = local_478;
  local_res20 = operator_new(8);
  puVar4 = local_4b8;
  local_4e8[0] = puVar16;
  if (local_res20 != (ulonglong *)0x0) {
    *local_res20 = (ulonglong)local_4e8;
    local_4e8[0] = local_res20;
  }
  local_4d0 = (longlong *)0x0;
  local_4c8 = (longlong *)0x0;
  local_4c0 = 0;
  plVar13 = plStack_4b0;
  local_4a8 = local_res20;
  do {
    uVar12 = 0;
    if ((puVar4 == (ulonglong *)0x0) || (puVar4 != local_470)) {
      _invalid_parameter_noinfo();
    }
    plVar2 = local_4c8;
    if (plVar13 == local_468) goto LAB_14157d08b;
    uVar3 = (int)uVar10 * 10;
    uVar17 = (uint)puVar16;
    if (uVar17 < uVar3) {
      puVar16 = (ulonglong *)(ulonglong)(uVar17 + 1);
    }
    else {
      if (uVar3 + 10 <= uVar17) {
LAB_14157d08b:
        if (local_4c8 < local_4d0) {
          _invalid_parameter_noinfo();
        }
        plVar13 = local_4d0;
        puVar4 = local_4e8[0];
        if (local_4c8 < local_4d0) {
          _invalid_parameter_noinfo();
        }
        if ((puVar4 == (ulonglong *)0x0) || (puVar4 != local_4e8[0])) {
          _invalid_parameter_noinfo();
        }
        FUN_14157a990(plVar13,plVar2,(longlong)plVar2 - (longlong)plVar13 >> 4);
        FUN_14157e7c0(local_458);
        uVar11 = FUN_14157e870((longlong)local_458,(int)uVar10,0);
        plVar13 = local_4d0;
        if ((char)uVar11 == '\0') {
          log_InlineLogERROR(&DAT_141583310);
          FUN_14157e810((undefined8 *)local_458);
          if (local_4d0 != (longlong *)0x0) {
            operator_delete(local_4d0);
          }
          local_4d0 = (longlong *)0x0;
          local_4c8 = (longlong *)0x0;
          local_4c0 = 0;
          operator_delete(local_4e8[0]);
          return;
        }
        puVar4 = local_4e8[0];
        uVar3 = local_res18;
        if (local_4c8 < local_4d0) {
          _invalid_parameter_noinfo();
          puVar4 = local_4e8[0];
          uVar3 = local_res18;
        }
        do {
          plVar2 = local_4c8;
          if (local_4c8 < local_4d0) {
            _invalid_parameter_noinfo();
          }
          if ((puVar4 == (ulonglong *)0x0) || (puVar4 != local_4e8[0])) {
            _invalid_parameter_noinfo();
          }
          if (plVar13 == plVar2) {
            (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),local_res10[0],local_458);
            FUN_14157e810((undefined8 *)local_458);
            if (local_4d0 != (longlong *)0x0) {
              operator_delete(local_4d0);
            }
            local_4d0 = (longlong *)0x0;
            local_4c8 = (longlong *)0x0;
            local_4c0 = 0;
            operator_delete(local_4e8[0]);
            return;
          }
          if (puVar4 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar10 = 0;
          }
          else {
            uVar10 = *puVar4;
          }
          if (*(longlong **)(uVar10 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          plVar2 = (longlong *)*plVar13;
          if (plVar2 == (longlong *)0x0) {
            log_InlineLogERROR(&DAT_141583310);
          }
          else {
            lVar9 = **(longlong **)(param_1 + 0x48);
            uVar7 = (**(code **)(*plVar2 + 0x18))(plVar2);
            uVar7 = (**(code **)(lVar9 + 0x80))(*(undefined8 *)(param_1 + 0x48),uVar7);
            lVar9 = **(longlong **)(param_1 + 0x48);
            uVar8 = (**(code **)(*plVar2 + 0x18))(plVar2);
            uVar6 = (**(code **)(lVar9 + 0x88))(*(undefined8 *)(param_1 + 0x48),uVar8);
            lVar9 = FUN_14157e8c0((longlong)local_458,plVar2,(int)plVar13[1],uVar7,uVar6);
            if ((char)lVar9 == '\0') {
              (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48),local_res10[0],local_458);
              uVar15 = (short)uVar12 + 1;
              uVar12 = (ulonglong)uVar15;
              uVar11 = FUN_14157e870((longlong)local_458,uVar3,uVar15);
              if ((char)uVar11 == '\0') {
                log_InlineLogERROR(&DAT_141583310);
                FUN_14157e810((undefined8 *)local_458);
                if (local_4d0 != (longlong *)0x0) {
                  operator_delete(local_4d0);
                }
                local_4d0 = (longlong *)0x0;
                local_4c8 = (longlong *)0x0;
                local_4c0 = 0;
                operator_delete(local_4e8[0]);
                return;
              }
              lVar9 = FUN_14157e8c0((longlong)local_458,plVar2,(int)plVar13[1],uVar7,uVar6);
              if ((char)lVar9 == '\0') {
                log_InlineLogERROR(&DAT_141583310);
                FUN_14157e810((undefined8 *)local_458);
                if (local_4d0 != (longlong *)0x0) {
                  operator_delete(local_4d0);
                }
                local_4d0 = (longlong *)0x0;
                local_4c8 = (longlong *)0x0;
                local_4c0 = 0;
                operator_delete(local_4e8[0]);
                return;
              }
            }
          }
          if (puVar4 == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar10 = 0;
          }
          else {
            uVar10 = *puVar4;
          }
          if (*(longlong **)(uVar10 + 0x20) <= plVar13) {
            _invalid_parameter_noinfo();
          }
          plVar13 = plVar13 + 2;
        } while( true );
      }
      if (puVar4 == (ulonglong *)0x0) {
        _invalid_parameter_noinfo();
        uVar14 = uVar12;
      }
      else {
        uVar14 = *puVar4;
      }
      if (plVar13 == *(longlong **)(uVar14 + 0x30)) {
        _invalid_parameter_noinfo();
      }
      puVar16 = (ulonglong *)plVar13[4];
      if (puVar16 == (ulonglong *)0x0) {
        log_InlineLogERROR(&DAT_141583310);
        puVar16 = (ulonglong *)(ulonglong)(uVar17 + 1);
      }
      else {
        local_4a8 = puVar16;
        local_4a0 = FUN_141577530(param_1,(longlong)puVar16);
        plVar2 = local_4c8;
        if (local_4d0 != (longlong *)0x0) {
          uVar12 = local_4c0 - (longlong)local_4d0 >> 4;
        }
        if ((ulonglong)((longlong)local_4c8 - (longlong)local_4d0 >> 4) < uVar12) {
          FUN_141575ee0(local_4c8,1,&local_4a8);
          local_4c8 = plVar2 + 2;
        }
        else {
          if (local_4c8 < local_4d0) {
            _invalid_parameter_noinfo();
          }
          plVar5 = local_4d0;
          puVar16 = local_4e8[0];
          local_4b8 = local_4e8[0];
          plStack_4b0 = plVar2;
          if (((longlong)local_4c8 - (longlong)local_4d0 & 0xfffffffffffffff0U) == 0) {
            lVar9 = 0;
          }
          else {
            if (local_4c8 < local_4d0) {
              _invalid_parameter_noinfo();
            }
            if ((puVar16 == (ulonglong *)0x0) || (puVar16 != local_4e8[0])) {
              _invalid_parameter_noinfo();
            }
            lVar9 = (longlong)plVar2 - (longlong)plVar5 >> 4;
          }
          uVar10 = 0;
          local_498 = local_4b8;
          plStack_490 = plStack_4b0;
          FUN_14157a3e0((longlong)local_4e8,(longlong)&local_498,1,&local_4a8);
          plVar2 = local_4d0;
          if (local_4c8 < local_4d0) {
            _invalid_parameter_noinfo();
          }
          puVar16 = local_4e8[0];
          if (local_4e8[0] == (ulonglong *)0x0) {
            _invalid_parameter_noinfo();
            uVar12 = uVar10;
          }
          else {
            uVar12 = *local_4e8[0];
          }
          if (plVar2 + lVar9 * 2 <= *(longlong **)(uVar12 + 0x20)) {
            if (puVar16 != (ulonglong *)0x0) {
              uVar10 = *puVar16;
            }
            if (*(longlong **)(uVar10 + 0x18) <= plVar2 + lVar9 * 2) {
              uVar10 = (ulonglong)local_res18;
              goto LAB_14157d00b;
            }
          }
          _invalid_parameter_noinfo();
          uVar10 = (ulonglong)local_res18;
        }
LAB_14157d00b:
        puVar16 = (ulonglong *)(ulonglong)(uVar17 + 1);
      }
    }
    if (puVar4 == (ulonglong *)0x0) {
      _invalid_parameter_noinfo();
    }
    if (*(char *)((longlong)plVar13 + 0x29) == '\0') {
      plVar2 = (longlong *)plVar13[2];
      if (*(char *)((longlong)plVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x29);
        plVar13 = plVar2;
        plVar2 = (longlong *)*plVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar2 + 0x29);
          plVar13 = plVar2;
          plVar2 = (longlong *)*plVar2;
        }
      }
      else {
        cVar1 = *(char *)(plVar13[1] + 0x29);
        plVar5 = (longlong *)plVar13[1];
        plVar2 = plVar13;
        while ((plVar13 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar13[2]))) {
          cVar1 = *(char *)(plVar13[1] + 0x29);
          plVar5 = (longlong *)plVar13[1];
          plVar2 = plVar13;
        }
      }
    }
    else {
      _invalid_parameter_noinfo();
    }
  } while( true );
}




void FUN_14157d440(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  __time64_t _Var12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  puVar16 = (undefined8 *)(*(undefined8 **)(param_1 + 0x80))[1];
  cVar2 = *(char *)((longlong)puVar16 + 0x29);
  puVar17 = *(undefined8 **)(param_1 + 0x80);
  while (cVar2 == '\0') {
    if (*(uint *)(puVar16 + 3) < param_2) {
      puVar8 = (undefined8 *)puVar16[2];
      puVar16 = puVar17;
    }
    else {
      puVar8 = (undefined8 *)*puVar16;
    }
    puVar17 = puVar16;
    puVar16 = puVar8;
    cVar2 = *(char *)((longlong)puVar8 + 0x29);
  }
  local_a0 = puVar17;
  local_a8 = *plVar1;
  puVar16 = *(undefined8 **)(param_1 + 0x80);
  if (*plVar1 == 0) {
    _invalid_parameter_noinfo();
  }
  if ((puVar17 == puVar16) || (param_2 < *(uint *)(puVar17 + 3))) {
    local_90 = *(undefined8 *)(param_1 + 0x80);
    local_98 = *plVar1;
    plVar18 = &local_98;
  }
  else {
    plVar18 = &local_a8;
  }
  plVar3 = (longlong *)*plVar18;
  lVar11 = plVar18[1];
  lVar9 = *(longlong *)(param_1 + 0x80);
  if ((plVar3 == (longlong *)0x0) || (plVar3 != (longlong *)*plVar1)) {
    _invalid_parameter_noinfo();
  }
  if (lVar11 != lVar9) {
    if (plVar3 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar3;
    }
    if (lVar11 == *(longlong *)(lVar9 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    plVar3 = *(longlong **)(lVar11 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar10 = FUN_141577390(param_1,plVar3);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x40))(plVar10,uVar4);
      }
      plVar10 = (longlong *)(param_1 + 0x90);
      puVar16 = *(undefined8 **)(param_1 + 0xc0);
      if ((ulonglong)((longlong)puVar16 + *(longlong *)(param_1 + 200)) < puVar16) {
        _invalid_parameter_noinfo();
      }
      plVar14 = (longlong *)*plVar10;
      local_b8._0_4_ = SUB84(plVar14,0);
      local_b8._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      uVar4 = (undefined4)local_b8;
      uVar19 = local_b8._4_4_;
      local_b8 = plVar14;
      while( true ) {
        uVar15 = *(ulonglong *)(param_1 + 0xc0) + *(longlong *)(param_1 + 200);
        if (uVar15 < *(ulonglong *)(param_1 + 0xc0)) {
          _invalid_parameter_noinfo();
        }
        if ((plVar14 == (longlong *)0x0) || (plVar14 != (longlong *)*plVar10)) {
          _invalid_parameter_noinfo();
        }
        if (puVar16 == (undefined8 *)uVar15) break;
        uVar15 = (ulonglong)puVar16 >> 1;
        if (plVar14 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar14;
        }
        if ((ulonglong)(*(longlong *)(lVar11 + 0x38) + *(longlong *)(lVar11 + 0x30)) <= puVar16) {
          _invalid_parameter_noinfo();
        }
        if (plVar14 == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar14;
        }
        if (*(ulonglong *)(lVar11 + 0x28) <= uVar15) {
          if (plVar14 == (longlong *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar14;
          }
          uVar15 = uVar15 - *(longlong *)(lVar11 + 0x28);
        }
        if (plVar14 == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar14;
        }
        if (*(longlong **)(*(longlong *)(*(longlong *)(lVar11 + 0x20) + uVar15 * 8) + (ulonglong)((uint)puVar16 & 1) * 8) == plVar3) {
          local_88 = (longlong *)CONCAT44(uVar19,uVar4);
          puStack_80 = puVar16;
          if (plVar14 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar14;
          }
          uVar15 = (longlong)puVar16 + 1;
          if ((ulonglong)(*(longlong *)(lVar11 + 0x38) + *(longlong *)(lVar11 + 0x30)) < uVar15) {
LAB_14157d6c9:
            _invalid_parameter_noinfo();
          }
          else {
            if (plVar14 == (longlong *)0x0) {
              lVar11 = 0;
            }
            else {
              lVar11 = *plVar14;
            }
            if (uVar15 < *(ulonglong *)(lVar11 + 0x30)) goto LAB_14157d6c9;
          }
          local_78 = local_88;
          puStack_80 = (undefined8 *)uVar15;
          uStack_70 = uVar15;
          local_68 = uVar4;
          uStack_64 = uVar19;
          uStack_60 = (ulonglong)puVar16;
          FUN_14157bfc0(plVar10,&local_58,(undefined8 *)&local_68,&local_78);
          local_b8 = local_58;
          plVar14 = local_58;
          puVar16 = puStack_50;
          uVar4 = (undefined4)local_58;
          uVar19 = local_58._4_4_;
        }
        else {
          if (plVar14 == (longlong *)0x0) {
            _invalid_parameter_noinfo();
            lVar11 = 0;
          }
          else {
            lVar11 = *plVar14;
          }
          if ((ulonglong)(*(longlong *)(lVar11 + 0x38) + *(longlong *)(lVar11 + 0x30)) <= puVar16) {
            _invalid_parameter_noinfo();
          }
          puVar16 = (undefined8 *)((longlong)puVar16 + 1);
          uVar4 = (undefined4)local_b8;
          uVar19 = local_b8._4_4_;
        }
      }
      local_58 = (longlong *)*plVar18;
      puStack_50 = (undefined8 *)plVar18[1];
      FUN_141579160(plVar1,(undefined8 *)&local_68,&local_58);
      uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
      puVar16 = *(undefined8 **)(param_1 + 0x38);
      cVar2 = *(char *)((longlong)puVar16[1] + 0x29);
      puVar17 = puVar16;
      puVar8 = (undefined8 *)puVar16[1];
      while (cVar2 == '\0') {
        if (*(uint *)(puVar8 + 3) < uVar5) {
          puVar13 = (undefined8 *)puVar8[2];
          puVar8 = puVar17;
        }
        else {
          if ((*(char *)((longlong)puVar16 + 0x29) != '\0') && (uVar5 < *(uint *)(puVar8 + 3))) {
            puVar16 = puVar8;
          }
          puVar13 = (undefined8 *)*puVar8;
        }
        puVar17 = puVar8;
        puVar8 = puVar13;
        cVar2 = *(char *)((longlong)puVar13 + 0x29);
      }
      if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
        puVar8 = (undefined8 *)*puVar16;
      }
      else {
        puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 8);
      }
      cVar2 = *(char *)((longlong)puVar8 + 0x29);
      while (cVar2 == '\0') {
        if (uVar5 < *(uint *)(puVar8 + 3)) {
          puVar13 = (undefined8 *)*puVar8;
          puVar16 = puVar8;
        }
        else {
          puVar13 = (undefined8 *)puVar8[2];
        }
        puVar8 = puVar13;
        cVar2 = *(char *)((longlong)puVar13 + 0x29);
      }
      plVar1 = *(longlong **)(param_1 + 8);
      puStack_b0 = puVar17;
      local_88 = plVar1;
      puStack_80 = puVar17;
      do {
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (puVar17 == puVar16) goto LAB_14157d96f;
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar1;
        }
        if (puVar17 == *(undefined8 **)(lVar11 + 0x30)) {
          _invalid_parameter_noinfo();
        }
        plVar18 = (longlong *)puVar17[4];
        if (plVar18 == (longlong *)0x0) {
          log_InlineLogERROR(&DAT_141583310);
        }
        else {
          iVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          iVar7 = (**(code **)(*plVar18 + 8))(plVar18);
          if (iVar7 == iVar6) {
            puStack_50 = puStack_b0;
            local_58 = plVar1;
            FUN_1415776a0((undefined8 *)(param_1 + 8),(undefined8 *)&local_68,&local_58);
LAB_14157d96f:
            _Var12 = _time64((__time64_t *)0x0);
            *(__time64_t *)(param_1 + 0xd0) = _Var12;
            (**(code **)(*(longlong *)plVar3[1] + 0x40))((longlong *)plVar3[1],0);
            (**(code **)*plVar3)(plVar3,1);
            return;
          }
        }
        if (plVar1 == (longlong *)0x0) {
          _invalid_parameter_noinfo();
        }
        if (*(char *)((longlong)puVar17 + 0x29) == '\0') {
          puVar8 = (undefined8 *)puVar17[2];
          if (*(char *)((longlong)puVar8 + 0x29) == '\0') {
            cVar2 = *(char *)((longlong)*puVar8 + 0x29);
            puVar17 = puVar8;
            puVar8 = (undefined8 *)*puVar8;
            while (puStack_b0 = puVar17, cVar2 == '\0') {
              cVar2 = *(char *)((longlong)*puVar8 + 0x29);
              puVar17 = puVar8;
              puVar8 = (undefined8 *)*puVar8;
            }
          }
          else {
            cVar2 = *(char *)((longlong)puVar17[1] + 0x29);
            puVar13 = (undefined8 *)puVar17[1];
            puVar8 = puVar17;
            while ((puVar17 = puVar13, puStack_b0 = puVar17, cVar2 == '\0' && (puVar8 == (undefined8 *)puVar17[2]))) {
              cVar2 = *(char *)((longlong)puVar17[1] + 0x29);
              puVar13 = (undefined8 *)puVar17[1];
              puVar8 = puVar17;
            }
          }
        }
        else {
          _invalid_parameter_noinfo();
        }
      } while( true );
    }
    log_InlineLogERROR(&DAT_141583310);
  }
  return;
}




undefined1 * FUN_14157d9c0(longlong *param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  IStringManager *pIVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong extraout_RAX;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_res20;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong *local_4b8 [2];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  longlong local_498 [2];
  undefined8 local_488;
  CMsg local_478 [1088];
  
  local_488 = 0xfffffffffffffffe;
  if (param_4 != '\x01') {
    return &stack0x00000000;
  }
  if (param_5 == 1) {
    puVar9 = (undefined1 *)FUN_14157c810(param_1,param_2,'\x01',param_3);
    return puVar9;
  }
  lVar10 = (**(code **)(*(longlong *)param_1[9] + 0x30))();
  if (lVar10 < 5) {
    pIVar11 = theInstance();
    lVar10 = *(longlong *)param_1[9];
    uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_PIGEON_URGENT_ERR_NOEMONEY");
    uVar13 = (**(code **)(lVar10 + 8))(param_1[9],param_2,uVar12,0xff0000,0x7d5);
    return (undefined1 *)(uVar13 & 0xffffffffffffff00);
  }
  local_4b8[0] = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,param_3);
  if (local_4b8[0] == (longlong *)0x0) {
    pIVar11 = theInstance();
    lVar10 = *(longlong *)param_1[9];
    uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_PIGEON_URGENT_SENT_ALREADY");
    uVar13 = (**(code **)(lVar10 + 8))(param_1[9],param_2,uVar12,0xff0000,0x7d5);
    return (undefined1 *)(uVar13 & 0xffffffffffffff00);
  }
  plVar2 = param_1 + 0x12;
  uVar13 = param_1[0x18];
  if (uVar13 + param_1[0x19] < uVar13) {
    _invalid_parameter_noinfo();
  }
  plVar16 = (longlong *)*plVar2;
  local_res20 = 0;
  local_4d8 = plVar16;
  uStack_4d0 = uVar13;
  local_4c8 = plVar16;
  uStack_4c0 = uVar13;
  do {
    uVar1 = uStack_4c0;
    uVar3 = param_1[0x18] + param_1[0x19];
    if (uVar3 < (ulonglong)param_1[0x18]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar16 == (longlong *)0x0) || (plVar16 != (longlong *)*plVar2)) {
      _invalid_parameter_noinfo();
    }
    if (uVar1 == uVar3) {
      log_InlineLogERROR(&DAT_141583310);
      return (undefined1 *)(extraout_RAX & 0xffffffffffffff00);
    }
    plVar14 = (longlong *)FUN_141572850(&local_4c8);
    if ((longlong *)*plVar14 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)*plVar14 + 8))();
      if (iVar6 == param_3) break;
      local_res20 = local_res20 + 1;
    }
    if (plVar16 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar16;
    }
    if ((ulonglong)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar10 + 0x30)) <= uVar1) {
      _invalid_parameter_noinfo();
    }
    uStack_4c0 = uVar1 + 1;
  } while( true );
  cVar4 = (**(code **)(*(longlong *)param_1[9] + 0x40))((longlong *)param_1[9],param_2,5,0x25a,1);
  if (cVar4 == '\0') {
    pIVar11 = theInstance();
    lVar10 = *(longlong *)param_1[9];
    uVar12 = (*(code *)**(undefined8 **)pIVar11)(pIVar11,"STR_PIGEON_URGENT_ERR_NOEMONEY");
    uVar13 = (**(code **)(lVar10 + 8))(param_1[9],param_2,uVar12,0xff0000,0x7d5);
    return (undefined1 *)(uVar13 & 0xffffffffffffff00);
  }
  if (plVar16 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
  }
  uVar3 = uStack_4c0;
  plVar14 = local_4c8;
  plVar17 = local_4b8[0];
  if (uVar1 != uVar13) {
    if (plVar16 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar16;
    }
    if (uVar1 <= *(ulonglong *)(lVar10 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uStack_4c0 = uVar1 - 1;
    plVar15 = (longlong *)FUN_141572850(&local_4c8);
    plVar17 = local_4b8[0];
    plVar15 = (longlong *)*plVar15;
    if (plVar15 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
      plVar17 = local_4b8[0];
    }
    else {
      lVar10 = *plVar15;
      uVar8 = (**(code **)(*local_4b8[0] + 0x10))(local_4b8[0]);
      (**(code **)(lVar10 + 0x40))(plVar15,uVar8);
    }
  }
  if (4 >= local_res20) {
    plVar16 = (longlong *)FUN_141572850(&local_4d8);
    plVar16 = (longlong *)*plVar16;
    if (plVar16 == (longlong *)0x0) {
      log_InlineLogERROR(&DAT_141583310);
    }
    else {
      iVar6 = (**(code **)(*plVar16 + 8))(plVar16);
      iVar7 = (**(code **)(*plVar17 + 8))(plVar17);
      if (iVar6 != iVar7) {
        lVar10 = *plVar17;
        uVar8 = (**(code **)(*plVar16 + 8))(plVar16);
        (**(code **)(lVar10 + 0x40))(plVar17,uVar8);
      }
    }
    local_4d8 = plVar14;
    uStack_4d0 = uVar3;
    FUN_14157c610(plVar2,&local_4a8,&local_4d8);
    FUN_14157a140((longlong)plVar2,local_4b8);
    goto LAB_14157e053;
  }
  local_4d8 = plVar14;
  uStack_4d0 = uVar3;
  lVar10 = 5;
  uVar13 = uVar3;
  do {
    if (plVar14 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar14;
    }
    if (uVar13 <= *(ulonglong *)(lVar19 + 0x30)) {
      _invalid_parameter_noinfo();
    }
    uVar13 = uVar13 - 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  local_4c8 = local_4d8;
  uStack_4d0 = uVar13;
  uStack_4c0 = uVar13;
  plVar15 = (longlong *)FUN_141572850(&local_4d8);
  plVar15 = (longlong *)*plVar15;
  if (plVar15 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141583310);
  }
  else {
    lVar10 = *plVar15;
    uVar8 = (**(code **)(*plVar17 + 8))(plVar17);
    (**(code **)(lVar10 + 0x40))(plVar15,uVar8);
  }
  plVar17 = (longlong *)FUN_141572850(&local_4c8);
  plVar15 = local_4b8[0];
  plVar17 = (longlong *)*plVar17;
  if (plVar17 == (longlong *)0x0) {
    log_InlineLogERROR(&DAT_141583310);
  }
  else {
    lVar10 = *local_4b8[0];
    uVar8 = (**(code **)(*plVar17 + 8))(plVar17);
    (**(code **)(lVar10 + 0x40))(plVar15,uVar8);
  }
  local_4d8 = plVar14;
  uStack_4d0 = uVar3;
  if (plVar16 == (longlong *)0x0) {
    _invalid_parameter_noinfo();
    lVar10 = 0;
  }
  else {
    lVar10 = *plVar16;
  }
  uVar1 = uVar1 + 1;
  if ((ulonglong)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar10 + 0x30)) < uVar1) {
LAB_14157dec8:
    _invalid_parameter_noinfo();
  }
  else {
    if (plVar16 == (longlong *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar16;
    }
    if (uVar1 < *(ulonglong *)(lVar10 + 0x30)) goto LAB_14157dec8;
  }
  local_4a8 = plVar14;
  uStack_4a0 = uVar3;
  uStack_4d0 = uVar1;
  FUN_14157bfc0(plVar2,local_498,&local_4a8,&local_4d8);
  uVar13 = param_1[0x18];
  if (uVar13 + param_1[0x19] < uVar13) {
    _invalid_parameter_noinfo();
  }
  plVar16 = (longlong *)*plVar2;
  local_4d8 = plVar16;
  uStack_4d0 = uVar13;
  local_4c8 = plVar16;
  uStack_4c0 = uVar13;
  while( true ) {
    uVar1 = uStack_4c0;
    uVar13 = param_1[0x18] + param_1[0x19];
    if (uVar13 < (ulonglong)param_1[0x18]) {
      _invalid_parameter_noinfo();
    }
    if ((plVar16 == (longlong *)0x0) || (plVar16 != (longlong *)*plVar2)) {
      _invalid_parameter_noinfo();
    }
    if (uVar1 == uVar13) break;
    puVar18 = (undefined8 *)FUN_141572850(&local_4c8);
    plVar14 = (longlong *)*puVar18;
    iVar6 = (**(code **)(*plVar17 + 8))(plVar17);
    iVar7 = (**(code **)(*plVar14 + 8))(plVar14);
    if (iVar7 == iVar6) break;
    if (plVar16 == (longlong *)0x0) {
      _invalid_parameter_noinfo();
      lVar10 = 0;
    }
    else {
      lVar10 = *plVar16;
    }
    if ((ulonglong)(*(longlong *)(lVar10 + 0x38) + *(longlong *)(lVar10 + 0x30)) <= uVar1) {
      _invalid_parameter_noinfo();
    }
    uStack_4c0 = uVar1 + 1;
  }
  uVar13 = param_1[0x18] + param_1[0x19];
  if (uVar13 < (ulonglong)param_1[0x18]) {
    _invalid_parameter_noinfo();
  }
  if ((plVar16 == (longlong *)0x0) || (plVar16 != (longlong *)*plVar2)) {
    _invalid_parameter_noinfo();
  }
  if (uVar1 == uVar13) {
    uVar13 = param_1[0x18];
    if (uVar13 + param_1[0x19] < uVar13) {
      _invalid_parameter_noinfo();
    }
    plVar16 = (longlong *)*plVar2;
    local_4d8._0_4_ = SUB84(plVar16,0);
    local_4d8._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
    uStack_4d0._0_4_ = (undefined4)uVar13;
    uStack_4d0._4_4_ = (undefined4)(uVar13 >> 0x20);
    uVar8 = (undefined4)local_4d8;
    uVar20 = local_4d8._4_4_;
    uVar21 = (undefined4)uStack_4d0;
    uVar22 = uStack_4d0._4_4_;
    local_4d8 = plVar16;
    uStack_4d0 = uVar13;
  }
  else {
    uVar8 = (undefined4)local_4c8;
    uVar20 = local_4c8._4_4_;
    uVar21 = (undefined4)uStack_4c0;
    uVar22 = uStack_4c0._4_4_;
  }
  local_4a8 = (longlong *)CONCAT44(uVar20,uVar8);
  uStack_4a0 = CONCAT44(uVar22,uVar21);
  FUN_14157b980(plVar2,local_498,&local_4a8,local_4b8);
LAB_14157e053:
  plVar2 = local_4b8[0];
  lVar10 = *local_4b8[0];
  uVar5 = (**(code **)(lVar10 + 0x28))(local_4b8[0]);
  (**(code **)(lVar10 + 0x38))(plVar2,uVar5 + 5);
  FUN_14157e350(local_478);
  if (4 < local_res20) {
    iVar6 = local_res20 - 4;
  }
  else {
    iVar6 = 1;
  }
  uVar13 = FUN_14157e410((longlong)local_478,5,iVar6);
  if ((char)uVar13 != '\0') {
    (*(code *)**(undefined8 **)param_1[9])((undefined8 *)param_1[9],param_2,local_478);
  }
  uVar12 = FUN_14157e3d0((undefined8 *)local_478);
  return (undefined1 *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
}




CMsg * FUN_14157e130(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  return param_1;
}




void FUN_14157e160(undefined8 *param_1)

{
  *param_1 = tq::CMsg::vftable;
  return;
}




void FUN_14157e170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014157e177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(void* pInfo) error");
  return;
}




void FUN_14157e180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014157e187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor) error");
  return;
}




void FUN_14157e190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014157e197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  log_InlineLogERROR("tq::CMsg::Process(OBJID idActor, void* pInfo) error");
  return;
}




undefined8 * FUN_14157e1a0(undefined8 *param_1,byte param_2)

{
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14157e1d0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = pigeon::CMsgLogin::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14157e220(undefined8 *param_1)

{
  *param_1 = pigeon::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14157e290(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x3ea;
}




void FUN_14157e2c0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14157c7c0();
  (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
  return;
}




undefined8 * FUN_14157e300(undefined8 *param_1,byte param_2)

{
  *param_1 = pigeon::CMsgLogin::vftable;
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14157e350(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = pigeon::CMsgPigeon::vftable;
  tq::CStringPacker::CStringPacker((CStringPacker *)(param_1 + 0x410));
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  tq::CStringPacker::SetBuf((CStringPacker *)(param_1 + 0x410),(char *)(param_1 + 0x14),0x3f1,true);
  return param_1;
}




void FUN_14157e3d0(undefined8 *param_1)

{
  *param_1 = pigeon::CMsgPigeon::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  return;
}




ulonglong FUN_14157e410(longlong param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(char *)(*(longlong *)(param_1 + 0x408) + 4) = (char)param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x802;
  uVar2 = tq::CStringPacker::GetSize((CStringPacker *)(param_1 + 0x410));
  sVar1 = (short)uVar2 + 0xf;
  **(short **)(param_1 + 0x408) = sVar1;
  return CONCAT71((int7)(CONCAT62((int6)(CONCAT44(extraout_var,uVar2) >> 0x10),sVar1) >> 8),1);
}




bool FUN_14157e470(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x802;
}




/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14157e4a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  undefined8 ***pppuVar5;
  undefined1 auStackY_268 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_230 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_208 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1e0 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1b8 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_190 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_140 [8];
  undefined8 **local_138 [3];
  ulonglong local_120;
  char local_118;
  undefined1 local_117 [255];
  ulonglong local_18;
  
  local_18 = DAT_14158b2e8 ^ (ulonglong)auStackY_268;
  plVar3 = (longlong *)FUN_14157c7c0();
  lVar1 = *(longlong *)(param_1 + 0x408);
  cVar2 = *(char *)(lVar1 + 4);
  if (cVar2 == '\x01') {
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(undefined4 *)(lVar1 + 8));
  }
  else if (cVar2 == '\x02') {
    (**(code **)(*plVar3 + 0x48))(plVar3,param_2,*(undefined4 *)(lVar1 + 8));
  }
  else if (cVar2 == '\x03') {
    cVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if (cVar2 != '\0') {
        local_118 = '\0';
        memset(local_117,0,0xff);
        tq::CStringPacker::GetString((CStringPacker *)(param_1 + 0x410),0,&local_118,0x100);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_230,"");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_190,"\r");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (local_1e0,&local_118);
        FUN_141572400(plVar3,local_140,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_1e0,
                      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_190,
                      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_230);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1e0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_190);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_230);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1b8,"");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_208,"\n");
        pbVar4 = FUN_141572400(plVar3,local_168,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_140,
                               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_208,
                               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)local_1b8);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
                  (local_140,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)pbVar4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_168);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_208);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1b8);
        pppuVar5 = local_138;
        if (0xf < local_120) {
          pppuVar5 = (undefined8 ***)local_138[0];
        }
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x408) + 5),pppuVar5);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_140);
      }
    }
  }
  else if (cVar2 == '\x04') {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,*(undefined4 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 5));
  }
  else if (cVar2 == '\x05') {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,*(undefined4 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 5));
  }
  return;
}




undefined8 * FUN_14157e760(undefined8 *param_1,uint param_2)

{
  *param_1 = pigeon::CMsgPigeon::vftable;
  tq::CStringPacker::~CStringPacker((CStringPacker *)(param_1 + 0x82));
  *param_1 = tq::CMsg::vftable;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}




CMsg * FUN_14157e7c0(CMsg *param_1)

{
  *(undefined ***)param_1 = tq::CMsg::vftable;
  tq::CMsg::Init(param_1);
  *(undefined ***)param_1 = pigeon::CMsgPigeonQue::vftable;
  tq::CMsg::Init(param_1);
  *(CMsg **)(param_1 + 0x408) = param_1 + 8;
  return param_1;
}




void FUN_14157e810(undefined8 *param_1)

{
  *param_1 = pigeon::CMsgPigeonQue::vftable;
  *param_1 = tq::CMsg::vftable;
  return;
}




bool FUN_14157e840(CMsg *param_1,char *param_2,ushort param_3)

{
  bool bVar1;
  
  bVar1 = tq::CMsg::Create(param_1,param_2,param_3);
  if (!bVar1) {
    return false;
  }
  return *(short *)(param_1 + 10) == 0x803;
}




undefined8 FUN_14157e870(longlong param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = param_2;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 8) = param_3;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 10) = 0;
  *(undefined2 *)(*(longlong *)(param_1 + 0x408) + 2) = 0x803;
  puVar1 = *(undefined2 **)(param_1 + 0x408);
  *puVar1 = 0xc;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}




longlong FUN_14157e8c0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  
  if ((int)(0x400 - (uint)*(ushort *)(param_1 + 8)) < 0x8c) {
    lVar5 = (ulonglong)(byte)(*(ushort *)(param_1 + 8) >> 8) << 8;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x408);
    lVar7 = (longlong)*(short *)(lVar5 + 10) * 0x8c;
    uVar4 = (**(code **)(*param_2 + 8))(param_2);
    *(undefined4 *)(lVar7 + 0xc + lVar5) = uVar4;
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined4 *)(lVar7 + 0x14 + lVar5) = uVar4;
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = param_3;
    *(undefined4 *)(lVar7 + 0x90 + lVar5) = param_4;
    *(undefined1 *)(lVar7 + 0x94 + lVar5) = param_5;
    *(uint *)(lVar7 + 0x28 + lVar5) = (uint)uVar2;
    pcVar6 = (char *)(**(code **)(*param_2 + 0x20))(param_2);
    tq::StrCopy((char *)(lVar7 + 0x18 + lVar5),pcVar6,0x10);
    pcVar6 = (char *)(**(code **)(*param_2 + 0x30))(param_2);
    tq::StrCopy((char *)(lVar7 + 0x2c + lVar5),pcVar6,100);
    psVar1 = (short *)(*(longlong *)(param_1 + 0x408) + 10);
    *psVar1 = *psVar1 + 1;
    sVar3 = ((*(short **)(param_1 + 0x408))[5] + -1) * 0x8c + 0x98;
    **(short **)(param_1 + 0x408) = sVar3;
    lVar5 = CONCAT71((uint7)(byte)((ushort)sVar3 >> 8),1);
  }
  return lVar5;
}




undefined8 * FUN_14157e9f0(undefined8 *param_1,byte param_2)

{
  *param_1 = pigeon::CMsgPigeonQue::vftable;
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
  
  local_res10 = _decode_pointer(DAT_14158ba00);
  if (local_res10 == -1) {
    p_Var1 = _onexit(_Func);
  }
  else {
    _lock(8);
    local_res10 = _decode_pointer(DAT_14158ba00);
    local_res18[0] = _decode_pointer(DAT_14158b9f8);
    uVar2 = _encode_pointer(_Func);
    p_Var1 = (_onexit_t)__dllonexit(uVar2,&local_res10,local_res18);
    DAT_14158ba00 = _encode_pointer(local_res10);
    DAT_14158b9f8 = _encode_pointer(local_res18[0]);
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




undefined8 FUN_14157ec6c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  if ((_StackCookie == DAT_14158b2e8) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}




bool FUN_14157ed4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = _malloc_crt(0x100);
  DAT_14158b9f8 = _encode_pointer(puVar1);
  DAT_14158ba00 = DAT_14158b9f8;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    FUN_14157f448();
    atexit(FUN_14157f480);
    atexit((_func_5014 *)&LAB_14157f43c);
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
    if (DAT_14158b454 < 1) {
      return 0;
    }
    DAT_14158b454 = DAT_14158b454 + -1;
    while( true ) {
      pvVar6 = (void *)0x0;
      LOCK();
      bVar13 = DAT_14158b9e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14158b9e8;
        pvVar3 = DAT_14158b9e8;
      }
      DAT_14158b9e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14157ee26;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14157ee26:
    if (DAT_14158b9e0 == 2) {
      _Memory = (longlong *)_decode_pointer(DAT_14158ba00);
      if (_Memory != (longlong *)0x0) {
        plVar7 = (longlong *)_decode_pointer(DAT_14158b9f8);
        plVar8 = plVar7;
        while (plVar7 = plVar7 + -1, _Memory <= plVar7) {
          if ((*plVar7 != 0) && (lVar9 = _encoded_null(), *plVar7 != lVar9)) {
            pcVar10 = (code *)_decode_pointer(*plVar7);
            lVar9 = _encoded_null();
            *plVar7 = lVar9;
            (*pcVar10)();
            plVar11 = (longlong *)_decode_pointer(DAT_14158ba00);
            plVar12 = (longlong *)_decode_pointer(DAT_14158b9f8);
            if ((_Memory != plVar11) || (plVar8 != plVar12)) {
              plVar7 = plVar12;
              _Memory = plVar11;
              plVar8 = plVar12;
            }
          }
        }
        free(_Memory);
        DAT_14158b9f8 = _encoded_null();
        DAT_14158ba00 = DAT_14158b9f8;
      }
      DAT_14158b9e0 = 0;
      if (!bVar2) {
        LOCK();
        DAT_14158b9e8 = (void *)0x0;
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
      bVar13 = DAT_14158b9e8 == (void *)0x0;
      pvVar3 = pvVar1;
      if (!bVar13) {
        pvVar6 = DAT_14158b9e8;
        pvVar3 = DAT_14158b9e8;
      }
      DAT_14158b9e8 = pvVar3;
      UNLOCK();
      if (bVar13) goto LAB_14157ef4f;
      if (pvVar6 == pvVar1) break;
      Sleep(1000);
    }
    bVar2 = true;
LAB_14157ef4f:
    if (DAT_14158b9e0 == 0) {
      DAT_14158b9e0 = 1;
      iVar4 = _initterm_e(&DAT_141583288,&DAT_141583298);
      if (iVar4 != 0) {
        return 0;
      }
      _initterm(&DAT_141583278,&DAT_141583280);
      DAT_14158b9e0 = 2;
    }
    else {
      _amsg_exit(0x1f);
    }
    if (!bVar2) {
      LOCK();
      DAT_14158b9e8 = (void *)0x0;
      UNLOCK();
    }
    if ((DAT_14158b9f0 != (code *)0x0) && (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&DAT_14158b9f0), BVar5 != 0)) {
      (*DAT_14158b9f0)(param_1,2,param_3);
    }
    DAT_14158b454 = DAT_14158b454 + 1;
  }
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x00014157f0c8) */
/* WARNING: Removing unreachable block (ram,0x00014157f05f) */
/* WARNING: Removing unreachable block (ram,0x00014157f103) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __DllMainCRTStartup
   
   Library: Visual Studio 2008 Release */

uint __DllMainCRTStartup(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((param_2 == 0) && (DAT_14158b454 == 0)) {
    uVar2 = 0;
  }
  else {
    _DAT_14158b300 = param_2;
    if (((param_2 == 1) || (param_2 == 2)) && (uVar1 = _CRT_INIT(param_1,param_2,param_3), (int)uVar1 == 0)) {
      _DAT_14158b300 = 0xffffffff;
      return 0;
    }
    uVar1 = FUN_141571300();
    uVar2 = (uint)uVar1;
    if ((param_2 == 1) && (uVar2 == 0)) {
      FUN_141571300();
      _CRT_INIT(param_1,0,param_3);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      uVar1 = _CRT_INIT(param_1,param_2,param_3);
      uVar2 = -(uint)((int)uVar1 != 0) & uVar2;
    }
  }
  _DAT_14158b300 = 0xffffffff;
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




undefined8 FUN_14157f180(undefined8 *param_1)

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
  RtlCaptureContext(&DAT_14158b500);
  local_30 = DAT_14158b5f8;
  local_38 = RtlLookupFunctionEntry(DAT_14158b5f8,&local_28,(PUNWIND_HISTORY_TABLE)0x0);
  if (local_38 == (PRUNTIME_FUNCTION)0x0) {
    _DAT_14158b598 = local_res8;
    DAT_14158b5f8 = unaff_retaddr;
  }
  else {
    RtlVirtualUnwind(0,local_28,local_30,local_38,(PCONTEXT)&DAT_14158b500,&local_48,&local_40,(PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  _DAT_14158b470 = DAT_14158b5f8;
  _DAT_14158b580 = local_res8[0];
  _DAT_14158b460 = 0xc0000409;
  _DAT_14158b464 = 1;
  local_20 = DAT_14158b2e8;
  local_18 = DAT_14158b2f0;
  DAT_14158b4f8 = IsDebuggerPresent();
  __crt_debugger_hook(1);
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_141584f48);
  if (DAT_14158b4f8 == 0) {
    __crt_debugger_hook(1);
  }
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000409);
  return;
}




void FUN_14157f448(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_1415856f8; puVar1 < &DAT_1415856f8; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}




void FUN_14157f480(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_141585708; puVar1 < &DAT_141585708; puVar1 = puVar1 + 1) {
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
  
  pImageBase = &IMAGE_DOS_HEADER_141570000;
  BVar1 = _ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_141570000);
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
  if (DAT_14158b2e8 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res8);
    _Var1 = local_res8;
    DVar2 = GetCurrentProcessId();
    DVar3 = GetCurrentThreadId();
    DVar4 = GetTickCount();
    QueryPerformanceCounter(&local_res10);
    DAT_14158b2e8 = (local_res10.QuadPart ^ (ulonglong)_Var1 ^ (ulonglong)DVar2 ^ (ulonglong)DVar3 ^ (ulonglong)DVar4) & 0xffffffffffff;
    if (DAT_14158b2e8 == 0x2b992ddfa232) {
      DAT_14158b2e8 = 0x2b992ddfa233;
    }
  }
  DAT_14158b2f0 = ~DAT_14158b2e8;
  return;
}




void Unwind_14157f6d0(undefined8 param_1,longlong param_2)

{
  FUN_141571050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14157f6f0(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157f710(undefined8 param_1,longlong param_2)

{
  FUN_14157e220((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x440));
  return;
}




void Unwind_14157f730(undefined8 param_1,longlong param_2)

{
  FUN_141571050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14157f750(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157f770(undefined8 param_1,longlong param_2)

{
  FUN_14157e220((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x440));
  return;
}




void Unwind_14157f790(undefined8 param_1,longlong param_2)

{
  FUN_141571050(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_14157f7b0(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157f7d0(undefined8 param_1,longlong param_2)

{
  FUN_14157e220((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x440));
  return;
}




undefined * Catch_14157f7f0(void)

{
  log_InlineLogCATCH_ERROR("Pigeon::pMsg->Process(idConsumer), idConsumer:%d, MsgType:%d @%s,%d");
  return &DAT_141571423;
}




void Unwind_14157f840(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x50));
  return;
}




void Unwind_14157f860(undefined8 param_1,longlong param_2)

{
  FUN_141571050(*(undefined8 **)(param_2 + 0x50));
  return;
}




void Unwind_14157f880(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x18));
  return;
}




void Unwind_14157f8a0(undefined8 param_1,longlong param_2)

{
  FUN_14157e220((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x440));
  return;
}




undefined8 Catch_14157f8c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x1415714d0;
}




undefined * Catch_14157f900(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_1415717dc;
}




void Unwind_14157f940(void)

{
  DAT_14158b318 = DAT_14158b318 & 0xfffffffe;
  return;
}




void Unwind_14157f960(void)

{
  DAT_14158b318 = DAT_14158b318 & 0xfffffffe;
  return;
}




void Unwind_14157f980(void)

{
  DAT_14158b318 = DAT_14158b318 & 0xfffffffe;
  return;
}




void Unwind_14157f9a0(void)

{
  DAT_14158b318 = DAT_14158b318 & 0xfffffffe;
  return;
}




void Unwind_14157f9c0(void)

{
  DAT_14158b318 = DAT_14158b318 & 0xfffffffe;
  return;
}




void Unwind_14157f9e0(undefined8 param_1,longlong param_2)

{
  FUN_1415718b0(*(void **)(param_2 + 0x58));
  return;
}




undefined8 Catch_14157fa00(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141571a87;
}




undefined8 Catch_14157fa40(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141571c19;
}




void Unwind_14157fa80(undefined8 param_1,longlong param_2)

{
  FUN_1415718b0(*(void **)(param_2 + 0x40));
  return;
}




undefined8 Catch_14157faa0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141571c92;
}




undefined * Catch_14157fae0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141571cb2;
}




undefined8 Catch_14157fb20(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x141571cc5;
}




void Unwind_14157fb60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fb80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fba0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fbc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fbe0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fc00(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fc20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fc40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fc60(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fc80(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fca0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fcc0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fce0(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fd00(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fd20(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fd40(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fd60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fd80(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fda0(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fdc0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fde0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fe00(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fe20(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fe40(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fe60(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fe80(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fea0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157fec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x30));
  }
  return;
}




undefined * Catch_14157fef0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14157269a;
}




void Unwind_14157ff30(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_14157ff50(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14157ff70(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_14157ff90(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x50));
  return;
}




void Unwind_14157ffb0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_14157ffd0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_14157fff0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141580010(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_141580030(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141580050(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x28));
  return;
}




void Unwind_141580070(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x50));
  return;
}




void Unwind_141580090(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x68));
  return;
}




void Unwind_1415800b0(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x50));
  return;
}




void Unwind_1415800d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415800f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580110(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580130(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580150(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580170(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580190(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415801b0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415801d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_1415801f0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580210(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580230(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580250(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580270(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x28));
  return;
}




void Unwind_141580290(void)

{
  FUN_1415721d0();
  return;
}




void Catch_1415802b0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415802d0(undefined8 param_1,longlong param_2)

{
  FUN_141574590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415802f0(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580310(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580330(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580350(void)

{
  FUN_1415721d0();
  return;
}




void Catch_141580370(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415803a0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415803c0(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415803e0(void)

{
  FUN_1415721d0();
  return;
}




void Catch_141580400(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141580430(void)

{
  FUN_1415721d0();
  return;
}




void Catch_141580450(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x20));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_141580480(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x48));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415804b0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415804d0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415804f0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580510(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141580530(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_141580550(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580570(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580590(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415805b0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415805d0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415805f0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580610(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580630(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580650(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580670(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580690(undefined8 param_1,longlong param_2)

{
  FUN_141574590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415806b0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1415806d0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_1415806f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141580710(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141580730(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580750(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580770(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580790(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415807b0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415807d0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415807f0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141580810(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141580830(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141580850(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141580870(undefined8 param_1,longlong param_2)

{
  std::exception::~exception(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_141580890(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x18));
  return;
}




void Unwind_1415808b0(undefined8 param_1,longlong param_2)

{
  FUN_141571d70(*(exception **)(param_2 + 0x40));
  return;
}




void Unwind_1415808d0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415808f0(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580910(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580930(undefined8 param_1,longlong param_2)

{
  FUN_1415764f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580950(undefined8 param_1,longlong param_2)

{
  FUN_1415764f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580970(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580990(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415809b0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415809d0(undefined8 param_1,longlong param_2)

{
  FUN_141574590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415809f0(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580a10(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580a30(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580a50(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580a70(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580a90(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580ab0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580ad0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_141580af0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141580b10(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141580b30(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x60));
  return;
}




void Unwind_141580b50(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580b70(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580b90(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580bb0(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580bd0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580bf0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580c10(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580c30(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_141580c50(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_141578978;
}




void Unwind_141580c90(undefined8 param_1,longlong param_2)

{
  FUN_14157e810((undefined8 *)(param_2 + 0x50));
  return;
}




void Unwind_141580cb0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x78));
  return;
}




void Unwind_141580cd0(undefined8 param_1,longlong param_2)

{
  std::exception::~exception((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141580cf0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x50));
  return;
}




void Unwind_141580d10(undefined8 param_1,longlong param_2)

{
  FUN_141571d70((exception *)(param_2 + 0x38));
  return;
}




void Unwind_141580d30(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580d50(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580d70(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580d90(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580db0(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580dd0(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580df0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580e10(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580e30(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580e50(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580e70(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580e90(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580eb0(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580ed0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141580ef0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580f10(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580f30(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580f50(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580f70(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580f90(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580fb0(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580fd0(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141580ff0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581010(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581030(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581050(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581070(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581090(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415810b0(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415810d0(undefined8 param_1,longlong param_2)

{
  FUN_141574590(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415810f0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141581110(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581130(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581150(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581170(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581190(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415811b0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415811d0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415811f0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581210(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581230(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581250(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Catch_141581270(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Catch_1415812a0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}




void Unwind_1415812c0(undefined8 param_1,longlong param_2)

{
  FUN_141579fa0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415812e0(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581300(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581320(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581340(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581360(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581380(undefined8 param_1,longlong param_2)

{
  FUN_141579fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415813a0(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415813c0(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415813e0(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581400(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581420(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581440(undefined8 param_1,longlong param_2)

{
  FUN_14157aab0((longlong *)(*(longlong *)(param_2 + 0x40) + 8));
  return;
}




void Unwind_141581460(undefined8 param_1,longlong param_2)

{
  FUN_14157aae0((longlong *)(*(longlong *)(param_2 + 0x40) + 0x50));
  return;
}




void Unwind_141581480(undefined8 param_1,longlong param_2)

{
  FUN_141577d40((undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x90));
  return;
}




void Unwind_1415814a0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0xe0));
  return;
}




void Unwind_1415814c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x108));
  return;
}




void Unwind_1415814e0(undefined8 param_1,longlong param_2)

{
  FUN_1415764f0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141581500(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141581520(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141581540(undefined8 param_1,longlong param_2)

{
  FUN_141579fd0(*(longlong **)(param_2 + 0x48));
  return;
}




void Unwind_141581560(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141581580(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1415815a0(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1415815c0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_1415815e0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x48));
  return;
}




void Unwind_141581600(undefined8 param_1,longlong param_2)

{
  FUN_141579fa0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141581620(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581640(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581660(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581680(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415816a0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




undefined * Catch_1415816c0(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return &DAT_14157ad52;
}




undefined8 Catch_141581700(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14157ae42;
}




void Unwind_141581740(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(param_2 + 0x50));
  return;
}




undefined8 Catch_141581760(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14157b7e8;
}




void Unwind_1415817a0(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_1415817c0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415817e0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581800(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581820(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581840(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581860(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581880(undefined8 param_1,longlong param_2)

{
  FUN_141579fa0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_1415818a0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415818c0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415818e0(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581900(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581920(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581940(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581960(undefined8 param_1,longlong param_2)

{
  FUN_141579fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141581980(undefined8 param_1,longlong param_2)

{
  FUN_14157aab0((longlong *)(*(longlong *)(param_2 + 0x50) + 8));
  return;
}




void Unwind_1415819a0(undefined8 param_1,longlong param_2)

{
  FUN_14157aae0((longlong *)(*(longlong *)(param_2 + 0x50) + 0x50));
  return;
}




void Unwind_1415819c0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_1415819e0(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141581a00(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141581a20(undefined8 param_1,longlong param_2)

{
  FUN_1415764f0(*(undefined8 **)(param_2 + 0x58));
  return;
}




void Unwind_141581a40(undefined8 param_1,longlong param_2)

{
  FUN_141577d40((undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x90));
  return;
}




void Unwind_141581a60(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 0xe0));
  return;
}




void Unwind_141581a80(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(*(longlong *)(param_2 + 0x50) + 0x108));
  return;
}




void Unwind_141581aa0(void)

{
  DAT_14158b450 = DAT_14158b450 & 0xfffffffe;
  return;
}




void Unwind_141581ac0(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(param_2 + 0x70));
  return;
}




void Unwind_141581ae0(void)

{
  FUN_1415721d0();
  return;
}




void Unwind_141581b00(undefined8 param_1,longlong param_2)

{
  FUN_141574590((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581b20(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581b40(undefined8 param_1,longlong param_2)

{
  FUN_14157a2a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581b60(undefined8 param_1,longlong param_2)

{
  FUN_14157e810((undefined8 *)(param_2 + 0xc0));
  return;
}




void Unwind_141581b80(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581ba0(undefined8 param_1,longlong param_2)

{
  FUN_141574590((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581bc0(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581be0(undefined8 param_1,longlong param_2)

{
  FUN_141574590((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581c00(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581c20(undefined8 param_1,longlong param_2)

{
  FUN_141574590((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581c40(undefined8 param_1,longlong param_2)

{
  FUN_1415752a0((undefined8 *)(param_2 + 0x30));
  return;
}




void Unwind_141581c60(undefined8 param_1,longlong param_2)

{
  FUN_141574590((undefined8 *)(param_2 + 0x30));
  return;
}




undefined8 Catch_141581c80(void)

{
  log_InlineLogCATCH_ERROR("SAFE_RELEASE @%s,%d");
  return 0x14157d9a1;
}




void Unwind_141581cc0(undefined8 param_1,longlong param_2)

{
  FUN_14157e3d0((undefined8 *)(param_2 + 0x90));
  return;
}




void Unwind_141581ce0(void)

{
  FUN_14157aab0(&DAT_14158b328);
  return;
}




void Unwind_141581d00(void)

{
  FUN_14157aae0(&DAT_14158b370);
  return;
}




void Unwind_141581d20(void)

{
  FUN_141577d40(&DAT_14158b3b0);
  return;
}




void Unwind_141581d50(void)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_14158b400);
  return;
}




void Unwind_141581d80(void)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_14158b428);
  return;
}




void Unwind_141581db0(undefined8 param_1,longlong param_2)

{
  FUN_1415764f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581dd0(undefined8 param_1,longlong param_2)

{
  FUN_1415752c0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581df0(undefined8 param_1,longlong param_2)

{
  FUN_141574380(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581e10(undefined8 param_1,longlong param_2)

{
  FUN_141579fd0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141581e30(undefined8 param_1,longlong param_2)

{
  FUN_141579610(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581e50(undefined8 param_1,longlong param_2)

{
  FUN_141577f30(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581e70(undefined8 param_1,longlong param_2)

{
  FUN_141576530(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581e90(undefined8 param_1,longlong param_2)

{
  FUN_141575300(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581eb0(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581ed0(undefined8 param_1,longlong param_2)

{
  FUN_141579fa0(*(longlong **)(param_2 + 0x40));
  return;
}




void Unwind_141581ef0(undefined8 param_1,longlong param_2)

{
  FUN_1415795f0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581f10(undefined8 param_1,longlong param_2)

{
  FUN_141577f10(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581f30(undefined8 param_1,longlong param_2)

{
  FUN_141576510(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581f50(undefined8 param_1,longlong param_2)

{
  FUN_1415752e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581f70(undefined8 param_1,longlong param_2)

{
  FUN_1415742e0(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581f90(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141581fb0(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x20));
  return;
}




undefined8 Catch_141581fd0(void)

{
  log_InlineLogCATCH_ERROR("Pigeon::CMsgLogin::Process(idActor), idActor:%d, MsgType:%d @%s,%d");
  return 0x14157e2eb;
}




void Unwind_141582020(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141582040(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141582060(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_141582080(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415820a0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_1415820c0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x38));
  return;
}




void Unwind_1415820e0(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xd8));
  return;
}




void Unwind_141582100(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x88));
  return;
}




void Unwind_141582120(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x128));
  return;
}




void Unwind_141582140(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0xb0));
  return;
}




void Unwind_141582160(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x60));
  return;
}




void Unwind_141582180(undefined8 param_1,longlong param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_2 + 0x100));
  return;
}




void Unwind_1415821a0(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_1415821c0(undefined8 param_1,longlong param_2)

{
  tq::CStringPacker::~CStringPacker((CStringPacker *)(*(longlong *)(param_2 + 0x40) + 0x410));
  return;
}




void Unwind_1415821e0(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void Unwind_141582200(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x20));
  return;
}




void Unwind_141582220(undefined8 param_1,longlong param_2)

{
  FUN_14157e160(*(undefined8 **)(param_2 + 0x40));
  return;
}




void FUN_141582238(void)

{
  _unlock(8);
  return;
}




void FUN_141582251(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ulong _ExceptionNum;
  
  *(_EXCEPTION_POINTERS **)(param_2 + 0x28) = param_1;
  _ExceptionNum = param_1->ExceptionRecord->ExceptionCode;
  *(ulong *)(param_2 + 0x24) = _ExceptionNum;
  __CppXcptFilter(_ExceptionNum,param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141582281(void)

{
  _DAT_14158b300 = 0xffffffff;
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




bool FUN_141582310(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141582350(void)

{
  _DAT_14158b320 = pigeon::CPigeonMgr::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_14158b428);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::~basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_14158b400);
  FUN_1415753c0(0x14158b3b0);
  operator_delete(DAT_14158b3b0);
  FUN_141579850((longlong *)&DAT_14158b370);
  operator_delete(DAT_14158b370);
  FUN_141579630((longlong *)&DAT_14158b328);
  operator_delete(DAT_14158b328);
  return;
}




/* DONE: decompiled=675 failed=0 total=767 */
